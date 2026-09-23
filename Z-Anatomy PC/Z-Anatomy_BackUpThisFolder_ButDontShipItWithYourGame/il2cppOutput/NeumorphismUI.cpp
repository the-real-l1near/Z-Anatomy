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

// System.Collections.Generic.List`1<UnityEngine.Color32>
struct List_1_t3517D52AE25CA3B19051E691E9C06ED03A3AB9B8;
// System.Collections.Generic.List`1<NeumorphismUI.IModifier>
struct List_1_t176C9FB9A509833C4226B9034D84C172927C63D6;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<UnityEngine.UIVertex>
struct List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A;
// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B;
// System.Collections.Generic.List`1<UnityEngine.Vector4>
struct List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// NeumorphismUI.IModifier[]
struct IModifierU5BU5D_t9708ED40B54081A8997F85FDF5E3D4BDB34AE610;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.UI.BaseMeshEffect
struct BaseMeshEffect_t87C453D6DAE52C072B2E613F65A5FE45C9B3990D;
// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// System.Exception
struct Exception_t;
// NeumorphismUI.Gradient
struct Gradient_t5F9D3643DECAF5A456B4D2AF2EDE96FA267E1C73;
// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// NeumorphismUI.IModifier
struct IModifier_t99AADE270B75BAA0625BC56017701342A1E5A7A3;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// NeumorphismUI.Neumorphism
struct Neumorphism_tC90B32FB417E1EF43C0B8DC9F1DB2D1FFF806A5B;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// UnityEngine.Shader
struct Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692;
// NeumorphismUI.Shadow
struct Shadow_tE3A6D0896FAA6D9AB62E4A7C7B9FCCC3E2BEDA98;
// System.String
struct String_t;
// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.RectTransform/ReapplyDrivenProperties
struct ReapplyDrivenProperties_t3482EA130A01FF7EE2EEFE37F66A5215D08CFE24;

IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Gradient_t5F9D3643DECAF5A456B4D2AF2EDE96FA267E1C73_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IModifier_t99AADE270B75BAA0625BC56017701342A1E5A7A3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t176C9FB9A509833C4226B9034D84C172927C63D6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Mode_tF7135600BC309EC54CC20FCD0B34A9E440F7E416_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Neumorphism_tC90B32FB417E1EF43C0B8DC9F1DB2D1FFF806A5B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Shadow_tE3A6D0896FAA6D9AB62E4A7C7B9FCCC3E2BEDA98_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral07F8CD0D44E027CC15F7D8BB6A818FF1D2CF8B1C;
IL2CPP_EXTERN_C String_t* _stringLiteral2E01991A605DAB44BEA9117C3E9A9DA835B484C0;
IL2CPP_EXTERN_C String_t* _stringLiteral586E75F03A11DA7D6523B9105701EAD18A60678D;
IL2CPP_EXTERN_C String_t* _stringLiteral59537B2224DB19EF83E6E95B5EB0515A743FDBDE;
IL2CPP_EXTERN_C String_t* _stringLiteral598F438BDA175211F854F608AA77ED777FA3F124;
IL2CPP_EXTERN_C String_t* _stringLiteral6EA7BB6FBBA76D251A08C1732729FAABB5F61E72;
IL2CPP_EXTERN_C String_t* _stringLiteral6FFC84EDE94FD65BBA922152669C1C89D0592D22;
IL2CPP_EXTERN_C String_t* _stringLiteral86A04CD0F0A72EF7AFFA2F1D3B84FD4C0C8A846C;
IL2CPP_EXTERN_C String_t* _stringLiteralCBDAC60E0D057AFE661D0C6E451953C8268511BA;
IL2CPP_EXTERN_C String_t* _stringLiteralEBB915EB54F51F65296854047A349F56D7C01DDC;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m1D3CD44B17C48AC75893B3672DF016C7E1397F46_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m75BC2C93D4BEEE95E62441282AF8C76121632277_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mD66FEEE8054EA45D277AD08FD4A6F50A09E525C5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mD51918B4C9D70F23A9B04359FA8B9F7AF8065701_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m09CC01377B5214C1A3A1422D8F090D12DB5EA603_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m31CE3E5CA0B9ECA0E9B32A34D4ABE7E29B429448_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mC6FB8E1D9906DEEA1D78865155FD88557E4E0A71_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mCA925C9FD45B8BD96CE01A8F37A4090A34F26684_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mD013968D6DAB756EA34E138E00BEF8922909C1BE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Capacity_m56718A2202E1BCBA0CDB1E01212A939E9E3D1D96_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m289E50C53DE62E6913B2ED1A26A78DC51AD12F39_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_set_Capacity_mC3FD70CD503957447E9C3F0504B2B962822383A9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_set_Item_m0C5B60C5566C63D5E3E979D8EF02D5DF8D92AB33_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Neumorphism_GetMaterial_mB7EB8B4DD40925B6B629AA0D137E4CAAC43C5355_RuntimeMethod_var;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tFCADB9D52D1396466B5BB2E22B66C963796872FC 
{
};

// System.Collections.Generic.List`1<NeumorphismUI.IModifier>
struct List_1_t176C9FB9A509833C4226B9034D84C172927C63D6  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	IModifierU5BU5D_t9708ED40B54081A8997F85FDF5E3D4BDB34AE610* ____items_1;
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

// System.Collections.Generic.List`1<UnityEngine.UIVertex>
struct List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// NeumorphismUI.Gradient
struct Gradient_t5F9D3643DECAF5A456B4D2AF2EDE96FA267E1C73  : public RuntimeObject
{
	// UnityEngine.RectTransform NeumorphismUI.Gradient::rectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___rectTransform_0;
};

// NeumorphismUI.Shadow
struct Shadow_tE3A6D0896FAA6D9AB62E4A7C7B9FCCC3E2BEDA98  : public RuntimeObject
{
	// NeumorphismUI.Shadow/Mode NeumorphismUI.Shadow::mode
	int32_t ___mode_1;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
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

// System.Collections.Generic.List`1/Enumerator<NeumorphismUI.IModifier>
struct Enumerator_tBD743232B640C9DC1BA6F0AB5FC3F82D2236A214 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t176C9FB9A509833C4226B9034D84C172927C63D6* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	RuntimeObject* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<System.Object>
struct Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	RuntimeObject* ____current_3;
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

// UnityEngine.Color
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;
};

// UnityEngine.Color32
struct Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 UnityEngine.Color32::rgba
			int32_t ___rgba_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___rgba_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Byte UnityEngine.Color32::r
			uint8_t ___r_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___r_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___g_2_OffsetPadding[1];
			// System.Byte UnityEngine.Color32::g
			uint8_t ___g_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___g_2_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___g_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___b_3_OffsetPadding[2];
			// System.Byte UnityEngine.Color32::b
			uint8_t ___b_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___b_3_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___b_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___a_4_OffsetPadding[3];
			// System.Byte UnityEngine.Color32::a
			uint8_t ___a_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___a_4_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___a_4_forAlignmentOnly;
		};
	};
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

// UnityEngine.Matrix4x4
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 
{
	// System.Single UnityEngine.Matrix4x4::m00
	float ___m00_0;
	// System.Single UnityEngine.Matrix4x4::m10
	float ___m10_1;
	// System.Single UnityEngine.Matrix4x4::m20
	float ___m20_2;
	// System.Single UnityEngine.Matrix4x4::m30
	float ___m30_3;
	// System.Single UnityEngine.Matrix4x4::m01
	float ___m01_4;
	// System.Single UnityEngine.Matrix4x4::m11
	float ___m11_5;
	// System.Single UnityEngine.Matrix4x4::m21
	float ___m21_6;
	// System.Single UnityEngine.Matrix4x4::m31
	float ___m31_7;
	// System.Single UnityEngine.Matrix4x4::m02
	float ___m02_8;
	// System.Single UnityEngine.Matrix4x4::m12
	float ___m12_9;
	// System.Single UnityEngine.Matrix4x4::m22
	float ___m22_10;
	// System.Single UnityEngine.Matrix4x4::m32
	float ___m32_11;
	// System.Single UnityEngine.Matrix4x4::m03
	float ___m03_12;
	// System.Single UnityEngine.Matrix4x4::m13
	float ___m13_13;
	// System.Single UnityEngine.Matrix4x4::m23
	float ___m23_14;
	// System.Single UnityEngine.Matrix4x4::m33
	float ___m33_15;
};

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;
};

// UnityEngine.Rect
struct Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D 
{
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
};

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;
};

// UnityEngine.Vector4
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;
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

// UnityEngine.UIVertex
struct UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 
{
	// UnityEngine.Vector3 UnityEngine.UIVertex::position
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position_0;
	// UnityEngine.Vector3 UnityEngine.UIVertex::normal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___normal_1;
	// UnityEngine.Vector4 UnityEngine.UIVertex::tangent
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___tangent_2;
	// UnityEngine.Color32 UnityEngine.UIVertex::color
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___color_3;
	// UnityEngine.Vector4 UnityEngine.UIVertex::uv0
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___uv0_4;
	// UnityEngine.Vector4 UnityEngine.UIVertex::uv1
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___uv1_5;
	// UnityEngine.Vector4 UnityEngine.UIVertex::uv2
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___uv2_6;
	// UnityEngine.Vector4 UnityEngine.UIVertex::uv3
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___uv3_7;
};

// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE  : public RuntimeObject
{
	// System.Collections.Generic.List`1<UnityEngine.Vector3> UnityEngine.UI.VertexHelper::m_Positions
	List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* ___m_Positions_0;
	// System.Collections.Generic.List`1<UnityEngine.Color32> UnityEngine.UI.VertexHelper::m_Colors
	List_1_t3517D52AE25CA3B19051E691E9C06ED03A3AB9B8* ___m_Colors_1;
	// System.Collections.Generic.List`1<UnityEngine.Vector4> UnityEngine.UI.VertexHelper::m_Uv0S
	List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* ___m_Uv0S_2;
	// System.Collections.Generic.List`1<UnityEngine.Vector4> UnityEngine.UI.VertexHelper::m_Uv1S
	List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* ___m_Uv1S_3;
	// System.Collections.Generic.List`1<UnityEngine.Vector4> UnityEngine.UI.VertexHelper::m_Uv2S
	List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* ___m_Uv2S_4;
	// System.Collections.Generic.List`1<UnityEngine.Vector4> UnityEngine.UI.VertexHelper::m_Uv3S
	List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* ___m_Uv3S_5;
	// System.Collections.Generic.List`1<UnityEngine.Vector3> UnityEngine.UI.VertexHelper::m_Normals
	List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* ___m_Normals_6;
	// System.Collections.Generic.List`1<UnityEngine.Vector4> UnityEngine.UI.VertexHelper::m_Tangents
	List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* ___m_Tangents_7;
	// System.Collections.Generic.List`1<System.Int32> UnityEngine.UI.VertexHelper::m_Indices
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___m_Indices_8;
	// System.Boolean UnityEngine.UI.VertexHelper::m_ListsInitalized
	bool ___m_ListsInitalized_11;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Shader
struct Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5  : public Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1
{
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// UnityEngine.UI.BaseMeshEffect
struct BaseMeshEffect_t87C453D6DAE52C072B2E613F65A5FE45C9B3990D  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.UI.Graphic UnityEngine.UI.BaseMeshEffect::m_Graphic
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___m_Graphic_4;
};

// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTargetCache
	bool ___m_RaycastTargetCache_11;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_RaycastPadding_12;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_13;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CanvasRenderer_14;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_15;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_16;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyLayoutCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyVertsCallback_19;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyMaterialCallback_20;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_CachedMesh_23;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___m_CachedUvs_24;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4* ___m_ColorTweenRunner_25;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_26;
};

// NeumorphismUI.Neumorphism
struct Neumorphism_tC90B32FB417E1EF43C0B8DC9F1DB2D1FFF806A5B  : public BaseMeshEffect_t87C453D6DAE52C072B2E613F65A5FE45C9B3990D
{
	// NeumorphismUI.Neumorphism/Mode NeumorphismUI.Neumorphism::_mode
	int32_t ____mode_5;
	// UnityEngine.Color NeumorphismUI.Neumorphism::_lightColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ____lightColor_6;
	// UnityEngine.Color NeumorphismUI.Neumorphism::_shadowColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ____shadowColor_7;
	// System.Single NeumorphismUI.Neumorphism::_pixelRange
	float ____pixelRange_8;
	// System.Single NeumorphismUI.Neumorphism::_bevelSize
	float ____bevelSize_9;
	// System.Single NeumorphismUI.Neumorphism::_height
	float ____height_10;
	// System.Single NeumorphismUI.Neumorphism::_clickedHeight
	float ____clickedHeight_11;
	// System.Single NeumorphismUI.Neumorphism::_mouseOverHeight
	float ____mouseOverHeight_12;
	// System.Boolean NeumorphismUI.Neumorphism::_drawGradient
	bool ____drawGradient_13;
	// System.Boolean NeumorphismUI.Neumorphism::_drawShadow
	bool ____drawShadow_14;
	// System.Boolean NeumorphismUI.Neumorphism::_isTrigger
	bool ____isTrigger_15;
	// System.Boolean NeumorphismUI.Neumorphism::_disableOnMouseExit
	bool ____disableOnMouseExit_16;
	// System.Single NeumorphismUI.Neumorphism::_shadowOffset
	float ____shadowOffset_17;
	// UnityEngine.Texture NeumorphismUI.Neumorphism::_sdfTex
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ____sdfTex_18;
	// System.Single NeumorphismUI.Neumorphism::initialHeight
	float ___initialHeight_19;
	// UnityEngine.Material NeumorphismUI.Neumorphism::material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_26;
	// UnityEngine.Quaternion NeumorphismUI.Neumorphism::rotation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation_27;
	// System.Collections.Generic.List`1<NeumorphismUI.IModifier> NeumorphismUI.Neumorphism::modifiers
	List_1_t176C9FB9A509833C4226B9034D84C172927C63D6* ___modifiers_28;
};

