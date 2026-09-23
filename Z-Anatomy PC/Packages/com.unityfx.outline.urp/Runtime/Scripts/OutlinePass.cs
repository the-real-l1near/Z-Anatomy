// Copyright (C) 2019-2021 Alexander Bogarsukov. All rights reserved.
// See the LICENSE.md file in the project root for more information.

using System;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Rendering;
using UnityEngine.Rendering.RenderGraphModule;
using UnityEngine.Rendering.RendererUtils;
using UnityEngine.Rendering.Universal;

namespace UnityFx.Outline.URP
{
	internal class OutlinePass : ScriptableRenderPass
	{
		private const string _profilerTag = "OutlinePass";
		private static readonly ProfilingSampler _profilingSampler = new ProfilingSampler(_profilerTag);

		private readonly OutlineFeature _feature;
		private readonly List<OutlineRenderObject> _renderObjects = new List<OutlineRenderObject>();
		private readonly List<ShaderTagId> _shaderTagIdList = new List<ShaderTagId>();

		private ScriptableRenderer _renderer;

		private class PassData
		{
			internal OutlineResources OutlineResources;
			internal IOutlineSettings OutlineSettings;
			internal OutlineLayerCollection OutlineLayers;
			internal List<OutlineRenderObject> RenderObjects;
			internal TextureHandle ColorTarget;
			internal TextureHandle DepthTarget;
			internal RenderTextureDescriptor CameraTargetDescriptor;
			internal RendererListHandle RendererList;
			internal bool HasRendererList;
			internal bool AlphaTesting;
		}

		public OutlinePass(OutlineFeature feature, string[] shaderTags)
		{
			_feature = feature;

			if (shaderTags != null && shaderTags.Length > 0)
			{
				foreach (var passName in shaderTags)
				{
					_shaderTagIdList.Add(new ShaderTagId(passName));
				}
			}
			else
			{
				_shaderTagIdList.Add(new ShaderTagId("UniversalForward"));
				_shaderTagIdList.Add(new ShaderTagId("UniversalForwardOnly"));
				_shaderTagIdList.Add(new ShaderTagId("SRPDefaultUnlit"));
			}
		}

		public void Setup(ScriptableRenderer renderer)
		{
			_renderer = renderer;
		}

		public override void RecordRenderGraph(RenderGraph renderGraph, ContextContainer frameContext)
		{
			var outlineResources = _feature.OutlineResources;
			var outlineSettings = _feature.OutlineSettings;

			if (outlineResources == null || !outlineResources.IsValid)
			{
				return;
			}

			var resourceData = frameContext.Get<UniversalResourceData>();
			var renderingData = frameContext.Get<UniversalRenderingData>();
			var cameraData = frameContext.Get<UniversalCameraData>();
			var lightData = frameContext.Get<UniversalLightData>();

			using (var builder = renderGraph.AddUnsafePass<PassData>(_feature.FeatureName, out var passData, _profilingSampler))
			{
				passData.OutlineResources = outlineResources;
				passData.OutlineSettings = outlineSettings;
				passData.OutlineLayers = _feature.OutlineLayers;
				passData.RenderObjects = _renderObjects;
				passData.ColorTarget = resourceData.activeColorTexture;
				passData.DepthTarget = resourceData.activeDepthTexture;
				passData.CameraTargetDescriptor = cameraData.cameraTargetDescriptor;
				passData.HasRendererList = false;
				passData.AlphaTesting = outlineSettings.IsAlphaTestingEnabled();

				builder.UseTexture(passData.ColorTarget, AccessFlags.ReadWrite);
				if (passData.DepthTarget.IsValid())
				{
					builder.UseTexture(passData.DepthTarget, AccessFlags.Read);
				}

				if (_feature.OutlineLayerMask != 0)
				{
					var filteringSettings = new FilteringSettings(
						RenderQueueRange.all,
						_feature.OutlineLayerMask,
						_feature.OutlineRenderingLayerMask);
					var sortingCriteria = cameraData.defaultOpaqueSortFlags;
					var drawingSettings = RenderingUtils.CreateDrawingSettings(
						_shaderTagIdList,
						renderingData,
						cameraData,
						lightData,
						sortingCriteria);

					drawingSettings.enableDynamicBatching = true;
					drawingSettings.overrideMaterial = outlineResources.RenderMaterial;
					drawingSettings.overrideMaterialPassIndex = passData.AlphaTesting
						? OutlineResources.RenderShaderAlphaTestPassId
						: OutlineResources.RenderShaderDefaultPassId;

					var rendererListParams = new RendererListParams(
						renderingData.cullResults,
						drawingSettings,
						filteringSettings);

					passData.RendererList = renderGraph.CreateRendererList(rendererListParams);
					passData.HasRendererList = true;
					builder.UseRendererList(passData.RendererList);
				}

				builder.AllowPassCulling(false);
				builder.SetRenderFunc(static (PassData data, UnsafeGraphContext context) => ExecuteRenderGraphPass(data, context));
			}
		}

