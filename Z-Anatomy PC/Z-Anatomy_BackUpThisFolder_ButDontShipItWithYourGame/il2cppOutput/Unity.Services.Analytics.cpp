#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtualFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct VirtualFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct InterfaceActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct InterfaceActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5>
struct InterfaceActionInvoker5
{
	typedef void (*Action)(void*, T1, T2, T3, T4, T5, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8>
struct InterfaceActionInvoker8
{
	typedef void (*Action)(void*, T1, T2, T3, T4, T5, T6, T7, T8, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5, T6 p6, T7 p7, T8 p8)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, p6, p7, p8, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10>
struct InterfaceActionInvoker10
{
	typedef void (*Action)(void*, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5, T6 p6, T7 p7, T8 p8, T9 p9, T10 p10)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct InterfaceFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct InterfaceFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};

// System.Action`1<UnityEngine.AsyncOperation>
struct Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB;
// System.Action`1<System.Int64>
struct Action_1_tBB5A52E9AEFBC4F0C8D94D39CAD16BCB6B8B5929;
// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo>
struct Dictionary_2_t9FA6D82CAFC18769F7515BB51D1C56DAE09381C3;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Text.Encoding>
struct Dictionary_2_t87EDE08B2E48F793A22DE50D6B3CC2E7EBB2DB54;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task>
struct Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA;
// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo>
struct Dictionary_2_tE1603CE612C16451D1E56FF4D4859D4FE4087C28;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83;
// System.Func`1<System.Threading.Tasks.Task/ContingentProperties>
struct Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tAE94C8F24AD5B94D4EE85CA9FC59E3409D41CAF7;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.String>
struct KeyCollection_t2EDD317F5771E575ACB63527B5AFB71291040342;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD;
// System.Predicate`1<System.Object>
struct Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12;
// System.Predicate`1<System.Threading.Tasks.Task>
struct Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED;
// System.Threading.Tasks.TaskCompletionSource`1<System.Object>
struct TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37;
// System.Threading.Tasks.TaskCompletionSource`1<UnityEngine.Networking.UnityWebRequestAsyncOperation>
struct TaskCompletionSource_1_t187BBB0EA0E2FFAD5D7E09DB36D1DF3DE2B2F68C;
// System.Threading.Tasks.TaskFactory`1<System.Collections.Generic.List`1<System.String>>
struct TaskFactory_1_tC329C8C070F6C9CB24E2A226B02F2CD53832F0F5;
// System.Threading.Tasks.TaskFactory`1<Unity.Services.Analytics.Internal.GeoIPResponse>
struct TaskFactory_1_tA5E308F830038D55E1CE6BE5FEE446DA907860DD;
// System.Threading.Tasks.TaskFactory`1<System.Object>
struct TaskFactory_1_t6F188FE70F3006B0386002E392B799D85100732B;
// System.Threading.Tasks.TaskFactory`1<UnityEngine.Networking.UnityWebRequestAsyncOperation>
struct TaskFactory_1_tEAC8771A2FE22FC3892F9623A8990888D483D322;
// System.Threading.Tasks.Task`1<System.Collections.Generic.List`1<System.String>>
struct Task_1_tC46C9EBCBC033211372E7FFA650937B48144AB1D;
// System.Threading.Tasks.Task`1<Unity.Services.Analytics.Internal.GeoIPResponse>
struct Task_1_t3F0E026C38791877CBE0DEC23CD10E9103FBA9B2;
// System.Threading.Tasks.Task`1<System.Int32>
struct Task_1_t4C228DE57804012969575431CFF12D57C875552D;
// System.Threading.Tasks.Task`1<System.Object>
struct Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2;
// System.Threading.Tasks.Task`1<UnityEngine.Networking.UnityWebRequestAsyncOperation>
struct Task_1_t892C4382C6E738570B24B25E2972B303E8EB849F;
// System.Threading.Tasks.Task`1<System.Threading.Tasks.VoidTaskResult>
struct Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.String>
struct ValueCollection_t238D0D2427C6B841A01F522A41540165A2C4AE76;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.String>[]
struct EntryU5BU5D_t1AF33AD0B7330843448956EC4277517081658AE7;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// Unity.Services.Analytics.AnalyticsContainer
struct AnalyticsContainer_t80827118296A7273882EB5BAE9AC5207F90BBBE1;
// Unity.Services.Analytics.Internal.AnalyticsForgetter
struct AnalyticsForgetter_tA1B9D1F48FB306C80BE60C9858646BC1368948C0;
// Unity.Services.Analytics.AnalyticsServiceInstance
struct AnalyticsServiceInstance_t85C6639220B0EFF1CB3C517E36C6B55385A56A62;
// Unity.Services.Analytics.AnalyticsServiceSystemCalls
struct AnalyticsServiceSystemCalls_tA75EFB9A19C30CBFEABF5BF0578E1636083AC745;
// Unity.Services.Analytics.Internal.AnalyticsWebRequest
struct AnalyticsWebRequest_t2851A3E58826329B4D5AE9A1898AD98EF26DEEFA;
// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129;
// UnityEngine.AsyncOperation
struct AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C;
// System.IO.BinaryReader
struct BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158;
// System.IO.BinaryWriter
struct BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E;
// Unity.Services.Analytics.Internal.BufferRevoked
struct BufferRevoked_t713408989DEAED79FCDEFED9B0437CC6991DF6B3;
// Unity.Services.Analytics.Internal.BufferSystemCalls
struct BufferSystemCalls_t30CA07BE3DD2F29E9F7036ED838F0C92A50480F1;
// Unity.Services.Analytics.Internal.BufferX
struct BufferX_t61043C3179F78166341D64689A662C738496055C;
// System.Globalization.Calendar
struct Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B;
// UnityEngine.Networking.CertificateHandler
struct CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804;
// System.Globalization.CodePageDataItem
struct CodePageDataItem_t52460FA30AE37F4F26ACB81055E58002262F19F2;
// System.Globalization.CompareInfo
struct CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57;
// Unity.Services.Analytics.ConsentCheckException
struct ConsentCheckException_t96E7054ECB013548EA92EEFFFACAB143D5A86B7D;
// Unity.Services.Analytics.Internal.ConsentTracker
struct ConsentTracker_tBDC1E317516ED67AC655A7D3B1D44EF5666B3FC4;
// System.Threading.ContextCallback
struct ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007;
// Unity.Services.Core.Internal.CoreRegistry
struct CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA;
// Unity.Services.Analytics.CoreStatsHelper
struct CoreStatsHelper_tBF3F119096A7ABBDDC9F22ACBF13FA25FCD166E6;
// System.Globalization.CultureData
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D;
// System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0;
// Unity.Services.Analytics.Data.DataGenerator
struct DataGenerator_t25BC607B3B6D456EAA5DC9C3F600C4B560800183;
// System.Globalization.DateTimeFormatInfo
struct DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A;
// System.Text.Decoder
struct Decoder_tE16E789E38B25DD304004FC630EA8B21000ECBBC;
// System.Text.DecoderFallback
struct DecoderFallback_t7324102215E4ED41EC065C02EB501CB0BC23CD90;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// Unity.Services.Analytics.Internal.DiskCache
struct DiskCache_tE19D214B0538F2CC9D59D4F827B480AEBCEF368D;
// Unity.Services.Analytics.Internal.Dispatcher
struct Dispatcher_t60105C40E4336C76AECD5AF26D5C6A9448D3ECAE;
// UnityEngine.Networking.DownloadHandler
struct DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB;
// UnityEngine.Networking.DownloadHandlerBuffer
struct DownloadHandlerBuffer_t34C626F6513FA9A44FDDDEE85455CF2CD9DA5974;
// System.Text.Encoder
struct Encoder_tAF9067231A76315584BDF4CD27990E2F485A78FA;
// System.Text.EncoderFallback
struct EncoderFallback_tD2C40CE114AA9D8E1F7196608B2D088548015293;
// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095;
// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2;
// System.Exception
struct Exception_t;
// System.IO.FileStream
struct FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8;
// Unity.Services.Analytics.Internal.FileSystemCalls
struct FileSystemCalls_t1A2213109FA10AFB80C343E28A45F13F053970A3;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// Unity.Services.Analytics.Internal.GeoAPI
struct GeoAPI_tDEC43B93D320DC5B81A4BD9F45491DD2E5D30287;
// Unity.Services.Analytics.Internal.GeoIPResponse
struct GeoIPResponse_tADA05745323DD2374411BCB8CEC9EC086B4FE150;
// Unity.Services.Analytics.Internal.IAnalyticsForgetter
struct IAnalyticsForgetter_t824BE286D40D7A4B73BE27A5BF50FE8DB4C0AE18;
// Unity.Services.Analytics.IAnalyticsService
struct IAnalyticsService_t131A8925CF4FBBB151AB85D6BE6D07785E210DC0;
// Unity.Services.Analytics.IAnalyticsServiceSystemCalls
struct IAnalyticsServiceSystemCalls_t664990CD0F77E7F6877EE28442B73A589D3C9454;
// Unity.Services.Core.Analytics.Internal.IAnalyticsStandardEventComponent
struct IAnalyticsStandardEventComponent_tF6FA10DAAE59FC2DD9C6441D6B2E8BDA6EDDA807;
// System.Runtime.CompilerServices.IAsyncStateMachine
struct IAsyncStateMachine_t0680C7F905C553076B552D5A1A6E39E2F0F36AA2;
// Unity.Services.Analytics.Internal.IBuffer
struct IBuffer_t0E4742F785C935FD676BFEE280CD1D6FF26BBD82;
// Unity.Services.Analytics.Internal.IBufferSystemCalls
struct IBufferSystemCalls_t9CA55BD1B80E3DB50B62AC3E1F54839D2A105C41;
// Unity.Services.Core.Configuration.Internal.ICloudProjectId
struct ICloudProjectId_t366B66869ECC734B15C1F60633D2B998CD9231FE;
// Unity.Services.Core.Internal.IComponentRegistry
struct IComponentRegistry_t139D898B2B7C9D1FF36A573E8DC25415053883B7;
// Unity.Services.Analytics.Internal.IConsentTracker
struct IConsentTracker_t93AFBEAEA2AE9AC2A012EEBFA4344E527FD92550;
// Unity.Services.Analytics.ICoreStatsHelper
struct ICoreStatsHelper_t436ACDCFB0D414BD45F5EAC4C05281101F24E6FD;
// Unity.Services.Analytics.Data.IDataGenerator
struct IDataGenerator_t3CD09958BA210D4EE5B68AE79A6936634EE801E4;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// Unity.Services.Analytics.Internal.IDiskCache
struct IDiskCache_t878F3F39893FAF5AC4CC46B81A7DCB069DFBE822;
// Unity.Services.Analytics.Internal.IDispatcher
struct IDispatcher_t4DE02B283A563837EE126BBB7BA0C5E903D3357C;
// Unity.Services.Core.Environments.Internal.IEnvironments
struct IEnvironments_t9DCAF0398EB856DBE771A9C2D7B120661D628CB7;
// Unity.Services.Core.Configuration.Internal.IExternalUserId
struct IExternalUserId_t50A07D7165D254D971AA529FFE55B4A595A75F25;
// Unity.Services.Analytics.Internal.IFileSystemCalls
struct IFileSystemCalls_t125D92A716C627D4E8C9F59CBE44831033779D05;
// System.IFormatProvider
struct IFormatProvider_tC202922D43BFF3525109ABF3FB79625F5646AB52;
// Unity.Services.Analytics.Internal.IGeoAPI
struct IGeoAPI_tC74F141E9C8F842B21B297651037711D955CA5CD;
// Unity.Services.Core.Device.Internal.IInstallationId
struct IInstallationId_tCE6DEEEBAFABEB9EC621BD1646D82BC9D82BFB0C;
// Unity.Services.Core.Internal.IPackageRegistry
struct IPackageRegistry_t598A337CA30E50021BB139EF5CF3C3867139CFA2;
// Unity.Services.Authentication.Internal.IPlayerId
struct IPlayerId_t6A7BAE55B4D78E87B15B9261828E897BAACBF913;
// Unity.Services.Core.Configuration.Internal.IProjectConfiguration
struct IProjectConfiguration_tB5A7516DEB869AD005431EC83C6E02221D2B60D2;
// Unity.Services.Analytics.IUnstructuredEventRecorder
struct IUnstructuredEventRecorder_t1E4A1497C03F65D306116017A5B0B3DFCEC537FE;
// Unity.Services.Analytics.Internal.IWebRequest
struct IWebRequest_t8FAADA0ED58F096C28998EB5AFE9E79FD05F4DFE;
// Unity.Services.Analytics.Internal.IWebRequestHelper
struct IWebRequestHelper_tCCD82817C71896176475384430BB0D9BEF732858;
// Unity.Services.Analytics.InternalNewPlayerHelper
struct InternalNewPlayerHelper_t0DA93D548680A3333E7C9D3839AB8BF071B3A476;
// System.IO.MemoryStream
struct MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// Unity.Services.Core.RequestFailedException
struct RequestFailedException_tBF4D4AF8AD31BEE32091AEBC120B629B052E2D00;
// Microsoft.Win32.SafeHandles.SafeFileHandle
struct SafeFileHandle_t033FA6AAAC65F4BB25F4CBA9A242A58C95CD406E;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.Threading.SemaphoreSlim
struct SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2;
// Unity.Services.Core.ServicesInitializationException
struct ServicesInitializationException_tBF84F1801B1054DE91A79436CA6D3FA5F0F68631;
// System.Threading.Tasks.StackGuard
struct StackGuard_tACE063A1B7374BDF4AD472DE4585D05AD8745352;
// Unity.Services.Analytics.Internal.StandardEventServiceComponent
struct StandardEventServiceComponent_t587EC5F02461A7AD305539BAB07A2B93FD56E2BB;
// Unity.Services.Analytics.Data.StdCommonParams
struct StdCommonParams_tDFD4FF72F7EEBBC4384155713888A4485FF5E701;
// System.IO.Stream
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE;
// System.String
struct String_t;
// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572;
// System.Threading.Tasks.TaskFactory
struct TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E;
// System.Globalization.TextInfo
struct TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4;
// Unity.Services.Analytics.TransactionCurrencyConverter
struct TransactionCurrencyConverter_t3296A312BAFE7A8FC56182C3D53BEFD1D9474133;
// Ua2CoreInitializeCallback
struct Ua2CoreInitializeCallback_t20D7CCCEDAF24D8AD75CBE5991731A72C70418BD;
// UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F;
// UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C;
// UnityEngine.Networking.UploadHandler
struct UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6;
// UnityEngine.Networking.UploadHandlerRaw
struct UploadHandlerRaw_t0A24CF320CDF16F1BC6C5C086DE71A1908CBB91A;
// System.Uri
struct Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// Unity.Services.Analytics.Internal.WebRequestHelper
struct WebRequestHelper_t90785D95A7FBCCA284192A9CB95D1DA845D57E71;
// Unity.Services.Analytics.Internal.GeoAPI/WebRequestTaskWrapper
struct WebRequestTaskWrapper_tF4501F92C57A6AA309830A1BE02214B16ADA71FD;
// System.IO.Stream/ReadWriteTask
struct ReadWriteTask_t0821BF49EE38596C7734E86E1A6A39D769BE2C05;
// System.Threading.Tasks.Task/ContingentProperties
struct ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540;
// Unity.Services.Analytics.Internal.WebRequestHelper/<>c__DisplayClass1_0
struct U3CU3Ec__DisplayClass1_0_tEA14AF045675E396173ADD0A1FE52135E6FA37A8;
// Unity.Services.Analytics.Internal.GeoAPI/WebRequestTaskWrapper/<>c__DisplayClass2_0
struct U3CU3Ec__DisplayClass2_0_tA1057DDCB34766738AD61FC83B16C5939DF39952;

IL2CPP_EXTERN_C RuntimeClass* Action_1_tBB5A52E9AEFBC4F0C8D94D39CAD16BCB6B8B5929_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AnalyticsContainer_t80827118296A7273882EB5BAE9AC5207F90BBBE1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AnalyticsForgetter_tA1B9D1F48FB306C80BE60C9858646BC1368948C0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AnalyticsServiceInstance_t85C6639220B0EFF1CB3C517E36C6B55385A56A62_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AnalyticsServiceSystemCalls_tA75EFB9A19C30CBFEABF5BF0578E1636083AC745_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AnalyticsService_t995B7CE25709A192F70345B0335516F282C0CE7B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AnalyticsWebRequest_t2851A3E58826329B4D5AE9A1898AD98EF26DEEFA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AsyncTaskMethodBuilder_1_t6C6A8B677F9E92A76A93C9D97B66849EBECA0FE6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AsyncTaskMethodBuilder_1_tCC71288BC6FD1578916420F041FD9DD930D2EEE5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BufferRevoked_t713408989DEAED79FCDEFED9B0437CC6991DF6B3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BufferSystemCalls_t30CA07BE3DD2F29E9F7036ED838F0C92A50480F1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BufferX_t61043C3179F78166341D64689A662C738496055C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ConsentCheckException_t96E7054ECB013548EA92EEFFFACAB143D5A86B7D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ConsentTracker_tBDC1E317516ED67AC655A7D3B1D44EF5666B3FC4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CoreStatsHelper_tBF3F119096A7ABBDDC9F22ACBF13FA25FCD166E6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DataGenerator_t25BC607B3B6D456EAA5DC9C3F600C4B560800183_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DiskCache_tE19D214B0538F2CC9D59D4F827B480AEBCEF368D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dispatcher_t60105C40E4336C76AECD5AF26D5C6A9448D3ECAE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DownloadHandlerBuffer_t34C626F6513FA9A44FDDDEE85455CF2CD9DA5974_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FileSystemCalls_t1A2213109FA10AFB80C343E28A45F13F053970A3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GeoAPI_tDEC43B93D320DC5B81A4BD9F45491DD2E5D30287_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IAnalyticsForgetter_t824BE286D40D7A4B73BE27A5BF50FE8DB4C0AE18_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IAnalyticsServiceSystemCalls_t664990CD0F77E7F6877EE28442B73A589D3C9454_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IBufferSystemCalls_t9CA55BD1B80E3DB50B62AC3E1F54839D2A105C41_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IBuffer_t0E4742F785C935FD676BFEE280CD1D6FF26BBD82_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICloudProjectId_t366B66869ECC734B15C1F60633D2B998CD9231FE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IConsentTracker_t93AFBEAEA2AE9AC2A012EEBFA4344E527FD92550_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICoreStatsHelper_t436ACDCFB0D414BD45F5EAC4C05281101F24E6FD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDataGenerator_t3CD09958BA210D4EE5B68AE79A6936634EE801E4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDiskCache_t878F3F39893FAF5AC4CC46B81A7DCB069DFBE822_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDispatcher_t4DE02B283A563837EE126BBB7BA0C5E903D3357C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnvironments_t9DCAF0398EB856DBE771A9C2D7B120661D628CB7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IExternalUserId_t50A07D7165D254D971AA529FFE55B4A595A75F25_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IFileSystemCalls_t125D92A716C627D4E8C9F59CBE44831033779D05_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IGeoAPI_tC74F141E9C8F842B21B297651037711D955CA5CD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IInstallationId_tCE6DEEEBAFABEB9EC621BD1646D82BC9D82BFB0C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IPlayerId_t6A7BAE55B4D78E87B15B9261828E897BAACBF913_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IWebRequestHelper_tCCD82817C71896176475384430BB0D9BEF732858_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IWebRequest_t8FAADA0ED58F096C28998EB5AFE9E79FD05F4DFE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InternalNewPlayerHelper_t0DA93D548680A3333E7C9D3839AB8BF071B3A476_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JsonConvert_t01281FFED14CC2AEFABB6608315D90ED5C46E0C2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SdkVersion_t0BDC7D3E9F8175012EACBDB69FD9394AC2679BB8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ServicesInitializationException_tBF84F1801B1054DE91A79436CA6D3FA5F0F68631_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SessionEndState_t2CCED7EB4774D5B9C8E77DD6365BD147EC8C9BA1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StandardEventServiceComponent_t587EC5F02461A7AD305539BAB07A2B93FD56E2BB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StdCommonParams_tDFD4FF72F7EEBBC4384155713888A4485FF5E701_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TaskCompletionSource_1_t187BBB0EA0E2FFAD5D7E09DB36D1DF3DE2B2F68C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TransactionCurrencyConverter_t3296A312BAFE7A8FC56182C3D53BEFD1D9474133_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass1_0_tEA14AF045675E396173ADD0A1FE52135E6FA37A8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass2_0_tA1057DDCB34766738AD61FC83B16C5939DF39952_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UA2PlatformCode_t169515A6E124BCE234B36176D037F6E09BC3BAC6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Ua2CoreInitializeCallback_t20D7CCCEDAF24D8AD75CBE5991731A72C70418BD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UploadHandlerRaw_t0A24CF320CDF16F1BC6C5C086DE71A1908CBB91A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WebRequestHelper_t90785D95A7FBCCA284192A9CB95D1DA845D57E71_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WebRequestTaskWrapper_tF4501F92C57A6AA309830A1BE02214B16ADA71FD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0AEA2C46AAEB233C6D2DF0275EF92FB2E56BAFE9;
IL2CPP_EXTERN_C String_t* _stringLiteral0B6D138D8454083A41D1C936D8DFA8099F161DA8;
IL2CPP_EXTERN_C String_t* _stringLiteral0BC237184924820231BE4541A9E248A9768C7DEC;
IL2CPP_EXTERN_C String_t* _stringLiteral0C3C6829C3CCF8020C6AC45B87963ADC095CD44A;
IL2CPP_EXTERN_C String_t* _stringLiteral1478BC45A3EF425780ADB183A6419907115E223E;
IL2CPP_EXTERN_C String_t* _stringLiteral148824F010ADAC4C3C4CE066B0DFDB5C2654FB2B;
IL2CPP_EXTERN_C String_t* _stringLiteral14E338D17C42E552FA7AF42CDAE40CA1F0E8A04D;
IL2CPP_EXTERN_C String_t* _stringLiteral170AD99AD2A9FB6605C713D5E03E562C7D968B69;
IL2CPP_EXTERN_C String_t* _stringLiteral1A59CB27F689664DF3A79EFC791CD86ACAB8FBE9;
IL2CPP_EXTERN_C String_t* _stringLiteral1D9C903F2CFE60C87D084257D816121914ED5CD7;
IL2CPP_EXTERN_C String_t* _stringLiteral1E862A707621E680436D3EE5A45C11B8B8019F39;
IL2CPP_EXTERN_C String_t* _stringLiteral205F66EA76831459EF2F8ED7CB36EE2870B90054;
IL2CPP_EXTERN_C String_t* _stringLiteral2309FB9CC1600C4642826BA92EB5C43EA0970693;
IL2CPP_EXTERN_C String_t* _stringLiteral26C4C37B97351E99049A3913D39772ACFB923C42;
IL2CPP_EXTERN_C String_t* _stringLiteral28A51A51047FE7B2AF7B929A267EC4F0F3C64879;
IL2CPP_EXTERN_C String_t* _stringLiteral294385BD410CDE2F39E14D8793B4FC3D4FAF8EB4;
IL2CPP_EXTERN_C String_t* _stringLiteral29B2AAE0149A885123E7F21B7247D1EA4BADF148;
IL2CPP_EXTERN_C String_t* _stringLiteral2A5B4A683A4FF348D7FBA286A40B146642302E8C;
IL2CPP_EXTERN_C String_t* _stringLiteral2FA9058042F937E20F28C101D9767EB04471A5CB;
IL2CPP_EXTERN_C String_t* _stringLiteral35B5ADC96410AC9E0FBD60CD4B98AF30C7FF77A1;
IL2CPP_EXTERN_C String_t* _stringLiteral3781CFEEF925855A4B7284E1783A7D715A6333F6;
IL2CPP_EXTERN_C String_t* _stringLiteral3AAADB400CC4093A2B8D65DADF92560E65DFF664;
IL2CPP_EXTERN_C String_t* _stringLiteral3C1DFC84C89C48D8E83EB3C98D58E22F70F5E9F4;
IL2CPP_EXTERN_C String_t* _stringLiteral3E70A85646805F0D06C50AA7EAAA591D8DD27520;
IL2CPP_EXTERN_C String_t* _stringLiteral4488E94845B9ACE3166EA65DF28FEECA27B65702;
IL2CPP_EXTERN_C String_t* _stringLiteral46CC0A1237AF8D2AD7B8E32EE022F0AFF27543D2;
IL2CPP_EXTERN_C String_t* _stringLiteral4AA3716D19976DD411ABCF0909A0E4D4B8EA09AF;
IL2CPP_EXTERN_C String_t* _stringLiteral4D88DC602EB6FBBEF4C8649C1866B4FE2D18A73D;
IL2CPP_EXTERN_C String_t* _stringLiteral51026120A929AEFCA7209B235ACE529BEC6FD7B1;
IL2CPP_EXTERN_C String_t* _stringLiteral5119119D395301AF26F5E33DACA5C4C27048BFA4;
IL2CPP_EXTERN_C String_t* _stringLiteral536E5B84A146D6EAEB5D74C24E27D67FD4C0B1E7;
IL2CPP_EXTERN_C String_t* _stringLiteral54456F7D5F661596CBB77379CB87A2F212C937AB;
IL2CPP_EXTERN_C String_t* _stringLiteral577425CD87D93CE29BD73B7A610A2AA16814173F;
IL2CPP_EXTERN_C String_t* _stringLiteral58A824E6D56BC39968AB94FF04C56EB1E41A4A72;
IL2CPP_EXTERN_C String_t* _stringLiteral5C05BB4EEA109136D3437B18A775C920D9DB0853;
IL2CPP_EXTERN_C String_t* _stringLiteral5CD4EC817130CA9033AF4BCFA7ED48C26B484E86;
IL2CPP_EXTERN_C String_t* _stringLiteral5CDEC3D17C0672B2895D89FD7D65350996F6895B;
IL2CPP_EXTERN_C String_t* _stringLiteral5D1CF0F514CC51BB32FE1D4AC625DC653D45A9B5;
IL2CPP_EXTERN_C String_t* _stringLiteral63727CA6C805007DCD3A3067D90A70432562D6EF;
IL2CPP_EXTERN_C String_t* _stringLiteral64058CC688A96A90239811EF06C9D20DB0499C3E;
IL2CPP_EXTERN_C String_t* _stringLiteral656574B35FE2C0EE99259961802BB9F4B3E920FE;
IL2CPP_EXTERN_C String_t* _stringLiteral6592F2A54D864C0F2DADC704BDDAB476278DF50F;
IL2CPP_EXTERN_C String_t* _stringLiteral689C6A4E0E10858B33315ABF7B58B47BF427CAB7;
IL2CPP_EXTERN_C String_t* _stringLiteral76BABA91F33047678737B893F72821F1FE7CEFA4;
IL2CPP_EXTERN_C String_t* _stringLiteral76DDE57466F7C53D34AD5007FB620D205EE8EA1E;
IL2CPP_EXTERN_C String_t* _stringLiteral77D38C0623F92B292B925F6E72CF5CF99A20D4EB;
IL2CPP_EXTERN_C String_t* _stringLiteral782091A124984DB669E8C38AF8E8C05E76873F5A;
IL2CPP_EXTERN_C String_t* _stringLiteral7B05DA0A68B203AD60505AA9F0C3C292F55DB675;
IL2CPP_EXTERN_C String_t* _stringLiteral843422B942D75E64BB0A2281AB972CE4A7EB3924;
IL2CPP_EXTERN_C String_t* _stringLiteral848E244106FAAF80CBD208A47B17E360C4FAA789;
IL2CPP_EXTERN_C String_t* _stringLiteral851B983F2B1071B01BAFFAADAAB570596B6B2564;
IL2CPP_EXTERN_C String_t* _stringLiteral87F47D94EE1EC30005CE053B6857C7BE5A9D938D;
IL2CPP_EXTERN_C String_t* _stringLiteral8905FD38EEA933AC528FF73A57DAC6B13D1127E2;
IL2CPP_EXTERN_C String_t* _stringLiteral927C07A9A0D4F74C939B952882D32EE98B8C854F;
IL2CPP_EXTERN_C String_t* _stringLiteral93998027822B92FA84F9F1CC56BCEA2D9344D1BD;
IL2CPP_EXTERN_C String_t* _stringLiteral95313AA22BE531F33DA57ED650DDA87BC0E096B9;
IL2CPP_EXTERN_C String_t* _stringLiteral95A5D8F8216FEF6AB6DA124B8556B99686008921;
IL2CPP_EXTERN_C String_t* _stringLiteral9629684BC30911A2DEAA94689CC844A293D35D8F;
IL2CPP_EXTERN_C String_t* _stringLiteralA07A3EB9D8DB99C62110B79812663E60297F7619;
IL2CPP_EXTERN_C String_t* _stringLiteralA333953DEB7B3F631AE4FEB93E9C3AD7F349F8C0;
IL2CPP_EXTERN_C String_t* _stringLiteralA3DFC4F5246F4B16F322274CCEAC16C6C120A25C;
IL2CPP_EXTERN_C String_t* _stringLiteralA517A4F85AAA7EBA705BDB743CD5CDA3F32FB5B2;
IL2CPP_EXTERN_C String_t* _stringLiteralAE33F44A5A3FB00801EF36FD68C6DD4679E581C5;
IL2CPP_EXTERN_C String_t* _stringLiteralB10D0E397CF291810D70D9CF0816E69E5F68BC09;
IL2CPP_EXTERN_C String_t* _stringLiteralB2F9235F4F063A8609A1E74346AC3F275A7303EE;
IL2CPP_EXTERN_C String_t* _stringLiteralB407584FE1D7CEEE747D9585F6F3D5A15AC3C563;
IL2CPP_EXTERN_C String_t* _stringLiteralB457254733CD5BB62A9549F9D7A04E54C28936CD;
IL2CPP_EXTERN_C String_t* _stringLiteralB77E31D2A4A06B38E1B7C8FC29C34D00063605FD;
IL2CPP_EXTERN_C String_t* _stringLiteralB7C45DD316C68ABF3429C20058C2981C652192F2;
IL2CPP_EXTERN_C String_t* _stringLiteralB7C8982236B58D3998BB9FB59D131EF360EFB950;
IL2CPP_EXTERN_C String_t* _stringLiteralB865D689348EFE8DC34E423330CA79525B32EC1B;
IL2CPP_EXTERN_C String_t* _stringLiteralB91505A7C57926DDC126B93151A049BC213BEC78;
IL2CPP_EXTERN_C String_t* _stringLiteralB9405AACF03EA399FE3EA77E6BB8C3ADE8E58633;
IL2CPP_EXTERN_C String_t* _stringLiteralB998ED74BBE643EFB1178023AB66097D25232774;
IL2CPP_EXTERN_C String_t* _stringLiteralBEF2B1FF4DF1F5D8159AD1DCED1FD87D644A5221;
IL2CPP_EXTERN_C String_t* _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB;
IL2CPP_EXTERN_C String_t* _stringLiteralC365F5F1C2EDA22BED613D31A3187707C16C7891;
IL2CPP_EXTERN_C String_t* _stringLiteralC60816ED1CF3D79541144B9E0235BB10D437850F;
IL2CPP_EXTERN_C String_t* _stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677;
IL2CPP_EXTERN_C String_t* _stringLiteralCE2D528BF710C9F50F9620968D52C2BA6394B94B;
IL2CPP_EXTERN_C String_t* _stringLiteralCEB7987EDF6148DDF774BB81BC8810F4966EBD29;
IL2CPP_EXTERN_C String_t* _stringLiteralD34286EB83758419274C686F2C77DDE12EAFF376;
IL2CPP_EXTERN_C String_t* _stringLiteralD80A64E0036F8330EADC3705DD59CC6581FE8E99;
IL2CPP_EXTERN_C String_t* _stringLiteralD90D9A995858BDF53E28CF2370714015239D252B;
IL2CPP_EXTERN_C String_t* _stringLiteralDC543083837575FBEE37F25FE1315D6165157A7F;
IL2CPP_EXTERN_C String_t* _stringLiteralDCC2A0E9BB0E18185E2813F45A0FDBAAFE5F6277;
IL2CPP_EXTERN_C String_t* _stringLiteralE3357C44F297EFB7BFC8B87C4C3AFAB505C0C4DC;
IL2CPP_EXTERN_C String_t* _stringLiteralE46475A038CE8463CC88A3C7DB6950E45EC6B178;
IL2CPP_EXTERN_C String_t* _stringLiteralE6BB1D1C222056044DECBA8E28B892E7C7412208;
IL2CPP_EXTERN_C String_t* _stringLiteralEB0F79A6ABD88DB20E08561FCEEA8E62C21B8875;
IL2CPP_EXTERN_C String_t* _stringLiteralF10B3C0352D2A01D50976F0A480FC409754BACE8;
IL2CPP_EXTERN_C String_t* _stringLiteralF7B4A0635D39960D5AAAE5184E95BA0F3E03CD7E;
IL2CPP_EXTERN_C String_t* _stringLiteralFD315BB7AF8B2446DA124F00CE3D2B3935C9F536;
IL2CPP_EXTERN_C String_t* _stringLiteralFE4E8D2F674A9B8C61B994B4EB2D46018E971583;
IL2CPP_EXTERN_C String_t* _stringLiteralFFBF433B627DA76F2B3F8F9137C40070252A3B18;
IL2CPP_EXTERN_C const RuntimeMethod* AnalyticsForgetter_UploadComplete_mB2EDE69C50A9F0B30B56A4343F4000CD60C8DBCC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AnalyticsServiceInstance_ForgetMeEventUploaded_mDDA88D280C1A52DF1EC365BA6B52F6A1D0C5C059_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AnalyticsService_get_Instance_mD65A4BCA1F3A8D3977E5FFF422319EA564BFD059_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t2EFD3A7518CBC33EEAA02EBD1D5C4147D6FD47BF_TisU3CMakeRequestU3Ed__1_t0EF0B916953106E30ADFEE30817391CC38DF6084_m2C53456EB05AE3BD205398F10BFAEC3A03F99738_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t67679171BEFE85C38666397015D627C6E3E7D886_TisU3CCheckForRequiredConsentsU3Ed__0_tE4974F41B1F427E322B867A158105241B1665396_m870F6F1355222AF7A6554CF8A897592181CFACE4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t67679171BEFE85C38666397015D627C6E3E7D886_TisU3CCheckGeoIPU3Ed__19_tF4D189FF0813E0397D3684814869EC68573B2913_m6F67D29FE3BD690109387456790DA526E3F3D722_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t67679171BEFE85C38666397015D627C6E3E7D886_TisU3CGetGeoIPResponseU3Ed__33_tEB679EFC74F417928C47D29F932F7D9D7A8C3292_m9C98D724DAFB7DF57764019C4A1087E586617EDE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_Create_m4B6AFF0D63DE8B335551AC63B1E6A663CE9544A0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_Create_mC389C6193935CB0A93B35EB80DD27B55760DA315_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetException_m3C0DF6E71062B64D6663C0D271D6F47044CB6412_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetException_m755EC2E736574A631BEC6E2F204F9AF72A5CFE2A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetResult_m412D9588DF5481C6FAD7D151C1E8D670763DA122_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetResult_m8964201B7044B7762317C83D8CA064A284DAD38F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetStateMachine_m3B1513481F77CBDA84ABA2A5FD4977223A1EC1D7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetStateMachine_m618193D95F04A13F9794E020AC25EF91306A8670_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_Start_TisU3CCheckForRequiredConsentsU3Ed__0_tE4974F41B1F427E322B867A158105241B1665396_m69AA1E1E57283E1AE668FF20AE4AFFD14FFD9833_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_Start_TisU3CCheckGeoIPU3Ed__19_tF4D189FF0813E0397D3684814869EC68573B2913_m666764D61DB7ABC8007283DF4BF8C0A50C2E7CB2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_Start_TisU3CGetGeoIPResponseU3Ed__33_tEB679EFC74F417928C47D29F932F7D9D7A8C3292_m73E08A89008E64DC46E1ACEC665EC6272CDD4622_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_Start_TisU3CMakeRequestU3Ed__1_t0EF0B916953106E30ADFEE30817391CC38DF6084_m2278461A5470C358F8E18E9A5B3B61AB9076AA02_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_get_Task_m650E5C11347CA5B2E79BFCE9C8BDE1865F4CBA29_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_get_Task_m7DDA6B2D1E56036D887F4673F2420A0FB4E0569B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t67679171BEFE85C38666397015D627C6E3E7D886_TisU3CInitializeUserU3Ed__40_t944DAAD25172C37C6956CB1307FF90D9020B1CE2_mEA2F97BEF0690A56141E2173FBC197CDCED0D8B6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CInitializeU3Ed__1_t99E0C99E5FE14A896385692015A529E07BB77F76_mA6CCC473E49B04FBD0815D80CC7D04EB8BDB0A84_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CInitializeU3Ed__39_t5D5A95D5CBED3E92245840C7F3C11846EAC2478B_mE3FFEC839EA7297A022E33BA57E32FCF9467CF8A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_Start_TisU3CInitializeU3Ed__1_t99E0C99E5FE14A896385692015A529E07BB77F76_mC5B73B581462BA69A2F6F2C65CDABC9E41EBECBB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_Start_TisU3CInitializeU3Ed__39_t5D5A95D5CBED3E92245840C7F3C11846EAC2478B_mFC1F1BE19F516884E71F324609B5CAD02EE51014_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_Start_TisU3CInitializeUserU3Ed__40_t944DAAD25172C37C6956CB1307FF90D9020B1CE2_mE579C589F9D2A96D3718C3E0B72B3834D6F39B03_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConsentTracker_ValidateConsentWasChecked_m92986F8E992406A10E6712086DE129EB009935E6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CoreRegistration_DependsOn_TisICloudProjectId_t366B66869ECC734B15C1F60633D2B998CD9231FE_mE5B2A026998399E51D853DF4B3D4F9AA85BF84D4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CoreRegistration_DependsOn_TisIEnvironments_t9DCAF0398EB856DBE771A9C2D7B120661D628CB7_mF32D3AEE8770313EFCC77D92013AF760CBABCD64_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CoreRegistration_DependsOn_TisIExternalUserId_t50A07D7165D254D971AA529FFE55B4A595A75F25_mCABAC7BD58204E9E5B80544CF9D413AEC53772DD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CoreRegistration_DependsOn_TisIInstallationId_tCE6DEEEBAFABEB9EC621BD1646D82BC9D82BFB0C_mA93E2240E092DDA93C08F11936078CD15E581C91_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CoreRegistration_DependsOn_TisIProjectConfiguration_tB5A7516DEB869AD005431EC83C6E02221D2B60D2_mFE611D2FD196728ACC376EAB06D4F2664D8FDD10_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CoreRegistration_OptionallyDependsOn_TisIPlayerId_t6A7BAE55B4D78E87B15B9261828E897BAACBF913_m5F08ADC17E47CCBEEDC9C48CC64F5A475CCFD286_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CoreRegistration_ProvidesComponent_TisIAnalyticsStandardEventComponent_tF6FA10DAAE59FC2DD9C6441D6B2E8BDA6EDDA807_m4CCB17ADEC6343A3DE09DC770F1F49B45FFA4942_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CoreRegistry_GetServiceComponent_TisICloudProjectId_t366B66869ECC734B15C1F60633D2B998CD9231FE_mF7458A4E56377FCF3301F3ECE3A64B8C709EB38F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CoreRegistry_GetServiceComponent_TisIEnvironments_t9DCAF0398EB856DBE771A9C2D7B120661D628CB7_mB14B4F5C7C715C037C3D0B96AD44CFBC570659AF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CoreRegistry_GetServiceComponent_TisIExternalUserId_t50A07D7165D254D971AA529FFE55B4A595A75F25_m943FC6CF014F0065DD2E93EC1C7830093F6B1918_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CoreRegistry_GetServiceComponent_TisIInstallationId_tCE6DEEEBAFABEB9EC621BD1646D82BC9D82BFB0C_m154CDEFCDF91B08E20C3D0DAE197A8AD04AAE70F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CoreRegistry_GetServiceComponent_TisIPlayerId_t6A7BAE55B4D78E87B15B9261828E897BAACBF913_mAA43670CFBC53A1BB132782BB187BE8BF0D90BEC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CoreRegistry_GetServiceComponent_TisIProjectConfiguration_tB5A7516DEB869AD005431EC83C6E02221D2B60D2_mF70AFB94326EDB167066B7836231B13A52150312_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CoreRegistry_RegisterPackage_TisUa2CoreInitializeCallback_t20D7CCCEDAF24D8AD75CBE5991731A72C70418BD_m2D03E607E78DEFB5521CD83B02846C48D6EF4F0E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CoreRegistry_RegisterServiceComponent_TisIAnalyticsStandardEventComponent_tF6FA10DAAE59FC2DD9C6441D6B2E8BDA6EDDA807_mBC81DFA289107F2FAEAC53E5B7785A2C65A76905_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_GetEnumerator_m46EC45F42CA2279D83568CD3F216AAABA8E749F6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dispatcher_UploadCompleted_m1A96D525DB4DE2A378D239C3D11DA427E36B2459_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m068DDFF5CAFBB15C8A0602DEADA7F10C5BB7ADCD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mA93491D9B55547D066053F3BC0A69C635F877438_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m49070E88C2E34AB46E6292A3FB1C227576B8506E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisAnalyticsContainer_t80827118296A7273882EB5BAE9AC5207F90BBBE1_mE4F8B8275039940AFB099EE841C9060ACCFF2A11_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InternalNewPlayerHelper__ctor_m1EF18BB2B52AFA4EC9CDBC69196E406BA05F2A0F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonConvert_DeserializeObject_TisGeoIPResponse_tADA05745323DD2374411BCB8CEC9EC086B4FE150_mE116D4B93529E5AE7C995FCF33ACB72C41D37F20_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Key_m654BCCAE2F20CB11D8E8C2D2C886A0C8A13EB1C4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Value_m7345512A32CB4DCAA0643050B18DC8DCD71B927A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_mF6795DE5F49C1D0B91D6A0955F448B22970D67A9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_RemoveRange_m1E69C4C8438AA5D7E05C2936C79C01D96F89BE68_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_set_Item_m95629806F31CF369D937590912E0B6A53FF7C587_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_GetValueOrDefault_m068A148705ED1E215A5E85D18BA6852B192DA419_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_ToString_m04B6938F577DFC70D695A65C381A5ABCBC441248_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1__ctor_m117BE9EF6DBC76B088B52AFB80634B9195D384A1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1__ctor_mDE3158DD99CA7E1775A8BA276E428AF808AB8FBF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_mB4991C0F4C2664AB3CB2584DEECF5BCE6AB7757D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_mC082C667C8EB3A6CA80E06BCAEA0BED00C6BC15A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_mC149B1C717AF506BBE8932F2C1DC86C378D17EA8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_Value_m260A5CB9269FD3E130F998A589EDAEC2E8F9EAE1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_GetResult_m5F5B61E5E8007E22BF56CC4D63AB61FE9584FDD9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_GetResult_mE0F44BFAB46D5BBA8B6341757BC30AEC7C44F5BB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_get_IsCompleted_mD3A1F9B5FE69A689A39D53FD3A093B7F8F05A070_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_get_IsCompleted_mD7F9B812B03F8973495724BC92A2F4AAC37E0179_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskCompletionSource_1_SetResult_m462302E1261DE351DB0AA663769C88ED0A78C5C4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskCompletionSource_1__ctor_m28BBDEEB420B6B31DA78AC27F9ED2E899EF367B4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskCompletionSource_1_get_Task_m84FB049ED4EBE0B7DCF8660691DDA2B497E6F0E6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1_GetAwaiter_m1191FB560C8E8B2B31CE4C013EA83E8BA8FE17BC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1_GetAwaiter_mCB01C4C331E45364EDA04B3FDB90705CA93004E7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CCheckGeoIPU3Ed__19_MoveNext_mE50FA81A1A7EC3B8AD5BACF2ED7D89137B90394B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CGetGeoIPResponseU3Ed__33_MoveNext_m8DC3796520E412B06E1C572F3D665F90CFF8D71D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CMakeRequestU3Ed__1_MoveNext_m84E5C849BBA78D226EF9A48216FFC4CD3D2042F1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass1_0_U3CSendWebRequestU3Eb__0_m5B75546A87917B4470194F42B9EE6B62890BA815_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass2_0_U3CGetAwaiterU3Eb__0_m91481F295ECD1FC5445A4E7870D1013CABED3463_RuntimeMethod_var;
struct CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshaled_com;
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_com;
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_pinvoke;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_com;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshaled_com;
struct UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshaled_pinvoke;
struct UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshaled_com;

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t489BE72A981513E97FD4A68068F4E6261EFD70D5 
{
};

// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t1AF33AD0B7330843448956EC4277517081658AE7* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_t2EDD317F5771E575ACB63527B5AFB71291040342* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t238D0D2427C6B841A01F522A41540165A2C4AE76* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.List`1<System.Int32>
struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Threading.Tasks.TaskCompletionSource`1<System.Object>
struct TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37  : public RuntimeObject
{
	// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.TaskCompletionSource`1::_task
	Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* ____task_0;
};

// System.Threading.Tasks.TaskCompletionSource`1<UnityEngine.Networking.UnityWebRequestAsyncOperation>
struct TaskCompletionSource_1_t187BBB0EA0E2FFAD5D7E09DB36D1DF3DE2B2F68C  : public RuntimeObject
{
	// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.TaskCompletionSource`1::_task
	Task_1_t892C4382C6E738570B24B25E2972B303E8EB849F* ____task_0;
};

// Unity.Services.Analytics.Internal.AnalyticsForgetter
struct AnalyticsForgetter_tA1B9D1F48FB306C80BE60C9858646BC1368948C0  : public RuntimeObject
{
	// System.String Unity.Services.Analytics.Internal.AnalyticsForgetter::m_CollectUrl
	String_t* ___m_CollectUrl_0;
	// System.Byte[] Unity.Services.Analytics.Internal.AnalyticsForgetter::m_Event
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___m_Event_1;
	// System.Action Unity.Services.Analytics.Internal.AnalyticsForgetter::m_Callback
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___m_Callback_2;
	// System.Boolean Unity.Services.Analytics.Internal.AnalyticsForgetter::m_SuccessfullyUploaded
	bool ___m_SuccessfullyUploaded_3;
	// UnityEngine.Networking.UnityWebRequestAsyncOperation Unity.Services.Analytics.Internal.AnalyticsForgetter::m_Request
	UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C* ___m_Request_4;
	// Unity.Services.Analytics.Internal.IConsentTracker Unity.Services.Analytics.Internal.AnalyticsForgetter::ConsentTracker
	RuntimeObject* ___ConsentTracker_5;
};

// Unity.Services.Analytics.AnalyticsService
struct AnalyticsService_t995B7CE25709A192F70345B0335516F282C0CE7B  : public RuntimeObject
{
};

// Unity.Services.Analytics.AnalyticsServiceSystemCalls
struct AnalyticsServiceSystemCalls_tA75EFB9A19C30CBFEABF5BF0578E1636083AC745  : public RuntimeObject
{
};

// System.IO.BinaryReader
struct BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158  : public RuntimeObject
{
	// System.IO.Stream System.IO.BinaryReader::m_stream
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___m_stream_0;
	// System.Byte[] System.IO.BinaryReader::m_buffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___m_buffer_1;
	// System.Text.Decoder System.IO.BinaryReader::m_decoder
	Decoder_tE16E789E38B25DD304004FC630EA8B21000ECBBC* ___m_decoder_2;
	// System.Byte[] System.IO.BinaryReader::m_charBytes
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___m_charBytes_3;
	// System.Char[] System.IO.BinaryReader::m_singleChar
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_singleChar_4;
	// System.Char[] System.IO.BinaryReader::m_charBuffer
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_charBuffer_5;
	// System.Int32 System.IO.BinaryReader::m_maxCharsSize
	int32_t ___m_maxCharsSize_6;
	// System.Boolean System.IO.BinaryReader::m_2BytesPerChar
	bool ___m_2BytesPerChar_7;
	// System.Boolean System.IO.BinaryReader::m_isMemoryStream
	bool ___m_isMemoryStream_8;
	// System.Boolean System.IO.BinaryReader::m_leaveOpen
	bool ___m_leaveOpen_9;
};

// System.IO.BinaryWriter
struct BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E  : public RuntimeObject
{
	// System.IO.Stream System.IO.BinaryWriter::OutStream
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___OutStream_1;
	// System.Byte[] System.IO.BinaryWriter::_buffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____buffer_2;
	// System.Text.Encoding System.IO.BinaryWriter::_encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ____encoding_3;
	// System.Text.Encoder System.IO.BinaryWriter::_encoder
	Encoder_tAF9067231A76315584BDF4CD27990E2F485A78FA* ____encoder_4;
	// System.Boolean System.IO.BinaryWriter::_leaveOpen
	bool ____leaveOpen_5;
	// System.Byte[] System.IO.BinaryWriter::_largeByteBuffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____largeByteBuffer_6;
	// System.Int32 System.IO.BinaryWriter::_maxChars
	int32_t ____maxChars_7;
};

// Unity.Services.Analytics.Internal.BufferRevoked
struct BufferRevoked_t713408989DEAED79FCDEFED9B0437CC6991DF6B3  : public RuntimeObject
{
	// System.String Unity.Services.Analytics.Internal.BufferRevoked::<UserID>k__BackingField
	String_t* ___U3CUserIDU3Ek__BackingField_0;
	// System.String Unity.Services.Analytics.Internal.BufferRevoked::<InstallID>k__BackingField
	String_t* ___U3CInstallIDU3Ek__BackingField_1;
	// System.String Unity.Services.Analytics.Internal.BufferRevoked::<PlayerID>k__BackingField
	String_t* ___U3CPlayerIDU3Ek__BackingField_2;
	// System.String Unity.Services.Analytics.Internal.BufferRevoked::<SessionID>k__BackingField
	String_t* ___U3CSessionIDU3Ek__BackingField_3;
};

// Unity.Services.Analytics.Internal.BufferSystemCalls
struct BufferSystemCalls_t30CA07BE3DD2F29E9F7036ED838F0C92A50480F1  : public RuntimeObject
{
};

// Unity.Services.Analytics.Internal.BufferX
struct BufferX_t61043C3179F78166341D64689A662C738496055C  : public RuntimeObject
{
	// Unity.Services.Analytics.Internal.IBufferSystemCalls Unity.Services.Analytics.Internal.BufferX::m_SystemCalls
	RuntimeObject* ___m_SystemCalls_0;
	// Unity.Services.Analytics.Internal.IDiskCache Unity.Services.Analytics.Internal.BufferX::m_DiskCache
	RuntimeObject* ___m_DiskCache_1;
	// System.Collections.Generic.List`1<System.Int32> Unity.Services.Analytics.Internal.BufferX::m_EventEnds
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___m_EventEnds_2;
	// System.IO.MemoryStream Unity.Services.Analytics.Internal.BufferX::m_SpareBuffer
	MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* ___m_SpareBuffer_3;
	// System.IO.MemoryStream Unity.Services.Analytics.Internal.BufferX::m_Buffer
	MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* ___m_Buffer_4;
	// System.String Unity.Services.Analytics.Internal.BufferX::<UserID>k__BackingField
	String_t* ___U3CUserIDU3Ek__BackingField_5;
	// System.String Unity.Services.Analytics.Internal.BufferX::<InstallID>k__BackingField
	String_t* ___U3CInstallIDU3Ek__BackingField_6;
	// System.String Unity.Services.Analytics.Internal.BufferX::<PlayerID>k__BackingField
	String_t* ___U3CPlayerIDU3Ek__BackingField_7;
	// System.String Unity.Services.Analytics.Internal.BufferX::<SessionID>k__BackingField
	String_t* ___U3CSessionIDU3Ek__BackingField_8;
};

// Unity.Services.Analytics.Internal.Consent
struct Consent_tE59B226A06E74A69A39675158441582B2BBAFE1C  : public RuntimeObject
{
};

// Unity.Services.Analytics.Internal.ConsentTracker
struct ConsentTracker_tBDC1E317516ED67AC655A7D3B1D44EF5666B3FC4  : public RuntimeObject
{
	// Unity.Services.Analytics.Internal.IGeoAPI Unity.Services.Analytics.Internal.ConsentTracker::m_GeoAPI
	RuntimeObject* ___m_GeoAPI_0;
	// Unity.Services.Analytics.ICoreStatsHelper Unity.Services.Analytics.Internal.ConsentTracker::m_CoreStatsHelper
	RuntimeObject* ___m_CoreStatsHelper_1;
	// Unity.Services.Analytics.Internal.ConsentStatus Unity.Services.Analytics.Internal.ConsentTracker::<optInPiplConsentStatus>k__BackingField
	int32_t ___U3CoptInPiplConsentStatusU3Ek__BackingField_2;
	// Unity.Services.Analytics.Internal.ConsentStatus Unity.Services.Analytics.Internal.ConsentTracker::<optOutConsentStatus>k__BackingField
	int32_t ___U3CoptOutConsentStatusU3Ek__BackingField_3;
	// Unity.Services.Analytics.Internal.GeoIPResponse Unity.Services.Analytics.Internal.ConsentTracker::response
	GeoIPResponse_tADA05745323DD2374411BCB8CEC9EC086B4FE150* ___response_4;
};

// Unity.Services.Core.Internal.CoreRegistry
struct CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA  : public RuntimeObject
{
	// Unity.Services.Core.Internal.IPackageRegistry Unity.Services.Core.Internal.CoreRegistry::<PackageRegistry>k__BackingField
	RuntimeObject* ___U3CPackageRegistryU3Ek__BackingField_1;
	// Unity.Services.Core.Internal.IComponentRegistry Unity.Services.Core.Internal.CoreRegistry::<ComponentRegistry>k__BackingField
	RuntimeObject* ___U3CComponentRegistryU3Ek__BackingField_2;
};

// Unity.Services.Analytics.CoreStatsHelper
struct CoreStatsHelper_tBF3F119096A7ABBDDC9F22ACBF13FA25FCD166E6  : public RuntimeObject
{
};

// System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0  : public RuntimeObject
{
	// System.Boolean System.Globalization.CultureInfo::m_isReadOnly
	bool ___m_isReadOnly_3;
	// System.Int32 System.Globalization.CultureInfo::cultureID
	int32_t ___cultureID_4;
	// System.Int32 System.Globalization.CultureInfo::parent_lcid
	int32_t ___parent_lcid_5;
	// System.Int32 System.Globalization.CultureInfo::datetime_index
	int32_t ___datetime_index_6;
	// System.Int32 System.Globalization.CultureInfo::number_index
	int32_t ___number_index_7;
	// System.Int32 System.Globalization.CultureInfo::default_calendar_type
	int32_t ___default_calendar_type_8;
	// System.Boolean System.Globalization.CultureInfo::m_useUserOverride
	bool ___m_useUserOverride_9;
	// System.Globalization.NumberFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::numInfo
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo_10;
	// System.Globalization.DateTimeFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::dateTimeInfo
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo_11;
	// System.Globalization.TextInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::textInfo
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo_12;
	// System.String System.Globalization.CultureInfo::m_name
	String_t* ___m_name_13;
	// System.String System.Globalization.CultureInfo::englishname
	String_t* ___englishname_14;
	// System.String System.Globalization.CultureInfo::nativename
	String_t* ___nativename_15;
	// System.String System.Globalization.CultureInfo::iso3lang
	String_t* ___iso3lang_16;
	// System.String System.Globalization.CultureInfo::iso2lang
	String_t* ___iso2lang_17;
	// System.String System.Globalization.CultureInfo::win3lang
	String_t* ___win3lang_18;
	// System.String System.Globalization.CultureInfo::territory
	String_t* ___territory_19;
	// System.String[] System.Globalization.CultureInfo::native_calendar_names
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___native_calendar_names_20;
	// System.Globalization.CompareInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::compareInfo
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo_21;
	// System.Void* System.Globalization.CultureInfo::textinfo_data
	void* ___textinfo_data_22;
	// System.Int32 System.Globalization.CultureInfo::m_dataItem
	int32_t ___m_dataItem_23;
	// System.Globalization.Calendar System.Globalization.CultureInfo::calendar
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar_24;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::parent_culture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___parent_culture_25;
	// System.Boolean System.Globalization.CultureInfo::constructed
	bool ___constructed_26;
	// System.Byte[] System.Globalization.CultureInfo::cached_serialized_form
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___cached_serialized_form_27;
	// System.Globalization.CultureData System.Globalization.CultureInfo::m_cultureData
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D* ___m_cultureData_28;
	// System.Boolean System.Globalization.CultureInfo::m_isInherited
	bool ___m_isInherited_29;
};
// Native definition for P/Invoke marshalling of System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo_10;
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo_11;
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo_12;
	char* ___m_name_13;
	char* ___englishname_14;
	char* ___nativename_15;
	char* ___iso3lang_16;
	char* ___iso2lang_17;
	char* ___win3lang_18;
	char* ___territory_19;
	char** ___native_calendar_names_20;
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar_24;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke* ___parent_culture_25;
	int32_t ___constructed_26;
	Il2CppSafeArray/*NONE*/* ___cached_serialized_form_27;
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_pinvoke* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};
// Native definition for COM marshalling of System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo_10;
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo_11;
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo_12;
	Il2CppChar* ___m_name_13;
	Il2CppChar* ___englishname_14;
	Il2CppChar* ___nativename_15;
	Il2CppChar* ___iso3lang_16;
	Il2CppChar* ___iso2lang_17;
	Il2CppChar* ___win3lang_18;
	Il2CppChar* ___territory_19;
	Il2CppChar** ___native_calendar_names_20;
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar_24;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com* ___parent_culture_25;
	int32_t ___constructed_26;
	Il2CppSafeArray/*NONE*/* ___cached_serialized_form_27;
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_com* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};

// Unity.Services.Analytics.Data.DataGenerator
struct DataGenerator_t25BC607B3B6D456EAA5DC9C3F600C4B560800183  : public RuntimeObject
{
	// Unity.Services.Analytics.Internal.IBuffer Unity.Services.Analytics.Data.DataGenerator::m_Buffer
	RuntimeObject* ___m_Buffer_0;
};

// Unity.Services.Analytics.Platform.DebugDevice
struct DebugDevice_t00B4BF6773F39B73295B72D11D23309486E42CCA  : public RuntimeObject
{
};

// Unity.Services.Analytics.Platform.DeviceVolumeProvider
struct DeviceVolumeProvider_tCD637AE8853864FA7CE8E52A8C94F0336055A591  : public RuntimeObject
{
};

// Unity.Services.Analytics.Internal.DiskCache
struct DiskCache_tE19D214B0538F2CC9D59D4F827B480AEBCEF368D  : public RuntimeObject
{
	// System.String Unity.Services.Analytics.Internal.DiskCache::k_CacheFilePath
	String_t* ___k_CacheFilePath_0;
	// Unity.Services.Analytics.Internal.IFileSystemCalls Unity.Services.Analytics.Internal.DiskCache::k_SystemCalls
	RuntimeObject* ___k_SystemCalls_1;
	// System.Int64 Unity.Services.Analytics.Internal.DiskCache::k_CacheFileMaximumSize
	int64_t ___k_CacheFileMaximumSize_2;
};

// Unity.Services.Analytics.Internal.Dispatcher
struct Dispatcher_t60105C40E4336C76AECD5AF26D5C6A9448D3ECAE  : public RuntimeObject
{
	// Unity.Services.Analytics.Internal.IWebRequestHelper Unity.Services.Analytics.Internal.Dispatcher::m_WebRequestHelper
	RuntimeObject* ___m_WebRequestHelper_0;
	// Unity.Services.Analytics.Internal.IConsentTracker Unity.Services.Analytics.Internal.Dispatcher::m_ConsentTracker
	RuntimeObject* ___m_ConsentTracker_1;
	// Unity.Services.Analytics.Internal.IBuffer Unity.Services.Analytics.Internal.Dispatcher::m_DataBuffer
	RuntimeObject* ___m_DataBuffer_2;
	// Unity.Services.Analytics.Internal.IWebRequest Unity.Services.Analytics.Internal.Dispatcher::m_FlushRequest
	RuntimeObject* ___m_FlushRequest_3;
	// System.Boolean Unity.Services.Analytics.Internal.Dispatcher::<FlushInProgress>k__BackingField
	bool ___U3CFlushInProgressU3Ek__BackingField_4;
	// System.Int32 Unity.Services.Analytics.Internal.Dispatcher::m_FlushBufferIndex
	int32_t ___m_FlushBufferIndex_5;
	// System.String Unity.Services.Analytics.Internal.Dispatcher::<CollectUrl>k__BackingField
	String_t* ___U3CCollectUrlU3Ek__BackingField_6;
};

// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095  : public RuntimeObject
{
	// System.Int32 System.Text.Encoding::m_codePage
	int32_t ___m_codePage_9;
	// System.Globalization.CodePageDataItem System.Text.Encoding::dataItem
	CodePageDataItem_t52460FA30AE37F4F26ACB81055E58002262F19F2* ___dataItem_10;
	// System.Boolean System.Text.Encoding::m_deserializedFromEverett
	bool ___m_deserializedFromEverett_11;
	// System.Boolean System.Text.Encoding::m_isReadOnly
	bool ___m_isReadOnly_12;
	// System.Text.EncoderFallback System.Text.Encoding::encoderFallback
	EncoderFallback_tD2C40CE114AA9D8E1F7196608B2D088548015293* ___encoderFallback_13;
	// System.Text.DecoderFallback System.Text.Encoding::decoderFallback
	DecoderFallback_t7324102215E4ED41EC065C02EB501CB0BC23CD90* ___decoderFallback_14;
};

// Unity.Services.Analytics.Internal.FileSystemCalls
struct FileSystemCalls_t1A2213109FA10AFB80C343E28A45F13F053970A3  : public RuntimeObject
{
};

// Unity.Services.Analytics.Internal.GeoAPI
struct GeoAPI_tDEC43B93D320DC5B81A4BD9F45491DD2E5D30287  : public RuntimeObject
{
	// System.String Unity.Services.Analytics.Internal.GeoAPI::m_PrivacyEndpoint
	String_t* ___m_PrivacyEndpoint_0;
};

// Unity.Services.Analytics.Internal.GeoIPResponse
struct GeoIPResponse_tADA05745323DD2374411BCB8CEC9EC086B4FE150  : public RuntimeObject
{
	// System.String Unity.Services.Analytics.Internal.GeoIPResponse::identifier
	String_t* ___identifier_0;
};

// Unity.Services.Analytics.InternalNewPlayerHelper
struct InternalNewPlayerHelper_t0DA93D548680A3333E7C9D3839AB8BF071B3A476  : public RuntimeObject
{
	// Unity.Services.Core.Device.Internal.IInstallationId Unity.Services.Analytics.InternalNewPlayerHelper::<InstallId>k__BackingField
	RuntimeObject* ___U3CInstallIdU3Ek__BackingField_0;
};

// Unity.Services.Analytics.Internal.Locale
struct Locale_t2F0BBEF7D8C9658CC82505313A7523D8A5708513  : public RuntimeObject
{
};

// System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE  : public RuntimeObject
{
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject* ____identity_0;
};
// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
};

// Unity.Services.Analytics.Platform.Runtime
struct Runtime_t3C6559AA91E989CFC20597C28EF3BD73C3CCFB8E  : public RuntimeObject
{
};

// Unity.Services.Analytics.SdkVersion
struct SdkVersion_t0BDC7D3E9F8175012EACBDB69FD9394AC2679BB8  : public RuntimeObject
{
};

// Unity.Services.Analytics.Internal.StandardEventServiceComponent
struct StandardEventServiceComponent_t587EC5F02461A7AD305539BAB07A2B93FD56E2BB  : public RuntimeObject
{
	// Unity.Services.Core.Configuration.Internal.IProjectConfiguration Unity.Services.Analytics.Internal.StandardEventServiceComponent::m_Configuration
	RuntimeObject* ___m_Configuration_0;
	// Unity.Services.Analytics.IUnstructuredEventRecorder Unity.Services.Analytics.Internal.StandardEventServiceComponent::m_AnalyticsService
	RuntimeObject* ___m_AnalyticsService_1;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572  : public RuntimeObject
{
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_taskId
	int32_t ___m_taskId_1;
	// System.Delegate System.Threading.Tasks.Task::m_action
	Delegate_t* ___m_action_2;
	// System.Object System.Threading.Tasks.Task::m_stateObject
	RuntimeObject* ___m_stateObject_3;
	// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.Task::m_taskScheduler
	TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* ___m_taskScheduler_4;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::m_parent
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_parent_5;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_stateFlags
	int32_t ___m_stateFlags_6;
	// System.Object modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_continuationObject
	RuntimeObject* ___m_continuationObject_7;
	// System.Threading.Tasks.Task/ContingentProperties modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_contingentProperties
	ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540* ___m_contingentProperties_10;
};

// Unity.Services.Analytics.TransactionCurrencyConverter
struct TransactionCurrencyConverter_t3296A312BAFE7A8FC56182C3D53BEFD1D9474133  : public RuntimeObject
{
};

// Ua2CoreInitializeCallback
struct Ua2CoreInitializeCallback_t20D7CCCEDAF24D8AD75CBE5991731A72C70418BD  : public RuntimeObject
{
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// Unity.Services.Analytics.Internal.WebRequestHelper
struct WebRequestHelper_t90785D95A7FBCCA284192A9CB95D1DA845D57E71  : public RuntimeObject
{
};

// UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
};

// Unity.Services.Analytics.Internal.GeoAPI/WebRequestTaskWrapper
struct WebRequestTaskWrapper_tF4501F92C57A6AA309830A1BE02214B16ADA71FD  : public RuntimeObject
{
	// UnityEngine.Networking.UnityWebRequestAsyncOperation Unity.Services.Analytics.Internal.GeoAPI/WebRequestTaskWrapper::m_AsyncOp
	UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C* ___m_AsyncOp_0;
};

// Unity.Services.Analytics.Internal.WebRequestHelper/<>c__DisplayClass1_0
struct U3CU3Ec__DisplayClass1_0_tEA14AF045675E396173ADD0A1FE52135E6FA37A8  : public RuntimeObject
{
	// System.Action`1<System.Int64> Unity.Services.Analytics.Internal.WebRequestHelper/<>c__DisplayClass1_0::onCompleted
	Action_1_tBB5A52E9AEFBC4F0C8D94D39CAD16BCB6B8B5929* ___onCompleted_0;
	// UnityEngine.Networking.UnityWebRequestAsyncOperation Unity.Services.Analytics.Internal.WebRequestHelper/<>c__DisplayClass1_0::requestOp
	UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C* ___requestOp_1;
};

// Unity.Services.Analytics.Internal.GeoAPI/WebRequestTaskWrapper/<>c__DisplayClass2_0
struct U3CU3Ec__DisplayClass2_0_tA1057DDCB34766738AD61FC83B16C5939DF39952  : public RuntimeObject
{
	// Unity.Services.Analytics.Internal.GeoAPI/WebRequestTaskWrapper Unity.Services.Analytics.Internal.GeoAPI/WebRequestTaskWrapper/<>c__DisplayClass2_0::<>4__this
	WebRequestTaskWrapper_tF4501F92C57A6AA309830A1BE02214B16ADA71FD* ___U3CU3E4__this_0;
	// System.Threading.Tasks.TaskCompletionSource`1<UnityEngine.Networking.UnityWebRequestAsyncOperation> Unity.Services.Analytics.Internal.GeoAPI/WebRequestTaskWrapper/<>c__DisplayClass2_0::tcs
	TaskCompletionSource_1_t187BBB0EA0E2FFAD5D7E09DB36D1DF3DE2B2F68C* ___tcs_1;
};

// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
struct KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject* ___value_1;
};

// System.Collections.Generic.KeyValuePair`2<System.String,System.String>
struct KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	String_t* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	String_t* ___value_1;
};

// Unity.Collections.NativeArray`1<System.Byte>
struct NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF 
{
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;
};

// System.Nullable`1<System.Double>
struct Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	double ___value_1;
};

// System.Nullable`1<System.Int64>
struct Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int64_t ___value_1;
};

// System.Nullable`1<System.Single>
struct Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	float ___value_1;
};

// System.Runtime.CompilerServices.TaskAwaiter`1<Unity.Services.Analytics.Internal.GeoIPResponse>
struct TaskAwaiter_1_t67679171BEFE85C38666397015D627C6E3E7D886 
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.TaskAwaiter`1::m_task
	Task_1_t3F0E026C38791877CBE0DEC23CD10E9103FBA9B2* ___m_task_0;
};

// System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>
struct TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA 
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.TaskAwaiter`1::m_task
	Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* ___m_task_0;
};

// System.Runtime.CompilerServices.TaskAwaiter`1<UnityEngine.Networking.UnityWebRequestAsyncOperation>
struct TaskAwaiter_1_t2EFD3A7518CBC33EEAA02EBD1D5C4147D6FD47BF 
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.TaskAwaiter`1::m_task
	Task_1_t892C4382C6E738570B24B25E2972B303E8EB849F* ___m_task_0;
};

// System.Threading.Tasks.Task`1<System.Collections.Generic.List`1<System.String>>
struct Task_1_tC46C9EBCBC033211372E7FFA650937B48144AB1D  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___m_result_22;
};

// System.Threading.Tasks.Task`1<Unity.Services.Analytics.Internal.GeoIPResponse>
struct Task_1_t3F0E026C38791877CBE0DEC23CD10E9103FBA9B2  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	GeoIPResponse_tADA05745323DD2374411BCB8CEC9EC086B4FE150* ___m_result_22;
};

// System.Threading.Tasks.Task`1<System.Object>
struct Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	RuntimeObject* ___m_result_22;
};

// System.Threading.Tasks.Task`1<UnityEngine.Networking.UnityWebRequestAsyncOperation>
struct Task_1_t892C4382C6E738570B24B25E2972B303E8EB849F  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C* ___m_result_22;
};

// System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF 
{
	// System.Runtime.CompilerServices.IAsyncStateMachine System.Runtime.CompilerServices.AsyncMethodBuilderCore::m_stateMachine
	RuntimeObject* ___m_stateMachine_0;
	// System.Action System.Runtime.CompilerServices.AsyncMethodBuilderCore::m_defaultContextAction
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___m_defaultContextAction_1;
};
// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF_marshaled_pinvoke
{
	RuntimeObject* ___m_stateMachine_0;
	Il2CppMethodPointer ___m_defaultContextAction_1;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF_marshaled_com
{
	RuntimeObject* ___m_stateMachine_0;
	Il2CppMethodPointer ___m_defaultContextAction_1;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;
};

// Unity.Services.Core.Internal.CoreRegistration
struct CoreRegistration_tD2BD53556CAA48BD5E0D32CB92C6494C0EB85581 
{
	// Unity.Services.Core.Internal.IPackageRegistry Unity.Services.Core.Internal.CoreRegistration::m_Registry
	RuntimeObject* ___m_Registry_0;
	// System.Int32 Unity.Services.Core.Internal.CoreRegistration::m_PackageHash
	int32_t ___m_PackageHash_1;
};
// Native definition for P/Invoke marshalling of Unity.Services.Core.Internal.CoreRegistration
struct CoreRegistration_tD2BD53556CAA48BD5E0D32CB92C6494C0EB85581_marshaled_pinvoke
{
	RuntimeObject* ___m_Registry_0;
	int32_t ___m_PackageHash_1;
};
// Native definition for COM marshalling of Unity.Services.Core.Internal.CoreRegistration
struct CoreRegistration_tD2BD53556CAA48BD5E0D32CB92C6494C0EB85581_marshaled_com
{
	RuntimeObject* ___m_Registry_0;
	int32_t ___m_PackageHash_1;
};

// System.DateTime
struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D 
{
	// System.UInt64 System.DateTime::_dateData
	uint64_t ____dateData_46;
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};

// System.Guid
struct Guid_t 
{
	// System.Int32 System.Guid::_a
	int32_t ____a_1;
	// System.Int16 System.Guid::_b
	int16_t ____b_2;
	// System.Int16 System.Guid::_c
	int16_t ____c_3;
	// System.Byte System.Guid::_d
	uint8_t ____d_4;
	// System.Byte System.Guid::_e
	uint8_t ____e_5;
	// System.Byte System.Guid::_f
	uint8_t ____f_6;
	// System.Byte System.Guid::_g
	uint8_t ____g_7;
	// System.Byte System.Guid::_h
	uint8_t ____h_8;
	// System.Byte System.Guid::_i
	uint8_t ____i_9;
	// System.Byte System.Guid::_j
	uint8_t ____j_10;
	// System.Byte System.Guid::_k
	uint8_t ____k_11;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.Int64
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// System.IO.Stream
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
	// System.IO.Stream/ReadWriteTask System.IO.Stream::_activeReadWriteTask
	ReadWriteTask_t0821BF49EE38596C7734E86E1A6A39D769BE2C05* ____activeReadWriteTask_2;
	// System.Threading.SemaphoreSlim System.IO.Stream::_asyncActiveSemaphore
	SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2* ____asyncActiveSemaphore_3;
};

// System.Runtime.CompilerServices.TaskAwaiter
struct TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 
{
	// System.Threading.Tasks.Task System.Runtime.CompilerServices.TaskAwaiter::m_task
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_task_0;
};
// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.TaskAwaiter
struct TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_marshaled_pinvoke
{
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_task_0;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.TaskAwaiter
struct TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_marshaled_com
{
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_task_0;
};

// System.TimeSpan
struct TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A 
{
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_22;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Collections.Generic.List`1<System.String>>
struct AsyncTaskMethodBuilder_1_t6C6A8B677F9E92A76A93C9D97B66849EBECA0FE6 
{
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_coreState
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF ___m_coreState_1;
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_task
	Task_1_tC46C9EBCBC033211372E7FFA650937B48144AB1D* ___m_task_2;
};

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Unity.Services.Analytics.Internal.GeoIPResponse>
struct AsyncTaskMethodBuilder_1_tCC71288BC6FD1578916420F041FD9DD930D2EEE5 
{
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_coreState
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF ___m_coreState_1;
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_task
	Task_1_t3F0E026C38791877CBE0DEC23CD10E9103FBA9B2* ___m_task_2;
};

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>
struct AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0 
{
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_coreState
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF ___m_coreState_1;
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_task
	Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* ___m_task_2;
};

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Threading.Tasks.VoidTaskResult>
struct AsyncTaskMethodBuilder_1_tE88892A6B2F97B5D44B7C3EE2DBEED85743412AC 
{
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_coreState
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF ___m_coreState_1;
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_task
	Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17* ___m_task_2;
};

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>
struct Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_dictionary
	Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_version
	int32_t ____version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_index
	int32_t ____index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_current
	KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 ____current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_getEnumeratorRetType
	int32_t ____getEnumeratorRetType_4;
};

// System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.String>
struct Enumerator_t173E7BE1F35CA448C7E0EE77345C9E0EC0206562 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_dictionary
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_version
	int32_t ____version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_index
	int32_t ____index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_current
	KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A ____current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_getEnumeratorRetType
	int32_t ____getEnumeratorRetType_4;
};

// Unity.Services.Analytics.AnalyticsServiceInstance
struct AnalyticsServiceInstance_t85C6639220B0EFF1CB3C517E36C6B55385A56A62  : public RuntimeObject
{
	// System.TimeSpan Unity.Services.Analytics.AnalyticsServiceInstance::k_BackgroundSessionRefreshPeriod
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___k_BackgroundSessionRefreshPeriod_0;
	// System.String Unity.Services.Analytics.AnalyticsServiceInstance::m_CollectURL
	String_t* ___m_CollectURL_1;
	// Unity.Services.Analytics.Data.StdCommonParams Unity.Services.Analytics.AnalyticsServiceInstance::m_CommonParams
	StdCommonParams_tDFD4FF72F7EEBBC4384155713888A4485FF5E701* ___m_CommonParams_2;
	// Unity.Services.Authentication.Internal.IPlayerId Unity.Services.Analytics.AnalyticsServiceInstance::m_PlayerId
	RuntimeObject* ___m_PlayerId_3;
	// Unity.Services.Core.Device.Internal.IInstallationId Unity.Services.Analytics.AnalyticsServiceInstance::m_InstallId
	RuntimeObject* ___m_InstallId_4;
	// Unity.Services.Analytics.Data.IDataGenerator Unity.Services.Analytics.AnalyticsServiceInstance::m_DataGenerator
	RuntimeObject* ___m_DataGenerator_5;
	// Unity.Services.Analytics.ICoreStatsHelper Unity.Services.Analytics.AnalyticsServiceInstance::m_CoreStatsHelper
	RuntimeObject* ___m_CoreStatsHelper_6;
	// Unity.Services.Analytics.Internal.IConsentTracker Unity.Services.Analytics.AnalyticsServiceInstance::m_ConsentTracker
	RuntimeObject* ___m_ConsentTracker_7;
	// Unity.Services.Analytics.Internal.IDispatcher Unity.Services.Analytics.AnalyticsServiceInstance::m_DataDispatcher
	RuntimeObject* ___m_DataDispatcher_8;
	// Unity.Services.Analytics.Internal.IAnalyticsForgetter Unity.Services.Analytics.AnalyticsServiceInstance::m_AnalyticsForgetter
	RuntimeObject* ___m_AnalyticsForgetter_9;
	// Unity.Services.Core.Configuration.Internal.IExternalUserId Unity.Services.Analytics.AnalyticsServiceInstance::m_CustomUserId
	RuntimeObject* ___m_CustomUserId_10;
	// Unity.Services.Analytics.IAnalyticsServiceSystemCalls Unity.Services.Analytics.AnalyticsServiceInstance::m_SystemCalls
	RuntimeObject* ___m_SystemCalls_11;
	// Unity.Services.Analytics.Internal.IBuffer Unity.Services.Analytics.AnalyticsServiceInstance::m_RealBuffer
	RuntimeObject* ___m_RealBuffer_12;
	// Unity.Services.Analytics.Internal.IBuffer Unity.Services.Analytics.AnalyticsServiceInstance::m_RevokedBuffer
	RuntimeObject* ___m_RevokedBuffer_13;
	// Unity.Services.Analytics.Internal.IBuffer Unity.Services.Analytics.AnalyticsServiceInstance::m_DataBuffer
	RuntimeObject* ___m_DataBuffer_14;
	// System.Boolean Unity.Services.Analytics.AnalyticsServiceInstance::<ServiceEnabled>k__BackingField
	bool ___U3CServiceEnabledU3Ek__BackingField_15;
	// System.String Unity.Services.Analytics.AnalyticsServiceInstance::<SessionID>k__BackingField
	String_t* ___U3CSessionIDU3Ek__BackingField_16;
	// System.Int32 Unity.Services.Analytics.AnalyticsServiceInstance::m_BufferLengthAtLastGameRunning
	int32_t ___m_BufferLengthAtLastGameRunning_17;
	// System.DateTime Unity.Services.Analytics.AnalyticsServiceInstance::m_ApplicationPauseTime
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___m_ApplicationPauseTime_18;
	// Unity.Services.Analytics.TransactionCurrencyConverter Unity.Services.Analytics.AnalyticsServiceInstance::converter
	TransactionCurrencyConverter_t3296A312BAFE7A8FC56182C3D53BEFD1D9474133* ___converter_19;
};

// UnityEngine.AsyncOperation
struct AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.IntPtr UnityEngine.AsyncOperation::m_Ptr
	intptr_t ___m_Ptr_0;
	// System.Action`1<UnityEngine.AsyncOperation> UnityEngine.AsyncOperation::m_completeCallback
	Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB* ___m_completeCallback_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};
// Native definition for COM marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};

// UnityEngine.Networking.CertificateHandler
struct CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Networking.CertificateHandler::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Networking.CertificateHandler
struct CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Networking.CertificateHandler
struct CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
};
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// UnityEngine.Networking.DownloadHandler
struct DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Networking.DownloadHandler::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Networking.DownloadHandler
struct DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Networking.DownloadHandler
struct DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// System.IO.FileStream
struct FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8  : public Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE
{
	// System.Byte[] System.IO.FileStream::buf
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buf_6;
	// System.String System.IO.FileStream::name
	String_t* ___name_7;
	// Microsoft.Win32.SafeHandles.SafeFileHandle System.IO.FileStream::safeHandle
	SafeFileHandle_t033FA6AAAC65F4BB25F4CBA9A242A58C95CD406E* ___safeHandle_8;
	// System.Boolean System.IO.FileStream::isExposed
	bool ___isExposed_9;
	// System.Int64 System.IO.FileStream::append_startpos
	int64_t ___append_startpos_10;
	// System.IO.FileAccess System.IO.FileStream::access
	int32_t ___access_11;
	// System.Boolean System.IO.FileStream::owner
	bool ___owner_12;
	// System.Boolean System.IO.FileStream::async
	bool ___async_13;
	// System.Boolean System.IO.FileStream::canseek
	bool ___canseek_14;
	// System.Boolean System.IO.FileStream::anonymous
	bool ___anonymous_15;
	// System.Boolean System.IO.FileStream::buf_dirty
	bool ___buf_dirty_16;
	// System.Int32 System.IO.FileStream::buf_size
	int32_t ___buf_size_17;
	// System.Int32 System.IO.FileStream::buf_length
	int32_t ___buf_length_18;
	// System.Int32 System.IO.FileStream::buf_offset
	int32_t ___buf_offset_19;
	// System.Int64 System.IO.FileStream::buf_start
	int64_t ___buf_start_20;
};

// System.IO.MemoryStream
struct MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2  : public Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE
{
	// System.Byte[] System.IO.MemoryStream::_buffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____buffer_4;
	// System.Int32 System.IO.MemoryStream::_origin
	int32_t ____origin_5;
	// System.Int32 System.IO.MemoryStream::_position
	int32_t ____position_6;
	// System.Int32 System.IO.MemoryStream::_length
	int32_t ____length_7;
	// System.Int32 System.IO.MemoryStream::_capacity
	int32_t ____capacity_8;
	// System.Boolean System.IO.MemoryStream::_expandable
	bool ____expandable_9;
	// System.Boolean System.IO.MemoryStream::_writable
	bool ____writable_10;
	// System.Boolean System.IO.MemoryStream::_exposable
	bool ____exposable_11;
	// System.Boolean System.IO.MemoryStream::_isOpen
	bool ____isOpen_12;
	// System.Threading.Tasks.Task`1<System.Int32> System.IO.MemoryStream::_lastReadTask
	Task_1_t4C228DE57804012969575431CFF12D57C875552D* ____lastReadTask_13;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// Unity.Services.Analytics.Data.StdCommonParams
struct StdCommonParams_tDFD4FF72F7EEBBC4384155713888A4485FF5E701  : public RuntimeObject
{
	// System.String Unity.Services.Analytics.Data.StdCommonParams::<GameStoreID>k__BackingField
	String_t* ___U3CGameStoreIDU3Ek__BackingField_0;
	// System.String Unity.Services.Analytics.Data.StdCommonParams::<GameBundleID>k__BackingField
	String_t* ___U3CGameBundleIDU3Ek__BackingField_1;
	// System.String Unity.Services.Analytics.Data.StdCommonParams::<Platform>k__BackingField
	String_t* ___U3CPlatformU3Ek__BackingField_2;
	// System.String Unity.Services.Analytics.Data.StdCommonParams::<UasUserID>k__BackingField
	String_t* ___U3CUasUserIDU3Ek__BackingField_3;
	// System.String Unity.Services.Analytics.Data.StdCommonParams::<Idfv>k__BackingField
	String_t* ___U3CIdfvU3Ek__BackingField_4;
	// System.Nullable`1<System.Double> Unity.Services.Analytics.Data.StdCommonParams::<DeviceVolume>k__BackingField
	Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 ___U3CDeviceVolumeU3Ek__BackingField_5;
	// System.Nullable`1<System.Double> Unity.Services.Analytics.Data.StdCommonParams::<BatteryLoad>k__BackingField
	Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 ___U3CBatteryLoadU3Ek__BackingField_6;
	// System.String Unity.Services.Analytics.Data.StdCommonParams::<BuildGuuid>k__BackingField
	String_t* ___U3CBuildGuuidU3Ek__BackingField_7;
	// System.String Unity.Services.Analytics.Data.StdCommonParams::<ClientVersion>k__BackingField
	String_t* ___U3CClientVersionU3Ek__BackingField_8;
	// System.String Unity.Services.Analytics.Data.StdCommonParams::<UserCountry>k__BackingField
	String_t* ___U3CUserCountryU3Ek__BackingField_9;
	// System.String Unity.Services.Analytics.Data.StdCommonParams::<ProjectID>k__BackingField
	String_t* ___U3CProjectIDU3Ek__BackingField_10;
};

// UnityEngine.Networking.UploadHandler
struct UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Networking.UploadHandler::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Networking.UploadHandler
struct UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Networking.UploadHandler
struct UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder
struct AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06 
{
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Threading.Tasks.VoidTaskResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder::m_builder
	AsyncTaskMethodBuilder_1_tE88892A6B2F97B5D44B7C3EE2DBEED85743412AC ___m_builder_1;
};
// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.AsyncTaskMethodBuilder
struct AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_marshaled_pinvoke
{
	AsyncTaskMethodBuilder_1_tE88892A6B2F97B5D44B7C3EE2DBEED85743412AC ___m_builder_1;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.AsyncTaskMethodBuilder
struct AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_marshaled_com
{
	AsyncTaskMethodBuilder_1_tE88892A6B2F97B5D44B7C3EE2DBEED85743412AC ___m_builder_1;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Networking.DownloadHandlerBuffer
struct DownloadHandlerBuffer_t34C626F6513FA9A44FDDDEE85455CF2CD9DA5974  : public DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB
{
	// Unity.Collections.NativeArray`1<System.Byte> UnityEngine.Networking.DownloadHandlerBuffer::m_NativeData
	NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF ___m_NativeData_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.Networking.DownloadHandlerBuffer
struct DownloadHandlerBuffer_t34C626F6513FA9A44FDDDEE85455CF2CD9DA5974_marshaled_pinvoke : public DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_pinvoke
{
	NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF ___m_NativeData_1;
};
// Native definition for COM marshalling of UnityEngine.Networking.DownloadHandlerBuffer
struct DownloadHandlerBuffer_t34C626F6513FA9A44FDDDEE85455CF2CD9DA5974_marshaled_com : public DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_com
{
	NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF ___m_NativeData_1;
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// Unity.Services.Core.RequestFailedException
struct RequestFailedException_tBF4D4AF8AD31BEE32091AEBC120B629B052E2D00  : public Exception_t
{
	// System.Int32 Unity.Services.Core.RequestFailedException::<ErrorCode>k__BackingField
	int32_t ___U3CErrorCodeU3Ek__BackingField_18;
};

// Unity.Services.Core.ServicesInitializationException
struct ServicesInitializationException_tBF84F1801B1054DE91A79436CA6D3FA5F0F68631  : public Exception_t
{
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Networking.UnityWebRequest::m_Ptr
	intptr_t ___m_Ptr_0;
	// UnityEngine.Networking.DownloadHandler UnityEngine.Networking.UnityWebRequest::m_DownloadHandler
	DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* ___m_DownloadHandler_1;
	// UnityEngine.Networking.UploadHandler UnityEngine.Networking.UnityWebRequest::m_UploadHandler
	UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6* ___m_UploadHandler_2;
	// UnityEngine.Networking.CertificateHandler UnityEngine.Networking.UnityWebRequest::m_CertificateHandler
	CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804* ___m_CertificateHandler_3;
	// System.Uri UnityEngine.Networking.UnityWebRequest::m_Uri
	Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___m_Uri_4;
	// System.Boolean UnityEngine.Networking.UnityWebRequest::<disposeCertificateHandlerOnDispose>k__BackingField
	bool ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5;
	// System.Boolean UnityEngine.Networking.UnityWebRequest::<disposeDownloadHandlerOnDispose>k__BackingField
	bool ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6;
	// System.Boolean UnityEngine.Networking.UnityWebRequest::<disposeUploadHandlerOnDispose>k__BackingField
	bool ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7;
};
// Native definition for P/Invoke marshalling of UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_pinvoke ___m_DownloadHandler_1;
	UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshaled_pinvoke ___m_UploadHandler_2;
	CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshaled_pinvoke ___m_CertificateHandler_3;
	Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___m_Uri_4;
	int32_t ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5;
	int32_t ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6;
	int32_t ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7;
};
// Native definition for COM marshalling of UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshaled_com
{
	intptr_t ___m_Ptr_0;
	DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_com* ___m_DownloadHandler_1;
	UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshaled_com* ___m_UploadHandler_2;
	CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshaled_com* ___m_CertificateHandler_3;
	Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___m_Uri_4;
	int32_t ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5;
	int32_t ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6;
	int32_t ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7;
};

// UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C  : public AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C
{
	// UnityEngine.Networking.UnityWebRequest UnityEngine.Networking.UnityWebRequestAsyncOperation::<webRequest>k__BackingField
	UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* ___U3CwebRequestU3Ek__BackingField_2;
};
// Native definition for P/Invoke marshalling of UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C_marshaled_pinvoke : public AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshaled_pinvoke
{
	UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshaled_pinvoke* ___U3CwebRequestU3Ek__BackingField_2;
};
// Native definition for COM marshalling of UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C_marshaled_com : public AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshaled_com
{
	UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshaled_com* ___U3CwebRequestU3Ek__BackingField_2;
};

// UnityEngine.Networking.UploadHandlerRaw
struct UploadHandlerRaw_t0A24CF320CDF16F1BC6C5C086DE71A1908CBB91A  : public UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6
{
	// Unity.Collections.NativeArray`1<System.Byte> UnityEngine.Networking.UploadHandlerRaw::m_Payload
	NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF ___m_Payload_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.Networking.UploadHandlerRaw
struct UploadHandlerRaw_t0A24CF320CDF16F1BC6C5C086DE71A1908CBB91A_marshaled_pinvoke : public UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshaled_pinvoke
{
	NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF ___m_Payload_1;
};
// Native definition for COM marshalling of UnityEngine.Networking.UploadHandlerRaw
struct UploadHandlerRaw_t0A24CF320CDF16F1BC6C5C086DE71A1908CBB91A_marshaled_com : public UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshaled_com
{
	NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF ___m_Payload_1;
};

// Unity.Services.Analytics.AnalyticsServiceInstance/<CheckForRequiredConsents>d__0
struct U3CCheckForRequiredConsentsU3Ed__0_tE4974F41B1F427E322B867A158105241B1665396 
{
	// System.Int32 Unity.Services.Analytics.AnalyticsServiceInstance/<CheckForRequiredConsents>d__0::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Collections.Generic.List`1<System.String>> Unity.Services.Analytics.AnalyticsServiceInstance/<CheckForRequiredConsents>d__0::<>t__builder
	AsyncTaskMethodBuilder_1_t6C6A8B677F9E92A76A93C9D97B66849EBECA0FE6 ___U3CU3Et__builder_1;
	// Unity.Services.Analytics.AnalyticsServiceInstance Unity.Services.Analytics.AnalyticsServiceInstance/<CheckForRequiredConsents>d__0::<>4__this
	AnalyticsServiceInstance_t85C6639220B0EFF1CB3C517E36C6B55385A56A62* ___U3CU3E4__this_2;
	// System.Runtime.CompilerServices.TaskAwaiter`1<Unity.Services.Analytics.Internal.GeoIPResponse> Unity.Services.Analytics.AnalyticsServiceInstance/<CheckForRequiredConsents>d__0::<>u__1
	TaskAwaiter_1_t67679171BEFE85C38666397015D627C6E3E7D886 ___U3CU3Eu__1_3;
};

// Unity.Services.Analytics.Internal.ConsentTracker/<CheckGeoIP>d__19
struct U3CCheckGeoIPU3Ed__19_tF4D189FF0813E0397D3684814869EC68573B2913 
{
	// System.Int32 Unity.Services.Analytics.Internal.ConsentTracker/<CheckGeoIP>d__19::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Unity.Services.Analytics.Internal.GeoIPResponse> Unity.Services.Analytics.Internal.ConsentTracker/<CheckGeoIP>d__19::<>t__builder
	AsyncTaskMethodBuilder_1_tCC71288BC6FD1578916420F041FD9DD930D2EEE5 ___U3CU3Et__builder_1;
	// Unity.Services.Analytics.Internal.ConsentTracker Unity.Services.Analytics.Internal.ConsentTracker/<CheckGeoIP>d__19::<>4__this
	ConsentTracker_tBDC1E317516ED67AC655A7D3B1D44EF5666B3FC4* ___U3CU3E4__this_2;
	// System.Runtime.CompilerServices.TaskAwaiter`1<Unity.Services.Analytics.Internal.GeoIPResponse> Unity.Services.Analytics.Internal.ConsentTracker/<CheckGeoIP>d__19::<>u__1
	TaskAwaiter_1_t67679171BEFE85C38666397015D627C6E3E7D886 ___U3CU3Eu__1_3;
};

// Unity.Services.Analytics.Internal.ConsentTracker/<GetGeoIPResponse>d__33
struct U3CGetGeoIPResponseU3Ed__33_tEB679EFC74F417928C47D29F932F7D9D7A8C3292 
{
	// System.Int32 Unity.Services.Analytics.Internal.ConsentTracker/<GetGeoIPResponse>d__33::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Unity.Services.Analytics.Internal.GeoIPResponse> Unity.Services.Analytics.Internal.ConsentTracker/<GetGeoIPResponse>d__33::<>t__builder
	AsyncTaskMethodBuilder_1_tCC71288BC6FD1578916420F041FD9DD930D2EEE5 ___U3CU3Et__builder_1;
	// Unity.Services.Analytics.Internal.ConsentTracker Unity.Services.Analytics.Internal.ConsentTracker/<GetGeoIPResponse>d__33::<>4__this
	ConsentTracker_tBDC1E317516ED67AC655A7D3B1D44EF5666B3FC4* ___U3CU3E4__this_2;
	// System.Runtime.CompilerServices.TaskAwaiter`1<Unity.Services.Analytics.Internal.GeoIPResponse> Unity.Services.Analytics.Internal.ConsentTracker/<GetGeoIPResponse>d__33::<>u__1
	TaskAwaiter_1_t67679171BEFE85C38666397015D627C6E3E7D886 ___U3CU3Eu__1_3;
};

// Unity.Services.Analytics.Internal.GeoAPI/<MakeRequest>d__1
struct U3CMakeRequestU3Ed__1_t0EF0B916953106E30ADFEE30817391CC38DF6084 
{
	// System.Int32 Unity.Services.Analytics.Internal.GeoAPI/<MakeRequest>d__1::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Unity.Services.Analytics.Internal.GeoIPResponse> Unity.Services.Analytics.Internal.GeoAPI/<MakeRequest>d__1::<>t__builder
	AsyncTaskMethodBuilder_1_tCC71288BC6FD1578916420F041FD9DD930D2EEE5 ___U3CU3Et__builder_1;
	// Unity.Services.Analytics.Internal.GeoAPI Unity.Services.Analytics.Internal.GeoAPI/<MakeRequest>d__1::<>4__this
	GeoAPI_tDEC43B93D320DC5B81A4BD9F45491DD2E5D30287* ___U3CU3E4__this_2;
	// System.Runtime.CompilerServices.TaskAwaiter`1<UnityEngine.Networking.UnityWebRequestAsyncOperation> Unity.Services.Analytics.Internal.GeoAPI/<MakeRequest>d__1::<>u__1
	TaskAwaiter_1_t2EFD3A7518CBC33EEAA02EBD1D5C4147D6FD47BF ___U3CU3Eu__1_3;
};

// System.Action`1<UnityEngine.AsyncOperation>
struct Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB  : public MulticastDelegate_t
{
};

// System.Action`1<System.Int64>
struct Action_1_tBB5A52E9AEFBC4F0C8D94D39CAD16BCB6B8B5929  : public MulticastDelegate_t
{
};

// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07  : public MulticastDelegate_t
{
};

// Unity.Services.Analytics.Internal.AnalyticsWebRequest
struct AnalyticsWebRequest_t2851A3E58826329B4D5AE9A1898AD98EF26DEEFA  : public UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F
{
};

// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	// System.String System.ArgumentException::_paramName
	String_t* ____paramName_18;
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// Unity.Services.Analytics.ConsentCheckException
struct ConsentCheckException_t96E7054ECB013548EA92EEFFFACAB143D5A86B7D  : public RequestFailedException_tBF4D4AF8AD31BEE32091AEBC120B629B052E2D00
{
	// Unity.Services.Analytics.ConsentCheckExceptionReason Unity.Services.Analytics.ConsentCheckException::<Reason>k__BackingField
	int32_t ___U3CReasonU3Ek__BackingField_19;
};

// Unity.Services.Analytics.AnalyticsServiceInstance/<Initialize>d__39
struct U3CInitializeU3Ed__39_t5D5A95D5CBED3E92245840C7F3C11846EAC2478B 
{
	// System.Int32 Unity.Services.Analytics.AnalyticsServiceInstance/<Initialize>d__39::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder Unity.Services.Analytics.AnalyticsServiceInstance/<Initialize>d__39::<>t__builder
	AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06 ___U3CU3Et__builder_1;
	// Unity.Services.Analytics.AnalyticsServiceInstance Unity.Services.Analytics.AnalyticsServiceInstance/<Initialize>d__39::<>4__this
	AnalyticsServiceInstance_t85C6639220B0EFF1CB3C517E36C6B55385A56A62* ___U3CU3E4__this_2;
	// System.Runtime.CompilerServices.TaskAwaiter Unity.Services.Analytics.AnalyticsServiceInstance/<Initialize>d__39::<>u__1
	TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 ___U3CU3Eu__1_3;
};

// Unity.Services.Analytics.AnalyticsServiceInstance/<InitializeUser>d__40
struct U3CInitializeUserU3Ed__40_t944DAAD25172C37C6956CB1307FF90D9020B1CE2 
{
	// System.Int32 Unity.Services.Analytics.AnalyticsServiceInstance/<InitializeUser>d__40::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder Unity.Services.Analytics.AnalyticsServiceInstance/<InitializeUser>d__40::<>t__builder
	AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06 ___U3CU3Et__builder_1;
	// Unity.Services.Analytics.AnalyticsServiceInstance Unity.Services.Analytics.AnalyticsServiceInstance/<InitializeUser>d__40::<>4__this
	AnalyticsServiceInstance_t85C6639220B0EFF1CB3C517E36C6B55385A56A62* ___U3CU3E4__this_2;
	// System.Runtime.CompilerServices.TaskAwaiter`1<Unity.Services.Analytics.Internal.GeoIPResponse> Unity.Services.Analytics.AnalyticsServiceInstance/<InitializeUser>d__40::<>u__1
	TaskAwaiter_1_t67679171BEFE85C38666397015D627C6E3E7D886 ___U3CU3Eu__1_3;
};

// Ua2CoreInitializeCallback/<Initialize>d__1
struct U3CInitializeU3Ed__1_t99E0C99E5FE14A896385692015A529E07BB77F76 
{
	// System.Int32 Ua2CoreInitializeCallback/<Initialize>d__1::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder Ua2CoreInitializeCallback/<Initialize>d__1::<>t__builder
	AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06 ___U3CU3Et__builder_1;
	// Unity.Services.Core.Internal.CoreRegistry Ua2CoreInitializeCallback/<Initialize>d__1::registry
	CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA* ___registry_2;
	// Unity.Services.Analytics.Internal.ConsentTracker Ua2CoreInitializeCallback/<Initialize>d__1::<consentTracker>5__2
	ConsentTracker_tBDC1E317516ED67AC655A7D3B1D44EF5666B3FC4* ___U3CconsentTrackerU3E5__2_3;
	// System.Runtime.CompilerServices.TaskAwaiter Ua2CoreInitializeCallback/<Initialize>d__1::<>u__1
	TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 ___U3CU3Eu__1_4;
};

// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// Unity.Services.Analytics.AnalyticsContainer
struct AnalyticsContainer_t80827118296A7273882EB5BAE9AC5207F90BBBE1  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single Unity.Services.Analytics.AnalyticsContainer::m_HeartbeatTime
	float ___m_HeartbeatTime_8;
	// System.Single Unity.Services.Analytics.AnalyticsContainer::m_GameRunningTime
	float ___m_GameRunningTime_9;
};

// <Module>

// <Module>

// System.Collections.Generic.Dictionary`2<System.String,System.String>

// System.Collections.Generic.Dictionary`2<System.String,System.String>

// System.Collections.Generic.List`1<System.Int32>
struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Int32>

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Object>

// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.String>

// System.Threading.Tasks.TaskCompletionSource`1<System.Object>

// System.Threading.Tasks.TaskCompletionSource`1<System.Object>

// System.Threading.Tasks.TaskCompletionSource`1<UnityEngine.Networking.UnityWebRequestAsyncOperation>

// System.Threading.Tasks.TaskCompletionSource`1<UnityEngine.Networking.UnityWebRequestAsyncOperation>

// Unity.Services.Analytics.Internal.AnalyticsForgetter

// Unity.Services.Analytics.Internal.AnalyticsForgetter

// Unity.Services.Analytics.AnalyticsService
struct AnalyticsService_t995B7CE25709A192F70345B0335516F282C0CE7B_StaticFields
{
	// Unity.Services.Analytics.AnalyticsServiceInstance Unity.Services.Analytics.AnalyticsService::internalInstance
	AnalyticsServiceInstance_t85C6639220B0EFF1CB3C517E36C6B55385A56A62* ___internalInstance_0;
};

// Unity.Services.Analytics.AnalyticsService

// Unity.Services.Analytics.AnalyticsServiceSystemCalls

// Unity.Services.Analytics.AnalyticsServiceSystemCalls

// System.IO.BinaryReader

// System.IO.BinaryReader

// System.IO.BinaryWriter
struct BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E_StaticFields
{
	// System.IO.BinaryWriter System.IO.BinaryWriter::Null
	BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* ___Null_0;
};

// System.IO.BinaryWriter

// Unity.Services.Analytics.Internal.BufferRevoked

// Unity.Services.Analytics.Internal.BufferRevoked

// Unity.Services.Analytics.Internal.BufferSystemCalls

// Unity.Services.Analytics.Internal.BufferSystemCalls

// Unity.Services.Analytics.Internal.BufferX

// Unity.Services.Analytics.Internal.BufferX

// Unity.Services.Analytics.Internal.Consent

// Unity.Services.Analytics.Internal.Consent

// Unity.Services.Analytics.Internal.ConsentTracker

// Unity.Services.Analytics.Internal.ConsentTracker

// Unity.Services.Core.Internal.CoreRegistry
struct CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA_StaticFields
{
	// Unity.Services.Core.Internal.CoreRegistry Unity.Services.Core.Internal.CoreRegistry::<Instance>k__BackingField
	CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA* ___U3CInstanceU3Ek__BackingField_0;
};

// Unity.Services.Core.Internal.CoreRegistry

// Unity.Services.Analytics.CoreStatsHelper

// Unity.Services.Analytics.CoreStatsHelper

// System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_StaticFields
{
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::invariant_culture_info
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___invariant_culture_info_0;
	// System.Object System.Globalization.CultureInfo::shared_table_lock
	RuntimeObject* ___shared_table_lock_1;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::default_current_culture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___default_current_culture_2;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentUICulture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_DefaultThreadCurrentUICulture_34;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentCulture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_DefaultThreadCurrentCulture_35;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_number
	Dictionary_2_t9FA6D82CAFC18769F7515BB51D1C56DAE09381C3* ___shared_by_number_36;
	// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_name
	Dictionary_2_tE1603CE612C16451D1E56FF4D4859D4FE4087C28* ___shared_by_name_37;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::s_UserPreferredCultureInfoInAppX
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_UserPreferredCultureInfoInAppX_38;
	// System.Boolean System.Globalization.CultureInfo::IsTaiwanSku
	bool ___IsTaiwanSku_39;
};

// System.Globalization.CultureInfo

// Unity.Services.Analytics.Data.DataGenerator

// Unity.Services.Analytics.Data.DataGenerator

// Unity.Services.Analytics.Platform.DebugDevice

// Unity.Services.Analytics.Platform.DebugDevice

// Unity.Services.Analytics.Platform.DeviceVolumeProvider

// Unity.Services.Analytics.Platform.DeviceVolumeProvider

// Unity.Services.Analytics.Internal.DiskCache

// Unity.Services.Analytics.Internal.DiskCache

// Unity.Services.Analytics.Internal.Dispatcher

// Unity.Services.Analytics.Internal.Dispatcher

// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095_StaticFields
{
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::defaultEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___defaultEncoding_0;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::unicodeEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___unicodeEncoding_1;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::bigEndianUnicode
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___bigEndianUnicode_2;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf7Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf7Encoding_3;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf8Encoding_4;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf32Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf32Encoding_5;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::asciiEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___asciiEncoding_6;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::latin1Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___latin1Encoding_7;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Text.Encoding> modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::encodings
	Dictionary_2_t87EDE08B2E48F793A22DE50D6B3CC2E7EBB2DB54* ___encodings_8;
	// System.Object System.Text.Encoding::s_InternalSyncObject
	RuntimeObject* ___s_InternalSyncObject_15;
};

// System.Text.Encoding

// Unity.Services.Analytics.Internal.FileSystemCalls

// Unity.Services.Analytics.Internal.FileSystemCalls

// Unity.Services.Analytics.Internal.GeoAPI

// Unity.Services.Analytics.Internal.GeoAPI

// Unity.Services.Analytics.Internal.GeoIPResponse

// Unity.Services.Analytics.Internal.GeoIPResponse

// Unity.Services.Analytics.InternalNewPlayerHelper

// Unity.Services.Analytics.InternalNewPlayerHelper

// Unity.Services.Analytics.Internal.Locale

// Unity.Services.Analytics.Internal.Locale

// Unity.Services.Analytics.Platform.Runtime

// Unity.Services.Analytics.Platform.Runtime

// Unity.Services.Analytics.SdkVersion
struct SdkVersion_t0BDC7D3E9F8175012EACBDB69FD9394AC2679BB8_StaticFields
{
	// System.String Unity.Services.Analytics.SdkVersion::SDK_VERSION
	String_t* ___SDK_VERSION_0;
};

// Unity.Services.Analytics.SdkVersion

// Unity.Services.Analytics.Internal.StandardEventServiceComponent

// Unity.Services.Analytics.Internal.StandardEventServiceComponent

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticFields
{
	// System.Int32 System.Threading.Tasks.Task::s_taskIdCounter
	int32_t ___s_taskIdCounter_0;
	// System.Object System.Threading.Tasks.Task::s_taskCompletionSentinel
	RuntimeObject* ___s_taskCompletionSentinel_8;
	// System.Boolean System.Threading.Tasks.Task::s_asyncDebuggingEnabled
	bool ___s_asyncDebuggingEnabled_9;
	// System.Action`1<System.Object> System.Threading.Tasks.Task::s_taskCancelCallback
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___s_taskCancelCallback_11;
	// System.Func`1<System.Threading.Tasks.Task/ContingentProperties> System.Threading.Tasks.Task::s_createContingentProperties
	Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1* ___s_createContingentProperties_14;
	// System.Threading.Tasks.TaskFactory System.Threading.Tasks.Task::<Factory>k__BackingField
	TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0* ___U3CFactoryU3Ek__BackingField_15;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::<CompletedTask>k__BackingField
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___U3CCompletedTaskU3Ek__BackingField_16;
	// System.Predicate`1<System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_IsExceptionObservedByParentPredicate
	Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED* ___s_IsExceptionObservedByParentPredicate_17;
	// System.Threading.ContextCallback System.Threading.Tasks.Task::s_ecCallback
	ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007* ___s_ecCallback_18;
	// System.Predicate`1<System.Object> System.Threading.Tasks.Task::s_IsTaskContinuationNullPredicate
	Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12* ___s_IsTaskContinuationNullPredicate_19;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_currentActiveTasks
	Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55* ___s_currentActiveTasks_20;
	// System.Object System.Threading.Tasks.Task::s_activeTasksLock
	RuntimeObject* ___s_activeTasksLock_21;
};

// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_ThreadStaticFields
{
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::t_currentTask
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___t_currentTask_12;
	// System.Threading.Tasks.StackGuard System.Threading.Tasks.Task::t_stackGuard
	StackGuard_tACE063A1B7374BDF4AD472DE4585D05AD8745352* ___t_stackGuard_13;
};

// Unity.Services.Analytics.TransactionCurrencyConverter

// Unity.Services.Analytics.TransactionCurrencyConverter

// Ua2CoreInitializeCallback

// Ua2CoreInitializeCallback

// Unity.Services.Analytics.Internal.WebRequestHelper

// Unity.Services.Analytics.Internal.WebRequestHelper

// Unity.Services.Analytics.Internal.GeoAPI/WebRequestTaskWrapper

// Unity.Services.Analytics.Internal.GeoAPI/WebRequestTaskWrapper

// Unity.Services.Analytics.Internal.WebRequestHelper/<>c__DisplayClass1_0

// Unity.Services.Analytics.Internal.WebRequestHelper/<>c__DisplayClass1_0

// Unity.Services.Analytics.Internal.GeoAPI/WebRequestTaskWrapper/<>c__DisplayClass2_0

// Unity.Services.Analytics.Internal.GeoAPI/WebRequestTaskWrapper/<>c__DisplayClass2_0

// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>

// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>

// System.Collections.Generic.KeyValuePair`2<System.String,System.String>

// System.Collections.Generic.KeyValuePair`2<System.String,System.String>

// System.Nullable`1<System.Double>

// System.Nullable`1<System.Double>

// System.Nullable`1<System.Int64>

// System.Nullable`1<System.Int64>

// System.Nullable`1<System.Single>

// System.Nullable`1<System.Single>

// System.Runtime.CompilerServices.TaskAwaiter`1<Unity.Services.Analytics.Internal.GeoIPResponse>

// System.Runtime.CompilerServices.TaskAwaiter`1<Unity.Services.Analytics.Internal.GeoIPResponse>

// System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>

// System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>

// System.Runtime.CompilerServices.TaskAwaiter`1<UnityEngine.Networking.UnityWebRequestAsyncOperation>

// System.Runtime.CompilerServices.TaskAwaiter`1<UnityEngine.Networking.UnityWebRequestAsyncOperation>

// System.Threading.Tasks.Task`1<System.Collections.Generic.List`1<System.String>>
struct Task_1_tC46C9EBCBC033211372E7FFA650937B48144AB1D_StaticFields
{
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_defaultFactory
	TaskFactory_1_tC329C8C070F6C9CB24E2A226B02F2CD53832F0F5* ___s_defaultFactory_23;
};

// System.Threading.Tasks.Task`1<System.Collections.Generic.List`1<System.String>>

// System.Threading.Tasks.Task`1<Unity.Services.Analytics.Internal.GeoIPResponse>
struct Task_1_t3F0E026C38791877CBE0DEC23CD10E9103FBA9B2_StaticFields
{
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_defaultFactory
	TaskFactory_1_tA5E308F830038D55E1CE6BE5FEE446DA907860DD* ___s_defaultFactory_23;
};

// System.Threading.Tasks.Task`1<Unity.Services.Analytics.Internal.GeoIPResponse>

// System.Threading.Tasks.Task`1<System.Object>
struct Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2_StaticFields
{
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_defaultFactory
	TaskFactory_1_t6F188FE70F3006B0386002E392B799D85100732B* ___s_defaultFactory_23;
};

// System.Threading.Tasks.Task`1<System.Object>

// System.Threading.Tasks.Task`1<UnityEngine.Networking.UnityWebRequestAsyncOperation>
struct Task_1_t892C4382C6E738570B24B25E2972B303E8EB849F_StaticFields
{
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_defaultFactory
	TaskFactory_1_tEAC8771A2FE22FC3892F9623A8990888D483D322* ___s_defaultFactory_23;
};

// System.Threading.Tasks.Task`1<UnityEngine.Networking.UnityWebRequestAsyncOperation>

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// System.Byte

// System.Byte

// Unity.Services.Core.Internal.CoreRegistration

// Unity.Services.Core.Internal.CoreRegistration

// System.DateTime
struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_StaticFields
{
	// System.Int32[] System.DateTime::s_daysToMonth365
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth365_30;
	// System.Int32[] System.DateTime::s_daysToMonth366
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth366_31;
	// System.DateTime System.DateTime::MinValue
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___MinValue_32;
	// System.DateTime System.DateTime::MaxValue
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___MaxValue_33;
	// System.DateTime System.DateTime::UnixEpoch
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___UnixEpoch_34;
};

// System.DateTime

// System.Double

// System.Double

// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_StaticFields
{
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___enumSeperatorCharArray_0;
};

// System.Enum

// System.Guid
struct Guid_t_StaticFields
{
	// System.Guid System.Guid::Empty
	Guid_t ___Empty_0;
};

// System.Guid

// System.Int32

// System.Int32

// System.Int64

// System.Int64

// System.IntPtr
struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.IntPtr

// System.Single

// System.Single

// System.IO.Stream
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE_StaticFields
{
	// System.IO.Stream System.IO.Stream::Null
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___Null_1;
};

// System.IO.Stream

// System.Runtime.CompilerServices.TaskAwaiter

// System.Runtime.CompilerServices.TaskAwaiter

// System.TimeSpan
struct TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_StaticFields
{
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___Zero_19;
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___MaxValue_20;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___MinValue_21;
};

// System.TimeSpan

// System.Void

// System.Void

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Collections.Generic.List`1<System.String>>
struct AsyncTaskMethodBuilder_1_t6C6A8B677F9E92A76A93C9D97B66849EBECA0FE6_StaticFields
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::s_defaultResultTask
	Task_1_tC46C9EBCBC033211372E7FFA650937B48144AB1D* ___s_defaultResultTask_0;
};

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Collections.Generic.List`1<System.String>>

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Unity.Services.Analytics.Internal.GeoIPResponse>
struct AsyncTaskMethodBuilder_1_tCC71288BC6FD1578916420F041FD9DD930D2EEE5_StaticFields
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::s_defaultResultTask
	Task_1_t3F0E026C38791877CBE0DEC23CD10E9103FBA9B2* ___s_defaultResultTask_0;
};

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Unity.Services.Analytics.Internal.GeoIPResponse>

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>
struct AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0_StaticFields
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::s_defaultResultTask
	Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* ___s_defaultResultTask_0;
};

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>

// System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.String>

// System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.String>

// Unity.Services.Analytics.AnalyticsServiceInstance

// Unity.Services.Analytics.AnalyticsServiceInstance

// UnityEngine.AsyncOperation

// UnityEngine.AsyncOperation

// UnityEngine.Networking.DownloadHandler

// UnityEngine.Networking.DownloadHandler

// System.Exception
struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};

// System.Exception

// System.IO.FileStream
struct FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8_StaticFields
{
	// System.Byte[] System.IO.FileStream::buf_recycle
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buf_recycle_4;
	// System.Object System.IO.FileStream::buf_recycle_lock
	RuntimeObject* ___buf_recycle_lock_5;
};

// System.IO.FileStream

// System.IO.MemoryStream

// System.IO.MemoryStream

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};

// UnityEngine.Object

// Unity.Services.Analytics.Data.StdCommonParams

// Unity.Services.Analytics.Data.StdCommonParams

// UnityEngine.Networking.UploadHandler

// UnityEngine.Networking.UploadHandler

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder
struct AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_StaticFields
{
	// System.Threading.Tasks.Task`1<System.Threading.Tasks.VoidTaskResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder::s_cachedCompleted
	Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17* ___s_cachedCompleted_0;
};

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder

// UnityEngine.Networking.DownloadHandlerBuffer

// UnityEngine.Networking.DownloadHandlerBuffer

// UnityEngine.GameObject

// UnityEngine.GameObject

// Unity.Services.Core.RequestFailedException

// Unity.Services.Core.RequestFailedException

// Unity.Services.Core.ServicesInitializationException

// Unity.Services.Core.ServicesInitializationException

// UnityEngine.Networking.UnityWebRequest

// UnityEngine.Networking.UnityWebRequest

// UnityEngine.Networking.UnityWebRequestAsyncOperation

// UnityEngine.Networking.UnityWebRequestAsyncOperation

// UnityEngine.Networking.UploadHandlerRaw

// UnityEngine.Networking.UploadHandlerRaw

// Unity.Services.Analytics.AnalyticsServiceInstance/<CheckForRequiredConsents>d__0

// Unity.Services.Analytics.AnalyticsServiceInstance/<CheckForRequiredConsents>d__0

// Unity.Services.Analytics.Internal.ConsentTracker/<CheckGeoIP>d__19

// Unity.Services.Analytics.Internal.ConsentTracker/<CheckGeoIP>d__19

// Unity.Services.Analytics.Internal.ConsentTracker/<GetGeoIPResponse>d__33

// Unity.Services.Analytics.Internal.ConsentTracker/<GetGeoIPResponse>d__33

// Unity.Services.Analytics.Internal.GeoAPI/<MakeRequest>d__1

// Unity.Services.Analytics.Internal.GeoAPI/<MakeRequest>d__1

// System.Action`1<UnityEngine.AsyncOperation>

// System.Action`1<UnityEngine.AsyncOperation>

// System.Action`1<System.Int64>

// System.Action`1<System.Int64>

// System.Action

// System.Action

// Unity.Services.Analytics.Internal.AnalyticsWebRequest

// Unity.Services.Analytics.Internal.AnalyticsWebRequest

// Unity.Services.Analytics.ConsentCheckException

// Unity.Services.Analytics.ConsentCheckException

// Unity.Services.Analytics.AnalyticsServiceInstance/<Initialize>d__39

// Unity.Services.Analytics.AnalyticsServiceInstance/<Initialize>d__39

// Unity.Services.Analytics.AnalyticsServiceInstance/<InitializeUser>d__40

// Unity.Services.Analytics.AnalyticsServiceInstance/<InitializeUser>d__40

// Ua2CoreInitializeCallback/<Initialize>d__1

// Ua2CoreInitializeCallback/<Initialize>d__1

// System.ArgumentNullException

// System.ArgumentNullException

// UnityEngine.MonoBehaviour

// UnityEngine.MonoBehaviour

// Unity.Services.Analytics.AnalyticsContainer
struct AnalyticsContainer_t80827118296A7273882EB5BAE9AC5207F90BBBE1_StaticFields
{
	// System.Boolean Unity.Services.Analytics.AnalyticsContainer::s_Created
	bool ___s_Created_6;
	// UnityEngine.GameObject Unity.Services.Analytics.AnalyticsContainer::s_Container
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___s_Container_7;
	// Unity.Services.Analytics.AnalyticsContainer Unity.Services.Analytics.AnalyticsContainer::<Instance>k__BackingField
	AnalyticsContainer_t80827118296A7273882EB5BAE9AC5207F90BBBE1* ___U3CInstanceU3Ek__BackingField_10;
};

// Unity.Services.Analytics.AnalyticsContainer
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248  : public RuntimeArray
{
	ALIGN_FIELD (8) String_t* m_Items[1];

	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C  : public RuntimeArray
{
	ALIGN_FIELD (8) int32_t m_Items[1];

	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};


// Unity.Services.Core.Internal.CoreRegistration Unity.Services.Core.Internal.CoreRegistry::RegisterPackage<System.Object>(TPackage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CoreRegistration_tD2BD53556CAA48BD5E0D32CB92C6494C0EB85581 CoreRegistry_RegisterPackage_TisRuntimeObject_m5DF8BA5ABD5476A91872308A910C81D92F1FC6DD_gshared (CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA* __this, RuntimeObject* ___0_package, const RuntimeMethod* method) ;
// Unity.Services.Core.Internal.CoreRegistration Unity.Services.Core.Internal.CoreRegistration::DependsOn<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CoreRegistration_tD2BD53556CAA48BD5E0D32CB92C6494C0EB85581 CoreRegistration_DependsOn_TisRuntimeObject_m3400ECC31E4225994DD0AEDDC45B11A61E95559C_gshared (CoreRegistration_tD2BD53556CAA48BD5E0D32CB92C6494C0EB85581* __this, const RuntimeMethod* method) ;
// Unity.Services.Core.Internal.CoreRegistration Unity.Services.Core.Internal.CoreRegistration::OptionallyDependsOn<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CoreRegistration_tD2BD53556CAA48BD5E0D32CB92C6494C0EB85581 CoreRegistration_OptionallyDependsOn_TisRuntimeObject_m665878F2DB1DB7696E4B4AB9F508D27F40DCBFE5_gshared (CoreRegistration_tD2BD53556CAA48BD5E0D32CB92C6494C0EB85581* __this, const RuntimeMethod* method) ;
// Unity.Services.Core.Internal.CoreRegistration Unity.Services.Core.Internal.CoreRegistration::ProvidesComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CoreRegistration_tD2BD53556CAA48BD5E0D32CB92C6494C0EB85581 CoreRegistration_ProvidesComponent_TisRuntimeObject_mBB6FDBE4AAE276784D193AB900F392199F177650_gshared (CoreRegistration_tD2BD53556CAA48BD5E0D32CB92C6494C0EB85581* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Start<Ua2CoreInitializeCallback/<Initialize>d__1>(TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_Start_TisU3CInitializeU3Ed__1_t99E0C99E5FE14A896385692015A529E07BB77F76_mC5B73B581462BA69A2F6F2C65CDABC9E41EBECBB_gshared (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, U3CInitializeU3Ed__1_t99E0C99E5FE14A896385692015A529E07BB77F76* ___0_stateMachine, const RuntimeMethod* method) ;
// TComponent Unity.Services.Core.Internal.CoreRegistry::GetServiceComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CoreRegistry_GetServiceComponent_TisRuntimeObject_m6C2601CB56CD9AE5154E543B9AA87E10AFCA875C_gshared (CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA* __this, const RuntimeMethod* method) ;
// System.Void Unity.Services.Core.Internal.CoreRegistry::RegisterServiceComponent<System.Object>(TComponent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CoreRegistry_RegisterServiceComponent_TisRuntimeObject_m619D1536EFA7133E95AF878679EFDA3A9CFBC67F_gshared (CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA* __this, RuntimeObject* ___0_component, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,Ua2CoreInitializeCallback/<Initialize>d__1>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CInitializeU3Ed__1_t99E0C99E5FE14A896385692015A529E07BB77F76_mA6CCC473E49B04FBD0815D80CC7D04EB8BDB0A84_gshared (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* ___0_awaiter, U3CInitializeU3Ed__1_t99E0C99E5FE14A896385692015A529E07BB77F76* ___1_stateMachine, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0 AsyncTaskMethodBuilder_1_Create_m6A59453D00C0143F178809ADFD98C90E8C291ABB_gshared (const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::Start<Unity.Services.Analytics.AnalyticsServiceInstance/<CheckForRequiredConsents>d__0>(TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_Start_TisU3CCheckForRequiredConsentsU3Ed__0_tE4974F41B1F427E322B867A158105241B1665396_m85BD48C200179E347A1BA5F12525E5AD32329041_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, U3CCheckForRequiredConsentsU3Ed__0_tE4974F41B1F427E322B867A158105241B1665396* ___0_stateMachine, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::get_Task()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* AsyncTaskMethodBuilder_1_get_Task_mEA092EC6F1324A9D694CF6056FA8583F2A2BDC89_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Start<Unity.Services.Analytics.AnalyticsServiceInstance/<Initialize>d__39>(TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_Start_TisU3CInitializeU3Ed__39_t5D5A95D5CBED3E92245840C7F3C11846EAC2478B_mFC1F1BE19F516884E71F324609B5CAD02EE51014_gshared (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, U3CInitializeU3Ed__39_t5D5A95D5CBED3E92245840C7F3C11846EAC2478B* ___0_stateMachine, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Start<Unity.Services.Analytics.AnalyticsServiceInstance/<InitializeUser>d__40>(TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_Start_TisU3CInitializeUserU3Ed__40_t944DAAD25172C37C6956CB1307FF90D9020B1CE2_mE579C589F9D2A96D3718C3E0B72B3834D6F39B03_gshared (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, U3CInitializeUserU3Ed__40_t944DAAD25172C37C6956CB1307FF90D9020B1CE2* ___0_stateMachine, const RuntimeMethod* method) ;
// System.Boolean System.Nullable`1<System.Single>::get_HasValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mC149B1C717AF506BBE8932F2C1DC86C378D17EA8_gshared_inline (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75* __this, const RuntimeMethod* method) ;
// T System.Nullable`1<System.Single>::GetValueOrDefault()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Nullable_1_GetValueOrDefault_m068A148705ED1E215A5E85D18BA6852B192DA419_gshared_inline (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75* __this, const RuntimeMethod* method) ;
// System.Void System.Nullable`1<System.Double>::.ctor(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1__ctor_mDE3158DD99CA7E1775A8BA276E428AF808AB8FBF_gshared (Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165* __this, double ___0_value, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.TaskAwaiter`1<TResult> System.Threading.Tasks.Task`1<System.Object>::GetAwaiter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA Task_1_GetAwaiter_mD80ED263BF3F1F8DBDBD177BA3401A0AAAFA38E3_gshared (Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* __this, const RuntimeMethod* method) ;
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TaskAwaiter_1_get_IsCompleted_mEEBB09E26F4165A0F864D92E1890CFCD2C8CFD54_gshared (TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>,Unity.Services.Analytics.AnalyticsServiceInstance/<CheckForRequiredConsents>d__0>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA_TisU3CCheckForRequiredConsentsU3Ed__0_tE4974F41B1F427E322B867A158105241B1665396_m9D6180E00ABFAA8BBA0B666EDDD9192F6A9E9FF6_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA* ___0_awaiter, U3CCheckForRequiredConsentsU3Ed__0_tE4974F41B1F427E322B867A158105241B1665396* ___1_stateMachine, const RuntimeMethod* method) ;
// TResult System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TaskAwaiter_1_GetResult_mA4A8A1F43A456B40DDA251D00026C60919AED85B_gshared (TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::SetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetException_mC2F74B26F5303F9F960965220E2866D777F1A5C6_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, Exception_t* ___0_exception, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::SetResult(TResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetResult_m0D83195F995F9825D7A6DCDC3835D6917C43B5A6_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetStateMachine_m3BE54983634ABF5BE05200C7894AD0F9F20BDD65_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,Unity.Services.Analytics.AnalyticsServiceInstance/<Initialize>d__39>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CInitializeU3Ed__39_t5D5A95D5CBED3E92245840C7F3C11846EAC2478B_mE3FFEC839EA7297A022E33BA57E32FCF9467CF8A_gshared (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* ___0_awaiter, U3CInitializeU3Ed__39_t5D5A95D5CBED3E92245840C7F3C11846EAC2478B* ___1_stateMachine, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>,Unity.Services.Analytics.AnalyticsServiceInstance/<InitializeUser>d__40>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA_TisU3CInitializeUserU3Ed__40_t944DAAD25172C37C6956CB1307FF90D9020B1CE2_m0BA6CDB12E0B06BA0DF3DA5DD7772AA7891FFA30_gshared (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA* ___0_awaiter, U3CInitializeUserU3Ed__40_t944DAAD25172C37C6956CB1307FF90D9020B1CE2* ___1_stateMachine, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9 Dictionary_2_GetEnumerator_m52AB12790B0B9B46B1DFB1F861C9DBEAB07C1FDA_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mEA5E01B81EB943B7003D87CEC1B6040524F0402C_gshared (Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 Enumerator_get_Current_mE3475384B761E1C7971D3639BD09117FE8363422_gshared_inline (Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9* __this, const RuntimeMethod* method) ;
// TKey System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Key()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Key_mBD8EA7557C27E6956F2AF29DA3F7499B2F51A282_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_mC6BD8075F9C9DDEF7B4D731E5C38EC19103988E7_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mCD4950A75FFADD54AF354D48C6C0DB0B5A22A5F4_gshared (Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method) ;
// System.Boolean System.Nullable`1<System.Int64>::get_HasValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mB4991C0F4C2664AB3CB2584DEECF5BCE6AB7757D_gshared_inline (Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17* __this, const RuntimeMethod* method) ;
// System.String System.Nullable`1<System.Int64>::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Nullable_1_ToString_m04B6938F577DFC70D695A65C381A5ABCBC441248_gshared (Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Int32>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_gshared_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Int32>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Int32>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_gshared_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_item, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Int32>::Clear()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_mF6795DE5F49C1D0B91D6A0955F448B22970D67A9_gshared_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Int32>::set_Item(System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Item_m95629806F31CF369D937590912E0B6A53FF7C587_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_index, int32_t ___1_value, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Int32>::RemoveRange(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveRange_m1E69C4C8438AA5D7E05C2936C79C01D96F89BE68_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_index, int32_t ___1_count, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::Start<Unity.Services.Analytics.Internal.ConsentTracker/<CheckGeoIP>d__19>(TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_Start_TisU3CCheckGeoIPU3Ed__19_tF4D189FF0813E0397D3684814869EC68573B2913_m1562C2B4CCC280ADB36D2D434C9E2E553A8F7715_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, U3CCheckGeoIPU3Ed__19_tF4D189FF0813E0397D3684814869EC68573B2913* ___0_stateMachine, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::Start<Unity.Services.Analytics.Internal.ConsentTracker/<GetGeoIPResponse>d__33>(TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_Start_TisU3CGetGeoIPResponseU3Ed__33_tEB679EFC74F417928C47D29F932F7D9D7A8C3292_mBE0AEBBB612AB7C87006C85EDEA075DBF1733AFF_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, U3CGetGeoIPResponseU3Ed__33_tEB679EFC74F417928C47D29F932F7D9D7A8C3292* ___0_stateMachine, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>,Unity.Services.Analytics.Internal.ConsentTracker/<CheckGeoIP>d__19>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA_TisU3CCheckGeoIPU3Ed__19_tF4D189FF0813E0397D3684814869EC68573B2913_mA0A6D812257DFA76AD9610A59ECE09F9C68D801D_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA* ___0_awaiter, U3CCheckGeoIPU3Ed__19_tF4D189FF0813E0397D3684814869EC68573B2913* ___1_stateMachine, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>,Unity.Services.Analytics.Internal.ConsentTracker/<GetGeoIPResponse>d__33>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA_TisU3CGetGeoIPResponseU3Ed__33_tEB679EFC74F417928C47D29F932F7D9D7A8C3292_m9B2FD47E269DD9BD888B246A97D71DE869723B9A_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA* ___0_awaiter, U3CGetGeoIPResponseU3Ed__33_tEB679EFC74F417928C47D29F932F7D9D7A8C3292* ___1_stateMachine, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::Start<Unity.Services.Analytics.Internal.GeoAPI/<MakeRequest>d__1>(TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_Start_TisU3CMakeRequestU3Ed__1_t0EF0B916953106E30ADFEE30817391CC38DF6084_m18B21400DBE1081835C8D98213AB847D6005D2DA_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, U3CMakeRequestU3Ed__1_t0EF0B916953106E30ADFEE30817391CC38DF6084* ___0_stateMachine, const RuntimeMethod* method) ;
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskCompletionSource_1__ctor_mBF9A903AD14C4E9CF044B227776C532BA9C40D60_gshared (TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37* __this, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.TaskCompletionSource`1<System.Object>::get_Task()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* TaskCompletionSource_1_get_Task_mF44990297C25C7DBE1E65241C03D0120CB551552_gshared_inline (TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37* __this, const RuntimeMethod* method) ;
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Object>::SetResult(TResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskCompletionSource_1_SetResult_m948378015A7A0E42647452EB7003466406B831A4_gshared (TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>,Unity.Services.Analytics.Internal.GeoAPI/<MakeRequest>d__1>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA_TisU3CMakeRequestU3Ed__1_t0EF0B916953106E30ADFEE30817391CC38DF6084_m51A996EF9F9E67A8B25CF795DB3AC78AFEE6B872_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA* ___0_awaiter, U3CMakeRequestU3Ed__1_t0EF0B916953106E30ADFEE30817391CC38DF6084* ___1_stateMachine, const RuntimeMethod* method) ;
// T Newtonsoft.Json.JsonConvert::DeserializeObject<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonConvert_DeserializeObject_TisRuntimeObject_m4AED5444440BFC03D3CB9506F186AC7C37B45EF2_gshared (String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Int64>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_mC0FC430617EB8A9B54D1632C5BD95979ED5C2C2A_gshared (Action_1_tBB5A52E9AEFBC4F0C8D94D39CAD16BCB6B8B5929* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Int64>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mE4800C6D733A4CDE721FD3D8B4E95319B5C64E9E_gshared_inline (Action_1_tBB5A52E9AEFBC4F0C8D94D39CAD16BCB6B8B5929* __this, int64_t ___0_obj, const RuntimeMethod* method) ;
// System.Boolean System.Nullable`1<System.Double>::get_HasValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mC082C667C8EB3A6CA80E06BCAEA0BED00C6BC15A_gshared_inline (Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165* __this, const RuntimeMethod* method) ;
// T System.Nullable`1<System.Double>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Nullable_1_get_Value_m260A5CB9269FD3E130F998A589EDAEC2E8F9EAE1_gshared (Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165* __this, const RuntimeMethod* method) ;
// System.Void System.Nullable`1<System.Int64>::.ctor(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1__ctor_m117BE9EF6DBC76B088B52AFB80634B9195D384A1_gshared (Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17* __this, int64_t ___0_value, const RuntimeMethod* method) ;

// Unity.Services.Core.Internal.CoreRegistry Unity.Services.Core.Internal.CoreRegistry::get_Instance()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA* CoreRegistry_get_Instance_m73A64BD3CB78EF5AC698D1635B5872CEB9F9AFE2_inline (const RuntimeMethod* method) ;
// System.Void Ua2CoreInitializeCallback::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ua2CoreInitializeCallback__ctor_m096A57E67DE0D5E40E7AB84CF3935A5D7DD898CE (Ua2CoreInitializeCallback_t20D7CCCEDAF24D8AD75CBE5991731A72C70418BD* __this, const RuntimeMethod* method) ;
// Unity.Services.Core.Internal.CoreRegistration Unity.Services.Core.Internal.CoreRegistry::RegisterPackage<Ua2CoreInitializeCallback>(TPackage)
inline CoreRegistration_tD2BD53556CAA48BD5E0D32CB92C6494C0EB85581 CoreRegistry_RegisterPackage_TisUa2CoreInitializeCallback_t20D7CCCEDAF24D8AD75CBE5991731A72C70418BD_m2D03E607E78DEFB5521CD83B02846C48D6EF4F0E (CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA* __this, Ua2CoreInitializeCallback_t20D7CCCEDAF24D8AD75CBE5991731A72C70418BD* ___0_package, const RuntimeMethod* method)
{
	return ((  CoreRegistration_tD2BD53556CAA48BD5E0D32CB92C6494C0EB85581 (*) (CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA*, Ua2CoreInitializeCallback_t20D7CCCEDAF24D8AD75CBE5991731A72C70418BD*, const RuntimeMethod*))CoreRegistry_RegisterPackage_TisRuntimeObject_m5DF8BA5ABD5476A91872308A910C81D92F1FC6DD_gshared)(__this, ___0_package, method);
}
// Unity.Services.Core.Internal.CoreRegistration Unity.Services.Core.Internal.CoreRegistration::DependsOn<Unity.Services.Core.Device.Internal.IInstallationId>()
inline CoreRegistration_tD2BD53556CAA48BD5E0D32CB92C6494C0EB85581 CoreRegistration_DependsOn_TisIInstallationId_tCE6DEEEBAFABEB9EC621BD1646D82BC9D82BFB0C_mA93E2240E092DDA93C08F11936078CD15E581C91 (CoreRegistration_tD2BD53556CAA48BD5E0D32CB92C6494C0EB85581* __this, const RuntimeMethod* method)
{
	return ((  CoreRegistration_tD2BD53556CAA48BD5E0D32CB92C6494C0EB85581 (*) (CoreRegistration_tD2BD53556CAA48BD5E0D32CB92C6494C0EB85581*, const RuntimeMethod*))CoreRegistration_DependsOn_TisRuntimeObject_m3400ECC31E4225994DD0AEDDC45B11A61E95559C_gshared)(__this, method);
}
// Unity.Services.Core.Internal.CoreRegistration Unity.Services.Core.Internal.CoreRegistration::DependsOn<Unity.Services.Core.Configuration.Internal.ICloudProjectId>()
inline CoreRegistration_tD2BD53556CAA48BD5E0D32CB92C6494C0EB85581 CoreRegistration_DependsOn_TisICloudProjectId_t366B66869ECC734B15C1F60633D2B998CD9231FE_mE5B2A026998399E51D853DF4B3D4F9AA85BF84D4 (CoreRegistration_tD2BD53556CAA48BD5E0D32CB92C6494C0EB85581* __this, const RuntimeMethod* method)
{
	return ((  CoreRegistration_tD2BD53556CAA48BD5E0D32CB92C6494C0EB85581 (*) (CoreRegistration_tD2BD53556CAA48BD5E0D32CB92C6494C0EB85581*, const RuntimeMethod*))CoreRegistration_DependsOn_TisRuntimeObject_m3400ECC31E4225994DD0AEDDC45B11A61E95559C_gshared)(__this, method);
}
// Unity.Services.Core.Internal.CoreRegistration Unity.Services.Core.Internal.CoreRegistration::DependsOn<Unity.Services.Core.Environments.Internal.IEnvironments>()
inline CoreRegistration_tD2BD53556CAA48BD5E0D32CB92C6494C0EB85581 CoreRegistration_DependsOn_TisIEnvironments_t9DCAF0398EB856DBE771A9C2D7B120661D628CB7_mF32D3AEE8770313EFCC77D92013AF760CBABCD64 (CoreRegistration_tD2BD53556CAA48BD5E0D32CB92C6494C0EB85581* __this, const RuntimeMethod* method)
{
	return ((  CoreRegistration_tD2BD53556CAA48BD5E0D32CB92C6494C0EB85581 (*) (CoreRegistration_tD2BD53556CAA48BD5E0D32CB92C6494C0EB85581*, const RuntimeMethod*))CoreRegistration_DependsOn_TisRuntimeObject_m3400ECC31E4225994DD0AEDDC45B11A61E95559C_gshared)(__this, method);
}
// Unity.Services.Core.Internal.CoreRegistration Unity.Services.Core.Internal.CoreRegistration::DependsOn<Unity.Services.Core.Configuration.Internal.IExternalUserId>()
inline CoreRegistration_tD2BD53556CAA48BD5E0D32CB92C6494C0EB85581 CoreRegistration_DependsOn_TisIExternalUserId_t50A07D7165D254D971AA529FFE55B4A595A75F25_mCABAC7BD58204E9E5B80544CF9D413AEC53772DD (CoreRegistration_tD2BD53556CAA48BD5E0D32CB92C6494C0EB85581* __this, const RuntimeMethod* method)
{
	return ((  CoreRegistration_tD2BD53556CAA48BD5E0D32CB92C6494C0EB85581 (*) (CoreRegistration_tD2BD53556CAA48BD5E0D32CB92C6494C0EB85581*, const RuntimeMethod*))CoreRegistration_DependsOn_TisRuntimeObject_m3400ECC31E4225994DD0AEDDC45B11A61E95559C_gshared)(__this, method);
}
// Unity.Services.Core.Internal.CoreRegistration Unity.Services.Core.Internal.CoreRegistration::DependsOn<Unity.Services.Core.Configuration.Internal.IProjectConfiguration>()
inline CoreRegistration_tD2BD53556CAA48BD5E0D32CB92C6494C0EB85581 CoreRegistration_DependsOn_TisIProjectConfiguration_tB5A7516DEB869AD005431EC83C6E02221D2B60D2_mFE611D2FD196728ACC376EAB06D4F2664D8FDD10 (CoreRegistration_tD2BD53556CAA48BD5E0D32CB92C6494C0EB85581* __this, const RuntimeMethod* method)
{
	return ((  CoreRegistration_tD2BD53556CAA48BD5E0D32CB92C6494C0EB85581 (*) (CoreRegistration_tD2BD53556CAA48BD5E0D32CB92C6494C0EB85581*, const RuntimeMethod*))CoreRegistration_DependsOn_TisRuntimeObject_m3400ECC31E4225994DD0AEDDC45B11A61E95559C_gshared)(__this, method);
}
// Unity.Services.Core.Internal.CoreRegistration Unity.Services.Core.Internal.CoreRegistration::OptionallyDependsOn<Unity.Services.Authentication.Internal.IPlayerId>()
inline CoreRegistration_tD2BD53556CAA48BD5E0D32CB92C6494C0EB85581 CoreRegistration_OptionallyDependsOn_TisIPlayerId_t6A7BAE55B4D78E87B15B9261828E897BAACBF913_m5F08ADC17E47CCBEEDC9C48CC64F5A475CCFD286 (CoreRegistration_tD2BD53556CAA48BD5E0D32CB92C6494C0EB85581* __this, const RuntimeMethod* method)
{
	return ((  CoreRegistration_tD2BD53556CAA48BD5E0D32CB92C6494C0EB85581 (*) (CoreRegistration_tD2BD53556CAA48BD5E0D32CB92C6494C0EB85581*, const RuntimeMethod*))CoreRegistration_OptionallyDependsOn_TisRuntimeObject_m665878F2DB1DB7696E4B4AB9F508D27F40DCBFE5_gshared)(__this, method);
}
// Unity.Services.Core.Internal.CoreRegistration Unity.Services.Core.Internal.CoreRegistration::ProvidesComponent<Unity.Services.Core.Analytics.Internal.IAnalyticsStandardEventComponent>()
inline CoreRegistration_tD2BD53556CAA48BD5E0D32CB92C6494C0EB85581 CoreRegistration_ProvidesComponent_TisIAnalyticsStandardEventComponent_tF6FA10DAAE59FC2DD9C6441D6B2E8BDA6EDDA807_m4CCB17ADEC6343A3DE09DC770F1F49B45FFA4942 (CoreRegistration_tD2BD53556CAA48BD5E0D32CB92C6494C0EB85581* __this, const RuntimeMethod* method)
{
	return ((  CoreRegistration_tD2BD53556CAA48BD5E0D32CB92C6494C0EB85581 (*) (CoreRegistration_tD2BD53556CAA48BD5E0D32CB92C6494C0EB85581*, const RuntimeMethod*))CoreRegistration_ProvidesComponent_TisRuntimeObject_mBB6FDBE4AAE276784D193AB900F392199F177650_gshared)(__this, method);
}
// System.Runtime.CompilerServices.AsyncTaskMethodBuilder System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06 AsyncTaskMethodBuilder_Create_m24F3F260A79CA2B9EC4F1F15693A33F5EC58735A (const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Start<Ua2CoreInitializeCallback/<Initialize>d__1>(TStateMachine&)
inline void AsyncTaskMethodBuilder_Start_TisU3CInitializeU3Ed__1_t99E0C99E5FE14A896385692015A529E07BB77F76_mC5B73B581462BA69A2F6F2C65CDABC9E41EBECBB (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, U3CInitializeU3Ed__1_t99E0C99E5FE14A896385692015A529E07BB77F76* ___0_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06*, U3CInitializeU3Ed__1_t99E0C99E5FE14A896385692015A529E07BB77F76*, const RuntimeMethod*))AsyncTaskMethodBuilder_Start_TisU3CInitializeU3Ed__1_t99E0C99E5FE14A896385692015A529E07BB77F76_mC5B73B581462BA69A2F6F2C65CDABC9E41EBECBB_gshared)(__this, ___0_stateMachine, method);
}
// System.Threading.Tasks.Task System.Runtime.CompilerServices.AsyncTaskMethodBuilder::get_Task()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* AsyncTaskMethodBuilder_get_Task_mE9125D5F8B96F26D1BA5A5347ED82669521C7F9E (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// TComponent Unity.Services.Core.Internal.CoreRegistry::GetServiceComponent<Unity.Services.Core.Configuration.Internal.ICloudProjectId>()
inline RuntimeObject* CoreRegistry_GetServiceComponent_TisICloudProjectId_t366B66869ECC734B15C1F60633D2B998CD9231FE_mF7458A4E56377FCF3301F3ECE3A64B8C709EB38F (CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA*, const RuntimeMethod*))CoreRegistry_GetServiceComponent_TisRuntimeObject_m6C2601CB56CD9AE5154E543B9AA87E10AFCA875C_gshared)(__this, method);
}
// TComponent Unity.Services.Core.Internal.CoreRegistry::GetServiceComponent<Unity.Services.Core.Device.Internal.IInstallationId>()
inline RuntimeObject* CoreRegistry_GetServiceComponent_TisIInstallationId_tCE6DEEEBAFABEB9EC621BD1646D82BC9D82BFB0C_m154CDEFCDF91B08E20C3D0DAE197A8AD04AAE70F (CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA*, const RuntimeMethod*))CoreRegistry_GetServiceComponent_TisRuntimeObject_m6C2601CB56CD9AE5154E543B9AA87E10AFCA875C_gshared)(__this, method);
}
// TComponent Unity.Services.Core.Internal.CoreRegistry::GetServiceComponent<Unity.Services.Authentication.Internal.IPlayerId>()
inline RuntimeObject* CoreRegistry_GetServiceComponent_TisIPlayerId_t6A7BAE55B4D78E87B15B9261828E897BAACBF913_mAA43670CFBC53A1BB132782BB187BE8BF0D90BEC (CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA*, const RuntimeMethod*))CoreRegistry_GetServiceComponent_TisRuntimeObject_m6C2601CB56CD9AE5154E543B9AA87E10AFCA875C_gshared)(__this, method);
}
// TComponent Unity.Services.Core.Internal.CoreRegistry::GetServiceComponent<Unity.Services.Core.Environments.Internal.IEnvironments>()
inline RuntimeObject* CoreRegistry_GetServiceComponent_TisIEnvironments_t9DCAF0398EB856DBE771A9C2D7B120661D628CB7_mB14B4F5C7C715C037C3D0B96AD44CFBC570659AF (CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA*, const RuntimeMethod*))CoreRegistry_GetServiceComponent_TisRuntimeObject_m6C2601CB56CD9AE5154E543B9AA87E10AFCA875C_gshared)(__this, method);
}
// TComponent Unity.Services.Core.Internal.CoreRegistry::GetServiceComponent<Unity.Services.Core.Configuration.Internal.IExternalUserId>()
inline RuntimeObject* CoreRegistry_GetServiceComponent_TisIExternalUserId_t50A07D7165D254D971AA529FFE55B4A595A75F25_m943FC6CF014F0065DD2E93EC1C7830093F6B1918 (CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA*, const RuntimeMethod*))CoreRegistry_GetServiceComponent_TisRuntimeObject_m6C2601CB56CD9AE5154E543B9AA87E10AFCA875C_gshared)(__this, method);
}
// System.Void Unity.Services.Analytics.CoreStatsHelper::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CoreStatsHelper__ctor_mD543DD28C5F258FC9B9BDD30D0192F8A7ECF9DF4 (CoreStatsHelper_tBF3F119096A7ABBDDC9F22ACBF13FA25FCD166E6* __this, const RuntimeMethod* method) ;
// System.Void Unity.Services.Analytics.Internal.ConsentTracker::.ctor(Unity.Services.Analytics.ICoreStatsHelper)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConsentTracker__ctor_m478B76472BE051496CB2D8EE77D91DED3D332E5A (ConsentTracker_tBDC1E317516ED67AC655A7D3B1D44EF5666B3FC4* __this, RuntimeObject* ___0_coreStatsHelper, const RuntimeMethod* method) ;
// System.Void Unity.Services.Analytics.Internal.BufferSystemCalls::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BufferSystemCalls__ctor_m11A81CCB33E4BA6C679E191AB344CC3277C57B8C (BufferSystemCalls_t30CA07BE3DD2F29E9F7036ED838F0C92A50480F1* __this, const RuntimeMethod* method) ;
// System.Void Unity.Services.Analytics.Internal.FileSystemCalls::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileSystemCalls__ctor_mED48303E0E5ADE100ED297D2F82072B5162F3E2A (FileSystemCalls_t1A2213109FA10AFB80C343E28A45F13F053970A3* __this, const RuntimeMethod* method) ;
// System.Void Unity.Services.Analytics.Internal.DiskCache::.ctor(Unity.Services.Analytics.Internal.IFileSystemCalls)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DiskCache__ctor_mBA8B9A9ECF83506913BC62A4782F490C2D300263 (DiskCache_tE19D214B0538F2CC9D59D4F827B480AEBCEF368D* __this, RuntimeObject* ___0_systemCalls, const RuntimeMethod* method) ;
// System.Void Unity.Services.Analytics.Internal.BufferX::.ctor(Unity.Services.Analytics.Internal.IBufferSystemCalls,Unity.Services.Analytics.Internal.IDiskCache)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BufferX__ctor_mBBE8167311FE2989DC8174E1DFB53EB59276540C (BufferX_t61043C3179F78166341D64689A662C738496055C* __this, RuntimeObject* ___0_eventIdGenerator, RuntimeObject* ___1_diskCache, const RuntimeMethod* method) ;
// System.Void Unity.Services.Analytics.Data.DataGenerator::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataGenerator__ctor_m659FA5FD00306B47B1A9D7461343C53EBCC0E85C (DataGenerator_t25BC607B3B6D456EAA5DC9C3F600C4B560800183* __this, const RuntimeMethod* method) ;
// System.Void Unity.Services.Analytics.Internal.BufferRevoked::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BufferRevoked__ctor_m208AEF741C576200CF78EA83EF4DE08DBD27D0B2 (BufferRevoked_t713408989DEAED79FCDEFED9B0437CC6991DF6B3* __this, const RuntimeMethod* method) ;
// System.Void Unity.Services.Analytics.Internal.WebRequestHelper::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebRequestHelper__ctor_m5F76E493A0C15311928DCCCCE293752DF3DA0CC9 (WebRequestHelper_t90785D95A7FBCCA284192A9CB95D1DA845D57E71* __this, const RuntimeMethod* method) ;
// System.Void Unity.Services.Analytics.Internal.Dispatcher::.ctor(Unity.Services.Analytics.Internal.IWebRequestHelper,Unity.Services.Analytics.Internal.IConsentTracker)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dispatcher__ctor_m63839CA4DC01ABB9FBE8CAB8E30101DEDAD36386 (Dispatcher_t60105C40E4336C76AECD5AF26D5C6A9448D3ECAE* __this, RuntimeObject* ___0_webRequestHelper, RuntimeObject* ___1_consentTracker, const RuntimeMethod* method) ;
// System.Void Unity.Services.Analytics.Internal.AnalyticsForgetter::.ctor(Unity.Services.Analytics.Internal.IConsentTracker)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnalyticsForgetter__ctor_mDBE2B4DD936DA8DC859F9E5D7F644CD2D3CBE3B8 (AnalyticsForgetter_tA1B9D1F48FB306C80BE60C9858646BC1368948C0* __this, RuntimeObject* ___0_consentTracker, const RuntimeMethod* method) ;
// System.Void Unity.Services.Analytics.AnalyticsServiceSystemCalls::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnalyticsServiceSystemCalls__ctor_m0CE98AA41596DAEC3FE38B2657205368207C45D0 (AnalyticsServiceSystemCalls_tA75EFB9A19C30CBFEABF5BF0578E1636083AC745* __this, const RuntimeMethod* method) ;
// System.Void Unity.Services.Analytics.AnalyticsServiceInstance::.ctor(Unity.Services.Analytics.Data.IDataGenerator,Unity.Services.Analytics.Internal.IBuffer,Unity.Services.Analytics.Internal.IBuffer,Unity.Services.Analytics.ICoreStatsHelper,Unity.Services.Analytics.Internal.IConsentTracker,Unity.Services.Analytics.Internal.IDispatcher,Unity.Services.Analytics.Internal.IAnalyticsForgetter,Unity.Services.Core.Configuration.Internal.ICloudProjectId,Unity.Services.Core.Device.Internal.IInstallationId,Unity.Services.Authentication.Internal.IPlayerId,System.String,Unity.Services.Core.Configuration.Internal.IExternalUserId,Unity.Services.Analytics.IAnalyticsServiceSystemCalls)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnalyticsServiceInstance__ctor_mB42B8934E22F1828A6B87E8F4F115999B40337F5 (AnalyticsServiceInstance_t85C6639220B0EFF1CB3C517E36C6B55385A56A62* __this, RuntimeObject* ___0_dataGenerator, RuntimeObject* ___1_realBuffer, RuntimeObject* ___2_revokedBuffer, RuntimeObject* ___3_coreStatsHelper, RuntimeObject* ___4_consentTracker, RuntimeObject* ___5_dispatcher, RuntimeObject* ___6_forgetter, RuntimeObject* ___7_cloudProjectId, RuntimeObject* ___8_installId, RuntimeObject* ___9_playerId, String_t* ___10_environment, RuntimeObject* ___11_customAnalyticsId, RuntimeObject* ___12_systemCalls, const RuntimeMethod* method) ;
// TComponent Unity.Services.Core.Internal.CoreRegistry::GetServiceComponent<Unity.Services.Core.Configuration.Internal.IProjectConfiguration>()
inline RuntimeObject* CoreRegistry_GetServiceComponent_TisIProjectConfiguration_tB5A7516DEB869AD005431EC83C6E02221D2B60D2_mF70AFB94326EDB167066B7836231B13A52150312 (CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA*, const RuntimeMethod*))CoreRegistry_GetServiceComponent_TisRuntimeObject_m6C2601CB56CD9AE5154E543B9AA87E10AFCA875C_gshared)(__this, method);
}
// System.Void Unity.Services.Analytics.Internal.StandardEventServiceComponent::.ctor(Unity.Services.Core.Configuration.Internal.IProjectConfiguration,Unity.Services.Analytics.IUnstructuredEventRecorder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StandardEventServiceComponent__ctor_mED8BAC8D2E1D561A6DCB4A1F35D4E7A60553CB87 (StandardEventServiceComponent_t587EC5F02461A7AD305539BAB07A2B93FD56E2BB* __this, RuntimeObject* ___0_configuration, RuntimeObject* ___1_analyticsService, const RuntimeMethod* method) ;
// System.Void Unity.Services.Core.Internal.CoreRegistry::RegisterServiceComponent<Unity.Services.Core.Analytics.Internal.IAnalyticsStandardEventComponent>(TComponent)
inline void CoreRegistry_RegisterServiceComponent_TisIAnalyticsStandardEventComponent_tF6FA10DAAE59FC2DD9C6441D6B2E8BDA6EDDA807_mBC81DFA289107F2FAEAC53E5B7785A2C65A76905 (CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA* __this, RuntimeObject* ___0_component, const RuntimeMethod* method)
{
	((  void (*) (CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA*, RuntimeObject*, const RuntimeMethod*))CoreRegistry_RegisterServiceComponent_TisRuntimeObject_m619D1536EFA7133E95AF878679EFDA3A9CFBC67F_gshared)(__this, ___0_component, method);
}
// System.Void Unity.Services.Analytics.Internal.BufferX::LoadFromDisk()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BufferX_LoadFromDisk_mFB29842DE8FE800E9569220B34C4B0958FFE493D (BufferX_t61043C3179F78166341D64689A662C738496055C* __this, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task Unity.Services.Analytics.AnalyticsServiceInstance::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* AnalyticsServiceInstance_Initialize_m032205905C559C546317DACA9821F51098C4123D (AnalyticsServiceInstance_t85C6639220B0EFF1CB3C517E36C6B55385A56A62* __this, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.TaskAwaiter System.Threading.Tasks.Task::GetAwaiter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 Task_GetAwaiter_m08B368EAC939DD35D0AC428180822255A442CA29 (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* __this, const RuntimeMethod* method) ;
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TaskAwaiter_get_IsCompleted_mC236D276FBE3A271B56EE13FCAF2C96E48453ED8 (TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,Ua2CoreInitializeCallback/<Initialize>d__1>(TAwaiter&,TStateMachine&)
inline void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CInitializeU3Ed__1_t99E0C99E5FE14A896385692015A529E07BB77F76_mA6CCC473E49B04FBD0815D80CC7D04EB8BDB0A84 (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* ___0_awaiter, U3CInitializeU3Ed__1_t99E0C99E5FE14A896385692015A529E07BB77F76* ___1_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06*, TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833*, U3CInitializeU3Ed__1_t99E0C99E5FE14A896385692015A529E07BB77F76*, const RuntimeMethod*))AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CInitializeU3Ed__1_t99E0C99E5FE14A896385692015A529E07BB77F76_mA6CCC473E49B04FBD0815D80CC7D04EB8BDB0A84_gshared)(__this, ___0_awaiter, ___1_stateMachine, method);
}
// System.Void System.Runtime.CompilerServices.TaskAwaiter::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskAwaiter_GetResult_mC1D712500AE49B4A89C85D6B79D87D1BA9A6B94D (TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* __this, const RuntimeMethod* method) ;
// System.Boolean Unity.Services.Analytics.Internal.ConsentTracker::IsGeoIpChecked()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConsentTracker_IsGeoIpChecked_m59099E930C861F18CAF7D68E0546C5D05663E50E (ConsentTracker_tBDC1E317516ED67AC655A7D3B1D44EF5666B3FC4* __this, const RuntimeMethod* method) ;
// System.Void Unity.Services.Analytics.AnalyticsServiceInstance::Flush()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnalyticsServiceInstance_Flush_mB8F0ED919FB47026C5CB61DD3562FAA09009C21E (AnalyticsServiceInstance_t85C6639220B0EFF1CB3C517E36C6B55385A56A62* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::SetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_SetException_mBE41863F0571E0177A15731294087DE45E1FC10B (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, Exception_t* ___0_exception, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::SetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_SetResult_m76D8B84F0068257C1823B1200B00E58E0C8DDDDE (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, const RuntimeMethod* method) ;
// System.Void Ua2CoreInitializeCallback/<Initialize>d__1::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CInitializeU3Ed__1_MoveNext_m6D1294910570A31C8D7E15AB3BE8B001184D85D5 (U3CInitializeU3Ed__1_t99E0C99E5FE14A896385692015A529E07BB77F76* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_SetStateMachine_mE52B5B6B076025592A7AB462E3D26FA434AEB795 (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) ;
// System.Void Ua2CoreInitializeCallback/<Initialize>d__1::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CInitializeU3Ed__1_SetStateMachine_mA709A8AC5E4AB1755D3691BAF4474C4148808268 (U3CInitializeU3Ed__1_t99E0C99E5FE14A896385692015A529E07BB77F76* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) ;
// System.Void Unity.Services.Core.ServicesInitializationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ServicesInitializationException__ctor_m638AF9055D8C8C6BA7AC554FF3066C26EA869F55 (ServicesInitializationException_tBF84F1801B1054DE91A79436CA6D3FA5F0F68631* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Collections.Generic.List`1<System.String>>::Create()
inline AsyncTaskMethodBuilder_1_t6C6A8B677F9E92A76A93C9D97B66849EBECA0FE6 AsyncTaskMethodBuilder_1_Create_mC389C6193935CB0A93B35EB80DD27B55760DA315 (const RuntimeMethod* method)
{
	return ((  AsyncTaskMethodBuilder_1_t6C6A8B677F9E92A76A93C9D97B66849EBECA0FE6 (*) (const RuntimeMethod*))AsyncTaskMethodBuilder_1_Create_m6A59453D00C0143F178809ADFD98C90E8C291ABB_gshared)(method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Collections.Generic.List`1<System.String>>::Start<Unity.Services.Analytics.AnalyticsServiceInstance/<CheckForRequiredConsents>d__0>(TStateMachine&)
inline void AsyncTaskMethodBuilder_1_Start_TisU3CCheckForRequiredConsentsU3Ed__0_tE4974F41B1F427E322B867A158105241B1665396_m69AA1E1E57283E1AE668FF20AE4AFFD14FFD9833 (AsyncTaskMethodBuilder_1_t6C6A8B677F9E92A76A93C9D97B66849EBECA0FE6* __this, U3CCheckForRequiredConsentsU3Ed__0_tE4974F41B1F427E322B867A158105241B1665396* ___0_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t6C6A8B677F9E92A76A93C9D97B66849EBECA0FE6*, U3CCheckForRequiredConsentsU3Ed__0_tE4974F41B1F427E322B867A158105241B1665396*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_Start_TisU3CCheckForRequiredConsentsU3Ed__0_tE4974F41B1F427E322B867A158105241B1665396_m85BD48C200179E347A1BA5F12525E5AD32329041_gshared)(__this, ___0_stateMachine, method);
}
// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Collections.Generic.List`1<System.String>>::get_Task()
inline Task_1_tC46C9EBCBC033211372E7FFA650937B48144AB1D* AsyncTaskMethodBuilder_1_get_Task_m7DDA6B2D1E56036D887F4673F2420A0FB4E0569B (AsyncTaskMethodBuilder_1_t6C6A8B677F9E92A76A93C9D97B66849EBECA0FE6* __this, const RuntimeMethod* method)
{
	return ((  Task_1_tC46C9EBCBC033211372E7FFA650937B48144AB1D* (*) (AsyncTaskMethodBuilder_1_t6C6A8B677F9E92A76A93C9D97B66849EBECA0FE6*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_get_Task_mEA092EC6F1324A9D694CF6056FA8583F2A2BDC89_gshared)(__this, method);
}
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
// System.Void Unity.Services.Analytics.AnalyticsServiceInstance::RevokeWithForgetEvent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnalyticsServiceInstance_RevokeWithForgetEvent_m47219E952DF689818346D5F22005DA76BAA70DF0 (AnalyticsServiceInstance_t85C6639220B0EFF1CB3C517E36C6B55385A56A62* __this, const RuntimeMethod* method) ;
// System.Void Unity.Services.Analytics.AnalyticsServiceInstance::Revoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnalyticsServiceInstance_Revoke_mE996CF16F921425F885EB14591D241FAB13EE511 (AnalyticsServiceInstance_t85C6639220B0EFF1CB3C517E36C6B55385A56A62* __this, const RuntimeMethod* method) ;
// System.Void Unity.Services.Analytics.AnalyticsServiceInstance::SwapToRevokedBuffer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnalyticsServiceInstance_SwapToRevokedBuffer_m3C0C7A5B3195A050BCF4586AB05B47062143F1DA (AnalyticsServiceInstance_t85C6639220B0EFF1CB3C517E36C6B55385A56A62* __this, const RuntimeMethod* method) ;
// System.Void Unity.Services.Analytics.AnalyticsContainer::DestroyContainer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnalyticsContainer_DestroyContainer_m3E5CEA90A331B91C79BFED5D1CB0FFC07BC55B27 (const RuntimeMethod* method) ;
// System.DateTime System.DateTime::get_Now()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D DateTime_get_Now_m636CB9651A9099D20BA1CF813A0C69637317325C (const RuntimeMethod* method) ;
// System.String Unity.Services.Analytics.Internal.BufferX::SerializeDateTime(System.DateTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BufferX_SerializeDateTime_m1B8DB0257F014D2E517B2EB94CC80B5A879DB654 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___0_dateTime, const RuntimeMethod* method) ;
// System.Void System.Action::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.TimeSpan System.TimeSpan::FromMinutes(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A TimeSpan_FromMinutes_m5748E4C33327BC758C73B6DAE1BDD6BF44711CB5 (double ___0_value, const RuntimeMethod* method) ;
// System.Void Unity.Services.Analytics.TransactionCurrencyConverter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransactionCurrencyConverter__ctor_m5ACA84E75A13698EAF50E70DF0FA9FA1EC7DBFFD (TransactionCurrencyConverter_t3296A312BAFE7A8FC56182C3D53BEFD1D9474133* __this, const RuntimeMethod* method) ;
// System.Void Unity.Services.Analytics.AnalyticsServiceInstance::SwapToRealBuffer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnalyticsServiceInstance_SwapToRealBuffer_m86F65D2B15563B49C2A52DB065DA38D1160E301F (AnalyticsServiceInstance_t85C6639220B0EFF1CB3C517E36C6B55385A56A62* __this, const RuntimeMethod* method) ;
// System.Void Unity.Services.Analytics.Data.StdCommonParams::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StdCommonParams__ctor_m973A163478DDB4C6DC21AF142FF5CF7E46D254CA (StdCommonParams_tDFD4FF72F7EEBBC4384155713888A4485FF5E701* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.Application::get_version()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Application_get_version_m9CC0E94F12493682C1A2CA803083F6F01BA43124 (const RuntimeMethod* method) ;
// System.Void Unity.Services.Analytics.Data.StdCommonParams::set_ClientVersion(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void StdCommonParams_set_ClientVersion_m97C2B0A6328C2D38BF31BED3F628D0902F36A3D0_inline (StdCommonParams_tDFD4FF72F7EEBBC4384155713888A4485FF5E701* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.String UnityEngine.Application::get_cloudProjectId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Application_get_cloudProjectId_m84C5E847485178EEDA2E56E5EF72B0A740453EF9 (const RuntimeMethod* method) ;
// System.Void Unity.Services.Analytics.Data.StdCommonParams::set_ProjectID(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void StdCommonParams_set_ProjectID_m3119C391E989366B60D3A7FC4B4516A0ED285653_inline (StdCommonParams_tDFD4FF72F7EEBBC4384155713888A4485FF5E701* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.String UnityEngine.Application::get_identifier()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Application_get_identifier_mEA3314E50D44FB3CE2C2E78B336ACF4AD97BA056 (const RuntimeMethod* method) ;
// System.Void Unity.Services.Analytics.Data.StdCommonParams::set_GameBundleID(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void StdCommonParams_set_GameBundleID_m01625DC8750160BEF86073C96048B910A23B8FE6_inline (StdCommonParams_tDFD4FF72F7EEBBC4384155713888A4485FF5E701* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.String Unity.Services.Analytics.Platform.Runtime::Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Runtime_Name_m5691169825FA2CC731731BE5BF745118C339B1E9 (const RuntimeMethod* method) ;
// System.Void Unity.Services.Analytics.Data.StdCommonParams::set_Platform(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void StdCommonParams_set_Platform_m6270CCD19D8CB881BC5668613C041C5E5BD0996C_inline (StdCommonParams_tDFD4FF72F7EEBBC4384155713888A4485FF5E701* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.String UnityEngine.Application::get_buildGUID()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Application_get_buildGUID_m088DE63ABF3F3022B8A65F19F882C126AD6FBE68 (const RuntimeMethod* method) ;
// System.Void Unity.Services.Analytics.Data.StdCommonParams::set_BuildGuuid(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void StdCommonParams_set_BuildGuuid_m0DB0779599C5BE31C7A1B76C2AF77E9EF9A3AC0C_inline (StdCommonParams_tDFD4FF72F7EEBBC4384155713888A4485FF5E701* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.String UnityEngine.SystemInfo::get_deviceUniqueIdentifier()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SystemInfo_get_deviceUniqueIdentifier_m61BA4CB77ADA09730B8B575700D85027EFDB4EFC (const RuntimeMethod* method) ;
// System.Void Unity.Services.Analytics.Data.StdCommonParams::set_Idfv(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void StdCommonParams_set_Idfv_mC903A6BEA3F5145D959C36D123D084D211085EF9_inline (StdCommonParams_tDFD4FF72F7EEBBC4384155713888A4485FF5E701* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.String System.String::ToLowerInvariant()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_ToLowerInvariant_mBE32C93DE27C5353FEA3FA654FC1DDBE3D0EB0F2 (String_t* __this, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987 (String_t* ___0_format, RuntimeObject* ___1_arg0, RuntimeObject* ___2_arg1, const RuntimeMethod* method) ;
// System.String Unity.Services.Analytics.AnalyticsServiceInstance::GetAnalyticsUserID()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AnalyticsServiceInstance_GetAnalyticsUserID_m765E15065C72B9B1F8687C1129FD703048851A27 (AnalyticsServiceInstance_t85C6639220B0EFF1CB3C517E36C6B55385A56A62* __this, const RuntimeMethod* method) ;
// System.Void Unity.Services.Analytics.AnalyticsServiceInstance::RefreshSessionID()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnalyticsServiceInstance_RefreshSessionID_m944E2F59E889E550C781E3710BFB5F4B95AE5125 (AnalyticsServiceInstance_t85C6639220B0EFF1CB3C517E36C6B55385A56A62* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Start<Unity.Services.Analytics.AnalyticsServiceInstance/<Initialize>d__39>(TStateMachine&)
inline void AsyncTaskMethodBuilder_Start_TisU3CInitializeU3Ed__39_t5D5A95D5CBED3E92245840C7F3C11846EAC2478B_mFC1F1BE19F516884E71F324609B5CAD02EE51014 (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, U3CInitializeU3Ed__39_t5D5A95D5CBED3E92245840C7F3C11846EAC2478B* ___0_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06*, U3CInitializeU3Ed__39_t5D5A95D5CBED3E92245840C7F3C11846EAC2478B*, const RuntimeMethod*))AsyncTaskMethodBuilder_Start_TisU3CInitializeU3Ed__39_t5D5A95D5CBED3E92245840C7F3C11846EAC2478B_mFC1F1BE19F516884E71F324609B5CAD02EE51014_gshared)(__this, ___0_stateMachine, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Start<Unity.Services.Analytics.AnalyticsServiceInstance/<InitializeUser>d__40>(TStateMachine&)
inline void AsyncTaskMethodBuilder_Start_TisU3CInitializeUserU3Ed__40_t944DAAD25172C37C6956CB1307FF90D9020B1CE2_mE579C589F9D2A96D3718C3E0B72B3834D6F39B03 (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, U3CInitializeUserU3Ed__40_t944DAAD25172C37C6956CB1307FF90D9020B1CE2* ___0_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06*, U3CInitializeUserU3Ed__40_t944DAAD25172C37C6956CB1307FF90D9020B1CE2*, const RuntimeMethod*))AsyncTaskMethodBuilder_Start_TisU3CInitializeUserU3Ed__40_t944DAAD25172C37C6956CB1307FF90D9020B1CE2_mE579C589F9D2A96D3718C3E0B72B3834D6F39B03_gshared)(__this, ___0_stateMachine, method);
}
// System.String UnityEngine.SystemInfo::get_processorType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SystemInfo_get_processorType_m985AB6C66E69918DF641BC1A589A3F9B4CE76FBE (const RuntimeMethod* method) ;
// System.String UnityEngine.SystemInfo::get_graphicsDeviceName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SystemInfo_get_graphicsDeviceName_mA3F2E2CA587AD5E212A38AD7D28559FD017451A2 (const RuntimeMethod* method) ;
// System.Int32 UnityEngine.SystemInfo::get_processorCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SystemInfo_get_processorCount_m6B20AC11AEA09CA06278FBC47BAAEAA01BC7DB55 (const RuntimeMethod* method) ;
// System.Int32 UnityEngine.SystemInfo::get_systemMemorySize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SystemInfo_get_systemMemorySize_m3BFE40CF5A43FEAB94F5C552A47D04ECD88B771E (const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Screen::get_width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_width_mF608FF3252213E7EFA1F0D2F744C28110E9E5AC9 (const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Screen::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_height_m01A3102DE71EE1FBEA51D09D6B0261CF864FE8F9 (const RuntimeMethod* method) ;
// System.Single UnityEngine.Screen::get_dpi()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Screen_get_dpi_mEEDAA2189F84A47BD69D62A611E031D5C59CFE8E (const RuntimeMethod* method) ;
// System.String UnityEngine.SystemInfo::get_operatingSystem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SystemInfo_get_operatingSystem_m47B20646C221517ACA8F99DE8576BF794AEB6F8D (const RuntimeMethod* method) ;
// System.Boolean Unity.Services.Analytics.Platform.DebugDevice::IsDebugDevice()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DebugDevice_IsDebugDevice_mA1EEB1D12950C445B81D7EBE8C254DDE2437B333 (const RuntimeMethod* method) ;
// System.String Unity.Services.Analytics.Internal.Locale::AnalyticsRegionLanguageCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Locale_AnalyticsRegionLanguageCode_mBC2C7A14D9ED824729BF977BE5C1478B559BB45B (const RuntimeMethod* method) ;
// System.Void Unity.Services.Analytics.InternalNewPlayerHelper::.ctor(Unity.Services.Core.Device.Internal.IInstallationId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalNewPlayerHelper__ctor_m1EF18BB2B52AFA4EC9CDBC69196E406BA05F2A0F (InternalNewPlayerHelper_t0DA93D548680A3333E7C9D3839AB8BF071B3A476* __this, RuntimeObject* ___0_installId, const RuntimeMethod* method) ;
// System.Boolean Unity.Services.Analytics.InternalNewPlayerHelper::IsNewPlayer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InternalNewPlayerHelper_IsNewPlayer_mE11DEC8005D24F3B42924870C1D64FFEE878916A (InternalNewPlayerHelper_t0DA93D548680A3333E7C9D3839AB8BF071B3A476* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.SystemInfo::get_deviceModel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SystemInfo_get_deviceModel_m308FFBADED4BF6CB34C318A0BBDA762D09A7F185 (const RuntimeMethod* method) ;
// System.String Unity.Services.Analytics.AnalyticsServiceInstance::get_CustomAnalyticsId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AnalyticsServiceInstance_get_CustomAnalyticsId_mEB3038CA04D336E4EF0C1A6D6E0D6A94E025CF60 (AnalyticsServiceInstance_t85C6639220B0EFF1CB3C517E36C6B55385A56A62* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478 (String_t* ___0_value, const RuntimeMethod* method) ;
// System.DateTime System.DateTime::op_Addition(System.DateTime,System.TimeSpan)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D DateTime_op_Addition_m652BE1306897DBE4CDF3ADA99FFFE2E70BFE3865 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___0_d, TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___1_t, const RuntimeMethod* method) ;
// System.Boolean System.DateTime::op_GreaterThan(System.DateTime,System.DateTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DateTime_op_GreaterThan_m8F1FA3C039A0148FC1500E790A77CB44F025EA9F (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___0_t1, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___1_t2, const RuntimeMethod* method) ;
// System.Guid System.Guid::NewGuid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Guid_t Guid_NewGuid_m1F4894E8DC089811D6252148AD5858E58D43A7BD (const RuntimeMethod* method) ;
// System.String System.Guid::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Guid_ToString_m2BFFD5FA726E03FA707AAFCCF065896C46D5290C (Guid_t* __this, const RuntimeMethod* method) ;
// System.Void Unity.Services.Analytics.AnalyticsServiceInstance::set_SessionID(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AnalyticsServiceInstance_set_SessionID_m48AF420DBE356BD2F73DF27848664B9117B1CA52_inline (AnalyticsServiceInstance_t85C6639220B0EFF1CB3C517E36C6B55385A56A62* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.String Unity.Services.Analytics.AnalyticsServiceInstance::get_SessionID()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* AnalyticsServiceInstance_get_SessionID_m0BE34B73BEC292E51E9721811451EC359D9837F0_inline (AnalyticsServiceInstance_t85C6639220B0EFF1CB3C517E36C6B55385A56A62* __this, const RuntimeMethod* method) ;
// System.Boolean Unity.Services.Analytics.AnalyticsServiceInstance::get_ServiceEnabled()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool AnalyticsServiceInstance_get_ServiceEnabled_mF044EA299C12FF5CA7E6445A84BE251651365BF2_inline (AnalyticsServiceInstance_t85C6639220B0EFF1CB3C517E36C6B55385A56A62* __this, const RuntimeMethod* method) ;
// System.Void Unity.Services.Analytics.AnalyticsServiceInstance::SetVariableCommonParams()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnalyticsServiceInstance_SetVariableCommonParams_mAE82C6CB3D7D7DCC5337FB51A360457D5EB7844C (AnalyticsServiceInstance_t85C6639220B0EFF1CB3C517E36C6B55385A56A62* __this, const RuntimeMethod* method) ;
// System.Nullable`1<System.Single> Unity.Services.Analytics.Platform.DeviceVolumeProvider::GetDeviceVolume()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 DeviceVolumeProvider_GetDeviceVolume_m1318E3ADBEF76202DE617254B3CBB6028FE3D3DE (const RuntimeMethod* method) ;
// System.Boolean System.Nullable`1<System.Single>::get_HasValue()
inline bool Nullable_1_get_HasValue_mC149B1C717AF506BBE8932F2C1DC86C378D17EA8_inline (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75*, const RuntimeMethod*))Nullable_1_get_HasValue_mC149B1C717AF506BBE8932F2C1DC86C378D17EA8_gshared_inline)(__this, method);
}
// T System.Nullable`1<System.Single>::GetValueOrDefault()
inline float Nullable_1_GetValueOrDefault_m068A148705ED1E215A5E85D18BA6852B192DA419_inline (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75* __this, const RuntimeMethod* method)
{
	return ((  float (*) (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75*, const RuntimeMethod*))Nullable_1_GetValueOrDefault_m068A148705ED1E215A5E85D18BA6852B192DA419_gshared_inline)(__this, method);
}
// System.Void System.Nullable`1<System.Double>::.ctor(T)
inline void Nullable_1__ctor_mDE3158DD99CA7E1775A8BA276E428AF808AB8FBF (Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165* __this, double ___0_value, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165*, double, const RuntimeMethod*))Nullable_1__ctor_mDE3158DD99CA7E1775A8BA276E428AF808AB8FBF_gshared)(__this, ___0_value, method);
}
// System.Void Unity.Services.Analytics.Data.StdCommonParams::set_DeviceVolume(System.Nullable`1<System.Double>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void StdCommonParams_set_DeviceVolume_mBC014F9E6144D31B7A21082F4F17CADA8B8B8DB8_inline (StdCommonParams_tDFD4FF72F7EEBBC4384155713888A4485FF5E701* __this, Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 ___0_value, const RuntimeMethod* method) ;
// System.Single UnityEngine.SystemInfo::get_batteryLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SystemInfo_get_batteryLevel_m549AF9A6BB748E5C50FF2D1D04D4E9E6B1C5D8C6 (const RuntimeMethod* method) ;
// System.Void Unity.Services.Analytics.Data.StdCommonParams::set_BatteryLoad(System.Nullable`1<System.Double>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void StdCommonParams_set_BatteryLoad_mC06087861B7DD6C288823A7DDB4A7085B168743E_inline (StdCommonParams_tDFD4FF72F7EEBBC4384155713888A4485FF5E701* __this, Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 ___0_value, const RuntimeMethod* method) ;
// System.Void Unity.Services.Analytics.Data.StdCommonParams::set_UasUserID(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void StdCommonParams_set_UasUserID_m5079F59137ED8AA3D25BBDFBF10E536812D8ABB7_inline (StdCommonParams_tDFD4FF72F7EEBBC4384155713888A4485FF5E701* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.TaskAwaiter`1<TResult> System.Threading.Tasks.Task`1<Unity.Services.Analytics.Internal.GeoIPResponse>::GetAwaiter()
inline TaskAwaiter_1_t67679171BEFE85C38666397015D627C6E3E7D886 Task_1_GetAwaiter_mCB01C4C331E45364EDA04B3FDB90705CA93004E7 (Task_1_t3F0E026C38791877CBE0DEC23CD10E9103FBA9B2* __this, const RuntimeMethod* method)
{
	return ((  TaskAwaiter_1_t67679171BEFE85C38666397015D627C6E3E7D886 (*) (Task_1_t3F0E026C38791877CBE0DEC23CD10E9103FBA9B2*, const RuntimeMethod*))Task_1_GetAwaiter_mD80ED263BF3F1F8DBDBD177BA3401A0AAAFA38E3_gshared)(__this, method);
}
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<Unity.Services.Analytics.Internal.GeoIPResponse>::get_IsCompleted()
inline bool TaskAwaiter_1_get_IsCompleted_mD7F9B812B03F8973495724BC92A2F4AAC37E0179 (TaskAwaiter_1_t67679171BEFE85C38666397015D627C6E3E7D886* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (TaskAwaiter_1_t67679171BEFE85C38666397015D627C6E3E7D886*, const RuntimeMethod*))TaskAwaiter_1_get_IsCompleted_mEEBB09E26F4165A0F864D92E1890CFCD2C8CFD54_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Collections.Generic.List`1<System.String>>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<Unity.Services.Analytics.Internal.GeoIPResponse>,Unity.Services.Analytics.AnalyticsServiceInstance/<CheckForRequiredConsents>d__0>(TAwaiter&,TStateMachine&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t67679171BEFE85C38666397015D627C6E3E7D886_TisU3CCheckForRequiredConsentsU3Ed__0_tE4974F41B1F427E322B867A158105241B1665396_m870F6F1355222AF7A6554CF8A897592181CFACE4 (AsyncTaskMethodBuilder_1_t6C6A8B677F9E92A76A93C9D97B66849EBECA0FE6* __this, TaskAwaiter_1_t67679171BEFE85C38666397015D627C6E3E7D886* ___0_awaiter, U3CCheckForRequiredConsentsU3Ed__0_tE4974F41B1F427E322B867A158105241B1665396* ___1_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t6C6A8B677F9E92A76A93C9D97B66849EBECA0FE6*, TaskAwaiter_1_t67679171BEFE85C38666397015D627C6E3E7D886*, U3CCheckForRequiredConsentsU3Ed__0_tE4974F41B1F427E322B867A158105241B1665396*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA_TisU3CCheckForRequiredConsentsU3Ed__0_tE4974F41B1F427E322B867A158105241B1665396_m9D6180E00ABFAA8BBA0B666EDDD9192F6A9E9FF6_gshared)(__this, ___0_awaiter, ___1_stateMachine, method);
}
// TResult System.Runtime.CompilerServices.TaskAwaiter`1<Unity.Services.Analytics.Internal.GeoIPResponse>::GetResult()
inline GeoIPResponse_tADA05745323DD2374411BCB8CEC9EC086B4FE150* TaskAwaiter_1_GetResult_m5F5B61E5E8007E22BF56CC4D63AB61FE9584FDD9 (TaskAwaiter_1_t67679171BEFE85C38666397015D627C6E3E7D886* __this, const RuntimeMethod* method)
{
	return ((  GeoIPResponse_tADA05745323DD2374411BCB8CEC9EC086B4FE150* (*) (TaskAwaiter_1_t67679171BEFE85C38666397015D627C6E3E7D886*, const RuntimeMethod*))TaskAwaiter_1_GetResult_mA4A8A1F43A456B40DDA251D00026C60919AED85B_gshared)(__this, method);
}
// System.String Unity.Services.Analytics.Internal.Consent::get_None()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Consent_get_None_mCF717F55F4841DEC3ABBFA5C81EECCE8E61B3E3A (const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___0_a, String_t* ___1_b, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.String>::.ctor()
inline void List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.String>::Add(T)
inline void List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, String_t* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, String_t*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___0_item, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Collections.Generic.List`1<System.String>>::SetException(System.Exception)
inline void AsyncTaskMethodBuilder_1_SetException_m3C0DF6E71062B64D6663C0D271D6F47044CB6412 (AsyncTaskMethodBuilder_1_t6C6A8B677F9E92A76A93C9D97B66849EBECA0FE6* __this, Exception_t* ___0_exception, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t6C6A8B677F9E92A76A93C9D97B66849EBECA0FE6*, Exception_t*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetException_mC2F74B26F5303F9F960965220E2866D777F1A5C6_gshared)(__this, ___0_exception, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Collections.Generic.List`1<System.String>>::SetResult(TResult)
inline void AsyncTaskMethodBuilder_1_SetResult_m412D9588DF5481C6FAD7D151C1E8D670763DA122 (AsyncTaskMethodBuilder_1_t6C6A8B677F9E92A76A93C9D97B66849EBECA0FE6* __this, List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___0_result, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t6C6A8B677F9E92A76A93C9D97B66849EBECA0FE6*, List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetResult_m0D83195F995F9825D7A6DCDC3835D6917C43B5A6_gshared)(__this, ___0_result, method);
}
// System.Void Unity.Services.Analytics.AnalyticsServiceInstance/<CheckForRequiredConsents>d__0::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCheckForRequiredConsentsU3Ed__0_MoveNext_m8D23A3DB2A5EE356DA8F790B36970CD795F880CA (U3CCheckForRequiredConsentsU3Ed__0_tE4974F41B1F427E322B867A158105241B1665396* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Collections.Generic.List`1<System.String>>::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
inline void AsyncTaskMethodBuilder_1_SetStateMachine_m3B1513481F77CBDA84ABA2A5FD4977223A1EC1D7 (AsyncTaskMethodBuilder_1_t6C6A8B677F9E92A76A93C9D97B66849EBECA0FE6* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t6C6A8B677F9E92A76A93C9D97B66849EBECA0FE6*, RuntimeObject*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetStateMachine_m3BE54983634ABF5BE05200C7894AD0F9F20BDD65_gshared)(__this, ___0_stateMachine, method);
}
// System.Void Unity.Services.Analytics.AnalyticsServiceInstance/<CheckForRequiredConsents>d__0::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCheckForRequiredConsentsU3Ed__0_SetStateMachine_mA4A58AF9F9DFEE9A66D83A1725A54E3D679AA691 (U3CCheckForRequiredConsentsU3Ed__0_tE4974F41B1F427E322B867A158105241B1665396* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) ;
// System.Void Unity.Services.Analytics.AnalyticsContainer::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnalyticsContainer_Initialize_m9246BB4ED27EDE4B07E959047A92806CD3DC4C78 (const RuntimeMethod* method) ;
// System.Threading.Tasks.Task Unity.Services.Analytics.AnalyticsServiceInstance::InitializeUser()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* AnalyticsServiceInstance_InitializeUser_mC342B361F574226BBDF056F148FAE52B90E98CFA (AnalyticsServiceInstance_t85C6639220B0EFF1CB3C517E36C6B55385A56A62* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,Unity.Services.Analytics.AnalyticsServiceInstance/<Initialize>d__39>(TAwaiter&,TStateMachine&)
inline void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CInitializeU3Ed__39_t5D5A95D5CBED3E92245840C7F3C11846EAC2478B_mE3FFEC839EA7297A022E33BA57E32FCF9467CF8A (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* ___0_awaiter, U3CInitializeU3Ed__39_t5D5A95D5CBED3E92245840C7F3C11846EAC2478B* ___1_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06*, TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833*, U3CInitializeU3Ed__39_t5D5A95D5CBED3E92245840C7F3C11846EAC2478B*, const RuntimeMethod*))AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CInitializeU3Ed__39_t5D5A95D5CBED3E92245840C7F3C11846EAC2478B_mE3FFEC839EA7297A022E33BA57E32FCF9467CF8A_gshared)(__this, ___0_awaiter, ___1_stateMachine, method);
}
// System.Void Unity.Services.Analytics.AnalyticsServiceInstance::RecordStartupEvents()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnalyticsServiceInstance_RecordStartupEvents_m91416206794DFA73F248FA6763A439FB455AF627 (AnalyticsServiceInstance_t85C6639220B0EFF1CB3C517E36C6B55385A56A62* __this, const RuntimeMethod* method) ;
// System.Void Unity.Services.Analytics.AnalyticsServiceInstance/<Initialize>d__39::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CInitializeU3Ed__39_MoveNext_mC4F8EACDBA0633ED0AF8005B43498A5AE6C90446 (U3CInitializeU3Ed__39_t5D5A95D5CBED3E92245840C7F3C11846EAC2478B* __this, const RuntimeMethod* method) ;
// System.Void Unity.Services.Analytics.AnalyticsServiceInstance/<Initialize>d__39::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CInitializeU3Ed__39_SetStateMachine_mBF38BCA5540974E57D28BAD5973209D4A7A17827 (U3CInitializeU3Ed__39_t5D5A95D5CBED3E92245840C7F3C11846EAC2478B* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<Unity.Services.Analytics.Internal.GeoIPResponse>,Unity.Services.Analytics.AnalyticsServiceInstance/<InitializeUser>d__40>(TAwaiter&,TStateMachine&)
inline void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t67679171BEFE85C38666397015D627C6E3E7D886_TisU3CInitializeUserU3Ed__40_t944DAAD25172C37C6956CB1307FF90D9020B1CE2_mEA2F97BEF0690A56141E2173FBC197CDCED0D8B6 (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, TaskAwaiter_1_t67679171BEFE85C38666397015D627C6E3E7D886* ___0_awaiter, U3CInitializeUserU3Ed__40_t944DAAD25172C37C6956CB1307FF90D9020B1CE2* ___1_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06*, TaskAwaiter_1_t67679171BEFE85C38666397015D627C6E3E7D886*, U3CInitializeUserU3Ed__40_t944DAAD25172C37C6956CB1307FF90D9020B1CE2*, const RuntimeMethod*))AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA_TisU3CInitializeUserU3Ed__40_t944DAAD25172C37C6956CB1307FF90D9020B1CE2_m0BA6CDB12E0B06BA0DF3DA5DD7772AA7891FFA30_gshared)(__this, ___0_awaiter, ___1_stateMachine, method);
}
// System.Void Unity.Services.Analytics.AnalyticsServiceInstance::OptOut()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnalyticsServiceInstance_OptOut_mE80E70FBB35370154B02B32ADCED5B0EAA77B632 (AnalyticsServiceInstance_t85C6639220B0EFF1CB3C517E36C6B55385A56A62* __this, const RuntimeMethod* method) ;
// System.Void Unity.Services.Analytics.AnalyticsServiceInstance/<InitializeUser>d__40::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CInitializeUserU3Ed__40_MoveNext_m5D8F6B17E277D12C5BA6670DB99D78F34D7309CB (U3CInitializeUserU3Ed__40_t944DAAD25172C37C6956CB1307FF90D9020B1CE2* __this, const RuntimeMethod* method) ;
// System.Void Unity.Services.Analytics.AnalyticsServiceInstance/<InitializeUser>d__40::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CInitializeUserU3Ed__40_SetStateMachine_m098E4C0674CF368A59305F6BE863D982E78DD5EA (U3CInitializeUserU3Ed__40_t944DAAD25172C37C6956CB1307FF90D9020B1CE2* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) ;
// System.DateTime System.DateTime::get_UtcNow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D DateTime_get_UtcNow_m06B6E9995FE16846A0F71EC9DB23E90BE2C5F9FA (const RuntimeMethod* method) ;
// System.Void System.ArgumentNullException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* __this, String_t* ___0_paramName, const RuntimeMethod* method) ;
// Unity.Services.Core.Device.Internal.IInstallationId Unity.Services.Analytics.InternalNewPlayerHelper::get_InstallId()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* InternalNewPlayerHelper_get_InstallId_m5AE652EBA796A51898603A7D4537B157226042D4_inline (InternalNewPlayerHelper_t0DA93D548680A3333E7C9D3839AB8BF071B3A476* __this, const RuntimeMethod* method) ;
// System.String Unity.Services.Analytics.InternalNewPlayerHelper::ReadAnalyticsIdentifier()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* InternalNewPlayerHelper_ReadAnalyticsIdentifier_m63998B3010974B15E5F13619BBDE43204E93F264 (InternalNewPlayerHelper_t0DA93D548680A3333E7C9D3839AB8BF071B3A476* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Inequality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Inequality_m8C940F3CFC42866709D7CA931B3D77B4BE94BCB6 (String_t* ___0_a, String_t* ___1_b, const RuntimeMethod* method) ;
// System.Void Unity.Services.Analytics.InternalNewPlayerHelper::WriteAnalyticsIdentifierToFile(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalNewPlayerHelper_WriteAnalyticsIdentifierToFile_m791AE057AAC5C8B6D431F7F66605C0C7DD6A7B51 (InternalNewPlayerHelper_t0DA93D548680A3333E7C9D3839AB8BF071B3A476* __this, String_t* ___0_identifier, const RuntimeMethod* method) ;
// System.String UnityEngine.PlayerPrefs::GetString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PlayerPrefs_GetString_mA4C9F842BF77E5572AB20EA087C7048F870D02AE (String_t* ___0_key, const RuntimeMethod* method) ;
// System.Void UnityEngine.PlayerPrefs::SetString(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPrefs_SetString_mF4F457C81BB75F0213547C6287BA36E15E1F0256 (String_t* ___0_key, String_t* ___1_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.PlayerPrefs::Save()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPrefs_Save_m82567E045D69C838112EA204B60C144D4C1EA3AE (const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, String_t* ___0_name, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<Unity.Services.Analytics.AnalyticsContainer>()
inline AnalyticsContainer_t80827118296A7273882EB5BAE9AC5207F90BBBE1* GameObject_AddComponent_TisAnalyticsContainer_t80827118296A7273882EB5BAE9AC5207F90BBBE1_mE4F8B8275039940AFB099EE841C9060ACCFF2A11 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  AnalyticsContainer_t80827118296A7273882EB5BAE9AC5207F90BBBE1* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// System.Void Unity.Services.Analytics.AnalyticsContainer::set_Instance(Unity.Services.Analytics.AnalyticsContainer)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AnalyticsContainer_set_Instance_m76BCB44E3E710A6310D09A7C26BE302074C9C776_inline (AnalyticsContainer_t80827118296A7273882EB5BAE9AC5207F90BBBE1* ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::set_hideFlags(UnityEngine.HideFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// UnityEngine.HideFlags UnityEngine.Object::get_hideFlags()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Object_get_hideFlags_mA08F5E41671B8C6B5073C6B9E2799BCE6E0DF7F3 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::DontDestroyOnLoad(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DontDestroyOnLoad_m4B70C3AEF886C176543D1295507B6455C9DCAEA7 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_target, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_unscaledDeltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_unscaledDeltaTime_mF057EECA857E5C0F90A3F910D26D3EE59F27C4B5 (const RuntimeMethod* method) ;
// System.Void Unity.Services.Analytics.AnalyticsServiceInstance::RecordGameRunningIfNecessary()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnalyticsServiceInstance_RecordGameRunningIfNecessary_mDC174CE67E36436A206DDC321308853A727484C3 (AnalyticsServiceInstance_t85C6639220B0EFF1CB3C517E36C6B55385A56A62* __this, const RuntimeMethod* method) ;
// System.Void Unity.Services.Analytics.AnalyticsServiceInstance::InternalTick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnalyticsServiceInstance_InternalTick_m26C028F5A6BDF4901A7FEB9888FBC9C3E0A3710A (AnalyticsServiceInstance_t85C6639220B0EFF1CB3C517E36C6B55385A56A62* __this, const RuntimeMethod* method) ;
// System.Void Unity.Services.Analytics.AnalyticsServiceInstance::ApplicationPaused(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnalyticsServiceInstance_ApplicationPaused_mB64F8B2FF25B824FA074668EF917FC684828893C (AnalyticsServiceInstance_t85C6639220B0EFF1CB3C517E36C6B55385A56A62* __this, bool ___0_paused, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_obj, const RuntimeMethod* method) ;
// System.Void Unity.Services.Analytics.AnalyticsServiceInstance::GameEnded()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnalyticsServiceInstance_GameEnded_m0C6611FE57A7E25C6F4E5BEF66545139EAB182A4 (AnalyticsServiceInstance_t85C6639220B0EFF1CB3C517E36C6B55385A56A62* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Void Unity.Services.Core.RequestFailedException::.ctor(System.Int32,System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RequestFailedException__ctor_m5F2BC9B778764EF58CA947E789CAEEAD27341C7A (RequestFailedException_tBF4D4AF8AD31BEE32091AEBC120B629B052E2D00* __this, int32_t ___0_errorCode, String_t* ___1_message, Exception_t* ___2_innerException, const RuntimeMethod* method) ;
// System.Void Unity.Services.Analytics.ConsentCheckException::set_Reason(Unity.Services.Analytics.ConsentCheckExceptionReason)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ConsentCheckException_set_Reason_mB9551C34C6B6C76DAAD9DF12EFF1B0E385CEE968_inline (ConsentCheckException_t96E7054ECB013548EA92EEFFFACAB143D5A86B7D* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Analytics.UGSAnalyticsInternalTools::SetPrivacyStatus(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UGSAnalyticsInternalTools_SetPrivacyStatus_mF4F04D971EBA3A54A9AD22DC4E8D95711334516A (bool ___0_status, const RuntimeMethod* method) ;
// System.Globalization.CultureInfo System.Globalization.CultureInfo::get_CurrentCulture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* CultureInfo_get_CurrentCulture_m8A4580F49DDD7E9DB34C699965423DB8E3BBA9A5 (const RuntimeMethod* method) ;
// System.String Unity.Services.Analytics.Internal.Locale::CurrentLanguageCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Locale_CurrentLanguageCode_m720A4A975DCDE3417D54E73B51EA379DFC5B181E (const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___0_str0, String_t* ___1_str1, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___0_values, const RuntimeMethod* method) ;
// System.Text.Encoding System.Text.Encoding::get_UTF8()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9 (const RuntimeMethod* method) ;
// System.Void UnityEngine.Networking.UnityWebRequest::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequest__ctor_mD4739B0BF1C4937479A83B24B531C6B819712A3E (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, String_t* ___0_url, String_t* ___1_method, const RuntimeMethod* method) ;
// System.Void UnityEngine.Networking.UploadHandlerRaw::.ctor(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UploadHandlerRaw__ctor_m168C957B67E29CB3072E3542044D37E2F16C42B7 (UploadHandlerRaw_t0A24CF320CDF16F1BC6C5C086DE71A1908CBB91A* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_data, const RuntimeMethod* method) ;
// System.Void UnityEngine.Networking.UploadHandler::set_contentType(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UploadHandler_set_contentType_mEFF2D2512996DFFF2BFC013388B702078BDC73F3 (UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Networking.UnityWebRequest::set_uploadHandler(UnityEngine.Networking.UploadHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequest_set_uploadHandler_m68F346550136DE178C79238944985892196027FE (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6* ___0_value, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.String>::GetEnumerator()
inline Enumerator_t173E7BE1F35CA448C7E0EE77345C9E0EC0206562 Dictionary_2_GetEnumerator_m46EC45F42CA2279D83568CD3F216AAABA8E749F6 (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t173E7BE1F35CA448C7E0EE77345C9E0EC0206562 (*) (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*, const RuntimeMethod*))Dictionary_2_GetEnumerator_m52AB12790B0B9B46B1DFB1F861C9DBEAB07C1FDA_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.String>::Dispose()
inline void Enumerator_Dispose_m068DDFF5CAFBB15C8A0602DEADA7F10C5BB7ADCD (Enumerator_t173E7BE1F35CA448C7E0EE77345C9E0EC0206562* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t173E7BE1F35CA448C7E0EE77345C9E0EC0206562*, const RuntimeMethod*))Enumerator_Dispose_mEA5E01B81EB943B7003D87CEC1B6040524F0402C_gshared)(__this, method);
}
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.String>::get_Current()
inline KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A Enumerator_get_Current_m49070E88C2E34AB46E6292A3FB1C227576B8506E_inline (Enumerator_t173E7BE1F35CA448C7E0EE77345C9E0EC0206562* __this, const RuntimeMethod* method)
{
	return ((  KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A (*) (Enumerator_t173E7BE1F35CA448C7E0EE77345C9E0EC0206562*, const RuntimeMethod*))Enumerator_get_Current_mE3475384B761E1C7971D3639BD09117FE8363422_gshared_inline)(__this, method);
}
// TKey System.Collections.Generic.KeyValuePair`2<System.String,System.String>::get_Key()
inline String_t* KeyValuePair_2_get_Key_m654BCCAE2F20CB11D8E8C2D2C886A0C8A13EB1C4_inline (KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A*, const RuntimeMethod*))KeyValuePair_2_get_Key_mBD8EA7557C27E6956F2AF29DA3F7499B2F51A282_gshared_inline)(__this, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<System.String,System.String>::get_Value()
inline String_t* KeyValuePair_2_get_Value_m7345512A32CB4DCAA0643050B18DC8DCD71B927A_inline (KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A*, const RuntimeMethod*))KeyValuePair_2_get_Value_mC6BD8075F9C9DDEF7B4D731E5C38EC19103988E7_gshared_inline)(__this, method);
}
// System.Void UnityEngine.Networking.UnityWebRequest::SetRequestHeader(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequest_SetRequestHeader_m099734EB787B7269B62AB2236A5A4F7D35AF8BC5 (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, String_t* ___0_name, String_t* ___1_value, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.String>::MoveNext()
inline bool Enumerator_MoveNext_mA93491D9B55547D066053F3BC0A69C635F877438 (Enumerator_t173E7BE1F35CA448C7E0EE77345C9E0EC0206562* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t173E7BE1F35CA448C7E0EE77345C9E0EC0206562*, const RuntimeMethod*))Enumerator_MoveNext_mCD4950A75FFADD54AF354D48C6C0DB0B5A22A5F4_gshared)(__this, method);
}
// UnityEngine.Networking.UnityWebRequestAsyncOperation UnityEngine.Networking.UnityWebRequest::SendWebRequest()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C* UnityWebRequest_SendWebRequest_mA3CD13983BAA5074A0640EDD661B1E46E6DB6C13 (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<UnityEngine.AsyncOperation>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m33ABB7530487276910BEFB499A97D33FB2E06D7D (Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Void UnityEngine.AsyncOperation::add_completed(System.Action`1<UnityEngine.AsyncOperation>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncOperation_add_completed_mD6F21BA8127D6D4B7ABDEFAA995A7A347A20A793 (AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* __this, Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB* ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Networking.UnityWebRequest UnityEngine.Networking.UnityWebRequestAsyncOperation::get_webRequest()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* UnityWebRequestAsyncOperation_get_webRequest_mF67D15420C7C1C4DCA1BD6F839048A0542998BC3_inline (UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C* __this, const RuntimeMethod* method) ;
// System.Int64 UnityEngine.Networking.UnityWebRequest::get_responseCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t UnityWebRequest_get_responseCode_m012C177F61435D5D120A21D7A03FFF7B0F8B904B (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, const RuntimeMethod* method) ;
// UnityEngine.Networking.UnityWebRequest/Result UnityEngine.Networking.UnityWebRequest::get_result()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnityWebRequest_get_result_mEF83848C5FCFB5E307CE4B57E42BF02FC9AED449 (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, const RuntimeMethod* method) ;
// System.Void System.Action::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Networking.UnityWebRequest::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequest_Dispose_m9F43494C0FEA530A97D3F2AF3D425CCC7670753A (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, const RuntimeMethod* method) ;
// System.Void System.IO.MemoryStream::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoryStream__ctor_m8F3BAE0B48E65BAA13C52FB020E502B3EA22CA6B (MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor()
inline void List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8 (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, const RuntimeMethod*))List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_gshared)(__this, method);
}
// System.Void Unity.Services.Analytics.Internal.BufferX::ClearBuffer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BufferX_ClearBuffer_mA8B0BBF389EA44EFE0CA85B2EF94A3B51153FEE8 (BufferX_t61043C3179F78166341D64689A662C738496055C* __this, const RuntimeMethod* method) ;
// System.Void Unity.Services.Analytics.Internal.BufferX::WriteString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BufferX_WriteString_m0B92D6F14EAEC5D40DD7D8AAFC37FC4BCD28EF87 (BufferX_t61043C3179F78166341D64689A662C738496055C* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.String Unity.Services.Analytics.Internal.BufferX::get_UserID()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* BufferX_get_UserID_m069B4C7871A94BC357D27219F98BE125F07090EC_inline (BufferX_t61043C3179F78166341D64689A662C738496055C* __this, const RuntimeMethod* method) ;
// System.String Unity.Services.Analytics.Internal.BufferX::get_SessionID()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* BufferX_get_SessionID_m86D349E8698F5BF8C572CD889D449D24A43454D1_inline (BufferX_t61043C3179F78166341D64689A662C738496055C* __this, const RuntimeMethod* method) ;
// System.Boolean System.Nullable`1<System.Int64>::get_HasValue()
inline bool Nullable_1_get_HasValue_mB4991C0F4C2664AB3CB2584DEECF5BCE6AB7757D_inline (Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17*, const RuntimeMethod*))Nullable_1_get_HasValue_mB4991C0F4C2664AB3CB2584DEECF5BCE6AB7757D_gshared_inline)(__this, method);
}
// System.String System.Nullable`1<System.Int64>::ToString()
inline String_t* Nullable_1_ToString_m04B6938F577DFC70D695A65C381A5ABCBC441248 (Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17*, const RuntimeMethod*))Nullable_1_ToString_m04B6938F577DFC70D695A65C381A5ABCBC441248_gshared)(__this, method);
}
// System.String Unity.Services.Analytics.Internal.BufferX::get_InstallID()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* BufferX_get_InstallID_m255A0D58EF4510EE3656D7795CAB9B34240A41E7_inline (BufferX_t61043C3179F78166341D64689A662C738496055C* __this, const RuntimeMethod* method) ;
// System.String Unity.Services.Analytics.Internal.BufferX::get_PlayerID()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* BufferX_get_PlayerID_mD97D8BA445FB3EE086D28BB7756494936191A098_inline (BufferX_t61043C3179F78166341D64689A662C738496055C* __this, const RuntimeMethod* method) ;
// System.Void Unity.Services.Analytics.Internal.BufferX::StripTrailingCommaIfNecessary()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BufferX_StripTrailingCommaIfNecessary_m835DF3D14DFBEB8486A8044A72C15F64C9CEA937 (BufferX_t61043C3179F78166341D64689A662C738496055C* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Int32>::get_Count()
inline int32_t List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, const RuntimeMethod*))List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_gshared_inline)(__this, method);
}
// T System.Collections.Generic.List`1<System.Int32>::get_Item(System.Int32)
inline int32_t List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, int32_t, const RuntimeMethod*))List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D_gshared)(__this, ___0_index, method);
}
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8 (String_t* ___0_format, RuntimeObject* ___1_arg0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9 (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Int32>::Add(T)
inline void List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, int32_t, const RuntimeMethod*))List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_gshared_inline)(__this, ___0_item, method);
}
// System.Globalization.CultureInfo System.Globalization.CultureInfo::get_InvariantCulture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6 (const RuntimeMethod* method) ;
// System.String System.Double::ToString(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Double_ToString_m4318830D9F771852FDCF21C14CF9E8ABC7E77357 (double* __this, RuntimeObject* ___0_provider, const RuntimeMethod* method) ;
// System.String Newtonsoft.Json.JsonConvert::ToString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JsonConvert_ToString_m63264635A791255A4CD3AA4FBE8498F51687FE7C (String_t* ___0_value, const RuntimeMethod* method) ;
// System.String System.Int64::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int64_ToString_m284E4E55662818E38654309A41C2B07CD436F36B (int64_t* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Int32>::Clear()
inline void List_1_Clear_mF6795DE5F49C1D0B91D6A0955F448B22970D67A9_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, const RuntimeMethod*))List_1_Clear_mF6795DE5F49C1D0B91D6A0955F448B22970D67A9_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Int32>::set_Item(System.Int32,T)
inline void List_1_set_Item_m95629806F31CF369D937590912E0B6A53FF7C587 (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_index, int32_t ___1_value, const RuntimeMethod* method)
{
	((  void (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, int32_t, int32_t, const RuntimeMethod*))List_1_set_Item_m95629806F31CF369D937590912E0B6A53FF7C587_gshared)(__this, ___0_index, ___1_value, method);
}
// System.Void System.Collections.Generic.List`1<System.Int32>::RemoveRange(System.Int32,System.Int32)
inline void List_1_RemoveRange_m1E69C4C8438AA5D7E05C2936C79C01D96F89BE68 (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_index, int32_t ___1_count, const RuntimeMethod* method)
{
	((  void (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, int32_t, int32_t, const RuntimeMethod*))List_1_RemoveRange_m1E69C4C8438AA5D7E05C2936C79C01D96F89BE68_gshared)(__this, ___0_index, ___1_count, method);
}
// System.String System.DateTime::ToString(System.String,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DateTime_ToString_m27637E1131A10BED8A95639D64339023D5EBBF00 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* __this, String_t* ___0_format, RuntimeObject* ___1_provider, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::.ctor()
inline void Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052 (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::Add(TKey,TValue)
inline void Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13 (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* __this, String_t* ___0_key, String_t* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*, String_t*, String_t*, const RuntimeMethod*))Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared)(__this, ___0_key, ___1_value, method);
}
// System.String Unity.Services.Analytics.Internal.Consent::get_Pipl()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Consent_get_Pipl_m9EA6E585847439E839D5AE3063A5DCF6F6376605 (const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2<System.String,System.String> Unity.Services.Analytics.Internal.ConsentTracker::get_piplHeaders()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ConsentTracker_get_piplHeaders_mC7732B6E50BB062A62D669AC5201FAF1802BCD2F (ConsentTracker_tBDC1E317516ED67AC655A7D3B1D44EF5666B3FC4* __this, const RuntimeMethod* method) ;
// System.Void Unity.Services.Analytics.Internal.GeoAPI::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeoAPI__ctor_m0C73E78C464E961E626A7D252140E6E2A60C148D (GeoAPI_tDEC43B93D320DC5B81A4BD9F45491DD2E5D30287* __this, const RuntimeMethod* method) ;
// System.Void Unity.Services.Analytics.Internal.ConsentTracker::.ctor(Unity.Services.Analytics.Internal.IGeoAPI,Unity.Services.Analytics.ICoreStatsHelper)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConsentTracker__ctor_m9C23286CCF2BC6690013071ECD56F7FC0B5B745C (ConsentTracker_tBDC1E317516ED67AC655A7D3B1D44EF5666B3FC4* __this, RuntimeObject* ___0_geoApi, RuntimeObject* ___1_coreStatsHelper, const RuntimeMethod* method) ;
// System.Void Unity.Services.Analytics.Internal.ConsentTracker::set_optOutConsentStatus(Unity.Services.Analytics.Internal.ConsentStatus)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ConsentTracker_set_optOutConsentStatus_m4BAAF67518F147B7203463AD1557E2E14A795657_inline (ConsentTracker_tBDC1E317516ED67AC655A7D3B1D44EF5666B3FC4* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Void Unity.Services.Analytics.Internal.ConsentTracker::set_optInPiplConsentStatus(Unity.Services.Analytics.Internal.ConsentStatus)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ConsentTracker_set_optInPiplConsentStatus_m7121DEA6C7203C39DD740E00262387EF06B1C732_inline (ConsentTracker_tBDC1E317516ED67AC655A7D3B1D44EF5666B3FC4* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Void Unity.Services.Analytics.Internal.ConsentTracker::ReadOptInPiplConsentStatus()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConsentTracker_ReadOptInPiplConsentStatus_m1BBCAFF95811454222E9A78CCBC1DB4331CF5127 (ConsentTracker_tBDC1E317516ED67AC655A7D3B1D44EF5666B3FC4* __this, const RuntimeMethod* method) ;
// System.Void Unity.Services.Analytics.Internal.ConsentTracker::ReadOptOutConsentStatus()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConsentTracker_ReadOptOutConsentStatus_m231368E1ECC2A7BBB5ADD724CB7BCB6BFA0D6E80 (ConsentTracker_tBDC1E317516ED67AC655A7D3B1D44EF5666B3FC4* __this, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Unity.Services.Analytics.Internal.GeoIPResponse>::Create()
inline AsyncTaskMethodBuilder_1_tCC71288BC6FD1578916420F041FD9DD930D2EEE5 AsyncTaskMethodBuilder_1_Create_m4B6AFF0D63DE8B335551AC63B1E6A663CE9544A0 (const RuntimeMethod* method)
{
	return ((  AsyncTaskMethodBuilder_1_tCC71288BC6FD1578916420F041FD9DD930D2EEE5 (*) (const RuntimeMethod*))AsyncTaskMethodBuilder_1_Create_m6A59453D00C0143F178809ADFD98C90E8C291ABB_gshared)(method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Unity.Services.Analytics.Internal.GeoIPResponse>::Start<Unity.Services.Analytics.Internal.ConsentTracker/<CheckGeoIP>d__19>(TStateMachine&)
inline void AsyncTaskMethodBuilder_1_Start_TisU3CCheckGeoIPU3Ed__19_tF4D189FF0813E0397D3684814869EC68573B2913_m666764D61DB7ABC8007283DF4BF8C0A50C2E7CB2 (AsyncTaskMethodBuilder_1_tCC71288BC6FD1578916420F041FD9DD930D2EEE5* __this, U3CCheckGeoIPU3Ed__19_tF4D189FF0813E0397D3684814869EC68573B2913* ___0_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tCC71288BC6FD1578916420F041FD9DD930D2EEE5*, U3CCheckGeoIPU3Ed__19_tF4D189FF0813E0397D3684814869EC68573B2913*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_Start_TisU3CCheckGeoIPU3Ed__19_tF4D189FF0813E0397D3684814869EC68573B2913_m1562C2B4CCC280ADB36D2D434C9E2E553A8F7715_gshared)(__this, ___0_stateMachine, method);
}
// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Unity.Services.Analytics.Internal.GeoIPResponse>::get_Task()
inline Task_1_t3F0E026C38791877CBE0DEC23CD10E9103FBA9B2* AsyncTaskMethodBuilder_1_get_Task_m650E5C11347CA5B2E79BFCE9C8BDE1865F4CBA29 (AsyncTaskMethodBuilder_1_tCC71288BC6FD1578916420F041FD9DD930D2EEE5* __this, const RuntimeMethod* method)
{
	return ((  Task_1_t3F0E026C38791877CBE0DEC23CD10E9103FBA9B2* (*) (AsyncTaskMethodBuilder_1_tCC71288BC6FD1578916420F041FD9DD930D2EEE5*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_get_Task_mEA092EC6F1324A9D694CF6056FA8583F2A2BDC89_gshared)(__this, method);
}
// System.Void Unity.Services.Analytics.Internal.ConsentTracker::ValidateConsentWasChecked()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConsentTracker_ValidateConsentWasChecked_m92986F8E992406A10E6712086DE129EB009935E6 (ConsentTracker_tBDC1E317516ED67AC655A7D3B1D44EF5666B3FC4* __this, const RuntimeMethod* method) ;
// System.Boolean Unity.Services.Analytics.Internal.ConsentTracker::IsConsentGiven(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConsentTracker_IsConsentGiven_m45BA5C4604FBACCB87933A7D812EEA65633F8338 (ConsentTracker_tBDC1E317516ED67AC655A7D3B1D44EF5666B3FC4* __this, String_t* ___0_identifier, const RuntimeMethod* method) ;
// Unity.Services.Analytics.Internal.ConsentStatus Unity.Services.Analytics.Internal.ConsentTracker::get_optInPiplConsentStatus()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ConsentTracker_get_optInPiplConsentStatus_m1F91E59567043A5429228EFBA83709725EB53A34_inline (ConsentTracker_tBDC1E317516ED67AC655A7D3B1D44EF5666B3FC4* __this, const RuntimeMethod* method) ;
// Unity.Services.Analytics.Internal.ConsentStatus Unity.Services.Analytics.Internal.ConsentTracker::get_optOutConsentStatus()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ConsentTracker_get_optOutConsentStatus_mA1EB68620CB4A25DD2739C48F607DFE18924D415_inline (ConsentTracker_tBDC1E317516ED67AC655A7D3B1D44EF5666B3FC4* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.PlayerPrefs::SetInt(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPrefs_SetInt_m956D3E2DB966F20CF42F842880DDF9E2BE94D948 (String_t* ___0_key, int32_t ___1_value, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.PlayerPrefs::HasKey(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayerPrefs_HasKey_mCA5C64BBA6BF8B230BC3BC92B4761DD3B11D4668 (String_t* ___0_key, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.PlayerPrefs::GetInt(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlayerPrefs_GetInt_m4D859DBEABAD3FB406C94485A0B2638A0C7F2987 (String_t* ___0_key, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Unity.Services.Analytics.Internal.GeoIPResponse>::Start<Unity.Services.Analytics.Internal.ConsentTracker/<GetGeoIPResponse>d__33>(TStateMachine&)
inline void AsyncTaskMethodBuilder_1_Start_TisU3CGetGeoIPResponseU3Ed__33_tEB679EFC74F417928C47D29F932F7D9D7A8C3292_m73E08A89008E64DC46E1ACEC665EC6272CDD4622 (AsyncTaskMethodBuilder_1_tCC71288BC6FD1578916420F041FD9DD930D2EEE5* __this, U3CGetGeoIPResponseU3Ed__33_tEB679EFC74F417928C47D29F932F7D9D7A8C3292* ___0_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tCC71288BC6FD1578916420F041FD9DD930D2EEE5*, U3CGetGeoIPResponseU3Ed__33_tEB679EFC74F417928C47D29F932F7D9D7A8C3292*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_Start_TisU3CGetGeoIPResponseU3Ed__33_tEB679EFC74F417928C47D29F932F7D9D7A8C3292_mBE0AEBBB612AB7C87006C85EDEA075DBF1733AFF_gshared)(__this, ___0_stateMachine, method);
}
// System.Void Unity.Services.Analytics.ConsentCheckException::.ctor(Unity.Services.Analytics.ConsentCheckExceptionReason,System.Int32,System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConsentCheckException__ctor_m0F6DC7108E11524A5BBBE85F07DD082873FE95B3 (ConsentCheckException_t96E7054ECB013548EA92EEFFFACAB143D5A86B7D* __this, int32_t ___0_reason, int32_t ___1_errorCode, String_t* ___2_message, Exception_t* ___3_innerException, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task`1<Unity.Services.Analytics.Internal.GeoIPResponse> Unity.Services.Analytics.Internal.ConsentTracker::GetGeoIPResponse()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t3F0E026C38791877CBE0DEC23CD10E9103FBA9B2* ConsentTracker_GetGeoIPResponse_m67ADCB7DD19286D83C63C5F1129F19E1F9F6F656 (ConsentTracker_tBDC1E317516ED67AC655A7D3B1D44EF5666B3FC4* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Unity.Services.Analytics.Internal.GeoIPResponse>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<Unity.Services.Analytics.Internal.GeoIPResponse>,Unity.Services.Analytics.Internal.ConsentTracker/<CheckGeoIP>d__19>(TAwaiter&,TStateMachine&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t67679171BEFE85C38666397015D627C6E3E7D886_TisU3CCheckGeoIPU3Ed__19_tF4D189FF0813E0397D3684814869EC68573B2913_m6F67D29FE3BD690109387456790DA526E3F3D722 (AsyncTaskMethodBuilder_1_tCC71288BC6FD1578916420F041FD9DD930D2EEE5* __this, TaskAwaiter_1_t67679171BEFE85C38666397015D627C6E3E7D886* ___0_awaiter, U3CCheckGeoIPU3Ed__19_tF4D189FF0813E0397D3684814869EC68573B2913* ___1_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tCC71288BC6FD1578916420F041FD9DD930D2EEE5*, TaskAwaiter_1_t67679171BEFE85C38666397015D627C6E3E7D886*, U3CCheckGeoIPU3Ed__19_tF4D189FF0813E0397D3684814869EC68573B2913*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA_TisU3CCheckGeoIPU3Ed__19_tF4D189FF0813E0397D3684814869EC68573B2913_mA0A6D812257DFA76AD9610A59ECE09F9C68D801D_gshared)(__this, ___0_awaiter, ___1_stateMachine, method);
}
// System.Boolean Unity.Services.Analytics.Internal.ConsentTracker::IsConsentGiven()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConsentTracker_IsConsentGiven_m73AE70CC46CC8C736C47BE464B484132C9F1581A (ConsentTracker_tBDC1E317516ED67AC655A7D3B1D44EF5666B3FC4* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Unity.Services.Analytics.Internal.GeoIPResponse>::SetException(System.Exception)
inline void AsyncTaskMethodBuilder_1_SetException_m755EC2E736574A631BEC6E2F204F9AF72A5CFE2A (AsyncTaskMethodBuilder_1_tCC71288BC6FD1578916420F041FD9DD930D2EEE5* __this, Exception_t* ___0_exception, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tCC71288BC6FD1578916420F041FD9DD930D2EEE5*, Exception_t*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetException_mC2F74B26F5303F9F960965220E2866D777F1A5C6_gshared)(__this, ___0_exception, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Unity.Services.Analytics.Internal.GeoIPResponse>::SetResult(TResult)
inline void AsyncTaskMethodBuilder_1_SetResult_m8964201B7044B7762317C83D8CA064A284DAD38F (AsyncTaskMethodBuilder_1_tCC71288BC6FD1578916420F041FD9DD930D2EEE5* __this, GeoIPResponse_tADA05745323DD2374411BCB8CEC9EC086B4FE150* ___0_result, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tCC71288BC6FD1578916420F041FD9DD930D2EEE5*, GeoIPResponse_tADA05745323DD2374411BCB8CEC9EC086B4FE150*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetResult_m0D83195F995F9825D7A6DCDC3835D6917C43B5A6_gshared)(__this, ___0_result, method);
}
// System.Void Unity.Services.Analytics.Internal.ConsentTracker/<CheckGeoIP>d__19::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCheckGeoIPU3Ed__19_MoveNext_mE50FA81A1A7EC3B8AD5BACF2ED7D89137B90394B (U3CCheckGeoIPU3Ed__19_tF4D189FF0813E0397D3684814869EC68573B2913* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Unity.Services.Analytics.Internal.GeoIPResponse>::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
inline void AsyncTaskMethodBuilder_1_SetStateMachine_m618193D95F04A13F9794E020AC25EF91306A8670 (AsyncTaskMethodBuilder_1_tCC71288BC6FD1578916420F041FD9DD930D2EEE5* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tCC71288BC6FD1578916420F041FD9DD930D2EEE5*, RuntimeObject*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetStateMachine_m3BE54983634ABF5BE05200C7894AD0F9F20BDD65_gshared)(__this, ___0_stateMachine, method);
}
// System.Void Unity.Services.Analytics.Internal.ConsentTracker/<CheckGeoIP>d__19::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCheckGeoIPU3Ed__19_SetStateMachine_mD47ACB45E356285C8BB5F9147A5DEDC5B1163650 (U3CCheckGeoIPU3Ed__19_tF4D189FF0813E0397D3684814869EC68573B2913* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Unity.Services.Analytics.Internal.GeoIPResponse>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<Unity.Services.Analytics.Internal.GeoIPResponse>,Unity.Services.Analytics.Internal.ConsentTracker/<GetGeoIPResponse>d__33>(TAwaiter&,TStateMachine&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t67679171BEFE85C38666397015D627C6E3E7D886_TisU3CGetGeoIPResponseU3Ed__33_tEB679EFC74F417928C47D29F932F7D9D7A8C3292_m9C98D724DAFB7DF57764019C4A1087E586617EDE (AsyncTaskMethodBuilder_1_tCC71288BC6FD1578916420F041FD9DD930D2EEE5* __this, TaskAwaiter_1_t67679171BEFE85C38666397015D627C6E3E7D886* ___0_awaiter, U3CGetGeoIPResponseU3Ed__33_tEB679EFC74F417928C47D29F932F7D9D7A8C3292* ___1_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tCC71288BC6FD1578916420F041FD9DD930D2EEE5*, TaskAwaiter_1_t67679171BEFE85C38666397015D627C6E3E7D886*, U3CGetGeoIPResponseU3Ed__33_tEB679EFC74F417928C47D29F932F7D9D7A8C3292*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA_TisU3CGetGeoIPResponseU3Ed__33_tEB679EFC74F417928C47D29F932F7D9D7A8C3292_m9B2FD47E269DD9BD888B246A97D71DE869723B9A_gshared)(__this, ___0_awaiter, ___1_stateMachine, method);
}
// System.Void Unity.Services.Analytics.Internal.ConsentTracker/<GetGeoIPResponse>d__33::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetGeoIPResponseU3Ed__33_MoveNext_m8DC3796520E412B06E1C572F3D665F90CFF8D71D (U3CGetGeoIPResponseU3Ed__33_tEB679EFC74F417928C47D29F932F7D9D7A8C3292* __this, const RuntimeMethod* method) ;
// System.Void Unity.Services.Analytics.Internal.ConsentTracker/<GetGeoIPResponse>d__33::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetGeoIPResponseU3Ed__33_SetStateMachine_m74A1484D7DB6DD67B7E7F0C16106CB2EC413F225 (U3CGetGeoIPResponseU3Ed__33_tEB679EFC74F417928C47D29F932F7D9D7A8C3292* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Unity.Services.Analytics.Internal.GeoIPResponse>::Start<Unity.Services.Analytics.Internal.GeoAPI/<MakeRequest>d__1>(TStateMachine&)
inline void AsyncTaskMethodBuilder_1_Start_TisU3CMakeRequestU3Ed__1_t0EF0B916953106E30ADFEE30817391CC38DF6084_m2278461A5470C358F8E18E9A5B3B61AB9076AA02 (AsyncTaskMethodBuilder_1_tCC71288BC6FD1578916420F041FD9DD930D2EEE5* __this, U3CMakeRequestU3Ed__1_t0EF0B916953106E30ADFEE30817391CC38DF6084* ___0_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tCC71288BC6FD1578916420F041FD9DD930D2EEE5*, U3CMakeRequestU3Ed__1_t0EF0B916953106E30ADFEE30817391CC38DF6084*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_Start_TisU3CMakeRequestU3Ed__1_t0EF0B916953106E30ADFEE30817391CC38DF6084_m18B21400DBE1081835C8D98213AB847D6005D2DA_gshared)(__this, ___0_stateMachine, method);
}
// System.Void Unity.Services.Analytics.Internal.GeoAPI/WebRequestTaskWrapper/<>c__DisplayClass2_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass2_0__ctor_m62BF5B6343547C6A9291F3C4EF5C76012180A969 (U3CU3Ec__DisplayClass2_0_tA1057DDCB34766738AD61FC83B16C5939DF39952* __this, const RuntimeMethod* method) ;
// System.Void System.Threading.Tasks.TaskCompletionSource`1<UnityEngine.Networking.UnityWebRequestAsyncOperation>::.ctor()
inline void TaskCompletionSource_1__ctor_m28BBDEEB420B6B31DA78AC27F9ED2E899EF367B4 (TaskCompletionSource_1_t187BBB0EA0E2FFAD5D7E09DB36D1DF3DE2B2F68C* __this, const RuntimeMethod* method)
{
	((  void (*) (TaskCompletionSource_1_t187BBB0EA0E2FFAD5D7E09DB36D1DF3DE2B2F68C*, const RuntimeMethod*))TaskCompletionSource_1__ctor_mBF9A903AD14C4E9CF044B227776C532BA9C40D60_gshared)(__this, method);
}
// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.TaskCompletionSource`1<UnityEngine.Networking.UnityWebRequestAsyncOperation>::get_Task()
inline Task_1_t892C4382C6E738570B24B25E2972B303E8EB849F* TaskCompletionSource_1_get_Task_m84FB049ED4EBE0B7DCF8660691DDA2B497E6F0E6_inline (TaskCompletionSource_1_t187BBB0EA0E2FFAD5D7E09DB36D1DF3DE2B2F68C* __this, const RuntimeMethod* method)
{
	return ((  Task_1_t892C4382C6E738570B24B25E2972B303E8EB849F* (*) (TaskCompletionSource_1_t187BBB0EA0E2FFAD5D7E09DB36D1DF3DE2B2F68C*, const RuntimeMethod*))TaskCompletionSource_1_get_Task_mF44990297C25C7DBE1E65241C03D0120CB551552_gshared_inline)(__this, method);
}
// System.Runtime.CompilerServices.TaskAwaiter`1<TResult> System.Threading.Tasks.Task`1<UnityEngine.Networking.UnityWebRequestAsyncOperation>::GetAwaiter()
inline TaskAwaiter_1_t2EFD3A7518CBC33EEAA02EBD1D5C4147D6FD47BF Task_1_GetAwaiter_m1191FB560C8E8B2B31CE4C013EA83E8BA8FE17BC (Task_1_t892C4382C6E738570B24B25E2972B303E8EB849F* __this, const RuntimeMethod* method)
{
	return ((  TaskAwaiter_1_t2EFD3A7518CBC33EEAA02EBD1D5C4147D6FD47BF (*) (Task_1_t892C4382C6E738570B24B25E2972B303E8EB849F*, const RuntimeMethod*))Task_1_GetAwaiter_mD80ED263BF3F1F8DBDBD177BA3401A0AAAFA38E3_gshared)(__this, method);
}
// System.Void System.Threading.Tasks.TaskCompletionSource`1<UnityEngine.Networking.UnityWebRequestAsyncOperation>::SetResult(TResult)
inline void TaskCompletionSource_1_SetResult_m462302E1261DE351DB0AA663769C88ED0A78C5C4 (TaskCompletionSource_1_t187BBB0EA0E2FFAD5D7E09DB36D1DF3DE2B2F68C* __this, UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C* ___0_result, const RuntimeMethod* method)
{
	((  void (*) (TaskCompletionSource_1_t187BBB0EA0E2FFAD5D7E09DB36D1DF3DE2B2F68C*, UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C*, const RuntimeMethod*))TaskCompletionSource_1_SetResult_m948378015A7A0E42647452EB7003466406B831A4_gshared)(__this, ___0_result, method);
}
// System.Void UnityEngine.Networking.UnityWebRequest::set_timeout(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequest_set_timeout_mE9C8169FA8CF1BE17E3D9FDACDC6E1A9508DF618 (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Networking.DownloadHandlerBuffer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DownloadHandlerBuffer__ctor_m5EE7C9E8AB468B2B937A7C9C66B4176A884147AF (DownloadHandlerBuffer_t34C626F6513FA9A44FDDDEE85455CF2CD9DA5974* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Networking.UnityWebRequest::set_downloadHandler(UnityEngine.Networking.DownloadHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequest_set_downloadHandler_m6CB94492012097DFC44E5773D1A627753788292F (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* ___0_value, const RuntimeMethod* method) ;
// System.Void Unity.Services.Analytics.Internal.GeoAPI/WebRequestTaskWrapper::.ctor(UnityEngine.Networking.UnityWebRequest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebRequestTaskWrapper__ctor_m737411964301AB0483A39FB2B0D46B6CCC1E512E (WebRequestTaskWrapper_tF4501F92C57A6AA309830A1BE02214B16ADA71FD* __this, UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* ___0_request, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.TaskAwaiter`1<UnityEngine.Networking.UnityWebRequestAsyncOperation> Unity.Services.Analytics.Internal.GeoAPI/WebRequestTaskWrapper::GetAwaiter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TaskAwaiter_1_t2EFD3A7518CBC33EEAA02EBD1D5C4147D6FD47BF WebRequestTaskWrapper_GetAwaiter_mE54F6FA2E11D3ECAA8BB6762857F32C1F40A5BE7 (WebRequestTaskWrapper_tF4501F92C57A6AA309830A1BE02214B16ADA71FD* __this, const RuntimeMethod* method) ;
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<UnityEngine.Networking.UnityWebRequestAsyncOperation>::get_IsCompleted()
inline bool TaskAwaiter_1_get_IsCompleted_mD3A1F9B5FE69A689A39D53FD3A093B7F8F05A070 (TaskAwaiter_1_t2EFD3A7518CBC33EEAA02EBD1D5C4147D6FD47BF* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (TaskAwaiter_1_t2EFD3A7518CBC33EEAA02EBD1D5C4147D6FD47BF*, const RuntimeMethod*))TaskAwaiter_1_get_IsCompleted_mEEBB09E26F4165A0F864D92E1890CFCD2C8CFD54_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Unity.Services.Analytics.Internal.GeoIPResponse>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<UnityEngine.Networking.UnityWebRequestAsyncOperation>,Unity.Services.Analytics.Internal.GeoAPI/<MakeRequest>d__1>(TAwaiter&,TStateMachine&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t2EFD3A7518CBC33EEAA02EBD1D5C4147D6FD47BF_TisU3CMakeRequestU3Ed__1_t0EF0B916953106E30ADFEE30817391CC38DF6084_m2C53456EB05AE3BD205398F10BFAEC3A03F99738 (AsyncTaskMethodBuilder_1_tCC71288BC6FD1578916420F041FD9DD930D2EEE5* __this, TaskAwaiter_1_t2EFD3A7518CBC33EEAA02EBD1D5C4147D6FD47BF* ___0_awaiter, U3CMakeRequestU3Ed__1_t0EF0B916953106E30ADFEE30817391CC38DF6084* ___1_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tCC71288BC6FD1578916420F041FD9DD930D2EEE5*, TaskAwaiter_1_t2EFD3A7518CBC33EEAA02EBD1D5C4147D6FD47BF*, U3CMakeRequestU3Ed__1_t0EF0B916953106E30ADFEE30817391CC38DF6084*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA_TisU3CMakeRequestU3Ed__1_t0EF0B916953106E30ADFEE30817391CC38DF6084_m51A996EF9F9E67A8B25CF795DB3AC78AFEE6B872_gshared)(__this, ___0_awaiter, ___1_stateMachine, method);
}
// TResult System.Runtime.CompilerServices.TaskAwaiter`1<UnityEngine.Networking.UnityWebRequestAsyncOperation>::GetResult()
inline UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C* TaskAwaiter_1_GetResult_mE0F44BFAB46D5BBA8B6341757BC30AEC7C44F5BB (TaskAwaiter_1_t2EFD3A7518CBC33EEAA02EBD1D5C4147D6FD47BF* __this, const RuntimeMethod* method)
{
	return ((  UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C* (*) (TaskAwaiter_1_t2EFD3A7518CBC33EEAA02EBD1D5C4147D6FD47BF*, const RuntimeMethod*))TaskAwaiter_1_GetResult_mA4A8A1F43A456B40DDA251D00026C60919AED85B_gshared)(__this, method);
}
// UnityEngine.Networking.DownloadHandler UnityEngine.Networking.UnityWebRequest::get_downloadHandler()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* UnityWebRequest_get_downloadHandler_m1AA91B23D9D594A4F4FE2975FC356C508528F1D5 (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.Networking.DownloadHandler::get_text()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DownloadHandler_get_text_mA6DE5CB2647A21E577B963708DC3D0DA4DBFE7D8 (DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* __this, const RuntimeMethod* method) ;
// T Newtonsoft.Json.JsonConvert::DeserializeObject<Unity.Services.Analytics.Internal.GeoIPResponse>(System.String)
inline GeoIPResponse_tADA05745323DD2374411BCB8CEC9EC086B4FE150* JsonConvert_DeserializeObject_TisGeoIPResponse_tADA05745323DD2374411BCB8CEC9EC086B4FE150_mE116D4B93529E5AE7C995FCF33ACB72C41D37F20 (String_t* ___0_value, const RuntimeMethod* method)
{
	return ((  GeoIPResponse_tADA05745323DD2374411BCB8CEC9EC086B4FE150* (*) (String_t*, const RuntimeMethod*))JsonConvert_DeserializeObject_TisRuntimeObject_m4AED5444440BFC03D3CB9506F186AC7C37B45EF2_gshared)(___0_value, method);
}
// System.Void Unity.Services.Analytics.Internal.GeoAPI/<MakeRequest>d__1::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMakeRequestU3Ed__1_MoveNext_m84E5C849BBA78D226EF9A48216FFC4CD3D2042F1 (U3CMakeRequestU3Ed__1_t0EF0B916953106E30ADFEE30817391CC38DF6084* __this, const RuntimeMethod* method) ;
// System.Void Unity.Services.Analytics.Internal.GeoAPI/<MakeRequest>d__1::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMakeRequestU3Ed__1_SetStateMachine_mFB6A5DBCD2E2998B9B9CE5F86800FEDD596F4D08 (U3CMakeRequestU3Ed__1_t0EF0B916953106E30ADFEE30817391CC38DF6084* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) ;
// UnityEngine.RuntimePlatform UnityEngine.Application::get_platform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Application_get_platform_m59EF7D6155D18891B24767F83F388160B1FF2138 (const RuntimeMethod* method) ;
// System.String UnityEngine.Application::get_persistentDataPath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Application_get_persistentDataPath_mC58BD3E1A20732E0A536491DBCAE6505B1624399 (const RuntimeMethod* method) ;
// System.Boolean System.IO.File::Exists(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool File_Exists_m95E329ABBE3EAD6750FE1989BBA6884457136D4A (String_t* ___0_path, const RuntimeMethod* method) ;
// System.Void System.IO.File::Delete(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void File_Delete_mE29829DA504F3E1B8BCB78F21E2862C9ED7EC386 (String_t* ___0_path, const RuntimeMethod* method) ;
// System.Void System.IO.FileStream::.ctor(System.String,System.IO.FileMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileStream__ctor_m78499F9BE2BE31DA34F123B4399AA457716BD6E6 (FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* __this, String_t* ___0_path, int32_t ___1_mode, const RuntimeMethod* method) ;
// System.Void System.IO.BinaryWriter::.ctor(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BinaryWriter__ctor_mF2F1235E378C3EC493A8C816597BCEB4205A9CA0 (BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_output, const RuntimeMethod* method) ;
// System.Void System.IO.BinaryReader::.ctor(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BinaryReader__ctor_m898732FE0DBEDD480B24F6DE45A9AC696E44CC0F (BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_input, const RuntimeMethod* method) ;
// System.Void Unity.Services.Analytics.Internal.DiskCache::ReadVersionOneCacheFile(System.Collections.Generic.List`1<System.Int32>&,System.IO.BinaryReader,System.IO.Stream&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DiskCache_ReadVersionOneCacheFile_mD1337201A3FBBAD29159B380EC39A07285441C96 (DiskCache_tE19D214B0538F2CC9D59D4F827B480AEBCEF368D* __this, List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73** ___0_eventEndIndices, BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* ___1_reader, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE** ___2_buffer, const RuntimeMethod* method) ;
// System.Void Unity.Services.Analytics.Internal.DiskCache::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DiskCache_Clear_m3C6A5E5104B8CF7998D637099B86428D08E6003D (DiskCache_tE19D214B0538F2CC9D59D4F827B480AEBCEF368D* __this, const RuntimeMethod* method) ;
// System.Void System.IO.Stream::CopyTo(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stream_CopyTo_m61DC54FF3708C2B8AB5C5D63D300AA57ADA01999 (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_destination, const RuntimeMethod* method) ;
// System.Boolean Unity.Services.Analytics.Internal.Dispatcher::get_FlushInProgress()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Dispatcher_get_FlushInProgress_mCC5DAEE29D9E97D753FE7B2C876FC7B9E3F50E28_inline (Dispatcher_t60105C40E4336C76AECD5AF26D5C6A9448D3ECAE* __this, const RuntimeMethod* method) ;
// System.Void Unity.Services.Analytics.Internal.Dispatcher::FlushBufferToService()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dispatcher_FlushBufferToService_m55AC50B02B30BD4ED1E554D794AA5DEE9FB77C39 (Dispatcher_t60105C40E4336C76AECD5AF26D5C6A9448D3ECAE* __this, const RuntimeMethod* method) ;
// System.Void Unity.Services.Analytics.Internal.Dispatcher::set_FlushInProgress(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Dispatcher_set_FlushInProgress_mE7F87C33DBBF7012A706047DC2336D3B6EF9391E_inline (Dispatcher_t60105C40E4336C76AECD5AF26D5C6A9448D3ECAE* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.String Unity.Services.Analytics.Internal.Dispatcher::get_CollectUrl()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Dispatcher_get_CollectUrl_m3C55277A1037E4A2BAE8D319D83925467707033B_inline (Dispatcher_t60105C40E4336C76AECD5AF26D5C6A9448D3ECAE* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Int64>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_mC0FC430617EB8A9B54D1632C5BD95979ED5C2C2A (Action_1_tBB5A52E9AEFBC4F0C8D94D39CAD16BCB6B8B5929* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tBB5A52E9AEFBC4F0C8D94D39CAD16BCB6B8B5929*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_mC0FC430617EB8A9B54D1632C5BD95979ED5C2C2A_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Boolean UnityEngine.Networking.UnityWebRequest::get_isNetworkError()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnityWebRequest_get_isNetworkError_m036684411466688E71E67CDD3703BAC9035A56F0 (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, const RuntimeMethod* method) ;
// System.Void Unity.Services.Analytics.Internal.AnalyticsWebRequest::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnalyticsWebRequest__ctor_m8CA36BAF33C32134D350FC88E7BF795AFFDFD77D (AnalyticsWebRequest_t2851A3E58826329B4D5AE9A1898AD98EF26DEEFA* __this, String_t* ___0_url, String_t* ___1_method, const RuntimeMethod* method) ;
// System.Void Unity.Services.Analytics.Internal.WebRequestHelper/<>c__DisplayClass1_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass1_0__ctor_m1DE2113561D29AF6B101E20477737F8FF6DAAF2E (U3CU3Ec__DisplayClass1_0_tEA14AF045675E396173ADD0A1FE52135E6FA37A8* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Int64>::Invoke(T)
inline void Action_1_Invoke_mE4800C6D733A4CDE721FD3D8B4E95319B5C64E9E_inline (Action_1_tBB5A52E9AEFBC4F0C8D94D39CAD16BCB6B8B5929* __this, int64_t ___0_obj, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tBB5A52E9AEFBC4F0C8D94D39CAD16BCB6B8B5929*, int64_t, const RuntimeMethod*))Action_1_Invoke_mE4800C6D733A4CDE721FD3D8B4E95319B5C64E9E_gshared_inline)(__this, ___0_obj, method);
}
// Unity.Services.Analytics.Platform.UA2PlatformCode Unity.Services.Analytics.Platform.Runtime::GetPlatform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Runtime_GetPlatform_mC00CBA2AD7478773ACCB340218D1C6866954104C (const RuntimeMethod* method) ;
// System.String System.Enum::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741 (RuntimeObject* __this, const RuntimeMethod* method) ;
// UnityEngine.DeviceType UnityEngine.SystemInfo::get_deviceType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SystemInfo_get_deviceType_m9BA3769FAC1102E252B5350FE208BF885E5F24D0 (const RuntimeMethod* method) ;
// System.String Unity.Services.Analytics.Data.StdCommonParams::get_GameStoreID()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* StdCommonParams_get_GameStoreID_m84117F13E7CB919145EC3EF0480411695B7B7B69_inline (StdCommonParams_tDFD4FF72F7EEBBC4384155713888A4485FF5E701* __this, const RuntimeMethod* method) ;
// System.String Unity.Services.Analytics.Data.StdCommonParams::get_GameBundleID()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* StdCommonParams_get_GameBundleID_m614C916F3CBA18D60161DDFD84B4C9D5C2E99531_inline (StdCommonParams_tDFD4FF72F7EEBBC4384155713888A4485FF5E701* __this, const RuntimeMethod* method) ;
// System.String Unity.Services.Analytics.Data.StdCommonParams::get_Platform()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* StdCommonParams_get_Platform_m997C2F5D078131853762DCFBA238288F8EFA191E_inline (StdCommonParams_tDFD4FF72F7EEBBC4384155713888A4485FF5E701* __this, const RuntimeMethod* method) ;
// System.String Unity.Services.Analytics.Data.StdCommonParams::get_Idfv()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* StdCommonParams_get_Idfv_m0CB0676EB45E77DE51316B204FFAE5437CEFA6DD_inline (StdCommonParams_tDFD4FF72F7EEBBC4384155713888A4485FF5E701* __this, const RuntimeMethod* method) ;
// System.String Unity.Services.Analytics.Data.StdCommonParams::get_UasUserID()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* StdCommonParams_get_UasUserID_m6A4DE2B299022D7DBCEA6EE055C717E59BE2B32C_inline (StdCommonParams_tDFD4FF72F7EEBBC4384155713888A4485FF5E701* __this, const RuntimeMethod* method) ;
// System.String Unity.Services.Analytics.Data.StdCommonParams::get_BuildGuuid()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* StdCommonParams_get_BuildGuuid_m706EB59064FA0D40D1C244514B2EA2995AE5706D_inline (StdCommonParams_tDFD4FF72F7EEBBC4384155713888A4485FF5E701* __this, const RuntimeMethod* method) ;
// System.String Unity.Services.Analytics.Data.StdCommonParams::get_ClientVersion()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* StdCommonParams_get_ClientVersion_mA3D1574F4D14E5355C23D39AA130AB106960491D_inline (StdCommonParams_tDFD4FF72F7EEBBC4384155713888A4485FF5E701* __this, const RuntimeMethod* method) ;
// System.String Unity.Services.Analytics.Data.StdCommonParams::get_UserCountry()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* StdCommonParams_get_UserCountry_mDDDF84AB7FC6D62ECBB642C7C7814D3143DAF0F9_inline (StdCommonParams_tDFD4FF72F7EEBBC4384155713888A4485FF5E701* __this, const RuntimeMethod* method) ;
// System.Nullable`1<System.Double> Unity.Services.Analytics.Data.StdCommonParams::get_DeviceVolume()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 StdCommonParams_get_DeviceVolume_mD4CB9275283492DA050B8BDA949E1E38C35EB76C_inline (StdCommonParams_tDFD4FF72F7EEBBC4384155713888A4485FF5E701* __this, const RuntimeMethod* method) ;
// System.Boolean System.Nullable`1<System.Double>::get_HasValue()
inline bool Nullable_1_get_HasValue_mC082C667C8EB3A6CA80E06BCAEA0BED00C6BC15A_inline (Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165*, const RuntimeMethod*))Nullable_1_get_HasValue_mC082C667C8EB3A6CA80E06BCAEA0BED00C6BC15A_gshared_inline)(__this, method);
}
// T System.Nullable`1<System.Double>::get_Value()
inline double Nullable_1_get_Value_m260A5CB9269FD3E130F998A589EDAEC2E8F9EAE1 (Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165* __this, const RuntimeMethod* method)
{
	return ((  double (*) (Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165*, const RuntimeMethod*))Nullable_1_get_Value_m260A5CB9269FD3E130F998A589EDAEC2E8F9EAE1_gshared)(__this, method);
}
// System.Nullable`1<System.Double> Unity.Services.Analytics.Data.StdCommonParams::get_BatteryLoad()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 StdCommonParams_get_BatteryLoad_mE5C6A63115E33A0FB67BA3BA7FF4CD98021A584A_inline (StdCommonParams_tDFD4FF72F7EEBBC4384155713888A4485FF5E701* __this, const RuntimeMethod* method) ;
// System.String Unity.Services.Analytics.Data.StdCommonParams::get_ProjectID()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* StdCommonParams_get_ProjectID_m48D1D967587EF2BB877AB287B6FD03531D3E3658_inline (StdCommonParams_tDFD4FF72F7EEBBC4384155713888A4485FF5E701* __this, const RuntimeMethod* method) ;
// System.Void System.Nullable`1<System.Int64>::.ctor(T)
inline void Nullable_1__ctor_m117BE9EF6DBC76B088B52AFB80634B9195D384A1 (Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17* __this, int64_t ___0_value, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17*, int64_t, const RuntimeMethod*))Nullable_1__ctor_m117BE9EF6DBC76B088B52AFB80634B9195D384A1_gshared)(__this, ___0_value, method);
}
// System.Void Unity.Services.Analytics.Data.StdCommonParams::SerializeCommonEventParams(Unity.Services.Analytics.Internal.IBuffer&,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StdCommonParams_SerializeCommonEventParams_m174FE65D4790275038F1E89B2D2DD862DB5FCC0B (StdCommonParams_tDFD4FF72F7EEBBC4384155713888A4485FF5E701* __this, RuntimeObject** ___0_buf, String_t* ___1_callingMethodIdentifier, const RuntimeMethod* method) ;
// System.Void System.Array::Clear(System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB (RuntimeArray* ___0_array, int32_t ___1_index, int32_t ___2_length, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Ua2CoreInitializeCallback::Register()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ua2CoreInitializeCallback_Register_mF40ACDE0AA72C4F92C34C67044F57796F0EAE2B1 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreRegistration_DependsOn_TisICloudProjectId_t366B66869ECC734B15C1F60633D2B998CD9231FE_mE5B2A026998399E51D853DF4B3D4F9AA85BF84D4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreRegistration_DependsOn_TisIEnvironments_t9DCAF0398EB856DBE771A9C2D7B120661D628CB7_mF32D3AEE8770313EFCC77D92013AF760CBABCD64_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreRegistration_DependsOn_TisIExternalUserId_t50A07D7165D254D971AA529FFE55B4A595A75F25_mCABAC7BD58204E9E5B80544CF9D413AEC53772DD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreRegistration_DependsOn_TisIInstallationId_tCE6DEEEBAFABEB9EC621BD1646D82BC9D82BFB0C_mA93E2240E092DDA93C08F11936078CD15E581C91_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreRegistration_DependsOn_TisIProjectConfiguration_tB5A7516DEB869AD005431EC83C6E02221D2B60D2_mFE611D2FD196728ACC376EAB06D4F2664D8FDD10_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreRegistration_OptionallyDependsOn_TisIPlayerId_t6A7BAE55B4D78E87B15B9261828E897BAACBF913_m5F08ADC17E47CCBEEDC9C48CC64F5A475CCFD286_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreRegistration_ProvidesComponent_TisIAnalyticsStandardEventComponent_tF6FA10DAAE59FC2DD9C6441D6B2E8BDA6EDDA807_m4CCB17ADEC6343A3DE09DC770F1F49B45FFA4942_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreRegistry_RegisterPackage_TisUa2CoreInitializeCallback_t20D7CCCEDAF24D8AD75CBE5991731A72C70418BD_m2D03E607E78DEFB5521CD83B02846C48D6EF4F0E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ua2CoreInitializeCallback_t20D7CCCEDAF24D8AD75CBE5991731A72C70418BD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CoreRegistration_tD2BD53556CAA48BD5E0D32CB92C6494C0EB85581 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// CoreRegistry.Instance.RegisterPackage(new Ua2CoreInitializeCallback())
		//     .DependsOn<IInstallationId>()
		//     .DependsOn<ICloudProjectId>()
		//     .DependsOn<IEnvironments>()
		//     .DependsOn<IExternalUserId>()
		//     .DependsOn<IProjectConfiguration>()
		//     .OptionallyDependsOn<IPlayerId>()
		//     .ProvidesComponent<IAnalyticsStandardEventComponent>();
		CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA* L_0;
		L_0 = CoreRegistry_get_Instance_m73A64BD3CB78EF5AC698D1635B5872CEB9F9AFE2_inline(NULL);
		Ua2CoreInitializeCallback_t20D7CCCEDAF24D8AD75CBE5991731A72C70418BD* L_1 = (Ua2CoreInitializeCallback_t20D7CCCEDAF24D8AD75CBE5991731A72C70418BD*)il2cpp_codegen_object_new(Ua2CoreInitializeCallback_t20D7CCCEDAF24D8AD75CBE5991731A72C70418BD_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Ua2CoreInitializeCallback__ctor_m096A57E67DE0D5E40E7AB84CF3935A5D7DD898CE(L_1, NULL);
		NullCheck(L_0);
		CoreRegistration_tD2BD53556CAA48BD5E0D32CB92C6494C0EB85581 L_2;
		L_2 = CoreRegistry_RegisterPackage_TisUa2CoreInitializeCallback_t20D7CCCEDAF24D8AD75CBE5991731A72C70418BD_m2D03E607E78DEFB5521CD83B02846C48D6EF4F0E(L_0, L_1, CoreRegistry_RegisterPackage_TisUa2CoreInitializeCallback_t20D7CCCEDAF24D8AD75CBE5991731A72C70418BD_m2D03E607E78DEFB5521CD83B02846C48D6EF4F0E_RuntimeMethod_var);
		V_0 = L_2;
		CoreRegistration_tD2BD53556CAA48BD5E0D32CB92C6494C0EB85581 L_3;
		L_3 = CoreRegistration_DependsOn_TisIInstallationId_tCE6DEEEBAFABEB9EC621BD1646D82BC9D82BFB0C_mA93E2240E092DDA93C08F11936078CD15E581C91((&V_0), CoreRegistration_DependsOn_TisIInstallationId_tCE6DEEEBAFABEB9EC621BD1646D82BC9D82BFB0C_mA93E2240E092DDA93C08F11936078CD15E581C91_RuntimeMethod_var);
		V_0 = L_3;
		CoreRegistration_tD2BD53556CAA48BD5E0D32CB92C6494C0EB85581 L_4;
		L_4 = CoreRegistration_DependsOn_TisICloudProjectId_t366B66869ECC734B15C1F60633D2B998CD9231FE_mE5B2A026998399E51D853DF4B3D4F9AA85BF84D4((&V_0), CoreRegistration_DependsOn_TisICloudProjectId_t366B66869ECC734B15C1F60633D2B998CD9231FE_mE5B2A026998399E51D853DF4B3D4F9AA85BF84D4_RuntimeMethod_var);
		V_0 = L_4;
		CoreRegistration_tD2BD53556CAA48BD5E0D32CB92C6494C0EB85581 L_5;
		L_5 = CoreRegistration_DependsOn_TisIEnvironments_t9DCAF0398EB856DBE771A9C2D7B120661D628CB7_mF32D3AEE8770313EFCC77D92013AF760CBABCD64((&V_0), CoreRegistration_DependsOn_TisIEnvironments_t9DCAF0398EB856DBE771A9C2D7B120661D628CB7_mF32D3AEE8770313EFCC77D92013AF760CBABCD64_RuntimeMethod_var);
		V_0 = L_5;
		CoreRegistration_tD2BD53556CAA48BD5E0D32CB92C6494C0EB85581 L_6;
		L_6 = CoreRegistration_DependsOn_TisIExternalUserId_t50A07D7165D254D971AA529FFE55B4A595A75F25_mCABAC7BD58204E9E5B80544CF9D413AEC53772DD((&V_0), CoreRegistration_DependsOn_TisIExternalUserId_t50A07D7165D254D971AA529FFE55B4A595A75F25_mCABAC7BD58204E9E5B80544CF9D413AEC53772DD_RuntimeMethod_var);
		V_0 = L_6;
		CoreRegistration_tD2BD53556CAA48BD5E0D32CB92C6494C0EB85581 L_7;
		L_7 = CoreRegistration_DependsOn_TisIProjectConfiguration_tB5A7516DEB869AD005431EC83C6E02221D2B60D2_mFE611D2FD196728ACC376EAB06D4F2664D8FDD10((&V_0), CoreRegistration_DependsOn_TisIProjectConfiguration_tB5A7516DEB869AD005431EC83C6E02221D2B60D2_mFE611D2FD196728ACC376EAB06D4F2664D8FDD10_RuntimeMethod_var);
		V_0 = L_7;
		CoreRegistration_tD2BD53556CAA48BD5E0D32CB92C6494C0EB85581 L_8;
		L_8 = CoreRegistration_OptionallyDependsOn_TisIPlayerId_t6A7BAE55B4D78E87B15B9261828E897BAACBF913_m5F08ADC17E47CCBEEDC9C48CC64F5A475CCFD286((&V_0), CoreRegistration_OptionallyDependsOn_TisIPlayerId_t6A7BAE55B4D78E87B15B9261828E897BAACBF913_m5F08ADC17E47CCBEEDC9C48CC64F5A475CCFD286_RuntimeMethod_var);
		V_0 = L_8;
		CoreRegistration_tD2BD53556CAA48BD5E0D32CB92C6494C0EB85581 L_9;
		L_9 = CoreRegistration_ProvidesComponent_TisIAnalyticsStandardEventComponent_tF6FA10DAAE59FC2DD9C6441D6B2E8BDA6EDDA807_m4CCB17ADEC6343A3DE09DC770F1F49B45FFA4942((&V_0), CoreRegistration_ProvidesComponent_TisIAnalyticsStandardEventComponent_tF6FA10DAAE59FC2DD9C6441D6B2E8BDA6EDDA807_m4CCB17ADEC6343A3DE09DC770F1F49B45FFA4942_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Threading.Tasks.Task Ua2CoreInitializeCallback::Initialize(Unity.Services.Core.Internal.CoreRegistry)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* Ua2CoreInitializeCallback_Initialize_mE8CA1840C20490FD250B30B6789619403DDE5748 (Ua2CoreInitializeCallback_t20D7CCCEDAF24D8AD75CBE5991731A72C70418BD* __this, CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA* ___0_registry, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_Start_TisU3CInitializeU3Ed__1_t99E0C99E5FE14A896385692015A529E07BB77F76_mC5B73B581462BA69A2F6F2C65CDABC9E41EBECBB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CInitializeU3Ed__1_t99E0C99E5FE14A896385692015A529E07BB77F76 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_runtime_class_init_inline(AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06 L_0;
		L_0 = AsyncTaskMethodBuilder_Create_m24F3F260A79CA2B9EC4F1F15693A33F5EC58735A(NULL);
		(&V_0)->___U3CU3Et__builder_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_builder_1))->___m_task_2), (void*)NULL);
		#endif
		CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA* L_1 = ___0_registry;
		(&V_0)->___registry_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___registry_2), (void*)L_1);
		(&V_0)->___U3CU3E1__state_0 = (-1);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_2 = (&(&V_0)->___U3CU3Et__builder_1);
		AsyncTaskMethodBuilder_Start_TisU3CInitializeU3Ed__1_t99E0C99E5FE14A896385692015A529E07BB77F76_mC5B73B581462BA69A2F6F2C65CDABC9E41EBECBB(L_2, (&V_0), AsyncTaskMethodBuilder_Start_TisU3CInitializeU3Ed__1_t99E0C99E5FE14A896385692015A529E07BB77F76_mC5B73B581462BA69A2F6F2C65CDABC9E41EBECBB_RuntimeMethod_var);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_3 = (&(&V_0)->___U3CU3Et__builder_1);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_4;
		L_4 = AsyncTaskMethodBuilder_get_Task_mE9125D5F8B96F26D1BA5A5347ED82669521C7F9E(L_3, NULL);
		return L_4;
	}
}
// System.Void Ua2CoreInitializeCallback::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ua2CoreInitializeCallback__ctor_m096A57E67DE0D5E40E7AB84CF3935A5D7DD898CE (Ua2CoreInitializeCallback_t20D7CCCEDAF24D8AD75CBE5991731A72C70418BD* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Ua2CoreInitializeCallback/<Initialize>d__1::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CInitializeU3Ed__1_MoveNext_m6D1294910570A31C8D7E15AB3BE8B001184D85D5 (U3CInitializeU3Ed__1_t99E0C99E5FE14A896385692015A529E07BB77F76* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnalyticsForgetter_tA1B9D1F48FB306C80BE60C9858646BC1368948C0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnalyticsServiceInstance_t85C6639220B0EFF1CB3C517E36C6B55385A56A62_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnalyticsServiceSystemCalls_tA75EFB9A19C30CBFEABF5BF0578E1636083AC745_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnalyticsService_t995B7CE25709A192F70345B0335516F282C0CE7B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CInitializeU3Ed__1_t99E0C99E5FE14A896385692015A529E07BB77F76_mA6CCC473E49B04FBD0815D80CC7D04EB8BDB0A84_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BufferRevoked_t713408989DEAED79FCDEFED9B0437CC6991DF6B3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BufferSystemCalls_t30CA07BE3DD2F29E9F7036ED838F0C92A50480F1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BufferX_t61043C3179F78166341D64689A662C738496055C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConsentTracker_tBDC1E317516ED67AC655A7D3B1D44EF5666B3FC4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreRegistry_GetServiceComponent_TisICloudProjectId_t366B66869ECC734B15C1F60633D2B998CD9231FE_mF7458A4E56377FCF3301F3ECE3A64B8C709EB38F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreRegistry_GetServiceComponent_TisIEnvironments_t9DCAF0398EB856DBE771A9C2D7B120661D628CB7_mB14B4F5C7C715C037C3D0B96AD44CFBC570659AF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreRegistry_GetServiceComponent_TisIExternalUserId_t50A07D7165D254D971AA529FFE55B4A595A75F25_m943FC6CF014F0065DD2E93EC1C7830093F6B1918_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreRegistry_GetServiceComponent_TisIInstallationId_tCE6DEEEBAFABEB9EC621BD1646D82BC9D82BFB0C_m154CDEFCDF91B08E20C3D0DAE197A8AD04AAE70F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreRegistry_GetServiceComponent_TisIPlayerId_t6A7BAE55B4D78E87B15B9261828E897BAACBF913_mAA43670CFBC53A1BB132782BB187BE8BF0D90BEC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreRegistry_GetServiceComponent_TisIProjectConfiguration_tB5A7516DEB869AD005431EC83C6E02221D2B60D2_mF70AFB94326EDB167066B7836231B13A52150312_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreRegistry_RegisterServiceComponent_TisIAnalyticsStandardEventComponent_tF6FA10DAAE59FC2DD9C6441D6B2E8BDA6EDDA807_mBC81DFA289107F2FAEAC53E5B7785A2C65A76905_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreStatsHelper_tBF3F119096A7ABBDDC9F22ACBF13FA25FCD166E6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataGenerator_t25BC607B3B6D456EAA5DC9C3F600C4B560800183_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DiskCache_tE19D214B0538F2CC9D59D4F827B480AEBCEF368D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dispatcher_t60105C40E4336C76AECD5AF26D5C6A9448D3ECAE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FileSystemCalls_t1A2213109FA10AFB80C343E28A45F13F053970A3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnvironments_t9DCAF0398EB856DBE771A9C2D7B120661D628CB7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StandardEventServiceComponent_t587EC5F02461A7AD305539BAB07A2B93FD56E2BB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebRequestHelper_t90785D95A7FBCCA284192A9CB95D1DA845D57E71_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	RuntimeObject* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	CoreStatsHelper_tBF3F119096A7ABBDDC9F22ACBF13FA25FCD166E6* V_6 = NULL;
	BufferX_t61043C3179F78166341D64689A662C738496055C* V_7 = NULL;
	StandardEventServiceComponent_t587EC5F02461A7AD305539BAB07A2B93FD56E2BB* V_8 = NULL;
	TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 V_9;
	memset((&V_9), 0, sizeof(V_9));
	Exception_t* V_10 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_1 = V_0;
			if (!L_1)
			{
				goto IL_0125_1;
			}
		}
		{
			// var cloudProjectId = registry.GetServiceComponent<ICloudProjectId>();
			CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA* L_2 = __this->___registry_2;
			NullCheck(L_2);
			RuntimeObject* L_3;
			L_3 = CoreRegistry_GetServiceComponent_TisICloudProjectId_t366B66869ECC734B15C1F60633D2B998CD9231FE_mF7458A4E56377FCF3301F3ECE3A64B8C709EB38F(L_2, CoreRegistry_GetServiceComponent_TisICloudProjectId_t366B66869ECC734B15C1F60633D2B998CD9231FE_mF7458A4E56377FCF3301F3ECE3A64B8C709EB38F_RuntimeMethod_var);
			V_1 = L_3;
			// var installationId = registry.GetServiceComponent<IInstallationId>();
			CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA* L_4 = __this->___registry_2;
			NullCheck(L_4);
			RuntimeObject* L_5;
			L_5 = CoreRegistry_GetServiceComponent_TisIInstallationId_tCE6DEEEBAFABEB9EC621BD1646D82BC9D82BFB0C_m154CDEFCDF91B08E20C3D0DAE197A8AD04AAE70F(L_4, CoreRegistry_GetServiceComponent_TisIInstallationId_tCE6DEEEBAFABEB9EC621BD1646D82BC9D82BFB0C_m154CDEFCDF91B08E20C3D0DAE197A8AD04AAE70F_RuntimeMethod_var);
			V_2 = L_5;
			// var playerId = registry.GetServiceComponent<IPlayerId>();
			CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA* L_6 = __this->___registry_2;
			NullCheck(L_6);
			RuntimeObject* L_7;
			L_7 = CoreRegistry_GetServiceComponent_TisIPlayerId_t6A7BAE55B4D78E87B15B9261828E897BAACBF913_mAA43670CFBC53A1BB132782BB187BE8BF0D90BEC(L_6, CoreRegistry_GetServiceComponent_TisIPlayerId_t6A7BAE55B4D78E87B15B9261828E897BAACBF913_mAA43670CFBC53A1BB132782BB187BE8BF0D90BEC_RuntimeMethod_var);
			V_3 = L_7;
			// var environments = registry.GetServiceComponent<IEnvironments>();
			CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA* L_8 = __this->___registry_2;
			NullCheck(L_8);
			RuntimeObject* L_9;
			L_9 = CoreRegistry_GetServiceComponent_TisIEnvironments_t9DCAF0398EB856DBE771A9C2D7B120661D628CB7_mB14B4F5C7C715C037C3D0B96AD44CFBC570659AF(L_8, CoreRegistry_GetServiceComponent_TisIEnvironments_t9DCAF0398EB856DBE771A9C2D7B120661D628CB7_mB14B4F5C7C715C037C3D0B96AD44CFBC570659AF_RuntimeMethod_var);
			V_4 = L_9;
			// var customUserId = registry.GetServiceComponent<IExternalUserId>();
			CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA* L_10 = __this->___registry_2;
			NullCheck(L_10);
			RuntimeObject* L_11;
			L_11 = CoreRegistry_GetServiceComponent_TisIExternalUserId_t50A07D7165D254D971AA529FFE55B4A595A75F25_m943FC6CF014F0065DD2E93EC1C7830093F6B1918(L_10, CoreRegistry_GetServiceComponent_TisIExternalUserId_t50A07D7165D254D971AA529FFE55B4A595A75F25_m943FC6CF014F0065DD2E93EC1C7830093F6B1918_RuntimeMethod_var);
			V_5 = L_11;
			// var coreStatsHelper = new CoreStatsHelper();
			CoreStatsHelper_tBF3F119096A7ABBDDC9F22ACBF13FA25FCD166E6* L_12 = (CoreStatsHelper_tBF3F119096A7ABBDDC9F22ACBF13FA25FCD166E6*)il2cpp_codegen_object_new(CoreStatsHelper_tBF3F119096A7ABBDDC9F22ACBF13FA25FCD166E6_il2cpp_TypeInfo_var);
			NullCheck(L_12);
			CoreStatsHelper__ctor_mD543DD28C5F258FC9B9BDD30D0192F8A7ECF9DF4(L_12, NULL);
			V_6 = L_12;
			// var consentTracker = new ConsentTracker(coreStatsHelper);
			CoreStatsHelper_tBF3F119096A7ABBDDC9F22ACBF13FA25FCD166E6* L_13 = V_6;
			ConsentTracker_tBDC1E317516ED67AC655A7D3B1D44EF5666B3FC4* L_14 = (ConsentTracker_tBDC1E317516ED67AC655A7D3B1D44EF5666B3FC4*)il2cpp_codegen_object_new(ConsentTracker_tBDC1E317516ED67AC655A7D3B1D44EF5666B3FC4_il2cpp_TypeInfo_var);
			NullCheck(L_14);
			ConsentTracker__ctor_m478B76472BE051496CB2D8EE77D91DED3D332E5A(L_14, L_13, NULL);
			__this->___U3CconsentTrackerU3E5__2_3 = L_14;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CconsentTrackerU3E5__2_3), (void*)L_14);
			// var buffer = new BufferX(new BufferSystemCalls(), new DiskCache(new FileSystemCalls()));
			BufferSystemCalls_t30CA07BE3DD2F29E9F7036ED838F0C92A50480F1* L_15 = (BufferSystemCalls_t30CA07BE3DD2F29E9F7036ED838F0C92A50480F1*)il2cpp_codegen_object_new(BufferSystemCalls_t30CA07BE3DD2F29E9F7036ED838F0C92A50480F1_il2cpp_TypeInfo_var);
			NullCheck(L_15);
			BufferSystemCalls__ctor_m11A81CCB33E4BA6C679E191AB344CC3277C57B8C(L_15, NULL);
			FileSystemCalls_t1A2213109FA10AFB80C343E28A45F13F053970A3* L_16 = (FileSystemCalls_t1A2213109FA10AFB80C343E28A45F13F053970A3*)il2cpp_codegen_object_new(FileSystemCalls_t1A2213109FA10AFB80C343E28A45F13F053970A3_il2cpp_TypeInfo_var);
			NullCheck(L_16);
			FileSystemCalls__ctor_mED48303E0E5ADE100ED297D2F82072B5162F3E2A(L_16, NULL);
			DiskCache_tE19D214B0538F2CC9D59D4F827B480AEBCEF368D* L_17 = (DiskCache_tE19D214B0538F2CC9D59D4F827B480AEBCEF368D*)il2cpp_codegen_object_new(DiskCache_tE19D214B0538F2CC9D59D4F827B480AEBCEF368D_il2cpp_TypeInfo_var);
			NullCheck(L_17);
			DiskCache__ctor_mBA8B9A9ECF83506913BC62A4782F490C2D300263(L_17, L_16, NULL);
			BufferX_t61043C3179F78166341D64689A662C738496055C* L_18 = (BufferX_t61043C3179F78166341D64689A662C738496055C*)il2cpp_codegen_object_new(BufferX_t61043C3179F78166341D64689A662C738496055C_il2cpp_TypeInfo_var);
			NullCheck(L_18);
			BufferX__ctor_mBBE8167311FE2989DC8174E1DFB53EB59276540C(L_18, L_15, L_17, NULL);
			V_7 = L_18;
			// AnalyticsService.internalInstance = new AnalyticsServiceInstance(
			//     new DataGenerator(),
			//     buffer,
			//     new BufferRevoked(),
			//     coreStatsHelper,
			//     consentTracker,
			//     new Dispatcher(new WebRequestHelper(), consentTracker),
			//     new AnalyticsForgetter(consentTracker),
			//     cloudProjectId,
			//     installationId,
			//     playerId,
			//     environments.Current,
			//     customUserId,
			//     new AnalyticsServiceSystemCalls());
			DataGenerator_t25BC607B3B6D456EAA5DC9C3F600C4B560800183* L_19 = (DataGenerator_t25BC607B3B6D456EAA5DC9C3F600C4B560800183*)il2cpp_codegen_object_new(DataGenerator_t25BC607B3B6D456EAA5DC9C3F600C4B560800183_il2cpp_TypeInfo_var);
			NullCheck(L_19);
			DataGenerator__ctor_m659FA5FD00306B47B1A9D7461343C53EBCC0E85C(L_19, NULL);
			BufferX_t61043C3179F78166341D64689A662C738496055C* L_20 = V_7;
			BufferRevoked_t713408989DEAED79FCDEFED9B0437CC6991DF6B3* L_21 = (BufferRevoked_t713408989DEAED79FCDEFED9B0437CC6991DF6B3*)il2cpp_codegen_object_new(BufferRevoked_t713408989DEAED79FCDEFED9B0437CC6991DF6B3_il2cpp_TypeInfo_var);
			NullCheck(L_21);
			BufferRevoked__ctor_m208AEF741C576200CF78EA83EF4DE08DBD27D0B2(L_21, NULL);
			CoreStatsHelper_tBF3F119096A7ABBDDC9F22ACBF13FA25FCD166E6* L_22 = V_6;
			ConsentTracker_tBDC1E317516ED67AC655A7D3B1D44EF5666B3FC4* L_23 = __this->___U3CconsentTrackerU3E5__2_3;
			WebRequestHelper_t90785D95A7FBCCA284192A9CB95D1DA845D57E71* L_24 = (WebRequestHelper_t90785D95A7FBCCA284192A9CB95D1DA845D57E71*)il2cpp_codegen_object_new(WebRequestHelper_t90785D95A7FBCCA284192A9CB95D1DA845D57E71_il2cpp_TypeInfo_var);
			NullCheck(L_24);
			WebRequestHelper__ctor_m5F76E493A0C15311928DCCCCE293752DF3DA0CC9(L_24, NULL);
			ConsentTracker_tBDC1E317516ED67AC655A7D3B1D44EF5666B3FC4* L_25 = __this->___U3CconsentTrackerU3E5__2_3;
			Dispatcher_t60105C40E4336C76AECD5AF26D5C6A9448D3ECAE* L_26 = (Dispatcher_t60105C40E4336C76AECD5AF26D5C6A9448D3ECAE*)il2cpp_codegen_object_new(Dispatcher_t60105C40E4336C76AECD5AF26D5C6A9448D3ECAE_il2cpp_TypeInfo_var);
			NullCheck(L_26);
			Dispatcher__ctor_m63839CA4DC01ABB9FBE8CAB8E30101DEDAD36386(L_26, L_24, L_25, NULL);
			ConsentTracker_tBDC1E317516ED67AC655A7D3B1D44EF5666B3FC4* L_27 = __this->___U3CconsentTrackerU3E5__2_3;
			AnalyticsForgetter_tA1B9D1F48FB306C80BE60C9858646BC1368948C0* L_28 = (AnalyticsForgetter_tA1B9D1F48FB306C80BE60C9858646BC1368948C0*)il2cpp_codegen_object_new(AnalyticsForgetter_tA1B9D1F48FB306C80BE60C9858646BC1368948C0_il2cpp_TypeInfo_var);
			NullCheck(L_28);
			AnalyticsForgetter__ctor_mDBE2B4DD936DA8DC859F9E5D7F644CD2D3CBE3B8(L_28, L_27, NULL);
			RuntimeObject* L_29 = V_1;
			RuntimeObject* L_30 = V_2;
			RuntimeObject* L_31 = V_3;
			RuntimeObject* L_32 = V_4;
			NullCheck(L_32);
			String_t* L_33;
			L_33 = InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String Unity.Services.Core.Environments.Internal.IEnvironments::get_Current() */, IEnvironments_t9DCAF0398EB856DBE771A9C2D7B120661D628CB7_il2cpp_TypeInfo_var, L_32);
			RuntimeObject* L_34 = V_5;
			AnalyticsServiceSystemCalls_tA75EFB9A19C30CBFEABF5BF0578E1636083AC745* L_35 = (AnalyticsServiceSystemCalls_tA75EFB9A19C30CBFEABF5BF0578E1636083AC745*)il2cpp_codegen_object_new(AnalyticsServiceSystemCalls_tA75EFB9A19C30CBFEABF5BF0578E1636083AC745_il2cpp_TypeInfo_var);
			NullCheck(L_35);
			AnalyticsServiceSystemCalls__ctor_m0CE98AA41596DAEC3FE38B2657205368207C45D0(L_35, NULL);
			AnalyticsServiceInstance_t85C6639220B0EFF1CB3C517E36C6B55385A56A62* L_36 = (AnalyticsServiceInstance_t85C6639220B0EFF1CB3C517E36C6B55385A56A62*)il2cpp_codegen_object_new(AnalyticsServiceInstance_t85C6639220B0EFF1CB3C517E36C6B55385A56A62_il2cpp_TypeInfo_var);
			NullCheck(L_36);
			AnalyticsServiceInstance__ctor_mB42B8934E22F1828A6B87E8F4F115999B40337F5(L_36, L_19, L_20, L_21, L_22, L_23, L_26, L_28, L_29, L_30, L_31, L_33, L_34, L_35, NULL);
			((AnalyticsService_t995B7CE25709A192F70345B0335516F282C0CE7B_StaticFields*)il2cpp_codegen_static_fields_for(AnalyticsService_t995B7CE25709A192F70345B0335516F282C0CE7B_il2cpp_TypeInfo_var))->___internalInstance_0 = L_36;
			Il2CppCodeGenWriteBarrier((void**)(&((AnalyticsService_t995B7CE25709A192F70345B0335516F282C0CE7B_StaticFields*)il2cpp_codegen_static_fields_for(AnalyticsService_t995B7CE25709A192F70345B0335516F282C0CE7B_il2cpp_TypeInfo_var))->___internalInstance_0), (void*)L_36);
			// StandardEventServiceComponent standardEventComponent = new StandardEventServiceComponent(
			//     registry.GetServiceComponent<IProjectConfiguration>(),
			//     AnalyticsService.internalInstance);
			CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA* L_37 = __this->___registry_2;
			NullCheck(L_37);
			RuntimeObject* L_38;
			L_38 = CoreRegistry_GetServiceComponent_TisIProjectConfiguration_tB5A7516DEB869AD005431EC83C6E02221D2B60D2_mF70AFB94326EDB167066B7836231B13A52150312(L_37, CoreRegistry_GetServiceComponent_TisIProjectConfiguration_tB5A7516DEB869AD005431EC83C6E02221D2B60D2_mF70AFB94326EDB167066B7836231B13A52150312_RuntimeMethod_var);
			AnalyticsServiceInstance_t85C6639220B0EFF1CB3C517E36C6B55385A56A62* L_39 = ((AnalyticsService_t995B7CE25709A192F70345B0335516F282C0CE7B_StaticFields*)il2cpp_codegen_static_fields_for(AnalyticsService_t995B7CE25709A192F70345B0335516F282C0CE7B_il2cpp_TypeInfo_var))->___internalInstance_0;
			StandardEventServiceComponent_t587EC5F02461A7AD305539BAB07A2B93FD56E2BB* L_40 = (StandardEventServiceComponent_t587EC5F02461A7AD305539BAB07A2B93FD56E2BB*)il2cpp_codegen_object_new(StandardEventServiceComponent_t587EC5F02461A7AD305539BAB07A2B93FD56E2BB_il2cpp_TypeInfo_var);
			NullCheck(L_40);
			StandardEventServiceComponent__ctor_mED8BAC8D2E1D561A6DCB4A1F35D4E7A60553CB87(L_40, L_38, L_39, NULL);
			V_8 = L_40;
			// registry.RegisterServiceComponent<IAnalyticsStandardEventComponent>(standardEventComponent);
			CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA* L_41 = __this->___registry_2;
			StandardEventServiceComponent_t587EC5F02461A7AD305539BAB07A2B93FD56E2BB* L_42 = V_8;
			NullCheck(L_41);
			CoreRegistry_RegisterServiceComponent_TisIAnalyticsStandardEventComponent_tF6FA10DAAE59FC2DD9C6441D6B2E8BDA6EDDA807_mBC81DFA289107F2FAEAC53E5B7785A2C65A76905(L_41, L_42, CoreRegistry_RegisterServiceComponent_TisIAnalyticsStandardEventComponent_tF6FA10DAAE59FC2DD9C6441D6B2E8BDA6EDDA807_mBC81DFA289107F2FAEAC53E5B7785A2C65A76905_RuntimeMethod_var);
			// buffer.LoadFromDisk();
			BufferX_t61043C3179F78166341D64689A662C738496055C* L_43 = V_7;
			NullCheck(L_43);
			BufferX_LoadFromDisk_mFB29842DE8FE800E9569220B34C4B0958FFE493D(L_43, NULL);
			// await AnalyticsService.internalInstance.Initialize();
			AnalyticsServiceInstance_t85C6639220B0EFF1CB3C517E36C6B55385A56A62* L_44 = ((AnalyticsService_t995B7CE25709A192F70345B0335516F282C0CE7B_StaticFields*)il2cpp_codegen_static_fields_for(AnalyticsService_t995B7CE25709A192F70345B0335516F282C0CE7B_il2cpp_TypeInfo_var))->___internalInstance_0;
			NullCheck(L_44);
			Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_45;
			L_45 = AnalyticsServiceInstance_Initialize_m032205905C559C546317DACA9821F51098C4123D(L_44, NULL);
			NullCheck(L_45);
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_46;
			L_46 = Task_GetAwaiter_m08B368EAC939DD35D0AC428180822255A442CA29(L_45, NULL);
			V_9 = L_46;
			bool L_47;
			L_47 = TaskAwaiter_get_IsCompleted_mC236D276FBE3A271B56EE13FCAF2C96E48453ED8((&V_9), NULL);
			if (L_47)
			{
				goto IL_0142_1;
			}
		}
		{
			int32_t L_48 = 0;
			V_0 = L_48;
			__this->___U3CU3E1__state_0 = L_48;
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_49 = V_9;
			__this->___U3CU3Eu__1_4 = L_49;
			Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__1_4))->___m_task_0), (void*)NULL);
			AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_50 = (&__this->___U3CU3Et__builder_1);
			AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CInitializeU3Ed__1_t99E0C99E5FE14A896385692015A529E07BB77F76_mA6CCC473E49B04FBD0815D80CC7D04EB8BDB0A84(L_50, (&V_9), __this, AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CInitializeU3Ed__1_t99E0C99E5FE14A896385692015A529E07BB77F76_mA6CCC473E49B04FBD0815D80CC7D04EB8BDB0A84_RuntimeMethod_var);
			goto IL_019c;
		}

IL_0125_1:
		{
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_51 = __this->___U3CU3Eu__1_4;
			V_9 = L_51;
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* L_52 = (&__this->___U3CU3Eu__1_4);
			il2cpp_codegen_initobj(L_52, sizeof(TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833));
			int32_t L_53 = (-1);
			V_0 = L_53;
			__this->___U3CU3E1__state_0 = L_53;
		}

IL_0142_1:
		{
			TaskAwaiter_GetResult_mC1D712500AE49B4A89C85D6B79D87D1BA9A6B94D((&V_9), NULL);
			// if (consentTracker.IsGeoIpChecked())
			ConsentTracker_tBDC1E317516ED67AC655A7D3B1D44EF5666B3FC4* L_54 = __this->___U3CconsentTrackerU3E5__2_3;
			NullCheck(L_54);
			bool L_55;
			L_55 = ConsentTracker_IsGeoIpChecked_m59099E930C861F18CAF7D68E0546C5D05663E50E(L_54, NULL);
			if (!L_55)
			{
				goto IL_0160_1;
			}
		}
		{
			// AnalyticsService.internalInstance.Flush();
			AnalyticsServiceInstance_t85C6639220B0EFF1CB3C517E36C6B55385A56A62* L_56 = ((AnalyticsService_t995B7CE25709A192F70345B0335516F282C0CE7B_StaticFields*)il2cpp_codegen_static_fields_for(AnalyticsService_t995B7CE25709A192F70345B0335516F282C0CE7B_il2cpp_TypeInfo_var))->___internalInstance_0;
			NullCheck(L_56);
			AnalyticsServiceInstance_Flush_mB8F0ED919FB47026C5CB61DD3562FAA09009C21E(L_56, NULL);
		}

IL_0160_1:
		{
			goto IL_0182;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0162;
		}
		throw e;
	}

CATCH_0162:
	{// begin catch(System.Exception)
		V_10 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CconsentTrackerU3E5__2_3 = (ConsentTracker_tBDC1E317516ED67AC655A7D3B1D44EF5666B3FC4*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CconsentTrackerU3E5__2_3), (void*)(ConsentTracker_tBDC1E317516ED67AC655A7D3B1D44EF5666B3FC4*)NULL);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_57 = (&__this->___U3CU3Et__builder_1);
		Exception_t* L_58 = V_10;
		AsyncTaskMethodBuilder_SetException_mBE41863F0571E0177A15731294087DE45E1FC10B(L_57, L_58, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_019c;
	}// end catch (depth: 1)

IL_0182:
	{
		// }
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CconsentTrackerU3E5__2_3 = (ConsentTracker_tBDC1E317516ED67AC655A7D3B1D44EF5666B3FC4*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CconsentTrackerU3E5__2_3), (void*)(ConsentTracker_tBDC1E317516ED67AC655A7D3B1D44EF5666B3FC4*)NULL);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_59 = (&__this->___U3CU3Et__builder_1);
		AsyncTaskMethodBuilder_SetResult_m76D8B84F0068257C1823B1200B00E58E0C8DDDDE(L_59, NULL);
	}

IL_019c:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CInitializeU3Ed__1_MoveNext_m6D1294910570A31C8D7E15AB3BE8B001184D85D5_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3CInitializeU3Ed__1_t99E0C99E5FE14A896385692015A529E07BB77F76* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CInitializeU3Ed__1_t99E0C99E5FE14A896385692015A529E07BB77F76*>(__this + _offset);
	U3CInitializeU3Ed__1_MoveNext_m6D1294910570A31C8D7E15AB3BE8B001184D85D5(_thisAdjusted, method);
}
// System.Void Ua2CoreInitializeCallback/<Initialize>d__1::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CInitializeU3Ed__1_SetStateMachine_mA709A8AC5E4AB1755D3691BAF4474C4148808268 (U3CInitializeU3Ed__1_t99E0C99E5FE14A896385692015A529E07BB77F76* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
{
	{
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_0 = (&__this->___U3CU3Et__builder_1);
		RuntimeObject* L_1 = ___0_stateMachine;
		AsyncTaskMethodBuilder_SetStateMachine_mE52B5B6B076025592A7AB462E3D26FA434AEB795(L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CInitializeU3Ed__1_SetStateMachine_mA709A8AC5E4AB1755D3691BAF4474C4148808268_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method)
{
	U3CInitializeU3Ed__1_t99E0C99E5FE14A896385692015A529E07BB77F76* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CInitializeU3Ed__1_t99E0C99E5FE14A896385692015A529E07BB77F76*>(__this + _offset);
	U3CInitializeU3Ed__1_SetStateMachine_mA709A8AC5E4AB1755D3691BAF4474C4148808268(_thisAdjusted, ___0_stateMachine, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Unity.Services.Analytics.IAnalyticsService Unity.Services.Analytics.AnalyticsService::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AnalyticsService_get_Instance_mD65A4BCA1F3A8D3977E5FFF422319EA564BFD059 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnalyticsService_t995B7CE25709A192F70345B0335516F282C0CE7B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (internalInstance == null)
		AnalyticsServiceInstance_t85C6639220B0EFF1CB3C517E36C6B55385A56A62* L_0 = ((AnalyticsService_t995B7CE25709A192F70345B0335516F282C0CE7B_StaticFields*)il2cpp_codegen_static_fields_for(AnalyticsService_t995B7CE25709A192F70345B0335516F282C0CE7B_il2cpp_TypeInfo_var))->___internalInstance_0;
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		// throw new ServicesInitializationException("The Analytics service has not been initialized. Please initialize Unity Services.");
		ServicesInitializationException_tBF84F1801B1054DE91A79436CA6D3FA5F0F68631* L_1 = (ServicesInitializationException_tBF84F1801B1054DE91A79436CA6D3FA5F0F68631*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ServicesInitializationException_tBF84F1801B1054DE91A79436CA6D3FA5F0F68631_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ServicesInitializationException__ctor_m638AF9055D8C8C6BA7AC554FF3066C26EA869F55(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral9629684BC30911A2DEAA94689CC844A293D35D8F)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AnalyticsService_get_Instance_mD65A4BCA1F3A8D3977E5FFF422319EA564BFD059_RuntimeMethod_var)));
	}

IL_0012:
	{
		// return internalInstance;
		AnalyticsServiceInstance_t85C6639220B0EFF1CB3C517E36C6B55385A56A62* L_2 = ((AnalyticsService_t995B7CE25709A192F70345B0335516F282C0CE7B_StaticFields*)il2cpp_codegen_static_fields_for(AnalyticsService_t995B7CE25709A192F70345B0335516F282C0CE7B_il2cpp_TypeInfo_var))->___internalInstance_0;
		return L_2;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Threading.Tasks.Task`1<System.Collections.Generic.List`1<System.String>> Unity.Services.Analytics.AnalyticsServiceInstance::CheckForRequiredConsents()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tC46C9EBCBC033211372E7FFA650937B48144AB1D* AnalyticsServiceInstance_CheckForRequiredConsents_mE79E03DE5BB2038F8435D4546170E80612E23E55 (AnalyticsServiceInstance_t85C6639220B0EFF1CB3C517E36C6B55385A56A62* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_Create_mC389C6193935CB0A93B35EB80DD27B55760DA315_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_Start_TisU3CCheckForRequiredConsentsU3Ed__0_tE4974F41B1F427E322B867A158105241B1665396_m69AA1E1E57283E1AE668FF20AE4AFFD14FFD9833_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_get_Task_m7DDA6B2D1E56036D887F4673F2420A0FB4E0569B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_t6C6A8B677F9E92A76A93C9D97B66849EBECA0FE6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CCheckForRequiredConsentsU3Ed__0_tE4974F41B1F427E322B867A158105241B1665396 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_runtime_class_init_inline(AsyncTaskMethodBuilder_1_t6C6A8B677F9E92A76A93C9D97B66849EBECA0FE6_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_1_t6C6A8B677F9E92A76A93C9D97B66849EBECA0FE6 L_0;
		L_0 = AsyncTaskMethodBuilder_1_Create_mC389C6193935CB0A93B35EB80DD27B55760DA315(AsyncTaskMethodBuilder_1_Create_mC389C6193935CB0A93B35EB80DD27B55760DA315_RuntimeMethod_var);
		(&V_0)->___U3CU3Et__builder_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
		(&V_0)->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___U3CU3E4__this_2), (void*)__this);
		(&V_0)->___U3CU3E1__state_0 = (-1);
		AsyncTaskMethodBuilder_1_t6C6A8B677F9E92A76A93C9D97B66849EBECA0FE6* L_1 = (&(&V_0)->___U3CU3Et__builder_1);
		AsyncTaskMethodBuilder_1_Start_TisU3CCheckForRequiredConsentsU3Ed__0_tE4974F41B1F427E322B867A158105241B1665396_m69AA1E1E57283E1AE668FF20AE4AFFD14FFD9833(L_1, (&V_0), AsyncTaskMethodBuilder_1_Start_TisU3CCheckForRequiredConsentsU3Ed__0_tE4974F41B1F427E322B867A158105241B1665396_m69AA1E1E57283E1AE668FF20AE4AFFD14FFD9833_RuntimeMethod_var);
		AsyncTaskMethodBuilder_1_t6C6A8B677F9E92A76A93C9D97B66849EBECA0FE6* L_2 = (&(&V_0)->___U3CU3Et__builder_1);
		Task_1_tC46C9EBCBC033211372E7FFA650937B48144AB1D* L_3;
		L_3 = AsyncTaskMethodBuilder_1_get_Task_m7DDA6B2D1E56036D887F4673F2420A0FB4E0569B(L_2, AsyncTaskMethodBuilder_1_get_Task_m7DDA6B2D1E56036D887F4673F2420A0FB4E0569B_RuntimeMethod_var);
		return L_3;
	}
}
// System.Void Unity.Services.Analytics.AnalyticsServiceInstance::OptOut()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnalyticsServiceInstance_OptOut_mE80E70FBB35370154B02B32ADCED5B0EAA77B632 (AnalyticsServiceInstance_t85C6639220B0EFF1CB3C517E36C6B55385A56A62* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IConsentTracker_t93AFBEAEA2AE9AC2A012EEBFA4344E527FD92550_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICoreStatsHelper_t436ACDCFB0D414BD45F5EAC4C05281101F24E6FD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral76DDE57466F7C53D34AD5007FB620D205EE8EA1E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCE2D528BF710C9F50F9620968D52C2BA6394B94B);
		s_Il2CppMethodInitialized = true;
	}
	String_t* G_B3_0 = NULL;
	{
		// Debug.Log(m_ConsentTracker.IsConsentDenied()
		//     ? "This user has opted out. Any cached events have been discarded and no more will be collected."
		//     : "This user has opted out and is in the process of being forgotten...");
		RuntimeObject* L_0 = __this->___m_ConsentTracker_7;
		NullCheck(L_0);
		bool L_1;
		L_1 = InterfaceFuncInvoker0< bool >::Invoke(6 /* System.Boolean Unity.Services.Analytics.Internal.IConsentTracker::IsConsentDenied() */, IConsentTracker_t93AFBEAEA2AE9AC2A012EEBFA4344E527FD92550_il2cpp_TypeInfo_var, L_0);
		if (L_1)
		{
			goto IL_0014;
		}
	}
	{
		G_B3_0 = _stringLiteralCE2D528BF710C9F50F9620968D52C2BA6394B94B;
		goto IL_0019;
	}

IL_0014:
	{
		G_B3_0 = _stringLiteral76DDE57466F7C53D34AD5007FB620D205EE8EA1E;
	}

IL_0019:
	{
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(G_B3_0, NULL);
		// if (m_ConsentTracker.IsConsentGiven())
		RuntimeObject* L_2 = __this->___m_ConsentTracker_7;
		NullCheck(L_2);
		bool L_3;
		L_3 = InterfaceFuncInvoker0< bool >::Invoke(5 /* System.Boolean Unity.Services.Analytics.Internal.IConsentTracker::IsConsentGiven() */, IConsentTracker_t93AFBEAEA2AE9AC2A012EEBFA4344E527FD92550_il2cpp_TypeInfo_var, L_2);
		if (!L_3)
		{
			goto IL_003d;
		}
	}
	{
		// m_ConsentTracker.BeginOptOutProcess();
		RuntimeObject* L_4 = __this->___m_ConsentTracker_7;
		NullCheck(L_4);
		InterfaceActionInvoker0::Invoke(2 /* System.Void Unity.Services.Analytics.Internal.IConsentTracker::BeginOptOutProcess() */, IConsentTracker_t93AFBEAEA2AE9AC2A012EEBFA4344E527FD92550_il2cpp_TypeInfo_var, L_4);
		// RevokeWithForgetEvent();
		AnalyticsServiceInstance_RevokeWithForgetEvent_m47219E952DF689818346D5F22005DA76BAA70DF0(__this, NULL);
		// return;
		return;
	}

IL_003d:
	{
		// if (m_ConsentTracker.IsOptingOutInProgress())
		RuntimeObject* L_5 = __this->___m_ConsentTracker_7;
		NullCheck(L_5);
		bool L_6;
		L_6 = InterfaceFuncInvoker0< bool >::Invoke(7 /* System.Boolean Unity.Services.Analytics.Internal.IConsentTracker::IsOptingOutInProgress() */, IConsentTracker_t93AFBEAEA2AE9AC2A012EEBFA4344E527FD92550_il2cpp_TypeInfo_var, L_5);
		if (!L_6)
		{
			goto IL_0051;
		}
	}
	{
		// RevokeWithForgetEvent();
		AnalyticsServiceInstance_RevokeWithForgetEvent_m47219E952DF689818346D5F22005DA76BAA70DF0(__this, NULL);
		// return;
		return;
	}

IL_0051:
	{
		// Revoke();
		AnalyticsServiceInstance_Revoke_mE996CF16F921425F885EB14591D241FAB13EE511(__this, NULL);
		// m_ConsentTracker.SetDenyConsentToAll();
		RuntimeObject* L_7 = __this->___m_ConsentTracker_7;
		NullCheck(L_7);
		InterfaceActionInvoker0::Invoke(8 /* System.Void Unity.Services.Analytics.Internal.IConsentTracker::SetDenyConsentToAll() */, IConsentTracker_t93AFBEAEA2AE9AC2A012EEBFA4344E527FD92550_il2cpp_TypeInfo_var, L_7);
		// m_CoreStatsHelper.SetCoreStatsConsent(false);
		RuntimeObject* L_8 = __this->___m_CoreStatsHelper_6;
		NullCheck(L_8);
		InterfaceActionInvoker1< bool >::Invoke(0 /* System.Void Unity.Services.Analytics.ICoreStatsHelper::SetCoreStatsConsent(System.Boolean) */, ICoreStatsHelper_t436ACDCFB0D414BD45F5EAC4C05281101F24E6FD_il2cpp_TypeInfo_var, L_8, (bool)0);
		// }
		return;
	}
}
// System.Void Unity.Services.Analytics.AnalyticsServiceInstance::Revoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnalyticsServiceInstance_Revoke_mE996CF16F921425F885EB14591D241FAB13EE511 (AnalyticsServiceInstance_t85C6639220B0EFF1CB3C517E36C6B55385A56A62* __this, const RuntimeMethod* method) 
{
	{
		// SwapToRevokedBuffer();
		AnalyticsServiceInstance_SwapToRevokedBuffer_m3C0C7A5B3195A050BCF4586AB05B47062143F1DA(__this, NULL);
		// AnalyticsContainer.DestroyContainer();
		AnalyticsContainer_DestroyContainer_m3E5CEA90A331B91C79BFED5D1CB0FFC07BC55B27(NULL);
		// }
		return;
	}
}
// System.Void Unity.Services.Analytics.AnalyticsServiceInstance::RevokeWithForgetEvent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnalyticsServiceInstance_RevokeWithForgetEvent_m47219E952DF689818346D5F22005DA76BAA70DF0 (AnalyticsServiceInstance_t85C6639220B0EFF1CB3C517E36C6B55385A56A62* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnalyticsServiceInstance_ForgetMeEventUploaded_mDDA88D280C1A52DF1EC365BA6B52F6A1D0C5C059_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAnalyticsForgetter_t824BE286D40D7A4B73BE27A5BF50FE8DB4C0AE18_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IInstallationId_tCE6DEEEBAFABEB9EC621BD1646D82BC9D82BFB0C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0BC237184924820231BE4541A9E248A9768C7DEC);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SwapToRevokedBuffer();
		AnalyticsServiceInstance_SwapToRevokedBuffer_m3C0C7A5B3195A050BCF4586AB05B47062143F1DA(__this, NULL);
		// m_AnalyticsForgetter.AttemptToForget(k_ForgetCallingId, m_CollectURL, m_InstallId.GetOrCreateIdentifier(), BufferX.SerializeDateTime(DateTime.Now), ForgetMeEventUploaded);
		RuntimeObject* L_0 = __this->___m_AnalyticsForgetter_9;
		String_t* L_1 = __this->___m_CollectURL_1;
		RuntimeObject* L_2 = __this->___m_InstallId_4;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String Unity.Services.Core.Device.Internal.IInstallationId::GetOrCreateIdentifier() */, IInstallationId_tCE6DEEEBAFABEB9EC621BD1646D82BC9D82BFB0C_il2cpp_TypeInfo_var, L_2);
		il2cpp_codegen_runtime_class_init_inline(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_4;
		L_4 = DateTime_get_Now_m636CB9651A9099D20BA1CF813A0C69637317325C(NULL);
		String_t* L_5;
		L_5 = BufferX_SerializeDateTime_m1B8DB0257F014D2E517B2EB94CC80B5A879DB654(L_4, NULL);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_6, __this, (intptr_t)((void*)AnalyticsServiceInstance_ForgetMeEventUploaded_mDDA88D280C1A52DF1EC365BA6B52F6A1D0C5C059_RuntimeMethod_var), NULL);
		NullCheck(L_0);
		InterfaceActionInvoker5< String_t*, String_t*, String_t*, String_t*, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* >::Invoke(0 /* System.Void Unity.Services.Analytics.Internal.IAnalyticsForgetter::AttemptToForget(System.String,System.String,System.String,System.String,System.Action) */, IAnalyticsForgetter_t824BE286D40D7A4B73BE27A5BF50FE8DB4C0AE18_il2cpp_TypeInfo_var, L_0, _stringLiteral0BC237184924820231BE4541A9E248A9768C7DEC, L_1, L_3, L_5, L_6);
		// }
		return;
	}
}
// System.Void Unity.Services.Analytics.AnalyticsServiceInstance::ForgetMeEventUploaded()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnalyticsServiceInstance_ForgetMeEventUploaded_mDDA88D280C1A52DF1EC365BA6B52F6A1D0C5C059 (AnalyticsServiceInstance_t85C6639220B0EFF1CB3C517E36C6B55385A56A62* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IConsentTracker_t93AFBEAEA2AE9AC2A012EEBFA4344E527FD92550_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// AnalyticsContainer.DestroyContainer();
		AnalyticsContainer_DestroyContainer_m3E5CEA90A331B91C79BFED5D1CB0FFC07BC55B27(NULL);
		// m_ConsentTracker.FinishOptOutProcess();
		RuntimeObject* L_0 = __this->___m_ConsentTracker_7;
		NullCheck(L_0);
		InterfaceActionInvoker0::Invoke(3 /* System.Void Unity.Services.Analytics.Internal.IConsentTracker::FinishOptOutProcess() */, IConsentTracker_t93AFBEAEA2AE9AC2A012EEBFA4344E527FD92550_il2cpp_TypeInfo_var, L_0);
		// }
		return;
	}
}
// System.String Unity.Services.Analytics.AnalyticsServiceInstance::get_CustomAnalyticsId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AnalyticsServiceInstance_get_CustomAnalyticsId_mEB3038CA04D336E4EF0C1A6D6E0D6A94E025CF60 (AnalyticsServiceInstance_t85C6639220B0EFF1CB3C517E36C6B55385A56A62* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IExternalUserId_t50A07D7165D254D971AA529FFE55B4A595A75F25_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// internal string CustomAnalyticsId { get { return m_CustomUserId.UserId; } }
		RuntimeObject* L_0 = __this->___m_CustomUserId_10;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String Unity.Services.Core.Configuration.Internal.IExternalUserId::get_UserId() */, IExternalUserId_t50A07D7165D254D971AA529FFE55B4A595A75F25_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Boolean Unity.Services.Analytics.AnalyticsServiceInstance::get_ServiceEnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnalyticsServiceInstance_get_ServiceEnabled_mF044EA299C12FF5CA7E6445A84BE251651365BF2 (AnalyticsServiceInstance_t85C6639220B0EFF1CB3C517E36C6B55385A56A62* __this, const RuntimeMethod* method) 
{
	{
		// internal bool ServiceEnabled { get; private set; } = true;
		bool L_0 = __this->___U3CServiceEnabledU3Ek__BackingField_15;
		return L_0;
	}
}
// System.String Unity.Services.Analytics.AnalyticsServiceInstance::get_SessionID()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AnalyticsServiceInstance_get_SessionID_m0BE34B73BEC292E51E9721811451EC359D9837F0 (AnalyticsServiceInstance_t85C6639220B0EFF1CB3C517E36C6B55385A56A62* __this, const RuntimeMethod* method) 
{
	{
		// public string SessionID { get; private set; }
		String_t* L_0 = __this->___U3CSessionIDU3Ek__BackingField_16;
		return L_0;
	}
}
// System.Void Unity.Services.Analytics.AnalyticsServiceInstance::set_SessionID(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnalyticsServiceInstance_set_SessionID_m48AF420DBE356BD2F73DF27848664B9117B1CA52 (AnalyticsServiceInstance_t85C6639220B0EFF1CB3C517E36C6B55385A56A62* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public string SessionID { get; private set; }
		String_t* L_0 = ___0_value;
		__this->___U3CSessionIDU3Ek__BackingField_16 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CSessionIDU3Ek__BackingField_16), (void*)L_0);
		return;
	}
}
// System.Void Unity.Services.Analytics.AnalyticsServiceInstance::.ctor(Unity.Services.Analytics.Data.IDataGenerator,Unity.Services.Analytics.Internal.IBuffer,Unity.Services.Analytics.Internal.IBuffer,Unity.Services.Analytics.ICoreStatsHelper,Unity.Services.Analytics.Internal.IConsentTracker,Unity.Services.Analytics.Internal.IDispatcher,Unity.Services.Analytics.Internal.IAnalyticsForgetter,Unity.Services.Core.Configuration.Internal.ICloudProjectId,Unity.Services.Core.Device.Internal.IInstallationId,Unity.Services.Authentication.Internal.IPlayerId,System.String,Unity.Services.Core.Configuration.Internal.IExternalUserId,Unity.Services.Analytics.IAnalyticsServiceSystemCalls)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnalyticsServiceInstance__ctor_mB42B8934E22F1828A6B87E8F4F115999B40337F5 (AnalyticsServiceInstance_t85C6639220B0EFF1CB3C517E36C6B55385A56A62* __this, RuntimeObject* ___0_dataGenerator, RuntimeObject* ___1_realBuffer, RuntimeObject* ___2_revokedBuffer, RuntimeObject* ___3_coreStatsHelper, RuntimeObject* ___4_consentTracker, RuntimeObject* ___5_dispatcher, RuntimeObject* ___6_forgetter, RuntimeObject* ___7_cloudProjectId, RuntimeObject* ___8_installId, RuntimeObject* ___9_playerId, String_t* ___10_environment, RuntimeObject* ___11_customAnalyticsId, RuntimeObject* ___12_systemCalls, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBuffer_t0E4742F785C935FD676BFEE280CD1D6FF26BBD82_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICloudProjectId_t366B66869ECC734B15C1F60633D2B998CD9231FE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IInstallationId_tCE6DEEEBAFABEB9EC621BD1646D82BC9D82BFB0C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StdCommonParams_tDFD4FF72F7EEBBC4384155713888A4485FF5E701_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TransactionCurrencyConverter_t3296A312BAFE7A8FC56182C3D53BEFD1D9474133_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3E70A85646805F0D06C50AA7EAAA591D8DD27520);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* G_B3_0 = NULL;
	String_t* G_B5_0 = NULL;
	String_t* G_B4_0 = NULL;
	{
		// readonly TimeSpan k_BackgroundSessionRefreshPeriod = TimeSpan.FromMinutes(5);
		il2cpp_codegen_runtime_class_init_inline(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var);
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_0;
		L_0 = TimeSpan_FromMinutes_m5748E4C33327BC758C73B6DAE1BDD6BF44711CB5((5.0), NULL);
		__this->___k_BackgroundSessionRefreshPeriod_0 = L_0;
		// internal bool ServiceEnabled { get; private set; } = true;
		__this->___U3CServiceEnabledU3Ek__BackingField_15 = (bool)1;
		// readonly TransactionCurrencyConverter converter = new TransactionCurrencyConverter();
		TransactionCurrencyConverter_t3296A312BAFE7A8FC56182C3D53BEFD1D9474133* L_1 = (TransactionCurrencyConverter_t3296A312BAFE7A8FC56182C3D53BEFD1D9474133*)il2cpp_codegen_object_new(TransactionCurrencyConverter_t3296A312BAFE7A8FC56182C3D53BEFD1D9474133_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		TransactionCurrencyConverter__ctor_m5ACA84E75A13698EAF50E70DF0FA9FA1EC7DBFFD(L_1, NULL);
		__this->___converter_19 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___converter_19), (void*)L_1);
		// internal AnalyticsServiceInstance(IDataGenerator dataGenerator,
		//                                   IBuffer realBuffer,
		//                                   IBuffer revokedBuffer,
		//                                   ICoreStatsHelper coreStatsHelper,
		//                                   IConsentTracker consentTracker,
		//                                   IDispatcher dispatcher,
		//                                   IAnalyticsForgetter forgetter,
		//                                   ICloudProjectId cloudProjectId,
		//                                   IInstallationId installId,
		//                                   IPlayerId playerId,
		//                                   string environment,
		//                                   IExternalUserId customAnalyticsId,
		//                                   IAnalyticsServiceSystemCalls systemCalls)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// m_CustomUserId = customAnalyticsId;
		RuntimeObject* L_2 = ___11_customAnalyticsId;
		__this->___m_CustomUserId_10 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_CustomUserId_10), (void*)L_2);
		// m_DataGenerator = dataGenerator;
		RuntimeObject* L_3 = ___0_dataGenerator;
		__this->___m_DataGenerator_5 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_DataGenerator_5), (void*)L_3);
		// m_SystemCalls = systemCalls;
		RuntimeObject* L_4 = ___12_systemCalls;
		__this->___m_SystemCalls_11 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_SystemCalls_11), (void*)L_4);
		// m_RealBuffer = realBuffer;
		RuntimeObject* L_5 = ___1_realBuffer;
		__this->___m_RealBuffer_12 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_RealBuffer_12), (void*)L_5);
		// m_RevokedBuffer = revokedBuffer;
		RuntimeObject* L_6 = ___2_revokedBuffer;
		__this->___m_RevokedBuffer_13 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_RevokedBuffer_13), (void*)L_6);
		// m_CoreStatsHelper = coreStatsHelper;
		RuntimeObject* L_7 = ___3_coreStatsHelper;
		__this->___m_CoreStatsHelper_6 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_CoreStatsHelper_6), (void*)L_7);
		// m_ConsentTracker = consentTracker;
		RuntimeObject* L_8 = ___4_consentTracker;
		__this->___m_ConsentTracker_7 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_ConsentTracker_7), (void*)L_8);
		// m_DataDispatcher = dispatcher;
		RuntimeObject* L_9 = ___5_dispatcher;
		__this->___m_DataDispatcher_8 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_DataDispatcher_8), (void*)L_9);
		// SwapToRealBuffer();
		AnalyticsServiceInstance_SwapToRealBuffer_m86F65D2B15563B49C2A52DB065DA38D1160E301F(__this, NULL);
		// m_AnalyticsForgetter = forgetter;
		RuntimeObject* L_10 = ___6_forgetter;
		__this->___m_AnalyticsForgetter_9 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_AnalyticsForgetter_9), (void*)L_10);
		// m_CommonParams = new StdCommonParams
		// {
		//     ClientVersion = Application.version,
		//     ProjectID = Application.cloudProjectId,
		//     GameBundleID = Application.identifier,
		//     Platform = Runtime.Name(),
		//     BuildGuuid = Application.buildGUID,
		//     Idfv = SystemInfo.deviceUniqueIdentifier
		// };
		StdCommonParams_tDFD4FF72F7EEBBC4384155713888A4485FF5E701* L_11 = (StdCommonParams_tDFD4FF72F7EEBBC4384155713888A4485FF5E701*)il2cpp_codegen_object_new(StdCommonParams_tDFD4FF72F7EEBBC4384155713888A4485FF5E701_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		StdCommonParams__ctor_m973A163478DDB4C6DC21AF142FF5CF7E46D254CA(L_11, NULL);
		StdCommonParams_tDFD4FF72F7EEBBC4384155713888A4485FF5E701* L_12 = L_11;
		String_t* L_13;
		L_13 = Application_get_version_m9CC0E94F12493682C1A2CA803083F6F01BA43124(NULL);
		NullCheck(L_12);
		StdCommonParams_set_ClientVersion_m97C2B0A6328C2D38BF31BED3F628D0902F36A3D0_inline(L_12, L_13, NULL);
		StdCommonParams_tDFD4FF72F7EEBBC4384155713888A4485FF5E701* L_14 = L_12;
		String_t* L_15;
		L_15 = Application_get_cloudProjectId_m84C5E847485178EEDA2E56E5EF72B0A740453EF9(NULL);
		NullCheck(L_14);
		StdCommonParams_set_ProjectID_m3119C391E989366B60D3A7FC4B4516A0ED285653_inline(L_14, L_15, NULL);
		StdCommonParams_tDFD4FF72F7EEBBC4384155713888A4485FF5E701* L_16 = L_14;
		String_t* L_17;
		L_17 = Application_get_identifier_mEA3314E50D44FB3CE2C2E78B336ACF4AD97BA056(NULL);
		NullCheck(L_16);
		StdCommonParams_set_GameBundleID_m01625DC8750160BEF86073C96048B910A23B8FE6_inline(L_16, L_17, NULL);
		StdCommonParams_tDFD4FF72F7EEBBC4384155713888A4485FF5E701* L_18 = L_16;
		String_t* L_19;
		L_19 = Runtime_Name_m5691169825FA2CC731731BE5BF745118C339B1E9(NULL);
		NullCheck(L_18);
		StdCommonParams_set_Platform_m6270CCD19D8CB881BC5668613C041C5E5BD0996C_inline(L_18, L_19, NULL);
		StdCommonParams_tDFD4FF72F7EEBBC4384155713888A4485FF5E701* L_20 = L_18;
		String_t* L_21;
		L_21 = Application_get_buildGUID_m088DE63ABF3F3022B8A65F19F882C126AD6FBE68(NULL);
		NullCheck(L_20);
		StdCommonParams_set_BuildGuuid_m0DB0779599C5BE31C7A1B76C2AF77E9EF9A3AC0C_inline(L_20, L_21, NULL);
		StdCommonParams_tDFD4FF72F7EEBBC4384155713888A4485FF5E701* L_22 = L_20;
		String_t* L_23;
		L_23 = SystemInfo_get_deviceUniqueIdentifier_m61BA4CB77ADA09730B8B575700D85027EFDB4EFC(NULL);
		NullCheck(L_22);
		StdCommonParams_set_Idfv_mC903A6BEA3F5145D959C36D123D084D211085EF9_inline(L_22, L_23, NULL);
		__this->___m_CommonParams_2 = L_22;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_CommonParams_2), (void*)L_22);
		// m_InstallId = installId;
		RuntimeObject* L_24 = ___8_installId;
		__this->___m_InstallId_4 = L_24;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_InstallId_4), (void*)L_24);
		// m_PlayerId = playerId;
		RuntimeObject* L_25 = ___9_playerId;
		__this->___m_PlayerId_3 = L_25;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_PlayerId_3), (void*)L_25);
		// string projectId = cloudProjectId?.GetCloudProjectId() ?? Application.cloudProjectId;
		RuntimeObject* L_26 = ___7_cloudProjectId;
		if (L_26)
		{
			goto IL_00db;
		}
	}
	{
		G_B3_0 = ((String_t*)(NULL));
		goto IL_00e2;
	}

IL_00db:
	{
		RuntimeObject* L_27 = ___7_cloudProjectId;
		NullCheck(L_27);
		String_t* L_28;
		L_28 = InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String Unity.Services.Core.Configuration.Internal.ICloudProjectId::GetCloudProjectId() */, ICloudProjectId_t366B66869ECC734B15C1F60633D2B998CD9231FE_il2cpp_TypeInfo_var, L_27);
		G_B3_0 = L_28;
	}

IL_00e2:
	{
		String_t* L_29 = G_B3_0;
		G_B4_0 = L_29;
		if (L_29)
		{
			G_B5_0 = L_29;
			goto IL_00eb;
		}
	}
	{
		String_t* L_30;
		L_30 = Application_get_cloudProjectId_m84C5E847485178EEDA2E56E5EF72B0A740453EF9(NULL);
		G_B5_0 = L_30;
	}

IL_00eb:
	{
		V_0 = G_B5_0;
		// m_CommonParams.ProjectID = projectId;
		StdCommonParams_tDFD4FF72F7EEBBC4384155713888A4485FF5E701* L_31 = __this->___m_CommonParams_2;
		String_t* L_32 = V_0;
		NullCheck(L_31);
		StdCommonParams_set_ProjectID_m3119C391E989366B60D3A7FC4B4516A0ED285653_inline(L_31, L_32, NULL);
		// m_CollectURL = String.Format(k_CollectUrlPattern, projectId, environment.ToLowerInvariant());
		String_t* L_33 = V_0;
		String_t* L_34 = ___10_environment;
		NullCheck(L_34);
		String_t* L_35;
		L_35 = String_ToLowerInvariant_mBE32C93DE27C5353FEA3FA654FC1DDBE3D0EB0F2(L_34, NULL);
		String_t* L_36;
		L_36 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral3E70A85646805F0D06C50AA7EAAA591D8DD27520, L_33, L_35, NULL);
		__this->___m_CollectURL_1 = L_36;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_CollectURL_1), (void*)L_36);
		// m_DataBuffer.UserID = GetAnalyticsUserID();
		RuntimeObject* L_37 = __this->___m_DataBuffer_14;
		String_t* L_38;
		L_38 = AnalyticsServiceInstance_GetAnalyticsUserID_m765E15065C72B9B1F8687C1129FD703048851A27(__this, NULL);
		NullCheck(L_37);
		InterfaceActionInvoker1< String_t* >::Invoke(0 /* System.Void Unity.Services.Analytics.Internal.IBuffer::set_UserID(System.String) */, IBuffer_t0E4742F785C935FD676BFEE280CD1D6FF26BBD82_il2cpp_TypeInfo_var, L_37, L_38);
		// m_DataBuffer.InstallID = m_InstallId.GetOrCreateIdentifier();
		RuntimeObject* L_39 = __this->___m_DataBuffer_14;
		RuntimeObject* L_40 = __this->___m_InstallId_4;
		NullCheck(L_40);
		String_t* L_41;
		L_41 = InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String Unity.Services.Core.Device.Internal.IInstallationId::GetOrCreateIdentifier() */, IInstallationId_tCE6DEEEBAFABEB9EC621BD1646D82BC9D82BFB0C_il2cpp_TypeInfo_var, L_40);
		NullCheck(L_39);
		InterfaceActionInvoker1< String_t* >::Invoke(1 /* System.Void Unity.Services.Analytics.Internal.IBuffer::set_InstallID(System.String) */, IBuffer_t0E4742F785C935FD676BFEE280CD1D6FF26BBD82_il2cpp_TypeInfo_var, L_39, L_41);
		// RefreshSessionID();
		AnalyticsServiceInstance_RefreshSessionID_m944E2F59E889E550C781E3710BFB5F4B95AE5125(__this, NULL);
		// }
		return;
	}
}
// System.Threading.Tasks.Task Unity.Services.Analytics.AnalyticsServiceInstance::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* AnalyticsServiceInstance_Initialize_m032205905C559C546317DACA9821F51098C4123D (AnalyticsServiceInstance_t85C6639220B0EFF1CB3C517E36C6B55385A56A62* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_Start_TisU3CInitializeU3Ed__39_t5D5A95D5CBED3E92245840C7F3C11846EAC2478B_mFC1F1BE19F516884E71F324609B5CAD02EE51014_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CInitializeU3Ed__39_t5D5A95D5CBED3E92245840C7F3C11846EAC2478B V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_runtime_class_init_inline(AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06 L_0;
		L_0 = AsyncTaskMethodBuilder_Create_m24F3F260A79CA2B9EC4F1F15693A33F5EC58735A(NULL);
		(&V_0)->___U3CU3Et__builder_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_builder_1))->___m_task_2), (void*)NULL);
		#endif
		(&V_0)->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___U3CU3E4__this_2), (void*)__this);
		(&V_0)->___U3CU3E1__state_0 = (-1);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_1 = (&(&V_0)->___U3CU3Et__builder_1);
		AsyncTaskMethodBuilder_Start_TisU3CInitializeU3Ed__39_t5D5A95D5CBED3E92245840C7F3C11846EAC2478B_mFC1F1BE19F516884E71F324609B5CAD02EE51014(L_1, (&V_0), AsyncTaskMethodBuilder_Start_TisU3CInitializeU3Ed__39_t5D5A95D5CBED3E92245840C7F3C11846EAC2478B_mFC1F1BE19F516884E71F324609B5CAD02EE51014_RuntimeMethod_var);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_2 = (&(&V_0)->___U3CU3Et__builder_1);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_3;
		L_3 = AsyncTaskMethodBuilder_get_Task_mE9125D5F8B96F26D1BA5A5347ED82669521C7F9E(L_2, NULL);
		return L_3;
	}
}
// System.Threading.Tasks.Task Unity.Services.Analytics.AnalyticsServiceInstance::InitializeUser()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* AnalyticsServiceInstance_InitializeUser_mC342B361F574226BBDF056F148FAE52B90E98CFA (AnalyticsServiceInstance_t85C6639220B0EFF1CB3C517E36C6B55385A56A62* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_Start_TisU3CInitializeUserU3Ed__40_t944DAAD25172C37C6956CB1307FF90D9020B1CE2_mE579C589F9D2A96D3718C3E0B72B3834D6F39B03_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CInitializeUserU3Ed__40_t944DAAD25172C37C6956CB1307FF90D9020B1CE2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_runtime_class_init_inline(AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06 L_0;
		L_0 = AsyncTaskMethodBuilder_Create_m24F3F260A79CA2B9EC4F1F15693A33F5EC58735A(NULL);
		(&V_0)->___U3CU3Et__builder_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_builder_1))->___m_task_2), (void*)NULL);
		#endif
		(&V_0)->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___U3CU3E4__this_2), (void*)__this);
		(&V_0)->___U3CU3E1__state_0 = (-1);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_1 = (&(&V_0)->___U3CU3Et__builder_1);
		AsyncTaskMethodBuilder_Start_TisU3CInitializeUserU3Ed__40_t944DAAD25172C37C6956CB1307FF90D9020B1CE2_mE579C589F9D2A96D3718C3E0B72B3834D6F39B03(L_1, (&V_0), AsyncTaskMethodBuilder_Start_TisU3CInitializeUserU3Ed__40_t944DAAD25172C37C6956CB1307FF90D9020B1CE2_mE579C589F9D2A96D3718C3E0B72B3834D6F39B03_RuntimeMethod_var);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_2 = (&(&V_0)->___U3CU3Et__builder_1);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_3;
		L_3 = AsyncTaskMethodBuilder_get_Task_mE9125D5F8B96F26D1BA5A5347ED82669521C7F9E(L_2, NULL);
		return L_3;
	}
}
// System.Void Unity.Services.Analytics.AnalyticsServiceInstance::RecordStartupEvents()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnalyticsServiceInstance_RecordStartupEvents_m91416206794DFA73F248FA6763A439FB455AF627 (AnalyticsServiceInstance_t85C6639220B0EFF1CB3C517E36C6B55385A56A62* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDataGenerator_t3CD09958BA210D4EE5B68AE79A6936634EE801E4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InternalNewPlayerHelper_t0DA93D548680A3333E7C9D3839AB8BF071B3A476_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral205F66EA76831459EF2F8ED7CB36EE2870B90054);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// m_DataGenerator.SdkStartup(DateTime.Now, m_CommonParams, m_StartUpCallingId);
		RuntimeObject* L_0 = __this->___m_DataGenerator_5;
		il2cpp_codegen_runtime_class_init_inline(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_1;
		L_1 = DateTime_get_Now_m636CB9651A9099D20BA1CF813A0C69637317325C(NULL);
		StdCommonParams_tDFD4FF72F7EEBBC4384155713888A4485FF5E701* L_2 = __this->___m_CommonParams_2;
		NullCheck(L_0);
		InterfaceActionInvoker3< DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D, StdCommonParams_tDFD4FF72F7EEBBC4384155713888A4485FF5E701*, String_t* >::Invoke(2 /* System.Void Unity.Services.Analytics.Data.IDataGenerator::SdkStartup(System.DateTime,Unity.Services.Analytics.Data.StdCommonParams,System.String) */, IDataGenerator_t3CD09958BA210D4EE5B68AE79A6936634EE801E4_il2cpp_TypeInfo_var, L_0, L_1, L_2, _stringLiteral205F66EA76831459EF2F8ED7CB36EE2870B90054);
		// m_DataGenerator.ClientDevice(DateTime.Now, m_CommonParams, m_StartUpCallingId, SystemInfo.processorType, SystemInfo.graphicsDeviceName, SystemInfo.processorCount, SystemInfo.systemMemorySize, Screen.width, Screen.height, (int)Screen.dpi);
		RuntimeObject* L_3 = __this->___m_DataGenerator_5;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_4;
		L_4 = DateTime_get_Now_m636CB9651A9099D20BA1CF813A0C69637317325C(NULL);
		StdCommonParams_tDFD4FF72F7EEBBC4384155713888A4485FF5E701* L_5 = __this->___m_CommonParams_2;
		String_t* L_6;
		L_6 = SystemInfo_get_processorType_m985AB6C66E69918DF641BC1A589A3F9B4CE76FBE(NULL);
		String_t* L_7;
		L_7 = SystemInfo_get_graphicsDeviceName_mA3F2E2CA587AD5E212A38AD7D28559FD017451A2(NULL);
		int32_t L_8;
		L_8 = SystemInfo_get_processorCount_m6B20AC11AEA09CA06278FBC47BAAEAA01BC7DB55(NULL);
		int32_t L_9;
		L_9 = SystemInfo_get_systemMemorySize_m3BFE40CF5A43FEAB94F5C552A47D04ECD88B771E(NULL);
		int32_t L_10;
		L_10 = Screen_get_width_mF608FF3252213E7EFA1F0D2F744C28110E9E5AC9(NULL);
		int32_t L_11;
		L_11 = Screen_get_height_m01A3102DE71EE1FBEA51D09D6B0261CF864FE8F9(NULL);
		float L_12;
		L_12 = Screen_get_dpi_mEEDAA2189F84A47BD69D62A611E031D5C59CFE8E(NULL);
		NullCheck(L_3);
		InterfaceActionInvoker10< DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D, StdCommonParams_tDFD4FF72F7EEBBC4384155713888A4485FF5E701*, String_t*, String_t*, String_t*, int64_t, int64_t, int64_t, int64_t, int64_t >::Invoke(6 /* System.Void Unity.Services.Analytics.Data.IDataGenerator::ClientDevice(System.DateTime,Unity.Services.Analytics.Data.StdCommonParams,System.String,System.String,System.String,System.Int64,System.Int64,System.Int64,System.Int64,System.Int64) */, IDataGenerator_t3CD09958BA210D4EE5B68AE79A6936634EE801E4_il2cpp_TypeInfo_var, L_3, L_4, L_5, _stringLiteral205F66EA76831459EF2F8ED7CB36EE2870B90054, L_6, L_7, ((int64_t)L_8), ((int64_t)L_9), ((int64_t)L_10), ((int64_t)L_11), ((int64_t)il2cpp_codegen_cast_double_to_int<int32_t>(L_12)));
		// var isTiny = false;
		V_0 = (bool)0;
		// m_DataGenerator.GameStarted(DateTime.Now, m_CommonParams, m_StartUpCallingId, Application.buildGUID, SystemInfo.operatingSystem, isTiny, DebugDevice.IsDebugDevice(), Locale.AnalyticsRegionLanguageCode());
		RuntimeObject* L_13 = __this->___m_DataGenerator_5;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_14;
		L_14 = DateTime_get_Now_m636CB9651A9099D20BA1CF813A0C69637317325C(NULL);
		StdCommonParams_tDFD4FF72F7EEBBC4384155713888A4485FF5E701* L_15 = __this->___m_CommonParams_2;
		String_t* L_16;
		L_16 = Application_get_buildGUID_m088DE63ABF3F3022B8A65F19F882C126AD6FBE68(NULL);
		String_t* L_17;
		L_17 = SystemInfo_get_operatingSystem_m47B20646C221517ACA8F99DE8576BF794AEB6F8D(NULL);
		bool L_18 = V_0;
		bool L_19;
		L_19 = DebugDevice_IsDebugDevice_mA1EEB1D12950C445B81D7EBE8C254DDE2437B333(NULL);
		String_t* L_20;
		L_20 = Locale_AnalyticsRegionLanguageCode_mBC2C7A14D9ED824729BF977BE5C1478B559BB45B(NULL);
		NullCheck(L_13);
		InterfaceActionInvoker8< DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D, StdCommonParams_tDFD4FF72F7EEBBC4384155713888A4485FF5E701*, String_t*, String_t*, String_t*, bool, bool, String_t* >::Invoke(4 /* System.Void Unity.Services.Analytics.Data.IDataGenerator::GameStarted(System.DateTime,Unity.Services.Analytics.Data.StdCommonParams,System.String,System.String,System.String,System.Boolean,System.Boolean,System.String) */, IDataGenerator_t3CD09958BA210D4EE5B68AE79A6936634EE801E4_il2cpp_TypeInfo_var, L_13, L_14, L_15, _stringLiteral205F66EA76831459EF2F8ED7CB36EE2870B90054, L_16, L_17, L_18, L_19, L_20);
		// if (m_InstallId != null && new InternalNewPlayerHelper(m_InstallId).IsNewPlayer())
		RuntimeObject* L_21 = __this->___m_InstallId_4;
		if (!L_21)
		{
			goto IL_00cb;
		}
	}
	{
		RuntimeObject* L_22 = __this->___m_InstallId_4;
		InternalNewPlayerHelper_t0DA93D548680A3333E7C9D3839AB8BF071B3A476* L_23 = (InternalNewPlayerHelper_t0DA93D548680A3333E7C9D3839AB8BF071B3A476*)il2cpp_codegen_object_new(InternalNewPlayerHelper_t0DA93D548680A3333E7C9D3839AB8BF071B3A476_il2cpp_TypeInfo_var);
		NullCheck(L_23);
		InternalNewPlayerHelper__ctor_m1EF18BB2B52AFA4EC9CDBC69196E406BA05F2A0F(L_23, L_22, NULL);
		NullCheck(L_23);
		bool L_24;
		L_24 = InternalNewPlayerHelper_IsNewPlayer_mE11DEC8005D24F3B42924870C1D64FFEE878916A(L_23, NULL);
		if (!L_24)
		{
			goto IL_00cb;
		}
	}
	{
		// m_DataGenerator.NewPlayer(DateTime.Now, m_CommonParams, m_StartUpCallingId, SystemInfo.deviceModel);
		RuntimeObject* L_25 = __this->___m_DataGenerator_5;
		il2cpp_codegen_runtime_class_init_inline(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_26;
		L_26 = DateTime_get_Now_m636CB9651A9099D20BA1CF813A0C69637317325C(NULL);
		StdCommonParams_tDFD4FF72F7EEBBC4384155713888A4485FF5E701* L_27 = __this->___m_CommonParams_2;
		String_t* L_28;
		L_28 = SystemInfo_get_deviceModel_m308FFBADED4BF6CB34C318A0BBDA762D09A7F185(NULL);
		NullCheck(L_25);
		InterfaceActionInvoker4< DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D, StdCommonParams_tDFD4FF72F7EEBBC4384155713888A4485FF5E701*, String_t*, String_t* >::Invoke(3 /* System.Void Unity.Services.Analytics.Data.IDataGenerator::NewPlayer(System.DateTime,Unity.Services.Analytics.Data.StdCommonParams,System.String,System.String) */, IDataGenerator_t3CD09958BA210D4EE5B68AE79A6936634EE801E4_il2cpp_TypeInfo_var, L_25, L_26, L_27, _stringLiteral205F66EA76831459EF2F8ED7CB36EE2870B90054, L_28);
	}

IL_00cb:
	{
		// }
		return;
	}
}
// System.String Unity.Services.Analytics.AnalyticsServiceInstance::GetAnalyticsUserID()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AnalyticsServiceInstance_GetAnalyticsUserID_m765E15065C72B9B1F8687C1129FD703048851A27 (AnalyticsServiceInstance_t85C6639220B0EFF1CB3C517E36C6B55385A56A62* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IInstallationId_tCE6DEEEBAFABEB9EC621BD1646D82BC9D82BFB0C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return !String.IsNullOrEmpty(CustomAnalyticsId) ? CustomAnalyticsId : m_InstallId.GetOrCreateIdentifier();
		String_t* L_0;
		L_0 = AnalyticsServiceInstance_get_CustomAnalyticsId_mEB3038CA04D336E4EF0C1A6D6E0D6A94E025CF60(__this, NULL);
		bool L_1;
		L_1 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_0, NULL);
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		RuntimeObject* L_2 = __this->___m_InstallId_4;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String Unity.Services.Core.Device.Internal.IInstallationId::GetOrCreateIdentifier() */, IInstallationId_tCE6DEEEBAFABEB9EC621BD1646D82BC9D82BFB0C_il2cpp_TypeInfo_var, L_2);
		return L_3;
	}

IL_0019:
	{
		String_t* L_4;
		L_4 = AnalyticsServiceInstance_get_CustomAnalyticsId_mEB3038CA04D336E4EF0C1A6D6E0D6A94E025CF60(__this, NULL);
		return L_4;
	}
}
// System.Void Unity.Services.Analytics.AnalyticsServiceInstance::ApplicationPaused(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnalyticsServiceInstance_ApplicationPaused_mB64F8B2FF25B824FA074668EF917FC684828893C (AnalyticsServiceInstance_t85C6639220B0EFF1CB3C517E36C6B55385A56A62* __this, bool ___0_paused, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAnalyticsServiceSystemCalls_t664990CD0F77E7F6877EE28442B73A589D3C9454_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (paused)
		bool L_0 = ___0_paused;
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		// m_ApplicationPauseTime = m_SystemCalls.UtcNow;
		RuntimeObject* L_1 = __this->___m_SystemCalls_11;
		NullCheck(L_1);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_2;
		L_2 = InterfaceFuncInvoker0< DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D >::Invoke(0 /* System.DateTime Unity.Services.Analytics.IAnalyticsServiceSystemCalls::get_UtcNow() */, IAnalyticsServiceSystemCalls_t664990CD0F77E7F6877EE28442B73A589D3C9454_il2cpp_TypeInfo_var, L_1);
		__this->___m_ApplicationPauseTime_18 = L_2;
		return;
	}

IL_0015:
	{
		// DateTime now = m_SystemCalls.UtcNow;
		RuntimeObject* L_3 = __this->___m_SystemCalls_11;
		NullCheck(L_3);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_4;
		L_4 = InterfaceFuncInvoker0< DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D >::Invoke(0 /* System.DateTime Unity.Services.Analytics.IAnalyticsServiceSystemCalls::get_UtcNow() */, IAnalyticsServiceSystemCalls_t664990CD0F77E7F6877EE28442B73A589D3C9454_il2cpp_TypeInfo_var, L_3);
		// if (now > m_ApplicationPauseTime + k_BackgroundSessionRefreshPeriod)
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_5 = __this->___m_ApplicationPauseTime_18;
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_6 = __this->___k_BackgroundSessionRefreshPeriod_0;
		il2cpp_codegen_runtime_class_init_inline(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_7;
		L_7 = DateTime_op_Addition_m652BE1306897DBE4CDF3ADA99FFFE2E70BFE3865(L_5, L_6, NULL);
		bool L_8;
		L_8 = DateTime_op_GreaterThan_m8F1FA3C039A0148FC1500E790A77CB44F025EA9F(L_4, L_7, NULL);
		if (!L_8)
		{
			goto IL_003e;
		}
	}
	{
		// RefreshSessionID();
		AnalyticsServiceInstance_RefreshSessionID_m944E2F59E889E550C781E3710BFB5F4B95AE5125(__this, NULL);
	}

IL_003e:
	{
		// }
		return;
	}
}
// System.Void Unity.Services.Analytics.AnalyticsServiceInstance::RefreshSessionID()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnalyticsServiceInstance_RefreshSessionID_m944E2F59E889E550C781E3710BFB5F4B95AE5125 (AnalyticsServiceInstance_t85C6639220B0EFF1CB3C517E36C6B55385A56A62* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBuffer_t0E4742F785C935FD676BFEE280CD1D6FF26BBD82_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Guid_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// SessionID = Guid.NewGuid().ToString();
		Guid_t L_0;
		L_0 = Guid_NewGuid_m1F4894E8DC089811D6252148AD5858E58D43A7BD(NULL);
		V_0 = L_0;
		String_t* L_1;
		L_1 = Guid_ToString_m2BFFD5FA726E03FA707AAFCCF065896C46D5290C((&V_0), NULL);
		AnalyticsServiceInstance_set_SessionID_m48AF420DBE356BD2F73DF27848664B9117B1CA52_inline(__this, L_1, NULL);
		// m_DataBuffer.SessionID = SessionID;
		RuntimeObject* L_2 = __this->___m_DataBuffer_14;
		String_t* L_3;
		L_3 = AnalyticsServiceInstance_get_SessionID_m0BE34B73BEC292E51E9721811451EC359D9837F0_inline(__this, NULL);
		NullCheck(L_2);
		InterfaceActionInvoker1< String_t* >::Invoke(3 /* System.Void Unity.Services.Analytics.Internal.IBuffer::set_SessionID(System.String) */, IBuffer_t0E4742F785C935FD676BFEE280CD1D6FF26BBD82_il2cpp_TypeInfo_var, L_2, L_3);
		// }
		return;
	}
}
// System.Void Unity.Services.Analytics.AnalyticsServiceInstance::Flush()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnalyticsServiceInstance_Flush_mB8F0ED919FB47026C5CB61DD3562FAA09009C21E (AnalyticsServiceInstance_t85C6639220B0EFF1CB3C517E36C6B55385A56A62* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnalyticsServiceInstance_ForgetMeEventUploaded_mDDA88D280C1A52DF1EC365BA6B52F6A1D0C5C059_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAnalyticsForgetter_t824BE286D40D7A4B73BE27A5BF50FE8DB4C0AE18_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBuffer_t0E4742F785C935FD676BFEE280CD1D6FF26BBD82_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IConsentTracker_t93AFBEAEA2AE9AC2A012EEBFA4344E527FD92550_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDispatcher_t4DE02B283A563837EE126BBB7BA0C5E903D3357C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IInstallationId_tCE6DEEEBAFABEB9EC621BD1646D82BC9D82BFB0C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPlayerId_t6A7BAE55B4D78E87B15B9261828E897BAACBF913_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0BC237184924820231BE4541A9E248A9768C7DEC);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B6_0 = NULL;
	RuntimeObject* G_B6_1 = NULL;
	RuntimeObject* G_B5_0 = NULL;
	RuntimeObject* G_B5_1 = NULL;
	String_t* G_B7_0 = NULL;
	RuntimeObject* G_B7_1 = NULL;
	{
		// if (!ServiceEnabled)
		bool L_0;
		L_0 = AnalyticsServiceInstance_get_ServiceEnabled_mF044EA299C12FF5CA7E6445A84BE251651365BF2_inline(__this, NULL);
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// if (m_ConsentTracker.IsGeoIpChecked() && m_ConsentTracker.IsConsentGiven())
		RuntimeObject* L_1 = __this->___m_ConsentTracker_7;
		NullCheck(L_1);
		bool L_2;
		L_2 = InterfaceFuncInvoker0< bool >::Invoke(4 /* System.Boolean Unity.Services.Analytics.Internal.IConsentTracker::IsGeoIpChecked() */, IConsentTracker_t93AFBEAEA2AE9AC2A012EEBFA4344E527FD92550_il2cpp_TypeInfo_var, L_1);
		if (!L_2)
		{
			goto IL_0094;
		}
	}
	{
		RuntimeObject* L_3 = __this->___m_ConsentTracker_7;
		NullCheck(L_3);
		bool L_4;
		L_4 = InterfaceFuncInvoker0< bool >::Invoke(5 /* System.Boolean Unity.Services.Analytics.Internal.IConsentTracker::IsConsentGiven() */, IConsentTracker_t93AFBEAEA2AE9AC2A012EEBFA4344E527FD92550_il2cpp_TypeInfo_var, L_3);
		if (!L_4)
		{
			goto IL_0094;
		}
	}
	{
		// m_DataBuffer.InstallID = m_InstallId.GetOrCreateIdentifier();
		RuntimeObject* L_5 = __this->___m_DataBuffer_14;
		RuntimeObject* L_6 = __this->___m_InstallId_4;
		NullCheck(L_6);
		String_t* L_7;
		L_7 = InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String Unity.Services.Core.Device.Internal.IInstallationId::GetOrCreateIdentifier() */, IInstallationId_tCE6DEEEBAFABEB9EC621BD1646D82BC9D82BFB0C_il2cpp_TypeInfo_var, L_6);
		NullCheck(L_5);
		InterfaceActionInvoker1< String_t* >::Invoke(1 /* System.Void Unity.Services.Analytics.Internal.IBuffer::set_InstallID(System.String) */, IBuffer_t0E4742F785C935FD676BFEE280CD1D6FF26BBD82_il2cpp_TypeInfo_var, L_5, L_7);
		// m_DataBuffer.PlayerID = m_PlayerId?.PlayerId;
		RuntimeObject* L_8 = __this->___m_DataBuffer_14;
		RuntimeObject* L_9 = __this->___m_PlayerId_3;
		RuntimeObject* L_10 = L_9;
		G_B5_0 = L_10;
		G_B5_1 = L_8;
		if (L_10)
		{
			G_B6_0 = L_10;
			G_B6_1 = L_8;
			goto IL_004c;
		}
	}
	{
		G_B7_0 = ((String_t*)(NULL));
		G_B7_1 = G_B5_1;
		goto IL_0051;
	}

IL_004c:
	{
		NullCheck(G_B6_0);
		String_t* L_11;
		L_11 = InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String Unity.Services.Authentication.Internal.IPlayerId::get_PlayerId() */, IPlayerId_t6A7BAE55B4D78E87B15B9261828E897BAACBF913_il2cpp_TypeInfo_var, G_B6_0);
		G_B7_0 = L_11;
		G_B7_1 = G_B6_1;
	}

IL_0051:
	{
		NullCheck(G_B7_1);
		InterfaceActionInvoker1< String_t* >::Invoke(2 /* System.Void Unity.Services.Analytics.Internal.IBuffer::set_PlayerID(System.String) */, IBuffer_t0E4742F785C935FD676BFEE280CD1D6FF26BBD82_il2cpp_TypeInfo_var, G_B7_1, G_B7_0);
		// m_DataBuffer.UserID = GetAnalyticsUserID();
		RuntimeObject* L_12 = __this->___m_DataBuffer_14;
		String_t* L_13;
		L_13 = AnalyticsServiceInstance_GetAnalyticsUserID_m765E15065C72B9B1F8687C1129FD703048851A27(__this, NULL);
		NullCheck(L_12);
		InterfaceActionInvoker1< String_t* >::Invoke(0 /* System.Void Unity.Services.Analytics.Internal.IBuffer::set_UserID(System.String) */, IBuffer_t0E4742F785C935FD676BFEE280CD1D6FF26BBD82_il2cpp_TypeInfo_var, L_12, L_13);
		// m_DataBuffer.SessionID = SessionID;
		RuntimeObject* L_14 = __this->___m_DataBuffer_14;
		String_t* L_15;
		L_15 = AnalyticsServiceInstance_get_SessionID_m0BE34B73BEC292E51E9721811451EC359D9837F0_inline(__this, NULL);
		NullCheck(L_14);
		InterfaceActionInvoker1< String_t* >::Invoke(3 /* System.Void Unity.Services.Analytics.Internal.IBuffer::set_SessionID(System.String) */, IBuffer_t0E4742F785C935FD676BFEE280CD1D6FF26BBD82_il2cpp_TypeInfo_var, L_14, L_15);
		// m_DataDispatcher.CollectUrl = m_CollectURL;
		RuntimeObject* L_16 = __this->___m_DataDispatcher_8;
		String_t* L_17 = __this->___m_CollectURL_1;
		NullCheck(L_16);
		InterfaceActionInvoker1< String_t* >::Invoke(1 /* System.Void Unity.Services.Analytics.Internal.IDispatcher::set_CollectUrl(System.String) */, IDispatcher_t4DE02B283A563837EE126BBB7BA0C5E903D3357C_il2cpp_TypeInfo_var, L_16, L_17);
		// m_DataDispatcher.Flush();
		RuntimeObject* L_18 = __this->___m_DataDispatcher_8;
		NullCheck(L_18);
		InterfaceActionInvoker0::Invoke(2 /* System.Void Unity.Services.Analytics.Internal.IDispatcher::Flush() */, IDispatcher_t4DE02B283A563837EE126BBB7BA0C5E903D3357C_il2cpp_TypeInfo_var, L_18);
	}

IL_0094:
	{
		// if (m_ConsentTracker.IsOptingOutInProgress())
		RuntimeObject* L_19 = __this->___m_ConsentTracker_7;
		NullCheck(L_19);
		bool L_20;
		L_20 = InterfaceFuncInvoker0< bool >::Invoke(7 /* System.Boolean Unity.Services.Analytics.Internal.IConsentTracker::IsOptingOutInProgress() */, IConsentTracker_t93AFBEAEA2AE9AC2A012EEBFA4344E527FD92550_il2cpp_TypeInfo_var, L_19);
		if (!L_20)
		{
			goto IL_00d8;
		}
	}
	{
		// m_AnalyticsForgetter.AttemptToForget(k_ForgetCallingId, m_CollectURL, m_InstallId.GetOrCreateIdentifier(), BufferX.SerializeDateTime(DateTime.Now), ForgetMeEventUploaded);
		RuntimeObject* L_21 = __this->___m_AnalyticsForgetter_9;
		String_t* L_22 = __this->___m_CollectURL_1;
		RuntimeObject* L_23 = __this->___m_InstallId_4;
		NullCheck(L_23);
		String_t* L_24;
		L_24 = InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String Unity.Services.Core.Device.Internal.IInstallationId::GetOrCreateIdentifier() */, IInstallationId_tCE6DEEEBAFABEB9EC621BD1646D82BC9D82BFB0C_il2cpp_TypeInfo_var, L_23);
		il2cpp_codegen_runtime_class_init_inline(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_25;
		L_25 = DateTime_get_Now_m636CB9651A9099D20BA1CF813A0C69637317325C(NULL);
		String_t* L_26;
		L_26 = BufferX_SerializeDateTime_m1B8DB0257F014D2E517B2EB94CC80B5A879DB654(L_25, NULL);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_27 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_27);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_27, __this, (intptr_t)((void*)AnalyticsServiceInstance_ForgetMeEventUploaded_mDDA88D280C1A52DF1EC365BA6B52F6A1D0C5C059_RuntimeMethod_var), NULL);
		NullCheck(L_21);
		InterfaceActionInvoker5< String_t*, String_t*, String_t*, String_t*, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* >::Invoke(0 /* System.Void Unity.Services.Analytics.Internal.IAnalyticsForgetter::AttemptToForget(System.String,System.String,System.String,System.String,System.Action) */, IAnalyticsForgetter_t824BE286D40D7A4B73BE27A5BF50FE8DB4C0AE18_il2cpp_TypeInfo_var, L_21, _stringLiteral0BC237184924820231BE4541A9E248A9768C7DEC, L_22, L_24, L_26, L_27);
	}

IL_00d8:
	{
		// }
		return;
	}
}
// System.Void Unity.Services.Analytics.AnalyticsServiceInstance::GameEnded()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnalyticsServiceInstance_GameEnded_m0C6611FE57A7E25C6F4E5BEF66545139EAB182A4 (AnalyticsServiceInstance_t85C6639220B0EFF1CB3C517E36C6B55385A56A62* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IConsentTracker_t93AFBEAEA2AE9AC2A012EEBFA4344E527FD92550_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDataGenerator_t3CD09958BA210D4EE5B68AE79A6936634EE801E4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6592F2A54D864C0F2DADC704BDDAB476278DF50F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!ServiceEnabled)
		bool L_0;
		L_0 = AnalyticsServiceInstance_get_ServiceEnabled_mF044EA299C12FF5CA7E6445A84BE251651365BF2_inline(__this, NULL);
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// m_DataGenerator.GameEnded(DateTime.Now, m_CommonParams, "com.unity.services.analytics.Events.Shutdown", DataGenerator.SessionEndState.QUIT);
		RuntimeObject* L_1 = __this->___m_DataGenerator_5;
		il2cpp_codegen_runtime_class_init_inline(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_2;
		L_2 = DateTime_get_Now_m636CB9651A9099D20BA1CF813A0C69637317325C(NULL);
		StdCommonParams_tDFD4FF72F7EEBBC4384155713888A4485FF5E701* L_3 = __this->___m_CommonParams_2;
		NullCheck(L_1);
		InterfaceActionInvoker4< DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D, StdCommonParams_tDFD4FF72F7EEBBC4384155713888A4485FF5E701*, String_t*, int32_t >::Invoke(5 /* System.Void Unity.Services.Analytics.Data.IDataGenerator::GameEnded(System.DateTime,Unity.Services.Analytics.Data.StdCommonParams,System.String,Unity.Services.Analytics.Data.DataGenerator/SessionEndState) */, IDataGenerator_t3CD09958BA210D4EE5B68AE79A6936634EE801E4_il2cpp_TypeInfo_var, L_1, L_2, L_3, _stringLiteral6592F2A54D864C0F2DADC704BDDAB476278DF50F, 3);
		// if (m_ConsentTracker != null && m_ConsentTracker.IsGeoIpChecked())
		RuntimeObject* L_4 = __this->___m_ConsentTracker_7;
		if (!L_4)
		{
			goto IL_0040;
		}
	}
	{
		RuntimeObject* L_5 = __this->___m_ConsentTracker_7;
		NullCheck(L_5);
		bool L_6;
		L_6 = InterfaceFuncInvoker0< bool >::Invoke(4 /* System.Boolean Unity.Services.Analytics.Internal.IConsentTracker::IsGeoIpChecked() */, IConsentTracker_t93AFBEAEA2AE9AC2A012EEBFA4344E527FD92550_il2cpp_TypeInfo_var, L_5);
		if (!L_6)
		{
			goto IL_0040;
		}
	}
	{
		// Flush();
		AnalyticsServiceInstance_Flush_mB8F0ED919FB47026C5CB61DD3562FAA09009C21E(__this, NULL);
	}

IL_0040:
	{
		// }
		return;
	}
}
// System.Void Unity.Services.Analytics.AnalyticsServiceInstance::RecordGameRunningIfNecessary()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnalyticsServiceInstance_RecordGameRunningIfNecessary_mDC174CE67E36436A206DDC321308853A727484C3 (AnalyticsServiceInstance_t85C6639220B0EFF1CB3C517E36C6B55385A56A62* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBuffer_t0E4742F785C935FD676BFEE280CD1D6FF26BBD82_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDataGenerator_t3CD09958BA210D4EE5B68AE79A6936634EE801E4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4AA3716D19976DD411ABCF0909A0E4D4B8EA09AF);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (ServiceEnabled)
		bool L_0;
		L_0 = AnalyticsServiceInstance_get_ServiceEnabled_mF044EA299C12FF5CA7E6445A84BE251651365BF2_inline(__this, NULL);
		if (!L_0)
		{
			goto IL_006c;
		}
	}
	{
		// if (m_DataBuffer.Length == 0 || m_DataBuffer.Length == m_BufferLengthAtLastGameRunning)
		RuntimeObject* L_1 = __this->___m_DataBuffer_14;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 Unity.Services.Analytics.Internal.IBuffer::get_Length() */, IBuffer_t0E4742F785C935FD676BFEE280CD1D6FF26BBD82_il2cpp_TypeInfo_var, L_1);
		if (!L_2)
		{
			goto IL_0028;
		}
	}
	{
		RuntimeObject* L_3 = __this->___m_DataBuffer_14;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 Unity.Services.Analytics.Internal.IBuffer::get_Length() */, IBuffer_t0E4742F785C935FD676BFEE280CD1D6FF26BBD82_il2cpp_TypeInfo_var, L_3);
		int32_t L_5 = __this->___m_BufferLengthAtLastGameRunning_17;
		if ((!(((uint32_t)L_4) == ((uint32_t)L_5))))
		{
			goto IL_005b;
		}
	}

IL_0028:
	{
		// SetVariableCommonParams();
		AnalyticsServiceInstance_SetVariableCommonParams_mAE82C6CB3D7D7DCC5337FB51A360457D5EB7844C(__this, NULL);
		// m_DataGenerator.GameRunning(DateTime.Now, m_CommonParams, "com.unity.services.analytics.AnalyticsServiceInstance.RecordGameRunningIfNecessary");
		RuntimeObject* L_6 = __this->___m_DataGenerator_5;
		il2cpp_codegen_runtime_class_init_inline(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_7;
		L_7 = DateTime_get_Now_m636CB9651A9099D20BA1CF813A0C69637317325C(NULL);
		StdCommonParams_tDFD4FF72F7EEBBC4384155713888A4485FF5E701* L_8 = __this->___m_CommonParams_2;
		NullCheck(L_6);
		InterfaceActionInvoker3< DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D, StdCommonParams_tDFD4FF72F7EEBBC4384155713888A4485FF5E701*, String_t* >::Invoke(1 /* System.Void Unity.Services.Analytics.Data.IDataGenerator::GameRunning(System.DateTime,Unity.Services.Analytics.Data.StdCommonParams,System.String) */, IDataGenerator_t3CD09958BA210D4EE5B68AE79A6936634EE801E4_il2cpp_TypeInfo_var, L_6, L_7, L_8, _stringLiteral4AA3716D19976DD411ABCF0909A0E4D4B8EA09AF);
		// m_BufferLengthAtLastGameRunning = m_DataBuffer.Length;
		RuntimeObject* L_9 = __this->___m_DataBuffer_14;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = InterfaceFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 Unity.Services.Analytics.Internal.IBuffer::get_Length() */, IBuffer_t0E4742F785C935FD676BFEE280CD1D6FF26BBD82_il2cpp_TypeInfo_var, L_9);
		__this->___m_BufferLengthAtLastGameRunning_17 = L_10;
		return;
	}

IL_005b:
	{
		// m_BufferLengthAtLastGameRunning = m_DataBuffer.Length;
		RuntimeObject* L_11 = __this->___m_DataBuffer_14;
		NullCheck(L_11);
		int32_t L_12;
		L_12 = InterfaceFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 Unity.Services.Analytics.Internal.IBuffer::get_Length() */, IBuffer_t0E4742F785C935FD676BFEE280CD1D6FF26BBD82_il2cpp_TypeInfo_var, L_11);
		__this->___m_BufferLengthAtLastGameRunning_17 = L_12;
	}

IL_006c:
	{
		// }
		return;
	}
}
// System.Void Unity.Services.Analytics.AnalyticsServiceInstance::InternalTick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnalyticsServiceInstance_InternalTick_m26C028F5A6BDF4901A7FEB9888FBC9C3E0A3710A (AnalyticsServiceInstance_t85C6639220B0EFF1CB3C517E36C6B55385A56A62* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IConsentTracker_t93AFBEAEA2AE9AC2A012EEBFA4344E527FD92550_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (ServiceEnabled &&
		//     m_ConsentTracker.IsGeoIpChecked())
		bool L_0;
		L_0 = AnalyticsServiceInstance_get_ServiceEnabled_mF044EA299C12FF5CA7E6445A84BE251651365BF2_inline(__this, NULL);
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		RuntimeObject* L_1 = __this->___m_ConsentTracker_7;
		NullCheck(L_1);
		bool L_2;
		L_2 = InterfaceFuncInvoker0< bool >::Invoke(4 /* System.Boolean Unity.Services.Analytics.Internal.IConsentTracker::IsGeoIpChecked() */, IConsentTracker_t93AFBEAEA2AE9AC2A012EEBFA4344E527FD92550_il2cpp_TypeInfo_var, L_1);
		if (!L_2)
		{
			goto IL_001b;
		}
	}
	{
		// Flush();
		AnalyticsServiceInstance_Flush_mB8F0ED919FB47026C5CB61DD3562FAA09009C21E(__this, NULL);
	}

IL_001b:
	{
		// }
		return;
	}
}
// System.Void Unity.Services.Analytics.AnalyticsServiceInstance::SetVariableCommonParams()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnalyticsServiceInstance_SetVariableCommonParams_mAE82C6CB3D7D7DCC5337FB51A360457D5EB7844C (AnalyticsServiceInstance_t85C6639220B0EFF1CB3C517E36C6B55385A56A62* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPlayerId_t6A7BAE55B4D78E87B15B9261828E897BAACBF913_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_GetValueOrDefault_m068A148705ED1E215A5E85D18BA6852B192DA419_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_mDE3158DD99CA7E1775A8BA276E428AF808AB8FBF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_mC149B1C717AF506BBE8932F2C1DC86C378D17EA8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 V_1;
	memset((&V_1), 0, sizeof(V_1));
	StdCommonParams_tDFD4FF72F7EEBBC4384155713888A4485FF5E701* G_B2_0 = NULL;
	StdCommonParams_tDFD4FF72F7EEBBC4384155713888A4485FF5E701* G_B1_0 = NULL;
	Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	StdCommonParams_tDFD4FF72F7EEBBC4384155713888A4485FF5E701* G_B3_1 = NULL;
	RuntimeObject* G_B5_0 = NULL;
	StdCommonParams_tDFD4FF72F7EEBBC4384155713888A4485FF5E701* G_B5_1 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	StdCommonParams_tDFD4FF72F7EEBBC4384155713888A4485FF5E701* G_B4_1 = NULL;
	String_t* G_B6_0 = NULL;
	StdCommonParams_tDFD4FF72F7EEBBC4384155713888A4485FF5E701* G_B6_1 = NULL;
	{
		// m_CommonParams.DeviceVolume = DeviceVolumeProvider.GetDeviceVolume();
		StdCommonParams_tDFD4FF72F7EEBBC4384155713888A4485FF5E701* L_0 = __this->___m_CommonParams_2;
		Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 L_1;
		L_1 = DeviceVolumeProvider_GetDeviceVolume_m1318E3ADBEF76202DE617254B3CBB6028FE3D3DE(NULL);
		V_0 = L_1;
		bool L_2;
		L_2 = Nullable_1_get_HasValue_mC149B1C717AF506BBE8932F2C1DC86C378D17EA8_inline((&V_0), Nullable_1_get_HasValue_mC149B1C717AF506BBE8932F2C1DC86C378D17EA8_RuntimeMethod_var);
		G_B1_0 = L_0;
		if (L_2)
		{
			G_B2_0 = L_0;
			goto IL_0020;
		}
	}
	{
		il2cpp_codegen_initobj((&V_1), sizeof(Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165));
		Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 L_3 = V_1;
		G_B3_0 = L_3;
		G_B3_1 = G_B1_0;
		goto IL_002d;
	}

IL_0020:
	{
		float L_4;
		L_4 = Nullable_1_GetValueOrDefault_m068A148705ED1E215A5E85D18BA6852B192DA419_inline((&V_0), Nullable_1_GetValueOrDefault_m068A148705ED1E215A5E85D18BA6852B192DA419_RuntimeMethod_var);
		Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 L_5;
		memset((&L_5), 0, sizeof(L_5));
		Nullable_1__ctor_mDE3158DD99CA7E1775A8BA276E428AF808AB8FBF((&L_5), ((double)L_4), /*hidden argument*/Nullable_1__ctor_mDE3158DD99CA7E1775A8BA276E428AF808AB8FBF_RuntimeMethod_var);
		G_B3_0 = L_5;
		G_B3_1 = G_B2_0;
	}

IL_002d:
	{
		NullCheck(G_B3_1);
		StdCommonParams_set_DeviceVolume_mBC014F9E6144D31B7A21082F4F17CADA8B8B8DB8_inline(G_B3_1, G_B3_0, NULL);
		// m_CommonParams.BatteryLoad = SystemInfo.batteryLevel;
		StdCommonParams_tDFD4FF72F7EEBBC4384155713888A4485FF5E701* L_6 = __this->___m_CommonParams_2;
		float L_7;
		L_7 = SystemInfo_get_batteryLevel_m549AF9A6BB748E5C50FF2D1D04D4E9E6B1C5D8C6(NULL);
		Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Nullable_1__ctor_mDE3158DD99CA7E1775A8BA276E428AF808AB8FBF((&L_8), ((double)L_7), /*hidden argument*/Nullable_1__ctor_mDE3158DD99CA7E1775A8BA276E428AF808AB8FBF_RuntimeMethod_var);
		NullCheck(L_6);
		StdCommonParams_set_BatteryLoad_mC06087861B7DD6C288823A7DDB4A7085B168743E_inline(L_6, L_8, NULL);
		// m_CommonParams.UasUserID = m_PlayerId?.PlayerId;
		StdCommonParams_tDFD4FF72F7EEBBC4384155713888A4485FF5E701* L_9 = __this->___m_CommonParams_2;
		RuntimeObject* L_10 = __this->___m_PlayerId_3;
		RuntimeObject* L_11 = L_10;
		G_B4_0 = L_11;
		G_B4_1 = L_9;
		if (L_11)
		{
			G_B5_0 = L_11;
			G_B5_1 = L_9;
			goto IL_005b;
		}
	}
	{
		G_B6_0 = ((String_t*)(NULL));
		G_B6_1 = G_B4_1;
		goto IL_0060;
	}

IL_005b:
	{
		NullCheck(G_B5_0);
		String_t* L_12;
		L_12 = InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String Unity.Services.Authentication.Internal.IPlayerId::get_PlayerId() */, IPlayerId_t6A7BAE55B4D78E87B15B9261828E897BAACBF913_il2cpp_TypeInfo_var, G_B5_0);
		G_B6_0 = L_12;
		G_B6_1 = G_B5_1;
	}

IL_0060:
	{
		NullCheck(G_B6_1);
		StdCommonParams_set_UasUserID_m5079F59137ED8AA3D25BBDFBF10E536812D8ABB7_inline(G_B6_1, G_B6_0, NULL);
		// }
		return;
	}
}
// System.Void Unity.Services.Analytics.AnalyticsServiceInstance::SwapToRevokedBuffer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnalyticsServiceInstance_SwapToRevokedBuffer_m3C0C7A5B3195A050BCF4586AB05B47062143F1DA (AnalyticsServiceInstance_t85C6639220B0EFF1CB3C517E36C6B55385A56A62* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBuffer_t0E4742F785C935FD676BFEE280CD1D6FF26BBD82_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDataGenerator_t3CD09958BA210D4EE5B68AE79A6936634EE801E4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDispatcher_t4DE02B283A563837EE126BBB7BA0C5E903D3357C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_RealBuffer.ClearBuffer();
		RuntimeObject* L_0 = __this->___m_RealBuffer_12;
		NullCheck(L_0);
		InterfaceActionInvoker0::Invoke(14 /* System.Void Unity.Services.Analytics.Internal.IBuffer::ClearBuffer() */, IBuffer_t0E4742F785C935FD676BFEE280CD1D6FF26BBD82_il2cpp_TypeInfo_var, L_0);
		// m_RealBuffer.ClearDiskCache();
		RuntimeObject* L_1 = __this->___m_RealBuffer_12;
		NullCheck(L_1);
		InterfaceActionInvoker0::Invoke(13 /* System.Void Unity.Services.Analytics.Internal.IBuffer::ClearDiskCache() */, IBuffer_t0E4742F785C935FD676BFEE280CD1D6FF26BBD82_il2cpp_TypeInfo_var, L_1);
		// m_DataBuffer = m_RevokedBuffer;
		RuntimeObject* L_2 = __this->___m_RevokedBuffer_13;
		__this->___m_DataBuffer_14 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_DataBuffer_14), (void*)L_2);
		// m_DataGenerator.SetBuffer(m_RevokedBuffer);
		RuntimeObject* L_3 = __this->___m_DataGenerator_5;
		RuntimeObject* L_4 = __this->___m_RevokedBuffer_13;
		NullCheck(L_3);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(0 /* System.Void Unity.Services.Analytics.Data.IDataGenerator::SetBuffer(Unity.Services.Analytics.Internal.IBuffer) */, IDataGenerator_t3CD09958BA210D4EE5B68AE79A6936634EE801E4_il2cpp_TypeInfo_var, L_3, L_4);
		// m_DataDispatcher.SetBuffer(m_RevokedBuffer);
		RuntimeObject* L_5 = __this->___m_DataDispatcher_8;
		RuntimeObject* L_6 = __this->___m_RevokedBuffer_13;
		NullCheck(L_5);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(0 /* System.Void Unity.Services.Analytics.Internal.IDispatcher::SetBuffer(Unity.Services.Analytics.Internal.IBuffer) */, IDispatcher_t4DE02B283A563837EE126BBB7BA0C5E903D3357C_il2cpp_TypeInfo_var, L_5, L_6);
		// }
		return;
	}
}
// System.Void Unity.Services.Analytics.AnalyticsServiceInstance::SwapToRealBuffer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnalyticsServiceInstance_SwapToRealBuffer_m86F65D2B15563B49C2A52DB065DA38D1160E301F (AnalyticsServiceInstance_t85C6639220B0EFF1CB3C517E36C6B55385A56A62* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDataGenerator_t3CD09958BA210D4EE5B68AE79A6936634EE801E4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDispatcher_t4DE02B283A563837EE126BBB7BA0C5E903D3357C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_DataBuffer = m_RealBuffer;
		RuntimeObject* L_0 = __this->___m_RealBuffer_12;
		__this->___m_DataBuffer_14 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_DataBuffer_14), (void*)L_0);
		// m_DataGenerator.SetBuffer(m_RealBuffer);
		RuntimeObject* L_1 = __this->___m_DataGenerator_5;
		RuntimeObject* L_2 = __this->___m_RealBuffer_12;
		NullCheck(L_1);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(0 /* System.Void Unity.Services.Analytics.Data.IDataGenerator::SetBuffer(Unity.Services.Analytics.Internal.IBuffer) */, IDataGenerator_t3CD09958BA210D4EE5B68AE79A6936634EE801E4_il2cpp_TypeInfo_var, L_1, L_2);
		// m_DataDispatcher.SetBuffer(m_RealBuffer);
		RuntimeObject* L_3 = __this->___m_DataDispatcher_8;
		RuntimeObject* L_4 = __this->___m_RealBuffer_12;
		NullCheck(L_3);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(0 /* System.Void Unity.Services.Analytics.Internal.IDispatcher::SetBuffer(Unity.Services.Analytics.Internal.IBuffer) */, IDispatcher_t4DE02B283A563837EE126BBB7BA0C5E903D3357C_il2cpp_TypeInfo_var, L_3, L_4);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Unity.Services.Analytics.AnalyticsServiceInstance/<CheckForRequiredConsents>d__0::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCheckForRequiredConsentsU3Ed__0_MoveNext_m8D23A3DB2A5EE356DA8F790B36970CD795F880CA (U3CCheckForRequiredConsentsU3Ed__0_tE4974F41B1F427E322B867A158105241B1665396* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t67679171BEFE85C38666397015D627C6E3E7D886_TisU3CCheckForRequiredConsentsU3Ed__0_tE4974F41B1F427E322B867A158105241B1665396_m870F6F1355222AF7A6554CF8A897592181CFACE4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetResult_m412D9588DF5481C6FAD7D151C1E8D670763DA122_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IConsentTracker_t93AFBEAEA2AE9AC2A012EEBFA4344E527FD92550_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_GetResult_m5F5B61E5E8007E22BF56CC4D63AB61FE9584FDD9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_get_IsCompleted_mD7F9B812B03F8973495724BC92A2F4AAC37E0179_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_GetAwaiter_mCB01C4C331E45364EDA04B3FDB90705CA93004E7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	AnalyticsServiceInstance_t85C6639220B0EFF1CB3C517E36C6B55385A56A62* V_1 = NULL;
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* V_2 = NULL;
	GeoIPResponse_tADA05745323DD2374411BCB8CEC9EC086B4FE150* V_3 = NULL;
	TaskAwaiter_1_t67679171BEFE85C38666397015D627C6E3E7D886 V_4;
	memset((&V_4), 0, sizeof(V_4));
	Exception_t* V_5 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		AnalyticsServiceInstance_t85C6639220B0EFF1CB3C517E36C6B55385A56A62* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_0050_1;
			}
		}
		{
			// var response = await m_ConsentTracker.CheckGeoIP();
			AnalyticsServiceInstance_t85C6639220B0EFF1CB3C517E36C6B55385A56A62* L_3 = V_1;
			NullCheck(L_3);
			RuntimeObject* L_4 = L_3->___m_ConsentTracker_7;
			NullCheck(L_4);
			Task_1_t3F0E026C38791877CBE0DEC23CD10E9103FBA9B2* L_5;
			L_5 = InterfaceFuncInvoker0< Task_1_t3F0E026C38791877CBE0DEC23CD10E9103FBA9B2* >::Invoke(0 /* System.Threading.Tasks.Task`1<Unity.Services.Analytics.Internal.GeoIPResponse> Unity.Services.Analytics.Internal.IConsentTracker::CheckGeoIP() */, IConsentTracker_t93AFBEAEA2AE9AC2A012EEBFA4344E527FD92550_il2cpp_TypeInfo_var, L_4);
			NullCheck(L_5);
			TaskAwaiter_1_t67679171BEFE85C38666397015D627C6E3E7D886 L_6;
			L_6 = Task_1_GetAwaiter_mCB01C4C331E45364EDA04B3FDB90705CA93004E7(L_5, Task_1_GetAwaiter_mCB01C4C331E45364EDA04B3FDB90705CA93004E7_RuntimeMethod_var);
			V_4 = L_6;
			bool L_7;
			L_7 = TaskAwaiter_1_get_IsCompleted_mD7F9B812B03F8973495724BC92A2F4AAC37E0179((&V_4), TaskAwaiter_1_get_IsCompleted_mD7F9B812B03F8973495724BC92A2F4AAC37E0179_RuntimeMethod_var);
			if (L_7)
			{
				goto IL_006d_1;
			}
		}
		{
			int32_t L_8 = 0;
			V_0 = L_8;
			__this->___U3CU3E1__state_0 = L_8;
			TaskAwaiter_1_t67679171BEFE85C38666397015D627C6E3E7D886 L_9 = V_4;
			__this->___U3CU3Eu__1_3 = L_9;
			Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__1_3))->___m_task_0), (void*)NULL);
			AsyncTaskMethodBuilder_1_t6C6A8B677F9E92A76A93C9D97B66849EBECA0FE6* L_10 = (&__this->___U3CU3Et__builder_1);
			AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t67679171BEFE85C38666397015D627C6E3E7D886_TisU3CCheckForRequiredConsentsU3Ed__0_tE4974F41B1F427E322B867A158105241B1665396_m870F6F1355222AF7A6554CF8A897592181CFACE4(L_10, (&V_4), __this, AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t67679171BEFE85C38666397015D627C6E3E7D886_TisU3CCheckForRequiredConsentsU3Ed__0_tE4974F41B1F427E322B867A158105241B1665396_m870F6F1355222AF7A6554CF8A897592181CFACE4_RuntimeMethod_var);
			goto IL_00fa;
		}

IL_0050_1:
		{
			TaskAwaiter_1_t67679171BEFE85C38666397015D627C6E3E7D886 L_11 = __this->___U3CU3Eu__1_3;
			V_4 = L_11;
			TaskAwaiter_1_t67679171BEFE85C38666397015D627C6E3E7D886* L_12 = (&__this->___U3CU3Eu__1_3);
			il2cpp_codegen_initobj(L_12, sizeof(TaskAwaiter_1_t67679171BEFE85C38666397015D627C6E3E7D886));
			int32_t L_13 = (-1);
			V_0 = L_13;
			__this->___U3CU3E1__state_0 = L_13;
		}

IL_006d_1:
		{
			GeoIPResponse_tADA05745323DD2374411BCB8CEC9EC086B4FE150* L_14;
			L_14 = TaskAwaiter_1_GetResult_m5F5B61E5E8007E22BF56CC4D63AB61FE9584FDD9((&V_4), TaskAwaiter_1_GetResult_m5F5B61E5E8007E22BF56CC4D63AB61FE9584FDD9_RuntimeMethod_var);
			V_3 = L_14;
			// if (response.identifier == Consent.None)
			GeoIPResponse_tADA05745323DD2374411BCB8CEC9EC086B4FE150* L_15 = V_3;
			NullCheck(L_15);
			String_t* L_16 = L_15->___identifier_0;
			String_t* L_17;
			L_17 = Consent_get_None_mCF717F55F4841DEC3ABBFA5C81EECCE8E61B3E3A(NULL);
			bool L_18;
			L_18 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_16, L_17, NULL);
			if (!L_18)
			{
				goto IL_008f_1;
			}
		}
		{
			// return new List<string>();
			List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_19 = (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)il2cpp_codegen_object_new(List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
			NullCheck(L_19);
			List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E(L_19, List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
			V_2 = L_19;
			goto IL_00e6;
		}

IL_008f_1:
		{
			// if (m_ConsentTracker.IsConsentDenied())
			AnalyticsServiceInstance_t85C6639220B0EFF1CB3C517E36C6B55385A56A62* L_20 = V_1;
			NullCheck(L_20);
			RuntimeObject* L_21 = L_20->___m_ConsentTracker_7;
			NullCheck(L_21);
			bool L_22;
			L_22 = InterfaceFuncInvoker0< bool >::Invoke(6 /* System.Boolean Unity.Services.Analytics.Internal.IConsentTracker::IsConsentDenied() */, IConsentTracker_t93AFBEAEA2AE9AC2A012EEBFA4344E527FD92550_il2cpp_TypeInfo_var, L_21);
			if (!L_22)
			{
				goto IL_00a4_1;
			}
		}
		{
			// return new List<string>();
			List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_23 = (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)il2cpp_codegen_object_new(List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
			NullCheck(L_23);
			List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E(L_23, List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
			V_2 = L_23;
			goto IL_00e6;
		}

IL_00a4_1:
		{
			// if (!m_ConsentTracker.IsConsentGiven())
			AnalyticsServiceInstance_t85C6639220B0EFF1CB3C517E36C6B55385A56A62* L_24 = V_1;
			NullCheck(L_24);
			RuntimeObject* L_25 = L_24->___m_ConsentTracker_7;
			NullCheck(L_25);
			bool L_26;
			L_26 = InterfaceFuncInvoker0< bool >::Invoke(5 /* System.Boolean Unity.Services.Analytics.Internal.IConsentTracker::IsConsentGiven() */, IConsentTracker_t93AFBEAEA2AE9AC2A012EEBFA4344E527FD92550_il2cpp_TypeInfo_var, L_25);
			if (L_26)
			{
				goto IL_00c5_1;
			}
		}
		{
			// return new List<string> { response.identifier };
			List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_27 = (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)il2cpp_codegen_object_new(List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
			NullCheck(L_27);
			List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E(L_27, List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
			List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_28 = L_27;
			GeoIPResponse_tADA05745323DD2374411BCB8CEC9EC086B4FE150* L_29 = V_3;
			NullCheck(L_29);
			String_t* L_30 = L_29->___identifier_0;
			NullCheck(L_28);
			List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_28, L_30, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
			V_2 = L_28;
			goto IL_00e6;
		}

IL_00c5_1:
		{
			// return new List<string>();
			List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_31 = (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)il2cpp_codegen_object_new(List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
			NullCheck(L_31);
			List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E(L_31, List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
			V_2 = L_31;
			goto IL_00e6;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00cd;
		}
		throw e;
	}

CATCH_00cd:
	{// begin catch(System.Exception)
		V_5 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncTaskMethodBuilder_1_t6C6A8B677F9E92A76A93C9D97B66849EBECA0FE6* L_32 = (&__this->___U3CU3Et__builder_1);
		Exception_t* L_33 = V_5;
		AsyncTaskMethodBuilder_1_SetException_m3C0DF6E71062B64D6663C0D271D6F47044CB6412(L_32, L_33, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncTaskMethodBuilder_1_SetException_m3C0DF6E71062B64D6663C0D271D6F47044CB6412_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00fa;
	}// end catch (depth: 1)

IL_00e6:
	{
		// }
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncTaskMethodBuilder_1_t6C6A8B677F9E92A76A93C9D97B66849EBECA0FE6* L_34 = (&__this->___U3CU3Et__builder_1);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_35 = V_2;
		AsyncTaskMethodBuilder_1_SetResult_m412D9588DF5481C6FAD7D151C1E8D670763DA122(L_34, L_35, AsyncTaskMethodBuilder_1_SetResult_m412D9588DF5481C6FAD7D151C1E8D670763DA122_RuntimeMethod_var);
	}

IL_00fa:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CCheckForRequiredConsentsU3Ed__0_MoveNext_m8D23A3DB2A5EE356DA8F790B36970CD795F880CA_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3CCheckForRequiredConsentsU3Ed__0_tE4974F41B1F427E322B867A158105241B1665396* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CCheckForRequiredConsentsU3Ed__0_tE4974F41B1F427E322B867A158105241B1665396*>(__this + _offset);
	U3CCheckForRequiredConsentsU3Ed__0_MoveNext_m8D23A3DB2A5EE356DA8F790B36970CD795F880CA(_thisAdjusted, method);
}
// System.Void Unity.Services.Analytics.AnalyticsServiceInstance/<CheckForRequiredConsents>d__0::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCheckForRequiredConsentsU3Ed__0_SetStateMachine_mA4A58AF9F9DFEE9A66D83A1725A54E3D679AA691 (U3CCheckForRequiredConsentsU3Ed__0_tE4974F41B1F427E322B867A158105241B1665396* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetStateMachine_m3B1513481F77CBDA84ABA2A5FD4977223A1EC1D7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		AsyncTaskMethodBuilder_1_t6C6A8B677F9E92A76A93C9D97B66849EBECA0FE6* L_0 = (&__this->___U3CU3Et__builder_1);
		RuntimeObject* L_1 = ___0_stateMachine;
		AsyncTaskMethodBuilder_1_SetStateMachine_m3B1513481F77CBDA84ABA2A5FD4977223A1EC1D7(L_0, L_1, AsyncTaskMethodBuilder_1_SetStateMachine_m3B1513481F77CBDA84ABA2A5FD4977223A1EC1D7_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CCheckForRequiredConsentsU3Ed__0_SetStateMachine_mA4A58AF9F9DFEE9A66D83A1725A54E3D679AA691_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method)
{
	U3CCheckForRequiredConsentsU3Ed__0_tE4974F41B1F427E322B867A158105241B1665396* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CCheckForRequiredConsentsU3Ed__0_tE4974F41B1F427E322B867A158105241B1665396*>(__this + _offset);
	U3CCheckForRequiredConsentsU3Ed__0_SetStateMachine_mA4A58AF9F9DFEE9A66D83A1725A54E3D679AA691(_thisAdjusted, ___0_stateMachine, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Unity.Services.Analytics.AnalyticsServiceInstance/<Initialize>d__39::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CInitializeU3Ed__39_MoveNext_mC4F8EACDBA0633ED0AF8005B43498A5AE6C90446 (U3CInitializeU3Ed__39_t5D5A95D5CBED3E92245840C7F3C11846EAC2478B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CInitializeU3Ed__39_t5D5A95D5CBED3E92245840C7F3C11846EAC2478B_mE3FFEC839EA7297A022E33BA57E32FCF9467CF8A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	AnalyticsServiceInstance_t85C6639220B0EFF1CB3C517E36C6B55385A56A62* V_1 = NULL;
	TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Exception_t* V_3 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		AnalyticsServiceInstance_t85C6639220B0EFF1CB3C517E36C6B55385A56A62* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_0053_1;
			}
		}
		{
			// if (ServiceEnabled)
			AnalyticsServiceInstance_t85C6639220B0EFF1CB3C517E36C6B55385A56A62* L_3 = V_1;
			NullCheck(L_3);
			bool L_4;
			L_4 = AnalyticsServiceInstance_get_ServiceEnabled_mF044EA299C12FF5CA7E6445A84BE251651365BF2_inline(L_3, NULL);
			if (!L_4)
			{
				goto IL_007c_1;
			}
		}
		{
			// AnalyticsContainer.Initialize();
			AnalyticsContainer_Initialize_m9246BB4ED27EDE4B07E959047A92806CD3DC4C78(NULL);
			// await InitializeUser();
			AnalyticsServiceInstance_t85C6639220B0EFF1CB3C517E36C6B55385A56A62* L_5 = V_1;
			NullCheck(L_5);
			Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_6;
			L_6 = AnalyticsServiceInstance_InitializeUser_mC342B361F574226BBDF056F148FAE52B90E98CFA(L_5, NULL);
			NullCheck(L_6);
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_7;
			L_7 = Task_GetAwaiter_m08B368EAC939DD35D0AC428180822255A442CA29(L_6, NULL);
			V_2 = L_7;
			bool L_8;
			L_8 = TaskAwaiter_get_IsCompleted_mC236D276FBE3A271B56EE13FCAF2C96E48453ED8((&V_2), NULL);
			if (L_8)
			{
				goto IL_006f_1;
			}
		}
		{
			int32_t L_9 = 0;
			V_0 = L_9;
			__this->___U3CU3E1__state_0 = L_9;
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_10 = V_2;
			__this->___U3CU3Eu__1_3 = L_10;
			Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__1_3))->___m_task_0), (void*)NULL);
			AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_11 = (&__this->___U3CU3Et__builder_1);
			AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CInitializeU3Ed__39_t5D5A95D5CBED3E92245840C7F3C11846EAC2478B_mE3FFEC839EA7297A022E33BA57E32FCF9467CF8A(L_11, (&V_2), __this, AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CInitializeU3Ed__39_t5D5A95D5CBED3E92245840C7F3C11846EAC2478B_mE3FFEC839EA7297A022E33BA57E32FCF9467CF8A_RuntimeMethod_var);
			goto IL_00a8;
		}

IL_0053_1:
		{
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_12 = __this->___U3CU3Eu__1_3;
			V_2 = L_12;
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* L_13 = (&__this->___U3CU3Eu__1_3);
			il2cpp_codegen_initobj(L_13, sizeof(TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833));
			int32_t L_14 = (-1);
			V_0 = L_14;
			__this->___U3CU3E1__state_0 = L_14;
		}

IL_006f_1:
		{
			TaskAwaiter_GetResult_mC1D712500AE49B4A89C85D6B79D87D1BA9A6B94D((&V_2), NULL);
			// RecordStartupEvents();
			AnalyticsServiceInstance_t85C6639220B0EFF1CB3C517E36C6B55385A56A62* L_15 = V_1;
			NullCheck(L_15);
			AnalyticsServiceInstance_RecordStartupEvents_m91416206794DFA73F248FA6763A439FB455AF627(L_15, NULL);
		}

IL_007c_1:
		{
			goto IL_0095;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_007e;
		}
		throw e;
	}

CATCH_007e:
	{// begin catch(System.Exception)
		V_3 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_16 = (&__this->___U3CU3Et__builder_1);
		Exception_t* L_17 = V_3;
		AsyncTaskMethodBuilder_SetException_mBE41863F0571E0177A15731294087DE45E1FC10B(L_16, L_17, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00a8;
	}// end catch (depth: 1)

IL_0095:
	{
		// }
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_18 = (&__this->___U3CU3Et__builder_1);
		AsyncTaskMethodBuilder_SetResult_m76D8B84F0068257C1823B1200B00E58E0C8DDDDE(L_18, NULL);
	}

IL_00a8:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CInitializeU3Ed__39_MoveNext_mC4F8EACDBA0633ED0AF8005B43498A5AE6C90446_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3CInitializeU3Ed__39_t5D5A95D5CBED3E92245840C7F3C11846EAC2478B* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CInitializeU3Ed__39_t5D5A95D5CBED3E92245840C7F3C11846EAC2478B*>(__this + _offset);
	U3CInitializeU3Ed__39_MoveNext_mC4F8EACDBA0633ED0AF8005B43498A5AE6C90446(_thisAdjusted, method);
}
// System.Void Unity.Services.Analytics.AnalyticsServiceInstance/<Initialize>d__39::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CInitializeU3Ed__39_SetStateMachine_mBF38BCA5540974E57D28BAD5973209D4A7A17827 (U3CInitializeU3Ed__39_t5D5A95D5CBED3E92245840C7F3C11846EAC2478B* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
{
	{
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_0 = (&__this->___U3CU3Et__builder_1);
		RuntimeObject* L_1 = ___0_stateMachine;
		AsyncTaskMethodBuilder_SetStateMachine_mE52B5B6B076025592A7AB462E3D26FA434AEB795(L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CInitializeU3Ed__39_SetStateMachine_mBF38BCA5540974E57D28BAD5973209D4A7A17827_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method)
{
	U3CInitializeU3Ed__39_t5D5A95D5CBED3E92245840C7F3C11846EAC2478B* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CInitializeU3Ed__39_t5D5A95D5CBED3E92245840C7F3C11846EAC2478B*>(__this + _offset);
	U3CInitializeU3Ed__39_SetStateMachine_mBF38BCA5540974E57D28BAD5973209D4A7A17827(_thisAdjusted, ___0_stateMachine, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Unity.Services.Analytics.AnalyticsServiceInstance/<InitializeUser>d__40::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CInitializeUserU3Ed__40_MoveNext_m5D8F6B17E277D12C5BA6670DB99D78F34D7309CB (U3CInitializeUserU3Ed__40_t944DAAD25172C37C6956CB1307FF90D9020B1CE2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t67679171BEFE85C38666397015D627C6E3E7D886_TisU3CInitializeUserU3Ed__40_t944DAAD25172C37C6956CB1307FF90D9020B1CE2_mEA2F97BEF0690A56141E2173FBC197CDCED0D8B6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IConsentTracker_t93AFBEAEA2AE9AC2A012EEBFA4344E527FD92550_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_GetResult_m5F5B61E5E8007E22BF56CC4D63AB61FE9584FDD9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_get_IsCompleted_mD7F9B812B03F8973495724BC92A2F4AAC37E0179_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_GetAwaiter_mCB01C4C331E45364EDA04B3FDB90705CA93004E7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	AnalyticsServiceInstance_t85C6639220B0EFF1CB3C517E36C6B55385A56A62* V_1 = NULL;
	TaskAwaiter_1_t67679171BEFE85C38666397015D627C6E3E7D886 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Exception_t* V_3 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		AnalyticsServiceInstance_t85C6639220B0EFF1CB3C517E36C6B55385A56A62* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_0017_1;
			}
		}
		{
			// SetVariableCommonParams();
			AnalyticsServiceInstance_t85C6639220B0EFF1CB3C517E36C6B55385A56A62* L_3 = V_1;
			NullCheck(L_3);
			AnalyticsServiceInstance_SetVariableCommonParams_mAE82C6CB3D7D7DCC5337FB51A360457D5EB7844C(L_3, NULL);
		}

IL_0017_1:
		{
		}
		try
		{// begin try (depth: 2)
			{
				int32_t L_4 = V_0;
				if (!L_4)
				{
					goto IL_0058_2;
				}
			}
			{
				// await m_ConsentTracker.CheckGeoIP();
				AnalyticsServiceInstance_t85C6639220B0EFF1CB3C517E36C6B55385A56A62* L_5 = V_1;
				NullCheck(L_5);
				RuntimeObject* L_6 = L_5->___m_ConsentTracker_7;
				NullCheck(L_6);
				Task_1_t3F0E026C38791877CBE0DEC23CD10E9103FBA9B2* L_7;
				L_7 = InterfaceFuncInvoker0< Task_1_t3F0E026C38791877CBE0DEC23CD10E9103FBA9B2* >::Invoke(0 /* System.Threading.Tasks.Task`1<Unity.Services.Analytics.Internal.GeoIPResponse> Unity.Services.Analytics.Internal.IConsentTracker::CheckGeoIP() */, IConsentTracker_t93AFBEAEA2AE9AC2A012EEBFA4344E527FD92550_il2cpp_TypeInfo_var, L_6);
				NullCheck(L_7);
				TaskAwaiter_1_t67679171BEFE85C38666397015D627C6E3E7D886 L_8;
				L_8 = Task_1_GetAwaiter_mCB01C4C331E45364EDA04B3FDB90705CA93004E7(L_7, Task_1_GetAwaiter_mCB01C4C331E45364EDA04B3FDB90705CA93004E7_RuntimeMethod_var);
				V_2 = L_8;
				bool L_9;
				L_9 = TaskAwaiter_1_get_IsCompleted_mD7F9B812B03F8973495724BC92A2F4AAC37E0179((&V_2), TaskAwaiter_1_get_IsCompleted_mD7F9B812B03F8973495724BC92A2F4AAC37E0179_RuntimeMethod_var);
				if (L_9)
				{
					goto IL_0074_2;
				}
			}
			{
				int32_t L_10 = 0;
				V_0 = L_10;
				__this->___U3CU3E1__state_0 = L_10;
				TaskAwaiter_1_t67679171BEFE85C38666397015D627C6E3E7D886 L_11 = V_2;
				__this->___U3CU3Eu__1_3 = L_11;
				Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__1_3))->___m_task_0), (void*)NULL);
				AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_12 = (&__this->___U3CU3Et__builder_1);
				AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t67679171BEFE85C38666397015D627C6E3E7D886_TisU3CInitializeUserU3Ed__40_t944DAAD25172C37C6956CB1307FF90D9020B1CE2_mEA2F97BEF0690A56141E2173FBC197CDCED0D8B6(L_12, (&V_2), __this, AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t67679171BEFE85C38666397015D627C6E3E7D886_TisU3CInitializeUserU3Ed__40_t944DAAD25172C37C6956CB1307FF90D9020B1CE2_mEA2F97BEF0690A56141E2173FBC197CDCED0D8B6_RuntimeMethod_var);
				goto IL_00da;
			}

IL_0058_2:
			{
				TaskAwaiter_1_t67679171BEFE85C38666397015D627C6E3E7D886 L_13 = __this->___U3CU3Eu__1_3;
				V_2 = L_13;
				TaskAwaiter_1_t67679171BEFE85C38666397015D627C6E3E7D886* L_14 = (&__this->___U3CU3Eu__1_3);
				il2cpp_codegen_initobj(L_14, sizeof(TaskAwaiter_1_t67679171BEFE85C38666397015D627C6E3E7D886));
				int32_t L_15 = (-1);
				V_0 = L_15;
				__this->___U3CU3E1__state_0 = L_15;
			}

IL_0074_2:
			{
				GeoIPResponse_tADA05745323DD2374411BCB8CEC9EC086B4FE150* L_16;
				L_16 = TaskAwaiter_1_GetResult_m5F5B61E5E8007E22BF56CC4D63AB61FE9584FDD9((&V_2), TaskAwaiter_1_GetResult_m5F5B61E5E8007E22BF56CC4D63AB61FE9584FDD9_RuntimeMethod_var);
				// if (m_ConsentTracker.IsGeoIpChecked() && (m_ConsentTracker.IsConsentDenied() || m_ConsentTracker.IsOptingOutInProgress()))
				AnalyticsServiceInstance_t85C6639220B0EFF1CB3C517E36C6B55385A56A62* L_17 = V_1;
				NullCheck(L_17);
				RuntimeObject* L_18 = L_17->___m_ConsentTracker_7;
				NullCheck(L_18);
				bool L_19;
				L_19 = InterfaceFuncInvoker0< bool >::Invoke(4 /* System.Boolean Unity.Services.Analytics.Internal.IConsentTracker::IsGeoIpChecked() */, IConsentTracker_t93AFBEAEA2AE9AC2A012EEBFA4344E527FD92550_il2cpp_TypeInfo_var, L_18);
				if (!L_19)
				{
					goto IL_00a9_2;
				}
			}
			{
				AnalyticsServiceInstance_t85C6639220B0EFF1CB3C517E36C6B55385A56A62* L_20 = V_1;
				NullCheck(L_20);
				RuntimeObject* L_21 = L_20->___m_ConsentTracker_7;
				NullCheck(L_21);
				bool L_22;
				L_22 = InterfaceFuncInvoker0< bool >::Invoke(6 /* System.Boolean Unity.Services.Analytics.Internal.IConsentTracker::IsConsentDenied() */, IConsentTracker_t93AFBEAEA2AE9AC2A012EEBFA4344E527FD92550_il2cpp_TypeInfo_var, L_21);
				if (L_22)
				{
					goto IL_00a3_2;
				}
			}
			{
				AnalyticsServiceInstance_t85C6639220B0EFF1CB3C517E36C6B55385A56A62* L_23 = V_1;
				NullCheck(L_23);
				RuntimeObject* L_24 = L_23->___m_ConsentTracker_7;
				NullCheck(L_24);
				bool L_25;
				L_25 = InterfaceFuncInvoker0< bool >::Invoke(7 /* System.Boolean Unity.Services.Analytics.Internal.IConsentTracker::IsOptingOutInProgress() */, IConsentTracker_t93AFBEAEA2AE9AC2A012EEBFA4344E527FD92550_il2cpp_TypeInfo_var, L_24);
				if (!L_25)
				{
					goto IL_00a9_2;
				}
			}

IL_00a3_2:
			{
				// OptOut();
				AnalyticsServiceInstance_t85C6639220B0EFF1CB3C517E36C6B55385A56A62* L_26 = V_1;
				NullCheck(L_26);
				AnalyticsServiceInstance_OptOut_mE80E70FBB35370154B02B32ADCED5B0EAA77B632(L_26, NULL);
			}

IL_00a9_2:
			{
				// }
				goto IL_00ae_1;
			}
		}// end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ConsentCheckException_t96E7054ECB013548EA92EEFFFACAB143D5A86B7D_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_00ab_1;
			}
			throw e;
		}

CATCH_00ab_1:
		{// begin catch(Unity.Services.Analytics.ConsentCheckException)
			// catch (ConsentCheckException)
			// }
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_00ae_1;
		}// end catch (depth: 2)

IL_00ae_1:
		{
			goto IL_00c7;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00b0;
		}
		throw e;
	}

CATCH_00b0:
	{// begin catch(System.Exception)
		V_3 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_27 = (&__this->___U3CU3Et__builder_1);
		Exception_t* L_28 = V_3;
		AsyncTaskMethodBuilder_SetException_mBE41863F0571E0177A15731294087DE45E1FC10B(L_27, L_28, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00da;
	}// end catch (depth: 1)

IL_00c7:
	{
		// }
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_29 = (&__this->___U3CU3Et__builder_1);
		AsyncTaskMethodBuilder_SetResult_m76D8B84F0068257C1823B1200B00E58E0C8DDDDE(L_29, NULL);
	}

IL_00da:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CInitializeUserU3Ed__40_MoveNext_m5D8F6B17E277D12C5BA6670DB99D78F34D7309CB_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3CInitializeUserU3Ed__40_t944DAAD25172C37C6956CB1307FF90D9020B1CE2* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CInitializeUserU3Ed__40_t944DAAD25172C37C6956CB1307FF90D9020B1CE2*>(__this + _offset);
	U3CInitializeUserU3Ed__40_MoveNext_m5D8F6B17E277D12C5BA6670DB99D78F34D7309CB(_thisAdjusted, method);
}
// System.Void Unity.Services.Analytics.AnalyticsServiceInstance/<InitializeUser>d__40::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CInitializeUserU3Ed__40_SetStateMachine_m098E4C0674CF368A59305F6BE863D982E78DD5EA (U3CInitializeUserU3Ed__40_t944DAAD25172C37C6956CB1307FF90D9020B1CE2* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
{
	{
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_0 = (&__this->___U3CU3Et__builder_1);
		RuntimeObject* L_1 = ___0_stateMachine;
		AsyncTaskMethodBuilder_SetStateMachine_mE52B5B6B076025592A7AB462E3D26FA434AEB795(L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CInitializeUserU3Ed__40_SetStateMachine_m098E4C0674CF368A59305F6BE863D982E78DD5EA_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method)
{
	U3CInitializeUserU3Ed__40_t944DAAD25172C37C6956CB1307FF90D9020B1CE2* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CInitializeUserU3Ed__40_t944DAAD25172C37C6956CB1307FF90D9020B1CE2*>(__this + _offset);
	U3CInitializeUserU3Ed__40_SetStateMachine_m098E4C0674CF368A59305F6BE863D982E78DD5EA(_thisAdjusted, ___0_stateMachine, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.DateTime Unity.Services.Analytics.AnalyticsServiceSystemCalls::get_UtcNow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D AnalyticsServiceSystemCalls_get_UtcNow_m2E57E69EE63CCEA016E8AB2AE4691CE106C59D7C (AnalyticsServiceSystemCalls_tA75EFB9A19C30CBFEABF5BF0578E1636083AC745* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return DateTime.UtcNow; }
		il2cpp_codegen_runtime_class_init_inline(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_0;
		L_0 = DateTime_get_UtcNow_m06B6E9995FE16846A0F71EC9DB23E90BE2C5F9FA(NULL);
		return L_0;
	}
}
// System.Void Unity.Services.Analytics.AnalyticsServiceSystemCalls::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnalyticsServiceSystemCalls__ctor_m0CE98AA41596DAEC3FE38B2657205368207C45D0 (AnalyticsServiceSystemCalls_tA75EFB9A19C30CBFEABF5BF0578E1636083AC745* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Unity.Services.Analytics.TransactionCurrencyConverter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransactionCurrencyConverter__ctor_m5ACA84E75A13698EAF50E70DF0FA9FA1EC7DBFFD (TransactionCurrencyConverter_t3296A312BAFE7A8FC56182C3D53BEFD1D9474133* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Unity.Services.Core.Device.Internal.IInstallationId Unity.Services.Analytics.InternalNewPlayerHelper::get_InstallId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* InternalNewPlayerHelper_get_InstallId_m5AE652EBA796A51898603A7D4537B157226042D4 (InternalNewPlayerHelper_t0DA93D548680A3333E7C9D3839AB8BF071B3A476* __this, const RuntimeMethod* method) 
{
	{
		// internal IInstallationId InstallId { get; }
		RuntimeObject* L_0 = __this->___U3CInstallIdU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void Unity.Services.Analytics.InternalNewPlayerHelper::.ctor(Unity.Services.Core.Device.Internal.IInstallationId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalNewPlayerHelper__ctor_m1EF18BB2B52AFA4EC9CDBC69196E406BA05F2A0F (InternalNewPlayerHelper_t0DA93D548680A3333E7C9D3839AB8BF071B3A476* __this, RuntimeObject* ___0_installId, const RuntimeMethod* method) 
{
	RuntimeObject* G_B2_0 = NULL;
	InternalNewPlayerHelper_t0DA93D548680A3333E7C9D3839AB8BF071B3A476* G_B2_1 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	InternalNewPlayerHelper_t0DA93D548680A3333E7C9D3839AB8BF071B3A476* G_B1_1 = NULL;
	{
		// internal InternalNewPlayerHelper(IInstallationId installId)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// InstallId = installId ?? throw new ArgumentNullException("Did not get IInstallationId provider from Unity Services Core.");
		RuntimeObject* L_0 = ___0_installId;
		RuntimeObject* L_1 = L_0;
		G_B1_0 = L_1;
		G_B1_1 = __this;
		if (L_1)
		{
			G_B2_0 = L_1;
			G_B2_1 = __this;
			goto IL_0017;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_2 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBEF2B1FF4DF1F5D8159AD1DCED1FD87D644A5221)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InternalNewPlayerHelper__ctor_m1EF18BB2B52AFA4EC9CDBC69196E406BA05F2A0F_RuntimeMethod_var)));
	}

IL_0017:
	{
		NullCheck(G_B2_1);
		G_B2_1->___U3CInstallIdU3Ek__BackingField_0 = G_B2_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B2_1->___U3CInstallIdU3Ek__BackingField_0), (void*)G_B2_0);
		// }
		return;
	}
}
// System.Boolean Unity.Services.Analytics.InternalNewPlayerHelper::IsNewPlayer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InternalNewPlayerHelper_IsNewPlayer_mE11DEC8005D24F3B42924870C1D64FFEE878916A (InternalNewPlayerHelper_t0DA93D548680A3333E7C9D3839AB8BF071B3A476* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IInstallationId_tCE6DEEEBAFABEB9EC621BD1646D82BC9D82BFB0C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	{
		// var coreIdentifier = InstallId.GetOrCreateIdentifier();
		RuntimeObject* L_0;
		L_0 = InternalNewPlayerHelper_get_InstallId_m5AE652EBA796A51898603A7D4537B157226042D4_inline(__this, NULL);
		NullCheck(L_0);
		String_t* L_1;
		L_1 = InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String Unity.Services.Core.Device.Internal.IInstallationId::GetOrCreateIdentifier() */, IInstallationId_tCE6DEEEBAFABEB9EC621BD1646D82BC9D82BFB0C_il2cpp_TypeInfo_var, L_0);
		V_0 = L_1;
		// var analyticsIdentifier = ReadAnalyticsIdentifier();
		String_t* L_2;
		L_2 = InternalNewPlayerHelper_ReadAnalyticsIdentifier_m63998B3010974B15E5F13619BBDE43204E93F264(__this, NULL);
		V_1 = L_2;
		// if (String.IsNullOrEmpty(analyticsIdentifier) || analyticsIdentifier != coreIdentifier)
		String_t* L_3 = V_1;
		bool L_4;
		L_4 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_3, NULL);
		if (L_4)
		{
			goto IL_0024;
		}
	}
	{
		String_t* L_5 = V_1;
		String_t* L_6 = V_0;
		bool L_7;
		L_7 = String_op_Inequality_m8C940F3CFC42866709D7CA931B3D77B4BE94BCB6(L_5, L_6, NULL);
		if (!L_7)
		{
			goto IL_002d;
		}
	}

IL_0024:
	{
		// WriteAnalyticsIdentifierToFile(coreIdentifier);
		String_t* L_8 = V_0;
		InternalNewPlayerHelper_WriteAnalyticsIdentifierToFile_m791AE057AAC5C8B6D431F7F66605C0C7DD6A7B51(__this, L_8, NULL);
		// return true;
		return (bool)1;
	}

IL_002d:
	{
		// return false;
		return (bool)0;
	}
}
// System.String Unity.Services.Analytics.InternalNewPlayerHelper::ReadAnalyticsIdentifier()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* InternalNewPlayerHelper_ReadAnalyticsIdentifier_m63998B3010974B15E5F13619BBDE43204E93F264 (InternalNewPlayerHelper_t0DA93D548680A3333E7C9D3839AB8BF071B3A476* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB457254733CD5BB62A9549F9D7A04E54C28936CD);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return PlayerPrefs.GetString(k_UnityAnalyticsInstallationIdKey);
		String_t* L_0;
		L_0 = PlayerPrefs_GetString_mA4C9F842BF77E5572AB20EA087C7048F870D02AE(_stringLiteralB457254733CD5BB62A9549F9D7A04E54C28936CD, NULL);
		return L_0;
	}
}
// System.Void Unity.Services.Analytics.InternalNewPlayerHelper::WriteAnalyticsIdentifierToFile(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalNewPlayerHelper_WriteAnalyticsIdentifierToFile_m791AE057AAC5C8B6D431F7F66605C0C7DD6A7B51 (InternalNewPlayerHelper_t0DA93D548680A3333E7C9D3839AB8BF071B3A476* __this, String_t* ___0_identifier, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB457254733CD5BB62A9549F9D7A04E54C28936CD);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PlayerPrefs.SetString(k_UnityAnalyticsInstallationIdKey, identifier);
		String_t* L_0 = ___0_identifier;
		PlayerPrefs_SetString_mF4F457C81BB75F0213547C6287BA36E15E1F0256(_stringLiteralB457254733CD5BB62A9549F9D7A04E54C28936CD, L_0, NULL);
		// PlayerPrefs.Save();
		PlayerPrefs_Save_m82567E045D69C838112EA204B60C144D4C1EA3AE(NULL);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Unity.Services.Analytics.AnalyticsContainer Unity.Services.Analytics.AnalyticsContainer::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AnalyticsContainer_t80827118296A7273882EB5BAE9AC5207F90BBBE1* AnalyticsContainer_get_Instance_m4C13EB040860BA9F5FDE93883C4ED596EF8A66CE (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnalyticsContainer_t80827118296A7273882EB5BAE9AC5207F90BBBE1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// internal static AnalyticsContainer Instance { get; private set; }
		AnalyticsContainer_t80827118296A7273882EB5BAE9AC5207F90BBBE1* L_0 = ((AnalyticsContainer_t80827118296A7273882EB5BAE9AC5207F90BBBE1_StaticFields*)il2cpp_codegen_static_fields_for(AnalyticsContainer_t80827118296A7273882EB5BAE9AC5207F90BBBE1_il2cpp_TypeInfo_var))->___U3CInstanceU3Ek__BackingField_10;
		return L_0;
	}
}
// System.Void Unity.Services.Analytics.AnalyticsContainer::set_Instance(Unity.Services.Analytics.AnalyticsContainer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnalyticsContainer_set_Instance_m76BCB44E3E710A6310D09A7C26BE302074C9C776 (AnalyticsContainer_t80827118296A7273882EB5BAE9AC5207F90BBBE1* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnalyticsContainer_t80827118296A7273882EB5BAE9AC5207F90BBBE1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// internal static AnalyticsContainer Instance { get; private set; }
		AnalyticsContainer_t80827118296A7273882EB5BAE9AC5207F90BBBE1* L_0 = ___0_value;
		((AnalyticsContainer_t80827118296A7273882EB5BAE9AC5207F90BBBE1_StaticFields*)il2cpp_codegen_static_fields_for(AnalyticsContainer_t80827118296A7273882EB5BAE9AC5207F90BBBE1_il2cpp_TypeInfo_var))->___U3CInstanceU3Ek__BackingField_10 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((AnalyticsContainer_t80827118296A7273882EB5BAE9AC5207F90BBBE1_StaticFields*)il2cpp_codegen_static_fields_for(AnalyticsContainer_t80827118296A7273882EB5BAE9AC5207F90BBBE1_il2cpp_TypeInfo_var))->___U3CInstanceU3Ek__BackingField_10), (void*)L_0);
		return;
	}
}
// System.Single Unity.Services.Analytics.AnalyticsContainer::get_TimeUntilHeartbeat()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AnalyticsContainer_get_TimeUntilHeartbeat_m4C6BCF4F210E2F00553BEEC0F4AC8F1756FB9371 (AnalyticsContainer_t80827118296A7273882EB5BAE9AC5207F90BBBE1* __this, const RuntimeMethod* method) 
{
	{
		// internal float TimeUntilHeartbeat => k_HeartbeatPeriod - m_HeartbeatTime;
		float L_0 = __this->___m_HeartbeatTime_8;
		return ((float)il2cpp_codegen_subtract((60.0f), L_0));
	}
}
// System.Void Unity.Services.Analytics.AnalyticsContainer::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnalyticsContainer_Initialize_m9246BB4ED27EDE4B07E959047A92806CD3DC4C78 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnalyticsContainer_t80827118296A7273882EB5BAE9AC5207F90BBBE1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisAnalyticsContainer_t80827118296A7273882EB5BAE9AC5207F90BBBE1_mE4F8B8275039940AFB099EE841C9060ACCFF2A11_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD80A64E0036F8330EADC3705DD59CC6581FE8E99);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!s_Created)
		bool L_0 = ((AnalyticsContainer_t80827118296A7273882EB5BAE9AC5207F90BBBE1_StaticFields*)il2cpp_codegen_static_fields_for(AnalyticsContainer_t80827118296A7273882EB5BAE9AC5207F90BBBE1_il2cpp_TypeInfo_var))->___s_Created_6;
		if (L_0)
		{
			goto IL_0053;
		}
	}
	{
		// s_Container = new GameObject("AnalyticsContainer");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)il2cpp_codegen_object_new(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88(L_1, _stringLiteralD80A64E0036F8330EADC3705DD59CC6581FE8E99, NULL);
		((AnalyticsContainer_t80827118296A7273882EB5BAE9AC5207F90BBBE1_StaticFields*)il2cpp_codegen_static_fields_for(AnalyticsContainer_t80827118296A7273882EB5BAE9AC5207F90BBBE1_il2cpp_TypeInfo_var))->___s_Container_7 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((AnalyticsContainer_t80827118296A7273882EB5BAE9AC5207F90BBBE1_StaticFields*)il2cpp_codegen_static_fields_for(AnalyticsContainer_t80827118296A7273882EB5BAE9AC5207F90BBBE1_il2cpp_TypeInfo_var))->___s_Container_7), (void*)L_1);
		// Instance = s_Container.AddComponent<AnalyticsContainer>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = ((AnalyticsContainer_t80827118296A7273882EB5BAE9AC5207F90BBBE1_StaticFields*)il2cpp_codegen_static_fields_for(AnalyticsContainer_t80827118296A7273882EB5BAE9AC5207F90BBBE1_il2cpp_TypeInfo_var))->___s_Container_7;
		NullCheck(L_2);
		AnalyticsContainer_t80827118296A7273882EB5BAE9AC5207F90BBBE1* L_3;
		L_3 = GameObject_AddComponent_TisAnalyticsContainer_t80827118296A7273882EB5BAE9AC5207F90BBBE1_mE4F8B8275039940AFB099EE841C9060ACCFF2A11(L_2, GameObject_AddComponent_TisAnalyticsContainer_t80827118296A7273882EB5BAE9AC5207F90BBBE1_mE4F8B8275039940AFB099EE841C9060ACCFF2A11_RuntimeMethod_var);
		AnalyticsContainer_set_Instance_m76BCB44E3E710A6310D09A7C26BE302074C9C776_inline(L_3, NULL);
		// s_Container.hideFlags = HideFlags.DontSaveInBuild | HideFlags.NotEditable;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = ((AnalyticsContainer_t80827118296A7273882EB5BAE9AC5207F90BBBE1_StaticFields*)il2cpp_codegen_static_fields_for(AnalyticsContainer_t80827118296A7273882EB5BAE9AC5207F90BBBE1_il2cpp_TypeInfo_var))->___s_Container_7;
		NullCheck(L_4);
		Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4(L_4, ((int32_t)24), NULL);
		// s_Container.hideFlags |= HideFlags.HideInInspector;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = ((AnalyticsContainer_t80827118296A7273882EB5BAE9AC5207F90BBBE1_StaticFields*)il2cpp_codegen_static_fields_for(AnalyticsContainer_t80827118296A7273882EB5BAE9AC5207F90BBBE1_il2cpp_TypeInfo_var))->___s_Container_7;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = L_5;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = Object_get_hideFlags_mA08F5E41671B8C6B5073C6B9E2799BCE6E0DF7F3(L_6, NULL);
		NullCheck(L_6);
		Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4(L_6, ((int32_t)((int32_t)L_7|2)), NULL);
		// DontDestroyOnLoad(s_Container);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = ((AnalyticsContainer_t80827118296A7273882EB5BAE9AC5207F90BBBE1_StaticFields*)il2cpp_codegen_static_fields_for(AnalyticsContainer_t80827118296A7273882EB5BAE9AC5207F90BBBE1_il2cpp_TypeInfo_var))->___s_Container_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m4B70C3AEF886C176543D1295507B6455C9DCAEA7(L_8, NULL);
		// s_Created = true;
		((AnalyticsContainer_t80827118296A7273882EB5BAE9AC5207F90BBBE1_StaticFields*)il2cpp_codegen_static_fields_for(AnalyticsContainer_t80827118296A7273882EB5BAE9AC5207F90BBBE1_il2cpp_TypeInfo_var))->___s_Created_6 = (bool)1;
	}

IL_0053:
	{
		// }
		return;
	}
}
// System.Void Unity.Services.Analytics.AnalyticsContainer::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnalyticsContainer_Update_m077BEBF391B2FFFBA1892069B942D1C31C3038CD (AnalyticsContainer_t80827118296A7273882EB5BAE9AC5207F90BBBE1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnalyticsService_t995B7CE25709A192F70345B0335516F282C0CE7B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_GameRunningTime += Time.unscaledDeltaTime;
		float L_0 = __this->___m_GameRunningTime_9;
		float L_1;
		L_1 = Time_get_unscaledDeltaTime_mF057EECA857E5C0F90A3F910D26D3EE59F27C4B5(NULL);
		__this->___m_GameRunningTime_9 = ((float)il2cpp_codegen_add(L_0, L_1));
		// if (m_GameRunningTime >= k_GameRunningPeriod)
		float L_2 = __this->___m_GameRunningTime_9;
		if ((!(((float)L_2) >= ((float)(60.0f)))))
		{
			goto IL_0034;
		}
	}
	{
		// AnalyticsService.internalInstance.RecordGameRunningIfNecessary();
		AnalyticsServiceInstance_t85C6639220B0EFF1CB3C517E36C6B55385A56A62* L_3 = ((AnalyticsService_t995B7CE25709A192F70345B0335516F282C0CE7B_StaticFields*)il2cpp_codegen_static_fields_for(AnalyticsService_t995B7CE25709A192F70345B0335516F282C0CE7B_il2cpp_TypeInfo_var))->___internalInstance_0;
		NullCheck(L_3);
		AnalyticsServiceInstance_RecordGameRunningIfNecessary_mDC174CE67E36436A206DDC321308853A727484C3(L_3, NULL);
		// m_GameRunningTime = 0.0f;
		__this->___m_GameRunningTime_9 = (0.0f);
	}

IL_0034:
	{
		// m_HeartbeatTime += Time.unscaledDeltaTime;
		float L_4 = __this->___m_HeartbeatTime_8;
		float L_5;
		L_5 = Time_get_unscaledDeltaTime_mF057EECA857E5C0F90A3F910D26D3EE59F27C4B5(NULL);
		__this->___m_HeartbeatTime_8 = ((float)il2cpp_codegen_add(L_4, L_5));
		// if (m_HeartbeatTime >= k_HeartbeatPeriod)
		float L_6 = __this->___m_HeartbeatTime_8;
		if ((!(((float)L_6) >= ((float)(60.0f)))))
		{
			goto IL_0068;
		}
	}
	{
		// AnalyticsService.internalInstance.InternalTick();
		AnalyticsServiceInstance_t85C6639220B0EFF1CB3C517E36C6B55385A56A62* L_7 = ((AnalyticsService_t995B7CE25709A192F70345B0335516F282C0CE7B_StaticFields*)il2cpp_codegen_static_fields_for(AnalyticsService_t995B7CE25709A192F70345B0335516F282C0CE7B_il2cpp_TypeInfo_var))->___internalInstance_0;
		NullCheck(L_7);
		AnalyticsServiceInstance_InternalTick_m26C028F5A6BDF4901A7FEB9888FBC9C3E0A3710A(L_7, NULL);
		// m_HeartbeatTime = 0.0f;
		__this->___m_HeartbeatTime_8 = (0.0f);
	}

IL_0068:
	{
		// }
		return;
	}
}
// System.Void Unity.Services.Analytics.AnalyticsContainer::OnApplicationPause(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnalyticsContainer_OnApplicationPause_m0D7562975A5F9A1B1DD292A6EC115CB0E345FA8B (AnalyticsContainer_t80827118296A7273882EB5BAE9AC5207F90BBBE1* __this, bool ___0_paused, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnalyticsService_t995B7CE25709A192F70345B0335516F282C0CE7B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// AnalyticsService.internalInstance.ApplicationPaused(paused);
		AnalyticsServiceInstance_t85C6639220B0EFF1CB3C517E36C6B55385A56A62* L_0 = ((AnalyticsService_t995B7CE25709A192F70345B0335516F282C0CE7B_StaticFields*)il2cpp_codegen_static_fields_for(AnalyticsService_t995B7CE25709A192F70345B0335516F282C0CE7B_il2cpp_TypeInfo_var))->___internalInstance_0;
		bool L_1 = ___0_paused;
		NullCheck(L_0);
		AnalyticsServiceInstance_ApplicationPaused_mB64F8B2FF25B824FA074668EF917FC684828893C(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void Unity.Services.Analytics.AnalyticsContainer::DestroyContainer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnalyticsContainer_DestroyContainer_m3E5CEA90A331B91C79BFED5D1CB0FFC07BC55B27 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnalyticsContainer_t80827118296A7273882EB5BAE9AC5207F90BBBE1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Destroy(s_Container);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ((AnalyticsContainer_t80827118296A7273882EB5BAE9AC5207F90BBBE1_StaticFields*)il2cpp_codegen_static_fields_for(AnalyticsContainer_t80827118296A7273882EB5BAE9AC5207F90BBBE1_il2cpp_TypeInfo_var))->___s_Container_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_0, NULL);
		// s_Created = false;
		((AnalyticsContainer_t80827118296A7273882EB5BAE9AC5207F90BBBE1_StaticFields*)il2cpp_codegen_static_fields_for(AnalyticsContainer_t80827118296A7273882EB5BAE9AC5207F90BBBE1_il2cpp_TypeInfo_var))->___s_Created_6 = (bool)0;
		// }
		return;
	}
}
// System.Void Unity.Services.Analytics.AnalyticsContainer::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnalyticsContainer_OnDestroy_m27C97541D5D0E67B2F4FA9D110EFDD12C88866DD (AnalyticsContainer_t80827118296A7273882EB5BAE9AC5207F90BBBE1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnalyticsContainer_t80827118296A7273882EB5BAE9AC5207F90BBBE1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnalyticsService_t995B7CE25709A192F70345B0335516F282C0CE7B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// AnalyticsService.internalInstance.GameEnded();
		AnalyticsServiceInstance_t85C6639220B0EFF1CB3C517E36C6B55385A56A62* L_0 = ((AnalyticsService_t995B7CE25709A192F70345B0335516F282C0CE7B_StaticFields*)il2cpp_codegen_static_fields_for(AnalyticsService_t995B7CE25709A192F70345B0335516F282C0CE7B_il2cpp_TypeInfo_var))->___internalInstance_0;
		NullCheck(L_0);
		AnalyticsServiceInstance_GameEnded_m0C6611FE57A7E25C6F4E5BEF66545139EAB182A4(L_0, NULL);
		// s_Container = null;
		((AnalyticsContainer_t80827118296A7273882EB5BAE9AC5207F90BBBE1_StaticFields*)il2cpp_codegen_static_fields_for(AnalyticsContainer_t80827118296A7273882EB5BAE9AC5207F90BBBE1_il2cpp_TypeInfo_var))->___s_Container_7 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&((AnalyticsContainer_t80827118296A7273882EB5BAE9AC5207F90BBBE1_StaticFields*)il2cpp_codegen_static_fields_for(AnalyticsContainer_t80827118296A7273882EB5BAE9AC5207F90BBBE1_il2cpp_TypeInfo_var))->___s_Container_7), (void*)(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL);
		// s_Created = false;
		((AnalyticsContainer_t80827118296A7273882EB5BAE9AC5207F90BBBE1_StaticFields*)il2cpp_codegen_static_fields_for(AnalyticsContainer_t80827118296A7273882EB5BAE9AC5207F90BBBE1_il2cpp_TypeInfo_var))->___s_Created_6 = (bool)0;
		// }
		return;
	}
}
// System.Void Unity.Services.Analytics.AnalyticsContainer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnalyticsContainer__ctor_m181248237969AF6A721DE089E172681F92EE9A04 (AnalyticsContainer_t80827118296A7273882EB5BAE9AC5207F90BBBE1* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Unity.Services.Analytics.ConsentCheckExceptionReason Unity.Services.Analytics.ConsentCheckException::get_Reason()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ConsentCheckException_get_Reason_m9D28EC501EAD29F3D4EF76D73A63F619CE75E631 (ConsentCheckException_t96E7054ECB013548EA92EEFFFACAB143D5A86B7D* __this, const RuntimeMethod* method) 
{
	{
		// [Preserve] public ConsentCheckExceptionReason Reason { get; private set; }
		int32_t L_0 = __this->___U3CReasonU3Ek__BackingField_19;
		return L_0;
	}
}
// System.Void Unity.Services.Analytics.ConsentCheckException::set_Reason(Unity.Services.Analytics.ConsentCheckExceptionReason)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConsentCheckException_set_Reason_mB9551C34C6B6C76DAAD9DF12EFF1B0E385CEE968 (ConsentCheckException_t96E7054ECB013548EA92EEFFFACAB143D5A86B7D* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// [Preserve] public ConsentCheckExceptionReason Reason { get; private set; }
		int32_t L_0 = ___0_value;
		__this->___U3CReasonU3Ek__BackingField_19 = L_0;
		return;
	}
}
// System.Void Unity.Services.Analytics.ConsentCheckException::.ctor(Unity.Services.Analytics.ConsentCheckExceptionReason,System.Int32,System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConsentCheckException__ctor_m0F6DC7108E11524A5BBBE85F07DD082873FE95B3 (ConsentCheckException_t96E7054ECB013548EA92EEFFFACAB143D5A86B7D* __this, int32_t ___0_reason, int32_t ___1_errorCode, String_t* ___2_message, Exception_t* ___3_innerException, const RuntimeMethod* method) 
{
	{
		// : base(errorCode, message, innerException)
		int32_t L_0 = ___1_errorCode;
		String_t* L_1 = ___2_message;
		Exception_t* L_2 = ___3_innerException;
		RequestFailedException__ctor_m5F2BC9B778764EF58CA947E789CAEEAD27341C7A(__this, L_0, L_1, L_2, NULL);
		// Reason = reason;
		int32_t L_3 = ___0_reason;
		ConsentCheckException_set_Reason_mB9551C34C6B6C76DAAD9DF12EFF1B0E385CEE968_inline(__this, L_3, NULL);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Unity.Services.Analytics.CoreStatsHelper::SetCoreStatsConsent(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CoreStatsHelper_SetCoreStatsConsent_mF5D6EDE2380AF3DA289C217CD505940D76D9877E (CoreStatsHelper_tBF3F119096A7ABBDDC9F22ACBF13FA25FCD166E6* __this, bool ___0_userProvidedConsent, const RuntimeMethod* method) 
{
	{
		// UnityEngine.Analytics.UGSAnalyticsInternalTools.SetPrivacyStatus(userProvidedConsent);
		bool L_0 = ___0_userProvidedConsent;
		UGSAnalyticsInternalTools_SetPrivacyStatus_mF4F04D971EBA3A54A9AD22DC4E8D95711334516A(L_0, NULL);
		// }
		return;
	}
}
// System.Void Unity.Services.Analytics.CoreStatsHelper::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CoreStatsHelper__ctor_mD543DD28C5F258FC9B9BDD30D0192F8A7ECF9DF4 (CoreStatsHelper_tBF3F119096A7ABBDDC9F22ACBF13FA25FCD166E6* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Unity.Services.Analytics.SdkVersion::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SdkVersion__cctor_mC098F58A265DB7E8ED89F1FCE4A5FD67906B0FD7 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SdkVersion_t0BDC7D3E9F8175012EACBDB69FD9394AC2679BB8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5C05BB4EEA109136D3437B18A775C920D9DB0853);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static readonly string SDK_VERSION = "4.4.0";
		((SdkVersion_t0BDC7D3E9F8175012EACBDB69FD9394AC2679BB8_StaticFields*)il2cpp_codegen_static_fields_for(SdkVersion_t0BDC7D3E9F8175012EACBDB69FD9394AC2679BB8_il2cpp_TypeInfo_var))->___SDK_VERSION_0 = _stringLiteral5C05BB4EEA109136D3437B18A775C920D9DB0853;
		Il2CppCodeGenWriteBarrier((void**)(&((SdkVersion_t0BDC7D3E9F8175012EACBDB69FD9394AC2679BB8_StaticFields*)il2cpp_codegen_static_fields_for(SdkVersion_t0BDC7D3E9F8175012EACBDB69FD9394AC2679BB8_il2cpp_TypeInfo_var))->___SDK_VERSION_0), (void*)_stringLiteral5C05BB4EEA109136D3437B18A775C920D9DB0853);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.String Unity.Services.Analytics.Internal.Locale::CurrentLanguageCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Locale_CurrentLanguageCode_m720A4A975DCDE3417D54E73B51EA379DFC5B181E (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return CultureInfo.CurrentCulture.TwoLetterISOLanguageName;
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_0;
		L_0 = CultureInfo_get_CurrentCulture_m8A4580F49DDD7E9DB34C699965423DB8E3BBA9A5(NULL);
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtualFuncInvoker0< String_t* >::Invoke(11 /* System.String System.Globalization.CultureInfo::get_TwoLetterISOLanguageName() */, L_0);
		return L_1;
	}
}
// System.String Unity.Services.Analytics.Internal.Locale::AnalyticsRegionLanguageCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Locale_AnalyticsRegionLanguageCode_mBC2C7A14D9ED824729BF977BE5C1478B559BB45B (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral851B983F2B1071B01BAFFAADAAB570596B6B2564);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return $"{CurrentLanguageCode()}_ZZ";
		String_t* L_0;
		L_0 = Locale_CurrentLanguageCode_m720A4A975DCDE3417D54E73B51EA379DFC5B181E(NULL);
		String_t* L_1;
		L_1 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_0, _stringLiteral851B983F2B1071B01BAFFAADAAB570596B6B2564, NULL);
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Unity.Services.Analytics.Internal.AnalyticsForgetter::.ctor(Unity.Services.Analytics.Internal.IConsentTracker)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnalyticsForgetter__ctor_mDBE2B4DD936DA8DC859F9E5D7F644CD2D3CBE3B8 (AnalyticsForgetter_tA1B9D1F48FB306C80BE60C9858646BC1368948C0* __this, RuntimeObject* ___0_consentTracker, const RuntimeMethod* method) 
{
	{
		// public AnalyticsForgetter(IConsentTracker consentTracker)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// ConsentTracker = consentTracker;
		RuntimeObject* L_0 = ___0_consentTracker;
		__this->___ConsentTracker_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___ConsentTracker_5), (void*)L_0);
		// }
		return;
	}
}
// System.Void Unity.Services.Analytics.Internal.AnalyticsForgetter::AttemptToForget(System.String,System.String,System.String,System.String,System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnalyticsForgetter_AttemptToForget_m9C156E1EB4E5A2E87C12167F0BBDD42C40967508 (AnalyticsForgetter_tA1B9D1F48FB306C80BE60C9858646BC1368948C0* __this, String_t* ___0_collectUrl, String_t* ___1_userId, String_t* ___2_timestamp, String_t* ___3_callingMethod, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___4_successfulUploadCallback, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnalyticsForgetter_UploadComplete_mB2EDE69C50A9F0B30B56A4343F4000CD60C8DBCC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_GetEnumerator_m46EC45F42CA2279D83568CD3F216AAABA8E749F6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m068DDFF5CAFBB15C8A0602DEADA7F10C5BB7ADCD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mA93491D9B55547D066053F3BC0A69C635F877438_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m49070E88C2E34AB46E6292A3FB1C227576B8506E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IConsentTracker_t93AFBEAEA2AE9AC2A012EEBFA4344E527FD92550_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_m654BCCAE2F20CB11D8E8C2D2C886A0C8A13EB1C4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_m7345512A32CB4DCAA0643050B18DC8DCD71B927A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UploadHandlerRaw_t0A24CF320CDF16F1BC6C5C086DE71A1908CBB91A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral14E338D17C42E552FA7AF42CDAE40CA1F0E8A04D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1D9C903F2CFE60C87D084257D816121914ED5CD7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral294385BD410CDE2F39E14D8793B4FC3D4FAF8EB4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral577425CD87D93CE29BD73B7A610A2AA16814173F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral64058CC688A96A90239811EF06C9D20DB0499C3E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral782091A124984DB669E8C38AF8E8C05E76873F5A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB91505A7C57926DDC126B93151A049BC213BEC78);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE46475A038CE8463CC88A3C7DB6950E45EC6B178);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* V_1 = NULL;
	UploadHandlerRaw_t0A24CF320CDF16F1BC6C5C086DE71A1908CBB91A* V_2 = NULL;
	Guid_t V_3;
	memset((&V_3), 0, sizeof(V_3));
	Enumerator_t173E7BE1F35CA448C7E0EE77345C9E0EC0206562 V_4;
	memset((&V_4), 0, sizeof(V_4));
	KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A V_5;
	memset((&V_5), 0, sizeof(V_5));
	{
		// if (m_Request != null || m_SuccessfullyUploaded)
		UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C* L_0 = __this->___m_Request_4;
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		bool L_1 = __this->___m_SuccessfullyUploaded_3;
		if (!L_1)
		{
			goto IL_0011;
		}
	}

IL_0010:
	{
		// return;
		return;
	}

IL_0011:
	{
		// m_CollectUrl = collectUrl;
		String_t* L_2 = ___0_collectUrl;
		__this->___m_CollectUrl_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_CollectUrl_0), (void*)L_2);
		// m_Callback = successfulUploadCallback;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = ___4_successfulUploadCallback;
		__this->___m_Callback_2 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Callback_2), (void*)L_3);
		// var eventJson =
		//     "{\"eventList\":[{" +
		//     "\"eventName\":\"ddnaForgetMe\"," +
		//     "\"userID\":\"" + userId + "\"," +
		//     "\"eventUUID\":\"" + Guid.NewGuid().ToString() + "\"," +
		//     "\"eventTimestamp\":\"" + timestamp + "\"," +
		//     "\"eventVersion\":1," +
		//     "\"eventParams\":{" +
		//     "\"clientVersion\":\"" + Application.version + "\"," +
		//     "\"sdkMethod\":\"" + callingMethod + "\"" +
		//     "}}]}";
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)((int32_t)11));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5 = L_4;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, _stringLiteral577425CD87D93CE29BD73B7A610A2AA16814173F);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral577425CD87D93CE29BD73B7A610A2AA16814173F);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_6 = L_5;
		String_t* L_7 = ___1_userId;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_7);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_7);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_8 = L_6;
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, _stringLiteralB91505A7C57926DDC126B93151A049BC213BEC78);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteralB91505A7C57926DDC126B93151A049BC213BEC78);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_9 = L_8;
		Guid_t L_10;
		L_10 = Guid_NewGuid_m1F4894E8DC089811D6252148AD5858E58D43A7BD(NULL);
		V_3 = L_10;
		String_t* L_11;
		L_11 = Guid_ToString_m2BFFD5FA726E03FA707AAFCCF065896C46D5290C((&V_3), NULL);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_11);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_11);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_12 = L_9;
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, _stringLiteral782091A124984DB669E8C38AF8E8C05E76873F5A);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral782091A124984DB669E8C38AF8E8C05E76873F5A);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_13 = L_12;
		String_t* L_14 = ___2_timestamp;
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_14);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)L_14);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_15 = L_13;
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, _stringLiteral294385BD410CDE2F39E14D8793B4FC3D4FAF8EB4);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(6), (String_t*)_stringLiteral294385BD410CDE2F39E14D8793B4FC3D4FAF8EB4);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_16 = L_15;
		String_t* L_17;
		L_17 = Application_get_version_m9CC0E94F12493682C1A2CA803083F6F01BA43124(NULL);
		NullCheck(L_16);
		ArrayElementTypeCheck (L_16, L_17);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(7), (String_t*)L_17);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_18 = L_16;
		NullCheck(L_18);
		ArrayElementTypeCheck (L_18, _stringLiteral1D9C903F2CFE60C87D084257D816121914ED5CD7);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(8), (String_t*)_stringLiteral1D9C903F2CFE60C87D084257D816121914ED5CD7);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_19 = L_18;
		String_t* L_20 = ___3_callingMethod;
		NullCheck(L_19);
		ArrayElementTypeCheck (L_19, L_20);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (String_t*)L_20);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_21 = L_19;
		NullCheck(L_21);
		ArrayElementTypeCheck (L_21, _stringLiteralE46475A038CE8463CC88A3C7DB6950E45EC6B178);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)10)), (String_t*)_stringLiteralE46475A038CE8463CC88A3C7DB6950E45EC6B178);
		String_t* L_22;
		L_22 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_21, NULL);
		V_0 = L_22;
		// m_Event = Encoding.UTF8.GetBytes(eventJson);
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_23;
		L_23 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
		String_t* L_24 = V_0;
		NullCheck(L_23);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_25;
		L_25 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(19 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_23, L_24);
		__this->___m_Event_1 = L_25;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Event_1), (void*)L_25);
		// var request = new UnityWebRequest(m_CollectUrl, UnityWebRequest.kHttpVerbPOST);
		String_t* L_26 = __this->___m_CollectUrl_0;
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_27 = (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F*)il2cpp_codegen_object_new(UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_il2cpp_TypeInfo_var);
		NullCheck(L_27);
		UnityWebRequest__ctor_mD4739B0BF1C4937479A83B24B531C6B819712A3E(L_27, L_26, _stringLiteral14E338D17C42E552FA7AF42CDAE40CA1F0E8A04D, NULL);
		V_1 = L_27;
		// var upload = new UploadHandlerRaw(m_Event)
		// {
		//     contentType = "application/json"
		// };
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_28 = __this->___m_Event_1;
		UploadHandlerRaw_t0A24CF320CDF16F1BC6C5C086DE71A1908CBB91A* L_29 = (UploadHandlerRaw_t0A24CF320CDF16F1BC6C5C086DE71A1908CBB91A*)il2cpp_codegen_object_new(UploadHandlerRaw_t0A24CF320CDF16F1BC6C5C086DE71A1908CBB91A_il2cpp_TypeInfo_var);
		NullCheck(L_29);
		UploadHandlerRaw__ctor_m168C957B67E29CB3072E3542044D37E2F16C42B7(L_29, L_28, NULL);
		UploadHandlerRaw_t0A24CF320CDF16F1BC6C5C086DE71A1908CBB91A* L_30 = L_29;
		NullCheck(L_30);
		UploadHandler_set_contentType_mEFF2D2512996DFFF2BFC013388B702078BDC73F3(L_30, _stringLiteral64058CC688A96A90239811EF06C9D20DB0499C3E, NULL);
		V_2 = L_30;
		// request.uploadHandler = upload;
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_31 = V_1;
		UploadHandlerRaw_t0A24CF320CDF16F1BC6C5C086DE71A1908CBB91A* L_32 = V_2;
		NullCheck(L_31);
		UnityWebRequest_set_uploadHandler_m68F346550136DE178C79238944985892196027FE(L_31, L_32, NULL);
		// if (ConsentTracker.IsGeoIpChecked() && ConsentTracker.IsOptingOutInProgress())
		RuntimeObject* L_33 = __this->___ConsentTracker_5;
		NullCheck(L_33);
		bool L_34;
		L_34 = InterfaceFuncInvoker0< bool >::Invoke(4 /* System.Boolean Unity.Services.Analytics.Internal.IConsentTracker::IsGeoIpChecked() */, IConsentTracker_t93AFBEAEA2AE9AC2A012EEBFA4344E527FD92550_il2cpp_TypeInfo_var, L_33);
		if (!L_34)
		{
			goto IL_012e;
		}
	}
	{
		RuntimeObject* L_35 = __this->___ConsentTracker_5;
		NullCheck(L_35);
		bool L_36;
		L_36 = InterfaceFuncInvoker0< bool >::Invoke(7 /* System.Boolean Unity.Services.Analytics.Internal.IConsentTracker::IsOptingOutInProgress() */, IConsentTracker_t93AFBEAEA2AE9AC2A012EEBFA4344E527FD92550_il2cpp_TypeInfo_var, L_35);
		if (!L_36)
		{
			goto IL_012e;
		}
	}
	{
		// foreach (var header in ConsentTracker.requiredHeaders)
		RuntimeObject* L_37 = __this->___ConsentTracker_5;
		NullCheck(L_37);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_38;
		L_38 = InterfaceFuncInvoker0< Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* >::Invoke(1 /* System.Collections.Generic.Dictionary`2<System.String,System.String> Unity.Services.Analytics.Internal.IConsentTracker::get_requiredHeaders() */, IConsentTracker_t93AFBEAEA2AE9AC2A012EEBFA4344E527FD92550_il2cpp_TypeInfo_var, L_37);
		NullCheck(L_38);
		Enumerator_t173E7BE1F35CA448C7E0EE77345C9E0EC0206562 L_39;
		L_39 = Dictionary_2_GetEnumerator_m46EC45F42CA2279D83568CD3F216AAABA8E749F6(L_38, Dictionary_2_GetEnumerator_m46EC45F42CA2279D83568CD3F216AAABA8E749F6_RuntimeMethod_var);
		V_4 = L_39;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0120:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m068DDFF5CAFBB15C8A0602DEADA7F10C5BB7ADCD((&V_4), Enumerator_Dispose_m068DDFF5CAFBB15C8A0602DEADA7F10C5BB7ADCD_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0115_1;
			}

IL_00f8_1:
			{
				// foreach (var header in ConsentTracker.requiredHeaders)
				KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A L_40;
				L_40 = Enumerator_get_Current_m49070E88C2E34AB46E6292A3FB1C227576B8506E_inline((&V_4), Enumerator_get_Current_m49070E88C2E34AB46E6292A3FB1C227576B8506E_RuntimeMethod_var);
				V_5 = L_40;
				// request.SetRequestHeader(header.Key, header.Value);
				UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_41 = V_1;
				String_t* L_42;
				L_42 = KeyValuePair_2_get_Key_m654BCCAE2F20CB11D8E8C2D2C886A0C8A13EB1C4_inline((&V_5), KeyValuePair_2_get_Key_m654BCCAE2F20CB11D8E8C2D2C886A0C8A13EB1C4_RuntimeMethod_var);
				String_t* L_43;
				L_43 = KeyValuePair_2_get_Value_m7345512A32CB4DCAA0643050B18DC8DCD71B927A_inline((&V_5), KeyValuePair_2_get_Value_m7345512A32CB4DCAA0643050B18DC8DCD71B927A_RuntimeMethod_var);
				NullCheck(L_41);
				UnityWebRequest_SetRequestHeader_m099734EB787B7269B62AB2236A5A4F7D35AF8BC5(L_41, L_42, L_43, NULL);
			}

IL_0115_1:
			{
				// foreach (var header in ConsentTracker.requiredHeaders)
				bool L_44;
				L_44 = Enumerator_MoveNext_mA93491D9B55547D066053F3BC0A69C635F877438((&V_4), Enumerator_MoveNext_mA93491D9B55547D066053F3BC0A69C635F877438_RuntimeMethod_var);
				if (L_44)
				{
					goto IL_00f8_1;
				}
			}
			{
				goto IL_012e;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_012e:
	{
		// m_Request = request.SendWebRequest();
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_45 = V_1;
		NullCheck(L_45);
		UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C* L_46;
		L_46 = UnityWebRequest_SendWebRequest_mA3CD13983BAA5074A0640EDD661B1E46E6DB6C13(L_45, NULL);
		__this->___m_Request_4 = L_46;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Request_4), (void*)L_46);
		// m_Request.completed += UploadComplete;
		UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C* L_47 = __this->___m_Request_4;
		Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB* L_48 = (Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB*)il2cpp_codegen_object_new(Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB_il2cpp_TypeInfo_var);
		NullCheck(L_48);
		Action_1__ctor_m33ABB7530487276910BEFB499A97D33FB2E06D7D(L_48, __this, (intptr_t)((void*)AnalyticsForgetter_UploadComplete_mB2EDE69C50A9F0B30B56A4343F4000CD60C8DBCC_RuntimeMethod_var), NULL);
		NullCheck(L_47);
		AsyncOperation_add_completed_mD6F21BA8127D6D4B7ABDEFAA995A7A347A20A793(L_47, L_48, NULL);
		// }
		return;
	}
}
// System.Void Unity.Services.Analytics.Internal.AnalyticsForgetter::UploadComplete(UnityEngine.AsyncOperation)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnalyticsForgetter_UploadComplete_mB2EDE69C50A9F0B30B56A4343F4000CD60C8DBCC (AnalyticsForgetter_tA1B9D1F48FB306C80BE60C9858646BC1368948C0* __this, AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* ___0__, const RuntimeMethod* method) 
{
	int64_t V_0 = 0;
	{
		// var code = m_Request.webRequest.responseCode;
		UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C* L_0 = __this->___m_Request_4;
		NullCheck(L_0);
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_1;
		L_1 = UnityWebRequestAsyncOperation_get_webRequest_mF67D15420C7C1C4DCA1BD6F839048A0542998BC3_inline(L_0, NULL);
		NullCheck(L_1);
		int64_t L_2;
		L_2 = UnityWebRequest_get_responseCode_m012C177F61435D5D120A21D7A03FFF7B0F8B904B(L_1, NULL);
		V_0 = L_2;
		// if (m_Request.webRequest.result == UnityWebRequest.Result.Success && code == 204)
		UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C* L_3 = __this->___m_Request_4;
		NullCheck(L_3);
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_4;
		L_4 = UnityWebRequestAsyncOperation_get_webRequest_mF67D15420C7C1C4DCA1BD6F839048A0542998BC3_inline(L_3, NULL);
		NullCheck(L_4);
		int32_t L_5;
		L_5 = UnityWebRequest_get_result_mEF83848C5FCFB5E307CE4B57E42BF02FC9AED449(L_4, NULL);
		if ((!(((uint32_t)L_5) == ((uint32_t)1))))
		{
			goto IL_003f;
		}
	}
	{
		int64_t L_6 = V_0;
		if ((!(((uint64_t)L_6) == ((uint64_t)((int64_t)((int32_t)204))))))
		{
			goto IL_003f;
		}
	}
	{
		// m_SuccessfullyUploaded = true;
		__this->___m_SuccessfullyUploaded_3 = (bool)1;
		// m_Callback();
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_7 = __this->___m_Callback_2;
		NullCheck(L_7);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(L_7, NULL);
	}

IL_003f:
	{
		// m_Request.webRequest.Dispose();
		UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C* L_8 = __this->___m_Request_4;
		NullCheck(L_8);
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_9;
		L_9 = UnityWebRequestAsyncOperation_get_webRequest_mF67D15420C7C1C4DCA1BD6F839048A0542998BC3_inline(L_8, NULL);
		NullCheck(L_9);
		UnityWebRequest_Dispose_m9F43494C0FEA530A97D3F2AF3D425CCC7670753A(L_9, NULL);
		// m_Request = null;
		__this->___m_Request_4 = (UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Request_4), (void*)(UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C*)NULL);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Unity.Services.Analytics.Internal.BufferRevoked::set_UserID(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BufferRevoked_set_UserID_m3792A7308E3A22B473C90CB70F2177EB407A721E (BufferRevoked_t713408989DEAED79FCDEFED9B0437CC6991DF6B3* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public string UserID { get; set; }
		String_t* L_0 = ___0_value;
		__this->___U3CUserIDU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CUserIDU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// System.Void Unity.Services.Analytics.Internal.BufferRevoked::set_InstallID(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BufferRevoked_set_InstallID_mC29B2A0C91133923ACC932C8F1F6E98230B751B2 (BufferRevoked_t713408989DEAED79FCDEFED9B0437CC6991DF6B3* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public string InstallID { get; set; }
		String_t* L_0 = ___0_value;
		__this->___U3CInstallIDU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CInstallIDU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
// System.Void Unity.Services.Analytics.Internal.BufferRevoked::set_PlayerID(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BufferRevoked_set_PlayerID_m5E8463277C4B37EA715076B898A4D37780C528A2 (BufferRevoked_t713408989DEAED79FCDEFED9B0437CC6991DF6B3* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public string PlayerID { get; set; }
		String_t* L_0 = ___0_value;
		__this->___U3CPlayerIDU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CPlayerIDU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
// System.Void Unity.Services.Analytics.Internal.BufferRevoked::set_SessionID(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BufferRevoked_set_SessionID_m8C74D0C6D7F787C6A0510ADA1C2A607CD8D3B006 (BufferRevoked_t713408989DEAED79FCDEFED9B0437CC6991DF6B3* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public string SessionID { get; set; }
		String_t* L_0 = ___0_value;
		__this->___U3CSessionIDU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CSessionIDU3Ek__BackingField_3), (void*)L_0);
		return;
	}
}
// System.Int32 Unity.Services.Analytics.Internal.BufferRevoked::get_Length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BufferRevoked_get_Length_mD5016F14854C974BA5C331FFD2CF09F3B12FCDB6 (BufferRevoked_t713408989DEAED79FCDEFED9B0437CC6991DF6B3* __this, const RuntimeMethod* method) 
{
	{
		// public int Length => 0;
		return 0;
	}
}
// System.Void Unity.Services.Analytics.Internal.BufferRevoked::ClearBuffer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BufferRevoked_ClearBuffer_mDBAD93ED3FBD2F1968F806A839A8980BE5EEF2CA (BufferRevoked_t713408989DEAED79FCDEFED9B0437CC6991DF6B3* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Unity.Services.Analytics.Internal.BufferRevoked::ClearBuffer(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BufferRevoked_ClearBuffer_mED882A1439CFADD8BA47589AF68AFE15D7258D98 (BufferRevoked_t713408989DEAED79FCDEFED9B0437CC6991DF6B3* __this, int64_t ___0_upTo, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Unity.Services.Analytics.Internal.BufferRevoked::ClearDiskCache()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BufferRevoked_ClearDiskCache_mCCE904407DC4D938B70808FF24F74DE2295A7E20 (BufferRevoked_t713408989DEAED79FCDEFED9B0437CC6991DF6B3* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Unity.Services.Analytics.Internal.BufferRevoked::FlushToDisk()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BufferRevoked_FlushToDisk_m5322B06F1F6B732499E2715DA50184E682522F7C (BufferRevoked_t713408989DEAED79FCDEFED9B0437CC6991DF6B3* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Unity.Services.Analytics.Internal.BufferRevoked::PushBool(System.Boolean,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BufferRevoked_PushBool_mB26DF71292F123226A5AF9B6F5BF407067B3DFFC (BufferRevoked_t713408989DEAED79FCDEFED9B0437CC6991DF6B3* __this, bool ___0_val, String_t* ___1_name, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Unity.Services.Analytics.Internal.BufferRevoked::PushDouble(System.Double,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BufferRevoked_PushDouble_mBD049B292502643EEED579188E43B19D6175B687 (BufferRevoked_t713408989DEAED79FCDEFED9B0437CC6991DF6B3* __this, double ___0_val, String_t* ___1_name, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Unity.Services.Analytics.Internal.BufferRevoked::PushEndEvent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BufferRevoked_PushEndEvent_mAFE22A609752A9E0718FD2A1A3155D212FD72BBE (BufferRevoked_t713408989DEAED79FCDEFED9B0437CC6991DF6B3* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Unity.Services.Analytics.Internal.BufferRevoked::PushInt64(System.Int64,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BufferRevoked_PushInt64_mE165559F21AAA29EC8D20D997CAB8AEEF59050B1 (BufferRevoked_t713408989DEAED79FCDEFED9B0437CC6991DF6B3* __this, int64_t ___0_val, String_t* ___1_name, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Unity.Services.Analytics.Internal.BufferRevoked::PushStartEvent(System.String,System.DateTime,System.Nullable`1<System.Int64>,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BufferRevoked_PushStartEvent_m0F9BB0A6F8FEF0B580651A18E5114E9096ACB30A (BufferRevoked_t713408989DEAED79FCDEFED9B0437CC6991DF6B3* __this, String_t* ___0_name, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___1_datetime, Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 ___2_eventVersion, bool ___3_addPlayerIdsToEventBody, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Unity.Services.Analytics.Internal.BufferRevoked::PushString(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BufferRevoked_PushString_m807007ECECA82C206A1A3B92C7D8E31F165309D4 (BufferRevoked_t713408989DEAED79FCDEFED9B0437CC6991DF6B3* __this, String_t* ___0_val, String_t* ___1_name, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Byte[] Unity.Services.Analytics.Internal.BufferRevoked::Serialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* BufferRevoked_Serialize_m9E871322541511279587FA99B1C7762A4ACB1440 (BufferRevoked_t713408989DEAED79FCDEFED9B0437CC6991DF6B3* __this, const RuntimeMethod* method) 
{
	{
		// return null;
		return (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL;
	}
}
// System.Void Unity.Services.Analytics.Internal.BufferRevoked::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BufferRevoked__ctor_m208AEF741C576200CF78EA83EF4DE08DBD27D0B2 (BufferRevoked_t713408989DEAED79FCDEFED9B0437CC6991DF6B3* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.String Unity.Services.Analytics.Internal.BufferSystemCalls::GenerateGuid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BufferSystemCalls_GenerateGuid_m61F3E2FF777BFA46961A04C2ADED85F198272DED (BufferSystemCalls_t30CA07BE3DD2F29E9F7036ED838F0C92A50480F1* __this, const RuntimeMethod* method) 
{
	Guid_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return Guid.NewGuid().ToString();
		Guid_t L_0;
		L_0 = Guid_NewGuid_m1F4894E8DC089811D6252148AD5858E58D43A7BD(NULL);
		V_0 = L_0;
		String_t* L_1;
		L_1 = Guid_ToString_m2BFFD5FA726E03FA707AAFCCF065896C46D5290C((&V_0), NULL);
		return L_1;
	}
}
// System.Void Unity.Services.Analytics.Internal.BufferSystemCalls::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BufferSystemCalls__ctor_m11A81CCB33E4BA6C679E191AB344CC3277C57B8C (BufferSystemCalls_t30CA07BE3DD2F29E9F7036ED838F0C92A50480F1* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.String Unity.Services.Analytics.Internal.BufferX::get_UserID()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BufferX_get_UserID_m069B4C7871A94BC357D27219F98BE125F07090EC (BufferX_t61043C3179F78166341D64689A662C738496055C* __this, const RuntimeMethod* method) 
{
	{
		// public string UserID { get; set; }
		String_t* L_0 = __this->___U3CUserIDU3Ek__BackingField_5;
		return L_0;
	}
}
// System.Void Unity.Services.Analytics.Internal.BufferX::set_UserID(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BufferX_set_UserID_m4525F75B7CEBCA5868DAE9816AAFFC913FBE8D73 (BufferX_t61043C3179F78166341D64689A662C738496055C* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public string UserID { get; set; }
		String_t* L_0 = ___0_value;
		__this->___U3CUserIDU3Ek__BackingField_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CUserIDU3Ek__BackingField_5), (void*)L_0);
		return;
	}
}
// System.String Unity.Services.Analytics.Internal.BufferX::get_InstallID()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BufferX_get_InstallID_m255A0D58EF4510EE3656D7795CAB9B34240A41E7 (BufferX_t61043C3179F78166341D64689A662C738496055C* __this, const RuntimeMethod* method) 
{
	{
		// public string InstallID { get; set; }
		String_t* L_0 = __this->___U3CInstallIDU3Ek__BackingField_6;
		return L_0;
	}
}
// System.Void Unity.Services.Analytics.Internal.BufferX::set_InstallID(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BufferX_set_InstallID_m99F73BD30F88EAB5EF6E0980BCCBA32B2D6D9609 (BufferX_t61043C3179F78166341D64689A662C738496055C* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public string InstallID { get; set; }
		String_t* L_0 = ___0_value;
		__this->___U3CInstallIDU3Ek__BackingField_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CInstallIDU3Ek__BackingField_6), (void*)L_0);
		return;
	}
}
// System.String Unity.Services.Analytics.Internal.BufferX::get_PlayerID()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BufferX_get_PlayerID_mD97D8BA445FB3EE086D28BB7756494936191A098 (BufferX_t61043C3179F78166341D64689A662C738496055C* __this, const RuntimeMethod* method) 
{
	{
		// public string PlayerID { get; set; }
		String_t* L_0 = __this->___U3CPlayerIDU3Ek__BackingField_7;
		return L_0;
	}
}
// System.Void Unity.Services.Analytics.Internal.BufferX::set_PlayerID(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BufferX_set_PlayerID_mEC9FA704F2BB3594787A4F7D3EAEBA1B9DE2CB4F (BufferX_t61043C3179F78166341D64689A662C738496055C* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public string PlayerID { get; set; }
		String_t* L_0 = ___0_value;
		__this->___U3CPlayerIDU3Ek__BackingField_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CPlayerIDU3Ek__BackingField_7), (void*)L_0);
		return;
	}
}
// System.String Unity.Services.Analytics.Internal.BufferX::get_SessionID()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BufferX_get_SessionID_m86D349E8698F5BF8C572CD889D449D24A43454D1 (BufferX_t61043C3179F78166341D64689A662C738496055C* __this, const RuntimeMethod* method) 
{
	{
		// public string SessionID { get; set; }
		String_t* L_0 = __this->___U3CSessionIDU3Ek__BackingField_8;
		return L_0;
	}
}
// System.Void Unity.Services.Analytics.Internal.BufferX::set_SessionID(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BufferX_set_SessionID_mC9A6980699BACA2222E0E79CEAD041FFE19B7C4C (BufferX_t61043C3179F78166341D64689A662C738496055C* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public string SessionID { get; set; }
		String_t* L_0 = ___0_value;
		__this->___U3CSessionIDU3Ek__BackingField_8 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CSessionIDU3Ek__BackingField_8), (void*)L_0);
		return;
	}
}
// System.Int32 Unity.Services.Analytics.Internal.BufferX::get_Length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BufferX_get_Length_mAC86149425B8A65EBF678D67A191EBCD975BCC6C (BufferX_t61043C3179F78166341D64689A662C738496055C* __this, const RuntimeMethod* method) 
{
	{
		// public int Length { get { return (int)m_Buffer.Length; } }
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_0 = __this->___m_Buffer_4;
		NullCheck(L_0);
		int64_t L_1;
		L_1 = VirtualFuncInvoker0< int64_t >::Invoke(11 /* System.Int64 System.IO.Stream::get_Length() */, L_0);
		return ((int32_t)L_1);
	}
}
// System.Void Unity.Services.Analytics.Internal.BufferX::.ctor(Unity.Services.Analytics.Internal.IBufferSystemCalls,Unity.Services.Analytics.Internal.IDiskCache)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BufferX__ctor_mBBE8167311FE2989DC8174E1DFB53EB59276540C (BufferX_t61043C3179F78166341D64689A662C738496055C* __this, RuntimeObject* ___0_eventIdGenerator, RuntimeObject* ___1_diskCache, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public BufferX(IBufferSystemCalls eventIdGenerator, IDiskCache diskCache)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// m_Buffer = new MemoryStream();
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_0 = (MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2*)il2cpp_codegen_object_new(MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		MemoryStream__ctor_m8F3BAE0B48E65BAA13C52FB020E502B3EA22CA6B(L_0, NULL);
		__this->___m_Buffer_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Buffer_4), (void*)L_0);
		// m_SpareBuffer = new MemoryStream();
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_1 = (MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2*)il2cpp_codegen_object_new(MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		MemoryStream__ctor_m8F3BAE0B48E65BAA13C52FB020E502B3EA22CA6B(L_1, NULL);
		__this->___m_SpareBuffer_3 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_SpareBuffer_3), (void*)L_1);
		// m_EventEnds = new List<int>();
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_2 = (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*)il2cpp_codegen_object_new(List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8(L_2, List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_RuntimeMethod_var);
		__this->___m_EventEnds_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_EventEnds_2), (void*)L_2);
		// m_SystemCalls = eventIdGenerator;
		RuntimeObject* L_3 = ___0_eventIdGenerator;
		__this->___m_SystemCalls_0 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_SystemCalls_0), (void*)L_3);
		// m_DiskCache = diskCache;
		RuntimeObject* L_4 = ___1_diskCache;
		__this->___m_DiskCache_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_DiskCache_1), (void*)L_4);
		// ClearBuffer();
		BufferX_ClearBuffer_mA8B0BBF389EA44EFE0CA85B2EF94A3B51153FEE8(__this, NULL);
		// }
		return;
	}
}
// System.Void Unity.Services.Analytics.Internal.BufferX::WriteString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BufferX_WriteString_m0B92D6F14EAEC5D40DD7D8AAFC37FC4BCD28EF87 (BufferX_t61043C3179F78166341D64689A662C738496055C* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// var bytes = Encoding.UTF8.GetBytes(value);
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_0;
		L_0 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
		String_t* L_1 = ___0_value;
		NullCheck(L_0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2;
		L_2 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(19 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_0, L_1);
		V_0 = L_2;
		// for (var i = 0; i < bytes.Length; i++)
		V_1 = 0;
		goto IL_0022;
	}

IL_0010:
	{
		// m_Buffer.WriteByte(bytes[i]);
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_3 = __this->___m_Buffer_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = V_0;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		uint8_t L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		NullCheck(L_3);
		VirtualActionInvoker1< uint8_t >::Invoke(37 /* System.Void System.IO.Stream::WriteByte(System.Byte) */, L_3, L_7);
		// for (var i = 0; i < bytes.Length; i++)
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_0022:
	{
		// for (var i = 0; i < bytes.Length; i++)
		int32_t L_9 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = V_0;
		NullCheck(L_10);
		if ((((int32_t)L_9) < ((int32_t)((int32_t)(((RuntimeArray*)L_10)->max_length)))))
		{
			goto IL_0010;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Unity.Services.Analytics.Internal.BufferX::PushStartEvent(System.String,System.DateTime,System.Nullable`1<System.Int64>,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BufferX_PushStartEvent_mD4066506862999C763C973E3055FB11396BD2CF7 (BufferX_t61043C3179F78166341D64689A662C738496055C* __this, String_t* ___0_name, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___1_datetime, Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 ___2_eventVersion, bool ___3_addPlayerIdsToEventBody, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBufferSystemCalls_t9CA55BD1B80E3DB50B62AC3E1F54839D2A105C41_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_ToString_m04B6938F577DFC70D695A65C381A5ABCBC441248_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_mB4991C0F4C2664AB3CB2584DEECF5BCE6AB7757D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0B6D138D8454083A41D1C936D8DFA8099F161DA8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0C3C6829C3CCF8020C6AC45B87963ADC095CD44A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1A59CB27F689664DF3A79EFC791CD86ACAB8FBE9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral46CC0A1237AF8D2AD7B8E32EE022F0AFF27543D2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral51026120A929AEFCA7209B235ACE529BEC6FD7B1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5119119D395301AF26F5E33DACA5C4C27048BFA4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral656574B35FE2C0EE99259961802BB9F4B3E920FE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7B05DA0A68B203AD60505AA9F0C3C292F55DB675);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral93998027822B92FA84F9F1CC56BCEA2D9344D1BD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral95313AA22BE531F33DA57ED650DDA87BC0E096B9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB10D0E397CF291810D70D9CF0816E69E5F68BC09);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		s_Il2CppMethodInitialized = true;
	}
	{
		// WriteString("{");
		BufferX_WriteString_m0B92D6F14EAEC5D40DD7D8AAFC37FC4BCD28EF87(__this, _stringLiteral0C3C6829C3CCF8020C6AC45B87963ADC095CD44A, NULL);
		// WriteString("\"eventName\":\"");
		BufferX_WriteString_m0B92D6F14EAEC5D40DD7D8AAFC37FC4BCD28EF87(__this, _stringLiteralB10D0E397CF291810D70D9CF0816E69E5F68BC09, NULL);
		// WriteString(name);
		String_t* L_0 = ___0_name;
		BufferX_WriteString_m0B92D6F14EAEC5D40DD7D8AAFC37FC4BCD28EF87(__this, L_0, NULL);
		// WriteString("\",");
		BufferX_WriteString_m0B92D6F14EAEC5D40DD7D8AAFC37FC4BCD28EF87(__this, _stringLiteral0B6D138D8454083A41D1C936D8DFA8099F161DA8, NULL);
		// WriteString("\"userID\":\"");
		BufferX_WriteString_m0B92D6F14EAEC5D40DD7D8AAFC37FC4BCD28EF87(__this, _stringLiteral95313AA22BE531F33DA57ED650DDA87BC0E096B9, NULL);
		// WriteString(UserID);
		String_t* L_1;
		L_1 = BufferX_get_UserID_m069B4C7871A94BC357D27219F98BE125F07090EC_inline(__this, NULL);
		BufferX_WriteString_m0B92D6F14EAEC5D40DD7D8AAFC37FC4BCD28EF87(__this, L_1, NULL);
		// WriteString("\",");
		BufferX_WriteString_m0B92D6F14EAEC5D40DD7D8AAFC37FC4BCD28EF87(__this, _stringLiteral0B6D138D8454083A41D1C936D8DFA8099F161DA8, NULL);
		// WriteString("\"sessionID\":\"");
		BufferX_WriteString_m0B92D6F14EAEC5D40DD7D8AAFC37FC4BCD28EF87(__this, _stringLiteral7B05DA0A68B203AD60505AA9F0C3C292F55DB675, NULL);
		// WriteString(SessionID);
		String_t* L_2;
		L_2 = BufferX_get_SessionID_m86D349E8698F5BF8C572CD889D449D24A43454D1_inline(__this, NULL);
		BufferX_WriteString_m0B92D6F14EAEC5D40DD7D8AAFC37FC4BCD28EF87(__this, L_2, NULL);
		// WriteString("\",");
		BufferX_WriteString_m0B92D6F14EAEC5D40DD7D8AAFC37FC4BCD28EF87(__this, _stringLiteral0B6D138D8454083A41D1C936D8DFA8099F161DA8, NULL);
		// WriteString("\"eventUUID\":\"");
		BufferX_WriteString_m0B92D6F14EAEC5D40DD7D8AAFC37FC4BCD28EF87(__this, _stringLiteral1A59CB27F689664DF3A79EFC791CD86ACAB8FBE9, NULL);
		// WriteString(m_SystemCalls.GenerateGuid());
		RuntimeObject* L_3 = __this->___m_SystemCalls_0;
		NullCheck(L_3);
		String_t* L_4;
		L_4 = InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String Unity.Services.Analytics.Internal.IBufferSystemCalls::GenerateGuid() */, IBufferSystemCalls_t9CA55BD1B80E3DB50B62AC3E1F54839D2A105C41_il2cpp_TypeInfo_var, L_3);
		BufferX_WriteString_m0B92D6F14EAEC5D40DD7D8AAFC37FC4BCD28EF87(__this, L_4, NULL);
		// WriteString("\",");
		BufferX_WriteString_m0B92D6F14EAEC5D40DD7D8AAFC37FC4BCD28EF87(__this, _stringLiteral0B6D138D8454083A41D1C936D8DFA8099F161DA8, NULL);
		// WriteString("\"eventTimestamp\":\"");
		BufferX_WriteString_m0B92D6F14EAEC5D40DD7D8AAFC37FC4BCD28EF87(__this, _stringLiteral656574B35FE2C0EE99259961802BB9F4B3E920FE, NULL);
		// WriteString(SerializeDateTime(datetime));
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_5 = ___1_datetime;
		String_t* L_6;
		L_6 = BufferX_SerializeDateTime_m1B8DB0257F014D2E517B2EB94CC80B5A879DB654(L_5, NULL);
		BufferX_WriteString_m0B92D6F14EAEC5D40DD7D8AAFC37FC4BCD28EF87(__this, L_6, NULL);
		// WriteString("\",");
		BufferX_WriteString_m0B92D6F14EAEC5D40DD7D8AAFC37FC4BCD28EF87(__this, _stringLiteral0B6D138D8454083A41D1C936D8DFA8099F161DA8, NULL);
		// if (eventVersion != null)
		bool L_7;
		L_7 = Nullable_1_get_HasValue_mB4991C0F4C2664AB3CB2584DEECF5BCE6AB7757D_inline((&___2_eventVersion), Nullable_1_get_HasValue_mB4991C0F4C2664AB3CB2584DEECF5BCE6AB7757D_RuntimeMethod_var);
		if (!L_7)
		{
			goto IL_00e7;
		}
	}
	{
		// WriteString("\"eventVersion\":");
		BufferX_WriteString_m0B92D6F14EAEC5D40DD7D8AAFC37FC4BCD28EF87(__this, _stringLiteral93998027822B92FA84F9F1CC56BCEA2D9344D1BD, NULL);
		// WriteString(eventVersion.ToString());
		String_t* L_8;
		L_8 = Nullable_1_ToString_m04B6938F577DFC70D695A65C381A5ABCBC441248((&___2_eventVersion), Nullable_1_ToString_m04B6938F577DFC70D695A65C381A5ABCBC441248_RuntimeMethod_var);
		BufferX_WriteString_m0B92D6F14EAEC5D40DD7D8AAFC37FC4BCD28EF87(__this, L_8, NULL);
		// WriteString(",");
		BufferX_WriteString_m0B92D6F14EAEC5D40DD7D8AAFC37FC4BCD28EF87(__this, _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB, NULL);
	}

IL_00e7:
	{
		// if (addPlayerIdsToEventBody)
		bool L_9 = ___3_addPlayerIdsToEventBody;
		if (!L_9)
		{
			goto IL_013c;
		}
	}
	{
		// WriteString("\"unityInstallationID\":\"");
		BufferX_WriteString_m0B92D6F14EAEC5D40DD7D8AAFC37FC4BCD28EF87(__this, _stringLiteral5119119D395301AF26F5E33DACA5C4C27048BFA4, NULL);
		// WriteString(InstallID);
		String_t* L_10;
		L_10 = BufferX_get_InstallID_m255A0D58EF4510EE3656D7795CAB9B34240A41E7_inline(__this, NULL);
		BufferX_WriteString_m0B92D6F14EAEC5D40DD7D8AAFC37FC4BCD28EF87(__this, L_10, NULL);
		// WriteString("\",");
		BufferX_WriteString_m0B92D6F14EAEC5D40DD7D8AAFC37FC4BCD28EF87(__this, _stringLiteral0B6D138D8454083A41D1C936D8DFA8099F161DA8, NULL);
		// if (!String.IsNullOrEmpty(PlayerID))
		String_t* L_11;
		L_11 = BufferX_get_PlayerID_mD97D8BA445FB3EE086D28BB7756494936191A098_inline(__this, NULL);
		bool L_12;
		L_12 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_11, NULL);
		if (L_12)
		{
			goto IL_013c;
		}
	}
	{
		// WriteString("\"unityPlayerID\":\"");
		BufferX_WriteString_m0B92D6F14EAEC5D40DD7D8AAFC37FC4BCD28EF87(__this, _stringLiteral46CC0A1237AF8D2AD7B8E32EE022F0AFF27543D2, NULL);
		// WriteString(PlayerID);
		String_t* L_13;
		L_13 = BufferX_get_PlayerID_mD97D8BA445FB3EE086D28BB7756494936191A098_inline(__this, NULL);
		BufferX_WriteString_m0B92D6F14EAEC5D40DD7D8AAFC37FC4BCD28EF87(__this, L_13, NULL);
		// WriteString("\",");
		BufferX_WriteString_m0B92D6F14EAEC5D40DD7D8AAFC37FC4BCD28EF87(__this, _stringLiteral0B6D138D8454083A41D1C936D8DFA8099F161DA8, NULL);
	}

IL_013c:
	{
		// WriteString("\"eventParams\":{");
		BufferX_WriteString_m0B92D6F14EAEC5D40DD7D8AAFC37FC4BCD28EF87(__this, _stringLiteral51026120A929AEFCA7209B235ACE529BEC6FD7B1, NULL);
		// }
		return;
	}
}
// System.Void Unity.Services.Analytics.Internal.BufferX::StripTrailingCommaIfNecessary()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BufferX_StripTrailingCommaIfNecessary_m835DF3D14DFBEB8486A8044A72C15F64C9CEA937 (BufferX_t61043C3179F78166341D64689A662C738496055C* __this, const RuntimeMethod* method) 
{
	{
		// m_Buffer.Seek(-1, SeekOrigin.End);
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_0 = __this->___m_Buffer_4;
		NullCheck(L_0);
		int64_t L_1;
		L_1 = VirtualFuncInvoker2< int64_t, int64_t, int32_t >::Invoke(30 /* System.Int64 System.IO.Stream::Seek(System.Int64,System.IO.SeekOrigin) */, L_0, ((int64_t)(-1)), 2);
		// char precedingChar = (char)m_Buffer.ReadByte();
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_2 = __this->___m_Buffer_4;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = VirtualFuncInvoker0< int32_t >::Invoke(34 /* System.Int32 System.IO.Stream::ReadByte() */, L_2);
		// if (precedingChar == ',')
		if ((!(((uint32_t)((int32_t)(uint16_t)L_3)) == ((uint32_t)((int32_t)44)))))
		{
			goto IL_0047;
		}
	}
	{
		// m_Buffer.Seek(-1, SeekOrigin.Current);
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_4 = __this->___m_Buffer_4;
		NullCheck(L_4);
		int64_t L_5;
		L_5 = VirtualFuncInvoker2< int64_t, int64_t, int32_t >::Invoke(30 /* System.Int64 System.IO.Stream::Seek(System.Int64,System.IO.SeekOrigin) */, L_4, ((int64_t)(-1)), 1);
		// m_Buffer.SetLength(m_Buffer.Length - 1);
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_6 = __this->___m_Buffer_4;
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_7 = __this->___m_Buffer_4;
		NullCheck(L_7);
		int64_t L_8;
		L_8 = VirtualFuncInvoker0< int64_t >::Invoke(11 /* System.Int64 System.IO.Stream::get_Length() */, L_7);
		NullCheck(L_6);
		VirtualActionInvoker1< int64_t >::Invoke(31 /* System.Void System.IO.Stream::SetLength(System.Int64) */, L_6, ((int64_t)il2cpp_codegen_subtract(L_8, ((int64_t)1))));
	}

IL_0047:
	{
		// }
		return;
	}
}
// System.Void Unity.Services.Analytics.Internal.BufferX::PushEndEvent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BufferX_PushEndEvent_m06F34FD5EB0FF8E4743902FBEDD52D2013A6DE23 (BufferX_t61043C3179F78166341D64689A662C738496055C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral29B2AAE0149A885123E7F21B7247D1EA4BADF148);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5CDEC3D17C0672B2895D89FD7D65350996F6895B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC60816ED1CF3D79541144B9E0235BB10D437850F);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t G_B3_0 = 0;
	int32_t G_B7_0 = 0;
	{
		// StripTrailingCommaIfNecessary();
		BufferX_StripTrailingCommaIfNecessary_m835DF3D14DFBEB8486A8044A72C15F64C9CEA937(__this, NULL);
		// WriteString("}},");
		BufferX_WriteString_m0B92D6F14EAEC5D40DD7D8AAFC37FC4BCD28EF87(__this, _stringLiteralC60816ED1CF3D79541144B9E0235BB10D437850F, NULL);
		// int bufferLength = (int)m_Buffer.Length;
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_0 = __this->___m_Buffer_4;
		NullCheck(L_0);
		int64_t L_1;
		L_1 = VirtualFuncInvoker0< int64_t >::Invoke(11 /* System.Int64 System.IO.Stream::get_Length() */, L_0);
		V_0 = ((int32_t)L_1);
		// int eventSize = m_EventEnds.Count > 0 ? bufferLength - m_EventEnds[m_EventEnds.Count - 1] : bufferLength;
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_2 = __this->___m_EventEnds_2;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_inline(L_2, List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_RuntimeMethod_var);
		if ((((int32_t)L_3) > ((int32_t)0)))
		{
			goto IL_002f;
		}
	}
	{
		int32_t L_4 = V_0;
		G_B3_0 = L_4;
		goto IL_0049;
	}

IL_002f:
	{
		int32_t L_5 = V_0;
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_6 = __this->___m_EventEnds_2;
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_7 = __this->___m_EventEnds_2;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_inline(L_7, List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_RuntimeMethod_var);
		NullCheck(L_6);
		int32_t L_9;
		L_9 = List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D(L_6, ((int32_t)il2cpp_codegen_subtract(L_8, 1)), List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D_RuntimeMethod_var);
		G_B3_0 = ((int32_t)il2cpp_codegen_subtract(L_5, L_9));
	}

IL_0049:
	{
		// if (eventSize > k_UploadBatchMaximumSizeInBytes)
		if ((((int64_t)((int64_t)G_B3_0)) <= ((int64_t)((int64_t)((int32_t)4194304)))))
		{
			goto IL_00ba;
		}
	}
	{
		// Debug.LogWarning($"Detected event that would be too big to upload (greater than {k_UploadBatchMaximumSizeInBytes / 1024}KB in size), discarding it to prevent blockage.");
		int64_t L_10 = ((int64_t)((int32_t)4096));
		RuntimeObject* L_11 = Box(Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var, &L_10);
		String_t* L_12;
		L_12 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteral29B2AAE0149A885123E7F21B7247D1EA4BADF148, L_11, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(L_12, NULL);
		// int previousBufferLength = m_EventEnds.Count > 0 ? m_EventEnds[m_EventEnds.Count - 1] : k_BufferHeader.Length;
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_13 = __this->___m_EventEnds_2;
		NullCheck(L_13);
		int32_t L_14;
		L_14 = List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_inline(L_13, List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_RuntimeMethod_var);
		if ((((int32_t)L_14) > ((int32_t)0)))
		{
			goto IL_0086;
		}
	}
	{
		NullCheck(_stringLiteral5CDEC3D17C0672B2895D89FD7D65350996F6895B);
		int32_t L_15;
		L_15 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(_stringLiteral5CDEC3D17C0672B2895D89FD7D65350996F6895B, NULL);
		G_B7_0 = L_15;
		goto IL_009e;
	}

IL_0086:
	{
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_16 = __this->___m_EventEnds_2;
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_17 = __this->___m_EventEnds_2;
		NullCheck(L_17);
		int32_t L_18;
		L_18 = List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_inline(L_17, List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_RuntimeMethod_var);
		NullCheck(L_16);
		int32_t L_19;
		L_19 = List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D(L_16, ((int32_t)il2cpp_codegen_subtract(L_18, 1)), List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D_RuntimeMethod_var);
		G_B7_0 = L_19;
	}

IL_009e:
	{
		V_1 = G_B7_0;
		// m_Buffer.SetLength(previousBufferLength);
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_20 = __this->___m_Buffer_4;
		int32_t L_21 = V_1;
		NullCheck(L_20);
		VirtualActionInvoker1< int64_t >::Invoke(31 /* System.Void System.IO.Stream::SetLength(System.Int64) */, L_20, ((int64_t)L_21));
		// m_Buffer.Position = previousBufferLength;
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_22 = __this->___m_Buffer_4;
		int32_t L_23 = V_1;
		NullCheck(L_22);
		VirtualActionInvoker1< int64_t >::Invoke(13 /* System.Void System.IO.Stream::set_Position(System.Int64) */, L_22, ((int64_t)L_23));
		return;
	}

IL_00ba:
	{
		// m_EventEnds.Add(bufferLength);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_24 = __this->___m_EventEnds_2;
		int32_t L_25 = V_0;
		NullCheck(L_24);
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_24, L_25, List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Unity.Services.Analytics.Internal.BufferX::PushDouble(System.Double,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BufferX_PushDouble_m18518061BA74E73DADFAE1567C8910AC981EEDBB (BufferX_t61043C3179F78166341D64689A662C738496055C* __this, double ___0_val, String_t* ___1_name, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA333953DEB7B3F631AE4FEB93E9C3AD7F349F8C0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// if (name != null)
		String_t* L_0 = ___1_name;
		if (!L_0)
		{
			goto IL_0020;
		}
	}
	{
		// WriteString("\"");
		BufferX_WriteString_m0B92D6F14EAEC5D40DD7D8AAFC37FC4BCD28EF87(__this, _stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677, NULL);
		// WriteString(name);
		String_t* L_1 = ___1_name;
		BufferX_WriteString_m0B92D6F14EAEC5D40DD7D8AAFC37FC4BCD28EF87(__this, L_1, NULL);
		// WriteString("\":");
		BufferX_WriteString_m0B92D6F14EAEC5D40DD7D8AAFC37FC4BCD28EF87(__this, _stringLiteralA333953DEB7B3F631AE4FEB93E9C3AD7F349F8C0, NULL);
	}

IL_0020:
	{
		// var formatted = val.ToString(CultureInfo.InvariantCulture);
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_2;
		L_2 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
		String_t* L_3;
		L_3 = Double_ToString_m4318830D9F771852FDCF21C14CF9E8ABC7E77357((&___0_val), L_2, NULL);
		V_0 = L_3;
		// WriteString(formatted);
		String_t* L_4 = V_0;
		BufferX_WriteString_m0B92D6F14EAEC5D40DD7D8AAFC37FC4BCD28EF87(__this, L_4, NULL);
		// WriteString(",");
		BufferX_WriteString_m0B92D6F14EAEC5D40DD7D8AAFC37FC4BCD28EF87(__this, _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB, NULL);
		// }
		return;
	}
}
// System.Void Unity.Services.Analytics.Internal.BufferX::PushString(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BufferX_PushString_m2786331DB2F4AA7F21C9FA1B6C6599E3233DE393 (BufferX_t61043C3179F78166341D64689A662C738496055C* __this, String_t* ___0_val, String_t* ___1_name, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonConvert_t01281FFED14CC2AEFABB6608315D90ED5C46E0C2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA333953DEB7B3F631AE4FEB93E9C3AD7F349F8C0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (name != null)
		String_t* L_0 = ___1_name;
		if (!L_0)
		{
			goto IL_0020;
		}
	}
	{
		// WriteString("\"");
		BufferX_WriteString_m0B92D6F14EAEC5D40DD7D8AAFC37FC4BCD28EF87(__this, _stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677, NULL);
		// WriteString(name);
		String_t* L_1 = ___1_name;
		BufferX_WriteString_m0B92D6F14EAEC5D40DD7D8AAFC37FC4BCD28EF87(__this, L_1, NULL);
		// WriteString("\":");
		BufferX_WriteString_m0B92D6F14EAEC5D40DD7D8AAFC37FC4BCD28EF87(__this, _stringLiteralA333953DEB7B3F631AE4FEB93E9C3AD7F349F8C0, NULL);
	}

IL_0020:
	{
		// WriteString(JsonConvert.ToString(val));
		String_t* L_2 = ___0_val;
		il2cpp_codegen_runtime_class_init_inline(JsonConvert_t01281FFED14CC2AEFABB6608315D90ED5C46E0C2_il2cpp_TypeInfo_var);
		String_t* L_3;
		L_3 = JsonConvert_ToString_m63264635A791255A4CD3AA4FBE8498F51687FE7C(L_2, NULL);
		BufferX_WriteString_m0B92D6F14EAEC5D40DD7D8AAFC37FC4BCD28EF87(__this, L_3, NULL);
		// WriteString(",");
		BufferX_WriteString_m0B92D6F14EAEC5D40DD7D8AAFC37FC4BCD28EF87(__this, _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB, NULL);
		// }
		return;
	}
}
// System.Void Unity.Services.Analytics.Internal.BufferX::PushInt64(System.Int64,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BufferX_PushInt64_m28B52420DD21FF15C4E692721DB01829769FCD03 (BufferX_t61043C3179F78166341D64689A662C738496055C* __this, int64_t ___0_val, String_t* ___1_name, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA333953DEB7B3F631AE4FEB93E9C3AD7F349F8C0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (name != null)
		String_t* L_0 = ___1_name;
		if (!L_0)
		{
			goto IL_0020;
		}
	}
	{
		// WriteString("\"");
		BufferX_WriteString_m0B92D6F14EAEC5D40DD7D8AAFC37FC4BCD28EF87(__this, _stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677, NULL);
		// WriteString(name);
		String_t* L_1 = ___1_name;
		BufferX_WriteString_m0B92D6F14EAEC5D40DD7D8AAFC37FC4BCD28EF87(__this, L_1, NULL);
		// WriteString("\":");
		BufferX_WriteString_m0B92D6F14EAEC5D40DD7D8AAFC37FC4BCD28EF87(__this, _stringLiteralA333953DEB7B3F631AE4FEB93E9C3AD7F349F8C0, NULL);
	}

IL_0020:
	{
		// WriteString(val.ToString());
		String_t* L_2;
		L_2 = Int64_ToString_m284E4E55662818E38654309A41C2B07CD436F36B((&___0_val), NULL);
		BufferX_WriteString_m0B92D6F14EAEC5D40DD7D8AAFC37FC4BCD28EF87(__this, L_2, NULL);
		// WriteString(",");
		BufferX_WriteString_m0B92D6F14EAEC5D40DD7D8AAFC37FC4BCD28EF87(__this, _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB, NULL);
		// }
		return;
	}
}
// System.Void Unity.Services.Analytics.Internal.BufferX::PushBool(System.Boolean,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BufferX_PushBool_m5E33FAC597B7D2BB960E3D82918BC5DF7124EC6C (BufferX_t61043C3179F78166341D64689A662C738496055C* __this, bool ___0_val, String_t* ___1_name, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral77D38C0623F92B292B925F6E72CF5CF99A20D4EB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA333953DEB7B3F631AE4FEB93E9C3AD7F349F8C0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB7C45DD316C68ABF3429C20058C2981C652192F2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677);
		s_Il2CppMethodInitialized = true;
	}
	BufferX_t61043C3179F78166341D64689A662C738496055C* G_B4_0 = NULL;
	BufferX_t61043C3179F78166341D64689A662C738496055C* G_B3_0 = NULL;
	String_t* G_B5_0 = NULL;
	BufferX_t61043C3179F78166341D64689A662C738496055C* G_B5_1 = NULL;
	{
		// if (name != null)
		String_t* L_0 = ___1_name;
		if (!L_0)
		{
			goto IL_0020;
		}
	}
	{
		// WriteString("\"");
		BufferX_WriteString_m0B92D6F14EAEC5D40DD7D8AAFC37FC4BCD28EF87(__this, _stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677, NULL);
		// WriteString(name);
		String_t* L_1 = ___1_name;
		BufferX_WriteString_m0B92D6F14EAEC5D40DD7D8AAFC37FC4BCD28EF87(__this, L_1, NULL);
		// WriteString("\":");
		BufferX_WriteString_m0B92D6F14EAEC5D40DD7D8AAFC37FC4BCD28EF87(__this, _stringLiteralA333953DEB7B3F631AE4FEB93E9C3AD7F349F8C0, NULL);
	}

IL_0020:
	{
		// WriteString(val ? "true" : "false");
		bool L_2 = ___0_val;
		G_B3_0 = __this;
		if (L_2)
		{
			G_B4_0 = __this;
			goto IL_002b;
		}
	}
	{
		G_B5_0 = _stringLiteral77D38C0623F92B292B925F6E72CF5CF99A20D4EB;
		G_B5_1 = G_B3_0;
		goto IL_0030;
	}

IL_002b:
	{
		G_B5_0 = _stringLiteralB7C45DD316C68ABF3429C20058C2981C652192F2;
		G_B5_1 = G_B4_0;
	}

IL_0030:
	{
		NullCheck(G_B5_1);
		BufferX_WriteString_m0B92D6F14EAEC5D40DD7D8AAFC37FC4BCD28EF87(G_B5_1, G_B5_0, NULL);
		// WriteString(",");
		BufferX_WriteString_m0B92D6F14EAEC5D40DD7D8AAFC37FC4BCD28EF87(__this, _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB, NULL);
		// }
		return;
	}
}
// System.Byte[] Unity.Services.Analytics.Internal.BufferX::Serialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* BufferX_Serialize_m4CA698F0ECE4218D3227187027C1A754651B85D9 (BufferX_t61043C3179F78166341D64689A662C738496055C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEB0F79A6ABD88DB20E08561FCEEA8E62C21B8875);
		s_Il2CppMethodInitialized = true;
	}
	int64_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_3 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_4 = NULL;
	{
		// if (m_EventEnds.Count > 0)
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_0 = __this->___m_EventEnds_2;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_inline(L_0, List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_RuntimeMethod_var);
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_00b6;
		}
	}
	{
		// long originalBufferPosition = m_Buffer.Position;
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_2 = __this->___m_Buffer_4;
		NullCheck(L_2);
		int64_t L_3;
		L_3 = VirtualFuncInvoker0< int64_t >::Invoke(12 /* System.Int64 System.IO.Stream::get_Position() */, L_2);
		V_0 = L_3;
		// int end = m_EventEnds[0];
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_4 = __this->___m_EventEnds_2;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D(L_4, 0, List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D_RuntimeMethod_var);
		V_1 = L_5;
		// int nextEnd = 0;
		V_2 = 0;
		goto IL_003f;
	}

IL_002e:
	{
		// end = m_EventEnds[nextEnd];
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_6 = __this->___m_EventEnds_2;
		int32_t L_7 = V_2;
		NullCheck(L_6);
		int32_t L_8;
		L_8 = List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D(L_6, L_7, List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D_RuntimeMethod_var);
		V_1 = L_8;
		// nextEnd++;
		int32_t L_9 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_003f:
	{
		// while (nextEnd < m_EventEnds.Count &&
		//        m_EventEnds[nextEnd] < k_UploadBatchMaximumSizeInBytes)
		int32_t L_10 = V_2;
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_11 = __this->___m_EventEnds_2;
		NullCheck(L_11);
		int32_t L_12;
		L_12 = List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_inline(L_11, List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_RuntimeMethod_var);
		if ((((int32_t)L_10) >= ((int32_t)L_12)))
		{
			goto IL_0062;
		}
	}
	{
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_13 = __this->___m_EventEnds_2;
		int32_t L_14 = V_2;
		NullCheck(L_13);
		int32_t L_15;
		L_15 = List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D(L_13, L_14, List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D_RuntimeMethod_var);
		if ((((int64_t)((int64_t)L_15)) < ((int64_t)((int64_t)((int32_t)4194304)))))
		{
			goto IL_002e;
		}
	}

IL_0062:
	{
		// byte[] payload = new byte[end + 1];
		int32_t L_16 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add(L_16, 1)));
		V_3 = L_17;
		// m_Buffer.Position = 0;
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_18 = __this->___m_Buffer_4;
		NullCheck(L_18);
		VirtualActionInvoker1< int64_t >::Invoke(13 /* System.Void System.IO.Stream::set_Position(System.Int64) */, L_18, ((int64_t)0));
		// m_Buffer.Read(payload, 0, end);
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_19 = __this->___m_Buffer_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_20 = V_3;
		int32_t L_21 = V_1;
		NullCheck(L_19);
		int32_t L_22;
		L_22 = VirtualFuncInvoker3< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(32 /* System.Int32 System.IO.Stream::Read(System.Byte[],System.Int32,System.Int32) */, L_19, L_20, 0, L_21);
		// byte[] suffix = Encoding.UTF8.GetBytes("]}");
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_23;
		L_23 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
		NullCheck(L_23);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_24;
		L_24 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(19 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_23, _stringLiteralEB0F79A6ABD88DB20E08561FCEEA8E62C21B8875);
		V_4 = L_24;
		// payload[end - 1] = suffix[0];
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_25 = V_3;
		int32_t L_26 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_27 = V_4;
		NullCheck(L_27);
		int32_t L_28 = 0;
		uint8_t L_29 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_28));
		NullCheck(L_25);
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(L_26, 1))), (uint8_t)L_29);
		// payload[end] = suffix[1];
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_30 = V_3;
		int32_t L_31 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_32 = V_4;
		NullCheck(L_32);
		int32_t L_33 = 1;
		uint8_t L_34 = (L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		NullCheck(L_30);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_31), (uint8_t)L_34);
		// m_Buffer.Position = originalBufferPosition;
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_35 = __this->___m_Buffer_4;
		int64_t L_36 = V_0;
		NullCheck(L_35);
		VirtualActionInvoker1< int64_t >::Invoke(13 /* System.Void System.IO.Stream::set_Position(System.Int64) */, L_35, L_36);
		// return payload;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_37 = V_3;
		return L_37;
	}

IL_00b6:
	{
		// return null;
		return (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL;
	}
}
// System.Void Unity.Services.Analytics.Internal.BufferX::ClearBuffer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BufferX_ClearBuffer_mA8B0BBF389EA44EFE0CA85B2EF94A3B51153FEE8 (BufferX_t61043C3179F78166341D64689A662C738496055C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_mF6795DE5F49C1D0B91D6A0955F448B22970D67A9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5CDEC3D17C0672B2895D89FD7D65350996F6895B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_Buffer.SetLength(0);
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_0 = __this->___m_Buffer_4;
		NullCheck(L_0);
		VirtualActionInvoker1< int64_t >::Invoke(31 /* System.Void System.IO.Stream::SetLength(System.Int64) */, L_0, ((int64_t)0));
		// m_Buffer.Position = 0;
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_1 = __this->___m_Buffer_4;
		NullCheck(L_1);
		VirtualActionInvoker1< int64_t >::Invoke(13 /* System.Void System.IO.Stream::set_Position(System.Int64) */, L_1, ((int64_t)0));
		// WriteString(k_BufferHeader);
		BufferX_WriteString_m0B92D6F14EAEC5D40DD7D8AAFC37FC4BCD28EF87(__this, _stringLiteral5CDEC3D17C0672B2895D89FD7D65350996F6895B, NULL);
		// m_EventEnds.Clear();
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_2 = __this->___m_EventEnds_2;
		NullCheck(L_2);
		List_1_Clear_mF6795DE5F49C1D0B91D6A0955F448B22970D67A9_inline(L_2, List_1_Clear_mF6795DE5F49C1D0B91D6A0955F448B22970D67A9_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Unity.Services.Analytics.Internal.BufferX::ClearBuffer(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BufferX_ClearBuffer_m33260625C009242974AAD0747DDF14D2EF1BB726 (BufferX_t61043C3179F78166341D64689A662C738496055C* __this, int64_t ___0_upTo, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_RemoveRange_m1E69C4C8438AA5D7E05C2936C79C01D96F89BE68_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_set_Item_m95629806F31CF369D937590912E0B6A53FF7C587_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5CDEC3D17C0672B2895D89FD7D65350996F6895B);
		s_Il2CppMethodInitialized = true;
	}
	MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int64_t V_3 = 0;
	uint8_t V_4 = 0x0;
	{
		// MemoryStream oldBuffer = m_Buffer;
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_0 = __this->___m_Buffer_4;
		V_0 = L_0;
		// m_Buffer = m_SpareBuffer;
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_1 = __this->___m_SpareBuffer_3;
		__this->___m_Buffer_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Buffer_4), (void*)L_1);
		// m_SpareBuffer = oldBuffer;
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_2 = V_0;
		__this->___m_SpareBuffer_3 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_SpareBuffer_3), (void*)L_2);
		// int lastClearedEventIndex = 0;
		V_1 = 0;
		// for (int i = 0; i < m_EventEnds.Count; i++)
		V_2 = 0;
		goto IL_0064;
	}

IL_0020:
	{
		// m_EventEnds[i] = m_EventEnds[i] - (int)upTo + k_BufferHeader.Length;
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_3 = __this->___m_EventEnds_2;
		int32_t L_4 = V_2;
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_5 = __this->___m_EventEnds_2;
		int32_t L_6 = V_2;
		NullCheck(L_5);
		int32_t L_7;
		L_7 = List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D(L_5, L_6, List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D_RuntimeMethod_var);
		int64_t L_8 = ___0_upTo;
		NullCheck(_stringLiteral5CDEC3D17C0672B2895D89FD7D65350996F6895B);
		int32_t L_9;
		L_9 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(_stringLiteral5CDEC3D17C0672B2895D89FD7D65350996F6895B, NULL);
		NullCheck(L_3);
		List_1_set_Item_m95629806F31CF369D937590912E0B6A53FF7C587(L_3, L_4, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_subtract(L_7, ((int32_t)L_8))), L_9)), List_1_set_Item_m95629806F31CF369D937590912E0B6A53FF7C587_RuntimeMethod_var);
		// if (m_EventEnds[i] <= k_BufferHeader.Length)
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_10 = __this->___m_EventEnds_2;
		int32_t L_11 = V_2;
		NullCheck(L_10);
		int32_t L_12;
		L_12 = List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D(L_10, L_11, List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D_RuntimeMethod_var);
		NullCheck(_stringLiteral5CDEC3D17C0672B2895D89FD7D65350996F6895B);
		int32_t L_13;
		L_13 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(_stringLiteral5CDEC3D17C0672B2895D89FD7D65350996F6895B, NULL);
		if ((((int32_t)L_12) > ((int32_t)L_13)))
		{
			goto IL_0060;
		}
	}
	{
		// lastClearedEventIndex = i;
		int32_t L_14 = V_2;
		V_1 = L_14;
	}

IL_0060:
	{
		// for (int i = 0; i < m_EventEnds.Count; i++)
		int32_t L_15 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_15, 1));
	}

IL_0064:
	{
		// for (int i = 0; i < m_EventEnds.Count; i++)
		int32_t L_16 = V_2;
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_17 = __this->___m_EventEnds_2;
		NullCheck(L_17);
		int32_t L_18;
		L_18 = List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_inline(L_17, List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_RuntimeMethod_var);
		if ((((int32_t)L_16) < ((int32_t)L_18)))
		{
			goto IL_0020;
		}
	}
	{
		// m_EventEnds.RemoveRange(0, lastClearedEventIndex + 1);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_19 = __this->___m_EventEnds_2;
		int32_t L_20 = V_1;
		NullCheck(L_19);
		List_1_RemoveRange_m1E69C4C8438AA5D7E05C2936C79C01D96F89BE68(L_19, 0, ((int32_t)il2cpp_codegen_add(L_20, 1)), List_1_RemoveRange_m1E69C4C8438AA5D7E05C2936C79C01D96F89BE68_RuntimeMethod_var);
		// m_Buffer.SetLength(0);
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_21 = __this->___m_Buffer_4;
		NullCheck(L_21);
		VirtualActionInvoker1< int64_t >::Invoke(31 /* System.Void System.IO.Stream::SetLength(System.Int64) */, L_21, ((int64_t)0));
		// m_Buffer.Position = 0;
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_22 = __this->___m_Buffer_4;
		NullCheck(L_22);
		VirtualActionInvoker1< int64_t >::Invoke(13 /* System.Void System.IO.Stream::set_Position(System.Int64) */, L_22, ((int64_t)0));
		// WriteString(k_BufferHeader);
		BufferX_WriteString_m0B92D6F14EAEC5D40DD7D8AAFC37FC4BCD28EF87(__this, _stringLiteral5CDEC3D17C0672B2895D89FD7D65350996F6895B, NULL);
		// m_SpareBuffer.Position = upTo;
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_23 = __this->___m_SpareBuffer_3;
		int64_t L_24 = ___0_upTo;
		NullCheck(L_23);
		VirtualActionInvoker1< int64_t >::Invoke(13 /* System.Void System.IO.Stream::set_Position(System.Int64) */, L_23, L_24);
		// for (long i = upTo; i < m_SpareBuffer.Length; i++)
		int64_t L_25 = ___0_upTo;
		V_3 = L_25;
		goto IL_00d6;
	}

IL_00b6:
	{
		// byte b = (byte)m_SpareBuffer.ReadByte();
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_26 = __this->___m_SpareBuffer_3;
		NullCheck(L_26);
		int32_t L_27;
		L_27 = VirtualFuncInvoker0< int32_t >::Invoke(34 /* System.Int32 System.IO.Stream::ReadByte() */, L_26);
		V_4 = (uint8_t)((int32_t)(uint8_t)L_27);
		// m_Buffer.WriteByte(b);
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_28 = __this->___m_Buffer_4;
		uint8_t L_29 = V_4;
		NullCheck(L_28);
		VirtualActionInvoker1< uint8_t >::Invoke(37 /* System.Void System.IO.Stream::WriteByte(System.Byte) */, L_28, L_29);
		// for (long i = upTo; i < m_SpareBuffer.Length; i++)
		int64_t L_30 = V_3;
		V_3 = ((int64_t)il2cpp_codegen_add(L_30, ((int64_t)1)));
	}

IL_00d6:
	{
		// for (long i = upTo; i < m_SpareBuffer.Length; i++)
		int64_t L_31 = V_3;
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_32 = __this->___m_SpareBuffer_3;
		NullCheck(L_32);
		int64_t L_33;
		L_33 = VirtualFuncInvoker0< int64_t >::Invoke(11 /* System.Int64 System.IO.Stream::get_Length() */, L_32);
		if ((((int64_t)L_31) < ((int64_t)L_33)))
		{
			goto IL_00b6;
		}
	}
	{
		// m_SpareBuffer.SetLength(0);
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_34 = __this->___m_SpareBuffer_3;
		NullCheck(L_34);
		VirtualActionInvoker1< int64_t >::Invoke(31 /* System.Void System.IO.Stream::SetLength(System.Int64) */, L_34, ((int64_t)0));
		// m_SpareBuffer.Position = 0;
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_35 = __this->___m_SpareBuffer_3;
		NullCheck(L_35);
		VirtualActionInvoker1< int64_t >::Invoke(13 /* System.Void System.IO.Stream::set_Position(System.Int64) */, L_35, ((int64_t)0));
		// }
		return;
	}
}
// System.Void Unity.Services.Analytics.Internal.BufferX::FlushToDisk()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BufferX_FlushToDisk_m55BF963B573FD854740103B13825AACBD73C78E9 (BufferX_t61043C3179F78166341D64689A662C738496055C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDiskCache_t878F3F39893FAF5AC4CC46B81A7DCB069DFBE822_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_DiskCache.Write(m_EventEnds, m_Buffer);
		RuntimeObject* L_0 = __this->___m_DiskCache_1;
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_1 = __this->___m_EventEnds_2;
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_2 = __this->___m_Buffer_4;
		NullCheck(L_0);
		InterfaceActionInvoker2< List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* >::Invoke(1 /* System.Void Unity.Services.Analytics.Internal.IDiskCache::Write(System.Collections.Generic.List`1<System.Int32>,System.IO.Stream) */, IDiskCache_t878F3F39893FAF5AC4CC46B81A7DCB069DFBE822_il2cpp_TypeInfo_var, L_0, L_1, L_2);
		// }
		return;
	}
}
// System.Void Unity.Services.Analytics.Internal.BufferX::ClearDiskCache()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BufferX_ClearDiskCache_mD54CC30E7AD92D94FC57DF95A3E4A4A1BEAEB1C6 (BufferX_t61043C3179F78166341D64689A662C738496055C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDiskCache_t878F3F39893FAF5AC4CC46B81A7DCB069DFBE822_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_DiskCache.Clear();
		RuntimeObject* L_0 = __this->___m_DiskCache_1;
		NullCheck(L_0);
		InterfaceActionInvoker0::Invoke(0 /* System.Void Unity.Services.Analytics.Internal.IDiskCache::Clear() */, IDiskCache_t878F3F39893FAF5AC4CC46B81A7DCB069DFBE822_il2cpp_TypeInfo_var, L_0);
		// }
		return;
	}
}
// System.Void Unity.Services.Analytics.Internal.BufferX::LoadFromDisk()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BufferX_LoadFromDisk_mFB29842DE8FE800E9569220B34C4B0958FFE493D (BufferX_t61043C3179F78166341D64689A662C738496055C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDiskCache_t878F3F39893FAF5AC4CC46B81A7DCB069DFBE822_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// bool success = m_DiskCache.Read(m_EventEnds, m_Buffer);
		RuntimeObject* L_0 = __this->___m_DiskCache_1;
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_1 = __this->___m_EventEnds_2;
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_2 = __this->___m_Buffer_4;
		NullCheck(L_0);
		bool L_3;
		L_3 = InterfaceFuncInvoker2< bool, List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* >::Invoke(2 /* System.Boolean Unity.Services.Analytics.Internal.IDiskCache::Read(System.Collections.Generic.List`1<System.Int32>,System.IO.Stream) */, IDiskCache_t878F3F39893FAF5AC4CC46B81A7DCB069DFBE822_il2cpp_TypeInfo_var, L_0, L_1, L_2);
		// if (!success)
		if (L_3)
		{
			goto IL_001f;
		}
	}
	{
		// ClearBuffer();
		BufferX_ClearBuffer_mA8B0BBF389EA44EFE0CA85B2EF94A3B51153FEE8(__this, NULL);
	}

IL_001f:
	{
		// }
		return;
	}
}
// System.String Unity.Services.Analytics.Internal.BufferX::SerializeDateTime(System.DateTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BufferX_SerializeDateTime_m1B8DB0257F014D2E517B2EB94CC80B5A879DB654 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___0_dateTime, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3C1DFC84C89C48D8E83EB3C98D58E22F70F5E9F4);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return dateTime.ToString(k_MillisecondDateFormat, CultureInfo.InvariantCulture);
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_0;
		L_0 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
		String_t* L_1;
		L_1 = DateTime_ToString_m27637E1131A10BED8A95639D64339023D5EBBF00((&___0_dateTime), _stringLiteral3C1DFC84C89C48D8E83EB3C98D58E22F70F5E9F4, L_0, NULL);
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.String Unity.Services.Analytics.Internal.Consent::get_Pipl()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Consent_get_Pipl_m9EA6E585847439E839D5AE3063A5DCF6F6376605 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFFBF433B627DA76F2B3F8F9137C40070252A3B18);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static String Pipl => "pipl";
		return _stringLiteralFFBF433B627DA76F2B3F8F9137C40070252A3B18;
	}
}
// System.String Unity.Services.Analytics.Internal.Consent::get_None()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Consent_get_None_mCF717F55F4841DEC3ABBFA5C81EECCE8E61B3E3A (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0AEA2C46AAEB233C6D2DF0275EF92FB2E56BAFE9);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static String None => "none";
		return _stringLiteral0AEA2C46AAEB233C6D2DF0275EF92FB2E56BAFE9;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Unity.Services.Analytics.Internal.ConsentStatus Unity.Services.Analytics.Internal.ConsentTracker::get_optInPiplConsentStatus()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ConsentTracker_get_optInPiplConsentStatus_m1F91E59567043A5429228EFBA83709725EB53A34 (ConsentTracker_tBDC1E317516ED67AC655A7D3B1D44EF5666B3FC4* __this, const RuntimeMethod* method) 
{
	{
		// internal ConsentStatus optInPiplConsentStatus { get; set; }
		int32_t L_0 = __this->___U3CoptInPiplConsentStatusU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void Unity.Services.Analytics.Internal.ConsentTracker::set_optInPiplConsentStatus(Unity.Services.Analytics.Internal.ConsentStatus)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConsentTracker_set_optInPiplConsentStatus_m7121DEA6C7203C39DD740E00262387EF06B1C732 (ConsentTracker_tBDC1E317516ED67AC655A7D3B1D44EF5666B3FC4* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// internal ConsentStatus optInPiplConsentStatus { get; set; }
		int32_t L_0 = ___0_value;
		__this->___U3CoptInPiplConsentStatusU3Ek__BackingField_2 = L_0;
		return;
	}
}
// Unity.Services.Analytics.Internal.ConsentStatus Unity.Services.Analytics.Internal.ConsentTracker::get_optOutConsentStatus()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ConsentTracker_get_optOutConsentStatus_mA1EB68620CB4A25DD2739C48F607DFE18924D415 (ConsentTracker_tBDC1E317516ED67AC655A7D3B1D44EF5666B3FC4* __this, const RuntimeMethod* method) 
{
	{
		// internal ConsentStatus optOutConsentStatus { get; set; }
		int32_t L_0 = __this->___U3CoptOutConsentStatusU3Ek__BackingField_3;
		return L_0;
	}
}
// System.Void Unity.Services.Analytics.Internal.ConsentTracker::set_optOutConsentStatus(Unity.Services.Analytics.Internal.ConsentStatus)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConsentTracker_set_optOutConsentStatus_m4BAAF67518F147B7203463AD1557E2E14A795657 (ConsentTracker_tBDC1E317516ED67AC655A7D3B1D44EF5666B3FC4* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// internal ConsentStatus optOutConsentStatus { get; set; }
		int32_t L_0 = ___0_value;
		__this->___U3CoptOutConsentStatusU3Ek__BackingField_3 = L_0;
		return;
	}
}
// System.Collections.Generic.Dictionary`2<System.String,System.String> Unity.Services.Analytics.Internal.ConsentTracker::get_piplHeaders()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ConsentTracker_get_piplHeaders_mC7732B6E50BB062A62D669AC5201FAF1802BCD2F (ConsentTracker_tBDC1E317516ED67AC655A7D3B1D44EF5666B3FC4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2309FB9CC1600C4642826BA92EB5C43EA0970693);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2A5B4A683A4FF348D7FBA286A40B146642302E8C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB7C45DD316C68ABF3429C20058C2981C652192F2);
		s_Il2CppMethodInitialized = true;
	}
	{
		//     new Dictionary<string, string>
		// {
		//     { "PIPL_EXPORT", "true" },
		//     { "PIPL_CONSENT", "true" }
		// };
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_0 = (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*)il2cpp_codegen_object_new(Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052(L_0, Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_1 = L_0;
		NullCheck(L_1);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_1, _stringLiteral2309FB9CC1600C4642826BA92EB5C43EA0970693, _stringLiteralB7C45DD316C68ABF3429C20058C2981C652192F2, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_2 = L_1;
		NullCheck(L_2);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_2, _stringLiteral2A5B4A683A4FF348D7FBA286A40B146642302E8C, _stringLiteralB7C45DD316C68ABF3429C20058C2981C652192F2, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		return L_2;
	}
}
// System.Collections.Generic.Dictionary`2<System.String,System.String> Unity.Services.Analytics.Internal.ConsentTracker::get_requiredHeaders()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ConsentTracker_get_requiredHeaders_m65D460E70EF5C3EC28C5E47057DB4CA17704F818 (ConsentTracker_tBDC1E317516ED67AC655A7D3B1D44EF5666B3FC4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// response.identifier == Consent.Pipl ? piplHeaders : new Dictionary<string, string>();
		GeoIPResponse_tADA05745323DD2374411BCB8CEC9EC086B4FE150* L_0 = __this->___response_4;
		NullCheck(L_0);
		String_t* L_1 = L_0->___identifier_0;
		String_t* L_2;
		L_2 = Consent_get_Pipl_m9EA6E585847439E839D5AE3063A5DCF6F6376605(NULL);
		bool L_3;
		L_3 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_1, L_2, NULL);
		if (L_3)
		{
			goto IL_001d;
		}
	}
	{
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_4 = (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*)il2cpp_codegen_object_new(Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052(L_4, Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var);
		return L_4;
	}

IL_001d:
	{
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_5;
		L_5 = ConsentTracker_get_piplHeaders_mC7732B6E50BB062A62D669AC5201FAF1802BCD2F(__this, NULL);
		return L_5;
	}
}
// System.Void Unity.Services.Analytics.Internal.ConsentTracker::.ctor(Unity.Services.Analytics.ICoreStatsHelper)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConsentTracker__ctor_m478B76472BE051496CB2D8EE77D91DED3D332E5A (ConsentTracker_tBDC1E317516ED67AC655A7D3B1D44EF5666B3FC4* __this, RuntimeObject* ___0_coreStatsHelper, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GeoAPI_tDEC43B93D320DC5B81A4BD9F45491DD2E5D30287_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// : this(new GeoAPI(), coreStatsHelper) {}
		GeoAPI_tDEC43B93D320DC5B81A4BD9F45491DD2E5D30287* L_0 = (GeoAPI_tDEC43B93D320DC5B81A4BD9F45491DD2E5D30287*)il2cpp_codegen_object_new(GeoAPI_tDEC43B93D320DC5B81A4BD9F45491DD2E5D30287_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		GeoAPI__ctor_m0C73E78C464E961E626A7D252140E6E2A60C148D(L_0, NULL);
		RuntimeObject* L_1 = ___0_coreStatsHelper;
		ConsentTracker__ctor_m9C23286CCF2BC6690013071ECD56F7FC0B5B745C(__this, L_0, L_1, NULL);
		// : this(new GeoAPI(), coreStatsHelper) {}
		return;
	}
}
// System.Void Unity.Services.Analytics.Internal.ConsentTracker::.ctor(Unity.Services.Analytics.Internal.IGeoAPI,Unity.Services.Analytics.ICoreStatsHelper)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConsentTracker__ctor_m9C23286CCF2BC6690013071ECD56F7FC0B5B745C (ConsentTracker_tBDC1E317516ED67AC655A7D3B1D44EF5666B3FC4* __this, RuntimeObject* ___0_geoApi, RuntimeObject* ___1_coreStatsHelper, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GeoAPI_tDEC43B93D320DC5B81A4BD9F45491DD2E5D30287_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICoreStatsHelper_t436ACDCFB0D414BD45F5EAC4C05281101F24E6FD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	ConsentTracker_tBDC1E317516ED67AC655A7D3B1D44EF5666B3FC4* G_B2_1 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	ConsentTracker_tBDC1E317516ED67AC655A7D3B1D44EF5666B3FC4* G_B1_1 = NULL;
	{
		// internal ConsentTracker(IGeoAPI geoApi, ICoreStatsHelper coreStatsHelper)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// m_GeoAPI = geoApi ?? new GeoAPI();
		RuntimeObject* L_0 = ___0_geoApi;
		RuntimeObject* L_1 = L_0;
		G_B1_0 = L_1;
		G_B1_1 = __this;
		if (L_1)
		{
			G_B2_0 = L_1;
			G_B2_1 = __this;
			goto IL_0011;
		}
	}
	{
		GeoAPI_tDEC43B93D320DC5B81A4BD9F45491DD2E5D30287* L_2 = (GeoAPI_tDEC43B93D320DC5B81A4BD9F45491DD2E5D30287*)il2cpp_codegen_object_new(GeoAPI_tDEC43B93D320DC5B81A4BD9F45491DD2E5D30287_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		GeoAPI__ctor_m0C73E78C464E961E626A7D252140E6E2A60C148D(L_2, NULL);
		G_B2_0 = ((RuntimeObject*)(L_2));
		G_B2_1 = G_B1_1;
	}

IL_0011:
	{
		NullCheck(G_B2_1);
		G_B2_1->___m_GeoAPI_0 = G_B2_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B2_1->___m_GeoAPI_0), (void*)G_B2_0);
		// m_CoreStatsHelper = coreStatsHelper;
		RuntimeObject* L_3 = ___1_coreStatsHelper;
		__this->___m_CoreStatsHelper_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_CoreStatsHelper_1), (void*)L_3);
		// optOutConsentStatus = ConsentStatus.Unknown;
		ConsentTracker_set_optOutConsentStatus_m4BAAF67518F147B7203463AD1557E2E14A795657_inline(__this, 0, NULL);
		// optInPiplConsentStatus = ConsentStatus.Unknown;
		ConsentTracker_set_optInPiplConsentStatus_m7121DEA6C7203C39DD740E00262387EF06B1C732_inline(__this, 0, NULL);
		// ReadOptInPiplConsentStatus();
		ConsentTracker_ReadOptInPiplConsentStatus_m1BBCAFF95811454222E9A78CCBC1DB4331CF5127(__this, NULL);
		// ReadOptOutConsentStatus();
		ConsentTracker_ReadOptOutConsentStatus_m231368E1ECC2A7BBB5ADD724CB7BCB6BFA0D6E80(__this, NULL);
		// m_CoreStatsHelper.SetCoreStatsConsent(false);
		RuntimeObject* L_4 = __this->___m_CoreStatsHelper_1;
		NullCheck(L_4);
		InterfaceActionInvoker1< bool >::Invoke(0 /* System.Void Unity.Services.Analytics.ICoreStatsHelper::SetCoreStatsConsent(System.Boolean) */, ICoreStatsHelper_t436ACDCFB0D414BD45F5EAC4C05281101F24E6FD_il2cpp_TypeInfo_var, L_4, (bool)0);
		// }
		return;
	}
}
// System.Threading.Tasks.Task`1<Unity.Services.Analytics.Internal.GeoIPResponse> Unity.Services.Analytics.Internal.ConsentTracker::CheckGeoIP()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t3F0E026C38791877CBE0DEC23CD10E9103FBA9B2* ConsentTracker_CheckGeoIP_mB0D695199188D96285FD8A949913F0A0F2CA7064 (ConsentTracker_tBDC1E317516ED67AC655A7D3B1D44EF5666B3FC4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_Create_m4B6AFF0D63DE8B335551AC63B1E6A663CE9544A0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_Start_TisU3CCheckGeoIPU3Ed__19_tF4D189FF0813E0397D3684814869EC68573B2913_m666764D61DB7ABC8007283DF4BF8C0A50C2E7CB2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_get_Task_m650E5C11347CA5B2E79BFCE9C8BDE1865F4CBA29_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_tCC71288BC6FD1578916420F041FD9DD930D2EEE5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CCheckGeoIPU3Ed__19_tF4D189FF0813E0397D3684814869EC68573B2913 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_runtime_class_init_inline(AsyncTaskMethodBuilder_1_tCC71288BC6FD1578916420F041FD9DD930D2EEE5_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_1_tCC71288BC6FD1578916420F041FD9DD930D2EEE5 L_0;
		L_0 = AsyncTaskMethodBuilder_1_Create_m4B6AFF0D63DE8B335551AC63B1E6A663CE9544A0(AsyncTaskMethodBuilder_1_Create_m4B6AFF0D63DE8B335551AC63B1E6A663CE9544A0_RuntimeMethod_var);
		(&V_0)->___U3CU3Et__builder_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
		(&V_0)->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___U3CU3E4__this_2), (void*)__this);
		(&V_0)->___U3CU3E1__state_0 = (-1);
		AsyncTaskMethodBuilder_1_tCC71288BC6FD1578916420F041FD9DD930D2EEE5* L_1 = (&(&V_0)->___U3CU3Et__builder_1);
		AsyncTaskMethodBuilder_1_Start_TisU3CCheckGeoIPU3Ed__19_tF4D189FF0813E0397D3684814869EC68573B2913_m666764D61DB7ABC8007283DF4BF8C0A50C2E7CB2(L_1, (&V_0), AsyncTaskMethodBuilder_1_Start_TisU3CCheckGeoIPU3Ed__19_tF4D189FF0813E0397D3684814869EC68573B2913_m666764D61DB7ABC8007283DF4BF8C0A50C2E7CB2_RuntimeMethod_var);
		AsyncTaskMethodBuilder_1_tCC71288BC6FD1578916420F041FD9DD930D2EEE5* L_2 = (&(&V_0)->___U3CU3Et__builder_1);
		Task_1_t3F0E026C38791877CBE0DEC23CD10E9103FBA9B2* L_3;
		L_3 = AsyncTaskMethodBuilder_1_get_Task_m650E5C11347CA5B2E79BFCE9C8BDE1865F4CBA29(L_2, AsyncTaskMethodBuilder_1_get_Task_m650E5C11347CA5B2E79BFCE9C8BDE1865F4CBA29_RuntimeMethod_var);
		return L_3;
	}
}
// System.Boolean Unity.Services.Analytics.Internal.ConsentTracker::IsGeoIpChecked()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConsentTracker_IsGeoIpChecked_m59099E930C861F18CAF7D68E0546C5D05663E50E (ConsentTracker_tBDC1E317516ED67AC655A7D3B1D44EF5666B3FC4* __this, const RuntimeMethod* method) 
{
	{
		// return response != null;
		GeoIPResponse_tADA05745323DD2374411BCB8CEC9EC086B4FE150* L_0 = __this->___response_4;
		return (bool)((!(((RuntimeObject*)(GeoIPResponse_tADA05745323DD2374411BCB8CEC9EC086B4FE150*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
// System.Boolean Unity.Services.Analytics.Internal.ConsentTracker::IsConsentGiven()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConsentTracker_IsConsentGiven_m73AE70CC46CC8C736C47BE464B484132C9F1581A (ConsentTracker_tBDC1E317516ED67AC655A7D3B1D44EF5666B3FC4* __this, const RuntimeMethod* method) 
{
	{
		// ValidateConsentWasChecked();
		ConsentTracker_ValidateConsentWasChecked_m92986F8E992406A10E6712086DE129EB009935E6(__this, NULL);
		// return IsConsentGiven(response.identifier);
		GeoIPResponse_tADA05745323DD2374411BCB8CEC9EC086B4FE150* L_0 = __this->___response_4;
		NullCheck(L_0);
		String_t* L_1 = L_0->___identifier_0;
		bool L_2;
		L_2 = ConsentTracker_IsConsentGiven_m45BA5C4604FBACCB87933A7D812EEA65633F8338(__this, L_1, NULL);
		return L_2;
	}
}
// System.Boolean Unity.Services.Analytics.Internal.ConsentTracker::IsConsentGiven(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConsentTracker_IsConsentGiven_m45BA5C4604FBACCB87933A7D812EEA65633F8338 (ConsentTracker_tBDC1E317516ED67AC655A7D3B1D44EF5666B3FC4* __this, String_t* ___0_identifier, const RuntimeMethod* method) 
{
	{
		// if (identifier == Consent.Pipl)
		String_t* L_0 = ___0_identifier;
		String_t* L_1;
		L_1 = Consent_get_Pipl_m9EA6E585847439E839D5AE3063A5DCF6F6376605(NULL);
		bool L_2;
		L_2 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_0, L_1, NULL);
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		// return optInPiplConsentStatus == ConsentStatus.ConsentGiven;
		int32_t L_3;
		L_3 = ConsentTracker_get_optInPiplConsentStatus_m1F91E59567043A5429228EFBA83709725EB53A34_inline(__this, NULL);
		return (bool)((((int32_t)L_3) == ((int32_t)5))? 1 : 0);
	}

IL_0017:
	{
		// return optOutConsentStatus == ConsentStatus.Unknown;
		int32_t L_4;
		L_4 = ConsentTracker_get_optOutConsentStatus_mA1EB68620CB4A25DD2739C48F607DFE18924D415_inline(__this, NULL);
		return (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean Unity.Services.Analytics.Internal.ConsentTracker::IsConsentDenied()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConsentTracker_IsConsentDenied_mCF7AC1A9BB87846AA257EAC0D9D359B10F302662 (ConsentTracker_tBDC1E317516ED67AC655A7D3B1D44EF5666B3FC4* __this, const RuntimeMethod* method) 
{
	{
		// ValidateConsentWasChecked();
		ConsentTracker_ValidateConsentWasChecked_m92986F8E992406A10E6712086DE129EB009935E6(__this, NULL);
		// if (response.identifier == Consent.Pipl)
		GeoIPResponse_tADA05745323DD2374411BCB8CEC9EC086B4FE150* L_0 = __this->___response_4;
		NullCheck(L_0);
		String_t* L_1 = L_0->___identifier_0;
		String_t* L_2;
		L_2 = Consent_get_Pipl_m9EA6E585847439E839D5AE3063A5DCF6F6376605(NULL);
		bool L_3;
		L_3 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_1, L_2, NULL);
		if (!L_3)
		{
			goto IL_0032;
		}
	}
	{
		// return optInPiplConsentStatus == ConsentStatus.ConsentDenied
		//     || optInPiplConsentStatus == ConsentStatus.OptedOut;
		int32_t L_4;
		L_4 = ConsentTracker_get_optInPiplConsentStatus_m1F91E59567043A5429228EFBA83709725EB53A34_inline(__this, NULL);
		if ((((int32_t)L_4) == ((int32_t)6)))
		{
			goto IL_0030;
		}
	}
	{
		int32_t L_5;
		L_5 = ConsentTracker_get_optInPiplConsentStatus_m1F91E59567043A5429228EFBA83709725EB53A34_inline(__this, NULL);
		return (bool)((((int32_t)L_5) == ((int32_t)2))? 1 : 0);
	}

IL_0030:
	{
		return (bool)1;
	}

IL_0032:
	{
		// return optOutConsentStatus == ConsentStatus.OptedOut;
		int32_t L_6;
		L_6 = ConsentTracker_get_optOutConsentStatus_mA1EB68620CB4A25DD2739C48F607DFE18924D415_inline(__this, NULL);
		return (bool)((((int32_t)L_6) == ((int32_t)2))? 1 : 0);
	}
}
// System.Boolean Unity.Services.Analytics.Internal.ConsentTracker::IsOptingOutInProgress()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConsentTracker_IsOptingOutInProgress_m6969440734089DAFF92A792F7CD7B90DB929AB4B (ConsentTracker_tBDC1E317516ED67AC655A7D3B1D44EF5666B3FC4* __this, const RuntimeMethod* method) 
{
	{
		// ValidateConsentWasChecked();
		ConsentTracker_ValidateConsentWasChecked_m92986F8E992406A10E6712086DE129EB009935E6(__this, NULL);
		// return (response.identifier == Consent.Pipl)
		//     ? optInPiplConsentStatus == ConsentStatus.Forgetting
		//     : optOutConsentStatus == ConsentStatus.Forgetting;
		GeoIPResponse_tADA05745323DD2374411BCB8CEC9EC086B4FE150* L_0 = __this->___response_4;
		NullCheck(L_0);
		String_t* L_1 = L_0->___identifier_0;
		String_t* L_2;
		L_2 = Consent_get_Pipl_m9EA6E585847439E839D5AE3063A5DCF6F6376605(NULL);
		bool L_3;
		L_3 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_1, L_2, NULL);
		if (L_3)
		{
			goto IL_0027;
		}
	}
	{
		int32_t L_4;
		L_4 = ConsentTracker_get_optOutConsentStatus_mA1EB68620CB4A25DD2739C48F607DFE18924D415_inline(__this, NULL);
		return (bool)((((int32_t)L_4) == ((int32_t)1))? 1 : 0);
	}

IL_0027:
	{
		int32_t L_5;
		L_5 = ConsentTracker_get_optInPiplConsentStatus_m1F91E59567043A5429228EFBA83709725EB53A34_inline(__this, NULL);
		return (bool)((((int32_t)L_5) == ((int32_t)1))? 1 : 0);
	}
}
// System.Void Unity.Services.Analytics.Internal.ConsentTracker::BeginOptOutProcess()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConsentTracker_BeginOptOutProcess_mB0457E034ED8BDE55B6899B824710A22FB3C5FDB (ConsentTracker_tBDC1E317516ED67AC655A7D3B1D44EF5666B3FC4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral63727CA6C805007DCD3A3067D90A70432562D6EF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral843422B942D75E64BB0A2281AB972CE4A7EB3924);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (optInPiplConsentStatus == ConsentStatus.ConsentGiven)
		int32_t L_0;
		L_0 = ConsentTracker_get_optInPiplConsentStatus_m1F91E59567043A5429228EFBA83709725EB53A34_inline(__this, NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)5))))
		{
			goto IL_0025;
		}
	}
	{
		// optInPiplConsentStatus = ConsentStatus.Forgetting;
		ConsentTracker_set_optInPiplConsentStatus_m7121DEA6C7203C39DD740E00262387EF06B1C732_inline(__this, 1, NULL);
		// PlayerPrefs.SetInt(optInPiplConsentStatusPrefKey, (int)optInPiplConsentStatus);
		int32_t L_1;
		L_1 = ConsentTracker_get_optInPiplConsentStatus_m1F91E59567043A5429228EFBA83709725EB53A34_inline(__this, NULL);
		PlayerPrefs_SetInt_m956D3E2DB966F20CF42F842880DDF9E2BE94D948(_stringLiteral843422B942D75E64BB0A2281AB972CE4A7EB3924, L_1, NULL);
		// PlayerPrefs.Save();
		PlayerPrefs_Save_m82567E045D69C838112EA204B60C144D4C1EA3AE(NULL);
	}

IL_0025:
	{
		// if (optOutConsentStatus == ConsentStatus.Unknown)
		int32_t L_2;
		L_2 = ConsentTracker_get_optOutConsentStatus_mA1EB68620CB4A25DD2739C48F607DFE18924D415_inline(__this, NULL);
		if (L_2)
		{
			goto IL_0049;
		}
	}
	{
		// optOutConsentStatus = ConsentStatus.Forgetting;
		ConsentTracker_set_optOutConsentStatus_m4BAAF67518F147B7203463AD1557E2E14A795657_inline(__this, 1, NULL);
		// PlayerPrefs.SetInt(optOutConsentStatusPrefKey, (int)optOutConsentStatus);
		int32_t L_3;
		L_3 = ConsentTracker_get_optOutConsentStatus_mA1EB68620CB4A25DD2739C48F607DFE18924D415_inline(__this, NULL);
		PlayerPrefs_SetInt_m956D3E2DB966F20CF42F842880DDF9E2BE94D948(_stringLiteral63727CA6C805007DCD3A3067D90A70432562D6EF, L_3, NULL);
		// PlayerPrefs.Save();
		PlayerPrefs_Save_m82567E045D69C838112EA204B60C144D4C1EA3AE(NULL);
	}

IL_0049:
	{
		// }
		return;
	}
}
// System.Void Unity.Services.Analytics.Internal.ConsentTracker::FinishOptOutProcess()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConsentTracker_FinishOptOutProcess_mAD86F4E87DB74A31387B0D964A6F9F51BEA23165 (ConsentTracker_tBDC1E317516ED67AC655A7D3B1D44EF5666B3FC4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral63727CA6C805007DCD3A3067D90A70432562D6EF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral843422B942D75E64BB0A2281AB972CE4A7EB3924);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (optInPiplConsentStatus == ConsentStatus.Forgetting)
		int32_t L_0;
		L_0 = ConsentTracker_get_optInPiplConsentStatus_m1F91E59567043A5429228EFBA83709725EB53A34_inline(__this, NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0025;
		}
	}
	{
		// optInPiplConsentStatus = ConsentStatus.OptedOut;
		ConsentTracker_set_optInPiplConsentStatus_m7121DEA6C7203C39DD740E00262387EF06B1C732_inline(__this, 2, NULL);
		// PlayerPrefs.SetInt(optInPiplConsentStatusPrefKey, (int)optInPiplConsentStatus);
		int32_t L_1;
		L_1 = ConsentTracker_get_optInPiplConsentStatus_m1F91E59567043A5429228EFBA83709725EB53A34_inline(__this, NULL);
		PlayerPrefs_SetInt_m956D3E2DB966F20CF42F842880DDF9E2BE94D948(_stringLiteral843422B942D75E64BB0A2281AB972CE4A7EB3924, L_1, NULL);
		// PlayerPrefs.Save();
		PlayerPrefs_Save_m82567E045D69C838112EA204B60C144D4C1EA3AE(NULL);
	}

IL_0025:
	{
		// if (optOutConsentStatus == ConsentStatus.Forgetting)
		int32_t L_2;
		L_2 = ConsentTracker_get_optOutConsentStatus_mA1EB68620CB4A25DD2739C48F607DFE18924D415_inline(__this, NULL);
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			goto IL_004a;
		}
	}
	{
		// optOutConsentStatus = ConsentStatus.OptedOut;
		ConsentTracker_set_optOutConsentStatus_m4BAAF67518F147B7203463AD1557E2E14A795657_inline(__this, 2, NULL);
		// PlayerPrefs.SetInt(optOutConsentStatusPrefKey, (int)optOutConsentStatus);
		int32_t L_3;
		L_3 = ConsentTracker_get_optOutConsentStatus_mA1EB68620CB4A25DD2739C48F607DFE18924D415_inline(__this, NULL);
		PlayerPrefs_SetInt_m956D3E2DB966F20CF42F842880DDF9E2BE94D948(_stringLiteral63727CA6C805007DCD3A3067D90A70432562D6EF, L_3, NULL);
		// PlayerPrefs.Save();
		PlayerPrefs_Save_m82567E045D69C838112EA204B60C144D4C1EA3AE(NULL);
	}

IL_004a:
	{
		// }
		return;
	}
}
// System.Void Unity.Services.Analytics.Internal.ConsentTracker::SetDenyConsentToAll()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConsentTracker_SetDenyConsentToAll_m6CC30B97116F72CC394F3F35044043EFD550F571 (ConsentTracker_tBDC1E317516ED67AC655A7D3B1D44EF5666B3FC4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral63727CA6C805007DCD3A3067D90A70432562D6EF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral843422B942D75E64BB0A2281AB972CE4A7EB3924);
		s_Il2CppMethodInitialized = true;
	}
	ConsentTracker_tBDC1E317516ED67AC655A7D3B1D44EF5666B3FC4* G_B2_0 = NULL;
	ConsentTracker_tBDC1E317516ED67AC655A7D3B1D44EF5666B3FC4* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	ConsentTracker_tBDC1E317516ED67AC655A7D3B1D44EF5666B3FC4* G_B3_1 = NULL;
	{
		// optOutConsentStatus = ConsentStatus.OptedOut;
		ConsentTracker_set_optOutConsentStatus_m4BAAF67518F147B7203463AD1557E2E14A795657_inline(__this, 2, NULL);
		// optInPiplConsentStatus = optInPiplConsentStatus == ConsentStatus.Forgetting
		//     ? ConsentStatus.OptedOut
		//     : ConsentStatus.ConsentDenied;
		int32_t L_0;
		L_0 = ConsentTracker_get_optInPiplConsentStatus_m1F91E59567043A5429228EFBA83709725EB53A34_inline(__this, NULL);
		G_B1_0 = __this;
		if ((((int32_t)L_0) == ((int32_t)1)))
		{
			G_B2_0 = __this;
			goto IL_0014;
		}
	}
	{
		G_B3_0 = 6;
		G_B3_1 = G_B1_0;
		goto IL_0015;
	}

IL_0014:
	{
		G_B3_0 = 2;
		G_B3_1 = G_B2_0;
	}

IL_0015:
	{
		NullCheck(G_B3_1);
		ConsentTracker_set_optInPiplConsentStatus_m7121DEA6C7203C39DD740E00262387EF06B1C732_inline(G_B3_1, G_B3_0, NULL);
		// PlayerPrefs.SetInt(optInPiplConsentStatusPrefKey, (int)optInPiplConsentStatus);
		int32_t L_1;
		L_1 = ConsentTracker_get_optInPiplConsentStatus_m1F91E59567043A5429228EFBA83709725EB53A34_inline(__this, NULL);
		PlayerPrefs_SetInt_m956D3E2DB966F20CF42F842880DDF9E2BE94D948(_stringLiteral843422B942D75E64BB0A2281AB972CE4A7EB3924, L_1, NULL);
		// PlayerPrefs.SetInt(optOutConsentStatusPrefKey, (int)optOutConsentStatus);
		int32_t L_2;
		L_2 = ConsentTracker_get_optOutConsentStatus_mA1EB68620CB4A25DD2739C48F607DFE18924D415_inline(__this, NULL);
		PlayerPrefs_SetInt_m956D3E2DB966F20CF42F842880DDF9E2BE94D948(_stringLiteral63727CA6C805007DCD3A3067D90A70432562D6EF, L_2, NULL);
		// PlayerPrefs.Save();
		PlayerPrefs_Save_m82567E045D69C838112EA204B60C144D4C1EA3AE(NULL);
		// }
		return;
	}
}
// System.Void Unity.Services.Analytics.Internal.ConsentTracker::ReadOptInPiplConsentStatus()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConsentTracker_ReadOptInPiplConsentStatus_m1BBCAFF95811454222E9A78CCBC1DB4331CF5127 (ConsentTracker_tBDC1E317516ED67AC655A7D3B1D44EF5666B3FC4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral843422B942D75E64BB0A2281AB972CE4A7EB3924);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (PlayerPrefs.HasKey(optInPiplConsentStatusPrefKey))
		bool L_0;
		L_0 = PlayerPrefs_HasKey_mCA5C64BBA6BF8B230BC3BC92B4761DD3B11D4668(_stringLiteral843422B942D75E64BB0A2281AB972CE4A7EB3924, NULL);
		if (!L_0)
		{
			goto IL_001c;
		}
	}
	{
		// optInPiplConsentStatus = (ConsentStatus)PlayerPrefs.GetInt(optInPiplConsentStatusPrefKey);
		int32_t L_1;
		L_1 = PlayerPrefs_GetInt_m4D859DBEABAD3FB406C94485A0B2638A0C7F2987(_stringLiteral843422B942D75E64BB0A2281AB972CE4A7EB3924, NULL);
		ConsentTracker_set_optInPiplConsentStatus_m7121DEA6C7203C39DD740E00262387EF06B1C732_inline(__this, L_1, NULL);
	}

IL_001c:
	{
		// }
		return;
	}
}
// System.Void Unity.Services.Analytics.Internal.ConsentTracker::ReadOptOutConsentStatus()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConsentTracker_ReadOptOutConsentStatus_m231368E1ECC2A7BBB5ADD724CB7BCB6BFA0D6E80 (ConsentTracker_tBDC1E317516ED67AC655A7D3B1D44EF5666B3FC4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral63727CA6C805007DCD3A3067D90A70432562D6EF);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (PlayerPrefs.HasKey(optOutConsentStatusPrefKey))
		bool L_0;
		L_0 = PlayerPrefs_HasKey_mCA5C64BBA6BF8B230BC3BC92B4761DD3B11D4668(_stringLiteral63727CA6C805007DCD3A3067D90A70432562D6EF, NULL);
		if (!L_0)
		{
			goto IL_001c;
		}
	}
	{
		// optOutConsentStatus = (ConsentStatus)PlayerPrefs.GetInt(optOutConsentStatusPrefKey);
		int32_t L_1;
		L_1 = PlayerPrefs_GetInt_m4D859DBEABAD3FB406C94485A0B2638A0C7F2987(_stringLiteral63727CA6C805007DCD3A3067D90A70432562D6EF, NULL);
		ConsentTracker_set_optOutConsentStatus_m4BAAF67518F147B7203463AD1557E2E14A795657_inline(__this, L_1, NULL);
	}

IL_001c:
	{
		// }
		return;
	}
}
// System.Threading.Tasks.Task`1<Unity.Services.Analytics.Internal.GeoIPResponse> Unity.Services.Analytics.Internal.ConsentTracker::GetGeoIPResponse()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t3F0E026C38791877CBE0DEC23CD10E9103FBA9B2* ConsentTracker_GetGeoIPResponse_m67ADCB7DD19286D83C63C5F1129F19E1F9F6F656 (ConsentTracker_tBDC1E317516ED67AC655A7D3B1D44EF5666B3FC4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_Create_m4B6AFF0D63DE8B335551AC63B1E6A663CE9544A0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_Start_TisU3CGetGeoIPResponseU3Ed__33_tEB679EFC74F417928C47D29F932F7D9D7A8C3292_m73E08A89008E64DC46E1ACEC665EC6272CDD4622_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_get_Task_m650E5C11347CA5B2E79BFCE9C8BDE1865F4CBA29_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_tCC71288BC6FD1578916420F041FD9DD930D2EEE5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CGetGeoIPResponseU3Ed__33_tEB679EFC74F417928C47D29F932F7D9D7A8C3292 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_runtime_class_init_inline(AsyncTaskMethodBuilder_1_tCC71288BC6FD1578916420F041FD9DD930D2EEE5_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_1_tCC71288BC6FD1578916420F041FD9DD930D2EEE5 L_0;
		L_0 = AsyncTaskMethodBuilder_1_Create_m4B6AFF0D63DE8B335551AC63B1E6A663CE9544A0(AsyncTaskMethodBuilder_1_Create_m4B6AFF0D63DE8B335551AC63B1E6A663CE9544A0_RuntimeMethod_var);
		(&V_0)->___U3CU3Et__builder_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
		(&V_0)->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___U3CU3E4__this_2), (void*)__this);
		(&V_0)->___U3CU3E1__state_0 = (-1);
		AsyncTaskMethodBuilder_1_tCC71288BC6FD1578916420F041FD9DD930D2EEE5* L_1 = (&(&V_0)->___U3CU3Et__builder_1);
		AsyncTaskMethodBuilder_1_Start_TisU3CGetGeoIPResponseU3Ed__33_tEB679EFC74F417928C47D29F932F7D9D7A8C3292_m73E08A89008E64DC46E1ACEC665EC6272CDD4622(L_1, (&V_0), AsyncTaskMethodBuilder_1_Start_TisU3CGetGeoIPResponseU3Ed__33_tEB679EFC74F417928C47D29F932F7D9D7A8C3292_m73E08A89008E64DC46E1ACEC665EC6272CDD4622_RuntimeMethod_var);
		AsyncTaskMethodBuilder_1_tCC71288BC6FD1578916420F041FD9DD930D2EEE5* L_2 = (&(&V_0)->___U3CU3Et__builder_1);
		Task_1_t3F0E026C38791877CBE0DEC23CD10E9103FBA9B2* L_3;
		L_3 = AsyncTaskMethodBuilder_1_get_Task_m650E5C11347CA5B2E79BFCE9C8BDE1865F4CBA29(L_2, AsyncTaskMethodBuilder_1_get_Task_m650E5C11347CA5B2E79BFCE9C8BDE1865F4CBA29_RuntimeMethod_var);
		return L_3;
	}
}
// System.Void Unity.Services.Analytics.Internal.ConsentTracker::ValidateConsentWasChecked()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConsentTracker_ValidateConsentWasChecked_m92986F8E992406A10E6712086DE129EB009935E6 (ConsentTracker_tBDC1E317516ED67AC655A7D3B1D44EF5666B3FC4* __this, const RuntimeMethod* method) 
{
	{
		// if (!IsGeoIpChecked())
		bool L_0;
		L_0 = ConsentTracker_IsGeoIpChecked_m59099E930C861F18CAF7D68E0546C5D05663E50E(__this, NULL);
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		// throw new ConsentCheckException(ConsentCheckExceptionReason.ConsentFlowNotKnown,
		//     CommonErrorCodes.Unknown,
		//     "The required consent flow cannot be determined. Make sure GeoIP was successfully called.",
		//     null);
		ConsentCheckException_t96E7054ECB013548EA92EEFFFACAB143D5A86B7D* L_1 = (ConsentCheckException_t96E7054ECB013548EA92EEFFFACAB143D5A86B7D*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ConsentCheckException_t96E7054ECB013548EA92EEFFFACAB143D5A86B7D_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ConsentCheckException__ctor_m0F6DC7108E11524A5BBBE85F07DD082873FE95B3(L_1, 4, 0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1478BC45A3EF425780ADB183A6419907115E223E)), (Exception_t*)NULL, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ConsentTracker_ValidateConsentWasChecked_m92986F8E992406A10E6712086DE129EB009935E6_RuntimeMethod_var)));
	}

IL_0016:
	{
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Unity.Services.Analytics.Internal.ConsentTracker/<CheckGeoIP>d__19::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCheckGeoIPU3Ed__19_MoveNext_mE50FA81A1A7EC3B8AD5BACF2ED7D89137B90394B (U3CCheckGeoIPU3Ed__19_tF4D189FF0813E0397D3684814869EC68573B2913* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t67679171BEFE85C38666397015D627C6E3E7D886_TisU3CCheckGeoIPU3Ed__19_tF4D189FF0813E0397D3684814869EC68573B2913_m6F67D29FE3BD690109387456790DA526E3F3D722_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetResult_m8964201B7044B7762317C83D8CA064A284DAD38F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICoreStatsHelper_t436ACDCFB0D414BD45F5EAC4C05281101F24E6FD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_GetResult_m5F5B61E5E8007E22BF56CC4D63AB61FE9584FDD9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_get_IsCompleted_mD7F9B812B03F8973495724BC92A2F4AAC37E0179_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_GetAwaiter_mCB01C4C331E45364EDA04B3FDB90705CA93004E7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral843422B942D75E64BB0A2281AB972CE4A7EB3924);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ConsentTracker_tBDC1E317516ED67AC655A7D3B1D44EF5666B3FC4* V_1 = NULL;
	GeoIPResponse_tADA05745323DD2374411BCB8CEC9EC086B4FE150* V_2 = NULL;
	GeoIPResponse_tADA05745323DD2374411BCB8CEC9EC086B4FE150* V_3 = NULL;
	TaskAwaiter_1_t67679171BEFE85C38666397015D627C6E3E7D886 V_4;
	memset((&V_4), 0, sizeof(V_4));
	Exception_t* V_5 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	ConsentTracker_tBDC1E317516ED67AC655A7D3B1D44EF5666B3FC4* G_B13_0 = NULL;
	ConsentTracker_tBDC1E317516ED67AC655A7D3B1D44EF5666B3FC4* G_B12_0 = NULL;
	int32_t G_B14_0 = 0;
	ConsentTracker_tBDC1E317516ED67AC655A7D3B1D44EF5666B3FC4* G_B14_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		ConsentTracker_tBDC1E317516ED67AC655A7D3B1D44EF5666B3FC4* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_2 = V_0;
		}
		try
		{// begin try (depth: 2)
			{
				int32_t L_3 = V_0;
				if (!L_3)
				{
					goto IL_0062_2;
				}
			}
			{
				// if (IsGeoIpChecked())
				ConsentTracker_tBDC1E317516ED67AC655A7D3B1D44EF5666B3FC4* L_4 = V_1;
				NullCheck(L_4);
				bool L_5;
				L_5 = ConsentTracker_IsGeoIpChecked_m59099E930C861F18CAF7D68E0546C5D05663E50E(L_4, NULL);
				if (!L_5)
				{
					goto IL_0028_2;
				}
			}
			{
				// return response;
				ConsentTracker_tBDC1E317516ED67AC655A7D3B1D44EF5666B3FC4* L_6 = V_1;
				NullCheck(L_6);
				GeoIPResponse_tADA05745323DD2374411BCB8CEC9EC086B4FE150* L_7 = L_6->___response_4;
				V_2 = L_7;
				goto IL_0108;
			}

IL_0028_2:
			{
				// var newResponse = await GetGeoIPResponse();
				ConsentTracker_tBDC1E317516ED67AC655A7D3B1D44EF5666B3FC4* L_8 = V_1;
				NullCheck(L_8);
				Task_1_t3F0E026C38791877CBE0DEC23CD10E9103FBA9B2* L_9;
				L_9 = ConsentTracker_GetGeoIPResponse_m67ADCB7DD19286D83C63C5F1129F19E1F9F6F656(L_8, NULL);
				NullCheck(L_9);
				TaskAwaiter_1_t67679171BEFE85C38666397015D627C6E3E7D886 L_10;
				L_10 = Task_1_GetAwaiter_mCB01C4C331E45364EDA04B3FDB90705CA93004E7(L_9, Task_1_GetAwaiter_mCB01C4C331E45364EDA04B3FDB90705CA93004E7_RuntimeMethod_var);
				V_4 = L_10;
				bool L_11;
				L_11 = TaskAwaiter_1_get_IsCompleted_mD7F9B812B03F8973495724BC92A2F4AAC37E0179((&V_4), TaskAwaiter_1_get_IsCompleted_mD7F9B812B03F8973495724BC92A2F4AAC37E0179_RuntimeMethod_var);
				if (L_11)
				{
					goto IL_007f_2;
				}
			}
			{
				int32_t L_12 = 0;
				V_0 = L_12;
				__this->___U3CU3E1__state_0 = L_12;
				TaskAwaiter_1_t67679171BEFE85C38666397015D627C6E3E7D886 L_13 = V_4;
				__this->___U3CU3Eu__1_3 = L_13;
				Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__1_3))->___m_task_0), (void*)NULL);
				AsyncTaskMethodBuilder_1_tCC71288BC6FD1578916420F041FD9DD930D2EEE5* L_14 = (&__this->___U3CU3Et__builder_1);
				AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t67679171BEFE85C38666397015D627C6E3E7D886_TisU3CCheckGeoIPU3Ed__19_tF4D189FF0813E0397D3684814869EC68573B2913_m6F67D29FE3BD690109387456790DA526E3F3D722(L_14, (&V_4), __this, AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t67679171BEFE85C38666397015D627C6E3E7D886_TisU3CCheckGeoIPU3Ed__19_tF4D189FF0813E0397D3684814869EC68573B2913_m6F67D29FE3BD690109387456790DA526E3F3D722_RuntimeMethod_var);
				goto IL_011c;
			}

IL_0062_2:
			{
				TaskAwaiter_1_t67679171BEFE85C38666397015D627C6E3E7D886 L_15 = __this->___U3CU3Eu__1_3;
				V_4 = L_15;
				TaskAwaiter_1_t67679171BEFE85C38666397015D627C6E3E7D886* L_16 = (&__this->___U3CU3Eu__1_3);
				il2cpp_codegen_initobj(L_16, sizeof(TaskAwaiter_1_t67679171BEFE85C38666397015D627C6E3E7D886));
				int32_t L_17 = (-1);
				V_0 = L_17;
				__this->___U3CU3E1__state_0 = L_17;
			}

IL_007f_2:
			{
				GeoIPResponse_tADA05745323DD2374411BCB8CEC9EC086B4FE150* L_18;
				L_18 = TaskAwaiter_1_GetResult_m5F5B61E5E8007E22BF56CC4D63AB61FE9584FDD9((&V_4), TaskAwaiter_1_GetResult_m5F5B61E5E8007E22BF56CC4D63AB61FE9584FDD9_RuntimeMethod_var);
				V_3 = L_18;
				// response = newResponse;
				ConsentTracker_tBDC1E317516ED67AC655A7D3B1D44EF5666B3FC4* L_19 = V_1;
				GeoIPResponse_tADA05745323DD2374411BCB8CEC9EC086B4FE150* L_20 = V_3;
				NullCheck(L_19);
				L_19->___response_4 = L_20;
				Il2CppCodeGenWriteBarrier((void**)(&L_19->___response_4), (void*)L_20);
				// if (optInPiplConsentStatus == ConsentStatus.Unknown || optInPiplConsentStatus == ConsentStatus.NotRequired
				//     || optInPiplConsentStatus == ConsentStatus.RequiredButUnchecked)
				ConsentTracker_tBDC1E317516ED67AC655A7D3B1D44EF5666B3FC4* L_21 = V_1;
				NullCheck(L_21);
				int32_t L_22;
				L_22 = ConsentTracker_get_optInPiplConsentStatus_m1F91E59567043A5429228EFBA83709725EB53A34_inline(L_21, NULL);
				if (!L_22)
				{
					goto IL_00a8_2;
				}
			}
			{
				ConsentTracker_tBDC1E317516ED67AC655A7D3B1D44EF5666B3FC4* L_23 = V_1;
				NullCheck(L_23);
				int32_t L_24;
				L_24 = ConsentTracker_get_optInPiplConsentStatus_m1F91E59567043A5429228EFBA83709725EB53A34_inline(L_23, NULL);
				if ((((int32_t)L_24) == ((int32_t)3)))
				{
					goto IL_00a8_2;
				}
			}
			{
				ConsentTracker_tBDC1E317516ED67AC655A7D3B1D44EF5666B3FC4* L_25 = V_1;
				NullCheck(L_25);
				int32_t L_26;
				L_26 = ConsentTracker_get_optInPiplConsentStatus_m1F91E59567043A5429228EFBA83709725EB53A34_inline(L_25, NULL);
				if ((!(((uint32_t)L_26) == ((uint32_t)4))))
				{
					goto IL_00d9_2;
				}
			}

IL_00a8_2:
			{
				// optInPiplConsentStatus = newResponse.identifier == Consent.Pipl
				//     ? ConsentStatus.RequiredButUnchecked
				//     : ConsentStatus.NotRequired;
				ConsentTracker_tBDC1E317516ED67AC655A7D3B1D44EF5666B3FC4* L_27 = V_1;
				GeoIPResponse_tADA05745323DD2374411BCB8CEC9EC086B4FE150* L_28 = V_3;
				NullCheck(L_28);
				String_t* L_29 = L_28->___identifier_0;
				String_t* L_30;
				L_30 = Consent_get_Pipl_m9EA6E585847439E839D5AE3063A5DCF6F6376605(NULL);
				bool L_31;
				L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_29, L_30, NULL);
				G_B12_0 = L_27;
				if (L_31)
				{
					G_B13_0 = L_27;
					goto IL_00be_2;
				}
			}
			{
				G_B14_0 = 3;
				G_B14_1 = G_B12_0;
				goto IL_00bf_2;
			}

IL_00be_2:
			{
				G_B14_0 = 4;
				G_B14_1 = G_B13_0;
			}

IL_00bf_2:
			{
				NullCheck(G_B14_1);
				ConsentTracker_set_optInPiplConsentStatus_m7121DEA6C7203C39DD740E00262387EF06B1C732_inline(G_B14_1, G_B14_0, NULL);
				// PlayerPrefs.SetInt(optInPiplConsentStatusPrefKey, (int)optInPiplConsentStatus);
				ConsentTracker_tBDC1E317516ED67AC655A7D3B1D44EF5666B3FC4* L_32 = V_1;
				NullCheck(L_32);
				int32_t L_33;
				L_33 = ConsentTracker_get_optInPiplConsentStatus_m1F91E59567043A5429228EFBA83709725EB53A34_inline(L_32, NULL);
				PlayerPrefs_SetInt_m956D3E2DB966F20CF42F842880DDF9E2BE94D948(_stringLiteral843422B942D75E64BB0A2281AB972CE4A7EB3924, L_33, NULL);
				// PlayerPrefs.Save();
				PlayerPrefs_Save_m82567E045D69C838112EA204B60C144D4C1EA3AE(NULL);
			}

IL_00d9_2:
			{
				// m_CoreStatsHelper.SetCoreStatsConsent(IsConsentGiven());
				ConsentTracker_tBDC1E317516ED67AC655A7D3B1D44EF5666B3FC4* L_34 = V_1;
				NullCheck(L_34);
				RuntimeObject* L_35 = L_34->___m_CoreStatsHelper_1;
				ConsentTracker_tBDC1E317516ED67AC655A7D3B1D44EF5666B3FC4* L_36 = V_1;
				NullCheck(L_36);
				bool L_37;
				L_37 = ConsentTracker_IsConsentGiven_m73AE70CC46CC8C736C47BE464B484132C9F1581A(L_36, NULL);
				NullCheck(L_35);
				InterfaceActionInvoker1< bool >::Invoke(0 /* System.Void Unity.Services.Analytics.ICoreStatsHelper::SetCoreStatsConsent(System.Boolean) */, ICoreStatsHelper_t436ACDCFB0D414BD45F5EAC4C05281101F24E6FD_il2cpp_TypeInfo_var, L_35, L_37);
				// return newResponse;
				GeoIPResponse_tADA05745323DD2374411BCB8CEC9EC086B4FE150* L_38 = V_3;
				V_2 = L_38;
				goto IL_0108;
			}
		}// end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ConsentCheckException_t96E7054ECB013548EA92EEFFFACAB143D5A86B7D_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_00ee_1;
			}
			throw e;
		}

CATCH_00ee_1:
		{// begin catch(Unity.Services.Analytics.ConsentCheckException)
			// throw e;
			IL2CPP_RAISE_MANAGED_EXCEPTION(((ConsentCheckException_t96E7054ECB013548EA92EEFFFACAB143D5A86B7D*)IL2CPP_GET_ACTIVE_EXCEPTION(ConsentCheckException_t96E7054ECB013548EA92EEFFFACAB143D5A86B7D*)), ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CCheckGeoIPU3Ed__19_MoveNext_mE50FA81A1A7EC3B8AD5BACF2ED7D89137B90394B_RuntimeMethod_var)));
		}// end catch (depth: 2)
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00ef;
		}
		throw e;
	}

CATCH_00ef:
	{// begin catch(System.Exception)
		V_5 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncTaskMethodBuilder_1_tCC71288BC6FD1578916420F041FD9DD930D2EEE5* L_39 = (&__this->___U3CU3Et__builder_1);
		Exception_t* L_40 = V_5;
		AsyncTaskMethodBuilder_1_SetException_m755EC2E736574A631BEC6E2F204F9AF72A5CFE2A(L_39, L_40, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncTaskMethodBuilder_1_SetException_m755EC2E736574A631BEC6E2F204F9AF72A5CFE2A_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_011c;
	}// end catch (depth: 1)

IL_0108:
	{
		// }
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncTaskMethodBuilder_1_tCC71288BC6FD1578916420F041FD9DD930D2EEE5* L_41 = (&__this->___U3CU3Et__builder_1);
		GeoIPResponse_tADA05745323DD2374411BCB8CEC9EC086B4FE150* L_42 = V_2;
		AsyncTaskMethodBuilder_1_SetResult_m8964201B7044B7762317C83D8CA064A284DAD38F(L_41, L_42, AsyncTaskMethodBuilder_1_SetResult_m8964201B7044B7762317C83D8CA064A284DAD38F_RuntimeMethod_var);
	}

IL_011c:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CCheckGeoIPU3Ed__19_MoveNext_mE50FA81A1A7EC3B8AD5BACF2ED7D89137B90394B_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3CCheckGeoIPU3Ed__19_tF4D189FF0813E0397D3684814869EC68573B2913* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CCheckGeoIPU3Ed__19_tF4D189FF0813E0397D3684814869EC68573B2913*>(__this + _offset);
	U3CCheckGeoIPU3Ed__19_MoveNext_mE50FA81A1A7EC3B8AD5BACF2ED7D89137B90394B(_thisAdjusted, method);
}
// System.Void Unity.Services.Analytics.Internal.ConsentTracker/<CheckGeoIP>d__19::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCheckGeoIPU3Ed__19_SetStateMachine_mD47ACB45E356285C8BB5F9147A5DEDC5B1163650 (U3CCheckGeoIPU3Ed__19_tF4D189FF0813E0397D3684814869EC68573B2913* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetStateMachine_m618193D95F04A13F9794E020AC25EF91306A8670_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		AsyncTaskMethodBuilder_1_tCC71288BC6FD1578916420F041FD9DD930D2EEE5* L_0 = (&__this->___U3CU3Et__builder_1);
		RuntimeObject* L_1 = ___0_stateMachine;
		AsyncTaskMethodBuilder_1_SetStateMachine_m618193D95F04A13F9794E020AC25EF91306A8670(L_0, L_1, AsyncTaskMethodBuilder_1_SetStateMachine_m618193D95F04A13F9794E020AC25EF91306A8670_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CCheckGeoIPU3Ed__19_SetStateMachine_mD47ACB45E356285C8BB5F9147A5DEDC5B1163650_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method)
{
	U3CCheckGeoIPU3Ed__19_tF4D189FF0813E0397D3684814869EC68573B2913* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CCheckGeoIPU3Ed__19_tF4D189FF0813E0397D3684814869EC68573B2913*>(__this + _offset);
	U3CCheckGeoIPU3Ed__19_SetStateMachine_mD47ACB45E356285C8BB5F9147A5DEDC5B1163650(_thisAdjusted, ___0_stateMachine, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Unity.Services.Analytics.Internal.ConsentTracker/<GetGeoIPResponse>d__33::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetGeoIPResponseU3Ed__33_MoveNext_m8DC3796520E412B06E1C572F3D665F90CFF8D71D (U3CGetGeoIPResponseU3Ed__33_tEB679EFC74F417928C47D29F932F7D9D7A8C3292* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t67679171BEFE85C38666397015D627C6E3E7D886_TisU3CGetGeoIPResponseU3Ed__33_tEB679EFC74F417928C47D29F932F7D9D7A8C3292_m9C98D724DAFB7DF57764019C4A1087E586617EDE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetResult_m8964201B7044B7762317C83D8CA064A284DAD38F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IGeoAPI_tC74F141E9C8F842B21B297651037711D955CA5CD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_GetResult_m5F5B61E5E8007E22BF56CC4D63AB61FE9584FDD9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_get_IsCompleted_mD7F9B812B03F8973495724BC92A2F4AAC37E0179_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_GetAwaiter_mCB01C4C331E45364EDA04B3FDB90705CA93004E7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ConsentTracker_tBDC1E317516ED67AC655A7D3B1D44EF5666B3FC4* V_1 = NULL;
	GeoIPResponse_tADA05745323DD2374411BCB8CEC9EC086B4FE150* V_2 = NULL;
	TaskAwaiter_1_t67679171BEFE85C38666397015D627C6E3E7D886 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Exception_t* V_4 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		ConsentTracker_tBDC1E317516ED67AC655A7D3B1D44EF5666B3FC4* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_2 = V_0;
		}
		try
		{// begin try (depth: 2)
			{
				int32_t L_3 = V_0;
				if (!L_3)
				{
					goto IL_004e_2;
				}
			}
			{
				// return await m_GeoAPI.MakeRequest();
				ConsentTracker_tBDC1E317516ED67AC655A7D3B1D44EF5666B3FC4* L_4 = V_1;
				NullCheck(L_4);
				RuntimeObject* L_5 = L_4->___m_GeoAPI_0;
				NullCheck(L_5);
				Task_1_t3F0E026C38791877CBE0DEC23CD10E9103FBA9B2* L_6;
				L_6 = InterfaceFuncInvoker0< Task_1_t3F0E026C38791877CBE0DEC23CD10E9103FBA9B2* >::Invoke(0 /* System.Threading.Tasks.Task`1<Unity.Services.Analytics.Internal.GeoIPResponse> Unity.Services.Analytics.Internal.IGeoAPI::MakeRequest() */, IGeoAPI_tC74F141E9C8F842B21B297651037711D955CA5CD_il2cpp_TypeInfo_var, L_5);
				NullCheck(L_6);
				TaskAwaiter_1_t67679171BEFE85C38666397015D627C6E3E7D886 L_7;
				L_7 = Task_1_GetAwaiter_mCB01C4C331E45364EDA04B3FDB90705CA93004E7(L_6, Task_1_GetAwaiter_mCB01C4C331E45364EDA04B3FDB90705CA93004E7_RuntimeMethod_var);
				V_3 = L_7;
				bool L_8;
				L_8 = TaskAwaiter_1_get_IsCompleted_mD7F9B812B03F8973495724BC92A2F4AAC37E0179((&V_3), TaskAwaiter_1_get_IsCompleted_mD7F9B812B03F8973495724BC92A2F4AAC37E0179_RuntimeMethod_var);
				if (L_8)
				{
					goto IL_006a_2;
				}
			}
			{
				int32_t L_9 = 0;
				V_0 = L_9;
				__this->___U3CU3E1__state_0 = L_9;
				TaskAwaiter_1_t67679171BEFE85C38666397015D627C6E3E7D886 L_10 = V_3;
				__this->___U3CU3Eu__1_3 = L_10;
				Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__1_3))->___m_task_0), (void*)NULL);
				AsyncTaskMethodBuilder_1_tCC71288BC6FD1578916420F041FD9DD930D2EEE5* L_11 = (&__this->___U3CU3Et__builder_1);
				AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t67679171BEFE85C38666397015D627C6E3E7D886_TisU3CGetGeoIPResponseU3Ed__33_tEB679EFC74F417928C47D29F932F7D9D7A8C3292_m9C98D724DAFB7DF57764019C4A1087E586617EDE(L_11, (&V_3), __this, AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t67679171BEFE85C38666397015D627C6E3E7D886_TisU3CGetGeoIPResponseU3Ed__33_tEB679EFC74F417928C47D29F932F7D9D7A8C3292_m9C98D724DAFB7DF57764019C4A1087E586617EDE_RuntimeMethod_var);
				goto IL_00a2;
			}

IL_004e_2:
			{
				TaskAwaiter_1_t67679171BEFE85C38666397015D627C6E3E7D886 L_12 = __this->___U3CU3Eu__1_3;
				V_3 = L_12;
				TaskAwaiter_1_t67679171BEFE85C38666397015D627C6E3E7D886* L_13 = (&__this->___U3CU3Eu__1_3);
				il2cpp_codegen_initobj(L_13, sizeof(TaskAwaiter_1_t67679171BEFE85C38666397015D627C6E3E7D886));
				int32_t L_14 = (-1);
				V_0 = L_14;
				__this->___U3CU3E1__state_0 = L_14;
			}

IL_006a_2:
			{
				GeoIPResponse_tADA05745323DD2374411BCB8CEC9EC086B4FE150* L_15;
				L_15 = TaskAwaiter_1_GetResult_m5F5B61E5E8007E22BF56CC4D63AB61FE9584FDD9((&V_3), TaskAwaiter_1_GetResult_m5F5B61E5E8007E22BF56CC4D63AB61FE9584FDD9_RuntimeMethod_var);
				V_2 = L_15;
				goto IL_008e;
			}
		}// end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ConsentCheckException_t96E7054ECB013548EA92EEFFFACAB143D5A86B7D_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0074_1;
			}
			throw e;
		}

CATCH_0074_1:
		{// begin catch(Unity.Services.Analytics.ConsentCheckException)
			// throw e;
			IL2CPP_RAISE_MANAGED_EXCEPTION(((ConsentCheckException_t96E7054ECB013548EA92EEFFFACAB143D5A86B7D*)IL2CPP_GET_ACTIVE_EXCEPTION(ConsentCheckException_t96E7054ECB013548EA92EEFFFACAB143D5A86B7D*)), ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CGetGeoIPResponseU3Ed__33_MoveNext_m8DC3796520E412B06E1C572F3D665F90CFF8D71D_RuntimeMethod_var)));
		}// end catch (depth: 2)
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0075;
		}
		throw e;
	}

CATCH_0075:
	{// begin catch(System.Exception)
		V_4 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncTaskMethodBuilder_1_tCC71288BC6FD1578916420F041FD9DD930D2EEE5* L_16 = (&__this->___U3CU3Et__builder_1);
		Exception_t* L_17 = V_4;
		AsyncTaskMethodBuilder_1_SetException_m755EC2E736574A631BEC6E2F204F9AF72A5CFE2A(L_16, L_17, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncTaskMethodBuilder_1_SetException_m755EC2E736574A631BEC6E2F204F9AF72A5CFE2A_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00a2;
	}// end catch (depth: 1)

IL_008e:
	{
		// }
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncTaskMethodBuilder_1_tCC71288BC6FD1578916420F041FD9DD930D2EEE5* L_18 = (&__this->___U3CU3Et__builder_1);
		GeoIPResponse_tADA05745323DD2374411BCB8CEC9EC086B4FE150* L_19 = V_2;
		AsyncTaskMethodBuilder_1_SetResult_m8964201B7044B7762317C83D8CA064A284DAD38F(L_18, L_19, AsyncTaskMethodBuilder_1_SetResult_m8964201B7044B7762317C83D8CA064A284DAD38F_RuntimeMethod_var);
	}

IL_00a2:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CGetGeoIPResponseU3Ed__33_MoveNext_m8DC3796520E412B06E1C572F3D665F90CFF8D71D_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3CGetGeoIPResponseU3Ed__33_tEB679EFC74F417928C47D29F932F7D9D7A8C3292* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CGetGeoIPResponseU3Ed__33_tEB679EFC74F417928C47D29F932F7D9D7A8C3292*>(__this + _offset);
	U3CGetGeoIPResponseU3Ed__33_MoveNext_m8DC3796520E412B06E1C572F3D665F90CFF8D71D(_thisAdjusted, method);
}
// System.Void Unity.Services.Analytics.Internal.ConsentTracker/<GetGeoIPResponse>d__33::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetGeoIPResponseU3Ed__33_SetStateMachine_m74A1484D7DB6DD67B7E7F0C16106CB2EC413F225 (U3CGetGeoIPResponseU3Ed__33_tEB679EFC74F417928C47D29F932F7D9D7A8C3292* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetStateMachine_m618193D95F04A13F9794E020AC25EF91306A8670_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		AsyncTaskMethodBuilder_1_tCC71288BC6FD1578916420F041FD9DD930D2EEE5* L_0 = (&__this->___U3CU3Et__builder_1);
		RuntimeObject* L_1 = ___0_stateMachine;
		AsyncTaskMethodBuilder_1_SetStateMachine_m618193D95F04A13F9794E020AC25EF91306A8670(L_0, L_1, AsyncTaskMethodBuilder_1_SetStateMachine_m618193D95F04A13F9794E020AC25EF91306A8670_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CGetGeoIPResponseU3Ed__33_SetStateMachine_m74A1484D7DB6DD67B7E7F0C16106CB2EC413F225_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method)
{
	U3CGetGeoIPResponseU3Ed__33_tEB679EFC74F417928C47D29F932F7D9D7A8C3292* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CGetGeoIPResponseU3Ed__33_tEB679EFC74F417928C47D29F932F7D9D7A8C3292*>(__this + _offset);
	U3CGetGeoIPResponseU3Ed__33_SetStateMachine_m74A1484D7DB6DD67B7E7F0C16106CB2EC413F225(_thisAdjusted, ___0_stateMachine, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Threading.Tasks.Task`1<Unity.Services.Analytics.Internal.GeoIPResponse> Unity.Services.Analytics.Internal.GeoAPI::MakeRequest()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t3F0E026C38791877CBE0DEC23CD10E9103FBA9B2* GeoAPI_MakeRequest_mE3309B54EAD75F8BEAFD609006AC9DBE7306EA07 (GeoAPI_tDEC43B93D320DC5B81A4BD9F45491DD2E5D30287* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_Create_m4B6AFF0D63DE8B335551AC63B1E6A663CE9544A0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_Start_TisU3CMakeRequestU3Ed__1_t0EF0B916953106E30ADFEE30817391CC38DF6084_m2278461A5470C358F8E18E9A5B3B61AB9076AA02_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_get_Task_m650E5C11347CA5B2E79BFCE9C8BDE1865F4CBA29_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_tCC71288BC6FD1578916420F041FD9DD930D2EEE5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CMakeRequestU3Ed__1_t0EF0B916953106E30ADFEE30817391CC38DF6084 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_runtime_class_init_inline(AsyncTaskMethodBuilder_1_tCC71288BC6FD1578916420F041FD9DD930D2EEE5_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_1_tCC71288BC6FD1578916420F041FD9DD930D2EEE5 L_0;
		L_0 = AsyncTaskMethodBuilder_1_Create_m4B6AFF0D63DE8B335551AC63B1E6A663CE9544A0(AsyncTaskMethodBuilder_1_Create_m4B6AFF0D63DE8B335551AC63B1E6A663CE9544A0_RuntimeMethod_var);
		(&V_0)->___U3CU3Et__builder_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
		(&V_0)->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___U3CU3E4__this_2), (void*)__this);
		(&V_0)->___U3CU3E1__state_0 = (-1);
		AsyncTaskMethodBuilder_1_tCC71288BC6FD1578916420F041FD9DD930D2EEE5* L_1 = (&(&V_0)->___U3CU3Et__builder_1);
		AsyncTaskMethodBuilder_1_Start_TisU3CMakeRequestU3Ed__1_t0EF0B916953106E30ADFEE30817391CC38DF6084_m2278461A5470C358F8E18E9A5B3B61AB9076AA02(L_1, (&V_0), AsyncTaskMethodBuilder_1_Start_TisU3CMakeRequestU3Ed__1_t0EF0B916953106E30ADFEE30817391CC38DF6084_m2278461A5470C358F8E18E9A5B3B61AB9076AA02_RuntimeMethod_var);
		AsyncTaskMethodBuilder_1_tCC71288BC6FD1578916420F041FD9DD930D2EEE5* L_2 = (&(&V_0)->___U3CU3Et__builder_1);
		Task_1_t3F0E026C38791877CBE0DEC23CD10E9103FBA9B2* L_3;
		L_3 = AsyncTaskMethodBuilder_1_get_Task_m650E5C11347CA5B2E79BFCE9C8BDE1865F4CBA29(L_2, AsyncTaskMethodBuilder_1_get_Task_m650E5C11347CA5B2E79BFCE9C8BDE1865F4CBA29_RuntimeMethod_var);
		return L_3;
	}
}
// System.Void Unity.Services.Analytics.Internal.GeoAPI::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeoAPI__ctor_m0C73E78C464E961E626A7D252140E6E2A60C148D (GeoAPI_tDEC43B93D320DC5B81A4BD9F45491DD2E5D30287* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA07A3EB9D8DB99C62110B79812663E60297F7619);
		s_Il2CppMethodInitialized = true;
	}
	{
		// readonly string m_PrivacyEndpoint = "https://pls.prd.mz.internal.unity3d.com/api/v1/user-lookup";
		__this->___m_PrivacyEndpoint_0 = _stringLiteralA07A3EB9D8DB99C62110B79812663E60297F7619;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_PrivacyEndpoint_0), (void*)_stringLiteralA07A3EB9D8DB99C62110B79812663E60297F7619);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Unity.Services.Analytics.Internal.GeoAPI/WebRequestTaskWrapper::.ctor(UnityEngine.Networking.UnityWebRequest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebRequestTaskWrapper__ctor_m737411964301AB0483A39FB2B0D46B6CCC1E512E (WebRequestTaskWrapper_tF4501F92C57A6AA309830A1BE02214B16ADA71FD* __this, UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* ___0_request, const RuntimeMethod* method) 
{
	{
		// public WebRequestTaskWrapper(UnityWebRequest request)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// m_AsyncOp = request.SendWebRequest();
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_0 = ___0_request;
		NullCheck(L_0);
		UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C* L_1;
		L_1 = UnityWebRequest_SendWebRequest_mA3CD13983BAA5074A0640EDD661B1E46E6DB6C13(L_0, NULL);
		__this->___m_AsyncOp_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_AsyncOp_0), (void*)L_1);
		// }
		return;
	}
}
// System.Runtime.CompilerServices.TaskAwaiter`1<UnityEngine.Networking.UnityWebRequestAsyncOperation> Unity.Services.Analytics.Internal.GeoAPI/WebRequestTaskWrapper::GetAwaiter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TaskAwaiter_1_t2EFD3A7518CBC33EEAA02EBD1D5C4147D6FD47BF WebRequestTaskWrapper_GetAwaiter_mE54F6FA2E11D3ECAA8BB6762857F32C1F40A5BE7 (WebRequestTaskWrapper_tF4501F92C57A6AA309830A1BE02214B16ADA71FD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1__ctor_m28BBDEEB420B6B31DA78AC27F9ED2E899EF367B4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1_get_Task_m84FB049ED4EBE0B7DCF8660691DDA2B497E6F0E6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1_t187BBB0EA0E2FFAD5D7E09DB36D1DF3DE2B2F68C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_GetAwaiter_m1191FB560C8E8B2B31CE4C013EA83E8BA8FE17BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass2_0_U3CGetAwaiterU3Eb__0_m91481F295ECD1FC5445A4E7870D1013CABED3463_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass2_0_tA1057DDCB34766738AD61FC83B16C5939DF39952_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass2_0_tA1057DDCB34766738AD61FC83B16C5939DF39952* V_0 = NULL;
	{
		U3CU3Ec__DisplayClass2_0_tA1057DDCB34766738AD61FC83B16C5939DF39952* L_0 = (U3CU3Ec__DisplayClass2_0_tA1057DDCB34766738AD61FC83B16C5939DF39952*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass2_0_tA1057DDCB34766738AD61FC83B16C5939DF39952_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass2_0__ctor_m62BF5B6343547C6A9291F3C4EF5C76012180A969(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass2_0_tA1057DDCB34766738AD61FC83B16C5939DF39952* L_1 = V_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_0 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_0), (void*)__this);
		// var tcs = new TaskCompletionSource<UnityWebRequestAsyncOperation>();
		U3CU3Ec__DisplayClass2_0_tA1057DDCB34766738AD61FC83B16C5939DF39952* L_2 = V_0;
		TaskCompletionSource_1_t187BBB0EA0E2FFAD5D7E09DB36D1DF3DE2B2F68C* L_3 = (TaskCompletionSource_1_t187BBB0EA0E2FFAD5D7E09DB36D1DF3DE2B2F68C*)il2cpp_codegen_object_new(TaskCompletionSource_1_t187BBB0EA0E2FFAD5D7E09DB36D1DF3DE2B2F68C_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		TaskCompletionSource_1__ctor_m28BBDEEB420B6B31DA78AC27F9ED2E899EF367B4(L_3, TaskCompletionSource_1__ctor_m28BBDEEB420B6B31DA78AC27F9ED2E899EF367B4_RuntimeMethod_var);
		NullCheck(L_2);
		L_2->___tcs_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___tcs_1), (void*)L_3);
		// m_AsyncOp.completed += obj =>
		// {
		//     var result = m_AsyncOp;
		//     tcs.SetResult(result);
		// };
		UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C* L_4 = __this->___m_AsyncOp_0;
		U3CU3Ec__DisplayClass2_0_tA1057DDCB34766738AD61FC83B16C5939DF39952* L_5 = V_0;
		Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB* L_6 = (Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB*)il2cpp_codegen_object_new(Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		Action_1__ctor_m33ABB7530487276910BEFB499A97D33FB2E06D7D(L_6, L_5, (intptr_t)((void*)U3CU3Ec__DisplayClass2_0_U3CGetAwaiterU3Eb__0_m91481F295ECD1FC5445A4E7870D1013CABED3463_RuntimeMethod_var), NULL);
		NullCheck(L_4);
		AsyncOperation_add_completed_mD6F21BA8127D6D4B7ABDEFAA995A7A347A20A793(L_4, L_6, NULL);
		// return tcs.Task.GetAwaiter();
		U3CU3Ec__DisplayClass2_0_tA1057DDCB34766738AD61FC83B16C5939DF39952* L_7 = V_0;
		NullCheck(L_7);
		TaskCompletionSource_1_t187BBB0EA0E2FFAD5D7E09DB36D1DF3DE2B2F68C* L_8 = L_7->___tcs_1;
		NullCheck(L_8);
		Task_1_t892C4382C6E738570B24B25E2972B303E8EB849F* L_9;
		L_9 = TaskCompletionSource_1_get_Task_m84FB049ED4EBE0B7DCF8660691DDA2B497E6F0E6_inline(L_8, TaskCompletionSource_1_get_Task_m84FB049ED4EBE0B7DCF8660691DDA2B497E6F0E6_RuntimeMethod_var);
		NullCheck(L_9);
		TaskAwaiter_1_t2EFD3A7518CBC33EEAA02EBD1D5C4147D6FD47BF L_10;
		L_10 = Task_1_GetAwaiter_m1191FB560C8E8B2B31CE4C013EA83E8BA8FE17BC(L_9, Task_1_GetAwaiter_m1191FB560C8E8B2B31CE4C013EA83E8BA8FE17BC_RuntimeMethod_var);
		return L_10;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Unity.Services.Analytics.Internal.GeoAPI/WebRequestTaskWrapper/<>c__DisplayClass2_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass2_0__ctor_m62BF5B6343547C6A9291F3C4EF5C76012180A969 (U3CU3Ec__DisplayClass2_0_tA1057DDCB34766738AD61FC83B16C5939DF39952* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Unity.Services.Analytics.Internal.GeoAPI/WebRequestTaskWrapper/<>c__DisplayClass2_0::<GetAwaiter>b__0(UnityEngine.AsyncOperation)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass2_0_U3CGetAwaiterU3Eb__0_m91481F295ECD1FC5445A4E7870D1013CABED3463 (U3CU3Ec__DisplayClass2_0_tA1057DDCB34766738AD61FC83B16C5939DF39952* __this, AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* ___0_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1_SetResult_m462302E1261DE351DB0AA663769C88ED0A78C5C4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C* V_0 = NULL;
	{
		// var result = m_AsyncOp;
		WebRequestTaskWrapper_tF4501F92C57A6AA309830A1BE02214B16ADA71FD* L_0 = __this->___U3CU3E4__this_0;
		NullCheck(L_0);
		UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C* L_1 = L_0->___m_AsyncOp_0;
		V_0 = L_1;
		// tcs.SetResult(result);
		TaskCompletionSource_1_t187BBB0EA0E2FFAD5D7E09DB36D1DF3DE2B2F68C* L_2 = __this->___tcs_1;
		UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C* L_3 = V_0;
		NullCheck(L_2);
		TaskCompletionSource_1_SetResult_m462302E1261DE351DB0AA663769C88ED0A78C5C4(L_2, L_3, TaskCompletionSource_1_SetResult_m462302E1261DE351DB0AA663769C88ED0A78C5C4_RuntimeMethod_var);
		// };
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Unity.Services.Analytics.Internal.GeoAPI/<MakeRequest>d__1::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMakeRequestU3Ed__1_MoveNext_m84E5C849BBA78D226EF9A48216FFC4CD3D2042F1 (U3CMakeRequestU3Ed__1_t0EF0B916953106E30ADFEE30817391CC38DF6084* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t2EFD3A7518CBC33EEAA02EBD1D5C4147D6FD47BF_TisU3CMakeRequestU3Ed__1_t0EF0B916953106E30ADFEE30817391CC38DF6084_m2C53456EB05AE3BD205398F10BFAEC3A03F99738_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetResult_m8964201B7044B7762317C83D8CA064A284DAD38F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DownloadHandlerBuffer_t34C626F6513FA9A44FDDDEE85455CF2CD9DA5974_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonConvert_DeserializeObject_TisGeoIPResponse_tADA05745323DD2374411BCB8CEC9EC086B4FE150_mE116D4B93529E5AE7C995FCF33ACB72C41D37F20_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonConvert_t01281FFED14CC2AEFABB6608315D90ED5C46E0C2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_GetResult_mE0F44BFAB46D5BBA8B6341757BC30AEC7C44F5BB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_get_IsCompleted_mD3A1F9B5FE69A689A39D53FD3A093B7F8F05A070_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebRequestTaskWrapper_tF4501F92C57A6AA309830A1BE02214B16ADA71FD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3781CFEEF925855A4B7284E1783A7D715A6333F6);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	GeoAPI_tDEC43B93D320DC5B81A4BD9F45491DD2E5D30287* V_1 = NULL;
	GeoIPResponse_tADA05745323DD2374411BCB8CEC9EC086B4FE150* V_2 = NULL;
	UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C* V_3 = NULL;
	TaskAwaiter_1_t2EFD3A7518CBC33EEAA02EBD1D5C4147D6FD47BF V_4;
	memset((&V_4), 0, sizeof(V_4));
	Exception_t* V_5 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	GeoIPResponse_tADA05745323DD2374411BCB8CEC9EC086B4FE150* G_B11_0 = NULL;
	GeoIPResponse_tADA05745323DD2374411BCB8CEC9EC086B4FE150* G_B10_0 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		GeoAPI_tDEC43B93D320DC5B81A4BD9F45491DD2E5D30287* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_006d_1;
			}
		}
		{
			// var request = new UnityWebRequest(m_PrivacyEndpoint, UnityWebRequest.kHttpVerbGET)
			// {
			//     timeout = 10,
			//     downloadHandler = new DownloadHandlerBuffer()
			// };
			GeoAPI_tDEC43B93D320DC5B81A4BD9F45491DD2E5D30287* L_3 = V_1;
			NullCheck(L_3);
			String_t* L_4 = L_3->___m_PrivacyEndpoint_0;
			UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_5 = (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F*)il2cpp_codegen_object_new(UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_il2cpp_TypeInfo_var);
			NullCheck(L_5);
			UnityWebRequest__ctor_mD4739B0BF1C4937479A83B24B531C6B819712A3E(L_5, L_4, _stringLiteral3781CFEEF925855A4B7284E1783A7D715A6333F6, NULL);
			UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_6 = L_5;
			NullCheck(L_6);
			UnityWebRequest_set_timeout_mE9C8169FA8CF1BE17E3D9FDACDC6E1A9508DF618(L_6, ((int32_t)10), NULL);
			UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_7 = L_6;
			DownloadHandlerBuffer_t34C626F6513FA9A44FDDDEE85455CF2CD9DA5974* L_8 = (DownloadHandlerBuffer_t34C626F6513FA9A44FDDDEE85455CF2CD9DA5974*)il2cpp_codegen_object_new(DownloadHandlerBuffer_t34C626F6513FA9A44FDDDEE85455CF2CD9DA5974_il2cpp_TypeInfo_var);
			NullCheck(L_8);
			DownloadHandlerBuffer__ctor_m5EE7C9E8AB468B2B937A7C9C66B4176A884147AF(L_8, NULL);
			NullCheck(L_7);
			UnityWebRequest_set_downloadHandler_m6CB94492012097DFC44E5773D1A627753788292F(L_7, L_8, NULL);
			// var async = await new WebRequestTaskWrapper(request);
			WebRequestTaskWrapper_tF4501F92C57A6AA309830A1BE02214B16ADA71FD* L_9 = (WebRequestTaskWrapper_tF4501F92C57A6AA309830A1BE02214B16ADA71FD*)il2cpp_codegen_object_new(WebRequestTaskWrapper_tF4501F92C57A6AA309830A1BE02214B16ADA71FD_il2cpp_TypeInfo_var);
			NullCheck(L_9);
			WebRequestTaskWrapper__ctor_m737411964301AB0483A39FB2B0D46B6CCC1E512E(L_9, L_7, NULL);
			NullCheck(L_9);
			TaskAwaiter_1_t2EFD3A7518CBC33EEAA02EBD1D5C4147D6FD47BF L_10;
			L_10 = WebRequestTaskWrapper_GetAwaiter_mE54F6FA2E11D3ECAA8BB6762857F32C1F40A5BE7(L_9, NULL);
			V_4 = L_10;
			bool L_11;
			L_11 = TaskAwaiter_1_get_IsCompleted_mD3A1F9B5FE69A689A39D53FD3A093B7F8F05A070((&V_4), TaskAwaiter_1_get_IsCompleted_mD3A1F9B5FE69A689A39D53FD3A093B7F8F05A070_RuntimeMethod_var);
			if (L_11)
			{
				goto IL_008a_1;
			}
		}
		{
			int32_t L_12 = 0;
			V_0 = L_12;
			__this->___U3CU3E1__state_0 = L_12;
			TaskAwaiter_1_t2EFD3A7518CBC33EEAA02EBD1D5C4147D6FD47BF L_13 = V_4;
			__this->___U3CU3Eu__1_3 = L_13;
			Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__1_3))->___m_task_0), (void*)NULL);
			AsyncTaskMethodBuilder_1_tCC71288BC6FD1578916420F041FD9DD930D2EEE5* L_14 = (&__this->___U3CU3Et__builder_1);
			AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t2EFD3A7518CBC33EEAA02EBD1D5C4147D6FD47BF_TisU3CMakeRequestU3Ed__1_t0EF0B916953106E30ADFEE30817391CC38DF6084_m2C53456EB05AE3BD205398F10BFAEC3A03F99738(L_14, (&V_4), __this, AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t2EFD3A7518CBC33EEAA02EBD1D5C4147D6FD47BF_TisU3CMakeRequestU3Ed__1_t0EF0B916953106E30ADFEE30817391CC38DF6084_m2C53456EB05AE3BD205398F10BFAEC3A03F99738_RuntimeMethod_var);
			goto IL_0122;
		}

IL_006d_1:
		{
			TaskAwaiter_1_t2EFD3A7518CBC33EEAA02EBD1D5C4147D6FD47BF L_15 = __this->___U3CU3Eu__1_3;
			V_4 = L_15;
			TaskAwaiter_1_t2EFD3A7518CBC33EEAA02EBD1D5C4147D6FD47BF* L_16 = (&__this->___U3CU3Eu__1_3);
			il2cpp_codegen_initobj(L_16, sizeof(TaskAwaiter_1_t2EFD3A7518CBC33EEAA02EBD1D5C4147D6FD47BF));
			int32_t L_17 = (-1);
			V_0 = L_17;
			__this->___U3CU3E1__state_0 = L_17;
		}

IL_008a_1:
		{
			UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C* L_18;
			L_18 = TaskAwaiter_1_GetResult_mE0F44BFAB46D5BBA8B6341757BC30AEC7C44F5BB((&V_4), TaskAwaiter_1_GetResult_mE0F44BFAB46D5BBA8B6341757BC30AEC7C44F5BB_RuntimeMethod_var);
			V_3 = L_18;
			// if (async.webRequest.result == UnityWebRequest.Result.ProtocolError ||
			//     async.webRequest.result == UnityWebRequest.Result.ConnectionError)
			UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C* L_19 = V_3;
			NullCheck(L_19);
			UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_20;
			L_20 = UnityWebRequestAsyncOperation_get_webRequest_mF67D15420C7C1C4DCA1BD6F839048A0542998BC3_inline(L_19, NULL);
			NullCheck(L_20);
			int32_t L_21;
			L_21 = UnityWebRequest_get_result_mEF83848C5FCFB5E307CE4B57E42BF02FC9AED449(L_20, NULL);
			if ((((int32_t)L_21) == ((int32_t)3)))
			{
				goto IL_00ae_1;
			}
		}
		{
			UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C* L_22 = V_3;
			NullCheck(L_22);
			UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_23;
			L_23 = UnityWebRequestAsyncOperation_get_webRequest_mF67D15420C7C1C4DCA1BD6F839048A0542998BC3_inline(L_22, NULL);
			NullCheck(L_23);
			int32_t L_24;
			L_24 = UnityWebRequest_get_result_mEF83848C5FCFB5E307CE4B57E42BF02FC9AED449(L_23, NULL);
			if ((!(((uint32_t)L_24) == ((uint32_t)2))))
			{
				goto IL_00bc_1;
			}
		}

IL_00ae_1:
		{
			// throw new ConsentCheckException(ConsentCheckExceptionReason.NoInternetConnection,
			//     CommonErrorCodes.TransportError,
			//     "The GeoIP request has failed - make sure you're connected to an internet connection and try again.",
			//     null);
			ConsentCheckException_t96E7054ECB013548EA92EEFFFACAB143D5A86B7D* L_25 = (ConsentCheckException_t96E7054ECB013548EA92EEFFFACAB143D5A86B7D*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ConsentCheckException_t96E7054ECB013548EA92EEFFFACAB143D5A86B7D_il2cpp_TypeInfo_var)));
			NullCheck(L_25);
			ConsentCheckException__ctor_m0F6DC7108E11524A5BBBE85F07DD082873FE95B3(L_25, 2, 1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB7C8982236B58D3998BB9FB59D131EF360EFB950)), (Exception_t*)NULL, NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_25, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CMakeRequestU3Ed__1_MoveNext_m84E5C849BBA78D226EF9A48216FFC4CD3D2042F1_RuntimeMethod_var)));
		}

IL_00bc_1:
		{
		}
		try
		{// begin try (depth: 2)
			{
				// var response = JsonConvert.DeserializeObject<GeoIPResponse>(async.webRequest.downloadHandler.text);
				UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C* L_26 = V_3;
				NullCheck(L_26);
				UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_27;
				L_27 = UnityWebRequestAsyncOperation_get_webRequest_mF67D15420C7C1C4DCA1BD6F839048A0542998BC3_inline(L_26, NULL);
				NullCheck(L_27);
				DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* L_28;
				L_28 = UnityWebRequest_get_downloadHandler_m1AA91B23D9D594A4F4FE2975FC356C508528F1D5(L_27, NULL);
				NullCheck(L_28);
				String_t* L_29;
				L_29 = DownloadHandler_get_text_mA6DE5CB2647A21E577B963708DC3D0DA4DBFE7D8(L_28, NULL);
				il2cpp_codegen_runtime_class_init_inline(JsonConvert_t01281FFED14CC2AEFABB6608315D90ED5C46E0C2_il2cpp_TypeInfo_var);
				GeoIPResponse_tADA05745323DD2374411BCB8CEC9EC086B4FE150* L_30;
				L_30 = JsonConvert_DeserializeObject_TisGeoIPResponse_tADA05745323DD2374411BCB8CEC9EC086B4FE150_mE116D4B93529E5AE7C995FCF33ACB72C41D37F20(L_29, JsonConvert_DeserializeObject_TisGeoIPResponse_tADA05745323DD2374411BCB8CEC9EC086B4FE150_mE116D4B93529E5AE7C995FCF33ACB72C41D37F20_RuntimeMethod_var);
				// if (response == null)
				GeoIPResponse_tADA05745323DD2374411BCB8CEC9EC086B4FE150* L_31 = L_30;
				G_B10_0 = L_31;
				if (L_31)
				{
					G_B11_0 = L_31;
					goto IL_00e3_2;
				}
			}
			{
				// throw new ConsentCheckException(ConsentCheckExceptionReason.Unknown, CommonErrorCodes.Unknown,
				//     "The error occurred while performing the privacy GeoIP request. Please try again later.",
				//     null);
				ConsentCheckException_t96E7054ECB013548EA92EEFFFACAB143D5A86B7D* L_32 = (ConsentCheckException_t96E7054ECB013548EA92EEFFFACAB143D5A86B7D*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ConsentCheckException_t96E7054ECB013548EA92EEFFFACAB143D5A86B7D_il2cpp_TypeInfo_var)));
				NullCheck(L_32);
				ConsentCheckException__ctor_m0F6DC7108E11524A5BBBE85F07DD082873FE95B3(L_32, 0, 0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral58A824E6D56BC39968AB94FF04C56EB1E41A4A72)), (Exception_t*)NULL, NULL);
				IL2CPP_RAISE_MANAGED_EXCEPTION(L_32, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CMakeRequestU3Ed__1_MoveNext_m84E5C849BBA78D226EF9A48216FFC4CD3D2042F1_RuntimeMethod_var)));
			}

IL_00e3_2:
			{
				// return response;
				V_2 = G_B11_0;
				goto IL_010e;
			}
		}// end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_00e6_1;
			}
			throw e;
		}

CATCH_00e6_1:
		{// begin catch(System.Exception)
			// catch (Exception)
			// throw new ConsentCheckException(ConsentCheckExceptionReason.DeserializationIssue, CommonErrorCodes.Unknown,
			//     "The error occurred while deserializing the privacy GeoIP reseponse. Please try again later.",
			//     null);
			ConsentCheckException_t96E7054ECB013548EA92EEFFFACAB143D5A86B7D* L_33 = (ConsentCheckException_t96E7054ECB013548EA92EEFFFACAB143D5A86B7D*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ConsentCheckException_t96E7054ECB013548EA92EEFFFACAB143D5A86B7D_il2cpp_TypeInfo_var)));
			NullCheck(L_33);
			ConsentCheckException__ctor_m0F6DC7108E11524A5BBBE85F07DD082873FE95B3(L_33, 1, 0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF10B3C0352D2A01D50976F0A480FC409754BACE8)), (Exception_t*)NULL, NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_33, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CMakeRequestU3Ed__1_MoveNext_m84E5C849BBA78D226EF9A48216FFC4CD3D2042F1_RuntimeMethod_var)));
		}// end catch (depth: 2)
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00f5;
		}
		throw e;
	}

CATCH_00f5:
	{// begin catch(System.Exception)
		V_5 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncTaskMethodBuilder_1_tCC71288BC6FD1578916420F041FD9DD930D2EEE5* L_34 = (&__this->___U3CU3Et__builder_1);
		Exception_t* L_35 = V_5;
		AsyncTaskMethodBuilder_1_SetException_m755EC2E736574A631BEC6E2F204F9AF72A5CFE2A(L_34, L_35, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncTaskMethodBuilder_1_SetException_m755EC2E736574A631BEC6E2F204F9AF72A5CFE2A_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0122;
	}// end catch (depth: 1)

IL_010e:
	{
		// }
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncTaskMethodBuilder_1_tCC71288BC6FD1578916420F041FD9DD930D2EEE5* L_36 = (&__this->___U3CU3Et__builder_1);
		GeoIPResponse_tADA05745323DD2374411BCB8CEC9EC086B4FE150* L_37 = V_2;
		AsyncTaskMethodBuilder_1_SetResult_m8964201B7044B7762317C83D8CA064A284DAD38F(L_36, L_37, AsyncTaskMethodBuilder_1_SetResult_m8964201B7044B7762317C83D8CA064A284DAD38F_RuntimeMethod_var);
	}

IL_0122:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CMakeRequestU3Ed__1_MoveNext_m84E5C849BBA78D226EF9A48216FFC4CD3D2042F1_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3CMakeRequestU3Ed__1_t0EF0B916953106E30ADFEE30817391CC38DF6084* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CMakeRequestU3Ed__1_t0EF0B916953106E30ADFEE30817391CC38DF6084*>(__this + _offset);
	U3CMakeRequestU3Ed__1_MoveNext_m84E5C849BBA78D226EF9A48216FFC4CD3D2042F1(_thisAdjusted, method);
}
// System.Void Unity.Services.Analytics.Internal.GeoAPI/<MakeRequest>d__1::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMakeRequestU3Ed__1_SetStateMachine_mFB6A5DBCD2E2998B9B9CE5F86800FEDD596F4D08 (U3CMakeRequestU3Ed__1_t0EF0B916953106E30ADFEE30817391CC38DF6084* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetStateMachine_m618193D95F04A13F9794E020AC25EF91306A8670_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		AsyncTaskMethodBuilder_1_tCC71288BC6FD1578916420F041FD9DD930D2EEE5* L_0 = (&__this->___U3CU3Et__builder_1);
		RuntimeObject* L_1 = ___0_stateMachine;
		AsyncTaskMethodBuilder_1_SetStateMachine_m618193D95F04A13F9794E020AC25EF91306A8670(L_0, L_1, AsyncTaskMethodBuilder_1_SetStateMachine_m618193D95F04A13F9794E020AC25EF91306A8670_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CMakeRequestU3Ed__1_SetStateMachine_mFB6A5DBCD2E2998B9B9CE5F86800FEDD596F4D08_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method)
{
	U3CMakeRequestU3Ed__1_t0EF0B916953106E30ADFEE30817391CC38DF6084* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CMakeRequestU3Ed__1_t0EF0B916953106E30ADFEE30817391CC38DF6084*>(__this + _offset);
	U3CMakeRequestU3Ed__1_SetStateMachine_mFB6A5DBCD2E2998B9B9CE5F86800FEDD596F4D08(_thisAdjusted, ___0_stateMachine, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Unity.Services.Analytics.Internal.GeoIPResponse::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeoIPResponse__ctor_m859CD30853C62FA484459EB2A61DD81E99F95BA6 (GeoIPResponse_tADA05745323DD2374411BCB8CEC9EC086B4FE150* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean Unity.Services.Analytics.Internal.FileSystemCalls::CanAccessFileSystem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FileSystemCalls_CanAccessFileSystem_m664852625AD86DA0EAAADEF43EB28D979294738F (FileSystemCalls_t1A2213109FA10AFB80C343E28A45F13F053970A3* __this, const RuntimeMethod* method) 
{
	{
		//             return
		//                 Application.platform != RuntimePlatform.Switch &&
		// #if !UNITY_2021_1_OR_NEWER
		//                 Application.platform != RuntimePlatform.XboxOne &&
		// #endif
		// #if UNITY_2019 || UNITY_2020_2_OR_NEWER
		//                 Application.platform != RuntimePlatform.GameCoreXboxOne &&
		//                 Application.platform != RuntimePlatform.GameCoreXboxSeries &&
		//                 Application.platform != RuntimePlatform.PS5 &&
		// #endif
		//                 Application.platform != RuntimePlatform.PS4 &&
		//                 !String.IsNullOrEmpty(Application.persistentDataPath);
		int32_t L_0;
		L_0 = Application_get_platform_m59EF7D6155D18891B24767F83F388160B1FF2138(NULL);
		if ((((int32_t)L_0) == ((int32_t)((int32_t)32))))
		{
			goto IL_003b;
		}
	}
	{
		int32_t L_1;
		L_1 = Application_get_platform_m59EF7D6155D18891B24767F83F388160B1FF2138(NULL);
		if ((((int32_t)L_1) == ((int32_t)((int32_t)37))))
		{
			goto IL_003b;
		}
	}
	{
		int32_t L_2;
		L_2 = Application_get_platform_m59EF7D6155D18891B24767F83F388160B1FF2138(NULL);
		if ((((int32_t)L_2) == ((int32_t)((int32_t)36))))
		{
			goto IL_003b;
		}
	}
	{
		int32_t L_3;
		L_3 = Application_get_platform_m59EF7D6155D18891B24767F83F388160B1FF2138(NULL);
		if ((((int32_t)L_3) == ((int32_t)((int32_t)38))))
		{
			goto IL_003b;
		}
	}
	{
		int32_t L_4;
		L_4 = Application_get_platform_m59EF7D6155D18891B24767F83F388160B1FF2138(NULL);
		if ((((int32_t)L_4) == ((int32_t)((int32_t)25))))
		{
			goto IL_003b;
		}
	}
	{
		String_t* L_5;
		L_5 = Application_get_persistentDataPath_mC58BD3E1A20732E0A536491DBCAE6505B1624399(NULL);
		bool L_6;
		L_6 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_5, NULL);
		return (bool)((((int32_t)L_6) == ((int32_t)0))? 1 : 0);
	}

IL_003b:
	{
		return (bool)0;
	}
}
// System.Boolean Unity.Services.Analytics.Internal.FileSystemCalls::FileExists(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FileSystemCalls_FileExists_m73217509E8CEDB625FAFD2AA3E008153D7F84513 (FileSystemCalls_t1A2213109FA10AFB80C343E28A45F13F053970A3* __this, String_t* ___0_path, const RuntimeMethod* method) 
{
	{
		// return File.Exists(path);
		String_t* L_0 = ___0_path;
		bool L_1;
		L_1 = File_Exists_m95E329ABBE3EAD6750FE1989BBA6884457136D4A(L_0, NULL);
		return L_1;
	}
}
// System.Void Unity.Services.Analytics.Internal.FileSystemCalls::DeleteFile(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileSystemCalls_DeleteFile_mC18864152DCA840D1FDD2DBD6287F4DADE4A59CC (FileSystemCalls_t1A2213109FA10AFB80C343E28A45F13F053970A3* __this, String_t* ___0_path, const RuntimeMethod* method) 
{
	{
		// File.Delete(path);
		String_t* L_0 = ___0_path;
		File_Delete_mE29829DA504F3E1B8BCB78F21E2862C9ED7EC386(L_0, NULL);
		// }
		return;
	}
}
// System.IO.Stream Unity.Services.Analytics.Internal.FileSystemCalls::OpenFileForWriting(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* FileSystemCalls_OpenFileForWriting_m5D2064955D6E16BA0EA7FC046A30096A06799A0D (FileSystemCalls_t1A2213109FA10AFB80C343E28A45F13F053970A3* __this, String_t* ___0_path, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new FileStream(path, FileMode.Create);
		String_t* L_0 = ___0_path;
		FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_1 = (FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8*)il2cpp_codegen_object_new(FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		FileStream__ctor_m78499F9BE2BE31DA34F123B4399AA457716BD6E6(L_1, L_0, 2, NULL);
		return L_1;
	}
}
// System.IO.Stream Unity.Services.Analytics.Internal.FileSystemCalls::OpenFileForReading(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* FileSystemCalls_OpenFileForReading_m5524E1D15165BA0E221A29DE72448F9E19F7A6AC (FileSystemCalls_t1A2213109FA10AFB80C343E28A45F13F053970A3* __this, String_t* ___0_path, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new FileStream(path, FileMode.Open);
		String_t* L_0 = ___0_path;
		FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_1 = (FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8*)il2cpp_codegen_object_new(FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		FileStream__ctor_m78499F9BE2BE31DA34F123B4399AA457716BD6E6(L_1, L_0, 3, NULL);
		return L_1;
	}
}
// System.Void Unity.Services.Analytics.Internal.FileSystemCalls::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileSystemCalls__ctor_mED48303E0E5ADE100ED297D2F82072B5162F3E2A (FileSystemCalls_t1A2213109FA10AFB80C343E28A45F13F053970A3* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Unity.Services.Analytics.Internal.DiskCache::.ctor(Unity.Services.Analytics.Internal.IFileSystemCalls)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DiskCache__ctor_mBA8B9A9ECF83506913BC62A4782F490C2D300263 (DiskCache_tE19D214B0538F2CC9D59D4F827B480AEBCEF368D* __this, RuntimeObject* ___0_systemCalls, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4D88DC602EB6FBBEF4C8649C1866B4FE2D18A73D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public DiskCache(IFileSystemCalls systemCalls)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// k_CacheFilePath = $"{Application.persistentDataPath}/eventcache";
		String_t* L_0;
		L_0 = Application_get_persistentDataPath_mC58BD3E1A20732E0A536491DBCAE6505B1624399(NULL);
		String_t* L_1;
		L_1 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_0, _stringLiteral4D88DC602EB6FBBEF4C8649C1866B4FE2D18A73D, NULL);
		__this->___k_CacheFilePath_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___k_CacheFilePath_0), (void*)L_1);
		// k_SystemCalls = systemCalls;
		RuntimeObject* L_2 = ___0_systemCalls;
		__this->___k_SystemCalls_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___k_SystemCalls_1), (void*)L_2);
		// k_CacheFileMaximumSize = 5 * 1024 * 1024; // 5MB, 1024B * 1024KB * 5
		__this->___k_CacheFileMaximumSize_2 = ((int64_t)((int32_t)5242880));
		// }
		return;
	}
}
// System.Void Unity.Services.Analytics.Internal.DiskCache::Write(System.Collections.Generic.List`1<System.Int32>,System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DiskCache_Write_m2C651810FDAC3F17B733AB0B05FDEE1E9F55E90C (DiskCache_tE19D214B0538F2CC9D59D4F827B480AEBCEF368D* __this, List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___0_eventEndIndices, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___1_payload, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IFileSystemCalls_t125D92A716C627D4E8C9F59CBE44831033779D05_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA3DFC4F5246F4B16F322274CCEAC16C6C120A25C);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* V_3 = NULL;
	BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* V_4 = NULL;
	int64_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	{
		// if (eventEndIndices.Count > 0 &&
		//     k_SystemCalls.CanAccessFileSystem())
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_0 = ___0_eventEndIndices;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_inline(L_0, List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_RuntimeMethod_var);
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_00f0;
		}
	}
	{
		RuntimeObject* L_2 = __this->___k_SystemCalls_1;
		NullCheck(L_2);
		bool L_3;
		L_3 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean Unity.Services.Analytics.Internal.IFileSystemCalls::CanAccessFileSystem() */, IFileSystemCalls_t125D92A716C627D4E8C9F59CBE44831033779D05_il2cpp_TypeInfo_var, L_2);
		if (!L_3)
		{
			goto IL_00f0;
		}
	}
	{
		// int cacheEnd = 0;
		V_0 = 0;
		// int cacheEventCount = 0;
		V_1 = 0;
		// for (int e = 0; e < eventEndIndices.Count; e++)
		V_2 = 0;
		goto IL_0044;
	}

IL_0024:
	{
		// if (eventEndIndices[e] < k_CacheFileMaximumSize)
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_4 = ___0_eventEndIndices;
		int32_t L_5 = V_2;
		NullCheck(L_4);
		int32_t L_6;
		L_6 = List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D(L_4, L_5, List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D_RuntimeMethod_var);
		int64_t L_7 = __this->___k_CacheFileMaximumSize_2;
		if ((((int64_t)((int64_t)L_6)) >= ((int64_t)L_7)))
		{
			goto IL_0040;
		}
	}
	{
		// cacheEnd = eventEndIndices[e];
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_8 = ___0_eventEndIndices;
		int32_t L_9 = V_2;
		NullCheck(L_8);
		int32_t L_10;
		L_10 = List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D(L_8, L_9, List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D_RuntimeMethod_var);
		V_0 = L_10;
		// cacheEventCount = e + 1;
		int32_t L_11 = V_2;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0040:
	{
		// for (int e = 0; e < eventEndIndices.Count; e++)
		int32_t L_12 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0044:
	{
		// for (int e = 0; e < eventEndIndices.Count; e++)
		int32_t L_13 = V_2;
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_14 = ___0_eventEndIndices;
		NullCheck(L_14);
		int32_t L_15;
		L_15 = List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_inline(L_14, List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_RuntimeMethod_var);
		if ((((int32_t)L_13) < ((int32_t)L_15)))
		{
			goto IL_0024;
		}
	}
	{
		// using (Stream file = k_SystemCalls.OpenFileForWriting(k_CacheFilePath))
		RuntimeObject* L_16 = __this->___k_SystemCalls_1;
		String_t* L_17 = __this->___k_CacheFilePath_0;
		NullCheck(L_16);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_18;
		L_18 = InterfaceFuncInvoker1< Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE*, String_t* >::Invoke(3 /* System.IO.Stream Unity.Services.Analytics.Internal.IFileSystemCalls::OpenFileForWriting(System.String) */, IFileSystemCalls_t125D92A716C627D4E8C9F59CBE44831033779D05_il2cpp_TypeInfo_var, L_16, L_17);
		V_3 = L_18;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00e6:
			{// begin finally (depth: 1)
				{
					Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_19 = V_3;
					if (!L_19)
					{
						goto IL_00ef;
					}
				}
				{
					Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_20 = V_3;
					NullCheck(L_20);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_20);
				}

IL_00ef:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				// using (var writer = new BinaryWriter(file))
				Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_21 = V_3;
				BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_22 = (BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E*)il2cpp_codegen_object_new(BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E_il2cpp_TypeInfo_var);
				NullCheck(L_22);
				BinaryWriter__ctor_mF2F1235E378C3EC493A8C816597BCEB4205A9CA0(L_22, L_21, NULL);
				V_4 = L_22;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_00da_1:
					{// begin finally (depth: 2)
						{
							BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_23 = V_4;
							if (!L_23)
							{
								goto IL_00e5_1;
							}
						}
						{
							BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_24 = V_4;
							NullCheck(L_24);
							InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_24);
						}

IL_00e5_1:
						{
							return;
						}
					}// end finally (depth: 2)
				});
				try
				{// begin try (depth: 2)
					{
						// writer.Write(k_FileHeaderString);       // a specific string to signal file format validity
						BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_25 = V_4;
						NullCheck(L_25);
						VirtualActionInvoker1< String_t* >::Invoke(21 /* System.Void System.IO.BinaryWriter::Write(System.String) */, L_25, _stringLiteralA3DFC4F5246F4B16F322274CCEAC16C6C120A25C);
						// writer.Write(k_CacheFileVersionOne);    // int version specifier
						BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_26 = V_4;
						NullCheck(L_26);
						VirtualActionInvoker1< int32_t >::Invoke(16 /* System.Void System.IO.BinaryWriter::Write(System.Int32) */, L_26, 1);
						// writer.Write(cacheEventCount);          // int event count (cropped to maximum file size)
						BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_27 = V_4;
						int32_t L_28 = V_1;
						NullCheck(L_27);
						VirtualActionInvoker1< int32_t >::Invoke(16 /* System.Void System.IO.BinaryWriter::Write(System.Int32) */, L_27, L_28);
						// for (int i = 0; i < cacheEventCount; i++)
						V_6 = 0;
						goto IL_009d_2;
					}

IL_0088_2:
					{
						// writer.Write(eventEndIndices[i]);   // int event end index
						BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_29 = V_4;
						List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_30 = ___0_eventEndIndices;
						int32_t L_31 = V_6;
						NullCheck(L_30);
						int32_t L_32;
						L_32 = List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D(L_30, L_31, List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D_RuntimeMethod_var);
						NullCheck(L_29);
						VirtualActionInvoker1< int32_t >::Invoke(16 /* System.Void System.IO.BinaryWriter::Write(System.Int32) */, L_29, L_32);
						// for (int i = 0; i < cacheEventCount; i++)
						int32_t L_33 = V_6;
						V_6 = ((int32_t)il2cpp_codegen_add(L_33, 1));
					}

IL_009d_2:
					{
						// for (int i = 0; i < cacheEventCount; i++)
						int32_t L_34 = V_6;
						int32_t L_35 = V_1;
						if ((((int32_t)L_34) < ((int32_t)L_35)))
						{
							goto IL_0088_2;
						}
					}
					{
						// long payloadOriginalPosition = payload.Position;
						Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_36 = ___1_payload;
						NullCheck(L_36);
						int64_t L_37;
						L_37 = VirtualFuncInvoker0< int64_t >::Invoke(12 /* System.Int64 System.IO.Stream::get_Position() */, L_36);
						V_5 = L_37;
						// payload.Position = 0;
						Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_38 = ___1_payload;
						NullCheck(L_38);
						VirtualActionInvoker1< int64_t >::Invoke(13 /* System.Void System.IO.Stream::set_Position(System.Int64) */, L_38, ((int64_t)0));
						// for (int i = 0; i < cacheEnd; i++)
						V_7 = 0;
						goto IL_00cb_2;
					}

IL_00b7_2:
					{
						// writer.Write((byte)payload.ReadByte());   // byte[] event data
						BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_39 = V_4;
						Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_40 = ___1_payload;
						NullCheck(L_40);
						int32_t L_41;
						L_41 = VirtualFuncInvoker0< int32_t >::Invoke(34 /* System.Int32 System.IO.Stream::ReadByte() */, L_40);
						NullCheck(L_39);
						VirtualActionInvoker1< uint8_t >::Invoke(8 /* System.Void System.IO.BinaryWriter::Write(System.Byte) */, L_39, (uint8_t)((int32_t)(uint8_t)L_41));
						// for (int i = 0; i < cacheEnd; i++)
						int32_t L_42 = V_7;
						V_7 = ((int32_t)il2cpp_codegen_add(L_42, 1));
					}

IL_00cb_2:
					{
						// for (int i = 0; i < cacheEnd; i++)
						int32_t L_43 = V_7;
						int32_t L_44 = V_0;
						if ((((int32_t)L_43) < ((int32_t)L_44)))
						{
							goto IL_00b7_2;
						}
					}
					{
						// payload.Position = payloadOriginalPosition;
						Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_45 = ___1_payload;
						int64_t L_46 = V_5;
						NullCheck(L_45);
						VirtualActionInvoker1< int64_t >::Invoke(13 /* System.Void System.IO.Stream::set_Position(System.Int64) */, L_45, L_46);
						// }
						goto IL_00f0;
					}
				}// end try (depth: 2)
				catch(Il2CppExceptionWrapper& e)
				{
					__finallyBlock.StoreException(e.ex);
				}
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00f0:
	{
		// }
		return;
	}
}
// System.Void Unity.Services.Analytics.Internal.DiskCache::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DiskCache_Clear_m3C6A5E5104B8CF7998D637099B86428D08E6003D (DiskCache_tE19D214B0538F2CC9D59D4F827B480AEBCEF368D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IFileSystemCalls_t125D92A716C627D4E8C9F59CBE44831033779D05_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (k_SystemCalls.CanAccessFileSystem() &&
		//     k_SystemCalls.FileExists(k_CacheFilePath))
		RuntimeObject* L_0 = __this->___k_SystemCalls_1;
		NullCheck(L_0);
		bool L_1;
		L_1 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean Unity.Services.Analytics.Internal.IFileSystemCalls::CanAccessFileSystem() */, IFileSystemCalls_t125D92A716C627D4E8C9F59CBE44831033779D05_il2cpp_TypeInfo_var, L_0);
		if (!L_1)
		{
			goto IL_0031;
		}
	}
	{
		RuntimeObject* L_2 = __this->___k_SystemCalls_1;
		String_t* L_3 = __this->___k_CacheFilePath_0;
		NullCheck(L_2);
		bool L_4;
		L_4 = InterfaceFuncInvoker1< bool, String_t* >::Invoke(1 /* System.Boolean Unity.Services.Analytics.Internal.IFileSystemCalls::FileExists(System.String) */, IFileSystemCalls_t125D92A716C627D4E8C9F59CBE44831033779D05_il2cpp_TypeInfo_var, L_2, L_3);
		if (!L_4)
		{
			goto IL_0031;
		}
	}
	{
		// k_SystemCalls.DeleteFile(k_CacheFilePath);
		RuntimeObject* L_5 = __this->___k_SystemCalls_1;
		String_t* L_6 = __this->___k_CacheFilePath_0;
		NullCheck(L_5);
		InterfaceActionInvoker1< String_t* >::Invoke(2 /* System.Void Unity.Services.Analytics.Internal.IFileSystemCalls::DeleteFile(System.String) */, IFileSystemCalls_t125D92A716C627D4E8C9F59CBE44831033779D05_il2cpp_TypeInfo_var, L_5, L_6);
	}

IL_0031:
	{
		// }
		return;
	}
}
// System.Boolean Unity.Services.Analytics.Internal.DiskCache::Read(System.Collections.Generic.List`1<System.Int32>,System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DiskCache_Read_mEAED8E0D390B52E2FE59023C0A63C244015B5C77 (DiskCache_tE19D214B0538F2CC9D59D4F827B480AEBCEF368D* __this, List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___0_eventEndIndices, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___1_buffer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IFileSystemCalls_t125D92A716C627D4E8C9F59CBE44831033779D05_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral26C4C37B97351E99049A3913D39772ACFB923C42);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA3DFC4F5246F4B16F322274CCEAC16C6C120A25C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF7B4A0635D39960D5AAAE5184E95BA0F3E03CD7E);
		s_Il2CppMethodInitialized = true;
	}
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* V_0 = NULL;
	BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* V_1 = NULL;
	int32_t V_2 = 0;
	bool V_3 = false;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		// if (k_SystemCalls.CanAccessFileSystem() &&
		//     k_SystemCalls.FileExists(k_CacheFilePath))
		RuntimeObject* L_0 = __this->___k_SystemCalls_1;
		NullCheck(L_0);
		bool L_1;
		L_1 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean Unity.Services.Analytics.Internal.IFileSystemCalls::CanAccessFileSystem() */, IFileSystemCalls_t125D92A716C627D4E8C9F59CBE44831033779D05_il2cpp_TypeInfo_var, L_0);
		if (!L_1)
		{
			goto IL_00c1;
		}
	}
	{
		RuntimeObject* L_2 = __this->___k_SystemCalls_1;
		String_t* L_3 = __this->___k_CacheFilePath_0;
		NullCheck(L_2);
		bool L_4;
		L_4 = InterfaceFuncInvoker1< bool, String_t* >::Invoke(1 /* System.Boolean Unity.Services.Analytics.Internal.IFileSystemCalls::FileExists(System.String) */, IFileSystemCalls_t125D92A716C627D4E8C9F59CBE44831033779D05_il2cpp_TypeInfo_var, L_2, L_3);
		if (!L_4)
		{
			goto IL_00c1;
		}
	}
	{
		// using (Stream file = k_SystemCalls.OpenFileForReading(k_CacheFilePath))
		RuntimeObject* L_5 = __this->___k_SystemCalls_1;
		String_t* L_6 = __this->___k_CacheFilePath_0;
		NullCheck(L_5);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_7;
		L_7 = InterfaceFuncInvoker1< Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE*, String_t* >::Invoke(4 /* System.IO.Stream Unity.Services.Analytics.Internal.IFileSystemCalls::OpenFileForReading(System.String) */, IFileSystemCalls_t125D92A716C627D4E8C9F59CBE44831033779D05_il2cpp_TypeInfo_var, L_5, L_6);
		V_0 = L_7;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00b7:
			{// begin finally (depth: 1)
				{
					Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_8 = V_0;
					if (!L_8)
					{
						goto IL_00c0;
					}
				}
				{
					Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_9 = V_0;
					NullCheck(L_9);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_9);
				}

IL_00c0:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				// using (var reader = new BinaryReader(file))
				Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_10 = V_0;
				BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_11 = (BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158*)il2cpp_codegen_object_new(BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158_il2cpp_TypeInfo_var);
				NullCheck(L_11);
				BinaryReader__ctor_m898732FE0DBEDD480B24F6DE45A9AC696E44CC0F(L_11, L_10, NULL);
				V_1 = L_11;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_00ad_1:
					{// begin finally (depth: 2)
						{
							BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_12 = V_1;
							if (!L_12)
							{
								goto IL_00b6_1;
							}
						}
						{
							BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_13 = V_1;
							NullCheck(L_13);
							InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_13);
						}

IL_00b6_1:
						{
							return;
						}
					}// end finally (depth: 2)
				});
				try
				{// begin try (depth: 2)
					try
					{// begin try (depth: 3)
						{
							// string header = reader.ReadString();
							BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_14 = V_1;
							NullCheck(L_14);
							String_t* L_15;
							L_15 = VirtualFuncInvoker0< String_t* >::Invoke(22 /* System.String System.IO.BinaryReader::ReadString() */, L_14);
							// if (header == k_FileHeaderString)
							bool L_16;
							L_16 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_15, _stringLiteralA3DFC4F5246F4B16F322274CCEAC16C6C120A25C, NULL);
							if (!L_16)
							{
								goto IL_0088_3;
							}
						}
						{
							// int version = reader.ReadInt32();
							BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_17 = V_1;
							NullCheck(L_17);
							int32_t L_18;
							L_18 = VirtualFuncInvoker0< int32_t >::Invoke(15 /* System.Int32 System.IO.BinaryReader::ReadInt32() */, L_17);
							V_2 = L_18;
							int32_t L_19 = V_2;
							if ((!(((uint32_t)L_19) == ((uint32_t)1))))
							{
								goto IL_006b_3;
							}
						}
						{
							// ReadVersionOneCacheFile(eventEndIndices, reader, buffer);
							BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_20 = V_1;
							DiskCache_ReadVersionOneCacheFile_mD1337201A3FBBAD29159B380EC39A07285441C96(__this, (&___0_eventEndIndices), L_20, (&___1_buffer), NULL);
							// return true;
							V_3 = (bool)1;
							goto IL_00c3;
						}

IL_006b_3:
						{
							// Debug.LogWarning($"Unable to read event cache file: unknown file format version {version}");
							int32_t L_21 = V_2;
							int32_t L_22 = L_21;
							RuntimeObject* L_23 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_22);
							String_t* L_24;
							L_24 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteral26C4C37B97351E99049A3913D39772ACFB923C42, L_23, NULL);
							il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
							Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(L_24, NULL);
							// Clear();
							DiskCache_Clear_m3C6A5E5104B8CF7998D637099B86428D08E6003D(__this, NULL);
							// break;
							goto IL_0098_3;
						}

IL_0088_3:
						{
							// Debug.LogWarning($"Unable to read event cache file: corrupt");
							il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
							Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(_stringLiteralF7B4A0635D39960D5AAAE5184E95BA0F3E03CD7E, NULL);
							// Clear();
							DiskCache_Clear_m3C6A5E5104B8CF7998D637099B86428D08E6003D(__this, NULL);
						}

IL_0098_3:
						{
							// }
							goto IL_00c1;
						}
					}// end try (depth: 3)
					catch(Il2CppExceptionWrapper& e)
					{
						if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
						{
							IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
							goto CATCH_009a_2;
						}
						throw e;
					}

CATCH_009a_2:
					{// begin catch(System.Exception)
						// catch (Exception)
						// Debug.LogWarning($"Unable to read event cache file: corrupt");
						il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var)));
						Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7B4A0635D39960D5AAAE5184E95BA0F3E03CD7E)), NULL);
						// Clear();
						DiskCache_Clear_m3C6A5E5104B8CF7998D637099B86428D08E6003D(__this, NULL);
						// }
						IL2CPP_POP_ACTIVE_EXCEPTION();
						goto IL_00c1;
					}// end catch (depth: 3)
				}// end try (depth: 2)
				catch(Il2CppExceptionWrapper& e)
				{
					__finallyBlock.StoreException(e.ex);
				}
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00c1:
	{
		// return false;
		return (bool)0;
	}

IL_00c3:
	{
		// }
		bool L_25 = V_3;
		return L_25;
	}
}
// System.Void Unity.Services.Analytics.Internal.DiskCache::ReadVersionOneCacheFile(System.Collections.Generic.List`1<System.Int32>&,System.IO.BinaryReader,System.IO.Stream&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DiskCache_ReadVersionOneCacheFile_mD1337201A3FBBAD29159B380EC39A07285441C96 (DiskCache_tE19D214B0538F2CC9D59D4F827B480AEBCEF368D* __this, List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73** ___0_eventEndIndices, BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* ___1_reader, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE** ___2_buffer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		// int eventCount = reader.ReadInt32();            // int32 event count
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_0 = ___1_reader;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(15 /* System.Int32 System.IO.BinaryReader::ReadInt32() */, L_0);
		V_0 = L_1;
		// for (int i = 0; i < eventCount; i++)
		V_1 = 0;
		goto IL_001e;
	}

IL_000b:
	{
		// int eventEndIndex = reader.ReadInt32();     // int32 event end index
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_2 = ___1_reader;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = VirtualFuncInvoker0< int32_t >::Invoke(15 /* System.Int32 System.IO.BinaryReader::ReadInt32() */, L_2);
		V_2 = L_3;
		// eventEndIndices.Add(eventEndIndex);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73** L_4 = ___0_eventEndIndices;
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_5 = *((List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73**)L_4);
		int32_t L_6 = V_2;
		NullCheck(L_5);
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_5, L_6, List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		// for (int i = 0; i < eventCount; i++)
		int32_t L_7 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_7, 1));
	}

IL_001e:
	{
		// for (int i = 0; i < eventCount; i++)
		int32_t L_8 = V_1;
		int32_t L_9 = V_0;
		if ((((int32_t)L_8) < ((int32_t)L_9)))
		{
			goto IL_000b;
		}
	}
	{
		// buffer.SetLength(0);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE** L_10 = ___2_buffer;
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_11 = *((Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE**)L_10);
		NullCheck(L_11);
		VirtualActionInvoker1< int64_t >::Invoke(31 /* System.Void System.IO.Stream::SetLength(System.Int64) */, L_11, ((int64_t)0));
		// buffer.Position = 0;
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE** L_12 = ___2_buffer;
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_13 = *((Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE**)L_12);
		NullCheck(L_13);
		VirtualActionInvoker1< int64_t >::Invoke(13 /* System.Void System.IO.Stream::set_Position(System.Int64) */, L_13, ((int64_t)0));
		// reader.BaseStream.CopyTo(buffer);               // byte[] event data is the rest of the file
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_14 = ___1_reader;
		NullCheck(L_14);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_15;
		L_15 = VirtualFuncInvoker0< Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* >::Invoke(5 /* System.IO.Stream System.IO.BinaryReader::get_BaseStream() */, L_14);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE** L_16 = ___2_buffer;
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_17 = *((Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE**)L_16);
		NullCheck(L_15);
		Stream_CopyTo_m61DC54FF3708C2B8AB5C5D63D300AA57ADA01999(L_15, L_17, NULL);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean Unity.Services.Analytics.Internal.Dispatcher::get_FlushInProgress()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dispatcher_get_FlushInProgress_mCC5DAEE29D9E97D753FE7B2C876FC7B9E3F50E28 (Dispatcher_t60105C40E4336C76AECD5AF26D5C6A9448D3ECAE* __this, const RuntimeMethod* method) 
{
	{
		// internal bool FlushInProgress { get; private set; }
		bool L_0 = __this->___U3CFlushInProgressU3Ek__BackingField_4;
		return L_0;
	}
}
// System.Void Unity.Services.Analytics.Internal.Dispatcher::set_FlushInProgress(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dispatcher_set_FlushInProgress_mE7F87C33DBBF7012A706047DC2336D3B6EF9391E (Dispatcher_t60105C40E4336C76AECD5AF26D5C6A9448D3ECAE* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// internal bool FlushInProgress { get; private set; }
		bool L_0 = ___0_value;
		__this->___U3CFlushInProgressU3Ek__BackingField_4 = L_0;
		return;
	}
}
// System.String Unity.Services.Analytics.Internal.Dispatcher::get_CollectUrl()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Dispatcher_get_CollectUrl_m3C55277A1037E4A2BAE8D319D83925467707033B (Dispatcher_t60105C40E4336C76AECD5AF26D5C6A9448D3ECAE* __this, const RuntimeMethod* method) 
{
	{
		// public string CollectUrl { get; set; }
		String_t* L_0 = __this->___U3CCollectUrlU3Ek__BackingField_6;
		return L_0;
	}
}
// System.Void Unity.Services.Analytics.Internal.Dispatcher::set_CollectUrl(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dispatcher_set_CollectUrl_m97595347EED574A294D5A642B952500CE4302829 (Dispatcher_t60105C40E4336C76AECD5AF26D5C6A9448D3ECAE* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public string CollectUrl { get; set; }
		String_t* L_0 = ___0_value;
		__this->___U3CCollectUrlU3Ek__BackingField_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCollectUrlU3Ek__BackingField_6), (void*)L_0);
		return;
	}
}
// System.Void Unity.Services.Analytics.Internal.Dispatcher::.ctor(Unity.Services.Analytics.Internal.IWebRequestHelper,Unity.Services.Analytics.Internal.IConsentTracker)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dispatcher__ctor_m63839CA4DC01ABB9FBE8CAB8E30101DEDAD36386 (Dispatcher_t60105C40E4336C76AECD5AF26D5C6A9448D3ECAE* __this, RuntimeObject* ___0_webRequestHelper, RuntimeObject* ___1_consentTracker, const RuntimeMethod* method) 
{
	{
		// public Dispatcher(IWebRequestHelper webRequestHelper, IConsentTracker consentTracker)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// m_WebRequestHelper = webRequestHelper;
		RuntimeObject* L_0 = ___0_webRequestHelper;
		__this->___m_WebRequestHelper_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_WebRequestHelper_0), (void*)L_0);
		// m_ConsentTracker = consentTracker;
		RuntimeObject* L_1 = ___1_consentTracker;
		__this->___m_ConsentTracker_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_ConsentTracker_1), (void*)L_1);
		// }
		return;
	}
}
// System.Void Unity.Services.Analytics.Internal.Dispatcher::SetBuffer(Unity.Services.Analytics.Internal.IBuffer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dispatcher_SetBuffer_m37334C4FDDB8C2DBA98A12432E896F1D3B45BE29 (Dispatcher_t60105C40E4336C76AECD5AF26D5C6A9448D3ECAE* __this, RuntimeObject* ___0_buffer, const RuntimeMethod* method) 
{
	{
		// m_DataBuffer = buffer;
		RuntimeObject* L_0 = ___0_buffer;
		__this->___m_DataBuffer_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_DataBuffer_2), (void*)L_0);
		// }
		return;
	}
}
// System.Void Unity.Services.Analytics.Internal.Dispatcher::Flush()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dispatcher_Flush_m6167D29547BACF3E42364A0E384EDA58FA8D5247 (Dispatcher_t60105C40E4336C76AECD5AF26D5C6A9448D3ECAE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IConsentTracker_t93AFBEAEA2AE9AC2A012EEBFA4344E527FD92550_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral689C6A4E0E10858B33315ABF7B58B47BF427CAB7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8905FD38EEA933AC528FF73A57DAC6B13D1127E2);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (FlushInProgress)
		bool L_0;
		L_0 = Dispatcher_get_FlushInProgress_mCC5DAEE29D9E97D753FE7B2C876FC7B9E3F50E28_inline(__this, NULL);
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		// Debug.LogWarning("Analytics Dispatcher is already flushing.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(_stringLiteral689C6A4E0E10858B33315ABF7B58B47BF427CAB7, NULL);
		return;
	}

IL_0013:
	{
		// else if (!m_ConsentTracker.IsGeoIpChecked() || !m_ConsentTracker.IsConsentGiven())
		RuntimeObject* L_1 = __this->___m_ConsentTracker_1;
		NullCheck(L_1);
		bool L_2;
		L_2 = InterfaceFuncInvoker0< bool >::Invoke(4 /* System.Boolean Unity.Services.Analytics.Internal.IConsentTracker::IsGeoIpChecked() */, IConsentTracker_t93AFBEAEA2AE9AC2A012EEBFA4344E527FD92550_il2cpp_TypeInfo_var, L_1);
		if (!L_2)
		{
			goto IL_002d;
		}
	}
	{
		RuntimeObject* L_3 = __this->___m_ConsentTracker_1;
		NullCheck(L_3);
		bool L_4;
		L_4 = InterfaceFuncInvoker0< bool >::Invoke(5 /* System.Boolean Unity.Services.Analytics.Internal.IConsentTracker::IsConsentGiven() */, IConsentTracker_t93AFBEAEA2AE9AC2A012EEBFA4344E527FD92550_il2cpp_TypeInfo_var, L_3);
		if (L_4)
		{
			goto IL_0038;
		}
	}

IL_002d:
	{
		// Debug.LogWarning("Required consent wasn't checked and given when trying to dispatch events, the events cannot be sent.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(_stringLiteral8905FD38EEA933AC528FF73A57DAC6B13D1127E2, NULL);
		return;
	}

IL_0038:
	{
		// FlushBufferToService();
		Dispatcher_FlushBufferToService_m55AC50B02B30BD4ED1E554D794AA5DEE9FB77C39(__this, NULL);
		// }
		return;
	}
}
// System.Void Unity.Services.Analytics.Internal.Dispatcher::FlushBufferToService()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dispatcher_FlushBufferToService_m55AC50B02B30BD4ED1E554D794AA5DEE9FB77C39 (Dispatcher_t60105C40E4336C76AECD5AF26D5C6A9448D3ECAE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tBB5A52E9AEFBC4F0C8D94D39CAD16BCB6B8B5929_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_GetEnumerator_m46EC45F42CA2279D83568CD3F216AAABA8E749F6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dispatcher_UploadCompleted_m1A96D525DB4DE2A378D239C3D11DA427E36B2459_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m068DDFF5CAFBB15C8A0602DEADA7F10C5BB7ADCD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mA93491D9B55547D066053F3BC0A69C635F877438_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m49070E88C2E34AB46E6292A3FB1C227576B8506E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBuffer_t0E4742F785C935FD676BFEE280CD1D6FF26BBD82_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IConsentTracker_t93AFBEAEA2AE9AC2A012EEBFA4344E527FD92550_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IWebRequestHelper_tCCD82817C71896176475384430BB0D9BEF732858_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IWebRequest_t8FAADA0ED58F096C28998EB5AFE9E79FD05F4DFE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_m654BCCAE2F20CB11D8E8C2D2C886A0C8A13EB1C4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_m7345512A32CB4DCAA0643050B18DC8DCD71B927A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral14E338D17C42E552FA7AF42CDAE40CA1F0E8A04D);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	Enumerator_t173E7BE1F35CA448C7E0EE77345C9E0EC0206562 V_1;
	memset((&V_1), 0, sizeof(V_1));
	KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// FlushInProgress = true;
		Dispatcher_set_FlushInProgress_mE7F87C33DBBF7012A706047DC2336D3B6EF9391E_inline(__this, (bool)1, NULL);
		// var postBytes = m_DataBuffer.Serialize();
		RuntimeObject* L_0 = __this->___m_DataBuffer_2;
		NullCheck(L_0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1;
		L_1 = InterfaceFuncInvoker0< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(5 /* System.Byte[] Unity.Services.Analytics.Internal.IBuffer::Serialize() */, IBuffer_t0E4742F785C935FD676BFEE280CD1D6FF26BBD82_il2cpp_TypeInfo_var, L_0);
		V_0 = L_1;
		// m_FlushBufferIndex = m_DataBuffer.Length;
		RuntimeObject* L_2 = __this->___m_DataBuffer_2;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 Unity.Services.Analytics.Internal.IBuffer::get_Length() */, IBuffer_t0E4742F785C935FD676BFEE280CD1D6FF26BBD82_il2cpp_TypeInfo_var, L_2);
		__this->___m_FlushBufferIndex_5 = L_3;
		// if (postBytes == null || postBytes.Length == 0)
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = V_0;
		if (!L_4)
		{
			goto IL_002b;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = V_0;
		NullCheck(L_5);
		if ((((RuntimeArray*)L_5)->max_length))
		{
			goto IL_003a;
		}
	}

IL_002b:
	{
		// FlushInProgress = false;
		Dispatcher_set_FlushInProgress_mE7F87C33DBBF7012A706047DC2336D3B6EF9391E_inline(__this, (bool)0, NULL);
		// m_FlushBufferIndex = 0;
		__this->___m_FlushBufferIndex_5 = 0;
		return;
	}

IL_003a:
	{
		// m_FlushRequest = m_WebRequestHelper.CreateWebRequest(CollectUrl, UnityWebRequest.kHttpVerbPOST, postBytes);
		RuntimeObject* L_6 = __this->___m_WebRequestHelper_0;
		String_t* L_7;
		L_7 = Dispatcher_get_CollectUrl_m3C55277A1037E4A2BAE8D319D83925467707033B_inline(__this, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = V_0;
		NullCheck(L_6);
		RuntimeObject* L_9;
		L_9 = InterfaceFuncInvoker3< RuntimeObject*, String_t*, String_t*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(0 /* Unity.Services.Analytics.Internal.IWebRequest Unity.Services.Analytics.Internal.IWebRequestHelper::CreateWebRequest(System.String,System.String,System.Byte[]) */, IWebRequestHelper_tCCD82817C71896176475384430BB0D9BEF732858_il2cpp_TypeInfo_var, L_6, L_7, _stringLiteral14E338D17C42E552FA7AF42CDAE40CA1F0E8A04D, L_8);
		__this->___m_FlushRequest_3 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_FlushRequest_3), (void*)L_9);
		// if (m_ConsentTracker.IsGeoIpChecked() && m_ConsentTracker.IsConsentGiven())
		RuntimeObject* L_10 = __this->___m_ConsentTracker_1;
		NullCheck(L_10);
		bool L_11;
		L_11 = InterfaceFuncInvoker0< bool >::Invoke(4 /* System.Boolean Unity.Services.Analytics.Internal.IConsentTracker::IsGeoIpChecked() */, IConsentTracker_t93AFBEAEA2AE9AC2A012EEBFA4344E527FD92550_il2cpp_TypeInfo_var, L_10);
		if (!L_11)
		{
			goto IL_00be;
		}
	}
	{
		RuntimeObject* L_12 = __this->___m_ConsentTracker_1;
		NullCheck(L_12);
		bool L_13;
		L_13 = InterfaceFuncInvoker0< bool >::Invoke(5 /* System.Boolean Unity.Services.Analytics.Internal.IConsentTracker::IsConsentGiven() */, IConsentTracker_t93AFBEAEA2AE9AC2A012EEBFA4344E527FD92550_il2cpp_TypeInfo_var, L_12);
		if (!L_13)
		{
			goto IL_00be;
		}
	}
	{
		// foreach (var header in m_ConsentTracker.requiredHeaders)
		RuntimeObject* L_14 = __this->___m_ConsentTracker_1;
		NullCheck(L_14);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_15;
		L_15 = InterfaceFuncInvoker0< Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* >::Invoke(1 /* System.Collections.Generic.Dictionary`2<System.String,System.String> Unity.Services.Analytics.Internal.IConsentTracker::get_requiredHeaders() */, IConsentTracker_t93AFBEAEA2AE9AC2A012EEBFA4344E527FD92550_il2cpp_TypeInfo_var, L_14);
		NullCheck(L_15);
		Enumerator_t173E7BE1F35CA448C7E0EE77345C9E0EC0206562 L_16;
		L_16 = Dictionary_2_GetEnumerator_m46EC45F42CA2279D83568CD3F216AAABA8E749F6(L_15, Dictionary_2_GetEnumerator_m46EC45F42CA2279D83568CD3F216AAABA8E749F6_RuntimeMethod_var);
		V_1 = L_16;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00b0:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m068DDFF5CAFBB15C8A0602DEADA7F10C5BB7ADCD((&V_1), Enumerator_Dispose_m068DDFF5CAFBB15C8A0602DEADA7F10C5BB7ADCD_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_00a5_1;
			}

IL_0084_1:
			{
				// foreach (var header in m_ConsentTracker.requiredHeaders)
				KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A L_17;
				L_17 = Enumerator_get_Current_m49070E88C2E34AB46E6292A3FB1C227576B8506E_inline((&V_1), Enumerator_get_Current_m49070E88C2E34AB46E6292A3FB1C227576B8506E_RuntimeMethod_var);
				V_2 = L_17;
				// m_FlushRequest.SetRequestHeader(header.Key, header.Value);
				RuntimeObject* L_18 = __this->___m_FlushRequest_3;
				String_t* L_19;
				L_19 = KeyValuePair_2_get_Key_m654BCCAE2F20CB11D8E8C2D2C886A0C8A13EB1C4_inline((&V_2), KeyValuePair_2_get_Key_m654BCCAE2F20CB11D8E8C2D2C886A0C8A13EB1C4_RuntimeMethod_var);
				String_t* L_20;
				L_20 = KeyValuePair_2_get_Value_m7345512A32CB4DCAA0643050B18DC8DCD71B927A_inline((&V_2), KeyValuePair_2_get_Value_m7345512A32CB4DCAA0643050B18DC8DCD71B927A_RuntimeMethod_var);
				NullCheck(L_18);
				InterfaceActionInvoker2< String_t*, String_t* >::Invoke(1 /* System.Void Unity.Services.Analytics.Internal.IWebRequest::SetRequestHeader(System.String,System.String) */, IWebRequest_t8FAADA0ED58F096C28998EB5AFE9E79FD05F4DFE_il2cpp_TypeInfo_var, L_18, L_19, L_20);
			}

IL_00a5_1:
			{
				// foreach (var header in m_ConsentTracker.requiredHeaders)
				bool L_21;
				L_21 = Enumerator_MoveNext_mA93491D9B55547D066053F3BC0A69C635F877438((&V_1), Enumerator_MoveNext_mA93491D9B55547D066053F3BC0A69C635F877438_RuntimeMethod_var);
				if (L_21)
				{
					goto IL_0084_1;
				}
			}
			{
				goto IL_00be;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00be:
	{
		// m_WebRequestHelper.SendWebRequest(m_FlushRequest, UploadCompleted);
		RuntimeObject* L_22 = __this->___m_WebRequestHelper_0;
		RuntimeObject* L_23 = __this->___m_FlushRequest_3;
		Action_1_tBB5A52E9AEFBC4F0C8D94D39CAD16BCB6B8B5929* L_24 = (Action_1_tBB5A52E9AEFBC4F0C8D94D39CAD16BCB6B8B5929*)il2cpp_codegen_object_new(Action_1_tBB5A52E9AEFBC4F0C8D94D39CAD16BCB6B8B5929_il2cpp_TypeInfo_var);
		NullCheck(L_24);
		Action_1__ctor_mC0FC430617EB8A9B54D1632C5BD95979ED5C2C2A(L_24, __this, (intptr_t)((void*)Dispatcher_UploadCompleted_m1A96D525DB4DE2A378D239C3D11DA427E36B2459_RuntimeMethod_var), NULL);
		NullCheck(L_22);
		InterfaceActionInvoker2< RuntimeObject*, Action_1_tBB5A52E9AEFBC4F0C8D94D39CAD16BCB6B8B5929* >::Invoke(1 /* System.Void Unity.Services.Analytics.Internal.IWebRequestHelper::SendWebRequest(Unity.Services.Analytics.Internal.IWebRequest,System.Action`1<System.Int64>) */, IWebRequestHelper_tCCD82817C71896176475384430BB0D9BEF732858_il2cpp_TypeInfo_var, L_22, L_23, L_24);
		// }
		return;
	}
}
// System.Void Unity.Services.Analytics.Internal.Dispatcher::UploadCompleted(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dispatcher_UploadCompleted_m1A96D525DB4DE2A378D239C3D11DA427E36B2459 (Dispatcher_t60105C40E4336C76AECD5AF26D5C6A9448D3ECAE* __this, int64_t ___0_responseCode, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBuffer_t0E4742F785C935FD676BFEE280CD1D6FF26BBD82_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IWebRequest_t8FAADA0ED58F096C28998EB5AFE9E79FD05F4DFE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!m_FlushRequest.isNetworkError &&
		//     (responseCode == 204 || responseCode == 400))
		RuntimeObject* L_0 = __this->___m_FlushRequest_3;
		NullCheck(L_0);
		bool L_1;
		L_1 = InterfaceFuncInvoker0< bool >::Invoke(2 /* System.Boolean Unity.Services.Analytics.Internal.IWebRequest::get_isNetworkError() */, IWebRequest_t8FAADA0ED58F096C28998EB5AFE9E79FD05F4DFE_il2cpp_TypeInfo_var, L_0);
		if (L_1)
		{
			goto IL_003e;
		}
	}
	{
		int64_t L_2 = ___0_responseCode;
		if ((((int64_t)L_2) == ((int64_t)((int64_t)((int32_t)204)))))
		{
			goto IL_001f;
		}
	}
	{
		int64_t L_3 = ___0_responseCode;
		if ((!(((uint64_t)L_3) == ((uint64_t)((int64_t)((int32_t)400))))))
		{
			goto IL_003e;
		}
	}

IL_001f:
	{
		// m_DataBuffer.ClearBuffer(m_FlushBufferIndex);
		RuntimeObject* L_4 = __this->___m_DataBuffer_2;
		int32_t L_5 = __this->___m_FlushBufferIndex_5;
		NullCheck(L_4);
		InterfaceActionInvoker1< int64_t >::Invoke(15 /* System.Void Unity.Services.Analytics.Internal.IBuffer::ClearBuffer(System.Int64) */, IBuffer_t0E4742F785C935FD676BFEE280CD1D6FF26BBD82_il2cpp_TypeInfo_var, L_4, ((int64_t)L_5));
		// m_DataBuffer.ClearDiskCache();
		RuntimeObject* L_6 = __this->___m_DataBuffer_2;
		NullCheck(L_6);
		InterfaceActionInvoker0::Invoke(13 /* System.Void Unity.Services.Analytics.Internal.IBuffer::ClearDiskCache() */, IBuffer_t0E4742F785C935FD676BFEE280CD1D6FF26BBD82_il2cpp_TypeInfo_var, L_6);
		goto IL_0049;
	}

IL_003e:
	{
		// m_DataBuffer.FlushToDisk();
		RuntimeObject* L_7 = __this->___m_DataBuffer_2;
		NullCheck(L_7);
		InterfaceActionInvoker0::Invoke(12 /* System.Void Unity.Services.Analytics.Internal.IBuffer::FlushToDisk() */, IBuffer_t0E4742F785C935FD676BFEE280CD1D6FF26BBD82_il2cpp_TypeInfo_var, L_7);
	}

IL_0049:
	{
		// FlushInProgress = false;
		Dispatcher_set_FlushInProgress_mE7F87C33DBBF7012A706047DC2336D3B6EF9391E_inline(__this, (bool)0, NULL);
		// m_FlushBufferIndex = 0;
		__this->___m_FlushBufferIndex_5 = 0;
		// m_FlushRequest.Dispose();
		RuntimeObject* L_8 = __this->___m_FlushRequest_3;
		NullCheck(L_8);
		InterfaceActionInvoker0::Invoke(3 /* System.Void Unity.Services.Analytics.Internal.IWebRequest::Dispose() */, IWebRequest_t8FAADA0ED58F096C28998EB5AFE9E79FD05F4DFE_il2cpp_TypeInfo_var, L_8);
		// m_FlushRequest = null;
		__this->___m_FlushRequest_3 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_FlushRequest_3), (void*)(RuntimeObject*)NULL);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Unity.Services.Analytics.Internal.AnalyticsWebRequest::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnalyticsWebRequest__ctor_m8CA36BAF33C32134D350FC88E7BF795AFFDFD77D (AnalyticsWebRequest_t2851A3E58826329B4D5AE9A1898AD98EF26DEEFA* __this, String_t* ___0_url, String_t* ___1_method, const RuntimeMethod* method) 
{
	{
		// internal AnalyticsWebRequest(string url, string method) : base(url, method) { }
		String_t* L_0 = ___0_url;
		String_t* L_1 = ___1_method;
		UnityWebRequest__ctor_mD4739B0BF1C4937479A83B24B531C6B819712A3E(__this, L_0, L_1, NULL);
		// internal AnalyticsWebRequest(string url, string method) : base(url, method) { }
		return;
	}
}
// UnityEngine.Networking.UnityWebRequestAsyncOperation Unity.Services.Analytics.Internal.AnalyticsWebRequest::Unity.Services.Analytics.Internal.IWebRequest.SendWebRequest()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C* AnalyticsWebRequest_Unity_Services_Analytics_Internal_IWebRequest_SendWebRequest_m415458FF981E6B3BC598B67AD580DA8443D35502 (AnalyticsWebRequest_t2851A3E58826329B4D5AE9A1898AD98EF26DEEFA* __this, const RuntimeMethod* method) 
{
	{
		UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C* L_0;
		L_0 = UnityWebRequest_SendWebRequest_mA3CD13983BAA5074A0640EDD661B1E46E6DB6C13(__this, NULL);
		return L_0;
	}
}
// System.Void Unity.Services.Analytics.Internal.AnalyticsWebRequest::Unity.Services.Analytics.Internal.IWebRequest.SetRequestHeader(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnalyticsWebRequest_Unity_Services_Analytics_Internal_IWebRequest_SetRequestHeader_m150D2DC1E3957BC6F3C6052A03693C70F095B3BC (AnalyticsWebRequest_t2851A3E58826329B4D5AE9A1898AD98EF26DEEFA* __this, String_t* ___0_key, String_t* ___1_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_key;
		String_t* L_1 = ___1_value;
		UnityWebRequest_SetRequestHeader_m099734EB787B7269B62AB2236A5A4F7D35AF8BC5(__this, L_0, L_1, NULL);
		return;
	}
}
// System.Boolean Unity.Services.Analytics.Internal.AnalyticsWebRequest::Unity.Services.Analytics.Internal.IWebRequest.get_isNetworkError()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnalyticsWebRequest_Unity_Services_Analytics_Internal_IWebRequest_get_isNetworkError_m2C27DA5E204D0625435A7C0C27C10E18EC287E93 (AnalyticsWebRequest_t2851A3E58826329B4D5AE9A1898AD98EF26DEEFA* __this, const RuntimeMethod* method) 
{
	{
		bool L_0;
		L_0 = UnityWebRequest_get_isNetworkError_m036684411466688E71E67CDD3703BAC9035A56F0(__this, NULL);
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Unity.Services.Analytics.Internal.IWebRequest Unity.Services.Analytics.Internal.WebRequestHelper::CreateWebRequest(System.String,System.String,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WebRequestHelper_CreateWebRequest_m06C697E4C704BADC84F815F3F84A4144708DDFFA (WebRequestHelper_t90785D95A7FBCCA284192A9CB95D1DA845D57E71* __this, String_t* ___0_url, String_t* ___1_method, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_postBytes, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnalyticsWebRequest_t2851A3E58826329B4D5AE9A1898AD98EF26DEEFA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UploadHandlerRaw_t0A24CF320CDF16F1BC6C5C086DE71A1908CBB91A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral64058CC688A96A90239811EF06C9D20DB0499C3E);
		s_Il2CppMethodInitialized = true;
	}
	UploadHandlerRaw_t0A24CF320CDF16F1BC6C5C086DE71A1908CBB91A* V_0 = NULL;
	{
		// var request = new AnalyticsWebRequest(url, method);
		String_t* L_0 = ___0_url;
		String_t* L_1 = ___1_method;
		AnalyticsWebRequest_t2851A3E58826329B4D5AE9A1898AD98EF26DEEFA* L_2 = (AnalyticsWebRequest_t2851A3E58826329B4D5AE9A1898AD98EF26DEEFA*)il2cpp_codegen_object_new(AnalyticsWebRequest_t2851A3E58826329B4D5AE9A1898AD98EF26DEEFA_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		AnalyticsWebRequest__ctor_m8CA36BAF33C32134D350FC88E7BF795AFFDFD77D(L_2, L_0, L_1, NULL);
		// var upload = new UploadHandlerRaw(postBytes)
		// {
		//     contentType = "application/json"
		// };
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___2_postBytes;
		UploadHandlerRaw_t0A24CF320CDF16F1BC6C5C086DE71A1908CBB91A* L_4 = (UploadHandlerRaw_t0A24CF320CDF16F1BC6C5C086DE71A1908CBB91A*)il2cpp_codegen_object_new(UploadHandlerRaw_t0A24CF320CDF16F1BC6C5C086DE71A1908CBB91A_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		UploadHandlerRaw__ctor_m168C957B67E29CB3072E3542044D37E2F16C42B7(L_4, L_3, NULL);
		UploadHandlerRaw_t0A24CF320CDF16F1BC6C5C086DE71A1908CBB91A* L_5 = L_4;
		NullCheck(L_5);
		UploadHandler_set_contentType_mEFF2D2512996DFFF2BFC013388B702078BDC73F3(L_5, _stringLiteral64058CC688A96A90239811EF06C9D20DB0499C3E, NULL);
		V_0 = L_5;
		// request.uploadHandler = upload;
		AnalyticsWebRequest_t2851A3E58826329B4D5AE9A1898AD98EF26DEEFA* L_6 = L_2;
		UploadHandlerRaw_t0A24CF320CDF16F1BC6C5C086DE71A1908CBB91A* L_7 = V_0;
		NullCheck(L_6);
		UnityWebRequest_set_uploadHandler_m68F346550136DE178C79238944985892196027FE(L_6, L_7, NULL);
		// return request;
		return L_6;
	}
}
// System.Void Unity.Services.Analytics.Internal.WebRequestHelper::SendWebRequest(Unity.Services.Analytics.Internal.IWebRequest,System.Action`1<System.Int64>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebRequestHelper_SendWebRequest_mF1D98192E9EBDB286BC094900284220080FF9F5D (WebRequestHelper_t90785D95A7FBCCA284192A9CB95D1DA845D57E71* __this, RuntimeObject* ___0_request, Action_1_tBB5A52E9AEFBC4F0C8D94D39CAD16BCB6B8B5929* ___1_onCompleted, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IWebRequest_t8FAADA0ED58F096C28998EB5AFE9E79FD05F4DFE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass1_0_U3CSendWebRequestU3Eb__0_m5B75546A87917B4470194F42B9EE6B62890BA815_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass1_0_tEA14AF045675E396173ADD0A1FE52135E6FA37A8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass1_0_tEA14AF045675E396173ADD0A1FE52135E6FA37A8* V_0 = NULL;
	{
		U3CU3Ec__DisplayClass1_0_tEA14AF045675E396173ADD0A1FE52135E6FA37A8* L_0 = (U3CU3Ec__DisplayClass1_0_tEA14AF045675E396173ADD0A1FE52135E6FA37A8*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass1_0_tEA14AF045675E396173ADD0A1FE52135E6FA37A8_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass1_0__ctor_m1DE2113561D29AF6B101E20477737F8FF6DAAF2E(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass1_0_tEA14AF045675E396173ADD0A1FE52135E6FA37A8* L_1 = V_0;
		Action_1_tBB5A52E9AEFBC4F0C8D94D39CAD16BCB6B8B5929* L_2 = ___1_onCompleted;
		NullCheck(L_1);
		L_1->___onCompleted_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___onCompleted_0), (void*)L_2);
		// var requestOp = request.SendWebRequest();
		U3CU3Ec__DisplayClass1_0_tEA14AF045675E396173ADD0A1FE52135E6FA37A8* L_3 = V_0;
		RuntimeObject* L_4 = ___0_request;
		NullCheck(L_4);
		UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C* L_5;
		L_5 = InterfaceFuncInvoker0< UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C* >::Invoke(0 /* UnityEngine.Networking.UnityWebRequestAsyncOperation Unity.Services.Analytics.Internal.IWebRequest::SendWebRequest() */, IWebRequest_t8FAADA0ED58F096C28998EB5AFE9E79FD05F4DFE_il2cpp_TypeInfo_var, L_4);
		NullCheck(L_3);
		L_3->___requestOp_1 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___requestOp_1), (void*)L_5);
		// requestOp.completed += delegate
		// {
		//     onCompleted(requestOp.webRequest.responseCode);
		// };
		U3CU3Ec__DisplayClass1_0_tEA14AF045675E396173ADD0A1FE52135E6FA37A8* L_6 = V_0;
		NullCheck(L_6);
		UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C* L_7 = L_6->___requestOp_1;
		U3CU3Ec__DisplayClass1_0_tEA14AF045675E396173ADD0A1FE52135E6FA37A8* L_8 = V_0;
		Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB* L_9 = (Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB*)il2cpp_codegen_object_new(Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		Action_1__ctor_m33ABB7530487276910BEFB499A97D33FB2E06D7D(L_9, L_8, (intptr_t)((void*)U3CU3Ec__DisplayClass1_0_U3CSendWebRequestU3Eb__0_m5B75546A87917B4470194F42B9EE6B62890BA815_RuntimeMethod_var), NULL);
		NullCheck(L_7);
		AsyncOperation_add_completed_mD6F21BA8127D6D4B7ABDEFAA995A7A347A20A793(L_7, L_9, NULL);
		// }
		return;
	}
}
// System.Void Unity.Services.Analytics.Internal.WebRequestHelper::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebRequestHelper__ctor_m5F76E493A0C15311928DCCCCE293752DF3DA0CC9 (WebRequestHelper_t90785D95A7FBCCA284192A9CB95D1DA845D57E71* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Unity.Services.Analytics.Internal.WebRequestHelper/<>c__DisplayClass1_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass1_0__ctor_m1DE2113561D29AF6B101E20477737F8FF6DAAF2E (U3CU3Ec__DisplayClass1_0_tEA14AF045675E396173ADD0A1FE52135E6FA37A8* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Unity.Services.Analytics.Internal.WebRequestHelper/<>c__DisplayClass1_0::<SendWebRequest>b__0(UnityEngine.AsyncOperation)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass1_0_U3CSendWebRequestU3Eb__0_m5B75546A87917B4470194F42B9EE6B62890BA815 (U3CU3Ec__DisplayClass1_0_tEA14AF045675E396173ADD0A1FE52135E6FA37A8* __this, AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* ___0_U3Cp0U3E, const RuntimeMethod* method) 
{
	{
		// onCompleted(requestOp.webRequest.responseCode);
		Action_1_tBB5A52E9AEFBC4F0C8D94D39CAD16BCB6B8B5929* L_0 = __this->___onCompleted_0;
		UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C* L_1 = __this->___requestOp_1;
		NullCheck(L_1);
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_2;
		L_2 = UnityWebRequestAsyncOperation_get_webRequest_mF67D15420C7C1C4DCA1BD6F839048A0542998BC3_inline(L_1, NULL);
		NullCheck(L_2);
		int64_t L_3;
		L_3 = UnityWebRequest_get_responseCode_m012C177F61435D5D120A21D7A03FFF7B0F8B904B(L_2, NULL);
		NullCheck(L_0);
		Action_1_Invoke_mE4800C6D733A4CDE721FD3D8B4E95319B5C64E9E_inline(L_0, L_3, NULL);
		// };
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Unity.Services.Analytics.Internal.StandardEventServiceComponent::.ctor(Unity.Services.Core.Configuration.Internal.IProjectConfiguration,Unity.Services.Analytics.IUnstructuredEventRecorder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StandardEventServiceComponent__ctor_mED8BAC8D2E1D561A6DCB4A1F35D4E7A60553CB87 (StandardEventServiceComponent_t587EC5F02461A7AD305539BAB07A2B93FD56E2BB* __this, RuntimeObject* ___0_configuration, RuntimeObject* ___1_analyticsService, const RuntimeMethod* method) 
{
	{
		// public StandardEventServiceComponent(IProjectConfiguration configuration, IUnstructuredEventRecorder analyticsService)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// m_Configuration = configuration;
		RuntimeObject* L_0 = ___0_configuration;
		__this->___m_Configuration_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Configuration_0), (void*)L_0);
		// m_AnalyticsService = analyticsService;
		RuntimeObject* L_1 = ___1_analyticsService;
		__this->___m_AnalyticsService_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_AnalyticsService_1), (void*)L_1);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean Unity.Services.Analytics.Platform.DebugDevice::IsDebugDevice()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DebugDevice_IsDebugDevice_mA1EEB1D12950C445B81D7EBE8C254DDE2437B333 (const RuntimeMethod* method) 
{
	{
		// return false;
		return (bool)0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Nullable`1<System.Single> Unity.Services.Analytics.Platform.DeviceVolumeProvider::GetDeviceVolume()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 DeviceVolumeProvider_GetDeviceVolume_m1318E3ADBEF76202DE617254B3CBB6028FE3D3DE (const RuntimeMethod* method) 
{
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return null;
		il2cpp_codegen_initobj((&V_0), sizeof(Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75));
		Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 L_0 = V_0;
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.String Unity.Services.Analytics.Platform.Runtime::Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Runtime_Name_m5691169825FA2CC731731BE5BF745118C339B1E9 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UA2PlatformCode_t169515A6E124BCE234B36176D037F6E09BC3BAC6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// return GetPlatform().ToString();
		int32_t L_0;
		L_0 = Runtime_GetPlatform_mC00CBA2AD7478773ACCB340218D1C6866954104C(NULL);
		V_0 = L_0;
		Il2CppFakeBox<int32_t> L_1(UA2PlatformCode_t169515A6E124BCE234B36176D037F6E09BC3BAC6_il2cpp_TypeInfo_var, (&V_0));
		String_t* L_2;
		L_2 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_1), NULL);
		return L_2;
	}
}
// Unity.Services.Analytics.Platform.UA2PlatformCode Unity.Services.Analytics.Platform.Runtime::GetPlatform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Runtime_GetPlatform_mC00CBA2AD7478773ACCB340218D1C6866954104C (const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// switch (Application.platform)
		int32_t L_0;
		L_0 = Application_get_platform_m59EF7D6155D18891B24767F83F388160B1FF2138(NULL);
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) > ((int32_t)((int32_t)25))))
		{
			goto IL_006c;
		}
	}
	{
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_007d;
			}
			case 1:
			{
				goto IL_007d;
			}
			case 2:
			{
				goto IL_0080;
			}
			case 3:
			{
				goto IL_00a2;
			}
			case 4:
			{
				goto IL_00a2;
			}
			case 5:
			{
				goto IL_00a2;
			}
			case 6:
			{
				goto IL_00a2;
			}
			case 7:
			{
				goto IL_0080;
			}
			case 8:
			{
				goto IL_0083;
			}
			case 9:
			{
				goto IL_00a2;
			}
			case 10:
			{
				goto IL_00a2;
			}
			case 11:
			{
				goto IL_0085;
			}
			case 12:
			{
				goto IL_00a2;
			}
			case 13:
			{
				goto IL_0080;
			}
			case 14:
			{
				goto IL_00a2;
			}
			case 15:
			{
				goto IL_00a2;
			}
			case 16:
			{
				goto IL_0080;
			}
			case 17:
			{
				goto IL_0087;
			}
			case 18:
			{
				goto IL_008a;
			}
			case 19:
			{
				goto IL_008a;
			}
			case 20:
			{
				goto IL_008a;
			}
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)((int32_t)25))))
		{
			goto IL_0097;
		}
	}
	{
		goto IL_00a2;
	}

IL_006c:
	{
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)27))))
		{
			goto IL_009a;
		}
	}
	{
		int32_t L_5 = V_0;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)31))))
		{
			goto IL_009d;
		}
	}
	{
		int32_t L_6 = V_0;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)32))))
		{
			goto IL_009f;
		}
	}
	{
		goto IL_00a2;
	}

IL_007d:
	{
		// return UA2PlatformCode.MAC_CLIENT;
		return (int32_t)(((int32_t)16));
	}

IL_0080:
	{
		// return UA2PlatformCode.PC_CLIENT;
		return (int32_t)(((int32_t)15));
	}

IL_0083:
	{
		// return UA2PlatformCode.IOS;
		return (int32_t)(1);
	}

IL_0085:
	{
		// return UA2PlatformCode.ANDROID;
		return (int32_t)(5);
	}

IL_0087:
	{
		// return UA2PlatformCode.WEB;
		return (int32_t)(((int32_t)14));
	}

IL_008a:
	{
		// return (SystemInfo.deviceType == DeviceType.Handheld)
		//     ? UA2PlatformCode.WINDOWS_MOBILE
		//     : UA2PlatformCode.PC_CLIENT;
		int32_t L_7;
		L_7 = SystemInfo_get_deviceType_m9BA3769FAC1102E252B5350FE208BF885E5F24D0(NULL);
		if ((((int32_t)L_7) == ((int32_t)1)))
		{
			goto IL_0095;
		}
	}
	{
		return (int32_t)(((int32_t)15));
	}

IL_0095:
	{
		return (int32_t)(8);
	}

IL_0097:
	{
		// return UA2PlatformCode.PS4;
		return (int32_t)(((int32_t)18));
	}

IL_009a:
	{
		// return UA2PlatformCode.XBOXONE;
		return (int32_t)(((int32_t)21));
	}

IL_009d:
	{
		// return UA2PlatformCode.IOS_TV;
		return (int32_t)(4);
	}

IL_009f:
	{
		// return UA2PlatformCode.SWITCH;
		return (int32_t)(((int32_t)23));
	}

IL_00a2:
	{
		// return UA2PlatformCode.UNKNOWN;
		return (int32_t)(0);
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.String Unity.Services.Analytics.Data.StdCommonParams::get_GameStoreID()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StdCommonParams_get_GameStoreID_m84117F13E7CB919145EC3EF0480411695B7B7B69 (StdCommonParams_tDFD4FF72F7EEBBC4384155713888A4485FF5E701* __this, const RuntimeMethod* method) 
{
	{
		// internal string GameStoreID { get; set; }
		String_t* L_0 = __this->___U3CGameStoreIDU3Ek__BackingField_0;
		return L_0;
	}
}
// System.String Unity.Services.Analytics.Data.StdCommonParams::get_GameBundleID()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StdCommonParams_get_GameBundleID_m614C916F3CBA18D60161DDFD84B4C9D5C2E99531 (StdCommonParams_tDFD4FF72F7EEBBC4384155713888A4485FF5E701* __this, const RuntimeMethod* method) 
{
	{
		// internal string GameBundleID { get; set; }
		String_t* L_0 = __this->___U3CGameBundleIDU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void Unity.Services.Analytics.Data.StdCommonParams::set_GameBundleID(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StdCommonParams_set_GameBundleID_m01625DC8750160BEF86073C96048B910A23B8FE6 (StdCommonParams_tDFD4FF72F7EEBBC4384155713888A4485FF5E701* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// internal string GameBundleID { get; set; }
		String_t* L_0 = ___0_value;
		__this->___U3CGameBundleIDU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CGameBundleIDU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
// System.String Unity.Services.Analytics.Data.StdCommonParams::get_Platform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StdCommonParams_get_Platform_m997C2F5D078131853762DCFBA238288F8EFA191E (StdCommonParams_tDFD4FF72F7EEBBC4384155713888A4485FF5E701* __this, const RuntimeMethod* method) 
{
	{
		// internal string Platform { get; set; }
		String_t* L_0 = __this->___U3CPlatformU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void Unity.Services.Analytics.Data.StdCommonParams::set_Platform(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StdCommonParams_set_Platform_m6270CCD19D8CB881BC5668613C041C5E5BD0996C (StdCommonParams_tDFD4FF72F7EEBBC4384155713888A4485FF5E701* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// internal string Platform { get; set; }
		String_t* L_0 = ___0_value;
		__this->___U3CPlatformU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CPlatformU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
// System.String Unity.Services.Analytics.Data.StdCommonParams::get_UasUserID()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StdCommonParams_get_UasUserID_m6A4DE2B299022D7DBCEA6EE055C717E59BE2B32C (StdCommonParams_tDFD4FF72F7EEBBC4384155713888A4485FF5E701* __this, const RuntimeMethod* method) 
{
	{
		// internal string UasUserID { get; set; }
		String_t* L_0 = __this->___U3CUasUserIDU3Ek__BackingField_3;
		return L_0;
	}
}
// System.Void Unity.Services.Analytics.Data.StdCommonParams::set_UasUserID(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StdCommonParams_set_UasUserID_m5079F59137ED8AA3D25BBDFBF10E536812D8ABB7 (StdCommonParams_tDFD4FF72F7EEBBC4384155713888A4485FF5E701* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// internal string UasUserID { get; set; }
		String_t* L_0 = ___0_value;
		__this->___U3CUasUserIDU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CUasUserIDU3Ek__BackingField_3), (void*)L_0);
		return;
	}
}
// System.String Unity.Services.Analytics.Data.StdCommonParams::get_Idfv()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StdCommonParams_get_Idfv_m0CB0676EB45E77DE51316B204FFAE5437CEFA6DD (StdCommonParams_tDFD4FF72F7EEBBC4384155713888A4485FF5E701* __this, const RuntimeMethod* method) 
{
	{
		// internal string Idfv { get; set; }
		String_t* L_0 = __this->___U3CIdfvU3Ek__BackingField_4;
		return L_0;
	}
}
// System.Void Unity.Services.Analytics.Data.StdCommonParams::set_Idfv(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StdCommonParams_set_Idfv_mC903A6BEA3F5145D959C36D123D084D211085EF9 (StdCommonParams_tDFD4FF72F7EEBBC4384155713888A4485FF5E701* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// internal string Idfv { get; set; }
		String_t* L_0 = ___0_value;
		__this->___U3CIdfvU3Ek__BackingField_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CIdfvU3Ek__BackingField_4), (void*)L_0);
		return;
	}
}
// System.Nullable`1<System.Double> Unity.Services.Analytics.Data.StdCommonParams::get_DeviceVolume()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 StdCommonParams_get_DeviceVolume_mD4CB9275283492DA050B8BDA949E1E38C35EB76C (StdCommonParams_tDFD4FF72F7EEBBC4384155713888A4485FF5E701* __this, const RuntimeMethod* method) 
{
	{
		// internal double? DeviceVolume { get; set; }
		Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 L_0 = __this->___U3CDeviceVolumeU3Ek__BackingField_5;
		return L_0;
	}
}
// System.Void Unity.Services.Analytics.Data.StdCommonParams::set_DeviceVolume(System.Nullable`1<System.Double>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StdCommonParams_set_DeviceVolume_mBC014F9E6144D31B7A21082F4F17CADA8B8B8DB8 (StdCommonParams_tDFD4FF72F7EEBBC4384155713888A4485FF5E701* __this, Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 ___0_value, const RuntimeMethod* method) 
{
	{
		// internal double? DeviceVolume { get; set; }
		Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 L_0 = ___0_value;
		__this->___U3CDeviceVolumeU3Ek__BackingField_5 = L_0;
		return;
	}
}
// System.Nullable`1<System.Double> Unity.Services.Analytics.Data.StdCommonParams::get_BatteryLoad()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 StdCommonParams_get_BatteryLoad_mE5C6A63115E33A0FB67BA3BA7FF4CD98021A584A (StdCommonParams_tDFD4FF72F7EEBBC4384155713888A4485FF5E701* __this, const RuntimeMethod* method) 
{
	{
		// internal double? BatteryLoad { get; set; }
		Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 L_0 = __this->___U3CBatteryLoadU3Ek__BackingField_6;
		return L_0;
	}
}
// System.Void Unity.Services.Analytics.Data.StdCommonParams::set_BatteryLoad(System.Nullable`1<System.Double>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StdCommonParams_set_BatteryLoad_mC06087861B7DD6C288823A7DDB4A7085B168743E (StdCommonParams_tDFD4FF72F7EEBBC4384155713888A4485FF5E701* __this, Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 ___0_value, const RuntimeMethod* method) 
{
	{
		// internal double? BatteryLoad { get; set; }
		Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 L_0 = ___0_value;
		__this->___U3CBatteryLoadU3Ek__BackingField_6 = L_0;
		return;
	}
}
// System.String Unity.Services.Analytics.Data.StdCommonParams::get_BuildGuuid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StdCommonParams_get_BuildGuuid_m706EB59064FA0D40D1C244514B2EA2995AE5706D (StdCommonParams_tDFD4FF72F7EEBBC4384155713888A4485FF5E701* __this, const RuntimeMethod* method) 
{
	{
		// internal string BuildGuuid { get; set; }
		String_t* L_0 = __this->___U3CBuildGuuidU3Ek__BackingField_7;
		return L_0;
	}
}
// System.Void Unity.Services.Analytics.Data.StdCommonParams::set_BuildGuuid(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StdCommonParams_set_BuildGuuid_m0DB0779599C5BE31C7A1B76C2AF77E9EF9A3AC0C (StdCommonParams_tDFD4FF72F7EEBBC4384155713888A4485FF5E701* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// internal string BuildGuuid { get; set; }
		String_t* L_0 = ___0_value;
		__this->___U3CBuildGuuidU3Ek__BackingField_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CBuildGuuidU3Ek__BackingField_7), (void*)L_0);
		return;
	}
}
// System.String Unity.Services.Analytics.Data.StdCommonParams::get_ClientVersion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StdCommonParams_get_ClientVersion_mA3D1574F4D14E5355C23D39AA130AB106960491D (StdCommonParams_tDFD4FF72F7EEBBC4384155713888A4485FF5E701* __this, const RuntimeMethod* method) 
{
	{
		// internal string ClientVersion { get; set; }
		String_t* L_0 = __this->___U3CClientVersionU3Ek__BackingField_8;
		return L_0;
	}
}
// System.Void Unity.Services.Analytics.Data.StdCommonParams::set_ClientVersion(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StdCommonParams_set_ClientVersion_m97C2B0A6328C2D38BF31BED3F628D0902F36A3D0 (StdCommonParams_tDFD4FF72F7EEBBC4384155713888A4485FF5E701* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// internal string ClientVersion { get; set; }
		String_t* L_0 = ___0_value;
		__this->___U3CClientVersionU3Ek__BackingField_8 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CClientVersionU3Ek__BackingField_8), (void*)L_0);
		return;
	}
}
// System.String Unity.Services.Analytics.Data.StdCommonParams::get_UserCountry()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StdCommonParams_get_UserCountry_mDDDF84AB7FC6D62ECBB642C7C7814D3143DAF0F9 (StdCommonParams_tDFD4FF72F7EEBBC4384155713888A4485FF5E701* __this, const RuntimeMethod* method) 
{
	{
		// internal string UserCountry { get; set; }
		String_t* L_0 = __this->___U3CUserCountryU3Ek__BackingField_9;
		return L_0;
	}
}
// System.String Unity.Services.Analytics.Data.StdCommonParams::get_ProjectID()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StdCommonParams_get_ProjectID_m48D1D967587EF2BB877AB287B6FD03531D3E3658 (StdCommonParams_tDFD4FF72F7EEBBC4384155713888A4485FF5E701* __this, const RuntimeMethod* method) 
{
	{
		// internal string ProjectID { get; set; }
		String_t* L_0 = __this->___U3CProjectIDU3Ek__BackingField_10;
		return L_0;
	}
}
// System.Void Unity.Services.Analytics.Data.StdCommonParams::set_ProjectID(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StdCommonParams_set_ProjectID_m3119C391E989366B60D3A7FC4B4516A0ED285653 (StdCommonParams_tDFD4FF72F7EEBBC4384155713888A4485FF5E701* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// internal string ProjectID { get; set; }
		String_t* L_0 = ___0_value;
		__this->___U3CProjectIDU3Ek__BackingField_10 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CProjectIDU3Ek__BackingField_10), (void*)L_0);
		return;
	}
}
// System.Void Unity.Services.Analytics.Data.StdCommonParams::SerializeCommonEventParams(Unity.Services.Analytics.Internal.IBuffer&,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StdCommonParams_SerializeCommonEventParams_m174FE65D4790275038F1E89B2D2DD862DB5FCC0B (StdCommonParams_tDFD4FF72F7EEBBC4384155713888A4485FF5E701* __this, RuntimeObject** ___0_buf, String_t* ___1_callingMethodIdentifier, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBuffer_t0E4742F785C935FD676BFEE280CD1D6FF26BBD82_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_mC082C667C8EB3A6CA80E06BCAEA0BED00C6BC15A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_Value_m260A5CB9269FD3E130F998A589EDAEC2E8F9EAE1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral148824F010ADAC4C3C4CE066B0DFDB5C2654FB2B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral170AD99AD2A9FB6605C713D5E03E562C7D968B69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral35B5ADC96410AC9E0FBD60CD4B98AF30C7FF77A1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral536E5B84A146D6EAEB5D74C24E27D67FD4C0B1E7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral54456F7D5F661596CBB77379CB87A2F212C937AB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA517A4F85AAA7EBA705BDB743CD5CDA3F32FB5B2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB2F9235F4F063A8609A1E74346AC3F275A7303EE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB77E31D2A4A06B38E1B7C8FC29C34D00063605FD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB998ED74BBE643EFB1178023AB66097D25232774);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDCC2A0E9BB0E18185E2813F45A0FDBAAFE5F6277);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE6BB1D1C222056044DECBA8E28B892E7C7412208);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFE4E8D2F674A9B8C61B994B4EB2D46018E971583);
		s_Il2CppMethodInitialized = true;
	}
	Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (!string.IsNullOrEmpty(GameStoreID))
		String_t* L_0;
		L_0 = StdCommonParams_get_GameStoreID_m84117F13E7CB919145EC3EF0480411695B7B7B69_inline(__this, NULL);
		bool L_1;
		L_1 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_0, NULL);
		if (L_1)
		{
			goto IL_001f;
		}
	}
	{
		// buf.PushString(GameStoreID, "gameStoreID");
		RuntimeObject** L_2 = ___0_buf;
		RuntimeObject* L_3 = *((RuntimeObject**)L_2);
		String_t* L_4;
		L_4 = StdCommonParams_get_GameStoreID_m84117F13E7CB919145EC3EF0480411695B7B7B69_inline(__this, NULL);
		NullCheck(L_3);
		InterfaceActionInvoker2< String_t*, String_t* >::Invoke(9 /* System.Void Unity.Services.Analytics.Internal.IBuffer::PushString(System.String,System.String) */, IBuffer_t0E4742F785C935FD676BFEE280CD1D6FF26BBD82_il2cpp_TypeInfo_var, L_3, L_4, _stringLiteralDCC2A0E9BB0E18185E2813F45A0FDBAAFE5F6277);
	}

IL_001f:
	{
		// if (!string.IsNullOrEmpty(GameBundleID))
		String_t* L_5;
		L_5 = StdCommonParams_get_GameBundleID_m614C916F3CBA18D60161DDFD84B4C9D5C2E99531_inline(__this, NULL);
		bool L_6;
		L_6 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_5, NULL);
		if (L_6)
		{
			goto IL_003e;
		}
	}
	{
		// buf.PushString(GameBundleID, "gameBundleID");
		RuntimeObject** L_7 = ___0_buf;
		RuntimeObject* L_8 = *((RuntimeObject**)L_7);
		String_t* L_9;
		L_9 = StdCommonParams_get_GameBundleID_m614C916F3CBA18D60161DDFD84B4C9D5C2E99531_inline(__this, NULL);
		NullCheck(L_8);
		InterfaceActionInvoker2< String_t*, String_t* >::Invoke(9 /* System.Void Unity.Services.Analytics.Internal.IBuffer::PushString(System.String,System.String) */, IBuffer_t0E4742F785C935FD676BFEE280CD1D6FF26BBD82_il2cpp_TypeInfo_var, L_8, L_9, _stringLiteral148824F010ADAC4C3C4CE066B0DFDB5C2654FB2B);
	}

IL_003e:
	{
		// if (!string.IsNullOrEmpty(Platform))
		String_t* L_10;
		L_10 = StdCommonParams_get_Platform_m997C2F5D078131853762DCFBA238288F8EFA191E_inline(__this, NULL);
		bool L_11;
		L_11 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_10, NULL);
		if (L_11)
		{
			goto IL_005d;
		}
	}
	{
		// buf.PushString(Platform, "platform");
		RuntimeObject** L_12 = ___0_buf;
		RuntimeObject* L_13 = *((RuntimeObject**)L_12);
		String_t* L_14;
		L_14 = StdCommonParams_get_Platform_m997C2F5D078131853762DCFBA238288F8EFA191E_inline(__this, NULL);
		NullCheck(L_13);
		InterfaceActionInvoker2< String_t*, String_t* >::Invoke(9 /* System.Void Unity.Services.Analytics.Internal.IBuffer::PushString(System.String,System.String) */, IBuffer_t0E4742F785C935FD676BFEE280CD1D6FF26BBD82_il2cpp_TypeInfo_var, L_13, L_14, _stringLiteralB2F9235F4F063A8609A1E74346AC3F275A7303EE);
	}

IL_005d:
	{
		// if (!string.IsNullOrEmpty(Idfv))
		String_t* L_15;
		L_15 = StdCommonParams_get_Idfv_m0CB0676EB45E77DE51316B204FFAE5437CEFA6DD_inline(__this, NULL);
		bool L_16;
		L_16 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_15, NULL);
		if (L_16)
		{
			goto IL_007c;
		}
	}
	{
		// buf.PushString(Idfv, "idfv");
		RuntimeObject** L_17 = ___0_buf;
		RuntimeObject* L_18 = *((RuntimeObject**)L_17);
		String_t* L_19;
		L_19 = StdCommonParams_get_Idfv_m0CB0676EB45E77DE51316B204FFAE5437CEFA6DD_inline(__this, NULL);
		NullCheck(L_18);
		InterfaceActionInvoker2< String_t*, String_t* >::Invoke(9 /* System.Void Unity.Services.Analytics.Internal.IBuffer::PushString(System.String,System.String) */, IBuffer_t0E4742F785C935FD676BFEE280CD1D6FF26BBD82_il2cpp_TypeInfo_var, L_18, L_19, _stringLiteral170AD99AD2A9FB6605C713D5E03E562C7D968B69);
	}

IL_007c:
	{
		// if (!string.IsNullOrEmpty(UasUserID))
		String_t* L_20;
		L_20 = StdCommonParams_get_UasUserID_m6A4DE2B299022D7DBCEA6EE055C717E59BE2B32C_inline(__this, NULL);
		bool L_21;
		L_21 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_20, NULL);
		if (L_21)
		{
			goto IL_009b;
		}
	}
	{
		// buf.PushString(UasUserID, "uasUserID");
		RuntimeObject** L_22 = ___0_buf;
		RuntimeObject* L_23 = *((RuntimeObject**)L_22);
		String_t* L_24;
		L_24 = StdCommonParams_get_UasUserID_m6A4DE2B299022D7DBCEA6EE055C717E59BE2B32C_inline(__this, NULL);
		NullCheck(L_23);
		InterfaceActionInvoker2< String_t*, String_t* >::Invoke(9 /* System.Void Unity.Services.Analytics.Internal.IBuffer::PushString(System.String,System.String) */, IBuffer_t0E4742F785C935FD676BFEE280CD1D6FF26BBD82_il2cpp_TypeInfo_var, L_23, L_24, _stringLiteral54456F7D5F661596CBB77379CB87A2F212C937AB);
	}

IL_009b:
	{
		// if (!string.IsNullOrEmpty(BuildGuuid))
		String_t* L_25;
		L_25 = StdCommonParams_get_BuildGuuid_m706EB59064FA0D40D1C244514B2EA2995AE5706D_inline(__this, NULL);
		bool L_26;
		L_26 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_25, NULL);
		if (L_26)
		{
			goto IL_00ba;
		}
	}
	{
		// buf.PushString(BuildGuuid, "buildGUUID");
		RuntimeObject** L_27 = ___0_buf;
		RuntimeObject* L_28 = *((RuntimeObject**)L_27);
		String_t* L_29;
		L_29 = StdCommonParams_get_BuildGuuid_m706EB59064FA0D40D1C244514B2EA2995AE5706D_inline(__this, NULL);
		NullCheck(L_28);
		InterfaceActionInvoker2< String_t*, String_t* >::Invoke(9 /* System.Void Unity.Services.Analytics.Internal.IBuffer::PushString(System.String,System.String) */, IBuffer_t0E4742F785C935FD676BFEE280CD1D6FF26BBD82_il2cpp_TypeInfo_var, L_28, L_29, _stringLiteralE6BB1D1C222056044DECBA8E28B892E7C7412208);
	}

IL_00ba:
	{
		// if (!string.IsNullOrEmpty(ClientVersion))
		String_t* L_30;
		L_30 = StdCommonParams_get_ClientVersion_mA3D1574F4D14E5355C23D39AA130AB106960491D_inline(__this, NULL);
		bool L_31;
		L_31 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_30, NULL);
		if (L_31)
		{
			goto IL_00d9;
		}
	}
	{
		// buf.PushString(ClientVersion, "clientVersion");
		RuntimeObject** L_32 = ___0_buf;
		RuntimeObject* L_33 = *((RuntimeObject**)L_32);
		String_t* L_34;
		L_34 = StdCommonParams_get_ClientVersion_mA3D1574F4D14E5355C23D39AA130AB106960491D_inline(__this, NULL);
		NullCheck(L_33);
		InterfaceActionInvoker2< String_t*, String_t* >::Invoke(9 /* System.Void Unity.Services.Analytics.Internal.IBuffer::PushString(System.String,System.String) */, IBuffer_t0E4742F785C935FD676BFEE280CD1D6FF26BBD82_il2cpp_TypeInfo_var, L_33, L_34, _stringLiteralB998ED74BBE643EFB1178023AB66097D25232774);
	}

IL_00d9:
	{
		// if (!string.IsNullOrEmpty(UserCountry))
		String_t* L_35;
		L_35 = StdCommonParams_get_UserCountry_mDDDF84AB7FC6D62ECBB642C7C7814D3143DAF0F9_inline(__this, NULL);
		bool L_36;
		L_36 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_35, NULL);
		if (L_36)
		{
			goto IL_00f8;
		}
	}
	{
		// buf.PushString(UserCountry, "userCountry");
		RuntimeObject** L_37 = ___0_buf;
		RuntimeObject* L_38 = *((RuntimeObject**)L_37);
		String_t* L_39;
		L_39 = StdCommonParams_get_UserCountry_mDDDF84AB7FC6D62ECBB642C7C7814D3143DAF0F9_inline(__this, NULL);
		NullCheck(L_38);
		InterfaceActionInvoker2< String_t*, String_t* >::Invoke(9 /* System.Void Unity.Services.Analytics.Internal.IBuffer::PushString(System.String,System.String) */, IBuffer_t0E4742F785C935FD676BFEE280CD1D6FF26BBD82_il2cpp_TypeInfo_var, L_38, L_39, _stringLiteral536E5B84A146D6EAEB5D74C24E27D67FD4C0B1E7);
	}

IL_00f8:
	{
		// if (DeviceVolume != null)
		Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 L_40;
		L_40 = StdCommonParams_get_DeviceVolume_mD4CB9275283492DA050B8BDA949E1E38C35EB76C_inline(__this, NULL);
		V_0 = L_40;
		bool L_41;
		L_41 = Nullable_1_get_HasValue_mC082C667C8EB3A6CA80E06BCAEA0BED00C6BC15A_inline((&V_0), Nullable_1_get_HasValue_mC082C667C8EB3A6CA80E06BCAEA0BED00C6BC15A_RuntimeMethod_var);
		if (!L_41)
		{
			goto IL_0122;
		}
	}
	{
		// buf.PushDouble(DeviceVolume.Value, "deviceVolume"); // Schema: Optional
		RuntimeObject** L_42 = ___0_buf;
		RuntimeObject* L_43 = *((RuntimeObject**)L_42);
		Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 L_44;
		L_44 = StdCommonParams_get_DeviceVolume_mD4CB9275283492DA050B8BDA949E1E38C35EB76C_inline(__this, NULL);
		V_0 = L_44;
		double L_45;
		L_45 = Nullable_1_get_Value_m260A5CB9269FD3E130F998A589EDAEC2E8F9EAE1((&V_0), Nullable_1_get_Value_m260A5CB9269FD3E130F998A589EDAEC2E8F9EAE1_RuntimeMethod_var);
		NullCheck(L_43);
		InterfaceActionInvoker2< double, String_t* >::Invoke(8 /* System.Void Unity.Services.Analytics.Internal.IBuffer::PushDouble(System.Double,System.String) */, IBuffer_t0E4742F785C935FD676BFEE280CD1D6FF26BBD82_il2cpp_TypeInfo_var, L_43, L_45, _stringLiteral35B5ADC96410AC9E0FBD60CD4B98AF30C7FF77A1);
	}

IL_0122:
	{
		// if (BatteryLoad != null)
		Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 L_46;
		L_46 = StdCommonParams_get_BatteryLoad_mE5C6A63115E33A0FB67BA3BA7FF4CD98021A584A_inline(__this, NULL);
		V_0 = L_46;
		bool L_47;
		L_47 = Nullable_1_get_HasValue_mC082C667C8EB3A6CA80E06BCAEA0BED00C6BC15A_inline((&V_0), Nullable_1_get_HasValue_mC082C667C8EB3A6CA80E06BCAEA0BED00C6BC15A_RuntimeMethod_var);
		if (!L_47)
		{
			goto IL_014c;
		}
	}
	{
		// buf.PushDouble(BatteryLoad.Value, "batteryLoad"); // Schema: Optional
		RuntimeObject** L_48 = ___0_buf;
		RuntimeObject* L_49 = *((RuntimeObject**)L_48);
		Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 L_50;
		L_50 = StdCommonParams_get_BatteryLoad_mE5C6A63115E33A0FB67BA3BA7FF4CD98021A584A_inline(__this, NULL);
		V_0 = L_50;
		double L_51;
		L_51 = Nullable_1_get_Value_m260A5CB9269FD3E130F998A589EDAEC2E8F9EAE1((&V_0), Nullable_1_get_Value_m260A5CB9269FD3E130F998A589EDAEC2E8F9EAE1_RuntimeMethod_var);
		NullCheck(L_49);
		InterfaceActionInvoker2< double, String_t* >::Invoke(8 /* System.Void Unity.Services.Analytics.Internal.IBuffer::PushDouble(System.Double,System.String) */, IBuffer_t0E4742F785C935FD676BFEE280CD1D6FF26BBD82_il2cpp_TypeInfo_var, L_49, L_51, _stringLiteralFE4E8D2F674A9B8C61B994B4EB2D46018E971583);
	}

IL_014c:
	{
		// if (!string.IsNullOrEmpty(ProjectID))
		String_t* L_52;
		L_52 = StdCommonParams_get_ProjectID_m48D1D967587EF2BB877AB287B6FD03531D3E3658_inline(__this, NULL);
		bool L_53;
		L_53 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_52, NULL);
		if (L_53)
		{
			goto IL_016b;
		}
	}
	{
		// buf.PushString(ProjectID, "projectID");
		RuntimeObject** L_54 = ___0_buf;
		RuntimeObject* L_55 = *((RuntimeObject**)L_54);
		String_t* L_56;
		L_56 = StdCommonParams_get_ProjectID_m48D1D967587EF2BB877AB287B6FD03531D3E3658_inline(__this, NULL);
		NullCheck(L_55);
		InterfaceActionInvoker2< String_t*, String_t* >::Invoke(9 /* System.Void Unity.Services.Analytics.Internal.IBuffer::PushString(System.String,System.String) */, IBuffer_t0E4742F785C935FD676BFEE280CD1D6FF26BBD82_il2cpp_TypeInfo_var, L_55, L_56, _stringLiteralA517A4F85AAA7EBA705BDB743CD5CDA3F32FB5B2);
	}

IL_016b:
	{
		// buf.PushString(callingMethodIdentifier, "sdkMethod");
		RuntimeObject** L_57 = ___0_buf;
		RuntimeObject* L_58 = *((RuntimeObject**)L_57);
		String_t* L_59 = ___1_callingMethodIdentifier;
		NullCheck(L_58);
		InterfaceActionInvoker2< String_t*, String_t* >::Invoke(9 /* System.Void Unity.Services.Analytics.Internal.IBuffer::PushString(System.String,System.String) */, IBuffer_t0E4742F785C935FD676BFEE280CD1D6FF26BBD82_il2cpp_TypeInfo_var, L_58, L_59, _stringLiteralB77E31D2A4A06B38E1B7C8FC29C34D00063605FD);
		// }
		return;
	}
}
// System.Void Unity.Services.Analytics.Data.StdCommonParams::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StdCommonParams__ctor_m973A163478DDB4C6DC21AF142FF5CF7E46D254CA (StdCommonParams_tDFD4FF72F7EEBBC4384155713888A4485FF5E701* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Unity.Services.Analytics.Data.DataGenerator::SetBuffer(Unity.Services.Analytics.Internal.IBuffer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataGenerator_SetBuffer_m5FB97A0416B33E499DCE49028A3F0532FEADEC95 (DataGenerator_t25BC607B3B6D456EAA5DC9C3F600C4B560800183* __this, RuntimeObject* ___0_buffer, const RuntimeMethod* method) 
{
	{
		// m_Buffer = buffer;
		RuntimeObject* L_0 = ___0_buffer;
		__this->___m_Buffer_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Buffer_0), (void*)L_0);
		// }
		return;
	}
}
// System.Void Unity.Services.Analytics.Data.DataGenerator::SdkStartup(System.DateTime,Unity.Services.Analytics.Data.StdCommonParams,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataGenerator_SdkStartup_m2FB4F1571BD67B25368E6C8DAB3C78F50BDB30E5 (DataGenerator_t25BC607B3B6D456EAA5DC9C3F600C4B560800183* __this, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___0_datetime, StdCommonParams_tDFD4FF72F7EEBBC4384155713888A4485FF5E701* ___1_commonParams, String_t* ___2_callingMethodIdentifier, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBuffer_t0E4742F785C935FD676BFEE280CD1D6FF26BBD82_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_m117BE9EF6DBC76B088B52AFB80634B9195D384A1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SdkVersion_t0BDC7D3E9F8175012EACBDB69FD9394AC2679BB8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4488E94845B9ACE3166EA65DF28FEECA27B65702);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB407584FE1D7CEEE747D9585F6F3D5A15AC3C563);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCEB7987EDF6148DDF774BB81BC8810F4966EBD29);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD90D9A995858BDF53E28CF2370714015239D252B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_Buffer.PushStartEvent("sdkStart", datetime, 1, true);
		RuntimeObject* L_0 = __this->___m_Buffer_0;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_1 = ___0_datetime;
		Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 L_2;
		memset((&L_2), 0, sizeof(L_2));
		Nullable_1__ctor_m117BE9EF6DBC76B088B52AFB80634B9195D384A1((&L_2), ((int64_t)1), /*hidden argument*/Nullable_1__ctor_m117BE9EF6DBC76B088B52AFB80634B9195D384A1_RuntimeMethod_var);
		NullCheck(L_0);
		InterfaceActionInvoker4< String_t*, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D, Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17, bool >::Invoke(6 /* System.Void Unity.Services.Analytics.Internal.IBuffer::PushStartEvent(System.String,System.DateTime,System.Nullable`1<System.Int64>,System.Boolean) */, IBuffer_t0E4742F785C935FD676BFEE280CD1D6FF26BBD82_il2cpp_TypeInfo_var, L_0, _stringLiteralB407584FE1D7CEEE747D9585F6F3D5A15AC3C563, L_1, L_2, (bool)1);
		// m_Buffer.PushString(SdkVersion.SDK_VERSION, "sdkVersion");
		RuntimeObject* L_3 = __this->___m_Buffer_0;
		il2cpp_codegen_runtime_class_init_inline(SdkVersion_t0BDC7D3E9F8175012EACBDB69FD9394AC2679BB8_il2cpp_TypeInfo_var);
		String_t* L_4 = ((SdkVersion_t0BDC7D3E9F8175012EACBDB69FD9394AC2679BB8_StaticFields*)il2cpp_codegen_static_fields_for(SdkVersion_t0BDC7D3E9F8175012EACBDB69FD9394AC2679BB8_il2cpp_TypeInfo_var))->___SDK_VERSION_0;
		NullCheck(L_3);
		InterfaceActionInvoker2< String_t*, String_t* >::Invoke(9 /* System.Void Unity.Services.Analytics.Internal.IBuffer::PushString(System.String,System.String) */, IBuffer_t0E4742F785C935FD676BFEE280CD1D6FF26BBD82_il2cpp_TypeInfo_var, L_3, L_4, _stringLiteralD90D9A995858BDF53E28CF2370714015239D252B);
		// commonParams.SerializeCommonEventParams(ref m_Buffer, callingMethodIdentifier);
		StdCommonParams_tDFD4FF72F7EEBBC4384155713888A4485FF5E701* L_5 = ___1_commonParams;
		RuntimeObject** L_6 = (&__this->___m_Buffer_0);
		String_t* L_7 = ___2_callingMethodIdentifier;
		NullCheck(L_5);
		StdCommonParams_SerializeCommonEventParams_m174FE65D4790275038F1E89B2D2DD862DB5FCC0B(L_5, L_6, L_7, NULL);
		// m_Buffer.PushString("com.unity.services.analytics", "sdkName"); // Schema: Required
		RuntimeObject* L_8 = __this->___m_Buffer_0;
		NullCheck(L_8);
		InterfaceActionInvoker2< String_t*, String_t* >::Invoke(9 /* System.Void Unity.Services.Analytics.Internal.IBuffer::PushString(System.String,System.String) */, IBuffer_t0E4742F785C935FD676BFEE280CD1D6FF26BBD82_il2cpp_TypeInfo_var, L_8, _stringLiteral4488E94845B9ACE3166EA65DF28FEECA27B65702, _stringLiteralCEB7987EDF6148DDF774BB81BC8810F4966EBD29);
		// m_Buffer.PushEndEvent();
		RuntimeObject* L_9 = __this->___m_Buffer_0;
		NullCheck(L_9);
		InterfaceActionInvoker0::Invoke(7 /* System.Void Unity.Services.Analytics.Internal.IBuffer::PushEndEvent() */, IBuffer_t0E4742F785C935FD676BFEE280CD1D6FF26BBD82_il2cpp_TypeInfo_var, L_9);
		// }
		return;
	}
}
// System.Void Unity.Services.Analytics.Data.DataGenerator::GameRunning(System.DateTime,Unity.Services.Analytics.Data.StdCommonParams,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataGenerator_GameRunning_mB0796E55CC005D533797AE69A0169216B8B57724 (DataGenerator_t25BC607B3B6D456EAA5DC9C3F600C4B560800183* __this, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___0_datetime, StdCommonParams_tDFD4FF72F7EEBBC4384155713888A4485FF5E701* ___1_commonParams, String_t* ___2_callingMethodIdentifier, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBuffer_t0E4742F785C935FD676BFEE280CD1D6FF26BBD82_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_m117BE9EF6DBC76B088B52AFB80634B9195D384A1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3AAADB400CC4093A2B8D65DADF92560E65DFF664);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_Buffer.PushStartEvent("gameRunning", datetime, 1, true);
		RuntimeObject* L_0 = __this->___m_Buffer_0;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_1 = ___0_datetime;
		Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 L_2;
		memset((&L_2), 0, sizeof(L_2));
		Nullable_1__ctor_m117BE9EF6DBC76B088B52AFB80634B9195D384A1((&L_2), ((int64_t)1), /*hidden argument*/Nullable_1__ctor_m117BE9EF6DBC76B088B52AFB80634B9195D384A1_RuntimeMethod_var);
		NullCheck(L_0);
		InterfaceActionInvoker4< String_t*, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D, Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17, bool >::Invoke(6 /* System.Void Unity.Services.Analytics.Internal.IBuffer::PushStartEvent(System.String,System.DateTime,System.Nullable`1<System.Int64>,System.Boolean) */, IBuffer_t0E4742F785C935FD676BFEE280CD1D6FF26BBD82_il2cpp_TypeInfo_var, L_0, _stringLiteral3AAADB400CC4093A2B8D65DADF92560E65DFF664, L_1, L_2, (bool)1);
		// commonParams.SerializeCommonEventParams(ref m_Buffer, callingMethodIdentifier);
		StdCommonParams_tDFD4FF72F7EEBBC4384155713888A4485FF5E701* L_3 = ___1_commonParams;
		RuntimeObject** L_4 = (&__this->___m_Buffer_0);
		String_t* L_5 = ___2_callingMethodIdentifier;
		NullCheck(L_3);
		StdCommonParams_SerializeCommonEventParams_m174FE65D4790275038F1E89B2D2DD862DB5FCC0B(L_3, L_4, L_5, NULL);
		// m_Buffer.PushEndEvent();
		RuntimeObject* L_6 = __this->___m_Buffer_0;
		NullCheck(L_6);
		InterfaceActionInvoker0::Invoke(7 /* System.Void Unity.Services.Analytics.Internal.IBuffer::PushEndEvent() */, IBuffer_t0E4742F785C935FD676BFEE280CD1D6FF26BBD82_il2cpp_TypeInfo_var, L_6);
		// }
		return;
	}
}
// System.Void Unity.Services.Analytics.Data.DataGenerator::NewPlayer(System.DateTime,Unity.Services.Analytics.Data.StdCommonParams,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataGenerator_NewPlayer_m4FFE548A28CB8316ABD5A7981DADD277935F91DC (DataGenerator_t25BC607B3B6D456EAA5DC9C3F600C4B560800183* __this, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___0_datetime, StdCommonParams_tDFD4FF72F7EEBBC4384155713888A4485FF5E701* ___1_commonParams, String_t* ___2_callingMethodIdentifier, String_t* ___3_deviceModel, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBuffer_t0E4742F785C935FD676BFEE280CD1D6FF26BBD82_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_m117BE9EF6DBC76B088B52AFB80634B9195D384A1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral927C07A9A0D4F74C939B952882D32EE98B8C854F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAE33F44A5A3FB00801EF36FD68C6DD4679E581C5);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_Buffer.PushStartEvent("newPlayer", datetime, 1, true);
		RuntimeObject* L_0 = __this->___m_Buffer_0;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_1 = ___0_datetime;
		Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 L_2;
		memset((&L_2), 0, sizeof(L_2));
		Nullable_1__ctor_m117BE9EF6DBC76B088B52AFB80634B9195D384A1((&L_2), ((int64_t)1), /*hidden argument*/Nullable_1__ctor_m117BE9EF6DBC76B088B52AFB80634B9195D384A1_RuntimeMethod_var);
		NullCheck(L_0);
		InterfaceActionInvoker4< String_t*, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D, Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17, bool >::Invoke(6 /* System.Void Unity.Services.Analytics.Internal.IBuffer::PushStartEvent(System.String,System.DateTime,System.Nullable`1<System.Int64>,System.Boolean) */, IBuffer_t0E4742F785C935FD676BFEE280CD1D6FF26BBD82_il2cpp_TypeInfo_var, L_0, _stringLiteralAE33F44A5A3FB00801EF36FD68C6DD4679E581C5, L_1, L_2, (bool)1);
		// commonParams.SerializeCommonEventParams(ref m_Buffer, callingMethodIdentifier);
		StdCommonParams_tDFD4FF72F7EEBBC4384155713888A4485FF5E701* L_3 = ___1_commonParams;
		RuntimeObject** L_4 = (&__this->___m_Buffer_0);
		String_t* L_5 = ___2_callingMethodIdentifier;
		NullCheck(L_3);
		StdCommonParams_SerializeCommonEventParams_m174FE65D4790275038F1E89B2D2DD862DB5FCC0B(L_3, L_4, L_5, NULL);
		// m_Buffer.PushString(deviceModel, "deviceModel"); // Schema: Optional
		RuntimeObject* L_6 = __this->___m_Buffer_0;
		String_t* L_7 = ___3_deviceModel;
		NullCheck(L_6);
		InterfaceActionInvoker2< String_t*, String_t* >::Invoke(9 /* System.Void Unity.Services.Analytics.Internal.IBuffer::PushString(System.String,System.String) */, IBuffer_t0E4742F785C935FD676BFEE280CD1D6FF26BBD82_il2cpp_TypeInfo_var, L_6, L_7, _stringLiteral927C07A9A0D4F74C939B952882D32EE98B8C854F);
		// m_Buffer.PushEndEvent();
		RuntimeObject* L_8 = __this->___m_Buffer_0;
		NullCheck(L_8);
		InterfaceActionInvoker0::Invoke(7 /* System.Void Unity.Services.Analytics.Internal.IBuffer::PushEndEvent() */, IBuffer_t0E4742F785C935FD676BFEE280CD1D6FF26BBD82_il2cpp_TypeInfo_var, L_8);
		// }
		return;
	}
}
// System.Void Unity.Services.Analytics.Data.DataGenerator::GameStarted(System.DateTime,Unity.Services.Analytics.Data.StdCommonParams,System.String,System.String,System.String,System.Boolean,System.Boolean,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataGenerator_GameStarted_mD1D29C94F17D8E54BF285FA5EC331F38F5A4EF61 (DataGenerator_t25BC607B3B6D456EAA5DC9C3F600C4B560800183* __this, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___0_datetime, StdCommonParams_tDFD4FF72F7EEBBC4384155713888A4485FF5E701* ___1_commonParams, String_t* ___2_callingMethodIdentifier, String_t* ___3_idLocalProject, String_t* ___4_osVersion, bool ___5_isTiny, bool ___6_debugDevice, String_t* ___7_userLocale, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBuffer_t0E4742F785C935FD676BFEE280CD1D6FF26BBD82_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_m117BE9EF6DBC76B088B52AFB80634B9195D384A1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2FA9058042F937E20F28C101D9767EB04471A5CB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB865D689348EFE8DC34E423330CA79525B32EC1B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB9405AACF03EA399FE3EA77E6BB8C3ADE8E58633);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD34286EB83758419274C686F2C77DDE12EAFF376);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE3357C44F297EFB7BFC8B87C4C3AFAB505C0C4DC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFD315BB7AF8B2446DA124F00CE3D2B3935C9F536);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_Buffer.PushStartEvent("gameStarted", datetime, 1, true);
		RuntimeObject* L_0 = __this->___m_Buffer_0;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_1 = ___0_datetime;
		Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 L_2;
		memset((&L_2), 0, sizeof(L_2));
		Nullable_1__ctor_m117BE9EF6DBC76B088B52AFB80634B9195D384A1((&L_2), ((int64_t)1), /*hidden argument*/Nullable_1__ctor_m117BE9EF6DBC76B088B52AFB80634B9195D384A1_RuntimeMethod_var);
		NullCheck(L_0);
		InterfaceActionInvoker4< String_t*, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D, Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17, bool >::Invoke(6 /* System.Void Unity.Services.Analytics.Internal.IBuffer::PushStartEvent(System.String,System.DateTime,System.Nullable`1<System.Int64>,System.Boolean) */, IBuffer_t0E4742F785C935FD676BFEE280CD1D6FF26BBD82_il2cpp_TypeInfo_var, L_0, _stringLiteralD34286EB83758419274C686F2C77DDE12EAFF376, L_1, L_2, (bool)1);
		// commonParams.SerializeCommonEventParams(ref m_Buffer, callingMethodIdentifier);
		StdCommonParams_tDFD4FF72F7EEBBC4384155713888A4485FF5E701* L_3 = ___1_commonParams;
		RuntimeObject** L_4 = (&__this->___m_Buffer_0);
		String_t* L_5 = ___2_callingMethodIdentifier;
		NullCheck(L_3);
		StdCommonParams_SerializeCommonEventParams_m174FE65D4790275038F1E89B2D2DD862DB5FCC0B(L_3, L_4, L_5, NULL);
		// m_Buffer.PushString(userLocale, "userLocale");
		RuntimeObject* L_6 = __this->___m_Buffer_0;
		String_t* L_7 = ___7_userLocale;
		NullCheck(L_6);
		InterfaceActionInvoker2< String_t*, String_t* >::Invoke(9 /* System.Void Unity.Services.Analytics.Internal.IBuffer::PushString(System.String,System.String) */, IBuffer_t0E4742F785C935FD676BFEE280CD1D6FF26BBD82_il2cpp_TypeInfo_var, L_6, L_7, _stringLiteral2FA9058042F937E20F28C101D9767EB04471A5CB);
		// if (!String.IsNullOrEmpty(idLocalProject))
		String_t* L_8 = ___3_idLocalProject;
		bool L_9;
		L_9 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_8, NULL);
		if (L_9)
		{
			goto IL_0053;
		}
	}
	{
		// m_Buffer.PushString(idLocalProject, "idLocalProject");
		RuntimeObject* L_10 = __this->___m_Buffer_0;
		String_t* L_11 = ___3_idLocalProject;
		NullCheck(L_10);
		InterfaceActionInvoker2< String_t*, String_t* >::Invoke(9 /* System.Void Unity.Services.Analytics.Internal.IBuffer::PushString(System.String,System.String) */, IBuffer_t0E4742F785C935FD676BFEE280CD1D6FF26BBD82_il2cpp_TypeInfo_var, L_10, L_11, _stringLiteralE3357C44F297EFB7BFC8B87C4C3AFAB505C0C4DC);
	}

IL_0053:
	{
		// m_Buffer.PushString(osVersion, "osVersion");
		RuntimeObject* L_12 = __this->___m_Buffer_0;
		String_t* L_13 = ___4_osVersion;
		NullCheck(L_12);
		InterfaceActionInvoker2< String_t*, String_t* >::Invoke(9 /* System.Void Unity.Services.Analytics.Internal.IBuffer::PushString(System.String,System.String) */, IBuffer_t0E4742F785C935FD676BFEE280CD1D6FF26BBD82_il2cpp_TypeInfo_var, L_12, L_13, _stringLiteralFD315BB7AF8B2446DA124F00CE3D2B3935C9F536);
		// m_Buffer.PushBool(isTiny, "isTiny");
		RuntimeObject* L_14 = __this->___m_Buffer_0;
		bool L_15 = ___5_isTiny;
		NullCheck(L_14);
		InterfaceActionInvoker2< bool, String_t* >::Invoke(11 /* System.Void Unity.Services.Analytics.Internal.IBuffer::PushBool(System.Boolean,System.String) */, IBuffer_t0E4742F785C935FD676BFEE280CD1D6FF26BBD82_il2cpp_TypeInfo_var, L_14, L_15, _stringLiteralB865D689348EFE8DC34E423330CA79525B32EC1B);
		// m_Buffer.PushBool(debugDevice, "debugDevice");
		RuntimeObject* L_16 = __this->___m_Buffer_0;
		bool L_17 = ___6_debugDevice;
		NullCheck(L_16);
		InterfaceActionInvoker2< bool, String_t* >::Invoke(11 /* System.Void Unity.Services.Analytics.Internal.IBuffer::PushBool(System.Boolean,System.String) */, IBuffer_t0E4742F785C935FD676BFEE280CD1D6FF26BBD82_il2cpp_TypeInfo_var, L_16, L_17, _stringLiteralB9405AACF03EA399FE3EA77E6BB8C3ADE8E58633);
		// m_Buffer.PushEndEvent();
		RuntimeObject* L_18 = __this->___m_Buffer_0;
		NullCheck(L_18);
		InterfaceActionInvoker0::Invoke(7 /* System.Void Unity.Services.Analytics.Internal.IBuffer::PushEndEvent() */, IBuffer_t0E4742F785C935FD676BFEE280CD1D6FF26BBD82_il2cpp_TypeInfo_var, L_18);
		// }
		return;
	}
}
// System.Void Unity.Services.Analytics.Data.DataGenerator::GameEnded(System.DateTime,Unity.Services.Analytics.Data.StdCommonParams,System.String,Unity.Services.Analytics.Data.DataGenerator/SessionEndState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataGenerator_GameEnded_m76B75B3DDAD676D4C58E63D291CDBB7E7985641E (DataGenerator_t25BC607B3B6D456EAA5DC9C3F600C4B560800183* __this, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___0_datetime, StdCommonParams_tDFD4FF72F7EEBBC4384155713888A4485FF5E701* ___1_commonParams, String_t* ___2_callingMethodIdentifier, int32_t ___3_quitState, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBuffer_t0E4742F785C935FD676BFEE280CD1D6FF26BBD82_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_m117BE9EF6DBC76B088B52AFB80634B9195D384A1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SessionEndState_t2CCED7EB4774D5B9C8E77DD6365BD147EC8C9BA1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1E862A707621E680436D3EE5A45C11B8B8019F39);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral76BABA91F33047678737B893F72821F1FE7CEFA4);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_Buffer.PushStartEvent("gameEnded", datetime, 1, true);
		RuntimeObject* L_0 = __this->___m_Buffer_0;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_1 = ___0_datetime;
		Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 L_2;
		memset((&L_2), 0, sizeof(L_2));
		Nullable_1__ctor_m117BE9EF6DBC76B088B52AFB80634B9195D384A1((&L_2), ((int64_t)1), /*hidden argument*/Nullable_1__ctor_m117BE9EF6DBC76B088B52AFB80634B9195D384A1_RuntimeMethod_var);
		NullCheck(L_0);
		InterfaceActionInvoker4< String_t*, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D, Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17, bool >::Invoke(6 /* System.Void Unity.Services.Analytics.Internal.IBuffer::PushStartEvent(System.String,System.DateTime,System.Nullable`1<System.Int64>,System.Boolean) */, IBuffer_t0E4742F785C935FD676BFEE280CD1D6FF26BBD82_il2cpp_TypeInfo_var, L_0, _stringLiteral1E862A707621E680436D3EE5A45C11B8B8019F39, L_1, L_2, (bool)1);
		// commonParams.SerializeCommonEventParams(ref m_Buffer, callingMethodIdentifier);
		StdCommonParams_tDFD4FF72F7EEBBC4384155713888A4485FF5E701* L_3 = ___1_commonParams;
		RuntimeObject** L_4 = (&__this->___m_Buffer_0);
		String_t* L_5 = ___2_callingMethodIdentifier;
		NullCheck(L_3);
		StdCommonParams_SerializeCommonEventParams_m174FE65D4790275038F1E89B2D2DD862DB5FCC0B(L_3, L_4, L_5, NULL);
		// m_Buffer.PushString(quitState.ToString(), "sessionEndState"); // Schema: Required
		RuntimeObject* L_6 = __this->___m_Buffer_0;
		Il2CppFakeBox<int32_t> L_7(SessionEndState_t2CCED7EB4774D5B9C8E77DD6365BD147EC8C9BA1_il2cpp_TypeInfo_var, (&___3_quitState));
		String_t* L_8;
		L_8 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_7), NULL);
		NullCheck(L_6);
		InterfaceActionInvoker2< String_t*, String_t* >::Invoke(9 /* System.Void Unity.Services.Analytics.Internal.IBuffer::PushString(System.String,System.String) */, IBuffer_t0E4742F785C935FD676BFEE280CD1D6FF26BBD82_il2cpp_TypeInfo_var, L_6, L_8, _stringLiteral76BABA91F33047678737B893F72821F1FE7CEFA4);
		// m_Buffer.PushEndEvent();
		RuntimeObject* L_9 = __this->___m_Buffer_0;
		NullCheck(L_9);
		InterfaceActionInvoker0::Invoke(7 /* System.Void Unity.Services.Analytics.Internal.IBuffer::PushEndEvent() */, IBuffer_t0E4742F785C935FD676BFEE280CD1D6FF26BBD82_il2cpp_TypeInfo_var, L_9);
		// }
		return;
	}
}
// System.Void Unity.Services.Analytics.Data.DataGenerator::ClientDevice(System.DateTime,Unity.Services.Analytics.Data.StdCommonParams,System.String,System.String,System.String,System.Int64,System.Int64,System.Int64,System.Int64,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataGenerator_ClientDevice_mF4CDD36BAE833B0D7BA340B6E24D073F6AA7AFDD (DataGenerator_t25BC607B3B6D456EAA5DC9C3F600C4B560800183* __this, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___0_datetime, StdCommonParams_tDFD4FF72F7EEBBC4384155713888A4485FF5E701* ___1_commonParams, String_t* ___2_callingMethodIdentifier, String_t* ___3_cpuType, String_t* ___4_gpuType, int64_t ___5_cpuCores, int64_t ___6_ramTotal, int64_t ___7_screenWidth, int64_t ___8_screenHeight, int64_t ___9_screenDPI, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBuffer_t0E4742F785C935FD676BFEE280CD1D6FF26BBD82_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_m117BE9EF6DBC76B088B52AFB80634B9195D384A1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral28A51A51047FE7B2AF7B929A267EC4F0F3C64879);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5CD4EC817130CA9033AF4BCFA7ED48C26B484E86);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5D1CF0F514CC51BB32FE1D4AC625DC653D45A9B5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral848E244106FAAF80CBD208A47B17E360C4FAA789);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87F47D94EE1EC30005CE053B6857C7BE5A9D938D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral95A5D8F8216FEF6AB6DA124B8556B99686008921);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC365F5F1C2EDA22BED613D31A3187707C16C7891);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDC543083837575FBEE37F25FE1315D6165157A7F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_Buffer.PushStartEvent("clientDevice", datetime, 1, true);
		RuntimeObject* L_0 = __this->___m_Buffer_0;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_1 = ___0_datetime;
		Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 L_2;
		memset((&L_2), 0, sizeof(L_2));
		Nullable_1__ctor_m117BE9EF6DBC76B088B52AFB80634B9195D384A1((&L_2), ((int64_t)1), /*hidden argument*/Nullable_1__ctor_m117BE9EF6DBC76B088B52AFB80634B9195D384A1_RuntimeMethod_var);
		NullCheck(L_0);
		InterfaceActionInvoker4< String_t*, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D, Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17, bool >::Invoke(6 /* System.Void Unity.Services.Analytics.Internal.IBuffer::PushStartEvent(System.String,System.DateTime,System.Nullable`1<System.Int64>,System.Boolean) */, IBuffer_t0E4742F785C935FD676BFEE280CD1D6FF26BBD82_il2cpp_TypeInfo_var, L_0, _stringLiteralC365F5F1C2EDA22BED613D31A3187707C16C7891, L_1, L_2, (bool)1);
		// commonParams.SerializeCommonEventParams(ref m_Buffer, callingMethodIdentifier);
		StdCommonParams_tDFD4FF72F7EEBBC4384155713888A4485FF5E701* L_3 = ___1_commonParams;
		RuntimeObject** L_4 = (&__this->___m_Buffer_0);
		String_t* L_5 = ___2_callingMethodIdentifier;
		NullCheck(L_3);
		StdCommonParams_SerializeCommonEventParams_m174FE65D4790275038F1E89B2D2DD862DB5FCC0B(L_3, L_4, L_5, NULL);
		// m_Buffer.PushString(cpuType, "cpuType");
		RuntimeObject* L_6 = __this->___m_Buffer_0;
		String_t* L_7 = ___3_cpuType;
		NullCheck(L_6);
		InterfaceActionInvoker2< String_t*, String_t* >::Invoke(9 /* System.Void Unity.Services.Analytics.Internal.IBuffer::PushString(System.String,System.String) */, IBuffer_t0E4742F785C935FD676BFEE280CD1D6FF26BBD82_il2cpp_TypeInfo_var, L_6, L_7, _stringLiteral87F47D94EE1EC30005CE053B6857C7BE5A9D938D);
		// m_Buffer.PushString(gpuType, "gpuType");
		RuntimeObject* L_8 = __this->___m_Buffer_0;
		String_t* L_9 = ___4_gpuType;
		NullCheck(L_8);
		InterfaceActionInvoker2< String_t*, String_t* >::Invoke(9 /* System.Void Unity.Services.Analytics.Internal.IBuffer::PushString(System.String,System.String) */, IBuffer_t0E4742F785C935FD676BFEE280CD1D6FF26BBD82_il2cpp_TypeInfo_var, L_8, L_9, _stringLiteral5CD4EC817130CA9033AF4BCFA7ED48C26B484E86);
		// m_Buffer.PushInt64(cpuCores, "cpuCores");
		RuntimeObject* L_10 = __this->___m_Buffer_0;
		int64_t L_11 = ___5_cpuCores;
		NullCheck(L_10);
		InterfaceActionInvoker2< int64_t, String_t* >::Invoke(10 /* System.Void Unity.Services.Analytics.Internal.IBuffer::PushInt64(System.Int64,System.String) */, IBuffer_t0E4742F785C935FD676BFEE280CD1D6FF26BBD82_il2cpp_TypeInfo_var, L_10, L_11, _stringLiteral5D1CF0F514CC51BB32FE1D4AC625DC653D45A9B5);
		// m_Buffer.PushInt64(ramTotal, "ramTotal");
		RuntimeObject* L_12 = __this->___m_Buffer_0;
		int64_t L_13 = ___6_ramTotal;
		NullCheck(L_12);
		InterfaceActionInvoker2< int64_t, String_t* >::Invoke(10 /* System.Void Unity.Services.Analytics.Internal.IBuffer::PushInt64(System.Int64,System.String) */, IBuffer_t0E4742F785C935FD676BFEE280CD1D6FF26BBD82_il2cpp_TypeInfo_var, L_12, L_13, _stringLiteral28A51A51047FE7B2AF7B929A267EC4F0F3C64879);
		// m_Buffer.PushInt64(screenWidth, "screenWidth");
		RuntimeObject* L_14 = __this->___m_Buffer_0;
		int64_t L_15 = ___7_screenWidth;
		NullCheck(L_14);
		InterfaceActionInvoker2< int64_t, String_t* >::Invoke(10 /* System.Void Unity.Services.Analytics.Internal.IBuffer::PushInt64(System.Int64,System.String) */, IBuffer_t0E4742F785C935FD676BFEE280CD1D6FF26BBD82_il2cpp_TypeInfo_var, L_14, L_15, _stringLiteral95A5D8F8216FEF6AB6DA124B8556B99686008921);
		// m_Buffer.PushInt64(screenHeight, "screenHeight");
		RuntimeObject* L_16 = __this->___m_Buffer_0;
		int64_t L_17 = ___8_screenHeight;
		NullCheck(L_16);
		InterfaceActionInvoker2< int64_t, String_t* >::Invoke(10 /* System.Void Unity.Services.Analytics.Internal.IBuffer::PushInt64(System.Int64,System.String) */, IBuffer_t0E4742F785C935FD676BFEE280CD1D6FF26BBD82_il2cpp_TypeInfo_var, L_16, L_17, _stringLiteral848E244106FAAF80CBD208A47B17E360C4FAA789);
		// m_Buffer.PushInt64(screenDPI, "screenResolution");
		RuntimeObject* L_18 = __this->___m_Buffer_0;
		int64_t L_19 = ___9_screenDPI;
		NullCheck(L_18);
		InterfaceActionInvoker2< int64_t, String_t* >::Invoke(10 /* System.Void Unity.Services.Analytics.Internal.IBuffer::PushInt64(System.Int64,System.String) */, IBuffer_t0E4742F785C935FD676BFEE280CD1D6FF26BBD82_il2cpp_TypeInfo_var, L_18, L_19, _stringLiteralDC543083837575FBEE37F25FE1315D6165157A7F);
		// m_Buffer.PushEndEvent();
		RuntimeObject* L_20 = __this->___m_Buffer_0;
		NullCheck(L_20);
		InterfaceActionInvoker0::Invoke(7 /* System.Void Unity.Services.Analytics.Internal.IBuffer::PushEndEvent() */, IBuffer_t0E4742F785C935FD676BFEE280CD1D6FF26BBD82_il2cpp_TypeInfo_var, L_20);
		// }
		return;
	}
}
// System.Void Unity.Services.Analytics.Data.DataGenerator::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataGenerator__ctor_m659FA5FD00306B47B1A9D7461343C53EBCC0E85C (DataGenerator_t25BC607B3B6D456EAA5DC9C3F600C4B560800183* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA* CoreRegistry_get_Instance_m73A64BD3CB78EF5AC698D1635B5872CEB9F9AFE2_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static CoreRegistry Instance { get; internal set; }
		CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA* L_0 = ((CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA_StaticFields*)il2cpp_codegen_static_fields_for(CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA_il2cpp_TypeInfo_var))->___U3CInstanceU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void StdCommonParams_set_ClientVersion_m97C2B0A6328C2D38BF31BED3F628D0902F36A3D0_inline (StdCommonParams_tDFD4FF72F7EEBBC4384155713888A4485FF5E701* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// internal string ClientVersion { get; set; }
		String_t* L_0 = ___0_value;
		__this->___U3CClientVersionU3Ek__BackingField_8 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CClientVersionU3Ek__BackingField_8), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void StdCommonParams_set_ProjectID_m3119C391E989366B60D3A7FC4B4516A0ED285653_inline (StdCommonParams_tDFD4FF72F7EEBBC4384155713888A4485FF5E701* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// internal string ProjectID { get; set; }
		String_t* L_0 = ___0_value;
		__this->___U3CProjectIDU3Ek__BackingField_10 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CProjectIDU3Ek__BackingField_10), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void StdCommonParams_set_GameBundleID_m01625DC8750160BEF86073C96048B910A23B8FE6_inline (StdCommonParams_tDFD4FF72F7EEBBC4384155713888A4485FF5E701* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// internal string GameBundleID { get; set; }
		String_t* L_0 = ___0_value;
		__this->___U3CGameBundleIDU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CGameBundleIDU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void StdCommonParams_set_Platform_m6270CCD19D8CB881BC5668613C041C5E5BD0996C_inline (StdCommonParams_tDFD4FF72F7EEBBC4384155713888A4485FF5E701* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// internal string Platform { get; set; }
		String_t* L_0 = ___0_value;
		__this->___U3CPlatformU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CPlatformU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void StdCommonParams_set_BuildGuuid_m0DB0779599C5BE31C7A1B76C2AF77E9EF9A3AC0C_inline (StdCommonParams_tDFD4FF72F7EEBBC4384155713888A4485FF5E701* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// internal string BuildGuuid { get; set; }
		String_t* L_0 = ___0_value;
		__this->___U3CBuildGuuidU3Ek__BackingField_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CBuildGuuidU3Ek__BackingField_7), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void StdCommonParams_set_Idfv_mC903A6BEA3F5145D959C36D123D084D211085EF9_inline (StdCommonParams_tDFD4FF72F7EEBBC4384155713888A4485FF5E701* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// internal string Idfv { get; set; }
		String_t* L_0 = ___0_value;
		__this->___U3CIdfvU3Ek__BackingField_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CIdfvU3Ek__BackingField_4), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AnalyticsServiceInstance_set_SessionID_m48AF420DBE356BD2F73DF27848664B9117B1CA52_inline (AnalyticsServiceInstance_t85C6639220B0EFF1CB3C517E36C6B55385A56A62* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public string SessionID { get; private set; }
		String_t* L_0 = ___0_value;
		__this->___U3CSessionIDU3Ek__BackingField_16 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CSessionIDU3Ek__BackingField_16), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* AnalyticsServiceInstance_get_SessionID_m0BE34B73BEC292E51E9721811451EC359D9837F0_inline (AnalyticsServiceInstance_t85C6639220B0EFF1CB3C517E36C6B55385A56A62* __this, const RuntimeMethod* method) 
{
	{
		// public string SessionID { get; private set; }
		String_t* L_0 = __this->___U3CSessionIDU3Ek__BackingField_16;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool AnalyticsServiceInstance_get_ServiceEnabled_mF044EA299C12FF5CA7E6445A84BE251651365BF2_inline (AnalyticsServiceInstance_t85C6639220B0EFF1CB3C517E36C6B55385A56A62* __this, const RuntimeMethod* method) 
{
	{
		// internal bool ServiceEnabled { get; private set; } = true;
		bool L_0 = __this->___U3CServiceEnabledU3Ek__BackingField_15;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void StdCommonParams_set_DeviceVolume_mBC014F9E6144D31B7A21082F4F17CADA8B8B8DB8_inline (StdCommonParams_tDFD4FF72F7EEBBC4384155713888A4485FF5E701* __this, Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 ___0_value, const RuntimeMethod* method) 
{
	{
		// internal double? DeviceVolume { get; set; }
		Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 L_0 = ___0_value;
		__this->___U3CDeviceVolumeU3Ek__BackingField_5 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void StdCommonParams_set_BatteryLoad_mC06087861B7DD6C288823A7DDB4A7085B168743E_inline (StdCommonParams_tDFD4FF72F7EEBBC4384155713888A4485FF5E701* __this, Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 ___0_value, const RuntimeMethod* method) 
{
	{
		// internal double? BatteryLoad { get; set; }
		Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 L_0 = ___0_value;
		__this->___U3CBatteryLoadU3Ek__BackingField_6 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void StdCommonParams_set_UasUserID_m5079F59137ED8AA3D25BBDFBF10E536812D8ABB7_inline (StdCommonParams_tDFD4FF72F7EEBBC4384155713888A4485FF5E701* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// internal string UasUserID { get; set; }
		String_t* L_0 = ___0_value;
		__this->___U3CUasUserIDU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CUasUserIDU3Ek__BackingField_3), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* InternalNewPlayerHelper_get_InstallId_m5AE652EBA796A51898603A7D4537B157226042D4_inline (InternalNewPlayerHelper_t0DA93D548680A3333E7C9D3839AB8BF071B3A476* __this, const RuntimeMethod* method) 
{
	{
		// internal IInstallationId InstallId { get; }
		RuntimeObject* L_0 = __this->___U3CInstallIdU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AnalyticsContainer_set_Instance_m76BCB44E3E710A6310D09A7C26BE302074C9C776_inline (AnalyticsContainer_t80827118296A7273882EB5BAE9AC5207F90BBBE1* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnalyticsContainer_t80827118296A7273882EB5BAE9AC5207F90BBBE1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// internal static AnalyticsContainer Instance { get; private set; }
		AnalyticsContainer_t80827118296A7273882EB5BAE9AC5207F90BBBE1* L_0 = ___0_value;
		((AnalyticsContainer_t80827118296A7273882EB5BAE9AC5207F90BBBE1_StaticFields*)il2cpp_codegen_static_fields_for(AnalyticsContainer_t80827118296A7273882EB5BAE9AC5207F90BBBE1_il2cpp_TypeInfo_var))->___U3CInstanceU3Ek__BackingField_10 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((AnalyticsContainer_t80827118296A7273882EB5BAE9AC5207F90BBBE1_StaticFields*)il2cpp_codegen_static_fields_for(AnalyticsContainer_t80827118296A7273882EB5BAE9AC5207F90BBBE1_il2cpp_TypeInfo_var))->___U3CInstanceU3Ek__BackingField_10), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ConsentCheckException_set_Reason_mB9551C34C6B6C76DAAD9DF12EFF1B0E385CEE968_inline (ConsentCheckException_t96E7054ECB013548EA92EEFFFACAB143D5A86B7D* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// [Preserve] public ConsentCheckExceptionReason Reason { get; private set; }
		int32_t L_0 = ___0_value;
		__this->___U3CReasonU3Ek__BackingField_19 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* UnityWebRequestAsyncOperation_get_webRequest_mF67D15420C7C1C4DCA1BD6F839048A0542998BC3_inline (UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C* __this, const RuntimeMethod* method) 
{
	{
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_0 = __this->___U3CwebRequestU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* BufferX_get_UserID_m069B4C7871A94BC357D27219F98BE125F07090EC_inline (BufferX_t61043C3179F78166341D64689A662C738496055C* __this, const RuntimeMethod* method) 
{
	{
		// public string UserID { get; set; }
		String_t* L_0 = __this->___U3CUserIDU3Ek__BackingField_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* BufferX_get_SessionID_m86D349E8698F5BF8C572CD889D449D24A43454D1_inline (BufferX_t61043C3179F78166341D64689A662C738496055C* __this, const RuntimeMethod* method) 
{
	{
		// public string SessionID { get; set; }
		String_t* L_0 = __this->___U3CSessionIDU3Ek__BackingField_8;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* BufferX_get_InstallID_m255A0D58EF4510EE3656D7795CAB9B34240A41E7_inline (BufferX_t61043C3179F78166341D64689A662C738496055C* __this, const RuntimeMethod* method) 
{
	{
		// public string InstallID { get; set; }
		String_t* L_0 = __this->___U3CInstallIDU3Ek__BackingField_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* BufferX_get_PlayerID_mD97D8BA445FB3EE086D28BB7756494936191A098_inline (BufferX_t61043C3179F78166341D64689A662C738496055C* __this, const RuntimeMethod* method) 
{
	{
		// public string PlayerID { get; set; }
		String_t* L_0 = __this->___U3CPlayerIDU3Ek__BackingField_7;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____stringLength_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ConsentTracker_set_optOutConsentStatus_m4BAAF67518F147B7203463AD1557E2E14A795657_inline (ConsentTracker_tBDC1E317516ED67AC655A7D3B1D44EF5666B3FC4* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// internal ConsentStatus optOutConsentStatus { get; set; }
		int32_t L_0 = ___0_value;
		__this->___U3CoptOutConsentStatusU3Ek__BackingField_3 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ConsentTracker_set_optInPiplConsentStatus_m7121DEA6C7203C39DD740E00262387EF06B1C732_inline (ConsentTracker_tBDC1E317516ED67AC655A7D3B1D44EF5666B3FC4* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// internal ConsentStatus optInPiplConsentStatus { get; set; }
		int32_t L_0 = ___0_value;
		__this->___U3CoptInPiplConsentStatusU3Ek__BackingField_2 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ConsentTracker_get_optInPiplConsentStatus_m1F91E59567043A5429228EFBA83709725EB53A34_inline (ConsentTracker_tBDC1E317516ED67AC655A7D3B1D44EF5666B3FC4* __this, const RuntimeMethod* method) 
{
	{
		// internal ConsentStatus optInPiplConsentStatus { get; set; }
		int32_t L_0 = __this->___U3CoptInPiplConsentStatusU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ConsentTracker_get_optOutConsentStatus_mA1EB68620CB4A25DD2739C48F607DFE18924D415_inline (ConsentTracker_tBDC1E317516ED67AC655A7D3B1D44EF5666B3FC4* __this, const RuntimeMethod* method) 
{
	{
		// internal ConsentStatus optOutConsentStatus { get; set; }
		int32_t L_0 = __this->___U3CoptOutConsentStatusU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Dispatcher_get_FlushInProgress_mCC5DAEE29D9E97D753FE7B2C876FC7B9E3F50E28_inline (Dispatcher_t60105C40E4336C76AECD5AF26D5C6A9448D3ECAE* __this, const RuntimeMethod* method) 
{
	{
		// internal bool FlushInProgress { get; private set; }
		bool L_0 = __this->___U3CFlushInProgressU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Dispatcher_set_FlushInProgress_mE7F87C33DBBF7012A706047DC2336D3B6EF9391E_inline (Dispatcher_t60105C40E4336C76AECD5AF26D5C6A9448D3ECAE* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// internal bool FlushInProgress { get; private set; }
		bool L_0 = ___0_value;
		__this->___U3CFlushInProgressU3Ek__BackingField_4 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Dispatcher_get_CollectUrl_m3C55277A1037E4A2BAE8D319D83925467707033B_inline (Dispatcher_t60105C40E4336C76AECD5AF26D5C6A9448D3ECAE* __this, const RuntimeMethod* method) 
{
	{
		// public string CollectUrl { get; set; }
		String_t* L_0 = __this->___U3CCollectUrlU3Ek__BackingField_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* StdCommonParams_get_GameStoreID_m84117F13E7CB919145EC3EF0480411695B7B7B69_inline (StdCommonParams_tDFD4FF72F7EEBBC4384155713888A4485FF5E701* __this, const RuntimeMethod* method) 
{
	{
		// internal string GameStoreID { get; set; }
		String_t* L_0 = __this->___U3CGameStoreIDU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* StdCommonParams_get_GameBundleID_m614C916F3CBA18D60161DDFD84B4C9D5C2E99531_inline (StdCommonParams_tDFD4FF72F7EEBBC4384155713888A4485FF5E701* __this, const RuntimeMethod* method) 
{
	{
		// internal string GameBundleID { get; set; }
		String_t* L_0 = __this->___U3CGameBundleIDU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* StdCommonParams_get_Platform_m997C2F5D078131853762DCFBA238288F8EFA191E_inline (StdCommonParams_tDFD4FF72F7EEBBC4384155713888A4485FF5E701* __this, const RuntimeMethod* method) 
{
	{
		// internal string Platform { get; set; }
		String_t* L_0 = __this->___U3CPlatformU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* StdCommonParams_get_Idfv_m0CB0676EB45E77DE51316B204FFAE5437CEFA6DD_inline (StdCommonParams_tDFD4FF72F7EEBBC4384155713888A4485FF5E701* __this, const RuntimeMethod* method) 
{
	{
		// internal string Idfv { get; set; }
		String_t* L_0 = __this->___U3CIdfvU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* StdCommonParams_get_UasUserID_m6A4DE2B299022D7DBCEA6EE055C717E59BE2B32C_inline (StdCommonParams_tDFD4FF72F7EEBBC4384155713888A4485FF5E701* __this, const RuntimeMethod* method) 
{
	{
		// internal string UasUserID { get; set; }
		String_t* L_0 = __this->___U3CUasUserIDU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* StdCommonParams_get_BuildGuuid_m706EB59064FA0D40D1C244514B2EA2995AE5706D_inline (StdCommonParams_tDFD4FF72F7EEBBC4384155713888A4485FF5E701* __this, const RuntimeMethod* method) 
{
	{
		// internal string BuildGuuid { get; set; }
		String_t* L_0 = __this->___U3CBuildGuuidU3Ek__BackingField_7;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* StdCommonParams_get_ClientVersion_mA3D1574F4D14E5355C23D39AA130AB106960491D_inline (StdCommonParams_tDFD4FF72F7EEBBC4384155713888A4485FF5E701* __this, const RuntimeMethod* method) 
{
	{
		// internal string ClientVersion { get; set; }
		String_t* L_0 = __this->___U3CClientVersionU3Ek__BackingField_8;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* StdCommonParams_get_UserCountry_mDDDF84AB7FC6D62ECBB642C7C7814D3143DAF0F9_inline (StdCommonParams_tDFD4FF72F7EEBBC4384155713888A4485FF5E701* __this, const RuntimeMethod* method) 
{
	{
		// internal string UserCountry { get; set; }
		String_t* L_0 = __this->___U3CUserCountryU3Ek__BackingField_9;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 StdCommonParams_get_DeviceVolume_mD4CB9275283492DA050B8BDA949E1E38C35EB76C_inline (StdCommonParams_tDFD4FF72F7EEBBC4384155713888A4485FF5E701* __this, const RuntimeMethod* method) 
{
	{
		// internal double? DeviceVolume { get; set; }
		Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 L_0 = __this->___U3CDeviceVolumeU3Ek__BackingField_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 StdCommonParams_get_BatteryLoad_mE5C6A63115E33A0FB67BA3BA7FF4CD98021A584A_inline (StdCommonParams_tDFD4FF72F7EEBBC4384155713888A4485FF5E701* __this, const RuntimeMethod* method) 
{
	{
		// internal double? BatteryLoad { get; set; }
		Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 L_0 = __this->___U3CBatteryLoadU3Ek__BackingField_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* StdCommonParams_get_ProjectID_m48D1D967587EF2BB877AB287B6FD03531D3E3658_inline (StdCommonParams_tDFD4FF72F7EEBBC4384155713888A4485FF5E701* __this, const RuntimeMethod* method) 
{
	{
		// internal string ProjectID { get; set; }
		String_t* L_0 = __this->___U3CProjectIDU3Ek__BackingField_10;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mC149B1C717AF506BBE8932F2C1DC86C378D17EA8_gshared_inline (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = (bool)__this->___hasValue_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Nullable_1_GetValueOrDefault_m068A148705ED1E215A5E85D18BA6852B192DA419_gshared_inline (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75* __this, const RuntimeMethod* method) 
{
	{
		float L_0 = (float)__this->___value_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		int32_t L_7 = V_1;
		RuntimeObject* L_8 = ___0_item;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___0_item;
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 Enumerator_get_Current_mE3475384B761E1C7971D3639BD09117FE8363422_gshared_inline (Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9* __this, const RuntimeMethod* method) 
{
	{
		KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 L_0 = (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Key_mBD8EA7557C27E6956F2AF29DA3F7499B2F51A282_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->___key_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_mC6BD8075F9C9DDEF7B4D731E5C38EC19103988E7_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->___value_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mB4991C0F4C2664AB3CB2584DEECF5BCE6AB7757D_gshared_inline (Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = (bool)__this->___hasValue_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_gshared_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_gshared_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_item, const RuntimeMethod* method) 
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = V_0;
		int32_t L_7 = V_1;
		int32_t L_8 = ___0_item;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (int32_t)L_8);
		return;
	}

IL_0034:
	{
		int32_t L_9 = ___0_item;
		((  void (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_mF6795DE5F49C1D0B91D6A0955F448B22970D67A9_gshared_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		if (!false)
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_1 = (int32_t)__this->____size_2;
		V_0 = L_1;
		__this->____size_2 = 0;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____items_1;
		int32_t L_4 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_3, 0, L_4, NULL);
		return;
	}

IL_0035:
	{
		__this->____size_2 = 0;
	}

IL_003c:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* TaskCompletionSource_1_get_Task_mF44990297C25C7DBE1E65241C03D0120CB551552_gshared_inline (TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37* __this, const RuntimeMethod* method) 
{
	{
		Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* L_0 = (Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2*)__this->____task_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mE4800C6D733A4CDE721FD3D8B4E95319B5C64E9E_gshared_inline (Action_1_tBB5A52E9AEFBC4F0C8D94D39CAD16BCB6B8B5929* __this, int64_t ___0_obj, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, int64_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_obj, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mC082C667C8EB3A6CA80E06BCAEA0BED00C6BC15A_gshared_inline (Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = (bool)__this->___hasValue_0;
		return L_0;
	}
}
