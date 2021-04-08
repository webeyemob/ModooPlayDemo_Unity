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
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
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

// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// UnityEngine.AndroidJavaClass
struct AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4;
// UnityEngine.AndroidJavaObject
struct AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E;
// UnityEngine.AndroidJavaProxy
struct AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF;
// AntiAddictionSdk.Platforms.Android.AntiAddictionClient
struct AntiAddictionClient_tBCBB7C82C199D2B807123ADAF494CD2B3620CD8D;
// AntiAddictionSdk.Platforms.iOS.AntiAddictionClient
struct AntiAddictionClient_t11FAEEBC7A7F56BE40C3C3E4E3477728AE7CD6C2;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// TGCenterSdk.Api.Day1Retention
struct Day1Retention_t5C5C48267E7FA734CD696706DCF7C0DC29025BB3;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// AntiAddictionSdk.Common.DummyAntiAddictionClient
struct DummyAntiAddictionClient_t4FAEB40FC69FAC8F29E2A2EBAC992D648E769D39;
// TGCenterSdk.Common.DummyPrivacyPolicyHelperClient
struct DummyPrivacyPolicyHelperClient_tA760F3FD14C238520B359076F8F2943A0396C839;
// TGCenterSdk.Common.DummyTGCenterClient
struct DummyTGCenterClient_tA73AF5E21738B8A4677C62820E0A64DDF318CCE1;
// AntiAddictionSdk.Platforms.iOS.Externs
struct Externs_t282F82D8F0B7FC45A9A7D40622EC4361F1FA2F9D;
// TGCenterSdk.Platforms.iOS.Externs
struct Externs_t3134EC717B9115532628B1F0D531CAC4F8834D1E;
// UnityEngine.GUIStyle
struct GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726;
// UnityEngine.GUIStyleState
struct GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9;
// UnityEngine.GlobalJavaObjectRef
struct GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289;
// AntiAddictionSdk.Common.IAntiAddictionClient
struct IAntiAddictionClient_t8A81CDB2D72E0FF2CD586E1B10B7BC39958AEDAA;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// AntiAddictionSdk.Common.ILimitTipClient
struct ILimitTipClient_t0053FECC25F935132ECA594C001FC54B11B27CC6;
// TGCenterSdk.Common.IPrivacyPolicyHelperClient
struct IPrivacyPolicyHelperClient_tDA8C8969D9B463BAEF2694E4E8D1EBDB10C932ED;
// AntiAddictionSdk.Common.IRealNameResultClient
struct IRealNameResultClient_tB4462896A3DB7030B89039A41B9D030A2A1E3B1F;
// TGCenterSdk.Common.ITGCenterClient
struct ITGCenterClient_t9D68A2BCB63E41CEBF76EF6BE18A406C70808A82;
// AntiAddictionSdk.Common.ITimeLimitClient
struct ITimeLimitClient_tA9CE9CF36A023176694DF43EEE99A5CF51207AF3;
// AntiAddictionSdk.Common.IUserClient
struct IUserClient_tE3A4C0F10567655FDB8B1194479A749040B1F619;
// TGCenterSdk.Api.InitConfig
struct InitConfig_tB77587871EE04B53CB86593F9C7461FF0B143A47;
// AntiAddictionSdk.Api.LimitTip
struct LimitTip_tF8B5096C82EDA57B6870A2B503C91C61553700BD;
// AntiAddictionSdk.Platforms.Android.LimitTipClient
struct LimitTipClient_t6CE7E256EC6BC4954FAB77171931D9D49B4E5125;
// AntiAddictionSdk.Platforms.iOS.LimitTipClient
struct LimitTipClient_t6437A4B4C61A0FC6DE0DF1FD0A1633C54E30C134;
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
// AntiAddictionSdk.Api.RealNameCallback
struct RealNameCallback_tA92C37D18F12D080D66B1C67773CEAB6795D5CCA;
// AntiAddictionSdk.Api.RealNameResult
struct RealNameResult_t72CCC4738CF4CCF98DB6E68337B920CA83FBD619;
// AntiAddictionSdk.Platforms.Android.RealNameResultClient
struct RealNameResultClient_t28FE6782285D421A473D8786DA3B7AFE9BFC044D;
// AntiAddictionSdk.Platforms.iOS.RealNameResultClient
struct RealNameResultClient_tBF949234076C9C3294A5104EF710ECE383DF2A51;
// UnityEngine.RectOffset
struct RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70;
// System.String
struct String_t;
// TGCenterSdk.Platforms.Android.TGCenterClient
struct TGCenterClient_t852F76F73B20352EC6238AC9B9F507DF071CF9B0;
// TGCenterSdk.Platforms.iOS.TGCenterClient
struct TGCenterClient_t3FFBC93E175D733E5FF8A30D13354AED72C0FCC9;
// AntiAddictionSdk.Api.TimeLimit
struct TimeLimit_t34F8F02496A68C19246A6EDB732D70E8DAD79C9F;
// AntiAddictionSdk.Api.TimeLimitCallback
struct TimeLimitCallback_t45E382B69576F18A9C565FCBB836A444683917DB;
// AntiAddictionSdk.Platforms.Android.TimeLimitClient
struct TimeLimitClient_t2B20BA4A4E97557CD346C1B50D9393EEA30D0919;
// AntiAddictionSdk.Platforms.iOS.TimeLimitClient
struct TimeLimitClient_t867CAAAF07D33468A9F628615761FD01851E998C;
// AntiAddictionSdk.Api.User
struct User_t2054FCBCCC727858725CB0AC6A9CE0306D5986AD;
// AntiAddictionSdk.Platforms.Android.UserClient
struct UserClient_t93F1B9B5458115963B533A542534460DFA5C47EE;
// AntiAddictionSdk.Platforms.iOS.UserClient
struct UserClient_t34C98041DA8CAF42A5F3509756F7814AA9696FE5;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// AntiAddictionSdk.Platforms.Android.AntiAddictionClient/AndroidRealNameCallback
struct AndroidRealNameCallback_tF83DC8562F54CC5DD7BDEEA2AC573DA5292F2745;
// AntiAddictionSdk.Platforms.Android.AntiAddictionClient/AndroidTimeLimitCallback
struct AndroidTimeLimitCallback_t714DA078A7FA04E959D0CF4F572CB9B34606B6B7;
// AntiAddictionSdk.Platforms.iOS.AntiAddictionClient/AntiAddictionRealNameCallback
struct AntiAddictionRealNameCallback_t571F2472B7F4FDA2B625B7142A04441AA45FA294;
// AntiAddictionSdk.Platforms.iOS.AntiAddictionClient/AntiAddictionTimeLimitCallback
struct AntiAddictionTimeLimitCallback_tC94709CF8EB6A9D85FF410CF6B5B9F55A7E39ABA;
// MainBehaviour/PrivacyAgreeListener
struct PrivacyAgreeListener_t7E277E2FBF137E9ABC871EE180DD7FFC9FDE5DEA;
// MainBehaviour/RealNameListener
struct RealNameListener_tED709B762A6644CB50B84FDE17AAF0FDC8AB47FC;
// MainBehaviour/TimeLimitListener
struct TimeLimitListener_t52E35AC71A4BB351FF157B88F72A4A458718CB08;
// TGCenterSdk.Api.PrivacyPolicyHelper/AgreeListener
struct AgreeListener_t9EB04F6176FDCEEA10D8613CB95DF4B627C12460;
// TGCenterSdk.Platforms.iOS.PrivacyPolicyHelperClient/TGCPrivacyAgreeCallback
struct TGCPrivacyAgreeCallback_t3C41917D9CA51071333995D60FE85E6B410437DA;
// TGCenterSdk.Platforms.iOS.PrivacyPolicyHelperClient/TGCPrivacyDisagreeCallback
struct TGCPrivacyDisagreeCallback_t87303D0856E11528F24B5D65FE37D8EB115CEB9E;

IL2CPP_EXTERN_C RuntimeClass* AgreeListener_t9EB04F6176FDCEEA10D8613CB95DF4B627C12460_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidRealNameCallback_tF83DC8562F54CC5DD7BDEEA2AC573DA5292F2745_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidTimeLimitCallback_t714DA078A7FA04E959D0CF4F572CB9B34606B6B7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AntiAddictionClient_t11FAEEBC7A7F56BE40C3C3E4E3477728AE7CD6C2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AntiAddictionClient_tBCBB7C82C199D2B807123ADAF494CD2B3620CD8D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AntiAddictionRealNameCallback_t571F2472B7F4FDA2B625B7142A04441AA45FA294_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AntiAddictionTimeLimitCallback_tC94709CF8EB6A9D85FF410CF6B5B9F55A7E39ABA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AntiAddiction_t1E52AAFE7B9A8CA505BFF17DC42E16946EA04079_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Day1Retention_t5C5C48267E7FA734CD696706DCF7C0DC29025BB3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DummyAntiAddictionClient_t4FAEB40FC69FAC8F29E2A2EBAC992D648E769D39_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DummyPrivacyPolicyHelperClient_tA760F3FD14C238520B359076F8F2943A0396C839_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DummyTGCenterClient_tA73AF5E21738B8A4677C62820E0A64DDF318CCE1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GUI_tBCBBE29117D8093644C6E72B1CE3FB65C2CDCCC1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IAntiAddictionClient_t8A81CDB2D72E0FF2CD586E1B10B7BC39958AEDAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ILimitTipClient_t0053FECC25F935132ECA594C001FC54B11B27CC6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IPrivacyPolicyHelperClient_tDA8C8969D9B463BAEF2694E4E8D1EBDB10C932ED_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IRealNameResultClient_tB4462896A3DB7030B89039A41B9D030A2A1E3B1F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ITGCenterClient_t9D68A2BCB63E41CEBF76EF6BE18A406C70808A82_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ITimeLimitClient_tA9CE9CF36A023176694DF43EEE99A5CF51207AF3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IUserClient_tE3A4C0F10567655FDB8B1194479A749040B1F619_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InitConfig_tB77587871EE04B53CB86593F9C7461FF0B143A47_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LimitTipClient_t6437A4B4C61A0FC6DE0DF1FD0A1633C54E30C134_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LimitTipClient_t6CE7E256EC6BC4954FAB77171931D9D49B4E5125_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LimitTip_tF8B5096C82EDA57B6870A2B503C91C61553700BD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PrivacyAgreeListener_t7E277E2FBF137E9ABC871EE180DD7FFC9FDE5DEA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PrivacyPolicyHelperClient_tB067E8E989D92DA23AE4C378F99922F83EEB8AD9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PrivacyPolicyHelperClient_tCE377D6E958FD4996E71424C6705E0B1CA0327E0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PrivacyPolicyHelper_t5983E6361B35F6389228D994C018B16993468EA3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RealNameCallback_tA92C37D18F12D080D66B1C67773CEAB6795D5CCA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RealNameListener_tED709B762A6644CB50B84FDE17AAF0FDC8AB47FC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RealNameResultClient_t28FE6782285D421A473D8786DA3B7AFE9BFC044D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RealNameResultClient_tBF949234076C9C3294A5104EF710ECE383DF2A51_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RealNameResult_t72CCC4738CF4CCF98DB6E68337B920CA83FBD619_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TGCPrivacyAgreeCallback_t3C41917D9CA51071333995D60FE85E6B410437DA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TGCPrivacyDisagreeCallback_t87303D0856E11528F24B5D65FE37D8EB115CEB9E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TGCenterClient_t3FFBC93E175D733E5FF8A30D13354AED72C0FCC9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TGCenterClient_t852F76F73B20352EC6238AC9B9F507DF071CF9B0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TGCenter_t7A01AA650A3F96EAE0E6787DB2804C51C1FBA0B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TimeLimitCallback_t45E382B69576F18A9C565FCBB836A444683917DB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TimeLimitClient_t2B20BA4A4E97557CD346C1B50D9393EEA30D0919_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TimeLimitClient_t867CAAAF07D33468A9F628615761FD01851E998C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TimeLimitListener_t52E35AC71A4BB351FF157B88F72A4A458718CB08_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TimeLimit_t34F8F02496A68C19246A6EDB732D70E8DAD79C9F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UserClient_t34C98041DA8CAF42A5F3509756F7814AA9696FE5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UserClient_t93F1B9B5458115963B533A542534460DFA5C47EE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* User_t2054FCBCCC727858725CB0AC6A9CE0306D5986AD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral00954A73839D9575B977D6B7EA4B260B673A2FCB;
IL2CPP_EXTERN_C String_t* _stringLiteral01D337CE6AE508AC41656644063FE9925EBC46FB;
IL2CPP_EXTERN_C String_t* _stringLiteral0271545B7AD2BC9BAAE4A02D8D7F5883CE4C09E1;
IL2CPP_EXTERN_C String_t* _stringLiteral030BA20BD3303BA3A366F08049FB32193FD0EA8F;
IL2CPP_EXTERN_C String_t* _stringLiteral048639C4B744282682B9A88543E35ED9C374CAF6;
IL2CPP_EXTERN_C String_t* _stringLiteral06F6DBCB7FFEE255438B4AC7A5C1DEE040406FBA;
IL2CPP_EXTERN_C String_t* _stringLiteral0857B67E5F628D79E605E4FA501E38EB16E3D71F;
IL2CPP_EXTERN_C String_t* _stringLiteral0B988E2022EA115D1F3BC600C1497808CDAECDA7;
IL2CPP_EXTERN_C String_t* _stringLiteral0BEE2DBE24919FD195E4DCB7B1B3BCAA615CBFE1;
IL2CPP_EXTERN_C String_t* _stringLiteral0E6852CA88224C0B29708BE69F8D388FDC6C8F1F;
IL2CPP_EXTERN_C String_t* _stringLiteral10F2BD5742BCE93C3AC253225B935BAB2400DA44;
IL2CPP_EXTERN_C String_t* _stringLiteral11BEF66A6E304E5AB263A39F7B2C0B72640B9F99;
IL2CPP_EXTERN_C String_t* _stringLiteral12B430DB41F91D1EA6B6CEEAC4093543B23F6B0C;
IL2CPP_EXTERN_C String_t* _stringLiteral19589C94FA78F7254C39EA4B8684AE7D21FA3B11;
IL2CPP_EXTERN_C String_t* _stringLiteral1A5E706D6D83A6D9E3357CFF9C00B8924AAECD36;
IL2CPP_EXTERN_C String_t* _stringLiteral1C7A9E8795DAC93A625C23D6E9F2BC7332ABF459;
IL2CPP_EXTERN_C String_t* _stringLiteral1DCBAE11305777652139FDD4BF5B5EABF8971C3D;
IL2CPP_EXTERN_C String_t* _stringLiteral2063737B07B6658BC2E1EC3128D4E09E57CA123E;
IL2CPP_EXTERN_C String_t* _stringLiteral269D03B0D65AAA6DE7A1ED2198B67CD556EE6B7A;
IL2CPP_EXTERN_C String_t* _stringLiteral29879F13B63E2A34513E90952D0B0CFB393E0BA6;
IL2CPP_EXTERN_C String_t* _stringLiteral2A8BD72A3B5FB3F82BB10212457E738180ED3280;
IL2CPP_EXTERN_C String_t* _stringLiteral2DD29020EAFE2343EEFDE7BDC40A5314E499EE23;
IL2CPP_EXTERN_C String_t* _stringLiteral326319459C523C190CABB64F235BA57C39A00757;
IL2CPP_EXTERN_C String_t* _stringLiteral392E8D6CEA8941066573D022495F1506A79D8C8A;
IL2CPP_EXTERN_C String_t* _stringLiteral3DE4E33001D66F488D312800D96D1F0F48A95791;
IL2CPP_EXTERN_C String_t* _stringLiteral40FD924DF5A07AE8FD159437D8515044F35310A3;
IL2CPP_EXTERN_C String_t* _stringLiteral420100FF7BE6008D5D5DE9287150E23E2950C807;
IL2CPP_EXTERN_C String_t* _stringLiteral4435287BC80303EE8F6D9A6B8B55BC42AF84E9E3;
IL2CPP_EXTERN_C String_t* _stringLiteral44CFD9D049C36A5A3FC2003C8D84BE1219A6259F;
IL2CPP_EXTERN_C String_t* _stringLiteral44F1E7DB2E8AAD233857868896DFEFE5A63EECEF;
IL2CPP_EXTERN_C String_t* _stringLiteral471B50FA688E88BD7F26C166FDFB8EFC4497186B;
IL2CPP_EXTERN_C String_t* _stringLiteral4D613657609485AE586A3379BA0E3FC13C1E1078;
IL2CPP_EXTERN_C String_t* _stringLiteral514D8AA63A446A54F62078A74562DD8BF48ED9B8;
IL2CPP_EXTERN_C String_t* _stringLiteral5472B9531A1EFF24ABE63A5D7A0C524FF663B73E;
IL2CPP_EXTERN_C String_t* _stringLiteral57C4B5E39EEE4C2D3B9B2A98EBE68ED6BD5BA1CE;
IL2CPP_EXTERN_C String_t* _stringLiteral591717969A5E5E3B077255142EBD573FD6015D85;
IL2CPP_EXTERN_C String_t* _stringLiteral5D6E981DCA1ACD0AF56B5EFF1452B8DFA6777493;
IL2CPP_EXTERN_C String_t* _stringLiteral60BF3505E2EDB331E2840B7F36A04726AA986FF6;
IL2CPP_EXTERN_C String_t* _stringLiteral6555C23A7B70EB80DF387380D361B1CEA086130D;
IL2CPP_EXTERN_C String_t* _stringLiteral69110FD81DEC55762693325F932101FB62664E5F;
IL2CPP_EXTERN_C String_t* _stringLiteral6AA6005E81D2ACCDEE6171886C5DA95A25B3D9B9;
IL2CPP_EXTERN_C String_t* _stringLiteral70EE6BB1D172A87933F3222A4A739221C3327F94;
IL2CPP_EXTERN_C String_t* _stringLiteral74157E713F0EC92C4DDB68A67AC1F6EE2F625622;
IL2CPP_EXTERN_C String_t* _stringLiteral78A60C68335BFADC659417D949DEF46DDCF71CC2;
IL2CPP_EXTERN_C String_t* _stringLiteral78BB85A2C5FD23C3F3375CE877742B653DB9DE8F;
IL2CPP_EXTERN_C String_t* _stringLiteral7A00E59294AD906535DB79E533FC401D34929E41;
IL2CPP_EXTERN_C String_t* _stringLiteral7A43163FC05AE385BDE127586061CB41C6FAB23C;
IL2CPP_EXTERN_C String_t* _stringLiteral7DAB5E39E639D0E926060919F4B35D10B371A437;
IL2CPP_EXTERN_C String_t* _stringLiteral7FDD57A554F4937B1372DCDFBB149567C0704967;
IL2CPP_EXTERN_C String_t* _stringLiteral80BFDED53A798895F66F7586BB93FB843218DB76;
IL2CPP_EXTERN_C String_t* _stringLiteral816649F10AD961C87CC9969F931E6AE96A0CA44D;
IL2CPP_EXTERN_C String_t* _stringLiteral8243A16D425F93AF62CAAB2BFAE01A2D6246A5FE;
IL2CPP_EXTERN_C String_t* _stringLiteral86A22D3A576D7C99132992E5DD9D118173CB4078;
IL2CPP_EXTERN_C String_t* _stringLiteral879D6723690680B427E42F00420202B9EF4B9344;
IL2CPP_EXTERN_C String_t* _stringLiteral88633FD98EF4561059DF9E30FE3C67941EE9C728;
IL2CPP_EXTERN_C String_t* _stringLiteral8A5286F19216034A832BB9FF50370EE89D6CFD2C;
IL2CPP_EXTERN_C String_t* _stringLiteral8BE379FCCAE7759F182D2E0FDD1565B9F41370C9;
IL2CPP_EXTERN_C String_t* _stringLiteral8F0DA9736ED3CFBCF1ED7146B3DC6BBC0C246B0C;
IL2CPP_EXTERN_C String_t* _stringLiteral90BB3508BCAE83C31763E49B8E52D0C9F9D42BCF;
IL2CPP_EXTERN_C String_t* _stringLiteral92A0367A0299056CA05B86632AFA0D8FA9C6BF91;
IL2CPP_EXTERN_C String_t* _stringLiteral9690D53E0C8690FB5E8119156EC10DA39EA19F6F;
IL2CPP_EXTERN_C String_t* _stringLiteral9D93D803FB842EE12670D6A132A15FFE068CB8C3;
IL2CPP_EXTERN_C String_t* _stringLiteralA2386659D2348915EDCA322DAAA24484B2395745;
IL2CPP_EXTERN_C String_t* _stringLiteralA733C7FC19A8317471D21AD091D1A9A6F973A728;
IL2CPP_EXTERN_C String_t* _stringLiteralAD57C4B176C56133A3E7E16C5497B01F97DA3D3A;
IL2CPP_EXTERN_C String_t* _stringLiteralADCE9D802257F1CBE6265709F193EEF1E5E93FEB;
IL2CPP_EXTERN_C String_t* _stringLiteralBAB1AB454E7DBE6DCCF432CE9B800E808EEA9D9E;
IL2CPP_EXTERN_C String_t* _stringLiteralBE7162E4BAE8032C5093B8B018AE7798DECB26D0;
IL2CPP_EXTERN_C String_t* _stringLiteralBE8DA04BB93EE2298F881F3DCBF427FF992AA9FE;
IL2CPP_EXTERN_C String_t* _stringLiteralBF8BDAE8E1A6CBCED0048C5AC01E3405B075198C;
IL2CPP_EXTERN_C String_t* _stringLiteralC2463F45597998A094727FD126E852DC07FBB7DF;
IL2CPP_EXTERN_C String_t* _stringLiteralC57DA5652F526BF9C151C73EAE7E58AD7C4B560F;
IL2CPP_EXTERN_C String_t* _stringLiteralC6CB66E2462037E56D9C3EE58E0744985E1D989E;
IL2CPP_EXTERN_C String_t* _stringLiteralC863856C9521A05D41581EC332076959F9CE17E2;
IL2CPP_EXTERN_C String_t* _stringLiteralC8C1F8993C105E3086D93D9BFCC205A34765F689;
IL2CPP_EXTERN_C String_t* _stringLiteralCABEDC89A46B23A1F89529079CC521895A09DA70;
IL2CPP_EXTERN_C String_t* _stringLiteralCB6B631A27E8DE83322A720A005A4E44388FA818;
IL2CPP_EXTERN_C String_t* _stringLiteralCBC9687C3B3CF86630538F360E45F87AE0B9FA62;
IL2CPP_EXTERN_C String_t* _stringLiteralCEE9D315C8A295238AAB2260CA2895944013F51E;
IL2CPP_EXTERN_C String_t* _stringLiteralCFD98E61D945837836DFBB54F47FFA7AA58CDD3D;
IL2CPP_EXTERN_C String_t* _stringLiteralD197841CCDB5B2B59A46C09F9EE18BF0F15C3D00;
IL2CPP_EXTERN_C String_t* _stringLiteralD59876AEF3D62D1EDFA870BD90F3F21453232AB4;
IL2CPP_EXTERN_C String_t* _stringLiteralD7271F72CB0B464DF5A3DE56C471BA9D6E0D6BA3;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralDA544BFFC213471BAEF6EA6E55DCA05DBDE92A4D;
IL2CPP_EXTERN_C String_t* _stringLiteralDC71B380AFF23A38F6029B32B61C6943CB960350;
IL2CPP_EXTERN_C String_t* _stringLiteralDD83E4D7E4A366812BEFCF32EC0A645CCBD99851;
IL2CPP_EXTERN_C String_t* _stringLiteralDEBDCFEF1F8F50CFA8608E6F59C480A01AC2250B;
IL2CPP_EXTERN_C String_t* _stringLiteralE4C8060854D45C499CA600A040743349CA59B022;
IL2CPP_EXTERN_C String_t* _stringLiteralE74B5E4D0CE52F386C4A57C9B6466BD67B84D781;
IL2CPP_EXTERN_C String_t* _stringLiteralE9D8708C21050CC7B34E033CC74A0280EF02FF65;
IL2CPP_EXTERN_C String_t* _stringLiteralEE9ECEEE821B4384B9C5CA185AE74CA1F7525133;
IL2CPP_EXTERN_C String_t* _stringLiteralF2DCEBDC0E489573EF91725019BDC803EC347578;
IL2CPP_EXTERN_C String_t* _stringLiteralF4830D6294E28ABBFBD453CE8D70F12B69FA8B70;
IL2CPP_EXTERN_C String_t* _stringLiteralF89E2B8AEFEFD95D439A48449E4C25ACB8455C5B;
IL2CPP_EXTERN_C String_t* _stringLiteralFB4AE4F77150C3A8E8E4F8B23E734E0C7277B7D9;
IL2CPP_EXTERN_C String_t* _stringLiteralFB6988E1177DFD343CF12618FF137D8102C66781;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_CallStatic_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mAD48C38D66AB67D0F0274D195F4A99CB7AB589F2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_CallStatic_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m08A8ECF220D35069EF5A4A50C2F38E925F0852FB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_Call_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC5ED59BBD9C24EFFD98D8C3819C7E15DFE08F412_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_Call_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m705BF7B215A83B7851B19591CE37DA93250C7A8A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_Call_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m02A4D4C9FD8B15173829454766683BA424408A2A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_Call_TisInt64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_m2E2FBAE10897A748859DD7EB19EBB1DB9BD02787_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_Call_TisString_t_mB2E722C64FC7BD9F98B983053A6D3F9D94D355AE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_GetStatic_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC84C97A7EC20ED712D21107C9FA32E0785021153_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AntiAddictionClient_iOSRealNameCallback_m284F8E203C7C2675BEF08E8DCFED4109D61E1BC0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AntiAddictionClient_iOSTimeLimitCallback_mC49A5C16531B4373507A41085855D3DAB931B3C5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PrivacyPolicyHelperClient_PrivacyAgreeCallback_m24FA05F07A894D3E37B20E593D553B3A7158FCCF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PrivacyPolicyHelperClient_PrivacyDisagreeCallback_m4DFCB29D58AFF2A83D733119B94207160EA984C9_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_com;
struct GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_pinvoke;
struct RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70_marshaled_com;

struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;

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


// AntiAddictionSdk.Api.AntiAddiction
struct  AntiAddiction_t1E52AAFE7B9A8CA505BFF17DC42E16946EA04079  : public RuntimeObject
{
public:

public:
};

struct AntiAddiction_t1E52AAFE7B9A8CA505BFF17DC42E16946EA04079_StaticFields
{
public:
	// AntiAddictionSdk.Common.IAntiAddictionClient AntiAddictionSdk.Api.AntiAddiction::Client
	RuntimeObject* ___Client_0;

public:
	inline static int32_t get_offset_of_Client_0() { return static_cast<int32_t>(offsetof(AntiAddiction_t1E52AAFE7B9A8CA505BFF17DC42E16946EA04079_StaticFields, ___Client_0)); }
	inline RuntimeObject* get_Client_0() const { return ___Client_0; }
	inline RuntimeObject** get_address_of_Client_0() { return &___Client_0; }
	inline void set_Client_0(RuntimeObject* value)
	{
		___Client_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Client_0), (void*)value);
	}
};


// AntiAddictionSdk.Platforms.Android.AntiAddictionClient
struct  AntiAddictionClient_tBCBB7C82C199D2B807123ADAF494CD2B3620CD8D  : public RuntimeObject
{
public:
	// UnityEngine.AndroidJavaObject AntiAddictionSdk.Platforms.Android.AntiAddictionClient::AntiAddiction
	AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * ___AntiAddiction_0;

public:
	inline static int32_t get_offset_of_AntiAddiction_0() { return static_cast<int32_t>(offsetof(AntiAddictionClient_tBCBB7C82C199D2B807123ADAF494CD2B3620CD8D, ___AntiAddiction_0)); }
	inline AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * get_AntiAddiction_0() const { return ___AntiAddiction_0; }
	inline AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E ** get_address_of_AntiAddiction_0() { return &___AntiAddiction_0; }
	inline void set_AntiAddiction_0(AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * value)
	{
		___AntiAddiction_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AntiAddiction_0), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// AntiAddictionSdk.Platforms.ClientFactory
struct  ClientFactory_tA9BB9E9B992AAB39F386434272B5979538312693  : public RuntimeObject
{
public:

public:
};


// TGCenterSdk.Platforms.ClientFactory
struct  ClientFactory_t94BD782533F1A5B37AA9D21857C337815D8389FA  : public RuntimeObject
{
public:

public:
};


// AntiAddictionSdk.Common.DummyAntiAddictionClient
struct  DummyAntiAddictionClient_t4FAEB40FC69FAC8F29E2A2EBAC992D648E769D39  : public RuntimeObject
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


// AntiAddictionSdk.Platforms.iOS.Externs
struct  Externs_t282F82D8F0B7FC45A9A7D40622EC4361F1FA2F9D  : public RuntimeObject
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


// AntiAddictionSdk.Api.LimitTip
struct  LimitTip_tF8B5096C82EDA57B6870A2B503C91C61553700BD  : public RuntimeObject
{
public:
	// AntiAddictionSdk.Common.ILimitTipClient AntiAddictionSdk.Api.LimitTip::Client
	RuntimeObject* ___Client_0;

public:
	inline static int32_t get_offset_of_Client_0() { return static_cast<int32_t>(offsetof(LimitTip_tF8B5096C82EDA57B6870A2B503C91C61553700BD, ___Client_0)); }
	inline RuntimeObject* get_Client_0() const { return ___Client_0; }
	inline RuntimeObject** get_address_of_Client_0() { return &___Client_0; }
	inline void set_Client_0(RuntimeObject* value)
	{
		___Client_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Client_0), (void*)value);
	}
};


// AntiAddictionSdk.Platforms.Android.LimitTipClient
struct  LimitTipClient_t6CE7E256EC6BC4954FAB77171931D9D49B4E5125  : public RuntimeObject
{
public:
	// UnityEngine.AndroidJavaObject AntiAddictionSdk.Platforms.Android.LimitTipClient::LimitTip
	AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * ___LimitTip_0;

public:
	inline static int32_t get_offset_of_LimitTip_0() { return static_cast<int32_t>(offsetof(LimitTipClient_t6CE7E256EC6BC4954FAB77171931D9D49B4E5125, ___LimitTip_0)); }
	inline AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * get_LimitTip_0() const { return ___LimitTip_0; }
	inline AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E ** get_address_of_LimitTip_0() { return &___LimitTip_0; }
	inline void set_LimitTip_0(AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * value)
	{
		___LimitTip_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___LimitTip_0), (void*)value);
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


// AntiAddictionSdk.Api.RealNameResult
struct  RealNameResult_t72CCC4738CF4CCF98DB6E68337B920CA83FBD619  : public RuntimeObject
{
public:
	// AntiAddictionSdk.Common.IRealNameResultClient AntiAddictionSdk.Api.RealNameResult::mClient
	RuntimeObject* ___mClient_0;

public:
	inline static int32_t get_offset_of_mClient_0() { return static_cast<int32_t>(offsetof(RealNameResult_t72CCC4738CF4CCF98DB6E68337B920CA83FBD619, ___mClient_0)); }
	inline RuntimeObject* get_mClient_0() const { return ___mClient_0; }
	inline RuntimeObject** get_address_of_mClient_0() { return &___mClient_0; }
	inline void set_mClient_0(RuntimeObject* value)
	{
		___mClient_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mClient_0), (void*)value);
	}
};


// AntiAddictionSdk.Platforms.Android.RealNameResultClient
struct  RealNameResultClient_t28FE6782285D421A473D8786DA3B7AFE9BFC044D  : public RuntimeObject
{
public:
	// UnityEngine.AndroidJavaObject AntiAddictionSdk.Platforms.Android.RealNameResultClient::Result
	AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * ___Result_0;

public:
	inline static int32_t get_offset_of_Result_0() { return static_cast<int32_t>(offsetof(RealNameResultClient_t28FE6782285D421A473D8786DA3B7AFE9BFC044D, ___Result_0)); }
	inline AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * get_Result_0() const { return ___Result_0; }
	inline AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E ** get_address_of_Result_0() { return &___Result_0; }
	inline void set_Result_0(AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * value)
	{
		___Result_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Result_0), (void*)value);
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


// AntiAddictionSdk.Api.TimeLimit
struct  TimeLimit_t34F8F02496A68C19246A6EDB732D70E8DAD79C9F  : public RuntimeObject
{
public:
	// AntiAddictionSdk.Common.ITimeLimitClient AntiAddictionSdk.Api.TimeLimit::mClient
	RuntimeObject* ___mClient_0;

public:
	inline static int32_t get_offset_of_mClient_0() { return static_cast<int32_t>(offsetof(TimeLimit_t34F8F02496A68C19246A6EDB732D70E8DAD79C9F, ___mClient_0)); }
	inline RuntimeObject* get_mClient_0() const { return ___mClient_0; }
	inline RuntimeObject** get_address_of_mClient_0() { return &___mClient_0; }
	inline void set_mClient_0(RuntimeObject* value)
	{
		___mClient_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mClient_0), (void*)value);
	}
};