// <Module>

// <Module>

// System.Collections.Generic.List`1<NeumorphismUI.IModifier>
struct List_1_t176C9FB9A509833C4226B9034D84C172927C63D6_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	IModifierU5BU5D_t9708ED40B54081A8997F85FDF5E3D4BDB34AE610* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<NeumorphismUI.IModifier>

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Object>

// System.Collections.Generic.List`1<UnityEngine.UIVertex>
struct List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.UIVertex>

// NeumorphismUI.Gradient

// NeumorphismUI.Gradient

// NeumorphismUI.Shadow
struct Shadow_tE3A6D0896FAA6D9AB62E4A7C7B9FCCC3E2BEDA98_StaticFields
{
	// System.Collections.Generic.List`1<UnityEngine.UIVertex> NeumorphismUI.Shadow::vertCache
	List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* ___vertCache_0;
};

// NeumorphismUI.Shadow

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// System.Collections.Generic.List`1/Enumerator<NeumorphismUI.IModifier>

// System.Collections.Generic.List`1/Enumerator<NeumorphismUI.IModifier>

// System.Collections.Generic.List`1/Enumerator<System.Object>

// System.Collections.Generic.List`1/Enumerator<System.Object>

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

// UnityEngine.Color

// UnityEngine.Color

// UnityEngine.Color32

// UnityEngine.Color32

// System.Double

// System.Double

// System.Int32

// System.Int32

// UnityEngine.Matrix4x4
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_StaticFields
{
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___identityMatrix_17;
};

// UnityEngine.Matrix4x4

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// UnityEngine.Quaternion

// UnityEngine.Rect

// UnityEngine.Rect

// System.Single

// System.Single

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector_9;
};

// UnityEngine.Vector2

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
};

// UnityEngine.Vector3

// UnityEngine.Vector4
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields
{
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___negativeInfinityVector_8;
};

// UnityEngine.Vector4

// System.Void

// System.Void

// System.Exception
struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};

// System.Exception

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};

// UnityEngine.Object

// UnityEngine.UIVertex
struct UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207_StaticFields
{
	// UnityEngine.Color32 UnityEngine.UIVertex::s_DefaultColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___s_DefaultColor_8;
	// UnityEngine.Vector4 UnityEngine.UIVertex::s_DefaultTangent
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___s_DefaultTangent_9;
	// UnityEngine.UIVertex UnityEngine.UIVertex::simpleVert
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 ___simpleVert_10;
};

// UnityEngine.UIVertex

// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE_StaticFields
{
	// UnityEngine.Vector4 UnityEngine.UI.VertexHelper::s_DefaultTangent
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___s_DefaultTangent_9;
	// UnityEngine.Vector3 UnityEngine.UI.VertexHelper::s_DefaultNormal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___s_DefaultNormal_10;
};

// UnityEngine.UI.VertexHelper

// UnityEngine.Component

// UnityEngine.Component

// UnityEngine.Material

// UnityEngine.Material

// UnityEngine.Shader

// UnityEngine.Shader

// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700_StaticFields
{
	// System.Int32 UnityEngine.Texture::GenerateAllMips
	int32_t ___GenerateAllMips_4;
};

// UnityEngine.Texture

// UnityEngine.Behaviour

// UnityEngine.Behaviour

// UnityEngine.Transform

// UnityEngine.Transform

// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_StaticFields
{
	// UnityEngine.RectTransform/ReapplyDrivenProperties UnityEngine.RectTransform::reapplyDrivenProperties
	ReapplyDrivenProperties_t3482EA130A01FF7EE2EEFE37F66A5215D08CFE24* ___reapplyDrivenProperties_4;
};

// UnityEngine.RectTransform

// UnityEngine.EventSystems.UIBehaviour

// UnityEngine.EventSystems.UIBehaviour

// UnityEngine.UI.BaseMeshEffect

// UnityEngine.UI.BaseMeshEffect

// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___s_Mesh_21;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___s_VertexHelper_22;
};

// UnityEngine.UI.Graphic

// NeumorphismUI.Neumorphism
struct Neumorphism_tC90B32FB417E1EF43C0B8DC9F1DB2D1FFF806A5B_StaticFields
{
	// System.Int32 NeumorphismUI.Neumorphism::_LightColor
	int32_t ____LightColor_20;
	// System.Int32 NeumorphismUI.Neumorphism::_ShadowColor
	int32_t ____ShadowColor_21;
	// System.Int32 NeumorphismUI.Neumorphism::_PixelRange
	int32_t ____PixelRange_22;
	// System.Int32 NeumorphismUI.Neumorphism::_BevelSize
	int32_t ____BevelSize_23;
	// System.Int32 NeumorphismUI.Neumorphism::_Height
	int32_t ____Height_24;
	// System.Int32 NeumorphismUI.Neumorphism::_WorldRotation
	int32_t ____WorldRotation_25;
};

// NeumorphismUI.Neumorphism
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F  : public RuntimeArray
{
	ALIGN_FIELD (8) UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 m_Items[1];

	inline UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 value)
	{
		m_Items[index] = value;
	}
};


// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m289E50C53DE62E6913B2ED1A26A78DC51AD12F39_gshared_inline (List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Clear()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m31CE3E5CA0B9ECA0E9B32A34D4ABE7E29B429448_gshared_inline (List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::get_Capacity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_get_Capacity_m56718A2202E1BCBA0CDB1E01212A939E9E3D1D96_gshared (List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::set_Capacity(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Capacity_mC3FD70CD503957447E9C3F0504B2B962822383A9_gshared (List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<UnityEngine.UIVertex>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_gshared (List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_gshared_inline (List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* __this, UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 ___0_item, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::set_Item(System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Item_m0C5B60C5566C63D5E3E979D8EF02D5DF8D92AB33_gshared (List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* __this, int32_t ___0_index, UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 ___1_value, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mD013968D6DAB756EA34E138E00BEF8922909C1BE_gshared (List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;

// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.RectTransform>()
inline RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// UnityEngine.Rect UnityEngine.RectTransform::get_rect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D RectTransform_get_rect_mC82A60F8C3805ED9833508CCC233689641207488 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Rect::get_width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Rect::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Rect::get_y()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_y_mC733E8D49F3CE21B2A3D40A1B72D687F22C97F49 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rect::set_y(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect_set_y_mDE91F4B98A6E8623EFB1250FF6526D5DB5855629 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rect::set_height(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect_set_height_mD00038E6E06637137A5626CA8CD421924005BF03 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Single UnityEngine.Rect::get_x()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_x_mB267B718E0D067F2BAE31BA477647FBF964916EB (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rect::set_x(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect_set_x_mAB91AB71898A20762BC66FD0723C4C739C4C3406 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rect::set_width(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect_set_width_m93B6217CF3EFF89F9B0C81F34D7345DE90B93E5A (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.VertexHelper::PopulateUIVertex(UnityEngine.UIVertex&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VertexHelper_PopulateUIVertex_m48FF05C38D56529E18A360D629F4842BE5D050BE (VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* __this, UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207* ___0_vertex, int32_t ___1_i, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_v, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Rect::PointToNormalized(UnityEngine.Rect,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Rect_PointToNormalized_m81F7991C1675BFA64E536722B7EEB4219BA1127A (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___0_rectangle, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_point, const RuntimeMethod* method) ;
// UnityEngine.Vector4 UnityEngine.Vector4::op_Implicit(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Vector4_op_Implicit_mB193CD8DA20DEB9E9F95CFEB5A2B1B9B3B7ECFEB_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_v, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.VertexHelper::SetUIVertex(UnityEngine.UIVertex,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VertexHelper_SetUIVertex_m539A518867E7872E0893715AD372DC9A06334FD9 (VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* __this, UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 ___0_vertex, int32_t ___1_i, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.UI.VertexHelper::get_currentVertCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VertexHelper_get_currentVertCount_m45BFEBD6FCB7DF3BF9F76946D6002BDC58B173A4 (VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.EventSystems.UIBehaviour::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIBehaviour_Start_mB12643ED6D859CD3682B4BF5B9CA7F72E8A72B45 (UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D* __this, const RuntimeMethod* method) ;
// System.Boolean NeumorphismUI.Neumorphism::get_disableOnMouseExit()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Neumorphism_get_disableOnMouseExit_m4B83AF8311A524A09113CEDAE1BCF0753F178932_inline (Neumorphism_tC90B32FB417E1EF43C0B8DC9F1DB2D1FFF806A5B* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A (Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Single NeumorphismUI.Neumorphism::get_height()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Neumorphism_get_height_mF3F71CA2ACF8D18A39EC4EB1C69502287CD7ACEE_inline (Neumorphism_tC90B32FB417E1EF43C0B8DC9F1DB2D1FFF806A5B* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.BaseMeshEffect::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseMeshEffect_OnEnable_m74592558CD0F70DC35EEFCBC1E23F84493CD77F7 (BaseMeshEffect_t87C453D6DAE52C072B2E613F65A5FE45C9B3990D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<NeumorphismUI.IModifier>::Clear()
inline void List_1_Clear_m09CC01377B5214C1A3A1422D8F090D12DB5EA603_inline (List_1_t176C9FB9A509833C4226B9034D84C172927C63D6* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t176C9FB9A509833C4226B9034D84C172927C63D6*, const RuntimeMethod*))List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline)(__this, method);
}
// System.Boolean NeumorphismUI.Neumorphism::get_drawGradient()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Neumorphism_get_drawGradient_m459E1EE9A8F04EA211EA0C41C744B11FB048A7D1_inline (Neumorphism_tC90B32FB417E1EF43C0B8DC9F1DB2D1FFF806A5B* __this, const RuntimeMethod* method) ;
// System.Void NeumorphismUI.Gradient::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gradient__ctor_m3359E63A2CAD1089617CDD93F7769E4B962C9B81 (Gradient_t5F9D3643DECAF5A456B4D2AF2EDE96FA267E1C73* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<NeumorphismUI.IModifier>::Add(T)
inline void List_1_Add_mD51918B4C9D70F23A9B04359FA8B9F7AF8065701_inline (List_1_t176C9FB9A509833C4226B9034D84C172927C63D6* __this, RuntimeObject* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t176C9FB9A509833C4226B9034D84C172927C63D6*, RuntimeObject*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___0_item, method);
}
// System.Boolean NeumorphismUI.Neumorphism::get_drawShadow()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Neumorphism_get_drawShadow_m7CF420145DCCF6E80EF4B1D57C8C39799669A066_inline (Neumorphism_tC90B32FB417E1EF43C0B8DC9F1DB2D1FFF806A5B* __this, const RuntimeMethod* method) ;
// System.Void NeumorphismUI.Shadow::.ctor(NeumorphismUI.Shadow/Mode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Shadow__ctor_m905A5E9440541CA143023806A3F928521FD32869 (Shadow_tE3A6D0896FAA6D9AB62E4A7C7B9FCCC3E2BEDA98* __this, int32_t ___0_mode, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.BaseMeshEffect::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseMeshEffect_OnDisable_mE005F7A15BFE7127D274717C3C482561481D3603 (BaseMeshEffect_t87C453D6DAE52C072B2E613F65A5FE45C9B3990D* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Application::get_isPlaying()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Application_get_isPlaying_m25B0ABDFEF54F5370CD3F263A813540843D00F34 (const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_obj, const RuntimeMethod* method) ;
// System.Void NeumorphismUI.Neumorphism::CheckMaterial()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Neumorphism_CheckMaterial_m88997610CC63AEB8F819040AF46DE086FF76E83A (Neumorphism_tC90B32FB417E1EF43C0B8DC9F1DB2D1FFF806A5B* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::SetColor(System.Int32,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetColor_m573C88F2FB1B5A978C53A197B414F9E9C6AC5B9A (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, int32_t ___0_nameID, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___1_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::SetFloat(System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetFloat_m3ECFD92072347A8620254F014865984FA68211A8 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, int32_t ___0_nameID, float ___1_value, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Quaternion::op_Inequality(UnityEngine.Quaternion,UnityEngine.Quaternion)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Quaternion_op_Inequality_m4EC1EF263D0E42432A301F85CB52028D2973F5DA_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_lhs, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___1_rhs, const RuntimeMethod* method) ;
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::Rotate(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 Matrix4x4_Rotate_m015442530DFF5651458BBFDFB3CBC9180FC09D9E (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_q, const RuntimeMethod* method) ;
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::get_inverse()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 Matrix4x4_get_inverse_m4F4A881CD789281EA90EB68CFD39F36C8A81E6BD (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::SetMatrix(System.Int32,UnityEngine.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetMatrix_m668579C6402F88BFEF769D39E484BAD4CE6B0067 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, int32_t ___0_nameID, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___1_value, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<NeumorphismUI.IModifier>::GetEnumerator()
inline Enumerator_tBD743232B640C9DC1BA6F0AB5FC3F82D2236A214 List_1_GetEnumerator_mC6FB8E1D9906DEEA1D78865155FD88557E4E0A71 (List_1_t176C9FB9A509833C4226B9034D84C172927C63D6* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tBD743232B640C9DC1BA6F0AB5FC3F82D2236A214 (*) (List_1_t176C9FB9A509833C4226B9034D84C172927C63D6*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<NeumorphismUI.IModifier>::Dispose()
inline void Enumerator_Dispose_m1D3CD44B17C48AC75893B3672DF016C7E1397F46 (Enumerator_tBD743232B640C9DC1BA6F0AB5FC3F82D2236A214* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tBD743232B640C9DC1BA6F0AB5FC3F82D2236A214*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<NeumorphismUI.IModifier>::get_Current()
inline RuntimeObject* Enumerator_get_Current_mD66FEEE8054EA45D277AD08FD4A6F50A09E525C5_inline (Enumerator_tBD743232B640C9DC1BA6F0AB5FC3F82D2236A214* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Enumerator_tBD743232B640C9DC1BA6F0AB5FC3F82D2236A214*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<NeumorphismUI.IModifier>::MoveNext()
inline bool Enumerator_MoveNext_m75BC2C93D4BEEE95E62441282AF8C76121632277 (Enumerator_tBD743232B640C9DC1BA6F0AB5FC3F82D2236A214* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tBD743232B640C9DC1BA6F0AB5FC3F82D2236A214*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// UnityEngine.Material NeumorphismUI.Neumorphism::GetMaterial(NeumorphismUI.Neumorphism/Mode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* Neumorphism_GetMaterial_mB7EB8B4DD40925B6B629AA0D137E4CAAC43C5355 (int32_t ___0_mode, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::SetTexture(System.String,UnityEngine.Texture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetTexture_m06083C3F52EF02FFB1177901D9907314F280F9A5 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, String_t* ___0_name, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___1_value, const RuntimeMethod* method) ;
// UnityEngine.UI.Graphic UnityEngine.UI.BaseMeshEffect::get_graphic()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* BaseMeshEffect_get_graphic_mE8226BAC46FDB49681BEAD2DE8A4EE3CEC18FF04 (BaseMeshEffect_t87C453D6DAE52C072B2E613F65A5FE45C9B3990D* __this, const RuntimeMethod* method) ;
// UnityEngine.Shader UnityEngine.Shader::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* Shader_Find_m183AA54F78320212DDEC811592F98456898A41C5 (String_t* ___0_name, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::.ctor(UnityEngine.Shader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material__ctor_m7FDF47105D66D19591BE505A0C42B0F90D88C9BF (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* ___0_shader, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8 (String_t* ___0_format, RuntimeObject* ___1_arg0, const RuntimeMethod* method) ;
// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F (Exception_t* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// System.Boolean NeumorphismUI.Neumorphism::get_isTrigger()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Neumorphism_get_isTrigger_m63A3F191FA11442494FAE878DA426C7053E49987_inline (Neumorphism_tC90B32FB417E1EF43C0B8DC9F1DB2D1FFF806A5B* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___0_r, float ___1_g, float ___2_b, float ___3_a, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline (const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<NeumorphismUI.IModifier>::.ctor()
inline void List_1__ctor_mCA925C9FD45B8BD96CE01A8F37A4090A34F26684 (List_1_t176C9FB9A509833C4226B9034D84C172927C63D6* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t176C9FB9A509833C4226B9034D84C172927C63D6*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void UnityEngine.UI.BaseMeshEffect::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseMeshEffect__ctor_mFFF23FD89B32150DAC512C556A1CCF563D062427 (BaseMeshEffect_t87C453D6DAE52C072B2E613F65A5FE45C9B3990D* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Shader::PropertyToID(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Shader_PropertyToID_mE98523D50F5656CAE89B30695C458253EB8956CA (String_t* ___0_name, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.VertexHelper::GetUIVertexStream(System.Collections.Generic.List`1<UnityEngine.UIVertex>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VertexHelper_GetUIVertexStream_m87D56EB5559CCCA150F68B1DD660FF4154CACBCE (VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* __this, List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* ___0_stream, const RuntimeMethod* method) ;
// UnityEngine.Color NeumorphismUI.Neumorphism::get_lightColor()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Neumorphism_get_lightColor_m1FE329E985B9DB69F525F6772A367CB3B319FFD5_inline (Neumorphism_tC90B32FB417E1EF43C0B8DC9F1DB2D1FFF806A5B* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___0_x, float ___1_y, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::get_normalized()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_normalized_mF6722883AEFB5027690A778DF8ACC20F0FA65297_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) ;
// System.Single NeumorphismUI.Neumorphism::get_shadowOffset()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Neumorphism_get_shadowOffset_m6AD844789F91C821ACAB9C96052225CCFA07D6B2_inline (Neumorphism_tC90B32FB417E1EF43C0B8DC9F1DB2D1FFF806A5B* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Multiply(UnityEngine.Vector2,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_a, float ___1_d, const RuntimeMethod* method) ;
// UnityEngine.Color NeumorphismUI.Neumorphism::get_shadowColor()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Neumorphism_get_shadowColor_m0C79702A0A24DA0B5197A92AEAB116A3FC32EEFA_inline (Neumorphism_tC90B32FB417E1EF43C0B8DC9F1DB2D1FFF806A5B* __this, const RuntimeMethod* method) ;
// UnityEngine.Color32 UnityEngine.Color32::op_Implicit(UnityEngine.Color)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B Color32_op_Implicit_m79AF5E0BDE9CE041CAC4D89CBFA66E71C6DD1B70_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_c, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::get_Count()
inline int32_t List_1_get_Count_m289E50C53DE62E6913B2ED1A26A78DC51AD12F39_inline (List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A*, const RuntimeMethod*))List_1_get_Count_m289E50C53DE62E6913B2ED1A26A78DC51AD12F39_gshared_inline)(__this, method);
}
// System.Void NeumorphismUI.Shadow::ApplyShadowZeroAlloc(System.Collections.Generic.List`1<UnityEngine.UIVertex>,UnityEngine.Color32,System.Int32,System.Int32,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Shadow_ApplyShadowZeroAlloc_m326975CAD1CCB8E87FB5E14545317EF8828BAFB0 (Shadow_tE3A6D0896FAA6D9AB62E4A7C7B9FCCC3E2BEDA98* __this, List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* ___0_verts, Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___1_color, int32_t ___2_start, int32_t ___3_end, float ___4_x, float ___5_y, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.VertexHelper::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VertexHelper_Clear_mB19E51AD5AF1C04CB2C6E6A272D032D651EC40F5 (VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.VertexHelper::AddUIVertexTriangleStream(System.Collections.Generic.List`1<UnityEngine.UIVertex>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VertexHelper_AddUIVertexTriangleStream_m29A217271BF2B3D3D60B7CBDA4114C7BB40C2841 (VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* __this, List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* ___0_verts, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Clear()
inline void List_1_Clear_m31CE3E5CA0B9ECA0E9B32A34D4ABE7E29B429448_inline (List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A*, const RuntimeMethod*))List_1_Clear_m31CE3E5CA0B9ECA0E9B32A34D4ABE7E29B429448_gshared_inline)(__this, method);
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::get_Capacity()
inline int32_t List_1_get_Capacity_m56718A2202E1BCBA0CDB1E01212A939E9E3D1D96 (List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A*, const RuntimeMethod*))List_1_get_Capacity_m56718A2202E1BCBA0CDB1E01212A939E9E3D1D96_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::set_Capacity(System.Int32)
inline void List_1_set_Capacity_mC3FD70CD503957447E9C3F0504B2B962822383A9 (List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* __this, int32_t ___0_value, const RuntimeMethod* method)
{
	((  void (*) (List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A*, int32_t, const RuntimeMethod*))List_1_set_Capacity_mC3FD70CD503957447E9C3F0504B2B962822383A9_gshared)(__this, ___0_value, method);
}
// T System.Collections.Generic.List`1<UnityEngine.UIVertex>::get_Item(System.Int32)
inline UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67 (List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 (*) (List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A*, int32_t, const RuntimeMethod*))List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_gshared)(__this, ___0_index, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Add(T)
inline void List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline (List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* __this, UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A*, UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207, const RuntimeMethod*))List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_gshared_inline)(__this, ___0_item, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::set_Item(System.Int32,T)
inline void List_1_set_Item_m0C5B60C5566C63D5E3E979D8EF02D5DF8D92AB33 (List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* __this, int32_t ___0_index, UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 ___1_value, const RuntimeMethod* method)
{
	((  void (*) (List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A*, int32_t, UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207, const RuntimeMethod*))List_1_set_Item_m0C5B60C5566C63D5E3E979D8EF02D5DF8D92AB33_gshared)(__this, ___0_index, ___1_value, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::.ctor(System.Int32)
inline void List_1__ctor_mD013968D6DAB756EA34E138E00BEF8922909C1BE (List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* __this, int32_t ___0_capacity, const RuntimeMethod* method)
{
	((  void (*) (List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A*, int32_t, const RuntimeMethod*))List_1__ctor_mD013968D6DAB756EA34E138E00BEF8922909C1BE_gshared)(__this, ___0_capacity, method);
}
// System.Void UnityEngine.Vector4::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* __this, float ___0_x, float ___1_y, float ___2_z, float ___3_w, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Quaternion::op_Equality(UnityEngine.Quaternion,UnityEngine.Quaternion)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Quaternion_op_Equality_mE6F6B56FCED8478552BE02BBAF18C70B969217F9_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_lhs, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___1_rhs, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::Normalize()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2_Normalize_m56DABCAB5967DF37A6B96710477D3660D800C652_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color32::.ctor(System.Byte,System.Byte,System.Byte,System.Byte)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color32__ctor_mC9C6B443F0C7CA3F8B174158B2AF6F05E18EAC4E_inline (Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* __this, uint8_t ___0_r, uint8_t ___1_g, uint8_t ___2_b, uint8_t ___3_a, const RuntimeMethod* method) ;
// System.Void System.Array::Clear(System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB (RuntimeArray* ___0_array, int32_t ___1_index, int32_t ___2_length, const RuntimeMethod* method) ;
// System.Single UnityEngine.Quaternion::Dot(UnityEngine.Quaternion,UnityEngine.Quaternion)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Quaternion_Dot_mF9D3BE33940A47979DADA7E81650AEB356D5D12B_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_a, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___1_b, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Quaternion::IsEqualUsingDot(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Quaternion_IsEqualUsingDot_m9C672201C918C2D1E739F559DBE4406F95997CBD_inline (float ___0_dot, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector2::get_magnitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_get_magnitude_m5C59B4056420AEFDB291AD0914A3F675330A75CE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Division(UnityEngine.Vector2,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Division_m57A2DCD71E0CE7420851D705D1951F9238902AAB_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_a, float ___1_d, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline (const RuntimeMethod* method) ;
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
// System.Void NeumorphismUI.Gradient::ModifyMesh(NeumorphismUI.Neumorphism,UnityEngine.UI.VertexHelper)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gradient_ModifyMesh_mF0A795AE2ADFB6DC75011E78722B8AB49C286391 (Gradient_t5F9D3643DECAF5A456B4D2AF2EDE96FA267E1C73* __this, Neumorphism_tC90B32FB417E1EF43C0B8DC9F1DB2D1FFF806A5B* ___0_neu, VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___1_vh, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D V_0;
	memset((&V_0), 0, sizeof(V_0));
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	{
		// if (rectTransform == null)
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0 = __this->___rectTransform_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		// rectTransform = neu.GetComponent<RectTransform>();
		Neumorphism_tC90B32FB417E1EF43C0B8DC9F1DB2D1FFF806A5B* L_2 = ___0_neu;
		NullCheck(L_2);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_3;
		L_3 = Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4(L_2, Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4_RuntimeMethod_var);
		__this->___rectTransform_0 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rectTransform_0), (void*)L_3);
	}

IL_001a:
	{
		// var rect = rectTransform.rect;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_4 = __this->___rectTransform_0;
		NullCheck(L_4);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_5;
		L_5 = RectTransform_get_rect_mC82A60F8C3805ED9833508CCC233689641207488(L_4, NULL);
		V_0 = L_5;
		// if (rect.width > rect.height)
		float L_6;
		L_6 = Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9((&V_0), NULL);
		float L_7;
		L_7 = Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8((&V_0), NULL);
		if ((!(((float)L_6) > ((float)L_7))))
		{
			goto IL_0069;
		}
	}
	{
		// rect.y -= (rect.width - rect.height) * 0.5f;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_8 = (&V_0);
		float L_9;
		L_9 = Rect_get_y_mC733E8D49F3CE21B2A3D40A1B72D687F22C97F49(L_8, NULL);
		float L_10;
		L_10 = Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9((&V_0), NULL);
		float L_11;
		L_11 = Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8((&V_0), NULL);
		Rect_set_y_mDE91F4B98A6E8623EFB1250FF6526D5DB5855629(L_8, ((float)il2cpp_codegen_subtract(L_9, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_10, L_11)), (0.5f))))), NULL);
		// rect.height = rect.width;
		float L_12;
		L_12 = Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9((&V_0), NULL);
		Rect_set_height_mD00038E6E06637137A5626CA8CD421924005BF03((&V_0), L_12, NULL);
		goto IL_009a;
	}

IL_0069:
	{
		// rect.x -= (rect.height - rect.width) * 0.5f;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_13 = (&V_0);
		float L_14;
		L_14 = Rect_get_x_mB267B718E0D067F2BAE31BA477647FBF964916EB(L_13, NULL);
		float L_15;
		L_15 = Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8((&V_0), NULL);
		float L_16;
		L_16 = Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9((&V_0), NULL);
		Rect_set_x_mAB91AB71898A20762BC66FD0723C4C739C4C3406(L_13, ((float)il2cpp_codegen_subtract(L_14, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_15, L_16)), (0.5f))))), NULL);
		// rect.width = rect.height;
		float L_17;
		L_17 = Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8((&V_0), NULL);
		Rect_set_width_m93B6217CF3EFF89F9B0C81F34D7345DE90B93E5A((&V_0), L_17, NULL);
	}

IL_009a:
	{
		// var vert = default(UIVertex);
		il2cpp_codegen_initobj((&V_1), sizeof(UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207));
		// for (int i = 0; i < vh.currentVertCount; i++)
		V_2 = 0;
		goto IL_00d8;
	}

IL_00a6:
	{
		// vh.PopulateUIVertex(ref vert, i);
		VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* L_18 = ___1_vh;
		int32_t L_19 = V_2;
		NullCheck(L_18);
		VertexHelper_PopulateUIVertex_m48FF05C38D56529E18A360D629F4842BE5D050BE(L_18, (&V_1), L_19, NULL);
		// vert.uv1 = Rect.PointToNormalized(rect, vert.position);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_20 = V_0;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_21 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22 = L_21.___position_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_23;
		L_23 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_22, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_24;
		L_24 = Rect_PointToNormalized_m81F7991C1675BFA64E536722B7EEB4219BA1127A(L_20, L_23, NULL);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_25;
		L_25 = Vector4_op_Implicit_mB193CD8DA20DEB9E9F95CFEB5A2B1B9B3B7ECFEB_inline(L_24, NULL);
		(&V_1)->___uv1_5 = L_25;
		// vh.SetUIVertex(vert, i);
		VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* L_26 = ___1_vh;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_27 = V_1;
		int32_t L_28 = V_2;
		NullCheck(L_26);
		VertexHelper_SetUIVertex_m539A518867E7872E0893715AD372DC9A06334FD9(L_26, L_27, L_28, NULL);
		// for (int i = 0; i < vh.currentVertCount; i++)
		int32_t L_29 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_29, 1));
	}

IL_00d8:
	{
		// for (int i = 0; i < vh.currentVertCount; i++)
		int32_t L_30 = V_2;
		VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* L_31 = ___1_vh;
		NullCheck(L_31);
		int32_t L_32;
		L_32 = VertexHelper_get_currentVertCount_m45BFEBD6FCB7DF3BF9F76946D6002BDC58B173A4(L_31, NULL);
		if ((((int32_t)L_30) < ((int32_t)L_32)))
		{
			goto IL_00a6;
		}
	}
	{
		// }
		return;
	}
}
// System.Void NeumorphismUI.Gradient::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gradient__ctor_m3359E63A2CAD1089617CDD93F7769E4B962C9B81 (Gradient_t5F9D3643DECAF5A456B4D2AF2EDE96FA267E1C73* __this, const RuntimeMethod* method) 
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
// UnityEngine.Color NeumorphismUI.Neumorphism::get_lightColor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Neumorphism_get_lightColor_m1FE329E985B9DB69F525F6772A367CB3B319FFD5 (Neumorphism_tC90B32FB417E1EF43C0B8DC9F1DB2D1FFF806A5B* __this, const RuntimeMethod* method) 
{
	{
		// get => _lightColor;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = __this->____lightColor_6;
		return L_0;
	}
}
// System.Void NeumorphismUI.Neumorphism::set_lightColor(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Neumorphism_set_lightColor_m23C9C24E38DBE24655414BE5989A55FE2CE97024 (Neumorphism_tC90B32FB417E1EF43C0B8DC9F1DB2D1FFF806A5B* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_value, const RuntimeMethod* method) 
{
	{
		// set => _lightColor = value;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ___0_value;
		__this->____lightColor_6 = L_0;
		return;
	}
}
// UnityEngine.Color NeumorphismUI.Neumorphism::get_shadowColor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Neumorphism_get_shadowColor_m0C79702A0A24DA0B5197A92AEAB116A3FC32EEFA (Neumorphism_tC90B32FB417E1EF43C0B8DC9F1DB2D1FFF806A5B* __this, const RuntimeMethod* method) 
{
	{
		// get => _shadowColor;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = __this->____shadowColor_7;
		return L_0;
	}
}
// System.Void NeumorphismUI.Neumorphism::set_shadowColor(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Neumorphism_set_shadowColor_mF5BB7D11CB765EE495C6E35E3082DC5D151E6B76 (Neumorphism_tC90B32FB417E1EF43C0B8DC9F1DB2D1FFF806A5B* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_value, const RuntimeMethod* method) 
{
	{
		// set => _shadowColor = value;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ___0_value;
		__this->____shadowColor_7 = L_0;
		return;
	}
}
// System.Single NeumorphismUI.Neumorphism::get_pixelRange()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Neumorphism_get_pixelRange_m5B12F59E0269AAACE5C3E91C1D171C388745A87A (Neumorphism_tC90B32FB417E1EF43C0B8DC9F1DB2D1FFF806A5B* __this, const RuntimeMethod* method) 
{
	{
		// get => _pixelRange;
		float L_0 = __this->____pixelRange_8;
		return L_0;
	}
}
// System.Void NeumorphismUI.Neumorphism::set_pixelRange(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Neumorphism_set_pixelRange_m987CCC8E0E328AE5C2F1067E6EE7C7D0CDA3BFBA (Neumorphism_tC90B32FB417E1EF43C0B8DC9F1DB2D1FFF806A5B* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// set => _pixelRange = value;
		float L_0 = ___0_value;
		__this->____pixelRange_8 = L_0;
		return;
	}
}
// System.Single NeumorphismUI.Neumorphism::get_bevelSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Neumorphism_get_bevelSize_m131B30ECEF63D116FE11A0252CB88652735947FF (Neumorphism_tC90B32FB417E1EF43C0B8DC9F1DB2D1FFF806A5B* __this, const RuntimeMethod* method) 
{
	{
		// get => _bevelSize;
		float L_0 = __this->____bevelSize_9;
		return L_0;
	}
}
// System.Void NeumorphismUI.Neumorphism::set_bevelSize(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Neumorphism_set_bevelSize_m5EB6C18367D87FA51A85929A347D85B5E1069C91 (Neumorphism_tC90B32FB417E1EF43C0B8DC9F1DB2D1FFF806A5B* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// set => _bevelSize = value;
		float L_0 = ___0_value;
		__this->____bevelSize_9 = L_0;
		return;
	}
}
// System.Single NeumorphismUI.Neumorphism::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Neumorphism_get_height_mF3F71CA2ACF8D18A39EC4EB1C69502287CD7ACEE (Neumorphism_tC90B32FB417E1EF43C0B8DC9F1DB2D1FFF806A5B* __this, const RuntimeMethod* method) 
{
	{
		// get => _height;
		float L_0 = __this->____height_10;
		return L_0;
	}
}
// System.Void NeumorphismUI.Neumorphism::set_height(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Neumorphism_set_height_m26A7D86CAE2AE10FD17DCEC7421D7D716A98CA0C (Neumorphism_tC90B32FB417E1EF43C0B8DC9F1DB2D1FFF806A5B* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// set => _height = value;
		float L_0 = ___0_value;
		__this->____height_10 = L_0;
		return;
	}
}
// System.Single NeumorphismUI.Neumorphism::get_clickedHeight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Neumorphism_get_clickedHeight_m1708D101A03B6D0AA73A4B10BE5EE83434F88BA4 (Neumorphism_tC90B32FB417E1EF43C0B8DC9F1DB2D1FFF806A5B* __this, const RuntimeMethod* method) 
{
	{
		// get => _clickedHeight;
		float L_0 = __this->____clickedHeight_11;
		return L_0;
	}
}
// System.Void NeumorphismUI.Neumorphism::set_clickedHeight(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Neumorphism_set_clickedHeight_m1B13A1F8CAAB493E3D94F6B1D6CAAC3AA5FE216A (Neumorphism_tC90B32FB417E1EF43C0B8DC9F1DB2D1FFF806A5B* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// set => _clickedHeight = value;
		float L_0 = ___0_value;
		__this->____clickedHeight_11 = L_0;
		return;
	}
}
// System.Single NeumorphismUI.Neumorphism::get_mouseOverHeight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Neumorphism_get_mouseOverHeight_m9E6DBB79C55AF37B820E5C52FDE722328968FAAF (Neumorphism_tC90B32FB417E1EF43C0B8DC9F1DB2D1FFF806A5B* __this, const RuntimeMethod* method) 
{
	{
		// get => _mouseOverHeight;
		float L_0 = __this->____mouseOverHeight_12;
		return L_0;
	}
}
// System.Void NeumorphismUI.Neumorphism::set_mouseOverHeight(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Neumorphism_set_mouseOverHeight_m3C2D87228E8AEB1BA8B74E94A6F47639492A8A33 (Neumorphism_tC90B32FB417E1EF43C0B8DC9F1DB2D1FFF806A5B* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// set => _mouseOverHeight = value;
		float L_0 = ___0_value;
		__this->____mouseOverHeight_12 = L_0;
		return;
	}
}
// System.Boolean NeumorphismUI.Neumorphism::get_drawGradient()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Neumorphism_get_drawGradient_m459E1EE9A8F04EA211EA0C41C744B11FB048A7D1 (Neumorphism_tC90B32FB417E1EF43C0B8DC9F1DB2D1FFF806A5B* __this, const RuntimeMethod* method) 
{
	{
		// get => _drawGradient;
		bool L_0 = __this->____drawGradient_13;
		return L_0;
	}
}
// System.Void NeumorphismUI.Neumorphism::set_drawGradient(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Neumorphism_set_drawGradient_mFC8ACC140868FAD0375D1F5159A7A53CDA5FDBD3 (Neumorphism_tC90B32FB417E1EF43C0B8DC9F1DB2D1FFF806A5B* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// set => _drawGradient = value;
		bool L_0 = ___0_value;
		__this->____drawGradient_13 = L_0;
		return;
	}
}
// System.Boolean NeumorphismUI.Neumorphism::get_isTrigger()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Neumorphism_get_isTrigger_m63A3F191FA11442494FAE878DA426C7053E49987 (Neumorphism_tC90B32FB417E1EF43C0B8DC9F1DB2D1FFF806A5B* __this, const RuntimeMethod* method) 
{
	{
		// get => _isTrigger;
		bool L_0 = __this->____isTrigger_15;
		return L_0;
	}
}
// System.Void NeumorphismUI.Neumorphism::set_isTrigger(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Neumorphism_set_isTrigger_mD3F4008A5793D285DC68E1577453ECDCCC69DAE5 (Neumorphism_tC90B32FB417E1EF43C0B8DC9F1DB2D1FFF806A5B* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// set => _isTrigger = value;
		bool L_0 = ___0_value;
		__this->____isTrigger_15 = L_0;
		return;
	}
}
// System.Boolean NeumorphismUI.Neumorphism::get_drawShadow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Neumorphism_get_drawShadow_m7CF420145DCCF6E80EF4B1D57C8C39799669A066 (Neumorphism_tC90B32FB417E1EF43C0B8DC9F1DB2D1FFF806A5B* __this, const RuntimeMethod* method) 
{
	{
		// get => _drawShadow;
		bool L_0 = __this->____drawShadow_14;
		return L_0;
	}
}
// System.Void NeumorphismUI.Neumorphism::set_drawShadow(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Neumorphism_set_drawShadow_m5568BCAE4C7342D8140DFA25A1BB23E2CD9F3EA4 (Neumorphism_tC90B32FB417E1EF43C0B8DC9F1DB2D1FFF806A5B* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// set => _drawShadow = value;
		bool L_0 = ___0_value;
		__this->____drawShadow_14 = L_0;
		return;
	}
}
// System.Boolean NeumorphismUI.Neumorphism::get_disableOnMouseExit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Neumorphism_get_disableOnMouseExit_m4B83AF8311A524A09113CEDAE1BCF0753F178932 (Neumorphism_tC90B32FB417E1EF43C0B8DC9F1DB2D1FFF806A5B* __this, const RuntimeMethod* method) 
{
	{
		// get => _disableOnMouseExit;
		bool L_0 = __this->____disableOnMouseExit_16;
		return L_0;
	}
}
// System.Void NeumorphismUI.Neumorphism::set_disableOnMouseExit(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Neumorphism_set_disableOnMouseExit_m0C8A8E22D5A9E08445F9B49F6D9881F86B524C94 (Neumorphism_tC90B32FB417E1EF43C0B8DC9F1DB2D1FFF806A5B* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// set => _disableOnMouseExit = value;
		bool L_0 = ___0_value;
		__this->____disableOnMouseExit_16 = L_0;
		return;
	}
}
// System.Single NeumorphismUI.Neumorphism::get_shadowOffset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Neumorphism_get_shadowOffset_m6AD844789F91C821ACAB9C96052225CCFA07D6B2 (Neumorphism_tC90B32FB417E1EF43C0B8DC9F1DB2D1FFF806A5B* __this, const RuntimeMethod* method) 
{
	{
		// get => _shadowOffset;
		float L_0 = __this->____shadowOffset_17;
		return L_0;
	}
}
// System.Void NeumorphismUI.Neumorphism::set_shadowOffset(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Neumorphism_set_shadowOffset_m00D930DEC3D2307FD721EA12E4B0FDF5B04594D5 (Neumorphism_tC90B32FB417E1EF43C0B8DC9F1DB2D1FFF806A5B* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// set => _shadowOffset = value;
		float L_0 = ___0_value;
		__this->____shadowOffset_17 = L_0;
		return;
	}
}
// System.Void NeumorphismUI.Neumorphism::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Neumorphism_Start_m7FEBF75F568913A46B76AB631A26C3A2D272CF58 (Neumorphism_tC90B32FB417E1EF43C0B8DC9F1DB2D1FFF806A5B* __this, const RuntimeMethod* method) 
{
	{
		// base.Start();
		UIBehaviour_Start_mB12643ED6D859CD3682B4BF5B9CA7F72E8A72B45(__this, NULL);
		// if (disableOnMouseExit)
		bool L_0;
		L_0 = Neumorphism_get_disableOnMouseExit_m4B83AF8311A524A09113CEDAE1BCF0753F178932_inline(__this, NULL);
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		// enabled = false;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(__this, (bool)0, NULL);
	}

IL_0015:
	{
		// initialHeight = height;
		float L_1;
		L_1 = Neumorphism_get_height_mF3F71CA2ACF8D18A39EC4EB1C69502287CD7ACEE_inline(__this, NULL);
		__this->___initialHeight_19 = L_1;
		// }
		return;
	}
}
// System.Void NeumorphismUI.Neumorphism::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Neumorphism_OnEnable_mF679C875B4EFB19744C5D277EF9415C6576000F5 (Neumorphism_tC90B32FB417E1EF43C0B8DC9F1DB2D1FFF806A5B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Gradient_t5F9D3643DECAF5A456B4D2AF2EDE96FA267E1C73_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mD51918B4C9D70F23A9B04359FA8B9F7AF8065701_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m09CC01377B5214C1A3A1422D8F090D12DB5EA603_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Shadow_tE3A6D0896FAA6D9AB62E4A7C7B9FCCC3E2BEDA98_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.OnEnable();
		BaseMeshEffect_OnEnable_m74592558CD0F70DC35EEFCBC1E23F84493CD77F7(__this, NULL);
		// modifiers.Clear();
		List_1_t176C9FB9A509833C4226B9034D84C172927C63D6* L_0 = __this->___modifiers_28;
		NullCheck(L_0);
		List_1_Clear_m09CC01377B5214C1A3A1422D8F090D12DB5EA603_inline(L_0, List_1_Clear_m09CC01377B5214C1A3A1422D8F090D12DB5EA603_RuntimeMethod_var);
		// if (drawGradient)
		bool L_1;
		L_1 = Neumorphism_get_drawGradient_m459E1EE9A8F04EA211EA0C41C744B11FB048A7D1_inline(__this, NULL);
		if (!L_1)
		{
			goto IL_0029;
		}
	}
	{
		// modifiers.Add(new Gradient());
		List_1_t176C9FB9A509833C4226B9034D84C172927C63D6* L_2 = __this->___modifiers_28;
		Gradient_t5F9D3643DECAF5A456B4D2AF2EDE96FA267E1C73* L_3 = (Gradient_t5F9D3643DECAF5A456B4D2AF2EDE96FA267E1C73*)il2cpp_codegen_object_new(Gradient_t5F9D3643DECAF5A456B4D2AF2EDE96FA267E1C73_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Gradient__ctor_m3359E63A2CAD1089617CDD93F7769E4B962C9B81(L_3, NULL);
		NullCheck(L_2);
		List_1_Add_mD51918B4C9D70F23A9B04359FA8B9F7AF8065701_inline(L_2, L_3, List_1_Add_mD51918B4C9D70F23A9B04359FA8B9F7AF8065701_RuntimeMethod_var);
	}

IL_0029:
	{
		// if (drawShadow)
		bool L_4;
		L_4 = Neumorphism_get_drawShadow_m7CF420145DCCF6E80EF4B1D57C8C39799669A066_inline(__this, NULL);
		if (!L_4)
		{
			goto IL_0053;
		}
	}
	{
		// modifiers.Add(new Shadow(Shadow.Mode.Light));
		List_1_t176C9FB9A509833C4226B9034D84C172927C63D6* L_5 = __this->___modifiers_28;
		Shadow_tE3A6D0896FAA6D9AB62E4A7C7B9FCCC3E2BEDA98* L_6 = (Shadow_tE3A6D0896FAA6D9AB62E4A7C7B9FCCC3E2BEDA98*)il2cpp_codegen_object_new(Shadow_tE3A6D0896FAA6D9AB62E4A7C7B9FCCC3E2BEDA98_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		Shadow__ctor_m905A5E9440541CA143023806A3F928521FD32869(L_6, 0, NULL);
		NullCheck(L_5);
		List_1_Add_mD51918B4C9D70F23A9B04359FA8B9F7AF8065701_inline(L_5, L_6, List_1_Add_mD51918B4C9D70F23A9B04359FA8B9F7AF8065701_RuntimeMethod_var);
		// modifiers.Add(new Shadow(Shadow.Mode.Shadow));
		List_1_t176C9FB9A509833C4226B9034D84C172927C63D6* L_7 = __this->___modifiers_28;
		Shadow_tE3A6D0896FAA6D9AB62E4A7C7B9FCCC3E2BEDA98* L_8 = (Shadow_tE3A6D0896FAA6D9AB62E4A7C7B9FCCC3E2BEDA98*)il2cpp_codegen_object_new(Shadow_tE3A6D0896FAA6D9AB62E4A7C7B9FCCC3E2BEDA98_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		Shadow__ctor_m905A5E9440541CA143023806A3F928521FD32869(L_8, 1, NULL);
		NullCheck(L_7);
		List_1_Add_mD51918B4C9D70F23A9B04359FA8B9F7AF8065701_inline(L_7, L_8, List_1_Add_mD51918B4C9D70F23A9B04359FA8B9F7AF8065701_RuntimeMethod_var);
	}

IL_0053:
	{
		// }
		return;
	}
}
// System.Void NeumorphismUI.Neumorphism::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Neumorphism_OnDisable_m6354520FAFA70E3F964165E92C4E279632174575 (Neumorphism_tC90B32FB417E1EF43C0B8DC9F1DB2D1FFF806A5B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m09CC01377B5214C1A3A1422D8F090D12DB5EA603_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.OnDisable();
		BaseMeshEffect_OnDisable_mE005F7A15BFE7127D274717C3C482561481D3603(__this, NULL);
		// if (material != null)
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = __this->___material_26;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0026;
		}
	}
	{
		// if (Application.isPlaying)
		bool L_2;
		L_2 = Application_get_isPlaying_m25B0ABDFEF54F5370CD3F263A813540843D00F34(NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		// Destroy(material);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_3 = __this->___material_26;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_3, NULL);
	}

IL_0026:
	{
		// modifiers.Clear();
		List_1_t176C9FB9A509833C4226B9034D84C172927C63D6* L_4 = __this->___modifiers_28;
		NullCheck(L_4);
		List_1_Clear_m09CC01377B5214C1A3A1422D8F090D12DB5EA603_inline(L_4, List_1_Clear_m09CC01377B5214C1A3A1422D8F090D12DB5EA603_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void NeumorphismUI.Neumorphism::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Neumorphism_Update_m9135A679D69537FF2D731BE98582778983E27C2D (Neumorphism_tC90B32FB417E1EF43C0B8DC9F1DB2D1FFF806A5B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Neumorphism_tC90B32FB417E1EF43C0B8DC9F1DB2D1FFF806A5B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// CheckMaterial();
		Neumorphism_CheckMaterial_m88997610CC63AEB8F819040AF46DE086FF76E83A(__this, NULL);
		// material.SetColor(_LightColor, _lightColor);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = __this->___material_26;
		il2cpp_codegen_runtime_class_init_inline(Neumorphism_tC90B32FB417E1EF43C0B8DC9F1DB2D1FFF806A5B_il2cpp_TypeInfo_var);
		int32_t L_1 = ((Neumorphism_tC90B32FB417E1EF43C0B8DC9F1DB2D1FFF806A5B_StaticFields*)il2cpp_codegen_static_fields_for(Neumorphism_tC90B32FB417E1EF43C0B8DC9F1DB2D1FFF806A5B_il2cpp_TypeInfo_var))->____LightColor_20;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2 = __this->____lightColor_6;
		NullCheck(L_0);
		Material_SetColor_m573C88F2FB1B5A978C53A197B414F9E9C6AC5B9A(L_0, L_1, L_2, NULL);
		// material.SetColor(_ShadowColor, _shadowColor);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_3 = __this->___material_26;
		int32_t L_4 = ((Neumorphism_tC90B32FB417E1EF43C0B8DC9F1DB2D1FFF806A5B_StaticFields*)il2cpp_codegen_static_fields_for(Neumorphism_tC90B32FB417E1EF43C0B8DC9F1DB2D1FFF806A5B_il2cpp_TypeInfo_var))->____ShadowColor_21;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_5 = __this->____shadowColor_7;
		NullCheck(L_3);
		Material_SetColor_m573C88F2FB1B5A978C53A197B414F9E9C6AC5B9A(L_3, L_4, L_5, NULL);
		// material.SetFloat(_PixelRange, _pixelRange);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_6 = __this->___material_26;
		int32_t L_7 = ((Neumorphism_tC90B32FB417E1EF43C0B8DC9F1DB2D1FFF806A5B_StaticFields*)il2cpp_codegen_static_fields_for(Neumorphism_tC90B32FB417E1EF43C0B8DC9F1DB2D1FFF806A5B_il2cpp_TypeInfo_var))->____PixelRange_22;
		float L_8 = __this->____pixelRange_8;
		NullCheck(L_6);
		Material_SetFloat_m3ECFD92072347A8620254F014865984FA68211A8(L_6, L_7, L_8, NULL);
		// material.SetFloat(_BevelSize, _bevelSize);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_9 = __this->___material_26;
		int32_t L_10 = ((Neumorphism_tC90B32FB417E1EF43C0B8DC9F1DB2D1FFF806A5B_StaticFields*)il2cpp_codegen_static_fields_for(Neumorphism_tC90B32FB417E1EF43C0B8DC9F1DB2D1FFF806A5B_il2cpp_TypeInfo_var))->____BevelSize_23;
		float L_11 = __this->____bevelSize_9;
		NullCheck(L_9);
		Material_SetFloat_m3ECFD92072347A8620254F014865984FA68211A8(L_9, L_10, L_11, NULL);
		// material.SetFloat(_Height, _height);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_12 = __this->___material_26;
		int32_t L_13 = ((Neumorphism_tC90B32FB417E1EF43C0B8DC9F1DB2D1FFF806A5B_StaticFields*)il2cpp_codegen_static_fields_for(Neumorphism_tC90B32FB417E1EF43C0B8DC9F1DB2D1FFF806A5B_il2cpp_TypeInfo_var))->____Height_24;
		float L_14 = __this->____height_10;
		NullCheck(L_12);
		Material_SetFloat_m3ECFD92072347A8620254F014865984FA68211A8(L_12, L_13, L_14, NULL);
		// var rotation = transform.rotation;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_15;
		L_15 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_15);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_16;
		L_16 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_15, NULL);
		// if (rotation != this.rotation)
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_17 = __this->___rotation_27;
		bool L_18;
		L_18 = Quaternion_op_Inequality_m4EC1EF263D0E42432A301F85CB52028D2973F5DA_inline(L_16, L_17, NULL);
		if (!L_18)
		{
			goto IL_00c5;
		}
	}
	{
		// material.SetMatrix(_WorldRotation, Matrix4x4.Rotate(transform.rotation).inverse);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_19 = __this->___material_26;
		il2cpp_codegen_runtime_class_init_inline(Neumorphism_tC90B32FB417E1EF43C0B8DC9F1DB2D1FFF806A5B_il2cpp_TypeInfo_var);
		int32_t L_20 = ((Neumorphism_tC90B32FB417E1EF43C0B8DC9F1DB2D1FFF806A5B_StaticFields*)il2cpp_codegen_static_fields_for(Neumorphism_tC90B32FB417E1EF43C0B8DC9F1DB2D1FFF806A5B_il2cpp_TypeInfo_var))->____WorldRotation_25;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_21;
		L_21 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_21);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_22;
		L_22 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_21, NULL);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_23;
		L_23 = Matrix4x4_Rotate_m015442530DFF5651458BBFDFB3CBC9180FC09D9E(L_22, NULL);
		V_0 = L_23;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_24;
		L_24 = Matrix4x4_get_inverse_m4F4A881CD789281EA90EB68CFD39F36C8A81E6BD((&V_0), NULL);
		NullCheck(L_19);
		Material_SetMatrix_m668579C6402F88BFEF769D39E484BAD4CE6B0067(L_19, L_20, L_24, NULL);
		// this.rotation = transform.rotation;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_25;
		L_25 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_25);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_26;
		L_26 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_25, NULL);
		__this->___rotation_27 = L_26;
	}