		private static void ExecuteRenderGraphPass(PassData data, UnsafeGraphContext context)
		{
			var cmd = CommandBufferHelpers.GetNativeCommandBuffer(context.cmd);
			var colorTarget = (RenderTargetIdentifier)data.ColorTarget;
			var depthTarget = data.DepthTarget.IsValid()
				? (RenderTargetIdentifier)data.DepthTarget
				: BuiltinRenderTextureType.None;

			using (var renderer = new OutlineRenderer(
				cmd,
				data.OutlineResources,
				colorTarget,
				depthTarget,
				data.CameraTargetDescriptor))
			{
				if (data.HasRendererList)
				{
					if (data.AlphaTesting)
					{
						cmd.SetGlobalFloat(data.OutlineResources.AlphaCutoffId, data.OutlineSettings.OutlineAlphaCutoff);
					}

					renderer.RenderObjectClear(data.OutlineSettings.OutlineRenderMode);
					cmd.DrawRendererList(data.RendererList);
					renderer.RenderOutline(data.OutlineSettings);
				}

				if (data.OutlineLayers)
				{
					data.RenderObjects.Clear();
					data.OutlineLayers.GetRenderObjects(data.RenderObjects);
					renderer.Render(data.RenderObjects);
				}
			}
		}

		[Obsolete("Compatibility Mode rendering path. Use RecordRenderGraph instead.")]
		public override void Execute(ScriptableRenderContext context, ref RenderingData renderingData)
		{
			var outlineResources = _feature.OutlineResources;
			var outlineSettings = _feature.OutlineSettings;
			var camData = renderingData.cameraData;

			if (_feature.OutlineLayerMask != 0)
			{
				var cmd = CommandBufferPool.Get(_feature.FeatureName);
				var filteringSettings = new FilteringSettings(RenderQueueRange.all, _feature.OutlineLayerMask, _feature.OutlineRenderingLayerMask);
				var renderStateBlock = new RenderStateBlock(RenderStateMask.Nothing);
				var sortingCriteria = camData.defaultOpaqueSortFlags;
				var drawingSettings = CreateDrawingSettings(_shaderTagIdList, ref renderingData, sortingCriteria);
				var depthTexture = new RenderTargetIdentifier("_CameraDepthTexture");

				drawingSettings.enableDynamicBatching = true;
				drawingSettings.overrideMaterial = outlineResources.RenderMaterial;

				if (outlineSettings.IsAlphaTestingEnabled())
				{
					drawingSettings.overrideMaterialPassIndex = OutlineResources.RenderShaderAlphaTestPassId;
					cmd.SetGlobalFloat(outlineResources.AlphaCutoffId, outlineSettings.OutlineAlphaCutoff);
				}
				else
				{
					drawingSettings.overrideMaterialPassIndex = OutlineResources.RenderShaderDefaultPassId;
				}

				using (new ProfilingScope(cmd, _profilingSampler))
				{
					using (var renderer = new OutlineRenderer(cmd, outlineResources, _renderer.cameraColorTargetHandle, depthTexture, camData.cameraTargetDescriptor))
					{
						renderer.RenderObjectClear(outlineSettings.OutlineRenderMode);
						context.ExecuteCommandBuffer(cmd);
						context.DrawRenderers(renderingData.cullResults, ref drawingSettings, ref filteringSettings, ref renderStateBlock);
						cmd.Clear();
						renderer.RenderOutline(outlineSettings);
					}
				}

				context.ExecuteCommandBuffer(cmd);
				CommandBufferPool.Release(cmd);
			}

			if (_feature.OutlineLayers)
			{
				var cmd = CommandBufferPool.Get(OutlineResources.EffectName);
				var depthTexture = new RenderTargetIdentifier("_CameraDepthTexture");

				using (var renderer = new OutlineRenderer(cmd, outlineResources, _renderer.cameraColorTargetHandle, depthTexture, camData.cameraTargetDescriptor))
				{
					_renderObjects.Clear();
					_feature.OutlineLayers.GetRenderObjects(_renderObjects);
					renderer.Render(_renderObjects);
				}

				context.ExecuteCommandBuffer(cmd);
				CommandBufferPool.Release(cmd);
			}
		}
	}
}