// AntiAddictionSdk.Platforms.Android.TimeLimitClient
struct  TimeLimitClient_t2B20BA4A4E97557CD346C1B50D9393EEA30D0919  : public RuntimeObject
{
public:
	// UnityEngine.AndroidJavaObject AntiAddictionSdk.Platforms.Android.TimeLimitClient::TimeLimit
	AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * ___TimeLimit_0;

public:
	inline static int32_t get_offset_of_TimeLimit_0() { return static_cast<int32_t>(offsetof(TimeLimitClient_t2B20BA4A4E97557CD346C1B50D9393EEA30D0919, ___TimeLimit_0)); }
	inline AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * get_TimeLimit_0() const { return ___TimeLimit_0; }
	inline AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E ** get_address_of_TimeLimit_0() { return &___TimeLimit_0; }
	inline void set_TimeLimit_0(AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * value)
	{
		___TimeLimit_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TimeLimit_0), (void*)value);
	}
};


// AntiAddictionSdk.Api.User
struct  User_t2054FCBCCC727858725CB0AC6A9CE0306D5986AD  : public RuntimeObject
{
public:
	// AntiAddictionSdk.Common.IUserClient AntiAddictionSdk.Api.User::mClient
	RuntimeObject* ___mClient_0;

public:
	inline static int32_t get_offset_of_mClient_0() { return static_cast<int32_t>(offsetof(User_t2054FCBCCC727858725CB0AC6A9CE0306D5986AD, ___mClient_0)); }
	inline RuntimeObject* get_mClient_0() const { return ___mClient_0; }
	inline RuntimeObject** get_address_of_mClient_0() { return &___mClient_0; }
	inline void set_mClient_0(RuntimeObject* value)
	{
		___mClient_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mClient_0), (void*)value);
	}
};


// AntiAddictionSdk.Platforms.Android.UserClient
struct  UserClient_t93F1B9B5458115963B533A542534460DFA5C47EE  : public RuntimeObject
{
public:
	// UnityEngine.AndroidJavaObject AntiAddictionSdk.Platforms.Android.UserClient::User
	AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * ___User_0;
	// AntiAddictionSdk.Api.RealNameResult AntiAddictionSdk.Platforms.Android.UserClient::Result
	RealNameResult_t72CCC4738CF4CCF98DB6E68337B920CA83FBD619 * ___Result_1;

public:
	inline static int32_t get_offset_of_User_0() { return static_cast<int32_t>(offsetof(UserClient_t93F1B9B5458115963B533A542534460DFA5C47EE, ___User_0)); }
	inline AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * get_User_0() const { return ___User_0; }
	inline AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E ** get_address_of_User_0() { return &___User_0; }
	inline void set_User_0(AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * value)
	{
		___User_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___User_0), (void*)value);
	}

	inline static int32_t get_offset_of_Result_1() { return static_cast<int32_t>(offsetof(UserClient_t93F1B9B5458115963B533A542534460DFA5C47EE, ___Result_1)); }
	inline RealNameResult_t72CCC4738CF4CCF98DB6E68337B920CA83FBD619 * get_Result_1() const { return ___Result_1; }
	inline RealNameResult_t72CCC4738CF4CCF98DB6E68337B920CA83FBD619 ** get_address_of_Result_1() { return &___Result_1; }
	inline void set_Result_1(RealNameResult_t72CCC4738CF4CCF98DB6E68337B920CA83FBD619 * value)
	{
		___Result_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Result_1), (void*)value);
	}
};


// AntiAddictionSdk.Platforms.Android.Utils
struct  Utils_t4F719135D3815CEB909A5FA2B4E025C1F2F72F7F  : public RuntimeObject
{
public:

public:
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


// MainBehaviour/RealNameListener
struct  RealNameListener_tED709B762A6644CB50B84FDE17AAF0FDC8AB47FC  : public RuntimeObject
{
public:

public:
};


// MainBehaviour/TimeLimitListener
struct  TimeLimitListener_t52E35AC71A4BB351FF157B88F72A4A458718CB08  : public RuntimeObject
{
public:

public:
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


// System.Int64
struct  Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3 
{
public:
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3, ___m_value_0)); }
	inline int64_t get_m_value_0() const { return ___m_value_0; }
	inline int64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int64_t value)
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


// AntiAddictionSdk.Platforms.iOS.AntiAddictionClient
struct  AntiAddictionClient_t11FAEEBC7A7F56BE40C3C3E4E3477728AE7CD6C2  : public RuntimeObject
{
public:
	// System.IntPtr AntiAddictionSdk.Platforms.iOS.AntiAddictionClient::mAntiAddictionClientPtr
	intptr_t ___mAntiAddictionClientPtr_0;
	// AntiAddictionSdk.Api.RealNameCallback AntiAddictionSdk.Platforms.iOS.AntiAddictionClient::realNameCallback
	RuntimeObject* ___realNameCallback_1;
	// AntiAddictionSdk.Api.TimeLimitCallback AntiAddictionSdk.Platforms.iOS.AntiAddictionClient::timeLimitCallback
	RuntimeObject* ___timeLimitCallback_2;

public:
	inline static int32_t get_offset_of_mAntiAddictionClientPtr_0() { return static_cast<int32_t>(offsetof(AntiAddictionClient_t11FAEEBC7A7F56BE40C3C3E4E3477728AE7CD6C2, ___mAntiAddictionClientPtr_0)); }
	inline intptr_t get_mAntiAddictionClientPtr_0() const { return ___mAntiAddictionClientPtr_0; }
	inline intptr_t* get_address_of_mAntiAddictionClientPtr_0() { return &___mAntiAddictionClientPtr_0; }
	inline void set_mAntiAddictionClientPtr_0(intptr_t value)
	{
		___mAntiAddictionClientPtr_0 = value;
	}

	inline static int32_t get_offset_of_realNameCallback_1() { return static_cast<int32_t>(offsetof(AntiAddictionClient_t11FAEEBC7A7F56BE40C3C3E4E3477728AE7CD6C2, ___realNameCallback_1)); }
	inline RuntimeObject* get_realNameCallback_1() const { return ___realNameCallback_1; }
	inline RuntimeObject** get_address_of_realNameCallback_1() { return &___realNameCallback_1; }
	inline void set_realNameCallback_1(RuntimeObject* value)
	{
		___realNameCallback_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___realNameCallback_1), (void*)value);
	}

	inline static int32_t get_offset_of_timeLimitCallback_2() { return static_cast<int32_t>(offsetof(AntiAddictionClient_t11FAEEBC7A7F56BE40C3C3E4E3477728AE7CD6C2, ___timeLimitCallback_2)); }
	inline RuntimeObject* get_timeLimitCallback_2() const { return ___timeLimitCallback_2; }
	inline RuntimeObject** get_address_of_timeLimitCallback_2() { return &___timeLimitCallback_2; }
	inline void set_timeLimitCallback_2(RuntimeObject* value)
	{
		___timeLimitCallback_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___timeLimitCallback_2), (void*)value);
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

// AntiAddictionSdk.Platforms.iOS.LimitTipClient
struct  LimitTipClient_t6437A4B4C61A0FC6DE0DF1FD0A1633C54E30C134  : public RuntimeObject
{
public:
	// System.IntPtr AntiAddictionSdk.Platforms.iOS.LimitTipClient::LimitTip
	intptr_t ___LimitTip_0;

public:
	inline static int32_t get_offset_of_LimitTip_0() { return static_cast<int32_t>(offsetof(LimitTipClient_t6437A4B4C61A0FC6DE0DF1FD0A1633C54E30C134, ___LimitTip_0)); }
	inline intptr_t get_LimitTip_0() const { return ___LimitTip_0; }
	inline intptr_t* get_address_of_LimitTip_0() { return &___LimitTip_0; }
	inline void set_LimitTip_0(intptr_t value)
	{
		___LimitTip_0 = value;
	}
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


// AntiAddictionSdk.Platforms.iOS.RealNameResultClient
struct  RealNameResultClient_tBF949234076C9C3294A5104EF710ECE383DF2A51  : public RuntimeObject
{
public:
	// System.IntPtr AntiAddictionSdk.Platforms.iOS.RealNameResultClient::Result
	intptr_t ___Result_0;

public:
	inline static int32_t get_offset_of_Result_0() { return static_cast<int32_t>(offsetof(RealNameResultClient_tBF949234076C9C3294A5104EF710ECE383DF2A51, ___Result_0)); }
	inline intptr_t get_Result_0() const { return ___Result_0; }
	inline intptr_t* get_address_of_Result_0() { return &___Result_0; }
	inline void set_Result_0(intptr_t value)
	{
		___Result_0 = value;
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


// AntiAddictionSdk.Platforms.iOS.TimeLimitClient
struct  TimeLimitClient_t867CAAAF07D33468A9F628615761FD01851E998C  : public RuntimeObject
{
public:
	// System.IntPtr AntiAddictionSdk.Platforms.iOS.TimeLimitClient::TimeLimit
	intptr_t ___TimeLimit_0;

public:
	inline static int32_t get_offset_of_TimeLimit_0() { return static_cast<int32_t>(offsetof(TimeLimitClient_t867CAAAF07D33468A9F628615761FD01851E998C, ___TimeLimit_0)); }
	inline intptr_t get_TimeLimit_0() const { return ___TimeLimit_0; }
	inline intptr_t* get_address_of_TimeLimit_0() { return &___TimeLimit_0; }
	inline void set_TimeLimit_0(intptr_t value)
	{
		___TimeLimit_0 = value;
	}
};


// AntiAddictionSdk.Platforms.iOS.UserClient
struct  UserClient_t34C98041DA8CAF42A5F3509756F7814AA9696FE5  : public RuntimeObject
{
public:
	// System.IntPtr AntiAddictionSdk.Platforms.iOS.UserClient::User
	intptr_t ___User_0;
	// AntiAddictionSdk.Api.RealNameResult AntiAddictionSdk.Platforms.iOS.UserClient::Result
	RealNameResult_t72CCC4738CF4CCF98DB6E68337B920CA83FBD619 * ___Result_1;

public:
	inline static int32_t get_offset_of_User_0() { return static_cast<int32_t>(offsetof(UserClient_t34C98041DA8CAF42A5F3509756F7814AA9696FE5, ___User_0)); }
	inline intptr_t get_User_0() const { return ___User_0; }
	inline intptr_t* get_address_of_User_0() { return &___User_0; }
	inline void set_User_0(intptr_t value)
	{
		___User_0 = value;
	}

	inline static int32_t get_offset_of_Result_1() { return static_cast<int32_t>(offsetof(UserClient_t34C98041DA8CAF42A5F3509756F7814AA9696FE5, ___Result_1)); }
	inline RealNameResult_t72CCC4738CF4CCF98DB6E68337B920CA83FBD619 * get_Result_1() const { return ___Result_1; }
	inline RealNameResult_t72CCC4738CF4CCF98DB6E68337B920CA83FBD619 ** get_address_of_Result_1() { return &___Result_1; }
	inline void set_Result_1(RealNameResult_t72CCC4738CF4CCF98DB6E68337B920CA83FBD619 * value)
	{
		___Result_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Result_1), (void*)value);
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


// AntiAddictionSdk.Api.TimeLimit/Reason
struct  Reason_t2012FA7CB373B081806F99C7987F8C29FFA0D1F8 
{
public:
	// System.Int32 AntiAddictionSdk.Api.TimeLimit/Reason::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Reason_t2012FA7CB373B081806F99C7987F8C29FFA0D1F8, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
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


// AntiAddictionSdk.Platforms.Android.AntiAddictionClient/AndroidRealNameCallback
struct  AndroidRealNameCallback_tF83DC8562F54CC5DD7BDEEA2AC573DA5292F2745  : public AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF
{
public:
	// AntiAddictionSdk.Api.RealNameCallback AntiAddictionSdk.Platforms.Android.AntiAddictionClient/AndroidRealNameCallback::Callback
	RuntimeObject* ___Callback_4;

public:
	inline static int32_t get_offset_of_Callback_4() { return static_cast<int32_t>(offsetof(AndroidRealNameCallback_tF83DC8562F54CC5DD7BDEEA2AC573DA5292F2745, ___Callback_4)); }
	inline RuntimeObject* get_Callback_4() const { return ___Callback_4; }
	inline RuntimeObject** get_address_of_Callback_4() { return &___Callback_4; }
	inline void set_Callback_4(RuntimeObject* value)
	{
		___Callback_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Callback_4), (void*)value);
	}
};


// AntiAddictionSdk.Platforms.Android.AntiAddictionClient/AndroidTimeLimitCallback
struct  AndroidTimeLimitCallback_t714DA078A7FA04E959D0CF4F572CB9B34606B6B7  : public AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF
{
public:
	// AntiAddictionSdk.Api.TimeLimitCallback AntiAddictionSdk.Platforms.Android.AntiAddictionClient/AndroidTimeLimitCallback::Callback
	RuntimeObject* ___Callback_4;

public:
	inline static int32_t get_offset_of_Callback_4() { return static_cast<int32_t>(offsetof(AndroidTimeLimitCallback_t714DA078A7FA04E959D0CF4F572CB9B34606B6B7, ___Callback_4)); }
	inline RuntimeObject* get_Callback_4() const { return ___Callback_4; }
	inline RuntimeObject** get_address_of_Callback_4() { return &___Callback_4; }
	inline void set_Callback_4(RuntimeObject* value)
	{
		___Callback_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Callback_4), (void*)value);
	}
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


// AntiAddictionSdk.Platforms.iOS.AntiAddictionClient/AntiAddictionRealNameCallback
struct  AntiAddictionRealNameCallback_t571F2472B7F4FDA2B625B7142A04441AA45FA294  : public MulticastDelegate_t
{
public:

public:
};


// AntiAddictionSdk.Platforms.iOS.AntiAddictionClient/AntiAddictionTimeLimitCallback
struct  AntiAddictionTimeLimitCallback_tC94709CF8EB6A9D85FF410CF6B5B9F55A7E39ABA  : public MulticastDelegate_t
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


// MainBehaviour
struct  MainBehaviour_tDE09AB0E3B7AB47BEC0D8229B68A94AA3FE0DEC6  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.String MainBehaviour::Channle
	String_t* ___Channle_4;

public:
	inline static int32_t get_offset_of_Channle_4() { return static_cast<int32_t>(offsetof(MainBehaviour_tDE09AB0E3B7AB47BEC0D8229B68A94AA3FE0DEC6, ___Channle_4)); }
	inline String_t* get_Channle_4() const { return ___Channle_4; }
	inline String_t** get_address_of_Channle_4() { return &___Channle_4; }
	inline void set_Channle_4(String_t* value)
	{
		___Channle_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Channle_4), (void*)value);
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
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) String_t* m_Items[1];

public:
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


// !!0[] System.Array::Empty<System.Object>()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_gshared_inline (const RuntimeMethod* method);
// !!0 UnityEngine.AndroidJavaObject::CallStatic<System.Object>(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * AndroidJavaObject_CallStatic_TisRuntimeObject_m29BD05B7A29F937D71B746DFFE889B90E1142509_gshared (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, String_t* ___methodName0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method);
// !!0 UnityEngine.AndroidJavaObject::Call<System.Object>(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * AndroidJavaObject_Call_TisRuntimeObject_mB802C2A6B0365A1670402D283EB7FA241C326B0E_gshared (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, String_t* ___methodName0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method);
// !!0 UnityEngine.AndroidJavaObject::Call<System.Boolean>(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidJavaObject_Call_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m705BF7B215A83B7851B19591CE37DA93250C7A8A_gshared (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, String_t* ___methodName0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method);
// !!0 UnityEngine.AndroidJavaObject::Call<System.Int32>(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidJavaObject_Call_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m02A4D4C9FD8B15173829454766683BA424408A2A_gshared (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, String_t* ___methodName0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method);
// !!0 UnityEngine.AndroidJavaObject::CallStatic<System.Boolean>(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidJavaObject_CallStatic_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m08A8ECF220D35069EF5A4A50C2F38E925F0852FB_gshared (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, String_t* ___methodName0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method);
// !!0 UnityEngine.AndroidJavaObject::Call<System.Int64>(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t AndroidJavaObject_Call_TisInt64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_m2E2FBAE10897A748859DD7EB19EBB1DB9BD02787_gshared (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, String_t* ___methodName0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method);
// !!0 UnityEngine.AndroidJavaObject::GetStatic<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * AndroidJavaObject_GetStatic_TisRuntimeObject_mEC743ECF275CB896DE039A9FC1E5672B30C8B3D0_gshared (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, String_t* ___fieldName0, const RuntimeMethod* method);

