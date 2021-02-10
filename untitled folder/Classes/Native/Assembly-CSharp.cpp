#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1, typename T2>
struct VirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct GenericVirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1>
struct GenericVirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
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
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
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
template <typename T1, typename T2>
struct GenericInterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1>
struct GenericInterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// System.Action`2<System.Int32,System.Object>
struct Action_2_tDD9145FF6BEFC0F795374D3C54FE5138E8FDDC96;
// System.Action`2<System.Int32,System.String>
struct Action_2_t0359A210F354A728FCD80F275D8CF192D61A98C5;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// UnityEngine.AndroidJavaClass
struct AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4;
// UnityEngine.AndroidJavaObject
struct AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E;
// UnityEngine.AndroidJavaProxy
struct AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF;
// AntiAddictionSdk.OpenSource.AntiAddiction
struct AntiAddiction_t48341ECCB1DF1C64757849008C5BD7356AAEC7AD;
// AntiAddictionSdk.OpenSource.AntiAddictionCommonConfig
struct AntiAddictionCommonConfig_tFB2E9080FF6D416F4697BBF3B6CE8BCFECFF41CC;
// AntiAddictionSdk.OpenSource.AntiAddictionFunctionConfig
struct AntiAddictionFunctionConfig_t40E5C47E03007344B5CE5A8D78DE06A18336E8E1;
// AntiAddictionSdk.OpenSource.AntiAddictionHandler
struct AntiAddictionHandler_t54B50E46C25399A5B7B9EF212C1E14FC6AF927DD;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// TGCenterSdk.Api.Day1Retention
struct Day1Retention_t5C5C48267E7FA734CD696706DCF7C0DC29025BB3;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// TGCenterSdk.Common.DummyPrivacyPolicyHelperClient
struct DummyPrivacyPolicyHelperClient_tA760F3FD14C238520B359076F8F2943A0396C839;
// TGCenterSdk.Common.DummyTGCenterClient
struct DummyTGCenterClient_tA73AF5E21738B8A4677C62820E0A64DDF318CCE1;
// TGCenterSdk.Platforms.iOS.Externs
struct Externs_t3134EC717B9115532628B1F0D531CAC4F8834D1E;
// UnityEngine.GUIStyle
struct GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726;
// UnityEngine.GUIStyleState
struct GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9;
// UnityEngine.GlobalJavaObjectRef
struct GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// TGCenterSdk.Common.IPrivacyPolicyHelperClient
struct IPrivacyPolicyHelperClient_tDA8C8969D9B463BAEF2694E4E8D1EBDB10C932ED;
// TGCenterSdk.Common.ITGCenterClient
struct ITGCenterClient_t9D68A2BCB63E41CEBF76EF6BE18A406C70808A82;
// TGCenterSdk.Api.InitConfig
struct InitConfig_tB77587871EE04B53CB86593F9C7461FF0B143A47;
// MainBehaviour
struct MainBehaviour_tDE09AB0E3B7AB47BEC0D8229B68A94AA3FE0DEC6;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// TGCenterSdk.Api.PrivacyPolicyHelper
struct PrivacyPolicyHelper_t5983E6361B35F6389228D994C018B16993468EA3;
// TGCenterSdk.Platforms.Android.PrivacyPolicyHelperClient
struct PrivacyPolicyHelperClient_tB067E8E989D92DA23AE4C378F99922F83EEB8AD9;
// TGCenterSdk.Platforms.iOS.PrivacyPolicyHelperClient
struct PrivacyPolicyHelperClient_tCE377D6E958FD4996E71424C6705E0B1CA0327E0;
// UnityEngine.RectOffset
struct RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70;
// System.String
struct String_t;
// TGCenterSdk.Platforms.Android.TGCenterClient
struct TGCenterClient_t852F76F73B20352EC6238AC9B9F507DF071CF9B0;
// TGCenterSdk.Platforms.iOS.TGCenterClient
struct TGCenterClient_t3FFBC93E175D733E5FF8A30D13354AED72C0FCC9;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// AntiAddictionSdk.OpenSource.AntiAddiction/AntiAddictionDelegate
struct AntiAddictionDelegate_t849C34933F2BEB8A44306738A7F07A582DC9EDBF;
// AntiAddictionSdk.OpenSource.AntiAddictionCommonConfig/Builder
struct Builder_t23ABFB73E05835CA7F11F21092D5E8652D8D081E;
// AntiAddictionSdk.OpenSource.AntiAddictionFunctionConfig/Builder
struct Builder_tDB5BA46A3678FD0B0719F961C0D5350B88F23E53;
// MainBehaviour/PrivacyAgreeListener
struct PrivacyAgreeListener_t7E277E2FBF137E9ABC871EE180DD7FFC9FDE5DEA;
// TGCenterSdk.Api.PrivacyPolicyHelper/AgreeListener
struct AgreeListener_t9EB04F6176FDCEEA10D8613CB95DF4B627C12460;
// TGCenterSdk.Platforms.iOS.PrivacyPolicyHelperClient/TGCPrivacyAgreeCallback
struct TGCPrivacyAgreeCallback_t3C41917D9CA51071333995D60FE85E6B410437DA;
// TGCenterSdk.Platforms.iOS.PrivacyPolicyHelperClient/TGCPrivacyDisagreeCallback
struct TGCPrivacyDisagreeCallback_t87303D0856E11528F24B5D65FE37D8EB115CEB9E;

IL2CPP_EXTERN_C RuntimeClass* Action_2_t0359A210F354A728FCD80F275D8CF192D61A98C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AgreeListener_t9EB04F6176FDCEEA10D8613CB95DF4B627C12460_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AntiAddictionCommonConfig_tFB2E9080FF6D416F4697BBF3B6CE8BCFECFF41CC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AntiAddictionDelegate_t849C34933F2BEB8A44306738A7F07A582DC9EDBF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AntiAddictionFunctionConfig_t40E5C47E03007344B5CE5A8D78DE06A18336E8E1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AntiAddiction_t48341ECCB1DF1C64757849008C5BD7356AAEC7AD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Builder_t23ABFB73E05835CA7F11F21092D5E8652D8D081E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Builder_tDB5BA46A3678FD0B0719F961C0D5350B88F23E53_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Day1Retention_t5C5C48267E7FA734CD696706DCF7C0DC29025BB3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DummyPrivacyPolicyHelperClient_tA760F3FD14C238520B359076F8F2943A0396C839_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DummyTGCenterClient_tA73AF5E21738B8A4677C62820E0A64DDF318CCE1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GUI_tBCBBE29117D8093644C6E72B1CE3FB65C2CDCCC1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IPrivacyPolicyHelperClient_tDA8C8969D9B463BAEF2694E4E8D1EBDB10C932ED_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ITGCenterClient_t9D68A2BCB63E41CEBF76EF6BE18A406C70808A82_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InitConfig_tB77587871EE04B53CB86593F9C7461FF0B143A47_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PrivacyAgreeListener_t7E277E2FBF137E9ABC871EE180DD7FFC9FDE5DEA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PrivacyPolicyHelperClient_tB067E8E989D92DA23AE4C378F99922F83EEB8AD9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PrivacyPolicyHelperClient_tCE377D6E958FD4996E71424C6705E0B1CA0327E0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PrivacyPolicyHelper_t5983E6361B35F6389228D994C018B16993468EA3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TGCPrivacyAgreeCallback_t3C41917D9CA51071333995D60FE85E6B410437DA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TGCPrivacyDisagreeCallback_t87303D0856E11528F24B5D65FE37D8EB115CEB9E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TGCenterClient_t3FFBC93E175D733E5FF8A30D13354AED72C0FCC9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TGCenterClient_t852F76F73B20352EC6238AC9B9F507DF071CF9B0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TGCenter_t7A01AA650A3F96EAE0E6787DB2804C51C1FBA0B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0271545B7AD2BC9BAAE4A02D8D7F5883CE4C09E1;
IL2CPP_EXTERN_C String_t* _stringLiteral06F6DBCB7FFEE255438B4AC7A5C1DEE040406FBA;
IL2CPP_EXTERN_C String_t* _stringLiteral0857B67E5F628D79E605E4FA501E38EB16E3D71F;
IL2CPP_EXTERN_C String_t* _stringLiteral15225EE3C2EE375CFF1A8EBFC1A0B946EF344256;
IL2CPP_EXTERN_C String_t* _stringLiteral1A5E706D6D83A6D9E3357CFF9C00B8924AAECD36;
IL2CPP_EXTERN_C String_t* _stringLiteral1C7A9E8795DAC93A625C23D6E9F2BC7332ABF459;
IL2CPP_EXTERN_C String_t* _stringLiteral1DCBAE11305777652139FDD4BF5B5EABF8971C3D;
IL2CPP_EXTERN_C String_t* _stringLiteral223AA22FFE5FAE4E4018072DCB504D8CF35BE556;
IL2CPP_EXTERN_C String_t* _stringLiteral2A8BD72A3B5FB3F82BB10212457E738180ED3280;
IL2CPP_EXTERN_C String_t* _stringLiteral2AE89394F035769900C129F8FF2AEEABF7DB5279;
IL2CPP_EXTERN_C String_t* _stringLiteral2B3AD6333F669606E87648FD08F4CF7B98B051B5;
IL2CPP_EXTERN_C String_t* _stringLiteral2C5C443ACD4E5218DF3414260F13B50A075B64A3;
IL2CPP_EXTERN_C String_t* _stringLiteral2C7B72CE9D068C1C4D2AB52B56544F6D67000B06;
IL2CPP_EXTERN_C String_t* _stringLiteral2FDB8D3DB023FD43E37DA2989CC2E44CB7906081;
IL2CPP_EXTERN_C String_t* _stringLiteral3F7A24479663E2E56875B947E5EB43CEC6CFC05F;
IL2CPP_EXTERN_C String_t* _stringLiteral44F1E7DB2E8AAD233857868896DFEFE5A63EECEF;
IL2CPP_EXTERN_C String_t* _stringLiteral4D613657609485AE586A3379BA0E3FC13C1E1078;
IL2CPP_EXTERN_C String_t* _stringLiteral5472B9531A1EFF24ABE63A5D7A0C524FF663B73E;
IL2CPP_EXTERN_C String_t* _stringLiteral547EFE5098B59C6599CD6DB24B615A9C93F5E2BD;
IL2CPP_EXTERN_C String_t* _stringLiteral591717969A5E5E3B077255142EBD573FD6015D85;
IL2CPP_EXTERN_C String_t* _stringLiteral610DFD70D9FC01597BB1E92978CC83C8C2DB91DB;
IL2CPP_EXTERN_C String_t* _stringLiteral69F09D528E30FFC387BF58F04494AE6FC719D2FC;
IL2CPP_EXTERN_C String_t* _stringLiteral78A60C68335BFADC659417D949DEF46DDCF71CC2;
IL2CPP_EXTERN_C String_t* _stringLiteral78BB85A2C5FD23C3F3375CE877742B653DB9DE8F;
IL2CPP_EXTERN_C String_t* _stringLiteral7A43163FC05AE385BDE127586061CB41C6FAB23C;
IL2CPP_EXTERN_C String_t* _stringLiteral7DAB5E39E639D0E926060919F4B35D10B371A437;
IL2CPP_EXTERN_C String_t* _stringLiteral7FDD57A554F4937B1372DCDFBB149567C0704967;
IL2CPP_EXTERN_C String_t* _stringLiteral80BFDED53A798895F66F7586BB93FB843218DB76;
IL2CPP_EXTERN_C String_t* _stringLiteral816649F10AD961C87CC9969F931E6AE96A0CA44D;
IL2CPP_EXTERN_C String_t* _stringLiteral8243A16D425F93AF62CAAB2BFAE01A2D6246A5FE;
IL2CPP_EXTERN_C String_t* _stringLiteral86A22D3A576D7C99132992E5DD9D118173CB4078;
IL2CPP_EXTERN_C String_t* _stringLiteral879D6723690680B427E42F00420202B9EF4B9344;
IL2CPP_EXTERN_C String_t* _stringLiteral8BE379FCCAE7759F182D2E0FDD1565B9F41370C9;
IL2CPP_EXTERN_C String_t* _stringLiteral9021A01F9AB7B2ABA4448CC47E10E576A20A6785;
IL2CPP_EXTERN_C String_t* _stringLiteral94EFC49063ABEE85D505619CB2A5FCEFDF878171;
IL2CPP_EXTERN_C String_t* _stringLiteral9B9DBDE000089729E9EBE7911DC8B650A3DF2C1D;
IL2CPP_EXTERN_C String_t* _stringLiteral9D090A003B1B6B986A9DE54BBFBA6CDFB826B595;
IL2CPP_EXTERN_C String_t* _stringLiteralA05D53E62CD2603969B6E367A9BA4C4364F7215B;
IL2CPP_EXTERN_C String_t* _stringLiteralA3D208B8D59BE45DA847378972F5873C295095CA;
IL2CPP_EXTERN_C String_t* _stringLiteralA733C7FC19A8317471D21AD091D1A9A6F973A728;
IL2CPP_EXTERN_C String_t* _stringLiteralAE5A6C08C8A1AE6A9CE90934B6B88A5F40F0B186;
IL2CPP_EXTERN_C String_t* _stringLiteralBAB1AB454E7DBE6DCCF432CE9B800E808EEA9D9E;
IL2CPP_EXTERN_C String_t* _stringLiteralBACA6ED684147F8B0664B128B7F454E0771447DE;
IL2CPP_EXTERN_C String_t* _stringLiteralC2463F45597998A094727FD126E852DC07FBB7DF;
IL2CPP_EXTERN_C String_t* _stringLiteralC8C1F8993C105E3086D93D9BFCC205A34765F689;
IL2CPP_EXTERN_C String_t* _stringLiteralCBC9687C3B3CF86630538F360E45F87AE0B9FA62;
IL2CPP_EXTERN_C String_t* _stringLiteralCCAC5B1E01EB4A4D610273A7926412C9B4188036;
IL2CPP_EXTERN_C String_t* _stringLiteralCFD98E61D945837836DFBB54F47FFA7AA58CDD3D;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralDC71B380AFF23A38F6029B32B61C6943CB960350;
IL2CPP_EXTERN_C String_t* _stringLiteralDD83E4D7E4A366812BEFCF32EC0A645CCBD99851;
IL2CPP_EXTERN_C String_t* _stringLiteralE0B0304A54A45DD080A2845E27970CCBC53E2DDD;
IL2CPP_EXTERN_C String_t* _stringLiteralF2DCEBDC0E489573EF91725019BDC803EC347578;
IL2CPP_EXTERN_C String_t* _stringLiteralF89E2B8AEFEFD95D439A48449E4C25ACB8455C5B;
IL2CPP_EXTERN_C String_t* _stringLiteralFB4AE4F77150C3A8E8E4F8B23E734E0C7277B7D9;
IL2CPP_EXTERN_C String_t* _stringLiteralFB6988E1177DFD343CF12618FF137D8102C66781;
IL2CPP_EXTERN_C const RuntimeMethod* Action_2_Invoke_mA02088CCFAC06F127C125C0F51ADD67B9A2242ED_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_2__ctor_m3BA2B0E7AD3290E3BFECFA10EEA81D930348CA2E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_CallStatic_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mAD48C38D66AB67D0F0274D195F4A99CB7AB589F2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_CallStatic_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m08A8ECF220D35069EF5A4A50C2F38E925F0852FB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_Call_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC5ED59BBD9C24EFFD98D8C3819C7E15DFE08F412_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_GetStatic_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC84C97A7EC20ED712D21107C9FA32E0785021153_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AntiAddiction_antiAddictionCallback_m05EAAD3FF7819800167E07C38AE776BBBFBCBE9E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MainBehaviour_onAntiAddictionHandler_mDE25AADC0063DAB13BB66AD0155CF11A18E374E5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PrivacyPolicyHelperClient_PrivacyAgreeCallback_m24FA05F07A894D3E37B20E593D553B3A7158FCCF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PrivacyPolicyHelperClient_PrivacyDisagreeCallback_m4DFCB29D58AFF2A83D733119B94207160EA984C9_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_com;
struct GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_pinvoke;
struct RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70_marshaled_com;

struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_tFDCAFCBB4B3431CFF2DC4D3E03FBFDF54EFF7E9A 
{
public:

public:
};


// System.Object


// System.EmptyArray`1<System.Object>
struct  EmptyArray_1_tBF73225DFA890366D579424FE8F40073BF9FBAD4  : public RuntimeObject
{
public:

public:
};

struct EmptyArray_1_tBF73225DFA890366D579424FE8F40073BF9FBAD4_StaticFields
{
public:
	// T[] System.EmptyArray`1::Value
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___Value_0;

public:
	inline static int32_t get_offset_of_Value_0() { return static_cast<int32_t>(offsetof(EmptyArray_1_tBF73225DFA890366D579424FE8F40073BF9FBAD4_StaticFields, ___Value_0)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_Value_0() const { return ___Value_0; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_Value_0() { return &___Value_0; }
	inline void set_Value_0(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___Value_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Value_0), (void*)value);
	}
};


// UnityEngine.AndroidJavaObject
struct  AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E  : public RuntimeObject
{
public:
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaObject::m_jobject
	GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 * ___m_jobject_1;
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaObject::m_jclass
	GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 * ___m_jclass_2;

public:
	inline static int32_t get_offset_of_m_jobject_1() { return static_cast<int32_t>(offsetof(AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E, ___m_jobject_1)); }
	inline GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 * get_m_jobject_1() const { return ___m_jobject_1; }
	inline GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 ** get_address_of_m_jobject_1() { return &___m_jobject_1; }
	inline void set_m_jobject_1(GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 * value)
	{
		___m_jobject_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_jobject_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_jclass_2() { return static_cast<int32_t>(offsetof(AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E, ___m_jclass_2)); }
	inline GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 * get_m_jclass_2() const { return ___m_jclass_2; }
	inline GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 ** get_address_of_m_jclass_2() { return &___m_jclass_2; }
	inline void set_m_jclass_2(GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 * value)
	{
		___m_jclass_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_jclass_2), (void*)value);
	}
};

struct AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_StaticFields
{
public:
	// System.Boolean UnityEngine.AndroidJavaObject::enableDebugPrints
	bool ___enableDebugPrints_0;

public:
	inline static int32_t get_offset_of_enableDebugPrints_0() { return static_cast<int32_t>(offsetof(AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_StaticFields, ___enableDebugPrints_0)); }
	inline bool get_enableDebugPrints_0() const { return ___enableDebugPrints_0; }
	inline bool* get_address_of_enableDebugPrints_0() { return &___enableDebugPrints_0; }
	inline void set_enableDebugPrints_0(bool value)
	{
		___enableDebugPrints_0 = value;
	}
};


// AntiAddictionSdk.OpenSource.AntiAddictionCommonConfig
struct  AntiAddictionCommonConfig_tFB2E9080FF6D416F4697BBF3B6CE8BCFECFF41CC  : public RuntimeObject
{
public:
	// System.Int32 AntiAddictionSdk.OpenSource.AntiAddictionCommonConfig::<gusterTime>k__BackingField
	int32_t ___U3CgusterTimeU3Ek__BackingField_0;
	// System.Int32 AntiAddictionSdk.OpenSource.AntiAddictionCommonConfig::<nightStrictStart>k__BackingField
	int32_t ___U3CnightStrictStartU3Ek__BackingField_1;
	// System.Int32 AntiAddictionSdk.OpenSource.AntiAddictionCommonConfig::<nightStrictEnd>k__BackingField
	int32_t ___U3CnightStrictEndU3Ek__BackingField_2;
	// System.Int32 AntiAddictionSdk.OpenSource.AntiAddictionCommonConfig::<childCommonTime>k__BackingField
	int32_t ___U3CchildCommonTimeU3Ek__BackingField_3;
	// System.Int32 AntiAddictionSdk.OpenSource.AntiAddictionCommonConfig::<childHolidayTime>k__BackingField
	int32_t ___U3CchildHolidayTimeU3Ek__BackingField_4;
	// System.Int32 AntiAddictionSdk.OpenSource.AntiAddictionCommonConfig::<teenPayLimit>k__BackingField
	int32_t ___U3CteenPayLimitU3Ek__BackingField_5;
	// System.Int32 AntiAddictionSdk.OpenSource.AntiAddictionCommonConfig::<teenMonthPayLimit>k__BackingField
	int32_t ___U3CteenMonthPayLimitU3Ek__BackingField_6;
	// System.Int32 AntiAddictionSdk.OpenSource.AntiAddictionCommonConfig::<youngPayLimit>k__BackingField
	int32_t ___U3CyoungPayLimitU3Ek__BackingField_7;
	// System.Int32 AntiAddictionSdk.OpenSource.AntiAddictionCommonConfig::<youngMonthPayLimit>k__BackingField
	int32_t ___U3CyoungMonthPayLimitU3Ek__BackingField_8;

public:
	inline static int32_t get_offset_of_U3CgusterTimeU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(AntiAddictionCommonConfig_tFB2E9080FF6D416F4697BBF3B6CE8BCFECFF41CC, ___U3CgusterTimeU3Ek__BackingField_0)); }
	inline int32_t get_U3CgusterTimeU3Ek__BackingField_0() const { return ___U3CgusterTimeU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CgusterTimeU3Ek__BackingField_0() { return &___U3CgusterTimeU3Ek__BackingField_0; }
	inline void set_U3CgusterTimeU3Ek__BackingField_0(int32_t value)
	{
		___U3CgusterTimeU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CnightStrictStartU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(AntiAddictionCommonConfig_tFB2E9080FF6D416F4697BBF3B6CE8BCFECFF41CC, ___U3CnightStrictStartU3Ek__BackingField_1)); }
	inline int32_t get_U3CnightStrictStartU3Ek__BackingField_1() const { return ___U3CnightStrictStartU3Ek__BackingField_1; }
	inline int32_t* get_address_of_U3CnightStrictStartU3Ek__BackingField_1() { return &___U3CnightStrictStartU3Ek__BackingField_1; }
	inline void set_U3CnightStrictStartU3Ek__BackingField_1(int32_t value)
	{
		___U3CnightStrictStartU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CnightStrictEndU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(AntiAddictionCommonConfig_tFB2E9080FF6D416F4697BBF3B6CE8BCFECFF41CC, ___U3CnightStrictEndU3Ek__BackingField_2)); }
	inline int32_t get_U3CnightStrictEndU3Ek__BackingField_2() const { return ___U3CnightStrictEndU3Ek__BackingField_2; }
	inline int32_t* get_address_of_U3CnightStrictEndU3Ek__BackingField_2() { return &___U3CnightStrictEndU3Ek__BackingField_2; }
	inline void set_U3CnightStrictEndU3Ek__BackingField_2(int32_t value)
	{
		___U3CnightStrictEndU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CchildCommonTimeU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(AntiAddictionCommonConfig_tFB2E9080FF6D416F4697BBF3B6CE8BCFECFF41CC, ___U3CchildCommonTimeU3Ek__BackingField_3)); }
	inline int32_t get_U3CchildCommonTimeU3Ek__BackingField_3() const { return ___U3CchildCommonTimeU3Ek__BackingField_3; }
	inline int32_t* get_address_of_U3CchildCommonTimeU3Ek__BackingField_3() { return &___U3CchildCommonTimeU3Ek__BackingField_3; }
	inline void set_U3CchildCommonTimeU3Ek__BackingField_3(int32_t value)
	{
		___U3CchildCommonTimeU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CchildHolidayTimeU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(AntiAddictionCommonConfig_tFB2E9080FF6D416F4697BBF3B6CE8BCFECFF41CC, ___U3CchildHolidayTimeU3Ek__BackingField_4)); }
	inline int32_t get_U3CchildHolidayTimeU3Ek__BackingField_4() const { return ___U3CchildHolidayTimeU3Ek__BackingField_4; }
	inline int32_t* get_address_of_U3CchildHolidayTimeU3Ek__BackingField_4() { return &___U3CchildHolidayTimeU3Ek__BackingField_4; }
	inline void set_U3CchildHolidayTimeU3Ek__BackingField_4(int32_t value)
	{
		___U3CchildHolidayTimeU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CteenPayLimitU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(AntiAddictionCommonConfig_tFB2E9080FF6D416F4697BBF3B6CE8BCFECFF41CC, ___U3CteenPayLimitU3Ek__BackingField_5)); }
	inline int32_t get_U3CteenPayLimitU3Ek__BackingField_5() const { return ___U3CteenPayLimitU3Ek__BackingField_5; }
	inline int32_t* get_address_of_U3CteenPayLimitU3Ek__BackingField_5() { return &___U3CteenPayLimitU3Ek__BackingField_5; }
	inline void set_U3CteenPayLimitU3Ek__BackingField_5(int32_t value)
	{
		___U3CteenPayLimitU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CteenMonthPayLimitU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(AntiAddictionCommonConfig_tFB2E9080FF6D416F4697BBF3B6CE8BCFECFF41CC, ___U3CteenMonthPayLimitU3Ek__BackingField_6)); }
	inline int32_t get_U3CteenMonthPayLimitU3Ek__BackingField_6() const { return ___U3CteenMonthPayLimitU3Ek__BackingField_6; }
	inline int32_t* get_address_of_U3CteenMonthPayLimitU3Ek__BackingField_6() { return &___U3CteenMonthPayLimitU3Ek__BackingField_6; }
	inline void set_U3CteenMonthPayLimitU3Ek__BackingField_6(int32_t value)
	{
		___U3CteenMonthPayLimitU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_U3CyoungPayLimitU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(AntiAddictionCommonConfig_tFB2E9080FF6D416F4697BBF3B6CE8BCFECFF41CC, ___U3CyoungPayLimitU3Ek__BackingField_7)); }
	inline int32_t get_U3CyoungPayLimitU3Ek__BackingField_7() const { return ___U3CyoungPayLimitU3Ek__BackingField_7; }
	inline int32_t* get_address_of_U3CyoungPayLimitU3Ek__BackingField_7() { return &___U3CyoungPayLimitU3Ek__BackingField_7; }
	inline void set_U3CyoungPayLimitU3Ek__BackingField_7(int32_t value)
	{
		___U3CyoungPayLimitU3Ek__BackingField_7 = value;
	}

	inline static int32_t get_offset_of_U3CyoungMonthPayLimitU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(AntiAddictionCommonConfig_tFB2E9080FF6D416F4697BBF3B6CE8BCFECFF41CC, ___U3CyoungMonthPayLimitU3Ek__BackingField_8)); }
	inline int32_t get_U3CyoungMonthPayLimitU3Ek__BackingField_8() const { return ___U3CyoungMonthPayLimitU3Ek__BackingField_8; }
	inline int32_t* get_address_of_U3CyoungMonthPayLimitU3Ek__BackingField_8() { return &___U3CyoungMonthPayLimitU3Ek__BackingField_8; }
	inline void set_U3CyoungMonthPayLimitU3Ek__BackingField_8(int32_t value)
	{
		___U3CyoungMonthPayLimitU3Ek__BackingField_8 = value;
	}
};


// AntiAddictionSdk.OpenSource.AntiAddictionFunctionConfig
struct  AntiAddictionFunctionConfig_t40E5C47E03007344B5CE5A8D78DE06A18336E8E1  : public RuntimeObject
{
public:
	// System.Boolean AntiAddictionSdk.OpenSource.AntiAddictionFunctionConfig::<useSdkRealName>k__BackingField
	bool ___U3CuseSdkRealNameU3Ek__BackingField_0;
	// System.Boolean AntiAddictionSdk.OpenSource.AntiAddictionFunctionConfig::<useSdkPaymentLimit>k__BackingField
	bool ___U3CuseSdkPaymentLimitU3Ek__BackingField_1;
	// System.Boolean AntiAddictionSdk.OpenSource.AntiAddictionFunctionConfig::<useSdkOnlineTimeLimit>k__BackingField
	bool ___U3CuseSdkOnlineTimeLimitU3Ek__BackingField_2;
	// System.Boolean AntiAddictionSdk.OpenSource.AntiAddictionFunctionConfig::<showSwitchAccountButton>k__BackingField
	bool ___U3CshowSwitchAccountButtonU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_U3CuseSdkRealNameU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(AntiAddictionFunctionConfig_t40E5C47E03007344B5CE5A8D78DE06A18336E8E1, ___U3CuseSdkRealNameU3Ek__BackingField_0)); }
	inline bool get_U3CuseSdkRealNameU3Ek__BackingField_0() const { return ___U3CuseSdkRealNameU3Ek__BackingField_0; }
	inline bool* get_address_of_U3CuseSdkRealNameU3Ek__BackingField_0() { return &___U3CuseSdkRealNameU3Ek__BackingField_0; }
	inline void set_U3CuseSdkRealNameU3Ek__BackingField_0(bool value)
	{
		___U3CuseSdkRealNameU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CuseSdkPaymentLimitU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(AntiAddictionFunctionConfig_t40E5C47E03007344B5CE5A8D78DE06A18336E8E1, ___U3CuseSdkPaymentLimitU3Ek__BackingField_1)); }
	inline bool get_U3CuseSdkPaymentLimitU3Ek__BackingField_1() const { return ___U3CuseSdkPaymentLimitU3Ek__BackingField_1; }
	inline bool* get_address_of_U3CuseSdkPaymentLimitU3Ek__BackingField_1() { return &___U3CuseSdkPaymentLimitU3Ek__BackingField_1; }
	inline void set_U3CuseSdkPaymentLimitU3Ek__BackingField_1(bool value)
	{
		___U3CuseSdkPaymentLimitU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CuseSdkOnlineTimeLimitU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(AntiAddictionFunctionConfig_t40E5C47E03007344B5CE5A8D78DE06A18336E8E1, ___U3CuseSdkOnlineTimeLimitU3Ek__BackingField_2)); }
	inline bool get_U3CuseSdkOnlineTimeLimitU3Ek__BackingField_2() const { return ___U3CuseSdkOnlineTimeLimitU3Ek__BackingField_2; }
	inline bool* get_address_of_U3CuseSdkOnlineTimeLimitU3Ek__BackingField_2() { return &___U3CuseSdkOnlineTimeLimitU3Ek__BackingField_2; }
	inline void set_U3CuseSdkOnlineTimeLimitU3Ek__BackingField_2(bool value)
	{
		___U3CuseSdkOnlineTimeLimitU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CshowSwitchAccountButtonU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(AntiAddictionFunctionConfig_t40E5C47E03007344B5CE5A8D78DE06A18336E8E1, ___U3CshowSwitchAccountButtonU3Ek__BackingField_3)); }
	inline bool get_U3CshowSwitchAccountButtonU3Ek__BackingField_3() const { return ___U3CshowSwitchAccountButtonU3Ek__BackingField_3; }
	inline bool* get_address_of_U3CshowSwitchAccountButtonU3Ek__BackingField_3() { return &___U3CshowSwitchAccountButtonU3Ek__BackingField_3; }
	inline void set_U3CshowSwitchAccountButtonU3Ek__BackingField_3(bool value)
	{
		___U3CshowSwitchAccountButtonU3Ek__BackingField_3 = value;
	}
};

struct Il2CppArrayBounds;

// System.Array


// TGCenterSdk.Platforms.ClientFactory
struct  ClientFactory_t94BD782533F1A5B37AA9D21857C337815D8389FA  : public RuntimeObject
{
public:

public:
};


// TGCenterSdk.Common.DummyPrivacyPolicyHelperClient
struct  DummyPrivacyPolicyHelperClient_tA760F3FD14C238520B359076F8F2943A0396C839  : public RuntimeObject
{
public:

public:
};


// TGCenterSdk.Common.DummyTGCenterClient
struct  DummyTGCenterClient_tA73AF5E21738B8A4677C62820E0A64DDF318CCE1  : public RuntimeObject
{
public:

public:
};


// TGCenterSdk.Platforms.iOS.Externs
struct  Externs_t3134EC717B9115532628B1F0D531CAC4F8834D1E  : public RuntimeObject
{
public:

public:
};


// TGCenterSdk.Api.InitConfig
struct  InitConfig_tB77587871EE04B53CB86593F9C7461FF0B143A47  : public RuntimeObject
{
public:
	// System.Boolean TGCenterSdk.Api.InitConfig::DebugMode
	bool ___DebugMode_0;
	// TGCenterSdk.Api.Day1Retention TGCenterSdk.Api.InitConfig::Day1Retention
	Day1Retention_t5C5C48267E7FA734CD696706DCF7C0DC29025BB3 * ___Day1Retention_1;
	// System.String TGCenterSdk.Api.InitConfig::Channel
	String_t* ___Channel_2;
	// System.String TGCenterSdk.Api.InitConfig::AppId
	String_t* ___AppId_3;
	// System.String TGCenterSdk.Api.InitConfig::AppleAppID
	String_t* ___AppleAppID_4;
	// System.String TGCenterSdk.Api.InitConfig::UmengAppKey
	String_t* ___UmengAppKey_5;
	// System.String TGCenterSdk.Api.InitConfig::AppsFlyerDevKey
	String_t* ___AppsFlyerDevKey_6;
	// System.String TGCenterSdk.Api.InitConfig::RangersAppLogAppId
	String_t* ___RangersAppLogAppId_7;
	// System.String TGCenterSdk.Api.InitConfig::RangersAppLogAppName
	String_t* ___RangersAppLogAppName_8;

public:
	inline static int32_t get_offset_of_DebugMode_0() { return static_cast<int32_t>(offsetof(InitConfig_tB77587871EE04B53CB86593F9C7461FF0B143A47, ___DebugMode_0)); }
	inline bool get_DebugMode_0() const { return ___DebugMode_0; }
	inline bool* get_address_of_DebugMode_0() { return &___DebugMode_0; }
	inline void set_DebugMode_0(bool value)
	{
		___DebugMode_0 = value;
	}

	inline static int32_t get_offset_of_Day1Retention_1() { return static_cast<int32_t>(offsetof(InitConfig_tB77587871EE04B53CB86593F9C7461FF0B143A47, ___Day1Retention_1)); }
	inline Day1Retention_t5C5C48267E7FA734CD696706DCF7C0DC29025BB3 * get_Day1Retention_1() const { return ___Day1Retention_1; }
	inline Day1Retention_t5C5C48267E7FA734CD696706DCF7C0DC29025BB3 ** get_address_of_Day1Retention_1() { return &___Day1Retention_1; }
	inline void set_Day1Retention_1(Day1Retention_t5C5C48267E7FA734CD696706DCF7C0DC29025BB3 * value)
	{
		___Day1Retention_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Day1Retention_1), (void*)value);
	}

	inline static int32_t get_offset_of_Channel_2() { return static_cast<int32_t>(offsetof(InitConfig_tB77587871EE04B53CB86593F9C7461FF0B143A47, ___Channel_2)); }
	inline String_t* get_Channel_2() const { return ___Channel_2; }
	inline String_t** get_address_of_Channel_2() { return &___Channel_2; }
	inline void set_Channel_2(String_t* value)
	{
		___Channel_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Channel_2), (void*)value);
	}

	inline static int32_t get_offset_of_AppId_3() { return static_cast<int32_t>(offsetof(InitConfig_tB77587871EE04B53CB86593F9C7461FF0B143A47, ___AppId_3)); }
	inline String_t* get_AppId_3() const { return ___AppId_3; }
	inline String_t** get_address_of_AppId_3() { return &___AppId_3; }
	inline void set_AppId_3(String_t* value)
	{
		___AppId_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AppId_3), (void*)value);
	}

	inline static int32_t get_offset_of_AppleAppID_4() { return static_cast<int32_t>(offsetof(InitConfig_tB77587871EE04B53CB86593F9C7461FF0B143A47, ___AppleAppID_4)); }
	inline String_t* get_AppleAppID_4() const { return ___AppleAppID_4; }
	inline String_t** get_address_of_AppleAppID_4() { return &___AppleAppID_4; }
	inline void set_AppleAppID_4(String_t* value)
	{
		___AppleAppID_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AppleAppID_4), (void*)value);
	}

	inline static int32_t get_offset_of_UmengAppKey_5() { return static_cast<int32_t>(offsetof(InitConfig_tB77587871EE04B53CB86593F9C7461FF0B143A47, ___UmengAppKey_5)); }
	inline String_t* get_UmengAppKey_5() const { return ___UmengAppKey_5; }
	inline String_t** get_address_of_UmengAppKey_5() { return &___UmengAppKey_5; }
	inline void set_UmengAppKey_5(String_t* value)
	{
		___UmengAppKey_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UmengAppKey_5), (void*)value);
	}

	inline static int32_t get_offset_of_AppsFlyerDevKey_6() { return static_cast<int32_t>(offsetof(InitConfig_tB77587871EE04B53CB86593F9C7461FF0B143A47, ___AppsFlyerDevKey_6)); }
	inline String_t* get_AppsFlyerDevKey_6() const { return ___AppsFlyerDevKey_6; }
	inline String_t** get_address_of_AppsFlyerDevKey_6() { return &___AppsFlyerDevKey_6; }
	inline void set_AppsFlyerDevKey_6(String_t* value)
	{
		___AppsFlyerDevKey_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AppsFlyerDevKey_6), (void*)value);
	}

	inline static int32_t get_offset_of_RangersAppLogAppId_7() { return static_cast<int32_t>(offsetof(InitConfig_tB77587871EE04B53CB86593F9C7461FF0B143A47, ___RangersAppLogAppId_7)); }
	inline String_t* get_RangersAppLogAppId_7() const { return ___RangersAppLogAppId_7; }
	inline String_t** get_address_of_RangersAppLogAppId_7() { return &___RangersAppLogAppId_7; }
	inline void set_RangersAppLogAppId_7(String_t* value)
	{
		___RangersAppLogAppId_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___RangersAppLogAppId_7), (void*)value);
	}

	inline static int32_t get_offset_of_RangersAppLogAppName_8() { return static_cast<int32_t>(offsetof(InitConfig_tB77587871EE04B53CB86593F9C7461FF0B143A47, ___RangersAppLogAppName_8)); }
	inline String_t* get_RangersAppLogAppName_8() const { return ___RangersAppLogAppName_8; }
	inline String_t** get_address_of_RangersAppLogAppName_8() { return &___RangersAppLogAppName_8; }
	inline void set_RangersAppLogAppName_8(String_t* value)
	{
		___RangersAppLogAppName_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___RangersAppLogAppName_8), (void*)value);
	}
};


// TGCenterSdk.Api.PrivacyPolicyHelper
struct  PrivacyPolicyHelper_t5983E6361B35F6389228D994C018B16993468EA3  : public RuntimeObject
{
public:
	// TGCenterSdk.Common.IPrivacyPolicyHelperClient TGCenterSdk.Api.PrivacyPolicyHelper::client
	RuntimeObject* ___client_1;

public:
	inline static int32_t get_offset_of_client_1() { return static_cast<int32_t>(offsetof(PrivacyPolicyHelper_t5983E6361B35F6389228D994C018B16993468EA3, ___client_1)); }
	inline RuntimeObject* get_client_1() const { return ___client_1; }
	inline RuntimeObject** get_address_of_client_1() { return &___client_1; }
	inline void set_client_1(RuntimeObject* value)
	{
		___client_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___client_1), (void*)value);
	}
};

struct PrivacyPolicyHelper_t5983E6361B35F6389228D994C018B16993468EA3_StaticFields
{
public:
	// TGCenterSdk.Api.PrivacyPolicyHelper TGCenterSdk.Api.PrivacyPolicyHelper::instance
	PrivacyPolicyHelper_t5983E6361B35F6389228D994C018B16993468EA3 * ___instance_0;

public:
	inline static int32_t get_offset_of_instance_0() { return static_cast<int32_t>(offsetof(PrivacyPolicyHelper_t5983E6361B35F6389228D994C018B16993468EA3_StaticFields, ___instance_0)); }
	inline PrivacyPolicyHelper_t5983E6361B35F6389228D994C018B16993468EA3 * get_instance_0() const { return ___instance_0; }
	inline PrivacyPolicyHelper_t5983E6361B35F6389228D994C018B16993468EA3 ** get_address_of_instance_0() { return &___instance_0; }
	inline void set_instance_0(PrivacyPolicyHelper_t5983E6361B35F6389228D994C018B16993468EA3 * value)
	{
		___instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___instance_0), (void*)value);
	}
};


// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// TGCenterSdk.Api.TGCenter
struct  TGCenter_t7A01AA650A3F96EAE0E6787DB2804C51C1FBA0B2  : public RuntimeObject
{
public:

public:
};

struct TGCenter_t7A01AA650A3F96EAE0E6787DB2804C51C1FBA0B2_StaticFields
{
public:
	// TGCenterSdk.Common.ITGCenterClient TGCenterSdk.Api.TGCenter::client
	RuntimeObject* ___client_0;

public:
	inline static int32_t get_offset_of_client_0() { return static_cast<int32_t>(offsetof(TGCenter_t7A01AA650A3F96EAE0E6787DB2804C51C1FBA0B2_StaticFields, ___client_0)); }
	inline RuntimeObject* get_client_0() const { return ___client_0; }
	inline RuntimeObject** get_address_of_client_0() { return &___client_0; }
	inline void set_client_0(RuntimeObject* value)
	{
		___client_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___client_0), (void*)value);
	}
};


// TGCenterSdk.Platforms.Android.TGCenterClient
struct  TGCenterClient_t852F76F73B20352EC6238AC9B9F507DF071CF9B0  : public RuntimeObject
{
public:
	// UnityEngine.AndroidJavaClass TGCenterSdk.Platforms.Android.TGCenterClient::tgCenterClass
	AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * ___tgCenterClass_1;

public:
	inline static int32_t get_offset_of_tgCenterClass_1() { return static_cast<int32_t>(offsetof(TGCenterClient_t852F76F73B20352EC6238AC9B9F507DF071CF9B0, ___tgCenterClass_1)); }
	inline AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * get_tgCenterClass_1() const { return ___tgCenterClass_1; }
	inline AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 ** get_address_of_tgCenterClass_1() { return &___tgCenterClass_1; }
	inline void set_tgCenterClass_1(AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * value)
	{
		___tgCenterClass_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___tgCenterClass_1), (void*)value);
	}
};

struct TGCenterClient_t852F76F73B20352EC6238AC9B9F507DF071CF9B0_StaticFields
{
public:
	// TGCenterSdk.Platforms.Android.TGCenterClient TGCenterSdk.Platforms.Android.TGCenterClient::instance
	TGCenterClient_t852F76F73B20352EC6238AC9B9F507DF071CF9B0 * ___instance_0;

public:
	inline static int32_t get_offset_of_instance_0() { return static_cast<int32_t>(offsetof(TGCenterClient_t852F76F73B20352EC6238AC9B9F507DF071CF9B0_StaticFields, ___instance_0)); }
	inline TGCenterClient_t852F76F73B20352EC6238AC9B9F507DF071CF9B0 * get_instance_0() const { return ___instance_0; }
	inline TGCenterClient_t852F76F73B20352EC6238AC9B9F507DF071CF9B0 ** get_address_of_instance_0() { return &___instance_0; }
	inline void set_instance_0(TGCenterClient_t852F76F73B20352EC6238AC9B9F507DF071CF9B0 * value)
	{
		___instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___instance_0), (void*)value);
	}
};


// TGCenterSdk.Platforms.iOS.TGCenterClient
struct  TGCenterClient_t3FFBC93E175D733E5FF8A30D13354AED72C0FCC9  : public RuntimeObject
{
public:

public:
};

struct TGCenterClient_t3FFBC93E175D733E5FF8A30D13354AED72C0FCC9_StaticFields
{
public:
	// TGCenterSdk.Platforms.iOS.TGCenterClient TGCenterSdk.Platforms.iOS.TGCenterClient::instance
	TGCenterClient_t3FFBC93E175D733E5FF8A30D13354AED72C0FCC9 * ___instance_0;

public:
	inline static int32_t get_offset_of_instance_0() { return static_cast<int32_t>(offsetof(TGCenterClient_t3FFBC93E175D733E5FF8A30D13354AED72C0FCC9_StaticFields, ___instance_0)); }
	inline TGCenterClient_t3FFBC93E175D733E5FF8A30D13354AED72C0FCC9 * get_instance_0() const { return ___instance_0; }
	inline TGCenterClient_t3FFBC93E175D733E5FF8A30D13354AED72C0FCC9 ** get_address_of_instance_0() { return &___instance_0; }
	inline void set_instance_0(TGCenterClient_t3FFBC93E175D733E5FF8A30D13354AED72C0FCC9 * value)
	{
		___instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___instance_0), (void*)value);
	}
};


// TGCenterSdk.Platforms.Android.Utils
struct  Utils_tC4B2B1098A0CB683C7098180CEFDCE201D7A4E29  : public RuntimeObject
{
public:

public:
};


// System.ValueType
struct  ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// AntiAddictionSdk.OpenSource.AntiAddictionCommonConfig/Builder
struct  Builder_t23ABFB73E05835CA7F11F21092D5E8652D8D081E  : public RuntimeObject
{
public:
	// System.Int32 AntiAddictionSdk.OpenSource.AntiAddictionCommonConfig/Builder::<gusterTime>k__BackingField
	int32_t ___U3CgusterTimeU3Ek__BackingField_0;
	// System.Int32 AntiAddictionSdk.OpenSource.AntiAddictionCommonConfig/Builder::<nightStrictStart>k__BackingField
	int32_t ___U3CnightStrictStartU3Ek__BackingField_1;
	// System.Int32 AntiAddictionSdk.OpenSource.AntiAddictionCommonConfig/Builder::<nightStrictEnd>k__BackingField
	int32_t ___U3CnightStrictEndU3Ek__BackingField_2;
	// System.Int32 AntiAddictionSdk.OpenSource.AntiAddictionCommonConfig/Builder::<childCommonTime>k__BackingField
	int32_t ___U3CchildCommonTimeU3Ek__BackingField_3;
	// System.Int32 AntiAddictionSdk.OpenSource.AntiAddictionCommonConfig/Builder::<childHolidayTime>k__BackingField
	int32_t ___U3CchildHolidayTimeU3Ek__BackingField_4;
	// System.Int32 AntiAddictionSdk.OpenSource.AntiAddictionCommonConfig/Builder::<teenPayLimit>k__BackingField
	int32_t ___U3CteenPayLimitU3Ek__BackingField_5;
	// System.Int32 AntiAddictionSdk.OpenSource.AntiAddictionCommonConfig/Builder::<teenMonthPayLimit>k__BackingField
	int32_t ___U3CteenMonthPayLimitU3Ek__BackingField_6;
	// System.Int32 AntiAddictionSdk.OpenSource.AntiAddictionCommonConfig/Builder::<youngPayLimit>k__BackingField
	int32_t ___U3CyoungPayLimitU3Ek__BackingField_7;
	// System.Int32 AntiAddictionSdk.OpenSource.AntiAddictionCommonConfig/Builder::<youngMonthPayLimit>k__BackingField
	int32_t ___U3CyoungMonthPayLimitU3Ek__BackingField_8;

public:
	inline static int32_t get_offset_of_U3CgusterTimeU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Builder_t23ABFB73E05835CA7F11F21092D5E8652D8D081E, ___U3CgusterTimeU3Ek__BackingField_0)); }
	inline int32_t get_U3CgusterTimeU3Ek__BackingField_0() const { return ___U3CgusterTimeU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CgusterTimeU3Ek__BackingField_0() { return &___U3CgusterTimeU3Ek__BackingField_0; }
	inline void set_U3CgusterTimeU3Ek__BackingField_0(int32_t value)
	{
		___U3CgusterTimeU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CnightStrictStartU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(Builder_t23ABFB73E05835CA7F11F21092D5E8652D8D081E, ___U3CnightStrictStartU3Ek__BackingField_1)); }
	inline int32_t get_U3CnightStrictStartU3Ek__BackingField_1() const { return ___U3CnightStrictStartU3Ek__BackingField_1; }
	inline int32_t* get_address_of_U3CnightStrictStartU3Ek__BackingField_1() { return &___U3CnightStrictStartU3Ek__BackingField_1; }
	inline void set_U3CnightStrictStartU3Ek__BackingField_1(int32_t value)
	{
		___U3CnightStrictStartU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CnightStrictEndU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(Builder_t23ABFB73E05835CA7F11F21092D5E8652D8D081E, ___U3CnightStrictEndU3Ek__BackingField_2)); }
	inline int32_t get_U3CnightStrictEndU3Ek__BackingField_2() const { return ___U3CnightStrictEndU3Ek__BackingField_2; }
	inline int32_t* get_address_of_U3CnightStrictEndU3Ek__BackingField_2() { return &___U3CnightStrictEndU3Ek__BackingField_2; }
	inline void set_U3CnightStrictEndU3Ek__BackingField_2(int32_t value)
	{
		___U3CnightStrictEndU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CchildCommonTimeU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(Builder_t23ABFB73E05835CA7F11F21092D5E8652D8D081E, ___U3CchildCommonTimeU3Ek__BackingField_3)); }
	inline int32_t get_U3CchildCommonTimeU3Ek__BackingField_3() const { return ___U3CchildCommonTimeU3Ek__BackingField_3; }
	inline int32_t* get_address_of_U3CchildCommonTimeU3Ek__BackingField_3() { return &___U3CchildCommonTimeU3Ek__BackingField_3; }
	inline void set_U3CchildCommonTimeU3Ek__BackingField_3(int32_t value)
	{
		___U3CchildCommonTimeU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CchildHolidayTimeU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(Builder_t23ABFB73E05835CA7F11F21092D5E8652D8D081E, ___U3CchildHolidayTimeU3Ek__BackingField_4)); }
	inline int32_t get_U3CchildHolidayTimeU3Ek__BackingField_4() const { return ___U3CchildHolidayTimeU3Ek__BackingField_4; }
	inline int32_t* get_address_of_U3CchildHolidayTimeU3Ek__BackingField_4() { return &___U3CchildHolidayTimeU3Ek__BackingField_4; }
	inline void set_U3CchildHolidayTimeU3Ek__BackingField_4(int32_t value)
	{
		___U3CchildHolidayTimeU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CteenPayLimitU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(Builder_t23ABFB73E05835CA7F11F21092D5E8652D8D081E, ___U3CteenPayLimitU3Ek__BackingField_5)); }
	inline int32_t get_U3CteenPayLimitU3Ek__BackingField_5() const { return ___U3CteenPayLimitU3Ek__BackingField_5; }
	inline int32_t* get_address_of_U3CteenPayLimitU3Ek__BackingField_5() { return &___U3CteenPayLimitU3Ek__BackingField_5; }
	inline void set_U3CteenPayLimitU3Ek__BackingField_5(int32_t value)
	{
		___U3CteenPayLimitU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CteenMonthPayLimitU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(Builder_t23ABFB73E05835CA7F11F21092D5E8652D8D081E, ___U3CteenMonthPayLimitU3Ek__BackingField_6)); }
	inline int32_t get_U3CteenMonthPayLimitU3Ek__BackingField_6() const { return ___U3CteenMonthPayLimitU3Ek__BackingField_6; }
	inline int32_t* get_address_of_U3CteenMonthPayLimitU3Ek__BackingField_6() { return &___U3CteenMonthPayLimitU3Ek__BackingField_6; }
	inline void set_U3CteenMonthPayLimitU3Ek__BackingField_6(int32_t value)
	{
		___U3CteenMonthPayLimitU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_U3CyoungPayLimitU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(Builder_t23ABFB73E05835CA7F11F21092D5E8652D8D081E, ___U3CyoungPayLimitU3Ek__BackingField_7)); }
	inline int32_t get_U3CyoungPayLimitU3Ek__BackingField_7() const { return ___U3CyoungPayLimitU3Ek__BackingField_7; }
	inline int32_t* get_address_of_U3CyoungPayLimitU3Ek__BackingField_7() { return &___U3CyoungPayLimitU3Ek__BackingField_7; }
	inline void set_U3CyoungPayLimitU3Ek__BackingField_7(int32_t value)
	{
		___U3CyoungPayLimitU3Ek__BackingField_7 = value;
	}

	inline static int32_t get_offset_of_U3CyoungMonthPayLimitU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(Builder_t23ABFB73E05835CA7F11F21092D5E8652D8D081E, ___U3CyoungMonthPayLimitU3Ek__BackingField_8)); }
	inline int32_t get_U3CyoungMonthPayLimitU3Ek__BackingField_8() const { return ___U3CyoungMonthPayLimitU3Ek__BackingField_8; }
	inline int32_t* get_address_of_U3CyoungMonthPayLimitU3Ek__BackingField_8() { return &___U3CyoungMonthPayLimitU3Ek__BackingField_8; }
	inline void set_U3CyoungMonthPayLimitU3Ek__BackingField_8(int32_t value)
	{
		___U3CyoungMonthPayLimitU3Ek__BackingField_8 = value;
	}
};


// AntiAddictionSdk.OpenSource.AntiAddictionFunctionConfig/Builder
struct  Builder_tDB5BA46A3678FD0B0719F961C0D5350B88F23E53  : public RuntimeObject
{
public:
	// System.Boolean AntiAddictionSdk.OpenSource.AntiAddictionFunctionConfig/Builder::<useSdkRealName>k__BackingField
	bool ___U3CuseSdkRealNameU3Ek__BackingField_0;
	// System.Boolean AntiAddictionSdk.OpenSource.AntiAddictionFunctionConfig/Builder::<useSdkPaymentLimit>k__BackingField
	bool ___U3CuseSdkPaymentLimitU3Ek__BackingField_1;
	// System.Boolean AntiAddictionSdk.OpenSource.AntiAddictionFunctionConfig/Builder::<useSdkOnlineTimeLimit>k__BackingField
	bool ___U3CuseSdkOnlineTimeLimitU3Ek__BackingField_2;
	// System.Boolean AntiAddictionSdk.OpenSource.AntiAddictionFunctionConfig/Builder::<showSwitchAccountButton>k__BackingField
	bool ___U3CshowSwitchAccountButtonU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_U3CuseSdkRealNameU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Builder_tDB5BA46A3678FD0B0719F961C0D5350B88F23E53, ___U3CuseSdkRealNameU3Ek__BackingField_0)); }
	inline bool get_U3CuseSdkRealNameU3Ek__BackingField_0() const { return ___U3CuseSdkRealNameU3Ek__BackingField_0; }
	inline bool* get_address_of_U3CuseSdkRealNameU3Ek__BackingField_0() { return &___U3CuseSdkRealNameU3Ek__BackingField_0; }
	inline void set_U3CuseSdkRealNameU3Ek__BackingField_0(bool value)
	{
		___U3CuseSdkRealNameU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CuseSdkPaymentLimitU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(Builder_tDB5BA46A3678FD0B0719F961C0D5350B88F23E53, ___U3CuseSdkPaymentLimitU3Ek__BackingField_1)); }
	inline bool get_U3CuseSdkPaymentLimitU3Ek__BackingField_1() const { return ___U3CuseSdkPaymentLimitU3Ek__BackingField_1; }
	inline bool* get_address_of_U3CuseSdkPaymentLimitU3Ek__BackingField_1() { return &___U3CuseSdkPaymentLimitU3Ek__BackingField_1; }
	inline void set_U3CuseSdkPaymentLimitU3Ek__BackingField_1(bool value)
	{
		___U3CuseSdkPaymentLimitU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CuseSdkOnlineTimeLimitU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(Builder_tDB5BA46A3678FD0B0719F961C0D5350B88F23E53, ___U3CuseSdkOnlineTimeLimitU3Ek__BackingField_2)); }
	inline bool get_U3CuseSdkOnlineTimeLimitU3Ek__BackingField_2() const { return ___U3CuseSdkOnlineTimeLimitU3Ek__BackingField_2; }
	inline bool* get_address_of_U3CuseSdkOnlineTimeLimitU3Ek__BackingField_2() { return &___U3CuseSdkOnlineTimeLimitU3Ek__BackingField_2; }
	inline void set_U3CuseSdkOnlineTimeLimitU3Ek__BackingField_2(bool value)
	{
		___U3CuseSdkOnlineTimeLimitU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CshowSwitchAccountButtonU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(Builder_tDB5BA46A3678FD0B0719F961C0D5350B88F23E53, ___U3CshowSwitchAccountButtonU3Ek__BackingField_3)); }
	inline bool get_U3CshowSwitchAccountButtonU3Ek__BackingField_3() const { return ___U3CshowSwitchAccountButtonU3Ek__BackingField_3; }
	inline bool* get_address_of_U3CshowSwitchAccountButtonU3Ek__BackingField_3() { return &___U3CshowSwitchAccountButtonU3Ek__BackingField_3; }
	inline void set_U3CshowSwitchAccountButtonU3Ek__BackingField_3(bool value)
	{
		___U3CshowSwitchAccountButtonU3Ek__BackingField_3 = value;
	}
};


// MainBehaviour/PrivacyAgreeListener
struct  PrivacyAgreeListener_t7E277E2FBF137E9ABC871EE180DD7FFC9FDE5DEA  : public RuntimeObject
{
public:
	// MainBehaviour MainBehaviour/PrivacyAgreeListener::behaviour
	MainBehaviour_tDE09AB0E3B7AB47BEC0D8229B68A94AA3FE0DEC6 * ___behaviour_0;

public:
	inline static int32_t get_offset_of_behaviour_0() { return static_cast<int32_t>(offsetof(PrivacyAgreeListener_t7E277E2FBF137E9ABC871EE180DD7FFC9FDE5DEA, ___behaviour_0)); }
	inline MainBehaviour_tDE09AB0E3B7AB47BEC0D8229B68A94AA3FE0DEC6 * get_behaviour_0() const { return ___behaviour_0; }
	inline MainBehaviour_tDE09AB0E3B7AB47BEC0D8229B68A94AA3FE0DEC6 ** get_address_of_behaviour_0() { return &___behaviour_0; }
	inline void set_behaviour_0(MainBehaviour_tDE09AB0E3B7AB47BEC0D8229B68A94AA3FE0DEC6 * value)
	{
		___behaviour_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___behaviour_0), (void*)value);
	}
};


// UnityEngine.AndroidJavaClass
struct  AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4  : public AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E
{
public:

public:
};


// System.Boolean
struct  Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Enum
struct  Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
};

// System.Runtime.InteropServices.GCHandle
struct  GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 
{
public:
	// System.Int32 System.Runtime.InteropServices.GCHandle::handle
	int32_t ___handle_0;

public:
	inline static int32_t get_offset_of_handle_0() { return static_cast<int32_t>(offsetof(GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603, ___handle_0)); }
	inline int32_t get_handle_0() const { return ___handle_0; }
	inline int32_t* get_address_of_handle_0() { return &___handle_0; }
	inline void set_handle_0(int32_t value)
	{
		___handle_0 = value;
	}
};


// System.Int32
struct  Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// UnityEngine.Rect
struct  Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 
{
public:
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;

public:
	inline static int32_t get_offset_of_m_XMin_0() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_XMin_0)); }
	inline float get_m_XMin_0() const { return ___m_XMin_0; }
	inline float* get_address_of_m_XMin_0() { return &___m_XMin_0; }
	inline void set_m_XMin_0(float value)
	{
		___m_XMin_0 = value;
	}

	inline static int32_t get_offset_of_m_YMin_1() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_YMin_1)); }
	inline float get_m_YMin_1() const { return ___m_YMin_1; }
	inline float* get_address_of_m_YMin_1() { return &___m_YMin_1; }
	inline void set_m_YMin_1(float value)
	{
		___m_YMin_1 = value;
	}

	inline static int32_t get_offset_of_m_Width_2() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_Width_2)); }
	inline float get_m_Width_2() const { return ___m_Width_2; }
	inline float* get_address_of_m_Width_2() { return &___m_Width_2; }
	inline void set_m_Width_2(float value)
	{
		___m_Width_2 = value;
	}

	inline static int32_t get_offset_of_m_Height_3() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_Height_3)); }
	inline float get_m_Height_3() const { return ___m_Height_3; }
	inline float* get_address_of_m_Height_3() { return &___m_Height_3; }
	inline void set_m_Height_3(float value)
	{
		___m_Height_3 = value;
	}
};


// System.Single
struct  Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// System.Void
struct  Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
};


// UnityEngine.AndroidJavaProxy
struct  AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF  : public RuntimeObject
{
public:
	// UnityEngine.AndroidJavaClass UnityEngine.AndroidJavaProxy::javaInterface
	AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * ___javaInterface_0;
	// System.IntPtr UnityEngine.AndroidJavaProxy::proxyObject
	intptr_t ___proxyObject_1;

public:
	inline static int32_t get_offset_of_javaInterface_0() { return static_cast<int32_t>(offsetof(AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF, ___javaInterface_0)); }
	inline AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * get_javaInterface_0() const { return ___javaInterface_0; }
	inline AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 ** get_address_of_javaInterface_0() { return &___javaInterface_0; }
	inline void set_javaInterface_0(AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * value)
	{
		___javaInterface_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___javaInterface_0), (void*)value);
	}

	inline static int32_t get_offset_of_proxyObject_1() { return static_cast<int32_t>(offsetof(AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF, ___proxyObject_1)); }
	inline intptr_t get_proxyObject_1() const { return ___proxyObject_1; }
	inline intptr_t* get_address_of_proxyObject_1() { return &___proxyObject_1; }
	inline void set_proxyObject_1(intptr_t value)
	{
		___proxyObject_1 = value;
	}
};

struct AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF_StaticFields
{
public:
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaProxy::s_JavaLangSystemClass
	GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 * ___s_JavaLangSystemClass_2;
	// System.IntPtr UnityEngine.AndroidJavaProxy::s_HashCodeMethodID
	intptr_t ___s_HashCodeMethodID_3;

public:
	inline static int32_t get_offset_of_s_JavaLangSystemClass_2() { return static_cast<int32_t>(offsetof(AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF_StaticFields, ___s_JavaLangSystemClass_2)); }
	inline GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 * get_s_JavaLangSystemClass_2() const { return ___s_JavaLangSystemClass_2; }
	inline GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 ** get_address_of_s_JavaLangSystemClass_2() { return &___s_JavaLangSystemClass_2; }
	inline void set_s_JavaLangSystemClass_2(GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 * value)
	{
		___s_JavaLangSystemClass_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_JavaLangSystemClass_2), (void*)value);
	}

	inline static int32_t get_offset_of_s_HashCodeMethodID_3() { return static_cast<int32_t>(offsetof(AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF_StaticFields, ___s_HashCodeMethodID_3)); }
	inline intptr_t get_s_HashCodeMethodID_3() const { return ___s_HashCodeMethodID_3; }
	inline intptr_t* get_address_of_s_HashCodeMethodID_3() { return &___s_HashCodeMethodID_3; }
	inline void set_s_HashCodeMethodID_3(intptr_t value)
	{
		___s_HashCodeMethodID_3 = value;
	}
};


// AntiAddictionSdk.OpenSource.AntiAddictionUserType
struct  AntiAddictionUserType_tBAAF1AE01DCE885E3FB8E795CAF87BB792D7113D 
{
public:
	// System.Int32 AntiAddictionSdk.OpenSource.AntiAddictionUserType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AntiAddictionUserType_tBAAF1AE01DCE885E3FB8E795CAF87BB792D7113D, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// AntiAddictionSdk.OpenSource.CallbackCode
struct  CallbackCode_tD9DA9EF55EEA878384BDAF2E59C6FAB4029DC22A 
{
public:
	// System.Int32 AntiAddictionSdk.OpenSource.CallbackCode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CallbackCode_tD9DA9EF55EEA878384BDAF2E59C6FAB4029DC22A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Delegate
struct  Delegate_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * get_data_9() const { return ___data_9; }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
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
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
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
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};

// UnityEngine.Object
struct  Object_tF2F3778131EFF286AF62B7B013A170F95A91571A  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// TGCenterSdk.Platforms.iOS.PrivacyPolicyHelperClient
struct  PrivacyPolicyHelperClient_tCE377D6E958FD4996E71424C6705E0B1CA0327E0  : public RuntimeObject
{
public:
	// System.IntPtr TGCenterSdk.Platforms.iOS.PrivacyPolicyHelperClient::helperClient
	intptr_t ___helperClient_0;
	// TGCenterSdk.Api.PrivacyPolicyHelper/AgreeListener TGCenterSdk.Platforms.iOS.PrivacyPolicyHelperClient::listener
	RuntimeObject* ___listener_1;

public:
	inline static int32_t get_offset_of_helperClient_0() { return static_cast<int32_t>(offsetof(PrivacyPolicyHelperClient_tCE377D6E958FD4996E71424C6705E0B1CA0327E0, ___helperClient_0)); }
	inline intptr_t get_helperClient_0() const { return ___helperClient_0; }
	inline intptr_t* get_address_of_helperClient_0() { return &___helperClient_0; }
	inline void set_helperClient_0(intptr_t value)
	{
		___helperClient_0 = value;
	}

	inline static int32_t get_offset_of_listener_1() { return static_cast<int32_t>(offsetof(PrivacyPolicyHelperClient_tCE377D6E958FD4996E71424C6705E0B1CA0327E0, ___listener_1)); }
	inline RuntimeObject* get_listener_1() const { return ___listener_1; }
	inline RuntimeObject** get_address_of_listener_1() { return &___listener_1; }
	inline void set_listener_1(RuntimeObject* value)
	{
		___listener_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___listener_1), (void*)value);
	}
};


// UnityEngine.RectOffset
struct  RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.RectOffset::m_Ptr
	intptr_t ___m_Ptr_0;
	// System.Object UnityEngine.RectOffset::m_SourceStyle
	RuntimeObject * ___m_SourceStyle_1;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_SourceStyle_1() { return static_cast<int32_t>(offsetof(RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70, ___m_SourceStyle_1)); }
	inline RuntimeObject * get_m_SourceStyle_1() const { return ___m_SourceStyle_1; }
	inline RuntimeObject ** get_address_of_m_SourceStyle_1() { return &___m_SourceStyle_1; }
	inline void set_m_SourceStyle_1(RuntimeObject * value)
	{
		___m_SourceStyle_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SourceStyle_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.RectOffset
struct RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	Il2CppIUnknown* ___m_SourceStyle_1;
};
// Native definition for COM marshalling of UnityEngine.RectOffset
struct RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70_marshaled_com
{
	intptr_t ___m_Ptr_0;
	Il2CppIUnknown* ___m_SourceStyle_1;
};

// UnityEngine.RuntimePlatform
struct  RuntimePlatform_tB8798C800FD9810C0FE2B7D2F2A0A3979D239065 
{
public:
	// System.Int32 UnityEngine.RuntimePlatform::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RuntimePlatform_tB8798C800FD9810C0FE2B7D2F2A0A3979D239065, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.TextAnchor
struct  TextAnchor_tA4C88E77C2D7312F43412275B01E1341A7CB2232 
{
public:
	// System.Int32 UnityEngine.TextAnchor::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TextAnchor_tA4C88E77C2D7312F43412275B01E1341A7CB2232, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TGCenterSdk.Api.Day1Retention/RetentionTypes
struct  RetentionTypes_t6A62A70C1AD3AE575AC24BD05B0A0CE0254FACE2 
{
public:
	// System.Int32 TGCenterSdk.Api.Day1Retention/RetentionTypes::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RetentionTypes_t6A62A70C1AD3AE575AC24BD05B0A0CE0254FACE2, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// AntiAddictionSdk.OpenSource.AntiAddictionHandler
struct  AntiAddictionHandler_t54B50E46C25399A5B7B9EF212C1E14FC6AF927DD  : public AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF
{
public:
	// System.Action`2<System.Int32,System.String> AntiAddictionSdk.OpenSource.AntiAddictionHandler::onAntiAddictionResult
	Action_2_t0359A210F354A728FCD80F275D8CF192D61A98C5 * ___onAntiAddictionResult_4;

public:
	inline static int32_t get_offset_of_onAntiAddictionResult_4() { return static_cast<int32_t>(offsetof(AntiAddictionHandler_t54B50E46C25399A5B7B9EF212C1E14FC6AF927DD, ___onAntiAddictionResult_4)); }
	inline Action_2_t0359A210F354A728FCD80F275D8CF192D61A98C5 * get_onAntiAddictionResult_4() const { return ___onAntiAddictionResult_4; }
	inline Action_2_t0359A210F354A728FCD80F275D8CF192D61A98C5 ** get_address_of_onAntiAddictionResult_4() { return &___onAntiAddictionResult_4; }
	inline void set_onAntiAddictionResult_4(Action_2_t0359A210F354A728FCD80F275D8CF192D61A98C5 * value)
	{
		___onAntiAddictionResult_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onAntiAddictionResult_4), (void*)value);
	}
};


// UnityEngine.Component
struct  Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// TGCenterSdk.Api.Day1Retention
struct  Day1Retention_t5C5C48267E7FA734CD696706DCF7C0DC29025BB3  : public RuntimeObject
{
public:
	// TGCenterSdk.Api.Day1Retention/RetentionTypes TGCenterSdk.Api.Day1Retention::<RetentionType>k__BackingField
	int32_t ___U3CRetentionTypeU3Ek__BackingField_0;
	// System.Int32 TGCenterSdk.Api.Day1Retention::<StartCount>k__BackingField
	int32_t ___U3CStartCountU3Ek__BackingField_1;
	// System.Int32 TGCenterSdk.Api.Day1Retention::<EndCount>k__BackingField
	int32_t ___U3CEndCountU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CRetentionTypeU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Day1Retention_t5C5C48267E7FA734CD696706DCF7C0DC29025BB3, ___U3CRetentionTypeU3Ek__BackingField_0)); }
	inline int32_t get_U3CRetentionTypeU3Ek__BackingField_0() const { return ___U3CRetentionTypeU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CRetentionTypeU3Ek__BackingField_0() { return &___U3CRetentionTypeU3Ek__BackingField_0; }
	inline void set_U3CRetentionTypeU3Ek__BackingField_0(int32_t value)
	{
		___U3CRetentionTypeU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CStartCountU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(Day1Retention_t5C5C48267E7FA734CD696706DCF7C0DC29025BB3, ___U3CStartCountU3Ek__BackingField_1)); }
	inline int32_t get_U3CStartCountU3Ek__BackingField_1() const { return ___U3CStartCountU3Ek__BackingField_1; }
	inline int32_t* get_address_of_U3CStartCountU3Ek__BackingField_1() { return &___U3CStartCountU3Ek__BackingField_1; }
	inline void set_U3CStartCountU3Ek__BackingField_1(int32_t value)
	{
		___U3CStartCountU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CEndCountU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(Day1Retention_t5C5C48267E7FA734CD696706DCF7C0DC29025BB3, ___U3CEndCountU3Ek__BackingField_2)); }
	inline int32_t get_U3CEndCountU3Ek__BackingField_2() const { return ___U3CEndCountU3Ek__BackingField_2; }
	inline int32_t* get_address_of_U3CEndCountU3Ek__BackingField_2() { return &___U3CEndCountU3Ek__BackingField_2; }
	inline void set_U3CEndCountU3Ek__BackingField_2(int32_t value)
	{
		___U3CEndCountU3Ek__BackingField_2 = value;
	}
};


// UnityEngine.GUIStyle
struct  GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.GUIStyle::m_Ptr
	intptr_t ___m_Ptr_0;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_Normal
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * ___m_Normal_1;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_Hover
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * ___m_Hover_2;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_Active
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * ___m_Active_3;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_Focused
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * ___m_Focused_4;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_OnNormal
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * ___m_OnNormal_5;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_OnHover
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * ___m_OnHover_6;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_OnActive
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * ___m_OnActive_7;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_OnFocused
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * ___m_OnFocused_8;
	// UnityEngine.RectOffset UnityEngine.GUIStyle::m_Border
	RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * ___m_Border_9;
	// UnityEngine.RectOffset UnityEngine.GUIStyle::m_Padding
	RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * ___m_Padding_10;
	// UnityEngine.RectOffset UnityEngine.GUIStyle::m_Margin
	RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * ___m_Margin_11;
	// UnityEngine.RectOffset UnityEngine.GUIStyle::m_Overflow
	RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * ___m_Overflow_12;
	// System.String UnityEngine.GUIStyle::m_Name
	String_t* ___m_Name_13;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_Normal_1() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_Normal_1)); }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * get_m_Normal_1() const { return ___m_Normal_1; }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 ** get_address_of_m_Normal_1() { return &___m_Normal_1; }
	inline void set_m_Normal_1(GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * value)
	{
		___m_Normal_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Normal_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_Hover_2() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_Hover_2)); }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * get_m_Hover_2() const { return ___m_Hover_2; }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 ** get_address_of_m_Hover_2() { return &___m_Hover_2; }
	inline void set_m_Hover_2(GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * value)
	{
		___m_Hover_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Hover_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_Active_3() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_Active_3)); }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * get_m_Active_3() const { return ___m_Active_3; }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 ** get_address_of_m_Active_3() { return &___m_Active_3; }
	inline void set_m_Active_3(GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * value)
	{
		___m_Active_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Active_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_Focused_4() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_Focused_4)); }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * get_m_Focused_4() const { return ___m_Focused_4; }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 ** get_address_of_m_Focused_4() { return &___m_Focused_4; }
	inline void set_m_Focused_4(GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * value)
	{
		___m_Focused_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Focused_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnNormal_5() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_OnNormal_5)); }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * get_m_OnNormal_5() const { return ___m_OnNormal_5; }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 ** get_address_of_m_OnNormal_5() { return &___m_OnNormal_5; }
	inline void set_m_OnNormal_5(GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * value)
	{
		___m_OnNormal_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnNormal_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnHover_6() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_OnHover_6)); }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * get_m_OnHover_6() const { return ___m_OnHover_6; }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 ** get_address_of_m_OnHover_6() { return &___m_OnHover_6; }
	inline void set_m_OnHover_6(GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * value)
	{
		___m_OnHover_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnHover_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnActive_7() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_OnActive_7)); }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * get_m_OnActive_7() const { return ___m_OnActive_7; }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 ** get_address_of_m_OnActive_7() { return &___m_OnActive_7; }
	inline void set_m_OnActive_7(GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * value)
	{
		___m_OnActive_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnActive_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnFocused_8() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_OnFocused_8)); }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * get_m_OnFocused_8() const { return ___m_OnFocused_8; }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 ** get_address_of_m_OnFocused_8() { return &___m_OnFocused_8; }
	inline void set_m_OnFocused_8(GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * value)
	{
		___m_OnFocused_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnFocused_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_Border_9() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_Border_9)); }
	inline RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * get_m_Border_9() const { return ___m_Border_9; }
	inline RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 ** get_address_of_m_Border_9() { return &___m_Border_9; }
	inline void set_m_Border_9(RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * value)
	{
		___m_Border_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Border_9), (void*)value);
	}

	inline static int32_t get_offset_of_m_Padding_10() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_Padding_10)); }
	inline RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * get_m_Padding_10() const { return ___m_Padding_10; }
	inline RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 ** get_address_of_m_Padding_10() { return &___m_Padding_10; }
	inline void set_m_Padding_10(RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * value)
	{
		___m_Padding_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Padding_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_Margin_11() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_Margin_11)); }
	inline RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * get_m_Margin_11() const { return ___m_Margin_11; }
	inline RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 ** get_address_of_m_Margin_11() { return &___m_Margin_11; }
	inline void set_m_Margin_11(RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * value)
	{
		___m_Margin_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Margin_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_Overflow_12() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_Overflow_12)); }
	inline RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * get_m_Overflow_12() const { return ___m_Overflow_12; }
	inline RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 ** get_address_of_m_Overflow_12() { return &___m_Overflow_12; }
	inline void set_m_Overflow_12(RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * value)
	{
		___m_Overflow_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Overflow_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_Name_13() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_Name_13)); }
	inline String_t* get_m_Name_13() const { return ___m_Name_13; }
	inline String_t** get_address_of_m_Name_13() { return &___m_Name_13; }
	inline void set_m_Name_13(String_t* value)
	{
		___m_Name_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Name_13), (void*)value);
	}
};

struct GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_StaticFields
{
public:
	// System.Boolean UnityEngine.GUIStyle::showKeyboardFocus
	bool ___showKeyboardFocus_14;
	// UnityEngine.GUIStyle UnityEngine.GUIStyle::s_None
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___s_None_15;

public:
	inline static int32_t get_offset_of_showKeyboardFocus_14() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_StaticFields, ___showKeyboardFocus_14)); }
	inline bool get_showKeyboardFocus_14() const { return ___showKeyboardFocus_14; }
	inline bool* get_address_of_showKeyboardFocus_14() { return &___showKeyboardFocus_14; }
	inline void set_showKeyboardFocus_14(bool value)
	{
		___showKeyboardFocus_14 = value;
	}

	inline static int32_t get_offset_of_s_None_15() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_StaticFields, ___s_None_15)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_s_None_15() const { return ___s_None_15; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_s_None_15() { return &___s_None_15; }
	inline void set_s_None_15(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___s_None_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_None_15), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.GUIStyle
struct GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_pinvoke* ___m_Normal_1;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_pinvoke* ___m_Hover_2;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_pinvoke* ___m_Active_3;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_pinvoke* ___m_Focused_4;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_pinvoke* ___m_OnNormal_5;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_pinvoke* ___m_OnHover_6;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_pinvoke* ___m_OnActive_7;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_pinvoke* ___m_OnFocused_8;
	RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70_marshaled_pinvoke ___m_Border_9;
	RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70_marshaled_pinvoke ___m_Padding_10;
	RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70_marshaled_pinvoke ___m_Margin_11;
	RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70_marshaled_pinvoke ___m_Overflow_12;
	char* ___m_Name_13;
};
// Native definition for COM marshalling of UnityEngine.GUIStyle
struct GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_marshaled_com
{
	intptr_t ___m_Ptr_0;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_com* ___m_Normal_1;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_com* ___m_Hover_2;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_com* ___m_Active_3;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_com* ___m_Focused_4;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_com* ___m_OnNormal_5;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_com* ___m_OnHover_6;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_com* ___m_OnActive_7;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_com* ___m_OnFocused_8;
	RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70_marshaled_com* ___m_Border_9;
	RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70_marshaled_com* ___m_Padding_10;
	RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70_marshaled_com* ___m_Margin_11;
	RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70_marshaled_com* ___m_Overflow_12;
	Il2CppChar* ___m_Name_13;
};

// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};

// TGCenterSdk.Platforms.Android.PrivacyPolicyHelperClient
struct  PrivacyPolicyHelperClient_tB067E8E989D92DA23AE4C378F99922F83EEB8AD9  : public AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF
{
public:
	// UnityEngine.AndroidJavaObject TGCenterSdk.Platforms.Android.PrivacyPolicyHelperClient::helper
	AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * ___helper_4;
	// TGCenterSdk.Api.PrivacyPolicyHelper/AgreeListener TGCenterSdk.Platforms.Android.PrivacyPolicyHelperClient::listener
	RuntimeObject* ___listener_5;

public:
	inline static int32_t get_offset_of_helper_4() { return static_cast<int32_t>(offsetof(PrivacyPolicyHelperClient_tB067E8E989D92DA23AE4C378F99922F83EEB8AD9, ___helper_4)); }
	inline AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * get_helper_4() const { return ___helper_4; }
	inline AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E ** get_address_of_helper_4() { return &___helper_4; }
	inline void set_helper_4(AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * value)
	{
		___helper_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___helper_4), (void*)value);
	}

	inline static int32_t get_offset_of_listener_5() { return static_cast<int32_t>(offsetof(PrivacyPolicyHelperClient_tB067E8E989D92DA23AE4C378F99922F83EEB8AD9, ___listener_5)); }
	inline RuntimeObject* get_listener_5() const { return ___listener_5; }
	inline RuntimeObject** get_address_of_listener_5() { return &___listener_5; }
	inline void set_listener_5(RuntimeObject* value)
	{
		___listener_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___listener_5), (void*)value);
	}
};


// System.Action`2<System.Int32,System.String>
struct  Action_2_t0359A210F354A728FCD80F275D8CF192D61A98C5  : public MulticastDelegate_t
{
public:

public:
};


// System.AsyncCallback
struct  AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Behaviour
struct  Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// AntiAddictionSdk.OpenSource.AntiAddiction/AntiAddictionDelegate
struct  AntiAddictionDelegate_t849C34933F2BEB8A44306738A7F07A582DC9EDBF  : public MulticastDelegate_t
{
public:

public:
};


// TGCenterSdk.Platforms.iOS.PrivacyPolicyHelperClient/TGCPrivacyAgreeCallback
struct  TGCPrivacyAgreeCallback_t3C41917D9CA51071333995D60FE85E6B410437DA  : public MulticastDelegate_t
{
public:

public:
};


// TGCenterSdk.Platforms.iOS.PrivacyPolicyHelperClient/TGCPrivacyDisagreeCallback
struct  TGCPrivacyDisagreeCallback_t87303D0856E11528F24B5D65FE37D8EB115CEB9E  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// AntiAddictionSdk.OpenSource.AntiAddiction
struct  AntiAddiction_t48341ECCB1DF1C64757849008C5BD7356AAEC7AD  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};

struct AntiAddiction_t48341ECCB1DF1C64757849008C5BD7356AAEC7AD_StaticFields
{
public:
	// UnityEngine.AndroidJavaClass AntiAddictionSdk.OpenSource.AntiAddiction::AntiAddictionClass
	AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * ___AntiAddictionClass_4;
	// System.Boolean AntiAddictionSdk.OpenSource.AntiAddiction::sdkInited
	bool ___sdkInited_5;
	// System.Action`2<System.Int32,System.String> AntiAddictionSdk.OpenSource.AntiAddiction::antiAddictionResult
	Action_2_t0359A210F354A728FCD80F275D8CF192D61A98C5 * ___antiAddictionResult_6;

public:
	inline static int32_t get_offset_of_AntiAddictionClass_4() { return static_cast<int32_t>(offsetof(AntiAddiction_t48341ECCB1DF1C64757849008C5BD7356AAEC7AD_StaticFields, ___AntiAddictionClass_4)); }
	inline AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * get_AntiAddictionClass_4() const { return ___AntiAddictionClass_4; }
	inline AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 ** get_address_of_AntiAddictionClass_4() { return &___AntiAddictionClass_4; }
	inline void set_AntiAddictionClass_4(AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * value)
	{
		___AntiAddictionClass_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AntiAddictionClass_4), (void*)value);
	}

	inline static int32_t get_offset_of_sdkInited_5() { return static_cast<int32_t>(offsetof(AntiAddiction_t48341ECCB1DF1C64757849008C5BD7356AAEC7AD_StaticFields, ___sdkInited_5)); }
	inline bool get_sdkInited_5() const { return ___sdkInited_5; }
	inline bool* get_address_of_sdkInited_5() { return &___sdkInited_5; }
	inline void set_sdkInited_5(bool value)
	{
		___sdkInited_5 = value;
	}

	inline static int32_t get_offset_of_antiAddictionResult_6() { return static_cast<int32_t>(offsetof(AntiAddiction_t48341ECCB1DF1C64757849008C5BD7356AAEC7AD_StaticFields, ___antiAddictionResult_6)); }
	inline Action_2_t0359A210F354A728FCD80F275D8CF192D61A98C5 * get_antiAddictionResult_6() const { return ___antiAddictionResult_6; }
	inline Action_2_t0359A210F354A728FCD80F275D8CF192D61A98C5 ** get_address_of_antiAddictionResult_6() { return &___antiAddictionResult_6; }
	inline void set_antiAddictionResult_6(Action_2_t0359A210F354A728FCD80F275D8CF192D61A98C5 * value)
	{
		___antiAddictionResult_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___antiAddictionResult_6), (void*)value);
	}
};


// MainBehaviour
struct  MainBehaviour_tDE09AB0E3B7AB47BEC0D8229B68A94AA3FE0DEC6  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.String MainBehaviour::Channle
	String_t* ___Channle_4;
	// System.Action`2<System.Int32,System.String> MainBehaviour::onAntiAddictionResult
	Action_2_t0359A210F354A728FCD80F275D8CF192D61A98C5 * ___onAntiAddictionResult_5;

public:
	inline static int32_t get_offset_of_Channle_4() { return static_cast<int32_t>(offsetof(MainBehaviour_tDE09AB0E3B7AB47BEC0D8229B68A94AA3FE0DEC6, ___Channle_4)); }
	inline String_t* get_Channle_4() const { return ___Channle_4; }
	inline String_t** get_address_of_Channle_4() { return &___Channle_4; }
	inline void set_Channle_4(String_t* value)
	{
		___Channle_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Channle_4), (void*)value);
	}

	inline static int32_t get_offset_of_onAntiAddictionResult_5() { return static_cast<int32_t>(offsetof(MainBehaviour_tDE09AB0E3B7AB47BEC0D8229B68A94AA3FE0DEC6, ___onAntiAddictionResult_5)); }
	inline Action_2_t0359A210F354A728FCD80F275D8CF192D61A98C5 * get_onAntiAddictionResult_5() const { return ___onAntiAddictionResult_5; }
	inline Action_2_t0359A210F354A728FCD80F275D8CF192D61A98C5 ** get_address_of_onAntiAddictionResult_5() { return &___onAntiAddictionResult_5; }
	inline void set_onAntiAddictionResult_5(Action_2_t0359A210F354A728FCD80F275D8CF192D61A98C5 * value)
	{
		___onAntiAddictionResult_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onAntiAddictionResult_5), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Delegate_t * m_Items[1];

public:
	inline Delegate_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Void System.Action`2<System.Int32,System.Object>::Invoke(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_2_Invoke_mD14A0B886BBCD4DE8C6D4941C9ABC1691394F5E0_gshared (Action_2_tDD9145FF6BEFC0F795374D3C54FE5138E8FDDC96 * __this, int32_t ___arg10, RuntimeObject * ___arg21, const RuntimeMethod* method);
// System.Void System.Action`2<System.Int32,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_2__ctor_mD005A0CCFFD77790ADB8E1E418161A6F27A30C64_gshared (Action_2_tDD9145FF6BEFC0F795374D3C54FE5138E8FDDC96 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// !!0 UnityEngine.AndroidJavaObject::Call<System.Object>(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * AndroidJavaObject_Call_TisRuntimeObject_mB802C2A6B0365A1670402D283EB7FA241C326B0E_gshared (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, String_t* ___methodName0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method);
// !!0[] System.Array::Empty<System.Object>()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_gshared_inline (const RuntimeMethod* method);
// !!0 UnityEngine.AndroidJavaObject::CallStatic<System.Object>(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * AndroidJavaObject_CallStatic_TisRuntimeObject_m29BD05B7A29F937D71B746DFFE889B90E1142509_gshared (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, String_t* ___methodName0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method);
// !!0 UnityEngine.AndroidJavaObject::CallStatic<System.Boolean>(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidJavaObject_CallStatic_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m08A8ECF220D35069EF5A4A50C2F38E925F0852FB_gshared (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, String_t* ___methodName0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method);
// !!0 UnityEngine.AndroidJavaObject::GetStatic<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * AndroidJavaObject_GetStatic_TisRuntimeObject_mEC743ECF275CB896DE039A9FC1E5672B30C8B3D0_gshared (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, String_t* ___fieldName0, const RuntimeMethod* method);

// System.Void AntiAddictionSdk.OpenSource.AntiAddiction::antiAddictionCallback(System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AntiAddiction_antiAddictionCallback_m05EAAD3FF7819800167E07C38AE776BBBFBCBE9E (int32_t ___resultCode0, String_t* ___message1, const RuntimeMethod* method);
// System.Void System.Action`2<System.Int32,System.String>::Invoke(!0,!1)
inline void Action_2_Invoke_mA02088CCFAC06F127C125C0F51ADD67B9A2242ED (Action_2_t0359A210F354A728FCD80F275D8CF192D61A98C5 * __this, int32_t ___arg10, String_t* ___arg21, const RuntimeMethod* method)
{
	((  void (*) (Action_2_t0359A210F354A728FCD80F275D8CF192D61A98C5 *, int32_t, String_t*, const RuntimeMethod*))Action_2_Invoke_mD14A0B886BBCD4DE8C6D4941C9ABC1691394F5E0_gshared)(__this, ___arg10, ___arg21, method);
}
// System.Void AntiAddictionSdk.OpenSource.AntiAddiction/AntiAddictionDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AntiAddictionDelegate__ctor_m2689E1F0F648C1B728129A0D61E2A4824C1D86F9 (AntiAddictionDelegate_t849C34933F2BEB8A44306738A7F07A582DC9EDBF * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void AntiAddictionSdk.OpenSource.AntiAddiction::AntiAddictionInit(AntiAddictionSdk.OpenSource.AntiAddiction/AntiAddictionDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AntiAddiction_AntiAddictionInit_mB0DFDB2EAD7B469B813994CAD25EDC5214AFFBF6 (AntiAddictionDelegate_t849C34933F2BEB8A44306738A7F07A582DC9EDBF * ___antiDelegate0, const RuntimeMethod* method);
// System.Void AntiAddictionSdk.OpenSource.AntiAddiction::AntiAddictionSetFunctionConfig(System.Boolean,System.Boolean,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AntiAddiction_AntiAddictionSetFunctionConfig_m39CB26D81CE5FEAE58699BBA3FBC141FFF98783C (bool ___useSdkRealName0, bool ___useSdkPaymentLimit1, bool ___useSdkOnlineTimeLimit2, bool ___showSwitchAccountButton3, const RuntimeMethod* method);
// System.Boolean AntiAddictionSdk.OpenSource.AntiAddictionFunctionConfig::get_useSdkRealName()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool AntiAddictionFunctionConfig_get_useSdkRealName_m2B993B5E50E6A15CEEEBFCB33D78A81B1F359D6A_inline (AntiAddictionFunctionConfig_t40E5C47E03007344B5CE5A8D78DE06A18336E8E1 * __this, const RuntimeMethod* method);
// System.Boolean AntiAddictionSdk.OpenSource.AntiAddictionFunctionConfig::get_useSdkPaymentLimit()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool AntiAddictionFunctionConfig_get_useSdkPaymentLimit_mF5153FB6074753730F6357F8215E2C0CD2264702_inline (AntiAddictionFunctionConfig_t40E5C47E03007344B5CE5A8D78DE06A18336E8E1 * __this, const RuntimeMethod* method);
// System.Boolean AntiAddictionSdk.OpenSource.AntiAddictionFunctionConfig::get_useSdkOnlineTimeLimit()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool AntiAddictionFunctionConfig_get_useSdkOnlineTimeLimit_m6868BE409709113E71232AE928CC48EB9417EBA0_inline (AntiAddictionFunctionConfig_t40E5C47E03007344B5CE5A8D78DE06A18336E8E1 * __this, const RuntimeMethod* method);
// System.Boolean AntiAddictionSdk.OpenSource.AntiAddictionFunctionConfig::get_showSwitchAccountButton()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool AntiAddictionFunctionConfig_get_showSwitchAccountButton_m5B2D7AB2EB6D2AB689E5FDFFBBB53E6F6736A0CF_inline (AntiAddictionFunctionConfig_t40E5C47E03007344B5CE5A8D78DE06A18336E8E1 * __this, const RuntimeMethod* method);
// System.Int32 AntiAddictionSdk.OpenSource.AntiAddictionCommonConfig::get_gusterTime()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t AntiAddictionCommonConfig_get_gusterTime_m97F62C5654BAEDC31CB3BBB2398A3F7043CCE4C5_inline (AntiAddictionCommonConfig_tFB2E9080FF6D416F4697BBF3B6CE8BCFECFF41CC * __this, const RuntimeMethod* method);
// System.Void AntiAddictionSdk.OpenSource.AntiAddiction::AntiAddictionSetGuestTotalTime(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AntiAddiction_AntiAddictionSetGuestTotalTime_mFCB741F05C18C489BA0449DF155548AB1EF7BDF4 (int32_t ___time0, const RuntimeMethod* method);
// System.Int32 AntiAddictionSdk.OpenSource.AntiAddictionCommonConfig::get_nightStrictStart()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t AntiAddictionCommonConfig_get_nightStrictStart_mB00FDD33B154F1C055967C97174683C1663DEE95_inline (AntiAddictionCommonConfig_tFB2E9080FF6D416F4697BBF3B6CE8BCFECFF41CC * __this, const RuntimeMethod* method);
// System.Void AntiAddictionSdk.OpenSource.AntiAddiction::AntiAddictionSetCurfewHourStart(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AntiAddiction_AntiAddictionSetCurfewHourStart_mBE51549C706506C8F3652C2EEEFA58BDCE5B1526 (int32_t ___time0, const RuntimeMethod* method);
// System.Int32 AntiAddictionSdk.OpenSource.AntiAddictionCommonConfig::get_nightStrictEnd()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t AntiAddictionCommonConfig_get_nightStrictEnd_m7224D1E7860A2F15354859A7BB5F8B89D6135D46_inline (AntiAddictionCommonConfig_tFB2E9080FF6D416F4697BBF3B6CE8BCFECFF41CC * __this, const RuntimeMethod* method);
// System.Void AntiAddictionSdk.OpenSource.AntiAddiction::AntiAddictionSetCurfewHourEnd(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AntiAddiction_AntiAddictionSetCurfewHourEnd_m7C9EF4B51CD0C8B8DFBBD0B107137D3E4DE0F9F1 (int32_t ___time0, const RuntimeMethod* method);
// System.Int32 AntiAddictionSdk.OpenSource.AntiAddictionCommonConfig::get_childCommonTime()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t AntiAddictionCommonConfig_get_childCommonTime_m2573A1F8EE1B7DA9551587105636C60CE1AC24C5_inline (AntiAddictionCommonConfig_tFB2E9080FF6D416F4697BBF3B6CE8BCFECFF41CC * __this, const RuntimeMethod* method);
// System.Void AntiAddictionSdk.OpenSource.AntiAddiction::AntiAddictionSetMinorCommonDayTotalTime(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AntiAddiction_AntiAddictionSetMinorCommonDayTotalTime_m39F1A8D107181CE206070BCAEAFDE1EFA0C6F767 (int32_t ___time0, const RuntimeMethod* method);
// System.Int32 AntiAddictionSdk.OpenSource.AntiAddictionCommonConfig::get_childHolidayTime()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t AntiAddictionCommonConfig_get_childHolidayTime_m4EF339B9D2E9630EE205D1E301EBA9D74269512E_inline (AntiAddictionCommonConfig_tFB2E9080FF6D416F4697BBF3B6CE8BCFECFF41CC * __this, const RuntimeMethod* method);
// System.Void AntiAddictionSdk.OpenSource.AntiAddiction::AntiAddictionSetMinorHolidayTotalTime(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AntiAddiction_AntiAddictionSetMinorHolidayTotalTime_m500182B839700B07058255617848FB0870480C90 (int32_t ___time0, const RuntimeMethod* method);
// System.Int32 AntiAddictionSdk.OpenSource.AntiAddictionCommonConfig::get_teenPayLimit()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t AntiAddictionCommonConfig_get_teenPayLimit_mC1B351F9866256C55FC8954569F647FF3C1D391A_inline (AntiAddictionCommonConfig_tFB2E9080FF6D416F4697BBF3B6CE8BCFECFF41CC * __this, const RuntimeMethod* method);
// System.Void AntiAddictionSdk.OpenSource.AntiAddiction::AntiAddictionSetSinglePaymentAmountLimitJunior(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AntiAddiction_AntiAddictionSetSinglePaymentAmountLimitJunior_m667DB958E1FE6BFB4E063301F79D78B69DC96C1C (int32_t ___amount0, const RuntimeMethod* method);
// System.Int32 AntiAddictionSdk.OpenSource.AntiAddictionCommonConfig::get_teenMonthPayLimit()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t AntiAddictionCommonConfig_get_teenMonthPayLimit_mAA105293E331368F58DD74F647C1130392742C03_inline (AntiAddictionCommonConfig_tFB2E9080FF6D416F4697BBF3B6CE8BCFECFF41CC * __this, const RuntimeMethod* method);
// System.Void AntiAddictionSdk.OpenSource.AntiAddiction::AntiAddictionSetMouthTotalPaymentAmountLimitJunior(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AntiAddiction_AntiAddictionSetMouthTotalPaymentAmountLimitJunior_m28A51E8E63E3ECD5DEAC1E220FBEDEDA5063C1EB (int32_t ___amount0, const RuntimeMethod* method);
// System.Int32 AntiAddictionSdk.OpenSource.AntiAddictionCommonConfig::get_youngPayLimit()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t AntiAddictionCommonConfig_get_youngPayLimit_mB212A13FFAFC8DF489E84D5030A75FE2994B88D0_inline (AntiAddictionCommonConfig_tFB2E9080FF6D416F4697BBF3B6CE8BCFECFF41CC * __this, const RuntimeMethod* method);
// System.Void AntiAddictionSdk.OpenSource.AntiAddiction::AntiAddictionSetSinglePaymentAmountLimitSenior(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AntiAddiction_AntiAddictionSetSinglePaymentAmountLimitSenior_mAE4ECE5948FA0BCBC711CC52B5AC2B9D95B9F3B7 (int32_t ___amount0, const RuntimeMethod* method);
// System.Int32 AntiAddictionSdk.OpenSource.AntiAddictionCommonConfig::get_youngMonthPayLimit()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t AntiAddictionCommonConfig_get_youngMonthPayLimit_mC6CD61276FFD9DFA2572FD1A3893374E0E0D21B2_inline (AntiAddictionCommonConfig_tFB2E9080FF6D416F4697BBF3B6CE8BCFECFF41CC * __this, const RuntimeMethod* method);
// System.Void AntiAddictionSdk.OpenSource.AntiAddiction::AntiAddictionSetMouthTotalPaymentAmountLimitSenior(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AntiAddiction_AntiAddictionSetMouthTotalPaymentAmountLimitSenior_m35AA58E03E1080D35113F8AD48F9AB9E224B30B9 (int32_t ___amount0, const RuntimeMethod* method);
// System.Void AntiAddictionSdk.OpenSource.AntiAddiction::AntiAddictionSetHost(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AntiAddiction_AntiAddictionSetHost_m48634C3EA6E64A04037FC4BCBBFE932A6247143E (String_t* ___host0, const RuntimeMethod* method);
// System.Void AntiAddictionSdk.OpenSource.AntiAddiction::AntiAddictionLogin(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AntiAddiction_AntiAddictionLogin_mEF3B1D5F0989C537D2B01A778CF65E6AA07B29D0 (String_t* ___userId0, int32_t ___userType1, const RuntimeMethod* method);
// System.Void AntiAddictionSdk.OpenSource.AntiAddiction::AntiAddictionUpdateUserType(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AntiAddiction_AntiAddictionUpdateUserType_m6078706588A7174B55605F9E8316FBF7A63F78D0 (int32_t ___userType0, const RuntimeMethod* method);
// System.Void AntiAddictionSdk.OpenSource.AntiAddiction::AntiAddictionLogout()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AntiAddiction_AntiAddictionLogout_m354E46A655E5DAE4640D38C8919445B47F1E84FF (const RuntimeMethod* method);
// System.Int32 AntiAddictionSdk.OpenSource.AntiAddiction::AntiAddictionGetUserType(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AntiAddiction_AntiAddictionGetUserType_m260E02FBB4278D402E0972299AD8C394D6BF96EE (String_t* ___userId0, const RuntimeMethod* method);
// System.Void AntiAddictionSdk.OpenSource.AntiAddiction::AntiAddictionCheckPayLimit(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AntiAddiction_AntiAddictionCheckPayLimit_mB213F29D2B522C371A6CCC68530F73281D9632FB (int32_t ___amount0, const RuntimeMethod* method);
// System.Void AntiAddictionSdk.OpenSource.AntiAddiction::AntiAddictionPaySuccess(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AntiAddiction_AntiAddictionPaySuccess_m9C937B4CBC757F5A7BD7367D972C890EC19F8C07 (int32_t ___amount0, const RuntimeMethod* method);
// System.Void AntiAddictionSdk.OpenSource.AntiAddiction::AntiAddictionCheckChatLimit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AntiAddiction_AntiAddictionCheckChatLimit_mA587F1A7E6D26561677477A48C003D8189834ED2 (const RuntimeMethod* method);
// System.Void AntiAddictionSdk.OpenSource.AntiAddiction::AntiAddictionOpenRealName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AntiAddiction_AntiAddictionOpenRealName_m9259FE768B97709344BC0ECB73A4214F07BEDAD9 (const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Int32 AntiAddictionSdk.OpenSource.AntiAddictionCommonConfig/Builder::get_gusterTime()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Builder_get_gusterTime_mBE1D4FBD0AC9E997EF672842D969FF4824BA155D_inline (Builder_t23ABFB73E05835CA7F11F21092D5E8652D8D081E * __this, const RuntimeMethod* method);
// System.Void AntiAddictionSdk.OpenSource.AntiAddictionCommonConfig::set_gusterTime(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AntiAddictionCommonConfig_set_gusterTime_m301ADA09A6CDE73737817329CCB45F214DA20BE1_inline (AntiAddictionCommonConfig_tFB2E9080FF6D416F4697BBF3B6CE8BCFECFF41CC * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Int32 AntiAddictionSdk.OpenSource.AntiAddictionCommonConfig/Builder::get_nightStrictStart()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Builder_get_nightStrictStart_m5BECFE51FB4A529782DB60A66C08BBEA9B4E012D_inline (Builder_t23ABFB73E05835CA7F11F21092D5E8652D8D081E * __this, const RuntimeMethod* method);
// System.Void AntiAddictionSdk.OpenSource.AntiAddictionCommonConfig::set_nightStrictStart(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AntiAddictionCommonConfig_set_nightStrictStart_m5034B338676721179AD37BFB8F725FACE8066E5F_inline (AntiAddictionCommonConfig_tFB2E9080FF6D416F4697BBF3B6CE8BCFECFF41CC * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Int32 AntiAddictionSdk.OpenSource.AntiAddictionCommonConfig/Builder::get_nightStrictEnd()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Builder_get_nightStrictEnd_mEF50A39C5C4CA417E38CCF3C20C39C1D79C2326A_inline (Builder_t23ABFB73E05835CA7F11F21092D5E8652D8D081E * __this, const RuntimeMethod* method);
// System.Void AntiAddictionSdk.OpenSource.AntiAddictionCommonConfig::set_nightStrictEnd(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AntiAddictionCommonConfig_set_nightStrictEnd_m9AFD77B49B44593F2827E39ECA96894D510B8CD7_inline (AntiAddictionCommonConfig_tFB2E9080FF6D416F4697BBF3B6CE8BCFECFF41CC * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Int32 AntiAddictionSdk.OpenSource.AntiAddictionCommonConfig/Builder::get_childCommonTime()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Builder_get_childCommonTime_mF77BC95A656CB982A103D280FCBD0BF7D229E41E_inline (Builder_t23ABFB73E05835CA7F11F21092D5E8652D8D081E * __this, const RuntimeMethod* method);
// System.Void AntiAddictionSdk.OpenSource.AntiAddictionCommonConfig::set_childCommonTime(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AntiAddictionCommonConfig_set_childCommonTime_mE7404312305C64D0A717178D41EF5A911E4C1923_inline (AntiAddictionCommonConfig_tFB2E9080FF6D416F4697BBF3B6CE8BCFECFF41CC * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Int32 AntiAddictionSdk.OpenSource.AntiAddictionCommonConfig/Builder::get_childHolidayTime()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Builder_get_childHolidayTime_m0921784655E54C8DEC175F5AB18FB2C289B2E2BC_inline (Builder_t23ABFB73E05835CA7F11F21092D5E8652D8D081E * __this, const RuntimeMethod* method);
// System.Void AntiAddictionSdk.OpenSource.AntiAddictionCommonConfig::set_childHolidayTime(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AntiAddictionCommonConfig_set_childHolidayTime_m7A4C5AFFDB2E8A3CBA188881A8789B7DC2361E41_inline (AntiAddictionCommonConfig_tFB2E9080FF6D416F4697BBF3B6CE8BCFECFF41CC * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Int32 AntiAddictionSdk.OpenSource.AntiAddictionCommonConfig/Builder::get_teenPayLimit()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Builder_get_teenPayLimit_mB43D99A68624D1FE4CC8F2B636921DE645C950B8_inline (Builder_t23ABFB73E05835CA7F11F21092D5E8652D8D081E * __this, const RuntimeMethod* method);
// System.Void AntiAddictionSdk.OpenSource.AntiAddictionCommonConfig::set_teenPayLimit(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AntiAddictionCommonConfig_set_teenPayLimit_m2FE3A8D996DDE73AB50FB435B9A562A6003D4314_inline (AntiAddictionCommonConfig_tFB2E9080FF6D416F4697BBF3B6CE8BCFECFF41CC * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Int32 AntiAddictionSdk.OpenSource.AntiAddictionCommonConfig/Builder::get_teenMonthPayLimit()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Builder_get_teenMonthPayLimit_mDA52D5129A614D37736CF081E1E706D73C5F8A0F_inline (Builder_t23ABFB73E05835CA7F11F21092D5E8652D8D081E * __this, const RuntimeMethod* method);
// System.Void AntiAddictionSdk.OpenSource.AntiAddictionCommonConfig::set_teenMonthPayLimit(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AntiAddictionCommonConfig_set_teenMonthPayLimit_m5354072F04EC31E23785E01013E32AC9AC7FE37E_inline (AntiAddictionCommonConfig_tFB2E9080FF6D416F4697BBF3B6CE8BCFECFF41CC * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Int32 AntiAddictionSdk.OpenSource.AntiAddictionCommonConfig/Builder::get_youngPayLimit()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Builder_get_youngPayLimit_mBB76B75B2FC238BBF1D9C3EC84DACE4EEAD34BAF_inline (Builder_t23ABFB73E05835CA7F11F21092D5E8652D8D081E * __this, const RuntimeMethod* method);
// System.Void AntiAddictionSdk.OpenSource.AntiAddictionCommonConfig::set_youngPayLimit(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AntiAddictionCommonConfig_set_youngPayLimit_mA7844C408091C806E7B1664098E55946A1699AFD_inline (AntiAddictionCommonConfig_tFB2E9080FF6D416F4697BBF3B6CE8BCFECFF41CC * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Int32 AntiAddictionSdk.OpenSource.AntiAddictionCommonConfig/Builder::get_youngMonthPayLimit()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Builder_get_youngMonthPayLimit_m48759AE592414B91631DD166FCA4FD47F6D7EA5A_inline (Builder_t23ABFB73E05835CA7F11F21092D5E8652D8D081E * __this, const RuntimeMethod* method);
// System.Void AntiAddictionSdk.OpenSource.AntiAddictionCommonConfig::set_youngMonthPayLimit(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AntiAddictionCommonConfig_set_youngMonthPayLimit_m54A49A7275BDC7328DDE8FCBEEFFB091F9EF8BA1_inline (AntiAddictionCommonConfig_tFB2E9080FF6D416F4697BBF3B6CE8BCFECFF41CC * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Boolean AntiAddictionSdk.OpenSource.AntiAddictionFunctionConfig/Builder::get_useSdkRealName()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Builder_get_useSdkRealName_m375A65580FE1D1D9B93619F348B4796E3F32C0C7_inline (Builder_tDB5BA46A3678FD0B0719F961C0D5350B88F23E53 * __this, const RuntimeMethod* method);
// System.Void AntiAddictionSdk.OpenSource.AntiAddictionFunctionConfig::set_useSdkRealName(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AntiAddictionFunctionConfig_set_useSdkRealName_m3208F98CB513C358EC8D4FEB7A25946042B47B12_inline (AntiAddictionFunctionConfig_t40E5C47E03007344B5CE5A8D78DE06A18336E8E1 * __this, bool ___value0, const RuntimeMethod* method);
// System.Boolean AntiAddictionSdk.OpenSource.AntiAddictionFunctionConfig/Builder::get_useSdkPaymentLimit()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Builder_get_useSdkPaymentLimit_m09FDC5F7F8F6E38306C3A657D367379D824C3D02_inline (Builder_tDB5BA46A3678FD0B0719F961C0D5350B88F23E53 * __this, const RuntimeMethod* method);
// System.Void AntiAddictionSdk.OpenSource.AntiAddictionFunctionConfig::set_useSdkPaymentLimit(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AntiAddictionFunctionConfig_set_useSdkPaymentLimit_m59BB6A1D0F0A4F6F23395BBD0A38E9EB7BF2B8D3_inline (AntiAddictionFunctionConfig_t40E5C47E03007344B5CE5A8D78DE06A18336E8E1 * __this, bool ___value0, const RuntimeMethod* method);
// System.Boolean AntiAddictionSdk.OpenSource.AntiAddictionFunctionConfig/Builder::get_useSdkOnlineTimeLimit()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Builder_get_useSdkOnlineTimeLimit_mB4F1E0128EB73B44E4CE4E8D19C8E130994B3DF7_inline (Builder_tDB5BA46A3678FD0B0719F961C0D5350B88F23E53 * __this, const RuntimeMethod* method);
// System.Void AntiAddictionSdk.OpenSource.AntiAddictionFunctionConfig::set_useSdkOnlineTimeLimit(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AntiAddictionFunctionConfig_set_useSdkOnlineTimeLimit_m8F953FB092167CCD963865B4E3772D54EC713B8E_inline (AntiAddictionFunctionConfig_t40E5C47E03007344B5CE5A8D78DE06A18336E8E1 * __this, bool ___value0, const RuntimeMethod* method);
// System.Boolean AntiAddictionSdk.OpenSource.AntiAddictionFunctionConfig/Builder::get_showSwitchAccountButton()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Builder_get_showSwitchAccountButton_m01A286DC92B933054720986D41F817EEB4376EC5_inline (Builder_tDB5BA46A3678FD0B0719F961C0D5350B88F23E53 * __this, const RuntimeMethod* method);
// System.Void AntiAddictionSdk.OpenSource.AntiAddictionFunctionConfig::set_showSwitchAccountButton(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AntiAddictionFunctionConfig_set_showSwitchAccountButton_m81E1AC84F7DCBE2BDACC1AEF7176959ACFF7AA6E_inline (AntiAddictionFunctionConfig_t40E5C47E03007344B5CE5A8D78DE06A18336E8E1 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.AndroidJavaProxy::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaProxy__ctor_m1E8F4C0D87B74B81C64A54A584B2FF4ECE571238 (AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF * __this, String_t* ___javaInterface0, const RuntimeMethod* method);
// System.Boolean System.String::Equals(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Equals_m8A062B96B61A7D652E7D73C9B3E904F6B0E5F41D (String_t* __this, String_t* ___value0, const RuntimeMethod* method);
// UnityEngine.RuntimePlatform UnityEngine.Application::get_platform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Application_get_platform_mB22F7F39CDD46667C3EF64507E55BB7DA18F66C4 (const RuntimeMethod* method);
// TGCenterSdk.Platforms.Android.TGCenterClient TGCenterSdk.Platforms.Android.TGCenterClient::get_Instance()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TGCenterClient_t852F76F73B20352EC6238AC9B9F507DF071CF9B0 * TGCenterClient_get_Instance_m58BCC70F95FF029755E79A92DAB78A0EBFBF9239_inline (const RuntimeMethod* method);
// TGCenterSdk.Platforms.iOS.TGCenterClient TGCenterSdk.Platforms.iOS.TGCenterClient::get_Instance()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TGCenterClient_t3FFBC93E175D733E5FF8A30D13354AED72C0FCC9 * TGCenterClient_get_Instance_m3B9AB680B87D6BF5B90C8E7928F77CF79309DADC_inline (const RuntimeMethod* method);
// System.Void TGCenterSdk.Common.DummyTGCenterClient::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DummyTGCenterClient__ctor_m6159087E75ACC2883F1F543438FD9CCA9092693F (DummyTGCenterClient_tA73AF5E21738B8A4677C62820E0A64DDF318CCE1 * __this, const RuntimeMethod* method);
// System.Void TGCenterSdk.Platforms.Android.PrivacyPolicyHelperClient::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PrivacyPolicyHelperClient__ctor_m1CD24831541A91EAD5D754D1A0C5ACF5A1FF91C6 (PrivacyPolicyHelperClient_tB067E8E989D92DA23AE4C378F99922F83EEB8AD9 * __this, const RuntimeMethod* method);
// System.Void TGCenterSdk.Platforms.iOS.PrivacyPolicyHelperClient::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PrivacyPolicyHelperClient__ctor_m2F94ADF5E7AFD08E357B7522E0792A0CCC853F37 (PrivacyPolicyHelperClient_tCE377D6E958FD4996E71424C6705E0B1CA0327E0 * __this, const RuntimeMethod* method);
// System.Void TGCenterSdk.Common.DummyPrivacyPolicyHelperClient::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DummyPrivacyPolicyHelperClient__ctor_m07F30113EE62460423DE6E64AC561DFB7A5688C8 (DummyPrivacyPolicyHelperClient_tA760F3FD14C238520B359076F8F2943A0396C839 * __this, const RuntimeMethod* method);
// System.Void TGCenterSdk.Api.Day1Retention::set_RetentionType(TGCenterSdk.Api.Day1Retention/RetentionTypes)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Day1Retention_set_RetentionType_m0EF7541CA83C4D076AE9CB8EC2219236279C5845_inline (Day1Retention_t5C5C48267E7FA734CD696706DCF7C0DC29025BB3 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void TGCenterSdk.Api.Day1Retention::set_StartCount(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Day1Retention_set_StartCount_m48A6E5103B2704C5FF294851453992E486AF8CF0_inline (Day1Retention_t5C5C48267E7FA734CD696706DCF7C0DC29025BB3 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void TGCenterSdk.Api.Day1Retention::set_EndCount(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Day1Retention_set_EndCount_mF67F8A9E6F19E5B6671FCA2903CE611E3198C238_inline (Day1Retention_t5C5C48267E7FA734CD696706DCF7C0DC29025BB3 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.GUIStyle::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyle__ctor_mDA0E00D0017FC0B2FC333C5DD6E1EDBAE3BCB8E3 (GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.GUIStyle::set_fontSize(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyle_set_fontSize_mFA02B9950E09F880976FD2FF646FB8AAEED1C5C6 (GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.GUIStyle::set_alignment(UnityEngine.TextAnchor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyle_set_alignment_mCF8FDA9DA149F528DCDC19680AEED46F25161D89 (GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Rect::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect__ctor_m12075526A02B55B680716A34AD5287B223122B70 (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * __this, float ___x0, float ___y1, float ___width2, float ___height3, const RuntimeMethod* method);
// System.Void UnityEngine.GUI::Label(UnityEngine.Rect,System.String,UnityEngine.GUIStyle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUI_Label_mE97FBC73519323E93EFF86E1F1C96E7F4B612850 (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___position0, String_t* ___text1, GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___style2, const RuntimeMethod* method);
// System.Boolean UnityEngine.GUI::Button(UnityEngine.Rect,System.String,UnityEngine.GUIStyle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GUI_Button_mA1605D5F2A40D770F3E0CCA6D88E7947564B3F7A (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___position0, String_t* ___text1, GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___style2, const RuntimeMethod* method);
// TGCenterSdk.Api.PrivacyPolicyHelper TGCenterSdk.Api.PrivacyPolicyHelper::get_Instance()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR PrivacyPolicyHelper_t5983E6361B35F6389228D994C018B16993468EA3 * PrivacyPolicyHelper_get_Instance_mA461052DDD65EE4DF0DA5FD90B324F91E236000F_inline (const RuntimeMethod* method);
// System.Void TGCenterSdk.Api.PrivacyPolicyHelper::JumpToUserAgreement()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PrivacyPolicyHelper_JumpToUserAgreement_mBDE97B36AFF06F68EF84B838F3BFC030DEAB893B (PrivacyPolicyHelper_t5983E6361B35F6389228D994C018B16993468EA3 * __this, const RuntimeMethod* method);
// System.Void TGCenterSdk.Api.PrivacyPolicyHelper::JumpToPrivacyPolicy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PrivacyPolicyHelper_JumpToPrivacyPolicy_mFB7F0D55BC1E9D7B4145C2B5CBFBB6487110C146 (PrivacyPolicyHelper_t5983E6361B35F6389228D994C018B16993468EA3 * __this, const RuntimeMethod* method);
// System.Void AntiAddictionSdk.OpenSource.AntiAddiction::login(System.String,AntiAddictionSdk.OpenSource.AntiAddictionUserType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AntiAddiction_login_m5AE2E22172B6C1C0C498A87EE67F628D5FF16954 (String_t* ___userId0, int32_t ___userType1, const RuntimeMethod* method);
// System.Void AntiAddictionSdk.OpenSource.AntiAddiction::logout()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AntiAddiction_logout_m5FA5AEAE9AD1B85A78DC807897B298C51DFCE1E8 (const RuntimeMethod* method);
// System.Void AntiAddictionSdk.OpenSource.AntiAddiction::checkPayLimit(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AntiAddiction_checkPayLimit_mCFE9D907D091DE60145C3E5DD85EE4B2C0C0AD78 (int32_t ___price0, const RuntimeMethod* method);
// System.Void AntiAddictionSdk.OpenSource.AntiAddiction::checkChatLimit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AntiAddiction_checkChatLimit_m8FB33B6E1B85169C64F2898A6EE275A497E52BC7 (const RuntimeMethod* method);
// System.Void AntiAddictionSdk.OpenSource.AntiAddiction::openRealName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AntiAddiction_openRealName_mFD0E6CC39FFE848DEE3BBDC6E2701F10729F2D35 (const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Boolean TGCenterSdk.Api.TGCenter::IsUserAgreePolicy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TGCenter_IsUserAgreePolicy_m5BE7174BDE944A4C6ECAACD5CF6AEB67DE880F2C (const RuntimeMethod* method);
// System.Void MainBehaviour::InitModooPlay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainBehaviour_InitModooPlay_mB6DCCC36721AD85008B5CA02E09D19733FB00D95 (MainBehaviour_tDE09AB0E3B7AB47BEC0D8229B68A94AA3FE0DEC6 * __this, const RuntimeMethod* method);
// System.Void MainBehaviour::ShowDefaultPolicyDialog()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainBehaviour_ShowDefaultPolicyDialog_mDDDA53D53BDD0E6A59D10481F57D9A47989E38D7 (MainBehaviour_tDE09AB0E3B7AB47BEC0D8229B68A94AA3FE0DEC6 * __this, const RuntimeMethod* method);
// System.Void AntiAddictionSdk.OpenSource.AntiAddiction::onStop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AntiAddiction_onStop_m3488BE271434ABDD86ACE6D2977DEB164CA28079 (const RuntimeMethod* method);
// System.Void AntiAddictionSdk.OpenSource.AntiAddiction::onResume()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AntiAddiction_onResume_m69AEDD48BE9176DC1054FA0E0A3FCBE23B004E5C (const RuntimeMethod* method);
// System.Void TGCenterSdk.Api.InitConfig::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InitConfig__ctor_m90192792C8C801B94C5F0BF8303191861979E8D2 (InitConfig_tB77587871EE04B53CB86593F9C7461FF0B143A47 * __this, const RuntimeMethod* method);
// System.Void TGCenterSdk.Api.Day1Retention::.ctor(TGCenterSdk.Api.Day1Retention/RetentionTypes,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Day1Retention__ctor_m5AC87C6754EAD4FF846E084887A8AC84649DA7D8 (Day1Retention_t5C5C48267E7FA734CD696706DCF7C0DC29025BB3 * __this, int32_t ___retentionType0, int32_t ___startCount1, int32_t ___endCount2, const RuntimeMethod* method);
// System.Void TGCenterSdk.Api.TGCenter::Init(TGCenterSdk.Api.InitConfig)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TGCenter_Init_mF0F3AD663639A35E3986B8BBD2DA76999D1A31A3 (InitConfig_tB77587871EE04B53CB86593F9C7461FF0B143A47 * ___config0, const RuntimeMethod* method);
// System.Void MainBehaviour::SetFunctionConfig()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainBehaviour_SetFunctionConfig_mF1C3A15FD909A91AD2134D68BE766C2D28710131 (MainBehaviour_tDE09AB0E3B7AB47BEC0D8229B68A94AA3FE0DEC6 * __this, const RuntimeMethod* method);
// System.Void MainBehaviour::SetCommonConfig()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainBehaviour_SetCommonConfig_m96D63F1A1DA2AF6EFC8F3FB377E1F9E4D9CC219A (MainBehaviour_tDE09AB0E3B7AB47BEC0D8229B68A94AA3FE0DEC6 * __this, const RuntimeMethod* method);
// System.Void MainBehaviour::InitAntiAddiction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainBehaviour_InitAntiAddiction_mC7CF390E52BA68CE6A8198A5D1B1D62D810D40DE (MainBehaviour_tDE09AB0E3B7AB47BEC0D8229B68A94AA3FE0DEC6 * __this, const RuntimeMethod* method);
// System.Void MainBehaviour/PrivacyAgreeListener::.ctor(MainBehaviour)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PrivacyAgreeListener__ctor_m8D597215B33E7D3C071876D7BA69DF3588679700 (PrivacyAgreeListener_t7E277E2FBF137E9ABC871EE180DD7FFC9FDE5DEA * __this, MainBehaviour_tDE09AB0E3B7AB47BEC0D8229B68A94AA3FE0DEC6 * ___behaviour0, const RuntimeMethod* method);
// System.Void TGCenterSdk.Api.PrivacyPolicyHelper::SetAgreeListener(TGCenterSdk.Api.PrivacyPolicyHelper/AgreeListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PrivacyPolicyHelper_SetAgreeListener_m557D780B21D647C8D0C39806B6DB1E5CE2AE922A (PrivacyPolicyHelper_t5983E6361B35F6389228D994C018B16993468EA3 * __this, RuntimeObject* ___listener0, const RuntimeMethod* method);
// System.Void TGCenterSdk.Api.PrivacyPolicyHelper::ShowPrivacyDialog()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PrivacyPolicyHelper_ShowPrivacyDialog_mCEA153978D106F6BF76F14CCE4552BA5EE2C0DC5 (PrivacyPolicyHelper_t5983E6361B35F6389228D994C018B16993468EA3 * __this, const RuntimeMethod* method);
// System.Void AntiAddictionSdk.OpenSource.AntiAddictionFunctionConfig/Builder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Builder__ctor_m72ED79CB27C2FC7B10D82FA3EF44B41DE9A2F2F3 (Builder_tDB5BA46A3678FD0B0719F961C0D5350B88F23E53 * __this, const RuntimeMethod* method);
// AntiAddictionSdk.OpenSource.AntiAddictionFunctionConfig/Builder AntiAddictionSdk.OpenSource.AntiAddictionFunctionConfig/Builder::UseSdkRealName(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_tDB5BA46A3678FD0B0719F961C0D5350B88F23E53 * Builder_UseSdkRealName_mD3D17C92A46CC7071027C2F642819C6336B87888 (Builder_tDB5BA46A3678FD0B0719F961C0D5350B88F23E53 * __this, bool ___useSdkRealName0, const RuntimeMethod* method);
// AntiAddictionSdk.OpenSource.AntiAddictionFunctionConfig/Builder AntiAddictionSdk.OpenSource.AntiAddictionFunctionConfig/Builder::UseSdkPaymentLimit(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_tDB5BA46A3678FD0B0719F961C0D5350B88F23E53 * Builder_UseSdkPaymentLimit_mF3408CC2CC2A36810955F873F1186DF85BF1F8C1 (Builder_tDB5BA46A3678FD0B0719F961C0D5350B88F23E53 * __this, bool ___useSdkPaymentLimit0, const RuntimeMethod* method);
// AntiAddictionSdk.OpenSource.AntiAddictionFunctionConfig/Builder AntiAddictionSdk.OpenSource.AntiAddictionFunctionConfig/Builder::UseSdkOnlineTimeLimit(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_tDB5BA46A3678FD0B0719F961C0D5350B88F23E53 * Builder_UseSdkOnlineTimeLimit_mBFB25B95F297A16E78FA919EC504102B4B7E372E (Builder_tDB5BA46A3678FD0B0719F961C0D5350B88F23E53 * __this, bool ___useSdkOnlineTimeLimit0, const RuntimeMethod* method);
// AntiAddictionSdk.OpenSource.AntiAddictionFunctionConfig/Builder AntiAddictionSdk.OpenSource.AntiAddictionFunctionConfig/Builder::ShowSwitchAccountButton(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_tDB5BA46A3678FD0B0719F961C0D5350B88F23E53 * Builder_ShowSwitchAccountButton_mCD8A56D007BF61736B6AF0E287BECB8B0D144CB7 (Builder_tDB5BA46A3678FD0B0719F961C0D5350B88F23E53 * __this, bool ___showSwitchAccountButton0, const RuntimeMethod* method);
// AntiAddictionSdk.OpenSource.AntiAddictionFunctionConfig AntiAddictionSdk.OpenSource.AntiAddictionFunctionConfig/Builder::Build()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AntiAddictionFunctionConfig_t40E5C47E03007344B5CE5A8D78DE06A18336E8E1 * Builder_Build_m00AC1CAF2C25CD28BBC9453E28034F81DE5C99BD (Builder_tDB5BA46A3678FD0B0719F961C0D5350B88F23E53 * __this, const RuntimeMethod* method);
// System.Void AntiAddictionSdk.OpenSource.AntiAddiction::fuctionConfig(AntiAddictionSdk.OpenSource.AntiAddictionFunctionConfig)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AntiAddiction_fuctionConfig_mAC357B27F762A1154F95E5C720049F626C865948 (AntiAddictionFunctionConfig_t40E5C47E03007344B5CE5A8D78DE06A18336E8E1 * ___config0, const RuntimeMethod* method);
// System.Void AntiAddictionSdk.OpenSource.AntiAddictionCommonConfig/Builder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Builder__ctor_m20BB616BF2DA2A621A9E581134AA0D28E06D09C2 (Builder_t23ABFB73E05835CA7F11F21092D5E8652D8D081E * __this, const RuntimeMethod* method);
// AntiAddictionSdk.OpenSource.AntiAddictionCommonConfig/Builder AntiAddictionSdk.OpenSource.AntiAddictionCommonConfig/Builder::GusterTime(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_t23ABFB73E05835CA7F11F21092D5E8652D8D081E * Builder_GusterTime_m27D5FC1ECEB1B84D9A498E9B1A326D11E847C116 (Builder_t23ABFB73E05835CA7F11F21092D5E8652D8D081E * __this, int32_t ___gusterTime0, const RuntimeMethod* method);
// AntiAddictionSdk.OpenSource.AntiAddictionCommonConfig/Builder AntiAddictionSdk.OpenSource.AntiAddictionCommonConfig/Builder::NightStrictStart(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_t23ABFB73E05835CA7F11F21092D5E8652D8D081E * Builder_NightStrictStart_m5694B47B69326B5DF33E5997AB6F443794B97128 (Builder_t23ABFB73E05835CA7F11F21092D5E8652D8D081E * __this, int32_t ___nightStrictStart0, const RuntimeMethod* method);
// AntiAddictionSdk.OpenSource.AntiAddictionCommonConfig/Builder AntiAddictionSdk.OpenSource.AntiAddictionCommonConfig/Builder::NightStrictEnd(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_t23ABFB73E05835CA7F11F21092D5E8652D8D081E * Builder_NightStrictEnd_mD107FDC732B3C3B44B3074620747244FF837CE3D (Builder_t23ABFB73E05835CA7F11F21092D5E8652D8D081E * __this, int32_t ___nightStrictEnd0, const RuntimeMethod* method);
// AntiAddictionSdk.OpenSource.AntiAddictionCommonConfig/Builder AntiAddictionSdk.OpenSource.AntiAddictionCommonConfig/Builder::ChildCommonTime(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_t23ABFB73E05835CA7F11F21092D5E8652D8D081E * Builder_ChildCommonTime_m48BEF0C8290289E4525B7A0A76630C3F5DF71117 (Builder_t23ABFB73E05835CA7F11F21092D5E8652D8D081E * __this, int32_t ___childCommonTime0, const RuntimeMethod* method);
// AntiAddictionSdk.OpenSource.AntiAddictionCommonConfig/Builder AntiAddictionSdk.OpenSource.AntiAddictionCommonConfig/Builder::ChildHolidayTime(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_t23ABFB73E05835CA7F11F21092D5E8652D8D081E * Builder_ChildHolidayTime_mBFAC73C641639A8F54F9E90FBA2F8C853CB5FC23 (Builder_t23ABFB73E05835CA7F11F21092D5E8652D8D081E * __this, int32_t ___childHolidayTime0, const RuntimeMethod* method);
// AntiAddictionSdk.OpenSource.AntiAddictionCommonConfig/Builder AntiAddictionSdk.OpenSource.AntiAddictionCommonConfig/Builder::TeenPayLimit(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_t23ABFB73E05835CA7F11F21092D5E8652D8D081E * Builder_TeenPayLimit_m49E81F303D341738C22F2EEF5EBD72E3A568FD37 (Builder_t23ABFB73E05835CA7F11F21092D5E8652D8D081E * __this, int32_t ___teenPayLimit0, const RuntimeMethod* method);
// AntiAddictionSdk.OpenSource.AntiAddictionCommonConfig/Builder AntiAddictionSdk.OpenSource.AntiAddictionCommonConfig/Builder::TeenMonthPayLimit(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_t23ABFB73E05835CA7F11F21092D5E8652D8D081E * Builder_TeenMonthPayLimit_m133685742C2AAB0AFE22EA0685A3184F2C2F9326 (Builder_t23ABFB73E05835CA7F11F21092D5E8652D8D081E * __this, int32_t ___teenMonthPayLimit0, const RuntimeMethod* method);
// AntiAddictionSdk.OpenSource.AntiAddictionCommonConfig/Builder AntiAddictionSdk.OpenSource.AntiAddictionCommonConfig/Builder::YoungPayLimit(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_t23ABFB73E05835CA7F11F21092D5E8652D8D081E * Builder_YoungPayLimit_m1120BFAB62B7356A4F33B78037AEA1F9155DE988 (Builder_t23ABFB73E05835CA7F11F21092D5E8652D8D081E * __this, int32_t ___youngPayLimit0, const RuntimeMethod* method);
// AntiAddictionSdk.OpenSource.AntiAddictionCommonConfig/Builder AntiAddictionSdk.OpenSource.AntiAddictionCommonConfig/Builder::YoungMonthPayLimit(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_t23ABFB73E05835CA7F11F21092D5E8652D8D081E * Builder_YoungMonthPayLimit_mAD18CA3B28E96ACB06ABDC9F7D97C6B166836183 (Builder_t23ABFB73E05835CA7F11F21092D5E8652D8D081E * __this, int32_t ___youngMonthPayLimit0, const RuntimeMethod* method);
// AntiAddictionSdk.OpenSource.AntiAddictionCommonConfig AntiAddictionSdk.OpenSource.AntiAddictionCommonConfig/Builder::Build()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AntiAddictionCommonConfig_tFB2E9080FF6D416F4697BBF3B6CE8BCFECFF41CC * Builder_Build_m49237B6B86BCD1A6F26D0587B25EFA0D82947E80 (Builder_t23ABFB73E05835CA7F11F21092D5E8652D8D081E * __this, const RuntimeMethod* method);
// System.Void AntiAddictionSdk.OpenSource.AntiAddiction::commonConfig(AntiAddictionSdk.OpenSource.AntiAddictionCommonConfig)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AntiAddiction_commonConfig_m8BCCC12387C28F91BBD1576E3D42F999407F2819 (AntiAddictionCommonConfig_tFB2E9080FF6D416F4697BBF3B6CE8BCFECFF41CC * ___config0, const RuntimeMethod* method);
// System.Void System.Action`2<System.Int32,System.String>::.ctor(System.Object,System.IntPtr)
inline void Action_2__ctor_m3BA2B0E7AD3290E3BFECFA10EEA81D930348CA2E (Action_2_t0359A210F354A728FCD80F275D8CF192D61A98C5 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_2_t0359A210F354A728FCD80F275D8CF192D61A98C5 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_2__ctor_mD005A0CCFFD77790ADB8E1E418161A6F27A30C64_gshared)(__this, ___object0, ___method1, method);
}
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55 (Delegate_t * ___a0, Delegate_t * ___b1, const RuntimeMethod* method);
// System.Void AntiAddictionSdk.OpenSource.AntiAddiction::init(System.Action`2<System.Int32,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AntiAddiction_init_m262D2B8A2BB938FEBC7EF4CE28ED960BA8F4F887 (Action_2_t0359A210F354A728FCD80F275D8CF192D61A98C5 * ___onAntiAddictionResult0, const RuntimeMethod* method);
// System.Void MainBehaviour::LogAntiAddictionResult(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainBehaviour_LogAntiAddictionResult_m0505617181931627EBD48563FB3CC8CAE262C6C0 (MainBehaviour_tDE09AB0E3B7AB47BEC0D8229B68A94AA3FE0DEC6 * __this, String_t* ___text0, const RuntimeMethod* method);
// System.Void MainBehaviour::GotoChatPage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainBehaviour_GotoChatPage_m36E1A1B5BE66F732B07BA4AC5B68DB6B6ABFD398 (MainBehaviour_tDE09AB0E3B7AB47BEC0D8229B68A94AA3FE0DEC6 * __this, const RuntimeMethod* method);
// System.Void MainBehaviour::DealPay(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainBehaviour_DealPay_mBD372648664B67D06DED0F335CFBAB4A2A3BC1B6 (MainBehaviour_tDE09AB0E3B7AB47BEC0D8229B68A94AA3FE0DEC6 * __this, int32_t ___num0, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::print(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_print_m4F113B89EC1C221CAC6EC64365E6DAD0AF86F090 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void AntiAddictionSdk.OpenSource.AntiAddiction::paySuccess(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AntiAddiction_paySuccess_m66E489B24FF7730FD3BCC19976686592B0BFDBA8 (int32_t ___price0, const RuntimeMethod* method);
// TGCenterSdk.Common.IPrivacyPolicyHelperClient TGCenterSdk.Platforms.ClientFactory::PrivacyPolicyHelperClient()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ClientFactory_PrivacyPolicyHelperClient_m640B2DE7E30DACA6366CBCEC7A999C8FDD83F3FD (const RuntimeMethod* method);
// System.Void TGCenterSdk.Api.PrivacyPolicyHelper::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PrivacyPolicyHelper__ctor_m6EF58C5A21D285476284B395A1529F529830CC2F (PrivacyPolicyHelper_t5983E6361B35F6389228D994C018B16993468EA3 * __this, const RuntimeMethod* method);
// UnityEngine.AndroidJavaObject TGCenterSdk.Platforms.Android.Utils::GetPlayerActivity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * Utils_GetPlayerActivity_m7B8DC76B225EEF0336FA47F348C7560E1C60559E (const RuntimeMethod* method);
// System.Void UnityEngine.AndroidJavaObject::.ctor(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject__ctor_m6146DBD19BCFFDB3D4F42C8D38491F354B58B001 (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, String_t* ___className0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method);
// !!0 UnityEngine.AndroidJavaObject::Call<UnityEngine.AndroidJavaObject>(System.String,System.Object[])
inline AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * AndroidJavaObject_Call_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC5ED59BBD9C24EFFD98D8C3819C7E15DFE08F412 (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, String_t* ___methodName0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method)
{
	return ((  AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * (*) (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E *, String_t*, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*, const RuntimeMethod*))AndroidJavaObject_Call_TisRuntimeObject_mB802C2A6B0365A1670402D283EB7FA241C326B0E_gshared)(__this, ___methodName0, ___args1, method);
}
// !!0[] System.Array::Empty<System.Object>()
inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_inline (const RuntimeMethod* method)
{
	return ((  ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* (*) (const RuntimeMethod*))Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_gshared_inline)(method);
}
// System.Void UnityEngine.AndroidJavaObject::Call(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject_Call_mBB226DA52CE5A2FCD9A2D42BC7FB4272E094B76D (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, String_t* ___methodName0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method);
// System.Void TGCenterSdk.Platforms.iOS.PrivacyPolicyHelperClient::PrivacyAgreeCallback(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PrivacyPolicyHelperClient_PrivacyAgreeCallback_m24FA05F07A894D3E37B20E593D553B3A7158FCCF (intptr_t ___helperClient0, const RuntimeMethod* method);
// System.Void TGCenterSdk.Platforms.iOS.PrivacyPolicyHelperClient::PrivacyDisagreeCallback(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PrivacyPolicyHelperClient_PrivacyDisagreeCallback_m4DFCB29D58AFF2A83D733119B94207160EA984C9 (intptr_t ___helperClient0, const RuntimeMethod* method);
// System.Runtime.InteropServices.GCHandle System.Runtime.InteropServices.GCHandle::Alloc(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  GCHandle_Alloc_m937829FAD1C69F168CF045B9406228AC9F8B9389 (RuntimeObject * ___value0, const RuntimeMethod* method);
// System.IntPtr System.Runtime.InteropServices.GCHandle::op_Explicit(System.Runtime.InteropServices.GCHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t GCHandle_op_Explicit_m0A74179B3DD6D87F0863EF55176F924D641E42BF (GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  ___value0, const RuntimeMethod* method);
// System.Void TGCenterSdk.Platforms.iOS.PrivacyPolicyHelperClient/TGCPrivacyAgreeCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TGCPrivacyAgreeCallback__ctor_m0C3B960580D95B2B3EB822B847A777ACE75A9B5C (TGCPrivacyAgreeCallback_t3C41917D9CA51071333995D60FE85E6B410437DA * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void TGCenterSdk.Platforms.iOS.PrivacyPolicyHelperClient/TGCPrivacyDisagreeCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TGCPrivacyDisagreeCallback__ctor_m45DFB8314F222674222C3F1626220266542C48FC (TGCPrivacyDisagreeCallback_t87303D0856E11528F24B5D65FE37D8EB115CEB9E * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void TGCenterSdk.Platforms.iOS.Externs::TGCPrivacyShowDialog(System.IntPtr,TGCenterSdk.Platforms.iOS.PrivacyPolicyHelperClient/TGCPrivacyAgreeCallback,TGCenterSdk.Platforms.iOS.PrivacyPolicyHelperClient/TGCPrivacyDisagreeCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Externs_TGCPrivacyShowDialog_mCBC4F18984C8E25FCCA862C2AFB4A9B36B942194 (intptr_t ___clientPtr0, TGCPrivacyAgreeCallback_t3C41917D9CA51071333995D60FE85E6B410437DA * ___agreeCallback1, TGCPrivacyDisagreeCallback_t87303D0856E11528F24B5D65FE37D8EB115CEB9E * ___disagreeCallback2, const RuntimeMethod* method);
// System.Void TGCenterSdk.Platforms.iOS.Externs::TGCPrivacyJumpToUserAgreement()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Externs_TGCPrivacyJumpToUserAgreement_m97E1C39BB07216C604DEF1109B503E40AFBBAEAD (const RuntimeMethod* method);
// System.Void TGCenterSdk.Platforms.iOS.Externs::TGCPrivacyJumpToPrivacyPolicy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Externs_TGCPrivacyJumpToPrivacyPolicy_mADAC2305561536789C0855F17E5FDA3C4703E707 (const RuntimeMethod* method);
// TGCenterSdk.Platforms.iOS.PrivacyPolicyHelperClient TGCenterSdk.Platforms.iOS.PrivacyPolicyHelperClient::IntPtrToPrivacyPolicyHelperClient(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PrivacyPolicyHelperClient_tCE377D6E958FD4996E71424C6705E0B1CA0327E0 * PrivacyPolicyHelperClient_IntPtrToPrivacyPolicyHelperClient_m28AC5A85D28493308C7A808A361F078062AFC1F0 (intptr_t ___helperClient0, const RuntimeMethod* method);
// System.Runtime.InteropServices.GCHandle System.Runtime.InteropServices.GCHandle::op_Explicit(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  GCHandle_op_Explicit_mD2A800A063FDBDAB31CD7EC97DD63A896A3568A6 (intptr_t ___value0, const RuntimeMethod* method);
// System.Object System.Runtime.InteropServices.GCHandle::get_Target()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GCHandle_get_Target_m6C296AD6520ECDAFC9498E9387677F522871F883 (GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 * __this, const RuntimeMethod* method);
// TGCenterSdk.Common.ITGCenterClient TGCenterSdk.Platforms.ClientFactory::TGCenterClient()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ClientFactory_TGCenterClient_m2F598A2CDFEE5773506AA9F74901DC90E7CFB7C7 (const RuntimeMethod* method);
// TGCenterSdk.Common.ITGCenterClient TGCenterSdk.Api.TGCenter::GetTGCenterClient()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TGCenter_GetTGCenterClient_m6B54B973A8AB5AD2B75A155ABD3AA9ED1933700E (const RuntimeMethod* method);
// System.Void UnityEngine.AndroidJavaClass::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaClass__ctor_mEFF9F51871F231955D97DABDE9AB4A6B4EDA5541 (AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * __this, String_t* ___className0, const RuntimeMethod* method);
// !!0 UnityEngine.AndroidJavaObject::CallStatic<UnityEngine.AndroidJavaObject>(System.String,System.Object[])
inline AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * AndroidJavaObject_CallStatic_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mAD48C38D66AB67D0F0274D195F4A99CB7AB589F2 (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, String_t* ___methodName0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method)
{
	return ((  AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * (*) (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E *, String_t*, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*, const RuntimeMethod*))AndroidJavaObject_CallStatic_TisRuntimeObject_m29BD05B7A29F937D71B746DFFE889B90E1142509_gshared)(__this, ___methodName0, ___args1, method);
}
// TGCenterSdk.Api.Day1Retention/RetentionTypes TGCenterSdk.Api.Day1Retention::get_RetentionType()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Day1Retention_get_RetentionType_mD0C2642097219905B831A051D675EE715FF6A4B5_inline (Day1Retention_t5C5C48267E7FA734CD696706DCF7C0DC29025BB3 * __this, const RuntimeMethod* method);
// System.String TGCenterSdk.Platforms.Android.Utils::GetRetentionType(TGCenterSdk.Api.Day1Retention/RetentionTypes)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Utils_GetRetentionType_m9356A8A9B9DB2523F8706EF1AB407FF6CC5048EC (int32_t ___type0, const RuntimeMethod* method);
// System.Int32 TGCenterSdk.Api.Day1Retention::get_StartCount()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Day1Retention_get_StartCount_mC49554BBEBB0F46D8B1DBBD920E195382086B189_inline (Day1Retention_t5C5C48267E7FA734CD696706DCF7C0DC29025BB3 * __this, const RuntimeMethod* method);
// System.Int32 TGCenterSdk.Api.Day1Retention::get_EndCount()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Day1Retention_get_EndCount_m5DB2D2F36A24B0E04F4BF7BAE1E195689C896556_inline (Day1Retention_t5C5C48267E7FA734CD696706DCF7C0DC29025BB3 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.AndroidJavaObject::CallStatic(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject_CallStatic_m5A97968767E1603C021023809276443ED24577FB (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, String_t* ___methodName0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method);
// !!0 UnityEngine.AndroidJavaObject::CallStatic<System.Boolean>(System.String,System.Object[])
inline bool AndroidJavaObject_CallStatic_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m08A8ECF220D35069EF5A4A50C2F38E925F0852FB (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, String_t* ___methodName0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method)
{
	return ((  bool (*) (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E *, String_t*, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*, const RuntimeMethod*))AndroidJavaObject_CallStatic_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m08A8ECF220D35069EF5A4A50C2F38E925F0852FB_gshared)(__this, ___methodName0, ___args1, method);
}
// System.Void TGCenterSdk.Platforms.Android.TGCenterClient::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TGCenterClient__ctor_m8488AA46D241FE118C5E32D4C7E3C6D2B11B2846 (TGCenterClient_t852F76F73B20352EC6238AC9B9F507DF071CF9B0 * __this, const RuntimeMethod* method);
// System.IntPtr TGCenterSdk.Platforms.iOS.Externs::TGCCreateInitConfig()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Externs_TGCCreateInitConfig_m76F31ED1EE75BFFBF2FBC598B4CAFAC04847ABDF (const RuntimeMethod* method);
// System.Void TGCenterSdk.Platforms.iOS.Externs::TGCSetInitConfig_DebugMode(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Externs_TGCSetInitConfig_DebugMode_m3C60CA74838730B5605C43F254C7BB13DB14218A (intptr_t ___config0, bool ___debugMode1, const RuntimeMethod* method);
// System.Void TGCenterSdk.Platforms.iOS.Externs::TGCSetInitConfig_AppId(System.IntPtr,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Externs_TGCSetInitConfig_AppId_m79A28C237AD73D049498776862601252568AE409 (intptr_t ___config0, String_t* ___appId1, const RuntimeMethod* method);
// System.Void TGCenterSdk.Platforms.iOS.Externs::TGCSetInitConfig_AppleAppID(System.IntPtr,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Externs_TGCSetInitConfig_AppleAppID_mA99EACF9D3B913E007A5EF79CA40FDFABC32A7D4 (intptr_t ___config0, String_t* ___appleAppID1, const RuntimeMethod* method);
// System.Void TGCenterSdk.Platforms.iOS.Externs::TGCSetInitConfig_UmengAppKey(System.IntPtr,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Externs_TGCSetInitConfig_UmengAppKey_m80CE1DCFC4565693F34ECBBE62B54B99CF589663 (intptr_t ___config0, String_t* ___umengAppKey1, const RuntimeMethod* method);
// System.Void TGCenterSdk.Platforms.iOS.Externs::TGCSetInitConfig_AppsFlyerDevKey(System.IntPtr,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Externs_TGCSetInitConfig_AppsFlyerDevKey_m9B3CD629FF1C4B4258A124071A2CDD58891FE71D (intptr_t ___config0, String_t* ___appsFlyerDevKey1, const RuntimeMethod* method);
// System.Void TGCenterSdk.Platforms.iOS.Externs::TGCSetInitConfig_RangersAppLogAppId(System.IntPtr,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Externs_TGCSetInitConfig_RangersAppLogAppId_mC1DF1C6D8ABDD475939ADB3A32607914B6E7B1C7 (intptr_t ___config0, String_t* ___rangersAppLogAppId1, const RuntimeMethod* method);
// System.Void TGCenterSdk.Platforms.iOS.Externs::TGCSetInitConfig_RangersAppLogAppName(System.IntPtr,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Externs_TGCSetInitConfig_RangersAppLogAppName_m4C032095A1DE1921811AAFA37C21F9F8A57E3ED9 (intptr_t ___config0, String_t* ___rangersAppLogAppName1, const RuntimeMethod* method);
// System.IntPtr TGCenterSdk.Platforms.iOS.Externs::TGCCreateDay1Retention()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Externs_TGCCreateDay1Retention_mA6B9EDCB5E75FFE679366C5FDDDAA6585F04CCE0 (const RuntimeMethod* method);
// System.Void TGCenterSdk.Platforms.iOS.Externs::TGCSetDay1Retention_Type(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Externs_TGCSetDay1Retention_Type_m3B7916E4DCBAF3ABB52020CB12D7CB7CCAA063B0 (intptr_t ___retention0, int32_t ___type1, const RuntimeMethod* method);
// System.Void TGCenterSdk.Platforms.iOS.Externs::TGCSetDay1Retention_StartCount(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Externs_TGCSetDay1Retention_StartCount_m06973A8C99ED9BBCC36861E10A69420030DF15A1 (intptr_t ___retention0, int32_t ___startCount1, const RuntimeMethod* method);
// System.Void TGCenterSdk.Platforms.iOS.Externs::TGCSetDay1Retention_EndCount(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Externs_TGCSetDay1Retention_EndCount_mBB41BCABD0864AF1841D6314A8A7CCF4F1D93ED5 (intptr_t ___retention0, int32_t ___endCount1, const RuntimeMethod* method);
// System.Void TGCenterSdk.Platforms.iOS.Externs::TGCSetInitConfig_Day1Retention(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Externs_TGCSetInitConfig_Day1Retention_m9F23B425F4DF6A58C648CF755B3FB92DF3415900 (intptr_t ___config0, intptr_t ___retention1, const RuntimeMethod* method);
// System.Void TGCenterSdk.Platforms.iOS.Externs::TGCInit(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Externs_TGCInit_mAABFC2CB05181D48FD025937FD082B786DF642FC (intptr_t ___initConfig0, const RuntimeMethod* method);
// System.Boolean TGCenterSdk.Platforms.iOS.Externs::TGCIsUserAgreePolicy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Externs_TGCIsUserAgreePolicy_m243ABD3ACEE5D59050CEFE902B1CEF56686EB609 (const RuntimeMethod* method);
// System.Void TGCenterSdk.Platforms.iOS.TGCenterClient::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TGCenterClient__ctor_mD59CDDCD152E21CCAB2C20B24F9A9DDEDE024DEA (TGCenterClient_t3FFBC93E175D733E5FF8A30D13354AED72C0FCC9 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.AndroidJavaObject::GetStatic<UnityEngine.AndroidJavaObject>(System.String)
inline AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * AndroidJavaObject_GetStatic_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC84C97A7EC20ED712D21107C9FA32E0785021153 (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, String_t* ___fieldName0, const RuntimeMethod* method)
{
	return ((  AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * (*) (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E *, String_t*, const RuntimeMethod*))AndroidJavaObject_GetStatic_TisRuntimeObject_mEC743ECF275CB896DE039A9FC1E5672B30C8B3D0_gshared)(__this, ___fieldName0, method);
}
// System.Void AntiAddictionSdk.OpenSource.AntiAddictionCommonConfig/Builder::set_gusterTime(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Builder_set_gusterTime_m6C56393837075581346BD1B2C037F20A36C80541_inline (Builder_t23ABFB73E05835CA7F11F21092D5E8652D8D081E * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void AntiAddictionSdk.OpenSource.AntiAddictionCommonConfig/Builder::set_nightStrictStart(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Builder_set_nightStrictStart_mB6776A7C84B6803901AF28BC17F8B8BBF53567E6_inline (Builder_t23ABFB73E05835CA7F11F21092D5E8652D8D081E * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void AntiAddictionSdk.OpenSource.AntiAddictionCommonConfig/Builder::set_nightStrictEnd(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Builder_set_nightStrictEnd_m8ED7A511AE9A55E3E891F8EE79BF0E50A2956BB7_inline (Builder_t23ABFB73E05835CA7F11F21092D5E8652D8D081E * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void AntiAddictionSdk.OpenSource.AntiAddictionCommonConfig/Builder::set_childCommonTime(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Builder_set_childCommonTime_m36439341040F9C5EB7B25BFCFC932AB25988619C_inline (Builder_t23ABFB73E05835CA7F11F21092D5E8652D8D081E * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void AntiAddictionSdk.OpenSource.AntiAddictionCommonConfig/Builder::set_childHolidayTime(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Builder_set_childHolidayTime_m573ACA5A262CD96115AC2FE747EBE48ACC359486_inline (Builder_t23ABFB73E05835CA7F11F21092D5E8652D8D081E * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void AntiAddictionSdk.OpenSource.AntiAddictionCommonConfig/Builder::set_teenPayLimit(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Builder_set_teenPayLimit_m8B0C3B9EA8C565D322C6BA1898DDEFE2B86468CB_inline (Builder_t23ABFB73E05835CA7F11F21092D5E8652D8D081E * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void AntiAddictionSdk.OpenSource.AntiAddictionCommonConfig/Builder::set_teenMonthPayLimit(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Builder_set_teenMonthPayLimit_m0C94B383082A42811B3C7215986F44299803E048_inline (Builder_t23ABFB73E05835CA7F11F21092D5E8652D8D081E * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void AntiAddictionSdk.OpenSource.AntiAddictionCommonConfig/Builder::set_youngPayLimit(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Builder_set_youngPayLimit_m06957D267F7EFCE3DB38C08528453B10BE5E15C9_inline (Builder_t23ABFB73E05835CA7F11F21092D5E8652D8D081E * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void AntiAddictionSdk.OpenSource.AntiAddictionCommonConfig/Builder::set_youngMonthPayLimit(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Builder_set_youngMonthPayLimit_m4D03F733607ABE3DA4C6731BBB3F62D560727B42_inline (Builder_t23ABFB73E05835CA7F11F21092D5E8652D8D081E * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void AntiAddictionSdk.OpenSource.AntiAddictionCommonConfig::.ctor(AntiAddictionSdk.OpenSource.AntiAddictionCommonConfig/Builder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AntiAddictionCommonConfig__ctor_m3950F1FF21D6A7278A7B5F28E5D88B5881606A55 (AntiAddictionCommonConfig_tFB2E9080FF6D416F4697BBF3B6CE8BCFECFF41CC * __this, Builder_t23ABFB73E05835CA7F11F21092D5E8652D8D081E * ___builder0, const RuntimeMethod* method);
// System.Void AntiAddictionSdk.OpenSource.AntiAddictionFunctionConfig/Builder::set_useSdkRealName(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Builder_set_useSdkRealName_m0AF2A4D5DF9C2A6DCB666E351C0139E2429DD9B6_inline (Builder_tDB5BA46A3678FD0B0719F961C0D5350B88F23E53 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void AntiAddictionSdk.OpenSource.AntiAddictionFunctionConfig/Builder::set_useSdkPaymentLimit(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Builder_set_useSdkPaymentLimit_m18443C72D1963F19CB1C7467C48E92CE2630A4E2_inline (Builder_tDB5BA46A3678FD0B0719F961C0D5350B88F23E53 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void AntiAddictionSdk.OpenSource.AntiAddictionFunctionConfig/Builder::set_useSdkOnlineTimeLimit(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Builder_set_useSdkOnlineTimeLimit_mF30F414729291E7230206888218A1BFCAEBAFF1E_inline (Builder_tDB5BA46A3678FD0B0719F961C0D5350B88F23E53 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void AntiAddictionSdk.OpenSource.AntiAddictionFunctionConfig/Builder::set_showSwitchAccountButton(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Builder_set_showSwitchAccountButton_m456377EE5A355AF410B0690AD17A7EC33456ED19_inline (Builder_tDB5BA46A3678FD0B0719F961C0D5350B88F23E53 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void AntiAddictionSdk.OpenSource.AntiAddictionFunctionConfig::.ctor(AntiAddictionSdk.OpenSource.AntiAddictionFunctionConfig/Builder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AntiAddictionFunctionConfig__ctor_m1C14136DDD98DCF36FD6465710A1344FD4C40B8E (AntiAddictionFunctionConfig_t40E5C47E03007344B5CE5A8D78DE06A18336E8E1 * __this, Builder_tDB5BA46A3678FD0B0719F961C0D5350B88F23E53 * ___builder0, const RuntimeMethod* method);
// System.Void MainBehaviour::DealDialogAgreeResult(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainBehaviour_DealDialogAgreeResult_m16741BD575297CAEBAA7ADD27EDC6591D5FD09C9 (MainBehaviour_tDE09AB0E3B7AB47BEC0D8229B68A94AA3FE0DEC6 * __this, bool ___agree0, const RuntimeMethod* method);
IL2CPP_EXTERN_C void DEFAULT_CALL AntiAddictionInit(Il2CppMethodPointer);
IL2CPP_EXTERN_C void DEFAULT_CALL AntiAddictionSetFunctionConfig(int32_t, int32_t, int32_t, int32_t);
IL2CPP_EXTERN_C void DEFAULT_CALL AntiAddictionSetHost(char*);
IL2CPP_EXTERN_C void DEFAULT_CALL AntiAddictionLogin(char*, int32_t);
IL2CPP_EXTERN_C void DEFAULT_CALL AntiAddictionUpdateUserType(int32_t);
IL2CPP_EXTERN_C void DEFAULT_CALL AntiAddictionLogout();
IL2CPP_EXTERN_C int32_t DEFAULT_CALL AntiAddictionGetUserType(char*);
IL2CPP_EXTERN_C void DEFAULT_CALL AntiAddictionCheckPayLimit(int32_t);
IL2CPP_EXTERN_C void DEFAULT_CALL AntiAddictionPaySuccess(int32_t);
IL2CPP_EXTERN_C void DEFAULT_CALL AntiAddictionCheckChatLimit();
IL2CPP_EXTERN_C void DEFAULT_CALL AntiAddictionOpenRealName();
IL2CPP_EXTERN_C void DEFAULT_CALL AntiAddictionSetGuestTotalTime(int32_t);
IL2CPP_EXTERN_C void DEFAULT_CALL AntiAddictionSetCurfewHourStart(int32_t);
IL2CPP_EXTERN_C void DEFAULT_CALL AntiAddictionSetCurfewHourEnd(int32_t);
IL2CPP_EXTERN_C void DEFAULT_CALL AntiAddictionSetMinorCommonDayTotalTime(int32_t);
IL2CPP_EXTERN_C void DEFAULT_CALL AntiAddictionSetMinorHolidayTotalTime(int32_t);
IL2CPP_EXTERN_C void DEFAULT_CALL AntiAddictionSetSinglePaymentAmountLimitJunior(int32_t);
IL2CPP_EXTERN_C void DEFAULT_CALL AntiAddictionSetMouthTotalPaymentAmountLimitJunior(int32_t);
IL2CPP_EXTERN_C void DEFAULT_CALL AntiAddictionSetSinglePaymentAmountLimitSenior(int32_t);
IL2CPP_EXTERN_C void DEFAULT_CALL AntiAddictionSetMouthTotalPaymentAmountLimitSenior(int32_t);
IL2CPP_EXTERN_C void DEFAULT_CALL TGCRelease(intptr_t);
IL2CPP_EXTERN_C void DEFAULT_CALL TGCInit(intptr_t);
IL2CPP_EXTERN_C int32_t DEFAULT_CALL TGCIsUserAgreePolicy();
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL TGCCreateInitConfig();
IL2CPP_EXTERN_C void DEFAULT_CALL TGCSetInitConfig_DebugMode(intptr_t, int32_t);
IL2CPP_EXTERN_C void DEFAULT_CALL TGCSetInitConfig_AppId(intptr_t, char*);
IL2CPP_EXTERN_C void DEFAULT_CALL TGCSetInitConfig_AppleAppID(intptr_t, char*);
IL2CPP_EXTERN_C void DEFAULT_CALL TGCSetInitConfig_UmengAppKey(intptr_t, char*);
IL2CPP_EXTERN_C void DEFAULT_CALL TGCSetInitConfig_AppsFlyerDevKey(intptr_t, char*);
IL2CPP_EXTERN_C void DEFAULT_CALL TGCSetInitConfig_RangersAppLogAppId(intptr_t, char*);
IL2CPP_EXTERN_C void DEFAULT_CALL TGCSetInitConfig_RangersAppLogAppName(intptr_t, char*);
IL2CPP_EXTERN_C void DEFAULT_CALL TGCSetInitConfig_Day1Retention(intptr_t, intptr_t);
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL TGCCreateDay1Retention();
IL2CPP_EXTERN_C void DEFAULT_CALL TGCSetDay1Retention_Type(intptr_t, int32_t);
IL2CPP_EXTERN_C void DEFAULT_CALL TGCSetDay1Retention_StartCount(intptr_t, int32_t);
IL2CPP_EXTERN_C void DEFAULT_CALL TGCSetDay1Retention_EndCount(intptr_t, int32_t);
IL2CPP_EXTERN_C void DEFAULT_CALL TGCPrivacyShowDialog(intptr_t, Il2CppMethodPointer, Il2CppMethodPointer);
IL2CPP_EXTERN_C void DEFAULT_CALL TGCPrivacyJumpToUserAgreement();
IL2CPP_EXTERN_C void DEFAULT_CALL TGCPrivacyJumpToPrivacyPolicy();
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
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_AntiAddiction_antiAddictionCallback_m05EAAD3FF7819800167E07C38AE776BBBFBCBE9E(int32_t ___resultCode0, char* ___message1)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message1' to managed representation
	String_t* ____message1_unmarshaled = NULL;
	____message1_unmarshaled = il2cpp_codegen_marshal_string_result(___message1);

	// Managed method invocation
	AntiAddiction_antiAddictionCallback_m05EAAD3FF7819800167E07C38AE776BBBFBCBE9E(___resultCode0, ____message1_unmarshaled, NULL);

}
// System.Void AntiAddictionSdk.OpenSource.AntiAddiction::antiAddictionCallback(System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AntiAddiction_antiAddictionCallback_m05EAAD3FF7819800167E07C38AE776BBBFBCBE9E (int32_t ___resultCode0, String_t* ___message1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2_Invoke_mA02088CCFAC06F127C125C0F51ADD67B9A2242ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AntiAddiction_t48341ECCB1DF1C64757849008C5BD7356AAEC7AD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// antiAddictionResult(resultCode,message);
		IL2CPP_RUNTIME_CLASS_INIT(AntiAddiction_t48341ECCB1DF1C64757849008C5BD7356AAEC7AD_il2cpp_TypeInfo_var);
		Action_2_t0359A210F354A728FCD80F275D8CF192D61A98C5 * L_0 = ((AntiAddiction_t48341ECCB1DF1C64757849008C5BD7356AAEC7AD_StaticFields*)il2cpp_codegen_static_fields_for(AntiAddiction_t48341ECCB1DF1C64757849008C5BD7356AAEC7AD_il2cpp_TypeInfo_var))->get_antiAddictionResult_6();
		int32_t L_1 = ___resultCode0;
		String_t* L_2 = ___message1;
		NullCheck(L_0);
		Action_2_Invoke_mA02088CCFAC06F127C125C0F51ADD67B9A2242ED(L_0, L_1, L_2, /*hidden argument*/Action_2_Invoke_mA02088CCFAC06F127C125C0F51ADD67B9A2242ED_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void AntiAddictionSdk.OpenSource.AntiAddiction::init(System.Action`2<System.Int32,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AntiAddiction_init_m262D2B8A2BB938FEBC7EF4CE28ED960BA8F4F887 (Action_2_t0359A210F354A728FCD80F275D8CF192D61A98C5 * ___onAntiAddictionResult0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AntiAddictionDelegate_t849C34933F2BEB8A44306738A7F07A582DC9EDBF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AntiAddiction_antiAddictionCallback_m05EAAD3FF7819800167E07C38AE776BBBFBCBE9E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AntiAddiction_t48341ECCB1DF1C64757849008C5BD7356AAEC7AD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// sdkInited = true;
		IL2CPP_RUNTIME_CLASS_INIT(AntiAddiction_t48341ECCB1DF1C64757849008C5BD7356AAEC7AD_il2cpp_TypeInfo_var);
		((AntiAddiction_t48341ECCB1DF1C64757849008C5BD7356AAEC7AD_StaticFields*)il2cpp_codegen_static_fields_for(AntiAddiction_t48341ECCB1DF1C64757849008C5BD7356AAEC7AD_il2cpp_TypeInfo_var))->set_sdkInited_5((bool)1);
		// antiAddictionResult = onAntiAddictionResult;
		Action_2_t0359A210F354A728FCD80F275D8CF192D61A98C5 * L_0 = ___onAntiAddictionResult0;
		((AntiAddiction_t48341ECCB1DF1C64757849008C5BD7356AAEC7AD_StaticFields*)il2cpp_codegen_static_fields_for(AntiAddiction_t48341ECCB1DF1C64757849008C5BD7356AAEC7AD_il2cpp_TypeInfo_var))->set_antiAddictionResult_6(L_0);
		// AntiAddictionInit(antiAddictionCallback);
		AntiAddictionDelegate_t849C34933F2BEB8A44306738A7F07A582DC9EDBF * L_1 = (AntiAddictionDelegate_t849C34933F2BEB8A44306738A7F07A582DC9EDBF *)il2cpp_codegen_object_new(AntiAddictionDelegate_t849C34933F2BEB8A44306738A7F07A582DC9EDBF_il2cpp_TypeInfo_var);
		AntiAddictionDelegate__ctor_m2689E1F0F648C1B728129A0D61E2A4824C1D86F9(L_1, NULL, (intptr_t)((intptr_t)AntiAddiction_antiAddictionCallback_m05EAAD3FF7819800167E07C38AE776BBBFBCBE9E_RuntimeMethod_var), /*hidden argument*/NULL);
		AntiAddiction_AntiAddictionInit_mB0DFDB2EAD7B469B813994CAD25EDC5214AFFBF6(L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void AntiAddictionSdk.OpenSource.AntiAddiction::fuctionConfig(System.Boolean,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AntiAddiction_fuctionConfig_m33AE1695F6FC3DE2D6B78DBFD88EF1FB489DD3C0 (bool ___useSdkRealName0, bool ___useSdkPaymentLimit1, bool ___useSdkOnlineTimeLimit2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AntiAddiction_t48341ECCB1DF1C64757849008C5BD7356AAEC7AD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// AntiAddictionSetFunctionConfig(useSdkRealName,useSdkPaymentLimit,useSdkOnlineTimeLimit,true);
		bool L_0 = ___useSdkRealName0;
		bool L_1 = ___useSdkPaymentLimit1;
		bool L_2 = ___useSdkOnlineTimeLimit2;
		IL2CPP_RUNTIME_CLASS_INIT(AntiAddiction_t48341ECCB1DF1C64757849008C5BD7356AAEC7AD_il2cpp_TypeInfo_var);
		AntiAddiction_AntiAddictionSetFunctionConfig_m39CB26D81CE5FEAE58699BBA3FBC141FFF98783C(L_0, L_1, L_2, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void AntiAddictionSdk.OpenSource.AntiAddiction::fuctionConfig(AntiAddictionSdk.OpenSource.AntiAddictionFunctionConfig)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AntiAddiction_fuctionConfig_mAC357B27F762A1154F95E5C720049F626C865948 (AntiAddictionFunctionConfig_t40E5C47E03007344B5CE5A8D78DE06A18336E8E1 * ___config0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AntiAddiction_t48341ECCB1DF1C64757849008C5BD7356AAEC7AD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// AntiAddictionSetFunctionConfig(config.useSdkRealName,config.useSdkPaymentLimit,config.useSdkOnlineTimeLimit,config.showSwitchAccountButton);
		AntiAddictionFunctionConfig_t40E5C47E03007344B5CE5A8D78DE06A18336E8E1 * L_0 = ___config0;
		NullCheck(L_0);
		bool L_1;
		L_1 = AntiAddictionFunctionConfig_get_useSdkRealName_m2B993B5E50E6A15CEEEBFCB33D78A81B1F359D6A_inline(L_0, /*hidden argument*/NULL);
		AntiAddictionFunctionConfig_t40E5C47E03007344B5CE5A8D78DE06A18336E8E1 * L_2 = ___config0;
		NullCheck(L_2);
		bool L_3;
		L_3 = AntiAddictionFunctionConfig_get_useSdkPaymentLimit_mF5153FB6074753730F6357F8215E2C0CD2264702_inline(L_2, /*hidden argument*/NULL);
		AntiAddictionFunctionConfig_t40E5C47E03007344B5CE5A8D78DE06A18336E8E1 * L_4 = ___config0;
		NullCheck(L_4);
		bool L_5;
		L_5 = AntiAddictionFunctionConfig_get_useSdkOnlineTimeLimit_m6868BE409709113E71232AE928CC48EB9417EBA0_inline(L_4, /*hidden argument*/NULL);
		AntiAddictionFunctionConfig_t40E5C47E03007344B5CE5A8D78DE06A18336E8E1 * L_6 = ___config0;
		NullCheck(L_6);
		bool L_7;
		L_7 = AntiAddictionFunctionConfig_get_showSwitchAccountButton_m5B2D7AB2EB6D2AB689E5FDFFBBB53E6F6736A0CF_inline(L_6, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(AntiAddiction_t48341ECCB1DF1C64757849008C5BD7356AAEC7AD_il2cpp_TypeInfo_var);
		AntiAddiction_AntiAddictionSetFunctionConfig_m39CB26D81CE5FEAE58699BBA3FBC141FFF98783C(L_1, L_3, L_5, L_7, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void AntiAddictionSdk.OpenSource.AntiAddiction::commonConfig(AntiAddictionSdk.OpenSource.AntiAddictionCommonConfig)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AntiAddiction_commonConfig_m8BCCC12387C28F91BBD1576E3D42F999407F2819 (AntiAddictionCommonConfig_tFB2E9080FF6D416F4697BBF3B6CE8BCFECFF41CC * ___config0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AntiAddiction_t48341ECCB1DF1C64757849008C5BD7356AAEC7AD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// AntiAddictionSetGuestTotalTime(config.gusterTime);
		AntiAddictionCommonConfig_tFB2E9080FF6D416F4697BBF3B6CE8BCFECFF41CC * L_0 = ___config0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = AntiAddictionCommonConfig_get_gusterTime_m97F62C5654BAEDC31CB3BBB2398A3F7043CCE4C5_inline(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(AntiAddiction_t48341ECCB1DF1C64757849008C5BD7356AAEC7AD_il2cpp_TypeInfo_var);
		AntiAddiction_AntiAddictionSetGuestTotalTime_mFCB741F05C18C489BA0449DF155548AB1EF7BDF4(L_1, /*hidden argument*/NULL);
		// AntiAddictionSetCurfewHourStart(config.nightStrictStart);
		AntiAddictionCommonConfig_tFB2E9080FF6D416F4697BBF3B6CE8BCFECFF41CC * L_2 = ___config0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = AntiAddictionCommonConfig_get_nightStrictStart_mB00FDD33B154F1C055967C97174683C1663DEE95_inline(L_2, /*hidden argument*/NULL);
		AntiAddiction_AntiAddictionSetCurfewHourStart_mBE51549C706506C8F3652C2EEEFA58BDCE5B1526(L_3, /*hidden argument*/NULL);
		// AntiAddictionSetCurfewHourEnd(config.nightStrictEnd);
		AntiAddictionCommonConfig_tFB2E9080FF6D416F4697BBF3B6CE8BCFECFF41CC * L_4 = ___config0;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = AntiAddictionCommonConfig_get_nightStrictEnd_m7224D1E7860A2F15354859A7BB5F8B89D6135D46_inline(L_4, /*hidden argument*/NULL);
		AntiAddiction_AntiAddictionSetCurfewHourEnd_m7C9EF4B51CD0C8B8DFBBD0B107137D3E4DE0F9F1(L_5, /*hidden argument*/NULL);
		// AntiAddictionSetMinorCommonDayTotalTime(config.childCommonTime);
		AntiAddictionCommonConfig_tFB2E9080FF6D416F4697BBF3B6CE8BCFECFF41CC * L_6 = ___config0;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = AntiAddictionCommonConfig_get_childCommonTime_m2573A1F8EE1B7DA9551587105636C60CE1AC24C5_inline(L_6, /*hidden argument*/NULL);
		AntiAddiction_AntiAddictionSetMinorCommonDayTotalTime_m39F1A8D107181CE206070BCAEAFDE1EFA0C6F767(L_7, /*hidden argument*/NULL);
		// AntiAddictionSetMinorHolidayTotalTime(config.childHolidayTime);
		AntiAddictionCommonConfig_tFB2E9080FF6D416F4697BBF3B6CE8BCFECFF41CC * L_8 = ___config0;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = AntiAddictionCommonConfig_get_childHolidayTime_m4EF339B9D2E9630EE205D1E301EBA9D74269512E_inline(L_8, /*hidden argument*/NULL);
		AntiAddiction_AntiAddictionSetMinorHolidayTotalTime_m500182B839700B07058255617848FB0870480C90(L_9, /*hidden argument*/NULL);
		// AntiAddictionSetSinglePaymentAmountLimitJunior(config.teenPayLimit);
		AntiAddictionCommonConfig_tFB2E9080FF6D416F4697BBF3B6CE8BCFECFF41CC * L_10 = ___config0;
		NullCheck(L_10);
		int32_t L_11;
		L_11 = AntiAddictionCommonConfig_get_teenPayLimit_mC1B351F9866256C55FC8954569F647FF3C1D391A_inline(L_10, /*hidden argument*/NULL);
		AntiAddiction_AntiAddictionSetSinglePaymentAmountLimitJunior_m667DB958E1FE6BFB4E063301F79D78B69DC96C1C(L_11, /*hidden argument*/NULL);
		// AntiAddictionSetMouthTotalPaymentAmountLimitJunior(config.teenMonthPayLimit);
		AntiAddictionCommonConfig_tFB2E9080FF6D416F4697BBF3B6CE8BCFECFF41CC * L_12 = ___config0;
		NullCheck(L_12);
		int32_t L_13;
		L_13 = AntiAddictionCommonConfig_get_teenMonthPayLimit_mAA105293E331368F58DD74F647C1130392742C03_inline(L_12, /*hidden argument*/NULL);
		AntiAddiction_AntiAddictionSetMouthTotalPaymentAmountLimitJunior_m28A51E8E63E3ECD5DEAC1E220FBEDEDA5063C1EB(L_13, /*hidden argument*/NULL);
		// AntiAddictionSetSinglePaymentAmountLimitSenior(config.youngPayLimit);
		AntiAddictionCommonConfig_tFB2E9080FF6D416F4697BBF3B6CE8BCFECFF41CC * L_14 = ___config0;
		NullCheck(L_14);
		int32_t L_15;
		L_15 = AntiAddictionCommonConfig_get_youngPayLimit_mB212A13FFAFC8DF489E84D5030A75FE2994B88D0_inline(L_14, /*hidden argument*/NULL);
		AntiAddiction_AntiAddictionSetSinglePaymentAmountLimitSenior_mAE4ECE5948FA0BCBC711CC52B5AC2B9D95B9F3B7(L_15, /*hidden argument*/NULL);
		// AntiAddictionSetMouthTotalPaymentAmountLimitSenior(config.youngMonthPayLimit);
		AntiAddictionCommonConfig_tFB2E9080FF6D416F4697BBF3B6CE8BCFECFF41CC * L_16 = ___config0;
		NullCheck(L_16);
		int32_t L_17;
		L_17 = AntiAddictionCommonConfig_get_youngMonthPayLimit_mC6CD61276FFD9DFA2572FD1A3893374E0E0D21B2_inline(L_16, /*hidden argument*/NULL);
		AntiAddiction_AntiAddictionSetMouthTotalPaymentAmountLimitSenior_m35AA58E03E1080D35113F8AD48F9AB9E224B30B9(L_17, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void AntiAddictionSdk.OpenSource.AntiAddiction::setHost(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AntiAddiction_setHost_m031827921620F2D55C27DE1C8C8B1C61614AB771 (String_t* ___host0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AntiAddiction_t48341ECCB1DF1C64757849008C5BD7356AAEC7AD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// AntiAddictionSetHost(host);
		String_t* L_0 = ___host0;
		IL2CPP_RUNTIME_CLASS_INIT(AntiAddiction_t48341ECCB1DF1C64757849008C5BD7356AAEC7AD_il2cpp_TypeInfo_var);
		AntiAddiction_AntiAddictionSetHost_m48634C3EA6E64A04037FC4BCBBFE932A6247143E(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void AntiAddictionSdk.OpenSource.AntiAddiction::login(System.String,AntiAddictionSdk.OpenSource.AntiAddictionUserType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AntiAddiction_login_m5AE2E22172B6C1C0C498A87EE67F628D5FF16954 (String_t* ___userId0, int32_t ___userType1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AntiAddiction_t48341ECCB1DF1C64757849008C5BD7356AAEC7AD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// AntiAddictionLogin(userId, (int)userType);
		String_t* L_0 = ___userId0;
		int32_t L_1 = ___userType1;
		IL2CPP_RUNTIME_CLASS_INIT(AntiAddiction_t48341ECCB1DF1C64757849008C5BD7356AAEC7AD_il2cpp_TypeInfo_var);
		AntiAddiction_AntiAddictionLogin_mEF3B1D5F0989C537D2B01A778CF65E6AA07B29D0(L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void AntiAddictionSdk.OpenSource.AntiAddiction::updateUserType(AntiAddictionSdk.OpenSource.AntiAddictionUserType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AntiAddiction_updateUserType_mD450CF162DD1A0B215F8DE22A2F7B43866B6BCDD (int32_t ___userType0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AntiAddiction_t48341ECCB1DF1C64757849008C5BD7356AAEC7AD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// AntiAddictionUpdateUserType((int)userType);
		int32_t L_0 = ___userType0;
		IL2CPP_RUNTIME_CLASS_INIT(AntiAddiction_t48341ECCB1DF1C64757849008C5BD7356AAEC7AD_il2cpp_TypeInfo_var);
		AntiAddiction_AntiAddictionUpdateUserType_m6078706588A7174B55605F9E8316FBF7A63F78D0(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void AntiAddictionSdk.OpenSource.AntiAddiction::logout()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AntiAddiction_logout_m5FA5AEAE9AD1B85A78DC807897B298C51DFCE1E8 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AntiAddiction_t48341ECCB1DF1C64757849008C5BD7356AAEC7AD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// AntiAddictionLogout();
		IL2CPP_RUNTIME_CLASS_INIT(AntiAddiction_t48341ECCB1DF1C64757849008C5BD7356AAEC7AD_il2cpp_TypeInfo_var);
		AntiAddiction_AntiAddictionLogout_m354E46A655E5DAE4640D38C8919445B47F1E84FF(/*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Int32 AntiAddictionSdk.OpenSource.AntiAddiction::getUserType(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AntiAddiction_getUserType_mF9EA980D255DD54BF23CA0E3535345B9E4477706 (String_t* ___userId0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AntiAddiction_t48341ECCB1DF1C64757849008C5BD7356AAEC7AD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return AntiAddictionGetUserType(userId);
		String_t* L_0 = ___userId0;
		IL2CPP_RUNTIME_CLASS_INIT(AntiAddiction_t48341ECCB1DF1C64757849008C5BD7356AAEC7AD_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = AntiAddiction_AntiAddictionGetUserType_m260E02FBB4278D402E0972299AD8C394D6BF96EE(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void AntiAddictionSdk.OpenSource.AntiAddiction::checkPayLimit(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AntiAddiction_checkPayLimit_mCFE9D907D091DE60145C3E5DD85EE4B2C0C0AD78 (int32_t ___price0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AntiAddiction_t48341ECCB1DF1C64757849008C5BD7356AAEC7AD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// AntiAddictionCheckPayLimit(price);
		int32_t L_0 = ___price0;
		IL2CPP_RUNTIME_CLASS_INIT(AntiAddiction_t48341ECCB1DF1C64757849008C5BD7356AAEC7AD_il2cpp_TypeInfo_var);
		AntiAddiction_AntiAddictionCheckPayLimit_mB213F29D2B522C371A6CCC68530F73281D9632FB(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void AntiAddictionSdk.OpenSource.AntiAddiction::paySuccess(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AntiAddiction_paySuccess_m66E489B24FF7730FD3BCC19976686592B0BFDBA8 (int32_t ___price0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AntiAddiction_t48341ECCB1DF1C64757849008C5BD7356AAEC7AD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// AntiAddictionPaySuccess(price);
		int32_t L_0 = ___price0;
		IL2CPP_RUNTIME_CLASS_INIT(AntiAddiction_t48341ECCB1DF1C64757849008C5BD7356AAEC7AD_il2cpp_TypeInfo_var);
		AntiAddiction_AntiAddictionPaySuccess_m9C937B4CBC757F5A7BD7367D972C890EC19F8C07(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void AntiAddictionSdk.OpenSource.AntiAddiction::checkChatLimit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AntiAddiction_checkChatLimit_m8FB33B6E1B85169C64F2898A6EE275A497E52BC7 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AntiAddiction_t48341ECCB1DF1C64757849008C5BD7356AAEC7AD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// AntiAddictionCheckChatLimit();
		IL2CPP_RUNTIME_CLASS_INIT(AntiAddiction_t48341ECCB1DF1C64757849008C5BD7356AAEC7AD_il2cpp_TypeInfo_var);
		AntiAddiction_AntiAddictionCheckChatLimit_mA587F1A7E6D26561677477A48C003D8189834ED2(/*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void AntiAddictionSdk.OpenSource.AntiAddiction::openRealName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AntiAddiction_openRealName_mFD0E6CC39FFE848DEE3BBDC6E2701F10729F2D35 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AntiAddiction_t48341ECCB1DF1C64757849008C5BD7356AAEC7AD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// AntiAddictionOpenRealName();
		IL2CPP_RUNTIME_CLASS_INIT(AntiAddiction_t48341ECCB1DF1C64757849008C5BD7356AAEC7AD_il2cpp_TypeInfo_var);
		AntiAddiction_AntiAddictionOpenRealName_m9259FE768B97709344BC0ECB73A4214F07BEDAD9(/*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void AntiAddictionSdk.OpenSource.AntiAddiction::onResume()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AntiAddiction_onResume_m69AEDD48BE9176DC1054FA0E0A3FCBE23B004E5C (const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void AntiAddictionSdk.OpenSource.AntiAddiction::onStop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AntiAddiction_onStop_m3488BE271434ABDD86ACE6D2977DEB164CA28079 (const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void AntiAddictionSdk.OpenSource.AntiAddiction::AntiAddictionInit(AntiAddictionSdk.OpenSource.AntiAddiction/AntiAddictionDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AntiAddiction_AntiAddictionInit_mB0DFDB2EAD7B469B813994CAD25EDC5214AFFBF6 (AntiAddictionDelegate_t849C34933F2BEB8A44306738A7F07A582DC9EDBF * ___antiDelegate0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (Il2CppMethodPointer);

	// Marshaling of parameter '___antiDelegate0' to native representation
	Il2CppMethodPointer ____antiDelegate0_marshaled = NULL;
	____antiDelegate0_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___antiDelegate0));

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(AntiAddictionInit)(____antiDelegate0_marshaled);

}
// System.Void AntiAddictionSdk.OpenSource.AntiAddiction::AntiAddictionSetFunctionConfig(System.Boolean,System.Boolean,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AntiAddiction_AntiAddictionSetFunctionConfig_m39CB26D81CE5FEAE58699BBA3FBC141FFF98783C (bool ___useSdkRealName0, bool ___useSdkPaymentLimit1, bool ___useSdkOnlineTimeLimit2, bool ___showSwitchAccountButton3, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t, int32_t, int32_t, int32_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(AntiAddictionSetFunctionConfig)(static_cast<int32_t>(___useSdkRealName0), static_cast<int32_t>(___useSdkPaymentLimit1), static_cast<int32_t>(___useSdkOnlineTimeLimit2), static_cast<int32_t>(___showSwitchAccountButton3));

}
// System.Void AntiAddictionSdk.OpenSource.AntiAddiction::AntiAddictionSetHost(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AntiAddiction_AntiAddictionSetHost_m48634C3EA6E64A04037FC4BCBBFE932A6247143E (String_t* ___host0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*);

	// Marshaling of parameter '___host0' to native representation
	char* ____host0_marshaled = NULL;
	____host0_marshaled = il2cpp_codegen_marshal_string(___host0);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(AntiAddictionSetHost)(____host0_marshaled);

	// Marshaling cleanup of parameter '___host0' native representation
	il2cpp_codegen_marshal_free(____host0_marshaled);
	____host0_marshaled = NULL;

}
// System.Void AntiAddictionSdk.OpenSource.AntiAddiction::AntiAddictionLogin(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AntiAddiction_AntiAddictionLogin_mEF3B1D5F0989C537D2B01A778CF65E6AA07B29D0 (String_t* ___userId0, int32_t ___userType1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*, int32_t);

	// Marshaling of parameter '___userId0' to native representation
	char* ____userId0_marshaled = NULL;
	____userId0_marshaled = il2cpp_codegen_marshal_string(___userId0);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(AntiAddictionLogin)(____userId0_marshaled, ___userType1);

	// Marshaling cleanup of parameter '___userId0' native representation
	il2cpp_codegen_marshal_free(____userId0_marshaled);
	____userId0_marshaled = NULL;

}
// System.Void AntiAddictionSdk.OpenSource.AntiAddiction::AntiAddictionUpdateUserType(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AntiAddiction_AntiAddictionUpdateUserType_m6078706588A7174B55605F9E8316FBF7A63F78D0 (int32_t ___userType0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(AntiAddictionUpdateUserType)(___userType0);

}
// System.Void AntiAddictionSdk.OpenSource.AntiAddiction::AntiAddictionLogout()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AntiAddiction_AntiAddictionLogout_m354E46A655E5DAE4640D38C8919445B47F1E84FF (const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(AntiAddictionLogout)();

}
// System.Int32 AntiAddictionSdk.OpenSource.AntiAddiction::AntiAddictionGetUserType(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AntiAddiction_AntiAddictionGetUserType_m260E02FBB4278D402E0972299AD8C394D6BF96EE (String_t* ___userId0, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (char*);

	// Marshaling of parameter '___userId0' to native representation
	char* ____userId0_marshaled = NULL;
	____userId0_marshaled = il2cpp_codegen_marshal_string(___userId0);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(AntiAddictionGetUserType)(____userId0_marshaled);

	// Marshaling cleanup of parameter '___userId0' native representation
	il2cpp_codegen_marshal_free(____userId0_marshaled);
	____userId0_marshaled = NULL;

	return returnValue;
}
// System.Void AntiAddictionSdk.OpenSource.AntiAddiction::AntiAddictionCheckPayLimit(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AntiAddiction_AntiAddictionCheckPayLimit_mB213F29D2B522C371A6CCC68530F73281D9632FB (int32_t ___amount0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(AntiAddictionCheckPayLimit)(___amount0);

}
// System.Void AntiAddictionSdk.OpenSource.AntiAddiction::AntiAddictionPaySuccess(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AntiAddiction_AntiAddictionPaySuccess_m9C937B4CBC757F5A7BD7367D972C890EC19F8C07 (int32_t ___amount0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(AntiAddictionPaySuccess)(___amount0);

}
// System.Void AntiAddictionSdk.OpenSource.AntiAddiction::AntiAddictionCheckChatLimit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AntiAddiction_AntiAddictionCheckChatLimit_mA587F1A7E6D26561677477A48C003D8189834ED2 (const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(AntiAddictionCheckChatLimit)();

}
// System.Void AntiAddictionSdk.OpenSource.AntiAddiction::AntiAddictionOpenRealName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AntiAddiction_AntiAddictionOpenRealName_m9259FE768B97709344BC0ECB73A4214F07BEDAD9 (const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(AntiAddictionOpenRealName)();

}
// System.Void AntiAddictionSdk.OpenSource.AntiAddiction::AntiAddictionSetGuestTotalTime(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AntiAddiction_AntiAddictionSetGuestTotalTime_mFCB741F05C18C489BA0449DF155548AB1EF7BDF4 (int32_t ___time0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(AntiAddictionSetGuestTotalTime)(___time0);

}
// System.Void AntiAddictionSdk.OpenSource.AntiAddiction::AntiAddictionSetCurfewHourStart(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AntiAddiction_AntiAddictionSetCurfewHourStart_mBE51549C706506C8F3652C2EEEFA58BDCE5B1526 (int32_t ___time0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(AntiAddictionSetCurfewHourStart)(___time0);

}
// System.Void AntiAddictionSdk.OpenSource.AntiAddiction::AntiAddictionSetCurfewHourEnd(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AntiAddiction_AntiAddictionSetCurfewHourEnd_m7C9EF4B51CD0C8B8DFBBD0B107137D3E4DE0F9F1 (int32_t ___time0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(AntiAddictionSetCurfewHourEnd)(___time0);

}
// System.Void AntiAddictionSdk.OpenSource.AntiAddiction::AntiAddictionSetMinorCommonDayTotalTime(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AntiAddiction_AntiAddictionSetMinorCommonDayTotalTime_m39F1A8D107181CE206070BCAEAFDE1EFA0C6F767 (int32_t ___time0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(AntiAddictionSetMinorCommonDayTotalTime)(___time0);

}
// System.Void AntiAddictionSdk.OpenSource.AntiAddiction::AntiAddictionSetMinorHolidayTotalTime(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AntiAddiction_AntiAddictionSetMinorHolidayTotalTime_m500182B839700B07058255617848FB0870480C90 (int32_t ___time0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(AntiAddictionSetMinorHolidayTotalTime)(___time0);

}
// System.Void AntiAddictionSdk.OpenSource.AntiAddiction::AntiAddictionSetSinglePaymentAmountLimitJunior(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AntiAddiction_AntiAddictionSetSinglePaymentAmountLimitJunior_m667DB958E1FE6BFB4E063301F79D78B69DC96C1C (int32_t ___amount0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(AntiAddictionSetSinglePaymentAmountLimitJunior)(___amount0);

}
// System.Void AntiAddictionSdk.OpenSource.AntiAddiction::AntiAddictionSetMouthTotalPaymentAmountLimitJunior(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AntiAddiction_AntiAddictionSetMouthTotalPaymentAmountLimitJunior_m28A51E8E63E3ECD5DEAC1E220FBEDEDA5063C1EB (int32_t ___amount0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(AntiAddictionSetMouthTotalPaymentAmountLimitJunior)(___amount0);

}
// System.Void AntiAddictionSdk.OpenSource.AntiAddiction::AntiAddictionSetSinglePaymentAmountLimitSenior(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AntiAddiction_AntiAddictionSetSinglePaymentAmountLimitSenior_mAE4ECE5948FA0BCBC711CC52B5AC2B9D95B9F3B7 (int32_t ___amount0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(AntiAddictionSetSinglePaymentAmountLimitSenior)(___amount0);

}
// System.Void AntiAddictionSdk.OpenSource.AntiAddiction::AntiAddictionSetMouthTotalPaymentAmountLimitSenior(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AntiAddiction_AntiAddictionSetMouthTotalPaymentAmountLimitSenior_m35AA58E03E1080D35113F8AD48F9AB9E224B30B9 (int32_t ___amount0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(AntiAddictionSetMouthTotalPaymentAmountLimitSenior)(___amount0);

}
// System.Void AntiAddictionSdk.OpenSource.AntiAddiction::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AntiAddiction__ctor_m61FC6401F8CC0E449982B0D43681767818C68EFD (AntiAddiction_t48341ECCB1DF1C64757849008C5BD7356AAEC7AD * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AntiAddictionSdk.OpenSource.AntiAddiction::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AntiAddiction__cctor_mBA2284163389C61775580F0C1439CDD37B02F3DD (const RuntimeMethod* method)
{
	{
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
// System.Int32 AntiAddictionSdk.OpenSource.AntiAddictionCommonConfig::get_gusterTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AntiAddictionCommonConfig_get_gusterTime_m97F62C5654BAEDC31CB3BBB2398A3F7043CCE4C5 (AntiAddictionCommonConfig_tFB2E9080FF6D416F4697BBF3B6CE8BCFECFF41CC * __this, const RuntimeMethod* method)
{
	{
		// public int gusterTime{ get; set;}
		int32_t L_0 = __this->get_U3CgusterTimeU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void AntiAddictionSdk.OpenSource.AntiAddictionCommonConfig::set_gusterTime(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AntiAddictionCommonConfig_set_gusterTime_m301ADA09A6CDE73737817329CCB45F214DA20BE1 (AntiAddictionCommonConfig_tFB2E9080FF6D416F4697BBF3B6CE8BCFECFF41CC * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int gusterTime{ get; set;}
		int32_t L_0 = ___value0;
		__this->set_U3CgusterTimeU3Ek__BackingField_0(L_0);
		return;
	}
}
// System.Int32 AntiAddictionSdk.OpenSource.AntiAddictionCommonConfig::get_nightStrictStart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AntiAddictionCommonConfig_get_nightStrictStart_mB00FDD33B154F1C055967C97174683C1663DEE95 (AntiAddictionCommonConfig_tFB2E9080FF6D416F4697BBF3B6CE8BCFECFF41CC * __this, const RuntimeMethod* method)
{
	{
		// public int nightStrictStart{ get; set;}
		int32_t L_0 = __this->get_U3CnightStrictStartU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void AntiAddictionSdk.OpenSource.AntiAddictionCommonConfig::set_nightStrictStart(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AntiAddictionCommonConfig_set_nightStrictStart_m5034B338676721179AD37BFB8F725FACE8066E5F (AntiAddictionCommonConfig_tFB2E9080FF6D416F4697BBF3B6CE8BCFECFF41CC * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int nightStrictStart{ get; set;}
		int32_t L_0 = ___value0;
		__this->set_U3CnightStrictStartU3Ek__BackingField_1(L_0);
		return;
	}
}
// System.Int32 AntiAddictionSdk.OpenSource.AntiAddictionCommonConfig::get_nightStrictEnd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AntiAddictionCommonConfig_get_nightStrictEnd_m7224D1E7860A2F15354859A7BB5F8B89D6135D46 (AntiAddictionCommonConfig_tFB2E9080FF6D416F4697BBF3B6CE8BCFECFF41CC * __this, const RuntimeMethod* method)
{
	{
		// public int nightStrictEnd{ get; set;}
		int32_t L_0 = __this->get_U3CnightStrictEndU3Ek__BackingField_2();
		return L_0;
	}
}
// System.Void AntiAddictionSdk.OpenSource.AntiAddictionCommonConfig::set_nightStrictEnd(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AntiAddictionCommonConfig_set_nightStrictEnd_m9AFD77B49B44593F2827E39ECA96894D510B8CD7 (AntiAddictionCommonConfig_tFB2E9080FF6D416F4697BBF3B6CE8BCFECFF41CC * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int nightStrictEnd{ get; set;}
		int32_t L_0 = ___value0;
		__this->set_U3CnightStrictEndU3Ek__BackingField_2(L_0);
		return;
	}
}
// System.Int32 AntiAddictionSdk.OpenSource.AntiAddictionCommonConfig::get_childCommonTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AntiAddictionCommonConfig_get_childCommonTime_m2573A1F8EE1B7DA9551587105636C60CE1AC24C5 (AntiAddictionCommonConfig_tFB2E9080FF6D416F4697BBF3B6CE8BCFECFF41CC * __this, const RuntimeMethod* method)
{
	{
		// public int childCommonTime{ get; set;}
		int32_t L_0 = __this->get_U3CchildCommonTimeU3Ek__BackingField_3();
		return L_0;
	}
}
// System.Void AntiAddictionSdk.OpenSource.AntiAddictionCommonConfig::set_childCommonTime(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AntiAddictionCommonConfig_set_childCommonTime_mE7404312305C64D0A717178D41EF5A911E4C1923 (AntiAddictionCommonConfig_tFB2E9080FF6D416F4697BBF3B6CE8BCFECFF41CC * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int childCommonTime{ get; set;}
		int32_t L_0 = ___value0;
		__this->set_U3CchildCommonTimeU3Ek__BackingField_3(L_0);
		return;
	}
}
// System.Int32 AntiAddictionSdk.OpenSource.AntiAddictionCommonConfig::get_childHolidayTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AntiAddictionCommonConfig_get_childHolidayTime_m4EF339B9D2E9630EE205D1E301EBA9D74269512E (AntiAddictionCommonConfig_tFB2E9080FF6D416F4697BBF3B6CE8BCFECFF41CC * __this, const RuntimeMethod* method)
{
	{
		// public int childHolidayTime{ get; set;}
		int32_t L_0 = __this->get_U3CchildHolidayTimeU3Ek__BackingField_4();
		return L_0;
	}
}
// System.Void AntiAddictionSdk.OpenSource.AntiAddictionCommonConfig::set_childHolidayTime(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AntiAddictionCommonConfig_set_childHolidayTime_m7A4C5AFFDB2E8A3CBA188881A8789B7DC2361E41 (AntiAddictionCommonConfig_tFB2E9080FF6D416F4697BBF3B6CE8BCFECFF41CC * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int childHolidayTime{ get; set;}
		int32_t L_0 = ___value0;
		__this->set_U3CchildHolidayTimeU3Ek__BackingField_4(L_0);
		return;
	}
}
// System.Int32 AntiAddictionSdk.OpenSource.AntiAddictionCommonConfig::get_teenPayLimit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AntiAddictionCommonConfig_get_teenPayLimit_mC1B351F9866256C55FC8954569F647FF3C1D391A (AntiAddictionCommonConfig_tFB2E9080FF6D416F4697BBF3B6CE8BCFECFF41CC * __this, const RuntimeMethod* method)
{
	{
		// public int teenPayLimit{ get; set;}
		int32_t L_0 = __this->get_U3CteenPayLimitU3Ek__BackingField_5();
		return L_0;
	}
}
// System.Void AntiAddictionSdk.OpenSource.AntiAddictionCommonConfig::set_teenPayLimit(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AntiAddictionCommonConfig_set_teenPayLimit_m2FE3A8D996DDE73AB50FB435B9A562A6003D4314 (AntiAddictionCommonConfig_tFB2E9080FF6D416F4697BBF3B6CE8BCFECFF41CC * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int teenPayLimit{ get; set;}
		int32_t L_0 = ___value0;
		__this->set_U3CteenPayLimitU3Ek__BackingField_5(L_0);
		return;
	}
}
// System.Int32 AntiAddictionSdk.OpenSource.AntiAddictionCommonConfig::get_teenMonthPayLimit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AntiAddictionCommonConfig_get_teenMonthPayLimit_mAA105293E331368F58DD74F647C1130392742C03 (AntiAddictionCommonConfig_tFB2E9080FF6D416F4697BBF3B6CE8BCFECFF41CC * __this, const RuntimeMethod* method)
{
	{
		// public int teenMonthPayLimit{ get; set;}
		int32_t L_0 = __this->get_U3CteenMonthPayLimitU3Ek__BackingField_6();
		return L_0;
	}
}
// System.Void AntiAddictionSdk.OpenSource.AntiAddictionCommonConfig::set_teenMonthPayLimit(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AntiAddictionCommonConfig_set_teenMonthPayLimit_m5354072F04EC31E23785E01013E32AC9AC7FE37E (AntiAddictionCommonConfig_tFB2E9080FF6D416F4697BBF3B6CE8BCFECFF41CC * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int teenMonthPayLimit{ get; set;}
		int32_t L_0 = ___value0;
		__this->set_U3CteenMonthPayLimitU3Ek__BackingField_6(L_0);
		return;
	}
}
// System.Int32 AntiAddictionSdk.OpenSource.AntiAddictionCommonConfig::get_youngPayLimit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AntiAddictionCommonConfig_get_youngPayLimit_mB212A13FFAFC8DF489E84D5030A75FE2994B88D0 (AntiAddictionCommonConfig_tFB2E9080FF6D416F4697BBF3B6CE8BCFECFF41CC * __this, const RuntimeMethod* method)
{
	{
		// public int youngPayLimit{ get; set;}
		int32_t L_0 = __this->get_U3CyoungPayLimitU3Ek__BackingField_7();
		return L_0;
	}
}
// System.Void AntiAddictionSdk.OpenSource.AntiAddictionCommonConfig::set_youngPayLimit(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AntiAddictionCommonConfig_set_youngPayLimit_mA7844C408091C806E7B1664098E55946A1699AFD (AntiAddictionCommonConfig_tFB2E9080FF6D416F4697BBF3B6CE8BCFECFF41CC * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int youngPayLimit{ get; set;}
		int32_t L_0 = ___value0;
		__this->set_U3CyoungPayLimitU3Ek__BackingField_7(L_0);
		return;
	}
}
// System.Int32 AntiAddictionSdk.OpenSource.AntiAddictionCommonConfig::get_youngMonthPayLimit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AntiAddictionCommonConfig_get_youngMonthPayLimit_mC6CD61276FFD9DFA2572FD1A3893374E0E0D21B2 (AntiAddictionCommonConfig_tFB2E9080FF6D416F4697BBF3B6CE8BCFECFF41CC * __this, const RuntimeMethod* method)
{
	{
		// public int youngMonthPayLimit{ get; set;}
		int32_t L_0 = __this->get_U3CyoungMonthPayLimitU3Ek__BackingField_8();
		return L_0;
	}
}
// System.Void AntiAddictionSdk.OpenSource.AntiAddictionCommonConfig::set_youngMonthPayLimit(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AntiAddictionCommonConfig_set_youngMonthPayLimit_m54A49A7275BDC7328DDE8FCBEEFFB091F9EF8BA1 (AntiAddictionCommonConfig_tFB2E9080FF6D416F4697BBF3B6CE8BCFECFF41CC * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int youngMonthPayLimit{ get; set;}
		int32_t L_0 = ___value0;
		__this->set_U3CyoungMonthPayLimitU3Ek__BackingField_8(L_0);
		return;
	}
}
// System.Void AntiAddictionSdk.OpenSource.AntiAddictionCommonConfig::.ctor(AntiAddictionSdk.OpenSource.AntiAddictionCommonConfig/Builder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AntiAddictionCommonConfig__ctor_m3950F1FF21D6A7278A7B5F28E5D88B5881606A55 (AntiAddictionCommonConfig_tFB2E9080FF6D416F4697BBF3B6CE8BCFECFF41CC * __this, Builder_t23ABFB73E05835CA7F11F21092D5E8652D8D081E * ___builder0, const RuntimeMethod* method)
{
	{
		// private AntiAddictionCommonConfig(Builder builder) {
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// this.gusterTime = builder.gusterTime;
		Builder_t23ABFB73E05835CA7F11F21092D5E8652D8D081E * L_0 = ___builder0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = Builder_get_gusterTime_mBE1D4FBD0AC9E997EF672842D969FF4824BA155D_inline(L_0, /*hidden argument*/NULL);
		AntiAddictionCommonConfig_set_gusterTime_m301ADA09A6CDE73737817329CCB45F214DA20BE1_inline(__this, L_1, /*hidden argument*/NULL);
		// this.nightStrictStart = builder.nightStrictStart;
		Builder_t23ABFB73E05835CA7F11F21092D5E8652D8D081E * L_2 = ___builder0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = Builder_get_nightStrictStart_m5BECFE51FB4A529782DB60A66C08BBEA9B4E012D_inline(L_2, /*hidden argument*/NULL);
		AntiAddictionCommonConfig_set_nightStrictStart_m5034B338676721179AD37BFB8F725FACE8066E5F_inline(__this, L_3, /*hidden argument*/NULL);
		// this.nightStrictEnd = builder.nightStrictEnd;
		Builder_t23ABFB73E05835CA7F11F21092D5E8652D8D081E * L_4 = ___builder0;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = Builder_get_nightStrictEnd_mEF50A39C5C4CA417E38CCF3C20C39C1D79C2326A_inline(L_4, /*hidden argument*/NULL);
		AntiAddictionCommonConfig_set_nightStrictEnd_m9AFD77B49B44593F2827E39ECA96894D510B8CD7_inline(__this, L_5, /*hidden argument*/NULL);
		// this.childCommonTime = builder.childCommonTime;
		Builder_t23ABFB73E05835CA7F11F21092D5E8652D8D081E * L_6 = ___builder0;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = Builder_get_childCommonTime_mF77BC95A656CB982A103D280FCBD0BF7D229E41E_inline(L_6, /*hidden argument*/NULL);
		AntiAddictionCommonConfig_set_childCommonTime_mE7404312305C64D0A717178D41EF5A911E4C1923_inline(__this, L_7, /*hidden argument*/NULL);
		// this.childHolidayTime = builder.childHolidayTime;
		Builder_t23ABFB73E05835CA7F11F21092D5E8652D8D081E * L_8 = ___builder0;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = Builder_get_childHolidayTime_m0921784655E54C8DEC175F5AB18FB2C289B2E2BC_inline(L_8, /*hidden argument*/NULL);
		AntiAddictionCommonConfig_set_childHolidayTime_m7A4C5AFFDB2E8A3CBA188881A8789B7DC2361E41_inline(__this, L_9, /*hidden argument*/NULL);
		// this.teenPayLimit = builder.teenPayLimit;
		Builder_t23ABFB73E05835CA7F11F21092D5E8652D8D081E * L_10 = ___builder0;
		NullCheck(L_10);
		int32_t L_11;
		L_11 = Builder_get_teenPayLimit_mB43D99A68624D1FE4CC8F2B636921DE645C950B8_inline(L_10, /*hidden argument*/NULL);
		AntiAddictionCommonConfig_set_teenPayLimit_m2FE3A8D996DDE73AB50FB435B9A562A6003D4314_inline(__this, L_11, /*hidden argument*/NULL);
		// this.teenMonthPayLimit = builder.teenMonthPayLimit;
		Builder_t23ABFB73E05835CA7F11F21092D5E8652D8D081E * L_12 = ___builder0;
		NullCheck(L_12);
		int32_t L_13;
		L_13 = Builder_get_teenMonthPayLimit_mDA52D5129A614D37736CF081E1E706D73C5F8A0F_inline(L_12, /*hidden argument*/NULL);
		AntiAddictionCommonConfig_set_teenMonthPayLimit_m5354072F04EC31E23785E01013E32AC9AC7FE37E_inline(__this, L_13, /*hidden argument*/NULL);
		// this.youngPayLimit = builder.youngPayLimit;
		Builder_t23ABFB73E05835CA7F11F21092D5E8652D8D081E * L_14 = ___builder0;
		NullCheck(L_14);
		int32_t L_15;
		L_15 = Builder_get_youngPayLimit_mBB76B75B2FC238BBF1D9C3EC84DACE4EEAD34BAF_inline(L_14, /*hidden argument*/NULL);
		AntiAddictionCommonConfig_set_youngPayLimit_mA7844C408091C806E7B1664098E55946A1699AFD_inline(__this, L_15, /*hidden argument*/NULL);
		// this.youngMonthPayLimit = builder.youngMonthPayLimit;
		Builder_t23ABFB73E05835CA7F11F21092D5E8652D8D081E * L_16 = ___builder0;
		NullCheck(L_16);
		int32_t L_17;
		L_17 = Builder_get_youngMonthPayLimit_m48759AE592414B91631DD166FCA4FD47F6D7EA5A_inline(L_16, /*hidden argument*/NULL);
		AntiAddictionCommonConfig_set_youngMonthPayLimit_m54A49A7275BDC7328DDE8FCBEEFFB091F9EF8BA1_inline(__this, L_17, /*hidden argument*/NULL);
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
// System.Boolean AntiAddictionSdk.OpenSource.AntiAddictionFunctionConfig::get_useSdkRealName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AntiAddictionFunctionConfig_get_useSdkRealName_m2B993B5E50E6A15CEEEBFCB33D78A81B1F359D6A (AntiAddictionFunctionConfig_t40E5C47E03007344B5CE5A8D78DE06A18336E8E1 * __this, const RuntimeMethod* method)
{
	{
		// public bool useSdkRealName{ get; set;}
		bool L_0 = __this->get_U3CuseSdkRealNameU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void AntiAddictionSdk.OpenSource.AntiAddictionFunctionConfig::set_useSdkRealName(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AntiAddictionFunctionConfig_set_useSdkRealName_m3208F98CB513C358EC8D4FEB7A25946042B47B12 (AntiAddictionFunctionConfig_t40E5C47E03007344B5CE5A8D78DE06A18336E8E1 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool useSdkRealName{ get; set;}
		bool L_0 = ___value0;
		__this->set_U3CuseSdkRealNameU3Ek__BackingField_0(L_0);
		return;
	}
}
// System.Boolean AntiAddictionSdk.OpenSource.AntiAddictionFunctionConfig::get_useSdkPaymentLimit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AntiAddictionFunctionConfig_get_useSdkPaymentLimit_mF5153FB6074753730F6357F8215E2C0CD2264702 (AntiAddictionFunctionConfig_t40E5C47E03007344B5CE5A8D78DE06A18336E8E1 * __this, const RuntimeMethod* method)
{
	{
		// public bool useSdkPaymentLimit{ get; set;}
		bool L_0 = __this->get_U3CuseSdkPaymentLimitU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void AntiAddictionSdk.OpenSource.AntiAddictionFunctionConfig::set_useSdkPaymentLimit(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AntiAddictionFunctionConfig_set_useSdkPaymentLimit_m59BB6A1D0F0A4F6F23395BBD0A38E9EB7BF2B8D3 (AntiAddictionFunctionConfig_t40E5C47E03007344B5CE5A8D78DE06A18336E8E1 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool useSdkPaymentLimit{ get; set;}
		bool L_0 = ___value0;
		__this->set_U3CuseSdkPaymentLimitU3Ek__BackingField_1(L_0);
		return;
	}
}
// System.Boolean AntiAddictionSdk.OpenSource.AntiAddictionFunctionConfig::get_useSdkOnlineTimeLimit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AntiAddictionFunctionConfig_get_useSdkOnlineTimeLimit_m6868BE409709113E71232AE928CC48EB9417EBA0 (AntiAddictionFunctionConfig_t40E5C47E03007344B5CE5A8D78DE06A18336E8E1 * __this, const RuntimeMethod* method)
{
	{
		// public bool useSdkOnlineTimeLimit{ get; set;}
		bool L_0 = __this->get_U3CuseSdkOnlineTimeLimitU3Ek__BackingField_2();
		return L_0;
	}
}
// System.Void AntiAddictionSdk.OpenSource.AntiAddictionFunctionConfig::set_useSdkOnlineTimeLimit(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AntiAddictionFunctionConfig_set_useSdkOnlineTimeLimit_m8F953FB092167CCD963865B4E3772D54EC713B8E (AntiAddictionFunctionConfig_t40E5C47E03007344B5CE5A8D78DE06A18336E8E1 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool useSdkOnlineTimeLimit{ get; set;}
		bool L_0 = ___value0;
		__this->set_U3CuseSdkOnlineTimeLimitU3Ek__BackingField_2(L_0);
		return;
	}
}
// System.Boolean AntiAddictionSdk.OpenSource.AntiAddictionFunctionConfig::get_showSwitchAccountButton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AntiAddictionFunctionConfig_get_showSwitchAccountButton_m5B2D7AB2EB6D2AB689E5FDFFBBB53E6F6736A0CF (AntiAddictionFunctionConfig_t40E5C47E03007344B5CE5A8D78DE06A18336E8E1 * __this, const RuntimeMethod* method)
{
	{
		// public bool showSwitchAccountButton{ get; set;}
		bool L_0 = __this->get_U3CshowSwitchAccountButtonU3Ek__BackingField_3();
		return L_0;
	}
}
// System.Void AntiAddictionSdk.OpenSource.AntiAddictionFunctionConfig::set_showSwitchAccountButton(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AntiAddictionFunctionConfig_set_showSwitchAccountButton_m81E1AC84F7DCBE2BDACC1AEF7176959ACFF7AA6E (AntiAddictionFunctionConfig_t40E5C47E03007344B5CE5A8D78DE06A18336E8E1 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool showSwitchAccountButton{ get; set;}
		bool L_0 = ___value0;
		__this->set_U3CshowSwitchAccountButtonU3Ek__BackingField_3(L_0);
		return;
	}
}
// System.Void AntiAddictionSdk.OpenSource.AntiAddictionFunctionConfig::.ctor(AntiAddictionSdk.OpenSource.AntiAddictionFunctionConfig/Builder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AntiAddictionFunctionConfig__ctor_m1C14136DDD98DCF36FD6465710A1344FD4C40B8E (AntiAddictionFunctionConfig_t40E5C47E03007344B5CE5A8D78DE06A18336E8E1 * __this, Builder_tDB5BA46A3678FD0B0719F961C0D5350B88F23E53 * ___builder0, const RuntimeMethod* method)
{
	{
		// private AntiAddictionFunctionConfig(Builder builder) {
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// this.useSdkRealName = builder.useSdkRealName;
		Builder_tDB5BA46A3678FD0B0719F961C0D5350B88F23E53 * L_0 = ___builder0;
		NullCheck(L_0);
		bool L_1;
		L_1 = Builder_get_useSdkRealName_m375A65580FE1D1D9B93619F348B4796E3F32C0C7_inline(L_0, /*hidden argument*/NULL);
		AntiAddictionFunctionConfig_set_useSdkRealName_m3208F98CB513C358EC8D4FEB7A25946042B47B12_inline(__this, L_1, /*hidden argument*/NULL);
		// this.useSdkPaymentLimit = builder.useSdkPaymentLimit;
		Builder_tDB5BA46A3678FD0B0719F961C0D5350B88F23E53 * L_2 = ___builder0;
		NullCheck(L_2);
		bool L_3;
		L_3 = Builder_get_useSdkPaymentLimit_m09FDC5F7F8F6E38306C3A657D367379D824C3D02_inline(L_2, /*hidden argument*/NULL);
		AntiAddictionFunctionConfig_set_useSdkPaymentLimit_m59BB6A1D0F0A4F6F23395BBD0A38E9EB7BF2B8D3_inline(__this, L_3, /*hidden argument*/NULL);
		// this.useSdkOnlineTimeLimit = builder.useSdkOnlineTimeLimit;
		Builder_tDB5BA46A3678FD0B0719F961C0D5350B88F23E53 * L_4 = ___builder0;
		NullCheck(L_4);
		bool L_5;
		L_5 = Builder_get_useSdkOnlineTimeLimit_mB4F1E0128EB73B44E4CE4E8D19C8E130994B3DF7_inline(L_4, /*hidden argument*/NULL);
		AntiAddictionFunctionConfig_set_useSdkOnlineTimeLimit_m8F953FB092167CCD963865B4E3772D54EC713B8E_inline(__this, L_5, /*hidden argument*/NULL);
		// this.showSwitchAccountButton = builder.showSwitchAccountButton;
		Builder_tDB5BA46A3678FD0B0719F961C0D5350B88F23E53 * L_6 = ___builder0;
		NullCheck(L_6);
		bool L_7;
		L_7 = Builder_get_showSwitchAccountButton_m01A286DC92B933054720986D41F817EEB4376EC5_inline(L_6, /*hidden argument*/NULL);
		AntiAddictionFunctionConfig_set_showSwitchAccountButton_m81E1AC84F7DCBE2BDACC1AEF7176959ACFF7AA6E_inline(__this, L_7, /*hidden argument*/NULL);
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
// System.Void AntiAddictionSdk.OpenSource.AntiAddictionHandler::.ctor(System.Action`2<System.Int32,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AntiAddictionHandler__ctor_mF64C0396790B47B2F83041B03FF08ED5F65D59D8 (AntiAddictionHandler_t54B50E46C25399A5B7B9EF212C1E14FC6AF927DD * __this, Action_2_t0359A210F354A728FCD80F275D8CF192D61A98C5 * ___onAntiAddictionResult0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2FDB8D3DB023FD43E37DA2989CC2E44CB7906081);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public AntiAddictionHandler(Action<int,string> onAntiAddictionResult): base("com.antiaddiction.sdk.AntiAddictionKit$AntiAddictionCallback") {
		IL2CPP_RUNTIME_CLASS_INIT(AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF_il2cpp_TypeInfo_var);
		AndroidJavaProxy__ctor_m1E8F4C0D87B74B81C64A54A584B2FF4ECE571238(__this, _stringLiteral2FDB8D3DB023FD43E37DA2989CC2E44CB7906081, /*hidden argument*/NULL);
		// this.onAntiAddictionResult = onAntiAddictionResult;
		Action_2_t0359A210F354A728FCD80F275D8CF192D61A98C5 * L_0 = ___onAntiAddictionResult0;
		__this->set_onAntiAddictionResult_4(L_0);
		// }
		return;
	}
}
// UnityEngine.AndroidJavaObject AntiAddictionSdk.OpenSource.AntiAddictionHandler::Invoke(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * AntiAddictionHandler_Invoke_mC83A960A9837996BC7517D160B7AD14090D64FEA (AntiAddictionHandler_t54B50E46C25399A5B7B9EF212C1E14FC6AF927DD * __this, String_t* ___methodName0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2_Invoke_mA02088CCFAC06F127C125C0F51ADD67B9A2242ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAE5A6C08C8A1AE6A9CE90934B6B88A5F40F0B186);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (methodName.Equals("onAntiAddictionResult")) {
		String_t* L_0 = ___methodName0;
		NullCheck(L_0);
		bool L_1;
		L_1 = String_Equals_m8A062B96B61A7D652E7D73C9B3E904F6B0E5F41D(L_0, _stringLiteralAE5A6C08C8A1AE6A9CE90934B6B88A5F40F0B186, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0028;
		}
	}
	{
		// onAntiAddictionResult((int)args[0],(string)args[1]);
		Action_2_t0359A210F354A728FCD80F275D8CF192D61A98C5 * L_2 = __this->get_onAntiAddictionResult_4();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_3 = ___args1;
		NullCheck(L_3);
		int32_t L_4 = 0;
		RuntimeObject * L_5 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_6 = ___args1;
		NullCheck(L_6);
		int32_t L_7 = 1;
		RuntimeObject * L_8 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		NullCheck(L_2);
		Action_2_Invoke_mA02088CCFAC06F127C125C0F51ADD67B9A2242ED(L_2, ((*(int32_t*)((int32_t*)UnBox(L_5, Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var)))), ((String_t*)CastclassSealed((RuntimeObject*)L_8, String_t_il2cpp_TypeInfo_var)), /*hidden argument*/Action_2_Invoke_mA02088CCFAC06F127C125C0F51ADD67B9A2242ED_RuntimeMethod_var);
	}

IL_0028:
	{
		// return null;
		return (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E *)NULL;
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
// TGCenterSdk.Common.ITGCenterClient TGCenterSdk.Platforms.ClientFactory::TGCenterClient()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ClientFactory_TGCenterClient_m2F598A2CDFEE5773506AA9F74901DC90E7CFB7C7 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DummyTGCenterClient_tA73AF5E21738B8A4677C62820E0A64DDF318CCE1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TGCenterClient_t3FFBC93E175D733E5FF8A30D13354AED72C0FCC9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TGCenterClient_t852F76F73B20352EC6238AC9B9F507DF071CF9B0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Application.platform == RuntimePlatform.Android) {
		int32_t L_0;
		L_0 = Application_get_platform_mB22F7F39CDD46667C3EF64507E55BB7DA18F66C4(/*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)11)))))
		{
			goto IL_000f;
		}
	}
	{
		// return TGCenterSdk.Platforms.Android.TGCenterClient.Instance;
		IL2CPP_RUNTIME_CLASS_INIT(TGCenterClient_t852F76F73B20352EC6238AC9B9F507DF071CF9B0_il2cpp_TypeInfo_var);
		TGCenterClient_t852F76F73B20352EC6238AC9B9F507DF071CF9B0 * L_1;
		L_1 = TGCenterClient_get_Instance_m58BCC70F95FF029755E79A92DAB78A0EBFBF9239_inline(/*hidden argument*/NULL);
		return L_1;
	}

IL_000f:
	{
		// } else if (Application.platform == RuntimePlatform.IPhonePlayer) {
		int32_t L_2;
		L_2 = Application_get_platform_mB22F7F39CDD46667C3EF64507E55BB7DA18F66C4(/*hidden argument*/NULL);
		if ((!(((uint32_t)L_2) == ((uint32_t)8))))
		{
			goto IL_001d;
		}
	}
	{
		// return TGCenterSdk.Platforms.iOS.TGCenterClient.Instance;
		IL2CPP_RUNTIME_CLASS_INIT(TGCenterClient_t3FFBC93E175D733E5FF8A30D13354AED72C0FCC9_il2cpp_TypeInfo_var);
		TGCenterClient_t3FFBC93E175D733E5FF8A30D13354AED72C0FCC9 * L_3;
		L_3 = TGCenterClient_get_Instance_m3B9AB680B87D6BF5B90C8E7928F77CF79309DADC_inline(/*hidden argument*/NULL);
		return L_3;
	}

IL_001d:
	{
		// return new DummyTGCenterClient();
		DummyTGCenterClient_tA73AF5E21738B8A4677C62820E0A64DDF318CCE1 * L_4 = (DummyTGCenterClient_tA73AF5E21738B8A4677C62820E0A64DDF318CCE1 *)il2cpp_codegen_object_new(DummyTGCenterClient_tA73AF5E21738B8A4677C62820E0A64DDF318CCE1_il2cpp_TypeInfo_var);
		DummyTGCenterClient__ctor_m6159087E75ACC2883F1F543438FD9CCA9092693F(L_4, /*hidden argument*/NULL);
		return L_4;
	}
}
// TGCenterSdk.Common.IPrivacyPolicyHelperClient TGCenterSdk.Platforms.ClientFactory::PrivacyPolicyHelperClient()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ClientFactory_PrivacyPolicyHelperClient_m640B2DE7E30DACA6366CBCEC7A999C8FDD83F3FD (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DummyPrivacyPolicyHelperClient_tA760F3FD14C238520B359076F8F2943A0396C839_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PrivacyPolicyHelperClient_tB067E8E989D92DA23AE4C378F99922F83EEB8AD9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PrivacyPolicyHelperClient_tCE377D6E958FD4996E71424C6705E0B1CA0327E0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Application.platform == RuntimePlatform.Android) {
		int32_t L_0;
		L_0 = Application_get_platform_mB22F7F39CDD46667C3EF64507E55BB7DA18F66C4(/*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)11)))))
		{
			goto IL_000f;
		}
	}
	{
		// return new TGCenterSdk.Platforms.Android.PrivacyPolicyHelperClient();
		PrivacyPolicyHelperClient_tB067E8E989D92DA23AE4C378F99922F83EEB8AD9 * L_1 = (PrivacyPolicyHelperClient_tB067E8E989D92DA23AE4C378F99922F83EEB8AD9 *)il2cpp_codegen_object_new(PrivacyPolicyHelperClient_tB067E8E989D92DA23AE4C378F99922F83EEB8AD9_il2cpp_TypeInfo_var);
		PrivacyPolicyHelperClient__ctor_m1CD24831541A91EAD5D754D1A0C5ACF5A1FF91C6(L_1, /*hidden argument*/NULL);
		return L_1;
	}

IL_000f:
	{
		// } else if (Application.platform == RuntimePlatform.IPhonePlayer) {
		int32_t L_2;
		L_2 = Application_get_platform_mB22F7F39CDD46667C3EF64507E55BB7DA18F66C4(/*hidden argument*/NULL);
		if ((!(((uint32_t)L_2) == ((uint32_t)8))))
		{
			goto IL_001d;
		}
	}
	{
		// return new TGCenterSdk.Platforms.iOS.PrivacyPolicyHelperClient();
		PrivacyPolicyHelperClient_tCE377D6E958FD4996E71424C6705E0B1CA0327E0 * L_3 = (PrivacyPolicyHelperClient_tCE377D6E958FD4996E71424C6705E0B1CA0327E0 *)il2cpp_codegen_object_new(PrivacyPolicyHelperClient_tCE377D6E958FD4996E71424C6705E0B1CA0327E0_il2cpp_TypeInfo_var);
		PrivacyPolicyHelperClient__ctor_m2F94ADF5E7AFD08E357B7522E0792A0CCC853F37(L_3, /*hidden argument*/NULL);
		return L_3;
	}

IL_001d:
	{
		// return new DummyPrivacyPolicyHelperClient();
		DummyPrivacyPolicyHelperClient_tA760F3FD14C238520B359076F8F2943A0396C839 * L_4 = (DummyPrivacyPolicyHelperClient_tA760F3FD14C238520B359076F8F2943A0396C839 *)il2cpp_codegen_object_new(DummyPrivacyPolicyHelperClient_tA760F3FD14C238520B359076F8F2943A0396C839_il2cpp_TypeInfo_var);
		DummyPrivacyPolicyHelperClient__ctor_m07F30113EE62460423DE6E64AC561DFB7A5688C8(L_4, /*hidden argument*/NULL);
		return L_4;
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
// TGCenterSdk.Api.Day1Retention/RetentionTypes TGCenterSdk.Api.Day1Retention::get_RetentionType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Day1Retention_get_RetentionType_mD0C2642097219905B831A051D675EE715FF6A4B5 (Day1Retention_t5C5C48267E7FA734CD696706DCF7C0DC29025BB3 * __this, const RuntimeMethod* method)
{
	{
		// public RetentionTypes RetentionType { get; private set; }
		int32_t L_0 = __this->get_U3CRetentionTypeU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void TGCenterSdk.Api.Day1Retention::set_RetentionType(TGCenterSdk.Api.Day1Retention/RetentionTypes)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Day1Retention_set_RetentionType_m0EF7541CA83C4D076AE9CB8EC2219236279C5845 (Day1Retention_t5C5C48267E7FA734CD696706DCF7C0DC29025BB3 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public RetentionTypes RetentionType { get; private set; }
		int32_t L_0 = ___value0;
		__this->set_U3CRetentionTypeU3Ek__BackingField_0(L_0);
		return;
	}
}
// System.Int32 TGCenterSdk.Api.Day1Retention::get_StartCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Day1Retention_get_StartCount_mC49554BBEBB0F46D8B1DBBD920E195382086B189 (Day1Retention_t5C5C48267E7FA734CD696706DCF7C0DC29025BB3 * __this, const RuntimeMethod* method)
{
	{
		// public int StartCount  { get; private set; }
		int32_t L_0 = __this->get_U3CStartCountU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void TGCenterSdk.Api.Day1Retention::set_StartCount(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Day1Retention_set_StartCount_m48A6E5103B2704C5FF294851453992E486AF8CF0 (Day1Retention_t5C5C48267E7FA734CD696706DCF7C0DC29025BB3 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int StartCount  { get; private set; }
		int32_t L_0 = ___value0;
		__this->set_U3CStartCountU3Ek__BackingField_1(L_0);
		return;
	}
}
// System.Int32 TGCenterSdk.Api.Day1Retention::get_EndCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Day1Retention_get_EndCount_m5DB2D2F36A24B0E04F4BF7BAE1E195689C896556 (Day1Retention_t5C5C48267E7FA734CD696706DCF7C0DC29025BB3 * __this, const RuntimeMethod* method)
{
	{
		// public int EndCount  { get; private set; }
		int32_t L_0 = __this->get_U3CEndCountU3Ek__BackingField_2();
		return L_0;
	}
}
// System.Void TGCenterSdk.Api.Day1Retention::set_EndCount(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Day1Retention_set_EndCount_mF67F8A9E6F19E5B6671FCA2903CE611E3198C238 (Day1Retention_t5C5C48267E7FA734CD696706DCF7C0DC29025BB3 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int EndCount  { get; private set; }
		int32_t L_0 = ___value0;
		__this->set_U3CEndCountU3Ek__BackingField_2(L_0);
		return;
	}
}
// System.Void TGCenterSdk.Api.Day1Retention::.ctor(TGCenterSdk.Api.Day1Retention/RetentionTypes,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Day1Retention__ctor_m5AC87C6754EAD4FF846E084887A8AC84649DA7D8 (Day1Retention_t5C5C48267E7FA734CD696706DCF7C0DC29025BB3 * __this, int32_t ___retentionType0, int32_t ___startCount1, int32_t ___endCount2, const RuntimeMethod* method)
{
	{
		// public Day1Retention(RetentionTypes retentionType, int startCount, int endCount) {
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// this.RetentionType = retentionType;
		int32_t L_0 = ___retentionType0;
		Day1Retention_set_RetentionType_m0EF7541CA83C4D076AE9CB8EC2219236279C5845_inline(__this, L_0, /*hidden argument*/NULL);
		// this.StartCount = startCount;
		int32_t L_1 = ___startCount1;
		Day1Retention_set_StartCount_m48A6E5103B2704C5FF294851453992E486AF8CF0_inline(__this, L_1, /*hidden argument*/NULL);
		// this.EndCount = endCount;
		int32_t L_2 = ___endCount2;
		Day1Retention_set_EndCount_mF67F8A9E6F19E5B6671FCA2903CE611E3198C238_inline(__this, L_2, /*hidden argument*/NULL);
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
// System.Void TGCenterSdk.Common.DummyPrivacyPolicyHelperClient::SetAgreeListener(TGCenterSdk.Api.PrivacyPolicyHelper/AgreeListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DummyPrivacyPolicyHelperClient_SetAgreeListener_mECA4A32332611239395F0773A30AF924CEAB4406 (DummyPrivacyPolicyHelperClient_tA760F3FD14C238520B359076F8F2943A0396C839 * __this, RuntimeObject* ___listener0, const RuntimeMethod* method)
{
	{
		// public void SetAgreeListener(PrivacyPolicyHelper.AgreeListener listener) { }
		return;
	}
}
// System.Void TGCenterSdk.Common.DummyPrivacyPolicyHelperClient::ShowPrivacyDialog()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DummyPrivacyPolicyHelperClient_ShowPrivacyDialog_m03579941FD0ED26B872A96ACA9B8095A276019CB (DummyPrivacyPolicyHelperClient_tA760F3FD14C238520B359076F8F2943A0396C839 * __this, const RuntimeMethod* method)
{
	{
		// public void ShowPrivacyDialog() { }
		return;
	}
}
// System.Void TGCenterSdk.Common.DummyPrivacyPolicyHelperClient::JumpToUserAgreement()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DummyPrivacyPolicyHelperClient_JumpToUserAgreement_mE5DDC8A78C999F04E70EBA364D6F2694EA9A6181 (DummyPrivacyPolicyHelperClient_tA760F3FD14C238520B359076F8F2943A0396C839 * __this, const RuntimeMethod* method)
{
	{
		// public void JumpToUserAgreement() { }
		return;
	}
}
// System.Void TGCenterSdk.Common.DummyPrivacyPolicyHelperClient::JumpToPrivacyPolicy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DummyPrivacyPolicyHelperClient_JumpToPrivacyPolicy_m0F76BF5C411EB89C54714E0B28299F616EE7A560 (DummyPrivacyPolicyHelperClient_tA760F3FD14C238520B359076F8F2943A0396C839 * __this, const RuntimeMethod* method)
{
	{
		// public void JumpToPrivacyPolicy() { }
		return;
	}
}
// System.Void TGCenterSdk.Common.DummyPrivacyPolicyHelperClient::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DummyPrivacyPolicyHelperClient__ctor_m07F30113EE62460423DE6E64AC561DFB7A5688C8 (DummyPrivacyPolicyHelperClient_tA760F3FD14C238520B359076F8F2943A0396C839 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
// System.Void TGCenterSdk.Common.DummyTGCenterClient::Init(TGCenterSdk.Api.InitConfig)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DummyTGCenterClient_Init_m07BA9531FA9925DA3FAB743FC6E08D3671DF1955 (DummyTGCenterClient_tA73AF5E21738B8A4677C62820E0A64DDF318CCE1 * __this, InitConfig_tB77587871EE04B53CB86593F9C7461FF0B143A47 * ___config0, const RuntimeMethod* method)
{
	{
		// public void Init(InitConfig config) { }
		return;
	}
}
// System.Boolean TGCenterSdk.Common.DummyTGCenterClient::IsUserAgreePolicy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DummyTGCenterClient_IsUserAgreePolicy_m36C85EEC09C219E3D341543556FA74A57378063E (DummyTGCenterClient_tA73AF5E21738B8A4677C62820E0A64DDF318CCE1 * __this, const RuntimeMethod* method)
{
	{
		// return false;
		return (bool)0;
	}
}
// System.Void TGCenterSdk.Common.DummyTGCenterClient::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DummyTGCenterClient__ctor_m6159087E75ACC2883F1F543438FD9CCA9092693F (DummyTGCenterClient_tA73AF5E21738B8A4677C62820E0A64DDF318CCE1 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
// System.Void TGCenterSdk.Platforms.iOS.Externs::TGCRelease(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Externs_TGCRelease_mA95AD298F250ED4F8E8B7A94837A04CEAE90D839 (intptr_t ___obj0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(TGCRelease)(___obj0);

}
// System.Void TGCenterSdk.Platforms.iOS.Externs::TGCInit(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Externs_TGCInit_mAABFC2CB05181D48FD025937FD082B786DF642FC (intptr_t ___initConfig0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(TGCInit)(___initConfig0);

}
// System.Boolean TGCenterSdk.Platforms.iOS.Externs::TGCIsUserAgreePolicy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Externs_TGCIsUserAgreePolicy_m243ABD3ACEE5D59050CEFE902B1CEF56686EB609 (const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(TGCIsUserAgreePolicy)();

	return static_cast<bool>(returnValue);
}
// System.IntPtr TGCenterSdk.Platforms.iOS.Externs::TGCCreateInitConfig()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Externs_TGCCreateInitConfig_m76F31ED1EE75BFFBF2FBC598B4CAFAC04847ABDF (const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(TGCCreateInitConfig)();

	return returnValue;
}
// System.Void TGCenterSdk.Platforms.iOS.Externs::TGCSetInitConfig_DebugMode(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Externs_TGCSetInitConfig_DebugMode_m3C60CA74838730B5605C43F254C7BB13DB14218A (intptr_t ___config0, bool ___debugMode1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t, int32_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(TGCSetInitConfig_DebugMode)(___config0, static_cast<int32_t>(___debugMode1));

}
// System.Void TGCenterSdk.Platforms.iOS.Externs::TGCSetInitConfig_AppId(System.IntPtr,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Externs_TGCSetInitConfig_AppId_m79A28C237AD73D049498776862601252568AE409 (intptr_t ___config0, String_t* ___appId1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t, char*);

	// Marshaling of parameter '___appId1' to native representation
	char* ____appId1_marshaled = NULL;
	____appId1_marshaled = il2cpp_codegen_marshal_string(___appId1);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(TGCSetInitConfig_AppId)(___config0, ____appId1_marshaled);

	// Marshaling cleanup of parameter '___appId1' native representation
	il2cpp_codegen_marshal_free(____appId1_marshaled);
	____appId1_marshaled = NULL;

}
// System.Void TGCenterSdk.Platforms.iOS.Externs::TGCSetInitConfig_AppleAppID(System.IntPtr,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Externs_TGCSetInitConfig_AppleAppID_mA99EACF9D3B913E007A5EF79CA40FDFABC32A7D4 (intptr_t ___config0, String_t* ___appleAppID1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t, char*);

	// Marshaling of parameter '___appleAppID1' to native representation
	char* ____appleAppID1_marshaled = NULL;
	____appleAppID1_marshaled = il2cpp_codegen_marshal_string(___appleAppID1);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(TGCSetInitConfig_AppleAppID)(___config0, ____appleAppID1_marshaled);

	// Marshaling cleanup of parameter '___appleAppID1' native representation
	il2cpp_codegen_marshal_free(____appleAppID1_marshaled);
	____appleAppID1_marshaled = NULL;

}
// System.Void TGCenterSdk.Platforms.iOS.Externs::TGCSetInitConfig_UmengAppKey(System.IntPtr,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Externs_TGCSetInitConfig_UmengAppKey_m80CE1DCFC4565693F34ECBBE62B54B99CF589663 (intptr_t ___config0, String_t* ___umengAppKey1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t, char*);

	// Marshaling of parameter '___umengAppKey1' to native representation
	char* ____umengAppKey1_marshaled = NULL;
	____umengAppKey1_marshaled = il2cpp_codegen_marshal_string(___umengAppKey1);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(TGCSetInitConfig_UmengAppKey)(___config0, ____umengAppKey1_marshaled);

	// Marshaling cleanup of parameter '___umengAppKey1' native representation
	il2cpp_codegen_marshal_free(____umengAppKey1_marshaled);
	____umengAppKey1_marshaled = NULL;

}
// System.Void TGCenterSdk.Platforms.iOS.Externs::TGCSetInitConfig_AppsFlyerDevKey(System.IntPtr,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Externs_TGCSetInitConfig_AppsFlyerDevKey_m9B3CD629FF1C4B4258A124071A2CDD58891FE71D (intptr_t ___config0, String_t* ___appsFlyerDevKey1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t, char*);

	// Marshaling of parameter '___appsFlyerDevKey1' to native representation
	char* ____appsFlyerDevKey1_marshaled = NULL;
	____appsFlyerDevKey1_marshaled = il2cpp_codegen_marshal_string(___appsFlyerDevKey1);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(TGCSetInitConfig_AppsFlyerDevKey)(___config0, ____appsFlyerDevKey1_marshaled);

	// Marshaling cleanup of parameter '___appsFlyerDevKey1' native representation
	il2cpp_codegen_marshal_free(____appsFlyerDevKey1_marshaled);
	____appsFlyerDevKey1_marshaled = NULL;

}
// System.Void TGCenterSdk.Platforms.iOS.Externs::TGCSetInitConfig_RangersAppLogAppId(System.IntPtr,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Externs_TGCSetInitConfig_RangersAppLogAppId_mC1DF1C6D8ABDD475939ADB3A32607914B6E7B1C7 (intptr_t ___config0, String_t* ___rangersAppLogAppId1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t, char*);

	// Marshaling of parameter '___rangersAppLogAppId1' to native representation
	char* ____rangersAppLogAppId1_marshaled = NULL;
	____rangersAppLogAppId1_marshaled = il2cpp_codegen_marshal_string(___rangersAppLogAppId1);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(TGCSetInitConfig_RangersAppLogAppId)(___config0, ____rangersAppLogAppId1_marshaled);

	// Marshaling cleanup of parameter '___rangersAppLogAppId1' native representation
	il2cpp_codegen_marshal_free(____rangersAppLogAppId1_marshaled);
	____rangersAppLogAppId1_marshaled = NULL;

}
// System.Void TGCenterSdk.Platforms.iOS.Externs::TGCSetInitConfig_RangersAppLogAppName(System.IntPtr,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Externs_TGCSetInitConfig_RangersAppLogAppName_m4C032095A1DE1921811AAFA37C21F9F8A57E3ED9 (intptr_t ___config0, String_t* ___rangersAppLogAppName1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t, char*);

	// Marshaling of parameter '___rangersAppLogAppName1' to native representation
	char* ____rangersAppLogAppName1_marshaled = NULL;
	____rangersAppLogAppName1_marshaled = il2cpp_codegen_marshal_string(___rangersAppLogAppName1);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(TGCSetInitConfig_RangersAppLogAppName)(___config0, ____rangersAppLogAppName1_marshaled);

	// Marshaling cleanup of parameter '___rangersAppLogAppName1' native representation
	il2cpp_codegen_marshal_free(____rangersAppLogAppName1_marshaled);
	____rangersAppLogAppName1_marshaled = NULL;

}
// System.Void TGCenterSdk.Platforms.iOS.Externs::TGCSetInitConfig_Day1Retention(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Externs_TGCSetInitConfig_Day1Retention_m9F23B425F4DF6A58C648CF755B3FB92DF3415900 (intptr_t ___config0, intptr_t ___retention1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t, intptr_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(TGCSetInitConfig_Day1Retention)(___config0, ___retention1);

}
// System.IntPtr TGCenterSdk.Platforms.iOS.Externs::TGCCreateDay1Retention()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Externs_TGCCreateDay1Retention_mA6B9EDCB5E75FFE679366C5FDDDAA6585F04CCE0 (const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(TGCCreateDay1Retention)();

	return returnValue;
}
// System.Void TGCenterSdk.Platforms.iOS.Externs::TGCSetDay1Retention_Type(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Externs_TGCSetDay1Retention_Type_m3B7916E4DCBAF3ABB52020CB12D7CB7CCAA063B0 (intptr_t ___retention0, int32_t ___type1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t, int32_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(TGCSetDay1Retention_Type)(___retention0, ___type1);

}
// System.Void TGCenterSdk.Platforms.iOS.Externs::TGCSetDay1Retention_StartCount(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Externs_TGCSetDay1Retention_StartCount_m06973A8C99ED9BBCC36861E10A69420030DF15A1 (intptr_t ___retention0, int32_t ___startCount1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t, int32_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(TGCSetDay1Retention_StartCount)(___retention0, ___startCount1);

}
// System.Void TGCenterSdk.Platforms.iOS.Externs::TGCSetDay1Retention_EndCount(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Externs_TGCSetDay1Retention_EndCount_mBB41BCABD0864AF1841D6314A8A7CCF4F1D93ED5 (intptr_t ___retention0, int32_t ___endCount1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t, int32_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(TGCSetDay1Retention_EndCount)(___retention0, ___endCount1);

}
// System.Void TGCenterSdk.Platforms.iOS.Externs::TGCPrivacyShowDialog(System.IntPtr,TGCenterSdk.Platforms.iOS.PrivacyPolicyHelperClient/TGCPrivacyAgreeCallback,TGCenterSdk.Platforms.iOS.PrivacyPolicyHelperClient/TGCPrivacyDisagreeCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Externs_TGCPrivacyShowDialog_mCBC4F18984C8E25FCCA862C2AFB4A9B36B942194 (intptr_t ___clientPtr0, TGCPrivacyAgreeCallback_t3C41917D9CA51071333995D60FE85E6B410437DA * ___agreeCallback1, TGCPrivacyDisagreeCallback_t87303D0856E11528F24B5D65FE37D8EB115CEB9E * ___disagreeCallback2, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t, Il2CppMethodPointer, Il2CppMethodPointer);

	// Marshaling of parameter '___agreeCallback1' to native representation
	Il2CppMethodPointer ____agreeCallback1_marshaled = NULL;
	____agreeCallback1_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___agreeCallback1));

	// Marshaling of parameter '___disagreeCallback2' to native representation
	Il2CppMethodPointer ____disagreeCallback2_marshaled = NULL;
	____disagreeCallback2_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___disagreeCallback2));

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(TGCPrivacyShowDialog)(___clientPtr0, ____agreeCallback1_marshaled, ____disagreeCallback2_marshaled);

}
// System.Void TGCenterSdk.Platforms.iOS.Externs::TGCPrivacyJumpToUserAgreement()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Externs_TGCPrivacyJumpToUserAgreement_m97E1C39BB07216C604DEF1109B503E40AFBBAEAD (const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(TGCPrivacyJumpToUserAgreement)();

}
// System.Void TGCenterSdk.Platforms.iOS.Externs::TGCPrivacyJumpToPrivacyPolicy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Externs_TGCPrivacyJumpToPrivacyPolicy_mADAC2305561536789C0855F17E5FDA3C4703E707 (const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(TGCPrivacyJumpToPrivacyPolicy)();

}
// System.Void TGCenterSdk.Platforms.iOS.Externs::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Externs__ctor_mE49EC96D7DB9056D9FB2049371FED07E38126169 (Externs_t3134EC717B9115532628B1F0D531CAC4F8834D1E * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
// System.Void TGCenterSdk.Api.InitConfig::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InitConfig__ctor_m90192792C8C801B94C5F0BF8303191861979E8D2 (InitConfig_tB77587871EE04B53CB86593F9C7461FF0B143A47 * __this, const RuntimeMethod* method)
{
	{
		// public InitConfig() { }
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// public InitConfig() { }
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
// System.Void MainBehaviour::OnGUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainBehaviour_OnGUI_mBFEF5FB77A2A473BC7F289621E6F58ABEE0C837D (MainBehaviour_tDE09AB0E3B7AB47BEC0D8229B68A94AA3FE0DEC6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AntiAddiction_t48341ECCB1DF1C64757849008C5BD7356AAEC7AD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUI_tBCBBE29117D8093644C6E72B1CE3FB65C2CDCCC1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PrivacyPolicyHelper_t5983E6361B35F6389228D994C018B16993468EA3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral223AA22FFE5FAE4E4018072DCB504D8CF35BE556);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2B3AD6333F669606E87648FD08F4CF7B98B051B5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral591717969A5E5E3B077255142EBD573FD6015D85);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7A43163FC05AE385BDE127586061CB41C6FAB23C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral80BFDED53A798895F66F7586BB93FB843218DB76);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral86A22D3A576D7C99132992E5DD9D118173CB4078);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9B9DBDE000089729E9EBE7911DC8B650A3DF2C1D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA3D208B8D59BE45DA847378972F5873C295095CA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD83E4D7E4A366812BEFCF32EC0A645CCBD99851);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE0B0304A54A45DD080A2845E27970CCBC53E2DDD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF2DCEBDC0E489573EF91725019BDC803EC347578);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFB6988E1177DFD343CF12618FF137D8102C66781);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * V_4 = NULL;
	int32_t V_5 = 0;
	int32_t G_B2_0 = 0;
	int32_t G_B1_0 = 0;
	int32_t G_B4_0 = 0;
	int32_t G_B3_0 = 0;
	int32_t G_B6_0 = 0;
	int32_t G_B5_0 = 0;
	int32_t G_B8_0 = 0;
	int32_t G_B7_0 = 0;
	int32_t G_B10_0 = 0;
	int32_t G_B9_0 = 0;
	int32_t G_B12_0 = 0;
	int32_t G_B11_0 = 0;
	{
		// int x = 0;
		// int y = 250;
		V_0 = ((int32_t)250);
		// int d = 200;
		V_1 = ((int32_t)200);
		// int w = 1000;
		V_2 = ((int32_t)1000);
		// int h = 150;
		V_3 = ((int32_t)150);
		// GUIStyle style = new GUIStyle();
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_0 = (GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 *)il2cpp_codegen_object_new(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_il2cpp_TypeInfo_var);
		GUIStyle__ctor_mDA0E00D0017FC0B2FC333C5DD6E1EDBAE3BCB8E3(L_0, /*hidden argument*/NULL);
		V_4 = L_0;
		// style.fontSize = 40;
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_1 = V_4;
		NullCheck(L_1);
		GUIStyle_set_fontSize_mFA02B9950E09F880976FD2FF646FB8AAEED1C5C6(L_1, ((int32_t)40), /*hidden argument*/NULL);
		// style.alignment = TextAnchor.UpperCenter;
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_2 = V_4;
		NullCheck(L_2);
		GUIStyle_set_alignment_mCF8FDA9DA149F528DCDC19680AEED46F25161D89(L_2, 1, /*hidden argument*/NULL);
		// GUI.Label(new Rect(x, y, w, h), "ModooPlay Demo", style);
		int32_t L_3 = 0;
		int32_t L_4 = V_0;
		int32_t L_5 = V_2;
		int32_t L_6 = V_3;
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_7;
		memset((&L_7), 0, sizeof(L_7));
		Rect__ctor_m12075526A02B55B680716A34AD5287B223122B70((&L_7), ((float)((float)L_3)), ((float)((float)L_4)), ((float)((float)L_5)), ((float)((float)L_6)), /*hidden argument*/NULL);
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_8 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(GUI_tBCBBE29117D8093644C6E72B1CE3FB65C2CDCCC1_il2cpp_TypeInfo_var);
		GUI_Label_mE97FBC73519323E93EFF86E1F1C96E7F4B612850(L_7, _stringLiteralFB6988E1177DFD343CF12618FF137D8102C66781, L_8, /*hidden argument*/NULL);
		// y += d;
		int32_t L_9 = V_0;
		int32_t L_10 = V_1;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)L_10));
		// if (GUI.Button(new Rect(x, y, w, h), "Ad Test", style))
		int32_t L_11 = L_3;
		int32_t L_12 = V_0;
		int32_t L_13 = V_2;
		int32_t L_14 = V_3;
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_15;
		memset((&L_15), 0, sizeof(L_15));
		Rect__ctor_m12075526A02B55B680716A34AD5287B223122B70((&L_15), ((float)((float)L_11)), ((float)((float)L_12)), ((float)((float)L_13)), ((float)((float)L_14)), /*hidden argument*/NULL);
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_16 = V_4;
		bool L_17;
		L_17 = GUI_Button_mA1605D5F2A40D770F3E0CCA6D88E7947564B3F7A(L_15, _stringLiteralDD83E4D7E4A366812BEFCF32EC0A645CCBD99851, L_16, /*hidden argument*/NULL);
		// y += d;
		int32_t L_18 = V_0;
		int32_t L_19 = V_1;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_18, (int32_t)L_19));
		// if (GUI.Button(new Rect(x, y, w, h), "User Agreement", style))
		int32_t L_20 = L_11;
		int32_t L_21 = V_0;
		int32_t L_22 = V_2;
		int32_t L_23 = V_3;
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_24;
		memset((&L_24), 0, sizeof(L_24));
		Rect__ctor_m12075526A02B55B680716A34AD5287B223122B70((&L_24), ((float)((float)L_20)), ((float)((float)L_21)), ((float)((float)L_22)), ((float)((float)L_23)), /*hidden argument*/NULL);
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_25 = V_4;
		bool L_26;
		L_26 = GUI_Button_mA1605D5F2A40D770F3E0CCA6D88E7947564B3F7A(L_24, _stringLiteralF2DCEBDC0E489573EF91725019BDC803EC347578, L_25, /*hidden argument*/NULL);
		G_B1_0 = L_20;
		if (!L_26)
		{
			G_B2_0 = L_20;
			goto IL_0091;
		}
	}
	{
		// PrivacyPolicyHelper.Instance.JumpToUserAgreement();
		IL2CPP_RUNTIME_CLASS_INIT(PrivacyPolicyHelper_t5983E6361B35F6389228D994C018B16993468EA3_il2cpp_TypeInfo_var);
		PrivacyPolicyHelper_t5983E6361B35F6389228D994C018B16993468EA3 * L_27;
		L_27 = PrivacyPolicyHelper_get_Instance_mA461052DDD65EE4DF0DA5FD90B324F91E236000F_inline(/*hidden argument*/NULL);
		NullCheck(L_27);
		PrivacyPolicyHelper_JumpToUserAgreement_mBDE97B36AFF06F68EF84B838F3BFC030DEAB893B(L_27, /*hidden argument*/NULL);
		G_B2_0 = G_B1_0;
	}

IL_0091:
	{
		// y += d;
		int32_t L_28 = V_0;
		int32_t L_29 = V_1;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_28, (int32_t)L_29));
		// if (GUI.Button(new Rect(x, y, w, h), "Privacy Policy", style))
		int32_t L_30 = G_B2_0;
		int32_t L_31 = V_0;
		int32_t L_32 = V_2;
		int32_t L_33 = V_3;
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_34;
		memset((&L_34), 0, sizeof(L_34));
		Rect__ctor_m12075526A02B55B680716A34AD5287B223122B70((&L_34), ((float)((float)L_30)), ((float)((float)L_31)), ((float)((float)L_32)), ((float)((float)L_33)), /*hidden argument*/NULL);
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_35 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(GUI_tBCBBE29117D8093644C6E72B1CE3FB65C2CDCCC1_il2cpp_TypeInfo_var);
		bool L_36;
		L_36 = GUI_Button_mA1605D5F2A40D770F3E0CCA6D88E7947564B3F7A(L_34, _stringLiteral591717969A5E5E3B077255142EBD573FD6015D85, L_35, /*hidden argument*/NULL);
		G_B3_0 = L_30;
		if (!L_36)
		{
			G_B4_0 = L_30;
			goto IL_00ba;
		}
	}
	{
		// PrivacyPolicyHelper.Instance.JumpToPrivacyPolicy();
		IL2CPP_RUNTIME_CLASS_INIT(PrivacyPolicyHelper_t5983E6361B35F6389228D994C018B16993468EA3_il2cpp_TypeInfo_var);
		PrivacyPolicyHelper_t5983E6361B35F6389228D994C018B16993468EA3 * L_37;
		L_37 = PrivacyPolicyHelper_get_Instance_mA461052DDD65EE4DF0DA5FD90B324F91E236000F_inline(/*hidden argument*/NULL);
		NullCheck(L_37);
		PrivacyPolicyHelper_JumpToPrivacyPolicy_mFB7F0D55BC1E9D7B4145C2B5CBFBB6487110C146(L_37, /*hidden argument*/NULL);
		G_B4_0 = G_B3_0;
	}

IL_00ba:
	{
		// y += d;
		int32_t L_38 = V_0;
		int32_t L_39 = V_1;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_38, (int32_t)L_39));
		// if (GUI.Button(new Rect(x, y, w, h), "Clear Cache", style))
		int32_t L_40 = G_B4_0;
		int32_t L_41 = V_0;
		int32_t L_42 = V_2;
		int32_t L_43 = V_3;
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_44;
		memset((&L_44), 0, sizeof(L_44));
		Rect__ctor_m12075526A02B55B680716A34AD5287B223122B70((&L_44), ((float)((float)L_40)), ((float)((float)L_41)), ((float)((float)L_42)), ((float)((float)L_43)), /*hidden argument*/NULL);
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_45 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(GUI_tBCBBE29117D8093644C6E72B1CE3FB65C2CDCCC1_il2cpp_TypeInfo_var);
		bool L_46;
		L_46 = GUI_Button_mA1605D5F2A40D770F3E0CCA6D88E7947564B3F7A(L_44, _stringLiteral86A22D3A576D7C99132992E5DD9D118173CB4078, L_45, /*hidden argument*/NULL);
		// y += d;
		int32_t L_47 = V_0;
		int32_t L_48 = V_1;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_47, (int32_t)L_48));
		// GUI.Label(new Rect(x, y, w, h), "Game AntiAddiction", style);
		int32_t L_49 = L_40;
		int32_t L_50 = V_0;
		int32_t L_51 = V_2;
		int32_t L_52 = V_3;
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_53;
		memset((&L_53), 0, sizeof(L_53));
		Rect__ctor_m12075526A02B55B680716A34AD5287B223122B70((&L_53), ((float)((float)L_49)), ((float)((float)L_50)), ((float)((float)L_51)), ((float)((float)L_52)), /*hidden argument*/NULL);
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_54 = V_4;
		GUI_Label_mE97FBC73519323E93EFF86E1F1C96E7F4B612850(L_53, _stringLiteral7A43163FC05AE385BDE127586061CB41C6FAB23C, L_54, /*hidden argument*/NULL);
		// y += d;
		int32_t L_55 = V_0;
		int32_t L_56 = V_1;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_55, (int32_t)L_56));
		// int antiW = 500;
		V_5 = ((int32_t)500);
		// if (GUI.Button(new Rect(x, y, antiW, h), "Login", style))
		int32_t L_57 = L_49;
		int32_t L_58 = V_0;
		int32_t L_59 = V_5;
		int32_t L_60 = V_3;
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_61;
		memset((&L_61), 0, sizeof(L_61));
		Rect__ctor_m12075526A02B55B680716A34AD5287B223122B70((&L_61), ((float)((float)L_57)), ((float)((float)L_58)), ((float)((float)L_59)), ((float)((float)L_60)), /*hidden argument*/NULL);
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_62 = V_4;
		bool L_63;
		L_63 = GUI_Button_mA1605D5F2A40D770F3E0CCA6D88E7947564B3F7A(L_61, _stringLiteral2B3AD6333F669606E87648FD08F4CF7B98B051B5, L_62, /*hidden argument*/NULL);
		G_B5_0 = L_57;
		if (!L_63)
		{
			G_B6_0 = L_57;
			goto IL_0127;
		}
	}
	{
		// AntiAddiction.login("userId", AntiAddictionUserType.USER_TYPE_UNKNOWN);
		IL2CPP_RUNTIME_CLASS_INIT(AntiAddiction_t48341ECCB1DF1C64757849008C5BD7356AAEC7AD_il2cpp_TypeInfo_var);
		AntiAddiction_login_m5AE2E22172B6C1C0C498A87EE67F628D5FF16954(_stringLiteralA3D208B8D59BE45DA847378972F5873C295095CA, 0, /*hidden argument*/NULL);
		G_B6_0 = G_B5_0;
	}

IL_0127:
	{
		// if (GUI.Button(new Rect(x + antiW, y, antiW, h), "Logout", style))
		int32_t L_64 = G_B6_0;
		int32_t L_65 = V_5;
		int32_t L_66 = V_0;
		int32_t L_67 = V_5;
		int32_t L_68 = V_3;
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_69;
		memset((&L_69), 0, sizeof(L_69));
		Rect__ctor_m12075526A02B55B680716A34AD5287B223122B70((&L_69), ((float)((float)((int32_t)il2cpp_codegen_add((int32_t)L_64, (int32_t)L_65)))), ((float)((float)L_66)), ((float)((float)L_67)), ((float)((float)L_68)), /*hidden argument*/NULL);
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_70 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(GUI_tBCBBE29117D8093644C6E72B1CE3FB65C2CDCCC1_il2cpp_TypeInfo_var);
		bool L_71;
		L_71 = GUI_Button_mA1605D5F2A40D770F3E0CCA6D88E7947564B3F7A(L_69, _stringLiteral80BFDED53A798895F66F7586BB93FB843218DB76, L_70, /*hidden argument*/NULL);
		G_B7_0 = L_64;
		if (!L_71)
		{
			G_B8_0 = L_64;
			goto IL_014b;
		}
	}
	{
		// AntiAddiction.logout();
		IL2CPP_RUNTIME_CLASS_INIT(AntiAddiction_t48341ECCB1DF1C64757849008C5BD7356AAEC7AD_il2cpp_TypeInfo_var);
		AntiAddiction_logout_m5FA5AEAE9AD1B85A78DC807897B298C51DFCE1E8(/*hidden argument*/NULL);
		G_B8_0 = G_B7_0;
	}

IL_014b:
	{
		// y += d;
		int32_t L_72 = V_0;
		int32_t L_73 = V_1;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_72, (int32_t)L_73));
		// if (GUI.Button(new Rect(x, y, antiW, h), "Pay", style))
		int32_t L_74 = G_B8_0;
		int32_t L_75 = V_0;
		int32_t L_76 = V_5;
		int32_t L_77 = V_3;
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_78;
		memset((&L_78), 0, sizeof(L_78));
		Rect__ctor_m12075526A02B55B680716A34AD5287B223122B70((&L_78), ((float)((float)L_74)), ((float)((float)L_75)), ((float)((float)L_76)), ((float)((float)L_77)), /*hidden argument*/NULL);
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_79 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(GUI_tBCBBE29117D8093644C6E72B1CE3FB65C2CDCCC1_il2cpp_TypeInfo_var);
		bool L_80;
		L_80 = GUI_Button_mA1605D5F2A40D770F3E0CCA6D88E7947564B3F7A(L_78, _stringLiteralE0B0304A54A45DD080A2845E27970CCBC53E2DDD, L_79, /*hidden argument*/NULL);
		G_B9_0 = L_74;
		if (!L_80)
		{
			G_B10_0 = L_74;
			goto IL_0175;
		}
	}
	{
		// AntiAddiction.checkPayLimit(10 * 100);
		IL2CPP_RUNTIME_CLASS_INIT(AntiAddiction_t48341ECCB1DF1C64757849008C5BD7356AAEC7AD_il2cpp_TypeInfo_var);
		AntiAddiction_checkPayLimit_mCFE9D907D091DE60145C3E5DD85EE4B2C0C0AD78(((int32_t)1000), /*hidden argument*/NULL);
		G_B10_0 = G_B9_0;
	}

IL_0175:
	{
		// if (GUI.Button(new Rect(x+antiW, y, antiW, h), "Chat", style))
		int32_t L_81 = G_B10_0;
		int32_t L_82 = V_5;
		int32_t L_83 = V_0;
		int32_t L_84 = V_5;
		int32_t L_85 = V_3;
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_86;
		memset((&L_86), 0, sizeof(L_86));
		Rect__ctor_m12075526A02B55B680716A34AD5287B223122B70((&L_86), ((float)((float)((int32_t)il2cpp_codegen_add((int32_t)L_81, (int32_t)L_82)))), ((float)((float)L_83)), ((float)((float)L_84)), ((float)((float)L_85)), /*hidden argument*/NULL);
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_87 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(GUI_tBCBBE29117D8093644C6E72B1CE3FB65C2CDCCC1_il2cpp_TypeInfo_var);
		bool L_88;
		L_88 = GUI_Button_mA1605D5F2A40D770F3E0CCA6D88E7947564B3F7A(L_86, _stringLiteral9B9DBDE000089729E9EBE7911DC8B650A3DF2C1D, L_87, /*hidden argument*/NULL);
		G_B11_0 = L_81;
		if (!L_88)
		{
			G_B12_0 = L_81;
			goto IL_0199;
		}
	}
	{
		// AntiAddiction.checkChatLimit();
		IL2CPP_RUNTIME_CLASS_INIT(AntiAddiction_t48341ECCB1DF1C64757849008C5BD7356AAEC7AD_il2cpp_TypeInfo_var);
		AntiAddiction_checkChatLimit_m8FB33B6E1B85169C64F2898A6EE275A497E52BC7(/*hidden argument*/NULL);
		G_B12_0 = G_B11_0;
	}

IL_0199:
	{
		// y += d;
		int32_t L_89 = V_0;
		int32_t L_90 = V_1;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_89, (int32_t)L_90));
		// if (GUI.Button(new Rect(x, y, w, h), "Open Real Name", style))
		int32_t L_91 = V_0;
		int32_t L_92 = V_2;
		int32_t L_93 = V_3;
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_94;
		memset((&L_94), 0, sizeof(L_94));
		Rect__ctor_m12075526A02B55B680716A34AD5287B223122B70((&L_94), ((float)((float)G_B12_0)), ((float)((float)L_91)), ((float)((float)L_92)), ((float)((float)L_93)), /*hidden argument*/NULL);
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_95 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(GUI_tBCBBE29117D8093644C6E72B1CE3FB65C2CDCCC1_il2cpp_TypeInfo_var);
		bool L_96;
		L_96 = GUI_Button_mA1605D5F2A40D770F3E0CCA6D88E7947564B3F7A(L_94, _stringLiteral223AA22FFE5FAE4E4018072DCB504D8CF35BE556, L_95, /*hidden argument*/NULL);
		if (!L_96)
		{
			goto IL_01bc;
		}
	}
	{
		// AntiAddiction.openRealName();
		IL2CPP_RUNTIME_CLASS_INIT(AntiAddiction_t48341ECCB1DF1C64757849008C5BD7356AAEC7AD_il2cpp_TypeInfo_var);
		AntiAddiction_openRealName_mFD0E6CC39FFE848DEE3BBDC6E2701F10729F2D35(/*hidden argument*/NULL);
	}

IL_01bc:
	{
		// }
		return;
	}
}
// System.Void MainBehaviour::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainBehaviour_Start_mDBAC321F998F0B92E1E5AEFEDCC2BA8A9B4ABD69 (MainBehaviour_tDE09AB0E3B7AB47BEC0D8229B68A94AA3FE0DEC6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TGCenter_t7A01AA650A3F96EAE0E6787DB2804C51C1FBA0B2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8243A16D425F93AF62CAAB2BFAE01A2D6246A5FE);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("Start");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral8243A16D425F93AF62CAAB2BFAE01A2D6246A5FE, /*hidden argument*/NULL);
		// if (TGCenter.IsUserAgreePolicy()) {
		IL2CPP_RUNTIME_CLASS_INIT(TGCenter_t7A01AA650A3F96EAE0E6787DB2804C51C1FBA0B2_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = TGCenter_IsUserAgreePolicy_m5BE7174BDE944A4C6ECAACD5CF6AEB67DE880F2C(/*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		// InitModooPlay();
		MainBehaviour_InitModooPlay_mB6DCCC36721AD85008B5CA02E09D19733FB00D95(__this, /*hidden argument*/NULL);
		// } else {
		return;
	}

IL_0018:
	{
		// ShowDefaultPolicyDialog();
		MainBehaviour_ShowDefaultPolicyDialog_mDDDA53D53BDD0E6A59D10481F57D9A47989E38D7(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MainBehaviour::OnApplicationPause(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainBehaviour_OnApplicationPause_m7279DA98EF7DAEDCF20D2A2E58AAEA01A2187F2A (MainBehaviour_tDE09AB0E3B7AB47BEC0D8229B68A94AA3FE0DEC6 * __this, bool ___pauseStatus0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AntiAddiction_t48341ECCB1DF1C64757849008C5BD7356AAEC7AD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (pauseStatus) {
		bool L_0 = ___pauseStatus0;
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		// AntiAddiction.onStop();
		IL2CPP_RUNTIME_CLASS_INIT(AntiAddiction_t48341ECCB1DF1C64757849008C5BD7356AAEC7AD_il2cpp_TypeInfo_var);
		AntiAddiction_onStop_m3488BE271434ABDD86ACE6D2977DEB164CA28079(/*hidden argument*/NULL);
		// } else {
		return;
	}

IL_0009:
	{
		// AntiAddiction.onResume();
		IL2CPP_RUNTIME_CLASS_INIT(AntiAddiction_t48341ECCB1DF1C64757849008C5BD7356AAEC7AD_il2cpp_TypeInfo_var);
		AntiAddiction_onResume_m69AEDD48BE9176DC1054FA0E0A3FCBE23B004E5C(/*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MainBehaviour::InitModooPlay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainBehaviour_InitModooPlay_mB6DCCC36721AD85008B5CA02E09D19733FB00D95 (MainBehaviour_tDE09AB0E3B7AB47BEC0D8229B68A94AA3FE0DEC6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Day1Retention_t5C5C48267E7FA734CD696706DCF7C0DC29025BB3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InitConfig_tB77587871EE04B53CB86593F9C7461FF0B143A47_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TGCenter_t7A01AA650A3F96EAE0E6787DB2804C51C1FBA0B2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral06F6DBCB7FFEE255438B4AC7A5C1DEE040406FBA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1A5E706D6D83A6D9E3357CFF9C00B8924AAECD36);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral78A60C68335BFADC659417D949DEF46DDCF71CC2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8BE379FCCAE7759F182D2E0FDD1565B9F41370C9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBACA6ED684147F8B0664B128B7F454E0771447DE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC2463F45597998A094727FD126E852DC07FBB7DF);
		s_Il2CppMethodInitialized = true;
	}
	InitConfig_tB77587871EE04B53CB86593F9C7461FF0B143A47 * V_0 = NULL;
	Day1Retention_t5C5C48267E7FA734CD696706DCF7C0DC29025BB3 * V_1 = NULL;
	{
		// InitConfig config = new InitConfig();
		InitConfig_tB77587871EE04B53CB86593F9C7461FF0B143A47 * L_0 = (InitConfig_tB77587871EE04B53CB86593F9C7461FF0B143A47 *)il2cpp_codegen_object_new(InitConfig_tB77587871EE04B53CB86593F9C7461FF0B143A47_il2cpp_TypeInfo_var);
		InitConfig__ctor_m90192792C8C801B94C5F0BF8303191861979E8D2(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		// config.DebugMode = true;
		InitConfig_tB77587871EE04B53CB86593F9C7461FF0B143A47 * L_1 = V_0;
		NullCheck(L_1);
		L_1->set_DebugMode_0((bool)1);
		// if (Application.platform == RuntimePlatform.Android) {
		int32_t L_2;
		L_2 = Application_get_platform_mB22F7F39CDD46667C3EF64507E55BB7DA18F66C4(/*hidden argument*/NULL);
		if ((!(((uint32_t)L_2) == ((uint32_t)((int32_t)11)))))
		{
			goto IL_0024;
		}
	}
	{
		// config.Channel = Channle;
		InitConfig_tB77587871EE04B53CB86593F9C7461FF0B143A47 * L_3 = V_0;
		String_t* L_4 = __this->get_Channle_4();
		NullCheck(L_3);
		L_3->set_Channel_2(L_4);
		// } else {
		goto IL_0077;
	}

IL_0024:
	{
		// config.AppId = "taurusx_app_id";
		InitConfig_tB77587871EE04B53CB86593F9C7461FF0B143A47 * L_5 = V_0;
		NullCheck(L_5);
		L_5->set_AppId_3(_stringLiteralBACA6ED684147F8B0664B128B7F454E0771447DE);
		// config.AppleAppID = "1526771294";
		InitConfig_tB77587871EE04B53CB86593F9C7461FF0B143A47 * L_6 = V_0;
		NullCheck(L_6);
		L_6->set_AppleAppID_4(_stringLiteral78A60C68335BFADC659417D949DEF46DDCF71CC2);
		// config.UmengAppKey = "5f046cf7895cca9f07000035";
		InitConfig_tB77587871EE04B53CB86593F9C7461FF0B143A47 * L_7 = V_0;
		NullCheck(L_7);
		L_7->set_UmengAppKey_5(_stringLiteral1A5E706D6D83A6D9E3357CFF9C00B8924AAECD36);
		// config.AppsFlyerDevKey = "DdWbxT9VRELdEsZiAcnGea";
		InitConfig_tB77587871EE04B53CB86593F9C7461FF0B143A47 * L_8 = V_0;
		NullCheck(L_8);
		L_8->set_AppsFlyerDevKey_6(_stringLiteralC2463F45597998A094727FD126E852DC07FBB7DF);
		// config.RangersAppLogAppId = "190309";
		InitConfig_tB77587871EE04B53CB86593F9C7461FF0B143A47 * L_9 = V_0;
		NullCheck(L_9);
		L_9->set_RangersAppLogAppId_7(_stringLiteral06F6DBCB7FFEE255438B4AC7A5C1DEE040406FBA);
		// config.RangersAppLogAppName = "bqlmgfios";
		InitConfig_tB77587871EE04B53CB86593F9C7461FF0B143A47 * L_10 = V_0;
		NullCheck(L_10);
		L_10->set_RangersAppLogAppName_8(_stringLiteral8BE379FCCAE7759F182D2E0FDD1565B9F41370C9);
		// Day1Retention retention = new Day1Retention(Day1Retention.RetentionTypes.Hour, 4, 38);
		Day1Retention_t5C5C48267E7FA734CD696706DCF7C0DC29025BB3 * L_11 = (Day1Retention_t5C5C48267E7FA734CD696706DCF7C0DC29025BB3 *)il2cpp_codegen_object_new(Day1Retention_t5C5C48267E7FA734CD696706DCF7C0DC29025BB3_il2cpp_TypeInfo_var);
		Day1Retention__ctor_m5AC87C6754EAD4FF846E084887A8AC84649DA7D8(L_11, 1, 4, ((int32_t)38), /*hidden argument*/NULL);
		V_1 = L_11;
		// config.Day1Retention = retention;
		InitConfig_tB77587871EE04B53CB86593F9C7461FF0B143A47 * L_12 = V_0;
		Day1Retention_t5C5C48267E7FA734CD696706DCF7C0DC29025BB3 * L_13 = V_1;
		NullCheck(L_12);
		L_12->set_Day1Retention_1(L_13);
	}

IL_0077:
	{
		// TGCenter.Init(config);
		InitConfig_tB77587871EE04B53CB86593F9C7461FF0B143A47 * L_14 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(TGCenter_t7A01AA650A3F96EAE0E6787DB2804C51C1FBA0B2_il2cpp_TypeInfo_var);
		TGCenter_Init_mF0F3AD663639A35E3986B8BBD2DA76999D1A31A3(L_14, /*hidden argument*/NULL);
		// SetFunctionConfig();
		MainBehaviour_SetFunctionConfig_mF1C3A15FD909A91AD2134D68BE766C2D28710131(__this, /*hidden argument*/NULL);
		// SetCommonConfig();
		MainBehaviour_SetCommonConfig_m96D63F1A1DA2AF6EFC8F3FB377E1F9E4D9CC219A(__this, /*hidden argument*/NULL);
		// InitAntiAddiction();
		MainBehaviour_InitAntiAddiction_mC7CF390E52BA68CE6A8198A5D1B1D62D810D40DE(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MainBehaviour::ShowDefaultPolicyDialog()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainBehaviour_ShowDefaultPolicyDialog_mDDDA53D53BDD0E6A59D10481F57D9A47989E38D7 (MainBehaviour_tDE09AB0E3B7AB47BEC0D8229B68A94AA3FE0DEC6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PrivacyAgreeListener_t7E277E2FBF137E9ABC871EE180DD7FFC9FDE5DEA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PrivacyPolicyHelper_t5983E6361B35F6389228D994C018B16993468EA3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PrivacyPolicyHelper.Instance.SetAgreeListener(new PrivacyAgreeListener(this));
		IL2CPP_RUNTIME_CLASS_INIT(PrivacyPolicyHelper_t5983E6361B35F6389228D994C018B16993468EA3_il2cpp_TypeInfo_var);
		PrivacyPolicyHelper_t5983E6361B35F6389228D994C018B16993468EA3 * L_0;
		L_0 = PrivacyPolicyHelper_get_Instance_mA461052DDD65EE4DF0DA5FD90B324F91E236000F_inline(/*hidden argument*/NULL);
		PrivacyAgreeListener_t7E277E2FBF137E9ABC871EE180DD7FFC9FDE5DEA * L_1 = (PrivacyAgreeListener_t7E277E2FBF137E9ABC871EE180DD7FFC9FDE5DEA *)il2cpp_codegen_object_new(PrivacyAgreeListener_t7E277E2FBF137E9ABC871EE180DD7FFC9FDE5DEA_il2cpp_TypeInfo_var);
		PrivacyAgreeListener__ctor_m8D597215B33E7D3C071876D7BA69DF3588679700(L_1, __this, /*hidden argument*/NULL);
		NullCheck(L_0);
		PrivacyPolicyHelper_SetAgreeListener_m557D780B21D647C8D0C39806B6DB1E5CE2AE922A(L_0, L_1, /*hidden argument*/NULL);
		// PrivacyPolicyHelper.Instance.ShowPrivacyDialog();
		PrivacyPolicyHelper_t5983E6361B35F6389228D994C018B16993468EA3 * L_2;
		L_2 = PrivacyPolicyHelper_get_Instance_mA461052DDD65EE4DF0DA5FD90B324F91E236000F_inline(/*hidden argument*/NULL);
		NullCheck(L_2);
		PrivacyPolicyHelper_ShowPrivacyDialog_mCEA153978D106F6BF76F14CCE4552BA5EE2C0DC5(L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MainBehaviour::ShowCustomPolicyDialog()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainBehaviour_ShowCustomPolicyDialog_m43C2B9B109FFA5FFED402FE5A482F264AAF7A149 (MainBehaviour_tDE09AB0E3B7AB47BEC0D8229B68A94AA3FE0DEC6 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void MainBehaviour::DealDialogAgreeResult(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainBehaviour_DealDialogAgreeResult_m16741BD575297CAEBAA7ADD27EDC6591D5FD09C9 (MainBehaviour_tDE09AB0E3B7AB47BEC0D8229B68A94AA3FE0DEC6 * __this, bool ___agree0, const RuntimeMethod* method)
{
	{
		// if (agree) {
		bool L_0 = ___agree0;
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		// InitModooPlay();
		MainBehaviour_InitModooPlay_mB6DCCC36721AD85008B5CA02E09D19733FB00D95(__this, /*hidden argument*/NULL);
	}

IL_0009:
	{
		// }
		return;
	}
}
// System.Void MainBehaviour::SetFunctionConfig()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainBehaviour_SetFunctionConfig_mF1C3A15FD909A91AD2134D68BE766C2D28710131 (MainBehaviour_tDE09AB0E3B7AB47BEC0D8229B68A94AA3FE0DEC6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AntiAddiction_t48341ECCB1DF1C64757849008C5BD7356AAEC7AD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Builder_tDB5BA46A3678FD0B0719F961C0D5350B88F23E53_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// AntiAddictionFunctionConfig config = new AntiAddictionFunctionConfig.Builder()
		//     
		//     .UseSdkRealName(true)
		//     
		//     .UseSdkPaymentLimit(true)
		//     
		//     .UseSdkOnlineTimeLimit(true)
		//     
		//     
		//     .ShowSwitchAccountButton(true)
		//     .Build();
		Builder_tDB5BA46A3678FD0B0719F961C0D5350B88F23E53 * L_0 = (Builder_tDB5BA46A3678FD0B0719F961C0D5350B88F23E53 *)il2cpp_codegen_object_new(Builder_tDB5BA46A3678FD0B0719F961C0D5350B88F23E53_il2cpp_TypeInfo_var);
		Builder__ctor_m72ED79CB27C2FC7B10D82FA3EF44B41DE9A2F2F3(L_0, /*hidden argument*/NULL);
		NullCheck(L_0);
		Builder_tDB5BA46A3678FD0B0719F961C0D5350B88F23E53 * L_1;
		L_1 = Builder_UseSdkRealName_mD3D17C92A46CC7071027C2F642819C6336B87888(L_0, (bool)1, /*hidden argument*/NULL);
		NullCheck(L_1);
		Builder_tDB5BA46A3678FD0B0719F961C0D5350B88F23E53 * L_2;
		L_2 = Builder_UseSdkPaymentLimit_mF3408CC2CC2A36810955F873F1186DF85BF1F8C1(L_1, (bool)1, /*hidden argument*/NULL);
		NullCheck(L_2);
		Builder_tDB5BA46A3678FD0B0719F961C0D5350B88F23E53 * L_3;
		L_3 = Builder_UseSdkOnlineTimeLimit_mBFB25B95F297A16E78FA919EC504102B4B7E372E(L_2, (bool)1, /*hidden argument*/NULL);
		NullCheck(L_3);
		Builder_tDB5BA46A3678FD0B0719F961C0D5350B88F23E53 * L_4;
		L_4 = Builder_ShowSwitchAccountButton_mCD8A56D007BF61736B6AF0E287BECB8B0D144CB7(L_3, (bool)1, /*hidden argument*/NULL);
		NullCheck(L_4);
		AntiAddictionFunctionConfig_t40E5C47E03007344B5CE5A8D78DE06A18336E8E1 * L_5;
		L_5 = Builder_Build_m00AC1CAF2C25CD28BBC9453E28034F81DE5C99BD(L_4, /*hidden argument*/NULL);
		// AntiAddiction.fuctionConfig(config);
		IL2CPP_RUNTIME_CLASS_INIT(AntiAddiction_t48341ECCB1DF1C64757849008C5BD7356AAEC7AD_il2cpp_TypeInfo_var);
		AntiAddiction_fuctionConfig_mAC357B27F762A1154F95E5C720049F626C865948(L_5, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MainBehaviour::SetCommonConfig()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainBehaviour_SetCommonConfig_m96D63F1A1DA2AF6EFC8F3FB377E1F9E4D9CC219A (MainBehaviour_tDE09AB0E3B7AB47BEC0D8229B68A94AA3FE0DEC6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AntiAddiction_t48341ECCB1DF1C64757849008C5BD7356AAEC7AD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Builder_t23ABFB73E05835CA7F11F21092D5E8652D8D081E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// AntiAddictionCommonConfig config = new AntiAddictionCommonConfig.Builder()
		//     .GusterTime(60 * 60) 
		//     .NightStrictStart(22 * 60 * 60) 
		//     .NightStrictEnd(8 * 60 * 60) 
		//     .ChildCommonTime(90 * 60) 
		//     .ChildHolidayTime(3 * 60 * 60) 
		//     .TeenPayLimit(50 * 100) 
		//     .TeenMonthPayLimit(200 * 100) 
		//     .YoungPayLimit(100 * 100)
		//     .YoungMonthPayLimit(400 * 100) 
		//     .Build();
		Builder_t23ABFB73E05835CA7F11F21092D5E8652D8D081E * L_0 = (Builder_t23ABFB73E05835CA7F11F21092D5E8652D8D081E *)il2cpp_codegen_object_new(Builder_t23ABFB73E05835CA7F11F21092D5E8652D8D081E_il2cpp_TypeInfo_var);
		Builder__ctor_m20BB616BF2DA2A621A9E581134AA0D28E06D09C2(L_0, /*hidden argument*/NULL);
		NullCheck(L_0);
		Builder_t23ABFB73E05835CA7F11F21092D5E8652D8D081E * L_1;
		L_1 = Builder_GusterTime_m27D5FC1ECEB1B84D9A498E9B1A326D11E847C116(L_0, ((int32_t)3600), /*hidden argument*/NULL);
		NullCheck(L_1);
		Builder_t23ABFB73E05835CA7F11F21092D5E8652D8D081E * L_2;
		L_2 = Builder_NightStrictStart_m5694B47B69326B5DF33E5997AB6F443794B97128(L_1, ((int32_t)79200), /*hidden argument*/NULL);
		NullCheck(L_2);
		Builder_t23ABFB73E05835CA7F11F21092D5E8652D8D081E * L_3;
		L_3 = Builder_NightStrictEnd_mD107FDC732B3C3B44B3074620747244FF837CE3D(L_2, ((int32_t)28800), /*hidden argument*/NULL);
		NullCheck(L_3);
		Builder_t23ABFB73E05835CA7F11F21092D5E8652D8D081E * L_4;
		L_4 = Builder_ChildCommonTime_m48BEF0C8290289E4525B7A0A76630C3F5DF71117(L_3, ((int32_t)5400), /*hidden argument*/NULL);
		NullCheck(L_4);
		Builder_t23ABFB73E05835CA7F11F21092D5E8652D8D081E * L_5;
		L_5 = Builder_ChildHolidayTime_mBFAC73C641639A8F54F9E90FBA2F8C853CB5FC23(L_4, ((int32_t)10800), /*hidden argument*/NULL);
		NullCheck(L_5);
		Builder_t23ABFB73E05835CA7F11F21092D5E8652D8D081E * L_6;
		L_6 = Builder_TeenPayLimit_m49E81F303D341738C22F2EEF5EBD72E3A568FD37(L_5, ((int32_t)5000), /*hidden argument*/NULL);
		NullCheck(L_6);
		Builder_t23ABFB73E05835CA7F11F21092D5E8652D8D081E * L_7;
		L_7 = Builder_TeenMonthPayLimit_m133685742C2AAB0AFE22EA0685A3184F2C2F9326(L_6, ((int32_t)20000), /*hidden argument*/NULL);
		NullCheck(L_7);
		Builder_t23ABFB73E05835CA7F11F21092D5E8652D8D081E * L_8;
		L_8 = Builder_YoungPayLimit_m1120BFAB62B7356A4F33B78037AEA1F9155DE988(L_7, ((int32_t)10000), /*hidden argument*/NULL);
		NullCheck(L_8);
		Builder_t23ABFB73E05835CA7F11F21092D5E8652D8D081E * L_9;
		L_9 = Builder_YoungMonthPayLimit_mAD18CA3B28E96ACB06ABDC9F7D97C6B166836183(L_8, ((int32_t)40000), /*hidden argument*/NULL);
		NullCheck(L_9);
		AntiAddictionCommonConfig_tFB2E9080FF6D416F4697BBF3B6CE8BCFECFF41CC * L_10;
		L_10 = Builder_Build_m49237B6B86BCD1A6F26D0587B25EFA0D82947E80(L_9, /*hidden argument*/NULL);
		// AntiAddiction.commonConfig(config);
		IL2CPP_RUNTIME_CLASS_INIT(AntiAddiction_t48341ECCB1DF1C64757849008C5BD7356AAEC7AD_il2cpp_TypeInfo_var);
		AntiAddiction_commonConfig_m8BCCC12387C28F91BBD1576E3D42F999407F2819(L_10, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MainBehaviour::InitAntiAddiction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainBehaviour_InitAntiAddiction_mC7CF390E52BA68CE6A8198A5D1B1D62D810D40DE (MainBehaviour_tDE09AB0E3B7AB47BEC0D8229B68A94AA3FE0DEC6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2__ctor_m3BA2B0E7AD3290E3BFECFA10EEA81D930348CA2E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2_t0359A210F354A728FCD80F275D8CF192D61A98C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AntiAddiction_t48341ECCB1DF1C64757849008C5BD7356AAEC7AD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MainBehaviour_onAntiAddictionHandler_mDE25AADC0063DAB13BB66AD0155CF11A18E374E5_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// onAntiAddictionResult += onAntiAddictionHandler;
		Action_2_t0359A210F354A728FCD80F275D8CF192D61A98C5 * L_0 = __this->get_onAntiAddictionResult_5();
		Action_2_t0359A210F354A728FCD80F275D8CF192D61A98C5 * L_1 = (Action_2_t0359A210F354A728FCD80F275D8CF192D61A98C5 *)il2cpp_codegen_object_new(Action_2_t0359A210F354A728FCD80F275D8CF192D61A98C5_il2cpp_TypeInfo_var);
		Action_2__ctor_m3BA2B0E7AD3290E3BFECFA10EEA81D930348CA2E(L_1, __this, (intptr_t)((intptr_t)MainBehaviour_onAntiAddictionHandler_mDE25AADC0063DAB13BB66AD0155CF11A18E374E5_RuntimeMethod_var), /*hidden argument*/Action_2__ctor_m3BA2B0E7AD3290E3BFECFA10EEA81D930348CA2E_RuntimeMethod_var);
		Delegate_t * L_2;
		L_2 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_0, L_1, /*hidden argument*/NULL);
		__this->set_onAntiAddictionResult_5(((Action_2_t0359A210F354A728FCD80F275D8CF192D61A98C5 *)CastclassSealed((RuntimeObject*)L_2, Action_2_t0359A210F354A728FCD80F275D8CF192D61A98C5_il2cpp_TypeInfo_var)));
		// AntiAddiction.init(onAntiAddictionResult);
		Action_2_t0359A210F354A728FCD80F275D8CF192D61A98C5 * L_3 = __this->get_onAntiAddictionResult_5();
		IL2CPP_RUNTIME_CLASS_INIT(AntiAddiction_t48341ECCB1DF1C64757849008C5BD7356AAEC7AD_il2cpp_TypeInfo_var);
		AntiAddiction_init_m262D2B8A2BB938FEBC7EF4CE28ED960BA8F4F887(L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MainBehaviour::onAntiAddictionHandler(System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainBehaviour_onAntiAddictionHandler_mDE25AADC0063DAB13BB66AD0155CF11A18E374E5 (MainBehaviour_tDE09AB0E3B7AB47BEC0D8229B68A94AA3FE0DEC6 * __this, int32_t ___resultCode0, String_t* ___msg1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral15225EE3C2EE375CFF1A8EBFC1A0B946EF344256);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2AE89394F035769900C129F8FF2AEEABF7DB5279);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2C5C443ACD4E5218DF3414260F13B50A075B64A3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2C7B72CE9D068C1C4D2AB52B56544F6D67000B06);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral547EFE5098B59C6599CD6DB24B615A9C93F5E2BD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral610DFD70D9FC01597BB1E92978CC83C8C2DB91DB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral69F09D528E30FFC387BF58F04494AE6FC719D2FC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9021A01F9AB7B2ABA4448CC47E10E576A20A6785);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral94EFC49063ABEE85D505619CB2A5FCEFDF878171);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9D090A003B1B6B986A9DE54BBFBA6CDFB826B595);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA05D53E62CD2603969B6E367A9BA4C4364F7215B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCCAC5B1E01EB4A4D610273A7926412C9B4188036);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// switch ((CallbackCode)resultCode) {
		int32_t L_0 = ___resultCode0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) > ((int32_t)((int32_t)1025))))
		{
			goto IL_0056;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) > ((int32_t)((int32_t)1010))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)((int32_t)500))))
		{
			goto IL_00b4;
		}
	}
	{
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)1000))))
		{
			goto IL_00c0;
		}
	}
	{
		int32_t L_5 = V_0;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)1010))))
		{
			goto IL_0119;
		}
	}
	{
		return;
	}

IL_0034:
	{
		int32_t L_6 = V_0;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)1015))))
		{
			goto IL_0125;
		}
	}
	{
		int32_t L_7 = V_0;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)1020))))
		{
			goto IL_00f6;
		}
	}
	{
		int32_t L_8 = V_0;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)1025))))
		{
			goto IL_010d;
		}
	}
	{
		return;
	}

IL_0056:
	{
		int32_t L_9 = V_0;
		if ((((int32_t)L_9) > ((int32_t)((int32_t)1090))))
		{
			goto IL_0077;
		}
	}
	{
		int32_t L_10 = V_0;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)1030))))
		{
			goto IL_0090;
		}
	}
	{
		int32_t L_11 = V_0;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)1080))))
		{
			goto IL_00d8;
		}
	}
	{
		int32_t L_12 = V_0;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)1090))))
		{
			goto IL_00ea;
		}
	}
	{
		return;
	}

IL_0077:
	{
		int32_t L_13 = V_0;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)1500))))
		{
			goto IL_00cc;
		}
	}
	{
		int32_t L_14 = V_0;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)2000))))
		{
			goto IL_009c;
		}
	}
	{
		int32_t L_15 = V_0;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)2500))))
		{
			goto IL_00a8;
		}
	}
	{
		return;
	}

IL_0090:
	{
		// LogAntiAddictionResult("Time Limit");
		MainBehaviour_LogAntiAddictionResult_m0505617181931627EBD48563FB3CC8CAE262C6C0(__this, _stringLiteral2C7B72CE9D068C1C4D2AB52B56544F6D67000B06, /*hidden argument*/NULL);
		// break;
		return;
	}

IL_009c:
	{
		// LogAntiAddictionResult("AAk Window Show");
		MainBehaviour_LogAntiAddictionResult_m0505617181931627EBD48563FB3CC8CAE262C6C0(__this, _stringLiteral9D090A003B1B6B986A9DE54BBFBA6CDFB826B595, /*hidden argument*/NULL);
		// break;
		return;
	}

IL_00a8:
	{
		// LogAntiAddictionResult("AAk Window Dismiss");
		MainBehaviour_LogAntiAddictionResult_m0505617181931627EBD48563FB3CC8CAE262C6C0(__this, _stringLiteral547EFE5098B59C6599CD6DB24B615A9C93F5E2BD, /*hidden argument*/NULL);
		// break;
		return;
	}

IL_00b4:
	{
		// LogAntiAddictionResult("Login Success");
		MainBehaviour_LogAntiAddictionResult_m0505617181931627EBD48563FB3CC8CAE262C6C0(__this, _stringLiteral2AE89394F035769900C129F8FF2AEEABF7DB5279, /*hidden argument*/NULL);
		// break;
		return;
	}

IL_00c0:
	{
		// LogAntiAddictionResult("Switch Account");
		MainBehaviour_LogAntiAddictionResult_m0505617181931627EBD48563FB3CC8CAE262C6C0(__this, _stringLiteral2C5C443ACD4E5218DF3414260F13B50A075B64A3, /*hidden argument*/NULL);
		// break;
		return;
	}

IL_00cc:
	{
		// LogAntiAddictionResult("User Type Changed");
		MainBehaviour_LogAntiAddictionResult_m0505617181931627EBD48563FB3CC8CAE262C6C0(__this, _stringLiteral9021A01F9AB7B2ABA4448CC47E10E576A20A6785, /*hidden argument*/NULL);
		// break;
		return;
	}

IL_00d8:
	{
		// LogAntiAddictionResult("Chat No Limit");
		MainBehaviour_LogAntiAddictionResult_m0505617181931627EBD48563FB3CC8CAE262C6C0(__this, _stringLiteral94EFC49063ABEE85D505619CB2A5FCEFDF878171, /*hidden argument*/NULL);
		// GotoChatPage();
		MainBehaviour_GotoChatPage_m36E1A1B5BE66F732B07BA4AC5B68DB6B6ABFD398(__this, /*hidden argument*/NULL);
		// break;
		return;
	}

IL_00ea:
	{
		// LogAntiAddictionResult("Chat Limit");
		MainBehaviour_LogAntiAddictionResult_m0505617181931627EBD48563FB3CC8CAE262C6C0(__this, _stringLiteral69F09D528E30FFC387BF58F04494AE6FC719D2FC, /*hidden argument*/NULL);
		// break;
		return;
	}

IL_00f6:
	{
		// LogAntiAddictionResult("Pay No Limit");
		MainBehaviour_LogAntiAddictionResult_m0505617181931627EBD48563FB3CC8CAE262C6C0(__this, _stringLiteral610DFD70D9FC01597BB1E92978CC83C8C2DB91DB, /*hidden argument*/NULL);
		// DealPay(10 * 100);
		MainBehaviour_DealPay_mBD372648664B67D06DED0F335CFBAB4A2A3BC1B6(__this, ((int32_t)1000), /*hidden argument*/NULL);
		// break;
		return;
	}

IL_010d:
	{
		// LogAntiAddictionResult("Pay Limit");
		MainBehaviour_LogAntiAddictionResult_m0505617181931627EBD48563FB3CC8CAE262C6C0(__this, _stringLiteralA05D53E62CD2603969B6E367A9BA4C4364F7215B, /*hidden argument*/NULL);
		// break;
		return;
	}

IL_0119:
	{
		// LogAntiAddictionResult("Real Name Success");
		MainBehaviour_LogAntiAddictionResult_m0505617181931627EBD48563FB3CC8CAE262C6C0(__this, _stringLiteralCCAC5B1E01EB4A4D610273A7926412C9B4188036, /*hidden argument*/NULL);
		// break;
		return;
	}

IL_0125:
	{
		// LogAntiAddictionResult("Real Name Fail");
		MainBehaviour_LogAntiAddictionResult_m0505617181931627EBD48563FB3CC8CAE262C6C0(__this, _stringLiteral15225EE3C2EE375CFF1A8EBFC1A0B946EF344256, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MainBehaviour::LogAntiAddictionResult(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainBehaviour_LogAntiAddictionResult_m0505617181931627EBD48563FB3CC8CAE262C6C0 (MainBehaviour_tDE09AB0E3B7AB47BEC0D8229B68A94AA3FE0DEC6 * __this, String_t* ___text0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3F7A24479663E2E56875B947E5EB43CEC6CFC05F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// MonoBehaviour.print("onAntiAddictionResult: " + text);
		String_t* L_0 = ___text0;
		String_t* L_1;
		L_1 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral3F7A24479663E2E56875B947E5EB43CEC6CFC05F, L_0, /*hidden argument*/NULL);
		MonoBehaviour_print_m4F113B89EC1C221CAC6EC64365E6DAD0AF86F090(L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MainBehaviour::GotoChatPage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainBehaviour_GotoChatPage_m36E1A1B5BE66F732B07BA4AC5B68DB6B6ABFD398 (MainBehaviour_tDE09AB0E3B7AB47BEC0D8229B68A94AA3FE0DEC6 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void MainBehaviour::DealPay(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainBehaviour_DealPay_mBD372648664B67D06DED0F335CFBAB4A2A3BC1B6 (MainBehaviour_tDE09AB0E3B7AB47BEC0D8229B68A94AA3FE0DEC6 * __this, int32_t ___num0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AntiAddiction_t48341ECCB1DF1C64757849008C5BD7356AAEC7AD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// AntiAddiction.paySuccess(num);
		int32_t L_0 = ___num0;
		IL2CPP_RUNTIME_CLASS_INIT(AntiAddiction_t48341ECCB1DF1C64757849008C5BD7356AAEC7AD_il2cpp_TypeInfo_var);
		AntiAddiction_paySuccess_m66E489B24FF7730FD3BCC19976686592B0BFDBA8(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MainBehaviour::OpenRealName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainBehaviour_OpenRealName_mDA94771730A84E5A2CAD7CFF780B72B798BBD8F4 (MainBehaviour_tDE09AB0E3B7AB47BEC0D8229B68A94AA3FE0DEC6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AntiAddiction_t48341ECCB1DF1C64757849008C5BD7356AAEC7AD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// AntiAddiction.openRealName();
		IL2CPP_RUNTIME_CLASS_INIT(AntiAddiction_t48341ECCB1DF1C64757849008C5BD7356AAEC7AD_il2cpp_TypeInfo_var);
		AntiAddiction_openRealName_mFD0E6CC39FFE848DEE3BBDC6E2701F10729F2D35(/*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MainBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainBehaviour__ctor_mBE4EF243C088BCBCA148770A9858988516273569 (MainBehaviour_tDE09AB0E3B7AB47BEC0D8229B68A94AA3FE0DEC6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral44F1E7DB2E8AAD233857868896DFEFE5A63EECEF);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public string Channle = "channel";
		__this->set_Channle_4(_stringLiteral44F1E7DB2E8AAD233857868896DFEFE5A63EECEF);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// TGCenterSdk.Api.PrivacyPolicyHelper TGCenterSdk.Api.PrivacyPolicyHelper::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PrivacyPolicyHelper_t5983E6361B35F6389228D994C018B16993468EA3 * PrivacyPolicyHelper_get_Instance_mA461052DDD65EE4DF0DA5FD90B324F91E236000F (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PrivacyPolicyHelper_t5983E6361B35F6389228D994C018B16993468EA3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return instance;
		IL2CPP_RUNTIME_CLASS_INIT(PrivacyPolicyHelper_t5983E6361B35F6389228D994C018B16993468EA3_il2cpp_TypeInfo_var);
		PrivacyPolicyHelper_t5983E6361B35F6389228D994C018B16993468EA3 * L_0 = ((PrivacyPolicyHelper_t5983E6361B35F6389228D994C018B16993468EA3_StaticFields*)il2cpp_codegen_static_fields_for(PrivacyPolicyHelper_t5983E6361B35F6389228D994C018B16993468EA3_il2cpp_TypeInfo_var))->get_instance_0();
		return L_0;
	}
}
// System.Void TGCenterSdk.Api.PrivacyPolicyHelper::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PrivacyPolicyHelper__ctor_m6EF58C5A21D285476284B395A1529F529830CC2F (PrivacyPolicyHelper_t5983E6361B35F6389228D994C018B16993468EA3 * __this, const RuntimeMethod* method)
{
	{
		// private PrivacyPolicyHelper() {
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// client = ClientFactory.PrivacyPolicyHelperClient();
		RuntimeObject* L_0;
		L_0 = ClientFactory_PrivacyPolicyHelperClient_m640B2DE7E30DACA6366CBCEC7A999C8FDD83F3FD(/*hidden argument*/NULL);
		__this->set_client_1(L_0);
		// }
		return;
	}
}
// System.Void TGCenterSdk.Api.PrivacyPolicyHelper::SetAgreeListener(TGCenterSdk.Api.PrivacyPolicyHelper/AgreeListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PrivacyPolicyHelper_SetAgreeListener_m557D780B21D647C8D0C39806B6DB1E5CE2AE922A (PrivacyPolicyHelper_t5983E6361B35F6389228D994C018B16993468EA3 * __this, RuntimeObject* ___listener0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPrivacyPolicyHelperClient_tDA8C8969D9B463BAEF2694E4E8D1EBDB10C932ED_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// client.SetAgreeListener(listener);
		RuntimeObject* L_0 = __this->get_client_1();
		RuntimeObject* L_1 = ___listener0;
		NullCheck(L_0);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(0 /* System.Void TGCenterSdk.Common.IPrivacyPolicyHelperClient::SetAgreeListener(TGCenterSdk.Api.PrivacyPolicyHelper/AgreeListener) */, IPrivacyPolicyHelperClient_tDA8C8969D9B463BAEF2694E4E8D1EBDB10C932ED_il2cpp_TypeInfo_var, L_0, L_1);
		// }
		return;
	}
}
// System.Void TGCenterSdk.Api.PrivacyPolicyHelper::ShowPrivacyDialog()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PrivacyPolicyHelper_ShowPrivacyDialog_mCEA153978D106F6BF76F14CCE4552BA5EE2C0DC5 (PrivacyPolicyHelper_t5983E6361B35F6389228D994C018B16993468EA3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPrivacyPolicyHelperClient_tDA8C8969D9B463BAEF2694E4E8D1EBDB10C932ED_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// client.ShowPrivacyDialog();
		RuntimeObject* L_0 = __this->get_client_1();
		NullCheck(L_0);
		InterfaceActionInvoker0::Invoke(1 /* System.Void TGCenterSdk.Common.IPrivacyPolicyHelperClient::ShowPrivacyDialog() */, IPrivacyPolicyHelperClient_tDA8C8969D9B463BAEF2694E4E8D1EBDB10C932ED_il2cpp_TypeInfo_var, L_0);
		// }
		return;
	}
}
// System.Void TGCenterSdk.Api.PrivacyPolicyHelper::JumpToUserAgreement()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PrivacyPolicyHelper_JumpToUserAgreement_mBDE97B36AFF06F68EF84B838F3BFC030DEAB893B (PrivacyPolicyHelper_t5983E6361B35F6389228D994C018B16993468EA3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPrivacyPolicyHelperClient_tDA8C8969D9B463BAEF2694E4E8D1EBDB10C932ED_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// client.JumpToUserAgreement();
		RuntimeObject* L_0 = __this->get_client_1();
		NullCheck(L_0);
		InterfaceActionInvoker0::Invoke(2 /* System.Void TGCenterSdk.Common.IPrivacyPolicyHelperClient::JumpToUserAgreement() */, IPrivacyPolicyHelperClient_tDA8C8969D9B463BAEF2694E4E8D1EBDB10C932ED_il2cpp_TypeInfo_var, L_0);
		// }
		return;
	}
}
// System.Void TGCenterSdk.Api.PrivacyPolicyHelper::JumpToPrivacyPolicy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PrivacyPolicyHelper_JumpToPrivacyPolicy_mFB7F0D55BC1E9D7B4145C2B5CBFBB6487110C146 (PrivacyPolicyHelper_t5983E6361B35F6389228D994C018B16993468EA3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPrivacyPolicyHelperClient_tDA8C8969D9B463BAEF2694E4E8D1EBDB10C932ED_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// client.JumpToPrivacyPolicy();
		RuntimeObject* L_0 = __this->get_client_1();
		NullCheck(L_0);
		InterfaceActionInvoker0::Invoke(3 /* System.Void TGCenterSdk.Common.IPrivacyPolicyHelperClient::JumpToPrivacyPolicy() */, IPrivacyPolicyHelperClient_tDA8C8969D9B463BAEF2694E4E8D1EBDB10C932ED_il2cpp_TypeInfo_var, L_0);
		// }
		return;
	}
}
// System.Void TGCenterSdk.Api.PrivacyPolicyHelper::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PrivacyPolicyHelper__cctor_mA8A45235DC009D8ED11B0AA871CF762EAC7C6BA4 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PrivacyPolicyHelper_t5983E6361B35F6389228D994C018B16993468EA3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static PrivacyPolicyHelper instance = new PrivacyPolicyHelper();
		PrivacyPolicyHelper_t5983E6361B35F6389228D994C018B16993468EA3 * L_0 = (PrivacyPolicyHelper_t5983E6361B35F6389228D994C018B16993468EA3 *)il2cpp_codegen_object_new(PrivacyPolicyHelper_t5983E6361B35F6389228D994C018B16993468EA3_il2cpp_TypeInfo_var);
		PrivacyPolicyHelper__ctor_m6EF58C5A21D285476284B395A1529F529830CC2F(L_0, /*hidden argument*/NULL);
		((PrivacyPolicyHelper_t5983E6361B35F6389228D994C018B16993468EA3_StaticFields*)il2cpp_codegen_static_fields_for(PrivacyPolicyHelper_t5983E6361B35F6389228D994C018B16993468EA3_il2cpp_TypeInfo_var))->set_instance_0(L_0);
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
// System.Void TGCenterSdk.Platforms.Android.PrivacyPolicyHelperClient::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PrivacyPolicyHelperClient__ctor_m1CD24831541A91EAD5D754D1A0C5ACF5A1FF91C6 (PrivacyPolicyHelperClient_tB067E8E989D92DA23AE4C378F99922F83EEB8AD9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC5ED59BBD9C24EFFD98D8C3819C7E15DFE08F412_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0271545B7AD2BC9BAAE4A02D8D7F5883CE4C09E1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5472B9531A1EFF24ABE63A5D7A0C524FF663B73E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA733C7FC19A8317471D21AD091D1A9A6F973A728);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDC71B380AFF23A38F6029B32B61C6943CB960350);
		s_Il2CppMethodInitialized = true;
	}
	AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * V_0 = NULL;
	{
		// public PrivacyPolicyHelperClient() : base((Utils.Class_IPrivacyPolicyCallback)) {
		IL2CPP_RUNTIME_CLASS_INIT(AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF_il2cpp_TypeInfo_var);
		AndroidJavaProxy__ctor_m1E8F4C0D87B74B81C64A54A584B2FF4ECE571238(__this, _stringLiteral0271545B7AD2BC9BAAE4A02D8D7F5883CE4C09E1, /*hidden argument*/NULL);
		// AndroidJavaObject builder = new AndroidJavaObject(Utils.Class_PrivacyPolicyHelperBuilder, Utils.GetPlayerActivity());
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = L_0;
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_2;
		L_2 = Utils_GetPlayerActivity_m7B8DC76B225EEF0336FA47F348C7560E1C60559E(/*hidden argument*/NULL);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_2);
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_3 = (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E *)il2cpp_codegen_object_new(AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_il2cpp_TypeInfo_var);
		AndroidJavaObject__ctor_m6146DBD19BCFFDB3D4F42C8D38491F354B58B001(L_3, _stringLiteral5472B9531A1EFF24ABE63A5D7A0C524FF663B73E, L_1, /*hidden argument*/NULL);
		V_0 = L_3;
		// builder.Call<AndroidJavaObject>("callback", this);
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_4 = V_0;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_5 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_6 = L_5;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, __this);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)__this);
		NullCheck(L_4);
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_7;
		L_7 = AndroidJavaObject_Call_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC5ED59BBD9C24EFFD98D8C3819C7E15DFE08F412(L_4, _stringLiteralDC71B380AFF23A38F6029B32B61C6943CB960350, L_6, /*hidden argument*/AndroidJavaObject_Call_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC5ED59BBD9C24EFFD98D8C3819C7E15DFE08F412_RuntimeMethod_var);
		// helper = builder.Call<AndroidJavaObject>("build");
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_8 = V_0;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_9;
		L_9 = Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_RuntimeMethod_var);
		NullCheck(L_8);
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_10;
		L_10 = AndroidJavaObject_Call_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC5ED59BBD9C24EFFD98D8C3819C7E15DFE08F412(L_8, _stringLiteralA733C7FC19A8317471D21AD091D1A9A6F973A728, L_9, /*hidden argument*/AndroidJavaObject_Call_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC5ED59BBD9C24EFFD98D8C3819C7E15DFE08F412_RuntimeMethod_var);
		__this->set_helper_4(L_10);
		// }
		return;
	}
}
// System.Void TGCenterSdk.Platforms.Android.PrivacyPolicyHelperClient::SetAgreeListener(TGCenterSdk.Api.PrivacyPolicyHelper/AgreeListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PrivacyPolicyHelperClient_SetAgreeListener_m3A252B5520B019195FF7F39D7FA20B8FA043297C (PrivacyPolicyHelperClient_tB067E8E989D92DA23AE4C378F99922F83EEB8AD9 * __this, RuntimeObject* ___listener0, const RuntimeMethod* method)
{
	{
		// this.listener = listener;
		RuntimeObject* L_0 = ___listener0;
		__this->set_listener_5(L_0);
		// }
		return;
	}
}
// System.Void TGCenterSdk.Platforms.Android.PrivacyPolicyHelperClient::ShowPrivacyDialog()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PrivacyPolicyHelperClient_ShowPrivacyDialog_m2CB30B2996224B31E4E72FE4B373E9DE88ADBAB7 (PrivacyPolicyHelperClient_tB067E8E989D92DA23AE4C378F99922F83EEB8AD9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCBC9687C3B3CF86630538F360E45F87AE0B9FA62);
		s_Il2CppMethodInitialized = true;
	}
	{
		// helper.Call("showDialog");
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_0 = __this->get_helper_4();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1;
		L_1 = Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_RuntimeMethod_var);
		NullCheck(L_0);
		AndroidJavaObject_Call_mBB226DA52CE5A2FCD9A2D42BC7FB4272E094B76D(L_0, _stringLiteralCBC9687C3B3CF86630538F360E45F87AE0B9FA62, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void TGCenterSdk.Platforms.Android.PrivacyPolicyHelperClient::JumpToUserAgreement()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PrivacyPolicyHelperClient_JumpToUserAgreement_m741CDB412DF8C6352933EE3B4681EB22A229A8C4 (PrivacyPolicyHelperClient_tB067E8E989D92DA23AE4C378F99922F83EEB8AD9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1DCBAE11305777652139FDD4BF5B5EABF8971C3D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// helper.Call("jumpToUserAgreement");
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_0 = __this->get_helper_4();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1;
		L_1 = Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_RuntimeMethod_var);
		NullCheck(L_0);
		AndroidJavaObject_Call_mBB226DA52CE5A2FCD9A2D42BC7FB4272E094B76D(L_0, _stringLiteral1DCBAE11305777652139FDD4BF5B5EABF8971C3D, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void TGCenterSdk.Platforms.Android.PrivacyPolicyHelperClient::JumpToPrivacyPolicy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PrivacyPolicyHelperClient_JumpToPrivacyPolicy_m2B8381A264F3854A35D599AC2314BF080CEED44B (PrivacyPolicyHelperClient_tB067E8E989D92DA23AE4C378F99922F83EEB8AD9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2A8BD72A3B5FB3F82BB10212457E738180ED3280);
		s_Il2CppMethodInitialized = true;
	}
	{
		// helper.Call("jumpToPrivacyPolicy");
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_0 = __this->get_helper_4();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1;
		L_1 = Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_RuntimeMethod_var);
		NullCheck(L_0);
		AndroidJavaObject_Call_mBB226DA52CE5A2FCD9A2D42BC7FB4272E094B76D(L_0, _stringLiteral2A8BD72A3B5FB3F82BB10212457E738180ED3280, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void TGCenterSdk.Platforms.Android.PrivacyPolicyHelperClient::onUserAgree()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PrivacyPolicyHelperClient_onUserAgree_mF06AD470BFF9F8213DD306F293EFCBAA13FFA9E5 (PrivacyPolicyHelperClient_tB067E8E989D92DA23AE4C378F99922F83EEB8AD9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AgreeListener_t9EB04F6176FDCEEA10D8613CB95DF4B627C12460_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(listener != null) {
		RuntimeObject* L_0 = __this->get_listener_5();
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		// listener.OnUserAgree();
		RuntimeObject* L_1 = __this->get_listener_5();
		NullCheck(L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void TGCenterSdk.Api.PrivacyPolicyHelper/AgreeListener::OnUserAgree() */, AgreeListener_t9EB04F6176FDCEEA10D8613CB95DF4B627C12460_il2cpp_TypeInfo_var, L_1);
	}

IL_0013:
	{
		// }
		return;
	}
}
// System.Void TGCenterSdk.Platforms.Android.PrivacyPolicyHelperClient::onUserDisagree()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PrivacyPolicyHelperClient_onUserDisagree_mD60D321EA336FF2D4AA2D67C6834910567776D54 (PrivacyPolicyHelperClient_tB067E8E989D92DA23AE4C378F99922F83EEB8AD9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AgreeListener_t9EB04F6176FDCEEA10D8613CB95DF4B627C12460_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(listener != null) {
		RuntimeObject* L_0 = __this->get_listener_5();
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		// listener.OnUserDisagree();
		RuntimeObject* L_1 = __this->get_listener_5();
		NullCheck(L_1);
		InterfaceActionInvoker0::Invoke(1 /* System.Void TGCenterSdk.Api.PrivacyPolicyHelper/AgreeListener::OnUserDisagree() */, AgreeListener_t9EB04F6176FDCEEA10D8613CB95DF4B627C12460_il2cpp_TypeInfo_var, L_1);
	}

IL_0013:
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
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_PrivacyPolicyHelperClient_PrivacyAgreeCallback_m24FA05F07A894D3E37B20E593D553B3A7158FCCF(intptr_t ___helperClient0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	PrivacyPolicyHelperClient_PrivacyAgreeCallback_m24FA05F07A894D3E37B20E593D553B3A7158FCCF(___helperClient0, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_PrivacyPolicyHelperClient_PrivacyDisagreeCallback_m4DFCB29D58AFF2A83D733119B94207160EA984C9(intptr_t ___helperClient0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	PrivacyPolicyHelperClient_PrivacyDisagreeCallback_m4DFCB29D58AFF2A83D733119B94207160EA984C9(___helperClient0, NULL);

}
// System.Void TGCenterSdk.Platforms.iOS.PrivacyPolicyHelperClient::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PrivacyPolicyHelperClient__ctor_m2F94ADF5E7AFD08E357B7522E0792A0CCC853F37 (PrivacyPolicyHelperClient_tCE377D6E958FD4996E71424C6705E0B1CA0327E0 * __this, const RuntimeMethod* method)
{
	{
		// public PrivacyPolicyHelperClient() {
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// helperClient = (IntPtr)GCHandle.Alloc(this);
		GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  L_0;
		L_0 = GCHandle_Alloc_m937829FAD1C69F168CF045B9406228AC9F8B9389(__this, /*hidden argument*/NULL);
		intptr_t L_1;
		L_1 = GCHandle_op_Explicit_m0A74179B3DD6D87F0863EF55176F924D641E42BF(L_0, /*hidden argument*/NULL);
		__this->set_helperClient_0((intptr_t)L_1);
		// }
		return;
	}
}
// System.Void TGCenterSdk.Platforms.iOS.PrivacyPolicyHelperClient::SetAgreeListener(TGCenterSdk.Api.PrivacyPolicyHelper/AgreeListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PrivacyPolicyHelperClient_SetAgreeListener_m8ACA9546BF057DF6376E163195B6C8C827E01654 (PrivacyPolicyHelperClient_tCE377D6E958FD4996E71424C6705E0B1CA0327E0 * __this, RuntimeObject* ___listener0, const RuntimeMethod* method)
{
	{
		// this.listener = listener;
		RuntimeObject* L_0 = ___listener0;
		__this->set_listener_1(L_0);
		// }
		return;
	}
}
// System.Void TGCenterSdk.Platforms.iOS.PrivacyPolicyHelperClient::ShowPrivacyDialog()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PrivacyPolicyHelperClient_ShowPrivacyDialog_mCB30F74731FDE50D431442C6512BA8793FDDD9EA (PrivacyPolicyHelperClient_tCE377D6E958FD4996E71424C6705E0B1CA0327E0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PrivacyPolicyHelperClient_PrivacyAgreeCallback_m24FA05F07A894D3E37B20E593D553B3A7158FCCF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PrivacyPolicyHelperClient_PrivacyDisagreeCallback_m4DFCB29D58AFF2A83D733119B94207160EA984C9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TGCPrivacyAgreeCallback_t3C41917D9CA51071333995D60FE85E6B410437DA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TGCPrivacyDisagreeCallback_t87303D0856E11528F24B5D65FE37D8EB115CEB9E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Externs.TGCPrivacyShowDialog(helperClient, PrivacyAgreeCallback, PrivacyDisagreeCallback);
		intptr_t L_0 = __this->get_helperClient_0();
		TGCPrivacyAgreeCallback_t3C41917D9CA51071333995D60FE85E6B410437DA * L_1 = (TGCPrivacyAgreeCallback_t3C41917D9CA51071333995D60FE85E6B410437DA *)il2cpp_codegen_object_new(TGCPrivacyAgreeCallback_t3C41917D9CA51071333995D60FE85E6B410437DA_il2cpp_TypeInfo_var);
		TGCPrivacyAgreeCallback__ctor_m0C3B960580D95B2B3EB822B847A777ACE75A9B5C(L_1, NULL, (intptr_t)((intptr_t)PrivacyPolicyHelperClient_PrivacyAgreeCallback_m24FA05F07A894D3E37B20E593D553B3A7158FCCF_RuntimeMethod_var), /*hidden argument*/NULL);
		TGCPrivacyDisagreeCallback_t87303D0856E11528F24B5D65FE37D8EB115CEB9E * L_2 = (TGCPrivacyDisagreeCallback_t87303D0856E11528F24B5D65FE37D8EB115CEB9E *)il2cpp_codegen_object_new(TGCPrivacyDisagreeCallback_t87303D0856E11528F24B5D65FE37D8EB115CEB9E_il2cpp_TypeInfo_var);
		TGCPrivacyDisagreeCallback__ctor_m45DFB8314F222674222C3F1626220266542C48FC(L_2, NULL, (intptr_t)((intptr_t)PrivacyPolicyHelperClient_PrivacyDisagreeCallback_m4DFCB29D58AFF2A83D733119B94207160EA984C9_RuntimeMethod_var), /*hidden argument*/NULL);
		Externs_TGCPrivacyShowDialog_mCBC4F18984C8E25FCCA862C2AFB4A9B36B942194((intptr_t)L_0, L_1, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void TGCenterSdk.Platforms.iOS.PrivacyPolicyHelperClient::JumpToUserAgreement()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PrivacyPolicyHelperClient_JumpToUserAgreement_mFF8F74B1E95A88E81BC508DD24C3C66526FD1E09 (PrivacyPolicyHelperClient_tCE377D6E958FD4996E71424C6705E0B1CA0327E0 * __this, const RuntimeMethod* method)
{
	{
		// Externs.TGCPrivacyJumpToUserAgreement();
		Externs_TGCPrivacyJumpToUserAgreement_m97E1C39BB07216C604DEF1109B503E40AFBBAEAD(/*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void TGCenterSdk.Platforms.iOS.PrivacyPolicyHelperClient::JumpToPrivacyPolicy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PrivacyPolicyHelperClient_JumpToPrivacyPolicy_mEE308A2B745F3159F4FDE3526518886D10A1834D (PrivacyPolicyHelperClient_tCE377D6E958FD4996E71424C6705E0B1CA0327E0 * __this, const RuntimeMethod* method)
{
	{
		// Externs.TGCPrivacyJumpToPrivacyPolicy();
		Externs_TGCPrivacyJumpToPrivacyPolicy_mADAC2305561536789C0855F17E5FDA3C4703E707(/*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void TGCenterSdk.Platforms.iOS.PrivacyPolicyHelperClient::PrivacyAgreeCallback(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PrivacyPolicyHelperClient_PrivacyAgreeCallback_m24FA05F07A894D3E37B20E593D553B3A7158FCCF (intptr_t ___helperClient0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AgreeListener_t9EB04F6176FDCEEA10D8613CB95DF4B627C12460_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PrivacyPolicyHelperClient_tCE377D6E958FD4996E71424C6705E0B1CA0327E0 * V_0 = NULL;
	{
		// PrivacyPolicyHelperClient client = IntPtrToPrivacyPolicyHelperClient(helperClient);
		intptr_t L_0 = ___helperClient0;
		PrivacyPolicyHelperClient_tCE377D6E958FD4996E71424C6705E0B1CA0327E0 * L_1;
		L_1 = PrivacyPolicyHelperClient_IntPtrToPrivacyPolicyHelperClient_m28AC5A85D28493308C7A808A361F078062AFC1F0((intptr_t)L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// if (client.listener != null) {
		PrivacyPolicyHelperClient_tCE377D6E958FD4996E71424C6705E0B1CA0327E0 * L_2 = V_0;
		NullCheck(L_2);
		RuntimeObject* L_3 = L_2->get_listener_1();
		if (!L_3)
		{
			goto IL_001a;
		}
	}
	{
		// client.listener.OnUserAgree();
		PrivacyPolicyHelperClient_tCE377D6E958FD4996E71424C6705E0B1CA0327E0 * L_4 = V_0;
		NullCheck(L_4);
		RuntimeObject* L_5 = L_4->get_listener_1();
		NullCheck(L_5);
		InterfaceActionInvoker0::Invoke(0 /* System.Void TGCenterSdk.Api.PrivacyPolicyHelper/AgreeListener::OnUserAgree() */, AgreeListener_t9EB04F6176FDCEEA10D8613CB95DF4B627C12460_il2cpp_TypeInfo_var, L_5);
	}

IL_001a:
	{
		// }
		return;
	}
}
// System.Void TGCenterSdk.Platforms.iOS.PrivacyPolicyHelperClient::PrivacyDisagreeCallback(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PrivacyPolicyHelperClient_PrivacyDisagreeCallback_m4DFCB29D58AFF2A83D733119B94207160EA984C9 (intptr_t ___helperClient0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AgreeListener_t9EB04F6176FDCEEA10D8613CB95DF4B627C12460_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PrivacyPolicyHelperClient_tCE377D6E958FD4996E71424C6705E0B1CA0327E0 * V_0 = NULL;
	{
		// PrivacyPolicyHelperClient client = IntPtrToPrivacyPolicyHelperClient(helperClient);
		intptr_t L_0 = ___helperClient0;
		PrivacyPolicyHelperClient_tCE377D6E958FD4996E71424C6705E0B1CA0327E0 * L_1;
		L_1 = PrivacyPolicyHelperClient_IntPtrToPrivacyPolicyHelperClient_m28AC5A85D28493308C7A808A361F078062AFC1F0((intptr_t)L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// if (client.listener != null) {
		PrivacyPolicyHelperClient_tCE377D6E958FD4996E71424C6705E0B1CA0327E0 * L_2 = V_0;
		NullCheck(L_2);
		RuntimeObject* L_3 = L_2->get_listener_1();
		if (!L_3)
		{
			goto IL_001a;
		}
	}
	{
		// client.listener.OnUserDisagree();
		PrivacyPolicyHelperClient_tCE377D6E958FD4996E71424C6705E0B1CA0327E0 * L_4 = V_0;
		NullCheck(L_4);
		RuntimeObject* L_5 = L_4->get_listener_1();
		NullCheck(L_5);
		InterfaceActionInvoker0::Invoke(1 /* System.Void TGCenterSdk.Api.PrivacyPolicyHelper/AgreeListener::OnUserDisagree() */, AgreeListener_t9EB04F6176FDCEEA10D8613CB95DF4B627C12460_il2cpp_TypeInfo_var, L_5);
	}

IL_001a:
	{
		// }
		return;
	}
}
// TGCenterSdk.Platforms.iOS.PrivacyPolicyHelperClient TGCenterSdk.Platforms.iOS.PrivacyPolicyHelperClient::IntPtrToPrivacyPolicyHelperClient(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PrivacyPolicyHelperClient_tCE377D6E958FD4996E71424C6705E0B1CA0327E0 * PrivacyPolicyHelperClient_IntPtrToPrivacyPolicyHelperClient_m28AC5A85D28493308C7A808A361F078062AFC1F0 (intptr_t ___helperClient0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PrivacyPolicyHelperClient_tCE377D6E958FD4996E71424C6705E0B1CA0327E0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// GCHandle handle = (GCHandle)helperClient;
		intptr_t L_0 = ___helperClient0;
		GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  L_1;
		L_1 = GCHandle_op_Explicit_mD2A800A063FDBDAB31CD7EC97DD63A896A3568A6((intptr_t)L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// return handle.Target as PrivacyPolicyHelperClient;
		RuntimeObject * L_2;
		L_2 = GCHandle_get_Target_m6C296AD6520ECDAFC9498E9387677F522871F883((GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 *)(&V_0), /*hidden argument*/NULL);
		return ((PrivacyPolicyHelperClient_tCE377D6E958FD4996E71424C6705E0B1CA0327E0 *)IsInstClass((RuntimeObject*)L_2, PrivacyPolicyHelperClient_tCE377D6E958FD4996E71424C6705E0B1CA0327E0_il2cpp_TypeInfo_var));
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
// TGCenterSdk.Common.ITGCenterClient TGCenterSdk.Api.TGCenter::GetTGCenterClient()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TGCenter_GetTGCenterClient_m6B54B973A8AB5AD2B75A155ABD3AA9ED1933700E (const RuntimeMethod* method)
{
	{
		// return ClientFactory.TGCenterClient();
		RuntimeObject* L_0;
		L_0 = ClientFactory_TGCenterClient_m2F598A2CDFEE5773506AA9F74901DC90E7CFB7C7(/*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void TGCenterSdk.Api.TGCenter::Init(TGCenterSdk.Api.InitConfig)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TGCenter_Init_mF0F3AD663639A35E3986B8BBD2DA76999D1A31A3 (InitConfig_tB77587871EE04B53CB86593F9C7461FF0B143A47 * ___config0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITGCenterClient_t9D68A2BCB63E41CEBF76EF6BE18A406C70808A82_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TGCenter_t7A01AA650A3F96EAE0E6787DB2804C51C1FBA0B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// client.Init(config);
		IL2CPP_RUNTIME_CLASS_INIT(TGCenter_t7A01AA650A3F96EAE0E6787DB2804C51C1FBA0B2_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((TGCenter_t7A01AA650A3F96EAE0E6787DB2804C51C1FBA0B2_StaticFields*)il2cpp_codegen_static_fields_for(TGCenter_t7A01AA650A3F96EAE0E6787DB2804C51C1FBA0B2_il2cpp_TypeInfo_var))->get_client_0();
		InitConfig_tB77587871EE04B53CB86593F9C7461FF0B143A47 * L_1 = ___config0;
		NullCheck(L_0);
		InterfaceActionInvoker1< InitConfig_tB77587871EE04B53CB86593F9C7461FF0B143A47 * >::Invoke(0 /* System.Void TGCenterSdk.Common.ITGCenterClient::Init(TGCenterSdk.Api.InitConfig) */, ITGCenterClient_t9D68A2BCB63E41CEBF76EF6BE18A406C70808A82_il2cpp_TypeInfo_var, L_0, L_1);
		// }
		return;
	}
}
// System.Boolean TGCenterSdk.Api.TGCenter::IsUserAgreePolicy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TGCenter_IsUserAgreePolicy_m5BE7174BDE944A4C6ECAACD5CF6AEB67DE880F2C (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITGCenterClient_t9D68A2BCB63E41CEBF76EF6BE18A406C70808A82_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TGCenter_t7A01AA650A3F96EAE0E6787DB2804C51C1FBA0B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return client.IsUserAgreePolicy();
		IL2CPP_RUNTIME_CLASS_INIT(TGCenter_t7A01AA650A3F96EAE0E6787DB2804C51C1FBA0B2_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((TGCenter_t7A01AA650A3F96EAE0E6787DB2804C51C1FBA0B2_StaticFields*)il2cpp_codegen_static_fields_for(TGCenter_t7A01AA650A3F96EAE0E6787DB2804C51C1FBA0B2_il2cpp_TypeInfo_var))->get_client_0();
		NullCheck(L_0);
		bool L_1;
		L_1 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean TGCenterSdk.Common.ITGCenterClient::IsUserAgreePolicy() */, ITGCenterClient_t9D68A2BCB63E41CEBF76EF6BE18A406C70808A82_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Void TGCenterSdk.Api.TGCenter::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TGCenter__cctor_mECD46F3E4F4CA3A99B4D907AE306CDFEE1241255 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TGCenter_t7A01AA650A3F96EAE0E6787DB2804C51C1FBA0B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static ITGCenterClient client = GetTGCenterClient();
		RuntimeObject* L_0;
		L_0 = TGCenter_GetTGCenterClient_m6B54B973A8AB5AD2B75A155ABD3AA9ED1933700E(/*hidden argument*/NULL);
		((TGCenter_t7A01AA650A3F96EAE0E6787DB2804C51C1FBA0B2_StaticFields*)il2cpp_codegen_static_fields_for(TGCenter_t7A01AA650A3F96EAE0E6787DB2804C51C1FBA0B2_il2cpp_TypeInfo_var))->set_client_0(L_0);
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
// TGCenterSdk.Platforms.Android.TGCenterClient TGCenterSdk.Platforms.Android.TGCenterClient::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TGCenterClient_t852F76F73B20352EC6238AC9B9F507DF071CF9B0 * TGCenterClient_get_Instance_m58BCC70F95FF029755E79A92DAB78A0EBFBF9239 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TGCenterClient_t852F76F73B20352EC6238AC9B9F507DF071CF9B0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return instance;
		IL2CPP_RUNTIME_CLASS_INIT(TGCenterClient_t852F76F73B20352EC6238AC9B9F507DF071CF9B0_il2cpp_TypeInfo_var);
		TGCenterClient_t852F76F73B20352EC6238AC9B9F507DF071CF9B0 * L_0 = ((TGCenterClient_t852F76F73B20352EC6238AC9B9F507DF071CF9B0_StaticFields*)il2cpp_codegen_static_fields_for(TGCenterClient_t852F76F73B20352EC6238AC9B9F507DF071CF9B0_il2cpp_TypeInfo_var))->get_instance_0();
		return L_0;
	}
}
// System.Void TGCenterSdk.Platforms.Android.TGCenterClient::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TGCenterClient__ctor_m8488AA46D241FE118C5E32D4C7E3C6D2B11B2846 (TGCenterClient_t852F76F73B20352EC6238AC9B9F507DF071CF9B0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral78BB85A2C5FD23C3F3375CE877742B653DB9DE8F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private TGCenterClient() {
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// tgCenterClass = new AndroidJavaClass(Utils.Class_TGCenter);
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_0 = (AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 *)il2cpp_codegen_object_new(AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4_il2cpp_TypeInfo_var);
		AndroidJavaClass__ctor_mEFF9F51871F231955D97DABDE9AB4A6B4EDA5541(L_0, _stringLiteral78BB85A2C5FD23C3F3375CE877742B653DB9DE8F, /*hidden argument*/NULL);
		__this->set_tgCenterClass_1(L_0);
		// }
		return;
	}
}
// System.Void TGCenterSdk.Platforms.Android.TGCenterClient::Init(TGCenterSdk.Api.InitConfig)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TGCenterClient_Init_m80098C11E59C97CB4E2D718AB79FD59918A4830B (TGCenterClient_t852F76F73B20352EC6238AC9B9F507DF071CF9B0 * __this, InitConfig_tB77587871EE04B53CB86593F9C7461FF0B143A47 * ___config0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_CallStatic_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mAD48C38D66AB67D0F0274D195F4A99CB7AB589F2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC5ED59BBD9C24EFFD98D8C3819C7E15DFE08F412_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0857B67E5F628D79E605E4FA501E38EB16E3D71F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1C7A9E8795DAC93A625C23D6E9F2BC7332ABF459);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7DAB5E39E639D0E926060919F4B35D10B371A437);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral816649F10AD961C87CC9969F931E6AE96A0CA44D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral879D6723690680B427E42F00420202B9EF4B9344);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA733C7FC19A8317471D21AD091D1A9A6F973A728);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBAB1AB454E7DBE6DCCF432CE9B800E808EEA9D9E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF89E2B8AEFEFD95D439A48449E4C25ACB8455C5B);
		s_Il2CppMethodInitialized = true;
	}
	AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * V_0 = NULL;
	Day1Retention_t5C5C48267E7FA734CD696706DCF7C0DC29025BB3 * V_1 = NULL;
	AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * V_2 = NULL;
	AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * V_3 = NULL;
	{
		// AndroidJavaClass initConfigClass = new AndroidJavaClass(Utils.Class_InitConfig);
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_0 = (AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 *)il2cpp_codegen_object_new(AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4_il2cpp_TypeInfo_var);
		AndroidJavaClass__ctor_mEFF9F51871F231955D97DABDE9AB4A6B4EDA5541(L_0, _stringLiteral0857B67E5F628D79E605E4FA501E38EB16E3D71F, /*hidden argument*/NULL);
		// AndroidJavaObject builder = initConfigClass.CallStatic<AndroidJavaObject>("newBuilder");
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1;
		L_1 = Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_RuntimeMethod_var);
		NullCheck(L_0);
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_2;
		L_2 = AndroidJavaObject_CallStatic_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mAD48C38D66AB67D0F0274D195F4A99CB7AB589F2(L_0, _stringLiteralF89E2B8AEFEFD95D439A48449E4C25ACB8455C5B, L_1, /*hidden argument*/AndroidJavaObject_CallStatic_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mAD48C38D66AB67D0F0274D195F4A99CB7AB589F2_RuntimeMethod_var);
		V_0 = L_2;
		// builder.Call<AndroidJavaObject>("setDebugMode", config.DebugMode);
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_3 = V_0;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_4 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_5 = L_4;
		InitConfig_tB77587871EE04B53CB86593F9C7461FF0B143A47 * L_6 = ___config0;
		NullCheck(L_6);
		bool L_7 = L_6->get_DebugMode_0();
		bool L_8 = L_7;
		RuntimeObject * L_9 = Box(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var, &L_8);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_9);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_9);
		NullCheck(L_3);
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_10;
		L_10 = AndroidJavaObject_Call_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC5ED59BBD9C24EFFD98D8C3819C7E15DFE08F412(L_3, _stringLiteral816649F10AD961C87CC9969F931E6AE96A0CA44D, L_5, /*hidden argument*/AndroidJavaObject_Call_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC5ED59BBD9C24EFFD98D8C3819C7E15DFE08F412_RuntimeMethod_var);
		// builder.Call<AndroidJavaObject>("setChannel", config.Channel);
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_11 = V_0;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_12 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_13 = L_12;
		InitConfig_tB77587871EE04B53CB86593F9C7461FF0B143A47 * L_14 = ___config0;
		NullCheck(L_14);
		String_t* L_15 = L_14->get_Channel_2();
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_15);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_15);
		NullCheck(L_11);
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_16;
		L_16 = AndroidJavaObject_Call_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC5ED59BBD9C24EFFD98D8C3819C7E15DFE08F412(L_11, _stringLiteralBAB1AB454E7DBE6DCCF432CE9B800E808EEA9D9E, L_13, /*hidden argument*/AndroidJavaObject_Call_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC5ED59BBD9C24EFFD98D8C3819C7E15DFE08F412_RuntimeMethod_var);
		// Day1Retention day1Retention = config.Day1Retention;
		InitConfig_tB77587871EE04B53CB86593F9C7461FF0B143A47 * L_17 = ___config0;
		NullCheck(L_17);
		Day1Retention_t5C5C48267E7FA734CD696706DCF7C0DC29025BB3 * L_18 = L_17->get_Day1Retention_1();
		V_1 = L_18;
		// if(day1Retention != null) {
		Day1Retention_t5C5C48267E7FA734CD696706DCF7C0DC29025BB3 * L_19 = V_1;
		if (!L_19)
		{
			goto IL_00b0;
		}
	}
	{
		// AndroidJavaObject retention = new AndroidJavaObject(Utils.Class_Day1Retention,
		//     Utils.GetRetentionType(day1Retention.RetentionType), day1Retention.StartCount, day1Retention.EndCount);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_20 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)3);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_21 = L_20;
		Day1Retention_t5C5C48267E7FA734CD696706DCF7C0DC29025BB3 * L_22 = V_1;
		NullCheck(L_22);
		int32_t L_23;
		L_23 = Day1Retention_get_RetentionType_mD0C2642097219905B831A051D675EE715FF6A4B5_inline(L_22, /*hidden argument*/NULL);
		String_t* L_24;
		L_24 = Utils_GetRetentionType_m9356A8A9B9DB2523F8706EF1AB407FF6CC5048EC(L_23, /*hidden argument*/NULL);
		NullCheck(L_21);
		ArrayElementTypeCheck (L_21, L_24);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_24);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_25 = L_21;
		Day1Retention_t5C5C48267E7FA734CD696706DCF7C0DC29025BB3 * L_26 = V_1;
		NullCheck(L_26);
		int32_t L_27;
		L_27 = Day1Retention_get_StartCount_mC49554BBEBB0F46D8B1DBBD920E195382086B189_inline(L_26, /*hidden argument*/NULL);
		int32_t L_28 = L_27;
		RuntimeObject * L_29 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_28);
		NullCheck(L_25);
		ArrayElementTypeCheck (L_25, L_29);
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_29);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_30 = L_25;
		Day1Retention_t5C5C48267E7FA734CD696706DCF7C0DC29025BB3 * L_31 = V_1;
		NullCheck(L_31);
		int32_t L_32;
		L_32 = Day1Retention_get_EndCount_m5DB2D2F36A24B0E04F4BF7BAE1E195689C896556_inline(L_31, /*hidden argument*/NULL);
		int32_t L_33 = L_32;
		RuntimeObject * L_34 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_33);
		NullCheck(L_30);
		ArrayElementTypeCheck (L_30, L_34);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_34);
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_35 = (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E *)il2cpp_codegen_object_new(AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_il2cpp_TypeInfo_var);
		AndroidJavaObject__ctor_m6146DBD19BCFFDB3D4F42C8D38491F354B58B001(L_35, _stringLiteral7DAB5E39E639D0E926060919F4B35D10B371A437, L_30, /*hidden argument*/NULL);
		V_3 = L_35;
		// builder.Call<AndroidJavaObject>("setDay1Retention", retention);
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_36 = V_0;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_37 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_38 = L_37;
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_39 = V_3;
		NullCheck(L_38);
		ArrayElementTypeCheck (L_38, L_39);
		(L_38)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_39);
		NullCheck(L_36);
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_40;
		L_40 = AndroidJavaObject_Call_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC5ED59BBD9C24EFFD98D8C3819C7E15DFE08F412(L_36, _stringLiteral879D6723690680B427E42F00420202B9EF4B9344, L_38, /*hidden argument*/AndroidJavaObject_Call_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC5ED59BBD9C24EFFD98D8C3819C7E15DFE08F412_RuntimeMethod_var);
	}

IL_00b0:
	{
		// AndroidJavaObject configObject = builder.Call<AndroidJavaObject>("build");
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_41 = V_0;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_42;
		L_42 = Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_RuntimeMethod_var);
		NullCheck(L_41);
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_43;
		L_43 = AndroidJavaObject_Call_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC5ED59BBD9C24EFFD98D8C3819C7E15DFE08F412(L_41, _stringLiteralA733C7FC19A8317471D21AD091D1A9A6F973A728, L_42, /*hidden argument*/AndroidJavaObject_Call_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC5ED59BBD9C24EFFD98D8C3819C7E15DFE08F412_RuntimeMethod_var);
		V_2 = L_43;
		// tgCenterClass.CallStatic("init", Utils.GetPlayerActivity(), configObject);
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_44 = __this->get_tgCenterClass_1();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_45 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_46 = L_45;
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_47;
		L_47 = Utils_GetPlayerActivity_m7B8DC76B225EEF0336FA47F348C7560E1C60559E(/*hidden argument*/NULL);
		NullCheck(L_46);
		ArrayElementTypeCheck (L_46, L_47);
		(L_46)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_47);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_48 = L_46;
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_49 = V_2;
		NullCheck(L_48);
		ArrayElementTypeCheck (L_48, L_49);
		(L_48)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_49);
		NullCheck(L_44);
		AndroidJavaObject_CallStatic_m5A97968767E1603C021023809276443ED24577FB(L_44, _stringLiteral1C7A9E8795DAC93A625C23D6E9F2BC7332ABF459, L_48, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Boolean TGCenterSdk.Platforms.Android.TGCenterClient::IsUserAgreePolicy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TGCenterClient_IsUserAgreePolicy_m3604EE7FFCC1A6144F5B58FF86187A9487A4B594 (TGCenterClient_t852F76F73B20352EC6238AC9B9F507DF071CF9B0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_CallStatic_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m08A8ECF220D35069EF5A4A50C2F38E925F0852FB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCFD98E61D945837836DFBB54F47FFA7AA58CDD3D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return tgCenterClass.CallStatic<bool>("isUserAgreePolicy", Utils.GetPlayerActivity());
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_0 = __this->get_tgCenterClass_1();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = L_1;
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_3;
		L_3 = Utils_GetPlayerActivity_m7B8DC76B225EEF0336FA47F348C7560E1C60559E(/*hidden argument*/NULL);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_3);
		NullCheck(L_0);
		bool L_4;
		L_4 = AndroidJavaObject_CallStatic_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m08A8ECF220D35069EF5A4A50C2F38E925F0852FB(L_0, _stringLiteralCFD98E61D945837836DFBB54F47FFA7AA58CDD3D, L_2, /*hidden argument*/AndroidJavaObject_CallStatic_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m08A8ECF220D35069EF5A4A50C2F38E925F0852FB_RuntimeMethod_var);
		return L_4;
	}
}
// System.Void TGCenterSdk.Platforms.Android.TGCenterClient::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TGCenterClient__cctor_m7FF04FD819004541C119546F747A586F65D96238 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TGCenterClient_t852F76F73B20352EC6238AC9B9F507DF071CF9B0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static TGCenterClient instance = new TGCenterClient();
		TGCenterClient_t852F76F73B20352EC6238AC9B9F507DF071CF9B0 * L_0 = (TGCenterClient_t852F76F73B20352EC6238AC9B9F507DF071CF9B0 *)il2cpp_codegen_object_new(TGCenterClient_t852F76F73B20352EC6238AC9B9F507DF071CF9B0_il2cpp_TypeInfo_var);
		TGCenterClient__ctor_m8488AA46D241FE118C5E32D4C7E3C6D2B11B2846(L_0, /*hidden argument*/NULL);
		((TGCenterClient_t852F76F73B20352EC6238AC9B9F507DF071CF9B0_StaticFields*)il2cpp_codegen_static_fields_for(TGCenterClient_t852F76F73B20352EC6238AC9B9F507DF071CF9B0_il2cpp_TypeInfo_var))->set_instance_0(L_0);
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
// TGCenterSdk.Platforms.iOS.TGCenterClient TGCenterSdk.Platforms.iOS.TGCenterClient::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TGCenterClient_t3FFBC93E175D733E5FF8A30D13354AED72C0FCC9 * TGCenterClient_get_Instance_m3B9AB680B87D6BF5B90C8E7928F77CF79309DADC (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TGCenterClient_t3FFBC93E175D733E5FF8A30D13354AED72C0FCC9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return instance;
		IL2CPP_RUNTIME_CLASS_INIT(TGCenterClient_t3FFBC93E175D733E5FF8A30D13354AED72C0FCC9_il2cpp_TypeInfo_var);
		TGCenterClient_t3FFBC93E175D733E5FF8A30D13354AED72C0FCC9 * L_0 = ((TGCenterClient_t3FFBC93E175D733E5FF8A30D13354AED72C0FCC9_StaticFields*)il2cpp_codegen_static_fields_for(TGCenterClient_t3FFBC93E175D733E5FF8A30D13354AED72C0FCC9_il2cpp_TypeInfo_var))->get_instance_0();
		return L_0;
	}
}
// System.Void TGCenterSdk.Platforms.iOS.TGCenterClient::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TGCenterClient__ctor_mD59CDDCD152E21CCAB2C20B24F9A9DDEDE024DEA (TGCenterClient_t3FFBC93E175D733E5FF8A30D13354AED72C0FCC9 * __this, const RuntimeMethod* method)
{
	{
		// private TGCenterClient() { }
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// private TGCenterClient() { }
		return;
	}
}
// System.Void TGCenterSdk.Platforms.iOS.TGCenterClient::Init(TGCenterSdk.Api.InitConfig)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TGCenterClient_Init_mF54DAE431EE6FEDAFA39F0DE1188228C80900097 (TGCenterClient_t3FFBC93E175D733E5FF8A30D13354AED72C0FCC9 * __this, InitConfig_tB77587871EE04B53CB86593F9C7461FF0B143A47 * ___config0, const RuntimeMethod* method)
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	intptr_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// IntPtr configPtr = Externs.TGCCreateInitConfig();
		intptr_t L_0;
		L_0 = Externs_TGCCreateInitConfig_m76F31ED1EE75BFFBF2FBC598B4CAFAC04847ABDF(/*hidden argument*/NULL);
		V_0 = (intptr_t)L_0;
		// Externs.TGCSetInitConfig_DebugMode(configPtr, config.DebugMode);
		intptr_t L_1 = V_0;
		InitConfig_tB77587871EE04B53CB86593F9C7461FF0B143A47 * L_2 = ___config0;
		NullCheck(L_2);
		bool L_3 = L_2->get_DebugMode_0();
		Externs_TGCSetInitConfig_DebugMode_m3C60CA74838730B5605C43F254C7BB13DB14218A((intptr_t)L_1, L_3, /*hidden argument*/NULL);
		// Externs.TGCSetInitConfig_AppId(configPtr, config.AppId);
		intptr_t L_4 = V_0;
		InitConfig_tB77587871EE04B53CB86593F9C7461FF0B143A47 * L_5 = ___config0;
		NullCheck(L_5);
		String_t* L_6 = L_5->get_AppId_3();
		Externs_TGCSetInitConfig_AppId_m79A28C237AD73D049498776862601252568AE409((intptr_t)L_4, L_6, /*hidden argument*/NULL);
		// Externs.TGCSetInitConfig_AppleAppID(configPtr, config.AppleAppID);
		intptr_t L_7 = V_0;
		InitConfig_tB77587871EE04B53CB86593F9C7461FF0B143A47 * L_8 = ___config0;
		NullCheck(L_8);
		String_t* L_9 = L_8->get_AppleAppID_4();
		Externs_TGCSetInitConfig_AppleAppID_mA99EACF9D3B913E007A5EF79CA40FDFABC32A7D4((intptr_t)L_7, L_9, /*hidden argument*/NULL);
		// Externs.TGCSetInitConfig_UmengAppKey(configPtr, config.UmengAppKey);
		intptr_t L_10 = V_0;
		InitConfig_tB77587871EE04B53CB86593F9C7461FF0B143A47 * L_11 = ___config0;
		NullCheck(L_11);
		String_t* L_12 = L_11->get_UmengAppKey_5();
		Externs_TGCSetInitConfig_UmengAppKey_m80CE1DCFC4565693F34ECBBE62B54B99CF589663((intptr_t)L_10, L_12, /*hidden argument*/NULL);
		// Externs.TGCSetInitConfig_AppsFlyerDevKey(configPtr, config.AppsFlyerDevKey);
		intptr_t L_13 = V_0;
		InitConfig_tB77587871EE04B53CB86593F9C7461FF0B143A47 * L_14 = ___config0;
		NullCheck(L_14);
		String_t* L_15 = L_14->get_AppsFlyerDevKey_6();
		Externs_TGCSetInitConfig_AppsFlyerDevKey_m9B3CD629FF1C4B4258A124071A2CDD58891FE71D((intptr_t)L_13, L_15, /*hidden argument*/NULL);
		// Externs.TGCSetInitConfig_RangersAppLogAppId(configPtr, config.RangersAppLogAppId);
		intptr_t L_16 = V_0;
		InitConfig_tB77587871EE04B53CB86593F9C7461FF0B143A47 * L_17 = ___config0;
		NullCheck(L_17);
		String_t* L_18 = L_17->get_RangersAppLogAppId_7();
		Externs_TGCSetInitConfig_RangersAppLogAppId_mC1DF1C6D8ABDD475939ADB3A32607914B6E7B1C7((intptr_t)L_16, L_18, /*hidden argument*/NULL);
		// Externs.TGCSetInitConfig_RangersAppLogAppName(configPtr, config.RangersAppLogAppName);
		intptr_t L_19 = V_0;
		InitConfig_tB77587871EE04B53CB86593F9C7461FF0B143A47 * L_20 = ___config0;
		NullCheck(L_20);
		String_t* L_21 = L_20->get_RangersAppLogAppName_8();
		Externs_TGCSetInitConfig_RangersAppLogAppName_m4C032095A1DE1921811AAFA37C21F9F8A57E3ED9((intptr_t)L_19, L_21, /*hidden argument*/NULL);
		// if (config.Day1Retention != null) {
		InitConfig_tB77587871EE04B53CB86593F9C7461FF0B143A47 * L_22 = ___config0;
		NullCheck(L_22);
		Day1Retention_t5C5C48267E7FA734CD696706DCF7C0DC29025BB3 * L_23 = L_22->get_Day1Retention_1();
		if (!L_23)
		{
			goto IL_00a2;
		}
	}
	{
		// IntPtr retentionPtr = Externs.TGCCreateDay1Retention();
		intptr_t L_24;
		L_24 = Externs_TGCCreateDay1Retention_mA6B9EDCB5E75FFE679366C5FDDDAA6585F04CCE0(/*hidden argument*/NULL);
		V_1 = (intptr_t)L_24;
		// Externs.TGCSetDay1Retention_Type(retentionPtr, (int)config.Day1Retention.RetentionType);
		intptr_t L_25 = V_1;
		InitConfig_tB77587871EE04B53CB86593F9C7461FF0B143A47 * L_26 = ___config0;
		NullCheck(L_26);
		Day1Retention_t5C5C48267E7FA734CD696706DCF7C0DC29025BB3 * L_27 = L_26->get_Day1Retention_1();
		NullCheck(L_27);
		int32_t L_28;
		L_28 = Day1Retention_get_RetentionType_mD0C2642097219905B831A051D675EE715FF6A4B5_inline(L_27, /*hidden argument*/NULL);
		Externs_TGCSetDay1Retention_Type_m3B7916E4DCBAF3ABB52020CB12D7CB7CCAA063B0((intptr_t)L_25, L_28, /*hidden argument*/NULL);
		// Externs.TGCSetDay1Retention_StartCount(retentionPtr, config.Day1Retention.StartCount);
		intptr_t L_29 = V_1;
		InitConfig_tB77587871EE04B53CB86593F9C7461FF0B143A47 * L_30 = ___config0;
		NullCheck(L_30);
		Day1Retention_t5C5C48267E7FA734CD696706DCF7C0DC29025BB3 * L_31 = L_30->get_Day1Retention_1();
		NullCheck(L_31);
		int32_t L_32;
		L_32 = Day1Retention_get_StartCount_mC49554BBEBB0F46D8B1DBBD920E195382086B189_inline(L_31, /*hidden argument*/NULL);
		Externs_TGCSetDay1Retention_StartCount_m06973A8C99ED9BBCC36861E10A69420030DF15A1((intptr_t)L_29, L_32, /*hidden argument*/NULL);
		// Externs.TGCSetDay1Retention_EndCount(retentionPtr, config.Day1Retention.EndCount);
		intptr_t L_33 = V_1;
		InitConfig_tB77587871EE04B53CB86593F9C7461FF0B143A47 * L_34 = ___config0;
		NullCheck(L_34);
		Day1Retention_t5C5C48267E7FA734CD696706DCF7C0DC29025BB3 * L_35 = L_34->get_Day1Retention_1();
		NullCheck(L_35);
		int32_t L_36;
		L_36 = Day1Retention_get_EndCount_m5DB2D2F36A24B0E04F4BF7BAE1E195689C896556_inline(L_35, /*hidden argument*/NULL);
		Externs_TGCSetDay1Retention_EndCount_mBB41BCABD0864AF1841D6314A8A7CCF4F1D93ED5((intptr_t)L_33, L_36, /*hidden argument*/NULL);
		// Externs.TGCSetInitConfig_Day1Retention(configPtr, retentionPtr);
		intptr_t L_37 = V_0;
		intptr_t L_38 = V_1;
		Externs_TGCSetInitConfig_Day1Retention_m9F23B425F4DF6A58C648CF755B3FB92DF3415900((intptr_t)L_37, (intptr_t)L_38, /*hidden argument*/NULL);
	}

IL_00a2:
	{
		// Externs.TGCInit(configPtr);
		intptr_t L_39 = V_0;
		Externs_TGCInit_mAABFC2CB05181D48FD025937FD082B786DF642FC((intptr_t)L_39, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Boolean TGCenterSdk.Platforms.iOS.TGCenterClient::IsUserAgreePolicy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TGCenterClient_IsUserAgreePolicy_m165ED64BA9021A4A6F5BA85FAAC92BE52DCA8A53 (TGCenterClient_t3FFBC93E175D733E5FF8A30D13354AED72C0FCC9 * __this, const RuntimeMethod* method)
{
	{
		// return Externs.TGCIsUserAgreePolicy();
		bool L_0;
		L_0 = Externs_TGCIsUserAgreePolicy_m243ABD3ACEE5D59050CEFE902B1CEF56686EB609(/*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void TGCenterSdk.Platforms.iOS.TGCenterClient::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TGCenterClient__cctor_mF698D95F24BAB8C12DB85570241614969D873FA4 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TGCenterClient_t3FFBC93E175D733E5FF8A30D13354AED72C0FCC9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static TGCenterClient instance = new TGCenterClient();
		TGCenterClient_t3FFBC93E175D733E5FF8A30D13354AED72C0FCC9 * L_0 = (TGCenterClient_t3FFBC93E175D733E5FF8A30D13354AED72C0FCC9 *)il2cpp_codegen_object_new(TGCenterClient_t3FFBC93E175D733E5FF8A30D13354AED72C0FCC9_il2cpp_TypeInfo_var);
		TGCenterClient__ctor_mD59CDDCD152E21CCAB2C20B24F9A9DDEDE024DEA(L_0, /*hidden argument*/NULL);
		((TGCenterClient_t3FFBC93E175D733E5FF8A30D13354AED72C0FCC9_StaticFields*)il2cpp_codegen_static_fields_for(TGCenterClient_t3FFBC93E175D733E5FF8A30D13354AED72C0FCC9_il2cpp_TypeInfo_var))->set_instance_0(L_0);
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
// UnityEngine.AndroidJavaObject TGCenterSdk.Platforms.Android.Utils::GetPlayerActivity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * Utils_GetPlayerActivity_m7B8DC76B225EEF0336FA47F348C7560E1C60559E (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_GetStatic_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC84C97A7EC20ED712D21107C9FA32E0785021153_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4D613657609485AE586A3379BA0E3FC13C1E1078);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFB4AE4F77150C3A8E8E4F8B23E734E0C7277B7D9);
		s_Il2CppMethodInitialized = true;
	}
	{
		// AndroidJavaClass playerClass = new AndroidJavaClass(UnityActivityClassName);
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_0 = (AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 *)il2cpp_codegen_object_new(AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4_il2cpp_TypeInfo_var);
		AndroidJavaClass__ctor_mEFF9F51871F231955D97DABDE9AB4A6B4EDA5541(L_0, _stringLiteral4D613657609485AE586A3379BA0E3FC13C1E1078, /*hidden argument*/NULL);
		// AndroidJavaObject activity = playerClass.GetStatic<AndroidJavaObject>("currentActivity");
		NullCheck(L_0);
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_1;
		L_1 = AndroidJavaObject_GetStatic_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC84C97A7EC20ED712D21107C9FA32E0785021153(L_0, _stringLiteralFB4AE4F77150C3A8E8E4F8B23E734E0C7277B7D9, /*hidden argument*/AndroidJavaObject_GetStatic_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC84C97A7EC20ED712D21107C9FA32E0785021153_RuntimeMethod_var);
		// return activity;
		return L_1;
	}
}
// System.String TGCenterSdk.Platforms.Android.Utils::GetRetentionType(TGCenterSdk.Api.Day1Retention/RetentionTypes)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Utils_GetRetentionType_m9356A8A9B9DB2523F8706EF1AB407FF6CC5048EC (int32_t ___type0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7FDD57A554F4937B1372DCDFBB149567C0704967);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC8C1F8993C105E3086D93D9BFCC205A34765F689);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___type0;
		if ((((int32_t)L_0) == ((int32_t)1)))
		{
			goto IL_000a;
		}
	}
	{
		int32_t L_1 = ___type0;
		if ((((int32_t)L_1) == ((int32_t)2)))
		{
			goto IL_0010;
		}
	}
	{
		goto IL_0016;
	}

IL_000a:
	{
		// return "hour";
		return _stringLiteral7FDD57A554F4937B1372DCDFBB149567C0704967;
	}

IL_0010:
	{
		// return "nature_day";
		return _stringLiteralC8C1F8993C105E3086D93D9BFCC205A34765F689;
	}

IL_0016:
	{
		// return "";
		return _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_AntiAddictionDelegate_t849C34933F2BEB8A44306738A7F07A582DC9EDBF (AntiAddictionDelegate_t849C34933F2BEB8A44306738A7F07A582DC9EDBF * __this, int32_t ___resultCode0, String_t* ___message1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t, char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Marshaling of parameter '___message1' to native representation
	char* ____message1_marshaled = NULL;
	____message1_marshaled = il2cpp_codegen_marshal_string(___message1);

	// Native function invocation
	il2cppPInvokeFunc(___resultCode0, ____message1_marshaled);

	// Marshaling cleanup of parameter '___message1' native representation
	il2cpp_codegen_marshal_free(____message1_marshaled);
	____message1_marshaled = NULL;

}
// System.Void AntiAddictionSdk.OpenSource.AntiAddiction/AntiAddictionDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AntiAddictionDelegate__ctor_m2689E1F0F648C1B728129A0D61E2A4824C1D86F9 (AntiAddictionDelegate_t849C34933F2BEB8A44306738A7F07A582DC9EDBF * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void AntiAddictionSdk.OpenSource.AntiAddiction/AntiAddictionDelegate::Invoke(System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AntiAddictionDelegate_Invoke_m49247E61E3DEDDFFC98FD339AD26AEF47BD85A9E (AntiAddictionDelegate_t849C34933F2BEB8A44306738A7F07A582DC9EDBF * __this, int32_t ___resultCode0, String_t* ___message1, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (int32_t, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___resultCode0, ___message1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, int32_t, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___resultCode0, ___message1, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< int32_t, String_t* >::Invoke(targetMethod, targetThis, ___resultCode0, ___message1);
					else
						GenericVirtActionInvoker2< int32_t, String_t* >::Invoke(targetMethod, targetThis, ___resultCode0, ___message1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< int32_t, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___resultCode0, ___message1);
					else
						VirtActionInvoker2< int32_t, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___resultCode0, ___message1);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, int32_t, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___resultCode0, ___message1, targetMethod);
			}
		}
	}
}
// System.IAsyncResult AntiAddictionSdk.OpenSource.AntiAddiction/AntiAddictionDelegate::BeginInvoke(System.Int32,System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AntiAddictionDelegate_BeginInvoke_m1106B66EC2658AB093191DB6848E412E1ED5858D (AntiAddictionDelegate_t849C34933F2BEB8A44306738A7F07A582DC9EDBF * __this, int32_t ___resultCode0, String_t* ___message1, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &___resultCode0);
	__d_args[1] = ___message1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);;
}
// System.Void AntiAddictionSdk.OpenSource.AntiAddiction/AntiAddictionDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AntiAddictionDelegate_EndInvoke_mF72C18C4F1C55B267D6CB2030B5CD296985F3FC6 (AntiAddictionDelegate_t849C34933F2BEB8A44306738A7F07A582DC9EDBF * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Int32 AntiAddictionSdk.OpenSource.AntiAddictionCommonConfig/Builder::get_gusterTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Builder_get_gusterTime_mBE1D4FBD0AC9E997EF672842D969FF4824BA155D (Builder_t23ABFB73E05835CA7F11F21092D5E8652D8D081E * __this, const RuntimeMethod* method)
{
	{
		// internal int gusterTime{ get; set;}
		int32_t L_0 = __this->get_U3CgusterTimeU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void AntiAddictionSdk.OpenSource.AntiAddictionCommonConfig/Builder::set_gusterTime(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Builder_set_gusterTime_m6C56393837075581346BD1B2C037F20A36C80541 (Builder_t23ABFB73E05835CA7F11F21092D5E8652D8D081E * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// internal int gusterTime{ get; set;}
		int32_t L_0 = ___value0;
		__this->set_U3CgusterTimeU3Ek__BackingField_0(L_0);
		return;
	}
}
// System.Int32 AntiAddictionSdk.OpenSource.AntiAddictionCommonConfig/Builder::get_nightStrictStart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Builder_get_nightStrictStart_m5BECFE51FB4A529782DB60A66C08BBEA9B4E012D (Builder_t23ABFB73E05835CA7F11F21092D5E8652D8D081E * __this, const RuntimeMethod* method)
{
	{
		// internal int nightStrictStart{ get; set;}
		int32_t L_0 = __this->get_U3CnightStrictStartU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void AntiAddictionSdk.OpenSource.AntiAddictionCommonConfig/Builder::set_nightStrictStart(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Builder_set_nightStrictStart_mB6776A7C84B6803901AF28BC17F8B8BBF53567E6 (Builder_t23ABFB73E05835CA7F11F21092D5E8652D8D081E * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// internal int nightStrictStart{ get; set;}
		int32_t L_0 = ___value0;
		__this->set_U3CnightStrictStartU3Ek__BackingField_1(L_0);
		return;
	}
}
// System.Int32 AntiAddictionSdk.OpenSource.AntiAddictionCommonConfig/Builder::get_nightStrictEnd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Builder_get_nightStrictEnd_mEF50A39C5C4CA417E38CCF3C20C39C1D79C2326A (Builder_t23ABFB73E05835CA7F11F21092D5E8652D8D081E * __this, const RuntimeMethod* method)
{
	{
		// internal int nightStrictEnd{ get; set;}
		int32_t L_0 = __this->get_U3CnightStrictEndU3Ek__BackingField_2();
		return L_0;
	}
}
// System.Void AntiAddictionSdk.OpenSource.AntiAddictionCommonConfig/Builder::set_nightStrictEnd(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Builder_set_nightStrictEnd_m8ED7A511AE9A55E3E891F8EE79BF0E50A2956BB7 (Builder_t23ABFB73E05835CA7F11F21092D5E8652D8D081E * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// internal int nightStrictEnd{ get; set;}
		int32_t L_0 = ___value0;
		__this->set_U3CnightStrictEndU3Ek__BackingField_2(L_0);
		return;
	}
}
// System.Int32 AntiAddictionSdk.OpenSource.AntiAddictionCommonConfig/Builder::get_childCommonTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Builder_get_childCommonTime_mF77BC95A656CB982A103D280FCBD0BF7D229E41E (Builder_t23ABFB73E05835CA7F11F21092D5E8652D8D081E * __this, const RuntimeMethod* method)
{
	{
		// internal int childCommonTime{ get; set;}
		int32_t L_0 = __this->get_U3CchildCommonTimeU3Ek__BackingField_3();
		return L_0;
	}
}
// System.Void AntiAddictionSdk.OpenSource.AntiAddictionCommonConfig/Builder::set_childCommonTime(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Builder_set_childCommonTime_m36439341040F9C5EB7B25BFCFC932AB25988619C (Builder_t23ABFB73E05835CA7F11F21092D5E8652D8D081E * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// internal int childCommonTime{ get; set;}
		int32_t L_0 = ___value0;
		__this->set_U3CchildCommonTimeU3Ek__BackingField_3(L_0);
		return;
	}
}
// System.Int32 AntiAddictionSdk.OpenSource.AntiAddictionCommonConfig/Builder::get_childHolidayTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Builder_get_childHolidayTime_m0921784655E54C8DEC175F5AB18FB2C289B2E2BC (Builder_t23ABFB73E05835CA7F11F21092D5E8652D8D081E * __this, const RuntimeMethod* method)
{
	{
		// internal int childHolidayTime{ get; set;}
		int32_t L_0 = __this->get_U3CchildHolidayTimeU3Ek__BackingField_4();
		return L_0;
	}
}
// System.Void AntiAddictionSdk.OpenSource.AntiAddictionCommonConfig/Builder::set_childHolidayTime(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Builder_set_childHolidayTime_m573ACA5A262CD96115AC2FE747EBE48ACC359486 (Builder_t23ABFB73E05835CA7F11F21092D5E8652D8D081E * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// internal int childHolidayTime{ get; set;}
		int32_t L_0 = ___value0;
		__this->set_U3CchildHolidayTimeU3Ek__BackingField_4(L_0);
		return;
	}
}
// System.Int32 AntiAddictionSdk.OpenSource.AntiAddictionCommonConfig/Builder::get_teenPayLimit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Builder_get_teenPayLimit_mB43D99A68624D1FE4CC8F2B636921DE645C950B8 (Builder_t23ABFB73E05835CA7F11F21092D5E8652D8D081E * __this, const RuntimeMethod* method)
{
	{
		// internal int teenPayLimit{ get; set;}
		int32_t L_0 = __this->get_U3CteenPayLimitU3Ek__BackingField_5();
		return L_0;
	}
}
// System.Void AntiAddictionSdk.OpenSource.AntiAddictionCommonConfig/Builder::set_teenPayLimit(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Builder_set_teenPayLimit_m8B0C3B9EA8C565D322C6BA1898DDEFE2B86468CB (Builder_t23ABFB73E05835CA7F11F21092D5E8652D8D081E * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// internal int teenPayLimit{ get; set;}
		int32_t L_0 = ___value0;
		__this->set_U3CteenPayLimitU3Ek__BackingField_5(L_0);
		return;
	}
}
// System.Int32 AntiAddictionSdk.OpenSource.AntiAddictionCommonConfig/Builder::get_teenMonthPayLimit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Builder_get_teenMonthPayLimit_mDA52D5129A614D37736CF081E1E706D73C5F8A0F (Builder_t23ABFB73E05835CA7F11F21092D5E8652D8D081E * __this, const RuntimeMethod* method)
{
	{
		// internal int teenMonthPayLimit{ get; set;}
		int32_t L_0 = __this->get_U3CteenMonthPayLimitU3Ek__BackingField_6();
		return L_0;
	}
}
// System.Void AntiAddictionSdk.OpenSource.AntiAddictionCommonConfig/Builder::set_teenMonthPayLimit(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Builder_set_teenMonthPayLimit_m0C94B383082A42811B3C7215986F44299803E048 (Builder_t23ABFB73E05835CA7F11F21092D5E8652D8D081E * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// internal int teenMonthPayLimit{ get; set;}
		int32_t L_0 = ___value0;
		__this->set_U3CteenMonthPayLimitU3Ek__BackingField_6(L_0);
		return;
	}
}
// System.Int32 AntiAddictionSdk.OpenSource.AntiAddictionCommonConfig/Builder::get_youngPayLimit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Builder_get_youngPayLimit_mBB76B75B2FC238BBF1D9C3EC84DACE4EEAD34BAF (Builder_t23ABFB73E05835CA7F11F21092D5E8652D8D081E * __this, const RuntimeMethod* method)
{
	{
		// internal int youngPayLimit{ get; set;}
		int32_t L_0 = __this->get_U3CyoungPayLimitU3Ek__BackingField_7();
		return L_0;
	}
}
// System.Void AntiAddictionSdk.OpenSource.AntiAddictionCommonConfig/Builder::set_youngPayLimit(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Builder_set_youngPayLimit_m06957D267F7EFCE3DB38C08528453B10BE5E15C9 (Builder_t23ABFB73E05835CA7F11F21092D5E8652D8D081E * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// internal int youngPayLimit{ get; set;}
		int32_t L_0 = ___value0;
		__this->set_U3CyoungPayLimitU3Ek__BackingField_7(L_0);
		return;
	}
}
// System.Int32 AntiAddictionSdk.OpenSource.AntiAddictionCommonConfig/Builder::get_youngMonthPayLimit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Builder_get_youngMonthPayLimit_m48759AE592414B91631DD166FCA4FD47F6D7EA5A (Builder_t23ABFB73E05835CA7F11F21092D5E8652D8D081E * __this, const RuntimeMethod* method)
{
	{
		// internal int youngMonthPayLimit{ get; set;}
		int32_t L_0 = __this->get_U3CyoungMonthPayLimitU3Ek__BackingField_8();
		return L_0;
	}
}
// System.Void AntiAddictionSdk.OpenSource.AntiAddictionCommonConfig/Builder::set_youngMonthPayLimit(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Builder_set_youngMonthPayLimit_m4D03F733607ABE3DA4C6731BBB3F62D560727B42 (Builder_t23ABFB73E05835CA7F11F21092D5E8652D8D081E * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// internal int youngMonthPayLimit{ get; set;}
		int32_t L_0 = ___value0;
		__this->set_U3CyoungMonthPayLimitU3Ek__BackingField_8(L_0);
		return;
	}
}
// System.Void AntiAddictionSdk.OpenSource.AntiAddictionCommonConfig/Builder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Builder__ctor_m20BB616BF2DA2A621A9E581134AA0D28E06D09C2 (Builder_t23ABFB73E05835CA7F11F21092D5E8652D8D081E * __this, const RuntimeMethod* method)
{
	{
		// public Builder() {
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// this.gusterTime = 60 * 60;
		Builder_set_gusterTime_m6C56393837075581346BD1B2C037F20A36C80541_inline(__this, ((int32_t)3600), /*hidden argument*/NULL);
		// this.nightStrictStart = 22 * 60 * 60;
		Builder_set_nightStrictStart_mB6776A7C84B6803901AF28BC17F8B8BBF53567E6_inline(__this, ((int32_t)79200), /*hidden argument*/NULL);
		// this.nightStrictEnd = 8 * 60 * 60;
		Builder_set_nightStrictEnd_m8ED7A511AE9A55E3E891F8EE79BF0E50A2956BB7_inline(__this, ((int32_t)28800), /*hidden argument*/NULL);
		// this.childCommonTime = 90 * 60;
		Builder_set_childCommonTime_m36439341040F9C5EB7B25BFCFC932AB25988619C_inline(__this, ((int32_t)5400), /*hidden argument*/NULL);
		// this.childHolidayTime = 3 * 60 * 60;
		Builder_set_childHolidayTime_m573ACA5A262CD96115AC2FE747EBE48ACC359486_inline(__this, ((int32_t)10800), /*hidden argument*/NULL);
		// this.teenPayLimit = 50 * 100;
		Builder_set_teenPayLimit_m8B0C3B9EA8C565D322C6BA1898DDEFE2B86468CB_inline(__this, ((int32_t)5000), /*hidden argument*/NULL);
		// this.teenMonthPayLimit = 200 * 100;
		Builder_set_teenMonthPayLimit_m0C94B383082A42811B3C7215986F44299803E048_inline(__this, ((int32_t)20000), /*hidden argument*/NULL);
		// this.youngPayLimit = 100 * 100;
		Builder_set_youngPayLimit_m06957D267F7EFCE3DB38C08528453B10BE5E15C9_inline(__this, ((int32_t)10000), /*hidden argument*/NULL);
		// this.youngMonthPayLimit = 400 * 100;
		Builder_set_youngMonthPayLimit_m4D03F733607ABE3DA4C6731BBB3F62D560727B42_inline(__this, ((int32_t)40000), /*hidden argument*/NULL);
		// }
		return;
	}
}
// AntiAddictionSdk.OpenSource.AntiAddictionCommonConfig/Builder AntiAddictionSdk.OpenSource.AntiAddictionCommonConfig/Builder::GusterTime(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_t23ABFB73E05835CA7F11F21092D5E8652D8D081E * Builder_GusterTime_m27D5FC1ECEB1B84D9A498E9B1A326D11E847C116 (Builder_t23ABFB73E05835CA7F11F21092D5E8652D8D081E * __this, int32_t ___gusterTime0, const RuntimeMethod* method)
{
	{
		// this.gusterTime = gusterTime;
		int32_t L_0 = ___gusterTime0;
		Builder_set_gusterTime_m6C56393837075581346BD1B2C037F20A36C80541_inline(__this, L_0, /*hidden argument*/NULL);
		// return this;
		return __this;
	}
}
// AntiAddictionSdk.OpenSource.AntiAddictionCommonConfig/Builder AntiAddictionSdk.OpenSource.AntiAddictionCommonConfig/Builder::NightStrictStart(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_t23ABFB73E05835CA7F11F21092D5E8652D8D081E * Builder_NightStrictStart_m5694B47B69326B5DF33E5997AB6F443794B97128 (Builder_t23ABFB73E05835CA7F11F21092D5E8652D8D081E * __this, int32_t ___nightStrictStart0, const RuntimeMethod* method)
{
	{
		// this.nightStrictStart = nightStrictStart;
		int32_t L_0 = ___nightStrictStart0;
		Builder_set_nightStrictStart_mB6776A7C84B6803901AF28BC17F8B8BBF53567E6_inline(__this, L_0, /*hidden argument*/NULL);
		// return this;
		return __this;
	}
}
// AntiAddictionSdk.OpenSource.AntiAddictionCommonConfig/Builder AntiAddictionSdk.OpenSource.AntiAddictionCommonConfig/Builder::NightStrictEnd(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_t23ABFB73E05835CA7F11F21092D5E8652D8D081E * Builder_NightStrictEnd_mD107FDC732B3C3B44B3074620747244FF837CE3D (Builder_t23ABFB73E05835CA7F11F21092D5E8652D8D081E * __this, int32_t ___nightStrictEnd0, const RuntimeMethod* method)
{
	{
		// this.nightStrictEnd = nightStrictEnd;
		int32_t L_0 = ___nightStrictEnd0;
		Builder_set_nightStrictEnd_m8ED7A511AE9A55E3E891F8EE79BF0E50A2956BB7_inline(__this, L_0, /*hidden argument*/NULL);
		// return this;
		return __this;
	}
}
// AntiAddictionSdk.OpenSource.AntiAddictionCommonConfig/Builder AntiAddictionSdk.OpenSource.AntiAddictionCommonConfig/Builder::ChildCommonTime(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_t23ABFB73E05835CA7F11F21092D5E8652D8D081E * Builder_ChildCommonTime_m48BEF0C8290289E4525B7A0A76630C3F5DF71117 (Builder_t23ABFB73E05835CA7F11F21092D5E8652D8D081E * __this, int32_t ___childCommonTime0, const RuntimeMethod* method)
{
	{
		// this.childCommonTime = childCommonTime;
		int32_t L_0 = ___childCommonTime0;
		Builder_set_childCommonTime_m36439341040F9C5EB7B25BFCFC932AB25988619C_inline(__this, L_0, /*hidden argument*/NULL);
		// return this;
		return __this;
	}
}
// AntiAddictionSdk.OpenSource.AntiAddictionCommonConfig/Builder AntiAddictionSdk.OpenSource.AntiAddictionCommonConfig/Builder::ChildHolidayTime(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_t23ABFB73E05835CA7F11F21092D5E8652D8D081E * Builder_ChildHolidayTime_mBFAC73C641639A8F54F9E90FBA2F8C853CB5FC23 (Builder_t23ABFB73E05835CA7F11F21092D5E8652D8D081E * __this, int32_t ___childHolidayTime0, const RuntimeMethod* method)
{
	{
		// this.childHolidayTime = childHolidayTime;
		int32_t L_0 = ___childHolidayTime0;
		Builder_set_childHolidayTime_m573ACA5A262CD96115AC2FE747EBE48ACC359486_inline(__this, L_0, /*hidden argument*/NULL);
		// return this;
		return __this;
	}
}
// AntiAddictionSdk.OpenSource.AntiAddictionCommonConfig/Builder AntiAddictionSdk.OpenSource.AntiAddictionCommonConfig/Builder::TeenPayLimit(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_t23ABFB73E05835CA7F11F21092D5E8652D8D081E * Builder_TeenPayLimit_m49E81F303D341738C22F2EEF5EBD72E3A568FD37 (Builder_t23ABFB73E05835CA7F11F21092D5E8652D8D081E * __this, int32_t ___teenPayLimit0, const RuntimeMethod* method)
{
	{
		// this.teenPayLimit = teenPayLimit;
		int32_t L_0 = ___teenPayLimit0;
		Builder_set_teenPayLimit_m8B0C3B9EA8C565D322C6BA1898DDEFE2B86468CB_inline(__this, L_0, /*hidden argument*/NULL);
		// return this;
		return __this;
	}
}
// AntiAddictionSdk.OpenSource.AntiAddictionCommonConfig/Builder AntiAddictionSdk.OpenSource.AntiAddictionCommonConfig/Builder::TeenMonthPayLimit(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_t23ABFB73E05835CA7F11F21092D5E8652D8D081E * Builder_TeenMonthPayLimit_m133685742C2AAB0AFE22EA0685A3184F2C2F9326 (Builder_t23ABFB73E05835CA7F11F21092D5E8652D8D081E * __this, int32_t ___teenMonthPayLimit0, const RuntimeMethod* method)
{
	{
		// this.teenMonthPayLimit = teenMonthPayLimit;
		int32_t L_0 = ___teenMonthPayLimit0;
		Builder_set_teenMonthPayLimit_m0C94B383082A42811B3C7215986F44299803E048_inline(__this, L_0, /*hidden argument*/NULL);
		// return this;
		return __this;
	}
}
// AntiAddictionSdk.OpenSource.AntiAddictionCommonConfig/Builder AntiAddictionSdk.OpenSource.AntiAddictionCommonConfig/Builder::YoungPayLimit(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_t23ABFB73E05835CA7F11F21092D5E8652D8D081E * Builder_YoungPayLimit_m1120BFAB62B7356A4F33B78037AEA1F9155DE988 (Builder_t23ABFB73E05835CA7F11F21092D5E8652D8D081E * __this, int32_t ___youngPayLimit0, const RuntimeMethod* method)
{
	{
		// this.youngPayLimit = youngPayLimit;
		int32_t L_0 = ___youngPayLimit0;
		Builder_set_youngPayLimit_m06957D267F7EFCE3DB38C08528453B10BE5E15C9_inline(__this, L_0, /*hidden argument*/NULL);
		// return this;
		return __this;
	}
}
// AntiAddictionSdk.OpenSource.AntiAddictionCommonConfig/Builder AntiAddictionSdk.OpenSource.AntiAddictionCommonConfig/Builder::YoungMonthPayLimit(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_t23ABFB73E05835CA7F11F21092D5E8652D8D081E * Builder_YoungMonthPayLimit_mAD18CA3B28E96ACB06ABDC9F7D97C6B166836183 (Builder_t23ABFB73E05835CA7F11F21092D5E8652D8D081E * __this, int32_t ___youngMonthPayLimit0, const RuntimeMethod* method)
{
	{
		// this.youngMonthPayLimit = youngMonthPayLimit;
		int32_t L_0 = ___youngMonthPayLimit0;
		Builder_set_youngMonthPayLimit_m4D03F733607ABE3DA4C6731BBB3F62D560727B42_inline(__this, L_0, /*hidden argument*/NULL);
		// return this;
		return __this;
	}
}
// AntiAddictionSdk.OpenSource.AntiAddictionCommonConfig AntiAddictionSdk.OpenSource.AntiAddictionCommonConfig/Builder::Build()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AntiAddictionCommonConfig_tFB2E9080FF6D416F4697BBF3B6CE8BCFECFF41CC * Builder_Build_m49237B6B86BCD1A6F26D0587B25EFA0D82947E80 (Builder_t23ABFB73E05835CA7F11F21092D5E8652D8D081E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AntiAddictionCommonConfig_tFB2E9080FF6D416F4697BBF3B6CE8BCFECFF41CC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new AntiAddictionCommonConfig(this);
		AntiAddictionCommonConfig_tFB2E9080FF6D416F4697BBF3B6CE8BCFECFF41CC * L_0 = (AntiAddictionCommonConfig_tFB2E9080FF6D416F4697BBF3B6CE8BCFECFF41CC *)il2cpp_codegen_object_new(AntiAddictionCommonConfig_tFB2E9080FF6D416F4697BBF3B6CE8BCFECFF41CC_il2cpp_TypeInfo_var);
		AntiAddictionCommonConfig__ctor_m3950F1FF21D6A7278A7B5F28E5D88B5881606A55(L_0, __this, /*hidden argument*/NULL);
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
// System.Boolean AntiAddictionSdk.OpenSource.AntiAddictionFunctionConfig/Builder::get_useSdkRealName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Builder_get_useSdkRealName_m375A65580FE1D1D9B93619F348B4796E3F32C0C7 (Builder_tDB5BA46A3678FD0B0719F961C0D5350B88F23E53 * __this, const RuntimeMethod* method)
{
	{
		// internal bool useSdkRealName{ get; set;}
		bool L_0 = __this->get_U3CuseSdkRealNameU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void AntiAddictionSdk.OpenSource.AntiAddictionFunctionConfig/Builder::set_useSdkRealName(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Builder_set_useSdkRealName_m0AF2A4D5DF9C2A6DCB666E351C0139E2429DD9B6 (Builder_tDB5BA46A3678FD0B0719F961C0D5350B88F23E53 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// internal bool useSdkRealName{ get; set;}
		bool L_0 = ___value0;
		__this->set_U3CuseSdkRealNameU3Ek__BackingField_0(L_0);
		return;
	}
}
// System.Boolean AntiAddictionSdk.OpenSource.AntiAddictionFunctionConfig/Builder::get_useSdkPaymentLimit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Builder_get_useSdkPaymentLimit_m09FDC5F7F8F6E38306C3A657D367379D824C3D02 (Builder_tDB5BA46A3678FD0B0719F961C0D5350B88F23E53 * __this, const RuntimeMethod* method)
{
	{
		// internal bool useSdkPaymentLimit{ get; set;}
		bool L_0 = __this->get_U3CuseSdkPaymentLimitU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void AntiAddictionSdk.OpenSource.AntiAddictionFunctionConfig/Builder::set_useSdkPaymentLimit(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Builder_set_useSdkPaymentLimit_m18443C72D1963F19CB1C7467C48E92CE2630A4E2 (Builder_tDB5BA46A3678FD0B0719F961C0D5350B88F23E53 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// internal bool useSdkPaymentLimit{ get; set;}
		bool L_0 = ___value0;
		__this->set_U3CuseSdkPaymentLimitU3Ek__BackingField_1(L_0);
		return;
	}
}
// System.Boolean AntiAddictionSdk.OpenSource.AntiAddictionFunctionConfig/Builder::get_useSdkOnlineTimeLimit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Builder_get_useSdkOnlineTimeLimit_mB4F1E0128EB73B44E4CE4E8D19C8E130994B3DF7 (Builder_tDB5BA46A3678FD0B0719F961C0D5350B88F23E53 * __this, const RuntimeMethod* method)
{
	{
		// internal bool useSdkOnlineTimeLimit{ get; set;}
		bool L_0 = __this->get_U3CuseSdkOnlineTimeLimitU3Ek__BackingField_2();
		return L_0;
	}
}
// System.Void AntiAddictionSdk.OpenSource.AntiAddictionFunctionConfig/Builder::set_useSdkOnlineTimeLimit(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Builder_set_useSdkOnlineTimeLimit_mF30F414729291E7230206888218A1BFCAEBAFF1E (Builder_tDB5BA46A3678FD0B0719F961C0D5350B88F23E53 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// internal bool useSdkOnlineTimeLimit{ get; set;}
		bool L_0 = ___value0;
		__this->set_U3CuseSdkOnlineTimeLimitU3Ek__BackingField_2(L_0);
		return;
	}
}
// System.Boolean AntiAddictionSdk.OpenSource.AntiAddictionFunctionConfig/Builder::get_showSwitchAccountButton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Builder_get_showSwitchAccountButton_m01A286DC92B933054720986D41F817EEB4376EC5 (Builder_tDB5BA46A3678FD0B0719F961C0D5350B88F23E53 * __this, const RuntimeMethod* method)
{
	{
		// internal bool showSwitchAccountButton{ get; set;}
		bool L_0 = __this->get_U3CshowSwitchAccountButtonU3Ek__BackingField_3();
		return L_0;
	}
}
// System.Void AntiAddictionSdk.OpenSource.AntiAddictionFunctionConfig/Builder::set_showSwitchAccountButton(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Builder_set_showSwitchAccountButton_m456377EE5A355AF410B0690AD17A7EC33456ED19 (Builder_tDB5BA46A3678FD0B0719F961C0D5350B88F23E53 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// internal bool showSwitchAccountButton{ get; set;}
		bool L_0 = ___value0;
		__this->set_U3CshowSwitchAccountButtonU3Ek__BackingField_3(L_0);
		return;
	}
}
// System.Void AntiAddictionSdk.OpenSource.AntiAddictionFunctionConfig/Builder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Builder__ctor_m72ED79CB27C2FC7B10D82FA3EF44B41DE9A2F2F3 (Builder_tDB5BA46A3678FD0B0719F961C0D5350B88F23E53 * __this, const RuntimeMethod* method)
{
	{
		// public Builder() {
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// this.useSdkRealName = true;
		Builder_set_useSdkRealName_m0AF2A4D5DF9C2A6DCB666E351C0139E2429DD9B6_inline(__this, (bool)1, /*hidden argument*/NULL);
		// this.useSdkPaymentLimit = true;
		Builder_set_useSdkPaymentLimit_m18443C72D1963F19CB1C7467C48E92CE2630A4E2_inline(__this, (bool)1, /*hidden argument*/NULL);
		// this.useSdkOnlineTimeLimit = true;
		Builder_set_useSdkOnlineTimeLimit_mF30F414729291E7230206888218A1BFCAEBAFF1E_inline(__this, (bool)1, /*hidden argument*/NULL);
		// this.showSwitchAccountButton = true;
		Builder_set_showSwitchAccountButton_m456377EE5A355AF410B0690AD17A7EC33456ED19_inline(__this, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// AntiAddictionSdk.OpenSource.AntiAddictionFunctionConfig/Builder AntiAddictionSdk.OpenSource.AntiAddictionFunctionConfig/Builder::UseSdkRealName(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_tDB5BA46A3678FD0B0719F961C0D5350B88F23E53 * Builder_UseSdkRealName_mD3D17C92A46CC7071027C2F642819C6336B87888 (Builder_tDB5BA46A3678FD0B0719F961C0D5350B88F23E53 * __this, bool ___useSdkRealName0, const RuntimeMethod* method)
{
	{
		// this.useSdkRealName = useSdkRealName;
		bool L_0 = ___useSdkRealName0;
		Builder_set_useSdkRealName_m0AF2A4D5DF9C2A6DCB666E351C0139E2429DD9B6_inline(__this, L_0, /*hidden argument*/NULL);
		// return this;
		return __this;
	}
}
// AntiAddictionSdk.OpenSource.AntiAddictionFunctionConfig/Builder AntiAddictionSdk.OpenSource.AntiAddictionFunctionConfig/Builder::UseSdkPaymentLimit(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_tDB5BA46A3678FD0B0719F961C0D5350B88F23E53 * Builder_UseSdkPaymentLimit_mF3408CC2CC2A36810955F873F1186DF85BF1F8C1 (Builder_tDB5BA46A3678FD0B0719F961C0D5350B88F23E53 * __this, bool ___useSdkPaymentLimit0, const RuntimeMethod* method)
{
	{
		// this.useSdkPaymentLimit = useSdkPaymentLimit;
		bool L_0 = ___useSdkPaymentLimit0;
		Builder_set_useSdkPaymentLimit_m18443C72D1963F19CB1C7467C48E92CE2630A4E2_inline(__this, L_0, /*hidden argument*/NULL);
		// return this;
		return __this;
	}
}
// AntiAddictionSdk.OpenSource.AntiAddictionFunctionConfig/Builder AntiAddictionSdk.OpenSource.AntiAddictionFunctionConfig/Builder::UseSdkOnlineTimeLimit(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_tDB5BA46A3678FD0B0719F961C0D5350B88F23E53 * Builder_UseSdkOnlineTimeLimit_mBFB25B95F297A16E78FA919EC504102B4B7E372E (Builder_tDB5BA46A3678FD0B0719F961C0D5350B88F23E53 * __this, bool ___useSdkOnlineTimeLimit0, const RuntimeMethod* method)
{
	{
		// this.useSdkOnlineTimeLimit = useSdkOnlineTimeLimit;
		bool L_0 = ___useSdkOnlineTimeLimit0;
		Builder_set_useSdkOnlineTimeLimit_mF30F414729291E7230206888218A1BFCAEBAFF1E_inline(__this, L_0, /*hidden argument*/NULL);
		// return this;
		return __this;
	}
}
// AntiAddictionSdk.OpenSource.AntiAddictionFunctionConfig/Builder AntiAddictionSdk.OpenSource.AntiAddictionFunctionConfig/Builder::ShowSwitchAccountButton(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_tDB5BA46A3678FD0B0719F961C0D5350B88F23E53 * Builder_ShowSwitchAccountButton_mCD8A56D007BF61736B6AF0E287BECB8B0D144CB7 (Builder_tDB5BA46A3678FD0B0719F961C0D5350B88F23E53 * __this, bool ___showSwitchAccountButton0, const RuntimeMethod* method)
{
	{
		// this.showSwitchAccountButton = showSwitchAccountButton;
		bool L_0 = ___showSwitchAccountButton0;
		Builder_set_showSwitchAccountButton_m456377EE5A355AF410B0690AD17A7EC33456ED19_inline(__this, L_0, /*hidden argument*/NULL);
		// return this;
		return __this;
	}
}
// AntiAddictionSdk.OpenSource.AntiAddictionFunctionConfig AntiAddictionSdk.OpenSource.AntiAddictionFunctionConfig/Builder::Build()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AntiAddictionFunctionConfig_t40E5C47E03007344B5CE5A8D78DE06A18336E8E1 * Builder_Build_m00AC1CAF2C25CD28BBC9453E28034F81DE5C99BD (Builder_tDB5BA46A3678FD0B0719F961C0D5350B88F23E53 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AntiAddictionFunctionConfig_t40E5C47E03007344B5CE5A8D78DE06A18336E8E1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new AntiAddictionFunctionConfig(this);
		AntiAddictionFunctionConfig_t40E5C47E03007344B5CE5A8D78DE06A18336E8E1 * L_0 = (AntiAddictionFunctionConfig_t40E5C47E03007344B5CE5A8D78DE06A18336E8E1 *)il2cpp_codegen_object_new(AntiAddictionFunctionConfig_t40E5C47E03007344B5CE5A8D78DE06A18336E8E1_il2cpp_TypeInfo_var);
		AntiAddictionFunctionConfig__ctor_m1C14136DDD98DCF36FD6465710A1344FD4C40B8E(L_0, __this, /*hidden argument*/NULL);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void MainBehaviour/PrivacyAgreeListener::.ctor(MainBehaviour)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PrivacyAgreeListener__ctor_m8D597215B33E7D3C071876D7BA69DF3588679700 (PrivacyAgreeListener_t7E277E2FBF137E9ABC871EE180DD7FFC9FDE5DEA * __this, MainBehaviour_tDE09AB0E3B7AB47BEC0D8229B68A94AA3FE0DEC6 * ___behaviour0, const RuntimeMethod* method)
{
	{
		// public PrivacyAgreeListener(MainBehaviour behaviour) {
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// this.behaviour = behaviour;
		MainBehaviour_tDE09AB0E3B7AB47BEC0D8229B68A94AA3FE0DEC6 * L_0 = ___behaviour0;
		__this->set_behaviour_0(L_0);
		// }
		return;
	}
}
// System.Void MainBehaviour/PrivacyAgreeListener::OnUserAgree()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PrivacyAgreeListener_OnUserAgree_mB6831F34C0CA46288EDE19FA4FD8BE9B38E1D995 (PrivacyAgreeListener_t7E277E2FBF137E9ABC871EE180DD7FFC9FDE5DEA * __this, const RuntimeMethod* method)
{
	{
		// behaviour.DealDialogAgreeResult(true);
		MainBehaviour_tDE09AB0E3B7AB47BEC0D8229B68A94AA3FE0DEC6 * L_0 = __this->get_behaviour_0();
		NullCheck(L_0);
		MainBehaviour_DealDialogAgreeResult_m16741BD575297CAEBAA7ADD27EDC6591D5FD09C9(L_0, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MainBehaviour/PrivacyAgreeListener::OnUserDisagree()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PrivacyAgreeListener_OnUserDisagree_m82CC26BCD761F8E9CF5993A348F4EE41147BAF8C (PrivacyAgreeListener_t7E277E2FBF137E9ABC871EE180DD7FFC9FDE5DEA * __this, const RuntimeMethod* method)
{
	{
		// behaviour.DealDialogAgreeResult(false);
		MainBehaviour_tDE09AB0E3B7AB47BEC0D8229B68A94AA3FE0DEC6 * L_0 = __this->get_behaviour_0();
		NullCheck(L_0);
		MainBehaviour_DealDialogAgreeResult_m16741BD575297CAEBAA7ADD27EDC6591D5FD09C9(L_0, (bool)0, /*hidden argument*/NULL);
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_TGCPrivacyAgreeCallback_t3C41917D9CA51071333995D60FE85E6B410437DA (TGCPrivacyAgreeCallback_t3C41917D9CA51071333995D60FE85E6B410437DA * __this, intptr_t ___helperClient0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___helperClient0);

}
// System.Void TGCenterSdk.Platforms.iOS.PrivacyPolicyHelperClient/TGCPrivacyAgreeCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TGCPrivacyAgreeCallback__ctor_m0C3B960580D95B2B3EB822B847A777ACE75A9B5C (TGCPrivacyAgreeCallback_t3C41917D9CA51071333995D60FE85E6B410437DA * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void TGCenterSdk.Platforms.iOS.PrivacyPolicyHelperClient/TGCPrivacyAgreeCallback::Invoke(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TGCPrivacyAgreeCallback_Invoke_m35C07D20BF926CFA6395F05E898444BF6162A448 (TGCPrivacyAgreeCallback_t3C41917D9CA51071333995D60FE85E6B410437DA * __this, intptr_t ___helperClient0, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___helperClient0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___helperClient0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< intptr_t >::Invoke(targetMethod, targetThis, ___helperClient0);
					else
						GenericVirtActionInvoker1< intptr_t >::Invoke(targetMethod, targetThis, ___helperClient0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___helperClient0);
					else
						VirtActionInvoker1< intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___helperClient0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___helperClient0, targetMethod);
			}
		}
	}
}
// System.IAsyncResult TGCenterSdk.Platforms.iOS.PrivacyPolicyHelperClient/TGCPrivacyAgreeCallback::BeginInvoke(System.IntPtr,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TGCPrivacyAgreeCallback_BeginInvoke_mD77AFF5F9EB9705CA3F0E5EE6DCD2135085ABEEB (TGCPrivacyAgreeCallback_t3C41917D9CA51071333995D60FE85E6B410437DA * __this, intptr_t ___helperClient0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___helperClient0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Void TGCenterSdk.Platforms.iOS.PrivacyPolicyHelperClient/TGCPrivacyAgreeCallback::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TGCPrivacyAgreeCallback_EndInvoke_mF982E530AF157921EDD15F53578C3E6B5BC8BFD6 (TGCPrivacyAgreeCallback_t3C41917D9CA51071333995D60FE85E6B410437DA * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_TGCPrivacyDisagreeCallback_t87303D0856E11528F24B5D65FE37D8EB115CEB9E (TGCPrivacyDisagreeCallback_t87303D0856E11528F24B5D65FE37D8EB115CEB9E * __this, intptr_t ___helperClient0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___helperClient0);

}
// System.Void TGCenterSdk.Platforms.iOS.PrivacyPolicyHelperClient/TGCPrivacyDisagreeCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TGCPrivacyDisagreeCallback__ctor_m45DFB8314F222674222C3F1626220266542C48FC (TGCPrivacyDisagreeCallback_t87303D0856E11528F24B5D65FE37D8EB115CEB9E * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void TGCenterSdk.Platforms.iOS.PrivacyPolicyHelperClient/TGCPrivacyDisagreeCallback::Invoke(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TGCPrivacyDisagreeCallback_Invoke_m0F5C943D4AB41820C4BB5747A9F6B0DBEBA462E3 (TGCPrivacyDisagreeCallback_t87303D0856E11528F24B5D65FE37D8EB115CEB9E * __this, intptr_t ___helperClient0, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___helperClient0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___helperClient0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< intptr_t >::Invoke(targetMethod, targetThis, ___helperClient0);
					else
						GenericVirtActionInvoker1< intptr_t >::Invoke(targetMethod, targetThis, ___helperClient0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___helperClient0);
					else
						VirtActionInvoker1< intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___helperClient0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___helperClient0, targetMethod);
			}
		}
	}
}
// System.IAsyncResult TGCenterSdk.Platforms.iOS.PrivacyPolicyHelperClient/TGCPrivacyDisagreeCallback::BeginInvoke(System.IntPtr,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TGCPrivacyDisagreeCallback_BeginInvoke_m60E2BCC9E8D7905C3B062B909206380A188330C0 (TGCPrivacyDisagreeCallback_t87303D0856E11528F24B5D65FE37D8EB115CEB9E * __this, intptr_t ___helperClient0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___helperClient0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Void TGCenterSdk.Platforms.iOS.PrivacyPolicyHelperClient/TGCPrivacyDisagreeCallback::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TGCPrivacyDisagreeCallback_EndInvoke_mC2CC3D064BA788C886A8B4D5E59C634B0A61AA5F (TGCPrivacyDisagreeCallback_t87303D0856E11528F24B5D65FE37D8EB115CEB9E * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool AntiAddictionFunctionConfig_get_useSdkRealName_m2B993B5E50E6A15CEEEBFCB33D78A81B1F359D6A_inline (AntiAddictionFunctionConfig_t40E5C47E03007344B5CE5A8D78DE06A18336E8E1 * __this, const RuntimeMethod* method)
{
	{
		// public bool useSdkRealName{ get; set;}
		bool L_0 = __this->get_U3CuseSdkRealNameU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool AntiAddictionFunctionConfig_get_useSdkPaymentLimit_mF5153FB6074753730F6357F8215E2C0CD2264702_inline (AntiAddictionFunctionConfig_t40E5C47E03007344B5CE5A8D78DE06A18336E8E1 * __this, const RuntimeMethod* method)
{
	{
		// public bool useSdkPaymentLimit{ get; set;}
		bool L_0 = __this->get_U3CuseSdkPaymentLimitU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool AntiAddictionFunctionConfig_get_useSdkOnlineTimeLimit_m6868BE409709113E71232AE928CC48EB9417EBA0_inline (AntiAddictionFunctionConfig_t40E5C47E03007344B5CE5A8D78DE06A18336E8E1 * __this, const RuntimeMethod* method)
{
	{
		// public bool useSdkOnlineTimeLimit{ get; set;}
		bool L_0 = __this->get_U3CuseSdkOnlineTimeLimitU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool AntiAddictionFunctionConfig_get_showSwitchAccountButton_m5B2D7AB2EB6D2AB689E5FDFFBBB53E6F6736A0CF_inline (AntiAddictionFunctionConfig_t40E5C47E03007344B5CE5A8D78DE06A18336E8E1 * __this, const RuntimeMethod* method)
{
	{
		// public bool showSwitchAccountButton{ get; set;}
		bool L_0 = __this->get_U3CshowSwitchAccountButtonU3Ek__BackingField_3();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t AntiAddictionCommonConfig_get_gusterTime_m97F62C5654BAEDC31CB3BBB2398A3F7043CCE4C5_inline (AntiAddictionCommonConfig_tFB2E9080FF6D416F4697BBF3B6CE8BCFECFF41CC * __this, const RuntimeMethod* method)
{
	{
		// public int gusterTime{ get; set;}
		int32_t L_0 = __this->get_U3CgusterTimeU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t AntiAddictionCommonConfig_get_nightStrictStart_mB00FDD33B154F1C055967C97174683C1663DEE95_inline (AntiAddictionCommonConfig_tFB2E9080FF6D416F4697BBF3B6CE8BCFECFF41CC * __this, const RuntimeMethod* method)
{
	{
		// public int nightStrictStart{ get; set;}
		int32_t L_0 = __this->get_U3CnightStrictStartU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t AntiAddictionCommonConfig_get_nightStrictEnd_m7224D1E7860A2F15354859A7BB5F8B89D6135D46_inline (AntiAddictionCommonConfig_tFB2E9080FF6D416F4697BBF3B6CE8BCFECFF41CC * __this, const RuntimeMethod* method)
{
	{
		// public int nightStrictEnd{ get; set;}
		int32_t L_0 = __this->get_U3CnightStrictEndU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t AntiAddictionCommonConfig_get_childCommonTime_m2573A1F8EE1B7DA9551587105636C60CE1AC24C5_inline (AntiAddictionCommonConfig_tFB2E9080FF6D416F4697BBF3B6CE8BCFECFF41CC * __this, const RuntimeMethod* method)
{
	{
		// public int childCommonTime{ get; set;}
		int32_t L_0 = __this->get_U3CchildCommonTimeU3Ek__BackingField_3();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t AntiAddictionCommonConfig_get_childHolidayTime_m4EF339B9D2E9630EE205D1E301EBA9D74269512E_inline (AntiAddictionCommonConfig_tFB2E9080FF6D416F4697BBF3B6CE8BCFECFF41CC * __this, const RuntimeMethod* method)
{
	{
		// public int childHolidayTime{ get; set;}
		int32_t L_0 = __this->get_U3CchildHolidayTimeU3Ek__BackingField_4();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t AntiAddictionCommonConfig_get_teenPayLimit_mC1B351F9866256C55FC8954569F647FF3C1D391A_inline (AntiAddictionCommonConfig_tFB2E9080FF6D416F4697BBF3B6CE8BCFECFF41CC * __this, const RuntimeMethod* method)
{
	{
		// public int teenPayLimit{ get; set;}
		int32_t L_0 = __this->get_U3CteenPayLimitU3Ek__BackingField_5();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t AntiAddictionCommonConfig_get_teenMonthPayLimit_mAA105293E331368F58DD74F647C1130392742C03_inline (AntiAddictionCommonConfig_tFB2E9080FF6D416F4697BBF3B6CE8BCFECFF41CC * __this, const RuntimeMethod* method)
{
	{
		// public int teenMonthPayLimit{ get; set;}
		int32_t L_0 = __this->get_U3CteenMonthPayLimitU3Ek__BackingField_6();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t AntiAddictionCommonConfig_get_youngPayLimit_mB212A13FFAFC8DF489E84D5030A75FE2994B88D0_inline (AntiAddictionCommonConfig_tFB2E9080FF6D416F4697BBF3B6CE8BCFECFF41CC * __this, const RuntimeMethod* method)
{
	{
		// public int youngPayLimit{ get; set;}
		int32_t L_0 = __this->get_U3CyoungPayLimitU3Ek__BackingField_7();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t AntiAddictionCommonConfig_get_youngMonthPayLimit_mC6CD61276FFD9DFA2572FD1A3893374E0E0D21B2_inline (AntiAddictionCommonConfig_tFB2E9080FF6D416F4697BBF3B6CE8BCFECFF41CC * __this, const RuntimeMethod* method)
{
	{
		// public int youngMonthPayLimit{ get; set;}
		int32_t L_0 = __this->get_U3CyoungMonthPayLimitU3Ek__BackingField_8();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Builder_get_gusterTime_mBE1D4FBD0AC9E997EF672842D969FF4824BA155D_inline (Builder_t23ABFB73E05835CA7F11F21092D5E8652D8D081E * __this, const RuntimeMethod* method)
{
	{
		// internal int gusterTime{ get; set;}
		int32_t L_0 = __this->get_U3CgusterTimeU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AntiAddictionCommonConfig_set_gusterTime_m301ADA09A6CDE73737817329CCB45F214DA20BE1_inline (AntiAddictionCommonConfig_tFB2E9080FF6D416F4697BBF3B6CE8BCFECFF41CC * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int gusterTime{ get; set;}
		int32_t L_0 = ___value0;
		__this->set_U3CgusterTimeU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Builder_get_nightStrictStart_m5BECFE51FB4A529782DB60A66C08BBEA9B4E012D_inline (Builder_t23ABFB73E05835CA7F11F21092D5E8652D8D081E * __this, const RuntimeMethod* method)
{
	{
		// internal int nightStrictStart{ get; set;}
		int32_t L_0 = __this->get_U3CnightStrictStartU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AntiAddictionCommonConfig_set_nightStrictStart_m5034B338676721179AD37BFB8F725FACE8066E5F_inline (AntiAddictionCommonConfig_tFB2E9080FF6D416F4697BBF3B6CE8BCFECFF41CC * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int nightStrictStart{ get; set;}
		int32_t L_0 = ___value0;
		__this->set_U3CnightStrictStartU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Builder_get_nightStrictEnd_mEF50A39C5C4CA417E38CCF3C20C39C1D79C2326A_inline (Builder_t23ABFB73E05835CA7F11F21092D5E8652D8D081E * __this, const RuntimeMethod* method)
{
	{
		// internal int nightStrictEnd{ get; set;}
		int32_t L_0 = __this->get_U3CnightStrictEndU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AntiAddictionCommonConfig_set_nightStrictEnd_m9AFD77B49B44593F2827E39ECA96894D510B8CD7_inline (AntiAddictionCommonConfig_tFB2E9080FF6D416F4697BBF3B6CE8BCFECFF41CC * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int nightStrictEnd{ get; set;}
		int32_t L_0 = ___value0;
		__this->set_U3CnightStrictEndU3Ek__BackingField_2(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Builder_get_childCommonTime_mF77BC95A656CB982A103D280FCBD0BF7D229E41E_inline (Builder_t23ABFB73E05835CA7F11F21092D5E8652D8D081E * __this, const RuntimeMethod* method)
{
	{
		// internal int childCommonTime{ get; set;}
		int32_t L_0 = __this->get_U3CchildCommonTimeU3Ek__BackingField_3();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AntiAddictionCommonConfig_set_childCommonTime_mE7404312305C64D0A717178D41EF5A911E4C1923_inline (AntiAddictionCommonConfig_tFB2E9080FF6D416F4697BBF3B6CE8BCFECFF41CC * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int childCommonTime{ get; set;}
		int32_t L_0 = ___value0;
		__this->set_U3CchildCommonTimeU3Ek__BackingField_3(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Builder_get_childHolidayTime_m0921784655E54C8DEC175F5AB18FB2C289B2E2BC_inline (Builder_t23ABFB73E05835CA7F11F21092D5E8652D8D081E * __this, const RuntimeMethod* method)
{
	{
		// internal int childHolidayTime{ get; set;}
		int32_t L_0 = __this->get_U3CchildHolidayTimeU3Ek__BackingField_4();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AntiAddictionCommonConfig_set_childHolidayTime_m7A4C5AFFDB2E8A3CBA188881A8789B7DC2361E41_inline (AntiAddictionCommonConfig_tFB2E9080FF6D416F4697BBF3B6CE8BCFECFF41CC * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int childHolidayTime{ get; set;}
		int32_t L_0 = ___value0;
		__this->set_U3CchildHolidayTimeU3Ek__BackingField_4(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Builder_get_teenPayLimit_mB43D99A68624D1FE4CC8F2B636921DE645C950B8_inline (Builder_t23ABFB73E05835CA7F11F21092D5E8652D8D081E * __this, const RuntimeMethod* method)
{
	{
		// internal int teenPayLimit{ get; set;}
		int32_t L_0 = __this->get_U3CteenPayLimitU3Ek__BackingField_5();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AntiAddictionCommonConfig_set_teenPayLimit_m2FE3A8D996DDE73AB50FB435B9A562A6003D4314_inline (AntiAddictionCommonConfig_tFB2E9080FF6D416F4697BBF3B6CE8BCFECFF41CC * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int teenPayLimit{ get; set;}
		int32_t L_0 = ___value0;
		__this->set_U3CteenPayLimitU3Ek__BackingField_5(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Builder_get_teenMonthPayLimit_mDA52D5129A614D37736CF081E1E706D73C5F8A0F_inline (Builder_t23ABFB73E05835CA7F11F21092D5E8652D8D081E * __this, const RuntimeMethod* method)
{
	{
		// internal int teenMonthPayLimit{ get; set;}
		int32_t L_0 = __this->get_U3CteenMonthPayLimitU3Ek__BackingField_6();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AntiAddictionCommonConfig_set_teenMonthPayLimit_m5354072F04EC31E23785E01013E32AC9AC7FE37E_inline (AntiAddictionCommonConfig_tFB2E9080FF6D416F4697BBF3B6CE8BCFECFF41CC * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int teenMonthPayLimit{ get; set;}
		int32_t L_0 = ___value0;
		__this->set_U3CteenMonthPayLimitU3Ek__BackingField_6(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Builder_get_youngPayLimit_mBB76B75B2FC238BBF1D9C3EC84DACE4EEAD34BAF_inline (Builder_t23ABFB73E05835CA7F11F21092D5E8652D8D081E * __this, const RuntimeMethod* method)
{
	{
		// internal int youngPayLimit{ get; set;}
		int32_t L_0 = __this->get_U3CyoungPayLimitU3Ek__BackingField_7();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AntiAddictionCommonConfig_set_youngPayLimit_mA7844C408091C806E7B1664098E55946A1699AFD_inline (AntiAddictionCommonConfig_tFB2E9080FF6D416F4697BBF3B6CE8BCFECFF41CC * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int youngPayLimit{ get; set;}
		int32_t L_0 = ___value0;
		__this->set_U3CyoungPayLimitU3Ek__BackingField_7(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Builder_get_youngMonthPayLimit_m48759AE592414B91631DD166FCA4FD47F6D7EA5A_inline (Builder_t23ABFB73E05835CA7F11F21092D5E8652D8D081E * __this, const RuntimeMethod* method)
{
	{
		// internal int youngMonthPayLimit{ get; set;}
		int32_t L_0 = __this->get_U3CyoungMonthPayLimitU3Ek__BackingField_8();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AntiAddictionCommonConfig_set_youngMonthPayLimit_m54A49A7275BDC7328DDE8FCBEEFFB091F9EF8BA1_inline (AntiAddictionCommonConfig_tFB2E9080FF6D416F4697BBF3B6CE8BCFECFF41CC * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int youngMonthPayLimit{ get; set;}
		int32_t L_0 = ___value0;
		__this->set_U3CyoungMonthPayLimitU3Ek__BackingField_8(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Builder_get_useSdkRealName_m375A65580FE1D1D9B93619F348B4796E3F32C0C7_inline (Builder_tDB5BA46A3678FD0B0719F961C0D5350B88F23E53 * __this, const RuntimeMethod* method)
{
	{
		// internal bool useSdkRealName{ get; set;}
		bool L_0 = __this->get_U3CuseSdkRealNameU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AntiAddictionFunctionConfig_set_useSdkRealName_m3208F98CB513C358EC8D4FEB7A25946042B47B12_inline (AntiAddictionFunctionConfig_t40E5C47E03007344B5CE5A8D78DE06A18336E8E1 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool useSdkRealName{ get; set;}
		bool L_0 = ___value0;
		__this->set_U3CuseSdkRealNameU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Builder_get_useSdkPaymentLimit_m09FDC5F7F8F6E38306C3A657D367379D824C3D02_inline (Builder_tDB5BA46A3678FD0B0719F961C0D5350B88F23E53 * __this, const RuntimeMethod* method)
{
	{
		// internal bool useSdkPaymentLimit{ get; set;}
		bool L_0 = __this->get_U3CuseSdkPaymentLimitU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AntiAddictionFunctionConfig_set_useSdkPaymentLimit_m59BB6A1D0F0A4F6F23395BBD0A38E9EB7BF2B8D3_inline (AntiAddictionFunctionConfig_t40E5C47E03007344B5CE5A8D78DE06A18336E8E1 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool useSdkPaymentLimit{ get; set;}
		bool L_0 = ___value0;
		__this->set_U3CuseSdkPaymentLimitU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Builder_get_useSdkOnlineTimeLimit_mB4F1E0128EB73B44E4CE4E8D19C8E130994B3DF7_inline (Builder_tDB5BA46A3678FD0B0719F961C0D5350B88F23E53 * __this, const RuntimeMethod* method)
{
	{
		// internal bool useSdkOnlineTimeLimit{ get; set;}
		bool L_0 = __this->get_U3CuseSdkOnlineTimeLimitU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AntiAddictionFunctionConfig_set_useSdkOnlineTimeLimit_m8F953FB092167CCD963865B4E3772D54EC713B8E_inline (AntiAddictionFunctionConfig_t40E5C47E03007344B5CE5A8D78DE06A18336E8E1 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool useSdkOnlineTimeLimit{ get; set;}
		bool L_0 = ___value0;
		__this->set_U3CuseSdkOnlineTimeLimitU3Ek__BackingField_2(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Builder_get_showSwitchAccountButton_m01A286DC92B933054720986D41F817EEB4376EC5_inline (Builder_tDB5BA46A3678FD0B0719F961C0D5350B88F23E53 * __this, const RuntimeMethod* method)
{
	{
		// internal bool showSwitchAccountButton{ get; set;}
		bool L_0 = __this->get_U3CshowSwitchAccountButtonU3Ek__BackingField_3();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AntiAddictionFunctionConfig_set_showSwitchAccountButton_m81E1AC84F7DCBE2BDACC1AEF7176959ACFF7AA6E_inline (AntiAddictionFunctionConfig_t40E5C47E03007344B5CE5A8D78DE06A18336E8E1 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool showSwitchAccountButton{ get; set;}
		bool L_0 = ___value0;
		__this->set_U3CshowSwitchAccountButtonU3Ek__BackingField_3(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TGCenterClient_t852F76F73B20352EC6238AC9B9F507DF071CF9B0 * TGCenterClient_get_Instance_m58BCC70F95FF029755E79A92DAB78A0EBFBF9239_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TGCenterClient_t852F76F73B20352EC6238AC9B9F507DF071CF9B0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return instance;
		IL2CPP_RUNTIME_CLASS_INIT(TGCenterClient_t852F76F73B20352EC6238AC9B9F507DF071CF9B0_il2cpp_TypeInfo_var);
		TGCenterClient_t852F76F73B20352EC6238AC9B9F507DF071CF9B0 * L_0 = ((TGCenterClient_t852F76F73B20352EC6238AC9B9F507DF071CF9B0_StaticFields*)il2cpp_codegen_static_fields_for(TGCenterClient_t852F76F73B20352EC6238AC9B9F507DF071CF9B0_il2cpp_TypeInfo_var))->get_instance_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TGCenterClient_t3FFBC93E175D733E5FF8A30D13354AED72C0FCC9 * TGCenterClient_get_Instance_m3B9AB680B87D6BF5B90C8E7928F77CF79309DADC_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TGCenterClient_t3FFBC93E175D733E5FF8A30D13354AED72C0FCC9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return instance;
		IL2CPP_RUNTIME_CLASS_INIT(TGCenterClient_t3FFBC93E175D733E5FF8A30D13354AED72C0FCC9_il2cpp_TypeInfo_var);
		TGCenterClient_t3FFBC93E175D733E5FF8A30D13354AED72C0FCC9 * L_0 = ((TGCenterClient_t3FFBC93E175D733E5FF8A30D13354AED72C0FCC9_StaticFields*)il2cpp_codegen_static_fields_for(TGCenterClient_t3FFBC93E175D733E5FF8A30D13354AED72C0FCC9_il2cpp_TypeInfo_var))->get_instance_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Day1Retention_set_RetentionType_m0EF7541CA83C4D076AE9CB8EC2219236279C5845_inline (Day1Retention_t5C5C48267E7FA734CD696706DCF7C0DC29025BB3 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public RetentionTypes RetentionType { get; private set; }
		int32_t L_0 = ___value0;
		__this->set_U3CRetentionTypeU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Day1Retention_set_StartCount_m48A6E5103B2704C5FF294851453992E486AF8CF0_inline (Day1Retention_t5C5C48267E7FA734CD696706DCF7C0DC29025BB3 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int StartCount  { get; private set; }
		int32_t L_0 = ___value0;
		__this->set_U3CStartCountU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Day1Retention_set_EndCount_mF67F8A9E6F19E5B6671FCA2903CE611E3198C238_inline (Day1Retention_t5C5C48267E7FA734CD696706DCF7C0DC29025BB3 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int EndCount  { get; private set; }
		int32_t L_0 = ___value0;
		__this->set_U3CEndCountU3Ek__BackingField_2(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR PrivacyPolicyHelper_t5983E6361B35F6389228D994C018B16993468EA3 * PrivacyPolicyHelper_get_Instance_mA461052DDD65EE4DF0DA5FD90B324F91E236000F_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PrivacyPolicyHelper_t5983E6361B35F6389228D994C018B16993468EA3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return instance;
		IL2CPP_RUNTIME_CLASS_INIT(PrivacyPolicyHelper_t5983E6361B35F6389228D994C018B16993468EA3_il2cpp_TypeInfo_var);
		PrivacyPolicyHelper_t5983E6361B35F6389228D994C018B16993468EA3 * L_0 = ((PrivacyPolicyHelper_t5983E6361B35F6389228D994C018B16993468EA3_StaticFields*)il2cpp_codegen_static_fields_for(PrivacyPolicyHelper_t5983E6361B35F6389228D994C018B16993468EA3_il2cpp_TypeInfo_var))->get_instance_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Day1Retention_get_RetentionType_mD0C2642097219905B831A051D675EE715FF6A4B5_inline (Day1Retention_t5C5C48267E7FA734CD696706DCF7C0DC29025BB3 * __this, const RuntimeMethod* method)
{
	{
		// public RetentionTypes RetentionType { get; private set; }
		int32_t L_0 = __this->get_U3CRetentionTypeU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Day1Retention_get_StartCount_mC49554BBEBB0F46D8B1DBBD920E195382086B189_inline (Day1Retention_t5C5C48267E7FA734CD696706DCF7C0DC29025BB3 * __this, const RuntimeMethod* method)
{
	{
		// public int StartCount  { get; private set; }
		int32_t L_0 = __this->get_U3CStartCountU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Day1Retention_get_EndCount_m5DB2D2F36A24B0E04F4BF7BAE1E195689C896556_inline (Day1Retention_t5C5C48267E7FA734CD696706DCF7C0DC29025BB3 * __this, const RuntimeMethod* method)
{
	{
		// public int EndCount  { get; private set; }
		int32_t L_0 = __this->get_U3CEndCountU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Builder_set_gusterTime_m6C56393837075581346BD1B2C037F20A36C80541_inline (Builder_t23ABFB73E05835CA7F11F21092D5E8652D8D081E * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// internal int gusterTime{ get; set;}
		int32_t L_0 = ___value0;
		__this->set_U3CgusterTimeU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Builder_set_nightStrictStart_mB6776A7C84B6803901AF28BC17F8B8BBF53567E6_inline (Builder_t23ABFB73E05835CA7F11F21092D5E8652D8D081E * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// internal int nightStrictStart{ get; set;}
		int32_t L_0 = ___value0;
		__this->set_U3CnightStrictStartU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Builder_set_nightStrictEnd_m8ED7A511AE9A55E3E891F8EE79BF0E50A2956BB7_inline (Builder_t23ABFB73E05835CA7F11F21092D5E8652D8D081E * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// internal int nightStrictEnd{ get; set;}
		int32_t L_0 = ___value0;
		__this->set_U3CnightStrictEndU3Ek__BackingField_2(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Builder_set_childCommonTime_m36439341040F9C5EB7B25BFCFC932AB25988619C_inline (Builder_t23ABFB73E05835CA7F11F21092D5E8652D8D081E * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// internal int childCommonTime{ get; set;}
		int32_t L_0 = ___value0;
		__this->set_U3CchildCommonTimeU3Ek__BackingField_3(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Builder_set_childHolidayTime_m573ACA5A262CD96115AC2FE747EBE48ACC359486_inline (Builder_t23ABFB73E05835CA7F11F21092D5E8652D8D081E * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// internal int childHolidayTime{ get; set;}
		int32_t L_0 = ___value0;
		__this->set_U3CchildHolidayTimeU3Ek__BackingField_4(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Builder_set_teenPayLimit_m8B0C3B9EA8C565D322C6BA1898DDEFE2B86468CB_inline (Builder_t23ABFB73E05835CA7F11F21092D5E8652D8D081E * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// internal int teenPayLimit{ get; set;}
		int32_t L_0 = ___value0;
		__this->set_U3CteenPayLimitU3Ek__BackingField_5(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Builder_set_teenMonthPayLimit_m0C94B383082A42811B3C7215986F44299803E048_inline (Builder_t23ABFB73E05835CA7F11F21092D5E8652D8D081E * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// internal int teenMonthPayLimit{ get; set;}
		int32_t L_0 = ___value0;
		__this->set_U3CteenMonthPayLimitU3Ek__BackingField_6(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Builder_set_youngPayLimit_m06957D267F7EFCE3DB38C08528453B10BE5E15C9_inline (Builder_t23ABFB73E05835CA7F11F21092D5E8652D8D081E * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// internal int youngPayLimit{ get; set;}
		int32_t L_0 = ___value0;
		__this->set_U3CyoungPayLimitU3Ek__BackingField_7(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Builder_set_youngMonthPayLimit_m4D03F733607ABE3DA4C6731BBB3F62D560727B42_inline (Builder_t23ABFB73E05835CA7F11F21092D5E8652D8D081E * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// internal int youngMonthPayLimit{ get; set;}
		int32_t L_0 = ___value0;
		__this->set_U3CyoungMonthPayLimitU3Ek__BackingField_8(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Builder_set_useSdkRealName_m0AF2A4D5DF9C2A6DCB666E351C0139E2429DD9B6_inline (Builder_tDB5BA46A3678FD0B0719F961C0D5350B88F23E53 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// internal bool useSdkRealName{ get; set;}
		bool L_0 = ___value0;
		__this->set_U3CuseSdkRealNameU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Builder_set_useSdkPaymentLimit_m18443C72D1963F19CB1C7467C48E92CE2630A4E2_inline (Builder_tDB5BA46A3678FD0B0719F961C0D5350B88F23E53 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// internal bool useSdkPaymentLimit{ get; set;}
		bool L_0 = ___value0;
		__this->set_U3CuseSdkPaymentLimitU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Builder_set_useSdkOnlineTimeLimit_mF30F414729291E7230206888218A1BFCAEBAFF1E_inline (Builder_tDB5BA46A3678FD0B0719F961C0D5350B88F23E53 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// internal bool useSdkOnlineTimeLimit{ get; set;}
		bool L_0 = ___value0;
		__this->set_U3CuseSdkOnlineTimeLimitU3Ek__BackingField_2(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Builder_set_showSwitchAccountButton_m456377EE5A355AF410B0690AD17A7EC33456ED19_inline (Builder_tDB5BA46A3678FD0B0719F961C0D5350B88F23E53 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// internal bool showSwitchAccountButton{ get; set;}
		bool L_0 = ___value0;
		__this->set_U3CshowSwitchAccountButtonU3Ek__BackingField_3(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_gshared_inline (const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = ((EmptyArray_1_tBF73225DFA890366D579424FE8F40073BF9FBAD4_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Value_0();
		return (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_0;
	}
}