IL_00c5:
	{
		// }
		return;
	}
}
// System.Void NeumorphismUI.Neumorphism::ModifyMesh(UnityEngine.UI.VertexHelper)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Neumorphism_ModifyMesh_mE8D43E97A950A09ADB4F1D0073566C765D1CF6D3 (Neumorphism_tC90B32FB417E1EF43C0B8DC9F1DB2D1FFF806A5B* __this, VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___0_vh, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m1D3CD44B17C48AC75893B3672DF016C7E1397F46_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m75BC2C93D4BEEE95E62441282AF8C76121632277_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mD66FEEE8054EA45D277AD08FD4A6F50A09E525C5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IModifier_t99AADE270B75BAA0625BC56017701342A1E5A7A3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mC6FB8E1D9906DEEA1D78865155FD88557E4E0A71_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_tBD743232B640C9DC1BA6F0AB5FC3F82D2236A214 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// foreach (var mod in modifiers)
		List_1_t176C9FB9A509833C4226B9034D84C172927C63D6* L_0 = __this->___modifiers_28;
		NullCheck(L_0);
		Enumerator_tBD743232B640C9DC1BA6F0AB5FC3F82D2236A214 L_1;
		L_1 = List_1_GetEnumerator_mC6FB8E1D9906DEEA1D78865155FD88557E4E0A71(L_0, List_1_GetEnumerator_mC6FB8E1D9906DEEA1D78865155FD88557E4E0A71_RuntimeMethod_var);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0027:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m1D3CD44B17C48AC75893B3672DF016C7E1397F46((&V_0), Enumerator_Dispose_m1D3CD44B17C48AC75893B3672DF016C7E1397F46_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_001c_1;
			}