// AntiAddictionSdk.Common.IAntiAddictionClient AntiAddictionSdk.Platforms.ClientFactory::AntiAddictionClient()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ClientFactory_AntiAddictionClient_mCEB32581488E3ED5FA908BCAF1894727E0D0121A (const RuntimeMethod* method);
// AntiAddictionSdk.Common.IAntiAddictionClient AntiAddictionSdk.Api.AntiAddiction::GetAntiAddictionClient()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AntiAddiction_GetAntiAddictionClient_m260D02229444F2CEA132606C2E9A6E5228D2B69C (const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void UnityEngine.AndroidJavaClass::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaClass__ctor_mEFF9F51871F231955D97DABDE9AB4A6B4EDA5541 (AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * __this, String_t* ___className0, const RuntimeMethod* method);
// !!0[] System.Array::Empty<System.Object>()
inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_inline (const RuntimeMethod* method)
{
	return ((  ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* (*) (const RuntimeMethod*))Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_gshared_inline)(method);
}
// !!0 UnityEngine.AndroidJavaObject::CallStatic<UnityEngine.AndroidJavaObject>(System.String,System.Object[])
inline AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * AndroidJavaObject_CallStatic_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mAD48C38D66AB67D0F0274D195F4A99CB7AB589F2 (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, String_t* ___methodName0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method)
{
	return ((  AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * (*) (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E *, String_t*, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*, const RuntimeMethod*))AndroidJavaObject_CallStatic_TisRuntimeObject_m29BD05B7A29F937D71B746DFFE889B90E1142509_gshared)(__this, ___methodName0, ___args1, method);
}
// !!0 UnityEngine.AndroidJavaObject::Call<UnityEngine.AndroidJavaObject>(System.String,System.Object[])
inline AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * AndroidJavaObject_Call_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC5ED59BBD9C24EFFD98D8C3819C7E15DFE08F412 (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, String_t* ___methodName0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method)
{
	return ((  AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * (*) (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E *, String_t*, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*, const RuntimeMethod*))AndroidJavaObject_Call_TisRuntimeObject_mB802C2A6B0365A1670402D283EB7FA241C326B0E_gshared)(__this, ___methodName0, ___args1, method);
}
// System.Void AntiAddictionSdk.Platforms.Android.UserClient::.ctor(UnityEngine.AndroidJavaObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserClient__ctor_m20BE7CE6E321381E2A6FEF6D079DFFA002323390 (UserClient_t93F1B9B5458115963B533A542534460DFA5C47EE * __this, AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * ___user0, const RuntimeMethod* method);
// System.Void AntiAddictionSdk.Api.User::.ctor(AntiAddictionSdk.Common.IUserClient)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void User__ctor_mD6909B95167AF2D588F815BD3F4AC5546A3D187B (User_t2054FCBCCC727858725CB0AC6A9CE0306D5986AD * __this, RuntimeObject* ___client0, const RuntimeMethod* method);
// System.Void AntiAddictionSdk.Platforms.Android.AntiAddictionClient/AndroidRealNameCallback::.ctor(AntiAddictionSdk.Api.RealNameCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidRealNameCallback__ctor_m2FB0F2D80C466DB1F65E11ACA8562CAC46404BF4 (AndroidRealNameCallback_tF83DC8562F54CC5DD7BDEEA2AC573DA5292F2745 * __this, RuntimeObject* ___callback0, const RuntimeMethod* method);
// System.Void UnityEngine.AndroidJavaObject::Call(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject_Call_mBB226DA52CE5A2FCD9A2D42BC7FB4272E094B76D (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, String_t* ___methodName0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method);
// System.Void AntiAddictionSdk.Platforms.Android.AntiAddictionClient/AndroidTimeLimitCallback::.ctor(AntiAddictionSdk.Api.TimeLimitCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidTimeLimitCallback__ctor_mA67692D6FF2E14D91D7AC7BD7D21A7A5BF41390D (AndroidTimeLimitCallback_t714DA078A7FA04E959D0CF4F572CB9B34606B6B7 * __this, RuntimeObject* ___callback0, const RuntimeMethod* method);
// System.Void AntiAddictionSdk.Platforms.Android.TimeLimitClient::.ctor(UnityEngine.AndroidJavaObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimeLimitClient__ctor_m1DF010F1D024CC9C772AD9B44F345C363032912C (TimeLimitClient_t2B20BA4A4E97557CD346C1B50D9393EEA30D0919 * __this, AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * ___timeLimit0, const RuntimeMethod* method);
// System.Void AntiAddictionSdk.Api.TimeLimit::.ctor(AntiAddictionSdk.Common.ITimeLimitClient)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimeLimit__ctor_m67E9BF4FF91D1C5608D3630A8B205686CFC9BA64 (TimeLimit_t34F8F02496A68C19246A6EDB732D70E8DAD79C9F * __this, RuntimeObject* ___client0, const RuntimeMethod* method);
// System.Void AntiAddictionSdk.Platforms.iOS.AntiAddictionClient::iOSRealNameCallback(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AntiAddictionClient_iOSRealNameCallback_m284F8E203C7C2675BEF08E8DCFED4109D61E1BC0 (intptr_t ___antiAddictionClient0, intptr_t ___user1, const RuntimeMethod* method);
// System.Void AntiAddictionSdk.Platforms.iOS.AntiAddictionClient::iOSTimeLimitCallback(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AntiAddictionClient_iOSTimeLimitCallback_mC49A5C16531B4373507A41085855D3DAB931B3C5 (intptr_t ___antiAddictionClient0, intptr_t ___timeLimit1, const RuntimeMethod* method);
// System.Runtime.InteropServices.GCHandle System.Runtime.InteropServices.GCHandle::Alloc(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  GCHandle_Alloc_m937829FAD1C69F168CF045B9406228AC9F8B9389 (RuntimeObject * ___value0, const RuntimeMethod* method);
// System.IntPtr System.Runtime.InteropServices.GCHandle::op_Explicit(System.Runtime.InteropServices.GCHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t GCHandle_op_Explicit_m0A74179B3DD6D87F0863EF55176F924D641E42BF (GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  ___value0, const RuntimeMethod* method);
// System.IntPtr AntiAddictionSdk.Platforms.iOS.Externs::AntiAddictionSetAntiAddictionClient(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Externs_AntiAddictionSetAntiAddictionClient_mCD7C172444E618D4379FE8CEB8E3E2FD31CCD4E8 (intptr_t ___antiAddictionClient0, const RuntimeMethod* method);
// System.IntPtr AntiAddictionSdk.Platforms.iOS.Externs::AntiAddictionGetUser()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Externs_AntiAddictionGetUser_m4BB575AC4CDFB7BD778537D408E40226A6FC2715 (const RuntimeMethod* method);
// System.Void AntiAddictionSdk.Platforms.iOS.UserClient::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserClient__ctor_m786A98666B64BD7BBF20CF0DA3D1C85495236C50 (UserClient_t34C98041DA8CAF42A5F3509756F7814AA9696FE5 * __this, intptr_t ___user0, const RuntimeMethod* method);
// System.Void AntiAddictionSdk.Platforms.iOS.AntiAddictionClient/AntiAddictionRealNameCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AntiAddictionRealNameCallback__ctor_mB02341D548F244B7F84FE8FB09013547A148BAC7 (AntiAddictionRealNameCallback_t571F2472B7F4FDA2B625B7142A04441AA45FA294 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void AntiAddictionSdk.Platforms.iOS.Externs::AntiAddictionRealName(AntiAddictionSdk.Platforms.iOS.AntiAddictionClient/AntiAddictionRealNameCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Externs_AntiAddictionRealName_m955CA98E5FA69B89B645D950336D262EBDA6D321 (AntiAddictionRealNameCallback_t571F2472B7F4FDA2B625B7142A04441AA45FA294 * ___callback0, const RuntimeMethod* method);
// System.Void AntiAddictionSdk.Platforms.iOS.Externs::AntiAddictionRealNameUseCustomUI(System.String,System.String,AntiAddictionSdk.Platforms.iOS.AntiAddictionClient/AntiAddictionRealNameCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Externs_AntiAddictionRealNameUseCustomUI_m0793E769A3541FF4E1E86A44394D261866CC7FE3 (String_t* ___name0, String_t* ___idNumber1, AntiAddictionRealNameCallback_t571F2472B7F4FDA2B625B7142A04441AA45FA294 * ___callback2, const RuntimeMethod* method);
// AntiAddictionSdk.Platforms.iOS.AntiAddictionClient AntiAddictionSdk.Platforms.iOS.AntiAddictionClient::IntPtrToAntiAddictionClient(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AntiAddictionClient_t11FAEEBC7A7F56BE40C3C3E4E3477728AE7CD6C2 * AntiAddictionClient_IntPtrToAntiAddictionClient_m35A5774A03A0E420EB3C09F45C7109B5355BAAC2 (intptr_t ___antiAddictionClient0, const RuntimeMethod* method);
// System.Void AntiAddictionSdk.Platforms.iOS.Externs::AntiAddictionSetAutoShowTimeLimitPage(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Externs_AntiAddictionSetAutoShowTimeLimitPage_m26C60BA0B9A7767027973E148B730A5C49A7FE9C (bool ___show0, const RuntimeMethod* method);
// System.Void AntiAddictionSdk.Platforms.iOS.AntiAddictionClient/AntiAddictionTimeLimitCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AntiAddictionTimeLimitCallback__ctor_m66E81A9AC193CA64E4A692743578F586A8C78CAC (AntiAddictionTimeLimitCallback_tC94709CF8EB6A9D85FF410CF6B5B9F55A7E39ABA * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void AntiAddictionSdk.Platforms.iOS.Externs::AntiAddictionSetTimeLimitCallback(AntiAddictionSdk.Platforms.iOS.AntiAddictionClient/AntiAddictionTimeLimitCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Externs_AntiAddictionSetTimeLimitCallback_m4511E176300A182DF56E0F49EC5924A27CD80086 (AntiAddictionTimeLimitCallback_tC94709CF8EB6A9D85FF410CF6B5B9F55A7E39ABA * ___callback0, const RuntimeMethod* method);
// System.Void AntiAddictionSdk.Platforms.iOS.TimeLimitClient::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimeLimitClient__ctor_mF68B07642AD90106EAA1BEB3A6BC5C6F4B6F3986 (TimeLimitClient_t867CAAAF07D33468A9F628615761FD01851E998C * __this, intptr_t ___timeLimit0, const RuntimeMethod* method);
// System.IntPtr AntiAddictionSdk.Platforms.iOS.Externs::AntiAddictionLogout()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Externs_AntiAddictionLogout_mB7E846EEB2A4814C5B48E13CB53D4B87A6983726 (const RuntimeMethod* method);
// System.Runtime.InteropServices.GCHandle System.Runtime.InteropServices.GCHandle::op_Explicit(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  GCHandle_op_Explicit_mD2A800A063FDBDAB31CD7EC97DD63A896A3568A6 (intptr_t ___value0, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.GCHandle::Free()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GCHandle_Free_mB4E9415544FC9F0075C02AB17E270E49AF006025 (GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 * __this, const RuntimeMethod* method);
// System.Void AntiAddictionSdk.Platforms.iOS.AntiAddictionClient::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AntiAddictionClient_Dispose_m1E4D99ECC1E03C03F83F8AE383265264E63A3771 (AntiAddictionClient_t11FAEEBC7A7F56BE40C3C3E4E3477728AE7CD6C2 * __this, const RuntimeMethod* method);
// System.Void System.Object::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Finalize_mC59C83CF4F7707E425FFA6362931C25D4C36676A (RuntimeObject * __this, const RuntimeMethod* method);
// System.Object System.Runtime.InteropServices.GCHandle::get_Target()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GCHandle_get_Target_m6C296AD6520ECDAFC9498E9387677F522871F883 (GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 * __this, const RuntimeMethod* method);
// UnityEngine.RuntimePlatform UnityEngine.Application::get_platform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Application_get_platform_mB22F7F39CDD46667C3EF64507E55BB7DA18F66C4 (const RuntimeMethod* method);
// System.Void AntiAddictionSdk.Platforms.Android.AntiAddictionClient::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AntiAddictionClient__ctor_mACEEEA4F1D7E7979DC45B91ADCB3A5DA4198A81A (AntiAddictionClient_tBCBB7C82C199D2B807123ADAF494CD2B3620CD8D * __this, const RuntimeMethod* method);
// System.Void AntiAddictionSdk.Platforms.iOS.AntiAddictionClient::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AntiAddictionClient__ctor_m3BC71D6D6C47BE36F5F55EF2A5133BCE299DBCC3 (AntiAddictionClient_t11FAEEBC7A7F56BE40C3C3E4E3477728AE7CD6C2 * __this, const RuntimeMethod* method);
// System.Void AntiAddictionSdk.Common.DummyAntiAddictionClient::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DummyAntiAddictionClient__ctor_m65FCE6C97EA818AEAD352A8AE2806694007B6F1C (DummyAntiAddictionClient_t4FAEB40FC69FAC8F29E2A2EBAC992D648E769D39 * __this, const RuntimeMethod* method);
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
// !!0 UnityEngine.AndroidJavaObject::Call<System.String>(System.String,System.Object[])
inline String_t* AndroidJavaObject_Call_TisString_t_mB2E722C64FC7BD9F98B983053A6D3F9D94D355AE (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, String_t* ___methodName0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method)
{
	return ((  String_t* (*) (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E *, String_t*, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*, const RuntimeMethod*))AndroidJavaObject_Call_TisRuntimeObject_mB802C2A6B0365A1670402D283EB7FA241C326B0E_gshared)(__this, ___methodName0, ___args1, method);
}
// !!0 UnityEngine.AndroidJavaObject::Call<System.Boolean>(System.String,System.Object[])
inline bool AndroidJavaObject_Call_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m705BF7B215A83B7851B19591CE37DA93250C7A8A (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, String_t* ___methodName0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method)
{
	return ((  bool (*) (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E *, String_t*, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*, const RuntimeMethod*))AndroidJavaObject_Call_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m705BF7B215A83B7851B19591CE37DA93250C7A8A_gshared)(__this, ___methodName0, ___args1, method);
}
// System.String AntiAddictionSdk.Platforms.iOS.Externs::AntiAddictionLimitTipGetTitle(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Externs_AntiAddictionLimitTipGetTitle_mE38BFE7BD0D2CA908DFF3541A2C42D4FD37540E2 (intptr_t ___limitTip0, const RuntimeMethod* method);
// System.String AntiAddictionSdk.Platforms.iOS.Externs::AntiAddictionLimitTipGetDesc(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Externs_AntiAddictionLimitTipGetDesc_mF49FFC66B2AC012EFF261ECF3DD210A75B653CD7 (intptr_t ___limitTip0, const RuntimeMethod* method);
// System.String AntiAddictionSdk.Platforms.iOS.Externs::AntiAddictionLimitTipGetButton(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Externs_AntiAddictionLimitTipGetButton_mA3309057FB296706A135D7BF868B3BE5A7811EC9 (intptr_t ___limitTip0, const RuntimeMethod* method);
// System.Boolean AntiAddictionSdk.Platforms.iOS.Externs::AntiAddictionLimitTipCanRealName(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Externs_AntiAddictionLimitTipCanRealName_m6C53135B10E49ACA35B9D6229A7C3FE83E1AB9F0 (intptr_t ___limitTip0, const RuntimeMethod* method);
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
// System.Void MainBehaviour/RealNameListener::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RealNameListener__ctor_mE87033C9E71DB4FB631C7A6F5B02BEE92CDCC228 (RealNameListener_tED709B762A6644CB50B84FDE17AAF0FDC8AB47FC * __this, const RuntimeMethod* method);
// System.Void AntiAddictionSdk.Api.AntiAddiction::RealName(AntiAddictionSdk.Api.RealNameCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AntiAddiction_RealName_mAEEB81D1F823CA662476A28CD53E093D6C825889 (RuntimeObject* ___callback0, const RuntimeMethod* method);
// System.Void AntiAddictionSdk.Api.AntiAddiction::RealName(System.String,System.String,AntiAddictionSdk.Api.RealNameCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AntiAddiction_RealName_m8EC2673C81604A97333AC0B22B5E661C17174DE1 (String_t* ___name0, String_t* ___idNumber1, RuntimeObject* ___callback2, const RuntimeMethod* method);
// System.Void AntiAddictionSdk.Api.AntiAddiction::Logout()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AntiAddiction_Logout_m2E8A8E3F7F1FB817C3A3BC1AB432DC00CDD6D62F (const RuntimeMethod* method);
// System.Void MainBehaviour::LogUserInfo(AntiAddictionSdk.Api.User)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainBehaviour_LogUserInfo_mC8FC3F64ABA3C4C6CF253EEE2CDEDB134E4FE6BC (User_t2054FCBCCC727858725CB0AC6A9CE0306D5986AD * ___user0, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Boolean TGCenterSdk.Api.TGCenter::IsUserAgreePolicy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TGCenter_IsUserAgreePolicy_m5BE7174BDE944A4C6ECAACD5CF6AEB67DE880F2C (const RuntimeMethod* method);
// System.Void MainBehaviour::InitModooPlay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainBehaviour_InitModooPlay_mB6DCCC36721AD85008B5CA02E09D19733FB00D95 (MainBehaviour_tDE09AB0E3B7AB47BEC0D8229B68A94AA3FE0DEC6 * __this, const RuntimeMethod* method);
// System.Void MainBehaviour::ShowDefaultPolicyDialog()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainBehaviour_ShowDefaultPolicyDialog_mDDDA53D53BDD0E6A59D10481F57D9A47989E38D7 (MainBehaviour_tDE09AB0E3B7AB47BEC0D8229B68A94AA3FE0DEC6 * __this, const RuntimeMethod* method);
// System.Void TGCenterSdk.Api.InitConfig::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InitConfig__ctor_m90192792C8C801B94C5F0BF8303191861979E8D2 (InitConfig_tB77587871EE04B53CB86593F9C7461FF0B143A47 * __this, const RuntimeMethod* method);
// System.Void TGCenterSdk.Api.Day1Retention::.ctor(TGCenterSdk.Api.Day1Retention/RetentionTypes,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Day1Retention__ctor_m5AC87C6754EAD4FF846E084887A8AC84649DA7D8 (Day1Retention_t5C5C48267E7FA734CD696706DCF7C0DC29025BB3 * __this, int32_t ___retentionType0, int32_t ___startCount1, int32_t ___endCount2, const RuntimeMethod* method);
// System.Void TGCenterSdk.Api.TGCenter::Init(TGCenterSdk.Api.InitConfig)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TGCenter_Init_mF0F3AD663639A35E3986B8BBD2DA76999D1A31A3 (InitConfig_tB77587871EE04B53CB86593F9C7461FF0B143A47 * ___config0, const RuntimeMethod* method);
// System.Void AntiAddictionSdk.Api.AntiAddiction::SetAutoShowTimeLimitPage(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AntiAddiction_SetAutoShowTimeLimitPage_mFBDEFFBC0A0D5C5BE13C975615D5C1F3A92BBF04 (bool ___show0, const RuntimeMethod* method);
// System.Void MainBehaviour/TimeLimitListener::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimeLimitListener__ctor_mABFE790553C8687EF4C95F2CF3C63A5F0A0D00D7 (TimeLimitListener_t52E35AC71A4BB351FF157B88F72A4A458718CB08 * __this, const RuntimeMethod* method);
// System.Void AntiAddictionSdk.Api.AntiAddiction::SetTimeLimitCallback(AntiAddictionSdk.Api.TimeLimitCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AntiAddiction_SetTimeLimitCallback_mE6F8CB0B25D95BA5F1ED2CE54744E285887F2D01 (RuntimeObject* ___callback0, const RuntimeMethod* method);
// AntiAddictionSdk.Api.User AntiAddictionSdk.Api.AntiAddiction::GetUser()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR User_t2054FCBCCC727858725CB0AC6A9CE0306D5986AD * AntiAddiction_GetUser_m129E8784D396FB5A92E7636EDF15F9D15FFF7145 (const RuntimeMethod* method);
// AntiAddictionSdk.Api.RealNameResult AntiAddictionSdk.Api.User::GetRealNameResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RealNameResult_t72CCC4738CF4CCF98DB6E68337B920CA83FBD619 * User_GetRealNameResult_mBC986A65EF712B31E8F93A7B8E42E3BDA591DD7A (User_t2054FCBCCC727858725CB0AC6A9CE0306D5986AD * __this, const RuntimeMethod* method);
// System.Boolean AntiAddictionSdk.Api.RealNameResult::IsSuccess()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RealNameResult_IsSuccess_mEC51A9C1D674828B2BDD7FF618F1ED518414CE02 (RealNameResult_t72CCC4738CF4CCF98DB6E68337B920CA83FBD619 * __this, const RuntimeMethod* method);
// System.Boolean AntiAddictionSdk.Api.RealNameResult::IsFail()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RealNameResult_IsFail_mC60D21A1DC91D5D36046E8758D1BC442730C5459 (RealNameResult_t72CCC4738CF4CCF98DB6E68337B920CA83FBD619 * __this, const RuntimeMethod* method);
// System.Boolean AntiAddictionSdk.Api.RealNameResult::IsProcessing()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RealNameResult_IsProcessing_m04DFB0DE3726AF7942CB5CDF034869D3F3A2568D (RealNameResult_t72CCC4738CF4CCF98DB6E68337B920CA83FBD619 * __this, const RuntimeMethod* method);
// System.Boolean AntiAddictionSdk.Api.RealNameResult::IsInitial()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RealNameResult_IsInitial_m2D92DF47DB2F52255AE9D32765E013F67F621528 (RealNameResult_t72CCC4738CF4CCF98DB6E68337B920CA83FBD619 * __this, const RuntimeMethod* method);
// System.Boolean AntiAddictionSdk.Api.User::IsTourist()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool User_IsTourist_m4ED9B4EF6E903618B04A851EAB4A821D8FBCD942 (User_t2054FCBCCC727858725CB0AC6A9CE0306D5986AD * __this, const RuntimeMethod* method);
// System.Boolean AntiAddictionSdk.Api.User::IsChild()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool User_IsChild_m8CCA3DE0318FF43A8CB37FE26751D3D519572F5D (User_t2054FCBCCC727858725CB0AC6A9CE0306D5986AD * __this, const RuntimeMethod* method);
// System.Boolean AntiAddictionSdk.Api.User::IsAdult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool User_IsAdult_mA4E8D84F16A31B904E3355B2F54476445EBA6EC8 (User_t2054FCBCCC727858725CB0AC6A9CE0306D5986AD * __this, const RuntimeMethod* method);
// System.Int32 AntiAddictionSdk.Api.User::GetAge()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t User_GetAge_m29634304231DBFDC2847EC256E54BF25B2CEDD36 (User_t2054FCBCCC727858725CB0AC6A9CE0306D5986AD * __this, const RuntimeMethod* method);
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411 (int32_t* __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mFEA7EFA1A6E75B96B1B7BC4526AAC864BFF83CC9 (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___values0, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.Void MainBehaviour/PrivacyAgreeListener::.ctor(MainBehaviour)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PrivacyAgreeListener__ctor_m8D597215B33E7D3C071876D7BA69DF3588679700 (PrivacyAgreeListener_t7E277E2FBF137E9ABC871EE180DD7FFC9FDE5DEA * __this, MainBehaviour_tDE09AB0E3B7AB47BEC0D8229B68A94AA3FE0DEC6 * ___behaviour0, const RuntimeMethod* method);
// System.Void TGCenterSdk.Api.PrivacyPolicyHelper::SetAgreeListener(TGCenterSdk.Api.PrivacyPolicyHelper/AgreeListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PrivacyPolicyHelper_SetAgreeListener_m557D780B21D647C8D0C39806B6DB1E5CE2AE922A (PrivacyPolicyHelper_t5983E6361B35F6389228D994C018B16993468EA3 * __this, RuntimeObject* ___listener0, const RuntimeMethod* method);
// System.Void TGCenterSdk.Api.PrivacyPolicyHelper::ShowPrivacyDialog()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PrivacyPolicyHelper_ShowPrivacyDialog_mCEA153978D106F6BF76F14CCE4552BA5EE2C0DC5 (PrivacyPolicyHelper_t5983E6361B35F6389228D994C018B16993468EA3 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// TGCenterSdk.Common.IPrivacyPolicyHelperClient TGCenterSdk.Platforms.ClientFactory::PrivacyPolicyHelperClient()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ClientFactory_PrivacyPolicyHelperClient_m640B2DE7E30DACA6366CBCEC7A999C8FDD83F3FD (const RuntimeMethod* method);
// System.Void TGCenterSdk.Api.PrivacyPolicyHelper::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PrivacyPolicyHelper__ctor_m6EF58C5A21D285476284B395A1529F529830CC2F (PrivacyPolicyHelper_t5983E6361B35F6389228D994C018B16993468EA3 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.AndroidJavaProxy::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaProxy__ctor_m1E8F4C0D87B74B81C64A54A584B2FF4ECE571238 (AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF * __this, String_t* ___javaInterface0, const RuntimeMethod* method);
// UnityEngine.AndroidJavaObject TGCenterSdk.Platforms.Android.Utils::GetPlayerActivity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * Utils_GetPlayerActivity_m7B8DC76B225EEF0336FA47F348C7560E1C60559E (const RuntimeMethod* method);
// System.Void UnityEngine.AndroidJavaObject::.ctor(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject__ctor_m6146DBD19BCFFDB3D4F42C8D38491F354B58B001 (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, String_t* ___className0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method);
// System.Void TGCenterSdk.Platforms.iOS.PrivacyPolicyHelperClient::PrivacyAgreeCallback(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PrivacyPolicyHelperClient_PrivacyAgreeCallback_m24FA05F07A894D3E37B20E593D553B3A7158FCCF (intptr_t ___helperClient0, const RuntimeMethod* method);
// System.Void TGCenterSdk.Platforms.iOS.PrivacyPolicyHelperClient::PrivacyDisagreeCallback(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PrivacyPolicyHelperClient_PrivacyDisagreeCallback_m4DFCB29D58AFF2A83D733119B94207160EA984C9 (intptr_t ___helperClient0, const RuntimeMethod* method);
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
// !!0 UnityEngine.AndroidJavaObject::Call<System.Int32>(System.String,System.Object[])
inline int32_t AndroidJavaObject_Call_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m02A4D4C9FD8B15173829454766683BA424408A2A (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, String_t* ___methodName0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method)
{
	return ((  int32_t (*) (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E *, String_t*, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*, const RuntimeMethod*))AndroidJavaObject_Call_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m02A4D4C9FD8B15173829454766683BA424408A2A_gshared)(__this, ___methodName0, ___args1, method);
}
// System.Boolean AntiAddictionSdk.Platforms.iOS.Externs::AntiAddictionRealNameResultIsInitial(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Externs_AntiAddictionRealNameResultIsInitial_m9830C55664B50FD44223FC2D5EFD23F0DFFFD6B4 (intptr_t ___realNameResult0, const RuntimeMethod* method);
// System.Boolean AntiAddictionSdk.Platforms.iOS.Externs::AntiAddictionRealNameResultIsSuccess(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Externs_AntiAddictionRealNameResultIsSuccess_m709036BA2AF8E73FFBFF4006628B3AD89418DB1F (intptr_t ___realNameResult0, const RuntimeMethod* method);
// System.Boolean AntiAddictionSdk.Platforms.iOS.Externs::AntiAddictionRealNameResultIsProcessing(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Externs_AntiAddictionRealNameResultIsProcessing_mE4B868504A3D797564ADFD457C7952595248AB82 (intptr_t ___realNameResult0, const RuntimeMethod* method);
// System.Boolean AntiAddictionSdk.Platforms.iOS.Externs::AntiAddictionRealNameResultIsFail(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Externs_AntiAddictionRealNameResultIsFail_m25CBEB0619317D2BB683E8735376E9842E3891D6 (intptr_t ___realNameResult0, const RuntimeMethod* method);
// System.Int32 AntiAddictionSdk.Platforms.iOS.Externs::AntiAddictionRealNameResultGetResultCode(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Externs_AntiAddictionRealNameResultGetResultCode_mD060A7E97DF5938FA51E479BC179AA49702E2E10 (intptr_t ___realNameResult0, const RuntimeMethod* method);
// System.String AntiAddictionSdk.Platforms.iOS.Externs::AntiAddictionRealNameResultGetResultMsg(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Externs_AntiAddictionRealNameResultGetResultMsg_m2A62E976E4F8DF2BFB46BF1D5E67EF75E8454F0C (intptr_t ___realNameResult0, const RuntimeMethod* method);
// System.String AntiAddictionSdk.Platforms.iOS.Externs::AntiAddictionRealNameResultGetPlayerId(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Externs_AntiAddictionRealNameResultGetPlayerId_m0B3F8752CCF55DB7287B68678CCD1A9C31FAC413 (intptr_t ___realNameResult0, const RuntimeMethod* method);
// TGCenterSdk.Common.ITGCenterClient TGCenterSdk.Platforms.ClientFactory::TGCenterClient()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ClientFactory_TGCenterClient_m2F598A2CDFEE5773506AA9F74901DC90E7CFB7C7 (const RuntimeMethod* method);
// TGCenterSdk.Common.ITGCenterClient TGCenterSdk.Api.TGCenter::GetTGCenterClient()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TGCenter_GetTGCenterClient_m6B54B973A8AB5AD2B75A155ABD3AA9ED1933700E (const RuntimeMethod* method);
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
// !!0 UnityEngine.AndroidJavaObject::Call<System.Int64>(System.String,System.Object[])
inline int64_t AndroidJavaObject_Call_TisInt64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_m2E2FBAE10897A748859DD7EB19EBB1DB9BD02787 (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, String_t* ___methodName0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method)
{
	return ((  int64_t (*) (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E *, String_t*, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*, const RuntimeMethod*))AndroidJavaObject_Call_TisInt64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_m2E2FBAE10897A748859DD7EB19EBB1DB9BD02787_gshared)(__this, ___methodName0, ___args1, method);
}
// System.Void AntiAddictionSdk.Platforms.Android.LimitTipClient::.ctor(UnityEngine.AndroidJavaObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LimitTipClient__ctor_mECCB6623AC3E4524AD34B61D3AB8C2884939FC78 (LimitTipClient_t6CE7E256EC6BC4954FAB77171931D9D49B4E5125 * __this, AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * ___limitTip0, const RuntimeMethod* method);
// System.Void AntiAddictionSdk.Api.LimitTip::.ctor(AntiAddictionSdk.Common.ILimitTipClient)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LimitTip__ctor_m9FEC6EB86743288A0163CB0A98BAE9929C7D83F4 (LimitTip_tF8B5096C82EDA57B6870A2B503C91C61553700BD * __this, RuntimeObject* ___client0, const RuntimeMethod* method);
// System.Int32 AntiAddictionSdk.Platforms.iOS.Externs::AntiAddictionTimeLimitGetReason(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Externs_AntiAddictionTimeLimitGetReason_m406CD4EE3714CE2472181A56B14B27A5430DED03 (intptr_t ___timeLimit0, const RuntimeMethod* method);
// System.Boolean AntiAddictionSdk.Platforms.iOS.Externs::AntiAddictionTimeLimitIsLimit(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Externs_AntiAddictionTimeLimitIsLimit_m7B62275011668415405FFC3ECF727647CA771521 (intptr_t ___timeLimit0, const RuntimeMethod* method);
// System.Int64 AntiAddictionSdk.Platforms.iOS.Externs::AntiAddictionTimeLimitGetTimeToLimit(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t Externs_AntiAddictionTimeLimitGetTimeToLimit_m7FCEE5F41D80362C3A21B06A1DF9714634C5D335 (intptr_t ___timeLimit0, const RuntimeMethod* method);
// System.IntPtr AntiAddictionSdk.Platforms.iOS.Externs::AntiAddictionTimeLimitGetLimitTip(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Externs_AntiAddictionTimeLimitGetLimitTip_mFED1C2212827202CFC7501967CD169C5EE531346 (intptr_t ___timeLimit0, const RuntimeMethod* method);
// System.Void AntiAddictionSdk.Platforms.iOS.LimitTipClient::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LimitTipClient__ctor_m02341EF6BD7E5BBB7051CCA62F25581B9FB110DB (LimitTipClient_t6437A4B4C61A0FC6DE0DF1FD0A1633C54E30C134 * __this, intptr_t ___limitTip0, const RuntimeMethod* method);
// System.Void AntiAddictionSdk.Platforms.Android.RealNameResultClient::.ctor(UnityEngine.AndroidJavaObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RealNameResultClient__ctor_mA7AF5E06CC7F2DF103B0E9A461A0333B4BE37FCC (RealNameResultClient_t28FE6782285D421A473D8786DA3B7AFE9BFC044D * __this, AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * ___result0, const RuntimeMethod* method);
// System.Void AntiAddictionSdk.Api.RealNameResult::.ctor(AntiAddictionSdk.Common.IRealNameResultClient)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RealNameResult__ctor_mC362BC8500C00096D516DC79843544767A908C72 (RealNameResult_t72CCC4738CF4CCF98DB6E68337B920CA83FBD619 * __this, RuntimeObject* ___client0, const RuntimeMethod* method);
// System.IntPtr AntiAddictionSdk.Platforms.iOS.Externs::AntiAddictionUserGetRealNameResult(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Externs_AntiAddictionUserGetRealNameResult_mB0127BAA41148345068C0A56D215FD21CCF41103 (intptr_t ___user0, const RuntimeMethod* method);
// System.Void AntiAddictionSdk.Platforms.iOS.RealNameResultClient::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RealNameResultClient__ctor_m1BCF8B5C40C3EACBBE966D29544373D2C9DE92EB (RealNameResultClient_tBF949234076C9C3294A5104EF710ECE383DF2A51 * __this, intptr_t ___result0, const RuntimeMethod* method);
// System.Int32 AntiAddictionSdk.Platforms.iOS.Externs::AntiAddictionUserGetAge(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Externs_AntiAddictionUserGetAge_m8133CED1D13F179C3FDD8BC6524D275118D4EBF3 (intptr_t ___user0, const RuntimeMethod* method);
// System.Boolean AntiAddictionSdk.Platforms.iOS.Externs::AntiAddictionUserIsTourist(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Externs_AntiAddictionUserIsTourist_m638C6FAF0B4EF56AA18FAD6DA8BF73A13AE7FF3B (intptr_t ___user0, const RuntimeMethod* method);
// System.Boolean AntiAddictionSdk.Platforms.iOS.Externs::AntiAddictionUserIsChild(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Externs_AntiAddictionUserIsChild_m51FCBD9D014805A1A06773CB3837A05759D54478 (intptr_t ___user0, const RuntimeMethod* method);
// System.Boolean AntiAddictionSdk.Platforms.iOS.Externs::AntiAddictionUserIsAdult(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Externs_AntiAddictionUserIsAdult_mA12AE33C3D07A948C783F67A7485363C8C0898D7 (intptr_t ___user0, const RuntimeMethod* method);
// !!0 UnityEngine.AndroidJavaObject::GetStatic<UnityEngine.AndroidJavaObject>(System.String)
inline AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * AndroidJavaObject_GetStatic_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC84C97A7EC20ED712D21107C9FA32E0785021153 (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, String_t* ___fieldName0, const RuntimeMethod* method)
{
	return ((  AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * (*) (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E *, String_t*, const RuntimeMethod*))AndroidJavaObject_GetStatic_TisRuntimeObject_mEC743ECF275CB896DE039A9FC1E5672B30C8B3D0_gshared)(__this, ___fieldName0, method);
}
// System.Void MainBehaviour::DealDialogAgreeResult(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainBehaviour_DealDialogAgreeResult_m16741BD575297CAEBAA7ADD27EDC6591D5FD09C9 (MainBehaviour_tDE09AB0E3B7AB47BEC0D8229B68A94AA3FE0DEC6 * __this, bool ___agree0, const RuntimeMethod* method);
// System.Int32 AntiAddictionSdk.Api.TimeLimit::GetReason()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TimeLimit_GetReason_m5FC6E4A3363B5FBD015F70C8C742F3BDA3BCDAF3 (TimeLimit_t34F8F02496A68C19246A6EDB732D70E8DAD79C9F * __this, const RuntimeMethod* method);
// System.Boolean AntiAddictionSdk.Api.TimeLimit::IsLimit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TimeLimit_IsLimit_mC2E840FE639887FF4C8F720E80DE4418740C6B69 (TimeLimit_t34F8F02496A68C19246A6EDB732D70E8DAD79C9F * __this, const RuntimeMethod* method);
// System.String System.Boolean::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Boolean_ToString_m59BB8456DD05A874BBD756E57EA8AD983287015C (bool* __this, const RuntimeMethod* method);
// System.Int64 AntiAddictionSdk.Api.TimeLimit::GetTimeToLimit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t TimeLimit_GetTimeToLimit_mC5E52B40F3822808BADFFA459E944775EAD906F8 (TimeLimit_t34F8F02496A68C19246A6EDB732D70E8DAD79C9F * __this, const RuntimeMethod* method);
// System.String System.Int64::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int64_ToString_m8AAA883F340993DCDF339C208F3416C3BA82589F (int64_t* __this, const RuntimeMethod* method);
// AntiAddictionSdk.Api.LimitTip AntiAddictionSdk.Api.TimeLimit::GetLimitTip()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LimitTip_tF8B5096C82EDA57B6870A2B503C91C61553700BD * TimeLimit_GetLimitTip_m17F60FE0EC1E0938C9614FFC6349B5CA6B773692 (TimeLimit_t34F8F02496A68C19246A6EDB732D70E8DAD79C9F * __this, const RuntimeMethod* method);
// System.String AntiAddictionSdk.Api.LimitTip::GetTitle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* LimitTip_GetTitle_m8949F275C98B5C8C9A690C232A2BCB80F54A6BC2 (LimitTip_tF8B5096C82EDA57B6870A2B503C91C61553700BD * __this, const RuntimeMethod* method);
// System.String AntiAddictionSdk.Api.LimitTip::GetDesc()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* LimitTip_GetDesc_mE9DB1FAE7D1C631BB44A7B8B1E520209575DCD46 (LimitTip_tF8B5096C82EDA57B6870A2B503C91C61553700BD * __this, const RuntimeMethod* method);
// System.String AntiAddictionSdk.Api.LimitTip::GetButton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* LimitTip_GetButton_m035C2A34A28846CED81CF98416866E91134230F0 (LimitTip_tF8B5096C82EDA57B6870A2B503C91C61553700BD * __this, const RuntimeMethod* method);
// System.Boolean AntiAddictionSdk.Api.LimitTip::CanRealName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LimitTip_CanRealName_m1A7BCAC4EC99635AE2BA67556F205E9EB62FDA62 (LimitTip_tF8B5096C82EDA57B6870A2B503C91C61553700BD * __this, const RuntimeMethod* method);
IL2CPP_EXTERN_C void DEFAULT_CALL AntiAddictionRelease(intptr_t);
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL AntiAddictionSetAntiAddictionClient(intptr_t);
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL AntiAddictionGetUser();
IL2CPP_EXTERN_C void DEFAULT_CALL AntiAddictionRealName(Il2CppMethodPointer);
IL2CPP_EXTERN_C void DEFAULT_CALL AntiAddictionRealNameUseCustomUI(char*, char*, Il2CppMethodPointer);
IL2CPP_EXTERN_C void DEFAULT_CALL AntiAddictionSetAutoShowTimeLimitPage(int32_t);
IL2CPP_EXTERN_C void DEFAULT_CALL AntiAddictionSetTimeLimitCallback(Il2CppMethodPointer);
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL AntiAddictionCheckTimeLimitStatus();
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL AntiAddictionLogout();
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL AntiAddictionUserGetRealNameResult(intptr_t);
IL2CPP_EXTERN_C int32_t DEFAULT_CALL AntiAddictionUserGetAge(intptr_t);
IL2CPP_EXTERN_C int32_t DEFAULT_CALL AntiAddictionUserIsTourist(intptr_t);
IL2CPP_EXTERN_C int32_t DEFAULT_CALL AntiAddictionUserIsChild(intptr_t);
IL2CPP_EXTERN_C int32_t DEFAULT_CALL AntiAddictionUserIsAdult(intptr_t);
IL2CPP_EXTERN_C int32_t DEFAULT_CALL AntiAddictionRealNameResultIsInitial(intptr_t);
IL2CPP_EXTERN_C int32_t DEFAULT_CALL AntiAddictionRealNameResultIsSuccess(intptr_t);
IL2CPP_EXTERN_C int32_t DEFAULT_CALL AntiAddictionRealNameResultIsProcessing(intptr_t);
IL2CPP_EXTERN_C int32_t DEFAULT_CALL AntiAddictionRealNameResultIsFail(intptr_t);
IL2CPP_EXTERN_C int32_t DEFAULT_CALL AntiAddictionRealNameResultGetResultCode(intptr_t);
IL2CPP_EXTERN_C char* DEFAULT_CALL AntiAddictionRealNameResultGetResultMsg(intptr_t);
IL2CPP_EXTERN_C char* DEFAULT_CALL AntiAddictionRealNameResultGetPlayerId(intptr_t);
IL2CPP_EXTERN_C int32_t DEFAULT_CALL AntiAddictionTimeLimitGetReason(intptr_t);
IL2CPP_EXTERN_C int32_t DEFAULT_CALL AntiAddictionTimeLimitIsLimit(intptr_t);
IL2CPP_EXTERN_C int64_t DEFAULT_CALL AntiAddictionTimeLimitGetTimeToLimit(intptr_t);
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL AntiAddictionTimeLimitGetLimitTip(intptr_t);
IL2CPP_EXTERN_C char* DEFAULT_CALL AntiAddictionLimitTipGetTitle(intptr_t);
IL2CPP_EXTERN_C char* DEFAULT_CALL AntiAddictionLimitTipGetDesc(intptr_t);
IL2CPP_EXTERN_C char* DEFAULT_CALL AntiAddictionLimitTipGetButton(intptr_t);
IL2CPP_EXTERN_C int32_t DEFAULT_CALL AntiAddictionLimitTipCanRealName(intptr_t);
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
// AntiAddictionSdk.Common.IAntiAddictionClient AntiAddictionSdk.Api.AntiAddiction::GetAntiAddictionClient()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AntiAddiction_GetAntiAddictionClient_m260D02229444F2CEA132606C2E9A6E5228D2B69C (const RuntimeMethod* method)
{
	{
		// return ClientFactory.AntiAddictionClient();
		RuntimeObject* L_0;
		L_0 = ClientFactory_AntiAddictionClient_mCEB32581488E3ED5FA908BCAF1894727E0D0121A(/*hidden argument*/NULL);
		return L_0;
	}
}
// AntiAddictionSdk.Api.User AntiAddictionSdk.Api.AntiAddiction::GetUser()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR User_t2054FCBCCC727858725CB0AC6A9CE0306D5986AD * AntiAddiction_GetUser_m129E8784D396FB5A92E7636EDF15F9D15FFF7145 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AntiAddiction_t1E52AAFE7B9A8CA505BFF17DC42E16946EA04079_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAntiAddictionClient_t8A81CDB2D72E0FF2CD586E1B10B7BC39958AEDAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return Client.GetUser();
		IL2CPP_RUNTIME_CLASS_INIT(AntiAddiction_t1E52AAFE7B9A8CA505BFF17DC42E16946EA04079_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((AntiAddiction_t1E52AAFE7B9A8CA505BFF17DC42E16946EA04079_StaticFields*)il2cpp_codegen_static_fields_for(AntiAddiction_t1E52AAFE7B9A8CA505BFF17DC42E16946EA04079_il2cpp_TypeInfo_var))->get_Client_0();
		NullCheck(L_0);
		User_t2054FCBCCC727858725CB0AC6A9CE0306D5986AD * L_1;
		L_1 = InterfaceFuncInvoker0< User_t2054FCBCCC727858725CB0AC6A9CE0306D5986AD * >::Invoke(0 /* AntiAddictionSdk.Api.User AntiAddictionSdk.Common.IAntiAddictionClient::GetUser() */, IAntiAddictionClient_t8A81CDB2D72E0FF2CD586E1B10B7BC39958AEDAA_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Void AntiAddictionSdk.Api.AntiAddiction::RealName(AntiAddictionSdk.Api.RealNameCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AntiAddiction_RealName_mAEEB81D1F823CA662476A28CD53E093D6C825889 (RuntimeObject* ___callback0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AntiAddiction_t1E52AAFE7B9A8CA505BFF17DC42E16946EA04079_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAntiAddictionClient_t8A81CDB2D72E0FF2CD586E1B10B7BC39958AEDAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Client.RealName(callback);
		IL2CPP_RUNTIME_CLASS_INIT(AntiAddiction_t1E52AAFE7B9A8CA505BFF17DC42E16946EA04079_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((AntiAddiction_t1E52AAFE7B9A8CA505BFF17DC42E16946EA04079_StaticFields*)il2cpp_codegen_static_fields_for(AntiAddiction_t1E52AAFE7B9A8CA505BFF17DC42E16946EA04079_il2cpp_TypeInfo_var))->get_Client_0();
		RuntimeObject* L_1 = ___callback0;
		NullCheck(L_0);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1 /* System.Void AntiAddictionSdk.Common.IAntiAddictionClient::RealName(AntiAddictionSdk.Api.RealNameCallback) */, IAntiAddictionClient_t8A81CDB2D72E0FF2CD586E1B10B7BC39958AEDAA_il2cpp_TypeInfo_var, L_0, L_1);
		// }
		return;
	}
}
// System.Void AntiAddictionSdk.Api.AntiAddiction::RealName(System.String,System.String,AntiAddictionSdk.Api.RealNameCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AntiAddiction_RealName_m8EC2673C81604A97333AC0B22B5E661C17174DE1 (String_t* ___name0, String_t* ___idNumber1, RuntimeObject* ___callback2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AntiAddiction_t1E52AAFE7B9A8CA505BFF17DC42E16946EA04079_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAntiAddictionClient_t8A81CDB2D72E0FF2CD586E1B10B7BC39958AEDAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Client.RealName(name, idNumber, callback);
		IL2CPP_RUNTIME_CLASS_INIT(AntiAddiction_t1E52AAFE7B9A8CA505BFF17DC42E16946EA04079_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((AntiAddiction_t1E52AAFE7B9A8CA505BFF17DC42E16946EA04079_StaticFields*)il2cpp_codegen_static_fields_for(AntiAddiction_t1E52AAFE7B9A8CA505BFF17DC42E16946EA04079_il2cpp_TypeInfo_var))->get_Client_0();
		String_t* L_1 = ___name0;
		String_t* L_2 = ___idNumber1;
		RuntimeObject* L_3 = ___callback2;
		NullCheck(L_0);
		InterfaceActionInvoker3< String_t*, String_t*, RuntimeObject* >::Invoke(2 /* System.Void AntiAddictionSdk.Common.IAntiAddictionClient::RealName(System.String,System.String,AntiAddictionSdk.Api.RealNameCallback) */, IAntiAddictionClient_t8A81CDB2D72E0FF2CD586E1B10B7BC39958AEDAA_il2cpp_TypeInfo_var, L_0, L_1, L_2, L_3);
		// }
		return;
	}
}
// System.Void AntiAddictionSdk.Api.AntiAddiction::SetAutoShowTimeLimitPage(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AntiAddiction_SetAutoShowTimeLimitPage_mFBDEFFBC0A0D5C5BE13C975615D5C1F3A92BBF04 (bool ___show0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AntiAddiction_t1E52AAFE7B9A8CA505BFF17DC42E16946EA04079_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAntiAddictionClient_t8A81CDB2D72E0FF2CD586E1B10B7BC39958AEDAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Client.SetAutoShowTimeLimitPage(show);
		IL2CPP_RUNTIME_CLASS_INIT(AntiAddiction_t1E52AAFE7B9A8CA505BFF17DC42E16946EA04079_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((AntiAddiction_t1E52AAFE7B9A8CA505BFF17DC42E16946EA04079_StaticFields*)il2cpp_codegen_static_fields_for(AntiAddiction_t1E52AAFE7B9A8CA505BFF17DC42E16946EA04079_il2cpp_TypeInfo_var))->get_Client_0();
		bool L_1 = ___show0;
		NullCheck(L_0);
		InterfaceActionInvoker1< bool >::Invoke(3 /* System.Void AntiAddictionSdk.Common.IAntiAddictionClient::SetAutoShowTimeLimitPage(System.Boolean) */, IAntiAddictionClient_t8A81CDB2D72E0FF2CD586E1B10B7BC39958AEDAA_il2cpp_TypeInfo_var, L_0, L_1);
		// }
		return;
	}
}
// System.Void AntiAddictionSdk.Api.AntiAddiction::SetTimeLimitCallback(AntiAddictionSdk.Api.TimeLimitCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AntiAddiction_SetTimeLimitCallback_mE6F8CB0B25D95BA5F1ED2CE54744E285887F2D01 (RuntimeObject* ___callback0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AntiAddiction_t1E52AAFE7B9A8CA505BFF17DC42E16946EA04079_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAntiAddictionClient_t8A81CDB2D72E0FF2CD586E1B10B7BC39958AEDAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Client.SetTimeLimitCallback(callback);
		IL2CPP_RUNTIME_CLASS_INIT(AntiAddiction_t1E52AAFE7B9A8CA505BFF17DC42E16946EA04079_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((AntiAddiction_t1E52AAFE7B9A8CA505BFF17DC42E16946EA04079_StaticFields*)il2cpp_codegen_static_fields_for(AntiAddiction_t1E52AAFE7B9A8CA505BFF17DC42E16946EA04079_il2cpp_TypeInfo_var))->get_Client_0();
		RuntimeObject* L_1 = ___callback0;
		NullCheck(L_0);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(4 /* System.Void AntiAddictionSdk.Common.IAntiAddictionClient::SetTimeLimitCallback(AntiAddictionSdk.Api.TimeLimitCallback) */, IAntiAddictionClient_t8A81CDB2D72E0FF2CD586E1B10B7BC39958AEDAA_il2cpp_TypeInfo_var, L_0, L_1);
		// }
		return;
	}
}
// System.Void AntiAddictionSdk.Api.AntiAddiction::Logout()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AntiAddiction_Logout_m2E8A8E3F7F1FB817C3A3BC1AB432DC00CDD6D62F (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AntiAddiction_t1E52AAFE7B9A8CA505BFF17DC42E16946EA04079_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAntiAddictionClient_t8A81CDB2D72E0FF2CD586E1B10B7BC39958AEDAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Client.Logout();
		IL2CPP_RUNTIME_CLASS_INIT(AntiAddiction_t1E52AAFE7B9A8CA505BFF17DC42E16946EA04079_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((AntiAddiction_t1E52AAFE7B9A8CA505BFF17DC42E16946EA04079_StaticFields*)il2cpp_codegen_static_fields_for(AntiAddiction_t1E52AAFE7B9A8CA505BFF17DC42E16946EA04079_il2cpp_TypeInfo_var))->get_Client_0();
		NullCheck(L_0);
		InterfaceActionInvoker0::Invoke(6 /* System.Void AntiAddictionSdk.Common.IAntiAddictionClient::Logout() */, IAntiAddictionClient_t8A81CDB2D72E0FF2CD586E1B10B7BC39958AEDAA_il2cpp_TypeInfo_var, L_0);
		// }
		return;
	}
}
// System.Void AntiAddictionSdk.Api.AntiAddiction::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AntiAddiction__cctor_m5E158B878B408FA1B400F4A643C0DCB0871D89C8 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AntiAddiction_t1E52AAFE7B9A8CA505BFF17DC42E16946EA04079_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static IAntiAddictionClient Client = GetAntiAddictionClient();
		RuntimeObject* L_0;
		L_0 = AntiAddiction_GetAntiAddictionClient_m260D02229444F2CEA132606C2E9A6E5228D2B69C(/*hidden argument*/NULL);
		((AntiAddiction_t1E52AAFE7B9A8CA505BFF17DC42E16946EA04079_StaticFields*)il2cpp_codegen_static_fields_for(AntiAddiction_t1E52AAFE7B9A8CA505BFF17DC42E16946EA04079_il2cpp_TypeInfo_var))->set_Client_0(L_0);
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
// System.Void AntiAddictionSdk.Platforms.Android.AntiAddictionClient::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AntiAddictionClient__ctor_mACEEEA4F1D7E7979DC45B91ADCB3A5DA4198A81A (AntiAddictionClient_tBCBB7C82C199D2B807123ADAF494CD2B3620CD8D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_CallStatic_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mAD48C38D66AB67D0F0274D195F4A99CB7AB589F2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2063737B07B6658BC2E1EC3128D4E09E57CA123E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE74B5E4D0CE52F386C4A57C9B6466BD67B84D781);
		s_Il2CppMethodInitialized = true;
	}
	AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * V_0 = NULL;
	{
		// public AntiAddictionClient() {
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// AndroidJavaClass antiAddictionClass = new AndroidJavaClass(Utils.Class_AntiAddiction);
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_0 = (AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 *)il2cpp_codegen_object_new(AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4_il2cpp_TypeInfo_var);
		AndroidJavaClass__ctor_mEFF9F51871F231955D97DABDE9AB4A6B4EDA5541(L_0, _stringLiteralE74B5E4D0CE52F386C4A57C9B6466BD67B84D781, /*hidden argument*/NULL);
		V_0 = L_0;
		// AntiAddiction = antiAddictionClass.CallStatic<AndroidJavaObject>("getInstance");
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_1 = V_0;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2;
		L_2 = Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_RuntimeMethod_var);
		NullCheck(L_1);
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_3;
		L_3 = AndroidJavaObject_CallStatic_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mAD48C38D66AB67D0F0274D195F4A99CB7AB589F2(L_1, _stringLiteral2063737B07B6658BC2E1EC3128D4E09E57CA123E, L_2, /*hidden argument*/AndroidJavaObject_CallStatic_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mAD48C38D66AB67D0F0274D195F4A99CB7AB589F2_RuntimeMethod_var);
		__this->set_AntiAddiction_0(L_3);
		// }
		return;
	}
}
// AntiAddictionSdk.Api.User AntiAddictionSdk.Platforms.Android.AntiAddictionClient::GetUser()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR User_t2054FCBCCC727858725CB0AC6A9CE0306D5986AD * AntiAddictionClient_GetUser_m08E24061FC826DF761A1D12E8B1C9F0C60F7B258 (AntiAddictionClient_tBCBB7C82C199D2B807123ADAF494CD2B3620CD8D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC5ED59BBD9C24EFFD98D8C3819C7E15DFE08F412_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UserClient_t93F1B9B5458115963B533A542534460DFA5C47EE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&User_t2054FCBCCC727858725CB0AC6A9CE0306D5986AD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE4C8060854D45C499CA600A040743349CA59B022);
		s_Il2CppMethodInitialized = true;
	}
	{
		// AndroidJavaObject user = AntiAddiction.Call<AndroidJavaObject>("getUser");
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_0 = __this->get_AntiAddiction_0();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1;
		L_1 = Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_RuntimeMethod_var);
		NullCheck(L_0);
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_2;
		L_2 = AndroidJavaObject_Call_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC5ED59BBD9C24EFFD98D8C3819C7E15DFE08F412(L_0, _stringLiteralE4C8060854D45C499CA600A040743349CA59B022, L_1, /*hidden argument*/AndroidJavaObject_Call_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC5ED59BBD9C24EFFD98D8C3819C7E15DFE08F412_RuntimeMethod_var);
		// return new User(new UserClient(user));
		UserClient_t93F1B9B5458115963B533A542534460DFA5C47EE * L_3 = (UserClient_t93F1B9B5458115963B533A542534460DFA5C47EE *)il2cpp_codegen_object_new(UserClient_t93F1B9B5458115963B533A542534460DFA5C47EE_il2cpp_TypeInfo_var);
		UserClient__ctor_m20BE7CE6E321381E2A6FEF6D079DFFA002323390(L_3, L_2, /*hidden argument*/NULL);
		User_t2054FCBCCC727858725CB0AC6A9CE0306D5986AD * L_4 = (User_t2054FCBCCC727858725CB0AC6A9CE0306D5986AD *)il2cpp_codegen_object_new(User_t2054FCBCCC727858725CB0AC6A9CE0306D5986AD_il2cpp_TypeInfo_var);
		User__ctor_mD6909B95167AF2D588F815BD3F4AC5546A3D187B(L_4, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Void AntiAddictionSdk.Platforms.Android.AntiAddictionClient::RealName(AntiAddictionSdk.Api.RealNameCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AntiAddictionClient_RealName_m56F8F9F321E7BC702B111F9A3F11C7D3850B2175 (AntiAddictionClient_tBCBB7C82C199D2B807123ADAF494CD2B3620CD8D * __this, RuntimeObject* ___callback0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidRealNameCallback_tF83DC8562F54CC5DD7BDEEA2AC573DA5292F2745_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4435287BC80303EE8F6D9A6B8B55BC42AF84E9E3);
		s_Il2CppMethodInitialized = true;
	}
	{
		// AntiAddiction.Call("realName", new AndroidRealNameCallback(callback));
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_0 = __this->get_AntiAddiction_0();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = L_1;
		RuntimeObject* L_3 = ___callback0;
		AndroidRealNameCallback_tF83DC8562F54CC5DD7BDEEA2AC573DA5292F2745 * L_4 = (AndroidRealNameCallback_tF83DC8562F54CC5DD7BDEEA2AC573DA5292F2745 *)il2cpp_codegen_object_new(AndroidRealNameCallback_tF83DC8562F54CC5DD7BDEEA2AC573DA5292F2745_il2cpp_TypeInfo_var);
		AndroidRealNameCallback__ctor_m2FB0F2D80C466DB1F65E11ACA8562CAC46404BF4(L_4, L_3, /*hidden argument*/NULL);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_4);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_4);
		NullCheck(L_0);
		AndroidJavaObject_Call_mBB226DA52CE5A2FCD9A2D42BC7FB4272E094B76D(L_0, _stringLiteral4435287BC80303EE8F6D9A6B8B55BC42AF84E9E3, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void AntiAddictionSdk.Platforms.Android.AntiAddictionClient::RealName(System.String,System.String,AntiAddictionSdk.Api.RealNameCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AntiAddictionClient_RealName_m13A047470F89F9B310D54BD801F4F28C0D845C0D (AntiAddictionClient_tBCBB7C82C199D2B807123ADAF494CD2B3620CD8D * __this, String_t* ___name0, String_t* ___idNumber1, RuntimeObject* ___callback2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidRealNameCallback_tF83DC8562F54CC5DD7BDEEA2AC573DA5292F2745_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4435287BC80303EE8F6D9A6B8B55BC42AF84E9E3);
		s_Il2CppMethodInitialized = true;
	}
	{
		// AntiAddiction.Call("realName", name, idNumber, new AndroidRealNameCallback(callback));
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_0 = __this->get_AntiAddiction_0();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)3);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = L_1;
		String_t* L_3 = ___name0;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_3);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_4 = L_2;
		String_t* L_5 = ___idNumber1;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_5);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_6 = L_4;
		RuntimeObject* L_7 = ___callback2;
		AndroidRealNameCallback_tF83DC8562F54CC5DD7BDEEA2AC573DA5292F2745 * L_8 = (AndroidRealNameCallback_tF83DC8562F54CC5DD7BDEEA2AC573DA5292F2745 *)il2cpp_codegen_object_new(AndroidRealNameCallback_tF83DC8562F54CC5DD7BDEEA2AC573DA5292F2745_il2cpp_TypeInfo_var);
		AndroidRealNameCallback__ctor_m2FB0F2D80C466DB1F65E11ACA8562CAC46404BF4(L_8, L_7, /*hidden argument*/NULL);
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_8);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_8);
		NullCheck(L_0);
		AndroidJavaObject_Call_mBB226DA52CE5A2FCD9A2D42BC7FB4272E094B76D(L_0, _stringLiteral4435287BC80303EE8F6D9A6B8B55BC42AF84E9E3, L_6, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void AntiAddictionSdk.Platforms.Android.AntiAddictionClient::SetAutoShowTimeLimitPage(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AntiAddictionClient_SetAutoShowTimeLimitPage_mD65A58732309017BAF2C0317F00294825B0F0C92 (AntiAddictionClient_tBCBB7C82C199D2B807123ADAF494CD2B3620CD8D * __this, bool ___show0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD59876AEF3D62D1EDFA870BD90F3F21453232AB4);
		s_Il2CppMethodInitialized = true;
	}
	{
		// AntiAddiction.Call("setAutoShowTimeLimitPage", show);
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_0 = __this->get_AntiAddiction_0();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = L_1;
		bool L_3 = ___show0;
		bool L_4 = L_3;
		RuntimeObject * L_5 = Box(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var, &L_4);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_5);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_5);
		NullCheck(L_0);
		AndroidJavaObject_Call_mBB226DA52CE5A2FCD9A2D42BC7FB4272E094B76D(L_0, _stringLiteralD59876AEF3D62D1EDFA870BD90F3F21453232AB4, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void AntiAddictionSdk.Platforms.Android.AntiAddictionClient::SetTimeLimitCallback(AntiAddictionSdk.Api.TimeLimitCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AntiAddictionClient_SetTimeLimitCallback_m389F6049C81A7772F52A41AE12F18624FF75765F (AntiAddictionClient_tBCBB7C82C199D2B807123ADAF494CD2B3620CD8D * __this, RuntimeObject* ___callback0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidTimeLimitCallback_t714DA078A7FA04E959D0CF4F572CB9B34606B6B7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral00954A73839D9575B977D6B7EA4B260B673A2FCB);
		s_Il2CppMethodInitialized = true;
	}
	AndroidTimeLimitCallback_t714DA078A7FA04E959D0CF4F572CB9B34606B6B7 * V_0 = NULL;
	{
		// AndroidTimeLimitCallback androidCallback = new AndroidTimeLimitCallback(callback);
		RuntimeObject* L_0 = ___callback0;
		AndroidTimeLimitCallback_t714DA078A7FA04E959D0CF4F572CB9B34606B6B7 * L_1 = (AndroidTimeLimitCallback_t714DA078A7FA04E959D0CF4F572CB9B34606B6B7 *)il2cpp_codegen_object_new(AndroidTimeLimitCallback_t714DA078A7FA04E959D0CF4F572CB9B34606B6B7_il2cpp_TypeInfo_var);
		AndroidTimeLimitCallback__ctor_mA67692D6FF2E14D91D7AC7BD7D21A7A5BF41390D(L_1, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// AntiAddiction.Call("registerTimeLimitCallback", androidCallback);
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_2 = __this->get_AntiAddiction_0();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_3 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_4 = L_3;
		AndroidTimeLimitCallback_t714DA078A7FA04E959D0CF4F572CB9B34606B6B7 * L_5 = V_0;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_5);
		NullCheck(L_2);
		AndroidJavaObject_Call_mBB226DA52CE5A2FCD9A2D42BC7FB4272E094B76D(L_2, _stringLiteral00954A73839D9575B977D6B7EA4B260B673A2FCB, L_4, /*hidden argument*/NULL);
		// }
		return;
	}
}
// AntiAddictionSdk.Api.TimeLimit AntiAddictionSdk.Platforms.Android.AntiAddictionClient::CheckTimeLimitStatus()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeLimit_t34F8F02496A68C19246A6EDB732D70E8DAD79C9F * AntiAddictionClient_CheckTimeLimitStatus_mA678B2AF5D8F36BDFAE61493D1D3FBB328298829 (AntiAddictionClient_tBCBB7C82C199D2B807123ADAF494CD2B3620CD8D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC5ED59BBD9C24EFFD98D8C3819C7E15DFE08F412_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TimeLimitClient_t2B20BA4A4E97557CD346C1B50D9393EEA30D0919_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TimeLimit_t34F8F02496A68C19246A6EDB732D70E8DAD79C9F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral70EE6BB1D172A87933F3222A4A739221C3327F94);
		s_Il2CppMethodInitialized = true;
	}
	{
		// AndroidJavaObject timeLimit = AntiAddiction.Call<AndroidJavaObject>("checkTimeLimitStatus");
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_0 = __this->get_AntiAddiction_0();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1;
		L_1 = Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_RuntimeMethod_var);
		NullCheck(L_0);
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_2;
		L_2 = AndroidJavaObject_Call_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC5ED59BBD9C24EFFD98D8C3819C7E15DFE08F412(L_0, _stringLiteral70EE6BB1D172A87933F3222A4A739221C3327F94, L_1, /*hidden argument*/AndroidJavaObject_Call_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC5ED59BBD9C24EFFD98D8C3819C7E15DFE08F412_RuntimeMethod_var);
		// return new TimeLimit(new TimeLimitClient(timeLimit));
		TimeLimitClient_t2B20BA4A4E97557CD346C1B50D9393EEA30D0919 * L_3 = (TimeLimitClient_t2B20BA4A4E97557CD346C1B50D9393EEA30D0919 *)il2cpp_codegen_object_new(TimeLimitClient_t2B20BA4A4E97557CD346C1B50D9393EEA30D0919_il2cpp_TypeInfo_var);
		TimeLimitClient__ctor_m1DF010F1D024CC9C772AD9B44F345C363032912C(L_3, L_2, /*hidden argument*/NULL);
		TimeLimit_t34F8F02496A68C19246A6EDB732D70E8DAD79C9F * L_4 = (TimeLimit_t34F8F02496A68C19246A6EDB732D70E8DAD79C9F *)il2cpp_codegen_object_new(TimeLimit_t34F8F02496A68C19246A6EDB732D70E8DAD79C9F_il2cpp_TypeInfo_var);
		TimeLimit__ctor_m67E9BF4FF91D1C5608D3630A8B205686CFC9BA64(L_4, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Void AntiAddictionSdk.Platforms.Android.AntiAddictionClient::Logout()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AntiAddictionClient_Logout_m1ADC94FE6423D10A8210A96CEFB0176335008F1F (AntiAddictionClient_tBCBB7C82C199D2B807123ADAF494CD2B3620CD8D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEE9ECEEE821B4384B9C5CA185AE74CA1F7525133);
		s_Il2CppMethodInitialized = true;
	}
	{
		// AntiAddiction.Call("logout");
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_0 = __this->get_AntiAddiction_0();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1;
		L_1 = Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_RuntimeMethod_var);
		NullCheck(L_0);
		AndroidJavaObject_Call_mBB226DA52CE5A2FCD9A2D42BC7FB4272E094B76D(L_0, _stringLiteralEE9ECEEE821B4384B9C5CA185AE74CA1F7525133, L_1, /*hidden argument*/NULL);
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
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_AntiAddictionClient_iOSRealNameCallback_m284F8E203C7C2675BEF08E8DCFED4109D61E1BC0(intptr_t ___antiAddictionClient0, intptr_t ___user1)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	AntiAddictionClient_iOSRealNameCallback_m284F8E203C7C2675BEF08E8DCFED4109D61E1BC0(___antiAddictionClient0, ___user1, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_AntiAddictionClient_iOSTimeLimitCallback_mC49A5C16531B4373507A41085855D3DAB931B3C5(intptr_t ___antiAddictionClient0, intptr_t ___timeLimit1)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	AntiAddictionClient_iOSTimeLimitCallback_mC49A5C16531B4373507A41085855D3DAB931B3C5(___antiAddictionClient0, ___timeLimit1, NULL);

}
// System.Void AntiAddictionSdk.Platforms.iOS.AntiAddictionClient::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AntiAddictionClient__ctor_m3BC71D6D6C47BE36F5F55EF2A5133BCE299DBCC3 (AntiAddictionClient_t11FAEEBC7A7F56BE40C3C3E4E3477728AE7CD6C2 * __this, const RuntimeMethod* method)
{
	{
		// public AntiAddictionClient()
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// mAntiAddictionClientPtr = (IntPtr)GCHandle.Alloc(this);
		GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  L_0;
		L_0 = GCHandle_Alloc_m937829FAD1C69F168CF045B9406228AC9F8B9389(__this, /*hidden argument*/NULL);
		intptr_t L_1;
		L_1 = GCHandle_op_Explicit_m0A74179B3DD6D87F0863EF55176F924D641E42BF(L_0, /*hidden argument*/NULL);
		__this->set_mAntiAddictionClientPtr_0((intptr_t)L_1);
		// Externs.AntiAddictionSetAntiAddictionClient(mAntiAddictionClientPtr);
		intptr_t L_2 = __this->get_mAntiAddictionClientPtr_0();
		intptr_t L_3;
		L_3 = Externs_AntiAddictionSetAntiAddictionClient_mCD7C172444E618D4379FE8CEB8E3E2FD31CCD4E8((intptr_t)L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// AntiAddictionSdk.Api.User AntiAddictionSdk.Platforms.iOS.AntiAddictionClient::GetUser()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR User_t2054FCBCCC727858725CB0AC6A9CE0306D5986AD * AntiAddictionClient_GetUser_mFCF866F28356F0804A67D50EF3B779A81A28219C (AntiAddictionClient_t11FAEEBC7A7F56BE40C3C3E4E3477728AE7CD6C2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UserClient_t34C98041DA8CAF42A5F3509756F7814AA9696FE5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&User_t2054FCBCCC727858725CB0AC6A9CE0306D5986AD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new User(new UserClient(Externs.AntiAddictionGetUser()));
		intptr_t L_0;
		L_0 = Externs_AntiAddictionGetUser_m4BB575AC4CDFB7BD778537D408E40226A6FC2715(/*hidden argument*/NULL);
		UserClient_t34C98041DA8CAF42A5F3509756F7814AA9696FE5 * L_1 = (UserClient_t34C98041DA8CAF42A5F3509756F7814AA9696FE5 *)il2cpp_codegen_object_new(UserClient_t34C98041DA8CAF42A5F3509756F7814AA9696FE5_il2cpp_TypeInfo_var);
		UserClient__ctor_m786A98666B64BD7BBF20CF0DA3D1C85495236C50(L_1, (intptr_t)L_0, /*hidden argument*/NULL);
		User_t2054FCBCCC727858725CB0AC6A9CE0306D5986AD * L_2 = (User_t2054FCBCCC727858725CB0AC6A9CE0306D5986AD *)il2cpp_codegen_object_new(User_t2054FCBCCC727858725CB0AC6A9CE0306D5986AD_il2cpp_TypeInfo_var);
		User__ctor_mD6909B95167AF2D588F815BD3F4AC5546A3D187B(L_2, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Void AntiAddictionSdk.Platforms.iOS.AntiAddictionClient::RealName(AntiAddictionSdk.Api.RealNameCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AntiAddictionClient_RealName_m5B0564E5C4A99037ABFF694DA8F2EA832E61E2C9 (AntiAddictionClient_t11FAEEBC7A7F56BE40C3C3E4E3477728AE7CD6C2 * __this, RuntimeObject* ___callback0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AntiAddictionClient_iOSRealNameCallback_m284F8E203C7C2675BEF08E8DCFED4109D61E1BC0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AntiAddictionRealNameCallback_t571F2472B7F4FDA2B625B7142A04441AA45FA294_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// realNameCallback = callback;
		RuntimeObject* L_0 = ___callback0;
		__this->set_realNameCallback_1(L_0);
		// Externs.AntiAddictionRealName(iOSRealNameCallback);
		AntiAddictionRealNameCallback_t571F2472B7F4FDA2B625B7142A04441AA45FA294 * L_1 = (AntiAddictionRealNameCallback_t571F2472B7F4FDA2B625B7142A04441AA45FA294 *)il2cpp_codegen_object_new(AntiAddictionRealNameCallback_t571F2472B7F4FDA2B625B7142A04441AA45FA294_il2cpp_TypeInfo_var);
		AntiAddictionRealNameCallback__ctor_mB02341D548F244B7F84FE8FB09013547A148BAC7(L_1, NULL, (intptr_t)((intptr_t)AntiAddictionClient_iOSRealNameCallback_m284F8E203C7C2675BEF08E8DCFED4109D61E1BC0_RuntimeMethod_var), /*hidden argument*/NULL);
		Externs_AntiAddictionRealName_m955CA98E5FA69B89B645D950336D262EBDA6D321(L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void AntiAddictionSdk.Platforms.iOS.AntiAddictionClient::RealName(System.String,System.String,AntiAddictionSdk.Api.RealNameCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AntiAddictionClient_RealName_m8E00AA9E5689D7F763DD4F1FFADE3E16CA81FE2D (AntiAddictionClient_t11FAEEBC7A7F56BE40C3C3E4E3477728AE7CD6C2 * __this, String_t* ___name0, String_t* ___idNumber1, RuntimeObject* ___callback2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AntiAddictionClient_iOSRealNameCallback_m284F8E203C7C2675BEF08E8DCFED4109D61E1BC0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AntiAddictionRealNameCallback_t571F2472B7F4FDA2B625B7142A04441AA45FA294_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// realNameCallback = callback;
		RuntimeObject* L_0 = ___callback2;
		__this->set_realNameCallback_1(L_0);
		// Externs.AntiAddictionRealNameUseCustomUI(name, idNumber, iOSRealNameCallback);
		String_t* L_1 = ___name0;
		String_t* L_2 = ___idNumber1;
		AntiAddictionRealNameCallback_t571F2472B7F4FDA2B625B7142A04441AA45FA294 * L_3 = (AntiAddictionRealNameCallback_t571F2472B7F4FDA2B625B7142A04441AA45FA294 *)il2cpp_codegen_object_new(AntiAddictionRealNameCallback_t571F2472B7F4FDA2B625B7142A04441AA45FA294_il2cpp_TypeInfo_var);
		AntiAddictionRealNameCallback__ctor_mB02341D548F244B7F84FE8FB09013547A148BAC7(L_3, NULL, (intptr_t)((intptr_t)AntiAddictionClient_iOSRealNameCallback_m284F8E203C7C2675BEF08E8DCFED4109D61E1BC0_RuntimeMethod_var), /*hidden argument*/NULL);
		Externs_AntiAddictionRealNameUseCustomUI_m0793E769A3541FF4E1E86A44394D261866CC7FE3(L_1, L_2, L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void AntiAddictionSdk.Platforms.iOS.AntiAddictionClient::iOSRealNameCallback(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AntiAddictionClient_iOSRealNameCallback_m284F8E203C7C2675BEF08E8DCFED4109D61E1BC0 (intptr_t ___antiAddictionClient0, intptr_t ___user1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RealNameCallback_tA92C37D18F12D080D66B1C67773CEAB6795D5CCA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UserClient_t34C98041DA8CAF42A5F3509756F7814AA9696FE5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&User_t2054FCBCCC727858725CB0AC6A9CE0306D5986AD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AntiAddictionClient_t11FAEEBC7A7F56BE40C3C3E4E3477728AE7CD6C2 * V_0 = NULL;
	{
		// AntiAddictionClient client = IntPtrToAntiAddictionClient(antiAddictionClient);
		intptr_t L_0 = ___antiAddictionClient0;
		AntiAddictionClient_t11FAEEBC7A7F56BE40C3C3E4E3477728AE7CD6C2 * L_1;
		L_1 = AntiAddictionClient_IntPtrToAntiAddictionClient_m35A5774A03A0E420EB3C09F45C7109B5355BAAC2((intptr_t)L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// if (client.realNameCallback != null) {
		AntiAddictionClient_t11FAEEBC7A7F56BE40C3C3E4E3477728AE7CD6C2 * L_2 = V_0;
		NullCheck(L_2);
		RuntimeObject* L_3 = L_2->get_realNameCallback_1();
		if (!L_3)
		{
			goto IL_0025;
		}
	}
	{
		// client.realNameCallback.OnFinish(new User(new UserClient(user)));
		AntiAddictionClient_t11FAEEBC7A7F56BE40C3C3E4E3477728AE7CD6C2 * L_4 = V_0;
		NullCheck(L_4);
		RuntimeObject* L_5 = L_4->get_realNameCallback_1();
		intptr_t L_6 = ___user1;
		UserClient_t34C98041DA8CAF42A5F3509756F7814AA9696FE5 * L_7 = (UserClient_t34C98041DA8CAF42A5F3509756F7814AA9696FE5 *)il2cpp_codegen_object_new(UserClient_t34C98041DA8CAF42A5F3509756F7814AA9696FE5_il2cpp_TypeInfo_var);
		UserClient__ctor_m786A98666B64BD7BBF20CF0DA3D1C85495236C50(L_7, (intptr_t)L_6, /*hidden argument*/NULL);
		User_t2054FCBCCC727858725CB0AC6A9CE0306D5986AD * L_8 = (User_t2054FCBCCC727858725CB0AC6A9CE0306D5986AD *)il2cpp_codegen_object_new(User_t2054FCBCCC727858725CB0AC6A9CE0306D5986AD_il2cpp_TypeInfo_var);
		User__ctor_mD6909B95167AF2D588F815BD3F4AC5546A3D187B(L_8, L_7, /*hidden argument*/NULL);
		NullCheck(L_5);
		InterfaceActionInvoker1< User_t2054FCBCCC727858725CB0AC6A9CE0306D5986AD * >::Invoke(0 /* System.Void AntiAddictionSdk.Api.RealNameCallback::OnFinish(AntiAddictionSdk.Api.User) */, RealNameCallback_tA92C37D18F12D080D66B1C67773CEAB6795D5CCA_il2cpp_TypeInfo_var, L_5, L_8);
	}

IL_0025:
	{
		// }
		return;
	}
}
// System.Void AntiAddictionSdk.Platforms.iOS.AntiAddictionClient::SetAutoShowTimeLimitPage(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AntiAddictionClient_SetAutoShowTimeLimitPage_m98B1DFFBF795D69F74246F9F4B42026170352BA5 (AntiAddictionClient_t11FAEEBC7A7F56BE40C3C3E4E3477728AE7CD6C2 * __this, bool ___show0, const RuntimeMethod* method)
{
	{
		// Externs.AntiAddictionSetAutoShowTimeLimitPage(show);
		bool L_0 = ___show0;
		Externs_AntiAddictionSetAutoShowTimeLimitPage_m26C60BA0B9A7767027973E148B730A5C49A7FE9C(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void AntiAddictionSdk.Platforms.iOS.AntiAddictionClient::SetTimeLimitCallback(AntiAddictionSdk.Api.TimeLimitCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AntiAddictionClient_SetTimeLimitCallback_m21A0A39560E447783BCD2051AB6437E6CB85ABD5 (AntiAddictionClient_t11FAEEBC7A7F56BE40C3C3E4E3477728AE7CD6C2 * __this, RuntimeObject* ___callback0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AntiAddictionClient_iOSTimeLimitCallback_mC49A5C16531B4373507A41085855D3DAB931B3C5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AntiAddictionTimeLimitCallback_tC94709CF8EB6A9D85FF410CF6B5B9F55A7E39ABA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// timeLimitCallback = callback;
		RuntimeObject* L_0 = ___callback0;
		__this->set_timeLimitCallback_2(L_0);
		// Externs.AntiAddictionSetTimeLimitCallback(iOSTimeLimitCallback);
		AntiAddictionTimeLimitCallback_tC94709CF8EB6A9D85FF410CF6B5B9F55A7E39ABA * L_1 = (AntiAddictionTimeLimitCallback_tC94709CF8EB6A9D85FF410CF6B5B9F55A7E39ABA *)il2cpp_codegen_object_new(AntiAddictionTimeLimitCallback_tC94709CF8EB6A9D85FF410CF6B5B9F55A7E39ABA_il2cpp_TypeInfo_var);
		AntiAddictionTimeLimitCallback__ctor_m66E81A9AC193CA64E4A692743578F586A8C78CAC(L_1, NULL, (intptr_t)((intptr_t)AntiAddictionClient_iOSTimeLimitCallback_mC49A5C16531B4373507A41085855D3DAB931B3C5_RuntimeMethod_var), /*hidden argument*/NULL);
		Externs_AntiAddictionSetTimeLimitCallback_m4511E176300A182DF56E0F49EC5924A27CD80086(L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void AntiAddictionSdk.Platforms.iOS.AntiAddictionClient::iOSTimeLimitCallback(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AntiAddictionClient_iOSTimeLimitCallback_mC49A5C16531B4373507A41085855D3DAB931B3C5 (intptr_t ___antiAddictionClient0, intptr_t ___timeLimit1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TimeLimitCallback_t45E382B69576F18A9C565FCBB836A444683917DB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TimeLimitClient_t867CAAAF07D33468A9F628615761FD01851E998C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TimeLimit_t34F8F02496A68C19246A6EDB732D70E8DAD79C9F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AntiAddictionClient_t11FAEEBC7A7F56BE40C3C3E4E3477728AE7CD6C2 * V_0 = NULL;
	{
		// AntiAddictionClient client = IntPtrToAntiAddictionClient(antiAddictionClient);
		intptr_t L_0 = ___antiAddictionClient0;
		AntiAddictionClient_t11FAEEBC7A7F56BE40C3C3E4E3477728AE7CD6C2 * L_1;
		L_1 = AntiAddictionClient_IntPtrToAntiAddictionClient_m35A5774A03A0E420EB3C09F45C7109B5355BAAC2((intptr_t)L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// if (client.timeLimitCallback != null) {
		AntiAddictionClient_t11FAEEBC7A7F56BE40C3C3E4E3477728AE7CD6C2 * L_2 = V_0;
		NullCheck(L_2);
		RuntimeObject* L_3 = L_2->get_timeLimitCallback_2();
		if (!L_3)
		{
			goto IL_0025;
		}
	}
	{
		// client.timeLimitCallback.OnTimeLimit(new TimeLimit(new TimeLimitClient(timeLimit)));
		AntiAddictionClient_t11FAEEBC7A7F56BE40C3C3E4E3477728AE7CD6C2 * L_4 = V_0;
		NullCheck(L_4);
		RuntimeObject* L_5 = L_4->get_timeLimitCallback_2();
		intptr_t L_6 = ___timeLimit1;
		TimeLimitClient_t867CAAAF07D33468A9F628615761FD01851E998C * L_7 = (TimeLimitClient_t867CAAAF07D33468A9F628615761FD01851E998C *)il2cpp_codegen_object_new(TimeLimitClient_t867CAAAF07D33468A9F628615761FD01851E998C_il2cpp_TypeInfo_var);
		TimeLimitClient__ctor_mF68B07642AD90106EAA1BEB3A6BC5C6F4B6F3986(L_7, (intptr_t)L_6, /*hidden argument*/NULL);
		TimeLimit_t34F8F02496A68C19246A6EDB732D70E8DAD79C9F * L_8 = (TimeLimit_t34F8F02496A68C19246A6EDB732D70E8DAD79C9F *)il2cpp_codegen_object_new(TimeLimit_t34F8F02496A68C19246A6EDB732D70E8DAD79C9F_il2cpp_TypeInfo_var);
		TimeLimit__ctor_m67E9BF4FF91D1C5608D3630A8B205686CFC9BA64(L_8, L_7, /*hidden argument*/NULL);
		NullCheck(L_5);
		InterfaceActionInvoker1< TimeLimit_t34F8F02496A68C19246A6EDB732D70E8DAD79C9F * >::Invoke(0 /* System.Void AntiAddictionSdk.Api.TimeLimitCallback::OnTimeLimit(AntiAddictionSdk.Api.TimeLimit) */, TimeLimitCallback_t45E382B69576F18A9C565FCBB836A444683917DB_il2cpp_TypeInfo_var, L_5, L_8);
	}

IL_0025:
	{
		// }
		return;
	}
}
// AntiAddictionSdk.Api.TimeLimit AntiAddictionSdk.Platforms.iOS.AntiAddictionClient::CheckTimeLimitStatus()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeLimit_t34F8F02496A68C19246A6EDB732D70E8DAD79C9F * AntiAddictionClient_CheckTimeLimitStatus_mA8A736F64D7FCE8F0908A71F34366B9E94AF15C7 (AntiAddictionClient_t11FAEEBC7A7F56BE40C3C3E4E3477728AE7CD6C2 * __this, const RuntimeMethod* method)
{
	{
		// return null;
		return (TimeLimit_t34F8F02496A68C19246A6EDB732D70E8DAD79C9F *)NULL;
	}
}
// System.Void AntiAddictionSdk.Platforms.iOS.AntiAddictionClient::Logout()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AntiAddictionClient_Logout_mC64C4902A10108FDF0BF75C53F57B5FE35323B5D (AntiAddictionClient_t11FAEEBC7A7F56BE40C3C3E4E3477728AE7CD6C2 * __this, const RuntimeMethod* method)
{
	{
		// Externs.AntiAddictionLogout();
		intptr_t L_0;
		L_0 = Externs_AntiAddictionLogout_mB7E846EEB2A4814C5B48E13CB53D4B87A6983726(/*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void AntiAddictionSdk.Platforms.iOS.AntiAddictionClient::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AntiAddictionClient_Dispose_m1E4D99ECC1E03C03F83F8AE383265264E63A3771 (AntiAddictionClient_t11FAEEBC7A7F56BE40C3C3E4E3477728AE7CD6C2 * __this, const RuntimeMethod* method)
{
	GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// ((GCHandle)mAntiAddictionClientPtr).Free();
		intptr_t L_0 = __this->get_mAntiAddictionClientPtr_0();
		GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  L_1;
		L_1 = GCHandle_op_Explicit_mD2A800A063FDBDAB31CD7EC97DD63A896A3568A6((intptr_t)L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		GCHandle_Free_mB4E9415544FC9F0075C02AB17E270E49AF006025((GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 *)(&V_0), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void AntiAddictionSdk.Platforms.iOS.AntiAddictionClient::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AntiAddictionClient_Finalize_m9EF64FE56275A38F786E90AF5CFCCB306B26C58B (AntiAddictionClient_t11FAEEBC7A7F56BE40C3C3E4E3477728AE7CD6C2 * __this, const RuntimeMethod* method)
{
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);

IL_0000:
	try
	{ // begin try (depth: 1)
		// Dispose();
		AntiAddictionClient_Dispose_m1E4D99ECC1E03C03F83F8AE383265264E63A3771(__this, /*hidden argument*/NULL);
		IL2CPP_LEAVE(0xF, FINALLY_0008);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0008;
	}

FINALLY_0008:
	{ // begin finally (depth: 1)
		// }
		Object_Finalize_mC59C83CF4F7707E425FFA6362931C25D4C36676A(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(8)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(8)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0xF, IL_000f)
	}

IL_000f:
	{
		// }
		return;
	}
}
// AntiAddictionSdk.Platforms.iOS.AntiAddictionClient AntiAddictionSdk.Platforms.iOS.AntiAddictionClient::IntPtrToAntiAddictionClient(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AntiAddictionClient_t11FAEEBC7A7F56BE40C3C3E4E3477728AE7CD6C2 * AntiAddictionClient_IntPtrToAntiAddictionClient_m35A5774A03A0E420EB3C09F45C7109B5355BAAC2 (intptr_t ___antiAddictionClient0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AntiAddictionClient_t11FAEEBC7A7F56BE40C3C3E4E3477728AE7CD6C2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// GCHandle handle = (GCHandle)antiAddictionClient;
		intptr_t L_0 = ___antiAddictionClient0;
		GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  L_1;
		L_1 = GCHandle_op_Explicit_mD2A800A063FDBDAB31CD7EC97DD63A896A3568A6((intptr_t)L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// return handle.Target as AntiAddictionClient;
		RuntimeObject * L_2;
		L_2 = GCHandle_get_Target_m6C296AD6520ECDAFC9498E9387677F522871F883((GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 *)(&V_0), /*hidden argument*/NULL);
		return ((AntiAddictionClient_t11FAEEBC7A7F56BE40C3C3E4E3477728AE7CD6C2 *)IsInstClass((RuntimeObject*)L_2, AntiAddictionClient_t11FAEEBC7A7F56BE40C3C3E4E3477728AE7CD6C2_il2cpp_TypeInfo_var));
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
// AntiAddictionSdk.Common.IAntiAddictionClient AntiAddictionSdk.Platforms.ClientFactory::AntiAddictionClient()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ClientFactory_AntiAddictionClient_mCEB32581488E3ED5FA908BCAF1894727E0D0121A (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AntiAddictionClient_t11FAEEBC7A7F56BE40C3C3E4E3477728AE7CD6C2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AntiAddictionClient_tBCBB7C82C199D2B807123ADAF494CD2B3620CD8D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DummyAntiAddictionClient_t4FAEB40FC69FAC8F29E2A2EBAC992D648E769D39_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(Application.platform == RuntimePlatform.Android) {
		int32_t L_0;
		L_0 = Application_get_platform_mB22F7F39CDD46667C3EF64507E55BB7DA18F66C4(/*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)11)))))
		{
			goto IL_000f;
		}
	}
	{
		// return new AntiAddictionSdk.Platforms.Android.AntiAddictionClient();
		AntiAddictionClient_tBCBB7C82C199D2B807123ADAF494CD2B3620CD8D * L_1 = (AntiAddictionClient_tBCBB7C82C199D2B807123ADAF494CD2B3620CD8D *)il2cpp_codegen_object_new(AntiAddictionClient_tBCBB7C82C199D2B807123ADAF494CD2B3620CD8D_il2cpp_TypeInfo_var);
		AntiAddictionClient__ctor_mACEEEA4F1D7E7979DC45B91ADCB3A5DA4198A81A(L_1, /*hidden argument*/NULL);
		return L_1;
	}

IL_000f:
	{
		// } else if(Application.platform == RuntimePlatform.IPhonePlayer) {
		int32_t L_2;
		L_2 = Application_get_platform_mB22F7F39CDD46667C3EF64507E55BB7DA18F66C4(/*hidden argument*/NULL);
		if ((!(((uint32_t)L_2) == ((uint32_t)8))))
		{
			goto IL_001d;
		}
	}
	{
		// return new AntiAddictionSdk.Platforms.iOS.AntiAddictionClient();
		AntiAddictionClient_t11FAEEBC7A7F56BE40C3C3E4E3477728AE7CD6C2 * L_3 = (AntiAddictionClient_t11FAEEBC7A7F56BE40C3C3E4E3477728AE7CD6C2 *)il2cpp_codegen_object_new(AntiAddictionClient_t11FAEEBC7A7F56BE40C3C3E4E3477728AE7CD6C2_il2cpp_TypeInfo_var);
		AntiAddictionClient__ctor_m3BC71D6D6C47BE36F5F55EF2A5133BCE299DBCC3(L_3, /*hidden argument*/NULL);
		return L_3;
	}

IL_001d:
	{
		// return new DummyAntiAddictionClient();
		DummyAntiAddictionClient_t4FAEB40FC69FAC8F29E2A2EBAC992D648E769D39 * L_4 = (DummyAntiAddictionClient_t4FAEB40FC69FAC8F29E2A2EBAC992D648E769D39 *)il2cpp_codegen_object_new(DummyAntiAddictionClient_t4FAEB40FC69FAC8F29E2A2EBAC992D648E769D39_il2cpp_TypeInfo_var);
		DummyAntiAddictionClient__ctor_m65FCE6C97EA818AEAD352A8AE2806694007B6F1C(L_4, /*hidden argument*/NULL);
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
// System.Void AntiAddictionSdk.Common.DummyAntiAddictionClient::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DummyAntiAddictionClient__ctor_m65FCE6C97EA818AEAD352A8AE2806694007B6F1C (DummyAntiAddictionClient_t4FAEB40FC69FAC8F29E2A2EBAC992D648E769D39 * __this, const RuntimeMethod* method)
{
	{
		// public DummyAntiAddictionClient() {}
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// public DummyAntiAddictionClient() {}
		return;
	}
}
// AntiAddictionSdk.Api.User AntiAddictionSdk.Common.DummyAntiAddictionClient::GetUser()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR User_t2054FCBCCC727858725CB0AC6A9CE0306D5986AD * DummyAntiAddictionClient_GetUser_m9225E07F9E93BA81AFFF757D7489AA2179B21D52 (DummyAntiAddictionClient_t4FAEB40FC69FAC8F29E2A2EBAC992D648E769D39 * __this, const RuntimeMethod* method)
{
	{
		// return null;
		return (User_t2054FCBCCC727858725CB0AC6A9CE0306D5986AD *)NULL;
	}
}
// System.Void AntiAddictionSdk.Common.DummyAntiAddictionClient::RealName(AntiAddictionSdk.Api.RealNameCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DummyAntiAddictionClient_RealName_m9F5A087C9628C18E2C2699E14D37577AD5ACED15 (DummyAntiAddictionClient_t4FAEB40FC69FAC8F29E2A2EBAC992D648E769D39 * __this, RuntimeObject* ___callback0, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void AntiAddictionSdk.Common.DummyAntiAddictionClient::RealName(System.String,System.String,AntiAddictionSdk.Api.RealNameCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DummyAntiAddictionClient_RealName_mCFB2D2BD75BF32CE0C2CE1EE4F1C0E46E872DE83 (DummyAntiAddictionClient_t4FAEB40FC69FAC8F29E2A2EBAC992D648E769D39 * __this, String_t* ___name0, String_t* ___idNumber1, RuntimeObject* ___callback2, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void AntiAddictionSdk.Common.DummyAntiAddictionClient::SetAutoShowTimeLimitPage(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DummyAntiAddictionClient_SetAutoShowTimeLimitPage_m0CA95FD9092C8DB6CF4990E2C90D19E861621816 (DummyAntiAddictionClient_t4FAEB40FC69FAC8F29E2A2EBAC992D648E769D39 * __this, bool ___show0, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void AntiAddictionSdk.Common.DummyAntiAddictionClient::SetTimeLimitCallback(AntiAddictionSdk.Api.TimeLimitCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DummyAntiAddictionClient_SetTimeLimitCallback_m1C99B43C9A61518E466C8A08C1F39F344985B680 (DummyAntiAddictionClient_t4FAEB40FC69FAC8F29E2A2EBAC992D648E769D39 * __this, RuntimeObject* ___callback0, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// AntiAddictionSdk.Api.TimeLimit AntiAddictionSdk.Common.DummyAntiAddictionClient::CheckTimeLimitStatus()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeLimit_t34F8F02496A68C19246A6EDB732D70E8DAD79C9F * DummyAntiAddictionClient_CheckTimeLimitStatus_m13AB33A9DBF661A265C802F528CC711F8C7648B7 (DummyAntiAddictionClient_t4FAEB40FC69FAC8F29E2A2EBAC992D648E769D39 * __this, const RuntimeMethod* method)
{
	{
		// return null;
		return (TimeLimit_t34F8F02496A68C19246A6EDB732D70E8DAD79C9F *)NULL;
	}
}
// System.Void AntiAddictionSdk.Common.DummyAntiAddictionClient::Logout()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DummyAntiAddictionClient_Logout_mC60F557981CA41D6CF2FBFC04601AE75CBFD1589 (DummyAntiAddictionClient_t4FAEB40FC69FAC8F29E2A2EBAC992D648E769D39 * __this, const RuntimeMethod* method)
{
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
// System.Void AntiAddictionSdk.Platforms.iOS.Externs::AntiAddictionRelease(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Externs_AntiAddictionRelease_m9432E27A774F2B00BE473E6837CE44C5DDEEFCEA (intptr_t ___obj0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(AntiAddictionRelease)(___obj0);

}
// System.IntPtr AntiAddictionSdk.Platforms.iOS.Externs::AntiAddictionSetAntiAddictionClient(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Externs_AntiAddictionSetAntiAddictionClient_mCD7C172444E618D4379FE8CEB8E3E2FD31CCD4E8 (intptr_t ___antiAddictionClient0, const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);

	// Native function invocation
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(AntiAddictionSetAntiAddictionClient)(___antiAddictionClient0);

	return returnValue;
}
// System.IntPtr AntiAddictionSdk.Platforms.iOS.Externs::AntiAddictionGetUser()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Externs_AntiAddictionGetUser_m4BB575AC4CDFB7BD778537D408E40226A6FC2715 (const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(AntiAddictionGetUser)();

	return returnValue;
}
// System.Void AntiAddictionSdk.Platforms.iOS.Externs::AntiAddictionRealName(AntiAddictionSdk.Platforms.iOS.AntiAddictionClient/AntiAddictionRealNameCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Externs_AntiAddictionRealName_m955CA98E5FA69B89B645D950336D262EBDA6D321 (AntiAddictionRealNameCallback_t571F2472B7F4FDA2B625B7142A04441AA45FA294 * ___callback0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (Il2CppMethodPointer);

	// Marshaling of parameter '___callback0' to native representation
	Il2CppMethodPointer ____callback0_marshaled = NULL;
	____callback0_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___callback0));

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(AntiAddictionRealName)(____callback0_marshaled);

}
// System.Void AntiAddictionSdk.Platforms.iOS.Externs::AntiAddictionRealNameUseCustomUI(System.String,System.String,AntiAddictionSdk.Platforms.iOS.AntiAddictionClient/AntiAddictionRealNameCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Externs_AntiAddictionRealNameUseCustomUI_m0793E769A3541FF4E1E86A44394D261866CC7FE3 (String_t* ___name0, String_t* ___idNumber1, AntiAddictionRealNameCallback_t571F2472B7F4FDA2B625B7142A04441AA45FA294 * ___callback2, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*, char*, Il2CppMethodPointer);

	// Marshaling of parameter '___name0' to native representation
	char* ____name0_marshaled = NULL;
	____name0_marshaled = il2cpp_codegen_marshal_string(___name0);

	// Marshaling of parameter '___idNumber1' to native representation
	char* ____idNumber1_marshaled = NULL;
	____idNumber1_marshaled = il2cpp_codegen_marshal_string(___idNumber1);

	// Marshaling of parameter '___callback2' to native representation
	Il2CppMethodPointer ____callback2_marshaled = NULL;
	____callback2_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___callback2));

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(AntiAddictionRealNameUseCustomUI)(____name0_marshaled, ____idNumber1_marshaled, ____callback2_marshaled);

	// Marshaling cleanup of parameter '___name0' native representation
	il2cpp_codegen_marshal_free(____name0_marshaled);
	____name0_marshaled = NULL;

	// Marshaling cleanup of parameter '___idNumber1' native representation
	il2cpp_codegen_marshal_free(____idNumber1_marshaled);
	____idNumber1_marshaled = NULL;

}
// System.Void AntiAddictionSdk.Platforms.iOS.Externs::AntiAddictionSetAutoShowTimeLimitPage(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Externs_AntiAddictionSetAutoShowTimeLimitPage_m26C60BA0B9A7767027973E148B730A5C49A7FE9C (bool ___show0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(AntiAddictionSetAutoShowTimeLimitPage)(static_cast<int32_t>(___show0));

}
// System.Void AntiAddictionSdk.Platforms.iOS.Externs::AntiAddictionSetTimeLimitCallback(AntiAddictionSdk.Platforms.iOS.AntiAddictionClient/AntiAddictionTimeLimitCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Externs_AntiAddictionSetTimeLimitCallback_m4511E176300A182DF56E0F49EC5924A27CD80086 (AntiAddictionTimeLimitCallback_tC94709CF8EB6A9D85FF410CF6B5B9F55A7E39ABA * ___callback0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (Il2CppMethodPointer);

	// Marshaling of parameter '___callback0' to native representation
	Il2CppMethodPointer ____callback0_marshaled = NULL;
	____callback0_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___callback0));

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(AntiAddictionSetTimeLimitCallback)(____callback0_marshaled);

}
// System.IntPtr AntiAddictionSdk.Platforms.iOS.Externs::AntiAddictionCheckTimeLimitStatus()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Externs_AntiAddictionCheckTimeLimitStatus_mE43730448EDCE797A5824C6F29EA3CA844883BCB (const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(AntiAddictionCheckTimeLimitStatus)();

	return returnValue;
}
// System.IntPtr AntiAddictionSdk.Platforms.iOS.Externs::AntiAddictionLogout()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Externs_AntiAddictionLogout_mB7E846EEB2A4814C5B48E13CB53D4B87A6983726 (const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(AntiAddictionLogout)();

	return returnValue;
}
// System.IntPtr AntiAddictionSdk.Platforms.iOS.Externs::AntiAddictionUserGetRealNameResult(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Externs_AntiAddictionUserGetRealNameResult_mB0127BAA41148345068C0A56D215FD21CCF41103 (intptr_t ___user0, const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);

	// Native function invocation
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(AntiAddictionUserGetRealNameResult)(___user0);

	return returnValue;
}
// System.Int32 AntiAddictionSdk.Platforms.iOS.Externs::AntiAddictionUserGetAge(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Externs_AntiAddictionUserGetAge_m8133CED1D13F179C3FDD8BC6524D275118D4EBF3 (intptr_t ___user0, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(AntiAddictionUserGetAge)(___user0);

	return returnValue;
}
// System.Boolean AntiAddictionSdk.Platforms.iOS.Externs::AntiAddictionUserIsTourist(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Externs_AntiAddictionUserIsTourist_m638C6FAF0B4EF56AA18FAD6DA8BF73A13AE7FF3B (intptr_t ___user0, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(AntiAddictionUserIsTourist)(___user0);

	return static_cast<bool>(returnValue);
}
// System.Boolean AntiAddictionSdk.Platforms.iOS.Externs::AntiAddictionUserIsChild(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Externs_AntiAddictionUserIsChild_m51FCBD9D014805A1A06773CB3837A05759D54478 (intptr_t ___user0, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(AntiAddictionUserIsChild)(___user0);

	return static_cast<bool>(returnValue);
}
// System.Boolean AntiAddictionSdk.Platforms.iOS.Externs::AntiAddictionUserIsAdult(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Externs_AntiAddictionUserIsAdult_mA12AE33C3D07A948C783F67A7485363C8C0898D7 (intptr_t ___user0, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(AntiAddictionUserIsAdult)(___user0);

	return static_cast<bool>(returnValue);
}
// System.Boolean AntiAddictionSdk.Platforms.iOS.Externs::AntiAddictionRealNameResultIsInitial(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Externs_AntiAddictionRealNameResultIsInitial_m9830C55664B50FD44223FC2D5EFD23F0DFFFD6B4 (intptr_t ___realNameResult0, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(AntiAddictionRealNameResultIsInitial)(___realNameResult0);

	return static_cast<bool>(returnValue);
}
// System.Boolean AntiAddictionSdk.Platforms.iOS.Externs::AntiAddictionRealNameResultIsSuccess(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Externs_AntiAddictionRealNameResultIsSuccess_m709036BA2AF8E73FFBFF4006628B3AD89418DB1F (intptr_t ___realNameResult0, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(AntiAddictionRealNameResultIsSuccess)(___realNameResult0);

	return static_cast<bool>(returnValue);
}
// System.Boolean AntiAddictionSdk.Platforms.iOS.Externs::AntiAddictionRealNameResultIsProcessing(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Externs_AntiAddictionRealNameResultIsProcessing_mE4B868504A3D797564ADFD457C7952595248AB82 (intptr_t ___realNameResult0, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(AntiAddictionRealNameResultIsProcessing)(___realNameResult0);

	return static_cast<bool>(returnValue);
}
// System.Boolean AntiAddictionSdk.Platforms.iOS.Externs::AntiAddictionRealNameResultIsFail(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Externs_AntiAddictionRealNameResultIsFail_m25CBEB0619317D2BB683E8735376E9842E3891D6 (intptr_t ___realNameResult0, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(AntiAddictionRealNameResultIsFail)(___realNameResult0);

	return static_cast<bool>(returnValue);
}
// System.Int32 AntiAddictionSdk.Platforms.iOS.Externs::AntiAddictionRealNameResultGetResultCode(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Externs_AntiAddictionRealNameResultGetResultCode_mD060A7E97DF5938FA51E479BC179AA49702E2E10 (intptr_t ___realNameResult0, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(AntiAddictionRealNameResultGetResultCode)(___realNameResult0);

	return returnValue;
}
// System.String AntiAddictionSdk.Platforms.iOS.Externs::AntiAddictionRealNameResultGetResultMsg(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Externs_AntiAddictionRealNameResultGetResultMsg_m2A62E976E4F8DF2BFB46BF1D5E67EF75E8454F0C (intptr_t ___realNameResult0, const RuntimeMethod* method)
{
	typedef char* (DEFAULT_CALL *PInvokeFunc) (intptr_t);

	// Native function invocation
	char* returnValue = reinterpret_cast<PInvokeFunc>(AntiAddictionRealNameResultGetResultMsg)(___realNameResult0);

	// Marshaling of return value back from native representation
	String_t* _returnValue_unmarshaled = NULL;
	_returnValue_unmarshaled = il2cpp_codegen_marshal_string_result(returnValue);

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free(returnValue);
	returnValue = NULL;

	return _returnValue_unmarshaled;
}
// System.String AntiAddictionSdk.Platforms.iOS.Externs::AntiAddictionRealNameResultGetPlayerId(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Externs_AntiAddictionRealNameResultGetPlayerId_m0B3F8752CCF55DB7287B68678CCD1A9C31FAC413 (intptr_t ___realNameResult0, const RuntimeMethod* method)
{
	typedef char* (DEFAULT_CALL *PInvokeFunc) (intptr_t);

	// Native function invocation
	char* returnValue = reinterpret_cast<PInvokeFunc>(AntiAddictionRealNameResultGetPlayerId)(___realNameResult0);

	// Marshaling of return value back from native representation
	String_t* _returnValue_unmarshaled = NULL;
	_returnValue_unmarshaled = il2cpp_codegen_marshal_string_result(returnValue);

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free(returnValue);
	returnValue = NULL;

	return _returnValue_unmarshaled;
}
// System.Int32 AntiAddictionSdk.Platforms.iOS.Externs::AntiAddictionTimeLimitGetReason(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Externs_AntiAddictionTimeLimitGetReason_m406CD4EE3714CE2472181A56B14B27A5430DED03 (intptr_t ___timeLimit0, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(AntiAddictionTimeLimitGetReason)(___timeLimit0);

	return returnValue;
}
// System.Boolean AntiAddictionSdk.Platforms.iOS.Externs::AntiAddictionTimeLimitIsLimit(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Externs_AntiAddictionTimeLimitIsLimit_m7B62275011668415405FFC3ECF727647CA771521 (intptr_t ___timeLimit0, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(AntiAddictionTimeLimitIsLimit)(___timeLimit0);

	return static_cast<bool>(returnValue);
}
// System.Int64 AntiAddictionSdk.Platforms.iOS.Externs::AntiAddictionTimeLimitGetTimeToLimit(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t Externs_AntiAddictionTimeLimitGetTimeToLimit_m7FCEE5F41D80362C3A21B06A1DF9714634C5D335 (intptr_t ___timeLimit0, const RuntimeMethod* method)
{
	typedef int64_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);

	// Native function invocation
	int64_t returnValue = reinterpret_cast<PInvokeFunc>(AntiAddictionTimeLimitGetTimeToLimit)(___timeLimit0);

	return returnValue;
}
// System.IntPtr AntiAddictionSdk.Platforms.iOS.Externs::AntiAddictionTimeLimitGetLimitTip(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Externs_AntiAddictionTimeLimitGetLimitTip_mFED1C2212827202CFC7501967CD169C5EE531346 (intptr_t ___timeLimit0, const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);

	// Native function invocation
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(AntiAddictionTimeLimitGetLimitTip)(___timeLimit0);

	return returnValue;
}
// System.String AntiAddictionSdk.Platforms.iOS.Externs::AntiAddictionLimitTipGetTitle(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Externs_AntiAddictionLimitTipGetTitle_mE38BFE7BD0D2CA908DFF3541A2C42D4FD37540E2 (intptr_t ___limitTip0, const RuntimeMethod* method)
{
	typedef char* (DEFAULT_CALL *PInvokeFunc) (intptr_t);

	// Native function invocation
	char* returnValue = reinterpret_cast<PInvokeFunc>(AntiAddictionLimitTipGetTitle)(___limitTip0);

	// Marshaling of return value back from native representation
	String_t* _returnValue_unmarshaled = NULL;
	_returnValue_unmarshaled = il2cpp_codegen_marshal_string_result(returnValue);

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free(returnValue);
	returnValue = NULL;

	return _returnValue_unmarshaled;
}
// System.String AntiAddictionSdk.Platforms.iOS.Externs::AntiAddictionLimitTipGetDesc(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Externs_AntiAddictionLimitTipGetDesc_mF49FFC66B2AC012EFF261ECF3DD210A75B653CD7 (intptr_t ___limitTip0, const RuntimeMethod* method)
{
	typedef char* (DEFAULT_CALL *PInvokeFunc) (intptr_t);

	// Native function invocation
	char* returnValue = reinterpret_cast<PInvokeFunc>(AntiAddictionLimitTipGetDesc)(___limitTip0);

	// Marshaling of return value back from native representation
	String_t* _returnValue_unmarshaled = NULL;
	_returnValue_unmarshaled = il2cpp_codegen_marshal_string_result(returnValue);

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free(returnValue);
	returnValue = NULL;

	return _returnValue_unmarshaled;
}
// System.String AntiAddictionSdk.Platforms.iOS.Externs::AntiAddictionLimitTipGetButton(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Externs_AntiAddictionLimitTipGetButton_mA3309057FB296706A135D7BF868B3BE5A7811EC9 (intptr_t ___limitTip0, const RuntimeMethod* method)
{
	typedef char* (DEFAULT_CALL *PInvokeFunc) (intptr_t);

	// Native function invocation
	char* returnValue = reinterpret_cast<PInvokeFunc>(AntiAddictionLimitTipGetButton)(___limitTip0);

	// Marshaling of return value back from native representation
	String_t* _returnValue_unmarshaled = NULL;
	_returnValue_unmarshaled = il2cpp_codegen_marshal_string_result(returnValue);

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free(returnValue);
	returnValue = NULL;

	return _returnValue_unmarshaled;
}
// System.Boolean AntiAddictionSdk.Platforms.iOS.Externs::AntiAddictionLimitTipCanRealName(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Externs_AntiAddictionLimitTipCanRealName_m6C53135B10E49ACA35B9D6229A7C3FE83E1AB9F0 (intptr_t ___limitTip0, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(AntiAddictionLimitTipCanRealName)(___limitTip0);

	return static_cast<bool>(returnValue);
}
// System.Void AntiAddictionSdk.Platforms.iOS.Externs::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Externs__ctor_m0D77386E5703450D00B6DA5C891FC69285DDC831 (Externs_t282F82D8F0B7FC45A9A7D40622EC4361F1FA2F9D * __this, const RuntimeMethod* method)
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
// System.Void AntiAddictionSdk.Api.LimitTip::.ctor(AntiAddictionSdk.Common.ILimitTipClient)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LimitTip__ctor_m9FEC6EB86743288A0163CB0A98BAE9929C7D83F4 (LimitTip_tF8B5096C82EDA57B6870A2B503C91C61553700BD * __this, RuntimeObject* ___client0, const RuntimeMethod* method)
{
	{
		// public LimitTip(ILimitTipClient client) {
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// Client = client;
		RuntimeObject* L_0 = ___client0;
		__this->set_Client_0(L_0);
		// }
		return;
	}
}
// System.String AntiAddictionSdk.Api.LimitTip::GetTitle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* LimitTip_GetTitle_m8949F275C98B5C8C9A690C232A2BCB80F54A6BC2 (LimitTip_tF8B5096C82EDA57B6870A2B503C91C61553700BD * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILimitTipClient_t0053FECC25F935132ECA594C001FC54B11B27CC6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return Client.GetTitle();
		RuntimeObject* L_0 = __this->get_Client_0();
		NullCheck(L_0);
		String_t* L_1;
		L_1 = InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String AntiAddictionSdk.Common.ILimitTipClient::GetTitle() */, ILimitTipClient_t0053FECC25F935132ECA594C001FC54B11B27CC6_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.String AntiAddictionSdk.Api.LimitTip::GetDesc()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* LimitTip_GetDesc_mE9DB1FAE7D1C631BB44A7B8B1E520209575DCD46 (LimitTip_tF8B5096C82EDA57B6870A2B503C91C61553700BD * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILimitTipClient_t0053FECC25F935132ECA594C001FC54B11B27CC6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return Client.GetDesc();
		RuntimeObject* L_0 = __this->get_Client_0();
		NullCheck(L_0);
		String_t* L_1;
		L_1 = InterfaceFuncInvoker0< String_t* >::Invoke(1 /* System.String AntiAddictionSdk.Common.ILimitTipClient::GetDesc() */, ILimitTipClient_t0053FECC25F935132ECA594C001FC54B11B27CC6_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.String AntiAddictionSdk.Api.LimitTip::GetButton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* LimitTip_GetButton_m035C2A34A28846CED81CF98416866E91134230F0 (LimitTip_tF8B5096C82EDA57B6870A2B503C91C61553700BD * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILimitTipClient_t0053FECC25F935132ECA594C001FC54B11B27CC6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return Client.GetButton();
		RuntimeObject* L_0 = __this->get_Client_0();
		NullCheck(L_0);
		String_t* L_1;
		L_1 = InterfaceFuncInvoker0< String_t* >::Invoke(2 /* System.String AntiAddictionSdk.Common.ILimitTipClient::GetButton() */, ILimitTipClient_t0053FECC25F935132ECA594C001FC54B11B27CC6_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Boolean AntiAddictionSdk.Api.LimitTip::CanRealName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LimitTip_CanRealName_m1A7BCAC4EC99635AE2BA67556F205E9EB62FDA62 (LimitTip_tF8B5096C82EDA57B6870A2B503C91C61553700BD * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILimitTipClient_t0053FECC25F935132ECA594C001FC54B11B27CC6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return Client.CanRealName();
		RuntimeObject* L_0 = __this->get_Client_0();
		NullCheck(L_0);
		bool L_1;
		L_1 = InterfaceFuncInvoker0< bool >::Invoke(3 /* System.Boolean AntiAddictionSdk.Common.ILimitTipClient::CanRealName() */, ILimitTipClient_t0053FECC25F935132ECA594C001FC54B11B27CC6_il2cpp_TypeInfo_var, L_0);
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
// System.Void AntiAddictionSdk.Platforms.Android.LimitTipClient::.ctor(UnityEngine.AndroidJavaObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LimitTipClient__ctor_mECCB6623AC3E4524AD34B61D3AB8C2884939FC78 (LimitTipClient_t6CE7E256EC6BC4954FAB77171931D9D49B4E5125 * __this, AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * ___limitTip0, const RuntimeMethod* method)
{
	{
		// public LimitTipClient(AndroidJavaObject limitTip) {
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// LimitTip = limitTip;
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_0 = ___limitTip0;
		__this->set_LimitTip_0(L_0);
		// }
		return;
	}
}
// System.String AntiAddictionSdk.Platforms.Android.LimitTipClient::GetTitle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* LimitTipClient_GetTitle_m0E381FC965280EA6677748EEEA57C539468BD02D (LimitTipClient_t6CE7E256EC6BC4954FAB77171931D9D49B4E5125 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisString_t_mB2E722C64FC7BD9F98B983053A6D3F9D94D355AE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral92A0367A0299056CA05B86632AFA0D8FA9C6BF91);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return LimitTip.Call<string>("getTitle");
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_0 = __this->get_LimitTip_0();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1;
		L_1 = Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_RuntimeMethod_var);
		NullCheck(L_0);
		String_t* L_2;
		L_2 = AndroidJavaObject_Call_TisString_t_mB2E722C64FC7BD9F98B983053A6D3F9D94D355AE(L_0, _stringLiteral92A0367A0299056CA05B86632AFA0D8FA9C6BF91, L_1, /*hidden argument*/AndroidJavaObject_Call_TisString_t_mB2E722C64FC7BD9F98B983053A6D3F9D94D355AE_RuntimeMethod_var);
		return L_2;
	}
}
// System.String AntiAddictionSdk.Platforms.Android.LimitTipClient::GetDesc()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* LimitTipClient_GetDesc_mFF6ECCF62FB6DC363076EACA14A0C5D760B9E9DF (LimitTipClient_t6CE7E256EC6BC4954FAB77171931D9D49B4E5125 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisString_t_mB2E722C64FC7BD9F98B983053A6D3F9D94D355AE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral29879F13B63E2A34513E90952D0B0CFB393E0BA6);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return LimitTip.Call<string>("getDesc");
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_0 = __this->get_LimitTip_0();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1;
		L_1 = Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_RuntimeMethod_var);
		NullCheck(L_0);
		String_t* L_2;
		L_2 = AndroidJavaObject_Call_TisString_t_mB2E722C64FC7BD9F98B983053A6D3F9D94D355AE(L_0, _stringLiteral29879F13B63E2A34513E90952D0B0CFB393E0BA6, L_1, /*hidden argument*/AndroidJavaObject_Call_TisString_t_mB2E722C64FC7BD9F98B983053A6D3F9D94D355AE_RuntimeMethod_var);
		return L_2;
	}
}
// System.String AntiAddictionSdk.Platforms.Android.LimitTipClient::GetButton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* LimitTipClient_GetButton_mD2633EBA3FBB5E402C7857E471C87F0E6E729F20 (LimitTipClient_t6CE7E256EC6BC4954FAB77171931D9D49B4E5125 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisString_t_mB2E722C64FC7BD9F98B983053A6D3F9D94D355AE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral048639C4B744282682B9A88543E35ED9C374CAF6);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return LimitTip.Call<string>("getButton");
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_0 = __this->get_LimitTip_0();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1;
		L_1 = Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_RuntimeMethod_var);
		NullCheck(L_0);
		String_t* L_2;
		L_2 = AndroidJavaObject_Call_TisString_t_mB2E722C64FC7BD9F98B983053A6D3F9D94D355AE(L_0, _stringLiteral048639C4B744282682B9A88543E35ED9C374CAF6, L_1, /*hidden argument*/AndroidJavaObject_Call_TisString_t_mB2E722C64FC7BD9F98B983053A6D3F9D94D355AE_RuntimeMethod_var);
		return L_2;
	}
}
// System.Boolean AntiAddictionSdk.Platforms.Android.LimitTipClient::CanRealName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LimitTipClient_CanRealName_m8074E8EA8A83B5A29ABB98446967012EFF51B0DE (LimitTipClient_t6CE7E256EC6BC4954FAB77171931D9D49B4E5125 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m705BF7B215A83B7851B19591CE37DA93250C7A8A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral60BF3505E2EDB331E2840B7F36A04726AA986FF6);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return LimitTip.Call<bool>("canRealName");
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_0 = __this->get_LimitTip_0();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1;
		L_1 = Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_RuntimeMethod_var);
		NullCheck(L_0);
		bool L_2;
		L_2 = AndroidJavaObject_Call_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m705BF7B215A83B7851B19591CE37DA93250C7A8A(L_0, _stringLiteral60BF3505E2EDB331E2840B7F36A04726AA986FF6, L_1, /*hidden argument*/AndroidJavaObject_Call_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m705BF7B215A83B7851B19591CE37DA93250C7A8A_RuntimeMethod_var);
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
// System.Void AntiAddictionSdk.Platforms.iOS.LimitTipClient::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LimitTipClient__ctor_m02341EF6BD7E5BBB7051CCA62F25581B9FB110DB (LimitTipClient_t6437A4B4C61A0FC6DE0DF1FD0A1633C54E30C134 * __this, intptr_t ___limitTip0, const RuntimeMethod* method)
{
	{
		// public LimitTipClient(IntPtr limitTip) {
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// LimitTip = limitTip;
		intptr_t L_0 = ___limitTip0;
		__this->set_LimitTip_0((intptr_t)L_0);
		// }
		return;
	}
}
// System.String AntiAddictionSdk.Platforms.iOS.LimitTipClient::GetTitle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* LimitTipClient_GetTitle_mCA33C5B5EE41FA05287318D945909140BA9A64D9 (LimitTipClient_t6437A4B4C61A0FC6DE0DF1FD0A1633C54E30C134 * __this, const RuntimeMethod* method)
{
	{
		// return Externs.AntiAddictionLimitTipGetTitle(LimitTip);
		intptr_t L_0 = __this->get_LimitTip_0();
		String_t* L_1;
		L_1 = Externs_AntiAddictionLimitTipGetTitle_mE38BFE7BD0D2CA908DFF3541A2C42D4FD37540E2((intptr_t)L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.String AntiAddictionSdk.Platforms.iOS.LimitTipClient::GetDesc()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* LimitTipClient_GetDesc_m4102EDE25393C8864413DAAD95C1F36A8DE4492F (LimitTipClient_t6437A4B4C61A0FC6DE0DF1FD0A1633C54E30C134 * __this, const RuntimeMethod* method)
{
	{
		// return Externs.AntiAddictionLimitTipGetDesc(LimitTip);
		intptr_t L_0 = __this->get_LimitTip_0();
		String_t* L_1;
		L_1 = Externs_AntiAddictionLimitTipGetDesc_mF49FFC66B2AC012EFF261ECF3DD210A75B653CD7((intptr_t)L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.String AntiAddictionSdk.Platforms.iOS.LimitTipClient::GetButton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* LimitTipClient_GetButton_m45D750233435D0993B9A6FCBD3FC1FEB323DE510 (LimitTipClient_t6437A4B4C61A0FC6DE0DF1FD0A1633C54E30C134 * __this, const RuntimeMethod* method)
{
	{
		// return Externs.AntiAddictionLimitTipGetButton(LimitTip);
		intptr_t L_0 = __this->get_LimitTip_0();
		String_t* L_1;
		L_1 = Externs_AntiAddictionLimitTipGetButton_mA3309057FB296706A135D7BF868B3BE5A7811EC9((intptr_t)L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean AntiAddictionSdk.Platforms.iOS.LimitTipClient::CanRealName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LimitTipClient_CanRealName_mDBC4AA9D1080C18B4786776E52854FD342914F9E (LimitTipClient_t6437A4B4C61A0FC6DE0DF1FD0A1633C54E30C134 * __this, const RuntimeMethod* method)
{
	{
		// return Externs.AntiAddictionLimitTipCanRealName(LimitTip);
		intptr_t L_0 = __this->get_LimitTip_0();
		bool L_1;
		L_1 = Externs_AntiAddictionLimitTipCanRealName_m6C53135B10E49ACA35B9D6229A7C3FE83E1AB9F0((intptr_t)L_0, /*hidden argument*/NULL);
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
// System.Void MainBehaviour::OnGUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainBehaviour_OnGUI_mBFEF5FB77A2A473BC7F289621E6F58ABEE0C837D (MainBehaviour_tDE09AB0E3B7AB47BEC0D8229B68A94AA3FE0DEC6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AntiAddiction_t1E52AAFE7B9A8CA505BFF17DC42E16946EA04079_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUI_tBCBBE29117D8093644C6E72B1CE3FB65C2CDCCC1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PrivacyPolicyHelper_t5983E6361B35F6389228D994C018B16993468EA3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RealNameListener_tED709B762A6644CB50B84FDE17AAF0FDC8AB47FC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral591717969A5E5E3B077255142EBD573FD6015D85);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7A43163FC05AE385BDE127586061CB41C6FAB23C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral80BFDED53A798895F66F7586BB93FB843218DB76);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral86A22D3A576D7C99132992E5DD9D118173CB4078);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBE8DA04BB93EE2298F881F3DCBF427FF992AA9FE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCABEDC89A46B23A1F89529079CC521895A09DA70);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD197841CCDB5B2B59A46C09F9EE18BF0F15C3D00);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD7271F72CB0B464DF5A3DE56C471BA9D6E0D6BA3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD83E4D7E4A366812BEFCF32EC0A645CCBD99851);
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
		// if (GUI.Button(new Rect(x, y, antiW, h), "RealName", style))
		int32_t L_57 = L_49;
		int32_t L_58 = V_0;
		int32_t L_59 = V_5;
		int32_t L_60 = V_3;
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_61;
		memset((&L_61), 0, sizeof(L_61));
		Rect__ctor_m12075526A02B55B680716A34AD5287B223122B70((&L_61), ((float)((float)L_57)), ((float)((float)L_58)), ((float)((float)L_59)), ((float)((float)L_60)), /*hidden argument*/NULL);
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_62 = V_4;
		bool L_63;
		L_63 = GUI_Button_mA1605D5F2A40D770F3E0CCA6D88E7947564B3F7A(L_61, _stringLiteralBE8DA04BB93EE2298F881F3DCBF427FF992AA9FE, L_62, /*hidden argument*/NULL);
		G_B5_0 = L_57;
		if (!L_63)
		{
			G_B6_0 = L_57;
			goto IL_0126;
		}
	}
	{
		// AntiAddiction.RealName(new RealNameListener());
		RealNameListener_tED709B762A6644CB50B84FDE17AAF0FDC8AB47FC * L_64 = (RealNameListener_tED709B762A6644CB50B84FDE17AAF0FDC8AB47FC *)il2cpp_codegen_object_new(RealNameListener_tED709B762A6644CB50B84FDE17AAF0FDC8AB47FC_il2cpp_TypeInfo_var);
		RealNameListener__ctor_mE87033C9E71DB4FB631C7A6F5B02BEE92CDCC228(L_64, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(AntiAddiction_t1E52AAFE7B9A8CA505BFF17DC42E16946EA04079_il2cpp_TypeInfo_var);
		AntiAddiction_RealName_mAEEB81D1F823CA662476A28CD53E093D6C825889(L_64, /*hidden argument*/NULL);
		G_B6_0 = G_B5_0;
	}

IL_0126:
	{
		// if (GUI.Button(new Rect(x + antiW, y, antiW, h), "RealName CustomUI", style))
		int32_t L_65 = G_B6_0;
		int32_t L_66 = V_5;
		int32_t L_67 = V_0;
		int32_t L_68 = V_5;
		int32_t L_69 = V_3;
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_70;
		memset((&L_70), 0, sizeof(L_70));
		Rect__ctor_m12075526A02B55B680716A34AD5287B223122B70((&L_70), ((float)((float)((int32_t)il2cpp_codegen_add((int32_t)L_65, (int32_t)L_66)))), ((float)((float)L_67)), ((float)((float)L_68)), ((float)((float)L_69)), /*hidden argument*/NULL);
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_71 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(GUI_tBCBBE29117D8093644C6E72B1CE3FB65C2CDCCC1_il2cpp_TypeInfo_var);
		bool L_72;
		L_72 = GUI_Button_mA1605D5F2A40D770F3E0CCA6D88E7947564B3F7A(L_70, _stringLiteralD7271F72CB0B464DF5A3DE56C471BA9D6E0D6BA3, L_71, /*hidden argument*/NULL);
		G_B7_0 = L_65;
		if (!L_72)
		{
			G_B8_0 = L_65;
			goto IL_0159;
		}
	}
	{
		// AntiAddiction.RealName("??", "34022219911208501X", new RealNameListener());
		RealNameListener_tED709B762A6644CB50B84FDE17AAF0FDC8AB47FC * L_73 = (RealNameListener_tED709B762A6644CB50B84FDE17AAF0FDC8AB47FC *)il2cpp_codegen_object_new(RealNameListener_tED709B762A6644CB50B84FDE17AAF0FDC8AB47FC_il2cpp_TypeInfo_var);
		RealNameListener__ctor_mE87033C9E71DB4FB631C7A6F5B02BEE92CDCC228(L_73, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(AntiAddiction_t1E52AAFE7B9A8CA505BFF17DC42E16946EA04079_il2cpp_TypeInfo_var);
		AntiAddiction_RealName_m8EC2673C81604A97333AC0B22B5E661C17174DE1(_stringLiteralCABEDC89A46B23A1F89529079CC521895A09DA70, _stringLiteralD197841CCDB5B2B59A46C09F9EE18BF0F15C3D00, L_73, /*hidden argument*/NULL);
		G_B8_0 = G_B7_0;
	}

IL_0159:
	{
		// y += d;
		int32_t L_74 = V_0;
		int32_t L_75 = V_1;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_74, (int32_t)L_75));
		// if (GUI.Button(new Rect(x, y, antiW, h), "Logout", style))
		int32_t L_76 = V_0;
		int32_t L_77 = V_5;
		int32_t L_78 = V_3;
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_79;
		memset((&L_79), 0, sizeof(L_79));
		Rect__ctor_m12075526A02B55B680716A34AD5287B223122B70((&L_79), ((float)((float)G_B8_0)), ((float)((float)L_76)), ((float)((float)L_77)), ((float)((float)L_78)), /*hidden argument*/NULL);
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_80 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(GUI_tBCBBE29117D8093644C6E72B1CE3FB65C2CDCCC1_il2cpp_TypeInfo_var);
		bool L_81;
		L_81 = GUI_Button_mA1605D5F2A40D770F3E0CCA6D88E7947564B3F7A(L_79, _stringLiteral80BFDED53A798895F66F7586BB93FB843218DB76, L_80, /*hidden argument*/NULL);
		if (!L_81)
		{
			goto IL_0183;
		}
	}
	{
		// AntiAddiction.Logout();
		IL2CPP_RUNTIME_CLASS_INIT(AntiAddiction_t1E52AAFE7B9A8CA505BFF17DC42E16946EA04079_il2cpp_TypeInfo_var);
		AntiAddiction_Logout_m2E8A8E3F7F1FB817C3A3BC1AB432DC00CDD6D62F(/*hidden argument*/NULL);
		// LogUserInfo(null);
		MainBehaviour_LogUserInfo_mC8FC3F64ABA3C4C6CF253EEE2CDEDB134E4FE6BC((User_t2054FCBCCC727858725CB0AC6A9CE0306D5986AD *)NULL, /*hidden argument*/NULL);
	}

IL_0183:
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
// System.Void MainBehaviour::InitModooPlay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainBehaviour_InitModooPlay_mB6DCCC36721AD85008B5CA02E09D19733FB00D95 (MainBehaviour_tDE09AB0E3B7AB47BEC0D8229B68A94AA3FE0DEC6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AntiAddiction_t1E52AAFE7B9A8CA505BFF17DC42E16946EA04079_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Day1Retention_t5C5C48267E7FA734CD696706DCF7C0DC29025BB3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InitConfig_tB77587871EE04B53CB86593F9C7461FF0B143A47_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TGCenter_t7A01AA650A3F96EAE0E6787DB2804C51C1FBA0B2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TimeLimitListener_t52E35AC71A4BB351FF157B88F72A4A458718CB08_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral06F6DBCB7FFEE255438B4AC7A5C1DEE040406FBA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1A5E706D6D83A6D9E3357CFF9C00B8924AAECD36);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral514D8AA63A446A54F62078A74562DD8BF48ED9B8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral78A60C68335BFADC659417D949DEF46DDCF71CC2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8BE379FCCAE7759F182D2E0FDD1565B9F41370C9);
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
		// config.AppId = "b51dd720-c083-4349-a99e-3de18dfccbd4";
		InitConfig_tB77587871EE04B53CB86593F9C7461FF0B143A47 * L_5 = V_0;
		NullCheck(L_5);
		L_5->set_AppId_3(_stringLiteral514D8AA63A446A54F62078A74562DD8BF48ED9B8);
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
		// AntiAddiction.SetAutoShowTimeLimitPage(false);
		IL2CPP_RUNTIME_CLASS_INIT(AntiAddiction_t1E52AAFE7B9A8CA505BFF17DC42E16946EA04079_il2cpp_TypeInfo_var);
		AntiAddiction_SetAutoShowTimeLimitPage_mFBDEFFBC0A0D5C5BE13C975615D5C1F3A92BBF04((bool)0, /*hidden argument*/NULL);
		// AntiAddiction.SetTimeLimitCallback(new TimeLimitListener());
		TimeLimitListener_t52E35AC71A4BB351FF157B88F72A4A458718CB08 * L_15 = (TimeLimitListener_t52E35AC71A4BB351FF157B88F72A4A458718CB08 *)il2cpp_codegen_object_new(TimeLimitListener_t52E35AC71A4BB351FF157B88F72A4A458718CB08_il2cpp_TypeInfo_var);
		TimeLimitListener__ctor_mABFE790553C8687EF4C95F2CF3C63A5F0A0D00D7(L_15, /*hidden argument*/NULL);
		AntiAddiction_SetTimeLimitCallback_mE6F8CB0B25D95BA5F1ED2CE54744E285887F2D01(L_15, /*hidden argument*/NULL);
		// LogUserInfo(null);
		MainBehaviour_LogUserInfo_mC8FC3F64ABA3C4C6CF253EEE2CDEDB134E4FE6BC((User_t2054FCBCCC727858725CB0AC6A9CE0306D5986AD *)NULL, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MainBehaviour::LogUserInfo(AntiAddictionSdk.Api.User)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainBehaviour_LogUserInfo_mC8FC3F64ABA3C4C6CF253EEE2CDEDB134E4FE6BC (User_t2054FCBCCC727858725CB0AC6A9CE0306D5986AD * ___user0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AntiAddiction_t1E52AAFE7B9A8CA505BFF17DC42E16946EA04079_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral030BA20BD3303BA3A366F08049FB32193FD0EA8F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0BEE2DBE24919FD195E4DCB7B1B3BCAA615CBFE1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral10F2BD5742BCE93C3AC253225B935BAB2400DA44);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral11BEF66A6E304E5AB263A39F7B2C0B72640B9F99);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral269D03B0D65AAA6DE7A1ED2198B67CD556EE6B7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3DE4E33001D66F488D312800D96D1F0F48A95791);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral420100FF7BE6008D5D5DE9287150E23E2950C807);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral44CFD9D049C36A5A3FC2003C8D84BE1219A6259F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral57C4B5E39EEE4C2D3B9B2A98EBE68ED6BD5BA1CE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5D6E981DCA1ACD0AF56B5EFF1452B8DFA6777493);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6AA6005E81D2ACCDEE6171886C5DA95A25B3D9B9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral74157E713F0EC92C4DDB68A67AC1F6EE2F625622);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8A5286F19216034A832BB9FF50370EE89D6CFD2C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8F0DA9736ED3CFBCF1ED7146B3DC6BBC0C246B0C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9690D53E0C8690FB5E8119156EC10DA39EA19F6F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA2386659D2348915EDCA322DAAA24484B2395745);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAD57C4B176C56133A3E7E16C5497B01F97DA3D3A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBE7162E4BAE8032C5093B8B018AE7798DECB26D0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC57DA5652F526BF9C151C73EAE7E58AD7C4B560F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	int32_t V_2 = 0;
	String_t* V_3 = NULL;
	RealNameResult_t72CCC4738CF4CCF98DB6E68337B920CA83FBD619 * G_B4_0 = NULL;
	RealNameResult_t72CCC4738CF4CCF98DB6E68337B920CA83FBD619 * G_B3_0 = NULL;
	RealNameResult_t72CCC4738CF4CCF98DB6E68337B920CA83FBD619 * G_B6_0 = NULL;
	RealNameResult_t72CCC4738CF4CCF98DB6E68337B920CA83FBD619 * G_B5_0 = NULL;
	RealNameResult_t72CCC4738CF4CCF98DB6E68337B920CA83FBD619 * G_B8_0 = NULL;
	RealNameResult_t72CCC4738CF4CCF98DB6E68337B920CA83FBD619 * G_B7_0 = NULL;
	{
		// if (user == null) {
		User_t2054FCBCCC727858725CB0AC6A9CE0306D5986AD * L_0 = ___user0;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		// user = AntiAddiction.GetUser();
		IL2CPP_RUNTIME_CLASS_INIT(AntiAddiction_t1E52AAFE7B9A8CA505BFF17DC42E16946EA04079_il2cpp_TypeInfo_var);
		User_t2054FCBCCC727858725CB0AC6A9CE0306D5986AD * L_1;
		L_1 = AntiAddiction_GetUser_m129E8784D396FB5A92E7636EDF15F9D15FFF7145(/*hidden argument*/NULL);
		___user0 = L_1;
	}

IL_000a:
	{
		// string result = "";
		V_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		// RealNameResult realNameResult = user.GetRealNameResult();
		User_t2054FCBCCC727858725CB0AC6A9CE0306D5986AD * L_2 = ___user0;
		NullCheck(L_2);
		RealNameResult_t72CCC4738CF4CCF98DB6E68337B920CA83FBD619 * L_3;
		L_3 = User_GetRealNameResult_mBC986A65EF712B31E8F93A7B8E42E3BDA591DD7A(L_2, /*hidden argument*/NULL);
		// if (realNameResult.IsSuccess()) {
		RealNameResult_t72CCC4738CF4CCF98DB6E68337B920CA83FBD619 * L_4 = L_3;
		NullCheck(L_4);
		bool L_5;
		L_5 = RealNameResult_IsSuccess_mEC51A9C1D674828B2BDD7FF618F1ED518414CE02(L_4, /*hidden argument*/NULL);
		G_B3_0 = L_4;
		if (!L_5)
		{
			G_B4_0 = L_4;
			goto IL_002e;
		}
	}
	{
		// result = "??????";
		V_0 = _stringLiteralC57DA5652F526BF9C151C73EAE7E58AD7C4B560F;
		// Debug.Log("realNameResult: isSuccess");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral44CFD9D049C36A5A3FC2003C8D84BE1219A6259F, /*hidden argument*/NULL);
		G_B4_0 = G_B3_0;
	}

IL_002e:
	{
		// if (realNameResult.IsFail()) {
		RealNameResult_t72CCC4738CF4CCF98DB6E68337B920CA83FBD619 * L_6 = G_B4_0;
		NullCheck(L_6);
		bool L_7;
		L_7 = RealNameResult_IsFail_mC60D21A1DC91D5D36046E8758D1BC442730C5459(L_6, /*hidden argument*/NULL);
		G_B5_0 = L_6;
		if (!L_7)
		{
			G_B6_0 = L_6;
			goto IL_0046;
		}
	}
	{
		// Debug.Log("realNameResult: isFail");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral420100FF7BE6008D5D5DE9287150E23E2950C807, /*hidden argument*/NULL);
		// result = "??????";
		V_0 = _stringLiteralBE7162E4BAE8032C5093B8B018AE7798DECB26D0;
		G_B6_0 = G_B5_0;
	}

IL_0046:
	{
		// if (realNameResult.IsProcessing()) {
		RealNameResult_t72CCC4738CF4CCF98DB6E68337B920CA83FBD619 * L_8 = G_B6_0;
		NullCheck(L_8);
		bool L_9;
		L_9 = RealNameResult_IsProcessing_m04DFB0DE3726AF7942CB5CDF034869D3F3A2568D(L_8, /*hidden argument*/NULL);
		G_B7_0 = L_8;
		if (!L_9)
		{
			G_B8_0 = L_8;
			goto IL_005e;
		}
	}
	{
		// Debug.Log("realNameResult: isProcessing");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral269D03B0D65AAA6DE7A1ED2198B67CD556EE6B7A, /*hidden argument*/NULL);
		// result = "?????...";
		V_0 = _stringLiteral8F0DA9736ED3CFBCF1ED7146B3DC6BBC0C246B0C;
		G_B8_0 = G_B7_0;
	}

IL_005e:
	{
		// if (realNameResult.IsInitial()) {
		NullCheck(G_B8_0);
		bool L_10;
		L_10 = RealNameResult_IsInitial_m2D92DF47DB2F52255AE9D32765E013F67F621528(G_B8_0, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_0075;
		}
	}
	{
		// Debug.Log("realNameResult: isInitial");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral74157E713F0EC92C4DDB68A67AC1F6EE2F625622, /*hidden argument*/NULL);
		// result = "????";
		V_0 = _stringLiteral0BEE2DBE24919FD195E4DCB7B1B3BCAA615CBFE1;
	}

IL_0075:
	{
		// if (user.IsTourist()) {
		User_t2054FCBCCC727858725CB0AC6A9CE0306D5986AD * L_11 = ___user0;
		NullCheck(L_11);
		bool L_12;
		L_12 = User_IsTourist_m4ED9B4EF6E903618B04A851EAB4A821D8FBCD942(L_11, /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_008d;
		}
	}
	{
		// info = "??";
		V_1 = _stringLiteralAD57C4B176C56133A3E7E16C5497B01F97DA3D3A;
		// Debug.Log("realNameResult: isTourist");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral10F2BD5742BCE93C3AC253225B935BAB2400DA44, /*hidden argument*/NULL);
	}

IL_008d:
	{
		// if (user.IsChild()) {
		User_t2054FCBCCC727858725CB0AC6A9CE0306D5986AD * L_13 = ___user0;
		NullCheck(L_13);
		bool L_14;
		L_14 = User_IsChild_m8CCA3DE0318FF43A8CB37FE26751D3D519572F5D(L_13, /*hidden argument*/NULL);
		if (!L_14)
		{
			goto IL_00a5;
		}
	}
	{
		// info = "????";
		V_1 = _stringLiteralA2386659D2348915EDCA322DAAA24484B2395745;
		// Debug.Log("realNameResult: isChild");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral57C4B5E39EEE4C2D3B9B2A98EBE68ED6BD5BA1CE, /*hidden argument*/NULL);
	}

IL_00a5:
	{
		// if (user.IsAdult()) {
		User_t2054FCBCCC727858725CB0AC6A9CE0306D5986AD * L_15 = ___user0;
		NullCheck(L_15);
		bool L_16;
		L_16 = User_IsAdult_mA4E8D84F16A31B904E3355B2F54476445EBA6EC8(L_15, /*hidden argument*/NULL);
		if (!L_16)
		{
			goto IL_00bf;
		}
	}
	{
		// info = "???";
		V_1 = _stringLiteral11BEF66A6E304E5AB263A39F7B2C0B72640B9F99;
		// Debug.Log("realNameResult: isAdult");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral030BA20BD3303BA3A366F08049FB32193FD0EA8F, /*hidden argument*/NULL);
		// } else {
		goto IL_00cf;
	}

IL_00bf:
	{
		// info = "??";
		V_1 = _stringLiteralAD57C4B176C56133A3E7E16C5497B01F97DA3D3A;
		// Debug.Log("realNameResult: isTourist 2");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral8A5286F19216034A832BB9FF50370EE89D6CFD2C, /*hidden argument*/NULL);
	}

IL_00cf:
	{
		// int age = user.GetAge();
		User_t2054FCBCCC727858725CB0AC6A9CE0306D5986AD * L_17 = ___user0;
		NullCheck(L_17);
		int32_t L_18;
		L_18 = User_GetAge_m29634304231DBFDC2847EC256E54BF25B2CEDD36(L_17, /*hidden argument*/NULL);
		V_2 = L_18;
		// string userInfo = "??????: " + result + "\n"
		//         + ", ???" + info + "\n"
		//         + ", ???" + age;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_19 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)6);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_20 = L_19;
		NullCheck(L_20);
		ArrayElementTypeCheck (L_20, _stringLiteral6AA6005E81D2ACCDEE6171886C5DA95A25B3D9B9);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral6AA6005E81D2ACCDEE6171886C5DA95A25B3D9B9);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_21 = L_20;
		String_t* L_22 = V_0;
		NullCheck(L_21);
		ArrayElementTypeCheck (L_21, L_22);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_22);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_23 = L_21;
		NullCheck(L_23);
		ArrayElementTypeCheck (L_23, _stringLiteral9690D53E0C8690FB5E8119156EC10DA39EA19F6F);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral9690D53E0C8690FB5E8119156EC10DA39EA19F6F);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_24 = L_23;
		String_t* L_25 = V_1;
		NullCheck(L_24);
		ArrayElementTypeCheck (L_24, L_25);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_25);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_26 = L_24;
		NullCheck(L_26);
		ArrayElementTypeCheck (L_26, _stringLiteral5D6E981DCA1ACD0AF56B5EFF1452B8DFA6777493);
		(L_26)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral5D6E981DCA1ACD0AF56B5EFF1452B8DFA6777493);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_27 = L_26;
		String_t* L_28;
		L_28 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_2), /*hidden argument*/NULL);
		NullCheck(L_27);
		ArrayElementTypeCheck (L_27, L_28);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)L_28);
		String_t* L_29;
		L_29 = String_Concat_mFEA7EFA1A6E75B96B1B7BC4526AAC864BFF83CC9(L_27, /*hidden argument*/NULL);
		V_3 = L_29;
		// Debug.Log("LogUserInfo: " + userInfo);
		String_t* L_30 = V_3;
		String_t* L_31;
		L_31 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral3DE4E33001D66F488D312800D96D1F0F48A95791, L_30, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_31, /*hidden argument*/NULL);
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
// System.Void AntiAddictionSdk.Api.RealNameResult::.ctor(AntiAddictionSdk.Common.IRealNameResultClient)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RealNameResult__ctor_mC362BC8500C00096D516DC79843544767A908C72 (RealNameResult_t72CCC4738CF4CCF98DB6E68337B920CA83FBD619 * __this, RuntimeObject* ___client0, const RuntimeMethod* method)
{
	{
		// public RealNameResult(IRealNameResultClient client) {
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// mClient = client;
		RuntimeObject* L_0 = ___client0;
		__this->set_mClient_0(L_0);
		// }
		return;
	}
}
// System.Boolean AntiAddictionSdk.Api.RealNameResult::IsInitial()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RealNameResult_IsInitial_m2D92DF47DB2F52255AE9D32765E013F67F621528 (RealNameResult_t72CCC4738CF4CCF98DB6E68337B920CA83FBD619 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IRealNameResultClient_tB4462896A3DB7030B89039A41B9D030A2A1E3B1F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return mClient.IsInitial();
		RuntimeObject* L_0 = __this->get_mClient_0();
		NullCheck(L_0);
		bool L_1;
		L_1 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean AntiAddictionSdk.Common.IRealNameResultClient::IsInitial() */, IRealNameResultClient_tB4462896A3DB7030B89039A41B9D030A2A1E3B1F_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Boolean AntiAddictionSdk.Api.RealNameResult::IsSuccess()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RealNameResult_IsSuccess_mEC51A9C1D674828B2BDD7FF618F1ED518414CE02 (RealNameResult_t72CCC4738CF4CCF98DB6E68337B920CA83FBD619 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IRealNameResultClient_tB4462896A3DB7030B89039A41B9D030A2A1E3B1F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return mClient.IsSuccess();
		RuntimeObject* L_0 = __this->get_mClient_0();
		NullCheck(L_0);
		bool L_1;
		L_1 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean AntiAddictionSdk.Common.IRealNameResultClient::IsSuccess() */, IRealNameResultClient_tB4462896A3DB7030B89039A41B9D030A2A1E3B1F_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Boolean AntiAddictionSdk.Api.RealNameResult::IsProcessing()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RealNameResult_IsProcessing_m04DFB0DE3726AF7942CB5CDF034869D3F3A2568D (RealNameResult_t72CCC4738CF4CCF98DB6E68337B920CA83FBD619 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IRealNameResultClient_tB4462896A3DB7030B89039A41B9D030A2A1E3B1F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return mClient.IsProcessing();
		RuntimeObject* L_0 = __this->get_mClient_0();
		NullCheck(L_0);
		bool L_1;
		L_1 = InterfaceFuncInvoker0< bool >::Invoke(2 /* System.Boolean AntiAddictionSdk.Common.IRealNameResultClient::IsProcessing() */, IRealNameResultClient_tB4462896A3DB7030B89039A41B9D030A2A1E3B1F_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Boolean AntiAddictionSdk.Api.RealNameResult::IsFail()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RealNameResult_IsFail_mC60D21A1DC91D5D36046E8758D1BC442730C5459 (RealNameResult_t72CCC4738CF4CCF98DB6E68337B920CA83FBD619 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IRealNameResultClient_tB4462896A3DB7030B89039A41B9D030A2A1E3B1F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return mClient.IsFail();
		RuntimeObject* L_0 = __this->get_mClient_0();
		NullCheck(L_0);
		bool L_1;
		L_1 = InterfaceFuncInvoker0< bool >::Invoke(3 /* System.Boolean AntiAddictionSdk.Common.IRealNameResultClient::IsFail() */, IRealNameResultClient_tB4462896A3DB7030B89039A41B9D030A2A1E3B1F_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Int32 AntiAddictionSdk.Api.RealNameResult::GetResultCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RealNameResult_GetResultCode_mF11F6DDB28869046324723162BFB964D3EBAC318 (RealNameResult_t72CCC4738CF4CCF98DB6E68337B920CA83FBD619 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IRealNameResultClient_tB4462896A3DB7030B89039A41B9D030A2A1E3B1F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return mClient.GetResultCode();
		RuntimeObject* L_0 = __this->get_mClient_0();
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 AntiAddictionSdk.Common.IRealNameResultClient::GetResultCode() */, IRealNameResultClient_tB4462896A3DB7030B89039A41B9D030A2A1E3B1F_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.String AntiAddictionSdk.Api.RealNameResult::GetResultMsg()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RealNameResult_GetResultMsg_m0AC3727922E0566C6A75EB78C9F2AFFFEE1AE2ED (RealNameResult_t72CCC4738CF4CCF98DB6E68337B920CA83FBD619 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IRealNameResultClient_tB4462896A3DB7030B89039A41B9D030A2A1E3B1F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return mClient.GetResultMsg();
		RuntimeObject* L_0 = __this->get_mClient_0();
		NullCheck(L_0);
		String_t* L_1;
		L_1 = InterfaceFuncInvoker0< String_t* >::Invoke(5 /* System.String AntiAddictionSdk.Common.IRealNameResultClient::GetResultMsg() */, IRealNameResultClient_tB4462896A3DB7030B89039A41B9D030A2A1E3B1F_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.String AntiAddictionSdk.Api.RealNameResult::GetPlayerId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RealNameResult_GetPlayerId_mB7708AF079F9D5461BEB3E56304B8B9E279198DC (RealNameResult_t72CCC4738CF4CCF98DB6E68337B920CA83FBD619 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IRealNameResultClient_tB4462896A3DB7030B89039A41B9D030A2A1E3B1F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return mClient.GetPlayerId();
		RuntimeObject* L_0 = __this->get_mClient_0();
		NullCheck(L_0);
		String_t* L_1;
		L_1 = InterfaceFuncInvoker0< String_t* >::Invoke(6 /* System.String AntiAddictionSdk.Common.IRealNameResultClient::GetPlayerId() */, IRealNameResultClient_tB4462896A3DB7030B89039A41B9D030A2A1E3B1F_il2cpp_TypeInfo_var, L_0);
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
// System.Void AntiAddictionSdk.Platforms.Android.RealNameResultClient::.ctor(UnityEngine.AndroidJavaObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RealNameResultClient__ctor_mA7AF5E06CC7F2DF103B0E9A461A0333B4BE37FCC (RealNameResultClient_t28FE6782285D421A473D8786DA3B7AFE9BFC044D * __this, AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * ___result0, const RuntimeMethod* method)
{
	{
		// public RealNameResultClient(AndroidJavaObject result) {
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// Result = result;
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_0 = ___result0;
		__this->set_Result_0(L_0);
		// }
		return;
	}
}
// System.Boolean AntiAddictionSdk.Platforms.Android.RealNameResultClient::IsInitial()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RealNameResultClient_IsInitial_m3B37AE6403CE3BB5832142B2453953F015E7646B (RealNameResultClient_t28FE6782285D421A473D8786DA3B7AFE9BFC044D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m705BF7B215A83B7851B19591CE37DA93250C7A8A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0E6852CA88224C0B29708BE69F8D388FDC6C8F1F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return Result.Call<bool>("isInitial");
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_0 = __this->get_Result_0();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1;
		L_1 = Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_RuntimeMethod_var);
		NullCheck(L_0);
		bool L_2;
		L_2 = AndroidJavaObject_Call_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m705BF7B215A83B7851B19591CE37DA93250C7A8A(L_0, _stringLiteral0E6852CA88224C0B29708BE69F8D388FDC6C8F1F, L_1, /*hidden argument*/AndroidJavaObject_Call_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m705BF7B215A83B7851B19591CE37DA93250C7A8A_RuntimeMethod_var);
		return L_2;
	}
}
// System.Boolean AntiAddictionSdk.Platforms.Android.RealNameResultClient::IsSuccess()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RealNameResultClient_IsSuccess_mDEFE784714E06EDC1927911DDF11D98A68603A19 (RealNameResultClient_t28FE6782285D421A473D8786DA3B7AFE9BFC044D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m705BF7B215A83B7851B19591CE37DA93250C7A8A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0B988E2022EA115D1F3BC600C1497808CDAECDA7);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return Result.Call<bool>("isSuccess");
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_0 = __this->get_Result_0();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1;
		L_1 = Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_RuntimeMethod_var);
		NullCheck(L_0);
		bool L_2;
		L_2 = AndroidJavaObject_Call_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m705BF7B215A83B7851B19591CE37DA93250C7A8A(L_0, _stringLiteral0B988E2022EA115D1F3BC600C1497808CDAECDA7, L_1, /*hidden argument*/AndroidJavaObject_Call_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m705BF7B215A83B7851B19591CE37DA93250C7A8A_RuntimeMethod_var);
		return L_2;
	}
}
// System.Boolean AntiAddictionSdk.Platforms.Android.RealNameResultClient::IsProcessing()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RealNameResultClient_IsProcessing_mDC543B7D9433B262BFFDD9D8CAE651D2F45E81C1 (RealNameResultClient_t28FE6782285D421A473D8786DA3B7AFE9BFC044D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m705BF7B215A83B7851B19591CE37DA93250C7A8A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral69110FD81DEC55762693325F932101FB62664E5F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return Result.Call<bool>("isProcessing");
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_0 = __this->get_Result_0();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1;
		L_1 = Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_RuntimeMethod_var);
		NullCheck(L_0);
		bool L_2;
		L_2 = AndroidJavaObject_Call_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m705BF7B215A83B7851B19591CE37DA93250C7A8A(L_0, _stringLiteral69110FD81DEC55762693325F932101FB62664E5F, L_1, /*hidden argument*/AndroidJavaObject_Call_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m705BF7B215A83B7851B19591CE37DA93250C7A8A_RuntimeMethod_var);
		return L_2;
	}
}
// System.Boolean AntiAddictionSdk.Platforms.Android.RealNameResultClient::IsFail()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RealNameResultClient_IsFail_mA794FBA15D41C219B8BC4CBA82623B2D8045FCD9 (RealNameResultClient_t28FE6782285D421A473D8786DA3B7AFE9BFC044D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m705BF7B215A83B7851B19591CE37DA93250C7A8A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9D93D803FB842EE12670D6A132A15FFE068CB8C3);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return Result.Call<bool>("isFail");
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_0 = __this->get_Result_0();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1;
		L_1 = Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_RuntimeMethod_var);
		NullCheck(L_0);
		bool L_2;
		L_2 = AndroidJavaObject_Call_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m705BF7B215A83B7851B19591CE37DA93250C7A8A(L_0, _stringLiteral9D93D803FB842EE12670D6A132A15FFE068CB8C3, L_1, /*hidden argument*/AndroidJavaObject_Call_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m705BF7B215A83B7851B19591CE37DA93250C7A8A_RuntimeMethod_var);
		return L_2;
	}
}
// System.Int32 AntiAddictionSdk.Platforms.Android.RealNameResultClient::GetResultCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RealNameResultClient_GetResultCode_m463F46F4F844A37015118163C05BDF6D470E78BF (RealNameResultClient_t28FE6782285D421A473D8786DA3B7AFE9BFC044D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m02A4D4C9FD8B15173829454766683BA424408A2A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC6CB66E2462037E56D9C3EE58E0744985E1D989E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return Result.Call<int>("getResultCode");
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_0 = __this->get_Result_0();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1;
		L_1 = Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_RuntimeMethod_var);
		NullCheck(L_0);
		int32_t L_2;
		L_2 = AndroidJavaObject_Call_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m02A4D4C9FD8B15173829454766683BA424408A2A(L_0, _stringLiteralC6CB66E2462037E56D9C3EE58E0744985E1D989E, L_1, /*hidden argument*/AndroidJavaObject_Call_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m02A4D4C9FD8B15173829454766683BA424408A2A_RuntimeMethod_var);
		return L_2;
	}
}
// System.String AntiAddictionSdk.Platforms.Android.RealNameResultClient::GetResultMsg()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RealNameResultClient_GetResultMsg_m9F88DD7B3B62DD6BCD8EECDE7D26FBC11E090EF6 (RealNameResultClient_t28FE6782285D421A473D8786DA3B7AFE9BFC044D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisString_t_mB2E722C64FC7BD9F98B983053A6D3F9D94D355AE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralADCE9D802257F1CBE6265709F193EEF1E5E93FEB);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return Result.Call<string>("getResultMsg");
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_0 = __this->get_Result_0();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1;
		L_1 = Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_RuntimeMethod_var);
		NullCheck(L_0);
		String_t* L_2;
		L_2 = AndroidJavaObject_Call_TisString_t_mB2E722C64FC7BD9F98B983053A6D3F9D94D355AE(L_0, _stringLiteralADCE9D802257F1CBE6265709F193EEF1E5E93FEB, L_1, /*hidden argument*/AndroidJavaObject_Call_TisString_t_mB2E722C64FC7BD9F98B983053A6D3F9D94D355AE_RuntimeMethod_var);
		return L_2;
	}
}
// System.String AntiAddictionSdk.Platforms.Android.RealNameResultClient::GetPlayerId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RealNameResultClient_GetPlayerId_mFF16F696FEF944B357349E62B7C83D2254AE59FE (RealNameResultClient_t28FE6782285D421A473D8786DA3B7AFE9BFC044D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisString_t_mB2E722C64FC7BD9F98B983053A6D3F9D94D355AE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7A00E59294AD906535DB79E533FC401D34929E41);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return Result.Call<string>("getPlayerId");
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_0 = __this->get_Result_0();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1;
		L_1 = Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_RuntimeMethod_var);
		NullCheck(L_0);
		String_t* L_2;
		L_2 = AndroidJavaObject_Call_TisString_t_mB2E722C64FC7BD9F98B983053A6D3F9D94D355AE(L_0, _stringLiteral7A00E59294AD906535DB79E533FC401D34929E41, L_1, /*hidden argument*/AndroidJavaObject_Call_TisString_t_mB2E722C64FC7BD9F98B983053A6D3F9D94D355AE_RuntimeMethod_var);
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
// System.Void AntiAddictionSdk.Platforms.iOS.RealNameResultClient::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RealNameResultClient__ctor_m1BCF8B5C40C3EACBBE966D29544373D2C9DE92EB (RealNameResultClient_tBF949234076C9C3294A5104EF710ECE383DF2A51 * __this, intptr_t ___result0, const RuntimeMethod* method)
{
	{
		// public RealNameResultClient(IntPtr result) {
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// Result = result;
		intptr_t L_0 = ___result0;
		__this->set_Result_0((intptr_t)L_0);
		// }
		return;
	}
}
// System.Boolean AntiAddictionSdk.Platforms.iOS.RealNameResultClient::IsInitial()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RealNameResultClient_IsInitial_m678675FD63CD40E6C7F85C44E370B9E6EA7FC655 (RealNameResultClient_tBF949234076C9C3294A5104EF710ECE383DF2A51 * __this, const RuntimeMethod* method)
{
	{
		// return Externs.AntiAddictionRealNameResultIsInitial(Result);
		intptr_t L_0 = __this->get_Result_0();
		bool L_1;
		L_1 = Externs_AntiAddictionRealNameResultIsInitial_m9830C55664B50FD44223FC2D5EFD23F0DFFFD6B4((intptr_t)L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean AntiAddictionSdk.Platforms.iOS.RealNameResultClient::IsSuccess()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RealNameResultClient_IsSuccess_m2981A96AC8177D43360A7D229AF00270AFA9319F (RealNameResultClient_tBF949234076C9C3294A5104EF710ECE383DF2A51 * __this, const RuntimeMethod* method)
{
	{
		// return Externs.AntiAddictionRealNameResultIsSuccess(Result);
		intptr_t L_0 = __this->get_Result_0();
		bool L_1;
		L_1 = Externs_AntiAddictionRealNameResultIsSuccess_m709036BA2AF8E73FFBFF4006628B3AD89418DB1F((intptr_t)L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean AntiAddictionSdk.Platforms.iOS.RealNameResultClient::IsProcessing()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RealNameResultClient_IsProcessing_mE2B83BFB457F7478DF22CDF75C55868C06CBB7EB (RealNameResultClient_tBF949234076C9C3294A5104EF710ECE383DF2A51 * __this, const RuntimeMethod* method)
{
	{
		// return Externs.AntiAddictionRealNameResultIsProcessing(Result);
		intptr_t L_0 = __this->get_Result_0();
		bool L_1;
		L_1 = Externs_AntiAddictionRealNameResultIsProcessing_mE4B868504A3D797564ADFD457C7952595248AB82((intptr_t)L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean AntiAddictionSdk.Platforms.iOS.RealNameResultClient::IsFail()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RealNameResultClient_IsFail_mB9E79200C8D05E52D384D968A9425326E636FC16 (RealNameResultClient_tBF949234076C9C3294A5104EF710ECE383DF2A51 * __this, const RuntimeMethod* method)
{
	{
		// return Externs.AntiAddictionRealNameResultIsFail(Result);
		intptr_t L_0 = __this->get_Result_0();
		bool L_1;
		L_1 = Externs_AntiAddictionRealNameResultIsFail_m25CBEB0619317D2BB683E8735376E9842E3891D6((intptr_t)L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Int32 AntiAddictionSdk.Platforms.iOS.RealNameResultClient::GetResultCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RealNameResultClient_GetResultCode_m3A750A4FF3C02DEAB2D925428D33E857F05DC9B6 (RealNameResultClient_tBF949234076C9C3294A5104EF710ECE383DF2A51 * __this, const RuntimeMethod* method)
{
	{
		// return Externs.AntiAddictionRealNameResultGetResultCode(Result);
		intptr_t L_0 = __this->get_Result_0();
		int32_t L_1;
		L_1 = Externs_AntiAddictionRealNameResultGetResultCode_mD060A7E97DF5938FA51E479BC179AA49702E2E10((intptr_t)L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.String AntiAddictionSdk.Platforms.iOS.RealNameResultClient::GetResultMsg()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RealNameResultClient_GetResultMsg_m83A3DC4D1A55BEB86AA8545875BCDE5748A0DA0A (RealNameResultClient_tBF949234076C9C3294A5104EF710ECE383DF2A51 * __this, const RuntimeMethod* method)
{
	{
		// return Externs.AntiAddictionRealNameResultGetResultMsg(Result);
		intptr_t L_0 = __this->get_Result_0();
		String_t* L_1;
		L_1 = Externs_AntiAddictionRealNameResultGetResultMsg_m2A62E976E4F8DF2BFB46BF1D5E67EF75E8454F0C((intptr_t)L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.String AntiAddictionSdk.Platforms.iOS.RealNameResultClient::GetPlayerId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RealNameResultClient_GetPlayerId_mE99EDAC3536D439A31F70926B01C2BF698D794AE (RealNameResultClient_tBF949234076C9C3294A5104EF710ECE383DF2A51 * __this, const RuntimeMethod* method)
{
	{
		// return Externs.AntiAddictionRealNameResultGetPlayerId(Result);
		intptr_t L_0 = __this->get_Result_0();
		String_t* L_1;
		L_1 = Externs_AntiAddictionRealNameResultGetPlayerId_m0B3F8752CCF55DB7287B68678CCD1A9C31FAC413((intptr_t)L_0, /*hidden argument*/NULL);
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
// System.Void AntiAddictionSdk.Api.TimeLimit::.ctor(AntiAddictionSdk.Common.ITimeLimitClient)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimeLimit__ctor_m67E9BF4FF91D1C5608D3630A8B205686CFC9BA64 (TimeLimit_t34F8F02496A68C19246A6EDB732D70E8DAD79C9F * __this, RuntimeObject* ___client0, const RuntimeMethod* method)
{
	{
		// public TimeLimit(ITimeLimitClient client) {
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// mClient = client;
		RuntimeObject* L_0 = ___client0;
		__this->set_mClient_0(L_0);
		// }
		return;
	}
}
// System.Int32 AntiAddictionSdk.Api.TimeLimit::GetReason()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TimeLimit_GetReason_m5FC6E4A3363B5FBD015F70C8C742F3BDA3BCDAF3 (TimeLimit_t34F8F02496A68C19246A6EDB732D70E8DAD79C9F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITimeLimitClient_tA9CE9CF36A023176694DF43EEE99A5CF51207AF3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return mClient.GetReason();
		RuntimeObject* L_0 = __this->get_mClient_0();
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 AntiAddictionSdk.Common.ITimeLimitClient::GetReason() */, ITimeLimitClient_tA9CE9CF36A023176694DF43EEE99A5CF51207AF3_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Boolean AntiAddictionSdk.Api.TimeLimit::IsLimit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TimeLimit_IsLimit_mC2E840FE639887FF4C8F720E80DE4418740C6B69 (TimeLimit_t34F8F02496A68C19246A6EDB732D70E8DAD79C9F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITimeLimitClient_tA9CE9CF36A023176694DF43EEE99A5CF51207AF3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return mClient.IsLimit();
		RuntimeObject* L_0 = __this->get_mClient_0();
		NullCheck(L_0);
		bool L_1;
		L_1 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean AntiAddictionSdk.Common.ITimeLimitClient::IsLimit() */, ITimeLimitClient_tA9CE9CF36A023176694DF43EEE99A5CF51207AF3_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Int64 AntiAddictionSdk.Api.TimeLimit::GetTimeToLimit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t TimeLimit_GetTimeToLimit_mC5E52B40F3822808BADFFA459E944775EAD906F8 (TimeLimit_t34F8F02496A68C19246A6EDB732D70E8DAD79C9F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITimeLimitClient_tA9CE9CF36A023176694DF43EEE99A5CF51207AF3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return mClient.GetTimeToLimit();
		RuntimeObject* L_0 = __this->get_mClient_0();
		NullCheck(L_0);
		int64_t L_1;
		L_1 = InterfaceFuncInvoker0< int64_t >::Invoke(2 /* System.Int64 AntiAddictionSdk.Common.ITimeLimitClient::GetTimeToLimit() */, ITimeLimitClient_tA9CE9CF36A023176694DF43EEE99A5CF51207AF3_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// AntiAddictionSdk.Api.LimitTip AntiAddictionSdk.Api.TimeLimit::GetLimitTip()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LimitTip_tF8B5096C82EDA57B6870A2B503C91C61553700BD * TimeLimit_GetLimitTip_m17F60FE0EC1E0938C9614FFC6349B5CA6B773692 (TimeLimit_t34F8F02496A68C19246A6EDB732D70E8DAD79C9F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITimeLimitClient_tA9CE9CF36A023176694DF43EEE99A5CF51207AF3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return mClient.GetLimitTip();
		RuntimeObject* L_0 = __this->get_mClient_0();
		NullCheck(L_0);
		LimitTip_tF8B5096C82EDA57B6870A2B503C91C61553700BD * L_1;
		L_1 = InterfaceFuncInvoker0< LimitTip_tF8B5096C82EDA57B6870A2B503C91C61553700BD * >::Invoke(3 /* AntiAddictionSdk.Api.LimitTip AntiAddictionSdk.Common.ITimeLimitClient::GetLimitTip() */, ITimeLimitClient_tA9CE9CF36A023176694DF43EEE99A5CF51207AF3_il2cpp_TypeInfo_var, L_0);
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
// System.Void AntiAddictionSdk.Platforms.Android.TimeLimitClient::.ctor(UnityEngine.AndroidJavaObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimeLimitClient__ctor_m1DF010F1D024CC9C772AD9B44F345C363032912C (TimeLimitClient_t2B20BA4A4E97557CD346C1B50D9393EEA30D0919 * __this, AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * ___timeLimit0, const RuntimeMethod* method)
{
	{
		// public TimeLimitClient(AndroidJavaObject timeLimit) {
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// TimeLimit = timeLimit;
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_0 = ___timeLimit0;
		__this->set_TimeLimit_0(L_0);
		// }
		return;
	}
}
// System.Int32 AntiAddictionSdk.Platforms.Android.TimeLimitClient::GetReason()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TimeLimitClient_GetReason_mEA5FDBCE94DCD7992AEB63B51674BC8C69E313A7 (TimeLimitClient_t2B20BA4A4E97557CD346C1B50D9393EEA30D0919 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m02A4D4C9FD8B15173829454766683BA424408A2A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral01D337CE6AE508AC41656644063FE9925EBC46FB);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return TimeLimit.Call<int>("getReason");
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_0 = __this->get_TimeLimit_0();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1;
		L_1 = Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_RuntimeMethod_var);
		NullCheck(L_0);
		int32_t L_2;
		L_2 = AndroidJavaObject_Call_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m02A4D4C9FD8B15173829454766683BA424408A2A(L_0, _stringLiteral01D337CE6AE508AC41656644063FE9925EBC46FB, L_1, /*hidden argument*/AndroidJavaObject_Call_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m02A4D4C9FD8B15173829454766683BA424408A2A_RuntimeMethod_var);
		return L_2;
	}
}
// System.Boolean AntiAddictionSdk.Platforms.Android.TimeLimitClient::IsLimit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TimeLimitClient_IsLimit_mE1099249968A7F065131AB8BD938508962E2770F (TimeLimitClient_t2B20BA4A4E97557CD346C1B50D9393EEA30D0919 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m705BF7B215A83B7851B19591CE37DA93250C7A8A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF4830D6294E28ABBFBD453CE8D70F12B69FA8B70);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return TimeLimit.Call<bool>("isLimit");
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_0 = __this->get_TimeLimit_0();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1;
		L_1 = Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_RuntimeMethod_var);
		NullCheck(L_0);
		bool L_2;
		L_2 = AndroidJavaObject_Call_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m705BF7B215A83B7851B19591CE37DA93250C7A8A(L_0, _stringLiteralF4830D6294E28ABBFBD453CE8D70F12B69FA8B70, L_1, /*hidden argument*/AndroidJavaObject_Call_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m705BF7B215A83B7851B19591CE37DA93250C7A8A_RuntimeMethod_var);
		return L_2;
	}
}
// System.Int64 AntiAddictionSdk.Platforms.Android.TimeLimitClient::GetTimeToLimit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t TimeLimitClient_GetTimeToLimit_m7B0533258F138F093B62F1816404E7EE27A47AD9 (TimeLimitClient_t2B20BA4A4E97557CD346C1B50D9393EEA30D0919 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisInt64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_m2E2FBAE10897A748859DD7EB19EBB1DB9BD02787_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral88633FD98EF4561059DF9E30FE3C67941EE9C728);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return TimeLimit.Call<long>("getTimeToLimit");
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_0 = __this->get_TimeLimit_0();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1;
		L_1 = Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_RuntimeMethod_var);
		NullCheck(L_0);
		int64_t L_2;
		L_2 = AndroidJavaObject_Call_TisInt64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_m2E2FBAE10897A748859DD7EB19EBB1DB9BD02787(L_0, _stringLiteral88633FD98EF4561059DF9E30FE3C67941EE9C728, L_1, /*hidden argument*/AndroidJavaObject_Call_TisInt64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_m2E2FBAE10897A748859DD7EB19EBB1DB9BD02787_RuntimeMethod_var);
		return L_2;
	}
}
// AntiAddictionSdk.Api.LimitTip AntiAddictionSdk.Platforms.Android.TimeLimitClient::GetLimitTip()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LimitTip_tF8B5096C82EDA57B6870A2B503C91C61553700BD * TimeLimitClient_GetLimitTip_m00154CC924C92C41C395A8CE219FEBF621BA7E2A (TimeLimitClient_t2B20BA4A4E97557CD346C1B50D9393EEA30D0919 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC5ED59BBD9C24EFFD98D8C3819C7E15DFE08F412_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LimitTipClient_t6CE7E256EC6BC4954FAB77171931D9D49B4E5125_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LimitTip_tF8B5096C82EDA57B6870A2B503C91C61553700BD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral90BB3508BCAE83C31763E49B8E52D0C9F9D42BCF);
		s_Il2CppMethodInitialized = true;
	}
	{
		// AndroidJavaObject limitTip = TimeLimit.Call<AndroidJavaObject>("getLimitTip");
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_0 = __this->get_TimeLimit_0();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1;
		L_1 = Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_RuntimeMethod_var);
		NullCheck(L_0);
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_2;
		L_2 = AndroidJavaObject_Call_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC5ED59BBD9C24EFFD98D8C3819C7E15DFE08F412(L_0, _stringLiteral90BB3508BCAE83C31763E49B8E52D0C9F9D42BCF, L_1, /*hidden argument*/AndroidJavaObject_Call_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC5ED59BBD9C24EFFD98D8C3819C7E15DFE08F412_RuntimeMethod_var);
		// return new LimitTip(new LimitTipClient(limitTip));
		LimitTipClient_t6CE7E256EC6BC4954FAB77171931D9D49B4E5125 * L_3 = (LimitTipClient_t6CE7E256EC6BC4954FAB77171931D9D49B4E5125 *)il2cpp_codegen_object_new(LimitTipClient_t6CE7E256EC6BC4954FAB77171931D9D49B4E5125_il2cpp_TypeInfo_var);
		LimitTipClient__ctor_mECCB6623AC3E4524AD34B61D3AB8C2884939FC78(L_3, L_2, /*hidden argument*/NULL);
		LimitTip_tF8B5096C82EDA57B6870A2B503C91C61553700BD * L_4 = (LimitTip_tF8B5096C82EDA57B6870A2B503C91C61553700BD *)il2cpp_codegen_object_new(LimitTip_tF8B5096C82EDA57B6870A2B503C91C61553700BD_il2cpp_TypeInfo_var);
		LimitTip__ctor_m9FEC6EB86743288A0163CB0A98BAE9929C7D83F4(L_4, L_3, /*hidden argument*/NULL);
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
// System.Void AntiAddictionSdk.Platforms.iOS.TimeLimitClient::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimeLimitClient__ctor_mF68B07642AD90106EAA1BEB3A6BC5C6F4B6F3986 (TimeLimitClient_t867CAAAF07D33468A9F628615761FD01851E998C * __this, intptr_t ___timeLimit0, const RuntimeMethod* method)
{
	{
		// public TimeLimitClient(IntPtr timeLimit) {
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// TimeLimit = timeLimit;
		intptr_t L_0 = ___timeLimit0;
		__this->set_TimeLimit_0((intptr_t)L_0);
		// }
		return;
	}
}
// System.Int32 AntiAddictionSdk.Platforms.iOS.TimeLimitClient::GetReason()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TimeLimitClient_GetReason_mD9E56687D0F2398287038E87EAF34B738FA0C627 (TimeLimitClient_t867CAAAF07D33468A9F628615761FD01851E998C * __this, const RuntimeMethod* method)
{
	{
		// return Externs.AntiAddictionTimeLimitGetReason(TimeLimit);
		intptr_t L_0 = __this->get_TimeLimit_0();
		int32_t L_1;
		L_1 = Externs_AntiAddictionTimeLimitGetReason_m406CD4EE3714CE2472181A56B14B27A5430DED03((intptr_t)L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean AntiAddictionSdk.Platforms.iOS.TimeLimitClient::IsLimit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TimeLimitClient_IsLimit_mA317DF099014265F3999026BB71ABC39E2BE960B (TimeLimitClient_t867CAAAF07D33468A9F628615761FD01851E998C * __this, const RuntimeMethod* method)
{
	{
		// return Externs.AntiAddictionTimeLimitIsLimit(TimeLimit);
		intptr_t L_0 = __this->get_TimeLimit_0();
		bool L_1;
		L_1 = Externs_AntiAddictionTimeLimitIsLimit_m7B62275011668415405FFC3ECF727647CA771521((intptr_t)L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Int64 AntiAddictionSdk.Platforms.iOS.TimeLimitClient::GetTimeToLimit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t TimeLimitClient_GetTimeToLimit_mD7DC9D303A2DD09736C35E7D765C51DEEEB1522C (TimeLimitClient_t867CAAAF07D33468A9F628615761FD01851E998C * __this, const RuntimeMethod* method)
{
	{
		// return Externs.AntiAddictionTimeLimitGetTimeToLimit(TimeLimit);
		intptr_t L_0 = __this->get_TimeLimit_0();
		int64_t L_1;
		L_1 = Externs_AntiAddictionTimeLimitGetTimeToLimit_m7FCEE5F41D80362C3A21B06A1DF9714634C5D335((intptr_t)L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// AntiAddictionSdk.Api.LimitTip AntiAddictionSdk.Platforms.iOS.TimeLimitClient::GetLimitTip()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LimitTip_tF8B5096C82EDA57B6870A2B503C91C61553700BD * TimeLimitClient_GetLimitTip_m503201233CF8DBC1BAF5B26C6960D3BF274DDA22 (TimeLimitClient_t867CAAAF07D33468A9F628615761FD01851E998C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LimitTipClient_t6437A4B4C61A0FC6DE0DF1FD0A1633C54E30C134_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LimitTip_tF8B5096C82EDA57B6870A2B503C91C61553700BD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new LimitTip(new LimitTipClient(Externs.AntiAddictionTimeLimitGetLimitTip(TimeLimit)));
		intptr_t L_0 = __this->get_TimeLimit_0();
		intptr_t L_1;
		L_1 = Externs_AntiAddictionTimeLimitGetLimitTip_mFED1C2212827202CFC7501967CD169C5EE531346((intptr_t)L_0, /*hidden argument*/NULL);
		LimitTipClient_t6437A4B4C61A0FC6DE0DF1FD0A1633C54E30C134 * L_2 = (LimitTipClient_t6437A4B4C61A0FC6DE0DF1FD0A1633C54E30C134 *)il2cpp_codegen_object_new(LimitTipClient_t6437A4B4C61A0FC6DE0DF1FD0A1633C54E30C134_il2cpp_TypeInfo_var);
		LimitTipClient__ctor_m02341EF6BD7E5BBB7051CCA62F25581B9FB110DB(L_2, (intptr_t)L_1, /*hidden argument*/NULL);
		LimitTip_tF8B5096C82EDA57B6870A2B503C91C61553700BD * L_3 = (LimitTip_tF8B5096C82EDA57B6870A2B503C91C61553700BD *)il2cpp_codegen_object_new(LimitTip_tF8B5096C82EDA57B6870A2B503C91C61553700BD_il2cpp_TypeInfo_var);
		LimitTip__ctor_m9FEC6EB86743288A0163CB0A98BAE9929C7D83F4(L_3, L_2, /*hidden argument*/NULL);
		return L_3;
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
// System.Void AntiAddictionSdk.Api.User::.ctor(AntiAddictionSdk.Common.IUserClient)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void User__ctor_mD6909B95167AF2D588F815BD3F4AC5546A3D187B (User_t2054FCBCCC727858725CB0AC6A9CE0306D5986AD * __this, RuntimeObject* ___client0, const RuntimeMethod* method)
{
	{
		// public User(IUserClient client) {
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// mClient = client;
		RuntimeObject* L_0 = ___client0;
		__this->set_mClient_0(L_0);
		// }
		return;
	}
}
// AntiAddictionSdk.Api.RealNameResult AntiAddictionSdk.Api.User::GetRealNameResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RealNameResult_t72CCC4738CF4CCF98DB6E68337B920CA83FBD619 * User_GetRealNameResult_mBC986A65EF712B31E8F93A7B8E42E3BDA591DD7A (User_t2054FCBCCC727858725CB0AC6A9CE0306D5986AD * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUserClient_tE3A4C0F10567655FDB8B1194479A749040B1F619_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return mClient.GetRealNameResult();
		RuntimeObject* L_0 = __this->get_mClient_0();
		NullCheck(L_0);
		RealNameResult_t72CCC4738CF4CCF98DB6E68337B920CA83FBD619 * L_1;
		L_1 = InterfaceFuncInvoker0< RealNameResult_t72CCC4738CF4CCF98DB6E68337B920CA83FBD619 * >::Invoke(0 /* AntiAddictionSdk.Api.RealNameResult AntiAddictionSdk.Common.IUserClient::GetRealNameResult() */, IUserClient_tE3A4C0F10567655FDB8B1194479A749040B1F619_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Int32 AntiAddictionSdk.Api.User::GetAge()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t User_GetAge_m29634304231DBFDC2847EC256E54BF25B2CEDD36 (User_t2054FCBCCC727858725CB0AC6A9CE0306D5986AD * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUserClient_tE3A4C0F10567655FDB8B1194479A749040B1F619_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return mClient.GetAge();
		RuntimeObject* L_0 = __this->get_mClient_0();
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 AntiAddictionSdk.Common.IUserClient::GetAge() */, IUserClient_tE3A4C0F10567655FDB8B1194479A749040B1F619_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Boolean AntiAddictionSdk.Api.User::IsTourist()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool User_IsTourist_m4ED9B4EF6E903618B04A851EAB4A821D8FBCD942 (User_t2054FCBCCC727858725CB0AC6A9CE0306D5986AD * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUserClient_tE3A4C0F10567655FDB8B1194479A749040B1F619_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return mClient.IsTourist();
		RuntimeObject* L_0 = __this->get_mClient_0();
		NullCheck(L_0);
		bool L_1;
		L_1 = InterfaceFuncInvoker0< bool >::Invoke(2 /* System.Boolean AntiAddictionSdk.Common.IUserClient::IsTourist() */, IUserClient_tE3A4C0F10567655FDB8B1194479A749040B1F619_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Boolean AntiAddictionSdk.Api.User::IsChild()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool User_IsChild_m8CCA3DE0318FF43A8CB37FE26751D3D519572F5D (User_t2054FCBCCC727858725CB0AC6A9CE0306D5986AD * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUserClient_tE3A4C0F10567655FDB8B1194479A749040B1F619_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return mClient.IsChild();
		RuntimeObject* L_0 = __this->get_mClient_0();
		NullCheck(L_0);
		bool L_1;
		L_1 = InterfaceFuncInvoker0< bool >::Invoke(3 /* System.Boolean AntiAddictionSdk.Common.IUserClient::IsChild() */, IUserClient_tE3A4C0F10567655FDB8B1194479A749040B1F619_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Boolean AntiAddictionSdk.Api.User::IsAdult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool User_IsAdult_mA4E8D84F16A31B904E3355B2F54476445EBA6EC8 (User_t2054FCBCCC727858725CB0AC6A9CE0306D5986AD * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUserClient_tE3A4C0F10567655FDB8B1194479A749040B1F619_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return mClient.IsAdult();
		RuntimeObject* L_0 = __this->get_mClient_0();
		NullCheck(L_0);
		bool L_1;
		L_1 = InterfaceFuncInvoker0< bool >::Invoke(4 /* System.Boolean AntiAddictionSdk.Common.IUserClient::IsAdult() */, IUserClient_tE3A4C0F10567655FDB8B1194479A749040B1F619_il2cpp_TypeInfo_var, L_0);
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
// System.Void AntiAddictionSdk.Platforms.Android.UserClient::.ctor(UnityEngine.AndroidJavaObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserClient__ctor_m20BE7CE6E321381E2A6FEF6D079DFFA002323390 (UserClient_t93F1B9B5458115963B533A542534460DFA5C47EE * __this, AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * ___user0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC5ED59BBD9C24EFFD98D8C3819C7E15DFE08F412_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RealNameResultClient_t28FE6782285D421A473D8786DA3B7AFE9BFC044D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RealNameResult_t72CCC4738CF4CCF98DB6E68337B920CA83FBD619_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE9D8708C21050CC7B34E033CC74A0280EF02FF65);
		s_Il2CppMethodInitialized = true;
	}
	RealNameResultClient_t28FE6782285D421A473D8786DA3B7AFE9BFC044D * V_0 = NULL;
	{
		// public UserClient(AndroidJavaObject user) {
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// User = user;
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_0 = ___user0;
		__this->set_User_0(L_0);
		// AndroidJavaObject result = User.Call<AndroidJavaObject>("getRealNameResult");
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_1 = __this->get_User_0();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2;
		L_2 = Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_RuntimeMethod_var);
		NullCheck(L_1);
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_3;
		L_3 = AndroidJavaObject_Call_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC5ED59BBD9C24EFFD98D8C3819C7E15DFE08F412(L_1, _stringLiteralE9D8708C21050CC7B34E033CC74A0280EF02FF65, L_2, /*hidden argument*/AndroidJavaObject_Call_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC5ED59BBD9C24EFFD98D8C3819C7E15DFE08F412_RuntimeMethod_var);
		// RealNameResultClient resultClient = new RealNameResultClient(result);
		RealNameResultClient_t28FE6782285D421A473D8786DA3B7AFE9BFC044D * L_4 = (RealNameResultClient_t28FE6782285D421A473D8786DA3B7AFE9BFC044D *)il2cpp_codegen_object_new(RealNameResultClient_t28FE6782285D421A473D8786DA3B7AFE9BFC044D_il2cpp_TypeInfo_var);
		RealNameResultClient__ctor_mA7AF5E06CC7F2DF103B0E9A461A0333B4BE37FCC(L_4, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		// Result = new RealNameResult(resultClient);
		RealNameResultClient_t28FE6782285D421A473D8786DA3B7AFE9BFC044D * L_5 = V_0;
		RealNameResult_t72CCC4738CF4CCF98DB6E68337B920CA83FBD619 * L_6 = (RealNameResult_t72CCC4738CF4CCF98DB6E68337B920CA83FBD619 *)il2cpp_codegen_object_new(RealNameResult_t72CCC4738CF4CCF98DB6E68337B920CA83FBD619_il2cpp_TypeInfo_var);
		RealNameResult__ctor_mC362BC8500C00096D516DC79843544767A908C72(L_6, L_5, /*hidden argument*/NULL);
		__this->set_Result_1(L_6);
		// }
		return;
	}
}
// AntiAddictionSdk.Api.RealNameResult AntiAddictionSdk.Platforms.Android.UserClient::GetRealNameResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RealNameResult_t72CCC4738CF4CCF98DB6E68337B920CA83FBD619 * UserClient_GetRealNameResult_m22A9363E35D494A6A165C6C0972C957CBCA1F498 (UserClient_t93F1B9B5458115963B533A542534460DFA5C47EE * __this, const RuntimeMethod* method)
{
	{
		// return Result;
		RealNameResult_t72CCC4738CF4CCF98DB6E68337B920CA83FBD619 * L_0 = __this->get_Result_1();
		return L_0;
	}
}
// System.Int32 AntiAddictionSdk.Platforms.Android.UserClient::GetAge()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UserClient_GetAge_m6A6DC1D750C85837C5BBA5A8B27A75AFA779E198 (UserClient_t93F1B9B5458115963B533A542534460DFA5C47EE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m02A4D4C9FD8B15173829454766683BA424408A2A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC863856C9521A05D41581EC332076959F9CE17E2);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return User.Call<int>("getAge");
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_0 = __this->get_User_0();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1;
		L_1 = Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_RuntimeMethod_var);
		NullCheck(L_0);
		int32_t L_2;
		L_2 = AndroidJavaObject_Call_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m02A4D4C9FD8B15173829454766683BA424408A2A(L_0, _stringLiteralC863856C9521A05D41581EC332076959F9CE17E2, L_1, /*hidden argument*/AndroidJavaObject_Call_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m02A4D4C9FD8B15173829454766683BA424408A2A_RuntimeMethod_var);
		return L_2;
	}
}
// System.Boolean AntiAddictionSdk.Platforms.Android.UserClient::IsTourist()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UserClient_IsTourist_mE27FAAF0B27660F9C93AA06D0EB059FED9ECEE81 (UserClient_t93F1B9B5458115963B533A542534460DFA5C47EE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m705BF7B215A83B7851B19591CE37DA93250C7A8A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCB6B631A27E8DE83322A720A005A4E44388FA818);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return User.Call<bool>("isTourist");
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_0 = __this->get_User_0();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1;
		L_1 = Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_RuntimeMethod_var);
		NullCheck(L_0);
		bool L_2;
		L_2 = AndroidJavaObject_Call_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m705BF7B215A83B7851B19591CE37DA93250C7A8A(L_0, _stringLiteralCB6B631A27E8DE83322A720A005A4E44388FA818, L_1, /*hidden argument*/AndroidJavaObject_Call_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m705BF7B215A83B7851B19591CE37DA93250C7A8A_RuntimeMethod_var);
		return L_2;
	}
}
// System.Boolean AntiAddictionSdk.Platforms.Android.UserClient::IsChild()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UserClient_IsChild_m8CD0ACFA92DB0D6FC5AC4EB1A66375BDE811536C (UserClient_t93F1B9B5458115963B533A542534460DFA5C47EE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m705BF7B215A83B7851B19591CE37DA93250C7A8A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDEBDCFEF1F8F50CFA8608E6F59C480A01AC2250B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return User.Call<bool>("isChild");
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_0 = __this->get_User_0();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1;
		L_1 = Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_RuntimeMethod_var);
		NullCheck(L_0);
		bool L_2;
		L_2 = AndroidJavaObject_Call_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m705BF7B215A83B7851B19591CE37DA93250C7A8A(L_0, _stringLiteralDEBDCFEF1F8F50CFA8608E6F59C480A01AC2250B, L_1, /*hidden argument*/AndroidJavaObject_Call_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m705BF7B215A83B7851B19591CE37DA93250C7A8A_RuntimeMethod_var);
		return L_2;
	}
}
// System.Boolean AntiAddictionSdk.Platforms.Android.UserClient::IsAdult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UserClient_IsAdult_mA85A0A8E602EE71D706CB15B611B6090B17D9ED9 (UserClient_t93F1B9B5458115963B533A542534460DFA5C47EE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m705BF7B215A83B7851B19591CE37DA93250C7A8A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral12B430DB41F91D1EA6B6CEEAC4093543B23F6B0C);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return User.Call<bool>("isAdult");
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_0 = __this->get_User_0();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1;
		L_1 = Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_RuntimeMethod_var);
		NullCheck(L_0);
		bool L_2;
		L_2 = AndroidJavaObject_Call_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m705BF7B215A83B7851B19591CE37DA93250C7A8A(L_0, _stringLiteral12B430DB41F91D1EA6B6CEEAC4093543B23F6B0C, L_1, /*hidden argument*/AndroidJavaObject_Call_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m705BF7B215A83B7851B19591CE37DA93250C7A8A_RuntimeMethod_var);
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
// System.Void AntiAddictionSdk.Platforms.iOS.UserClient::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserClient__ctor_m786A98666B64BD7BBF20CF0DA3D1C85495236C50 (UserClient_t34C98041DA8CAF42A5F3509756F7814AA9696FE5 * __this, intptr_t ___user0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RealNameResultClient_tBF949234076C9C3294A5104EF710ECE383DF2A51_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RealNameResult_t72CCC4738CF4CCF98DB6E68337B920CA83FBD619_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// public UserClient(IntPtr user) {
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// User = user;
		intptr_t L_0 = ___user0;
		__this->set_User_0((intptr_t)L_0);
		// IntPtr result = Externs.AntiAddictionUserGetRealNameResult(user);
		intptr_t L_1 = ___user0;
		intptr_t L_2;
		L_2 = Externs_AntiAddictionUserGetRealNameResult_mB0127BAA41148345068C0A56D215FD21CCF41103((intptr_t)L_1, /*hidden argument*/NULL);
		V_0 = (intptr_t)L_2;
		// Result = new RealNameResult(new RealNameResultClient(result));
		intptr_t L_3 = V_0;
		RealNameResultClient_tBF949234076C9C3294A5104EF710ECE383DF2A51 * L_4 = (RealNameResultClient_tBF949234076C9C3294A5104EF710ECE383DF2A51 *)il2cpp_codegen_object_new(RealNameResultClient_tBF949234076C9C3294A5104EF710ECE383DF2A51_il2cpp_TypeInfo_var);
		RealNameResultClient__ctor_m1BCF8B5C40C3EACBBE966D29544373D2C9DE92EB(L_4, (intptr_t)L_3, /*hidden argument*/NULL);
		RealNameResult_t72CCC4738CF4CCF98DB6E68337B920CA83FBD619 * L_5 = (RealNameResult_t72CCC4738CF4CCF98DB6E68337B920CA83FBD619 *)il2cpp_codegen_object_new(RealNameResult_t72CCC4738CF4CCF98DB6E68337B920CA83FBD619_il2cpp_TypeInfo_var);
		RealNameResult__ctor_mC362BC8500C00096D516DC79843544767A908C72(L_5, L_4, /*hidden argument*/NULL);
		__this->set_Result_1(L_5);
		// }
		return;
	}
}
// AntiAddictionSdk.Api.RealNameResult AntiAddictionSdk.Platforms.iOS.UserClient::GetRealNameResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RealNameResult_t72CCC4738CF4CCF98DB6E68337B920CA83FBD619 * UserClient_GetRealNameResult_m16D61FD5E8CCA3E3E023457111429511318ED66B (UserClient_t34C98041DA8CAF42A5F3509756F7814AA9696FE5 * __this, const RuntimeMethod* method)
{
	{
		// return Result;
		RealNameResult_t72CCC4738CF4CCF98DB6E68337B920CA83FBD619 * L_0 = __this->get_Result_1();
		return L_0;
	}
}
// System.Int32 AntiAddictionSdk.Platforms.iOS.UserClient::GetAge()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UserClient_GetAge_m67A811F2F9E4242FF53920CA3777C0BD2831B6A0 (UserClient_t34C98041DA8CAF42A5F3509756F7814AA9696FE5 * __this, const RuntimeMethod* method)
{
	{
		// return Externs.AntiAddictionUserGetAge(User);
		intptr_t L_0 = __this->get_User_0();
		int32_t L_1;
		L_1 = Externs_AntiAddictionUserGetAge_m8133CED1D13F179C3FDD8BC6524D275118D4EBF3((intptr_t)L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean AntiAddictionSdk.Platforms.iOS.UserClient::IsTourist()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UserClient_IsTourist_m6C7AA3648061221CFE666A0C674AF321E84C5987 (UserClient_t34C98041DA8CAF42A5F3509756F7814AA9696FE5 * __this, const RuntimeMethod* method)
{
	{
		// return Externs.AntiAddictionUserIsTourist(User);
		intptr_t L_0 = __this->get_User_0();
		bool L_1;
		L_1 = Externs_AntiAddictionUserIsTourist_m638C6FAF0B4EF56AA18FAD6DA8BF73A13AE7FF3B((intptr_t)L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean AntiAddictionSdk.Platforms.iOS.UserClient::IsChild()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UserClient_IsChild_m220354A1F27C7801E0C220CAE21C8D979AB06014 (UserClient_t34C98041DA8CAF42A5F3509756F7814AA9696FE5 * __this, const RuntimeMethod* method)
{
	{
		// return Externs.AntiAddictionUserIsChild(User);
		intptr_t L_0 = __this->get_User_0();
		bool L_1;
		L_1 = Externs_AntiAddictionUserIsChild_m51FCBD9D014805A1A06773CB3837A05759D54478((intptr_t)L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean AntiAddictionSdk.Platforms.iOS.UserClient::IsAdult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UserClient_IsAdult_m71165D39C16854B29F75520EEE41A2DB7B8F25A9 (UserClient_t34C98041DA8CAF42A5F3509756F7814AA9696FE5 * __this, const RuntimeMethod* method)
{
	{
		// return Externs.AntiAddictionUserIsAdult(User);
		intptr_t L_0 = __this->get_User_0();
		bool L_1;
		L_1 = Externs_AntiAddictionUserIsAdult_mA12AE33C3D07A948C783F67A7485363C8C0898D7((intptr_t)L_0, /*hidden argument*/NULL);
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
// System.Void AntiAddictionSdk.Platforms.Android.AntiAddictionClient/AndroidRealNameCallback::.ctor(AntiAddictionSdk.Api.RealNameCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidRealNameCallback__ctor_m2FB0F2D80C466DB1F65E11ACA8562CAC46404BF4 (AndroidRealNameCallback_tF83DC8562F54CC5DD7BDEEA2AC573DA5292F2745 * __this, RuntimeObject* ___callback0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral392E8D6CEA8941066573D022495F1506A79D8C8A);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public AndroidRealNameCallback(RealNameCallback callback) : base(Utils.Class_RealNameCallback) {
		IL2CPP_RUNTIME_CLASS_INIT(AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF_il2cpp_TypeInfo_var);
		AndroidJavaProxy__ctor_m1E8F4C0D87B74B81C64A54A584B2FF4ECE571238(__this, _stringLiteral392E8D6CEA8941066573D022495F1506A79D8C8A, /*hidden argument*/NULL);
		// Callback = callback;
		RuntimeObject* L_0 = ___callback0;
		__this->set_Callback_4(L_0);
		// }
		return;
	}
}
// System.Void AntiAddictionSdk.Platforms.Android.AntiAddictionClient/AndroidRealNameCallback::onFinish(UnityEngine.AndroidJavaObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidRealNameCallback_onFinish_m7ABDBC06F7148FF545AA90E015A050D0C7508C33 (AndroidRealNameCallback_tF83DC8562F54CC5DD7BDEEA2AC573DA5292F2745 * __this, AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * ___user0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RealNameCallback_tA92C37D18F12D080D66B1C67773CEAB6795D5CCA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UserClient_t93F1B9B5458115963B533A542534460DFA5C47EE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&User_t2054FCBCCC727858725CB0AC6A9CE0306D5986AD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(Callback != null) {
		RuntimeObject* L_0 = __this->get_Callback_4();
		if (!L_0)
		{
			goto IL_001e;
		}
	}
	{
		// Callback.OnFinish(new User(new UserClient(user)));
		RuntimeObject* L_1 = __this->get_Callback_4();
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_2 = ___user0;
		UserClient_t93F1B9B5458115963B533A542534460DFA5C47EE * L_3 = (UserClient_t93F1B9B5458115963B533A542534460DFA5C47EE *)il2cpp_codegen_object_new(UserClient_t93F1B9B5458115963B533A542534460DFA5C47EE_il2cpp_TypeInfo_var);
		UserClient__ctor_m20BE7CE6E321381E2A6FEF6D079DFFA002323390(L_3, L_2, /*hidden argument*/NULL);
		User_t2054FCBCCC727858725CB0AC6A9CE0306D5986AD * L_4 = (User_t2054FCBCCC727858725CB0AC6A9CE0306D5986AD *)il2cpp_codegen_object_new(User_t2054FCBCCC727858725CB0AC6A9CE0306D5986AD_il2cpp_TypeInfo_var);
		User__ctor_mD6909B95167AF2D588F815BD3F4AC5546A3D187B(L_4, L_3, /*hidden argument*/NULL);
		NullCheck(L_1);
		InterfaceActionInvoker1< User_t2054FCBCCC727858725CB0AC6A9CE0306D5986AD * >::Invoke(0 /* System.Void AntiAddictionSdk.Api.RealNameCallback::OnFinish(AntiAddictionSdk.Api.User) */, RealNameCallback_tA92C37D18F12D080D66B1C67773CEAB6795D5CCA_il2cpp_TypeInfo_var, L_1, L_4);
	}

IL_001e:
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
// System.Void AntiAddictionSdk.Platforms.Android.AntiAddictionClient/AndroidTimeLimitCallback::.ctor(AntiAddictionSdk.Api.TimeLimitCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidTimeLimitCallback__ctor_mA67692D6FF2E14D91D7AC7BD7D21A7A5BF41390D (AndroidTimeLimitCallback_t714DA078A7FA04E959D0CF4F572CB9B34606B6B7 * __this, RuntimeObject* ___callback0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBF8BDAE8E1A6CBCED0048C5AC01E3405B075198C);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public AndroidTimeLimitCallback(TimeLimitCallback callback) : base(Utils.Class_TimeLimitCallback) {
		IL2CPP_RUNTIME_CLASS_INIT(AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF_il2cpp_TypeInfo_var);
		AndroidJavaProxy__ctor_m1E8F4C0D87B74B81C64A54A584B2FF4ECE571238(__this, _stringLiteralBF8BDAE8E1A6CBCED0048C5AC01E3405B075198C, /*hidden argument*/NULL);
		// Callback = callback;
		RuntimeObject* L_0 = ___callback0;
		__this->set_Callback_4(L_0);
		// }
		return;
	}
}
// System.Void AntiAddictionSdk.Platforms.Android.AntiAddictionClient/AndroidTimeLimitCallback::onTimeLimit(UnityEngine.AndroidJavaObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidTimeLimitCallback_onTimeLimit_mB648DC603BAEC5E312C957B358527563A3610102 (AndroidTimeLimitCallback_t714DA078A7FA04E959D0CF4F572CB9B34606B6B7 * __this, AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * ___timeLimit0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TimeLimitCallback_t45E382B69576F18A9C565FCBB836A444683917DB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TimeLimitClient_t2B20BA4A4E97557CD346C1B50D9393EEA30D0919_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TimeLimit_t34F8F02496A68C19246A6EDB732D70E8DAD79C9F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(Callback != null) {
		RuntimeObject* L_0 = __this->get_Callback_4();
		if (!L_0)
		{
			goto IL_001e;
		}
	}
	{
		// Callback.OnTimeLimit(new TimeLimit(new TimeLimitClient(timeLimit)));
		RuntimeObject* L_1 = __this->get_Callback_4();
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_2 = ___timeLimit0;
		TimeLimitClient_t2B20BA4A4E97557CD346C1B50D9393EEA30D0919 * L_3 = (TimeLimitClient_t2B20BA4A4E97557CD346C1B50D9393EEA30D0919 *)il2cpp_codegen_object_new(TimeLimitClient_t2B20BA4A4E97557CD346C1B50D9393EEA30D0919_il2cpp_TypeInfo_var);
		TimeLimitClient__ctor_m1DF010F1D024CC9C772AD9B44F345C363032912C(L_3, L_2, /*hidden argument*/NULL);
		TimeLimit_t34F8F02496A68C19246A6EDB732D70E8DAD79C9F * L_4 = (TimeLimit_t34F8F02496A68C19246A6EDB732D70E8DAD79C9F *)il2cpp_codegen_object_new(TimeLimit_t34F8F02496A68C19246A6EDB732D70E8DAD79C9F_il2cpp_TypeInfo_var);
		TimeLimit__ctor_m67E9BF4FF91D1C5608D3630A8B205686CFC9BA64(L_4, L_3, /*hidden argument*/NULL);
		NullCheck(L_1);
		InterfaceActionInvoker1< TimeLimit_t34F8F02496A68C19246A6EDB732D70E8DAD79C9F * >::Invoke(0 /* System.Void AntiAddictionSdk.Api.TimeLimitCallback::OnTimeLimit(AntiAddictionSdk.Api.TimeLimit) */, TimeLimitCallback_t45E382B69576F18A9C565FCBB836A444683917DB_il2cpp_TypeInfo_var, L_1, L_4);
	}

IL_001e:
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_AntiAddictionRealNameCallback_t571F2472B7F4FDA2B625B7142A04441AA45FA294 (AntiAddictionRealNameCallback_t571F2472B7F4FDA2B625B7142A04441AA45FA294 * __this, intptr_t ___antiAddictionClient0, intptr_t ___user1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(intptr_t, intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___antiAddictionClient0, ___user1);

}
// System.Void AntiAddictionSdk.Platforms.iOS.AntiAddictionClient/AntiAddictionRealNameCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AntiAddictionRealNameCallback__ctor_mB02341D548F244B7F84FE8FB09013547A148BAC7 (AntiAddictionRealNameCallback_t571F2472B7F4FDA2B625B7142A04441AA45FA294 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void AntiAddictionSdk.Platforms.iOS.AntiAddictionClient/AntiAddictionRealNameCallback::Invoke(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AntiAddictionRealNameCallback_Invoke_mA1C34423ED14FB1D3B15A7F5AF7F2DBA0F318D64 (AntiAddictionRealNameCallback_t571F2472B7F4FDA2B625B7142A04441AA45FA294 * __this, intptr_t ___antiAddictionClient0, intptr_t ___user1, const RuntimeMethod* method)
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
				typedef void (*FunctionPointerType) (intptr_t, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___antiAddictionClient0, ___user1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, intptr_t, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___antiAddictionClient0, ___user1, targetMethod);
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
						GenericInterfaceActionInvoker2< intptr_t, intptr_t >::Invoke(targetMethod, targetThis, ___antiAddictionClient0, ___user1);
					else
						GenericVirtActionInvoker2< intptr_t, intptr_t >::Invoke(targetMethod, targetThis, ___antiAddictionClient0, ___user1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< intptr_t, intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___antiAddictionClient0, ___user1);
					else
						VirtActionInvoker2< intptr_t, intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___antiAddictionClient0, ___user1);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, intptr_t, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___antiAddictionClient0, ___user1, targetMethod);
			}
		}
	}
}
// System.IAsyncResult AntiAddictionSdk.Platforms.iOS.AntiAddictionClient/AntiAddictionRealNameCallback::BeginInvoke(System.IntPtr,System.IntPtr,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AntiAddictionRealNameCallback_BeginInvoke_m74E6981014BD0F653E58884203EE7E9A732E9BEC (AntiAddictionRealNameCallback_t571F2472B7F4FDA2B625B7142A04441AA45FA294 * __this, intptr_t ___antiAddictionClient0, intptr_t ___user1, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___antiAddictionClient0);
	__d_args[1] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___user1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);;
}
// System.Void AntiAddictionSdk.Platforms.iOS.AntiAddictionClient/AntiAddictionRealNameCallback::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AntiAddictionRealNameCallback_EndInvoke_m406823F64C5F387779C7DA3777F07D37F503AE4F (AntiAddictionRealNameCallback_t571F2472B7F4FDA2B625B7142A04441AA45FA294 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_AntiAddictionTimeLimitCallback_tC94709CF8EB6A9D85FF410CF6B5B9F55A7E39ABA (AntiAddictionTimeLimitCallback_tC94709CF8EB6A9D85FF410CF6B5B9F55A7E39ABA * __this, intptr_t ___antiAddictionClient0, intptr_t ___timeLimit1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(intptr_t, intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___antiAddictionClient0, ___timeLimit1);

}
// System.Void AntiAddictionSdk.Platforms.iOS.AntiAddictionClient/AntiAddictionTimeLimitCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AntiAddictionTimeLimitCallback__ctor_m66E81A9AC193CA64E4A692743578F586A8C78CAC (AntiAddictionTimeLimitCallback_tC94709CF8EB6A9D85FF410CF6B5B9F55A7E39ABA * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void AntiAddictionSdk.Platforms.iOS.AntiAddictionClient/AntiAddictionTimeLimitCallback::Invoke(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AntiAddictionTimeLimitCallback_Invoke_mA6D244535546B475608412992F06F8F26E62DC48 (AntiAddictionTimeLimitCallback_tC94709CF8EB6A9D85FF410CF6B5B9F55A7E39ABA * __this, intptr_t ___antiAddictionClient0, intptr_t ___timeLimit1, const RuntimeMethod* method)
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
				typedef void (*FunctionPointerType) (intptr_t, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___antiAddictionClient0, ___timeLimit1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, intptr_t, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___antiAddictionClient0, ___timeLimit1, targetMethod);
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
						GenericInterfaceActionInvoker2< intptr_t, intptr_t >::Invoke(targetMethod, targetThis, ___antiAddictionClient0, ___timeLimit1);
					else
						GenericVirtActionInvoker2< intptr_t, intptr_t >::Invoke(targetMethod, targetThis, ___antiAddictionClient0, ___timeLimit1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< intptr_t, intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___antiAddictionClient0, ___timeLimit1);
					else
						VirtActionInvoker2< intptr_t, intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___antiAddictionClient0, ___timeLimit1);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, intptr_t, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___antiAddictionClient0, ___timeLimit1, targetMethod);
			}
		}
	}
}
// System.IAsyncResult AntiAddictionSdk.Platforms.iOS.AntiAddictionClient/AntiAddictionTimeLimitCallback::BeginInvoke(System.IntPtr,System.IntPtr,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AntiAddictionTimeLimitCallback_BeginInvoke_mE1C1F50EC429F55F8236683EC548ECD2F8EF4D12 (AntiAddictionTimeLimitCallback_tC94709CF8EB6A9D85FF410CF6B5B9F55A7E39ABA * __this, intptr_t ___antiAddictionClient0, intptr_t ___timeLimit1, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___antiAddictionClient0);
	__d_args[1] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___timeLimit1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);;
}
// System.Void AntiAddictionSdk.Platforms.iOS.AntiAddictionClient/AntiAddictionTimeLimitCallback::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AntiAddictionTimeLimitCallback_EndInvoke_mB38E27B4E8444F702E9535A423139EB790F28472 (AntiAddictionTimeLimitCallback_tC94709CF8EB6A9D85FF410CF6B5B9F55A7E39ABA * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
// System.Void MainBehaviour/RealNameListener::OnFinish(AntiAddictionSdk.Api.User)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RealNameListener_OnFinish_m8659EAF8FEB90EC082E8BEEC16A060761AC8EAD6 (RealNameListener_tED709B762A6644CB50B84FDE17AAF0FDC8AB47FC * __this, User_t2054FCBCCC727858725CB0AC6A9CE0306D5986AD * ___user0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCEE9D315C8A295238AAB2260CA2895944013F51E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("RealNameCallback logUserInfo: ");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteralCEE9D315C8A295238AAB2260CA2895944013F51E, /*hidden argument*/NULL);
		// LogUserInfo(user);
		User_t2054FCBCCC727858725CB0AC6A9CE0306D5986AD * L_0 = ___user0;
		MainBehaviour_LogUserInfo_mC8FC3F64ABA3C4C6CF253EEE2CDEDB134E4FE6BC(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MainBehaviour/RealNameListener::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RealNameListener__ctor_mE87033C9E71DB4FB631C7A6F5B02BEE92CDCC228 (RealNameListener_tED709B762A6644CB50B84FDE17AAF0FDC8AB47FC * __this, const RuntimeMethod* method)
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
// System.Void MainBehaviour/TimeLimitListener::OnTimeLimit(AntiAddictionSdk.Api.TimeLimit)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimeLimitListener_OnTimeLimit_m6ED4E82FF47F84D1D7765EFFCFAE5CE39ACDAF93 (TimeLimitListener_t52E35AC71A4BB351FF157B88F72A4A458718CB08 * __this, TimeLimit_t34F8F02496A68C19246A6EDB732D70E8DAD79C9F * ___timeLimit0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral19589C94FA78F7254C39EA4B8684AE7D21FA3B11);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2DD29020EAFE2343EEFDE7BDC40A5314E499EE23);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral326319459C523C190CABB64F235BA57C39A00757);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral40FD924DF5A07AE8FD159437D8515044F35310A3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral471B50FA688E88BD7F26C166FDFB8EFC4497186B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6555C23A7B70EB80DF387380D361B1CEA086130D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA544BFFC213471BAEF6EA6E55DCA05DBDE92A4D);
		s_Il2CppMethodInitialized = true;
	}
	LimitTip_tF8B5096C82EDA57B6870A2B503C91C61553700BD * V_0 = NULL;
	int32_t V_1 = 0;
	bool V_2 = false;
	int64_t V_3 = 0;
	{
		// Debug.Log("TimeLimitListener, TimeLimit reason: " + timeLimit.GetReason()
		// + ", isLimit: " + timeLimit.IsLimit()
		// + ", timeToLimit: " + timeLimit.GetTimeToLimit());
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_0 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)6);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_1 = L_0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, _stringLiteral6555C23A7B70EB80DF387380D361B1CEA086130D);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral6555C23A7B70EB80DF387380D361B1CEA086130D);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_2 = L_1;
		TimeLimit_t34F8F02496A68C19246A6EDB732D70E8DAD79C9F * L_3 = ___timeLimit0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = TimeLimit_GetReason_m5FC6E4A3363B5FBD015F70C8C742F3BDA3BCDAF3(L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		String_t* L_5;
		L_5 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_1), /*hidden argument*/NULL);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_5);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_5);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_6 = L_2;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, _stringLiteralDA544BFFC213471BAEF6EA6E55DCA05DBDE92A4D);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteralDA544BFFC213471BAEF6EA6E55DCA05DBDE92A4D);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_7 = L_6;
		TimeLimit_t34F8F02496A68C19246A6EDB732D70E8DAD79C9F * L_8 = ___timeLimit0;
		NullCheck(L_8);
		bool L_9;
		L_9 = TimeLimit_IsLimit_mC2E840FE639887FF4C8F720E80DE4418740C6B69(L_8, /*hidden argument*/NULL);
		V_2 = L_9;
		String_t* L_10;
		L_10 = Boolean_ToString_m59BB8456DD05A874BBD756E57EA8AD983287015C((bool*)(&V_2), /*hidden argument*/NULL);
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_10);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_10);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_11 = L_7;
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, _stringLiteral326319459C523C190CABB64F235BA57C39A00757);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral326319459C523C190CABB64F235BA57C39A00757);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_12 = L_11;
		TimeLimit_t34F8F02496A68C19246A6EDB732D70E8DAD79C9F * L_13 = ___timeLimit0;
		NullCheck(L_13);
		int64_t L_14;
		L_14 = TimeLimit_GetTimeToLimit_mC5E52B40F3822808BADFFA459E944775EAD906F8(L_13, /*hidden argument*/NULL);
		V_3 = L_14;
		String_t* L_15;
		L_15 = Int64_ToString_m8AAA883F340993DCDF339C208F3416C3BA82589F((int64_t*)(&V_3), /*hidden argument*/NULL);
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, L_15);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)L_15);
		String_t* L_16;
		L_16 = String_Concat_mFEA7EFA1A6E75B96B1B7BC4526AAC864BFF83CC9(L_12, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_16, /*hidden argument*/NULL);
		// LimitTip limitTip = timeLimit.GetLimitTip();
		TimeLimit_t34F8F02496A68C19246A6EDB732D70E8DAD79C9F * L_17 = ___timeLimit0;
		NullCheck(L_17);
		LimitTip_tF8B5096C82EDA57B6870A2B503C91C61553700BD * L_18;
		L_18 = TimeLimit_GetLimitTip_m17F60FE0EC1E0938C9614FFC6349B5CA6B773692(L_17, /*hidden argument*/NULL);
		V_0 = L_18;
		// Debug.Log("TimeLimitListener, LimitTip: title: " + limitTip.GetTitle()
		//     + ", Desc: " + limitTip.GetDesc()
		//     + ", Button: " + limitTip.GetButton()
		//     + ", CanRealName: " + limitTip.CanRealName());
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_19 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)8);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_20 = L_19;
		NullCheck(L_20);
		ArrayElementTypeCheck (L_20, _stringLiteral471B50FA688E88BD7F26C166FDFB8EFC4497186B);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral471B50FA688E88BD7F26C166FDFB8EFC4497186B);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_21 = L_20;
		LimitTip_tF8B5096C82EDA57B6870A2B503C91C61553700BD * L_22 = V_0;
		NullCheck(L_22);
		String_t* L_23;
		L_23 = LimitTip_GetTitle_m8949F275C98B5C8C9A690C232A2BCB80F54A6BC2(L_22, /*hidden argument*/NULL);
		NullCheck(L_21);
		ArrayElementTypeCheck (L_21, L_23);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_23);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_24 = L_21;
		NullCheck(L_24);
		ArrayElementTypeCheck (L_24, _stringLiteral19589C94FA78F7254C39EA4B8684AE7D21FA3B11);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral19589C94FA78F7254C39EA4B8684AE7D21FA3B11);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_25 = L_24;
		LimitTip_tF8B5096C82EDA57B6870A2B503C91C61553700BD * L_26 = V_0;
		NullCheck(L_26);
		String_t* L_27;
		L_27 = LimitTip_GetDesc_mE9DB1FAE7D1C631BB44A7B8B1E520209575DCD46(L_26, /*hidden argument*/NULL);
		NullCheck(L_25);
		ArrayElementTypeCheck (L_25, L_27);
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_27);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_28 = L_25;
		NullCheck(L_28);
		ArrayElementTypeCheck (L_28, _stringLiteral2DD29020EAFE2343EEFDE7BDC40A5314E499EE23);
		(L_28)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral2DD29020EAFE2343EEFDE7BDC40A5314E499EE23);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_29 = L_28;
		LimitTip_tF8B5096C82EDA57B6870A2B503C91C61553700BD * L_30 = V_0;
		NullCheck(L_30);
		String_t* L_31;
		L_31 = LimitTip_GetButton_m035C2A34A28846CED81CF98416866E91134230F0(L_30, /*hidden argument*/NULL);
		NullCheck(L_29);
		ArrayElementTypeCheck (L_29, L_31);
		(L_29)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)L_31);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_32 = L_29;
		NullCheck(L_32);
		ArrayElementTypeCheck (L_32, _stringLiteral40FD924DF5A07AE8FD159437D8515044F35310A3);
		(L_32)->SetAt(static_cast<il2cpp_array_size_t>(6), (String_t*)_stringLiteral40FD924DF5A07AE8FD159437D8515044F35310A3);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_33 = L_32;
		LimitTip_tF8B5096C82EDA57B6870A2B503C91C61553700BD * L_34 = V_0;
		NullCheck(L_34);
		bool L_35;
		L_35 = LimitTip_CanRealName_m1A7BCAC4EC99635AE2BA67556F205E9EB62FDA62(L_34, /*hidden argument*/NULL);
		V_2 = L_35;
		String_t* L_36;
		L_36 = Boolean_ToString_m59BB8456DD05A874BBD756E57EA8AD983287015C((bool*)(&V_2), /*hidden argument*/NULL);
		NullCheck(L_33);
		ArrayElementTypeCheck (L_33, L_36);
		(L_33)->SetAt(static_cast<il2cpp_array_size_t>(7), (String_t*)L_36);
		String_t* L_37;
		L_37 = String_Concat_mFEA7EFA1A6E75B96B1B7BC4526AAC864BFF83CC9(L_33, /*hidden argument*/NULL);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_37, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MainBehaviour/TimeLimitListener::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimeLimitListener__ctor_mABFE790553C8687EF4C95F2CF3C63A5F0A0D00D7 (TimeLimitListener_t52E35AC71A4BB351FF157B88F72A4A458718CB08 * __this, const RuntimeMethod* method)
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
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_gshared_inline (const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = ((EmptyArray_1_tBF73225DFA890366D579424FE8F40073BF9FBAD4_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Value_0();
		return (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_0;
	}
}