IL_000e_1:
			{
				// foreach (var mod in modifiers)
				RuntimeObject* L_2;
				L_2 = Enumerator_get_Current_mD66FEEE8054EA45D277AD08FD4A6F50A09E525C5_inline((&V_0), Enumerator_get_Current_mD66FEEE8054EA45D277AD08FD4A6F50A09E525C5_RuntimeMethod_var);
				// mod.ModifyMesh(this, vh);
				VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* L_3 = ___0_vh;
				NullCheck(L_2);
				InterfaceActionInvoker2< Neumorphism_tC90B32FB417E1EF43C0B8DC9F1DB2D1FFF806A5B*, VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* >::Invoke(0 /* System.Void NeumorphismUI.IModifier::ModifyMesh(NeumorphismUI.Neumorphism,UnityEngine.UI.VertexHelper) */, IModifier_t99AADE270B75BAA0625BC56017701342A1E5A7A3_il2cpp_TypeInfo_var, L_2, __this, L_3);
			}

IL_001c_1:
			{
				// foreach (var mod in modifiers)
				bool L_4;
				L_4 = Enumerator_MoveNext_m75BC2C93D4BEEE95E62441282AF8C76121632277((&V_0), Enumerator_MoveNext_m75BC2C93D4BEEE95E62441282AF8C76121632277_RuntimeMethod_var);
				if (L_4)
				{
					goto IL_000e_1;
				}
			}
			{
				goto IL_0035;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0035:
	{
		// }
		return;
	}
}
// System.Void NeumorphismUI.Neumorphism::CheckMaterial()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Neumorphism_CheckMaterial_m88997610CC63AEB8F819040AF46DE086FF76E83A (Neumorphism_tC90B32FB417E1EF43C0B8DC9F1DB2D1FFF806A5B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Neumorphism_tC90B32FB417E1EF43C0B8DC9F1DB2D1FFF806A5B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2E01991A605DAB44BEA9117C3E9A9DA835B484C0);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (material == null)
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = __this->___material_26;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_003e;
		}
	}
	{
		// material = GetMaterial(_mode);
		int32_t L_2 = __this->____mode_5;
		il2cpp_codegen_runtime_class_init_inline(Neumorphism_tC90B32FB417E1EF43C0B8DC9F1DB2D1FFF806A5B_il2cpp_TypeInfo_var);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_3;
		L_3 = Neumorphism_GetMaterial_mB7EB8B4DD40925B6B629AA0D137E4CAAC43C5355(L_2, NULL);
		__this->___material_26 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___material_26), (void*)L_3);
		// if (_mode == Mode.Photo)
		int32_t L_4 = __this->____mode_5;
		if ((!(((uint32_t)L_4) == ((uint32_t)1))))
		{
			goto IL_003e;
		}
	}
	{
		// material.SetTexture("_SDFTex", _sdfTex);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_5 = __this->___material_26;
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_6 = __this->____sdfTex_18;
		NullCheck(L_5);
		Material_SetTexture_m06083C3F52EF02FFB1177901D9907314F280F9A5(L_5, _stringLiteral2E01991A605DAB44BEA9117C3E9A9DA835B484C0, L_6, NULL);
	}

IL_003e:
	{
		// graphic.material = material;
		Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* L_7;
		L_7 = BaseMeshEffect_get_graphic_mE8226BAC46FDB49681BEAD2DE8A4EE3CEC18FF04(__this, NULL);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_8 = __this->___material_26;
		NullCheck(L_7);
		VirtualActionInvoker1< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(33 /* System.Void UnityEngine.UI.Graphic::set_material(UnityEngine.Material) */, L_7, L_8);
		// }
		return;
	}
}
// UnityEngine.Material NeumorphismUI.Neumorphism::GetMaterial(NeumorphismUI.Neumorphism/Mode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* Neumorphism_GetMaterial_mB7EB8B4DD40925B6B629AA0D137E4CAAC43C5355 (int32_t ___0_mode, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral598F438BDA175211F854F608AA77ED777FA3F124);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEBB915EB54F51F65296854047A349F56D7C01DDC);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___0_mode;
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_1 = ___0_mode;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0019;
		}
	}
	{
		goto IL_0029;
	}

IL_0009:
	{
		// return new Material(Shader.Find("UI/Neumorphism"));
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_2;
		L_2 = Shader_Find_m183AA54F78320212DDEC811592F98456898A41C5(_stringLiteral598F438BDA175211F854F608AA77ED777FA3F124, NULL);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_3 = (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)il2cpp_codegen_object_new(Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Material__ctor_m7FDF47105D66D19591BE505A0C42B0F90D88C9BF(L_3, L_2, NULL);
		return L_3;
	}

IL_0019:
	{
		// return new Material(Shader.Find("UI/Neumorphism Photo"));
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_4;
		L_4 = Shader_Find_m183AA54F78320212DDEC811592F98456898A41C5(_stringLiteralEBB915EB54F51F65296854047A349F56D7C01DDC, NULL);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_5 = (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)il2cpp_codegen_object_new(Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		Material__ctor_m7FDF47105D66D19591BE505A0C42B0F90D88C9BF(L_5, L_4, NULL);
		return L_5;
	}

IL_0029:
	{
		// throw new System.Exception($"Not supported mode: {mode}");
		int32_t L_6 = ___0_mode;
		int32_t L_7 = L_6;
		RuntimeObject* L_8 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Mode_tF7135600BC309EC54CC20FCD0B34A9E440F7E416_il2cpp_TypeInfo_var)), &L_7);
		String_t* L_9;
		L_9 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6FFC84EDE94FD65BBA922152669C1C89D0592D22)), L_8, NULL);
		Exception_t* L_10 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_10);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_10, L_9, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Neumorphism_GetMaterial_mB7EB8B4DD40925B6B629AA0D137E4CAAC43C5355_RuntimeMethod_var)));
	}
}
// System.Void NeumorphismUI.Neumorphism::Click()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Neumorphism_Click_m3C85F97C6D53867C070E2269279B8D9149ED2ABF (Neumorphism_tC90B32FB417E1EF43C0B8DC9F1DB2D1FFF806A5B* __this, const RuntimeMethod* method) 
{
	{
		// if(_height == _clickedHeight)
		float L_0 = __this->____height_10;
		float L_1 = __this->____clickedHeight_11;
		if ((!(((float)L_0) == ((float)L_1))))
		{
			goto IL_001b;
		}
	}
	{
		// _height = initialHeight;
		float L_2 = __this->___initialHeight_19;
		__this->____height_10 = L_2;
		return;
	}

IL_001b:
	{
		// _height = _clickedHeight;
		float L_3 = __this->____clickedHeight_11;
		__this->____height_10 = L_3;
		// }
		return;
	}
}
// System.Void NeumorphismUI.Neumorphism::Collapse()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Neumorphism_Collapse_m2FAD1FBBECB1A05C44C1DB8DC38029BD8ABA0CD5 (Neumorphism_tC90B32FB417E1EF43C0B8DC9F1DB2D1FFF806A5B* __this, const RuntimeMethod* method) 
{
	{
		// _height = initialHeight;
		float L_0 = __this->___initialHeight_19;
		__this->____height_10 = L_0;
		// }
		return;
	}
}
// System.Void NeumorphismUI.Neumorphism::PointerEnter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Neumorphism_PointerEnter_m28C4CF36A9CC94BC876FA9F092B6C01DCBFBB252 (Neumorphism_tC90B32FB417E1EF43C0B8DC9F1DB2D1FFF806A5B* __this, const RuntimeMethod* method) 
{
	{
		// this.enabled = true;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(__this, (bool)1, NULL);
		// if (_height != _clickedHeight)
		float L_0 = __this->____height_10;
		float L_1 = __this->____clickedHeight_11;
		if ((((float)L_0) == ((float)L_1)))
		{
			goto IL_0021;
		}
	}
	{
		// _height = _mouseOverHeight;
		float L_2 = __this->____mouseOverHeight_12;
		__this->____height_10 = L_2;
	}

IL_0021:
	{
		// }
		return;
	}
}
// System.Void NeumorphismUI.Neumorphism::PointerExit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Neumorphism_PointerExit_mC9A60F7BDD7EA4CC227E7B9FA15E2DB4ACC0AA0A (Neumorphism_tC90B32FB417E1EF43C0B8DC9F1DB2D1FFF806A5B* __this, const RuntimeMethod* method) 
{
	{
		// if (_height != _clickedHeight || isTrigger)
		float L_0 = __this->____height_10;
		float L_1 = __this->____clickedHeight_11;
		if ((!(((float)L_0) == ((float)L_1))))
		{
			goto IL_0016;
		}
	}
	{
		bool L_2;
		L_2 = Neumorphism_get_isTrigger_m63A3F191FA11442494FAE878DA426C7053E49987_inline(__this, NULL);
		if (!L_2)
		{
			goto IL_0031;
		}
	}

IL_0016:
	{
		// _height = initialHeight;
		float L_3 = __this->___initialHeight_19;
		__this->____height_10 = L_3;
		// if (disableOnMouseExit)
		bool L_4;
		L_4 = Neumorphism_get_disableOnMouseExit_m4B83AF8311A524A09113CEDAE1BCF0753F178932_inline(__this, NULL);
		if (!L_4)
		{
			goto IL_0031;
		}
	}
	{
		// this.enabled = false;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(__this, (bool)0, NULL);
	}

IL_0031:
	{
		// }
		return;
	}
}
// System.Void NeumorphismUI.Neumorphism::PointerDown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Neumorphism_PointerDown_m114401A152A188F90637CA28013A74F200970E30 (Neumorphism_tC90B32FB417E1EF43C0B8DC9F1DB2D1FFF806A5B* __this, const RuntimeMethod* method) 
{
	{
		// if(isTrigger)
		bool L_0;
		L_0 = Neumorphism_get_isTrigger_m63A3F191FA11442494FAE878DA426C7053E49987_inline(__this, NULL);
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		// _height = _clickedHeight;
		float L_1 = __this->____clickedHeight_11;
		__this->____height_10 = L_1;
	}

IL_0014:
	{
		// }
		return;
	}
}
// System.Void NeumorphismUI.Neumorphism::PointerUp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Neumorphism_PointerUp_m31D7722C568849A29C27634D30AFE9FDBF16A012 (Neumorphism_tC90B32FB417E1EF43C0B8DC9F1DB2D1FFF806A5B* __this, const RuntimeMethod* method) 
{
	{
		// if (isTrigger)
		bool L_0;
		L_0 = Neumorphism_get_isTrigger_m63A3F191FA11442494FAE878DA426C7053E49987_inline(__this, NULL);
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		// _height = _mouseOverHeight;
		float L_1 = __this->____mouseOverHeight_12;
		__this->____height_10 = L_1;
	}

IL_0014:
	{
		// }
		return;
	}
}
// System.Void NeumorphismUI.Neumorphism::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Neumorphism__ctor_m29EC69E948F3CFDF5A1DECE71547A3346235C04F (Neumorphism_tC90B32FB417E1EF43C0B8DC9F1DB2D1FFF806A5B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mCA925C9FD45B8BD96CE01A8F37A4090A34F26684_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t176C9FB9A509833C4226B9034D84C172927C63D6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// [SerializeField] Color _lightColor = new Color(1f, 1f, 1f, 0.68f);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (1.0f), (1.0f), (1.0f), (0.680000007f), /*hidden argument*/NULL);
		__this->____lightColor_6 = L_0;
		// [SerializeField] Color _shadowColor = new Color(0.73f, 0.87f, 0.90f, 0.68f);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1;
		memset((&L_1), 0, sizeof(L_1));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_1), (0.730000019f), (0.870000005f), (0.899999976f), (0.680000007f), /*hidden argument*/NULL);
		__this->____shadowColor_7 = L_1;
		// [SerializeField, Range(0f, 24f)] float _pixelRange = 12f;
		__this->____pixelRange_8 = (12.0f);
		// [SerializeField, Range(0f, 1f)] float _bevelSize = 0.01f;
		__this->____bevelSize_9 = (0.00999999978f);
		// [SerializeField, Range(-10f, 10f)] float _height = 4f;
		__this->____height_10 = (4.0f);
		// [SerializeField, Range(-10f, 10f)] float _clickedHeight = 4f;
		__this->____clickedHeight_11 = (4.0f);
		// [SerializeField, Range(-10f, 10f)] float _mouseOverHeight = 4f;
		__this->____mouseOverHeight_12 = (4.0f);
		// [SerializeField] bool _drawGradient = true;
		__this->____drawGradient_13 = (bool)1;
		// [SerializeField] bool _drawShadow = true;
		__this->____drawShadow_14 = (bool)1;
		// [SerializeField, Range(0f, 20f)] float _shadowOffset = 8f;
		__this->____shadowOffset_17 = (8.0f);
		// private Quaternion rotation = Quaternion.identity;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2;
		L_2 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		__this->___rotation_27 = L_2;
		// private List<IModifier> modifiers = new List<IModifier>();
		List_1_t176C9FB9A509833C4226B9034D84C172927C63D6* L_3 = (List_1_t176C9FB9A509833C4226B9034D84C172927C63D6*)il2cpp_codegen_object_new(List_1_t176C9FB9A509833C4226B9034D84C172927C63D6_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		List_1__ctor_mCA925C9FD45B8BD96CE01A8F37A4090A34F26684(L_3, List_1__ctor_mCA925C9FD45B8BD96CE01A8F37A4090A34F26684_RuntimeMethod_var);
		__this->___modifiers_28 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___modifiers_28), (void*)L_3);
		BaseMeshEffect__ctor_mFFF23FD89B32150DAC512C556A1CCF563D062427(__this, NULL);
		return;
	}
}
// System.Void NeumorphismUI.Neumorphism::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Neumorphism__cctor_mB62AD1367195B5A4C70EE15A5E294BCDEC99A579 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Neumorphism_tC90B32FB417E1EF43C0B8DC9F1DB2D1FFF806A5B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral07F8CD0D44E027CC15F7D8BB6A818FF1D2CF8B1C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral586E75F03A11DA7D6523B9105701EAD18A60678D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral59537B2224DB19EF83E6E95B5EB0515A743FDBDE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6EA7BB6FBBA76D251A08C1732729FAABB5F61E72);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral86A04CD0F0A72EF7AFFA2F1D3B84FD4C0C8A846C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCBDAC60E0D057AFE661D0C6E451953C8268511BA);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static readonly int _LightColor = Shader.PropertyToID("_LightColor");
		int32_t L_0;
		L_0 = Shader_PropertyToID_mE98523D50F5656CAE89B30695C458253EB8956CA(_stringLiteral86A04CD0F0A72EF7AFFA2F1D3B84FD4C0C8A846C, NULL);
		((Neumorphism_tC90B32FB417E1EF43C0B8DC9F1DB2D1FFF806A5B_StaticFields*)il2cpp_codegen_static_fields_for(Neumorphism_tC90B32FB417E1EF43C0B8DC9F1DB2D1FFF806A5B_il2cpp_TypeInfo_var))->____LightColor_20 = L_0;
		// static readonly int _ShadowColor = Shader.PropertyToID("_ShadowColor");
		int32_t L_1;
		L_1 = Shader_PropertyToID_mE98523D50F5656CAE89B30695C458253EB8956CA(_stringLiteralCBDAC60E0D057AFE661D0C6E451953C8268511BA, NULL);
		((Neumorphism_tC90B32FB417E1EF43C0B8DC9F1DB2D1FFF806A5B_StaticFields*)il2cpp_codegen_static_fields_for(Neumorphism_tC90B32FB417E1EF43C0B8DC9F1DB2D1FFF806A5B_il2cpp_TypeInfo_var))->____ShadowColor_21 = L_1;
		// static readonly int _PixelRange = Shader.PropertyToID("_PixelRange");
		int32_t L_2;
		L_2 = Shader_PropertyToID_mE98523D50F5656CAE89B30695C458253EB8956CA(_stringLiteral6EA7BB6FBBA76D251A08C1732729FAABB5F61E72, NULL);
		((Neumorphism_tC90B32FB417E1EF43C0B8DC9F1DB2D1FFF806A5B_StaticFields*)il2cpp_codegen_static_fields_for(Neumorphism_tC90B32FB417E1EF43C0B8DC9F1DB2D1FFF806A5B_il2cpp_TypeInfo_var))->____PixelRange_22 = L_2;
		// static readonly int _BevelSize = Shader.PropertyToID("_BevelSize");
		int32_t L_3;
		L_3 = Shader_PropertyToID_mE98523D50F5656CAE89B30695C458253EB8956CA(_stringLiteral59537B2224DB19EF83E6E95B5EB0515A743FDBDE, NULL);
		((Neumorphism_tC90B32FB417E1EF43C0B8DC9F1DB2D1FFF806A5B_StaticFields*)il2cpp_codegen_static_fields_for(Neumorphism_tC90B32FB417E1EF43C0B8DC9F1DB2D1FFF806A5B_il2cpp_TypeInfo_var))->____BevelSize_23 = L_3;
		// static readonly int _Height = Shader.PropertyToID("_Height");
		int32_t L_4;
		L_4 = Shader_PropertyToID_mE98523D50F5656CAE89B30695C458253EB8956CA(_stringLiteral07F8CD0D44E027CC15F7D8BB6A818FF1D2CF8B1C, NULL);
		((Neumorphism_tC90B32FB417E1EF43C0B8DC9F1DB2D1FFF806A5B_StaticFields*)il2cpp_codegen_static_fields_for(Neumorphism_tC90B32FB417E1EF43C0B8DC9F1DB2D1FFF806A5B_il2cpp_TypeInfo_var))->____Height_24 = L_4;
		// static readonly int _WorldRotation = Shader.PropertyToID("_WorldRotation");
		int32_t L_5;
		L_5 = Shader_PropertyToID_mE98523D50F5656CAE89B30695C458253EB8956CA(_stringLiteral586E75F03A11DA7D6523B9105701EAD18A60678D, NULL);
		((Neumorphism_tC90B32FB417E1EF43C0B8DC9F1DB2D1FFF806A5B_StaticFields*)il2cpp_codegen_static_fields_for(Neumorphism_tC90B32FB417E1EF43C0B8DC9F1DB2D1FFF806A5B_il2cpp_TypeInfo_var))->____WorldRotation_25 = L_5;
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
// System.Void NeumorphismUI.Shadow::.ctor(NeumorphismUI.Shadow/Mode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Shadow__ctor_m905A5E9440541CA143023806A3F928521FD32869 (Shadow_tE3A6D0896FAA6D9AB62E4A7C7B9FCCC3E2BEDA98* __this, int32_t ___0_mode, const RuntimeMethod* method) 
{
	{
		// public Shadow(Mode mode)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// this.mode = mode;
		int32_t L_0 = ___0_mode;
		__this->___mode_1 = L_0;
		// }
		return;
	}
}
// System.Void NeumorphismUI.Shadow::ModifyMesh(NeumorphismUI.Neumorphism,UnityEngine.UI.VertexHelper)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Shadow_ModifyMesh_m33631A691F0170393017082B77B1BF2D79C5252B (Shadow_tE3A6D0896FAA6D9AB62E4A7C7B9FCCC3E2BEDA98* __this, Neumorphism_tC90B32FB417E1EF43C0B8DC9F1DB2D1FFF806A5B* ___0_neu, VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___1_vh, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m31CE3E5CA0B9ECA0E9B32A34D4ABE7E29B429448_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m289E50C53DE62E6913B2ED1A26A78DC51AD12F39_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Shadow_tE3A6D0896FAA6D9AB62E4A7C7B9FCCC3E2BEDA98_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* V_0 = NULL;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// var output = vertCache;
		il2cpp_codegen_runtime_class_init_inline(Shadow_tE3A6D0896FAA6D9AB62E4A7C7B9FCCC3E2BEDA98_il2cpp_TypeInfo_var);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_0 = ((Shadow_tE3A6D0896FAA6D9AB62E4A7C7B9FCCC3E2BEDA98_StaticFields*)il2cpp_codegen_static_fields_for(Shadow_tE3A6D0896FAA6D9AB62E4A7C7B9FCCC3E2BEDA98_il2cpp_TypeInfo_var))->___vertCache_0;
		V_0 = L_0;
		// vh.GetUIVertexStream(output);
		VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* L_1 = ___1_vh;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_2 = V_0;
		NullCheck(L_1);
		VertexHelper_GetUIVertexStream_m87D56EB5559CCCA150F68B1DD660FF4154CACBCE(L_1, L_2, NULL);
		// if (mode == Mode.Light)
		int32_t L_3 = __this->___mode_1;
		if (L_3)
		{
			goto IL_0041;
		}
	}
	{
		// color = neu.lightColor;
		Neumorphism_tC90B32FB417E1EF43C0B8DC9F1DB2D1FFF806A5B* L_4 = ___0_neu;
		NullCheck(L_4);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_5;
		L_5 = Neumorphism_get_lightColor_m1FE329E985B9DB69F525F6772A367CB3B319FFD5_inline(L_4, NULL);
		V_1 = L_5;
		// offset = new Vector2(-1, 1).normalized * neu.shadowOffset;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_6), (-1.0f), (1.0f), /*hidden argument*/NULL);
		V_3 = L_6;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7;
		L_7 = Vector2_get_normalized_mF6722883AEFB5027690A778DF8ACC20F0FA65297_inline((&V_3), NULL);
		Neumorphism_tC90B32FB417E1EF43C0B8DC9F1DB2D1FFF806A5B* L_8 = ___0_neu;
		NullCheck(L_8);
		float L_9;
		L_9 = Neumorphism_get_shadowOffset_m6AD844789F91C821ACAB9C96052225CCFA07D6B2_inline(L_8, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_10;
		L_10 = Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline(L_7, L_9, NULL);
		V_2 = L_10;
		goto IL_006b;
	}

IL_0041:
	{
		// color = neu.shadowColor;
		Neumorphism_tC90B32FB417E1EF43C0B8DC9F1DB2D1FFF806A5B* L_11 = ___0_neu;
		NullCheck(L_11);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_12;
		L_12 = Neumorphism_get_shadowColor_m0C79702A0A24DA0B5197A92AEAB116A3FC32EEFA_inline(L_11, NULL);
		V_1 = L_12;
		// offset = new Vector2(1, -1).normalized * neu.shadowOffset;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_13;
		memset((&L_13), 0, sizeof(L_13));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_13), (1.0f), (-1.0f), /*hidden argument*/NULL);
		V_3 = L_13;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_14;
		L_14 = Vector2_get_normalized_mF6722883AEFB5027690A778DF8ACC20F0FA65297_inline((&V_3), NULL);
		Neumorphism_tC90B32FB417E1EF43C0B8DC9F1DB2D1FFF806A5B* L_15 = ___0_neu;
		NullCheck(L_15);
		float L_16;
		L_16 = Neumorphism_get_shadowOffset_m6AD844789F91C821ACAB9C96052225CCFA07D6B2_inline(L_15, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_17;
		L_17 = Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline(L_14, L_16, NULL);
		V_2 = L_17;
	}

IL_006b:
	{
		// ApplyShadowZeroAlloc(output, color, 0, output.Count, offset.x, offset.y);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_18 = V_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_19 = V_1;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_20;
		L_20 = Color32_op_Implicit_m79AF5E0BDE9CE041CAC4D89CBFA66E71C6DD1B70_inline(L_19, NULL);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_21 = V_0;
		NullCheck(L_21);
		int32_t L_22;
		L_22 = List_1_get_Count_m289E50C53DE62E6913B2ED1A26A78DC51AD12F39_inline(L_21, List_1_get_Count_m289E50C53DE62E6913B2ED1A26A78DC51AD12F39_RuntimeMethod_var);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_23 = V_2;
		float L_24 = L_23.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_25 = V_2;
		float L_26 = L_25.___y_1;
		Shadow_ApplyShadowZeroAlloc_m326975CAD1CCB8E87FB5E14545317EF8828BAFB0(__this, L_18, L_20, 0, L_22, L_24, L_26, NULL);
		// vh.Clear();
		VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* L_27 = ___1_vh;
		NullCheck(L_27);
		VertexHelper_Clear_mB19E51AD5AF1C04CB2C6E6A272D032D651EC40F5(L_27, NULL);
		// vh.AddUIVertexTriangleStream(output);
		VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* L_28 = ___1_vh;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_29 = V_0;
		NullCheck(L_28);
		VertexHelper_AddUIVertexTriangleStream_m29A217271BF2B3D3D60B7CBDA4114C7BB40C2841(L_28, L_29, NULL);
		// output.Clear();
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_30 = V_0;
		NullCheck(L_30);
		List_1_Clear_m31CE3E5CA0B9ECA0E9B32A34D4ABE7E29B429448_inline(L_30, List_1_Clear_m31CE3E5CA0B9ECA0E9B32A34D4ABE7E29B429448_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void NeumorphismUI.Shadow::ApplyShadowZeroAlloc(System.Collections.Generic.List`1<UnityEngine.UIVertex>,UnityEngine.Color32,System.Int32,System.Int32,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Shadow_ApplyShadowZeroAlloc_m326975CAD1CCB8E87FB5E14545317EF8828BAFB0 (Shadow_tE3A6D0896FAA6D9AB62E4A7C7B9FCCC3E2BEDA98* __this, List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* ___0_verts, Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___1_color, int32_t ___2_start, int32_t ___3_end, float ___4_x, float ___5_y, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Capacity_m56718A2202E1BCBA0CDB1E01212A939E9E3D1D96_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m289E50C53DE62E6913B2ED1A26A78DC51AD12F39_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_set_Capacity_mC3FD70CD503957447E9C3F0504B2B962822383A9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_set_Item_m0C5B60C5566C63D5E3E979D8EF02D5DF8D92AB33_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// var neededCapacity = verts.Count + end - start;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_0 = ___0_verts;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_m289E50C53DE62E6913B2ED1A26A78DC51AD12F39_inline(L_0, List_1_get_Count_m289E50C53DE62E6913B2ED1A26A78DC51AD12F39_RuntimeMethod_var);
		int32_t L_2 = ___3_end;
		int32_t L_3 = ___2_start;
		V_1 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_1, L_2)), L_3));
		// if (verts.Capacity < neededCapacity)
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_4 = ___0_verts;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = List_1_get_Capacity_m56718A2202E1BCBA0CDB1E01212A939E9E3D1D96(L_4, List_1_get_Capacity_m56718A2202E1BCBA0CDB1E01212A939E9E3D1D96_RuntimeMethod_var);
		int32_t L_6 = V_1;
		if ((((int32_t)L_5) >= ((int32_t)L_6)))
		{
			goto IL_001c;
		}
	}
	{
		// verts.Capacity = neededCapacity;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_7 = ___0_verts;
		int32_t L_8 = V_1;
		NullCheck(L_7);
		List_1_set_Capacity_mC3FD70CD503957447E9C3F0504B2B962822383A9(L_7, L_8, List_1_set_Capacity_mC3FD70CD503957447E9C3F0504B2B962822383A9_RuntimeMethod_var);
	}

IL_001c:
	{
		// for (int i = start; i < end; ++i)
		int32_t L_9 = ___2_start;
		V_2 = L_9;
		goto IL_0067;
	}

IL_0020:
	{
		// vt = verts[i];
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_10 = ___0_verts;
		int32_t L_11 = V_2;
		NullCheck(L_10);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_12;
		L_12 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_10, L_11, List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		V_0 = L_12;
		// verts.Add(vt);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_13 = ___0_verts;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_14 = V_0;
		NullCheck(L_13);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_13, L_14, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		// Vector3 v = vt.position;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_15 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = L_15.___position_0;
		V_3 = L_16;
		// vt.position = v;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17 = V_3;
		(&V_0)->___position_0 = L_17;
		// vt.color = color;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_18 = ___1_color;
		(&V_0)->___color_3 = L_18;
		// vt.uv2 = new Vector2(x, y);
		float L_19 = ___4_x;
		float L_20 = ___5_y;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_21;
		memset((&L_21), 0, sizeof(L_21));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_21), L_19, L_20, /*hidden argument*/NULL);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_22;
		L_22 = Vector4_op_Implicit_mB193CD8DA20DEB9E9F95CFEB5A2B1B9B3B7ECFEB_inline(L_21, NULL);
		(&V_0)->___uv2_6 = L_22;
		// verts[i] = vt;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_23 = ___0_verts;
		int32_t L_24 = V_2;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_25 = V_0;
		NullCheck(L_23);
		List_1_set_Item_m0C5B60C5566C63D5E3E979D8EF02D5DF8D92AB33(L_23, L_24, L_25, List_1_set_Item_m0C5B60C5566C63D5E3E979D8EF02D5DF8D92AB33_RuntimeMethod_var);
		// for (int i = start; i < end; ++i)
		int32_t L_26 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_26, 1));
	}

IL_0067:
	{
		// for (int i = start; i < end; ++i)
		int32_t L_27 = V_2;
		int32_t L_28 = ___3_end;
		if ((((int32_t)L_27) < ((int32_t)L_28)))
		{
			goto IL_0020;
		}
	}
	{
		// }
		return;
	}
}
// System.Void NeumorphismUI.Shadow::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Shadow__cctor_m59EB3BE8C397285DC0A0371E6B3E5DEACA1019E8 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mD013968D6DAB756EA34E138E00BEF8922909C1BE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Shadow_tE3A6D0896FAA6D9AB62E4A7C7B9FCCC3E2BEDA98_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static readonly List<UIVertex> vertCache = new List<UIVertex>(4096);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_0 = (List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A*)il2cpp_codegen_object_new(List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mD013968D6DAB756EA34E138E00BEF8922909C1BE(L_0, ((int32_t)4096), List_1__ctor_mD013968D6DAB756EA34E138E00BEF8922909C1BE_RuntimeMethod_var);
		((Shadow_tE3A6D0896FAA6D9AB62E4A7C7B9FCCC3E2BEDA98_StaticFields*)il2cpp_codegen_static_fields_for(Shadow_tE3A6D0896FAA6D9AB62E4A7C7B9FCCC3E2BEDA98_il2cpp_TypeInfo_var))->___vertCache_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((Shadow_tE3A6D0896FAA6D9AB62E4A7C7B9FCCC3E2BEDA98_StaticFields*)il2cpp_codegen_static_fields_for(Shadow_tE3A6D0896FAA6D9AB62E4A7C7B9FCCC3E2BEDA98_il2cpp_TypeInfo_var))->___vertCache_0), (void*)L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_v, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_v;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___0_v;
		float L_3 = L_2.___y_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_4), L_1, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_0015;
	}

IL_0015:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Vector4_op_Implicit_mB193CD8DA20DEB9E9F95CFEB5A2B1B9B3B7ECFEB_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_v, const RuntimeMethod* method) 
{
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___0_v;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___0_v;
		float L_3 = L_2.___y_1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_4), L_1, L_3, (0.0f), (0.0f), /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_001f;
	}

IL_001f:
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Neumorphism_get_disableOnMouseExit_m4B83AF8311A524A09113CEDAE1BCF0753F178932_inline (Neumorphism_tC90B32FB417E1EF43C0B8DC9F1DB2D1FFF806A5B* __this, const RuntimeMethod* method) 
{
	{
		// get => _disableOnMouseExit;
		bool L_0 = __this->____disableOnMouseExit_16;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Neumorphism_get_height_mF3F71CA2ACF8D18A39EC4EB1C69502287CD7ACEE_inline (Neumorphism_tC90B32FB417E1EF43C0B8DC9F1DB2D1FFF806A5B* __this, const RuntimeMethod* method) 
{
	{
		// get => _height;
		float L_0 = __this->____height_10;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Neumorphism_get_drawGradient_m459E1EE9A8F04EA211EA0C41C744B11FB048A7D1_inline (Neumorphism_tC90B32FB417E1EF43C0B8DC9F1DB2D1FFF806A5B* __this, const RuntimeMethod* method) 
{
	{
		// get => _drawGradient;
		bool L_0 = __this->____drawGradient_13;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Neumorphism_get_drawShadow_m7CF420145DCCF6E80EF4B1D57C8C39799669A066_inline (Neumorphism_tC90B32FB417E1EF43C0B8DC9F1DB2D1FFF806A5B* __this, const RuntimeMethod* method) 
{
	{
		// get => _drawShadow;
		bool L_0 = __this->____drawShadow_14;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Quaternion_op_Inequality_m4EC1EF263D0E42432A301F85CB52028D2973F5DA_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_lhs, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___1_rhs, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ___0_lhs;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = ___1_rhs;
		bool L_2;
		L_2 = Quaternion_op_Equality_mE6F6B56FCED8478552BE02BBAF18C70B969217F9_inline(L_0, L_1, NULL);
		V_0 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		goto IL_000e;
	}

IL_000e:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Neumorphism_get_isTrigger_m63A3F191FA11442494FAE878DA426C7053E49987_inline (Neumorphism_tC90B32FB417E1EF43C0B8DC9F1DB2D1FFF806A5B* __this, const RuntimeMethod* method) 
{
	{
		// get => _isTrigger;
		bool L_0 = __this->____isTrigger_15;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___0_r, float ___1_g, float ___2_b, float ___3_a, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_r;
		__this->___r_0 = L_0;
		float L_1 = ___1_g;
		__this->___g_1 = L_1;
		float L_2 = ___2_b;
		__this->___b_2 = L_2;
		float L_3 = ___3_a;
		__this->___a_3 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ((Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields*)il2cpp_codegen_static_fields_for(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var))->___identityQuaternion_4;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Neumorphism_get_lightColor_m1FE329E985B9DB69F525F6772A367CB3B319FFD5_inline (Neumorphism_tC90B32FB417E1EF43C0B8DC9F1DB2D1FFF806A5B* __this, const RuntimeMethod* method) 
{
	{
		// get => _lightColor;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = __this->____lightColor_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___0_x, float ___1_y, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_x;
		__this->___x_0 = L_0;
		float L_1 = ___1_y;
		__this->___y_1 = L_1;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_normalized_mF6722883AEFB5027690A778DF8ACC20F0FA65297_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		float L_0 = __this->___x_0;
		float L_1 = __this->___y_1;
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&V_0), L_0, L_1, NULL);
		Vector2_Normalize_m56DABCAB5967DF37A6B96710477D3660D800C652_inline((&V_0), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = V_0;
		V_1 = L_2;
		goto IL_0020;
	}

IL_0020:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = V_1;
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Neumorphism_get_shadowOffset_m6AD844789F91C821ACAB9C96052225CCFA07D6B2_inline (Neumorphism_tC90B32FB417E1EF43C0B8DC9F1DB2D1FFF806A5B* __this, const RuntimeMethod* method) 
{
	{
		// get => _shadowOffset;
		float L_0 = __this->____shadowOffset_17;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_a, float ___1_d, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___0_a;
		float L_1 = L_0.___x_0;
		float L_2 = ___1_d;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = ___0_a;
		float L_4 = L_3.___y_1;
		float L_5 = ___1_d;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_6), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_0019;
	}

IL_0019:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Neumorphism_get_shadowColor_m0C79702A0A24DA0B5197A92AEAB116A3FC32EEFA_inline (Neumorphism_tC90B32FB417E1EF43C0B8DC9F1DB2D1FFF806A5B* __this, const RuntimeMethod* method) 
{
	{
		// get => _shadowColor;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = __this->____shadowColor_7;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B Color32_op_Implicit_m79AF5E0BDE9CE041CAC4D89CBFA66E71C6DD1B70_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_c, const RuntimeMethod* method) 
{
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ___0_c;
		float L_1 = L_0.___r_0;
		float L_2;
		L_2 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(L_1, NULL);
		float L_3;
		L_3 = bankers_roundf(((float)il2cpp_codegen_multiply(L_2, (255.0f))));
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4 = ___0_c;
		float L_5 = L_4.___g_1;
		float L_6;
		L_6 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(L_5, NULL);
		float L_7;
		L_7 = bankers_roundf(((float)il2cpp_codegen_multiply(L_6, (255.0f))));
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_8 = ___0_c;
		float L_9 = L_8.___b_2;
		float L_10;
		L_10 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(L_9, NULL);
		float L_11;
		L_11 = bankers_roundf(((float)il2cpp_codegen_multiply(L_10, (255.0f))));
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_12 = ___0_c;
		float L_13 = L_12.___a_3;
		float L_14;
		L_14 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(L_13, NULL);
		float L_15;
		L_15 = bankers_roundf(((float)il2cpp_codegen_multiply(L_14, (255.0f))));
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_16;
		memset((&L_16), 0, sizeof(L_16));
		Color32__ctor_mC9C6B443F0C7CA3F8B174158B2AF6F05E18EAC4E_inline((&L_16), (uint8_t)il2cpp_codegen_cast_floating_point<uint8_t, int32_t, float>(L_3), (uint8_t)il2cpp_codegen_cast_floating_point<uint8_t, int32_t, float>(L_7), (uint8_t)il2cpp_codegen_cast_floating_point<uint8_t, int32_t, float>(L_11), (uint8_t)il2cpp_codegen_cast_floating_point<uint8_t, int32_t, float>(L_15), /*hidden argument*/NULL);
		V_0 = L_16;
		goto IL_0065;
	}

IL_0065:
	{
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_17 = V_0;
		return L_17;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		if (!true)
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
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m289E50C53DE62E6913B2ED1A26A78DC51AD12F39_gshared_inline (List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m31CE3E5CA0B9ECA0E9B32A34D4ABE7E29B429448_gshared_inline (List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* __this, const RuntimeMethod* method) 
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
		UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* L_3 = (UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F*)__this->____items_1;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_gshared_inline (List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* __this, UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 ___0_item, const RuntimeMethod* method) 
{
	UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* L_1 = (UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* L_6 = V_0;
		int32_t L_7 = V_1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_8 = ___0_item;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207)L_8);
		return;
	}

IL_0034:
	{
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_9 = ___0_item;
		((  void (*) (List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A*, UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* __this, float ___0_x, float ___1_y, float ___2_z, float ___3_w, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_x;
		__this->___x_1 = L_0;
		float L_1 = ___1_y;
		__this->___y_2 = L_1;
		float L_2 = ___2_z;
		__this->___z_3 = L_2;
		float L_3 = ___3_w;
		__this->___w_4 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Quaternion_op_Equality_mE6F6B56FCED8478552BE02BBAF18C70B969217F9_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_lhs, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___1_rhs, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ___0_lhs;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = ___1_rhs;
		float L_2;
		L_2 = Quaternion_Dot_mF9D3BE33940A47979DADA7E81650AEB356D5D12B_inline(L_0, L_1, NULL);
		bool L_3;
		L_3 = Quaternion_IsEqualUsingDot_m9C672201C918C2D1E739F559DBE4406F95997CBD_inline(L_2, NULL);
		V_0 = L_3;
		goto IL_0010;
	}

IL_0010:
	{
		bool L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2_Normalize_m56DABCAB5967DF37A6B96710477D3660D800C652_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	bool V_1 = false;
	{
		float L_0;
		L_0 = Vector2_get_magnitude_m5C59B4056420AEFDB291AD0914A3F675330A75CE_inline(__this, NULL);
		V_0 = L_0;
		float L_1 = V_0;
		V_1 = (bool)((((float)L_1) > ((float)(9.99999975E-06f)))? 1 : 0);
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0028;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = (*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)__this);
		float L_4 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5;
		L_5 = Vector2_op_Division_m57A2DCD71E0CE7420851D705D1951F9238902AAB_inline(L_3, L_4, NULL);
		*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)__this = L_5;
		goto IL_0033;
	}

IL_0028:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		L_6 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline(NULL);
		*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)__this = L_6;
	}

IL_0033:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___0_value, const RuntimeMethod* method) 
{
	bool V_0 = false;
	float V_1 = 0.0f;
	bool V_2 = false;
	{
		float L_0 = ___0_value;
		V_0 = (bool)((((float)L_0) < ((float)(0.0f)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		V_1 = (0.0f);
		goto IL_002d;
	}

IL_0015:
	{
		float L_2 = ___0_value;
		V_2 = (bool)((((float)L_2) > ((float)(1.0f)))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		V_1 = (1.0f);
		goto IL_002d;
	}

IL_0029:
	{
		float L_4 = ___0_value;
		V_1 = L_4;
		goto IL_002d;
	}

IL_002d:
	{
		float L_5 = V_1;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color32__ctor_mC9C6B443F0C7CA3F8B174158B2AF6F05E18EAC4E_inline (Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* __this, uint8_t ___0_r, uint8_t ___1_g, uint8_t ___2_b, uint8_t ___3_a, const RuntimeMethod* method) 
{
	{
		__this->___rgba_0 = 0;
		uint8_t L_0 = ___0_r;
		__this->___r_1 = L_0;
		uint8_t L_1 = ___1_g;
		__this->___g_2 = L_1;
		uint8_t L_2 = ___2_b;
		__this->___b_3 = L_2;
		uint8_t L_3 = ___3_a;
		__this->___a_4 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Quaternion_Dot_mF9D3BE33940A47979DADA7E81650AEB356D5D12B_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_a, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___1_b, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ___0_a;
		float L_1 = L_0.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2 = ___1_b;
		float L_3 = L_2.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_4 = ___0_a;
		float L_5 = L_4.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = ___1_b;
		float L_7 = L_6.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_8 = ___0_a;
		float L_9 = L_8.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_10 = ___1_b;
		float L_11 = L_10.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_12 = ___0_a;
		float L_13 = L_12.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_14 = ___1_b;
		float L_15 = L_14.___w_3;
		V_0 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11)))), ((float)il2cpp_codegen_multiply(L_13, L_15))));
		goto IL_003b;
	}

IL_003b:
	{
		float L_16 = V_0;
		return L_16;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Quaternion_IsEqualUsingDot_m9C672201C918C2D1E739F559DBE4406F95997CBD_inline (float ___0_dot, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		float L_0 = ___0_dot;
		V_0 = (bool)((((float)L_0) > ((float)(0.999998987f)))? 1 : 0);
		goto IL_000c;
	}

IL_000c:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_get_magnitude_m5C59B4056420AEFDB291AD0914A3F675330A75CE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		float L_0 = __this->___x_0;
		float L_1 = __this->___x_0;
		float L_2 = __this->___y_1;
		float L_3 = __this->___y_1;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_4;
		L_4 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_0, L_1)), ((float)il2cpp_codegen_multiply(L_2, L_3))))));
		V_0 = ((float)L_4);
		goto IL_0026;
	}

IL_0026:
	{
		float L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Division_m57A2DCD71E0CE7420851D705D1951F9238902AAB_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_a, float ___1_d, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___0_a;
		float L_1 = L_0.___x_0;
		float L_2 = ___1_d;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = ___0_a;
		float L_4 = L_3.___y_1;
		float L_5 = ___1_d;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_6), ((float)(L_1/L_2)), ((float)(L_4/L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_0019;
	}

IL_0019:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ((Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields*)il2cpp_codegen_static_fields_for(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var))->___zeroVector_2;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = V_0;
		return L_1;
	}
}
