#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


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
struct InterfaceActionInvoker1Invoker;
template <typename T1>
struct InterfaceActionInvoker1Invoker<T1*>
{
	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1* p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		void* params[1] = { p1 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, params[0]);
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
template <typename T1>
struct InvokerActionInvoker1;
template <typename T1>
struct InvokerActionInvoker1<T1*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, params[0]);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2;
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1, T2*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2* p2)
	{
		void* params[2] = { &p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, params[1]);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1*, T2*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2)
	{
		void* params[2] = { p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, params[1]);
	}
};
template <typename R, typename T1>
struct InvokerFuncInvoker1;
template <typename R, typename T1>
struct InvokerFuncInvoker1<R, T1*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		R ret;
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct InvokerFuncInvoker4;
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct InvokerFuncInvoker4<R, T1*, T2*, T3, T4>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3 p3, T4 p4)
	{
		R ret;
		void* params[4] = { p1, p2, &p3, &p4 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R>
struct ConstrainedFuncInvoker0
{
	static inline R Invoke (RuntimeClass* type, const RuntimeMethod* constrainedMethod, void* boxBuffer, void* obj)
	{
		R ret;
		il2cpp_codegen_runtime_constrained_call(type, constrainedMethod, boxBuffer, obj, NULL, &ret);
		return ret;
	}
};

struct Comparison_1_tB7DE1436CB53924C2FC41FF926D074C1ACC14D89;
struct Comparison_1_t867D3AA383F5B47704F3B33AF0917C4E98ABEBF1;
struct Comparison_1_t62E531E7B8260E2C6C2718C3BDB8CF8655139645;
struct Comparison_1_t8FE3B8B0EC0CE87398BAC28B7E01309E4ED10BB7;
struct Comparison_1_t029B324B1F424911E4FB983F3FB02CCE89CD068B;
struct Comparison_1_t388CFEE675F4A6E15BB604A7AD4C3A5B6D265FB7;
struct Comparison_1_tE94B5C4AE59DE10B7A54AD7C3291462A05D5CD49;
struct Comparison_1_tC8BBA462D5337723AC34773EEE343018753C7FF3;
struct Comparison_1_tA6E38F9B8A5E125EC6515F9679C2079C747A0149;
struct Comparison_1_t4349A0C0F6E57844038D08909A07D093BF8BBF87;
struct ConditionalWeakTable_2_tE473109D1EF9EA4E1AA06539AE5262421E166EFD;
struct ConditionalWeakTable_2_tA0A6618FEA1BDC4E0A5C70A205A73167784823D9;
struct ConditionalWeakTable_2_t4FA84C9C03B7929ACDC537F2AB91C3AA9D39B9E6;
struct ConditionalWeakTable_2_tD204B678FB5C57190177AACB4C57D5BDE9ED70E4;
struct DefaultComparer_1_tF1F3B8981298E50FBC17BDC8CA0B4CFE867AD644;
struct Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588;
struct Entry_t776AD7605FD3B32B33A463DA5E56809C57BFA1AB;
struct EqualityComparer_1_t458C8DC3748A89A213F4738B57D3742C4896ABE9;
struct Func_1_tBB8824FA8746333BFFF3AB3CE4A41B58450AF431;
struct IComparer_1_t4483F9B9F43C7B0F8D4FEEAE12FAFDD3F9CF81FD;
struct IComparer_1_t51428AB1FFAFB02ED44A5754BAB3C1B933B8949B;
struct IComparer_1_tC0A12A847AF97F369A5CE9A0CCE71CE18EE1440E;
struct IComparer_1_t8CAF1C6960178F0932415ACE319F199995AB23D7;
struct IComparer_1_tC943E48D8B53E7D22837C985AF9A0BF4F1F96D9E;
struct IComparer_1_tFDB0B934337DF4DC2367C1B24FB3247B40F049E1;
struct IComparer_1_tCA720E7837F12C38065A4AB632B5FAAD19EC30AA;
struct IComparer_1_t5C8ADB6DF803417A1731826FA07541C9E165AB71;
struct IComparer_1_t159FEB1B1070E2EE853CD70A3DAF125998EE03D3;
struct IComparer_1_t59BC948C5D5D8AD2B6FED65728E9132C6841C837;
struct IEnumerable_1_tCE758D940790D6D0D56B457E522C195F8C413AF2;
struct IEnumerable_1_t71A46277DBD73BD4009B2B20885D2B7057593A1A;
struct IEnumerable_1_tF95C9E01A913DD50575531C8305932628663D9E9;
struct IEnumerable_1_t1AC92123DB80117A0E3B2D9838CA8CD8FD3DE958;
struct IEnumerable_1_t2F8D9B3FF96DA5B489C5CC29B5EFE42CB0FBC3F2;
struct IEnumerable_1_t5C1E5CDFEA99062D152E83B174072FEDB9763788;
struct IEnumerable_1_t29E7244AE33B71FA0981E50D5BC73B7938F35C66;
struct IEnumerable_1_t616D8494D191E02CD416B710E4C06389401F060C;
struct IEnumerable_1_t2D229B7B352B16330C5D8E4DAF312BE0526EBE44;
struct IEnumerable_1_tBA9822E764C7F9AD80E155F6777048133C78505B;
struct IEnumerator_1_tD6A90A7446DA8E6CF865EDFBBF18C1200BB6D452;
struct IEnumerator_1_t239F6ACD0FC026E7FA70965FDE161517CD367AED;
struct IEnumerator_1_t43D2E4BA9246755F293DFA74F001FB1A70A648FD;
struct IEnumerator_1_tE8A32A79908DB826E2C4254480D4B5F60D3B853C;
struct IEnumerator_1_tC4DB5501FD2DF591D43BEFC53384B8551DCE852F;
struct IEnumerator_1_tD1458B7D83AB52223A503862617A8A15E008EE1E;
struct IEnumerator_1_t75CB2681E18F7F2791528FA2CA60361FDB5DA08D;
struct IEnumerator_1_tFA909B65895E40AAB1C8DD427FCA2D3EE869603F;
struct IEnumerator_1_t9C4BEE74A726ABB541B6A2B81ABEBF11CEA37C93;
struct IEnumerator_1_t79B912CBA712D5F76599837CD1604BEED0829411;
struct IEqualityComparer_1_tDBFC8496F14612776AF930DBF84AFE7D06D1F0E9;
struct Lazy_1_tBAA3E373F2142744F64A913EB230AA096D161A25;
struct ListElementProperty_tBCD14CEEDC46D04C5AE8E531734D85F572D3926E;
struct ListElementProperty_t615C280FCD7BA320329E2CB3E3B52EE88FA09282;
struct ListPropertyBag_1_tD68AC11290FE8987B600F306DBAE907249E1AC26;
struct List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715;
struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73;
struct List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576;
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
struct List_1_t9DE980811C648CE80197045689D21D2B224E7912;
struct List_1_t2EF0515F9247C0F480F55BF3E296366A47CB0324;
struct List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B;
struct List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A;
struct List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A;
struct List_1_tDB6FA8EDA7A26227B5CA100203EF7BAFA0FDBDDF;
struct List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4;
struct LockedStack_t000073AA14F1B0C46471D9C699C9CDE10CB7CA17;
struct LockedStack_t55EA3BEB39A80E4F0A2009E69BE4365D6CFFBB7B;
struct LockedStack_t41A87F7FF06A8633FE1FF193C1AA749E23B5A5DC;
struct LockedStack_tA2963E19C6D1029555446DD09B0B4208AC0F8E4A;
struct LongEnumEqualityComparer_1_t84E9660A2B34FF3EBE584576308B60B885D573D2;
struct LowLevelDictionary_2_t4C52985827C66ED86805FEED7556812E4207A114;
struct Predicate_1_t6CDE3111264F492F4F13277756366A07CA78A4C3;
struct Predicate_1_t5C52E5DEC72D8848A1024CF1E1E512DB092F800A;
struct Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12;
struct Predicate_1_t2812BD9A4B34C2F0C29CD9C263856BAE4515A201;
struct Predicate_1_t231FE77F451704871DD8332FA13BC563C1DF98A7;
struct Predicate_1_tE96ECD003F473EE07C8DCDFCCD657300A8DE453B;
struct Predicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107;
struct Predicate_1_t8194F57B81937B278B5EFEF0F5B667BBB054B0D0;
struct Predicate_1_t107748E0E0D2277266234EAF67AC068394C4351C;
struct Predicate_1_t5A30DC3457D23124EDD16C06F92FCB77A9C8A8FD;
struct EntryU5BU5D_t16529C13B3C98BF11CD3EF6FAF58FEA29EABDCA6;
struct PerCoreLockedStacksU5BU5D_t66F38702B1BDB999EE73628348DDFE580E352C9D;
struct PerCoreLockedStacksU5BU5D_t4BBE2725C0221B3E883AFC60A3A21970D7CB67B1;
struct PerCoreLockedStacksU5BU5D_tCAB737265F2B693EDA232C9438A4E4DF884A0166;
struct PerCoreLockedStacksU5BU5D_t9CDDE75124B27D018B8CD21AC5D6E007D0686752;
struct ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA;
struct CharU5BU5DU5BU5D_tE6ABF380CD3BBDBB52C3EF725A02224F2B4AA680;
struct Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E;
struct __Il2CppFullySharedGenericTypeU5BU5DU5BU5D_tAE866946296CBB820B69570ADEE87D79ADAAC33F;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F;
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct PointU5BU5D_tBF08949C6A5139156312E05FFEBA360828D28F4C;
struct RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7;
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;
struct OrderBlockU5BU5D_tD67C39FB212889AFAAB991BE1AE144ED8D35EE88;
struct SingleRangeU5BU5D_t9F938F2249733D85C4F97842A125778D69A843D6;
struct WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577;
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129;
struct ArrayPoolEventSource_tDB6CA549DFC2FBEB134C71EB85DBD6D943E5C888;
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
struct EventSource_tA86759A1E6F272632C299AAC181C0A67E5C52F25;
struct Exception_t;
struct ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757;
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
struct IFormatterConverter_t726606DAC82C384B08C82471313C340968DDB609;
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB;
struct LazyHelper_t1784351780B2D1AC002869BB3C7A35AA64762602;
struct ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158;
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
struct MethodInfo_t;
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
struct SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E;
struct SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37;
struct String_t;
struct Type_t;
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;

IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArrayPoolEventSource_tDB6CA549DFC2FBEB134C71EB85DBD6D943E5C888_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LazyHelper_t1784351780B2D1AC002869BB3C7A35AA64762602_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OutOfMemoryException_tE6DC2F937EC4A8699271D5151C4DF83BDE99EE7F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral27EA076D82B233154707BD958AA3976983CD4084;
IL2CPP_EXTERN_C String_t* _stringLiteral946ECD27C1C53A25C82D0F80916982541BE6CE15;
IL2CPP_EXTERN_C String_t* _stringLiteralEF68BB0CB45867DA95163C2C6A4B0677DCE80DCF;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct EntryU5BU5D_t16529C13B3C98BF11CD3EF6FAF58FEA29EABDCA6;
struct ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA;
struct CharU5BU5DU5BU5D_tE6ABF380CD3BBDBB52C3EF725A02224F2B4AA680;
struct Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E;
struct __Il2CppFullySharedGenericTypeU5BU5DU5BU5D_tAE866946296CBB820B69570ADEE87D79ADAAC33F;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct PointU5BU5D_tBF08949C6A5139156312E05FFEBA360828D28F4C;
struct RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7;
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;
struct OrderBlockU5BU5D_tD67C39FB212889AFAAB991BE1AE144ED8D35EE88;
struct SingleRangeU5BU5D_t9F938F2249733D85C4F97842A125778D69A843D6;
struct WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct ArrayPool_1_t645A9854926DCA747C654687A362AD03D55D2C07  : public RuntimeObject
{
};
struct ArrayPool_1_t3CE8332C9DFE03FF160AB0CE0FF17DF7792E0E4B  : public RuntimeObject
{
};
struct ArrayPool_1_tEE934B4A44CDA39BED8CBAF50F7C0E2E9E1ACC01  : public RuntimeObject
{
};
struct ArrayPool_1_t1CA8B86A43623D11BDEC111B774FC11399E41774  : public RuntimeObject
{
};
struct DefaultComparer_1_tF1F3B8981298E50FBC17BDC8CA0B4CFE867AD644  : public RuntimeObject
{
};
struct EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE  : public RuntimeObject
{
};
struct Entry_t776AD7605FD3B32B33A463DA5E56809C57BFA1AB  : public RuntimeObject
{
	int32_t ____key;
	RuntimeObject* ____value;
	Entry_t776AD7605FD3B32B33A463DA5E56809C57BFA1AB* ____next;
};
struct EqualityComparer_1_t458C8DC3748A89A213F4738B57D3742C4896ABE9  : public RuntimeObject
{
};
struct Lazy_1_tBAA3E373F2142744F64A913EB230AA096D161A25 : public RuntimeObject {};
struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576  : public RuntimeObject
{
	Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct List_1_t9DE980811C648CE80197045689D21D2B224E7912  : public RuntimeObject
{
	PointU5BU5D_tBF08949C6A5139156312E05FFEBA360828D28F4C* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct List_1_t2EF0515F9247C0F480F55BF3E296366A47CB0324  : public RuntimeObject
{
	RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B  : public RuntimeObject
{
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A  : public RuntimeObject
{
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A  : public RuntimeObject
{
	OrderBlockU5BU5D_tD67C39FB212889AFAAB991BE1AE144ED8D35EE88* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct List_1_tDB6FA8EDA7A26227B5CA100203EF7BAFA0FDBDDF  : public RuntimeObject
{
	SingleRangeU5BU5D_t9F938F2249733D85C4F97842A125778D69A843D6* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4  : public RuntimeObject
{
	WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct LockedStack_t000073AA14F1B0C46471D9C699C9CDE10CB7CA17  : public RuntimeObject
{
	ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* ____arrays;
	int32_t ____count;
	uint32_t ____firstStackItemMS;
};
struct LockedStack_t55EA3BEB39A80E4F0A2009E69BE4365D6CFFBB7B  : public RuntimeObject
{
	CharU5BU5DU5BU5D_tE6ABF380CD3BBDBB52C3EF725A02224F2B4AA680* ____arrays;
	int32_t ____count;
	uint32_t ____firstStackItemMS;
};
struct LockedStack_t41A87F7FF06A8633FE1FF193C1AA749E23B5A5DC  : public RuntimeObject
{
	Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* ____arrays;
	int32_t ____count;
	uint32_t ____firstStackItemMS;
};
struct LockedStack_tA2963E19C6D1029555446DD09B0B4208AC0F8E4A  : public RuntimeObject
{
	__Il2CppFullySharedGenericTypeU5BU5DU5BU5D_tAE866946296CBB820B69570ADEE87D79ADAAC33F* ____arrays;
	int32_t ____count;
	uint32_t ____firstStackItemMS;
};
struct LowLevelDictionary_2_t4C52985827C66ED86805FEED7556812E4207A114  : public RuntimeObject
{
	EntryU5BU5D_t16529C13B3C98BF11CD3EF6FAF58FEA29EABDCA6* ____buckets;
	int32_t ____numEntries;
	int32_t ____version;
	RuntimeObject* ____comparer;
};
struct PropertyBag_1_t42CD4AA6C3B0FB863CBC2D8227FFEF4C2214906B  : public RuntimeObject
{
	int32_t ___U3CInstantiationKindU3Ek__BackingField;
};
struct Property_2_tE9B27417C17E0D8EA0D6A88F71B3C9347F2332A3  : public RuntimeObject
{
	List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* ___m_Attributes;
};
struct EventSource_tA86759A1E6F272632C299AAC181C0A67E5C52F25  : public RuntimeObject
{
	String_t* ___U3CNameU3Ek__BackingField;
};
struct LazyHelper_t1784351780B2D1AC002869BB3C7A35AA64762602  : public RuntimeObject
{
	int32_t ___U3CStateU3Ek__BackingField;
	ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* ____exceptionDispatch;
};
struct MemberInfo_t  : public RuntimeObject
{
};
struct SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37  : public RuntimeObject
{
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___m_members;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_data;
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___m_types;
	Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* ___m_nameToIndex;
	int32_t ___m_currMember;
	RuntimeObject* ___m_converter;
	String_t* ___m_fullTypeName;
	String_t* ___m_assemName;
	Type_t* ___objectType;
	bool ___isFullTypeNameSetExplicit;
	bool ___isAssemblyNameSetExplicit;
	bool ___requireSameTokenInPartialTrust;
};
struct String_t  : public RuntimeObject
{
	int32_t ____stringLength;
	Il2CppChar ____firstChar;
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};
struct Enumerator_t9DBCD072C72E44AB8959D9884EF7F528028F20EC 
{
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ____list;
	int32_t ____index;
	int32_t ____version;
	int32_t ____current;
};
struct Enumerator_t6209EE23CCD16838DA331AC87789A15508C6C72B 
{
	List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* ____list;
	int32_t ____index;
	int32_t ____version;
	int32_t ____current;
};
struct Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A 
{
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ____list;
	int32_t ____index;
	int32_t ____version;
	RuntimeObject* ____current;
};
typedef Il2CppFullySharedGenericStruct Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF;
struct IndexedCollectionPropertyBag_2_t9CFEACD6C16F18DE7CFC0FF1B789D5E4C3E70488  : public PropertyBag_1_t42CD4AA6C3B0FB863CBC2D8227FFEF4C2214906B
{
	ListElementProperty_tBCD14CEEDC46D04C5AE8E531734D85F572D3926E* ___m_Property;
};
struct ListBuilder_1_tCC8A75CAC31AC22CAA5DFE54A082DB3FA07EAD51 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items;
	RuntimeObject* ____item;
	int32_t ____count;
	int32_t ____capacity;
};
struct ListElementProperty_t615C280FCD7BA320329E2CB3E3B52EE88FA09282  : public Property_2_tE9B27417C17E0D8EA0D6A88F71B3C9347F2332A3
{
	int32_t ___m_Index;
};
struct LongEnumEqualityComparer_1_t84E9660A2B34FF3EBE584576308B60B885D573D2  : public EqualityComparer_1_t458C8DC3748A89A213F4738B57D3742C4896ABE9
{
};
struct Nullable_1_tD9A4AFB06DB90AB3FAD2F61F0888AD20DC159BF1 
{
	bool ___hasValue;
	int32_t ___value;
};
struct TlsOverPerCoreLockedStacksArrayPool_1_t99785B1054684FDD1A65104B70B272C02AA00542  : public ArrayPool_1_t645A9854926DCA747C654687A362AD03D55D2C07
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____bucketArraySizes;
	PerCoreLockedStacksU5BU5D_t66F38702B1BDB999EE73628348DDFE580E352C9D* ____buckets;
	int32_t ____callbackCreated;
};
struct TlsOverPerCoreLockedStacksArrayPool_1_t8906D917899793F9523A1B1DFB3008CA600B7F00  : public ArrayPool_1_t3CE8332C9DFE03FF160AB0CE0FF17DF7792E0E4B
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____bucketArraySizes;
	PerCoreLockedStacksU5BU5D_t4BBE2725C0221B3E883AFC60A3A21970D7CB67B1* ____buckets;
	int32_t ____callbackCreated;
};
struct TlsOverPerCoreLockedStacksArrayPool_1_t5B35E5C672C6B144AA2ACF24F6AB93FC7FDEAECC  : public ArrayPool_1_tEE934B4A44CDA39BED8CBAF50F7C0E2E9E1ACC01
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____bucketArraySizes;
	PerCoreLockedStacksU5BU5D_tCAB737265F2B693EDA232C9438A4E4DF884A0166* ____buckets;
	int32_t ____callbackCreated;
};
struct TlsOverPerCoreLockedStacksArrayPool_1_tE35D2E7EF078343B5B040BA33BB77E88B1AC8F0F  : public ArrayPool_1_t1CA8B86A43623D11BDEC111B774FC11399E41774
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____bucketArraySizes;
	PerCoreLockedStacksU5BU5D_t9CDDE75124B27D018B8CD21AC5D6E007D0686752* ____buckets;
	int32_t ____callbackCreated;
};
struct ArrayPoolEventSource_tDB6CA549DFC2FBEB134C71EB85DBD6D943E5C888  : public EventSource_tA86759A1E6F272632C299AAC181C0A67E5C52F25
{
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value;
};
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	uint8_t ___m_value;
};
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	Il2CppChar ___m_value;
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	int32_t ___m_value;
};
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	int64_t ___m_value;
};
struct IntPtr_t 
{
	void* ___m_value;
};
struct SpinWait_t51CFFA8FF70F1B430E075F96CFD936260D8CE675 
{
	int32_t ____count;
};
struct StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 
{
	RuntimeObject* ___m_additionalContext;
	int32_t ___m_state;
};
struct StreamingContext_t56760522A751890146EE45F82F866B55B7E33677_marshaled_pinvoke
{
	Il2CppIUnknown* ___m_additionalContext;
	int32_t ___m_state;
};
struct StreamingContext_t56760522A751890146EE45F82F866B55B7E33677_marshaled_com
{
	Il2CppIUnknown* ___m_additionalContext;
	int32_t ___m_state;
};
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	uint32_t ___m_value;
};
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	float ___x;
	float ___y;
};
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	float ___x;
	float ___y;
	float ___z;
};
struct Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 
{
	int32_t ___m_X;
	int32_t ___m_Y;
	int32_t ___m_Z;
};
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
struct OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837 
{
	int32_t ___order;
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___callback;
};
struct OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837_marshaled_pinvoke
{
	int32_t ___order;
	Il2CppMethodPointer ___callback;
};
struct OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837_marshaled_com
{
	int32_t ___order;
	Il2CppMethodPointer ___callback;
};
struct SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC 
{
	Il2CppChar ___First;
	Il2CppChar ___Last;
};
struct SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC_marshaled_pinvoke
{
	uint8_t ___First;
	uint8_t ___Last;
};
struct SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC_marshaled_com
{
	uint8_t ___First;
	uint8_t ___Last;
};
struct WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44 
{
	SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* ___m_DelagateCallback;
	RuntimeObject* ___m_DelagateState;
	ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158* ___m_WaitHandle;
};
struct WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44_marshaled_pinvoke
{
	Il2CppMethodPointer ___m_DelagateCallback;
	Il2CppIUnknown* ___m_DelagateState;
	ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158* ___m_WaitHandle;
};
struct WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44_marshaled_com
{
	Il2CppMethodPointer ___m_DelagateCallback;
	Il2CppIUnknown* ___m_DelagateState;
	ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158* ___m_WaitHandle;
};
struct Enumerator_t609488A9291E792D6A59707FF2BF03FBB727E047 
{
	List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* ____list;
	int32_t ____index;
	int32_t ____version;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ____current;
};
struct Enumerator_t389EF10F90069ED924478E5694DFE1BB5CBCF251 
{
	List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A* ____list;
	int32_t ____index;
	int32_t ____version;
	OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837 ____current;
};
struct Enumerator_t59E02176F2EE4E264A4750514AA127E2E21FF5D9 
{
	List_1_tDB6FA8EDA7A26227B5CA100203EF7BAFA0FDBDDF* ____list;
	int32_t ____index;
	int32_t ____version;
	SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC ____current;
};
struct Enumerator_t7ECA23D5C1F4F41D95EEA8488F11D3D913089B4C 
{
	List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4* ____list;
	int32_t ____index;
	int32_t ____version;
	WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44 ____current;
};
struct ListPropertyBag_1_tD68AC11290FE8987B600F306DBAE907249E1AC26  : public IndexedCollectionPropertyBag_2_t9CFEACD6C16F18DE7CFC0FF1B789D5E4C3E70488
{
};
struct Delegate_t  : public RuntimeObject
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	RuntimeObject* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	bool ___method_is_virtual;
};
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	Il2CppIUnknown* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	int32_t ___method_is_virtual;
};
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	Il2CppIUnknown* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	int32_t ___method_is_virtual;
};
struct Exception_t  : public RuntimeObject
{
	String_t* ____className;
	String_t* ____message;
	RuntimeObject* ____data;
	Exception_t* ____innerException;
	String_t* ____helpURL;
	RuntimeObject* ____stackTrace;
	String_t* ____stackTraceString;
	String_t* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	RuntimeObject* ____dynamicMethods;
	int32_t ____HResult;
	String_t* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Exception_t_marshaled_pinvoke
{
	char* ____className;
	char* ____message;
	RuntimeObject* ____data;
	Exception_t_marshaled_pinvoke* ____innerException;
	char* ____helpURL;
	Il2CppIUnknown* ____stackTrace;
	char* ____stackTraceString;
	char* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	Il2CppIUnknown* ____dynamicMethods;
	int32_t ____HResult;
	char* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	Il2CppSafeArray* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className;
	Il2CppChar* ____message;
	RuntimeObject* ____data;
	Exception_t_marshaled_com* ____innerException;
	Il2CppChar* ____helpURL;
	Il2CppIUnknown* ____stackTrace;
	Il2CppChar* ____stackTraceString;
	Il2CppChar* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	Il2CppIUnknown* ____dynamicMethods;
	int32_t ____HResult;
	Il2CppChar* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	Il2CppSafeArray* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Int32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C 
{
	int32_t ___value__;
};
struct Point_t4F128496D336DF7AA8817608D59E72CEF8DBFB93 
{
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___chunkIndex;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___point;
};
struct RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Centroid;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Point;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Normal;
	float ___m_Distance;
	float ___m_Fraction;
	int32_t ___m_Collider;
};
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	intptr_t ___value;
};
struct Enumerator_t9A06AD03886B23E647554089873705961E2BA463 
{
	List_1_t9DE980811C648CE80197045689D21D2B224E7912* ____list;
	int32_t ____index;
	int32_t ____version;
	Point_t4F128496D336DF7AA8817608D59E72CEF8DBFB93 ____current;
};
struct Enumerator_t2CEF225D2605B62ED98F365273E2A70098997301 
{
	List_1_t2EF0515F9247C0F480F55BF3E296366A47CB0324* ____list;
	int32_t ____index;
	int32_t ____version;
	RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA ____current;
};
struct MulticastDelegate_t  : public Delegate_t
{
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates;
};
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates;
};
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates;
};
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};
struct Type_t  : public MemberInfo_t
{
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl;
};
struct Comparison_1_tB7DE1436CB53924C2FC41FF926D074C1ACC14D89  : public MulticastDelegate_t
{
};
struct Comparison_1_t867D3AA383F5B47704F3B33AF0917C4E98ABEBF1  : public MulticastDelegate_t
{
};
struct Comparison_1_t62E531E7B8260E2C6C2718C3BDB8CF8655139645  : public MulticastDelegate_t
{
};
struct Comparison_1_t8FE3B8B0EC0CE87398BAC28B7E01309E4ED10BB7  : public MulticastDelegate_t
{
};
struct Comparison_1_t029B324B1F424911E4FB983F3FB02CCE89CD068B  : public MulticastDelegate_t
{
};
struct Comparison_1_t388CFEE675F4A6E15BB604A7AD4C3A5B6D265FB7  : public MulticastDelegate_t
{
};
struct Comparison_1_tE94B5C4AE59DE10B7A54AD7C3291462A05D5CD49  : public MulticastDelegate_t
{
};
struct Comparison_1_tC8BBA462D5337723AC34773EEE343018753C7FF3  : public MulticastDelegate_t
{
};
struct Comparison_1_tA6E38F9B8A5E125EC6515F9679C2079C747A0149  : public MulticastDelegate_t
{
};
struct Comparison_1_t4349A0C0F6E57844038D08909A07D093BF8BBF87  : public MulticastDelegate_t
{
};
struct Func_1_tBB8824FA8746333BFFF3AB3CE4A41B58450AF431  : public MulticastDelegate_t
{
};
struct Predicate_1_t6CDE3111264F492F4F13277756366A07CA78A4C3  : public MulticastDelegate_t
{
};
struct Predicate_1_t5C52E5DEC72D8848A1024CF1E1E512DB092F800A  : public MulticastDelegate_t
{
};
struct Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12  : public MulticastDelegate_t
{
};
struct Predicate_1_t2812BD9A4B34C2F0C29CD9C263856BAE4515A201  : public MulticastDelegate_t
{
};
struct Predicate_1_t231FE77F451704871DD8332FA13BC563C1DF98A7  : public MulticastDelegate_t
{
};
struct Predicate_1_tE96ECD003F473EE07C8DCDFCCD657300A8DE453B  : public MulticastDelegate_t
{
};
struct Predicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107  : public MulticastDelegate_t
{
};
struct Predicate_1_t8194F57B81937B278B5EFEF0F5B667BBB054B0D0  : public MulticastDelegate_t
{
};
struct Predicate_1_t107748E0E0D2277266234EAF67AC068394C4351C  : public MulticastDelegate_t
{
};
struct Predicate_1_t5A30DC3457D23124EDD16C06F92FCB77A9C8A8FD  : public MulticastDelegate_t
{
};
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	String_t* ____paramName;
};
struct ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct OutOfMemoryException_tE6DC2F937EC4A8699271D5151C4DF83BDE99EE7F  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
};
struct EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE_StaticFields
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___Value;
};
struct EqualityComparer_1_t458C8DC3748A89A213F4738B57D3742C4896ABE9_StaticFields
{
	EqualityComparer_1_t458C8DC3748A89A213F4738B57D3742C4896ABE9* ___defaultComparer;
};
struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_StaticFields
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_emptyArray;
};
struct List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576_StaticFields
{
	Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* ___s_emptyArray;
};
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray;
};
struct List_1_t9DE980811C648CE80197045689D21D2B224E7912_StaticFields
{
	PointU5BU5D_tBF08949C6A5139156312E05FFEBA360828D28F4C* ___s_emptyArray;
};
struct List_1_t2EF0515F9247C0F480F55BF3E296366A47CB0324_StaticFields
{
	RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7* ___s_emptyArray;
};
struct List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B_StaticFields
{
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_emptyArray;
};
struct List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A_StaticFields
{
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___s_emptyArray;
};
struct List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A_StaticFields
{
	OrderBlockU5BU5D_tD67C39FB212889AFAAB991BE1AE144ED8D35EE88* ___s_emptyArray;
};
struct List_1_tDB6FA8EDA7A26227B5CA100203EF7BAFA0FDBDDF_StaticFields
{
	SingleRangeU5BU5D_t9F938F2249733D85C4F97842A125778D69A843D6* ___s_emptyArray;
};
struct List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4_StaticFields
{
	WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577* ___s_emptyArray;
};
struct LazyHelper_t1784351780B2D1AC002869BB3C7A35AA64762602_StaticFields
{
	LazyHelper_t1784351780B2D1AC002869BB3C7A35AA64762602* ___NoneViaConstructor;
	LazyHelper_t1784351780B2D1AC002869BB3C7A35AA64762602* ___NoneViaFactory;
	LazyHelper_t1784351780B2D1AC002869BB3C7A35AA64762602* ___PublicationOnlyViaConstructor;
	LazyHelper_t1784351780B2D1AC002869BB3C7A35AA64762602* ___PublicationOnlyViaFactory;
	LazyHelper_t1784351780B2D1AC002869BB3C7A35AA64762602* ___PublicationOnlyWaitForOtherThreadToPublish;
};
struct String_t_StaticFields
{
	String_t* ___Empty;
};
struct TlsOverPerCoreLockedStacksArrayPool_1_t99785B1054684FDD1A65104B70B272C02AA00542_StaticFields
{
	bool ___s_trimBuffers;
	ConditionalWeakTable_2_tE473109D1EF9EA4E1AA06539AE5262421E166EFD* ___s_allTlsBuckets;
};
struct TlsOverPerCoreLockedStacksArrayPool_1_t99785B1054684FDD1A65104B70B272C02AA00542_ThreadStaticFields
{
	ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* ___t_tlsBuckets;
};
struct TlsOverPerCoreLockedStacksArrayPool_1_t8906D917899793F9523A1B1DFB3008CA600B7F00_StaticFields
{
	bool ___s_trimBuffers;
	ConditionalWeakTable_2_tA0A6618FEA1BDC4E0A5C70A205A73167784823D9* ___s_allTlsBuckets;
};
struct TlsOverPerCoreLockedStacksArrayPool_1_t8906D917899793F9523A1B1DFB3008CA600B7F00_ThreadStaticFields
{
	CharU5BU5DU5BU5D_tE6ABF380CD3BBDBB52C3EF725A02224F2B4AA680* ___t_tlsBuckets;
};
struct TlsOverPerCoreLockedStacksArrayPool_1_t5B35E5C672C6B144AA2ACF24F6AB93FC7FDEAECC_StaticFields
{
	bool ___s_trimBuffers;
	ConditionalWeakTable_2_t4FA84C9C03B7929ACDC537F2AB91C3AA9D39B9E6* ___s_allTlsBuckets;
};
struct TlsOverPerCoreLockedStacksArrayPool_1_t5B35E5C672C6B144AA2ACF24F6AB93FC7FDEAECC_ThreadStaticFields
{
	Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* ___t_tlsBuckets;
};
struct TlsOverPerCoreLockedStacksArrayPool_1_tE35D2E7EF078343B5B040BA33BB77E88B1AC8F0F_StaticFields
{
	bool ___s_trimBuffers;
	ConditionalWeakTable_2_tD204B678FB5C57190177AACB4C57D5BDE9ED70E4* ___s_allTlsBuckets;
};
struct TlsOverPerCoreLockedStacksArrayPool_1_tE35D2E7EF078343B5B040BA33BB77E88B1AC8F0F_ThreadStaticFields
{
	__Il2CppFullySharedGenericTypeU5BU5DU5BU5D_tAE866946296CBB820B69570ADEE87D79ADAAC33F* ___t_tlsBuckets;
};
struct ArrayPoolEventSource_tDB6CA549DFC2FBEB134C71EB85DBD6D943E5C888_StaticFields
{
	ArrayPoolEventSource_tDB6CA549DFC2FBEB134C71EB85DBD6D943E5C888* ___Log;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	String_t* ___TrueString;
	String_t* ___FalseString;
};
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1;
};
struct SpinWait_t51CFFA8FF70F1B430E075F96CFD936260D8CE675_StaticFields
{
	int32_t ___SpinCountforSpinBeforeWait;
};
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector;
};
struct Exception_t_StaticFields
{
	RuntimeObject* ___s_EDILock;
};
struct Type_t_StaticFields
{
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder;
	Il2CppChar ___Delimiter;
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes;
	RuntimeObject* ___Missing;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
struct Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F  : public RuntimeArray
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
struct PointU5BU5D_tBF08949C6A5139156312E05FFEBA360828D28F4C  : public RuntimeArray
{
	ALIGN_FIELD (8) Point_t4F128496D336DF7AA8817608D59E72CEF8DBFB93 m_Items[1];

	inline Point_t4F128496D336DF7AA8817608D59E72CEF8DBFB93 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Point_t4F128496D336DF7AA8817608D59E72CEF8DBFB93* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Point_t4F128496D336DF7AA8817608D59E72CEF8DBFB93 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Point_t4F128496D336DF7AA8817608D59E72CEF8DBFB93 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Point_t4F128496D336DF7AA8817608D59E72CEF8DBFB93* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Point_t4F128496D336DF7AA8817608D59E72CEF8DBFB93 value)
	{
		m_Items[index] = value;
	}
};
struct RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7  : public RuntimeArray
{
	ALIGN_FIELD (8) RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA m_Items[1];

	inline RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA value)
	{
		m_Items[index] = value;
	}
};
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C  : public RuntimeArray
{
	ALIGN_FIELD (8) Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 m_Items[1];

	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 value)
	{
		m_Items[index] = value;
	}
};
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
	}
};
struct OrderBlockU5BU5D_tD67C39FB212889AFAAB991BE1AE144ED8D35EE88  : public RuntimeArray
{
	ALIGN_FIELD (8) OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837 m_Items[1];

	inline OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___callback), (void*)NULL);
	}
	inline OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___callback), (void*)NULL);
	}
};
struct SingleRangeU5BU5D_t9F938F2249733D85C4F97842A125778D69A843D6  : public RuntimeArray
{
	ALIGN_FIELD (8) SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC m_Items[1];

	inline SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC value)
	{
		m_Items[index] = value;
	}
};
struct WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577  : public RuntimeArray
{
	ALIGN_FIELD (8) WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44 m_Items[1];

	inline WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_DelagateCallback), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_DelagateState), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_WaitHandle), (void*)NULL);
		#endif
	}
	inline WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_DelagateCallback), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_DelagateState), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_WaitHandle), (void*)NULL);
		#endif
	}
};
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
struct ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA  : public RuntimeArray
{
	ALIGN_FIELD (8) ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* m_Items[1];

	inline ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB  : public RuntimeArray
{
	ALIGN_FIELD (8) Il2CppChar m_Items[1];

	inline Il2CppChar GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Il2CppChar value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Il2CppChar GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Il2CppChar value)
	{
		m_Items[index] = value;
	}
};
struct CharU5BU5DU5BU5D_tE6ABF380CD3BBDBB52C3EF725A02224F2B4AA680  : public RuntimeArray
{
	ALIGN_FIELD (8) CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* m_Items[1];

	inline CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
struct Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E  : public RuntimeArray
{
	ALIGN_FIELD (8) Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* m_Items[1];

	inline Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
struct __Il2CppFullySharedGenericTypeU5BU5DU5BU5D_tAE866946296CBB820B69570ADEE87D79ADAAC33F  : public RuntimeArray
{
	ALIGN_FIELD (8) __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* m_Items[1];

	inline __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
struct EntryU5BU5D_t16529C13B3C98BF11CD3EF6FAF58FEA29EABDCA6  : public RuntimeArray
{
	ALIGN_FIELD (8) Entry_t776AD7605FD3B32B33A463DA5E56809C57BFA1AB* m_Items[1];

	inline Entry_t776AD7605FD3B32B33A463DA5E56809C57BFA1AB* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Entry_t776AD7605FD3B32B33A463DA5E56809C57BFA1AB** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Entry_t776AD7605FD3B32B33A463DA5E56809C57BFA1AB* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Entry_t776AD7605FD3B32B33A463DA5E56809C57BFA1AB* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Entry_t776AD7605FD3B32B33A463DA5E56809C57BFA1AB** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Entry_t776AD7605FD3B32B33A463DA5E56809C57BFA1AB* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListBuilder_1__ctor_mFC129BE2CF658F37264E5AE87C38ACBE1686FC06_gshared (ListBuilder_1_tCC8A75CAC31AC22CAA5DFE54A082DB3FA07EAD51* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ListBuilder_1_get_Item_m23AA6DB4615BCE00F8A63C6152113822F0250EEE_gshared (ListBuilder_1_tCC8A75CAC31AC22CAA5DFE54A082DB3FA07EAD51* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Resize_TisRuntimeObject_mE8D92C287251BAF8256D85E5829F749359EC334E_gshared (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918** ___0_array, int32_t ___1_newSize, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ListBuilder_1_ToArray_mADCCB17012F7FB8EE90E45E2CD13DBD2E71FE781_gshared (ListBuilder_1_tCC8A75CAC31AC22CAA5DFE54A082DB3FA07EAD51* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListBuilder_1_CopyTo_m07DD8110CA53CAE4B1C65F1E9A2AC9C074F14378_gshared (ListBuilder_1_tCC8A75CAC31AC22CAA5DFE54A082DB3FA07EAD51* __this, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_array, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ListBuilder_1_get_Count_m5FC923A60B6BCD6D28FA95B0495EF5E537266285_gshared_inline (ListBuilder_1_tCC8A75CAC31AC22CAA5DFE54A082DB3FA07EAD51* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListBuilder_1_Add_mC19811ACD1D830765599A1583F96C56D16A9E5AD_gshared (ListBuilder_1_tCC8A75CAC31AC22CAA5DFE54A082DB3FA07EAD51* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddEnumerable_m0D03C24E342A0F77A0042603E40AD506136B684F_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, RuntimeObject* ___0_enumerable, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m0F7A078274F301B83DFC51191B3AFC763DE9C4D0_gshared (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Item_m95629806F31CF369D937590912E0B6A53FF7C587_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_index, int32_t ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void List_1_AddWithResize_m378B392086AAB6F400944FA9839516326B3F7BB8_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_EnsureCapacity_m86DF3071CD67B1463C1CF26C7791331D70D431C0_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_min, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_gshared_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_item, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_gshared_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_InsertRange_m1D3DE2073A8946E2D1113677F2062F35881FA7B8_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_index, RuntimeObject* ___1_collection, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_IndexOf_mC3D1A2CECAC0E3D42C78B43772E1BD3D0333C450_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_IsCompatibleObject_m0C506FD38C6F16AC8A7700817EF89401910F873C_gshared (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_m4FD96E89F15844C90032C7386BAB528817F1FF5B_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_CopyTo_m030AAF730ACCF739D45671086EBF4786FED908D5_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_array, int32_t ___1_arrayIndex, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Capacity_mA667E9DF466C9574AC22A4B0FE0E358D818505CC_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_mB5D11409C5765078140B3C3652FEF06536FDFA6B_gshared (Enumerator_t9DBCD072C72E44AB8959D9884EF7F528028F20EC* __this, List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___0_list, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_IndexOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m22CB8CB6C30E1C3E70C8662D7A290B88EF5007F3_gshared (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_array, int32_t ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Insert_mC1B6D4E6CC94D8BA82A60B2F80CE9684D9345AAE_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_index, int32_t ___1_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_m76C4CDACF47BA529BAFADFC8D5E13DB9587F4004_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_m2B41E5B9E061DD4D5F58B693018024AADF2AD7F5_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_item, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_mD16C664FFE93598D1C12AC86190D12B0F90B5419_gshared_inline (Predicate_1_t6CDE3111264F492F4F13277756366A07CA78A4C3* __this, int32_t ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Reverse_mE0857BE335F36FD830B3A301AA7BF67F2F3C783F_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_index, int32_t ___1_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Reverse_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m57764BD8E3718881AE35094284EFDECEE528991D_gshared (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_array, int32_t ___1_index, int32_t ___2_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_m3178B19CB7B6281DC7B995E4C5A6AD200EC6153B_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_index, int32_t ___1_count, RuntimeObject* ___2_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Sort_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m6E0CF4C26182BB9D788C90ABE423C2F4CD145E41_gshared (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_array, int32_t ___1_index, int32_t ___2_length, RuntimeObject* ___3_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArraySortHelper_1_Sort_m7FA55FB83B1A81CF769D2928FCE3E06425DAC06B_gshared (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_keys, int32_t ___1_index, int32_t ___2_length, Comparison_1_tB7DE1436CB53924C2FC41FF926D074C1ACC14D89* ___3_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddEnumerable_m888E7562D4D5756B46E7DE52614832960DA81A0D_gshared (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* __this, RuntimeObject* ___0_enumerable, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_get_Item_mDE2F02C693FD9EAA8F93873E407BC46C47ACFC7A_gshared (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_mC3916E2A31C5FA9D0BB4E2A929F5225B4205042F_gshared (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Item_mB4FCD891721B07472641D7000AAE93A9CABBAE5A_gshared (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* __this, int32_t ___0_index, int32_t ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void List_1_AddWithResize_mAD159B09F28BD7914562E219CA52E2D4BDCF5530_gshared (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* __this, int32_t ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_EnsureCapacity_mE0139DA252869EB064FCEC6240A927BCE4945327_gshared (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* __this, int32_t ___0_min, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m809450298141D527D3A4FFAF77AE69D9B08CC17F_gshared_inline (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* __this, int32_t ___0_item, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m9080410FAF175EB3313FCE9515BA3A9D8E11718F_gshared_inline (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_InsertRange_m97B7B4D0EFFBE810751F8A48DA53CFB8B91B4A3B_gshared (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* __this, int32_t ___0_index, RuntimeObject* ___1_collection, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_IndexOf_m4803410520A110B163A6B92857AEFA8FEE015752_gshared (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* __this, int32_t ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_IsCompatibleObject_m0889B00F24FBB309BEE1702FD3CB4C42AD832A39_gshared (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_mF78C4E1EE072C25D5CDEB5057184058E94DF8634_gshared (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* __this, int32_t ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_CopyTo_m839F5ADDC59B70CAC1B14D9841A524465A3BC9E5_gshared (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* __this, Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* ___0_array, int32_t ___1_arrayIndex, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Capacity_m7ED78746E0AFEF2F59490B581943C977BE1A5479_gshared (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_mC6E6B2337772FC83C59264783DAFF1D4CF9F023E_gshared (Enumerator_t6209EE23CCD16838DA331AC87789A15508C6C72B* __this, List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* ___0_list, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_IndexOf_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_mA27917199B3C9E1A60C5791FB1B2AC5EB4C2103A_gshared (Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* ___0_array, int32_t ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Insert_m1E433D24E9C67F0BA5D1ACF7708F97EF1DC4AE3D_gshared (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* __this, int32_t ___0_index, int32_t ___1_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_mA0D34DB4A9D4C8FECCD3278530CEEB3147A19D54_gshared (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_m4238AF38CE7EEE7C4C5C568B53D88116FB692B53_gshared (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* __this, int32_t ___0_item, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_m561B5F43F62B494CB43593312075556BAA567E0B_gshared_inline (Predicate_1_t5C52E5DEC72D8848A1024CF1E1E512DB092F800A* __this, int32_t ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Reverse_m7DE6AE4FAB338990D0A930D6CD525BA07B7E3CB4_gshared (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* __this, int32_t ___0_index, int32_t ___1_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Reverse_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_mBF0352521EE3186887C68DFC25905E29D1393515_gshared (Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* ___0_array, int32_t ___1_index, int32_t ___2_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_m3EC8C34030BE04C522C1CBDB2E96DFAEDB2F011D_gshared (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* __this, int32_t ___0_index, int32_t ___1_count, RuntimeObject* ___2_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Sort_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_m632FD913827035A385A987CEA4B0D30A6C1BB317_gshared (Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* ___0_array, int32_t ___1_index, int32_t ___2_length, RuntimeObject* ___3_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArraySortHelper_1_Sort_m3FCF73F735AAA03BF7352EF6635F318F66177EB9_gshared (Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* ___0_keys, int32_t ___1_index, int32_t ___2_length, Comparison_1_t867D3AA383F5B47704F3B33AF0917C4E98ABEBF1* ___3_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddEnumerable_m76C85811BC9C905E7224C054AD480C3062FA7700_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_enumerable, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisRuntimeObject_m27E41ACCEE817CDFBB9616ED62F233A4EA0D8A49_gshared (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Item_m3C58DBC69A321AF2826595584FF3E9F43C07EA56_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___0_index, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void List_1_AddWithResize_m79A9BF770BEF9C06BE40D5401E55E375F2726CC4_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_EnsureCapacity_m6511331DC6EE293A9C3CED45A7079E09128EFA2D_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___0_min, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_InsertRange_m386ABA9B2C4950D31E787C87CDEF3D3E103F1B1A_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___0_index, RuntimeObject* ___1_collection, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_IndexOf_m378F61BA812B79DEE58D86FE8AA9F20E3FC7D85F_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_IsCompatibleObject_m639E8AB2F97E9764343E7A58C0C7297E11FB1F37_gshared (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_m4C9139C2A6B23E9343D3F87807B32C6E2CFE660D_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_CopyTo_m1210D480F3EF1C250A53086148C1204B7A99B931_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_array, int32_t ___1_arrayIndex, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Capacity_mD826E33A9E5EBC19C714653217071790693E0B95_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m540236388ED02DCFB606983FBE3A7C536408505E_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ___0_list, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_IndexOf_TisRuntimeObject_m4C0C698B1D627E6B3C3BE6DDA512E8E276DC6F73_gshared (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_array, RuntimeObject* ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Insert_m9C9559248941FED50561DB029D55DF08DEF3B094_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___0_index, RuntimeObject* ___1_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_m54F62297ADEE4D4FDA697F49ED807BF901201B54_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_m4DFA48F4CEB9169601E75FC28517C5C06EFA5AD7_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_m6AC449189DCEE89A4FA2A2B724DE296A1DFB6A9B_gshared_inline (Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Reverse_mA271B5B013C60CD038FA95C13BB2B5F09168D920_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___0_index, int32_t ___1_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Reverse_TisRuntimeObject_m06FF2E5011A594BEE1AF5EC3AEA51997A9812FE1_gshared (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_array, int32_t ___1_index, int32_t ___2_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_mC96F92ACF35F9B37F0A5E3338FF61E5229554338_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___0_index, int32_t ___1_count, RuntimeObject* ___2_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Sort_TisRuntimeObject_mF8C07FB088390BE91CF3D4F9C8C4AC052B3FBCBA_gshared (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_array, int32_t ___1_index, int32_t ___2_length, RuntimeObject* ___3_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArraySortHelper_1_Sort_m1D1E1B0D0C13AF3B0C1B76665039738BFFE3125A_gshared (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_keys, int32_t ___1_index, int32_t ___2_length, Comparison_1_t62E531E7B8260E2C6C2718C3BDB8CF8655139645* ___3_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddEnumerable_mE834F3621B1EA7B6549A506B2D60FD27F7248506_gshared (List_1_t9DE980811C648CE80197045689D21D2B224E7912* __this, RuntimeObject* ___0_enumerable, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Point_t4F128496D336DF7AA8817608D59E72CEF8DBFB93 List_1_get_Item_m4D4923E3A23B111BC2E6FABB865C91638166A891_gshared (List_1_t9DE980811C648CE80197045689D21D2B224E7912* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisPoint_t4F128496D336DF7AA8817608D59E72CEF8DBFB93_m8FD32CB6A04C1A5DC1DA562CAA2B98231B06883C_gshared (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Item_m228441ED10A0F16FC4CD03E339F4EC612F54ED48_gshared (List_1_t9DE980811C648CE80197045689D21D2B224E7912* __this, int32_t ___0_index, Point_t4F128496D336DF7AA8817608D59E72CEF8DBFB93 ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void List_1_AddWithResize_mEE6F2A13EA6E4345FD10BD84686C624C931BDB94_gshared (List_1_t9DE980811C648CE80197045689D21D2B224E7912* __this, Point_t4F128496D336DF7AA8817608D59E72CEF8DBFB93 ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_EnsureCapacity_m1202F62418DD326A020DA1D5D72D0D4BE9140C5A_gshared (List_1_t9DE980811C648CE80197045689D21D2B224E7912* __this, int32_t ___0_min, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m93D11AF4102DBFC260157991485B7F81A0FC4638_gshared_inline (List_1_t9DE980811C648CE80197045689D21D2B224E7912* __this, Point_t4F128496D336DF7AA8817608D59E72CEF8DBFB93 ___0_item, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m364C36D74BA0E74DAF87657A16515729C25460BB_gshared_inline (List_1_t9DE980811C648CE80197045689D21D2B224E7912* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_InsertRange_m99B1E6B14294658B0935934081534F6185F1DA95_gshared (List_1_t9DE980811C648CE80197045689D21D2B224E7912* __this, int32_t ___0_index, RuntimeObject* ___1_collection, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_IndexOf_m91D5B6F90EA38F65A448D280A5EA79A2EA22681B_gshared (List_1_t9DE980811C648CE80197045689D21D2B224E7912* __this, Point_t4F128496D336DF7AA8817608D59E72CEF8DBFB93 ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_IsCompatibleObject_m19E8DD3F75663CAFDC2D894F001336F8556A6C17_gshared (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_m12C7BFF98397C515061AEE55D00FD5A34795EEE1_gshared (List_1_t9DE980811C648CE80197045689D21D2B224E7912* __this, Point_t4F128496D336DF7AA8817608D59E72CEF8DBFB93 ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_CopyTo_mD50378B7410606B61959E4C9F2063BCFA05AFE90_gshared (List_1_t9DE980811C648CE80197045689D21D2B224E7912* __this, PointU5BU5D_tBF08949C6A5139156312E05FFEBA360828D28F4C* ___0_array, int32_t ___1_arrayIndex, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Capacity_m02D651F831E3F15525B0EBC98CEEA8D6FAD9B0A2_gshared (List_1_t9DE980811C648CE80197045689D21D2B224E7912* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m5F624EC47E8EC578E3EDCA29E809E19E200671B2_gshared (Enumerator_t9A06AD03886B23E647554089873705961E2BA463* __this, List_1_t9DE980811C648CE80197045689D21D2B224E7912* ___0_list, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_IndexOf_TisPoint_t4F128496D336DF7AA8817608D59E72CEF8DBFB93_mAC380450B02FA206203D148FCCE10A79FEA2A617_gshared (PointU5BU5D_tBF08949C6A5139156312E05FFEBA360828D28F4C* ___0_array, Point_t4F128496D336DF7AA8817608D59E72CEF8DBFB93 ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Insert_mCC981526E88E4C8151FDDE1B7E7ED767032F42C6_gshared (List_1_t9DE980811C648CE80197045689D21D2B224E7912* __this, int32_t ___0_index, Point_t4F128496D336DF7AA8817608D59E72CEF8DBFB93 ___1_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_m31B75770058276E7F7A2469C915AFC7D198DAB8E_gshared (List_1_t9DE980811C648CE80197045689D21D2B224E7912* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_m6244881C5C9292C52D9A59D52244849F5586D168_gshared (List_1_t9DE980811C648CE80197045689D21D2B224E7912* __this, Point_t4F128496D336DF7AA8817608D59E72CEF8DBFB93 ___0_item, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_m6A70A7AB2F00E03E6030B95A9BCB53868C27EA94_gshared_inline (Predicate_1_t2812BD9A4B34C2F0C29CD9C263856BAE4515A201* __this, Point_t4F128496D336DF7AA8817608D59E72CEF8DBFB93 ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Reverse_m75DC066BD9CD4A3DE3163C33B470654E9D701FCB_gshared (List_1_t9DE980811C648CE80197045689D21D2B224E7912* __this, int32_t ___0_index, int32_t ___1_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Reverse_TisPoint_t4F128496D336DF7AA8817608D59E72CEF8DBFB93_mD7826DB700877B08F3FE60F9B0F52BEFB582B6D2_gshared (PointU5BU5D_tBF08949C6A5139156312E05FFEBA360828D28F4C* ___0_array, int32_t ___1_index, int32_t ___2_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_mD97B24AEB8B9B57CF9B48586C03D3EFF0C696761_gshared (List_1_t9DE980811C648CE80197045689D21D2B224E7912* __this, int32_t ___0_index, int32_t ___1_count, RuntimeObject* ___2_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Sort_TisPoint_t4F128496D336DF7AA8817608D59E72CEF8DBFB93_m8762D6FA1ED65D5B1FAB23E3DFEFC5094D89A936_gshared (PointU5BU5D_tBF08949C6A5139156312E05FFEBA360828D28F4C* ___0_array, int32_t ___1_index, int32_t ___2_length, RuntimeObject* ___3_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArraySortHelper_1_Sort_m7934C083F94A9EA6DFD9B4D906DE3824CA60A1DB_gshared (PointU5BU5D_tBF08949C6A5139156312E05FFEBA360828D28F4C* ___0_keys, int32_t ___1_index, int32_t ___2_length, Comparison_1_t8FE3B8B0EC0CE87398BAC28B7E01309E4ED10BB7* ___3_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddEnumerable_m2BA55CF15440AD2516DBDA77E5CA579B25D39652_gshared (List_1_t2EF0515F9247C0F480F55BF3E296366A47CB0324* __this, RuntimeObject* ___0_enumerable, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA List_1_get_Item_m736DF34FA0A6E6F67F52538DD7A3E4520A7C17E2_gshared (List_1_t2EF0515F9247C0F480F55BF3E296366A47CB0324* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisRaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA_m423E18B4B0D7C4E77584B631E7ED05E294ABC9C3_gshared (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Item_m515A4F4FB1523A25CC41520F40209D429E5D613B_gshared (List_1_t2EF0515F9247C0F480F55BF3E296366A47CB0324* __this, int32_t ___0_index, RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void List_1_AddWithResize_mA220A208EC71F5CD6865F6C2B7D5F053282001A4_gshared (List_1_t2EF0515F9247C0F480F55BF3E296366A47CB0324* __this, RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_EnsureCapacity_mFD43C6DA3C0D8C8166CE226F24405E180BB60F66_gshared (List_1_t2EF0515F9247C0F480F55BF3E296366A47CB0324* __this, int32_t ___0_min, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m28DCD73896A7493A6DD85C89A5959213159327C0_gshared_inline (List_1_t2EF0515F9247C0F480F55BF3E296366A47CB0324* __this, RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA ___0_item, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m9DF5F004FF70828FB56F22C81485C8A57B3192DB_gshared_inline (List_1_t2EF0515F9247C0F480F55BF3E296366A47CB0324* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_InsertRange_m64602CE8EF27023E7A55807CF1666F5CD7B5DA76_gshared (List_1_t2EF0515F9247C0F480F55BF3E296366A47CB0324* __this, int32_t ___0_index, RuntimeObject* ___1_collection, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_IndexOf_mDC4BA95D32618C596400042A0B46F04E3828D7A7_gshared (List_1_t2EF0515F9247C0F480F55BF3E296366A47CB0324* __this, RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_IsCompatibleObject_m0BB832DA7A39AF98E7AA03F4F6A1BC8C48CADB5B_gshared (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_m90D5BCA1A90104B521E1A0F834FD2B3C7BCF930A_gshared (List_1_t2EF0515F9247C0F480F55BF3E296366A47CB0324* __this, RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_CopyTo_m1E8F62C9D745EF1AA0B7967FEBB52DF1D3826CC6_gshared (List_1_t2EF0515F9247C0F480F55BF3E296366A47CB0324* __this, RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7* ___0_array, int32_t ___1_arrayIndex, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Capacity_m1D877FCA3AF91000B161CC435E11E314C8B2ECDA_gshared (List_1_t2EF0515F9247C0F480F55BF3E296366A47CB0324* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_mAF215FD358D499CB5ECC131E64CF0E4F78C905EA_gshared (Enumerator_t2CEF225D2605B62ED98F365273E2A70098997301* __this, List_1_t2EF0515F9247C0F480F55BF3E296366A47CB0324* ___0_list, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_IndexOf_TisRaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA_m2B8945242BB498A03FFC8BA3F0F3108C44BFAAB7_gshared (RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7* ___0_array, RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Insert_m09365A11484E7ED85325A10D505199BAB0FFD808_gshared (List_1_t2EF0515F9247C0F480F55BF3E296366A47CB0324* __this, int32_t ___0_index, RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA ___1_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_mD2583C8090E4B535A7E90775D4F4807563DF369E_gshared (List_1_t2EF0515F9247C0F480F55BF3E296366A47CB0324* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_mE5C2B7E06ADACF075E1A7A5FC2ABD9FC36B44A44_gshared (List_1_t2EF0515F9247C0F480F55BF3E296366A47CB0324* __this, RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA ___0_item, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_m2F26628AD1EBED3D755F7995B33076DC98F923F7_gshared_inline (Predicate_1_t231FE77F451704871DD8332FA13BC563C1DF98A7* __this, RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Reverse_m24D554FF90CA3CFE9DC557BF5BAC1CCE53D75436_gshared (List_1_t2EF0515F9247C0F480F55BF3E296366A47CB0324* __this, int32_t ___0_index, int32_t ___1_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Reverse_TisRaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA_mF54B91CEAE0914FC82BB56642F268A22945AFC93_gshared (RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7* ___0_array, int32_t ___1_index, int32_t ___2_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_m80948FFD8677D8B7B840BE6D59093DA65A4C4725_gshared (List_1_t2EF0515F9247C0F480F55BF3E296366A47CB0324* __this, int32_t ___0_index, int32_t ___1_count, RuntimeObject* ___2_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Sort_TisRaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA_m71186FFD5FEDC6AFA3EE329DD3D065D0D18B609E_gshared (RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7* ___0_array, int32_t ___1_index, int32_t ___2_length, RuntimeObject* ___3_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArraySortHelper_1_Sort_m6AFFFCE233C56A4625EB06ADB8465B603AAF66B9_gshared (RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7* ___0_keys, int32_t ___1_index, int32_t ___2_length, Comparison_1_t029B324B1F424911E4FB983F3FB02CCE89CD068B* ___3_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddEnumerable_m3F61E1BEC6F6043A8E6F87420863504DE9F59C6E_gshared (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, RuntimeObject* ___0_enumerable, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810_gshared (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m4E879C7609DC1101BE0D3A088A9627F863855032_gshared (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Item_m35C8C18BF5DF9A5C8867BF0C872BC39275A41A9C_gshared (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, int32_t ___0_index, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void List_1_AddWithResize_mCDB189127FC2EE67B5EED9DE34F837DFC6EDC212_gshared (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_EnsureCapacity_m3D475952F4DECC72C2F6CAC08454234565F47922_gshared (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, int32_t ___0_min, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_gshared_inline (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_item, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_gshared_inline (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_InsertRange_m2A9F80B354349125F355FBCDED0B624FFEC79CA4_gshared (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, int32_t ___0_index, RuntimeObject* ___1_collection, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_IndexOf_m5F1AA4E06F9B4B86729A3089AF48805434E7747A_gshared (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_IsCompatibleObject_m9763209708608E6A97CF3666F1A06C04DB3E43F1_gshared (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_m3AB3A0CBA2FC939693360C3753E53CA1E7BAD66F_gshared (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_CopyTo_m5D24D21039B6DED1F82A87A38AB444AA78C0EA3E_gshared (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___0_array, int32_t ___1_arrayIndex, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Capacity_mF3F5104AB534524CF6D04659241FBD48C9080FFE_gshared (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m2045BF7E8C40063172911C1C7F174F126C2F29CE_gshared (Enumerator_t609488A9291E792D6A59707FF2BF03FBB727E047* __this, List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* ___0_list, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_IndexOf_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m3E23294C983591428D5481A6201C56FA7DD46672_gshared (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___0_array, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Insert_mE7623D84AEA50E917A6371C1DD13D356C9190F2F_gshared (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, int32_t ___0_index, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_m482122FD05018D3A1F5EE75A17852A8F8A911679_gshared (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_mA22ACBFC00BF518337732F3D3033AABB2DD46676_gshared (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_item, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_m9FE817A40A1AA77B5B15B6C0E90EB7A4715A819D_gshared_inline (Predicate_1_tE96ECD003F473EE07C8DCDFCCD657300A8DE453B* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Reverse_mC864E0AB0C4F6970C423BCBF255DF82A68155E8B_gshared (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, int32_t ___0_index, int32_t ___1_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Reverse_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mDEEDD12A164F41DC4C3EE36DCDDE671EA8C18084_gshared (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___0_array, int32_t ___1_index, int32_t ___2_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_m69FABA33F3CBE64D5C30DC43E211D9971FFE827E_gshared (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, int32_t ___0_index, int32_t ___1_count, RuntimeObject* ___2_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Sort_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m3CA841E40073D0F005011B0D0DC91D6FF6BCBEF5_gshared (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___0_array, int32_t ___1_index, int32_t ___2_length, RuntimeObject* ___3_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArraySortHelper_1_Sort_mA9371769E1F6D5DDE053EA4A4ED2B9DDBA500404_gshared (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___0_keys, int32_t ___1_index, int32_t ___2_length, Comparison_1_t388CFEE675F4A6E15BB604A7AD4C3A5B6D265FB7* ___3_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m5C66A91DC68887BE203985B56EF2F74222E9AF50_gshared (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF* __this, List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* ___0_list, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddEnumerable_mA6E73354873BEAC5429A80AE43CB210589A7EC7E_gshared (List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A* __this, RuntimeObject* ___0_enumerable, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837 List_1_get_Item_mB65D799560ADD289EA08E717412A24EFADA7FB57_gshared (List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisOrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837_m054615FD6A62EE7702B344B2E24BA8423FEF9621_gshared (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Item_m7533012D6C4CE083D5CAF670259B97F6D5D506F4_gshared (List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A* __this, int32_t ___0_index, OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837 ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void List_1_AddWithResize_m8B3D79788ADC2B54C9B12CC9EC1158E6A04CDEBC_gshared (List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A* __this, OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837 ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_EnsureCapacity_mB6EB012362AA419CAA8BF0C488F1010486273A69_gshared (List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A* __this, int32_t ___0_min, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mB308EE5BFFD89A7B8C251644D76CA547456F3012_gshared_inline (List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A* __this, OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837 ___0_item, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m905EB6FD0B91CEE1CC0165F1EBB8C1309AEE4BEC_gshared_inline (List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_InsertRange_m9AA9E2C5627FB6CD9F3493CA8A99588EDA08125D_gshared (List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A* __this, int32_t ___0_index, RuntimeObject* ___1_collection, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_IndexOf_mFA6A5CD427374237339591ED8A5218B6E7EA7F4C_gshared (List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A* __this, OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837 ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_IsCompatibleObject_mA2F95E82C59734A475035EF3B9DD4BCE9F8429DB_gshared (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_m590D7926DA2B45C95850710F87644BCD235F1A70_gshared (List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A* __this, OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837 ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_CopyTo_m96F4BF1E6FF691338A44AAB62506964ACAD70715_gshared (List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A* __this, OrderBlockU5BU5D_tD67C39FB212889AFAAB991BE1AE144ED8D35EE88* ___0_array, int32_t ___1_arrayIndex, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Capacity_mC49015D45A78A39909C4541BDB84DAA369E6A4C1_gshared (List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_mCAD56839187542C3B25E2C1493BBD62861333E4E_gshared (Enumerator_t389EF10F90069ED924478E5694DFE1BB5CBCF251* __this, List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A* ___0_list, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_IndexOf_TisOrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837_m972A3CE5298A6193E512B34C64201444B051D8E9_gshared (OrderBlockU5BU5D_tD67C39FB212889AFAAB991BE1AE144ED8D35EE88* ___0_array, OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837 ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Insert_mF138D66498A5DE06E21A7149C35FA14729F4F5E1_gshared (List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A* __this, int32_t ___0_index, OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837 ___1_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_m30CC1D4CA1984DCAEDBCD2228B538A0503AF854A_gshared (List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_m02DCEAFFE826B31F80767A9D191CB4587D82F7BC_gshared (List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A* __this, OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837 ___0_item, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_m182E0ACAA85455151F5750CE87F942DA6E3DD3D6_gshared_inline (Predicate_1_t8194F57B81937B278B5EFEF0F5B667BBB054B0D0* __this, OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837 ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Reverse_m5903E8D5CE5B92A29530763E182314BDFA781664_gshared (List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A* __this, int32_t ___0_index, int32_t ___1_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Reverse_TisOrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837_mDCB49D07F30FD9D952124968159FDF346234BD04_gshared (OrderBlockU5BU5D_tD67C39FB212889AFAAB991BE1AE144ED8D35EE88* ___0_array, int32_t ___1_index, int32_t ___2_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_mEBED487B845A66E3298CA30654B7EC17F7481995_gshared (List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A* __this, int32_t ___0_index, int32_t ___1_count, RuntimeObject* ___2_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Sort_TisOrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837_m438D9EDDBF93A09C81E89458C2362F85487923EC_gshared (OrderBlockU5BU5D_tD67C39FB212889AFAAB991BE1AE144ED8D35EE88* ___0_array, int32_t ___1_index, int32_t ___2_length, RuntimeObject* ___3_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArraySortHelper_1_Sort_m4A8362BBA870329F45001F17310B50E583BFF19F_gshared (OrderBlockU5BU5D_tD67C39FB212889AFAAB991BE1AE144ED8D35EE88* ___0_keys, int32_t ___1_index, int32_t ___2_length, Comparison_1_tC8BBA462D5337723AC34773EEE343018753C7FF3* ___3_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddEnumerable_mDF2147E522AD80A7B6A79CF8E7F00EC7DBF8A032_gshared (List_1_tDB6FA8EDA7A26227B5CA100203EF7BAFA0FDBDDF* __this, RuntimeObject* ___0_enumerable, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC List_1_get_Item_mAAE7FBDBD94CC48BA01C01ACFC3C66EE219110D0_gshared (List_1_tDB6FA8EDA7A26227B5CA100203EF7BAFA0FDBDDF* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisSingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC_m85CB6FEF509A4859399929F09F545FA1133C3051_gshared (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Item_m58893707EC3B663186D1550A23DE96C818416CBD_gshared (List_1_tDB6FA8EDA7A26227B5CA100203EF7BAFA0FDBDDF* __this, int32_t ___0_index, SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void List_1_AddWithResize_m594A4155F206677F45ECD9AAE7E9EFD0AE6137ED_gshared (List_1_tDB6FA8EDA7A26227B5CA100203EF7BAFA0FDBDDF* __this, SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_EnsureCapacity_m1A140613D2D236E9CF413F81D549E39415DF0058_gshared (List_1_tDB6FA8EDA7A26227B5CA100203EF7BAFA0FDBDDF* __this, int32_t ___0_min, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m624C469B79ADC28E429B7A3CA96DA72345621643_gshared_inline (List_1_tDB6FA8EDA7A26227B5CA100203EF7BAFA0FDBDDF* __this, SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC ___0_item, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mF3540C84790DAB9D381F00753BA20A85694C3446_gshared_inline (List_1_tDB6FA8EDA7A26227B5CA100203EF7BAFA0FDBDDF* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_InsertRange_m8C743BAB2CDB84037FE830DF12A8B561EFEEEA60_gshared (List_1_tDB6FA8EDA7A26227B5CA100203EF7BAFA0FDBDDF* __this, int32_t ___0_index, RuntimeObject* ___1_collection, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_IndexOf_mF5A7DA78EA07100BDE8044CA37C505F36AD7ACB1_gshared (List_1_tDB6FA8EDA7A26227B5CA100203EF7BAFA0FDBDDF* __this, SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_IsCompatibleObject_mC9CB5EB21839923C050E6922FE7050867F374865_gshared (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_mA5832B215E464CAC8345E7ECC45562E884AE146D_gshared (List_1_tDB6FA8EDA7A26227B5CA100203EF7BAFA0FDBDDF* __this, SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_CopyTo_m15B9FC56E0418F730FC3A37C8E482F7108D73B62_gshared (List_1_tDB6FA8EDA7A26227B5CA100203EF7BAFA0FDBDDF* __this, SingleRangeU5BU5D_t9F938F2249733D85C4F97842A125778D69A843D6* ___0_array, int32_t ___1_arrayIndex, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Capacity_m40FE27C2AB4F6F5F863957210FA90C1BF581D293_gshared (List_1_tDB6FA8EDA7A26227B5CA100203EF7BAFA0FDBDDF* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m159144864209387AA18DEABE7B7985388F8F3452_gshared (Enumerator_t59E02176F2EE4E264A4750514AA127E2E21FF5D9* __this, List_1_tDB6FA8EDA7A26227B5CA100203EF7BAFA0FDBDDF* ___0_list, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_IndexOf_TisSingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC_m5A2EB67A073F2BFF5B3DCDDBD15D75BC3CFB909C_gshared (SingleRangeU5BU5D_t9F938F2249733D85C4F97842A125778D69A843D6* ___0_array, SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Insert_mC8E7189F3D9D95975CFE821AC3B560B2EA7AB7A8_gshared (List_1_tDB6FA8EDA7A26227B5CA100203EF7BAFA0FDBDDF* __this, int32_t ___0_index, SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC ___1_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_m911F1AFFA59FD181BA9363E0B6C8B5B95067EC3B_gshared (List_1_tDB6FA8EDA7A26227B5CA100203EF7BAFA0FDBDDF* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_mA8E72E7CFB72101AA88E01A84F746ECBD8E91B3F_gshared (List_1_tDB6FA8EDA7A26227B5CA100203EF7BAFA0FDBDDF* __this, SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC ___0_item, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_mADD6CFDE192E3E822D5296926054ED8A41DB09C4_gshared_inline (Predicate_1_t107748E0E0D2277266234EAF67AC068394C4351C* __this, SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Reverse_m6558ECB96638BF339DAB6BDB70413BA7570A84F9_gshared (List_1_tDB6FA8EDA7A26227B5CA100203EF7BAFA0FDBDDF* __this, int32_t ___0_index, int32_t ___1_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Reverse_TisSingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC_mD8F006C0A007C05BB69E417FA65A5A66965F997C_gshared (SingleRangeU5BU5D_t9F938F2249733D85C4F97842A125778D69A843D6* ___0_array, int32_t ___1_index, int32_t ___2_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_m4F48B52D720DB8E76904DB4647F7BDA63FDEC552_gshared (List_1_tDB6FA8EDA7A26227B5CA100203EF7BAFA0FDBDDF* __this, int32_t ___0_index, int32_t ___1_count, RuntimeObject* ___2_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Sort_TisSingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC_mE6A4B57DE0CB3DEC8371BDC3DAAAD29D6C9E3B2B_gshared (SingleRangeU5BU5D_t9F938F2249733D85C4F97842A125778D69A843D6* ___0_array, int32_t ___1_index, int32_t ___2_length, RuntimeObject* ___3_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArraySortHelper_1_Sort_m3182DABDA1EFACFF8268887837CA976A3577C3E6_gshared (SingleRangeU5BU5D_t9F938F2249733D85C4F97842A125778D69A843D6* ___0_keys, int32_t ___1_index, int32_t ___2_length, Comparison_1_tA6E38F9B8A5E125EC6515F9679C2079C747A0149* ___3_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddEnumerable_m0C19209F7F2E7D8F63F4AEDAB78FF7F76347ECFB_gshared (List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4* __this, RuntimeObject* ___0_enumerable, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44 List_1_get_Item_mE33CCA6A6D338BD1F44C8E35CE75806952CBF0CC_gshared (List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisWorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44_mB9D015C9FCBF6CD2BCA1E436743F0CC080CFC110_gshared (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Item_m47EF2DD78187A4AFDDBA8AFE5C2D83DE376C0A0A_gshared (List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4* __this, int32_t ___0_index, WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44 ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void List_1_AddWithResize_m45EC1E38A4A473EA779C21FBFEB2C0E39E4C7846_gshared (List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4* __this, WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44 ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_EnsureCapacity_mF38503ED9938B2CECF0B618845E9E32167654016_gshared (List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4* __this, int32_t ___0_min, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m4AF1A89B7FCCDFD5755D0C21A65347642A37B152_gshared_inline (List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4* __this, WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44 ___0_item, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m2F90A932E325FFA55047769F5E45E453D80C27D1_gshared_inline (List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_InsertRange_m13CC4FA54580EFF2DDFDDB9E830D9A383A0E4DCC_gshared (List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4* __this, int32_t ___0_index, RuntimeObject* ___1_collection, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_IndexOf_m48E7DF20C4C52830C219E189B9DAF4220941B7D1_gshared (List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4* __this, WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44 ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_IsCompatibleObject_m041D9A4962B238EF7BC9922EAF0F5FC8E6267EF6_gshared (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_m1303A79CAE668AD1204F2D7DF8D2DFCF9DDC6D0D_gshared (List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4* __this, WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44 ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_CopyTo_m0E03ED6DB864BF551838BF1B49786675D995A7E7_gshared (List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4* __this, WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577* ___0_array, int32_t ___1_arrayIndex, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Capacity_m060BDC309579AD262C87F876AC2A1E81D316472A_gshared (List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m67AC7635AF0AF22787100E7C16277521B24BF922_gshared (Enumerator_t7ECA23D5C1F4F41D95EEA8488F11D3D913089B4C* __this, List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4* ___0_list, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_IndexOf_TisWorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44_mD7FA52403DD62EA78B636E1A4E8119ABED32F37E_gshared (WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577* ___0_array, WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44 ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Insert_m3AA6C81C13315A0F1CD886CA63438F3FC55EFD70_gshared (List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4* __this, int32_t ___0_index, WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44 ___1_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_m7476D799F5CC07697D447853DA4DAEB4D3741B84_gshared (List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_mC74ED88927A060D6631231DB26A042412C32D85B_gshared (List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4* __this, WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44 ___0_item, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_m8D5A11CC70C8E6CD6EE4FD9D625B299AF1B8DCE7_gshared_inline (Predicate_1_t5A30DC3457D23124EDD16C06F92FCB77A9C8A8FD* __this, WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44 ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Reverse_mA82B743941194D34E26FD74ABCA431B3E5B9C2FF_gshared (List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4* __this, int32_t ___0_index, int32_t ___1_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Reverse_TisWorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44_m88E01FB6C608D58721AAECE3C58B2107CB926E3B_gshared (WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577* ___0_array, int32_t ___1_index, int32_t ___2_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_m740F84AD8B0226D65AE841BEA5DA739C69A29FAE_gshared (List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4* __this, int32_t ___0_index, int32_t ___1_count, RuntimeObject* ___2_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Sort_TisWorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44_m4974E84199207C342ABD5C3DDB83FB22A7831AF8_gshared (WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577* ___0_array, int32_t ___1_index, int32_t ___2_length, RuntimeObject* ___3_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArraySortHelper_1_Sort_mF8B226978F672DF67F415832E3FCC44027498627_gshared (WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577* ___0_keys, int32_t ___1_index, int32_t ___2_length, Comparison_1_t4349A0C0F6E57844038D08909A07D093BF8BBF87* ___3_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultComparer_1__ctor_m1FB334BED8F2ED543F453D87C912BDA6611F368E_gshared (DefaultComparer_1_tF1F3B8981298E50FBC17BDC8CA0B4CFE867AD644* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LowLevelDictionary_2__ctor_mB6B362C12FBFC3BDA4766411FDC767993214AFA2_gshared (LowLevelDictionary_2_t4C52985827C66ED86805FEED7556812E4207A114* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LowLevelDictionary_2_Clear_m7229E17DB8B64A5E367126DD076AA0577B2ED5A7_gshared (LowLevelDictionary_2_t4C52985827C66ED86805FEED7556812E4207A114* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Entry_t776AD7605FD3B32B33A463DA5E56809C57BFA1AB* LowLevelDictionary_2_Find_m9E8AF9DE397CFCC424FF17C0125FACDB261E3AEB_gshared (LowLevelDictionary_2_t4C52985827C66ED86805FEED7556812E4207A114* __this, int32_t ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Entry_t776AD7605FD3B32B33A463DA5E56809C57BFA1AB* LowLevelDictionary_2_UncheckedAdd_m4B36B6453ADD7712B323A995014660300EDFD5BB_gshared (LowLevelDictionary_2_t4C52985827C66ED86805FEED7556812E4207A114* __this, int32_t ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LowLevelDictionary_2_GetBucket_m31C0AA9C3A13F586A702DFDE7508A606E20B4A9B_gshared (LowLevelDictionary_2_t4C52985827C66ED86805FEED7556812E4207A114* __this, int32_t ___0_key, int32_t ___1_numBuckets, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Entry__ctor_m1523ABCDEBE31BA50D6801DB569FB6C6DA0EAB65_gshared (Entry_t776AD7605FD3B32B33A463DA5E56809C57BFA1AB* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LowLevelDictionary_2_ExpandBuckets_m033D9FFFD113915A8BD824AC730C492F01631A9A_gshared (LowLevelDictionary_2_t4C52985827C66ED86805FEED7556812E4207A114* __this, const RuntimeMethod* method) ;

IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_handle, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LazyHelper_CreateViaDefaultConstructor_mC75D2754BE1E99A66EDA7ACFFA8CD25649198777 (Type_t* ___0_type, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* __this, String_t* ___0_paramName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LazyHelper_t1784351780B2D1AC002869BB3C7A35AA64762602* LazyHelper_Create_m01DF07EC4B8E6F1EAC2C0D0B5498695B795AA335 (int32_t ___0_mode, bool ___1_useDefaultConstructor, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, String_t* ___0_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LazyHelper__ctor_mB372B9EDE4708D909090AA6ABFDDD1E6E426500A (LazyHelper_t1784351780B2D1AC002869BB3C7A35AA64762602* __this, int32_t ___0_mode, Exception_t* ___1_exception, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA (RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149 (RuntimeObject* ___0_obj, bool* ___1_lockTaken, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpinWait_SpinOnce_m5B74E6B15013E90667646C0D943E886D4EC596AF (SpinWait_t51CFFA8FF70F1B430E075F96CFD936260D8CE675* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t LazyHelper_get_State_m8EE9669E6DC61CC32EC9B8C29B006D83009971CD_inline (LazyHelper_t1784351780B2D1AC002869BB3C7A35AA64762602* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LazyHelper_ThrowException_mE49F09D8EA546B828AE5AA9C008152F79FB93221 (LazyHelper_t1784351780B2D1AC002869BB3C7A35AA64762602* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_tD9A4AFB06DB90AB3FAD2F61F0888AD20DC159BF1 LazyHelper_GetMode_m22C5EEBAF8970A588272D7AA5BA309C998E5F6C1 (LazyHelper_t1784351780B2D1AC002869BB3C7A35AA64762602* ___0_state, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LazyHelper_GetIsValueFaulted_m9DFC32520AA1B57F8FF21F80568A6343117DE148 (LazyHelper_t1784351780B2D1AC002869BB3C7A35AA64762602* ___0_state, const RuntimeMethod* method) ;
inline void ListBuilder_1__ctor_mFC129BE2CF658F37264E5AE87C38ACBE1686FC06 (ListBuilder_1_tCC8A75CAC31AC22CAA5DFE54A082DB3FA07EAD51* __this, int32_t ___0_capacity, const RuntimeMethod* method)
{
	((  void (*) (ListBuilder_1_tCC8A75CAC31AC22CAA5DFE54A082DB3FA07EAD51*, int32_t, const RuntimeMethod*))ListBuilder_1__ctor_mFC129BE2CF658F37264E5AE87C38ACBE1686FC06_gshared)(__this, ___0_capacity, method);
}
inline RuntimeObject* ListBuilder_1_get_Item_m23AA6DB4615BCE00F8A63C6152113822F0250EEE (ListBuilder_1_tCC8A75CAC31AC22CAA5DFE54A082DB3FA07EAD51* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (ListBuilder_1_tCC8A75CAC31AC22CAA5DFE54A082DB3FA07EAD51*, int32_t, const RuntimeMethod*))ListBuilder_1_get_Item_m23AA6DB4615BCE00F8A63C6152113822F0250EEE_gshared)(__this, ___0_index, method);
}
inline ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline (const RuntimeMethod* method)
{
	return ((  ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* (*) (const RuntimeMethod*))Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline)(method);
}
inline void Array_Resize_TisRuntimeObject_mE8D92C287251BAF8256D85E5829F749359EC334E (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918** ___0_array, int32_t ___1_newSize, const RuntimeMethod* method)
{
	((  void (*) (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918**, int32_t, const RuntimeMethod*))Array_Resize_TisRuntimeObject_mE8D92C287251BAF8256D85E5829F749359EC334E_gshared)(___0_array, ___1_newSize, method);
}
inline ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ListBuilder_1_ToArray_mADCCB17012F7FB8EE90E45E2CD13DBD2E71FE781 (ListBuilder_1_tCC8A75CAC31AC22CAA5DFE54A082DB3FA07EAD51* __this, const RuntimeMethod* method)
{
	return ((  ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* (*) (ListBuilder_1_tCC8A75CAC31AC22CAA5DFE54A082DB3FA07EAD51*, const RuntimeMethod*))ListBuilder_1_ToArray_mADCCB17012F7FB8EE90E45E2CD13DBD2E71FE781_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41 (RuntimeArray* ___0_sourceArray, int32_t ___1_sourceIndex, RuntimeArray* ___2_destinationArray, int32_t ___3_destinationIndex, int32_t ___4_length, const RuntimeMethod* method) ;
inline void ListBuilder_1_CopyTo_m07DD8110CA53CAE4B1C65F1E9A2AC9C074F14378 (ListBuilder_1_tCC8A75CAC31AC22CAA5DFE54A082DB3FA07EAD51* __this, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_array, int32_t ___1_index, const RuntimeMethod* method)
{
	((  void (*) (ListBuilder_1_tCC8A75CAC31AC22CAA5DFE54A082DB3FA07EAD51*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, int32_t, const RuntimeMethod*))ListBuilder_1_CopyTo_m07DD8110CA53CAE4B1C65F1E9A2AC9C074F14378_gshared)(__this, ___0_array, ___1_index, method);
}
inline int32_t ListBuilder_1_get_Count_m5FC923A60B6BCD6D28FA95B0495EF5E537266285_inline (ListBuilder_1_tCC8A75CAC31AC22CAA5DFE54A082DB3FA07EAD51* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ListBuilder_1_tCC8A75CAC31AC22CAA5DFE54A082DB3FA07EAD51*, const RuntimeMethod*))ListBuilder_1_get_Count_m5FC923A60B6BCD6D28FA95B0495EF5E537266285_gshared_inline)(__this, method);
}
inline void ListBuilder_1_Add_mC19811ACD1D830765599A1583F96C56D16A9E5AD (ListBuilder_1_tCC8A75CAC31AC22CAA5DFE54A082DB3FA07EAD51* __this, RuntimeObject* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (ListBuilder_1_tCC8A75CAC31AC22CAA5DFE54A082DB3FA07EAD51*, RuntimeObject*, const RuntimeMethod*))ListBuilder_1_Add_mC19811ACD1D830765599A1583F96C56D16A9E5AD_gshared)(__this, ___0_item, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F (int32_t ___0_argument, int32_t ___1_resource, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC (int32_t ___0_argument, const RuntimeMethod* method) ;
inline void List_1_AddEnumerable_m0D03C24E342A0F77A0042603E40AD506136B684F (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, RuntimeObject* ___0_enumerable, const RuntimeMethod* method)
{
	((  void (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, RuntimeObject*, const RuntimeMethod*))List_1_AddEnumerable_m0D03C24E342A0F77A0042603E40AD506136B684F_gshared)(__this, ___0_enumerable, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRange_IndexException_mC7661B8C6DD827679C95FC6B6C08F8724174936D (const RuntimeMethod* method) ;
inline int32_t List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, int32_t, const RuntimeMethod*))List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D_gshared)(__this, ___0_index, method);
}
inline void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m0F7A078274F301B83DFC51191B3AFC763DE9C4D0 (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method)
{
	((  void (*) (RuntimeObject*, int32_t, const RuntimeMethod*))ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m0F7A078274F301B83DFC51191B3AFC763DE9C4D0_gshared)(___0_value, ___1_argName, method);
}
inline void List_1_set_Item_m95629806F31CF369D937590912E0B6A53FF7C587 (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_index, int32_t ___1_value, const RuntimeMethod* method)
{
	((  void (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, int32_t, int32_t, const RuntimeMethod*))List_1_set_Item_m95629806F31CF369D937590912E0B6A53FF7C587_gshared)(__this, ___0_index, ___1_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910 (RuntimeObject* ___0_value, Type_t* ___1_targetType, const RuntimeMethod* method) ;
inline void List_1_AddWithResize_m378B392086AAB6F400944FA9839516326B3F7BB8 (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, int32_t, const RuntimeMethod*))List_1_AddWithResize_m378B392086AAB6F400944FA9839516326B3F7BB8_gshared)(__this, ___0_item, method);
}
inline void List_1_EnsureCapacity_m86DF3071CD67B1463C1CF26C7791331D70D431C0 (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_min, const RuntimeMethod* method)
{
	((  void (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, int32_t, const RuntimeMethod*))List_1_EnsureCapacity_m86DF3071CD67B1463C1CF26C7791331D70D431C0_gshared)(__this, ___0_min, method);
}
inline void List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, int32_t, const RuntimeMethod*))List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_gshared_inline)(__this, ___0_item, method);
}
inline int32_t List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, const RuntimeMethod*))List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_gshared_inline)(__this, method);
}
inline void List_1_InsertRange_m1D3DE2073A8946E2D1113677F2062F35881FA7B8 (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_index, RuntimeObject* ___1_collection, const RuntimeMethod* method)
{
	((  void (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, int32_t, RuntimeObject*, const RuntimeMethod*))List_1_InsertRange_m1D3DE2073A8946E2D1113677F2062F35881FA7B8_gshared)(__this, ___0_index, ___1_collection, method);
}
inline int32_t List_1_IndexOf_mC3D1A2CECAC0E3D42C78B43772E1BD3D0333C450 (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_item, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, int32_t, const RuntimeMethod*))List_1_IndexOf_mC3D1A2CECAC0E3D42C78B43772E1BD3D0333C450_gshared)(__this, ___0_item, method);
}
inline bool List_1_IsCompatibleObject_m0C506FD38C6F16AC8A7700817EF89401910F873C (RuntimeObject* ___0_value, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, const RuntimeMethod*))List_1_IsCompatibleObject_m0C506FD38C6F16AC8A7700817EF89401910F873C_gshared)(___0_value, method);
}
inline bool List_1_Contains_m4FD96E89F15844C90032C7386BAB528817F1FF5B (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_item, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, int32_t, const RuntimeMethod*))List_1_Contains_m4FD96E89F15844C90032C7386BAB528817F1FF5B_gshared)(__this, ___0_item, method);
}
inline void List_1_CopyTo_m030AAF730ACCF739D45671086EBF4786FED908D5 (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_array, int32_t ___1_arrayIndex, const RuntimeMethod* method)
{
	((  void (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*, int32_t, const RuntimeMethod*))List_1_CopyTo_m030AAF730ACCF739D45671086EBF4786FED908D5_gshared)(__this, ___0_array, ___1_arrayIndex, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F (RuntimeArray* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA (int32_t ___0_resource, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58 (const RuntimeMethod* method) ;
inline void List_1_set_Capacity_mA667E9DF466C9574AC22A4B0FE0E358D818505CC (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_value, const RuntimeMethod* method)
{
	((  void (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, int32_t, const RuntimeMethod*))List_1_set_Capacity_mA667E9DF466C9574AC22A4B0FE0E358D818505CC_gshared)(__this, ___0_value, method);
}
inline void Enumerator__ctor_mB5D11409C5765078140B3C3652FEF06536FDFA6B (Enumerator_t9DBCD072C72E44AB8959D9884EF7F528028F20EC* __this, List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___0_list, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t9DBCD072C72E44AB8959D9884EF7F528028F20EC*, List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, const RuntimeMethod*))Enumerator__ctor_mB5D11409C5765078140B3C3652FEF06536FDFA6B_gshared)(__this, ___0_list, method);
}
inline int32_t Array_IndexOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m22CB8CB6C30E1C3E70C8662D7A290B88EF5007F3 (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_array, int32_t ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*, int32_t, int32_t, int32_t, const RuntimeMethod*))Array_IndexOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m22CB8CB6C30E1C3E70C8662D7A290B88EF5007F3_gshared)(___0_array, ___1_value, ___2_startIndex, ___3_count, method);
}
inline void List_1_Insert_mC1B6D4E6CC94D8BA82A60B2F80CE9684D9345AAE (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_index, int32_t ___1_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, int32_t, int32_t, const RuntimeMethod*))List_1_Insert_mC1B6D4E6CC94D8BA82A60B2F80CE9684D9345AAE_gshared)(__this, ___0_index, ___1_item, method);
}
inline void List_1_RemoveAt_m76C4CDACF47BA529BAFADFC8D5E13DB9587F4004 (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	((  void (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, int32_t, const RuntimeMethod*))List_1_RemoveAt_m76C4CDACF47BA529BAFADFC8D5E13DB9587F4004_gshared)(__this, ___0_index, method);
}
inline bool List_1_Remove_m2B41E5B9E061DD4D5F58B693018024AADF2AD7F5 (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_item, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, int32_t, const RuntimeMethod*))List_1_Remove_m2B41E5B9E061DD4D5F58B693018024AADF2AD7F5_gshared)(__this, ___0_item, method);
}
inline bool Predicate_1_Invoke_mD16C664FFE93598D1C12AC86190D12B0F90B5419_inline (Predicate_1_t6CDE3111264F492F4F13277756366A07CA78A4C3* __this, int32_t ___0_obj, const RuntimeMethod* method)
{
	return ((  bool (*) (Predicate_1_t6CDE3111264F492F4F13277756366A07CA78A4C3*, int32_t, const RuntimeMethod*))Predicate_1_Invoke_mD16C664FFE93598D1C12AC86190D12B0F90B5419_gshared_inline)(__this, ___0_obj, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F (const RuntimeMethod* method) ;
inline void List_1_Reverse_mE0857BE335F36FD830B3A301AA7BF67F2F3C783F (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_index, int32_t ___1_count, const RuntimeMethod* method)
{
	((  void (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, int32_t, int32_t, const RuntimeMethod*))List_1_Reverse_mE0857BE335F36FD830B3A301AA7BF67F2F3C783F_gshared)(__this, ___0_index, ___1_count, method);
}
inline void Array_Reverse_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m57764BD8E3718881AE35094284EFDECEE528991D (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_array, int32_t ___1_index, int32_t ___2_length, const RuntimeMethod* method)
{
	((  void (*) (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*, int32_t, int32_t, const RuntimeMethod*))Array_Reverse_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m57764BD8E3718881AE35094284EFDECEE528991D_gshared)(___0_array, ___1_index, ___2_length, method);
}
inline void List_1_Sort_m3178B19CB7B6281DC7B995E4C5A6AD200EC6153B (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_index, int32_t ___1_count, RuntimeObject* ___2_comparer, const RuntimeMethod* method)
{
	((  void (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, int32_t, int32_t, RuntimeObject*, const RuntimeMethod*))List_1_Sort_m3178B19CB7B6281DC7B995E4C5A6AD200EC6153B_gshared)(__this, ___0_index, ___1_count, ___2_comparer, method);
}
inline void Array_Sort_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m6E0CF4C26182BB9D788C90ABE423C2F4CD145E41 (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_array, int32_t ___1_index, int32_t ___2_length, RuntimeObject* ___3_comparer, const RuntimeMethod* method)
{
	((  void (*) (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*, int32_t, int32_t, RuntimeObject*, const RuntimeMethod*))Array_Sort_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m6E0CF4C26182BB9D788C90ABE423C2F4CD145E41_gshared)(___0_array, ___1_index, ___2_length, ___3_comparer, method);
}
inline void ArraySortHelper_1_Sort_m7FA55FB83B1A81CF769D2928FCE3E06425DAC06B (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_keys, int32_t ___1_index, int32_t ___2_length, Comparison_1_tB7DE1436CB53924C2FC41FF926D074C1ACC14D89* ___3_comparer, const RuntimeMethod* method)
{
	((  void (*) (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*, int32_t, int32_t, Comparison_1_tB7DE1436CB53924C2FC41FF926D074C1ACC14D89*, const RuntimeMethod*))ArraySortHelper_1_Sort_m7FA55FB83B1A81CF769D2928FCE3E06425DAC06B_gshared)(___0_keys, ___1_index, ___2_length, ___3_comparer, method);
}
inline void List_1_AddEnumerable_m888E7562D4D5756B46E7DE52614832960DA81A0D (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* __this, RuntimeObject* ___0_enumerable, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576*, RuntimeObject*, const RuntimeMethod*))List_1_AddEnumerable_m888E7562D4D5756B46E7DE52614832960DA81A0D_gshared)(__this, ___0_enumerable, method);
}
inline int32_t List_1_get_Item_mDE2F02C693FD9EAA8F93873E407BC46C47ACFC7A (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576*, int32_t, const RuntimeMethod*))List_1_get_Item_mDE2F02C693FD9EAA8F93873E407BC46C47ACFC7A_gshared)(__this, ___0_index, method);
}
inline void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_mC3916E2A31C5FA9D0BB4E2A929F5225B4205042F (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method)
{
	((  void (*) (RuntimeObject*, int32_t, const RuntimeMethod*))ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_mC3916E2A31C5FA9D0BB4E2A929F5225B4205042F_gshared)(___0_value, ___1_argName, method);
}
inline void List_1_set_Item_mB4FCD891721B07472641D7000AAE93A9CABBAE5A (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* __this, int32_t ___0_index, int32_t ___1_value, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576*, int32_t, int32_t, const RuntimeMethod*))List_1_set_Item_mB4FCD891721B07472641D7000AAE93A9CABBAE5A_gshared)(__this, ___0_index, ___1_value, method);
}
inline void List_1_AddWithResize_mAD159B09F28BD7914562E219CA52E2D4BDCF5530 (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* __this, int32_t ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576*, int32_t, const RuntimeMethod*))List_1_AddWithResize_mAD159B09F28BD7914562E219CA52E2D4BDCF5530_gshared)(__this, ___0_item, method);
}
inline void List_1_EnsureCapacity_mE0139DA252869EB064FCEC6240A927BCE4945327 (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* __this, int32_t ___0_min, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576*, int32_t, const RuntimeMethod*))List_1_EnsureCapacity_mE0139DA252869EB064FCEC6240A927BCE4945327_gshared)(__this, ___0_min, method);
}
inline void List_1_Add_m809450298141D527D3A4FFAF77AE69D9B08CC17F_inline (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* __this, int32_t ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576*, int32_t, const RuntimeMethod*))List_1_Add_m809450298141D527D3A4FFAF77AE69D9B08CC17F_gshared_inline)(__this, ___0_item, method);
}
inline int32_t List_1_get_Count_m9080410FAF175EB3313FCE9515BA3A9D8E11718F_inline (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576*, const RuntimeMethod*))List_1_get_Count_m9080410FAF175EB3313FCE9515BA3A9D8E11718F_gshared_inline)(__this, method);
}
inline void List_1_InsertRange_m97B7B4D0EFFBE810751F8A48DA53CFB8B91B4A3B (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* __this, int32_t ___0_index, RuntimeObject* ___1_collection, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576*, int32_t, RuntimeObject*, const RuntimeMethod*))List_1_InsertRange_m97B7B4D0EFFBE810751F8A48DA53CFB8B91B4A3B_gshared)(__this, ___0_index, ___1_collection, method);
}
inline int32_t List_1_IndexOf_m4803410520A110B163A6B92857AEFA8FEE015752 (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* __this, int32_t ___0_item, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576*, int32_t, const RuntimeMethod*))List_1_IndexOf_m4803410520A110B163A6B92857AEFA8FEE015752_gshared)(__this, ___0_item, method);
}
inline bool List_1_IsCompatibleObject_m0889B00F24FBB309BEE1702FD3CB4C42AD832A39 (RuntimeObject* ___0_value, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, const RuntimeMethod*))List_1_IsCompatibleObject_m0889B00F24FBB309BEE1702FD3CB4C42AD832A39_gshared)(___0_value, method);
}
inline bool List_1_Contains_mF78C4E1EE072C25D5CDEB5057184058E94DF8634 (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* __this, int32_t ___0_item, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576*, int32_t, const RuntimeMethod*))List_1_Contains_mF78C4E1EE072C25D5CDEB5057184058E94DF8634_gshared)(__this, ___0_item, method);
}
inline void List_1_CopyTo_m839F5ADDC59B70CAC1B14D9841A524465A3BC9E5 (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* __this, Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* ___0_array, int32_t ___1_arrayIndex, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576*, Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F*, int32_t, const RuntimeMethod*))List_1_CopyTo_m839F5ADDC59B70CAC1B14D9841A524465A3BC9E5_gshared)(__this, ___0_array, ___1_arrayIndex, method);
}
inline void List_1_set_Capacity_m7ED78746E0AFEF2F59490B581943C977BE1A5479 (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* __this, int32_t ___0_value, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576*, int32_t, const RuntimeMethod*))List_1_set_Capacity_m7ED78746E0AFEF2F59490B581943C977BE1A5479_gshared)(__this, ___0_value, method);
}
inline void Enumerator__ctor_mC6E6B2337772FC83C59264783DAFF1D4CF9F023E (Enumerator_t6209EE23CCD16838DA331AC87789A15508C6C72B* __this, List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* ___0_list, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t6209EE23CCD16838DA331AC87789A15508C6C72B*, List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576*, const RuntimeMethod*))Enumerator__ctor_mC6E6B2337772FC83C59264783DAFF1D4CF9F023E_gshared)(__this, ___0_list, method);
}
inline int32_t Array_IndexOf_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_mA27917199B3C9E1A60C5791FB1B2AC5EB4C2103A (Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* ___0_array, int32_t ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F*, int32_t, int32_t, int32_t, const RuntimeMethod*))Array_IndexOf_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_mA27917199B3C9E1A60C5791FB1B2AC5EB4C2103A_gshared)(___0_array, ___1_value, ___2_startIndex, ___3_count, method);
}
inline void List_1_Insert_m1E433D24E9C67F0BA5D1ACF7708F97EF1DC4AE3D (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* __this, int32_t ___0_index, int32_t ___1_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576*, int32_t, int32_t, const RuntimeMethod*))List_1_Insert_m1E433D24E9C67F0BA5D1ACF7708F97EF1DC4AE3D_gshared)(__this, ___0_index, ___1_item, method);
}
inline void List_1_RemoveAt_mA0D34DB4A9D4C8FECCD3278530CEEB3147A19D54 (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576*, int32_t, const RuntimeMethod*))List_1_RemoveAt_mA0D34DB4A9D4C8FECCD3278530CEEB3147A19D54_gshared)(__this, ___0_index, method);
}
inline bool List_1_Remove_m4238AF38CE7EEE7C4C5C568B53D88116FB692B53 (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* __this, int32_t ___0_item, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576*, int32_t, const RuntimeMethod*))List_1_Remove_m4238AF38CE7EEE7C4C5C568B53D88116FB692B53_gshared)(__this, ___0_item, method);
}
inline bool Predicate_1_Invoke_m561B5F43F62B494CB43593312075556BAA567E0B_inline (Predicate_1_t5C52E5DEC72D8848A1024CF1E1E512DB092F800A* __this, int32_t ___0_obj, const RuntimeMethod* method)
{
	return ((  bool (*) (Predicate_1_t5C52E5DEC72D8848A1024CF1E1E512DB092F800A*, int32_t, const RuntimeMethod*))Predicate_1_Invoke_m561B5F43F62B494CB43593312075556BAA567E0B_gshared_inline)(__this, ___0_obj, method);
}
inline void List_1_Reverse_m7DE6AE4FAB338990D0A930D6CD525BA07B7E3CB4 (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* __this, int32_t ___0_index, int32_t ___1_count, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576*, int32_t, int32_t, const RuntimeMethod*))List_1_Reverse_m7DE6AE4FAB338990D0A930D6CD525BA07B7E3CB4_gshared)(__this, ___0_index, ___1_count, method);
}
inline void Array_Reverse_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_mBF0352521EE3186887C68DFC25905E29D1393515 (Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* ___0_array, int32_t ___1_index, int32_t ___2_length, const RuntimeMethod* method)
{
	((  void (*) (Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F*, int32_t, int32_t, const RuntimeMethod*))Array_Reverse_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_mBF0352521EE3186887C68DFC25905E29D1393515_gshared)(___0_array, ___1_index, ___2_length, method);
}
inline void List_1_Sort_m3EC8C34030BE04C522C1CBDB2E96DFAEDB2F011D (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* __this, int32_t ___0_index, int32_t ___1_count, RuntimeObject* ___2_comparer, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576*, int32_t, int32_t, RuntimeObject*, const RuntimeMethod*))List_1_Sort_m3EC8C34030BE04C522C1CBDB2E96DFAEDB2F011D_gshared)(__this, ___0_index, ___1_count, ___2_comparer, method);
}
inline void Array_Sort_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_m632FD913827035A385A987CEA4B0D30A6C1BB317 (Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* ___0_array, int32_t ___1_index, int32_t ___2_length, RuntimeObject* ___3_comparer, const RuntimeMethod* method)
{
	((  void (*) (Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F*, int32_t, int32_t, RuntimeObject*, const RuntimeMethod*))Array_Sort_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_m632FD913827035A385A987CEA4B0D30A6C1BB317_gshared)(___0_array, ___1_index, ___2_length, ___3_comparer, method);
}
inline void ArraySortHelper_1_Sort_m3FCF73F735AAA03BF7352EF6635F318F66177EB9 (Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* ___0_keys, int32_t ___1_index, int32_t ___2_length, Comparison_1_t867D3AA383F5B47704F3B33AF0917C4E98ABEBF1* ___3_comparer, const RuntimeMethod* method)
{
	((  void (*) (Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F*, int32_t, int32_t, Comparison_1_t867D3AA383F5B47704F3B33AF0917C4E98ABEBF1*, const RuntimeMethod*))ArraySortHelper_1_Sort_m3FCF73F735AAA03BF7352EF6635F318F66177EB9_gshared)(___0_keys, ___1_index, ___2_length, ___3_comparer, method);
}
inline void List_1_AddEnumerable_m76C85811BC9C905E7224C054AD480C3062FA7700 (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_enumerable, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))List_1_AddEnumerable_m76C85811BC9C905E7224C054AD480C3062FA7700_gshared)(__this, ___0_enumerable, method);
}
inline RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38 (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___0_index, method);
}
inline void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisRuntimeObject_m27E41ACCEE817CDFBB9616ED62F233A4EA0D8A49 (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method)
{
	((  void (*) (RuntimeObject*, int32_t, const RuntimeMethod*))ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisRuntimeObject_m27E41ACCEE817CDFBB9616ED62F233A4EA0D8A49_gshared)(___0_value, ___1_argName, method);
}
inline void List_1_set_Item_m3C58DBC69A321AF2826595584FF3E9F43C07EA56 (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___0_index, RuntimeObject* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, int32_t, RuntimeObject*, const RuntimeMethod*))List_1_set_Item_m3C58DBC69A321AF2826595584FF3E9F43C07EA56_gshared)(__this, ___0_index, ___1_value, method);
}
inline void List_1_AddWithResize_m79A9BF770BEF9C06BE40D5401E55E375F2726CC4 (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))List_1_AddWithResize_m79A9BF770BEF9C06BE40D5401E55E375F2726CC4_gshared)(__this, ___0_item, method);
}
inline void List_1_EnsureCapacity_m6511331DC6EE293A9C3CED45A7079E09128EFA2D (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___0_min, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, int32_t, const RuntimeMethod*))List_1_EnsureCapacity_m6511331DC6EE293A9C3CED45A7079E09128EFA2D_gshared)(__this, ___0_min, method);
}
inline void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___0_item, method);
}
inline int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
inline void List_1_InsertRange_m386ABA9B2C4950D31E787C87CDEF3D3E103F1B1A (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___0_index, RuntimeObject* ___1_collection, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, int32_t, RuntimeObject*, const RuntimeMethod*))List_1_InsertRange_m386ABA9B2C4950D31E787C87CDEF3D3E103F1B1A_gshared)(__this, ___0_index, ___1_collection, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB (RuntimeArray* ___0_array, int32_t ___1_index, int32_t ___2_length, const RuntimeMethod* method) ;
inline int32_t List_1_IndexOf_m378F61BA812B79DEE58D86FE8AA9F20E3FC7D85F (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))List_1_IndexOf_m378F61BA812B79DEE58D86FE8AA9F20E3FC7D85F_gshared)(__this, ___0_item, method);
}
inline bool List_1_IsCompatibleObject_m639E8AB2F97E9764343E7A58C0C7297E11FB1F37 (RuntimeObject* ___0_value, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, const RuntimeMethod*))List_1_IsCompatibleObject_m639E8AB2F97E9764343E7A58C0C7297E11FB1F37_gshared)(___0_value, method);
}
inline bool List_1_Contains_m4C9139C2A6B23E9343D3F87807B32C6E2CFE660D (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))List_1_Contains_m4C9139C2A6B23E9343D3F87807B32C6E2CFE660D_gshared)(__this, ___0_item, method);
}
inline void List_1_CopyTo_m1210D480F3EF1C250A53086148C1204B7A99B931 (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_array, int32_t ___1_arrayIndex, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, int32_t, const RuntimeMethod*))List_1_CopyTo_m1210D480F3EF1C250A53086148C1204B7A99B931_gshared)(__this, ___0_array, ___1_arrayIndex, method);
}
inline void List_1_set_Capacity_mD826E33A9E5EBC19C714653217071790693E0B95 (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___0_value, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, int32_t, const RuntimeMethod*))List_1_set_Capacity_mD826E33A9E5EBC19C714653217071790693E0B95_gshared)(__this, ___0_value, method);
}
inline void Enumerator__ctor_m540236388ED02DCFB606983FBE3A7C536408505E (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ___0_list, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A*, List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, const RuntimeMethod*))Enumerator__ctor_m540236388ED02DCFB606983FBE3A7C536408505E_gshared)(__this, ___0_list, method);
}
inline int32_t Array_IndexOf_TisRuntimeObject_m4C0C698B1D627E6B3C3BE6DDA512E8E276DC6F73 (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_array, RuntimeObject* ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, RuntimeObject*, int32_t, int32_t, const RuntimeMethod*))Array_IndexOf_TisRuntimeObject_m4C0C698B1D627E6B3C3BE6DDA512E8E276DC6F73_gshared)(___0_array, ___1_value, ___2_startIndex, ___3_count, method);
}
inline void List_1_Insert_m9C9559248941FED50561DB029D55DF08DEF3B094 (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___0_index, RuntimeObject* ___1_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, int32_t, RuntimeObject*, const RuntimeMethod*))List_1_Insert_m9C9559248941FED50561DB029D55DF08DEF3B094_gshared)(__this, ___0_index, ___1_item, method);
}
inline void List_1_RemoveAt_m54F62297ADEE4D4FDA697F49ED807BF901201B54 (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, int32_t, const RuntimeMethod*))List_1_RemoveAt_m54F62297ADEE4D4FDA697F49ED807BF901201B54_gshared)(__this, ___0_index, method);
}
inline bool List_1_Remove_m4DFA48F4CEB9169601E75FC28517C5C06EFA5AD7 (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))List_1_Remove_m4DFA48F4CEB9169601E75FC28517C5C06EFA5AD7_gshared)(__this, ___0_item, method);
}
inline bool Predicate_1_Invoke_m6AC449189DCEE89A4FA2A2B724DE296A1DFB6A9B_inline (Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method)
{
	return ((  bool (*) (Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12*, RuntimeObject*, const RuntimeMethod*))Predicate_1_Invoke_m6AC449189DCEE89A4FA2A2B724DE296A1DFB6A9B_gshared_inline)(__this, ___0_obj, method);
}
inline void List_1_Reverse_mA271B5B013C60CD038FA95C13BB2B5F09168D920 (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___0_index, int32_t ___1_count, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, int32_t, int32_t, const RuntimeMethod*))List_1_Reverse_mA271B5B013C60CD038FA95C13BB2B5F09168D920_gshared)(__this, ___0_index, ___1_count, method);
}
inline void Array_Reverse_TisRuntimeObject_m06FF2E5011A594BEE1AF5EC3AEA51997A9812FE1 (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_array, int32_t ___1_index, int32_t ___2_length, const RuntimeMethod* method)
{
	((  void (*) (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, int32_t, int32_t, const RuntimeMethod*))Array_Reverse_TisRuntimeObject_m06FF2E5011A594BEE1AF5EC3AEA51997A9812FE1_gshared)(___0_array, ___1_index, ___2_length, method);
}
inline void List_1_Sort_mC96F92ACF35F9B37F0A5E3338FF61E5229554338 (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___0_index, int32_t ___1_count, RuntimeObject* ___2_comparer, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, int32_t, int32_t, RuntimeObject*, const RuntimeMethod*))List_1_Sort_mC96F92ACF35F9B37F0A5E3338FF61E5229554338_gshared)(__this, ___0_index, ___1_count, ___2_comparer, method);
}
inline void Array_Sort_TisRuntimeObject_mF8C07FB088390BE91CF3D4F9C8C4AC052B3FBCBA (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_array, int32_t ___1_index, int32_t ___2_length, RuntimeObject* ___3_comparer, const RuntimeMethod* method)
{
	((  void (*) (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, int32_t, int32_t, RuntimeObject*, const RuntimeMethod*))Array_Sort_TisRuntimeObject_mF8C07FB088390BE91CF3D4F9C8C4AC052B3FBCBA_gshared)(___0_array, ___1_index, ___2_length, ___3_comparer, method);
}
inline void ArraySortHelper_1_Sort_m1D1E1B0D0C13AF3B0C1B76665039738BFFE3125A (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_keys, int32_t ___1_index, int32_t ___2_length, Comparison_1_t62E531E7B8260E2C6C2718C3BDB8CF8655139645* ___3_comparer, const RuntimeMethod* method)
{
	((  void (*) (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, int32_t, int32_t, Comparison_1_t62E531E7B8260E2C6C2718C3BDB8CF8655139645*, const RuntimeMethod*))ArraySortHelper_1_Sort_m1D1E1B0D0C13AF3B0C1B76665039738BFFE3125A_gshared)(___0_keys, ___1_index, ___2_length, ___3_comparer, method);
}
inline void List_1_AddEnumerable_mE834F3621B1EA7B6549A506B2D60FD27F7248506 (List_1_t9DE980811C648CE80197045689D21D2B224E7912* __this, RuntimeObject* ___0_enumerable, const RuntimeMethod* method)
{
	((  void (*) (List_1_t9DE980811C648CE80197045689D21D2B224E7912*, RuntimeObject*, const RuntimeMethod*))List_1_AddEnumerable_mE834F3621B1EA7B6549A506B2D60FD27F7248506_gshared)(__this, ___0_enumerable, method);
}
inline Point_t4F128496D336DF7AA8817608D59E72CEF8DBFB93 List_1_get_Item_m4D4923E3A23B111BC2E6FABB865C91638166A891 (List_1_t9DE980811C648CE80197045689D21D2B224E7912* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  Point_t4F128496D336DF7AA8817608D59E72CEF8DBFB93 (*) (List_1_t9DE980811C648CE80197045689D21D2B224E7912*, int32_t, const RuntimeMethod*))List_1_get_Item_m4D4923E3A23B111BC2E6FABB865C91638166A891_gshared)(__this, ___0_index, method);
}
inline void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisPoint_t4F128496D336DF7AA8817608D59E72CEF8DBFB93_m8FD32CB6A04C1A5DC1DA562CAA2B98231B06883C (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method)
{
	((  void (*) (RuntimeObject*, int32_t, const RuntimeMethod*))ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisPoint_t4F128496D336DF7AA8817608D59E72CEF8DBFB93_m8FD32CB6A04C1A5DC1DA562CAA2B98231B06883C_gshared)(___0_value, ___1_argName, method);
}
inline void List_1_set_Item_m228441ED10A0F16FC4CD03E339F4EC612F54ED48 (List_1_t9DE980811C648CE80197045689D21D2B224E7912* __this, int32_t ___0_index, Point_t4F128496D336DF7AA8817608D59E72CEF8DBFB93 ___1_value, const RuntimeMethod* method)
{
	((  void (*) (List_1_t9DE980811C648CE80197045689D21D2B224E7912*, int32_t, Point_t4F128496D336DF7AA8817608D59E72CEF8DBFB93, const RuntimeMethod*))List_1_set_Item_m228441ED10A0F16FC4CD03E339F4EC612F54ED48_gshared)(__this, ___0_index, ___1_value, method);
}
inline void List_1_AddWithResize_mEE6F2A13EA6E4345FD10BD84686C624C931BDB94 (List_1_t9DE980811C648CE80197045689D21D2B224E7912* __this, Point_t4F128496D336DF7AA8817608D59E72CEF8DBFB93 ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t9DE980811C648CE80197045689D21D2B224E7912*, Point_t4F128496D336DF7AA8817608D59E72CEF8DBFB93, const RuntimeMethod*))List_1_AddWithResize_mEE6F2A13EA6E4345FD10BD84686C624C931BDB94_gshared)(__this, ___0_item, method);
}
inline void List_1_EnsureCapacity_m1202F62418DD326A020DA1D5D72D0D4BE9140C5A (List_1_t9DE980811C648CE80197045689D21D2B224E7912* __this, int32_t ___0_min, const RuntimeMethod* method)
{
	((  void (*) (List_1_t9DE980811C648CE80197045689D21D2B224E7912*, int32_t, const RuntimeMethod*))List_1_EnsureCapacity_m1202F62418DD326A020DA1D5D72D0D4BE9140C5A_gshared)(__this, ___0_min, method);
}
inline void List_1_Add_m93D11AF4102DBFC260157991485B7F81A0FC4638_inline (List_1_t9DE980811C648CE80197045689D21D2B224E7912* __this, Point_t4F128496D336DF7AA8817608D59E72CEF8DBFB93 ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t9DE980811C648CE80197045689D21D2B224E7912*, Point_t4F128496D336DF7AA8817608D59E72CEF8DBFB93, const RuntimeMethod*))List_1_Add_m93D11AF4102DBFC260157991485B7F81A0FC4638_gshared_inline)(__this, ___0_item, method);
}
inline int32_t List_1_get_Count_m364C36D74BA0E74DAF87657A16515729C25460BB_inline (List_1_t9DE980811C648CE80197045689D21D2B224E7912* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t9DE980811C648CE80197045689D21D2B224E7912*, const RuntimeMethod*))List_1_get_Count_m364C36D74BA0E74DAF87657A16515729C25460BB_gshared_inline)(__this, method);
}
inline void List_1_InsertRange_m99B1E6B14294658B0935934081534F6185F1DA95 (List_1_t9DE980811C648CE80197045689D21D2B224E7912* __this, int32_t ___0_index, RuntimeObject* ___1_collection, const RuntimeMethod* method)
{
	((  void (*) (List_1_t9DE980811C648CE80197045689D21D2B224E7912*, int32_t, RuntimeObject*, const RuntimeMethod*))List_1_InsertRange_m99B1E6B14294658B0935934081534F6185F1DA95_gshared)(__this, ___0_index, ___1_collection, method);
}
inline int32_t List_1_IndexOf_m91D5B6F90EA38F65A448D280A5EA79A2EA22681B (List_1_t9DE980811C648CE80197045689D21D2B224E7912* __this, Point_t4F128496D336DF7AA8817608D59E72CEF8DBFB93 ___0_item, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t9DE980811C648CE80197045689D21D2B224E7912*, Point_t4F128496D336DF7AA8817608D59E72CEF8DBFB93, const RuntimeMethod*))List_1_IndexOf_m91D5B6F90EA38F65A448D280A5EA79A2EA22681B_gshared)(__this, ___0_item, method);
}
inline bool List_1_IsCompatibleObject_m19E8DD3F75663CAFDC2D894F001336F8556A6C17 (RuntimeObject* ___0_value, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, const RuntimeMethod*))List_1_IsCompatibleObject_m19E8DD3F75663CAFDC2D894F001336F8556A6C17_gshared)(___0_value, method);
}
inline bool List_1_Contains_m12C7BFF98397C515061AEE55D00FD5A34795EEE1 (List_1_t9DE980811C648CE80197045689D21D2B224E7912* __this, Point_t4F128496D336DF7AA8817608D59E72CEF8DBFB93 ___0_item, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t9DE980811C648CE80197045689D21D2B224E7912*, Point_t4F128496D336DF7AA8817608D59E72CEF8DBFB93, const RuntimeMethod*))List_1_Contains_m12C7BFF98397C515061AEE55D00FD5A34795EEE1_gshared)(__this, ___0_item, method);
}
inline void List_1_CopyTo_mD50378B7410606B61959E4C9F2063BCFA05AFE90 (List_1_t9DE980811C648CE80197045689D21D2B224E7912* __this, PointU5BU5D_tBF08949C6A5139156312E05FFEBA360828D28F4C* ___0_array, int32_t ___1_arrayIndex, const RuntimeMethod* method)
{
	((  void (*) (List_1_t9DE980811C648CE80197045689D21D2B224E7912*, PointU5BU5D_tBF08949C6A5139156312E05FFEBA360828D28F4C*, int32_t, const RuntimeMethod*))List_1_CopyTo_mD50378B7410606B61959E4C9F2063BCFA05AFE90_gshared)(__this, ___0_array, ___1_arrayIndex, method);
}
inline void List_1_set_Capacity_m02D651F831E3F15525B0EBC98CEEA8D6FAD9B0A2 (List_1_t9DE980811C648CE80197045689D21D2B224E7912* __this, int32_t ___0_value, const RuntimeMethod* method)
{
	((  void (*) (List_1_t9DE980811C648CE80197045689D21D2B224E7912*, int32_t, const RuntimeMethod*))List_1_set_Capacity_m02D651F831E3F15525B0EBC98CEEA8D6FAD9B0A2_gshared)(__this, ___0_value, method);
}
inline void Enumerator__ctor_m5F624EC47E8EC578E3EDCA29E809E19E200671B2 (Enumerator_t9A06AD03886B23E647554089873705961E2BA463* __this, List_1_t9DE980811C648CE80197045689D21D2B224E7912* ___0_list, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t9A06AD03886B23E647554089873705961E2BA463*, List_1_t9DE980811C648CE80197045689D21D2B224E7912*, const RuntimeMethod*))Enumerator__ctor_m5F624EC47E8EC578E3EDCA29E809E19E200671B2_gshared)(__this, ___0_list, method);
}
inline int32_t Array_IndexOf_TisPoint_t4F128496D336DF7AA8817608D59E72CEF8DBFB93_mAC380450B02FA206203D148FCCE10A79FEA2A617 (PointU5BU5D_tBF08949C6A5139156312E05FFEBA360828D28F4C* ___0_array, Point_t4F128496D336DF7AA8817608D59E72CEF8DBFB93 ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method)
{
	return ((  int32_t (*) (PointU5BU5D_tBF08949C6A5139156312E05FFEBA360828D28F4C*, Point_t4F128496D336DF7AA8817608D59E72CEF8DBFB93, int32_t, int32_t, const RuntimeMethod*))Array_IndexOf_TisPoint_t4F128496D336DF7AA8817608D59E72CEF8DBFB93_mAC380450B02FA206203D148FCCE10A79FEA2A617_gshared)(___0_array, ___1_value, ___2_startIndex, ___3_count, method);
}
inline void List_1_Insert_mCC981526E88E4C8151FDDE1B7E7ED767032F42C6 (List_1_t9DE980811C648CE80197045689D21D2B224E7912* __this, int32_t ___0_index, Point_t4F128496D336DF7AA8817608D59E72CEF8DBFB93 ___1_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t9DE980811C648CE80197045689D21D2B224E7912*, int32_t, Point_t4F128496D336DF7AA8817608D59E72CEF8DBFB93, const RuntimeMethod*))List_1_Insert_mCC981526E88E4C8151FDDE1B7E7ED767032F42C6_gshared)(__this, ___0_index, ___1_item, method);
}
inline void List_1_RemoveAt_m31B75770058276E7F7A2469C915AFC7D198DAB8E (List_1_t9DE980811C648CE80197045689D21D2B224E7912* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	((  void (*) (List_1_t9DE980811C648CE80197045689D21D2B224E7912*, int32_t, const RuntimeMethod*))List_1_RemoveAt_m31B75770058276E7F7A2469C915AFC7D198DAB8E_gshared)(__this, ___0_index, method);
}
inline bool List_1_Remove_m6244881C5C9292C52D9A59D52244849F5586D168 (List_1_t9DE980811C648CE80197045689D21D2B224E7912* __this, Point_t4F128496D336DF7AA8817608D59E72CEF8DBFB93 ___0_item, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t9DE980811C648CE80197045689D21D2B224E7912*, Point_t4F128496D336DF7AA8817608D59E72CEF8DBFB93, const RuntimeMethod*))List_1_Remove_m6244881C5C9292C52D9A59D52244849F5586D168_gshared)(__this, ___0_item, method);
}
inline bool Predicate_1_Invoke_m6A70A7AB2F00E03E6030B95A9BCB53868C27EA94_inline (Predicate_1_t2812BD9A4B34C2F0C29CD9C263856BAE4515A201* __this, Point_t4F128496D336DF7AA8817608D59E72CEF8DBFB93 ___0_obj, const RuntimeMethod* method)
{
	return ((  bool (*) (Predicate_1_t2812BD9A4B34C2F0C29CD9C263856BAE4515A201*, Point_t4F128496D336DF7AA8817608D59E72CEF8DBFB93, const RuntimeMethod*))Predicate_1_Invoke_m6A70A7AB2F00E03E6030B95A9BCB53868C27EA94_gshared_inline)(__this, ___0_obj, method);
}
inline void List_1_Reverse_m75DC066BD9CD4A3DE3163C33B470654E9D701FCB (List_1_t9DE980811C648CE80197045689D21D2B224E7912* __this, int32_t ___0_index, int32_t ___1_count, const RuntimeMethod* method)
{
	((  void (*) (List_1_t9DE980811C648CE80197045689D21D2B224E7912*, int32_t, int32_t, const RuntimeMethod*))List_1_Reverse_m75DC066BD9CD4A3DE3163C33B470654E9D701FCB_gshared)(__this, ___0_index, ___1_count, method);
}
inline void Array_Reverse_TisPoint_t4F128496D336DF7AA8817608D59E72CEF8DBFB93_mD7826DB700877B08F3FE60F9B0F52BEFB582B6D2 (PointU5BU5D_tBF08949C6A5139156312E05FFEBA360828D28F4C* ___0_array, int32_t ___1_index, int32_t ___2_length, const RuntimeMethod* method)
{
	((  void (*) (PointU5BU5D_tBF08949C6A5139156312E05FFEBA360828D28F4C*, int32_t, int32_t, const RuntimeMethod*))Array_Reverse_TisPoint_t4F128496D336DF7AA8817608D59E72CEF8DBFB93_mD7826DB700877B08F3FE60F9B0F52BEFB582B6D2_gshared)(___0_array, ___1_index, ___2_length, method);
}
inline void List_1_Sort_mD97B24AEB8B9B57CF9B48586C03D3EFF0C696761 (List_1_t9DE980811C648CE80197045689D21D2B224E7912* __this, int32_t ___0_index, int32_t ___1_count, RuntimeObject* ___2_comparer, const RuntimeMethod* method)
{
	((  void (*) (List_1_t9DE980811C648CE80197045689D21D2B224E7912*, int32_t, int32_t, RuntimeObject*, const RuntimeMethod*))List_1_Sort_mD97B24AEB8B9B57CF9B48586C03D3EFF0C696761_gshared)(__this, ___0_index, ___1_count, ___2_comparer, method);
}
inline void Array_Sort_TisPoint_t4F128496D336DF7AA8817608D59E72CEF8DBFB93_m8762D6FA1ED65D5B1FAB23E3DFEFC5094D89A936 (PointU5BU5D_tBF08949C6A5139156312E05FFEBA360828D28F4C* ___0_array, int32_t ___1_index, int32_t ___2_length, RuntimeObject* ___3_comparer, const RuntimeMethod* method)
{
	((  void (*) (PointU5BU5D_tBF08949C6A5139156312E05FFEBA360828D28F4C*, int32_t, int32_t, RuntimeObject*, const RuntimeMethod*))Array_Sort_TisPoint_t4F128496D336DF7AA8817608D59E72CEF8DBFB93_m8762D6FA1ED65D5B1FAB23E3DFEFC5094D89A936_gshared)(___0_array, ___1_index, ___2_length, ___3_comparer, method);
}
inline void ArraySortHelper_1_Sort_m7934C083F94A9EA6DFD9B4D906DE3824CA60A1DB (PointU5BU5D_tBF08949C6A5139156312E05FFEBA360828D28F4C* ___0_keys, int32_t ___1_index, int32_t ___2_length, Comparison_1_t8FE3B8B0EC0CE87398BAC28B7E01309E4ED10BB7* ___3_comparer, const RuntimeMethod* method)
{
	((  void (*) (PointU5BU5D_tBF08949C6A5139156312E05FFEBA360828D28F4C*, int32_t, int32_t, Comparison_1_t8FE3B8B0EC0CE87398BAC28B7E01309E4ED10BB7*, const RuntimeMethod*))ArraySortHelper_1_Sort_m7934C083F94A9EA6DFD9B4D906DE3824CA60A1DB_gshared)(___0_keys, ___1_index, ___2_length, ___3_comparer, method);
}
inline void List_1_AddEnumerable_m2BA55CF15440AD2516DBDA77E5CA579B25D39652 (List_1_t2EF0515F9247C0F480F55BF3E296366A47CB0324* __this, RuntimeObject* ___0_enumerable, const RuntimeMethod* method)
{
	((  void (*) (List_1_t2EF0515F9247C0F480F55BF3E296366A47CB0324*, RuntimeObject*, const RuntimeMethod*))List_1_AddEnumerable_m2BA55CF15440AD2516DBDA77E5CA579B25D39652_gshared)(__this, ___0_enumerable, method);
}
inline RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA List_1_get_Item_m736DF34FA0A6E6F67F52538DD7A3E4520A7C17E2 (List_1_t2EF0515F9247C0F480F55BF3E296366A47CB0324* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA (*) (List_1_t2EF0515F9247C0F480F55BF3E296366A47CB0324*, int32_t, const RuntimeMethod*))List_1_get_Item_m736DF34FA0A6E6F67F52538DD7A3E4520A7C17E2_gshared)(__this, ___0_index, method);
}
inline void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisRaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA_m423E18B4B0D7C4E77584B631E7ED05E294ABC9C3 (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method)
{
	((  void (*) (RuntimeObject*, int32_t, const RuntimeMethod*))ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisRaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA_m423E18B4B0D7C4E77584B631E7ED05E294ABC9C3_gshared)(___0_value, ___1_argName, method);
}
inline void List_1_set_Item_m515A4F4FB1523A25CC41520F40209D429E5D613B (List_1_t2EF0515F9247C0F480F55BF3E296366A47CB0324* __this, int32_t ___0_index, RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA ___1_value, const RuntimeMethod* method)
{
	((  void (*) (List_1_t2EF0515F9247C0F480F55BF3E296366A47CB0324*, int32_t, RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA, const RuntimeMethod*))List_1_set_Item_m515A4F4FB1523A25CC41520F40209D429E5D613B_gshared)(__this, ___0_index, ___1_value, method);
}
inline void List_1_AddWithResize_mA220A208EC71F5CD6865F6C2B7D5F053282001A4 (List_1_t2EF0515F9247C0F480F55BF3E296366A47CB0324* __this, RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t2EF0515F9247C0F480F55BF3E296366A47CB0324*, RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA, const RuntimeMethod*))List_1_AddWithResize_mA220A208EC71F5CD6865F6C2B7D5F053282001A4_gshared)(__this, ___0_item, method);
}
inline void List_1_EnsureCapacity_mFD43C6DA3C0D8C8166CE226F24405E180BB60F66 (List_1_t2EF0515F9247C0F480F55BF3E296366A47CB0324* __this, int32_t ___0_min, const RuntimeMethod* method)
{
	((  void (*) (List_1_t2EF0515F9247C0F480F55BF3E296366A47CB0324*, int32_t, const RuntimeMethod*))List_1_EnsureCapacity_mFD43C6DA3C0D8C8166CE226F24405E180BB60F66_gshared)(__this, ___0_min, method);
}
inline void List_1_Add_m28DCD73896A7493A6DD85C89A5959213159327C0_inline (List_1_t2EF0515F9247C0F480F55BF3E296366A47CB0324* __this, RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t2EF0515F9247C0F480F55BF3E296366A47CB0324*, RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA, const RuntimeMethod*))List_1_Add_m28DCD73896A7493A6DD85C89A5959213159327C0_gshared_inline)(__this, ___0_item, method);
}
inline int32_t List_1_get_Count_m9DF5F004FF70828FB56F22C81485C8A57B3192DB_inline (List_1_t2EF0515F9247C0F480F55BF3E296366A47CB0324* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t2EF0515F9247C0F480F55BF3E296366A47CB0324*, const RuntimeMethod*))List_1_get_Count_m9DF5F004FF70828FB56F22C81485C8A57B3192DB_gshared_inline)(__this, method);
}
inline void List_1_InsertRange_m64602CE8EF27023E7A55807CF1666F5CD7B5DA76 (List_1_t2EF0515F9247C0F480F55BF3E296366A47CB0324* __this, int32_t ___0_index, RuntimeObject* ___1_collection, const RuntimeMethod* method)
{
	((  void (*) (List_1_t2EF0515F9247C0F480F55BF3E296366A47CB0324*, int32_t, RuntimeObject*, const RuntimeMethod*))List_1_InsertRange_m64602CE8EF27023E7A55807CF1666F5CD7B5DA76_gshared)(__this, ___0_index, ___1_collection, method);
}
inline int32_t List_1_IndexOf_mDC4BA95D32618C596400042A0B46F04E3828D7A7 (List_1_t2EF0515F9247C0F480F55BF3E296366A47CB0324* __this, RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA ___0_item, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t2EF0515F9247C0F480F55BF3E296366A47CB0324*, RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA, const RuntimeMethod*))List_1_IndexOf_mDC4BA95D32618C596400042A0B46F04E3828D7A7_gshared)(__this, ___0_item, method);
}
inline bool List_1_IsCompatibleObject_m0BB832DA7A39AF98E7AA03F4F6A1BC8C48CADB5B (RuntimeObject* ___0_value, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, const RuntimeMethod*))List_1_IsCompatibleObject_m0BB832DA7A39AF98E7AA03F4F6A1BC8C48CADB5B_gshared)(___0_value, method);
}
inline bool List_1_Contains_m90D5BCA1A90104B521E1A0F834FD2B3C7BCF930A (List_1_t2EF0515F9247C0F480F55BF3E296366A47CB0324* __this, RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA ___0_item, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t2EF0515F9247C0F480F55BF3E296366A47CB0324*, RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA, const RuntimeMethod*))List_1_Contains_m90D5BCA1A90104B521E1A0F834FD2B3C7BCF930A_gshared)(__this, ___0_item, method);
}
inline void List_1_CopyTo_m1E8F62C9D745EF1AA0B7967FEBB52DF1D3826CC6 (List_1_t2EF0515F9247C0F480F55BF3E296366A47CB0324* __this, RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7* ___0_array, int32_t ___1_arrayIndex, const RuntimeMethod* method)
{
	((  void (*) (List_1_t2EF0515F9247C0F480F55BF3E296366A47CB0324*, RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7*, int32_t, const RuntimeMethod*))List_1_CopyTo_m1E8F62C9D745EF1AA0B7967FEBB52DF1D3826CC6_gshared)(__this, ___0_array, ___1_arrayIndex, method);
}
inline void List_1_set_Capacity_m1D877FCA3AF91000B161CC435E11E314C8B2ECDA (List_1_t2EF0515F9247C0F480F55BF3E296366A47CB0324* __this, int32_t ___0_value, const RuntimeMethod* method)
{
	((  void (*) (List_1_t2EF0515F9247C0F480F55BF3E296366A47CB0324*, int32_t, const RuntimeMethod*))List_1_set_Capacity_m1D877FCA3AF91000B161CC435E11E314C8B2ECDA_gshared)(__this, ___0_value, method);
}
inline void Enumerator__ctor_mAF215FD358D499CB5ECC131E64CF0E4F78C905EA (Enumerator_t2CEF225D2605B62ED98F365273E2A70098997301* __this, List_1_t2EF0515F9247C0F480F55BF3E296366A47CB0324* ___0_list, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t2CEF225D2605B62ED98F365273E2A70098997301*, List_1_t2EF0515F9247C0F480F55BF3E296366A47CB0324*, const RuntimeMethod*))Enumerator__ctor_mAF215FD358D499CB5ECC131E64CF0E4F78C905EA_gshared)(__this, ___0_list, method);
}
inline int32_t Array_IndexOf_TisRaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA_m2B8945242BB498A03FFC8BA3F0F3108C44BFAAB7 (RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7* ___0_array, RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method)
{
	return ((  int32_t (*) (RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7*, RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA, int32_t, int32_t, const RuntimeMethod*))Array_IndexOf_TisRaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA_m2B8945242BB498A03FFC8BA3F0F3108C44BFAAB7_gshared)(___0_array, ___1_value, ___2_startIndex, ___3_count, method);
}
inline void List_1_Insert_m09365A11484E7ED85325A10D505199BAB0FFD808 (List_1_t2EF0515F9247C0F480F55BF3E296366A47CB0324* __this, int32_t ___0_index, RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA ___1_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t2EF0515F9247C0F480F55BF3E296366A47CB0324*, int32_t, RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA, const RuntimeMethod*))List_1_Insert_m09365A11484E7ED85325A10D505199BAB0FFD808_gshared)(__this, ___0_index, ___1_item, method);
}
inline void List_1_RemoveAt_mD2583C8090E4B535A7E90775D4F4807563DF369E (List_1_t2EF0515F9247C0F480F55BF3E296366A47CB0324* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	((  void (*) (List_1_t2EF0515F9247C0F480F55BF3E296366A47CB0324*, int32_t, const RuntimeMethod*))List_1_RemoveAt_mD2583C8090E4B535A7E90775D4F4807563DF369E_gshared)(__this, ___0_index, method);
}
inline bool List_1_Remove_mE5C2B7E06ADACF075E1A7A5FC2ABD9FC36B44A44 (List_1_t2EF0515F9247C0F480F55BF3E296366A47CB0324* __this, RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA ___0_item, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t2EF0515F9247C0F480F55BF3E296366A47CB0324*, RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA, const RuntimeMethod*))List_1_Remove_mE5C2B7E06ADACF075E1A7A5FC2ABD9FC36B44A44_gshared)(__this, ___0_item, method);
}
inline bool Predicate_1_Invoke_m2F26628AD1EBED3D755F7995B33076DC98F923F7_inline (Predicate_1_t231FE77F451704871DD8332FA13BC563C1DF98A7* __this, RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA ___0_obj, const RuntimeMethod* method)
{
	return ((  bool (*) (Predicate_1_t231FE77F451704871DD8332FA13BC563C1DF98A7*, RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA, const RuntimeMethod*))Predicate_1_Invoke_m2F26628AD1EBED3D755F7995B33076DC98F923F7_gshared_inline)(__this, ___0_obj, method);
}
inline void List_1_Reverse_m24D554FF90CA3CFE9DC557BF5BAC1CCE53D75436 (List_1_t2EF0515F9247C0F480F55BF3E296366A47CB0324* __this, int32_t ___0_index, int32_t ___1_count, const RuntimeMethod* method)
{
	((  void (*) (List_1_t2EF0515F9247C0F480F55BF3E296366A47CB0324*, int32_t, int32_t, const RuntimeMethod*))List_1_Reverse_m24D554FF90CA3CFE9DC557BF5BAC1CCE53D75436_gshared)(__this, ___0_index, ___1_count, method);
}
inline void Array_Reverse_TisRaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA_mF54B91CEAE0914FC82BB56642F268A22945AFC93 (RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7* ___0_array, int32_t ___1_index, int32_t ___2_length, const RuntimeMethod* method)
{
	((  void (*) (RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7*, int32_t, int32_t, const RuntimeMethod*))Array_Reverse_TisRaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA_mF54B91CEAE0914FC82BB56642F268A22945AFC93_gshared)(___0_array, ___1_index, ___2_length, method);
}
inline void List_1_Sort_m80948FFD8677D8B7B840BE6D59093DA65A4C4725 (List_1_t2EF0515F9247C0F480F55BF3E296366A47CB0324* __this, int32_t ___0_index, int32_t ___1_count, RuntimeObject* ___2_comparer, const RuntimeMethod* method)
{
	((  void (*) (List_1_t2EF0515F9247C0F480F55BF3E296366A47CB0324*, int32_t, int32_t, RuntimeObject*, const RuntimeMethod*))List_1_Sort_m80948FFD8677D8B7B840BE6D59093DA65A4C4725_gshared)(__this, ___0_index, ___1_count, ___2_comparer, method);
}
inline void Array_Sort_TisRaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA_m71186FFD5FEDC6AFA3EE329DD3D065D0D18B609E (RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7* ___0_array, int32_t ___1_index, int32_t ___2_length, RuntimeObject* ___3_comparer, const RuntimeMethod* method)
{
	((  void (*) (RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7*, int32_t, int32_t, RuntimeObject*, const RuntimeMethod*))Array_Sort_TisRaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA_m71186FFD5FEDC6AFA3EE329DD3D065D0D18B609E_gshared)(___0_array, ___1_index, ___2_length, ___3_comparer, method);
}
inline void ArraySortHelper_1_Sort_m6AFFFCE233C56A4625EB06ADB8465B603AAF66B9 (RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7* ___0_keys, int32_t ___1_index, int32_t ___2_length, Comparison_1_t029B324B1F424911E4FB983F3FB02CCE89CD068B* ___3_comparer, const RuntimeMethod* method)
{
	((  void (*) (RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7*, int32_t, int32_t, Comparison_1_t029B324B1F424911E4FB983F3FB02CCE89CD068B*, const RuntimeMethod*))ArraySortHelper_1_Sort_m6AFFFCE233C56A4625EB06ADB8465B603AAF66B9_gshared)(___0_keys, ___1_index, ___2_length, ___3_comparer, method);
}
inline void List_1_AddEnumerable_m3F61E1BEC6F6043A8E6F87420863504DE9F59C6E (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, RuntimeObject* ___0_enumerable, const RuntimeMethod* method)
{
	((  void (*) (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*, RuntimeObject*, const RuntimeMethod*))List_1_AddEnumerable_m3F61E1BEC6F6043A8E6F87420863504DE9F59C6E_gshared)(__this, ___0_enumerable, method);
}
inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810 (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 (*) (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*, int32_t, const RuntimeMethod*))List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810_gshared)(__this, ___0_index, method);
}
inline void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m4E879C7609DC1101BE0D3A088A9627F863855032 (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method)
{
	((  void (*) (RuntimeObject*, int32_t, const RuntimeMethod*))ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m4E879C7609DC1101BE0D3A088A9627F863855032_gshared)(___0_value, ___1_argName, method);
}
inline void List_1_set_Item_m35C8C18BF5DF9A5C8867BF0C872BC39275A41A9C (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, int32_t ___0_index, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_value, const RuntimeMethod* method)
{
	((  void (*) (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*, int32_t, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, const RuntimeMethod*))List_1_set_Item_m35C8C18BF5DF9A5C8867BF0C872BC39275A41A9C_gshared)(__this, ___0_index, ___1_value, method);
}
inline void List_1_AddWithResize_mCDB189127FC2EE67B5EED9DE34F837DFC6EDC212 (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, const RuntimeMethod*))List_1_AddWithResize_mCDB189127FC2EE67B5EED9DE34F837DFC6EDC212_gshared)(__this, ___0_item, method);
}
inline void List_1_EnsureCapacity_m3D475952F4DECC72C2F6CAC08454234565F47922 (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, int32_t ___0_min, const RuntimeMethod* method)
{
	((  void (*) (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*, int32_t, const RuntimeMethod*))List_1_EnsureCapacity_m3D475952F4DECC72C2F6CAC08454234565F47922_gshared)(__this, ___0_min, method);
}
inline void List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_inline (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, const RuntimeMethod*))List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_gshared_inline)(__this, ___0_item, method);
}
inline int32_t List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_inline (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*, const RuntimeMethod*))List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_gshared_inline)(__this, method);
}
inline void List_1_InsertRange_m2A9F80B354349125F355FBCDED0B624FFEC79CA4 (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, int32_t ___0_index, RuntimeObject* ___1_collection, const RuntimeMethod* method)
{
	((  void (*) (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*, int32_t, RuntimeObject*, const RuntimeMethod*))List_1_InsertRange_m2A9F80B354349125F355FBCDED0B624FFEC79CA4_gshared)(__this, ___0_index, ___1_collection, method);
}
inline int32_t List_1_IndexOf_m5F1AA4E06F9B4B86729A3089AF48805434E7747A (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_item, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, const RuntimeMethod*))List_1_IndexOf_m5F1AA4E06F9B4B86729A3089AF48805434E7747A_gshared)(__this, ___0_item, method);
}
inline bool List_1_IsCompatibleObject_m9763209708608E6A97CF3666F1A06C04DB3E43F1 (RuntimeObject* ___0_value, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, const RuntimeMethod*))List_1_IsCompatibleObject_m9763209708608E6A97CF3666F1A06C04DB3E43F1_gshared)(___0_value, method);
}
inline bool List_1_Contains_m3AB3A0CBA2FC939693360C3753E53CA1E7BAD66F (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_item, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, const RuntimeMethod*))List_1_Contains_m3AB3A0CBA2FC939693360C3753E53CA1E7BAD66F_gshared)(__this, ___0_item, method);
}
inline void List_1_CopyTo_m5D24D21039B6DED1F82A87A38AB444AA78C0EA3E (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___0_array, int32_t ___1_arrayIndex, const RuntimeMethod* method)
{
	((  void (*) (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*, Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*, int32_t, const RuntimeMethod*))List_1_CopyTo_m5D24D21039B6DED1F82A87A38AB444AA78C0EA3E_gshared)(__this, ___0_array, ___1_arrayIndex, method);
}
inline void List_1_set_Capacity_mF3F5104AB534524CF6D04659241FBD48C9080FFE (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, int32_t ___0_value, const RuntimeMethod* method)
{
	((  void (*) (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*, int32_t, const RuntimeMethod*))List_1_set_Capacity_mF3F5104AB534524CF6D04659241FBD48C9080FFE_gshared)(__this, ___0_value, method);
}
inline void Enumerator__ctor_m2045BF7E8C40063172911C1C7F174F126C2F29CE (Enumerator_t609488A9291E792D6A59707FF2BF03FBB727E047* __this, List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* ___0_list, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t609488A9291E792D6A59707FF2BF03FBB727E047*, List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*, const RuntimeMethod*))Enumerator__ctor_m2045BF7E8C40063172911C1C7F174F126C2F29CE_gshared)(__this, ___0_list, method);
}
inline int32_t Array_IndexOf_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m3E23294C983591428D5481A6201C56FA7DD46672 (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___0_array, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, int32_t, int32_t, const RuntimeMethod*))Array_IndexOf_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m3E23294C983591428D5481A6201C56FA7DD46672_gshared)(___0_array, ___1_value, ___2_startIndex, ___3_count, method);
}
inline void List_1_Insert_mE7623D84AEA50E917A6371C1DD13D356C9190F2F (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, int32_t ___0_index, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*, int32_t, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, const RuntimeMethod*))List_1_Insert_mE7623D84AEA50E917A6371C1DD13D356C9190F2F_gshared)(__this, ___0_index, ___1_item, method);
}
inline void List_1_RemoveAt_m482122FD05018D3A1F5EE75A17852A8F8A911679 (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	((  void (*) (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*, int32_t, const RuntimeMethod*))List_1_RemoveAt_m482122FD05018D3A1F5EE75A17852A8F8A911679_gshared)(__this, ___0_index, method);
}
inline bool List_1_Remove_mA22ACBFC00BF518337732F3D3033AABB2DD46676 (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_item, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, const RuntimeMethod*))List_1_Remove_mA22ACBFC00BF518337732F3D3033AABB2DD46676_gshared)(__this, ___0_item, method);
}
inline bool Predicate_1_Invoke_m9FE817A40A1AA77B5B15B6C0E90EB7A4715A819D_inline (Predicate_1_tE96ECD003F473EE07C8DCDFCCD657300A8DE453B* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_obj, const RuntimeMethod* method)
{
	return ((  bool (*) (Predicate_1_tE96ECD003F473EE07C8DCDFCCD657300A8DE453B*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, const RuntimeMethod*))Predicate_1_Invoke_m9FE817A40A1AA77B5B15B6C0E90EB7A4715A819D_gshared_inline)(__this, ___0_obj, method);
}
inline void List_1_Reverse_mC864E0AB0C4F6970C423BCBF255DF82A68155E8B (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, int32_t ___0_index, int32_t ___1_count, const RuntimeMethod* method)
{
	((  void (*) (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*, int32_t, int32_t, const RuntimeMethod*))List_1_Reverse_mC864E0AB0C4F6970C423BCBF255DF82A68155E8B_gshared)(__this, ___0_index, ___1_count, method);
}
inline void Array_Reverse_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mDEEDD12A164F41DC4C3EE36DCDDE671EA8C18084 (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___0_array, int32_t ___1_index, int32_t ___2_length, const RuntimeMethod* method)
{
	((  void (*) (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*, int32_t, int32_t, const RuntimeMethod*))Array_Reverse_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mDEEDD12A164F41DC4C3EE36DCDDE671EA8C18084_gshared)(___0_array, ___1_index, ___2_length, method);
}
inline void List_1_Sort_m69FABA33F3CBE64D5C30DC43E211D9971FFE827E (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, int32_t ___0_index, int32_t ___1_count, RuntimeObject* ___2_comparer, const RuntimeMethod* method)
{
	((  void (*) (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*, int32_t, int32_t, RuntimeObject*, const RuntimeMethod*))List_1_Sort_m69FABA33F3CBE64D5C30DC43E211D9971FFE827E_gshared)(__this, ___0_index, ___1_count, ___2_comparer, method);
}
inline void Array_Sort_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m3CA841E40073D0F005011B0D0DC91D6FF6BCBEF5 (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___0_array, int32_t ___1_index, int32_t ___2_length, RuntimeObject* ___3_comparer, const RuntimeMethod* method)
{
	((  void (*) (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*, int32_t, int32_t, RuntimeObject*, const RuntimeMethod*))Array_Sort_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m3CA841E40073D0F005011B0D0DC91D6FF6BCBEF5_gshared)(___0_array, ___1_index, ___2_length, ___3_comparer, method);
}
inline void ArraySortHelper_1_Sort_mA9371769E1F6D5DDE053EA4A4ED2B9DDBA500404 (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___0_keys, int32_t ___1_index, int32_t ___2_length, Comparison_1_t388CFEE675F4A6E15BB604A7AD4C3A5B6D265FB7* ___3_comparer, const RuntimeMethod* method)
{
	((  void (*) (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*, int32_t, int32_t, Comparison_1_t388CFEE675F4A6E15BB604A7AD4C3A5B6D265FB7*, const RuntimeMethod*))ArraySortHelper_1_Sort_mA9371769E1F6D5DDE053EA4A4ED2B9DDBA500404_gshared)(___0_keys, ___1_index, ___2_length, ___3_comparer, method);
}
inline void Enumerator__ctor_m5C66A91DC68887BE203985B56EF2F74222E9AF50 (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF* __this, List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* ___0_list, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*, List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, const RuntimeMethod*))Enumerator__ctor_m5C66A91DC68887BE203985B56EF2F74222E9AF50_gshared)(__this, ___0_list, method);
}
inline void List_1_AddEnumerable_mA6E73354873BEAC5429A80AE43CB210589A7EC7E (List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A* __this, RuntimeObject* ___0_enumerable, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A*, RuntimeObject*, const RuntimeMethod*))List_1_AddEnumerable_mA6E73354873BEAC5429A80AE43CB210589A7EC7E_gshared)(__this, ___0_enumerable, method);
}
inline OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837 List_1_get_Item_mB65D799560ADD289EA08E717412A24EFADA7FB57 (List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837 (*) (List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A*, int32_t, const RuntimeMethod*))List_1_get_Item_mB65D799560ADD289EA08E717412A24EFADA7FB57_gshared)(__this, ___0_index, method);
}
inline void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisOrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837_m054615FD6A62EE7702B344B2E24BA8423FEF9621 (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method)
{
	((  void (*) (RuntimeObject*, int32_t, const RuntimeMethod*))ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisOrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837_m054615FD6A62EE7702B344B2E24BA8423FEF9621_gshared)(___0_value, ___1_argName, method);
}
inline void List_1_set_Item_m7533012D6C4CE083D5CAF670259B97F6D5D506F4 (List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A* __this, int32_t ___0_index, OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837 ___1_value, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A*, int32_t, OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837, const RuntimeMethod*))List_1_set_Item_m7533012D6C4CE083D5CAF670259B97F6D5D506F4_gshared)(__this, ___0_index, ___1_value, method);
}
inline void List_1_AddWithResize_m8B3D79788ADC2B54C9B12CC9EC1158E6A04CDEBC (List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A* __this, OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837 ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A*, OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837, const RuntimeMethod*))List_1_AddWithResize_m8B3D79788ADC2B54C9B12CC9EC1158E6A04CDEBC_gshared)(__this, ___0_item, method);
}
inline void List_1_EnsureCapacity_mB6EB012362AA419CAA8BF0C488F1010486273A69 (List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A* __this, int32_t ___0_min, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A*, int32_t, const RuntimeMethod*))List_1_EnsureCapacity_mB6EB012362AA419CAA8BF0C488F1010486273A69_gshared)(__this, ___0_min, method);
}
inline void List_1_Add_mB308EE5BFFD89A7B8C251644D76CA547456F3012_inline (List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A* __this, OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837 ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A*, OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837, const RuntimeMethod*))List_1_Add_mB308EE5BFFD89A7B8C251644D76CA547456F3012_gshared_inline)(__this, ___0_item, method);
}
inline int32_t List_1_get_Count_m905EB6FD0B91CEE1CC0165F1EBB8C1309AEE4BEC_inline (List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A*, const RuntimeMethod*))List_1_get_Count_m905EB6FD0B91CEE1CC0165F1EBB8C1309AEE4BEC_gshared_inline)(__this, method);
}
inline void List_1_InsertRange_m9AA9E2C5627FB6CD9F3493CA8A99588EDA08125D (List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A* __this, int32_t ___0_index, RuntimeObject* ___1_collection, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A*, int32_t, RuntimeObject*, const RuntimeMethod*))List_1_InsertRange_m9AA9E2C5627FB6CD9F3493CA8A99588EDA08125D_gshared)(__this, ___0_index, ___1_collection, method);
}
inline int32_t List_1_IndexOf_mFA6A5CD427374237339591ED8A5218B6E7EA7F4C (List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A* __this, OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837 ___0_item, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A*, OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837, const RuntimeMethod*))List_1_IndexOf_mFA6A5CD427374237339591ED8A5218B6E7EA7F4C_gshared)(__this, ___0_item, method);
}
inline bool List_1_IsCompatibleObject_mA2F95E82C59734A475035EF3B9DD4BCE9F8429DB (RuntimeObject* ___0_value, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, const RuntimeMethod*))List_1_IsCompatibleObject_mA2F95E82C59734A475035EF3B9DD4BCE9F8429DB_gshared)(___0_value, method);
}
inline bool List_1_Contains_m590D7926DA2B45C95850710F87644BCD235F1A70 (List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A* __this, OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837 ___0_item, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A*, OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837, const RuntimeMethod*))List_1_Contains_m590D7926DA2B45C95850710F87644BCD235F1A70_gshared)(__this, ___0_item, method);
}
inline void List_1_CopyTo_m96F4BF1E6FF691338A44AAB62506964ACAD70715 (List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A* __this, OrderBlockU5BU5D_tD67C39FB212889AFAAB991BE1AE144ED8D35EE88* ___0_array, int32_t ___1_arrayIndex, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A*, OrderBlockU5BU5D_tD67C39FB212889AFAAB991BE1AE144ED8D35EE88*, int32_t, const RuntimeMethod*))List_1_CopyTo_m96F4BF1E6FF691338A44AAB62506964ACAD70715_gshared)(__this, ___0_array, ___1_arrayIndex, method);
}
inline void List_1_set_Capacity_mC49015D45A78A39909C4541BDB84DAA369E6A4C1 (List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A* __this, int32_t ___0_value, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A*, int32_t, const RuntimeMethod*))List_1_set_Capacity_mC49015D45A78A39909C4541BDB84DAA369E6A4C1_gshared)(__this, ___0_value, method);
}
inline void Enumerator__ctor_mCAD56839187542C3B25E2C1493BBD62861333E4E (Enumerator_t389EF10F90069ED924478E5694DFE1BB5CBCF251* __this, List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A* ___0_list, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t389EF10F90069ED924478E5694DFE1BB5CBCF251*, List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A*, const RuntimeMethod*))Enumerator__ctor_mCAD56839187542C3B25E2C1493BBD62861333E4E_gshared)(__this, ___0_list, method);
}
inline int32_t Array_IndexOf_TisOrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837_m972A3CE5298A6193E512B34C64201444B051D8E9 (OrderBlockU5BU5D_tD67C39FB212889AFAAB991BE1AE144ED8D35EE88* ___0_array, OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837 ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method)
{
	return ((  int32_t (*) (OrderBlockU5BU5D_tD67C39FB212889AFAAB991BE1AE144ED8D35EE88*, OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837, int32_t, int32_t, const RuntimeMethod*))Array_IndexOf_TisOrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837_m972A3CE5298A6193E512B34C64201444B051D8E9_gshared)(___0_array, ___1_value, ___2_startIndex, ___3_count, method);
}
inline void List_1_Insert_mF138D66498A5DE06E21A7149C35FA14729F4F5E1 (List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A* __this, int32_t ___0_index, OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837 ___1_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A*, int32_t, OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837, const RuntimeMethod*))List_1_Insert_mF138D66498A5DE06E21A7149C35FA14729F4F5E1_gshared)(__this, ___0_index, ___1_item, method);
}
inline void List_1_RemoveAt_m30CC1D4CA1984DCAEDBCD2228B538A0503AF854A (List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A*, int32_t, const RuntimeMethod*))List_1_RemoveAt_m30CC1D4CA1984DCAEDBCD2228B538A0503AF854A_gshared)(__this, ___0_index, method);
}
inline bool List_1_Remove_m02DCEAFFE826B31F80767A9D191CB4587D82F7BC (List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A* __this, OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837 ___0_item, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A*, OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837, const RuntimeMethod*))List_1_Remove_m02DCEAFFE826B31F80767A9D191CB4587D82F7BC_gshared)(__this, ___0_item, method);
}
inline bool Predicate_1_Invoke_m182E0ACAA85455151F5750CE87F942DA6E3DD3D6_inline (Predicate_1_t8194F57B81937B278B5EFEF0F5B667BBB054B0D0* __this, OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837 ___0_obj, const RuntimeMethod* method)
{
	return ((  bool (*) (Predicate_1_t8194F57B81937B278B5EFEF0F5B667BBB054B0D0*, OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837, const RuntimeMethod*))Predicate_1_Invoke_m182E0ACAA85455151F5750CE87F942DA6E3DD3D6_gshared_inline)(__this, ___0_obj, method);
}
inline void List_1_Reverse_m5903E8D5CE5B92A29530763E182314BDFA781664 (List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A* __this, int32_t ___0_index, int32_t ___1_count, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A*, int32_t, int32_t, const RuntimeMethod*))List_1_Reverse_m5903E8D5CE5B92A29530763E182314BDFA781664_gshared)(__this, ___0_index, ___1_count, method);
}
inline void Array_Reverse_TisOrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837_mDCB49D07F30FD9D952124968159FDF346234BD04 (OrderBlockU5BU5D_tD67C39FB212889AFAAB991BE1AE144ED8D35EE88* ___0_array, int32_t ___1_index, int32_t ___2_length, const RuntimeMethod* method)
{
	((  void (*) (OrderBlockU5BU5D_tD67C39FB212889AFAAB991BE1AE144ED8D35EE88*, int32_t, int32_t, const RuntimeMethod*))Array_Reverse_TisOrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837_mDCB49D07F30FD9D952124968159FDF346234BD04_gshared)(___0_array, ___1_index, ___2_length, method);
}
inline void List_1_Sort_mEBED487B845A66E3298CA30654B7EC17F7481995 (List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A* __this, int32_t ___0_index, int32_t ___1_count, RuntimeObject* ___2_comparer, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A*, int32_t, int32_t, RuntimeObject*, const RuntimeMethod*))List_1_Sort_mEBED487B845A66E3298CA30654B7EC17F7481995_gshared)(__this, ___0_index, ___1_count, ___2_comparer, method);
}
inline void Array_Sort_TisOrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837_m438D9EDDBF93A09C81E89458C2362F85487923EC (OrderBlockU5BU5D_tD67C39FB212889AFAAB991BE1AE144ED8D35EE88* ___0_array, int32_t ___1_index, int32_t ___2_length, RuntimeObject* ___3_comparer, const RuntimeMethod* method)
{
	((  void (*) (OrderBlockU5BU5D_tD67C39FB212889AFAAB991BE1AE144ED8D35EE88*, int32_t, int32_t, RuntimeObject*, const RuntimeMethod*))Array_Sort_TisOrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837_m438D9EDDBF93A09C81E89458C2362F85487923EC_gshared)(___0_array, ___1_index, ___2_length, ___3_comparer, method);
}
inline void ArraySortHelper_1_Sort_m4A8362BBA870329F45001F17310B50E583BFF19F (OrderBlockU5BU5D_tD67C39FB212889AFAAB991BE1AE144ED8D35EE88* ___0_keys, int32_t ___1_index, int32_t ___2_length, Comparison_1_tC8BBA462D5337723AC34773EEE343018753C7FF3* ___3_comparer, const RuntimeMethod* method)
{
	((  void (*) (OrderBlockU5BU5D_tD67C39FB212889AFAAB991BE1AE144ED8D35EE88*, int32_t, int32_t, Comparison_1_tC8BBA462D5337723AC34773EEE343018753C7FF3*, const RuntimeMethod*))ArraySortHelper_1_Sort_m4A8362BBA870329F45001F17310B50E583BFF19F_gshared)(___0_keys, ___1_index, ___2_length, ___3_comparer, method);
}
inline void List_1_AddEnumerable_mDF2147E522AD80A7B6A79CF8E7F00EC7DBF8A032 (List_1_tDB6FA8EDA7A26227B5CA100203EF7BAFA0FDBDDF* __this, RuntimeObject* ___0_enumerable, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDB6FA8EDA7A26227B5CA100203EF7BAFA0FDBDDF*, RuntimeObject*, const RuntimeMethod*))List_1_AddEnumerable_mDF2147E522AD80A7B6A79CF8E7F00EC7DBF8A032_gshared)(__this, ___0_enumerable, method);
}
inline SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC List_1_get_Item_mAAE7FBDBD94CC48BA01C01ACFC3C66EE219110D0 (List_1_tDB6FA8EDA7A26227B5CA100203EF7BAFA0FDBDDF* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC (*) (List_1_tDB6FA8EDA7A26227B5CA100203EF7BAFA0FDBDDF*, int32_t, const RuntimeMethod*))List_1_get_Item_mAAE7FBDBD94CC48BA01C01ACFC3C66EE219110D0_gshared)(__this, ___0_index, method);
}
inline void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisSingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC_m85CB6FEF509A4859399929F09F545FA1133C3051 (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method)
{
	((  void (*) (RuntimeObject*, int32_t, const RuntimeMethod*))ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisSingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC_m85CB6FEF509A4859399929F09F545FA1133C3051_gshared)(___0_value, ___1_argName, method);
}
inline void List_1_set_Item_m58893707EC3B663186D1550A23DE96C818416CBD (List_1_tDB6FA8EDA7A26227B5CA100203EF7BAFA0FDBDDF* __this, int32_t ___0_index, SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC ___1_value, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDB6FA8EDA7A26227B5CA100203EF7BAFA0FDBDDF*, int32_t, SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC, const RuntimeMethod*))List_1_set_Item_m58893707EC3B663186D1550A23DE96C818416CBD_gshared)(__this, ___0_index, ___1_value, method);
}
inline void List_1_AddWithResize_m594A4155F206677F45ECD9AAE7E9EFD0AE6137ED (List_1_tDB6FA8EDA7A26227B5CA100203EF7BAFA0FDBDDF* __this, SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDB6FA8EDA7A26227B5CA100203EF7BAFA0FDBDDF*, SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC, const RuntimeMethod*))List_1_AddWithResize_m594A4155F206677F45ECD9AAE7E9EFD0AE6137ED_gshared)(__this, ___0_item, method);
}
inline void List_1_EnsureCapacity_m1A140613D2D236E9CF413F81D549E39415DF0058 (List_1_tDB6FA8EDA7A26227B5CA100203EF7BAFA0FDBDDF* __this, int32_t ___0_min, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDB6FA8EDA7A26227B5CA100203EF7BAFA0FDBDDF*, int32_t, const RuntimeMethod*))List_1_EnsureCapacity_m1A140613D2D236E9CF413F81D549E39415DF0058_gshared)(__this, ___0_min, method);
}
inline void List_1_Add_m624C469B79ADC28E429B7A3CA96DA72345621643_inline (List_1_tDB6FA8EDA7A26227B5CA100203EF7BAFA0FDBDDF* __this, SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDB6FA8EDA7A26227B5CA100203EF7BAFA0FDBDDF*, SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC, const RuntimeMethod*))List_1_Add_m624C469B79ADC28E429B7A3CA96DA72345621643_gshared_inline)(__this, ___0_item, method);
}
inline int32_t List_1_get_Count_mF3540C84790DAB9D381F00753BA20A85694C3446_inline (List_1_tDB6FA8EDA7A26227B5CA100203EF7BAFA0FDBDDF* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tDB6FA8EDA7A26227B5CA100203EF7BAFA0FDBDDF*, const RuntimeMethod*))List_1_get_Count_mF3540C84790DAB9D381F00753BA20A85694C3446_gshared_inline)(__this, method);
}
inline void List_1_InsertRange_m8C743BAB2CDB84037FE830DF12A8B561EFEEEA60 (List_1_tDB6FA8EDA7A26227B5CA100203EF7BAFA0FDBDDF* __this, int32_t ___0_index, RuntimeObject* ___1_collection, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDB6FA8EDA7A26227B5CA100203EF7BAFA0FDBDDF*, int32_t, RuntimeObject*, const RuntimeMethod*))List_1_InsertRange_m8C743BAB2CDB84037FE830DF12A8B561EFEEEA60_gshared)(__this, ___0_index, ___1_collection, method);
}
inline int32_t List_1_IndexOf_mF5A7DA78EA07100BDE8044CA37C505F36AD7ACB1 (List_1_tDB6FA8EDA7A26227B5CA100203EF7BAFA0FDBDDF* __this, SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC ___0_item, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tDB6FA8EDA7A26227B5CA100203EF7BAFA0FDBDDF*, SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC, const RuntimeMethod*))List_1_IndexOf_mF5A7DA78EA07100BDE8044CA37C505F36AD7ACB1_gshared)(__this, ___0_item, method);
}
inline bool List_1_IsCompatibleObject_mC9CB5EB21839923C050E6922FE7050867F374865 (RuntimeObject* ___0_value, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, const RuntimeMethod*))List_1_IsCompatibleObject_mC9CB5EB21839923C050E6922FE7050867F374865_gshared)(___0_value, method);
}
inline bool List_1_Contains_mA5832B215E464CAC8345E7ECC45562E884AE146D (List_1_tDB6FA8EDA7A26227B5CA100203EF7BAFA0FDBDDF* __this, SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC ___0_item, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_tDB6FA8EDA7A26227B5CA100203EF7BAFA0FDBDDF*, SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC, const RuntimeMethod*))List_1_Contains_mA5832B215E464CAC8345E7ECC45562E884AE146D_gshared)(__this, ___0_item, method);
}
inline void List_1_CopyTo_m15B9FC56E0418F730FC3A37C8E482F7108D73B62 (List_1_tDB6FA8EDA7A26227B5CA100203EF7BAFA0FDBDDF* __this, SingleRangeU5BU5D_t9F938F2249733D85C4F97842A125778D69A843D6* ___0_array, int32_t ___1_arrayIndex, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDB6FA8EDA7A26227B5CA100203EF7BAFA0FDBDDF*, SingleRangeU5BU5D_t9F938F2249733D85C4F97842A125778D69A843D6*, int32_t, const RuntimeMethod*))List_1_CopyTo_m15B9FC56E0418F730FC3A37C8E482F7108D73B62_gshared)(__this, ___0_array, ___1_arrayIndex, method);
}
inline void List_1_set_Capacity_m40FE27C2AB4F6F5F863957210FA90C1BF581D293 (List_1_tDB6FA8EDA7A26227B5CA100203EF7BAFA0FDBDDF* __this, int32_t ___0_value, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDB6FA8EDA7A26227B5CA100203EF7BAFA0FDBDDF*, int32_t, const RuntimeMethod*))List_1_set_Capacity_m40FE27C2AB4F6F5F863957210FA90C1BF581D293_gshared)(__this, ___0_value, method);
}
inline void Enumerator__ctor_m159144864209387AA18DEABE7B7985388F8F3452 (Enumerator_t59E02176F2EE4E264A4750514AA127E2E21FF5D9* __this, List_1_tDB6FA8EDA7A26227B5CA100203EF7BAFA0FDBDDF* ___0_list, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t59E02176F2EE4E264A4750514AA127E2E21FF5D9*, List_1_tDB6FA8EDA7A26227B5CA100203EF7BAFA0FDBDDF*, const RuntimeMethod*))Enumerator__ctor_m159144864209387AA18DEABE7B7985388F8F3452_gshared)(__this, ___0_list, method);
}
inline int32_t Array_IndexOf_TisSingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC_m5A2EB67A073F2BFF5B3DCDDBD15D75BC3CFB909C (SingleRangeU5BU5D_t9F938F2249733D85C4F97842A125778D69A843D6* ___0_array, SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method)
{
	return ((  int32_t (*) (SingleRangeU5BU5D_t9F938F2249733D85C4F97842A125778D69A843D6*, SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC, int32_t, int32_t, const RuntimeMethod*))Array_IndexOf_TisSingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC_m5A2EB67A073F2BFF5B3DCDDBD15D75BC3CFB909C_gshared)(___0_array, ___1_value, ___2_startIndex, ___3_count, method);
}
inline void List_1_Insert_mC8E7189F3D9D95975CFE821AC3B560B2EA7AB7A8 (List_1_tDB6FA8EDA7A26227B5CA100203EF7BAFA0FDBDDF* __this, int32_t ___0_index, SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC ___1_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDB6FA8EDA7A26227B5CA100203EF7BAFA0FDBDDF*, int32_t, SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC, const RuntimeMethod*))List_1_Insert_mC8E7189F3D9D95975CFE821AC3B560B2EA7AB7A8_gshared)(__this, ___0_index, ___1_item, method);
}
inline void List_1_RemoveAt_m911F1AFFA59FD181BA9363E0B6C8B5B95067EC3B (List_1_tDB6FA8EDA7A26227B5CA100203EF7BAFA0FDBDDF* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDB6FA8EDA7A26227B5CA100203EF7BAFA0FDBDDF*, int32_t, const RuntimeMethod*))List_1_RemoveAt_m911F1AFFA59FD181BA9363E0B6C8B5B95067EC3B_gshared)(__this, ___0_index, method);
}
inline bool List_1_Remove_mA8E72E7CFB72101AA88E01A84F746ECBD8E91B3F (List_1_tDB6FA8EDA7A26227B5CA100203EF7BAFA0FDBDDF* __this, SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC ___0_item, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_tDB6FA8EDA7A26227B5CA100203EF7BAFA0FDBDDF*, SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC, const RuntimeMethod*))List_1_Remove_mA8E72E7CFB72101AA88E01A84F746ECBD8E91B3F_gshared)(__this, ___0_item, method);
}
inline bool Predicate_1_Invoke_mADD6CFDE192E3E822D5296926054ED8A41DB09C4_inline (Predicate_1_t107748E0E0D2277266234EAF67AC068394C4351C* __this, SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC ___0_obj, const RuntimeMethod* method)
{
	return ((  bool (*) (Predicate_1_t107748E0E0D2277266234EAF67AC068394C4351C*, SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC, const RuntimeMethod*))Predicate_1_Invoke_mADD6CFDE192E3E822D5296926054ED8A41DB09C4_gshared_inline)(__this, ___0_obj, method);
}
inline void List_1_Reverse_m6558ECB96638BF339DAB6BDB70413BA7570A84F9 (List_1_tDB6FA8EDA7A26227B5CA100203EF7BAFA0FDBDDF* __this, int32_t ___0_index, int32_t ___1_count, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDB6FA8EDA7A26227B5CA100203EF7BAFA0FDBDDF*, int32_t, int32_t, const RuntimeMethod*))List_1_Reverse_m6558ECB96638BF339DAB6BDB70413BA7570A84F9_gshared)(__this, ___0_index, ___1_count, method);
}
inline void Array_Reverse_TisSingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC_mD8F006C0A007C05BB69E417FA65A5A66965F997C (SingleRangeU5BU5D_t9F938F2249733D85C4F97842A125778D69A843D6* ___0_array, int32_t ___1_index, int32_t ___2_length, const RuntimeMethod* method)
{
	((  void (*) (SingleRangeU5BU5D_t9F938F2249733D85C4F97842A125778D69A843D6*, int32_t, int32_t, const RuntimeMethod*))Array_Reverse_TisSingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC_mD8F006C0A007C05BB69E417FA65A5A66965F997C_gshared)(___0_array, ___1_index, ___2_length, method);
}
inline void List_1_Sort_m4F48B52D720DB8E76904DB4647F7BDA63FDEC552 (List_1_tDB6FA8EDA7A26227B5CA100203EF7BAFA0FDBDDF* __this, int32_t ___0_index, int32_t ___1_count, RuntimeObject* ___2_comparer, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDB6FA8EDA7A26227B5CA100203EF7BAFA0FDBDDF*, int32_t, int32_t, RuntimeObject*, const RuntimeMethod*))List_1_Sort_m4F48B52D720DB8E76904DB4647F7BDA63FDEC552_gshared)(__this, ___0_index, ___1_count, ___2_comparer, method);
}
inline void Array_Sort_TisSingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC_mE6A4B57DE0CB3DEC8371BDC3DAAAD29D6C9E3B2B (SingleRangeU5BU5D_t9F938F2249733D85C4F97842A125778D69A843D6* ___0_array, int32_t ___1_index, int32_t ___2_length, RuntimeObject* ___3_comparer, const RuntimeMethod* method)
{
	((  void (*) (SingleRangeU5BU5D_t9F938F2249733D85C4F97842A125778D69A843D6*, int32_t, int32_t, RuntimeObject*, const RuntimeMethod*))Array_Sort_TisSingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC_mE6A4B57DE0CB3DEC8371BDC3DAAAD29D6C9E3B2B_gshared)(___0_array, ___1_index, ___2_length, ___3_comparer, method);
}
inline void ArraySortHelper_1_Sort_m3182DABDA1EFACFF8268887837CA976A3577C3E6 (SingleRangeU5BU5D_t9F938F2249733D85C4F97842A125778D69A843D6* ___0_keys, int32_t ___1_index, int32_t ___2_length, Comparison_1_tA6E38F9B8A5E125EC6515F9679C2079C747A0149* ___3_comparer, const RuntimeMethod* method)
{
	((  void (*) (SingleRangeU5BU5D_t9F938F2249733D85C4F97842A125778D69A843D6*, int32_t, int32_t, Comparison_1_tA6E38F9B8A5E125EC6515F9679C2079C747A0149*, const RuntimeMethod*))ArraySortHelper_1_Sort_m3182DABDA1EFACFF8268887837CA976A3577C3E6_gshared)(___0_keys, ___1_index, ___2_length, ___3_comparer, method);
}
inline void List_1_AddEnumerable_m0C19209F7F2E7D8F63F4AEDAB78FF7F76347ECFB (List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4* __this, RuntimeObject* ___0_enumerable, const RuntimeMethod* method)
{
	((  void (*) (List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4*, RuntimeObject*, const RuntimeMethod*))List_1_AddEnumerable_m0C19209F7F2E7D8F63F4AEDAB78FF7F76347ECFB_gshared)(__this, ___0_enumerable, method);
}
inline WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44 List_1_get_Item_mE33CCA6A6D338BD1F44C8E35CE75806952CBF0CC (List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44 (*) (List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4*, int32_t, const RuntimeMethod*))List_1_get_Item_mE33CCA6A6D338BD1F44C8E35CE75806952CBF0CC_gshared)(__this, ___0_index, method);
}
inline void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisWorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44_mB9D015C9FCBF6CD2BCA1E436743F0CC080CFC110 (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method)
{
	((  void (*) (RuntimeObject*, int32_t, const RuntimeMethod*))ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisWorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44_mB9D015C9FCBF6CD2BCA1E436743F0CC080CFC110_gshared)(___0_value, ___1_argName, method);
}
inline void List_1_set_Item_m47EF2DD78187A4AFDDBA8AFE5C2D83DE376C0A0A (List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4* __this, int32_t ___0_index, WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44 ___1_value, const RuntimeMethod* method)
{
	((  void (*) (List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4*, int32_t, WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44, const RuntimeMethod*))List_1_set_Item_m47EF2DD78187A4AFDDBA8AFE5C2D83DE376C0A0A_gshared)(__this, ___0_index, ___1_value, method);
}
inline void List_1_AddWithResize_m45EC1E38A4A473EA779C21FBFEB2C0E39E4C7846 (List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4* __this, WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44 ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4*, WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44, const RuntimeMethod*))List_1_AddWithResize_m45EC1E38A4A473EA779C21FBFEB2C0E39E4C7846_gshared)(__this, ___0_item, method);
}
inline void List_1_EnsureCapacity_mF38503ED9938B2CECF0B618845E9E32167654016 (List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4* __this, int32_t ___0_min, const RuntimeMethod* method)
{
	((  void (*) (List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4*, int32_t, const RuntimeMethod*))List_1_EnsureCapacity_mF38503ED9938B2CECF0B618845E9E32167654016_gshared)(__this, ___0_min, method);
}
inline void List_1_Add_m4AF1A89B7FCCDFD5755D0C21A65347642A37B152_inline (List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4* __this, WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44 ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4*, WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44, const RuntimeMethod*))List_1_Add_m4AF1A89B7FCCDFD5755D0C21A65347642A37B152_gshared_inline)(__this, ___0_item, method);
}
inline int32_t List_1_get_Count_m2F90A932E325FFA55047769F5E45E453D80C27D1_inline (List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4*, const RuntimeMethod*))List_1_get_Count_m2F90A932E325FFA55047769F5E45E453D80C27D1_gshared_inline)(__this, method);
}
inline void List_1_InsertRange_m13CC4FA54580EFF2DDFDDB9E830D9A383A0E4DCC (List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4* __this, int32_t ___0_index, RuntimeObject* ___1_collection, const RuntimeMethod* method)
{
	((  void (*) (List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4*, int32_t, RuntimeObject*, const RuntimeMethod*))List_1_InsertRange_m13CC4FA54580EFF2DDFDDB9E830D9A383A0E4DCC_gshared)(__this, ___0_index, ___1_collection, method);
}
inline int32_t List_1_IndexOf_m48E7DF20C4C52830C219E189B9DAF4220941B7D1 (List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4* __this, WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44 ___0_item, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4*, WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44, const RuntimeMethod*))List_1_IndexOf_m48E7DF20C4C52830C219E189B9DAF4220941B7D1_gshared)(__this, ___0_item, method);
}
inline bool List_1_IsCompatibleObject_m041D9A4962B238EF7BC9922EAF0F5FC8E6267EF6 (RuntimeObject* ___0_value, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, const RuntimeMethod*))List_1_IsCompatibleObject_m041D9A4962B238EF7BC9922EAF0F5FC8E6267EF6_gshared)(___0_value, method);
}
inline bool List_1_Contains_m1303A79CAE668AD1204F2D7DF8D2DFCF9DDC6D0D (List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4* __this, WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44 ___0_item, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4*, WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44, const RuntimeMethod*))List_1_Contains_m1303A79CAE668AD1204F2D7DF8D2DFCF9DDC6D0D_gshared)(__this, ___0_item, method);
}
inline void List_1_CopyTo_m0E03ED6DB864BF551838BF1B49786675D995A7E7 (List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4* __this, WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577* ___0_array, int32_t ___1_arrayIndex, const RuntimeMethod* method)
{
	((  void (*) (List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4*, WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577*, int32_t, const RuntimeMethod*))List_1_CopyTo_m0E03ED6DB864BF551838BF1B49786675D995A7E7_gshared)(__this, ___0_array, ___1_arrayIndex, method);
}
inline void List_1_set_Capacity_m060BDC309579AD262C87F876AC2A1E81D316472A (List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4* __this, int32_t ___0_value, const RuntimeMethod* method)
{
	((  void (*) (List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4*, int32_t, const RuntimeMethod*))List_1_set_Capacity_m060BDC309579AD262C87F876AC2A1E81D316472A_gshared)(__this, ___0_value, method);
}
inline void Enumerator__ctor_m67AC7635AF0AF22787100E7C16277521B24BF922 (Enumerator_t7ECA23D5C1F4F41D95EEA8488F11D3D913089B4C* __this, List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4* ___0_list, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t7ECA23D5C1F4F41D95EEA8488F11D3D913089B4C*, List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4*, const RuntimeMethod*))Enumerator__ctor_m67AC7635AF0AF22787100E7C16277521B24BF922_gshared)(__this, ___0_list, method);
}
inline int32_t Array_IndexOf_TisWorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44_mD7FA52403DD62EA78B636E1A4E8119ABED32F37E (WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577* ___0_array, WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44 ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method)
{
	return ((  int32_t (*) (WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577*, WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44, int32_t, int32_t, const RuntimeMethod*))Array_IndexOf_TisWorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44_mD7FA52403DD62EA78B636E1A4E8119ABED32F37E_gshared)(___0_array, ___1_value, ___2_startIndex, ___3_count, method);
}
inline void List_1_Insert_m3AA6C81C13315A0F1CD886CA63438F3FC55EFD70 (List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4* __this, int32_t ___0_index, WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44 ___1_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4*, int32_t, WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44, const RuntimeMethod*))List_1_Insert_m3AA6C81C13315A0F1CD886CA63438F3FC55EFD70_gshared)(__this, ___0_index, ___1_item, method);
}
inline void List_1_RemoveAt_m7476D799F5CC07697D447853DA4DAEB4D3741B84 (List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	((  void (*) (List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4*, int32_t, const RuntimeMethod*))List_1_RemoveAt_m7476D799F5CC07697D447853DA4DAEB4D3741B84_gshared)(__this, ___0_index, method);
}
inline bool List_1_Remove_mC74ED88927A060D6631231DB26A042412C32D85B (List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4* __this, WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44 ___0_item, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4*, WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44, const RuntimeMethod*))List_1_Remove_mC74ED88927A060D6631231DB26A042412C32D85B_gshared)(__this, ___0_item, method);
}
inline bool Predicate_1_Invoke_m8D5A11CC70C8E6CD6EE4FD9D625B299AF1B8DCE7_inline (Predicate_1_t5A30DC3457D23124EDD16C06F92FCB77A9C8A8FD* __this, WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44 ___0_obj, const RuntimeMethod* method)
{
	return ((  bool (*) (Predicate_1_t5A30DC3457D23124EDD16C06F92FCB77A9C8A8FD*, WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44, const RuntimeMethod*))Predicate_1_Invoke_m8D5A11CC70C8E6CD6EE4FD9D625B299AF1B8DCE7_gshared_inline)(__this, ___0_obj, method);
}
inline void List_1_Reverse_mA82B743941194D34E26FD74ABCA431B3E5B9C2FF (List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4* __this, int32_t ___0_index, int32_t ___1_count, const RuntimeMethod* method)
{
	((  void (*) (List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4*, int32_t, int32_t, const RuntimeMethod*))List_1_Reverse_mA82B743941194D34E26FD74ABCA431B3E5B9C2FF_gshared)(__this, ___0_index, ___1_count, method);
}
inline void Array_Reverse_TisWorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44_m88E01FB6C608D58721AAECE3C58B2107CB926E3B (WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577* ___0_array, int32_t ___1_index, int32_t ___2_length, const RuntimeMethod* method)
{
	((  void (*) (WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577*, int32_t, int32_t, const RuntimeMethod*))Array_Reverse_TisWorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44_m88E01FB6C608D58721AAECE3C58B2107CB926E3B_gshared)(___0_array, ___1_index, ___2_length, method);
}
inline void List_1_Sort_m740F84AD8B0226D65AE841BEA5DA739C69A29FAE (List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4* __this, int32_t ___0_index, int32_t ___1_count, RuntimeObject* ___2_comparer, const RuntimeMethod* method)
{
	((  void (*) (List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4*, int32_t, int32_t, RuntimeObject*, const RuntimeMethod*))List_1_Sort_m740F84AD8B0226D65AE841BEA5DA739C69A29FAE_gshared)(__this, ___0_index, ___1_count, ___2_comparer, method);
}
inline void Array_Sort_TisWorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44_m4974E84199207C342ABD5C3DDB83FB22A7831AF8 (WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577* ___0_array, int32_t ___1_index, int32_t ___2_length, RuntimeObject* ___3_comparer, const RuntimeMethod* method)
{
	((  void (*) (WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577*, int32_t, int32_t, RuntimeObject*, const RuntimeMethod*))Array_Sort_TisWorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44_m4974E84199207C342ABD5C3DDB83FB22A7831AF8_gshared)(___0_array, ___1_index, ___2_length, ___3_comparer, method);
}
inline void ArraySortHelper_1_Sort_mF8B226978F672DF67F415832E3FCC44027498627 (WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577* ___0_keys, int32_t ___1_index, int32_t ___2_length, Comparison_1_t4349A0C0F6E57844038D08909A07D093BF8BBF87* ___3_comparer, const RuntimeMethod* method)
{
	((  void (*) (WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577*, int32_t, int32_t, Comparison_1_t4349A0C0F6E57844038D08909A07D093BF8BBF87*, const RuntimeMethod*))ArraySortHelper_1_Sort_mF8B226978F672DF67F415832E3FCC44027498627_gshared)(___0_keys, ___1_index, ___2_length, ___3_comparer, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Enter_m759A82E6E56E06C313A9AF4679E304E0D58ABB93 (RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Environment_get_TickCount_m183BFCF001E12849E3D898957F0B81FD88BA183C (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EventSource_IsEnabled_m0B2F63F81423D7832DC5526D0F3490C77CAB57A5 (EventSource_tA86759A1E6F272632C299AAC181C0A67E5C52F25* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArrayPoolEventSource_BufferTrimmed_m7E5BBBCE84BEF9C79981E482AC6D2FA6FFB2ECB0 (ArrayPoolEventSource_tDB6CA549DFC2FBEB134C71EB85DBD6D943E5C888* __this, int32_t ___0_bufferId, int32_t ___1_bufferSize, int32_t ___2_poolId, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Int64_GetHashCode_mDB050BE2AC244D92B14D1DF725AAD279CDC48496 (int64_t* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3 (RuntimeObject* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializationInfo_SetType_m5D07E1C38028872E49EA01129ED5BF1AF674C475 (SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* __this, Type_t* ___0_type, const RuntimeMethod* method) ;
inline void DefaultComparer_1__ctor_m1FB334BED8F2ED543F453D87C912BDA6611F368E (DefaultComparer_1_tF1F3B8981298E50FBC17BDC8CA0B4CFE867AD644* __this, const RuntimeMethod* method)
{
	((  void (*) (DefaultComparer_1_tF1F3B8981298E50FBC17BDC8CA0B4CFE867AD644*, const RuntimeMethod*))DefaultComparer_1__ctor_m1FB334BED8F2ED543F453D87C912BDA6611F368E_gshared)(__this, method);
}
inline void LowLevelDictionary_2__ctor_mB6B362C12FBFC3BDA4766411FDC767993214AFA2 (LowLevelDictionary_2_t4C52985827C66ED86805FEED7556812E4207A114* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method)
{
	((  void (*) (LowLevelDictionary_2_t4C52985827C66ED86805FEED7556812E4207A114*, int32_t, RuntimeObject*, const RuntimeMethod*))LowLevelDictionary_2__ctor_mB6B362C12FBFC3BDA4766411FDC767993214AFA2_gshared)(__this, ___0_capacity, ___1_comparer, method);
}
inline void LowLevelDictionary_2_Clear_m7229E17DB8B64A5E367126DD076AA0577B2ED5A7 (LowLevelDictionary_2_t4C52985827C66ED86805FEED7556812E4207A114* __this, int32_t ___0_capacity, const RuntimeMethod* method)
{
	((  void (*) (LowLevelDictionary_2_t4C52985827C66ED86805FEED7556812E4207A114*, int32_t, const RuntimeMethod*))LowLevelDictionary_2_Clear_m7229E17DB8B64A5E367126DD076AA0577B2ED5A7_gshared)(__this, ___0_capacity, method);
}
inline Entry_t776AD7605FD3B32B33A463DA5E56809C57BFA1AB* LowLevelDictionary_2_Find_m9E8AF9DE397CFCC424FF17C0125FACDB261E3AEB (LowLevelDictionary_2_t4C52985827C66ED86805FEED7556812E4207A114* __this, int32_t ___0_key, const RuntimeMethod* method)
{
	return ((  Entry_t776AD7605FD3B32B33A463DA5E56809C57BFA1AB* (*) (LowLevelDictionary_2_t4C52985827C66ED86805FEED7556812E4207A114*, int32_t, const RuntimeMethod*))LowLevelDictionary_2_Find_m9E8AF9DE397CFCC424FF17C0125FACDB261E3AEB_gshared)(__this, ___0_key, method);
}
inline Entry_t776AD7605FD3B32B33A463DA5E56809C57BFA1AB* LowLevelDictionary_2_UncheckedAdd_m4B36B6453ADD7712B323A995014660300EDFD5BB (LowLevelDictionary_2_t4C52985827C66ED86805FEED7556812E4207A114* __this, int32_t ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method)
{
	return ((  Entry_t776AD7605FD3B32B33A463DA5E56809C57BFA1AB* (*) (LowLevelDictionary_2_t4C52985827C66ED86805FEED7556812E4207A114*, int32_t, RuntimeObject*, const RuntimeMethod*))LowLevelDictionary_2_UncheckedAdd_m4B36B6453ADD7712B323A995014660300EDFD5BB_gshared)(__this, ___0_key, ___1_value, method);
}
inline int32_t LowLevelDictionary_2_GetBucket_m31C0AA9C3A13F586A702DFDE7508A606E20B4A9B (LowLevelDictionary_2_t4C52985827C66ED86805FEED7556812E4207A114* __this, int32_t ___0_key, int32_t ___1_numBuckets, const RuntimeMethod* method)
{
	return ((  int32_t (*) (LowLevelDictionary_2_t4C52985827C66ED86805FEED7556812E4207A114*, int32_t, int32_t, const RuntimeMethod*))LowLevelDictionary_2_GetBucket_m31C0AA9C3A13F586A702DFDE7508A606E20B4A9B_gshared)(__this, ___0_key, ___1_numBuckets, method);
}
inline void Entry__ctor_m1523ABCDEBE31BA50D6801DB569FB6C6DA0EAB65 (Entry_t776AD7605FD3B32B33A463DA5E56809C57BFA1AB* __this, const RuntimeMethod* method)
{
	((  void (*) (Entry_t776AD7605FD3B32B33A463DA5E56809C57BFA1AB*, const RuntimeMethod*))Entry__ctor_m1523ABCDEBE31BA50D6801DB569FB6C6DA0EAB65_gshared)(__this, method);
}
inline void LowLevelDictionary_2_ExpandBuckets_m033D9FFFD113915A8BD824AC730C492F01631A9A (LowLevelDictionary_2_t4C52985827C66ED86805FEED7556812E4207A114* __this, const RuntimeMethod* method)
{
	((  void (*) (LowLevelDictionary_2_t4C52985827C66ED86805FEED7556812E4207A114*, const RuntimeMethod*))LowLevelDictionary_2_ExpandBuckets_m033D9FFFD113915A8BD824AC730C492F01631A9A_gshared)(__this, method);
}
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Lazy_1_CreateViaDefaultConstructor_m9A43B9E6C8F23FB2BF889675D94E6C6CEB9F226C_gshared (Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LazyHelper_t1784351780B2D1AC002869BB3C7A35AA64762602_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_T_tFDA1EE501106CA8E430A8CB6AA3ECF5077C78F04 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1));
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_T_tFDA1EE501106CA8E430A8CB6AA3ECF5077C78F04);
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(LazyHelper_t1784351780B2D1AC002869BB3C7A35AA64762602_il2cpp_TypeInfo_var);
		RuntimeObject* L_2;
		L_2 = LazyHelper_CreateViaDefaultConstructor_mC75D2754BE1E99A66EDA7ACFFA8CD25649198777(L_1, NULL);
		void* L_4 = UnBox_Any(L_2, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1), L_3);
		il2cpp_codegen_memcpy(il2cppRetVal, (((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_4))), SizeOf_T_tFDA1EE501106CA8E430A8CB6AA3ECF5077C78F04);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Lazy_1__ctor_m1AF6B94F08BCE1438A726EAF7C2495E42BE5551E_gshared (Lazy_1_tBAA3E373F2142744F64A913EB230AA096D161A25* __this, const RuntimeMethod* method) 
{
	{
		((  void (*) (Lazy_1_tBAA3E373F2142744F64A913EB230AA096D161A25*, Func_1_tBB8824FA8746333BFFF3AB3CE4A41B58450AF431*, int32_t, bool, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(__this, (Func_1_tBB8824FA8746333BFFF3AB3CE4A41B58450AF431*)NULL, (int32_t)2, (bool)1, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Lazy_1__ctor_mCC33FEF8AF791EA7637DA6122D6F79CE2A842B0F_gshared (Lazy_1_tBAA3E373F2142744F64A913EB230AA096D161A25* __this, Func_1_tBB8824FA8746333BFFF3AB3CE4A41B58450AF431* ___0_valueFactory, const RuntimeMethod* method) 
{
	{
		Func_1_tBB8824FA8746333BFFF3AB3CE4A41B58450AF431* L_0 = ___0_valueFactory;
		((  void (*) (Lazy_1_tBAA3E373F2142744F64A913EB230AA096D161A25*, Func_1_tBB8824FA8746333BFFF3AB3CE4A41B58450AF431*, int32_t, bool, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(__this, L_0, (int32_t)2, (bool)0, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Lazy_1__ctor_m128407F82EAD73C5B1827202AAF0E718944F59C9_gshared (Lazy_1_tBAA3E373F2142744F64A913EB230AA096D161A25* __this, Func_1_tBB8824FA8746333BFFF3AB3CE4A41B58450AF431* ___0_valueFactory, int32_t ___1_mode, bool ___2_useDefaultConstructor, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LazyHelper_t1784351780B2D1AC002869BB3C7A35AA64762602_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		Func_1_tBB8824FA8746333BFFF3AB3CE4A41B58450AF431* L_0 = ___0_valueFactory;
		if (L_0)
		{
			goto IL_0017;
		}
	}
	{
		bool L_1 = ___2_useDefaultConstructor;
		if (L_1)
		{
			goto IL_0017;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_2 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralEF68BB0CB45867DA95163C2C6A4B0677DCE80DCF)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0017:
	{
		Func_1_tBB8824FA8746333BFFF3AB3CE4A41B58450AF431* L_3 = ___0_valueFactory;
		il2cpp_codegen_write_instance_field_data<Func_1_tBB8824FA8746333BFFF3AB3CE4A41B58450AF431*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4),1), L_3);
		int32_t L_4 = ___1_mode;
		bool L_5 = ___2_useDefaultConstructor;
		il2cpp_codegen_runtime_class_init_inline(LazyHelper_t1784351780B2D1AC002869BB3C7A35AA64762602_il2cpp_TypeInfo_var);
		LazyHelper_t1784351780B2D1AC002869BB3C7A35AA64762602* L_6;
		L_6 = LazyHelper_Create_m01DF07EC4B8E6F1EAC2C0D0B5498695B795AA335(L_4, L_5, NULL);
		il2cpp_codegen_memory_barrier();
		il2cpp_codegen_write_instance_field_data<LazyHelper_t1784351780B2D1AC002869BB3C7A35AA64762602*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4),0), L_6);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Lazy_1_ViaConstructor_m7E1CD86244CCC821FECAD1B8C4CA95F9E362D429_gshared (Lazy_1_tBAA3E373F2142744F64A913EB230AA096D161A25* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_tFDA1EE501106CA8E430A8CB6AA3ECF5077C78F04 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_T_tFDA1EE501106CA8E430A8CB6AA3ECF5077C78F04);
	{
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)), il2cpp_rgctx_method(method->klass->rgctx_data, 5), NULL, (Il2CppFullySharedGenericAny*)L_0);
		il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4),2), L_0, SizeOf_T_tFDA1EE501106CA8E430A8CB6AA3ECF5077C78F04);
		il2cpp_codegen_memory_barrier();
		il2cpp_codegen_write_instance_field_data<LazyHelper_t1784351780B2D1AC002869BB3C7A35AA64762602*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4),0), (LazyHelper_t1784351780B2D1AC002869BB3C7A35AA64762602*)NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Lazy_1_ViaFactory_mF106986704E934485CD283C6E31A472B2D826060_gshared (Lazy_1_tBAA3E373F2142744F64A913EB230AA096D161A25* __this, int32_t ___0_mode, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_tFDA1EE501106CA8E430A8CB6AA3ECF5077C78F04 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1));
	const Il2CppFullySharedGenericAny L_4 = alloca(SizeOf_T_tFDA1EE501106CA8E430A8CB6AA3ECF5077C78F04);
	Func_1_tBB8824FA8746333BFFF3AB3CE4A41B58450AF431* V_0 = NULL;
	Exception_t* V_1 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	try
	{
		{
			Func_1_tBB8824FA8746333BFFF3AB3CE4A41B58450AF431* L_0 = *(Func_1_tBB8824FA8746333BFFF3AB3CE4A41B58450AF431**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4),1));
			V_0 = L_0;
			Func_1_tBB8824FA8746333BFFF3AB3CE4A41B58450AF431* L_1 = V_0;
			if (L_1)
			{
				goto IL_0015_1;
			}
		}
		{
			InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_2 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
			InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral27EA076D82B233154707BD958AA3976983CD4084)), NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
		}

IL_0015_1:
		{
			il2cpp_codegen_write_instance_field_data<Func_1_tBB8824FA8746333BFFF3AB3CE4A41B58450AF431*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4),1), (Func_1_tBB8824FA8746333BFFF3AB3CE4A41B58450AF431*)NULL);
			Func_1_tBB8824FA8746333BFFF3AB3CE4A41B58450AF431* L_3 = V_0;
			NullCheck(L_3);
			InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)), il2cpp_rgctx_method(method->klass->rgctx_data, 7), L_3, (Il2CppFullySharedGenericAny*)L_4);
			il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4),2), L_4, SizeOf_T_tFDA1EE501106CA8E430A8CB6AA3ECF5077C78F04);
			il2cpp_codegen_memory_barrier();
			il2cpp_codegen_write_instance_field_data<LazyHelper_t1784351780B2D1AC002869BB3C7A35AA64762602*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4),0), (LazyHelper_t1784351780B2D1AC002869BB3C7A35AA64762602*)NULL);
			goto IL_0045;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0033;
		}
		throw e;
	}

CATCH_0033:
	{
		V_1 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		int32_t L_5 = ___0_mode;
		Exception_t* L_6 = V_1;
		LazyHelper_t1784351780B2D1AC002869BB3C7A35AA64762602* L_7 = (LazyHelper_t1784351780B2D1AC002869BB3C7A35AA64762602*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&LazyHelper_t1784351780B2D1AC002869BB3C7A35AA64762602_il2cpp_TypeInfo_var)));
		LazyHelper__ctor_mB372B9EDE4708D909090AA6ABFDDD1E6E426500A(L_7, L_5, L_6, NULL);
		il2cpp_codegen_memory_barrier();
		il2cpp_codegen_write_instance_field_data<LazyHelper_t1784351780B2D1AC002869BB3C7A35AA64762602*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4),0), L_7);
		IL2CPP_RETHROW_MANAGED_EXCEPTION(IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
	}

IL_0045:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Lazy_1_ExecutionAndPublication_m1AEE2071A0234EF225789AB00DDC48356D767401_gshared (Lazy_1_tBAA3E373F2142744F64A913EB230AA096D161A25* __this, LazyHelper_t1784351780B2D1AC002869BB3C7A35AA64762602* ___0_executionAndPublication, bool ___1_useDefaultConstructor, const RuntimeMethod* method) 
{
	LazyHelper_t1784351780B2D1AC002869BB3C7A35AA64762602* V_0 = NULL;
	bool V_1 = false;
	{
		LazyHelper_t1784351780B2D1AC002869BB3C7A35AA64762602* L_0 = ___0_executionAndPublication;
		V_0 = L_0;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_002b:
			{
				{
					bool L_1 = V_1;
					if (!L_1)
					{
						goto IL_0034;
					}
				}
				{
					LazyHelper_t1784351780B2D1AC002869BB3C7A35AA64762602* L_2 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA((RuntimeObject*)L_2, NULL);
				}

IL_0034:
				{
					return;
				}
			}
		});
		try
		{
			{
				LazyHelper_t1784351780B2D1AC002869BB3C7A35AA64762602* L_3 = V_0;
				Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149((RuntimeObject*)L_3, (&V_1), NULL);
				LazyHelper_t1784351780B2D1AC002869BB3C7A35AA64762602* L_4 = *(LazyHelper_t1784351780B2D1AC002869BB3C7A35AA64762602**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4),0));
				il2cpp_codegen_memory_barrier();
				LazyHelper_t1784351780B2D1AC002869BB3C7A35AA64762602* L_5 = ___0_executionAndPublication;
				if ((!(((RuntimeObject*)(LazyHelper_t1784351780B2D1AC002869BB3C7A35AA64762602*)L_4) == ((RuntimeObject*)(LazyHelper_t1784351780B2D1AC002869BB3C7A35AA64762602*)L_5))))
				{
					goto IL_0029_1;
				}
			}
			{
				bool L_6 = ___1_useDefaultConstructor;
				if (!L_6)
				{
					goto IL_0022_1;
				}
			}
			{
				((  void (*) (Lazy_1_tBAA3E373F2142744F64A913EB230AA096D161A25*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
				goto IL_0035;
			}

IL_0022_1:
			{
				((  void (*) (Lazy_1_tBAA3E373F2142744F64A913EB230AA096D161A25*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))(__this, (int32_t)2, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
			}

IL_0029_1:
			{
				goto IL_0035;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0035:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Lazy_1_PublicationOnly_mC7EBF9FFDB829772057C37705E1DF75EA4B5795C_gshared (Lazy_1_tBAA3E373F2142744F64A913EB230AA096D161A25* __this, LazyHelper_t1784351780B2D1AC002869BB3C7A35AA64762602* ___0_publicationOnly, Il2CppFullySharedGenericAny ___1_possibleValue, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LazyHelper_t1784351780B2D1AC002869BB3C7A35AA64762602_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_T_tFDA1EE501106CA8E430A8CB6AA3ECF5077C78F04 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1));
	const Il2CppFullySharedGenericAny L_4 = alloca(SizeOf_T_tFDA1EE501106CA8E430A8CB6AA3ECF5077C78F04);
	{
		il2cpp_codegen_memory_barrier();
		il2cpp_codegen_runtime_class_init_inline(LazyHelper_t1784351780B2D1AC002869BB3C7A35AA64762602_il2cpp_TypeInfo_var);
		LazyHelper_t1784351780B2D1AC002869BB3C7A35AA64762602* L_0 = ((LazyHelper_t1784351780B2D1AC002869BB3C7A35AA64762602_StaticFields*)il2cpp_codegen_static_fields_for(LazyHelper_t1784351780B2D1AC002869BB3C7A35AA64762602_il2cpp_TypeInfo_var))->___PublicationOnlyWaitForOtherThreadToPublish;
		LazyHelper_t1784351780B2D1AC002869BB3C7A35AA64762602* L_1 = ___0_publicationOnly;
		LazyHelper_t1784351780B2D1AC002869BB3C7A35AA64762602* L_2;
		L_2 = InterlockedCompareExchangeImpl<LazyHelper_t1784351780B2D1AC002869BB3C7A35AA64762602*>((((LazyHelper_t1784351780B2D1AC002869BB3C7A35AA64762602**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4),0)))), L_0, L_1);
		LazyHelper_t1784351780B2D1AC002869BB3C7A35AA64762602* L_3 = ___0_publicationOnly;
		if ((!(((RuntimeObject*)(LazyHelper_t1784351780B2D1AC002869BB3C7A35AA64762602*)L_2) == ((RuntimeObject*)(LazyHelper_t1784351780B2D1AC002869BB3C7A35AA64762602*)L_3))))
		{
			goto IL_002b;
		}
	}
	{
		il2cpp_codegen_write_instance_field_data<Func_1_tBB8824FA8746333BFFF3AB3CE4A41B58450AF431*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4),1), (Func_1_tBB8824FA8746333BFFF3AB3CE4A41B58450AF431*)NULL);
		il2cpp_codegen_memcpy(L_4, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1)) ? ___1_possibleValue : &___1_possibleValue), SizeOf_T_tFDA1EE501106CA8E430A8CB6AA3ECF5077C78F04);
		il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4),2), L_4, SizeOf_T_tFDA1EE501106CA8E430A8CB6AA3ECF5077C78F04);
		il2cpp_codegen_memory_barrier();
		il2cpp_codegen_write_instance_field_data<LazyHelper_t1784351780B2D1AC002869BB3C7A35AA64762602*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4),0), (LazyHelper_t1784351780B2D1AC002869BB3C7A35AA64762602*)NULL);
	}

IL_002b:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Lazy_1_PublicationOnlyViaConstructor_m3C153067B8ECA6DD06E795981DF61E483A8C27DA_gshared (Lazy_1_tBAA3E373F2142744F64A913EB230AA096D161A25* __this, LazyHelper_t1784351780B2D1AC002869BB3C7A35AA64762602* ___0_initializer, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_tFDA1EE501106CA8E430A8CB6AA3ECF5077C78F04 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T_tFDA1EE501106CA8E430A8CB6AA3ECF5077C78F04);
	{
		LazyHelper_t1784351780B2D1AC002869BB3C7A35AA64762602* L_0 = ___0_initializer;
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)), il2cpp_rgctx_method(method->klass->rgctx_data, 5), NULL, (Il2CppFullySharedGenericAny*)L_1);
		InvokerActionInvoker2< LazyHelper_t1784351780B2D1AC002869BB3C7A35AA64762602*, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)), il2cpp_rgctx_method(method->klass->rgctx_data, 10), __this, L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1)) ? L_1: *(void**)L_1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Lazy_1_PublicationOnlyViaFactory_m658355344C9D48BFB1727AB6F4CCF6143B733919_gshared (Lazy_1_tBAA3E373F2142744F64A913EB230AA096D161A25* __this, LazyHelper_t1784351780B2D1AC002869BB3C7A35AA64762602* ___0_initializer, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_tFDA1EE501106CA8E430A8CB6AA3ECF5077C78F04 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1));
	const Il2CppFullySharedGenericAny L_4 = alloca(SizeOf_T_tFDA1EE501106CA8E430A8CB6AA3ECF5077C78F04);
	Func_1_tBB8824FA8746333BFFF3AB3CE4A41B58450AF431* V_0 = NULL;
	{
		Func_1_tBB8824FA8746333BFFF3AB3CE4A41B58450AF431* L_0 = *(Func_1_tBB8824FA8746333BFFF3AB3CE4A41B58450AF431**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4),1));
		V_0 = L_0;
		Func_1_tBB8824FA8746333BFFF3AB3CE4A41B58450AF431* L_1 = V_0;
		if (L_1)
		{
			goto IL_0011;
		}
	}
	{
		((  void (*) (Lazy_1_tBAA3E373F2142744F64A913EB230AA096D161A25*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}

IL_0011:
	{
		LazyHelper_t1784351780B2D1AC002869BB3C7A35AA64762602* L_2 = ___0_initializer;
		Func_1_tBB8824FA8746333BFFF3AB3CE4A41B58450AF431* L_3 = V_0;
		NullCheck(L_3);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)), il2cpp_rgctx_method(method->klass->rgctx_data, 7), L_3, (Il2CppFullySharedGenericAny*)L_4);
		InvokerActionInvoker2< LazyHelper_t1784351780B2D1AC002869BB3C7A35AA64762602*, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)), il2cpp_rgctx_method(method->klass->rgctx_data, 10), __this, L_2, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1)) ? L_4: *(void**)L_4));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Lazy_1_PublicationOnlyWaitForOtherThreadToPublish_m74547D848F24BBAE5BD98B37D07CA0F62250B58A_gshared (Lazy_1_tBAA3E373F2142744F64A913EB230AA096D161A25* __this, const RuntimeMethod* method) 
{
	SpinWait_t51CFFA8FF70F1B430E075F96CFD936260D8CE675 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(SpinWait_t51CFFA8FF70F1B430E075F96CFD936260D8CE675));
		goto IL_0011;
	}

IL_000a:
	{
		SpinWait_SpinOnce_m5B74E6B15013E90667646C0D943E886D4EC596AF((&V_0), NULL);
	}

IL_0011:
	{
		LazyHelper_t1784351780B2D1AC002869BB3C7A35AA64762602* L_0 = *(LazyHelper_t1784351780B2D1AC002869BB3C7A35AA64762602**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4),0));
		il2cpp_codegen_memory_barrier();
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Lazy_1_CreateValue_mA7F4E97D796CB764940F6D66091403A18CC4FB16_gshared (Lazy_1_tBAA3E373F2142744F64A913EB230AA096D161A25* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_tFDA1EE501106CA8E430A8CB6AA3ECF5077C78F04 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1));
	const Il2CppFullySharedGenericAny L_10 = alloca(SizeOf_T_tFDA1EE501106CA8E430A8CB6AA3ECF5077C78F04);
	LazyHelper_t1784351780B2D1AC002869BB3C7A35AA64762602* V_0 = NULL;
	int32_t V_1 = 0;
	{
		LazyHelper_t1784351780B2D1AC002869BB3C7A35AA64762602* L_0 = *(LazyHelper_t1784351780B2D1AC002869BB3C7A35AA64762602**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4),0));
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		LazyHelper_t1784351780B2D1AC002869BB3C7A35AA64762602* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0084;
		}
	}
	{
		LazyHelper_t1784351780B2D1AC002869BB3C7A35AA64762602* L_2 = V_0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = LazyHelper_get_State_m8EE9669E6DC61CC32EC9B8C29B006D83009971CD_inline(L_2, NULL);
		V_1 = L_3;
		int32_t L_4 = V_1;
		switch (L_4)
		{
			case 0:
			{
				goto IL_003f;
			}
			case 1:
			{
				goto IL_0047;
			}
			case 2:
			{
				goto IL_007e;
			}
			case 3:
			{
				goto IL_0050;
			}
			case 4:
			{
				goto IL_0059;
			}
			case 5:
			{
				goto IL_0062;
			}
			case 6:
			{
				goto IL_007e;
			}
			case 7:
			{
				goto IL_006a;
			}
			case 8:
			{
				goto IL_0074;
			}
		}
	}
	{
		goto IL_007e;
	}

IL_003f:
	{
		((  void (*) (Lazy_1_tBAA3E373F2142744F64A913EB230AA096D161A25*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		goto IL_0084;
	}

IL_0047:
	{
		((  void (*) (Lazy_1_tBAA3E373F2142744F64A913EB230AA096D161A25*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))(__this, (int32_t)0, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		goto IL_0084;
	}

IL_0050:
	{
		LazyHelper_t1784351780B2D1AC002869BB3C7A35AA64762602* L_5 = V_0;
		((  void (*) (Lazy_1_tBAA3E373F2142744F64A913EB230AA096D161A25*, LazyHelper_t1784351780B2D1AC002869BB3C7A35AA64762602*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)))(__this, L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		goto IL_0084;
	}

IL_0059:
	{
		LazyHelper_t1784351780B2D1AC002869BB3C7A35AA64762602* L_6 = V_0;
		((  void (*) (Lazy_1_tBAA3E373F2142744F64A913EB230AA096D161A25*, LazyHelper_t1784351780B2D1AC002869BB3C7A35AA64762602*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 13)))(__this, L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		goto IL_0084;
	}

IL_0062:
	{
		((  void (*) (Lazy_1_tBAA3E373F2142744F64A913EB230AA096D161A25*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		goto IL_0084;
	}

IL_006a:
	{
		LazyHelper_t1784351780B2D1AC002869BB3C7A35AA64762602* L_7 = V_0;
		((  void (*) (Lazy_1_tBAA3E373F2142744F64A913EB230AA096D161A25*, LazyHelper_t1784351780B2D1AC002869BB3C7A35AA64762602*, bool, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 14)))(__this, L_7, (bool)1, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		goto IL_0084;
	}

IL_0074:
	{
		LazyHelper_t1784351780B2D1AC002869BB3C7A35AA64762602* L_8 = V_0;
		((  void (*) (Lazy_1_tBAA3E373F2142744F64A913EB230AA096D161A25*, LazyHelper_t1784351780B2D1AC002869BB3C7A35AA64762602*, bool, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 14)))(__this, L_8, (bool)0, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		goto IL_0084;
	}

IL_007e:
	{
		LazyHelper_t1784351780B2D1AC002869BB3C7A35AA64762602* L_9 = V_0;
		NullCheck(L_9);
		LazyHelper_ThrowException_mE49F09D8EA546B828AE5AA9C008152F79FB93221(L_9, NULL);
	}

IL_0084:
	{
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)), il2cpp_rgctx_method(method->klass->rgctx_data, 15), __this, (Il2CppFullySharedGenericAny*)L_10);
		il2cpp_codegen_memcpy(il2cppRetVal, L_10, SizeOf_T_tFDA1EE501106CA8E430A8CB6AA3ECF5077C78F04);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Lazy_1_ToString_mB1FAAC409A1C69F7908273B0A90416AEACBFBE61_gshared (Lazy_1_tBAA3E373F2142744F64A913EB230AA096D161A25* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral946ECD27C1C53A25C82D0F80916982541BE6CE15);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_T_tFDA1EE501106CA8E430A8CB6AA3ECF5077C78F04 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1));
	void* L_2 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->klass->rgctx_data, 1)));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T_tFDA1EE501106CA8E430A8CB6AA3ECF5077C78F04);
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_T_tFDA1EE501106CA8E430A8CB6AA3ECF5077C78F04);
	memset(V_0, 0, SizeOf_T_tFDA1EE501106CA8E430A8CB6AA3ECF5077C78F04);
	{
		bool L_0;
		L_0 = ((  bool (*) (Lazy_1_tBAA3E373F2142744F64A913EB230AA096D161A25*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 16)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		return _stringLiteral946ECD27C1C53A25C82D0F80916982541BE6CE15;
	}

IL_000e:
	{
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)), il2cpp_rgctx_method(method->klass->rgctx_data, 15), __this, (Il2CppFullySharedGenericAny*)L_1);
		il2cpp_codegen_memcpy(V_0, L_1, SizeOf_T_tFDA1EE501106CA8E430A8CB6AA3ECF5077C78F04);
		String_t* L_3;
		L_3 = ConstrainedFuncInvoker0< String_t* >::Invoke(il2cpp_rgctx_data(method->klass->rgctx_data, 1), il2cpp_rgctx_method(method->klass->rgctx_data, 17), L_2, (void*)(Il2CppFullySharedGenericAny*)V_0);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Lazy_1_get_ValueForDebugDisplay_m28AEF6E4C0433D6B00EE61C6C9F956FFC85D31A5_gshared (Lazy_1_tBAA3E373F2142744F64A913EB230AA096D161A25* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_tFDA1EE501106CA8E430A8CB6AA3ECF5077C78F04 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T_tFDA1EE501106CA8E430A8CB6AA3ECF5077C78F04);
	const Il2CppFullySharedGenericAny L_2 = L_1;
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_T_tFDA1EE501106CA8E430A8CB6AA3ECF5077C78F04);
	memset(V_0, 0, SizeOf_T_tFDA1EE501106CA8E430A8CB6AA3ECF5077C78F04);
	{
		bool L_0;
		L_0 = ((  bool (*) (Lazy_1_tBAA3E373F2142744F64A913EB230AA096D161A25*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 16)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_0, SizeOf_T_tFDA1EE501106CA8E430A8CB6AA3ECF5077C78F04);
		il2cpp_codegen_memcpy(L_1, V_0, SizeOf_T_tFDA1EE501106CA8E430A8CB6AA3ECF5077C78F04);
		il2cpp_codegen_memcpy(il2cppRetVal, L_1, SizeOf_T_tFDA1EE501106CA8E430A8CB6AA3ECF5077C78F04);
		return;
	}

IL_0012:
	{
		il2cpp_codegen_memcpy(L_2, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4),2)), SizeOf_T_tFDA1EE501106CA8E430A8CB6AA3ECF5077C78F04);
		il2cpp_codegen_memcpy(il2cppRetVal, L_2, SizeOf_T_tFDA1EE501106CA8E430A8CB6AA3ECF5077C78F04);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_tD9A4AFB06DB90AB3FAD2F61F0888AD20DC159BF1 Lazy_1_get_Mode_m4F02E6D621ED57C6D5B65872BF090E06690BD0AB_gshared (Lazy_1_tBAA3E373F2142744F64A913EB230AA096D161A25* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LazyHelper_t1784351780B2D1AC002869BB3C7A35AA64762602_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		LazyHelper_t1784351780B2D1AC002869BB3C7A35AA64762602* L_0 = *(LazyHelper_t1784351780B2D1AC002869BB3C7A35AA64762602**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4),0));
		il2cpp_codegen_memory_barrier();
		il2cpp_codegen_runtime_class_init_inline(LazyHelper_t1784351780B2D1AC002869BB3C7A35AA64762602_il2cpp_TypeInfo_var);
		Nullable_1_tD9A4AFB06DB90AB3FAD2F61F0888AD20DC159BF1 L_1;
		L_1 = LazyHelper_GetMode_m22C5EEBAF8970A588272D7AA5BA309C998E5F6C1(L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Lazy_1_get_IsValueFaulted_mEED362F281ECFD6DB8284760BCF9067BE33ADF84_gshared (Lazy_1_tBAA3E373F2142744F64A913EB230AA096D161A25* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LazyHelper_t1784351780B2D1AC002869BB3C7A35AA64762602_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		LazyHelper_t1784351780B2D1AC002869BB3C7A35AA64762602* L_0 = *(LazyHelper_t1784351780B2D1AC002869BB3C7A35AA64762602**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4),0));
		il2cpp_codegen_memory_barrier();
		il2cpp_codegen_runtime_class_init_inline(LazyHelper_t1784351780B2D1AC002869BB3C7A35AA64762602_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = LazyHelper_GetIsValueFaulted_m9DFC32520AA1B57F8FF21F80568A6343117DE148(L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Lazy_1_get_IsValueCreated_m40AF5CE0378B865EE7BA8BAF16E2A3174AA9E92C_gshared (Lazy_1_tBAA3E373F2142744F64A913EB230AA096D161A25* __this, const RuntimeMethod* method) 
{
	{
		LazyHelper_t1784351780B2D1AC002869BB3C7A35AA64762602* L_0 = *(LazyHelper_t1784351780B2D1AC002869BB3C7A35AA64762602**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4),0));
		il2cpp_codegen_memory_barrier();
		return (bool)((((RuntimeObject*)(LazyHelper_t1784351780B2D1AC002869BB3C7A35AA64762602*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Lazy_1_get_Value_mC40A4B2AF05EF6967CC0952495F59403E331E65F_gshared (Lazy_1_tBAA3E373F2142744F64A913EB230AA096D161A25* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_tFDA1EE501106CA8E430A8CB6AA3ECF5077C78F04 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T_tFDA1EE501106CA8E430A8CB6AA3ECF5077C78F04);
	const Il2CppFullySharedGenericAny L_2 = L_1;
	{
		LazyHelper_t1784351780B2D1AC002869BB3C7A35AA64762602* L_0 = *(LazyHelper_t1784351780B2D1AC002869BB3C7A35AA64762602**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4),0));
		il2cpp_codegen_memory_barrier();
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 18)), il2cpp_rgctx_method(method->klass->rgctx_data, 18), __this, (Il2CppFullySharedGenericAny*)L_1);
		il2cpp_codegen_memcpy(il2cppRetVal, L_1, SizeOf_T_tFDA1EE501106CA8E430A8CB6AA3ECF5077C78F04);
		return;
	}

IL_0011:
	{
		il2cpp_codegen_memcpy(L_2, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4),2)), SizeOf_T_tFDA1EE501106CA8E430A8CB6AA3ECF5077C78F04);
		il2cpp_codegen_memcpy(il2cppRetVal, L_2, SizeOf_T_tFDA1EE501106CA8E430A8CB6AA3ECF5077C78F04);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListBuilder_1__ctor_mFC129BE2CF658F37264E5AE87C38ACBE1686FC06_gshared (ListBuilder_1_tCC8A75CAC31AC22CAA5DFE54A082DB3FA07EAD51* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	{
		__this->____items = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)NULL);
		RuntimeObject** L_0 = (RuntimeObject**)(&__this->____item);
		il2cpp_codegen_initobj(L_0, sizeof(RuntimeObject*));
		__this->____count = 0;
		int32_t L_1 = ___0_capacity;
		__this->____capacity = L_1;
		return;
	}
}
IL2CPP_EXTERN_C  void ListBuilder_1__ctor_mFC129BE2CF658F37264E5AE87C38ACBE1686FC06_AdjustorThunk (RuntimeObject* __this, int32_t ___0_capacity, const RuntimeMethod* method)
{
	ListBuilder_1_tCC8A75CAC31AC22CAA5DFE54A082DB3FA07EAD51* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ListBuilder_1_tCC8A75CAC31AC22CAA5DFE54A082DB3FA07EAD51*>(__this + _offset);
	ListBuilder_1__ctor_mFC129BE2CF658F37264E5AE87C38ACBE1686FC06(_thisAdjusted, ___0_capacity, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ListBuilder_1_get_Item_m23AA6DB4615BCE00F8A63C6152113822F0250EEE_gshared (ListBuilder_1_tCC8A75CAC31AC22CAA5DFE54A082DB3FA07EAD51* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = __this->____items;
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		RuntimeObject* L_1 = __this->____item;
		return L_1;
	}

IL_000f:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = __this->____items;
		int32_t L_3 = ___0_index;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		return L_5;
	}
}
IL2CPP_EXTERN_C  RuntimeObject* ListBuilder_1_get_Item_m23AA6DB4615BCE00F8A63C6152113822F0250EEE_AdjustorThunk (RuntimeObject* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	ListBuilder_1_tCC8A75CAC31AC22CAA5DFE54A082DB3FA07EAD51* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ListBuilder_1_tCC8A75CAC31AC22CAA5DFE54A082DB3FA07EAD51*>(__this + _offset);
	RuntimeObject* _returnValue;
	_returnValue = ListBuilder_1_get_Item_m23AA6DB4615BCE00F8A63C6152113822F0250EEE(_thisAdjusted, ___0_index, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ListBuilder_1_ToArray_mADCCB17012F7FB8EE90E45E2CD13DBD2E71FE781_gshared (ListBuilder_1_tCC8A75CAC31AC22CAA5DFE54A082DB3FA07EAD51* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____count;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1;
		L_1 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____count;
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			goto IL_002b;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 4), (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = L_3;
		RuntimeObject* L_5 = __this->____item;
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_5);
		return L_4;
	}

IL_002b:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918** L_6 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918**)(&__this->____items);
		int32_t L_7 = __this->____count;
		Array_Resize_TisRuntimeObject_mE8D92C287251BAF8256D85E5829F749359EC334E(L_6, L_7, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		int32_t L_8 = __this->____count;
		__this->____capacity = L_8;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = __this->____items;
		return L_9;
	}
}
IL2CPP_EXTERN_C  ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ListBuilder_1_ToArray_mADCCB17012F7FB8EE90E45E2CD13DBD2E71FE781_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ListBuilder_1_tCC8A75CAC31AC22CAA5DFE54A082DB3FA07EAD51* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ListBuilder_1_tCC8A75CAC31AC22CAA5DFE54A082DB3FA07EAD51*>(__this + _offset);
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* _returnValue;
	_returnValue = ListBuilder_1_ToArray_mADCCB17012F7FB8EE90E45E2CD13DBD2E71FE781(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListBuilder_1_CopyTo_m07DD8110CA53CAE4B1C65F1E9A2AC9C074F14378_gshared (ListBuilder_1_tCC8A75CAC31AC22CAA5DFE54A082DB3FA07EAD51* __this, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____count;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		return;
	}

IL_0009:
	{
		int32_t L_1 = __this->____count;
		if ((!(((uint32_t)L_1) == ((uint32_t)1))))
		{
			goto IL_0021;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = ___0_array;
		int32_t L_3 = ___1_index;
		RuntimeObject* L_4 = __this->____item;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_4);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(L_3), (RuntimeObject*)L_4);
		return;
	}

IL_0021:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = __this->____items;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = ___0_array;
		int32_t L_7 = ___1_index;
		int32_t L_8 = __this->____count;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, 0, (RuntimeArray*)L_6, L_7, L_8, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void ListBuilder_1_CopyTo_m07DD8110CA53CAE4B1C65F1E9A2AC9C074F14378_AdjustorThunk (RuntimeObject* __this, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_array, int32_t ___1_index, const RuntimeMethod* method)
{
	ListBuilder_1_tCC8A75CAC31AC22CAA5DFE54A082DB3FA07EAD51* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ListBuilder_1_tCC8A75CAC31AC22CAA5DFE54A082DB3FA07EAD51*>(__this + _offset);
	ListBuilder_1_CopyTo_m07DD8110CA53CAE4B1C65F1E9A2AC9C074F14378(_thisAdjusted, ___0_array, ___1_index, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ListBuilder_1_get_Count_m5FC923A60B6BCD6D28FA95B0495EF5E537266285_gshared (ListBuilder_1_tCC8A75CAC31AC22CAA5DFE54A082DB3FA07EAD51* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____count;
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t ListBuilder_1_get_Count_m5FC923A60B6BCD6D28FA95B0495EF5E537266285_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ListBuilder_1_tCC8A75CAC31AC22CAA5DFE54A082DB3FA07EAD51* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ListBuilder_1_tCC8A75CAC31AC22CAA5DFE54A082DB3FA07EAD51*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = ListBuilder_1_get_Count_m5FC923A60B6BCD6D28FA95B0495EF5E537266285_inline(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListBuilder_1_Add_mC19811ACD1D830765599A1583F96C56D16A9E5AD_gshared (ListBuilder_1_tCC8A75CAC31AC22CAA5DFE54A082DB3FA07EAD51* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____count;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		RuntimeObject* L_1 = ___0_item;
		__this->____item = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____item), (void*)L_1);
		goto IL_008b;
	}

IL_0011:
	{
		int32_t L_2 = __this->____count;
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			goto IL_004f;
		}
	}
	{
		int32_t L_3 = __this->____capacity;
		if ((((int32_t)L_3) >= ((int32_t)2)))
		{
			goto IL_002a;
		}
	}
	{
		__this->____capacity = 4;
	}

IL_002a:
	{
		int32_t L_4 = __this->____capacity;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 4), (uint32_t)L_4);
		__this->____items = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_5);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = __this->____items;
		RuntimeObject* L_7 = __this->____item;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_7);
		goto IL_0079;
	}

IL_004f:
	{
		int32_t L_8 = __this->____capacity;
		int32_t L_9 = __this->____count;
		if ((!(((uint32_t)L_8) == ((uint32_t)L_9))))
		{
			goto IL_0079;
		}
	}
	{
		int32_t L_10 = __this->____capacity;
		V_0 = ((int32_t)il2cpp_codegen_multiply(2, L_10));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918** L_11 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918**)(&__this->____items);
		int32_t L_12 = V_0;
		Array_Resize_TisRuntimeObject_mE8D92C287251BAF8256D85E5829F749359EC334E(L_11, L_12, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		int32_t L_13 = V_0;
		__this->____capacity = L_13;
	}

IL_0079:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = __this->____items;
		int32_t L_15 = __this->____count;
		RuntimeObject* L_16 = ___0_item;
		NullCheck(L_14);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(L_15), (RuntimeObject*)L_16);
	}

IL_008b:
	{
		int32_t L_17 = __this->____count;
		__this->____count = ((int32_t)il2cpp_codegen_add(L_17, 1));
		return;
	}
}
IL2CPP_EXTERN_C  void ListBuilder_1_Add_mC19811ACD1D830765599A1583F96C56D16A9E5AD_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_item, const RuntimeMethod* method)
{
	ListBuilder_1_tCC8A75CAC31AC22CAA5DFE54A082DB3FA07EAD51* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ListBuilder_1_tCC8A75CAC31AC22CAA5DFE54A082DB3FA07EAD51*>(__this + _offset);
	ListBuilder_1_Add_mC19811ACD1D830765599A1583F96C56D16A9E5AD(_thisAdjusted, ___0_item, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ListElementProperty_get_Index_mA30B0CCEE05FAD55B6347A3A5AD3DB87C534C991_gshared (ListElementProperty_t615C280FCD7BA320329E2CB3E3B52EE88FA09282* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___m_Index;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ListElementProperty_get_Name_mD63E99564CE717F658236FB206AFDBF186D61C96_gshared (ListElementProperty_t615C280FCD7BA320329E2CB3E3B52EE88FA09282* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = ((  int32_t (*) (ListElementProperty_t615C280FCD7BA320329E2CB3E3B52EE88FA09282*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
		V_0 = L_0;
		String_t* L_1;
		L_1 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_0), NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListElementProperty__ctor_m255BE324AA407A1ACA07672D7484D8853F225A54_gshared (ListElementProperty_t615C280FCD7BA320329E2CB3E3B52EE88FA09282* __this, const RuntimeMethod* method) 
{
	{
		((  void (*) (Property_2_tE9B27417C17E0D8EA0D6A88F71B3C9347F2332A3*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))((Property_2_tE9B27417C17E0D8EA0D6A88F71B3C9347F2332A3*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ListPropertyBag_1_get_InstantiationKind_m87C5E9BF90430D9A99A2E9870C49268CBC8847DC_gshared (ListPropertyBag_1_tD68AC11290FE8987B600F306DBAE907249E1AC26* __this, const RuntimeMethod* method) 
{
	{
		return (int32_t)(1);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* ListPropertyBag_1_InstantiateWithCount_m6108E73D9717699A67018C7AB67B4BB1C78D1A05_gshared (ListPropertyBag_1_tD68AC11290FE8987B600F306DBAE907249E1AC26* __this, int32_t ___0_count, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_count;
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_1 = (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 0));
		((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(L_1, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* ListPropertyBag_1_Instantiate_m7F8B9F4F5C35FD9D17D89CA606C7340E5121B19F_gshared (ListPropertyBag_1_tD68AC11290FE8987B600F306DBAE907249E1AC26* __this, const RuntimeMethod* method) 
{
	{
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_0 = (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 0));
		((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListPropertyBag_1__ctor_m13B50B342F6F11640D2535EF8957D87BA7DA8147_gshared (ListPropertyBag_1_tD68AC11290FE8987B600F306DBAE907249E1AC26* __this, const RuntimeMethod* method) 
{
	{
		((  void (*) (IndexedCollectionPropertyBag_2_t9CFEACD6C16F18DE7CFC0FF1B789D5E4C3E70488*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))((IndexedCollectionPropertyBag_2_t9CFEACD6C16F18DE7CFC0FF1B789D5E4C3E70488*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = ((List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 2)))->___s_emptyArray;
		__this->____items = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m30DD6F0F8DFBA9856BF7220A3CDB1C89ECEC0D98_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0012;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F((int32_t)((int32_t)12), (int32_t)4, NULL);
	}

IL_0012:
	{
		int32_t L_1 = ___0_capacity;
		if (L_1)
		{
			goto IL_0021;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = ((List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 2)))->___s_emptyArray;
		__this->____items = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_2);
		return;
	}

IL_0021:
	{
		int32_t L_3 = ___0_capacity;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_3);
		__this->____items = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_4);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mCC0E71080DE343C1A527526A1AC2DBEC355CEA6C_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	int32_t V_1 = 0;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		RuntimeObject* L_0 = ___0_collection;
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)6, NULL);
	}

IL_000f:
	{
		RuntimeObject* L_1 = ___0_collection;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_1, il2cpp_rgctx_data(method->klass->rgctx_data, 5)));
		RuntimeObject* L_2 = V_0;
		if (!L_2)
		{
			goto IL_0050;
		}
	}
	{
		RuntimeObject* L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 5), L_3);
		V_1 = L_4;
		int32_t L_5 = V_1;
		if (L_5)
		{
			goto IL_002f;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = ((List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 2)))->___s_emptyArray;
		__this->____items = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_6);
		return;
	}

IL_002f:
	{
		int32_t L_7 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_7);
		__this->____items = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_8);
		RuntimeObject* L_9 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = __this->____items;
		NullCheck(L_9);
		InterfaceActionInvoker2< Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*, int32_t >::Invoke(5, il2cpp_rgctx_data(method->klass->rgctx_data, 5), L_9, L_10, 0);
		int32_t L_11 = V_1;
		__this->____size = L_11;
		return;
	}

IL_0050:
	{
		__this->____size = 0;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = ((List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 2)))->___s_emptyArray;
		__this->____items = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_12);
		RuntimeObject* L_13 = ___0_collection;
		List_1_AddEnumerable_m0D03C24E342A0F77A0042603E40AD506136B684F(__this, L_13, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Capacity_mA667E9DF466C9574AC22A4B0FE0E358D818505CC_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	{
		int32_t L_0 = ___0_value;
		int32_t L_1 = __this->____size;
		if ((((int32_t)L_0) >= ((int32_t)L_1)))
		{
			goto IL_0012;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F((int32_t)((int32_t)15), (int32_t)((int32_t)21), NULL);
	}

IL_0012:
	{
		int32_t L_2 = ___0_value;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = __this->____items;
		NullCheck(L_3);
		if ((((int32_t)L_2) == ((int32_t)((int32_t)(((RuntimeArray*)L_3)->max_length)))))
		{
			goto IL_0058;
		}
	}
	{
		int32_t L_4 = ___0_value;
		if ((((int32_t)L_4) <= ((int32_t)0)))
		{
			goto IL_004d;
		}
	}
	{
		int32_t L_5 = ___0_value;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_5);
		V_0 = L_6;
		int32_t L_7 = __this->____size;
		if ((((int32_t)L_7) <= ((int32_t)0)))
		{
			goto IL_0045;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = __this->____items;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = V_0;
		int32_t L_10 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_8, 0, (RuntimeArray*)L_9, 0, L_10, NULL);
	}

IL_0045:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = V_0;
		__this->____items = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_11);
		return;
	}

IL_004d:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = ((List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 2)))->___s_emptyArray;
		__this->____items = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_12);
	}

IL_0058:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_mDA21D2FFF7A4A17311DEA5D1F58D0B5FDF8D5D71_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_System_Collections_IList_get_IsReadOnly_m0282477399CABCA202E725739468CDD1A81894A8_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_System_Collections_ICollection_get_SyncRoot_m7955A9D0A82598F84D4B407A1C5859C271D02BD9_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____syncRoot;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject** L_1 = (RuntimeObject**)(&__this->____syncRoot);
		RuntimeObject* L_2 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_2, NULL);
		RuntimeObject* L_3;
		L_3 = InterlockedCompareExchangeImpl<RuntimeObject*>(L_1, L_2, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = __this->____syncRoot;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRange_IndexException_mC7661B8C6DD827679C95FC6B6C08F8724174936D(NULL);
	}

IL_000e:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = __this->____items;
		int32_t L_3 = ___0_index;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		int32_t L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Item_m95629806F31CF369D937590912E0B6A53FF7C587_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_index, int32_t ___1_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRange_IndexException_mC7661B8C6DD827679C95FC6B6C08F8724174936D(NULL);
	}

IL_000e:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = __this->____items;
		int32_t L_3 = ___0_index;
		int32_t L_4 = ___1_value;
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(L_3), (int32_t)L_4);
		int32_t L_5 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_5, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_IsCompatibleObject_m0C506FD38C6F16AC8A7700817EF89401910F873C_gshared (RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0 = ___0_value;
		if (((RuntimeObject*)IsInst((RuntimeObject*)L_0, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 9))))
		{
			goto IL_001f;
		}
	}
	{
		RuntimeObject* L_1 = ___0_value;
		if (L_1)
		{
			goto IL_001d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(int32_t));
		int32_t L_2 = V_0;
		return false;
	}

IL_001d:
	{
		return (bool)0;
	}

IL_001f:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_System_Collections_IList_get_Item_m1E933D1B423B829C27D0AAE6181F4C5E0CA89F33_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		int32_t L_1;
		L_1 = List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		int32_t L_2 = L_1;
		RuntimeObject* L_3 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9), &L_2);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_System_Collections_IList_set_Item_m9CD1267F4F075504130F719883E3EFD9DF762253_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_index, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeObject* L_0 = ___1_value;
		ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m0F7A078274F301B83DFC51191B3AFC763DE9C4D0(L_0, (int32_t)((int32_t)15), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
	}
	try
	{
		int32_t L_1 = ___0_index;
		RuntimeObject* L_2 = ___1_value;
		List_1_set_Item_m95629806F31CF369D937590912E0B6A53FF7C587(__this, L_1, ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 9))))), il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		goto IL_002a;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0017;
		}
		throw e;
	}

CATCH_0017:
	{
		RuntimeObject* L_3 = ___1_value;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_4 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 13)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_5;
		L_5 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_4, NULL);
		ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_3, L_5, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_002a;
	}

IL_002a:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_item, const RuntimeMethod* method) 
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____items;
		V_0 = L_1;
		int32_t L_2 = __this->____size;
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
		__this->____size = ((int32_t)il2cpp_codegen_add(L_5, 1));
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
		List_1_AddWithResize_m378B392086AAB6F400944FA9839516326B3F7BB8(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void List_1_AddWithResize_m378B392086AAB6F400944FA9839516326B3F7BB8_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____size;
		V_0 = L_0;
		int32_t L_1 = V_0;
		List_1_EnsureCapacity_m86DF3071CD67B1463C1CF26C7791331D70D431C0(__this, ((int32_t)il2cpp_codegen_add(L_1, 1)), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		int32_t L_2 = V_0;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_2, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = __this->____items;
		int32_t L_4 = V_0;
		int32_t L_5 = ___0_item;
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(L_4), (int32_t)L_5);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_System_Collections_IList_Add_m39E3DB029FA8CE14D5437A70E01A96684957F6B6_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeObject* L_0 = ___0_item;
		ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m0F7A078274F301B83DFC51191B3AFC763DE9C4D0(L_0, (int32_t)((int32_t)20), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
	}
	try
	{
		RuntimeObject* L_1 = ___0_item;
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(__this, ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_1, il2cpp_rgctx_data(method->klass->rgctx_data, 9))))), il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		goto IL_0029;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0016;
		}
		throw e;
	}

CATCH_0016:
	{
		RuntimeObject* L_2 = ___0_item;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 13)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_2, L_4, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0029;
	}

IL_0029:
	{
		int32_t L_5;
		L_5 = List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 17));
		return ((int32_t)il2cpp_codegen_subtract(L_5, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddRange_m1A10E697703D67F6551D47C603FFE78E16CE4204_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		RuntimeObject* L_1 = ___0_collection;
		List_1_InsertRange_m1D3DE2073A8946E2D1113677F2062F35881FA7B8(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Clear_mF6795DE5F49C1D0B91D6A0955F448B22970D67A9_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		goto IL_0035;
	}

IL_0035:
	{
		__this->____size = 0;
	}

IL_003c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_m4FD96E89F15844C90032C7386BAB528817F1FF5B_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_item, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___0_item;
		int32_t L_2;
		L_2 = List_1_IndexOf_mC3D1A2CECAC0E3D42C78B43772E1BD3D0333C450(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		return (bool)((((int32_t)((((int32_t)L_2) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0016:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_System_Collections_IList_Contains_mE7517FD1F4EBD12003672EAFAEB76B269822CD44_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_item;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		bool L_1;
		L_1 = List_1_IsCompatibleObject_m0C506FD38C6F16AC8A7700817EF89401910F873C(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_item;
		bool L_3;
		L_3 = List_1_Contains_m4FD96E89F15844C90032C7386BAB528817F1FF5B(__this, ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 9))))), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_CopyTo_mF4D90DC6EDE97B45F2F568839E9D5C34233FFA6B_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_array, const RuntimeMethod* method) 
{
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = ___0_array;
		List_1_CopyTo_m030AAF730ACCF739D45671086EBF4786FED908D5(__this, L_0, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_System_Collections_ICollection_CopyTo_mB9E522FCF1D9B1628FBD94CA249A772409309756_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, RuntimeArray* ___0_array, int32_t ___1_arrayIndex, const RuntimeMethod* method) 
{
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		RuntimeArray* L_1 = ___0_array;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(L_1, NULL);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0012;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)7, NULL);
	}

IL_0012:
	{
	}
	try
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = __this->____items;
		RuntimeArray* L_4 = ___0_array;
		int32_t L_5 = ___1_arrayIndex;
		int32_t L_6 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_3, 0, L_4, L_5, L_6, NULL);
		goto IL_0031;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0029;
		}
		throw e;
	}

CATCH_0029:
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0031;
	}

IL_0031:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_CopyTo_m030AAF730ACCF739D45671086EBF4786FED908D5_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_array, int32_t ___1_arrayIndex, const RuntimeMethod* method) 
{
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = __this->____items;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = ___0_array;
		int32_t L_2 = ___1_arrayIndex;
		int32_t L_3 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_0, 0, (RuntimeArray*)L_1, L_2, L_3, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_EnsureCapacity_m86DF3071CD67B1463C1CF26C7791331D70D431C0_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_min, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t G_B4_0 = 0;
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = __this->____items;
		NullCheck(L_0);
		int32_t L_1 = ___0_min;
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length))) >= ((int32_t)L_1)))
		{
			goto IL_003d;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = __this->____items;
		NullCheck(L_2);
		if (!(((RuntimeArray*)L_2)->max_length))
		{
			goto IL_0020;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = __this->____items;
		NullCheck(L_3);
		G_B4_0 = ((int32_t)il2cpp_codegen_multiply(((int32_t)(((RuntimeArray*)L_3)->max_length)), 2));
		goto IL_0021;
	}

IL_0020:
	{
		G_B4_0 = 4;
	}

IL_0021:
	{
		V_0 = G_B4_0;
		int32_t L_4 = V_0;
		if ((!(((uint32_t)L_4) > ((uint32_t)((int32_t)2146435071)))))
		{
			goto IL_0030;
		}
	}
	{
		V_0 = ((int32_t)2146435071);
	}

IL_0030:
	{
		int32_t L_5 = V_0;
		int32_t L_6 = ___0_min;
		if ((((int32_t)L_5) >= ((int32_t)L_6)))
		{
			goto IL_0036;
		}
	}
	{
		int32_t L_7 = ___0_min;
		V_0 = L_7;
	}

IL_0036:
	{
		int32_t L_8 = V_0;
		List_1_set_Capacity_mA667E9DF466C9574AC22A4B0FE0E358D818505CC(__this, L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 24));
	}

IL_003d:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9DBCD072C72E44AB8959D9884EF7F528028F20EC List_1_GetEnumerator_mCADB185AB483C855873FCD0B1D5AAC909ED7F7BD_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t9DBCD072C72E44AB8959D9884EF7F528028F20EC L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mB5D11409C5765078140B3C3652FEF06536FDFA6B((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_mB9F20F5DCF4F0D1D426C507F13B662C972AE4516_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t9DBCD072C72E44AB8959D9884EF7F528028F20EC L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mB5D11409C5765078140B3C3652FEF06536FDFA6B((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		Enumerator_t9DBCD072C72E44AB8959D9884EF7F528028F20EC L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 25), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_System_Collections_IEnumerable_GetEnumerator_mC6BECA0B4B79418D229C9568104AEBCE2D23C903_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t9DBCD072C72E44AB8959D9884EF7F528028F20EC L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mB5D11409C5765078140B3C3652FEF06536FDFA6B((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		Enumerator_t9DBCD072C72E44AB8959D9884EF7F528028F20EC L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 25), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_IndexOf_mC3D1A2CECAC0E3D42C78B43772E1BD3D0333C450_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_item, const RuntimeMethod* method) 
{
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = __this->____items;
		int32_t L_1 = ___0_item;
		int32_t L_2 = __this->____size;
		int32_t L_3;
		L_3 = Array_IndexOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m22CB8CB6C30E1C3E70C8662D7A290B88EF5007F3(L_0, L_1, 0, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_System_Collections_IList_IndexOf_m9FC60CFC60B64D25F3F26455A4AC0386E6E2C26F_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_item;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		bool L_1;
		L_1 = List_1_IsCompatibleObject_m0C506FD38C6F16AC8A7700817EF89401910F873C(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_item;
		int32_t L_3;
		L_3 = List_1_IndexOf_mC3D1A2CECAC0E3D42C78B43772E1BD3D0333C450(__this, ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 9))))), il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		return L_3;
	}

IL_0015:
	{
		return (-1);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Insert_mC1B6D4E6CC94D8BA82A60B2F80CE9684D9345AAE_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_index, int32_t ___1_item, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_0012;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F((int32_t)((int32_t)13), (int32_t)((int32_t)27), NULL);
	}

IL_0012:
	{
		int32_t L_2 = __this->____size;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = __this->____items;
		NullCheck(L_3);
		if ((!(((uint32_t)L_2) == ((uint32_t)((int32_t)(((RuntimeArray*)L_3)->max_length))))))
		{
			goto IL_0030;
		}
	}
	{
		int32_t L_4 = __this->____size;
		List_1_EnsureCapacity_m86DF3071CD67B1463C1CF26C7791331D70D431C0(__this, ((int32_t)il2cpp_codegen_add(L_4, 1)), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
	}

IL_0030:
	{
		int32_t L_5 = ___0_index;
		int32_t L_6 = __this->____size;
		if ((((int32_t)L_5) >= ((int32_t)L_6)))
		{
			goto IL_0056;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = __this->____items;
		int32_t L_8 = ___0_index;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = __this->____items;
		int32_t L_10 = ___0_index;
		int32_t L_11 = __this->____size;
		int32_t L_12 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_7, L_8, (RuntimeArray*)L_9, ((int32_t)il2cpp_codegen_add(L_10, 1)), ((int32_t)il2cpp_codegen_subtract(L_11, L_12)), NULL);
	}

IL_0056:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = __this->____items;
		int32_t L_14 = ___0_index;
		int32_t L_15 = ___1_item;
		NullCheck(L_13);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(L_14), (int32_t)L_15);
		int32_t L_16 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_16, 1));
		int32_t L_17 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_17, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_System_Collections_IList_Insert_m998EB213788F375DC5B0A8A62C3400CBD267E86B_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_index, RuntimeObject* ___1_item, const RuntimeMethod* method) 
{
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeObject* L_0 = ___1_item;
		ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m0F7A078274F301B83DFC51191B3AFC763DE9C4D0(L_0, (int32_t)((int32_t)20), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
	}
	try
	{
		int32_t L_1 = ___0_index;
		RuntimeObject* L_2 = ___1_item;
		List_1_Insert_mC1B6D4E6CC94D8BA82A60B2F80CE9684D9345AAE(__this, L_1, ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 9))))), il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		goto IL_002a;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0017;
		}
		throw e;
	}

CATCH_0017:
	{
		RuntimeObject* L_3 = ___1_item;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_4 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 13)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_5;
		L_5 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_4, NULL);
		ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_3, L_5, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_002a;
	}

IL_002a:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_InsertRange_m1D3DE2073A8946E2D1113677F2062F35881FA7B8_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_index, RuntimeObject* ___1_collection, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	int32_t V_1 = 0;
	RuntimeObject* V_2 = NULL;
	{
		RuntimeObject* L_0 = ___1_collection;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)6, NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___0_index;
		int32_t L_2 = __this->____size;
		if ((!(((uint32_t)L_1) > ((uint32_t)L_2))))
		{
			goto IL_0017;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRange_IndexException_mC7661B8C6DD827679C95FC6B6C08F8724174936D(NULL);
	}

IL_0017:
	{
		RuntimeObject* L_3 = ___1_collection;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_3, il2cpp_rgctx_data(method->klass->rgctx_data, 5)));
		RuntimeObject* L_4 = V_0;
		if (!L_4)
		{
			goto IL_00bc;
		}
	}
	{
		RuntimeObject* L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 5), L_5);
		V_1 = L_6;
		int32_t L_7 = V_1;
		if ((((int32_t)L_7) <= ((int32_t)0)))
		{
			goto IL_00fb;
		}
	}
	{
		int32_t L_8 = __this->____size;
		int32_t L_9 = V_1;
		List_1_EnsureCapacity_m86DF3071CD67B1463C1CF26C7791331D70D431C0(__this, ((int32_t)il2cpp_codegen_add(L_8, L_9)), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		int32_t L_10 = ___0_index;
		int32_t L_11 = __this->____size;
		if ((((int32_t)L_10) >= ((int32_t)L_11)))
		{
			goto IL_0066;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = __this->____items;
		int32_t L_13 = ___0_index;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_14 = __this->____items;
		int32_t L_15 = ___0_index;
		int32_t L_16 = V_1;
		int32_t L_17 = __this->____size;
		int32_t L_18 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_12, L_13, (RuntimeArray*)L_14, ((int32_t)il2cpp_codegen_add(L_15, L_16)), ((int32_t)il2cpp_codegen_subtract(L_17, L_18)), NULL);
	}

IL_0066:
	{
		RuntimeObject* L_19 = V_0;
		if ((!(((RuntimeObject*)(List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*)__this) == ((RuntimeObject*)(RuntimeObject*)L_19))))
		{
			goto IL_009f;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_20 = __this->____items;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_21 = __this->____items;
		int32_t L_22 = ___0_index;
		int32_t L_23 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_20, 0, (RuntimeArray*)L_21, L_22, L_23, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_24 = __this->____items;
		int32_t L_25 = ___0_index;
		int32_t L_26 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_27 = __this->____items;
		int32_t L_28 = ___0_index;
		int32_t L_29 = __this->____size;
		int32_t L_30 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_24, ((int32_t)il2cpp_codegen_add(L_25, L_26)), (RuntimeArray*)L_27, ((int32_t)il2cpp_codegen_multiply(L_28, 2)), ((int32_t)il2cpp_codegen_subtract(L_29, L_30)), NULL);
		goto IL_00ac;
	}

IL_009f:
	{
		RuntimeObject* L_31 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_32 = __this->____items;
		int32_t L_33 = ___0_index;
		NullCheck(L_31);
		InterfaceActionInvoker2< Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*, int32_t >::Invoke(5, il2cpp_rgctx_data(method->klass->rgctx_data, 5), L_31, L_32, L_33);
	}

IL_00ac:
	{
		int32_t L_34 = __this->____size;
		int32_t L_35 = V_1;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_34, L_35));
		goto IL_00fb;
	}

IL_00bc:
	{
		int32_t L_36 = ___0_index;
		int32_t L_37 = __this->____size;
		if ((((int32_t)L_36) >= ((int32_t)L_37)))
		{
			goto IL_00f4;
		}
	}
	{
		RuntimeObject* L_38 = ___1_collection;
		NullCheck(L_38);
		RuntimeObject* L_39;
		L_39 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 4), L_38);
		V_2 = L_39;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00ea:
			{
				{
					RuntimeObject* L_40 = V_2;
					if (!L_40)
					{
						goto IL_00f3;
					}
				}
				{
					RuntimeObject* L_41 = V_2;
					NullCheck((RuntimeObject*)L_41);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_41);
				}

IL_00f3:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_00e0_1;
			}

IL_00ce_1:
			{
				int32_t L_42 = ___0_index;
				int32_t L_43 = L_42;
				___0_index = ((int32_t)il2cpp_codegen_add(L_43, 1));
				RuntimeObject* L_44 = V_2;
				NullCheck(L_44);
				int32_t L_45;
				L_45 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 27), L_44);
				List_1_Insert_mC1B6D4E6CC94D8BA82A60B2F80CE9684D9345AAE(__this, L_43, L_45, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
			}

IL_00e0_1:
			{
				RuntimeObject* L_46 = V_2;
				NullCheck((RuntimeObject*)L_46);
				bool L_47;
				L_47 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_46);
				if (L_47)
				{
					goto IL_00ce_1;
				}
			}
			{
				goto IL_00fb;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00f4:
	{
		RuntimeObject* L_48 = ___1_collection;
		List_1_AddEnumerable_m0D03C24E342A0F77A0042603E40AD506136B684F(__this, L_48, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
	}

IL_00fb:
	{
		int32_t L_49 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_49, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_m2B41E5B9E061DD4D5F58B693018024AADF2AD7F5_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_item;
		int32_t L_1;
		L_1 = List_1_IndexOf_mC3D1A2CECAC0E3D42C78B43772E1BD3D0333C450(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		int32_t L_3 = V_0;
		List_1_RemoveAt_m76C4CDACF47BA529BAFADFC8D5E13DB9587F4004(__this, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 32));
		return (bool)1;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_System_Collections_IList_Remove_mC39E90783873C337B8CB0938BE43A6E5AD42EF0A_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_item;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		bool L_1;
		L_1 = List_1_IsCompatibleObject_m0C506FD38C6F16AC8A7700817EF89401910F873C(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_item;
		bool L_3;
		L_3 = List_1_Remove_m2B41E5B9E061DD4D5F58B693018024AADF2AD7F5(__this, ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 9))))), il2cpp_rgctx_method(method->klass->rgctx_data, 33));
	}

IL_0015:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_RemoveAll_mF14DFF09F0ADFF511FBE004265EF8B7269ABA4D8_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, Predicate_1_t6CDE3111264F492F4F13277756366A07CA78A4C3* ___0_match, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		Predicate_1_t6CDE3111264F492F4F13277756366A07CA78A4C3* L_0 = ___0_match;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)8, NULL);
	}

IL_0009:
	{
		V_0 = 0;
		goto IL_0011;
	}

IL_000d:
	{
		int32_t L_1 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_1, 1));
	}

IL_0011:
	{
		int32_t L_2 = V_0;
		int32_t L_3 = __this->____size;
		if ((((int32_t)L_2) >= ((int32_t)L_3)))
		{
			goto IL_002e;
		}
	}
	{
		Predicate_1_t6CDE3111264F492F4F13277756366A07CA78A4C3* L_4 = ___0_match;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = __this->____items;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		int32_t L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		NullCheck(L_4);
		bool L_9;
		L_9 = Predicate_1_Invoke_mD16C664FFE93598D1C12AC86190D12B0F90B5419_inline(L_4, L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 35));
		if (!L_9)
		{
			goto IL_000d;
		}
	}

IL_002e:
	{
		int32_t L_10 = V_0;
		int32_t L_11 = __this->____size;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_0039;
		}
	}
	{
		return 0;
	}

IL_0039:
	{
		int32_t L_12 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
		goto IL_0089;
	}

IL_003f:
	{
		int32_t L_13 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_0043:
	{
		int32_t L_14 = V_1;
		int32_t L_15 = __this->____size;
		if ((((int32_t)L_14) >= ((int32_t)L_15)))
		{
			goto IL_0060;
		}
	}
	{
		Predicate_1_t6CDE3111264F492F4F13277756366A07CA78A4C3* L_16 = ___0_match;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_17 = __this->____items;
		int32_t L_18 = V_1;
		NullCheck(L_17);
		int32_t L_19 = L_18;
		int32_t L_20 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		NullCheck(L_16);
		bool L_21;
		L_21 = Predicate_1_Invoke_mD16C664FFE93598D1C12AC86190D12B0F90B5419_inline(L_16, L_20, il2cpp_rgctx_method(method->klass->rgctx_data, 35));
		if (L_21)
		{
			goto IL_003f;
		}
	}

IL_0060:
	{
		int32_t L_22 = V_1;
		int32_t L_23 = __this->____size;
		if ((((int32_t)L_22) >= ((int32_t)L_23)))
		{
			goto IL_0089;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_24 = __this->____items;
		int32_t L_25 = V_0;
		int32_t L_26 = L_25;
		V_0 = ((int32_t)il2cpp_codegen_add(L_26, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_27 = __this->____items;
		int32_t L_28 = V_1;
		int32_t L_29 = L_28;
		V_1 = ((int32_t)il2cpp_codegen_add(L_29, 1));
		NullCheck(L_27);
		int32_t L_30 = L_29;
		int32_t L_31 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_30));
		NullCheck(L_24);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(L_26), (int32_t)L_31);
	}

IL_0089:
	{
		int32_t L_32 = V_1;
		int32_t L_33 = __this->____size;
		if ((((int32_t)L_32) < ((int32_t)L_33)))
		{
			goto IL_0043;
		}
	}
	{
		goto IL_00ad;
	}

IL_00ad:
	{
		int32_t L_34 = __this->____size;
		int32_t L_35 = V_0;
		int32_t L_36 = V_0;
		__this->____size = L_36;
		int32_t L_37 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_37, 1));
		return ((int32_t)il2cpp_codegen_subtract(L_34, L_35));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_m76C4CDACF47BA529BAFADFC8D5E13DB9587F4004_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRange_IndexException_mC7661B8C6DD827679C95FC6B6C08F8724174936D(NULL);
	}

IL_000e:
	{
		int32_t L_2 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_subtract(L_2, 1));
		int32_t L_3 = ___0_index;
		int32_t L_4 = __this->____size;
		if ((((int32_t)L_3) >= ((int32_t)L_4)))
		{
			goto IL_0042;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = __this->____items;
		int32_t L_6 = ___0_index;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = __this->____items;
		int32_t L_8 = ___0_index;
		int32_t L_9 = __this->____size;
		int32_t L_10 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, ((int32_t)il2cpp_codegen_add(L_6, 1)), (RuntimeArray*)L_7, L_8, ((int32_t)il2cpp_codegen_subtract(L_9, L_10)), NULL);
	}

IL_0042:
	{
		goto IL_0063;
	}

IL_0063:
	{
		int32_t L_11 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_11, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveRange_m1E69C4C8438AA5D7E05C2936C79C01D96F89BE68_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_index, int32_t ___1_count, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_count;
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F((int32_t)((int32_t)16), (int32_t)4, NULL);
	}

IL_0015:
	{
		int32_t L_2 = __this->____size;
		int32_t L_3 = ___0_index;
		int32_t L_4 = ___1_count;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_2, L_3))) >= ((int32_t)L_4)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)((int32_t)23), NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_count;
		if ((((int32_t)L_5) <= ((int32_t)0)))
		{
			goto IL_008d;
		}
	}
	{
		int32_t L_6 = __this->____size;
		int32_t L_7 = __this->____size;
		int32_t L_8 = ___1_count;
		__this->____size = ((int32_t)il2cpp_codegen_subtract(L_7, L_8));
		int32_t L_9 = ___0_index;
		int32_t L_10 = __this->____size;
		if ((((int32_t)L_9) >= ((int32_t)L_10)))
		{
			goto IL_0066;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = __this->____items;
		int32_t L_12 = ___0_index;
		int32_t L_13 = ___1_count;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_14 = __this->____items;
		int32_t L_15 = ___0_index;
		int32_t L_16 = __this->____size;
		int32_t L_17 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_11, ((int32_t)il2cpp_codegen_add(L_12, L_13)), (RuntimeArray*)L_14, L_15, ((int32_t)il2cpp_codegen_subtract(L_16, L_17)), NULL);
	}

IL_0066:
	{
		int32_t L_18 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_18, 1));
		goto IL_008d;
	}

IL_008d:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Reverse_m09394C650409964E568ED088D88C1BA78EE468DC_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 17));
		List_1_Reverse_mE0857BE335F36FD830B3A301AA7BF67F2F3C783F(__this, 0, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 36));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Reverse_mE0857BE335F36FD830B3A301AA7BF67F2F3C783F_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_index, int32_t ___1_count, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_count;
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F((int32_t)((int32_t)16), (int32_t)4, NULL);
	}

IL_0015:
	{
		int32_t L_2 = __this->____size;
		int32_t L_3 = ___0_index;
		int32_t L_4 = ___1_count;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_2, L_3))) >= ((int32_t)L_4)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)((int32_t)23), NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_count;
		if ((((int32_t)L_5) <= ((int32_t)1)))
		{
			goto IL_0038;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = __this->____items;
		int32_t L_7 = ___0_index;
		int32_t L_8 = ___1_count;
		Array_Reverse_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m57764BD8E3718881AE35094284EFDECEE528991D(L_6, L_7, L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 37));
	}

IL_0038:
	{
		int32_t L_9 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_9, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_m8AF34E53DDA0850F189B6FA670A2CC358C9747E7_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 17));
		RuntimeObject* L_1 = ___0_comparer;
		List_1_Sort_m3178B19CB7B6281DC7B995E4C5A6AD200EC6153B(__this, 0, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 39));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_m3178B19CB7B6281DC7B995E4C5A6AD200EC6153B_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_index, int32_t ___1_count, RuntimeObject* ___2_comparer, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_count;
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F((int32_t)((int32_t)16), (int32_t)4, NULL);
	}

IL_0015:
	{
		int32_t L_2 = __this->____size;
		int32_t L_3 = ___0_index;
		int32_t L_4 = ___1_count;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_2, L_3))) >= ((int32_t)L_4)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)((int32_t)23), NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_count;
		if ((((int32_t)L_5) <= ((int32_t)1)))
		{
			goto IL_0039;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = __this->____items;
		int32_t L_7 = ___0_index;
		int32_t L_8 = ___1_count;
		RuntimeObject* L_9 = ___2_comparer;
		Array_Sort_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m6E0CF4C26182BB9D788C90ABE423C2F4CD145E41(L_6, L_7, L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 40));
	}

IL_0039:
	{
		int32_t L_10 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_10, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_m90CDC07AEBE737318A490F4C2BC6F2955443EDA4_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, Comparison_1_tB7DE1436CB53924C2FC41FF926D074C1ACC14D89* ___0_comparison, const RuntimeMethod* method) 
{
	{
		Comparison_1_tB7DE1436CB53924C2FC41FF926D074C1ACC14D89* L_0 = ___0_comparison;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)((int32_t)34), NULL);
	}

IL_000a:
	{
		int32_t L_1 = __this->____size;
		if ((((int32_t)L_1) <= ((int32_t)1)))
		{
			goto IL_0026;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = __this->____items;
		int32_t L_3 = __this->____size;
		Comparison_1_tB7DE1436CB53924C2FC41FF926D074C1ACC14D89* L_4 = ___0_comparison;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 43));
		ArraySortHelper_1_Sort_m7FA55FB83B1A81CF769D2928FCE3E06425DAC06B(L_2, 0, L_3, L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 42));
	}

IL_0026:
	{
		int32_t L_5 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_5, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* List_1_ToArray_m65479FB75A5FE539EA1A0D6681172717D23CEAAA_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method) 
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = ((List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 2)))->___s_emptyArray;
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____size;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_2);
		V_0 = L_3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = __this->____items;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = V_0;
		int32_t L_6 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_4, 0, (RuntimeArray*)L_5, 0, L_6, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = V_0;
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddEnumerable_m0D03C24E342A0F77A0042603E40AD506136B684F_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, RuntimeObject* ___0_enumerable, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		RuntimeObject* L_1 = ___0_enumerable;
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 4), L_1);
		V_0 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0063:
			{
				{
					RuntimeObject* L_3 = V_0;
					if (!L_3)
					{
						goto IL_006c;
					}
				}
				{
					RuntimeObject* L_4 = V_0;
					NullCheck((RuntimeObject*)L_4);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_4);
				}

IL_006c:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_0059_1;
			}

IL_0017_1:
			{
				RuntimeObject* L_5 = V_0;
				NullCheck(L_5);
				int32_t L_6;
				L_6 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 27), L_5);
				V_1 = L_6;
				int32_t L_7 = __this->____size;
				Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = __this->____items;
				NullCheck(L_8);
				if ((!(((uint32_t)L_7) == ((uint32_t)((int32_t)(((RuntimeArray*)L_8)->max_length))))))
				{
					goto IL_003c_1;
				}
			}
			{
				int32_t L_9 = __this->____size;
				List_1_EnsureCapacity_m86DF3071CD67B1463C1CF26C7791331D70D431C0(__this, ((int32_t)il2cpp_codegen_add(L_9, 1)), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
			}

IL_003c_1:
			{
				Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = __this->____items;
				int32_t L_11 = __this->____size;
				V_2 = L_11;
				int32_t L_12 = V_2;
				__this->____size = ((int32_t)il2cpp_codegen_add(L_12, 1));
				int32_t L_13 = V_2;
				int32_t L_14 = V_1;
				NullCheck(L_10);
				(L_10)->SetAt(static_cast<il2cpp_array_size_t>(L_13), (int32_t)L_14);
			}

IL_0059_1:
			{
				RuntimeObject* L_15 = V_0;
				NullCheck((RuntimeObject*)L_15);
				bool L_16;
				L_16 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_15);
				if (L_16)
				{
					goto IL_0017_1;
				}
			}
			{
				goto IL_006d;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_006d:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__cctor_m34A28120D67ECFCD65E7E95E5A27026C1DF8B865_gshared (const RuntimeMethod* method) 
{
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 3), (uint32_t)0);
		((List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___s_emptyArray = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___s_emptyArray), (void*)L_0);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7C3D0A1FD36704AFBBE4FD4E69204B809D3FC90E_gshared (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* L_0 = ((List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 2)))->___s_emptyArray;
		__this->____items = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mFA5964F4DCFAAF3789DB92674BFBD4734426BDF8_gshared (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0012;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F((int32_t)((int32_t)12), (int32_t)4, NULL);
	}

IL_0012:
	{
		int32_t L_1 = ___0_capacity;
		if (L_1)
		{
			goto IL_0021;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* L_2 = ((List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 2)))->___s_emptyArray;
		__this->____items = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_2);
		return;
	}

IL_0021:
	{
		int32_t L_3 = ___0_capacity;
		Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* L_4 = (Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F*)(Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_3);
		__this->____items = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_4);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m9F9FACA262C60BC180B483D011636D28822CF4C5_gshared (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	int32_t V_1 = 0;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		RuntimeObject* L_0 = ___0_collection;
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)6, NULL);
	}

IL_000f:
	{
		RuntimeObject* L_1 = ___0_collection;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_1, il2cpp_rgctx_data(method->klass->rgctx_data, 5)));
		RuntimeObject* L_2 = V_0;
		if (!L_2)
		{
			goto IL_0050;
		}
	}
	{
		RuntimeObject* L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 5), L_3);
		V_1 = L_4;
		int32_t L_5 = V_1;
		if (L_5)
		{
			goto IL_002f;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* L_6 = ((List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 2)))->___s_emptyArray;
		__this->____items = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_6);
		return;
	}

IL_002f:
	{
		int32_t L_7 = V_1;
		Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* L_8 = (Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F*)(Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_7);
		__this->____items = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_8);
		RuntimeObject* L_9 = V_0;
		Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* L_10 = __this->____items;
		NullCheck(L_9);
		InterfaceActionInvoker2< Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F*, int32_t >::Invoke(5, il2cpp_rgctx_data(method->klass->rgctx_data, 5), L_9, L_10, 0);
		int32_t L_11 = V_1;
		__this->____size = L_11;
		return;
	}

IL_0050:
	{
		__this->____size = 0;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* L_12 = ((List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 2)))->___s_emptyArray;
		__this->____items = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_12);
		RuntimeObject* L_13 = ___0_collection;
		List_1_AddEnumerable_m888E7562D4D5756B46E7DE52614832960DA81A0D(__this, L_13, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Capacity_m7ED78746E0AFEF2F59490B581943C977BE1A5479_gshared (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* V_0 = NULL;
	{
		int32_t L_0 = ___0_value;
		int32_t L_1 = __this->____size;
		if ((((int32_t)L_0) >= ((int32_t)L_1)))
		{
			goto IL_0012;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F((int32_t)((int32_t)15), (int32_t)((int32_t)21), NULL);
	}

IL_0012:
	{
		int32_t L_2 = ___0_value;
		Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* L_3 = __this->____items;
		NullCheck(L_3);
		if ((((int32_t)L_2) == ((int32_t)((int32_t)(((RuntimeArray*)L_3)->max_length)))))
		{
			goto IL_0058;
		}
	}
	{
		int32_t L_4 = ___0_value;
		if ((((int32_t)L_4) <= ((int32_t)0)))
		{
			goto IL_004d;
		}
	}
	{
		int32_t L_5 = ___0_value;
		Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* L_6 = (Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F*)(Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_5);
		V_0 = L_6;
		int32_t L_7 = __this->____size;
		if ((((int32_t)L_7) <= ((int32_t)0)))
		{
			goto IL_0045;
		}
	}
	{
		Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* L_8 = __this->____items;
		Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* L_9 = V_0;
		int32_t L_10 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_8, 0, (RuntimeArray*)L_9, 0, L_10, NULL);
	}

IL_0045:
	{
		Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* L_11 = V_0;
		__this->____items = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_11);
		return;
	}

IL_004d:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* L_12 = ((List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 2)))->___s_emptyArray;
		__this->____items = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_12);
	}

IL_0058:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m9080410FAF175EB3313FCE9515BA3A9D8E11718F_gshared (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m94A9DF9D55CC3136DB3FD45DC9EAFD824B401267_gshared (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_System_Collections_IList_get_IsReadOnly_mBDEDAB261381FF8A6A32B93F5BF72814FAAC8096_gshared (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_System_Collections_ICollection_get_SyncRoot_m9B8E301A17A11AA9C9B11CD5290E2FFB530085BA_gshared (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____syncRoot;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject** L_1 = (RuntimeObject**)(&__this->____syncRoot);
		RuntimeObject* L_2 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_2, NULL);
		RuntimeObject* L_3;
		L_3 = InterlockedCompareExchangeImpl<RuntimeObject*>(L_1, L_2, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = __this->____syncRoot;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_get_Item_mDE2F02C693FD9EAA8F93873E407BC46C47ACFC7A_gshared (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRange_IndexException_mC7661B8C6DD827679C95FC6B6C08F8724174936D(NULL);
	}

IL_000e:
	{
		Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* L_2 = __this->____items;
		int32_t L_3 = ___0_index;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		int32_t L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Item_mB4FCD891721B07472641D7000AAE93A9CABBAE5A_gshared (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* __this, int32_t ___0_index, int32_t ___1_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRange_IndexException_mC7661B8C6DD827679C95FC6B6C08F8724174936D(NULL);
	}

IL_000e:
	{
		Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* L_2 = __this->____items;
		int32_t L_3 = ___0_index;
		int32_t L_4 = ___1_value;
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(L_3), (int32_t)L_4);
		int32_t L_5 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_5, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_IsCompatibleObject_m0889B00F24FBB309BEE1702FD3CB4C42AD832A39_gshared (RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0 = ___0_value;
		if (((RuntimeObject*)IsInst((RuntimeObject*)L_0, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 9))))
		{
			goto IL_001f;
		}
	}
	{
		RuntimeObject* L_1 = ___0_value;
		if (L_1)
		{
			goto IL_001d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(int32_t));
		int32_t L_2 = V_0;
		return false;
	}

IL_001d:
	{
		return (bool)0;
	}

IL_001f:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_System_Collections_IList_get_Item_m6983F200CA61558FE9D93EC1C37297CD534233EE_gshared (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		int32_t L_1;
		L_1 = List_1_get_Item_mDE2F02C693FD9EAA8F93873E407BC46C47ACFC7A(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		int32_t L_2 = L_1;
		RuntimeObject* L_3 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9), &L_2);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_System_Collections_IList_set_Item_m9C2490004857BB44F978BF7988ED4912C73C570A_gshared (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* __this, int32_t ___0_index, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeObject* L_0 = ___1_value;
		ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_mC3916E2A31C5FA9D0BB4E2A929F5225B4205042F(L_0, (int32_t)((int32_t)15), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
	}
	try
	{
		int32_t L_1 = ___0_index;
		RuntimeObject* L_2 = ___1_value;
		List_1_set_Item_mB4FCD891721B07472641D7000AAE93A9CABBAE5A(__this, L_1, ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 9))))), il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		goto IL_002a;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0017;
		}
		throw e;
	}

CATCH_0017:
	{
		RuntimeObject* L_3 = ___1_value;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_4 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 13)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_5;
		L_5 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_4, NULL);
		ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_3, L_5, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_002a;
	}

IL_002a:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_m809450298141D527D3A4FFAF77AE69D9B08CC17F_gshared (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* __this, int32_t ___0_item, const RuntimeMethod* method) 
{
	Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* L_1 = __this->____items;
		V_0 = L_1;
		int32_t L_2 = __this->____size;
		V_1 = L_2;
		int32_t L_3 = V_1;
		Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_5, 1));
		Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* L_6 = V_0;
		int32_t L_7 = V_1;
		int32_t L_8 = ___0_item;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (int32_t)L_8);
		return;
	}

IL_0034:
	{
		int32_t L_9 = ___0_item;
		List_1_AddWithResize_mAD159B09F28BD7914562E219CA52E2D4BDCF5530(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void List_1_AddWithResize_mAD159B09F28BD7914562E219CA52E2D4BDCF5530_gshared (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* __this, int32_t ___0_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____size;
		V_0 = L_0;
		int32_t L_1 = V_0;
		List_1_EnsureCapacity_mE0139DA252869EB064FCEC6240A927BCE4945327(__this, ((int32_t)il2cpp_codegen_add(L_1, 1)), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		int32_t L_2 = V_0;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_2, 1));
		Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* L_3 = __this->____items;
		int32_t L_4 = V_0;
		int32_t L_5 = ___0_item;
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(L_4), (int32_t)L_5);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_System_Collections_IList_Add_m8DD55D9D9CB66A56905DE172614C28F716BAFE35_gshared (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeObject* L_0 = ___0_item;
		ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_mC3916E2A31C5FA9D0BB4E2A929F5225B4205042F(L_0, (int32_t)((int32_t)20), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
	}
	try
	{
		RuntimeObject* L_1 = ___0_item;
		List_1_Add_m809450298141D527D3A4FFAF77AE69D9B08CC17F_inline(__this, ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_1, il2cpp_rgctx_data(method->klass->rgctx_data, 9))))), il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		goto IL_0029;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0016;
		}
		throw e;
	}

CATCH_0016:
	{
		RuntimeObject* L_2 = ___0_item;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 13)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_2, L_4, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0029;
	}

IL_0029:
	{
		int32_t L_5;
		L_5 = List_1_get_Count_m9080410FAF175EB3313FCE9515BA3A9D8E11718F_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 17));
		return ((int32_t)il2cpp_codegen_subtract(L_5, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddRange_m4874A6690007FD4908D00149317EF9E93E70C03A_gshared (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		RuntimeObject* L_1 = ___0_collection;
		List_1_InsertRange_m97B7B4D0EFFBE810751F8A48DA53CFB8B91B4A3B(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Clear_m4F220B4D805F163DF05F6FB4538DBC9D1610D16E_gshared (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		goto IL_0035;
	}

IL_0035:
	{
		__this->____size = 0;
	}

IL_003c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_mF78C4E1EE072C25D5CDEB5057184058E94DF8634_gshared (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* __this, int32_t ___0_item, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___0_item;
		int32_t L_2;
		L_2 = List_1_IndexOf_m4803410520A110B163A6B92857AEFA8FEE015752(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		return (bool)((((int32_t)((((int32_t)L_2) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0016:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_System_Collections_IList_Contains_m39706E6EBA76CBA5A2D9981863397BEEA368096D_gshared (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_item;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		bool L_1;
		L_1 = List_1_IsCompatibleObject_m0889B00F24FBB309BEE1702FD3CB4C42AD832A39(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_item;
		bool L_3;
		L_3 = List_1_Contains_mF78C4E1EE072C25D5CDEB5057184058E94DF8634(__this, ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 9))))), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_CopyTo_m306E211EDE0C075140F253CD2C9196DD9E1147A4_gshared (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* __this, Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* ___0_array, const RuntimeMethod* method) 
{
	{
		Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* L_0 = ___0_array;
		List_1_CopyTo_m839F5ADDC59B70CAC1B14D9841A524465A3BC9E5(__this, L_0, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_System_Collections_ICollection_CopyTo_mC112CD31B36C5ACECC64EDD676DF26DA4AEE7487_gshared (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* __this, RuntimeArray* ___0_array, int32_t ___1_arrayIndex, const RuntimeMethod* method) 
{
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		RuntimeArray* L_1 = ___0_array;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(L_1, NULL);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0012;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)7, NULL);
	}

IL_0012:
	{
	}
	try
	{
		Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* L_3 = __this->____items;
		RuntimeArray* L_4 = ___0_array;
		int32_t L_5 = ___1_arrayIndex;
		int32_t L_6 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_3, 0, L_4, L_5, L_6, NULL);
		goto IL_0031;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0029;
		}
		throw e;
	}

CATCH_0029:
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0031;
	}

IL_0031:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_CopyTo_m839F5ADDC59B70CAC1B14D9841A524465A3BC9E5_gshared (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* __this, Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* ___0_array, int32_t ___1_arrayIndex, const RuntimeMethod* method) 
{
	{
		Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* L_0 = __this->____items;
		Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* L_1 = ___0_array;
		int32_t L_2 = ___1_arrayIndex;
		int32_t L_3 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_0, 0, (RuntimeArray*)L_1, L_2, L_3, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_EnsureCapacity_mE0139DA252869EB064FCEC6240A927BCE4945327_gshared (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* __this, int32_t ___0_min, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t G_B4_0 = 0;
	{
		Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* L_0 = __this->____items;
		NullCheck(L_0);
		int32_t L_1 = ___0_min;
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length))) >= ((int32_t)L_1)))
		{
			goto IL_003d;
		}
	}
	{
		Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* L_2 = __this->____items;
		NullCheck(L_2);
		if (!(((RuntimeArray*)L_2)->max_length))
		{
			goto IL_0020;
		}
	}
	{
		Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* L_3 = __this->____items;
		NullCheck(L_3);
		G_B4_0 = ((int32_t)il2cpp_codegen_multiply(((int32_t)(((RuntimeArray*)L_3)->max_length)), 2));
		goto IL_0021;
	}

IL_0020:
	{
		G_B4_0 = 4;
	}

IL_0021:
	{
		V_0 = G_B4_0;
		int32_t L_4 = V_0;
		if ((!(((uint32_t)L_4) > ((uint32_t)((int32_t)2146435071)))))
		{
			goto IL_0030;
		}
	}
	{
		V_0 = ((int32_t)2146435071);
	}

IL_0030:
	{
		int32_t L_5 = V_0;
		int32_t L_6 = ___0_min;
		if ((((int32_t)L_5) >= ((int32_t)L_6)))
		{
			goto IL_0036;
		}
	}
	{
		int32_t L_7 = ___0_min;
		V_0 = L_7;
	}

IL_0036:
	{
		int32_t L_8 = V_0;
		List_1_set_Capacity_m7ED78746E0AFEF2F59490B581943C977BE1A5479(__this, L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 24));
	}

IL_003d:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t6209EE23CCD16838DA331AC87789A15508C6C72B List_1_GetEnumerator_m87BBBF3FBB0A4EBF1C2940AA91570D7F1565F60D_gshared (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t6209EE23CCD16838DA331AC87789A15508C6C72B L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mC6E6B2337772FC83C59264783DAFF1D4CF9F023E((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_mA9DF5D78B8C879762C73551E01777F5F175D71F0_gshared (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t6209EE23CCD16838DA331AC87789A15508C6C72B L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mC6E6B2337772FC83C59264783DAFF1D4CF9F023E((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		Enumerator_t6209EE23CCD16838DA331AC87789A15508C6C72B L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 25), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_System_Collections_IEnumerable_GetEnumerator_m98A983CE0706CC345CEDB4FCD924FE648FAA6731_gshared (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t6209EE23CCD16838DA331AC87789A15508C6C72B L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mC6E6B2337772FC83C59264783DAFF1D4CF9F023E((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		Enumerator_t6209EE23CCD16838DA331AC87789A15508C6C72B L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 25), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_IndexOf_m4803410520A110B163A6B92857AEFA8FEE015752_gshared (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* __this, int32_t ___0_item, const RuntimeMethod* method) 
{
	{
		Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* L_0 = __this->____items;
		int32_t L_1 = ___0_item;
		int32_t L_2 = __this->____size;
		int32_t L_3;
		L_3 = Array_IndexOf_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_mA27917199B3C9E1A60C5791FB1B2AC5EB4C2103A(L_0, L_1, 0, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_System_Collections_IList_IndexOf_mC54DA10260369766A8625313EA0119E4EE1E1EEB_gshared (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_item;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		bool L_1;
		L_1 = List_1_IsCompatibleObject_m0889B00F24FBB309BEE1702FD3CB4C42AD832A39(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_item;
		int32_t L_3;
		L_3 = List_1_IndexOf_m4803410520A110B163A6B92857AEFA8FEE015752(__this, ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 9))))), il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		return L_3;
	}

IL_0015:
	{
		return (-1);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Insert_m1E433D24E9C67F0BA5D1ACF7708F97EF1DC4AE3D_gshared (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* __this, int32_t ___0_index, int32_t ___1_item, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_0012;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F((int32_t)((int32_t)13), (int32_t)((int32_t)27), NULL);
	}

IL_0012:
	{
		int32_t L_2 = __this->____size;
		Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* L_3 = __this->____items;
		NullCheck(L_3);
		if ((!(((uint32_t)L_2) == ((uint32_t)((int32_t)(((RuntimeArray*)L_3)->max_length))))))
		{
			goto IL_0030;
		}
	}
	{
		int32_t L_4 = __this->____size;
		List_1_EnsureCapacity_mE0139DA252869EB064FCEC6240A927BCE4945327(__this, ((int32_t)il2cpp_codegen_add(L_4, 1)), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
	}

IL_0030:
	{
		int32_t L_5 = ___0_index;
		int32_t L_6 = __this->____size;
		if ((((int32_t)L_5) >= ((int32_t)L_6)))
		{
			goto IL_0056;
		}
	}
	{
		Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* L_7 = __this->____items;
		int32_t L_8 = ___0_index;
		Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* L_9 = __this->____items;
		int32_t L_10 = ___0_index;
		int32_t L_11 = __this->____size;
		int32_t L_12 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_7, L_8, (RuntimeArray*)L_9, ((int32_t)il2cpp_codegen_add(L_10, 1)), ((int32_t)il2cpp_codegen_subtract(L_11, L_12)), NULL);
	}

IL_0056:
	{
		Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* L_13 = __this->____items;
		int32_t L_14 = ___0_index;
		int32_t L_15 = ___1_item;
		NullCheck(L_13);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(L_14), (int32_t)L_15);
		int32_t L_16 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_16, 1));
		int32_t L_17 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_17, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_System_Collections_IList_Insert_m2BFCF4BC60FEBF9FE7646CCBB3EB86B85F4B27C5_gshared (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* __this, int32_t ___0_index, RuntimeObject* ___1_item, const RuntimeMethod* method) 
{
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeObject* L_0 = ___1_item;
		ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_mC3916E2A31C5FA9D0BB4E2A929F5225B4205042F(L_0, (int32_t)((int32_t)20), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
	}
	try
	{
		int32_t L_1 = ___0_index;
		RuntimeObject* L_2 = ___1_item;
		List_1_Insert_m1E433D24E9C67F0BA5D1ACF7708F97EF1DC4AE3D(__this, L_1, ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 9))))), il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		goto IL_002a;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0017;
		}
		throw e;
	}

CATCH_0017:
	{
		RuntimeObject* L_3 = ___1_item;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_4 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 13)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_5;
		L_5 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_4, NULL);
		ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_3, L_5, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_002a;
	}

IL_002a:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_InsertRange_m97B7B4D0EFFBE810751F8A48DA53CFB8B91B4A3B_gshared (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* __this, int32_t ___0_index, RuntimeObject* ___1_collection, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	int32_t V_1 = 0;
	RuntimeObject* V_2 = NULL;
	{
		RuntimeObject* L_0 = ___1_collection;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)6, NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___0_index;
		int32_t L_2 = __this->____size;
		if ((!(((uint32_t)L_1) > ((uint32_t)L_2))))
		{
			goto IL_0017;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRange_IndexException_mC7661B8C6DD827679C95FC6B6C08F8724174936D(NULL);
	}

IL_0017:
	{
		RuntimeObject* L_3 = ___1_collection;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_3, il2cpp_rgctx_data(method->klass->rgctx_data, 5)));
		RuntimeObject* L_4 = V_0;
		if (!L_4)
		{
			goto IL_00bc;
		}
	}
	{
		RuntimeObject* L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 5), L_5);
		V_1 = L_6;
		int32_t L_7 = V_1;
		if ((((int32_t)L_7) <= ((int32_t)0)))
		{
			goto IL_00fb;
		}
	}
	{
		int32_t L_8 = __this->____size;
		int32_t L_9 = V_1;
		List_1_EnsureCapacity_mE0139DA252869EB064FCEC6240A927BCE4945327(__this, ((int32_t)il2cpp_codegen_add(L_8, L_9)), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		int32_t L_10 = ___0_index;
		int32_t L_11 = __this->____size;
		if ((((int32_t)L_10) >= ((int32_t)L_11)))
		{
			goto IL_0066;
		}
	}
	{
		Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* L_12 = __this->____items;
		int32_t L_13 = ___0_index;
		Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* L_14 = __this->____items;
		int32_t L_15 = ___0_index;
		int32_t L_16 = V_1;
		int32_t L_17 = __this->____size;
		int32_t L_18 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_12, L_13, (RuntimeArray*)L_14, ((int32_t)il2cpp_codegen_add(L_15, L_16)), ((int32_t)il2cpp_codegen_subtract(L_17, L_18)), NULL);
	}

IL_0066:
	{
		RuntimeObject* L_19 = V_0;
		if ((!(((RuntimeObject*)(List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576*)__this) == ((RuntimeObject*)(RuntimeObject*)L_19))))
		{
			goto IL_009f;
		}
	}
	{
		Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* L_20 = __this->____items;
		Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* L_21 = __this->____items;
		int32_t L_22 = ___0_index;
		int32_t L_23 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_20, 0, (RuntimeArray*)L_21, L_22, L_23, NULL);
		Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* L_24 = __this->____items;
		int32_t L_25 = ___0_index;
		int32_t L_26 = V_1;
		Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* L_27 = __this->____items;
		int32_t L_28 = ___0_index;
		int32_t L_29 = __this->____size;
		int32_t L_30 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_24, ((int32_t)il2cpp_codegen_add(L_25, L_26)), (RuntimeArray*)L_27, ((int32_t)il2cpp_codegen_multiply(L_28, 2)), ((int32_t)il2cpp_codegen_subtract(L_29, L_30)), NULL);
		goto IL_00ac;
	}

IL_009f:
	{
		RuntimeObject* L_31 = V_0;
		Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* L_32 = __this->____items;
		int32_t L_33 = ___0_index;
		NullCheck(L_31);
		InterfaceActionInvoker2< Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F*, int32_t >::Invoke(5, il2cpp_rgctx_data(method->klass->rgctx_data, 5), L_31, L_32, L_33);
	}

IL_00ac:
	{
		int32_t L_34 = __this->____size;
		int32_t L_35 = V_1;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_34, L_35));
		goto IL_00fb;
	}

IL_00bc:
	{
		int32_t L_36 = ___0_index;
		int32_t L_37 = __this->____size;
		if ((((int32_t)L_36) >= ((int32_t)L_37)))
		{
			goto IL_00f4;
		}
	}
	{
		RuntimeObject* L_38 = ___1_collection;
		NullCheck(L_38);
		RuntimeObject* L_39;
		L_39 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 4), L_38);
		V_2 = L_39;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00ea:
			{
				{
					RuntimeObject* L_40 = V_2;
					if (!L_40)
					{
						goto IL_00f3;
					}
				}
				{
					RuntimeObject* L_41 = V_2;
					NullCheck((RuntimeObject*)L_41);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_41);
				}

IL_00f3:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_00e0_1;
			}

IL_00ce_1:
			{
				int32_t L_42 = ___0_index;
				int32_t L_43 = L_42;
				___0_index = ((int32_t)il2cpp_codegen_add(L_43, 1));
				RuntimeObject* L_44 = V_2;
				NullCheck(L_44);
				int32_t L_45;
				L_45 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 27), L_44);
				List_1_Insert_m1E433D24E9C67F0BA5D1ACF7708F97EF1DC4AE3D(__this, L_43, L_45, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
			}

IL_00e0_1:
			{
				RuntimeObject* L_46 = V_2;
				NullCheck((RuntimeObject*)L_46);
				bool L_47;
				L_47 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_46);
				if (L_47)
				{
					goto IL_00ce_1;
				}
			}
			{
				goto IL_00fb;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00f4:
	{
		RuntimeObject* L_48 = ___1_collection;
		List_1_AddEnumerable_m888E7562D4D5756B46E7DE52614832960DA81A0D(__this, L_48, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
	}

IL_00fb:
	{
		int32_t L_49 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_49, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_m4238AF38CE7EEE7C4C5C568B53D88116FB692B53_gshared (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* __this, int32_t ___0_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_item;
		int32_t L_1;
		L_1 = List_1_IndexOf_m4803410520A110B163A6B92857AEFA8FEE015752(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		int32_t L_3 = V_0;
		List_1_RemoveAt_mA0D34DB4A9D4C8FECCD3278530CEEB3147A19D54(__this, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 32));
		return (bool)1;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_System_Collections_IList_Remove_mA0EB41D8902BACEC49286B9EFAF58046DB1943E4_gshared (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_item;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		bool L_1;
		L_1 = List_1_IsCompatibleObject_m0889B00F24FBB309BEE1702FD3CB4C42AD832A39(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_item;
		bool L_3;
		L_3 = List_1_Remove_m4238AF38CE7EEE7C4C5C568B53D88116FB692B53(__this, ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 9))))), il2cpp_rgctx_method(method->klass->rgctx_data, 33));
	}

IL_0015:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_RemoveAll_m16B29FE13BB76F2EA2F3F420843BDE5842C3A11F_gshared (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* __this, Predicate_1_t5C52E5DEC72D8848A1024CF1E1E512DB092F800A* ___0_match, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		Predicate_1_t5C52E5DEC72D8848A1024CF1E1E512DB092F800A* L_0 = ___0_match;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)8, NULL);
	}

IL_0009:
	{
		V_0 = 0;
		goto IL_0011;
	}

IL_000d:
	{
		int32_t L_1 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_1, 1));
	}

IL_0011:
	{
		int32_t L_2 = V_0;
		int32_t L_3 = __this->____size;
		if ((((int32_t)L_2) >= ((int32_t)L_3)))
		{
			goto IL_002e;
		}
	}
	{
		Predicate_1_t5C52E5DEC72D8848A1024CF1E1E512DB092F800A* L_4 = ___0_match;
		Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* L_5 = __this->____items;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		int32_t L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		NullCheck(L_4);
		bool L_9;
		L_9 = Predicate_1_Invoke_m561B5F43F62B494CB43593312075556BAA567E0B_inline(L_4, L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 35));
		if (!L_9)
		{
			goto IL_000d;
		}
	}

IL_002e:
	{
		int32_t L_10 = V_0;
		int32_t L_11 = __this->____size;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_0039;
		}
	}
	{
		return 0;
	}

IL_0039:
	{
		int32_t L_12 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
		goto IL_0089;
	}

IL_003f:
	{
		int32_t L_13 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_0043:
	{
		int32_t L_14 = V_1;
		int32_t L_15 = __this->____size;
		if ((((int32_t)L_14) >= ((int32_t)L_15)))
		{
			goto IL_0060;
		}
	}
	{
		Predicate_1_t5C52E5DEC72D8848A1024CF1E1E512DB092F800A* L_16 = ___0_match;
		Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* L_17 = __this->____items;
		int32_t L_18 = V_1;
		NullCheck(L_17);
		int32_t L_19 = L_18;
		int32_t L_20 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		NullCheck(L_16);
		bool L_21;
		L_21 = Predicate_1_Invoke_m561B5F43F62B494CB43593312075556BAA567E0B_inline(L_16, L_20, il2cpp_rgctx_method(method->klass->rgctx_data, 35));
		if (L_21)
		{
			goto IL_003f;
		}
	}

IL_0060:
	{
		int32_t L_22 = V_1;
		int32_t L_23 = __this->____size;
		if ((((int32_t)L_22) >= ((int32_t)L_23)))
		{
			goto IL_0089;
		}
	}
	{
		Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* L_24 = __this->____items;
		int32_t L_25 = V_0;
		int32_t L_26 = L_25;
		V_0 = ((int32_t)il2cpp_codegen_add(L_26, 1));
		Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* L_27 = __this->____items;
		int32_t L_28 = V_1;
		int32_t L_29 = L_28;
		V_1 = ((int32_t)il2cpp_codegen_add(L_29, 1));
		NullCheck(L_27);
		int32_t L_30 = L_29;
		int32_t L_31 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_30));
		NullCheck(L_24);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(L_26), (int32_t)L_31);
	}

IL_0089:
	{
		int32_t L_32 = V_1;
		int32_t L_33 = __this->____size;
		if ((((int32_t)L_32) < ((int32_t)L_33)))
		{
			goto IL_0043;
		}
	}
	{
		goto IL_00ad;
	}

IL_00ad:
	{
		int32_t L_34 = __this->____size;
		int32_t L_35 = V_0;
		int32_t L_36 = V_0;
		__this->____size = L_36;
		int32_t L_37 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_37, 1));
		return ((int32_t)il2cpp_codegen_subtract(L_34, L_35));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_mA0D34DB4A9D4C8FECCD3278530CEEB3147A19D54_gshared (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRange_IndexException_mC7661B8C6DD827679C95FC6B6C08F8724174936D(NULL);
	}

IL_000e:
	{
		int32_t L_2 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_subtract(L_2, 1));
		int32_t L_3 = ___0_index;
		int32_t L_4 = __this->____size;
		if ((((int32_t)L_3) >= ((int32_t)L_4)))
		{
			goto IL_0042;
		}
	}
	{
		Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* L_5 = __this->____items;
		int32_t L_6 = ___0_index;
		Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* L_7 = __this->____items;
		int32_t L_8 = ___0_index;
		int32_t L_9 = __this->____size;
		int32_t L_10 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, ((int32_t)il2cpp_codegen_add(L_6, 1)), (RuntimeArray*)L_7, L_8, ((int32_t)il2cpp_codegen_subtract(L_9, L_10)), NULL);
	}

IL_0042:
	{
		goto IL_0063;
	}

IL_0063:
	{
		int32_t L_11 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_11, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveRange_mD0C33E51143D0DF95FBCC1C503FBC9463088C2BC_gshared (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* __this, int32_t ___0_index, int32_t ___1_count, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_count;
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F((int32_t)((int32_t)16), (int32_t)4, NULL);
	}

IL_0015:
	{
		int32_t L_2 = __this->____size;
		int32_t L_3 = ___0_index;
		int32_t L_4 = ___1_count;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_2, L_3))) >= ((int32_t)L_4)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)((int32_t)23), NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_count;
		if ((((int32_t)L_5) <= ((int32_t)0)))
		{
			goto IL_008d;
		}
	}
	{
		int32_t L_6 = __this->____size;
		int32_t L_7 = __this->____size;
		int32_t L_8 = ___1_count;
		__this->____size = ((int32_t)il2cpp_codegen_subtract(L_7, L_8));
		int32_t L_9 = ___0_index;
		int32_t L_10 = __this->____size;
		if ((((int32_t)L_9) >= ((int32_t)L_10)))
		{
			goto IL_0066;
		}
	}
	{
		Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* L_11 = __this->____items;
		int32_t L_12 = ___0_index;
		int32_t L_13 = ___1_count;
		Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* L_14 = __this->____items;
		int32_t L_15 = ___0_index;
		int32_t L_16 = __this->____size;
		int32_t L_17 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_11, ((int32_t)il2cpp_codegen_add(L_12, L_13)), (RuntimeArray*)L_14, L_15, ((int32_t)il2cpp_codegen_subtract(L_16, L_17)), NULL);
	}

IL_0066:
	{
		int32_t L_18 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_18, 1));
		goto IL_008d;
	}

IL_008d:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Reverse_mB85151226AC8FFAB3654B7CEC3DBBCD852CE2F3B_gshared (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = List_1_get_Count_m9080410FAF175EB3313FCE9515BA3A9D8E11718F_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 17));
		List_1_Reverse_m7DE6AE4FAB338990D0A930D6CD525BA07B7E3CB4(__this, 0, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 36));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Reverse_m7DE6AE4FAB338990D0A930D6CD525BA07B7E3CB4_gshared (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* __this, int32_t ___0_index, int32_t ___1_count, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_count;
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F((int32_t)((int32_t)16), (int32_t)4, NULL);
	}

IL_0015:
	{
		int32_t L_2 = __this->____size;
		int32_t L_3 = ___0_index;
		int32_t L_4 = ___1_count;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_2, L_3))) >= ((int32_t)L_4)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)((int32_t)23), NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_count;
		if ((((int32_t)L_5) <= ((int32_t)1)))
		{
			goto IL_0038;
		}
	}
	{
		Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* L_6 = __this->____items;
		int32_t L_7 = ___0_index;
		int32_t L_8 = ___1_count;
		Array_Reverse_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_mBF0352521EE3186887C68DFC25905E29D1393515(L_6, L_7, L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 37));
	}

IL_0038:
	{
		int32_t L_9 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_9, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_m98CE28BB7BF76E332649A98449718159CB3C76B5_gshared (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = List_1_get_Count_m9080410FAF175EB3313FCE9515BA3A9D8E11718F_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 17));
		RuntimeObject* L_1 = ___0_comparer;
		List_1_Sort_m3EC8C34030BE04C522C1CBDB2E96DFAEDB2F011D(__this, 0, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 39));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_m3EC8C34030BE04C522C1CBDB2E96DFAEDB2F011D_gshared (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* __this, int32_t ___0_index, int32_t ___1_count, RuntimeObject* ___2_comparer, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_count;
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F((int32_t)((int32_t)16), (int32_t)4, NULL);
	}

IL_0015:
	{
		int32_t L_2 = __this->____size;
		int32_t L_3 = ___0_index;
		int32_t L_4 = ___1_count;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_2, L_3))) >= ((int32_t)L_4)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)((int32_t)23), NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_count;
		if ((((int32_t)L_5) <= ((int32_t)1)))
		{
			goto IL_0039;
		}
	}
	{
		Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* L_6 = __this->____items;
		int32_t L_7 = ___0_index;
		int32_t L_8 = ___1_count;
		RuntimeObject* L_9 = ___2_comparer;
		Array_Sort_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_m632FD913827035A385A987CEA4B0D30A6C1BB317(L_6, L_7, L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 40));
	}

IL_0039:
	{
		int32_t L_10 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_10, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_m12C3A6424300825E4F1541100D2BF098D5CB9542_gshared (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* __this, Comparison_1_t867D3AA383F5B47704F3B33AF0917C4E98ABEBF1* ___0_comparison, const RuntimeMethod* method) 
{
	{
		Comparison_1_t867D3AA383F5B47704F3B33AF0917C4E98ABEBF1* L_0 = ___0_comparison;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)((int32_t)34), NULL);
	}

IL_000a:
	{
		int32_t L_1 = __this->____size;
		if ((((int32_t)L_1) <= ((int32_t)1)))
		{
			goto IL_0026;
		}
	}
	{
		Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* L_2 = __this->____items;
		int32_t L_3 = __this->____size;
		Comparison_1_t867D3AA383F5B47704F3B33AF0917C4E98ABEBF1* L_4 = ___0_comparison;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 43));
		ArraySortHelper_1_Sort_m3FCF73F735AAA03BF7352EF6635F318F66177EB9(L_2, 0, L_3, L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 42));
	}

IL_0026:
	{
		int32_t L_5 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_5, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* List_1_ToArray_mAA6D48892E79049030D3619D8931B026C1328974_gshared (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* __this, const RuntimeMethod* method) 
{
	Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* V_0 = NULL;
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* L_1 = ((List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 2)))->___s_emptyArray;
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____size;
		Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* L_3 = (Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F*)(Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_2);
		V_0 = L_3;
		Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* L_4 = __this->____items;
		Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* L_5 = V_0;
		int32_t L_6 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_4, 0, (RuntimeArray*)L_5, 0, L_6, NULL);
		Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* L_7 = V_0;
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddEnumerable_m888E7562D4D5756B46E7DE52614832960DA81A0D_gshared (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* __this, RuntimeObject* ___0_enumerable, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		RuntimeObject* L_1 = ___0_enumerable;
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 4), L_1);
		V_0 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0063:
			{
				{
					RuntimeObject* L_3 = V_0;
					if (!L_3)
					{
						goto IL_006c;
					}
				}
				{
					RuntimeObject* L_4 = V_0;
					NullCheck((RuntimeObject*)L_4);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_4);
				}

IL_006c:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_0059_1;
			}

IL_0017_1:
			{
				RuntimeObject* L_5 = V_0;
				NullCheck(L_5);
				int32_t L_6;
				L_6 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 27), L_5);
				V_1 = L_6;
				int32_t L_7 = __this->____size;
				Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* L_8 = __this->____items;
				NullCheck(L_8);
				if ((!(((uint32_t)L_7) == ((uint32_t)((int32_t)(((RuntimeArray*)L_8)->max_length))))))
				{
					goto IL_003c_1;
				}
			}
			{
				int32_t L_9 = __this->____size;
				List_1_EnsureCapacity_mE0139DA252869EB064FCEC6240A927BCE4945327(__this, ((int32_t)il2cpp_codegen_add(L_9, 1)), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
			}

IL_003c_1:
			{
				Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* L_10 = __this->____items;
				int32_t L_11 = __this->____size;
				V_2 = L_11;
				int32_t L_12 = V_2;
				__this->____size = ((int32_t)il2cpp_codegen_add(L_12, 1));
				int32_t L_13 = V_2;
				int32_t L_14 = V_1;
				NullCheck(L_10);
				(L_10)->SetAt(static_cast<il2cpp_array_size_t>(L_13), (int32_t)L_14);
			}

IL_0059_1:
			{
				RuntimeObject* L_15 = V_0;
				NullCheck((RuntimeObject*)L_15);
				bool L_16;
				L_16 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_15);
				if (L_16)
				{
					goto IL_0017_1;
				}
			}
			{
				goto IL_006d;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_006d:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__cctor_mE9586868AA80CB6AD6E8540292BFD0AD2B0EB4A7_gshared (const RuntimeMethod* method) 
{
	{
		Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* L_0 = (Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F*)(Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F*)SZArrayNew(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 3), (uint32_t)0);
		((List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___s_emptyArray = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___s_emptyArray), (void*)L_0);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ((List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 2)))->___s_emptyArray;
		__this->____items = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m76CBBC3E2F0583F5AD30CE592CEA1225C06A0428_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0012;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F((int32_t)((int32_t)12), (int32_t)4, NULL);
	}

IL_0012:
	{
		int32_t L_1 = ___0_capacity;
		if (L_1)
		{
			goto IL_0021;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = ((List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 2)))->___s_emptyArray;
		__this->____items = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_2);
		return;
	}

IL_0021:
	{
		int32_t L_3 = ___0_capacity;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_3);
		__this->____items = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_4);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mE097DBD72433D1AFC11733F5678602603A756424_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	int32_t V_1 = 0;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		RuntimeObject* L_0 = ___0_collection;
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)6, NULL);
	}

IL_000f:
	{
		RuntimeObject* L_1 = ___0_collection;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_1, il2cpp_rgctx_data(method->klass->rgctx_data, 5)));
		RuntimeObject* L_2 = V_0;
		if (!L_2)
		{
			goto IL_0050;
		}
	}
	{
		RuntimeObject* L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 5), L_3);
		V_1 = L_4;
		int32_t L_5 = V_1;
		if (L_5)
		{
			goto IL_002f;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = ((List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 2)))->___s_emptyArray;
		__this->____items = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_6);
		return;
	}

IL_002f:
	{
		int32_t L_7 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_7);
		__this->____items = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_8);
		RuntimeObject* L_9 = V_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_10 = __this->____items;
		NullCheck(L_9);
		InterfaceActionInvoker2< ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, int32_t >::Invoke(5, il2cpp_rgctx_data(method->klass->rgctx_data, 5), L_9, L_10, 0);
		int32_t L_11 = V_1;
		__this->____size = L_11;
		return;
	}

IL_0050:
	{
		__this->____size = 0;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_12 = ((List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 2)))->___s_emptyArray;
		__this->____items = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_12);
		RuntimeObject* L_13 = ___0_collection;
		List_1_AddEnumerable_m76C85811BC9C905E7224C054AD480C3062FA7700(__this, L_13, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Capacity_mD826E33A9E5EBC19C714653217071790693E0B95_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	{
		int32_t L_0 = ___0_value;
		int32_t L_1 = __this->____size;
		if ((((int32_t)L_0) >= ((int32_t)L_1)))
		{
			goto IL_0012;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F((int32_t)((int32_t)15), (int32_t)((int32_t)21), NULL);
	}

IL_0012:
	{
		int32_t L_2 = ___0_value;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = __this->____items;
		NullCheck(L_3);
		if ((((int32_t)L_2) == ((int32_t)((int32_t)(((RuntimeArray*)L_3)->max_length)))))
		{
			goto IL_0058;
		}
	}
	{
		int32_t L_4 = ___0_value;
		if ((((int32_t)L_4) <= ((int32_t)0)))
		{
			goto IL_004d;
		}
	}
	{
		int32_t L_5 = ___0_value;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_5);
		V_0 = L_6;
		int32_t L_7 = __this->____size;
		if ((((int32_t)L_7) <= ((int32_t)0)))
		{
			goto IL_0045;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8 = __this->____items;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = V_0;
		int32_t L_10 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_8, 0, (RuntimeArray*)L_9, 0, L_10, NULL);
	}

IL_0045:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_11 = V_0;
		__this->____items = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_11);
		return;
	}

IL_004d:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_12 = ((List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 2)))->___s_emptyArray;
		__this->____items = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_12);
	}

IL_0058:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m49DBCC449BC3304A3B6144768F836078C8280D8F_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_System_Collections_IList_get_IsReadOnly_m6785B4B320F35B6D5C0D396DDA90168F4A720A80_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_System_Collections_ICollection_get_SyncRoot_mE9D45E28E97F7F221F6C407E048C8AFAA66E6647_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____syncRoot;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject** L_1 = (RuntimeObject**)(&__this->____syncRoot);
		RuntimeObject* L_2 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_2, NULL);
		RuntimeObject* L_3;
		L_3 = InterlockedCompareExchangeImpl<RuntimeObject*>(L_1, L_2, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = __this->____syncRoot;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRange_IndexException_mC7661B8C6DD827679C95FC6B6C08F8724174936D(NULL);
	}

IL_000e:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = __this->____items;
		int32_t L_3 = ___0_index;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Item_m3C58DBC69A321AF2826595584FF3E9F43C07EA56_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___0_index, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRange_IndexException_mC7661B8C6DD827679C95FC6B6C08F8724174936D(NULL);
	}

IL_000e:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = __this->____items;
		int32_t L_3 = ___0_index;
		RuntimeObject* L_4 = ___1_value;
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(L_3), (RuntimeObject*)L_4);
		int32_t L_5 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_5, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_IsCompatibleObject_m639E8AB2F97E9764343E7A58C0C7297E11FB1F37_gshared (RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___0_value;
		if (((RuntimeObject*)IsInst((RuntimeObject*)L_0, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 9))))
		{
			goto IL_001f;
		}
	}
	{
		RuntimeObject* L_1 = ___0_value;
		if (L_1)
		{
			goto IL_001d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(RuntimeObject*));
		RuntimeObject* L_2 = V_0;
		return (bool)((((RuntimeObject*)(RuntimeObject*)L_2) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
	}

IL_001d:
	{
		return (bool)0;
	}

IL_001f:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_System_Collections_IList_get_Item_mA16AEEE513931A1F6B7E2E879B5000186ADDF9CD_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		RuntimeObject* L_1;
		L_1 = List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_System_Collections_IList_set_Item_m378A583B6ABD929C885A270D70D5CAEF2FC728A9_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___0_index, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeObject* L_0 = ___1_value;
		ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisRuntimeObject_m27E41ACCEE817CDFBB9616ED62F233A4EA0D8A49(L_0, (int32_t)((int32_t)15), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
	}
	try
	{
		int32_t L_1 = ___0_index;
		RuntimeObject* L_2 = ___1_value;
		List_1_set_Item_m3C58DBC69A321AF2826595584FF3E9F43C07EA56(__this, L_1, ((RuntimeObject*)Castclass((RuntimeObject*)L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 9))), il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		goto IL_002a;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0017;
		}
		throw e;
	}

CATCH_0017:
	{
		RuntimeObject* L_3 = ___1_value;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_4 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 13)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_5;
		L_5 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_4, NULL);
		ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_3, L_5, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_002a;
	}

IL_002a:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = __this->____items;
		V_0 = L_1;
		int32_t L_2 = __this->____size;
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
		__this->____size = ((int32_t)il2cpp_codegen_add(L_5, 1));
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
		List_1_AddWithResize_m79A9BF770BEF9C06BE40D5401E55E375F2726CC4(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void List_1_AddWithResize_m79A9BF770BEF9C06BE40D5401E55E375F2726CC4_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____size;
		V_0 = L_0;
		int32_t L_1 = V_0;
		List_1_EnsureCapacity_m6511331DC6EE293A9C3CED45A7079E09128EFA2D(__this, ((int32_t)il2cpp_codegen_add(L_1, 1)), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		int32_t L_2 = V_0;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_2, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = __this->____items;
		int32_t L_4 = V_0;
		RuntimeObject* L_5 = ___0_item;
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(L_4), (RuntimeObject*)L_5);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_System_Collections_IList_Add_mFDD792FAEB50E998B498C5082CCE1203B51CD20D_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeObject* L_0 = ___0_item;
		ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisRuntimeObject_m27E41ACCEE817CDFBB9616ED62F233A4EA0D8A49(L_0, (int32_t)((int32_t)20), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
	}
	try
	{
		RuntimeObject* L_1 = ___0_item;
		List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_inline(__this, ((RuntimeObject*)Castclass((RuntimeObject*)L_1, il2cpp_rgctx_data(method->klass->rgctx_data, 9))), il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		goto IL_0029;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0016;
		}
		throw e;
	}

CATCH_0016:
	{
		RuntimeObject* L_2 = ___0_item;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 13)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_2, L_4, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0029;
	}

IL_0029:
	{
		int32_t L_5;
		L_5 = List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 17));
		return ((int32_t)il2cpp_codegen_subtract(L_5, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddRange_m1F76B300133150E6046C5FED00E88B5DE0A02E17_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		RuntimeObject* L_1 = ___0_collection;
		List_1_InsertRange_m386ABA9B2C4950D31E787C87CDEF3D3E103F1B1A(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
	}
	{
		int32_t L_1 = __this->____size;
		V_0 = L_1;
		__this->____size = 0;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = __this->____items;
		int32_t L_4 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_3, 0, L_4, NULL);
		return;
	}

IL_003c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_m4C9139C2A6B23E9343D3F87807B32C6E2CFE660D_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		RuntimeObject* L_1 = ___0_item;
		int32_t L_2;
		L_2 = List_1_IndexOf_m378F61BA812B79DEE58D86FE8AA9F20E3FC7D85F(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		return (bool)((((int32_t)((((int32_t)L_2) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0016:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_System_Collections_IList_Contains_mFF1DD68BFF34C5CD7693D70DBB3E36B44ED2AD76_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_item;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		bool L_1;
		L_1 = List_1_IsCompatibleObject_m639E8AB2F97E9764343E7A58C0C7297E11FB1F37(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_item;
		bool L_3;
		L_3 = List_1_Contains_m4C9139C2A6B23E9343D3F87807B32C6E2CFE660D(__this, ((RuntimeObject*)Castclass((RuntimeObject*)L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 9))), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_CopyTo_mDA4751F464411AB4C757C63C6EDBF4891BFD6891_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_array, const RuntimeMethod* method) 
{
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ___0_array;
		List_1_CopyTo_m1210D480F3EF1C250A53086148C1204B7A99B931(__this, L_0, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_System_Collections_ICollection_CopyTo_m7D6AA655BACB66B136908375A600DF5FB2C80B5F_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeArray* ___0_array, int32_t ___1_arrayIndex, const RuntimeMethod* method) 
{
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		RuntimeArray* L_1 = ___0_array;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(L_1, NULL);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0012;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)7, NULL);
	}

IL_0012:
	{
	}
	try
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = __this->____items;
		RuntimeArray* L_4 = ___0_array;
		int32_t L_5 = ___1_arrayIndex;
		int32_t L_6 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_3, 0, L_4, L_5, L_6, NULL);
		goto IL_0031;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0029;
		}
		throw e;
	}

CATCH_0029:
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0031;
	}

IL_0031:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_CopyTo_m1210D480F3EF1C250A53086148C1204B7A99B931_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_array, int32_t ___1_arrayIndex, const RuntimeMethod* method) 
{
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = __this->____items;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = ___0_array;
		int32_t L_2 = ___1_arrayIndex;
		int32_t L_3 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_0, 0, (RuntimeArray*)L_1, L_2, L_3, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_EnsureCapacity_m6511331DC6EE293A9C3CED45A7079E09128EFA2D_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___0_min, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t G_B4_0 = 0;
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = __this->____items;
		NullCheck(L_0);
		int32_t L_1 = ___0_min;
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length))) >= ((int32_t)L_1)))
		{
			goto IL_003d;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = __this->____items;
		NullCheck(L_2);
		if (!(((RuntimeArray*)L_2)->max_length))
		{
			goto IL_0020;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = __this->____items;
		NullCheck(L_3);
		G_B4_0 = ((int32_t)il2cpp_codegen_multiply(((int32_t)(((RuntimeArray*)L_3)->max_length)), 2));
		goto IL_0021;
	}

IL_0020:
	{
		G_B4_0 = 4;
	}

IL_0021:
	{
		V_0 = G_B4_0;
		int32_t L_4 = V_0;
		if ((!(((uint32_t)L_4) > ((uint32_t)((int32_t)2146435071)))))
		{
			goto IL_0030;
		}
	}
	{
		V_0 = ((int32_t)2146435071);
	}

IL_0030:
	{
		int32_t L_5 = V_0;
		int32_t L_6 = ___0_min;
		if ((((int32_t)L_5) >= ((int32_t)L_6)))
		{
			goto IL_0036;
		}
	}
	{
		int32_t L_7 = ___0_min;
		V_0 = L_7;
	}

IL_0036:
	{
		int32_t L_8 = V_0;
		List_1_set_Capacity_mD826E33A9E5EBC19C714653217071790693E0B95(__this, L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 24));
	}

IL_003d:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m540236388ED02DCFB606983FBE3A7C536408505E((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m6A110D28B34507C23474622BC01CD205DD04684C_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m540236388ED02DCFB606983FBE3A7C536408505E((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 25), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_System_Collections_IEnumerable_GetEnumerator_mC65F2E69508537CAEE5F7297FF628592DF247196_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m540236388ED02DCFB606983FBE3A7C536408505E((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 25), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_IndexOf_m378F61BA812B79DEE58D86FE8AA9F20E3FC7D85F_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = __this->____items;
		RuntimeObject* L_1 = ___0_item;
		int32_t L_2 = __this->____size;
		int32_t L_3;
		L_3 = Array_IndexOf_TisRuntimeObject_m4C0C698B1D627E6B3C3BE6DDA512E8E276DC6F73(L_0, L_1, 0, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_System_Collections_IList_IndexOf_m5714EFA2C05BD9FCE2C1B9F4D12B8B8E2ACEF9BC_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_item;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		bool L_1;
		L_1 = List_1_IsCompatibleObject_m639E8AB2F97E9764343E7A58C0C7297E11FB1F37(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_item;
		int32_t L_3;
		L_3 = List_1_IndexOf_m378F61BA812B79DEE58D86FE8AA9F20E3FC7D85F(__this, ((RuntimeObject*)Castclass((RuntimeObject*)L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 9))), il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		return L_3;
	}

IL_0015:
	{
		return (-1);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Insert_m9C9559248941FED50561DB029D55DF08DEF3B094_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___0_index, RuntimeObject* ___1_item, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_0012;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F((int32_t)((int32_t)13), (int32_t)((int32_t)27), NULL);
	}

IL_0012:
	{
		int32_t L_2 = __this->____size;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = __this->____items;
		NullCheck(L_3);
		if ((!(((uint32_t)L_2) == ((uint32_t)((int32_t)(((RuntimeArray*)L_3)->max_length))))))
		{
			goto IL_0030;
		}
	}
	{
		int32_t L_4 = __this->____size;
		List_1_EnsureCapacity_m6511331DC6EE293A9C3CED45A7079E09128EFA2D(__this, ((int32_t)il2cpp_codegen_add(L_4, 1)), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
	}

IL_0030:
	{
		int32_t L_5 = ___0_index;
		int32_t L_6 = __this->____size;
		if ((((int32_t)L_5) >= ((int32_t)L_6)))
		{
			goto IL_0056;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = __this->____items;
		int32_t L_8 = ___0_index;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = __this->____items;
		int32_t L_10 = ___0_index;
		int32_t L_11 = __this->____size;
		int32_t L_12 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_7, L_8, (RuntimeArray*)L_9, ((int32_t)il2cpp_codegen_add(L_10, 1)), ((int32_t)il2cpp_codegen_subtract(L_11, L_12)), NULL);
	}

IL_0056:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_13 = __this->____items;
		int32_t L_14 = ___0_index;
		RuntimeObject* L_15 = ___1_item;
		NullCheck(L_13);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(L_14), (RuntimeObject*)L_15);
		int32_t L_16 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_16, 1));
		int32_t L_17 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_17, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_System_Collections_IList_Insert_mD38B1EE6D7CF56FA397CF7CE0821CDEC6E0B3E78_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___0_index, RuntimeObject* ___1_item, const RuntimeMethod* method) 
{
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeObject* L_0 = ___1_item;
		ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisRuntimeObject_m27E41ACCEE817CDFBB9616ED62F233A4EA0D8A49(L_0, (int32_t)((int32_t)20), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
	}
	try
	{
		int32_t L_1 = ___0_index;
		RuntimeObject* L_2 = ___1_item;
		List_1_Insert_m9C9559248941FED50561DB029D55DF08DEF3B094(__this, L_1, ((RuntimeObject*)Castclass((RuntimeObject*)L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 9))), il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		goto IL_002a;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0017;
		}
		throw e;
	}

CATCH_0017:
	{
		RuntimeObject* L_3 = ___1_item;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_4 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 13)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_5;
		L_5 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_4, NULL);
		ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_3, L_5, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_002a;
	}

IL_002a:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_InsertRange_m386ABA9B2C4950D31E787C87CDEF3D3E103F1B1A_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___0_index, RuntimeObject* ___1_collection, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	int32_t V_1 = 0;
	RuntimeObject* V_2 = NULL;
	{
		RuntimeObject* L_0 = ___1_collection;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)6, NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___0_index;
		int32_t L_2 = __this->____size;
		if ((!(((uint32_t)L_1) > ((uint32_t)L_2))))
		{
			goto IL_0017;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRange_IndexException_mC7661B8C6DD827679C95FC6B6C08F8724174936D(NULL);
	}

IL_0017:
	{
		RuntimeObject* L_3 = ___1_collection;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_3, il2cpp_rgctx_data(method->klass->rgctx_data, 5)));
		RuntimeObject* L_4 = V_0;
		if (!L_4)
		{
			goto IL_00bc;
		}
	}
	{
		RuntimeObject* L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 5), L_5);
		V_1 = L_6;
		int32_t L_7 = V_1;
		if ((((int32_t)L_7) <= ((int32_t)0)))
		{
			goto IL_00fb;
		}
	}
	{
		int32_t L_8 = __this->____size;
		int32_t L_9 = V_1;
		List_1_EnsureCapacity_m6511331DC6EE293A9C3CED45A7079E09128EFA2D(__this, ((int32_t)il2cpp_codegen_add(L_8, L_9)), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		int32_t L_10 = ___0_index;
		int32_t L_11 = __this->____size;
		if ((((int32_t)L_10) >= ((int32_t)L_11)))
		{
			goto IL_0066;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_12 = __this->____items;
		int32_t L_13 = ___0_index;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = __this->____items;
		int32_t L_15 = ___0_index;
		int32_t L_16 = V_1;
		int32_t L_17 = __this->____size;
		int32_t L_18 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_12, L_13, (RuntimeArray*)L_14, ((int32_t)il2cpp_codegen_add(L_15, L_16)), ((int32_t)il2cpp_codegen_subtract(L_17, L_18)), NULL);
	}

IL_0066:
	{
		RuntimeObject* L_19 = V_0;
		if ((!(((RuntimeObject*)(List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*)__this) == ((RuntimeObject*)(RuntimeObject*)L_19))))
		{
			goto IL_009f;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_20 = __this->____items;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_21 = __this->____items;
		int32_t L_22 = ___0_index;
		int32_t L_23 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_20, 0, (RuntimeArray*)L_21, L_22, L_23, NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_24 = __this->____items;
		int32_t L_25 = ___0_index;
		int32_t L_26 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_27 = __this->____items;
		int32_t L_28 = ___0_index;
		int32_t L_29 = __this->____size;
		int32_t L_30 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_24, ((int32_t)il2cpp_codegen_add(L_25, L_26)), (RuntimeArray*)L_27, ((int32_t)il2cpp_codegen_multiply(L_28, 2)), ((int32_t)il2cpp_codegen_subtract(L_29, L_30)), NULL);
		goto IL_00ac;
	}

IL_009f:
	{
		RuntimeObject* L_31 = V_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_32 = __this->____items;
		int32_t L_33 = ___0_index;
		NullCheck(L_31);
		InterfaceActionInvoker2< ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, int32_t >::Invoke(5, il2cpp_rgctx_data(method->klass->rgctx_data, 5), L_31, L_32, L_33);
	}

IL_00ac:
	{
		int32_t L_34 = __this->____size;
		int32_t L_35 = V_1;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_34, L_35));
		goto IL_00fb;
	}

IL_00bc:
	{
		int32_t L_36 = ___0_index;
		int32_t L_37 = __this->____size;
		if ((((int32_t)L_36) >= ((int32_t)L_37)))
		{
			goto IL_00f4;
		}
	}
	{
		RuntimeObject* L_38 = ___1_collection;
		NullCheck(L_38);
		RuntimeObject* L_39;
		L_39 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 4), L_38);
		V_2 = L_39;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00ea:
			{
				{
					RuntimeObject* L_40 = V_2;
					if (!L_40)
					{
						goto IL_00f3;
					}
				}
				{
					RuntimeObject* L_41 = V_2;
					NullCheck((RuntimeObject*)L_41);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_41);
				}

IL_00f3:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_00e0_1;
			}

IL_00ce_1:
			{
				int32_t L_42 = ___0_index;
				int32_t L_43 = L_42;
				___0_index = ((int32_t)il2cpp_codegen_add(L_43, 1));
				RuntimeObject* L_44 = V_2;
				NullCheck(L_44);
				RuntimeObject* L_45;
				L_45 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 27), L_44);
				List_1_Insert_m9C9559248941FED50561DB029D55DF08DEF3B094(__this, L_43, L_45, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
			}

IL_00e0_1:
			{
				RuntimeObject* L_46 = V_2;
				NullCheck((RuntimeObject*)L_46);
				bool L_47;
				L_47 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_46);
				if (L_47)
				{
					goto IL_00ce_1;
				}
			}
			{
				goto IL_00fb;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00f4:
	{
		RuntimeObject* L_48 = ___1_collection;
		List_1_AddEnumerable_m76C85811BC9C905E7224C054AD480C3062FA7700(__this, L_48, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
	}

IL_00fb:
	{
		int32_t L_49 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_49, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_m4DFA48F4CEB9169601E75FC28517C5C06EFA5AD7_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0 = ___0_item;
		int32_t L_1;
		L_1 = List_1_IndexOf_m378F61BA812B79DEE58D86FE8AA9F20E3FC7D85F(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		int32_t L_3 = V_0;
		List_1_RemoveAt_m54F62297ADEE4D4FDA697F49ED807BF901201B54(__this, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 32));
		return (bool)1;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_System_Collections_IList_Remove_m74B10668D8142FF08C21D9EE75765AEB0E762A92_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_item;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		bool L_1;
		L_1 = List_1_IsCompatibleObject_m639E8AB2F97E9764343E7A58C0C7297E11FB1F37(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_item;
		bool L_3;
		L_3 = List_1_Remove_m4DFA48F4CEB9169601E75FC28517C5C06EFA5AD7(__this, ((RuntimeObject*)Castclass((RuntimeObject*)L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 9))), il2cpp_rgctx_method(method->klass->rgctx_data, 33));
	}

IL_0015:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_RemoveAll_m1A8DE2A7640CC473609F3ADAC38FDB960520636D_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12* ___0_match, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12* L_0 = ___0_match;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)8, NULL);
	}

IL_0009:
	{
		V_0 = 0;
		goto IL_0011;
	}

IL_000d:
	{
		int32_t L_1 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_1, 1));
	}

IL_0011:
	{
		int32_t L_2 = V_0;
		int32_t L_3 = __this->____size;
		if ((((int32_t)L_2) >= ((int32_t)L_3)))
		{
			goto IL_002e;
		}
	}
	{
		Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12* L_4 = ___0_match;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = __this->____items;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		RuntimeObject* L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		NullCheck(L_4);
		bool L_9;
		L_9 = Predicate_1_Invoke_m6AC449189DCEE89A4FA2A2B724DE296A1DFB6A9B_inline(L_4, L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 35));
		if (!L_9)
		{
			goto IL_000d;
		}
	}

IL_002e:
	{
		int32_t L_10 = V_0;
		int32_t L_11 = __this->____size;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_0039;
		}
	}
	{
		return 0;
	}

IL_0039:
	{
		int32_t L_12 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
		goto IL_0089;
	}

IL_003f:
	{
		int32_t L_13 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_0043:
	{
		int32_t L_14 = V_1;
		int32_t L_15 = __this->____size;
		if ((((int32_t)L_14) >= ((int32_t)L_15)))
		{
			goto IL_0060;
		}
	}
	{
		Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12* L_16 = ___0_match;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_17 = __this->____items;
		int32_t L_18 = V_1;
		NullCheck(L_17);
		int32_t L_19 = L_18;
		RuntimeObject* L_20 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		NullCheck(L_16);
		bool L_21;
		L_21 = Predicate_1_Invoke_m6AC449189DCEE89A4FA2A2B724DE296A1DFB6A9B_inline(L_16, L_20, il2cpp_rgctx_method(method->klass->rgctx_data, 35));
		if (L_21)
		{
			goto IL_003f;
		}
	}

IL_0060:
	{
		int32_t L_22 = V_1;
		int32_t L_23 = __this->____size;
		if ((((int32_t)L_22) >= ((int32_t)L_23)))
		{
			goto IL_0089;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_24 = __this->____items;
		int32_t L_25 = V_0;
		int32_t L_26 = L_25;
		V_0 = ((int32_t)il2cpp_codegen_add(L_26, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_27 = __this->____items;
		int32_t L_28 = V_1;
		int32_t L_29 = L_28;
		V_1 = ((int32_t)il2cpp_codegen_add(L_29, 1));
		NullCheck(L_27);
		int32_t L_30 = L_29;
		RuntimeObject* L_31 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_30));
		NullCheck(L_24);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(L_26), (RuntimeObject*)L_31);
	}

IL_0089:
	{
		int32_t L_32 = V_1;
		int32_t L_33 = __this->____size;
		if ((((int32_t)L_32) < ((int32_t)L_33)))
		{
			goto IL_0043;
		}
	}
	{
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_34 = __this->____items;
		int32_t L_35 = V_0;
		int32_t L_36 = __this->____size;
		int32_t L_37 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_34, L_35, ((int32_t)il2cpp_codegen_subtract(L_36, L_37)), NULL);
	}

IL_00ad:
	{
		int32_t L_38 = __this->____size;
		int32_t L_39 = V_0;
		int32_t L_40 = V_0;
		__this->____size = L_40;
		int32_t L_41 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_41, 1));
		return ((int32_t)il2cpp_codegen_subtract(L_38, L_39));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_m54F62297ADEE4D4FDA697F49ED807BF901201B54_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRange_IndexException_mC7661B8C6DD827679C95FC6B6C08F8724174936D(NULL);
	}

IL_000e:
	{
		int32_t L_2 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_subtract(L_2, 1));
		int32_t L_3 = ___0_index;
		int32_t L_4 = __this->____size;
		if ((((int32_t)L_3) >= ((int32_t)L_4)))
		{
			goto IL_0042;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = __this->____items;
		int32_t L_6 = ___0_index;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = __this->____items;
		int32_t L_8 = ___0_index;
		int32_t L_9 = __this->____size;
		int32_t L_10 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, ((int32_t)il2cpp_codegen_add(L_6, 1)), (RuntimeArray*)L_7, L_8, ((int32_t)il2cpp_codegen_subtract(L_9, L_10)), NULL);
	}

IL_0042:
	{
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_11 = __this->____items;
		int32_t L_12 = __this->____size;
		il2cpp_codegen_initobj((&V_0), sizeof(RuntimeObject*));
		RuntimeObject* L_13 = V_0;
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(L_12), (RuntimeObject*)L_13);
	}

IL_0063:
	{
		int32_t L_14 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_14, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveRange_m0D2A25C95EFDC6E9CD22B663D9633426B51E3699_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___0_index, int32_t ___1_count, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_count;
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F((int32_t)((int32_t)16), (int32_t)4, NULL);
	}

IL_0015:
	{
		int32_t L_2 = __this->____size;
		int32_t L_3 = ___0_index;
		int32_t L_4 = ___1_count;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_2, L_3))) >= ((int32_t)L_4)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)((int32_t)23), NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_count;
		if ((((int32_t)L_5) <= ((int32_t)0)))
		{
			goto IL_008d;
		}
	}
	{
		int32_t L_6 = __this->____size;
		int32_t L_7 = __this->____size;
		int32_t L_8 = ___1_count;
		__this->____size = ((int32_t)il2cpp_codegen_subtract(L_7, L_8));
		int32_t L_9 = ___0_index;
		int32_t L_10 = __this->____size;
		if ((((int32_t)L_9) >= ((int32_t)L_10)))
		{
			goto IL_0066;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_11 = __this->____items;
		int32_t L_12 = ___0_index;
		int32_t L_13 = ___1_count;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = __this->____items;
		int32_t L_15 = ___0_index;
		int32_t L_16 = __this->____size;
		int32_t L_17 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_11, ((int32_t)il2cpp_codegen_add(L_12, L_13)), (RuntimeArray*)L_14, L_15, ((int32_t)il2cpp_codegen_subtract(L_16, L_17)), NULL);
	}

IL_0066:
	{
		int32_t L_18 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_18, 1));
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_19 = __this->____items;
		int32_t L_20 = __this->____size;
		int32_t L_21 = ___1_count;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_19, L_20, L_21, NULL);
	}

IL_008d:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Reverse_m3A8BEF4194B03E75859F94B4EE2F54045AF98708_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 17));
		List_1_Reverse_mA271B5B013C60CD038FA95C13BB2B5F09168D920(__this, 0, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 36));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Reverse_mA271B5B013C60CD038FA95C13BB2B5F09168D920_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___0_index, int32_t ___1_count, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_count;
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F((int32_t)((int32_t)16), (int32_t)4, NULL);
	}

IL_0015:
	{
		int32_t L_2 = __this->____size;
		int32_t L_3 = ___0_index;
		int32_t L_4 = ___1_count;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_2, L_3))) >= ((int32_t)L_4)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)((int32_t)23), NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_count;
		if ((((int32_t)L_5) <= ((int32_t)1)))
		{
			goto IL_0038;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = __this->____items;
		int32_t L_7 = ___0_index;
		int32_t L_8 = ___1_count;
		Array_Reverse_TisRuntimeObject_m06FF2E5011A594BEE1AF5EC3AEA51997A9812FE1(L_6, L_7, L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 37));
	}

IL_0038:
	{
		int32_t L_9 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_9, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_m4204C143D97E871DF2553329CFB0FBE3CD1A01F2_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 17));
		RuntimeObject* L_1 = ___0_comparer;
		List_1_Sort_mC96F92ACF35F9B37F0A5E3338FF61E5229554338(__this, 0, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 39));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_mC96F92ACF35F9B37F0A5E3338FF61E5229554338_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___0_index, int32_t ___1_count, RuntimeObject* ___2_comparer, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_count;
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F((int32_t)((int32_t)16), (int32_t)4, NULL);
	}

IL_0015:
	{
		int32_t L_2 = __this->____size;
		int32_t L_3 = ___0_index;
		int32_t L_4 = ___1_count;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_2, L_3))) >= ((int32_t)L_4)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)((int32_t)23), NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_count;
		if ((((int32_t)L_5) <= ((int32_t)1)))
		{
			goto IL_0039;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = __this->____items;
		int32_t L_7 = ___0_index;
		int32_t L_8 = ___1_count;
		RuntimeObject* L_9 = ___2_comparer;
		Array_Sort_TisRuntimeObject_mF8C07FB088390BE91CF3D4F9C8C4AC052B3FBCBA(L_6, L_7, L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 40));
	}

IL_0039:
	{
		int32_t L_10 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_10, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_mEB3B61CB86B1419919338B0668DC4E568C2FFF93_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, Comparison_1_t62E531E7B8260E2C6C2718C3BDB8CF8655139645* ___0_comparison, const RuntimeMethod* method) 
{
	{
		Comparison_1_t62E531E7B8260E2C6C2718C3BDB8CF8655139645* L_0 = ___0_comparison;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)((int32_t)34), NULL);
	}

IL_000a:
	{
		int32_t L_1 = __this->____size;
		if ((((int32_t)L_1) <= ((int32_t)1)))
		{
			goto IL_0026;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = __this->____items;
		int32_t L_3 = __this->____size;
		Comparison_1_t62E531E7B8260E2C6C2718C3BDB8CF8655139645* L_4 = ___0_comparison;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 43));
		ArraySortHelper_1_Sort_m1D1E1B0D0C13AF3B0C1B76665039738BFFE3125A(L_2, 0, L_3, L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 42));
	}

IL_0026:
	{
		int32_t L_5 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_5, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* List_1_ToArray_mD7E4F8E7C11C3C67CB5739FCC0A6E86106A6291F_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = ((List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 2)))->___s_emptyArray;
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____size;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_2);
		V_0 = L_3;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = __this->____items;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = V_0;
		int32_t L_6 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_4, 0, (RuntimeArray*)L_5, 0, L_6, NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = V_0;
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddEnumerable_m76C85811BC9C905E7224C054AD480C3062FA7700_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_enumerable, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	int32_t V_2 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		RuntimeObject* L_1 = ___0_enumerable;
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 4), L_1);
		V_0 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0063:
			{
				{
					RuntimeObject* L_3 = V_0;
					if (!L_3)
					{
						goto IL_006c;
					}
				}
				{
					RuntimeObject* L_4 = V_0;
					NullCheck((RuntimeObject*)L_4);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_4);
				}

IL_006c:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_0059_1;
			}

IL_0017_1:
			{
				RuntimeObject* L_5 = V_0;
				NullCheck(L_5);
				RuntimeObject* L_6;
				L_6 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 27), L_5);
				V_1 = L_6;
				int32_t L_7 = __this->____size;
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8 = __this->____items;
				NullCheck(L_8);
				if ((!(((uint32_t)L_7) == ((uint32_t)((int32_t)(((RuntimeArray*)L_8)->max_length))))))
				{
					goto IL_003c_1;
				}
			}
			{
				int32_t L_9 = __this->____size;
				List_1_EnsureCapacity_m6511331DC6EE293A9C3CED45A7079E09128EFA2D(__this, ((int32_t)il2cpp_codegen_add(L_9, 1)), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
			}

IL_003c_1:
			{
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_10 = __this->____items;
				int32_t L_11 = __this->____size;
				V_2 = L_11;
				int32_t L_12 = V_2;
				__this->____size = ((int32_t)il2cpp_codegen_add(L_12, 1));
				int32_t L_13 = V_2;
				RuntimeObject* L_14 = V_1;
				NullCheck(L_10);
				(L_10)->SetAt(static_cast<il2cpp_array_size_t>(L_13), (RuntimeObject*)L_14);
			}

IL_0059_1:
			{
				RuntimeObject* L_15 = V_0;
				NullCheck((RuntimeObject*)L_15);
				bool L_16;
				L_16 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_15);
				if (L_16)
				{
					goto IL_0017_1;
				}
			}
			{
				goto IL_006d;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_006d:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__cctor_m4C197A153076A17E0758C854773B02793337637A_gshared (const RuntimeMethod* method) 
{
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 3), (uint32_t)0);
		((List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___s_emptyArray = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___s_emptyArray), (void*)L_0);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m140AD29992C6AF5F82D8A2559DEDC96E3F8164BE_gshared (List_1_t9DE980811C648CE80197045689D21D2B224E7912* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		PointU5BU5D_tBF08949C6A5139156312E05FFEBA360828D28F4C* L_0 = ((List_1_t9DE980811C648CE80197045689D21D2B224E7912_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 2)))->___s_emptyArray;
		__this->____items = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m2AC428A3CE9AA0872D2FC434E32685DF761F0EB5_gshared (List_1_t9DE980811C648CE80197045689D21D2B224E7912* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0012;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F((int32_t)((int32_t)12), (int32_t)4, NULL);
	}

IL_0012:
	{
		int32_t L_1 = ___0_capacity;
		if (L_1)
		{
			goto IL_0021;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		PointU5BU5D_tBF08949C6A5139156312E05FFEBA360828D28F4C* L_2 = ((List_1_t9DE980811C648CE80197045689D21D2B224E7912_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 2)))->___s_emptyArray;
		__this->____items = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_2);
		return;
	}

IL_0021:
	{
		int32_t L_3 = ___0_capacity;
		PointU5BU5D_tBF08949C6A5139156312E05FFEBA360828D28F4C* L_4 = (PointU5BU5D_tBF08949C6A5139156312E05FFEBA360828D28F4C*)(PointU5BU5D_tBF08949C6A5139156312E05FFEBA360828D28F4C*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_3);
		__this->____items = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_4);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m1E7CA1DD152B93763546B09B8ABE181065E2AD8E_gshared (List_1_t9DE980811C648CE80197045689D21D2B224E7912* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	int32_t V_1 = 0;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		RuntimeObject* L_0 = ___0_collection;
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)6, NULL);
	}

IL_000f:
	{
		RuntimeObject* L_1 = ___0_collection;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_1, il2cpp_rgctx_data(method->klass->rgctx_data, 5)));
		RuntimeObject* L_2 = V_0;
		if (!L_2)
		{
			goto IL_0050;
		}
	}
	{
		RuntimeObject* L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 5), L_3);
		V_1 = L_4;
		int32_t L_5 = V_1;
		if (L_5)
		{
			goto IL_002f;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		PointU5BU5D_tBF08949C6A5139156312E05FFEBA360828D28F4C* L_6 = ((List_1_t9DE980811C648CE80197045689D21D2B224E7912_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 2)))->___s_emptyArray;
		__this->____items = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_6);
		return;
	}

IL_002f:
	{
		int32_t L_7 = V_1;
		PointU5BU5D_tBF08949C6A5139156312E05FFEBA360828D28F4C* L_8 = (PointU5BU5D_tBF08949C6A5139156312E05FFEBA360828D28F4C*)(PointU5BU5D_tBF08949C6A5139156312E05FFEBA360828D28F4C*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_7);
		__this->____items = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_8);
		RuntimeObject* L_9 = V_0;
		PointU5BU5D_tBF08949C6A5139156312E05FFEBA360828D28F4C* L_10 = __this->____items;
		NullCheck(L_9);
		InterfaceActionInvoker2< PointU5BU5D_tBF08949C6A5139156312E05FFEBA360828D28F4C*, int32_t >::Invoke(5, il2cpp_rgctx_data(method->klass->rgctx_data, 5), L_9, L_10, 0);
		int32_t L_11 = V_1;
		__this->____size = L_11;
		return;
	}

IL_0050:
	{
		__this->____size = 0;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		PointU5BU5D_tBF08949C6A5139156312E05FFEBA360828D28F4C* L_12 = ((List_1_t9DE980811C648CE80197045689D21D2B224E7912_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 2)))->___s_emptyArray;
		__this->____items = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_12);
		RuntimeObject* L_13 = ___0_collection;
		List_1_AddEnumerable_mE834F3621B1EA7B6549A506B2D60FD27F7248506(__this, L_13, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Capacity_m02D651F831E3F15525B0EBC98CEEA8D6FAD9B0A2_gshared (List_1_t9DE980811C648CE80197045689D21D2B224E7912* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	PointU5BU5D_tBF08949C6A5139156312E05FFEBA360828D28F4C* V_0 = NULL;
	{
		int32_t L_0 = ___0_value;
		int32_t L_1 = __this->____size;
		if ((((int32_t)L_0) >= ((int32_t)L_1)))
		{
			goto IL_0012;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F((int32_t)((int32_t)15), (int32_t)((int32_t)21), NULL);
	}

IL_0012:
	{
		int32_t L_2 = ___0_value;
		PointU5BU5D_tBF08949C6A5139156312E05FFEBA360828D28F4C* L_3 = __this->____items;
		NullCheck(L_3);
		if ((((int32_t)L_2) == ((int32_t)((int32_t)(((RuntimeArray*)L_3)->max_length)))))
		{
			goto IL_0058;
		}
	}
	{
		int32_t L_4 = ___0_value;
		if ((((int32_t)L_4) <= ((int32_t)0)))
		{
			goto IL_004d;
		}
	}
	{
		int32_t L_5 = ___0_value;
		PointU5BU5D_tBF08949C6A5139156312E05FFEBA360828D28F4C* L_6 = (PointU5BU5D_tBF08949C6A5139156312E05FFEBA360828D28F4C*)(PointU5BU5D_tBF08949C6A5139156312E05FFEBA360828D28F4C*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_5);
		V_0 = L_6;
		int32_t L_7 = __this->____size;
		if ((((int32_t)L_7) <= ((int32_t)0)))
		{
			goto IL_0045;
		}
	}
	{
		PointU5BU5D_tBF08949C6A5139156312E05FFEBA360828D28F4C* L_8 = __this->____items;
		PointU5BU5D_tBF08949C6A5139156312E05FFEBA360828D28F4C* L_9 = V_0;
		int32_t L_10 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_8, 0, (RuntimeArray*)L_9, 0, L_10, NULL);
	}

IL_0045:
	{
		PointU5BU5D_tBF08949C6A5139156312E05FFEBA360828D28F4C* L_11 = V_0;
		__this->____items = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_11);
		return;
	}

IL_004d:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		PointU5BU5D_tBF08949C6A5139156312E05FFEBA360828D28F4C* L_12 = ((List_1_t9DE980811C648CE80197045689D21D2B224E7912_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 2)))->___s_emptyArray;
		__this->____items = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_12);
	}

IL_0058:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m364C36D74BA0E74DAF87657A16515729C25460BB_gshared (List_1_t9DE980811C648CE80197045689D21D2B224E7912* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_mA919A1408382DAD7930CF3DBC155A85933C0D8C3_gshared (List_1_t9DE980811C648CE80197045689D21D2B224E7912* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_System_Collections_IList_get_IsReadOnly_m7E0CE55C4A142E5FFCA742A9B51C085AA9D433D9_gshared (List_1_t9DE980811C648CE80197045689D21D2B224E7912* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_System_Collections_ICollection_get_SyncRoot_m6D6C63F54DDE74C8D4C8320A9C458EB1B52E1F82_gshared (List_1_t9DE980811C648CE80197045689D21D2B224E7912* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____syncRoot;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject** L_1 = (RuntimeObject**)(&__this->____syncRoot);
		RuntimeObject* L_2 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_2, NULL);
		RuntimeObject* L_3;
		L_3 = InterlockedCompareExchangeImpl<RuntimeObject*>(L_1, L_2, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = __this->____syncRoot;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Point_t4F128496D336DF7AA8817608D59E72CEF8DBFB93 List_1_get_Item_m4D4923E3A23B111BC2E6FABB865C91638166A891_gshared (List_1_t9DE980811C648CE80197045689D21D2B224E7912* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRange_IndexException_mC7661B8C6DD827679C95FC6B6C08F8724174936D(NULL);
	}

IL_000e:
	{
		PointU5BU5D_tBF08949C6A5139156312E05FFEBA360828D28F4C* L_2 = __this->____items;
		int32_t L_3 = ___0_index;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		Point_t4F128496D336DF7AA8817608D59E72CEF8DBFB93 L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Item_m228441ED10A0F16FC4CD03E339F4EC612F54ED48_gshared (List_1_t9DE980811C648CE80197045689D21D2B224E7912* __this, int32_t ___0_index, Point_t4F128496D336DF7AA8817608D59E72CEF8DBFB93 ___1_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRange_IndexException_mC7661B8C6DD827679C95FC6B6C08F8724174936D(NULL);
	}

IL_000e:
	{
		PointU5BU5D_tBF08949C6A5139156312E05FFEBA360828D28F4C* L_2 = __this->____items;
		int32_t L_3 = ___0_index;
		Point_t4F128496D336DF7AA8817608D59E72CEF8DBFB93 L_4 = ___1_value;
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(L_3), (Point_t4F128496D336DF7AA8817608D59E72CEF8DBFB93)L_4);
		int32_t L_5 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_5, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_IsCompatibleObject_m19E8DD3F75663CAFDC2D894F001336F8556A6C17_gshared (RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	Point_t4F128496D336DF7AA8817608D59E72CEF8DBFB93 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_value;
		if (((RuntimeObject*)IsInst((RuntimeObject*)L_0, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 9))))
		{
			goto IL_001f;
		}
	}
	{
		RuntimeObject* L_1 = ___0_value;
		if (L_1)
		{
			goto IL_001d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Point_t4F128496D336DF7AA8817608D59E72CEF8DBFB93));
		Point_t4F128496D336DF7AA8817608D59E72CEF8DBFB93 L_2 = V_0;
		return false;
	}

IL_001d:
	{
		return (bool)0;
	}

IL_001f:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_System_Collections_IList_get_Item_m194A1852FFF76917A145DB6DDDB16584E1336A6C_gshared (List_1_t9DE980811C648CE80197045689D21D2B224E7912* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		Point_t4F128496D336DF7AA8817608D59E72CEF8DBFB93 L_1;
		L_1 = List_1_get_Item_m4D4923E3A23B111BC2E6FABB865C91638166A891(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		Point_t4F128496D336DF7AA8817608D59E72CEF8DBFB93 L_2 = L_1;
		RuntimeObject* L_3 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9), &L_2);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_System_Collections_IList_set_Item_mE16D35C4421FFC90639F755AF3FE4D24D2FA86E6_gshared (List_1_t9DE980811C648CE80197045689D21D2B224E7912* __this, int32_t ___0_index, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeObject* L_0 = ___1_value;
		ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisPoint_t4F128496D336DF7AA8817608D59E72CEF8DBFB93_m8FD32CB6A04C1A5DC1DA562CAA2B98231B06883C(L_0, (int32_t)((int32_t)15), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
	}
	try
	{
		int32_t L_1 = ___0_index;
		RuntimeObject* L_2 = ___1_value;
		List_1_set_Item_m228441ED10A0F16FC4CD03E339F4EC612F54ED48(__this, L_1, ((*(Point_t4F128496D336DF7AA8817608D59E72CEF8DBFB93*)((Point_t4F128496D336DF7AA8817608D59E72CEF8DBFB93*)(Point_t4F128496D336DF7AA8817608D59E72CEF8DBFB93*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 9))))), il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		goto IL_002a;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0017;
		}
		throw e;
	}

CATCH_0017:
	{
		RuntimeObject* L_3 = ___1_value;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_4 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 13)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_5;
		L_5 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_4, NULL);
		ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_3, L_5, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_002a;
	}

IL_002a:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_m93D11AF4102DBFC260157991485B7F81A0FC4638_gshared (List_1_t9DE980811C648CE80197045689D21D2B224E7912* __this, Point_t4F128496D336DF7AA8817608D59E72CEF8DBFB93 ___0_item, const RuntimeMethod* method) 
{
	PointU5BU5D_tBF08949C6A5139156312E05FFEBA360828D28F4C* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		PointU5BU5D_tBF08949C6A5139156312E05FFEBA360828D28F4C* L_1 = __this->____items;
		V_0 = L_1;
		int32_t L_2 = __this->____size;
		V_1 = L_2;
		int32_t L_3 = V_1;
		PointU5BU5D_tBF08949C6A5139156312E05FFEBA360828D28F4C* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_5, 1));
		PointU5BU5D_tBF08949C6A5139156312E05FFEBA360828D28F4C* L_6 = V_0;
		int32_t L_7 = V_1;
		Point_t4F128496D336DF7AA8817608D59E72CEF8DBFB93 L_8 = ___0_item;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (Point_t4F128496D336DF7AA8817608D59E72CEF8DBFB93)L_8);
		return;
	}

IL_0034:
	{
		Point_t4F128496D336DF7AA8817608D59E72CEF8DBFB93 L_9 = ___0_item;
		List_1_AddWithResize_mEE6F2A13EA6E4345FD10BD84686C624C931BDB94(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void List_1_AddWithResize_mEE6F2A13EA6E4345FD10BD84686C624C931BDB94_gshared (List_1_t9DE980811C648CE80197045689D21D2B224E7912* __this, Point_t4F128496D336DF7AA8817608D59E72CEF8DBFB93 ___0_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____size;
		V_0 = L_0;
		int32_t L_1 = V_0;
		List_1_EnsureCapacity_m1202F62418DD326A020DA1D5D72D0D4BE9140C5A(__this, ((int32_t)il2cpp_codegen_add(L_1, 1)), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		int32_t L_2 = V_0;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_2, 1));
		PointU5BU5D_tBF08949C6A5139156312E05FFEBA360828D28F4C* L_3 = __this->____items;
		int32_t L_4 = V_0;
		Point_t4F128496D336DF7AA8817608D59E72CEF8DBFB93 L_5 = ___0_item;
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(L_4), (Point_t4F128496D336DF7AA8817608D59E72CEF8DBFB93)L_5);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_System_Collections_IList_Add_m8BF7CA1ACD295CC87A8F3CC086D2568B5A3CA62E_gshared (List_1_t9DE980811C648CE80197045689D21D2B224E7912* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeObject* L_0 = ___0_item;
		ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisPoint_t4F128496D336DF7AA8817608D59E72CEF8DBFB93_m8FD32CB6A04C1A5DC1DA562CAA2B98231B06883C(L_0, (int32_t)((int32_t)20), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
	}
	try
	{
		RuntimeObject* L_1 = ___0_item;
		List_1_Add_m93D11AF4102DBFC260157991485B7F81A0FC4638_inline(__this, ((*(Point_t4F128496D336DF7AA8817608D59E72CEF8DBFB93*)((Point_t4F128496D336DF7AA8817608D59E72CEF8DBFB93*)(Point_t4F128496D336DF7AA8817608D59E72CEF8DBFB93*)UnBox(L_1, il2cpp_rgctx_data(method->klass->rgctx_data, 9))))), il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		goto IL_0029;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0016;
		}
		throw e;
	}

CATCH_0016:
	{
		RuntimeObject* L_2 = ___0_item;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 13)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_2, L_4, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0029;
	}

IL_0029:
	{
		int32_t L_5;
		L_5 = List_1_get_Count_m364C36D74BA0E74DAF87657A16515729C25460BB_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 17));
		return ((int32_t)il2cpp_codegen_subtract(L_5, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddRange_m77CC8F83462F94D814EAB5C65E92D935003AD65B_gshared (List_1_t9DE980811C648CE80197045689D21D2B224E7912* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		RuntimeObject* L_1 = ___0_collection;
		List_1_InsertRange_m99B1E6B14294658B0935934081534F6185F1DA95(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Clear_mAAD430358B46FA2D28AC0C83BAFD977AD9B5C41B_gshared (List_1_t9DE980811C648CE80197045689D21D2B224E7912* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		goto IL_0035;
	}

IL_0035:
	{
		__this->____size = 0;
	}

IL_003c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_m12C7BFF98397C515061AEE55D00FD5A34795EEE1_gshared (List_1_t9DE980811C648CE80197045689D21D2B224E7912* __this, Point_t4F128496D336DF7AA8817608D59E72CEF8DBFB93 ___0_item, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		Point_t4F128496D336DF7AA8817608D59E72CEF8DBFB93 L_1 = ___0_item;
		int32_t L_2;
		L_2 = List_1_IndexOf_m91D5B6F90EA38F65A448D280A5EA79A2EA22681B(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		return (bool)((((int32_t)((((int32_t)L_2) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0016:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_System_Collections_IList_Contains_mADC1A6E0FE339E371CAACC8BB75BF43B63015FB9_gshared (List_1_t9DE980811C648CE80197045689D21D2B224E7912* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_item;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		bool L_1;
		L_1 = List_1_IsCompatibleObject_m19E8DD3F75663CAFDC2D894F001336F8556A6C17(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_item;
		bool L_3;
		L_3 = List_1_Contains_m12C7BFF98397C515061AEE55D00FD5A34795EEE1(__this, ((*(Point_t4F128496D336DF7AA8817608D59E72CEF8DBFB93*)((Point_t4F128496D336DF7AA8817608D59E72CEF8DBFB93*)(Point_t4F128496D336DF7AA8817608D59E72CEF8DBFB93*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 9))))), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_CopyTo_mB73FF30975A6AD6C70074E5F564B6F3DC146B1F9_gshared (List_1_t9DE980811C648CE80197045689D21D2B224E7912* __this, PointU5BU5D_tBF08949C6A5139156312E05FFEBA360828D28F4C* ___0_array, const RuntimeMethod* method) 
{
	{
		PointU5BU5D_tBF08949C6A5139156312E05FFEBA360828D28F4C* L_0 = ___0_array;
		List_1_CopyTo_mD50378B7410606B61959E4C9F2063BCFA05AFE90(__this, L_0, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_System_Collections_ICollection_CopyTo_mE07E91E25CB591069406CF2E150557596E4F00EB_gshared (List_1_t9DE980811C648CE80197045689D21D2B224E7912* __this, RuntimeArray* ___0_array, int32_t ___1_arrayIndex, const RuntimeMethod* method) 
{
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		RuntimeArray* L_1 = ___0_array;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(L_1, NULL);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0012;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)7, NULL);
	}

IL_0012:
	{
	}
	try
	{
		PointU5BU5D_tBF08949C6A5139156312E05FFEBA360828D28F4C* L_3 = __this->____items;
		RuntimeArray* L_4 = ___0_array;
		int32_t L_5 = ___1_arrayIndex;
		int32_t L_6 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_3, 0, L_4, L_5, L_6, NULL);
		goto IL_0031;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0029;
		}
		throw e;
	}

CATCH_0029:
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0031;
	}

IL_0031:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_CopyTo_mD50378B7410606B61959E4C9F2063BCFA05AFE90_gshared (List_1_t9DE980811C648CE80197045689D21D2B224E7912* __this, PointU5BU5D_tBF08949C6A5139156312E05FFEBA360828D28F4C* ___0_array, int32_t ___1_arrayIndex, const RuntimeMethod* method) 
{
	{
		PointU5BU5D_tBF08949C6A5139156312E05FFEBA360828D28F4C* L_0 = __this->____items;
		PointU5BU5D_tBF08949C6A5139156312E05FFEBA360828D28F4C* L_1 = ___0_array;
		int32_t L_2 = ___1_arrayIndex;
		int32_t L_3 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_0, 0, (RuntimeArray*)L_1, L_2, L_3, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_EnsureCapacity_m1202F62418DD326A020DA1D5D72D0D4BE9140C5A_gshared (List_1_t9DE980811C648CE80197045689D21D2B224E7912* __this, int32_t ___0_min, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t G_B4_0 = 0;
	{
		PointU5BU5D_tBF08949C6A5139156312E05FFEBA360828D28F4C* L_0 = __this->____items;
		NullCheck(L_0);
		int32_t L_1 = ___0_min;
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length))) >= ((int32_t)L_1)))
		{
			goto IL_003d;
		}
	}
	{
		PointU5BU5D_tBF08949C6A5139156312E05FFEBA360828D28F4C* L_2 = __this->____items;
		NullCheck(L_2);
		if (!(((RuntimeArray*)L_2)->max_length))
		{
			goto IL_0020;
		}
	}
	{
		PointU5BU5D_tBF08949C6A5139156312E05FFEBA360828D28F4C* L_3 = __this->____items;
		NullCheck(L_3);
		G_B4_0 = ((int32_t)il2cpp_codegen_multiply(((int32_t)(((RuntimeArray*)L_3)->max_length)), 2));
		goto IL_0021;
	}

IL_0020:
	{
		G_B4_0 = 4;
	}

IL_0021:
	{
		V_0 = G_B4_0;
		int32_t L_4 = V_0;
		if ((!(((uint32_t)L_4) > ((uint32_t)((int32_t)2146435071)))))
		{
			goto IL_0030;
		}
	}
	{
		V_0 = ((int32_t)2146435071);
	}

IL_0030:
	{
		int32_t L_5 = V_0;
		int32_t L_6 = ___0_min;
		if ((((int32_t)L_5) >= ((int32_t)L_6)))
		{
			goto IL_0036;
		}
	}
	{
		int32_t L_7 = ___0_min;
		V_0 = L_7;
	}

IL_0036:
	{
		int32_t L_8 = V_0;
		List_1_set_Capacity_m02D651F831E3F15525B0EBC98CEEA8D6FAD9B0A2(__this, L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 24));
	}

IL_003d:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9A06AD03886B23E647554089873705961E2BA463 List_1_GetEnumerator_mD92D29441939B302E959B026F64739B81EB875D1_gshared (List_1_t9DE980811C648CE80197045689D21D2B224E7912* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t9A06AD03886B23E647554089873705961E2BA463 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m5F624EC47E8EC578E3EDCA29E809E19E200671B2((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m6D713A5C8E6BB652E59D0BC2068DCA17682D3622_gshared (List_1_t9DE980811C648CE80197045689D21D2B224E7912* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t9A06AD03886B23E647554089873705961E2BA463 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m5F624EC47E8EC578E3EDCA29E809E19E200671B2((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		Enumerator_t9A06AD03886B23E647554089873705961E2BA463 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 25), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_System_Collections_IEnumerable_GetEnumerator_m780A79655B7D14F60E0B7509A56B0002FFDF0944_gshared (List_1_t9DE980811C648CE80197045689D21D2B224E7912* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t9A06AD03886B23E647554089873705961E2BA463 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m5F624EC47E8EC578E3EDCA29E809E19E200671B2((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		Enumerator_t9A06AD03886B23E647554089873705961E2BA463 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 25), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_IndexOf_m91D5B6F90EA38F65A448D280A5EA79A2EA22681B_gshared (List_1_t9DE980811C648CE80197045689D21D2B224E7912* __this, Point_t4F128496D336DF7AA8817608D59E72CEF8DBFB93 ___0_item, const RuntimeMethod* method) 
{
	{
		PointU5BU5D_tBF08949C6A5139156312E05FFEBA360828D28F4C* L_0 = __this->____items;
		Point_t4F128496D336DF7AA8817608D59E72CEF8DBFB93 L_1 = ___0_item;
		int32_t L_2 = __this->____size;
		int32_t L_3;
		L_3 = Array_IndexOf_TisPoint_t4F128496D336DF7AA8817608D59E72CEF8DBFB93_mAC380450B02FA206203D148FCCE10A79FEA2A617(L_0, L_1, 0, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_System_Collections_IList_IndexOf_m441B549BFF74AC3467954BA3BD58759685943A7D_gshared (List_1_t9DE980811C648CE80197045689D21D2B224E7912* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_item;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		bool L_1;
		L_1 = List_1_IsCompatibleObject_m19E8DD3F75663CAFDC2D894F001336F8556A6C17(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_item;
		int32_t L_3;
		L_3 = List_1_IndexOf_m91D5B6F90EA38F65A448D280A5EA79A2EA22681B(__this, ((*(Point_t4F128496D336DF7AA8817608D59E72CEF8DBFB93*)((Point_t4F128496D336DF7AA8817608D59E72CEF8DBFB93*)(Point_t4F128496D336DF7AA8817608D59E72CEF8DBFB93*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 9))))), il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		return L_3;
	}

IL_0015:
	{
		return (-1);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Insert_mCC981526E88E4C8151FDDE1B7E7ED767032F42C6_gshared (List_1_t9DE980811C648CE80197045689D21D2B224E7912* __this, int32_t ___0_index, Point_t4F128496D336DF7AA8817608D59E72CEF8DBFB93 ___1_item, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_0012;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F((int32_t)((int32_t)13), (int32_t)((int32_t)27), NULL);
	}

IL_0012:
	{
		int32_t L_2 = __this->____size;
		PointU5BU5D_tBF08949C6A5139156312E05FFEBA360828D28F4C* L_3 = __this->____items;
		NullCheck(L_3);
		if ((!(((uint32_t)L_2) == ((uint32_t)((int32_t)(((RuntimeArray*)L_3)->max_length))))))
		{
			goto IL_0030;
		}
	}
	{
		int32_t L_4 = __this->____size;
		List_1_EnsureCapacity_m1202F62418DD326A020DA1D5D72D0D4BE9140C5A(__this, ((int32_t)il2cpp_codegen_add(L_4, 1)), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
	}

IL_0030:
	{
		int32_t L_5 = ___0_index;
		int32_t L_6 = __this->____size;
		if ((((int32_t)L_5) >= ((int32_t)L_6)))
		{
			goto IL_0056;
		}
	}
	{
		PointU5BU5D_tBF08949C6A5139156312E05FFEBA360828D28F4C* L_7 = __this->____items;
		int32_t L_8 = ___0_index;
		PointU5BU5D_tBF08949C6A5139156312E05FFEBA360828D28F4C* L_9 = __this->____items;
		int32_t L_10 = ___0_index;
		int32_t L_11 = __this->____size;
		int32_t L_12 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_7, L_8, (RuntimeArray*)L_9, ((int32_t)il2cpp_codegen_add(L_10, 1)), ((int32_t)il2cpp_codegen_subtract(L_11, L_12)), NULL);
	}

IL_0056:
	{
		PointU5BU5D_tBF08949C6A5139156312E05FFEBA360828D28F4C* L_13 = __this->____items;
		int32_t L_14 = ___0_index;
		Point_t4F128496D336DF7AA8817608D59E72CEF8DBFB93 L_15 = ___1_item;
		NullCheck(L_13);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(L_14), (Point_t4F128496D336DF7AA8817608D59E72CEF8DBFB93)L_15);
		int32_t L_16 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_16, 1));
		int32_t L_17 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_17, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_System_Collections_IList_Insert_m225E65EB6BA07543457B469F98E57AA5B59EC316_gshared (List_1_t9DE980811C648CE80197045689D21D2B224E7912* __this, int32_t ___0_index, RuntimeObject* ___1_item, const RuntimeMethod* method) 
{
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeObject* L_0 = ___1_item;
		ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisPoint_t4F128496D336DF7AA8817608D59E72CEF8DBFB93_m8FD32CB6A04C1A5DC1DA562CAA2B98231B06883C(L_0, (int32_t)((int32_t)20), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
	}
	try
	{
		int32_t L_1 = ___0_index;
		RuntimeObject* L_2 = ___1_item;
		List_1_Insert_mCC981526E88E4C8151FDDE1B7E7ED767032F42C6(__this, L_1, ((*(Point_t4F128496D336DF7AA8817608D59E72CEF8DBFB93*)((Point_t4F128496D336DF7AA8817608D59E72CEF8DBFB93*)(Point_t4F128496D336DF7AA8817608D59E72CEF8DBFB93*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 9))))), il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		goto IL_002a;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0017;
		}
		throw e;
	}

CATCH_0017:
	{
		RuntimeObject* L_3 = ___1_item;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_4 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 13)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_5;
		L_5 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_4, NULL);
		ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_3, L_5, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_002a;
	}

IL_002a:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_InsertRange_m99B1E6B14294658B0935934081534F6185F1DA95_gshared (List_1_t9DE980811C648CE80197045689D21D2B224E7912* __this, int32_t ___0_index, RuntimeObject* ___1_collection, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	int32_t V_1 = 0;
	RuntimeObject* V_2 = NULL;
	{
		RuntimeObject* L_0 = ___1_collection;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)6, NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___0_index;
		int32_t L_2 = __this->____size;
		if ((!(((uint32_t)L_1) > ((uint32_t)L_2))))
		{
			goto IL_0017;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRange_IndexException_mC7661B8C6DD827679C95FC6B6C08F8724174936D(NULL);
	}

IL_0017:
	{
		RuntimeObject* L_3 = ___1_collection;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_3, il2cpp_rgctx_data(method->klass->rgctx_data, 5)));
		RuntimeObject* L_4 = V_0;
		if (!L_4)
		{
			goto IL_00bc;
		}
	}
	{
		RuntimeObject* L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 5), L_5);
		V_1 = L_6;
		int32_t L_7 = V_1;
		if ((((int32_t)L_7) <= ((int32_t)0)))
		{
			goto IL_00fb;
		}
	}
	{
		int32_t L_8 = __this->____size;
		int32_t L_9 = V_1;
		List_1_EnsureCapacity_m1202F62418DD326A020DA1D5D72D0D4BE9140C5A(__this, ((int32_t)il2cpp_codegen_add(L_8, L_9)), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		int32_t L_10 = ___0_index;
		int32_t L_11 = __this->____size;
		if ((((int32_t)L_10) >= ((int32_t)L_11)))
		{
			goto IL_0066;
		}
	}
	{
		PointU5BU5D_tBF08949C6A5139156312E05FFEBA360828D28F4C* L_12 = __this->____items;
		int32_t L_13 = ___0_index;
		PointU5BU5D_tBF08949C6A5139156312E05FFEBA360828D28F4C* L_14 = __this->____items;
		int32_t L_15 = ___0_index;
		int32_t L_16 = V_1;
		int32_t L_17 = __this->____size;
		int32_t L_18 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_12, L_13, (RuntimeArray*)L_14, ((int32_t)il2cpp_codegen_add(L_15, L_16)), ((int32_t)il2cpp_codegen_subtract(L_17, L_18)), NULL);
	}

IL_0066:
	{
		RuntimeObject* L_19 = V_0;
		if ((!(((RuntimeObject*)(List_1_t9DE980811C648CE80197045689D21D2B224E7912*)__this) == ((RuntimeObject*)(RuntimeObject*)L_19))))
		{
			goto IL_009f;
		}
	}
	{
		PointU5BU5D_tBF08949C6A5139156312E05FFEBA360828D28F4C* L_20 = __this->____items;
		PointU5BU5D_tBF08949C6A5139156312E05FFEBA360828D28F4C* L_21 = __this->____items;
		int32_t L_22 = ___0_index;
		int32_t L_23 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_20, 0, (RuntimeArray*)L_21, L_22, L_23, NULL);
		PointU5BU5D_tBF08949C6A5139156312E05FFEBA360828D28F4C* L_24 = __this->____items;
		int32_t L_25 = ___0_index;
		int32_t L_26 = V_1;
		PointU5BU5D_tBF08949C6A5139156312E05FFEBA360828D28F4C* L_27 = __this->____items;
		int32_t L_28 = ___0_index;
		int32_t L_29 = __this->____size;
		int32_t L_30 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_24, ((int32_t)il2cpp_codegen_add(L_25, L_26)), (RuntimeArray*)L_27, ((int32_t)il2cpp_codegen_multiply(L_28, 2)), ((int32_t)il2cpp_codegen_subtract(L_29, L_30)), NULL);
		goto IL_00ac;
	}

IL_009f:
	{
		RuntimeObject* L_31 = V_0;
		PointU5BU5D_tBF08949C6A5139156312E05FFEBA360828D28F4C* L_32 = __this->____items;
		int32_t L_33 = ___0_index;
		NullCheck(L_31);
		InterfaceActionInvoker2< PointU5BU5D_tBF08949C6A5139156312E05FFEBA360828D28F4C*, int32_t >::Invoke(5, il2cpp_rgctx_data(method->klass->rgctx_data, 5), L_31, L_32, L_33);
	}

IL_00ac:
	{
		int32_t L_34 = __this->____size;
		int32_t L_35 = V_1;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_34, L_35));
		goto IL_00fb;
	}

IL_00bc:
	{
		int32_t L_36 = ___0_index;
		int32_t L_37 = __this->____size;
		if ((((int32_t)L_36) >= ((int32_t)L_37)))
		{
			goto IL_00f4;
		}
	}
	{
		RuntimeObject* L_38 = ___1_collection;
		NullCheck(L_38);
		RuntimeObject* L_39;
		L_39 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 4), L_38);
		V_2 = L_39;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00ea:
			{
				{
					RuntimeObject* L_40 = V_2;
					if (!L_40)
					{
						goto IL_00f3;
					}
				}
				{
					RuntimeObject* L_41 = V_2;
					NullCheck((RuntimeObject*)L_41);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_41);
				}

IL_00f3:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_00e0_1;
			}

IL_00ce_1:
			{
				int32_t L_42 = ___0_index;
				int32_t L_43 = L_42;
				___0_index = ((int32_t)il2cpp_codegen_add(L_43, 1));
				RuntimeObject* L_44 = V_2;
				NullCheck(L_44);
				Point_t4F128496D336DF7AA8817608D59E72CEF8DBFB93 L_45;
				L_45 = InterfaceFuncInvoker0< Point_t4F128496D336DF7AA8817608D59E72CEF8DBFB93 >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 27), L_44);
				List_1_Insert_mCC981526E88E4C8151FDDE1B7E7ED767032F42C6(__this, L_43, L_45, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
			}

IL_00e0_1:
			{
				RuntimeObject* L_46 = V_2;
				NullCheck((RuntimeObject*)L_46);
				bool L_47;
				L_47 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_46);
				if (L_47)
				{
					goto IL_00ce_1;
				}
			}
			{
				goto IL_00fb;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00f4:
	{
		RuntimeObject* L_48 = ___1_collection;
		List_1_AddEnumerable_mE834F3621B1EA7B6549A506B2D60FD27F7248506(__this, L_48, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
	}

IL_00fb:
	{
		int32_t L_49 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_49, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_m6244881C5C9292C52D9A59D52244849F5586D168_gshared (List_1_t9DE980811C648CE80197045689D21D2B224E7912* __this, Point_t4F128496D336DF7AA8817608D59E72CEF8DBFB93 ___0_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		Point_t4F128496D336DF7AA8817608D59E72CEF8DBFB93 L_0 = ___0_item;
		int32_t L_1;
		L_1 = List_1_IndexOf_m91D5B6F90EA38F65A448D280A5EA79A2EA22681B(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		int32_t L_3 = V_0;
		List_1_RemoveAt_m31B75770058276E7F7A2469C915AFC7D198DAB8E(__this, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 32));
		return (bool)1;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_System_Collections_IList_Remove_mDB2C006B589234ED83F1FF50E6B1194C39B4E635_gshared (List_1_t9DE980811C648CE80197045689D21D2B224E7912* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_item;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		bool L_1;
		L_1 = List_1_IsCompatibleObject_m19E8DD3F75663CAFDC2D894F001336F8556A6C17(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_item;
		bool L_3;
		L_3 = List_1_Remove_m6244881C5C9292C52D9A59D52244849F5586D168(__this, ((*(Point_t4F128496D336DF7AA8817608D59E72CEF8DBFB93*)((Point_t4F128496D336DF7AA8817608D59E72CEF8DBFB93*)(Point_t4F128496D336DF7AA8817608D59E72CEF8DBFB93*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 9))))), il2cpp_rgctx_method(method->klass->rgctx_data, 33));
	}

IL_0015:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_RemoveAll_m842A68AB13DD100631E09E20D0BDEE9335F9D3EB_gshared (List_1_t9DE980811C648CE80197045689D21D2B224E7912* __this, Predicate_1_t2812BD9A4B34C2F0C29CD9C263856BAE4515A201* ___0_match, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		Predicate_1_t2812BD9A4B34C2F0C29CD9C263856BAE4515A201* L_0 = ___0_match;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)8, NULL);
	}

IL_0009:
	{
		V_0 = 0;
		goto IL_0011;
	}

IL_000d:
	{
		int32_t L_1 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_1, 1));
	}

IL_0011:
	{
		int32_t L_2 = V_0;
		int32_t L_3 = __this->____size;
		if ((((int32_t)L_2) >= ((int32_t)L_3)))
		{
			goto IL_002e;
		}
	}
	{
		Predicate_1_t2812BD9A4B34C2F0C29CD9C263856BAE4515A201* L_4 = ___0_match;
		PointU5BU5D_tBF08949C6A5139156312E05FFEBA360828D28F4C* L_5 = __this->____items;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		Point_t4F128496D336DF7AA8817608D59E72CEF8DBFB93 L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		NullCheck(L_4);
		bool L_9;
		L_9 = Predicate_1_Invoke_m6A70A7AB2F00E03E6030B95A9BCB53868C27EA94_inline(L_4, L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 35));
		if (!L_9)
		{
			goto IL_000d;
		}
	}

IL_002e:
	{
		int32_t L_10 = V_0;
		int32_t L_11 = __this->____size;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_0039;
		}
	}
	{
		return 0;
	}

IL_0039:
	{
		int32_t L_12 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
		goto IL_0089;
	}

IL_003f:
	{
		int32_t L_13 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_0043:
	{
		int32_t L_14 = V_1;
		int32_t L_15 = __this->____size;
		if ((((int32_t)L_14) >= ((int32_t)L_15)))
		{
			goto IL_0060;
		}
	}
	{
		Predicate_1_t2812BD9A4B34C2F0C29CD9C263856BAE4515A201* L_16 = ___0_match;
		PointU5BU5D_tBF08949C6A5139156312E05FFEBA360828D28F4C* L_17 = __this->____items;
		int32_t L_18 = V_1;
		NullCheck(L_17);
		int32_t L_19 = L_18;
		Point_t4F128496D336DF7AA8817608D59E72CEF8DBFB93 L_20 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		NullCheck(L_16);
		bool L_21;
		L_21 = Predicate_1_Invoke_m6A70A7AB2F00E03E6030B95A9BCB53868C27EA94_inline(L_16, L_20, il2cpp_rgctx_method(method->klass->rgctx_data, 35));
		if (L_21)
		{
			goto IL_003f;
		}
	}

IL_0060:
	{
		int32_t L_22 = V_1;
		int32_t L_23 = __this->____size;
		if ((((int32_t)L_22) >= ((int32_t)L_23)))
		{
			goto IL_0089;
		}
	}
	{
		PointU5BU5D_tBF08949C6A5139156312E05FFEBA360828D28F4C* L_24 = __this->____items;
		int32_t L_25 = V_0;
		int32_t L_26 = L_25;
		V_0 = ((int32_t)il2cpp_codegen_add(L_26, 1));
		PointU5BU5D_tBF08949C6A5139156312E05FFEBA360828D28F4C* L_27 = __this->____items;
		int32_t L_28 = V_1;
		int32_t L_29 = L_28;
		V_1 = ((int32_t)il2cpp_codegen_add(L_29, 1));
		NullCheck(L_27);
		int32_t L_30 = L_29;
		Point_t4F128496D336DF7AA8817608D59E72CEF8DBFB93 L_31 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_30));
		NullCheck(L_24);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(L_26), (Point_t4F128496D336DF7AA8817608D59E72CEF8DBFB93)L_31);
	}

IL_0089:
	{
		int32_t L_32 = V_1;
		int32_t L_33 = __this->____size;
		if ((((int32_t)L_32) < ((int32_t)L_33)))
		{
			goto IL_0043;
		}
	}
	{
		goto IL_00ad;
	}

IL_00ad:
	{
		int32_t L_34 = __this->____size;
		int32_t L_35 = V_0;
		int32_t L_36 = V_0;
		__this->____size = L_36;
		int32_t L_37 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_37, 1));
		return ((int32_t)il2cpp_codegen_subtract(L_34, L_35));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_m31B75770058276E7F7A2469C915AFC7D198DAB8E_gshared (List_1_t9DE980811C648CE80197045689D21D2B224E7912* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	Point_t4F128496D336DF7AA8817608D59E72CEF8DBFB93 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRange_IndexException_mC7661B8C6DD827679C95FC6B6C08F8724174936D(NULL);
	}

IL_000e:
	{
		int32_t L_2 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_subtract(L_2, 1));
		int32_t L_3 = ___0_index;
		int32_t L_4 = __this->____size;
		if ((((int32_t)L_3) >= ((int32_t)L_4)))
		{
			goto IL_0042;
		}
	}
	{
		PointU5BU5D_tBF08949C6A5139156312E05FFEBA360828D28F4C* L_5 = __this->____items;
		int32_t L_6 = ___0_index;
		PointU5BU5D_tBF08949C6A5139156312E05FFEBA360828D28F4C* L_7 = __this->____items;
		int32_t L_8 = ___0_index;
		int32_t L_9 = __this->____size;
		int32_t L_10 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, ((int32_t)il2cpp_codegen_add(L_6, 1)), (RuntimeArray*)L_7, L_8, ((int32_t)il2cpp_codegen_subtract(L_9, L_10)), NULL);
	}

IL_0042:
	{
		goto IL_0063;
	}

IL_0063:
	{
		int32_t L_11 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_11, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveRange_mD19A2FC75814559D4E2E1D7F17E857FE3B554297_gshared (List_1_t9DE980811C648CE80197045689D21D2B224E7912* __this, int32_t ___0_index, int32_t ___1_count, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_count;
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F((int32_t)((int32_t)16), (int32_t)4, NULL);
	}

IL_0015:
	{
		int32_t L_2 = __this->____size;
		int32_t L_3 = ___0_index;
		int32_t L_4 = ___1_count;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_2, L_3))) >= ((int32_t)L_4)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)((int32_t)23), NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_count;
		if ((((int32_t)L_5) <= ((int32_t)0)))
		{
			goto IL_008d;
		}
	}
	{
		int32_t L_6 = __this->____size;
		int32_t L_7 = __this->____size;
		int32_t L_8 = ___1_count;
		__this->____size = ((int32_t)il2cpp_codegen_subtract(L_7, L_8));
		int32_t L_9 = ___0_index;
		int32_t L_10 = __this->____size;
		if ((((int32_t)L_9) >= ((int32_t)L_10)))
		{
			goto IL_0066;
		}
	}
	{
		PointU5BU5D_tBF08949C6A5139156312E05FFEBA360828D28F4C* L_11 = __this->____items;
		int32_t L_12 = ___0_index;
		int32_t L_13 = ___1_count;
		PointU5BU5D_tBF08949C6A5139156312E05FFEBA360828D28F4C* L_14 = __this->____items;
		int32_t L_15 = ___0_index;
		int32_t L_16 = __this->____size;
		int32_t L_17 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_11, ((int32_t)il2cpp_codegen_add(L_12, L_13)), (RuntimeArray*)L_14, L_15, ((int32_t)il2cpp_codegen_subtract(L_16, L_17)), NULL);
	}

IL_0066:
	{
		int32_t L_18 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_18, 1));
		goto IL_008d;
	}

IL_008d:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Reverse_mBE38C6E2A1B8547B65C80941F17F836B7828DEF1_gshared (List_1_t9DE980811C648CE80197045689D21D2B224E7912* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = List_1_get_Count_m364C36D74BA0E74DAF87657A16515729C25460BB_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 17));
		List_1_Reverse_m75DC066BD9CD4A3DE3163C33B470654E9D701FCB(__this, 0, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 36));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Reverse_m75DC066BD9CD4A3DE3163C33B470654E9D701FCB_gshared (List_1_t9DE980811C648CE80197045689D21D2B224E7912* __this, int32_t ___0_index, int32_t ___1_count, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_count;
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F((int32_t)((int32_t)16), (int32_t)4, NULL);
	}

IL_0015:
	{
		int32_t L_2 = __this->____size;
		int32_t L_3 = ___0_index;
		int32_t L_4 = ___1_count;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_2, L_3))) >= ((int32_t)L_4)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)((int32_t)23), NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_count;
		if ((((int32_t)L_5) <= ((int32_t)1)))
		{
			goto IL_0038;
		}
	}
	{
		PointU5BU5D_tBF08949C6A5139156312E05FFEBA360828D28F4C* L_6 = __this->____items;
		int32_t L_7 = ___0_index;
		int32_t L_8 = ___1_count;
		Array_Reverse_TisPoint_t4F128496D336DF7AA8817608D59E72CEF8DBFB93_mD7826DB700877B08F3FE60F9B0F52BEFB582B6D2(L_6, L_7, L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 37));
	}

IL_0038:
	{
		int32_t L_9 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_9, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_m7551B7E0C5AE8F50A1A26BC6EFF544E711EF815E_gshared (List_1_t9DE980811C648CE80197045689D21D2B224E7912* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = List_1_get_Count_m364C36D74BA0E74DAF87657A16515729C25460BB_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 17));
		RuntimeObject* L_1 = ___0_comparer;
		List_1_Sort_mD97B24AEB8B9B57CF9B48586C03D3EFF0C696761(__this, 0, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 39));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_mD97B24AEB8B9B57CF9B48586C03D3EFF0C696761_gshared (List_1_t9DE980811C648CE80197045689D21D2B224E7912* __this, int32_t ___0_index, int32_t ___1_count, RuntimeObject* ___2_comparer, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_count;
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F((int32_t)((int32_t)16), (int32_t)4, NULL);
	}

IL_0015:
	{
		int32_t L_2 = __this->____size;
		int32_t L_3 = ___0_index;
		int32_t L_4 = ___1_count;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_2, L_3))) >= ((int32_t)L_4)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)((int32_t)23), NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_count;
		if ((((int32_t)L_5) <= ((int32_t)1)))
		{
			goto IL_0039;
		}
	}
	{
		PointU5BU5D_tBF08949C6A5139156312E05FFEBA360828D28F4C* L_6 = __this->____items;
		int32_t L_7 = ___0_index;
		int32_t L_8 = ___1_count;
		RuntimeObject* L_9 = ___2_comparer;
		Array_Sort_TisPoint_t4F128496D336DF7AA8817608D59E72CEF8DBFB93_m8762D6FA1ED65D5B1FAB23E3DFEFC5094D89A936(L_6, L_7, L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 40));
	}

IL_0039:
	{
		int32_t L_10 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_10, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_mF5FAFC24DDC3AF2A468ED8F1BD642A7C21042640_gshared (List_1_t9DE980811C648CE80197045689D21D2B224E7912* __this, Comparison_1_t8FE3B8B0EC0CE87398BAC28B7E01309E4ED10BB7* ___0_comparison, const RuntimeMethod* method) 
{
	{
		Comparison_1_t8FE3B8B0EC0CE87398BAC28B7E01309E4ED10BB7* L_0 = ___0_comparison;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)((int32_t)34), NULL);
	}

IL_000a:
	{
		int32_t L_1 = __this->____size;
		if ((((int32_t)L_1) <= ((int32_t)1)))
		{
			goto IL_0026;
		}
	}
	{
		PointU5BU5D_tBF08949C6A5139156312E05FFEBA360828D28F4C* L_2 = __this->____items;
		int32_t L_3 = __this->____size;
		Comparison_1_t8FE3B8B0EC0CE87398BAC28B7E01309E4ED10BB7* L_4 = ___0_comparison;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 43));
		ArraySortHelper_1_Sort_m7934C083F94A9EA6DFD9B4D906DE3824CA60A1DB(L_2, 0, L_3, L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 42));
	}

IL_0026:
	{
		int32_t L_5 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_5, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PointU5BU5D_tBF08949C6A5139156312E05FFEBA360828D28F4C* List_1_ToArray_m1EA8011511787744E213A1499DB8E81124F1646C_gshared (List_1_t9DE980811C648CE80197045689D21D2B224E7912* __this, const RuntimeMethod* method) 
{
	PointU5BU5D_tBF08949C6A5139156312E05FFEBA360828D28F4C* V_0 = NULL;
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		PointU5BU5D_tBF08949C6A5139156312E05FFEBA360828D28F4C* L_1 = ((List_1_t9DE980811C648CE80197045689D21D2B224E7912_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 2)))->___s_emptyArray;
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____size;
		PointU5BU5D_tBF08949C6A5139156312E05FFEBA360828D28F4C* L_3 = (PointU5BU5D_tBF08949C6A5139156312E05FFEBA360828D28F4C*)(PointU5BU5D_tBF08949C6A5139156312E05FFEBA360828D28F4C*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_2);
		V_0 = L_3;
		PointU5BU5D_tBF08949C6A5139156312E05FFEBA360828D28F4C* L_4 = __this->____items;
		PointU5BU5D_tBF08949C6A5139156312E05FFEBA360828D28F4C* L_5 = V_0;
		int32_t L_6 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_4, 0, (RuntimeArray*)L_5, 0, L_6, NULL);
		PointU5BU5D_tBF08949C6A5139156312E05FFEBA360828D28F4C* L_7 = V_0;
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddEnumerable_mE834F3621B1EA7B6549A506B2D60FD27F7248506_gshared (List_1_t9DE980811C648CE80197045689D21D2B224E7912* __this, RuntimeObject* ___0_enumerable, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	Point_t4F128496D336DF7AA8817608D59E72CEF8DBFB93 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		RuntimeObject* L_1 = ___0_enumerable;
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 4), L_1);
		V_0 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0063:
			{
				{
					RuntimeObject* L_3 = V_0;
					if (!L_3)
					{
						goto IL_006c;
					}
				}
				{
					RuntimeObject* L_4 = V_0;
					NullCheck((RuntimeObject*)L_4);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_4);
				}

IL_006c:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_0059_1;
			}

IL_0017_1:
			{
				RuntimeObject* L_5 = V_0;
				NullCheck(L_5);
				Point_t4F128496D336DF7AA8817608D59E72CEF8DBFB93 L_6;
				L_6 = InterfaceFuncInvoker0< Point_t4F128496D336DF7AA8817608D59E72CEF8DBFB93 >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 27), L_5);
				V_1 = L_6;
				int32_t L_7 = __this->____size;
				PointU5BU5D_tBF08949C6A5139156312E05FFEBA360828D28F4C* L_8 = __this->____items;
				NullCheck(L_8);
				if ((!(((uint32_t)L_7) == ((uint32_t)((int32_t)(((RuntimeArray*)L_8)->max_length))))))
				{
					goto IL_003c_1;
				}
			}
			{
				int32_t L_9 = __this->____size;
				List_1_EnsureCapacity_m1202F62418DD326A020DA1D5D72D0D4BE9140C5A(__this, ((int32_t)il2cpp_codegen_add(L_9, 1)), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
			}

IL_003c_1:
			{
				PointU5BU5D_tBF08949C6A5139156312E05FFEBA360828D28F4C* L_10 = __this->____items;
				int32_t L_11 = __this->____size;
				V_2 = L_11;
				int32_t L_12 = V_2;
				__this->____size = ((int32_t)il2cpp_codegen_add(L_12, 1));
				int32_t L_13 = V_2;
				Point_t4F128496D336DF7AA8817608D59E72CEF8DBFB93 L_14 = V_1;
				NullCheck(L_10);
				(L_10)->SetAt(static_cast<il2cpp_array_size_t>(L_13), (Point_t4F128496D336DF7AA8817608D59E72CEF8DBFB93)L_14);
			}

IL_0059_1:
			{
				RuntimeObject* L_15 = V_0;
				NullCheck((RuntimeObject*)L_15);
				bool L_16;
				L_16 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_15);
				if (L_16)
				{
					goto IL_0017_1;
				}
			}
			{
				goto IL_006d;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_006d:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__cctor_m9E8FBD6299064CBADFB2CD13AE9E5E9F123E1186_gshared (const RuntimeMethod* method) 
{
	{
		PointU5BU5D_tBF08949C6A5139156312E05FFEBA360828D28F4C* L_0 = (PointU5BU5D_tBF08949C6A5139156312E05FFEBA360828D28F4C*)(PointU5BU5D_tBF08949C6A5139156312E05FFEBA360828D28F4C*)SZArrayNew(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 3), (uint32_t)0);
		((List_1_t9DE980811C648CE80197045689D21D2B224E7912_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___s_emptyArray = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((List_1_t9DE980811C648CE80197045689D21D2B224E7912_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___s_emptyArray), (void*)L_0);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m6AFE5DAE1267EFE59BEA0B06C40C20486B2A2233_gshared (List_1_t2EF0515F9247C0F480F55BF3E296366A47CB0324* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7* L_0 = ((List_1_t2EF0515F9247C0F480F55BF3E296366A47CB0324_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 2)))->___s_emptyArray;
		__this->____items = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m8FA3AFB6BE4B31C11024A7B1A60C2199FB73E5EF_gshared (List_1_t2EF0515F9247C0F480F55BF3E296366A47CB0324* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0012;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F((int32_t)((int32_t)12), (int32_t)4, NULL);
	}

IL_0012:
	{
		int32_t L_1 = ___0_capacity;
		if (L_1)
		{
			goto IL_0021;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7* L_2 = ((List_1_t2EF0515F9247C0F480F55BF3E296366A47CB0324_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 2)))->___s_emptyArray;
		__this->____items = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_2);
		return;
	}

IL_0021:
	{
		int32_t L_3 = ___0_capacity;
		RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7* L_4 = (RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7*)(RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_3);
		__this->____items = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_4);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7336C26EE60378AD9AAE63FB4449E3387ABA494B_gshared (List_1_t2EF0515F9247C0F480F55BF3E296366A47CB0324* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	int32_t V_1 = 0;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		RuntimeObject* L_0 = ___0_collection;
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)6, NULL);
	}

IL_000f:
	{
		RuntimeObject* L_1 = ___0_collection;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_1, il2cpp_rgctx_data(method->klass->rgctx_data, 5)));
		RuntimeObject* L_2 = V_0;
		if (!L_2)
		{
			goto IL_0050;
		}
	}
	{
		RuntimeObject* L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 5), L_3);
		V_1 = L_4;
		int32_t L_5 = V_1;
		if (L_5)
		{
			goto IL_002f;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7* L_6 = ((List_1_t2EF0515F9247C0F480F55BF3E296366A47CB0324_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 2)))->___s_emptyArray;
		__this->____items = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_6);
		return;
	}

IL_002f:
	{
		int32_t L_7 = V_1;
		RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7* L_8 = (RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7*)(RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_7);
		__this->____items = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_8);
		RuntimeObject* L_9 = V_0;
		RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7* L_10 = __this->____items;
		NullCheck(L_9);
		InterfaceActionInvoker2< RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7*, int32_t >::Invoke(5, il2cpp_rgctx_data(method->klass->rgctx_data, 5), L_9, L_10, 0);
		int32_t L_11 = V_1;
		__this->____size = L_11;
		return;
	}

IL_0050:
	{
		__this->____size = 0;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7* L_12 = ((List_1_t2EF0515F9247C0F480F55BF3E296366A47CB0324_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 2)))->___s_emptyArray;
		__this->____items = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_12);
		RuntimeObject* L_13 = ___0_collection;
		List_1_AddEnumerable_m2BA55CF15440AD2516DBDA77E5CA579B25D39652(__this, L_13, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Capacity_m1D877FCA3AF91000B161CC435E11E314C8B2ECDA_gshared (List_1_t2EF0515F9247C0F480F55BF3E296366A47CB0324* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7* V_0 = NULL;
	{
		int32_t L_0 = ___0_value;
		int32_t L_1 = __this->____size;
		if ((((int32_t)L_0) >= ((int32_t)L_1)))
		{
			goto IL_0012;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F((int32_t)((int32_t)15), (int32_t)((int32_t)21), NULL);
	}

IL_0012:
	{
		int32_t L_2 = ___0_value;
		RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7* L_3 = __this->____items;
		NullCheck(L_3);
		if ((((int32_t)L_2) == ((int32_t)((int32_t)(((RuntimeArray*)L_3)->max_length)))))
		{
			goto IL_0058;
		}
	}
	{
		int32_t L_4 = ___0_value;
		if ((((int32_t)L_4) <= ((int32_t)0)))
		{
			goto IL_004d;
		}
	}
	{
		int32_t L_5 = ___0_value;
		RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7* L_6 = (RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7*)(RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_5);
		V_0 = L_6;
		int32_t L_7 = __this->____size;
		if ((((int32_t)L_7) <= ((int32_t)0)))
		{
			goto IL_0045;
		}
	}
	{
		RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7* L_8 = __this->____items;
		RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7* L_9 = V_0;
		int32_t L_10 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_8, 0, (RuntimeArray*)L_9, 0, L_10, NULL);
	}

IL_0045:
	{
		RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7* L_11 = V_0;
		__this->____items = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_11);
		return;
	}

IL_004d:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7* L_12 = ((List_1_t2EF0515F9247C0F480F55BF3E296366A47CB0324_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 2)))->___s_emptyArray;
		__this->____items = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_12);
	}

IL_0058:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m9DF5F004FF70828FB56F22C81485C8A57B3192DB_gshared (List_1_t2EF0515F9247C0F480F55BF3E296366A47CB0324* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_mD3797C611187AFC8D295D37143B68AFB80FAB5CF_gshared (List_1_t2EF0515F9247C0F480F55BF3E296366A47CB0324* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_System_Collections_IList_get_IsReadOnly_m7C92029DC7F17D42FC714B701552C40AE05B3887_gshared (List_1_t2EF0515F9247C0F480F55BF3E296366A47CB0324* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_System_Collections_ICollection_get_SyncRoot_m04957003A8F26FBE1FD7C654B6CC7BB84D6989BF_gshared (List_1_t2EF0515F9247C0F480F55BF3E296366A47CB0324* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____syncRoot;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject** L_1 = (RuntimeObject**)(&__this->____syncRoot);
		RuntimeObject* L_2 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_2, NULL);
		RuntimeObject* L_3;
		L_3 = InterlockedCompareExchangeImpl<RuntimeObject*>(L_1, L_2, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = __this->____syncRoot;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA List_1_get_Item_m736DF34FA0A6E6F67F52538DD7A3E4520A7C17E2_gshared (List_1_t2EF0515F9247C0F480F55BF3E296366A47CB0324* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRange_IndexException_mC7661B8C6DD827679C95FC6B6C08F8724174936D(NULL);
	}

IL_000e:
	{
		RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7* L_2 = __this->____items;
		int32_t L_3 = ___0_index;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Item_m515A4F4FB1523A25CC41520F40209D429E5D613B_gshared (List_1_t2EF0515F9247C0F480F55BF3E296366A47CB0324* __this, int32_t ___0_index, RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA ___1_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRange_IndexException_mC7661B8C6DD827679C95FC6B6C08F8724174936D(NULL);
	}

IL_000e:
	{
		RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7* L_2 = __this->____items;
		int32_t L_3 = ___0_index;
		RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA L_4 = ___1_value;
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(L_3), (RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA)L_4);
		int32_t L_5 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_5, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_IsCompatibleObject_m0BB832DA7A39AF98E7AA03F4F6A1BC8C48CADB5B_gshared (RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_value;
		if (((RuntimeObject*)IsInst((RuntimeObject*)L_0, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 9))))
		{
			goto IL_001f;
		}
	}
	{
		RuntimeObject* L_1 = ___0_value;
		if (L_1)
		{
			goto IL_001d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA));
		RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA L_2 = V_0;
		return false;
	}

IL_001d:
	{
		return (bool)0;
	}

IL_001f:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_System_Collections_IList_get_Item_m9FB7D1E1980D9253199B3A024590A390FD1514A6_gshared (List_1_t2EF0515F9247C0F480F55BF3E296366A47CB0324* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA L_1;
		L_1 = List_1_get_Item_m736DF34FA0A6E6F67F52538DD7A3E4520A7C17E2(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA L_2 = L_1;
		RuntimeObject* L_3 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9), &L_2);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_System_Collections_IList_set_Item_m33727AE7190D952A032950FAB3ADD751CCCE194F_gshared (List_1_t2EF0515F9247C0F480F55BF3E296366A47CB0324* __this, int32_t ___0_index, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeObject* L_0 = ___1_value;
		ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisRaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA_m423E18B4B0D7C4E77584B631E7ED05E294ABC9C3(L_0, (int32_t)((int32_t)15), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
	}
	try
	{
		int32_t L_1 = ___0_index;
		RuntimeObject* L_2 = ___1_value;
		List_1_set_Item_m515A4F4FB1523A25CC41520F40209D429E5D613B(__this, L_1, ((*(RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA*)((RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA*)(RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 9))))), il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		goto IL_002a;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0017;
		}
		throw e;
	}

CATCH_0017:
	{
		RuntimeObject* L_3 = ___1_value;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_4 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 13)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_5;
		L_5 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_4, NULL);
		ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_3, L_5, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_002a;
	}

IL_002a:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_m28DCD73896A7493A6DD85C89A5959213159327C0_gshared (List_1_t2EF0515F9247C0F480F55BF3E296366A47CB0324* __this, RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA ___0_item, const RuntimeMethod* method) 
{
	RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7* L_1 = __this->____items;
		V_0 = L_1;
		int32_t L_2 = __this->____size;
		V_1 = L_2;
		int32_t L_3 = V_1;
		RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_5, 1));
		RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7* L_6 = V_0;
		int32_t L_7 = V_1;
		RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA L_8 = ___0_item;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA)L_8);
		return;
	}

IL_0034:
	{
		RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA L_9 = ___0_item;
		List_1_AddWithResize_mA220A208EC71F5CD6865F6C2B7D5F053282001A4(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void List_1_AddWithResize_mA220A208EC71F5CD6865F6C2B7D5F053282001A4_gshared (List_1_t2EF0515F9247C0F480F55BF3E296366A47CB0324* __this, RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA ___0_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____size;
		V_0 = L_0;
		int32_t L_1 = V_0;
		List_1_EnsureCapacity_mFD43C6DA3C0D8C8166CE226F24405E180BB60F66(__this, ((int32_t)il2cpp_codegen_add(L_1, 1)), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		int32_t L_2 = V_0;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_2, 1));
		RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7* L_3 = __this->____items;
		int32_t L_4 = V_0;
		RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA L_5 = ___0_item;
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(L_4), (RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA)L_5);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_System_Collections_IList_Add_m0ECBDA21AFEE299C726D16A3FEF1929D530FD0BE_gshared (List_1_t2EF0515F9247C0F480F55BF3E296366A47CB0324* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeObject* L_0 = ___0_item;
		ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisRaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA_m423E18B4B0D7C4E77584B631E7ED05E294ABC9C3(L_0, (int32_t)((int32_t)20), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
	}
	try
	{
		RuntimeObject* L_1 = ___0_item;
		List_1_Add_m28DCD73896A7493A6DD85C89A5959213159327C0_inline(__this, ((*(RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA*)((RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA*)(RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA*)UnBox(L_1, il2cpp_rgctx_data(method->klass->rgctx_data, 9))))), il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		goto IL_0029;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0016;
		}
		throw e;
	}

CATCH_0016:
	{
		RuntimeObject* L_2 = ___0_item;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 13)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_2, L_4, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0029;
	}

IL_0029:
	{
		int32_t L_5;
		L_5 = List_1_get_Count_m9DF5F004FF70828FB56F22C81485C8A57B3192DB_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 17));
		return ((int32_t)il2cpp_codegen_subtract(L_5, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddRange_m186D91F7FAD40D5C062362C845393698F3C78DF8_gshared (List_1_t2EF0515F9247C0F480F55BF3E296366A47CB0324* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		RuntimeObject* L_1 = ___0_collection;
		List_1_InsertRange_m64602CE8EF27023E7A55807CF1666F5CD7B5DA76(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Clear_mC39F71EC6137DAED5BD297AB23BCCC89D867C23E_gshared (List_1_t2EF0515F9247C0F480F55BF3E296366A47CB0324* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		goto IL_0035;
	}

IL_0035:
	{
		__this->____size = 0;
	}

IL_003c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_m90D5BCA1A90104B521E1A0F834FD2B3C7BCF930A_gshared (List_1_t2EF0515F9247C0F480F55BF3E296366A47CB0324* __this, RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA ___0_item, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA L_1 = ___0_item;
		int32_t L_2;
		L_2 = List_1_IndexOf_mDC4BA95D32618C596400042A0B46F04E3828D7A7(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		return (bool)((((int32_t)((((int32_t)L_2) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0016:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_System_Collections_IList_Contains_mBA9D1A4F15F2F12DF887C558C5E6526086450C8C_gshared (List_1_t2EF0515F9247C0F480F55BF3E296366A47CB0324* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_item;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		bool L_1;
		L_1 = List_1_IsCompatibleObject_m0BB832DA7A39AF98E7AA03F4F6A1BC8C48CADB5B(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_item;
		bool L_3;
		L_3 = List_1_Contains_m90D5BCA1A90104B521E1A0F834FD2B3C7BCF930A(__this, ((*(RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA*)((RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA*)(RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 9))))), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_CopyTo_m715C625DFAC0C52F3B752D6EF257A007CA9552BB_gshared (List_1_t2EF0515F9247C0F480F55BF3E296366A47CB0324* __this, RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7* ___0_array, const RuntimeMethod* method) 
{
	{
		RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7* L_0 = ___0_array;
		List_1_CopyTo_m1E8F62C9D745EF1AA0B7967FEBB52DF1D3826CC6(__this, L_0, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_System_Collections_ICollection_CopyTo_m4C1C0CE2033A05F585722F1FC65741C9B4443F20_gshared (List_1_t2EF0515F9247C0F480F55BF3E296366A47CB0324* __this, RuntimeArray* ___0_array, int32_t ___1_arrayIndex, const RuntimeMethod* method) 
{
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		RuntimeArray* L_1 = ___0_array;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(L_1, NULL);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0012;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)7, NULL);
	}

IL_0012:
	{
	}
	try
	{
		RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7* L_3 = __this->____items;
		RuntimeArray* L_4 = ___0_array;
		int32_t L_5 = ___1_arrayIndex;
		int32_t L_6 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_3, 0, L_4, L_5, L_6, NULL);
		goto IL_0031;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0029;
		}
		throw e;
	}

CATCH_0029:
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0031;
	}

IL_0031:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_CopyTo_m1E8F62C9D745EF1AA0B7967FEBB52DF1D3826CC6_gshared (List_1_t2EF0515F9247C0F480F55BF3E296366A47CB0324* __this, RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7* ___0_array, int32_t ___1_arrayIndex, const RuntimeMethod* method) 
{
	{
		RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7* L_0 = __this->____items;
		RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7* L_1 = ___0_array;
		int32_t L_2 = ___1_arrayIndex;
		int32_t L_3 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_0, 0, (RuntimeArray*)L_1, L_2, L_3, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_EnsureCapacity_mFD43C6DA3C0D8C8166CE226F24405E180BB60F66_gshared (List_1_t2EF0515F9247C0F480F55BF3E296366A47CB0324* __this, int32_t ___0_min, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t G_B4_0 = 0;
	{
		RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7* L_0 = __this->____items;
		NullCheck(L_0);
		int32_t L_1 = ___0_min;
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length))) >= ((int32_t)L_1)))
		{
			goto IL_003d;
		}
	}
	{
		RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7* L_2 = __this->____items;
		NullCheck(L_2);
		if (!(((RuntimeArray*)L_2)->max_length))
		{
			goto IL_0020;
		}
	}
	{
		RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7* L_3 = __this->____items;
		NullCheck(L_3);
		G_B4_0 = ((int32_t)il2cpp_codegen_multiply(((int32_t)(((RuntimeArray*)L_3)->max_length)), 2));
		goto IL_0021;
	}

IL_0020:
	{
		G_B4_0 = 4;
	}

IL_0021:
	{
		V_0 = G_B4_0;
		int32_t L_4 = V_0;
		if ((!(((uint32_t)L_4) > ((uint32_t)((int32_t)2146435071)))))
		{
			goto IL_0030;
		}
	}
	{
		V_0 = ((int32_t)2146435071);
	}

IL_0030:
	{
		int32_t L_5 = V_0;
		int32_t L_6 = ___0_min;
		if ((((int32_t)L_5) >= ((int32_t)L_6)))
		{
			goto IL_0036;
		}
	}
	{
		int32_t L_7 = ___0_min;
		V_0 = L_7;
	}

IL_0036:
	{
		int32_t L_8 = V_0;
		List_1_set_Capacity_m1D877FCA3AF91000B161CC435E11E314C8B2ECDA(__this, L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 24));
	}

IL_003d:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t2CEF225D2605B62ED98F365273E2A70098997301 List_1_GetEnumerator_mACCFAA592423F1AF66EB7E9FEA41720593BEFF95_gshared (List_1_t2EF0515F9247C0F480F55BF3E296366A47CB0324* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t2CEF225D2605B62ED98F365273E2A70098997301 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mAF215FD358D499CB5ECC131E64CF0E4F78C905EA((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_mFF5E641B98726F7DAF50EF5538414130E01177A6_gshared (List_1_t2EF0515F9247C0F480F55BF3E296366A47CB0324* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t2CEF225D2605B62ED98F365273E2A70098997301 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mAF215FD358D499CB5ECC131E64CF0E4F78C905EA((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		Enumerator_t2CEF225D2605B62ED98F365273E2A70098997301 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 25), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_System_Collections_IEnumerable_GetEnumerator_m9EC5C214E436FFF2DE75474D93EFCC5D5BEFB36E_gshared (List_1_t2EF0515F9247C0F480F55BF3E296366A47CB0324* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t2CEF225D2605B62ED98F365273E2A70098997301 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mAF215FD358D499CB5ECC131E64CF0E4F78C905EA((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		Enumerator_t2CEF225D2605B62ED98F365273E2A70098997301 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 25), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_IndexOf_mDC4BA95D32618C596400042A0B46F04E3828D7A7_gshared (List_1_t2EF0515F9247C0F480F55BF3E296366A47CB0324* __this, RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA ___0_item, const RuntimeMethod* method) 
{
	{
		RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7* L_0 = __this->____items;
		RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA L_1 = ___0_item;
		int32_t L_2 = __this->____size;
		int32_t L_3;
		L_3 = Array_IndexOf_TisRaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA_m2B8945242BB498A03FFC8BA3F0F3108C44BFAAB7(L_0, L_1, 0, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_System_Collections_IList_IndexOf_m80EA8161CA85BA5D54C4ADBE069CBD23530380F4_gshared (List_1_t2EF0515F9247C0F480F55BF3E296366A47CB0324* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_item;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		bool L_1;
		L_1 = List_1_IsCompatibleObject_m0BB832DA7A39AF98E7AA03F4F6A1BC8C48CADB5B(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_item;
		int32_t L_3;
		L_3 = List_1_IndexOf_mDC4BA95D32618C596400042A0B46F04E3828D7A7(__this, ((*(RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA*)((RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA*)(RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 9))))), il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		return L_3;
	}

IL_0015:
	{
		return (-1);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Insert_m09365A11484E7ED85325A10D505199BAB0FFD808_gshared (List_1_t2EF0515F9247C0F480F55BF3E296366A47CB0324* __this, int32_t ___0_index, RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA ___1_item, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_0012;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F((int32_t)((int32_t)13), (int32_t)((int32_t)27), NULL);
	}

IL_0012:
	{
		int32_t L_2 = __this->____size;
		RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7* L_3 = __this->____items;
		NullCheck(L_3);
		if ((!(((uint32_t)L_2) == ((uint32_t)((int32_t)(((RuntimeArray*)L_3)->max_length))))))
		{
			goto IL_0030;
		}
	}
	{
		int32_t L_4 = __this->____size;
		List_1_EnsureCapacity_mFD43C6DA3C0D8C8166CE226F24405E180BB60F66(__this, ((int32_t)il2cpp_codegen_add(L_4, 1)), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
	}

IL_0030:
	{
		int32_t L_5 = ___0_index;
		int32_t L_6 = __this->____size;
		if ((((int32_t)L_5) >= ((int32_t)L_6)))
		{
			goto IL_0056;
		}
	}
	{
		RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7* L_7 = __this->____items;
		int32_t L_8 = ___0_index;
		RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7* L_9 = __this->____items;
		int32_t L_10 = ___0_index;
		int32_t L_11 = __this->____size;
		int32_t L_12 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_7, L_8, (RuntimeArray*)L_9, ((int32_t)il2cpp_codegen_add(L_10, 1)), ((int32_t)il2cpp_codegen_subtract(L_11, L_12)), NULL);
	}

IL_0056:
	{
		RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7* L_13 = __this->____items;
		int32_t L_14 = ___0_index;
		RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA L_15 = ___1_item;
		NullCheck(L_13);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(L_14), (RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA)L_15);
		int32_t L_16 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_16, 1));
		int32_t L_17 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_17, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_System_Collections_IList_Insert_mC098CB91EB4604D50F8630CA90B5651E13D2C5A2_gshared (List_1_t2EF0515F9247C0F480F55BF3E296366A47CB0324* __this, int32_t ___0_index, RuntimeObject* ___1_item, const RuntimeMethod* method) 
{
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeObject* L_0 = ___1_item;
		ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisRaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA_m423E18B4B0D7C4E77584B631E7ED05E294ABC9C3(L_0, (int32_t)((int32_t)20), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
	}
	try
	{
		int32_t L_1 = ___0_index;
		RuntimeObject* L_2 = ___1_item;
		List_1_Insert_m09365A11484E7ED85325A10D505199BAB0FFD808(__this, L_1, ((*(RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA*)((RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA*)(RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 9))))), il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		goto IL_002a;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0017;
		}
		throw e;
	}

CATCH_0017:
	{
		RuntimeObject* L_3 = ___1_item;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_4 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 13)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_5;
		L_5 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_4, NULL);
		ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_3, L_5, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_002a;
	}

IL_002a:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_InsertRange_m64602CE8EF27023E7A55807CF1666F5CD7B5DA76_gshared (List_1_t2EF0515F9247C0F480F55BF3E296366A47CB0324* __this, int32_t ___0_index, RuntimeObject* ___1_collection, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	int32_t V_1 = 0;
	RuntimeObject* V_2 = NULL;
	{
		RuntimeObject* L_0 = ___1_collection;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)6, NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___0_index;
		int32_t L_2 = __this->____size;
		if ((!(((uint32_t)L_1) > ((uint32_t)L_2))))
		{
			goto IL_0017;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRange_IndexException_mC7661B8C6DD827679C95FC6B6C08F8724174936D(NULL);
	}

IL_0017:
	{
		RuntimeObject* L_3 = ___1_collection;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_3, il2cpp_rgctx_data(method->klass->rgctx_data, 5)));
		RuntimeObject* L_4 = V_0;
		if (!L_4)
		{
			goto IL_00bc;
		}
	}
	{
		RuntimeObject* L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 5), L_5);
		V_1 = L_6;
		int32_t L_7 = V_1;
		if ((((int32_t)L_7) <= ((int32_t)0)))
		{
			goto IL_00fb;
		}
	}
	{
		int32_t L_8 = __this->____size;
		int32_t L_9 = V_1;
		List_1_EnsureCapacity_mFD43C6DA3C0D8C8166CE226F24405E180BB60F66(__this, ((int32_t)il2cpp_codegen_add(L_8, L_9)), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		int32_t L_10 = ___0_index;
		int32_t L_11 = __this->____size;
		if ((((int32_t)L_10) >= ((int32_t)L_11)))
		{
			goto IL_0066;
		}
	}
	{
		RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7* L_12 = __this->____items;
		int32_t L_13 = ___0_index;
		RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7* L_14 = __this->____items;
		int32_t L_15 = ___0_index;
		int32_t L_16 = V_1;
		int32_t L_17 = __this->____size;
		int32_t L_18 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_12, L_13, (RuntimeArray*)L_14, ((int32_t)il2cpp_codegen_add(L_15, L_16)), ((int32_t)il2cpp_codegen_subtract(L_17, L_18)), NULL);
	}

IL_0066:
	{
		RuntimeObject* L_19 = V_0;
		if ((!(((RuntimeObject*)(List_1_t2EF0515F9247C0F480F55BF3E296366A47CB0324*)__this) == ((RuntimeObject*)(RuntimeObject*)L_19))))
		{
			goto IL_009f;
		}
	}
	{
		RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7* L_20 = __this->____items;
		RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7* L_21 = __this->____items;
		int32_t L_22 = ___0_index;
		int32_t L_23 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_20, 0, (RuntimeArray*)L_21, L_22, L_23, NULL);
		RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7* L_24 = __this->____items;
		int32_t L_25 = ___0_index;
		int32_t L_26 = V_1;
		RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7* L_27 = __this->____items;
		int32_t L_28 = ___0_index;
		int32_t L_29 = __this->____size;
		int32_t L_30 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_24, ((int32_t)il2cpp_codegen_add(L_25, L_26)), (RuntimeArray*)L_27, ((int32_t)il2cpp_codegen_multiply(L_28, 2)), ((int32_t)il2cpp_codegen_subtract(L_29, L_30)), NULL);
		goto IL_00ac;
	}

IL_009f:
	{
		RuntimeObject* L_31 = V_0;
		RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7* L_32 = __this->____items;
		int32_t L_33 = ___0_index;
		NullCheck(L_31);
		InterfaceActionInvoker2< RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7*, int32_t >::Invoke(5, il2cpp_rgctx_data(method->klass->rgctx_data, 5), L_31, L_32, L_33);
	}

IL_00ac:
	{
		int32_t L_34 = __this->____size;
		int32_t L_35 = V_1;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_34, L_35));
		goto IL_00fb;
	}

IL_00bc:
	{
		int32_t L_36 = ___0_index;
		int32_t L_37 = __this->____size;
		if ((((int32_t)L_36) >= ((int32_t)L_37)))
		{
			goto IL_00f4;
		}
	}
	{
		RuntimeObject* L_38 = ___1_collection;
		NullCheck(L_38);
		RuntimeObject* L_39;
		L_39 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 4), L_38);
		V_2 = L_39;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00ea:
			{
				{
					RuntimeObject* L_40 = V_2;
					if (!L_40)
					{
						goto IL_00f3;
					}
				}
				{
					RuntimeObject* L_41 = V_2;
					NullCheck((RuntimeObject*)L_41);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_41);
				}

IL_00f3:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_00e0_1;
			}

IL_00ce_1:
			{
				int32_t L_42 = ___0_index;
				int32_t L_43 = L_42;
				___0_index = ((int32_t)il2cpp_codegen_add(L_43, 1));
				RuntimeObject* L_44 = V_2;
				NullCheck(L_44);
				RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA L_45;
				L_45 = InterfaceFuncInvoker0< RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 27), L_44);
				List_1_Insert_m09365A11484E7ED85325A10D505199BAB0FFD808(__this, L_43, L_45, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
			}

IL_00e0_1:
			{
				RuntimeObject* L_46 = V_2;
				NullCheck((RuntimeObject*)L_46);
				bool L_47;
				L_47 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_46);
				if (L_47)
				{
					goto IL_00ce_1;
				}
			}
			{
				goto IL_00fb;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00f4:
	{
		RuntimeObject* L_48 = ___1_collection;
		List_1_AddEnumerable_m2BA55CF15440AD2516DBDA77E5CA579B25D39652(__this, L_48, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
	}

IL_00fb:
	{
		int32_t L_49 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_49, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_mE5C2B7E06ADACF075E1A7A5FC2ABD9FC36B44A44_gshared (List_1_t2EF0515F9247C0F480F55BF3E296366A47CB0324* __this, RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA ___0_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA L_0 = ___0_item;
		int32_t L_1;
		L_1 = List_1_IndexOf_mDC4BA95D32618C596400042A0B46F04E3828D7A7(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		int32_t L_3 = V_0;
		List_1_RemoveAt_mD2583C8090E4B535A7E90775D4F4807563DF369E(__this, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 32));
		return (bool)1;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_System_Collections_IList_Remove_m355E96D08F56F6CD97E3E011CEBDDBC1559FCED9_gshared (List_1_t2EF0515F9247C0F480F55BF3E296366A47CB0324* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_item;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		bool L_1;
		L_1 = List_1_IsCompatibleObject_m0BB832DA7A39AF98E7AA03F4F6A1BC8C48CADB5B(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_item;
		bool L_3;
		L_3 = List_1_Remove_mE5C2B7E06ADACF075E1A7A5FC2ABD9FC36B44A44(__this, ((*(RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA*)((RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA*)(RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 9))))), il2cpp_rgctx_method(method->klass->rgctx_data, 33));
	}

IL_0015:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_RemoveAll_mB0647B24C4B2EC7CB4995FDAAFA592E873C01906_gshared (List_1_t2EF0515F9247C0F480F55BF3E296366A47CB0324* __this, Predicate_1_t231FE77F451704871DD8332FA13BC563C1DF98A7* ___0_match, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		Predicate_1_t231FE77F451704871DD8332FA13BC563C1DF98A7* L_0 = ___0_match;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)8, NULL);
	}

IL_0009:
	{
		V_0 = 0;
		goto IL_0011;
	}

IL_000d:
	{
		int32_t L_1 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_1, 1));
	}

IL_0011:
	{
		int32_t L_2 = V_0;
		int32_t L_3 = __this->____size;
		if ((((int32_t)L_2) >= ((int32_t)L_3)))
		{
			goto IL_002e;
		}
	}
	{
		Predicate_1_t231FE77F451704871DD8332FA13BC563C1DF98A7* L_4 = ___0_match;
		RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7* L_5 = __this->____items;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		NullCheck(L_4);
		bool L_9;
		L_9 = Predicate_1_Invoke_m2F26628AD1EBED3D755F7995B33076DC98F923F7_inline(L_4, L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 35));
		if (!L_9)
		{
			goto IL_000d;
		}
	}

IL_002e:
	{
		int32_t L_10 = V_0;
		int32_t L_11 = __this->____size;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_0039;
		}
	}
	{
		return 0;
	}

IL_0039:
	{
		int32_t L_12 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
		goto IL_0089;
	}

IL_003f:
	{
		int32_t L_13 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_0043:
	{
		int32_t L_14 = V_1;
		int32_t L_15 = __this->____size;
		if ((((int32_t)L_14) >= ((int32_t)L_15)))
		{
			goto IL_0060;
		}
	}
	{
		Predicate_1_t231FE77F451704871DD8332FA13BC563C1DF98A7* L_16 = ___0_match;
		RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7* L_17 = __this->____items;
		int32_t L_18 = V_1;
		NullCheck(L_17);
		int32_t L_19 = L_18;
		RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA L_20 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		NullCheck(L_16);
		bool L_21;
		L_21 = Predicate_1_Invoke_m2F26628AD1EBED3D755F7995B33076DC98F923F7_inline(L_16, L_20, il2cpp_rgctx_method(method->klass->rgctx_data, 35));
		if (L_21)
		{
			goto IL_003f;
		}
	}

IL_0060:
	{
		int32_t L_22 = V_1;
		int32_t L_23 = __this->____size;
		if ((((int32_t)L_22) >= ((int32_t)L_23)))
		{
			goto IL_0089;
		}
	}
	{
		RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7* L_24 = __this->____items;
		int32_t L_25 = V_0;
		int32_t L_26 = L_25;
		V_0 = ((int32_t)il2cpp_codegen_add(L_26, 1));
		RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7* L_27 = __this->____items;
		int32_t L_28 = V_1;
		int32_t L_29 = L_28;
		V_1 = ((int32_t)il2cpp_codegen_add(L_29, 1));
		NullCheck(L_27);
		int32_t L_30 = L_29;
		RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA L_31 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_30));
		NullCheck(L_24);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(L_26), (RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA)L_31);
	}

IL_0089:
	{
		int32_t L_32 = V_1;
		int32_t L_33 = __this->____size;
		if ((((int32_t)L_32) < ((int32_t)L_33)))
		{
			goto IL_0043;
		}
	}
	{
		goto IL_00ad;
	}

IL_00ad:
	{
		int32_t L_34 = __this->____size;
		int32_t L_35 = V_0;
		int32_t L_36 = V_0;
		__this->____size = L_36;
		int32_t L_37 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_37, 1));
		return ((int32_t)il2cpp_codegen_subtract(L_34, L_35));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_mD2583C8090E4B535A7E90775D4F4807563DF369E_gshared (List_1_t2EF0515F9247C0F480F55BF3E296366A47CB0324* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRange_IndexException_mC7661B8C6DD827679C95FC6B6C08F8724174936D(NULL);
	}

IL_000e:
	{
		int32_t L_2 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_subtract(L_2, 1));
		int32_t L_3 = ___0_index;
		int32_t L_4 = __this->____size;
		if ((((int32_t)L_3) >= ((int32_t)L_4)))
		{
			goto IL_0042;
		}
	}
	{
		RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7* L_5 = __this->____items;
		int32_t L_6 = ___0_index;
		RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7* L_7 = __this->____items;
		int32_t L_8 = ___0_index;
		int32_t L_9 = __this->____size;
		int32_t L_10 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, ((int32_t)il2cpp_codegen_add(L_6, 1)), (RuntimeArray*)L_7, L_8, ((int32_t)il2cpp_codegen_subtract(L_9, L_10)), NULL);
	}

IL_0042:
	{
		goto IL_0063;
	}

IL_0063:
	{
		int32_t L_11 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_11, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveRange_m6C2A9704FC7B8B734BF171CB380960F31A3D6F9B_gshared (List_1_t2EF0515F9247C0F480F55BF3E296366A47CB0324* __this, int32_t ___0_index, int32_t ___1_count, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_count;
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F((int32_t)((int32_t)16), (int32_t)4, NULL);
	}

IL_0015:
	{
		int32_t L_2 = __this->____size;
		int32_t L_3 = ___0_index;
		int32_t L_4 = ___1_count;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_2, L_3))) >= ((int32_t)L_4)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)((int32_t)23), NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_count;
		if ((((int32_t)L_5) <= ((int32_t)0)))
		{
			goto IL_008d;
		}
	}
	{
		int32_t L_6 = __this->____size;
		int32_t L_7 = __this->____size;
		int32_t L_8 = ___1_count;
		__this->____size = ((int32_t)il2cpp_codegen_subtract(L_7, L_8));
		int32_t L_9 = ___0_index;
		int32_t L_10 = __this->____size;
		if ((((int32_t)L_9) >= ((int32_t)L_10)))
		{
			goto IL_0066;
		}
	}
	{
		RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7* L_11 = __this->____items;
		int32_t L_12 = ___0_index;
		int32_t L_13 = ___1_count;
		RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7* L_14 = __this->____items;
		int32_t L_15 = ___0_index;
		int32_t L_16 = __this->____size;
		int32_t L_17 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_11, ((int32_t)il2cpp_codegen_add(L_12, L_13)), (RuntimeArray*)L_14, L_15, ((int32_t)il2cpp_codegen_subtract(L_16, L_17)), NULL);
	}

IL_0066:
	{
		int32_t L_18 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_18, 1));
		goto IL_008d;
	}

IL_008d:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Reverse_m52F8CD9E994720FBB4A28E3DC850BBC0039FFC4A_gshared (List_1_t2EF0515F9247C0F480F55BF3E296366A47CB0324* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = List_1_get_Count_m9DF5F004FF70828FB56F22C81485C8A57B3192DB_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 17));
		List_1_Reverse_m24D554FF90CA3CFE9DC557BF5BAC1CCE53D75436(__this, 0, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 36));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Reverse_m24D554FF90CA3CFE9DC557BF5BAC1CCE53D75436_gshared (List_1_t2EF0515F9247C0F480F55BF3E296366A47CB0324* __this, int32_t ___0_index, int32_t ___1_count, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_count;
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F((int32_t)((int32_t)16), (int32_t)4, NULL);
	}

IL_0015:
	{
		int32_t L_2 = __this->____size;
		int32_t L_3 = ___0_index;
		int32_t L_4 = ___1_count;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_2, L_3))) >= ((int32_t)L_4)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)((int32_t)23), NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_count;
		if ((((int32_t)L_5) <= ((int32_t)1)))
		{
			goto IL_0038;
		}
	}
	{
		RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7* L_6 = __this->____items;
		int32_t L_7 = ___0_index;
		int32_t L_8 = ___1_count;
		Array_Reverse_TisRaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA_mF54B91CEAE0914FC82BB56642F268A22945AFC93(L_6, L_7, L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 37));
	}

IL_0038:
	{
		int32_t L_9 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_9, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_m722A946EB8BA39FDF243D0F6300DCECF174040C6_gshared (List_1_t2EF0515F9247C0F480F55BF3E296366A47CB0324* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = List_1_get_Count_m9DF5F004FF70828FB56F22C81485C8A57B3192DB_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 17));
		RuntimeObject* L_1 = ___0_comparer;
		List_1_Sort_m80948FFD8677D8B7B840BE6D59093DA65A4C4725(__this, 0, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 39));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_m80948FFD8677D8B7B840BE6D59093DA65A4C4725_gshared (List_1_t2EF0515F9247C0F480F55BF3E296366A47CB0324* __this, int32_t ___0_index, int32_t ___1_count, RuntimeObject* ___2_comparer, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_count;
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F((int32_t)((int32_t)16), (int32_t)4, NULL);
	}

IL_0015:
	{
		int32_t L_2 = __this->____size;
		int32_t L_3 = ___0_index;
		int32_t L_4 = ___1_count;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_2, L_3))) >= ((int32_t)L_4)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)((int32_t)23), NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_count;
		if ((((int32_t)L_5) <= ((int32_t)1)))
		{
			goto IL_0039;
		}
	}
	{
		RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7* L_6 = __this->____items;
		int32_t L_7 = ___0_index;
		int32_t L_8 = ___1_count;
		RuntimeObject* L_9 = ___2_comparer;
		Array_Sort_TisRaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA_m71186FFD5FEDC6AFA3EE329DD3D065D0D18B609E(L_6, L_7, L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 40));
	}

IL_0039:
	{
		int32_t L_10 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_10, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_mD7957447963ED83BF32F14C8EACC653F7B90861A_gshared (List_1_t2EF0515F9247C0F480F55BF3E296366A47CB0324* __this, Comparison_1_t029B324B1F424911E4FB983F3FB02CCE89CD068B* ___0_comparison, const RuntimeMethod* method) 
{
	{
		Comparison_1_t029B324B1F424911E4FB983F3FB02CCE89CD068B* L_0 = ___0_comparison;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)((int32_t)34), NULL);
	}

IL_000a:
	{
		int32_t L_1 = __this->____size;
		if ((((int32_t)L_1) <= ((int32_t)1)))
		{
			goto IL_0026;
		}
	}
	{
		RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7* L_2 = __this->____items;
		int32_t L_3 = __this->____size;
		Comparison_1_t029B324B1F424911E4FB983F3FB02CCE89CD068B* L_4 = ___0_comparison;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 43));
		ArraySortHelper_1_Sort_m6AFFFCE233C56A4625EB06ADB8465B603AAF66B9(L_2, 0, L_3, L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 42));
	}

IL_0026:
	{
		int32_t L_5 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_5, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7* List_1_ToArray_m08CBCF424D5D0311666C6632D32B5CBFB3D4B027_gshared (List_1_t2EF0515F9247C0F480F55BF3E296366A47CB0324* __this, const RuntimeMethod* method) 
{
	RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7* V_0 = NULL;
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7* L_1 = ((List_1_t2EF0515F9247C0F480F55BF3E296366A47CB0324_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 2)))->___s_emptyArray;
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____size;
		RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7* L_3 = (RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7*)(RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_2);
		V_0 = L_3;
		RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7* L_4 = __this->____items;
		RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7* L_5 = V_0;
		int32_t L_6 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_4, 0, (RuntimeArray*)L_5, 0, L_6, NULL);
		RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7* L_7 = V_0;
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddEnumerable_m2BA55CF15440AD2516DBDA77E5CA579B25D39652_gshared (List_1_t2EF0515F9247C0F480F55BF3E296366A47CB0324* __this, RuntimeObject* ___0_enumerable, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		RuntimeObject* L_1 = ___0_enumerable;
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 4), L_1);
		V_0 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0063:
			{
				{
					RuntimeObject* L_3 = V_0;
					if (!L_3)
					{
						goto IL_006c;
					}
				}
				{
					RuntimeObject* L_4 = V_0;
					NullCheck((RuntimeObject*)L_4);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_4);
				}

IL_006c:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_0059_1;
			}

IL_0017_1:
			{
				RuntimeObject* L_5 = V_0;
				NullCheck(L_5);
				RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA L_6;
				L_6 = InterfaceFuncInvoker0< RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 27), L_5);
				V_1 = L_6;
				int32_t L_7 = __this->____size;
				RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7* L_8 = __this->____items;
				NullCheck(L_8);
				if ((!(((uint32_t)L_7) == ((uint32_t)((int32_t)(((RuntimeArray*)L_8)->max_length))))))
				{
					goto IL_003c_1;
				}
			}
			{
				int32_t L_9 = __this->____size;
				List_1_EnsureCapacity_mFD43C6DA3C0D8C8166CE226F24405E180BB60F66(__this, ((int32_t)il2cpp_codegen_add(L_9, 1)), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
			}

IL_003c_1:
			{
				RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7* L_10 = __this->____items;
				int32_t L_11 = __this->____size;
				V_2 = L_11;
				int32_t L_12 = V_2;
				__this->____size = ((int32_t)il2cpp_codegen_add(L_12, 1));
				int32_t L_13 = V_2;
				RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA L_14 = V_1;
				NullCheck(L_10);
				(L_10)->SetAt(static_cast<il2cpp_array_size_t>(L_13), (RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA)L_14);
			}

IL_0059_1:
			{
				RuntimeObject* L_15 = V_0;
				NullCheck((RuntimeObject*)L_15);
				bool L_16;
				L_16 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_15);
				if (L_16)
				{
					goto IL_0017_1;
				}
			}
			{
				goto IL_006d;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_006d:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__cctor_m35E993FF7C979FA90A74A475AD02868C459169A1_gshared (const RuntimeMethod* method) 
{
	{
		RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7* L_0 = (RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7*)(RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7*)SZArrayNew(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 3), (uint32_t)0);
		((List_1_t2EF0515F9247C0F480F55BF3E296366A47CB0324_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___s_emptyArray = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((List_1_t2EF0515F9247C0F480F55BF3E296366A47CB0324_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___s_emptyArray), (void*)L_0);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C_gshared (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_0 = ((List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 2)))->___s_emptyArray;
		__this->____items = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7E6E0C4AE37ACBC1E9BDA9E56A8A7D8ACED3FD33_gshared (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0012;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F((int32_t)((int32_t)12), (int32_t)4, NULL);
	}

IL_0012:
	{
		int32_t L_1 = ___0_capacity;
		if (L_1)
		{
			goto IL_0021;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_2 = ((List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 2)))->___s_emptyArray;
		__this->____items = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_2);
		return;
	}

IL_0021:
	{
		int32_t L_3 = ___0_capacity;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_4 = (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_3);
		__this->____items = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_4);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mC734A32FAD92BD7492907D4733032FD21348EECD_gshared (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	int32_t V_1 = 0;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		RuntimeObject* L_0 = ___0_collection;
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)6, NULL);
	}

IL_000f:
	{
		RuntimeObject* L_1 = ___0_collection;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_1, il2cpp_rgctx_data(method->klass->rgctx_data, 5)));
		RuntimeObject* L_2 = V_0;
		if (!L_2)
		{
			goto IL_0050;
		}
	}
	{
		RuntimeObject* L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 5), L_3);
		V_1 = L_4;
		int32_t L_5 = V_1;
		if (L_5)
		{
			goto IL_002f;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_6 = ((List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 2)))->___s_emptyArray;
		__this->____items = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_6);
		return;
	}

IL_002f:
	{
		int32_t L_7 = V_1;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_8 = (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_7);
		__this->____items = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_8);
		RuntimeObject* L_9 = V_0;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_10 = __this->____items;
		NullCheck(L_9);
		InterfaceActionInvoker2< Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*, int32_t >::Invoke(5, il2cpp_rgctx_data(method->klass->rgctx_data, 5), L_9, L_10, 0);
		int32_t L_11 = V_1;
		__this->____size = L_11;
		return;
	}

IL_0050:
	{
		__this->____size = 0;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_12 = ((List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 2)))->___s_emptyArray;
		__this->____items = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_12);
		RuntimeObject* L_13 = ___0_collection;
		List_1_AddEnumerable_m3F61E1BEC6F6043A8E6F87420863504DE9F59C6E(__this, L_13, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Capacity_mF3F5104AB534524CF6D04659241FBD48C9080FFE_gshared (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* V_0 = NULL;
	{
		int32_t L_0 = ___0_value;
		int32_t L_1 = __this->____size;
		if ((((int32_t)L_0) >= ((int32_t)L_1)))
		{
			goto IL_0012;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F((int32_t)((int32_t)15), (int32_t)((int32_t)21), NULL);
	}

IL_0012:
	{
		int32_t L_2 = ___0_value;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_3 = __this->____items;
		NullCheck(L_3);
		if ((((int32_t)L_2) == ((int32_t)((int32_t)(((RuntimeArray*)L_3)->max_length)))))
		{
			goto IL_0058;
		}
	}
	{
		int32_t L_4 = ___0_value;
		if ((((int32_t)L_4) <= ((int32_t)0)))
		{
			goto IL_004d;
		}
	}
	{
		int32_t L_5 = ___0_value;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_6 = (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_5);
		V_0 = L_6;
		int32_t L_7 = __this->____size;
		if ((((int32_t)L_7) <= ((int32_t)0)))
		{
			goto IL_0045;
		}
	}
	{
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_8 = __this->____items;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_9 = V_0;
		int32_t L_10 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_8, 0, (RuntimeArray*)L_9, 0, L_10, NULL);
	}

IL_0045:
	{
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_11 = V_0;
		__this->____items = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_11);
		return;
	}

IL_004d:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_12 = ((List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 2)))->___s_emptyArray;
		__this->____items = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_12);
	}

IL_0058:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_gshared (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m4B4E24AA051405DEE1DCA8B344C1C77334BDF6B8_gshared (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_System_Collections_IList_get_IsReadOnly_m9B32B828CAF30576F7FD05CC355F2C5CBC26F631_gshared (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_System_Collections_ICollection_get_SyncRoot_m2B6681CDCCA47CE40C0C3A1B8995F9274DC658EF_gshared (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____syncRoot;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject** L_1 = (RuntimeObject**)(&__this->____syncRoot);
		RuntimeObject* L_2 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_2, NULL);
		RuntimeObject* L_3;
		L_3 = InterlockedCompareExchangeImpl<RuntimeObject*>(L_1, L_2, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = __this->____syncRoot;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810_gshared (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRange_IndexException_mC7661B8C6DD827679C95FC6B6C08F8724174936D(NULL);
	}

IL_000e:
	{
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_2 = __this->____items;
		int32_t L_3 = ___0_index;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Item_m35C8C18BF5DF9A5C8867BF0C872BC39275A41A9C_gshared (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, int32_t ___0_index, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRange_IndexException_mC7661B8C6DD827679C95FC6B6C08F8724174936D(NULL);
	}

IL_000e:
	{
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_2 = __this->____items;
		int32_t L_3 = ___0_index;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___1_value;
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(L_3), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_4);
		int32_t L_5 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_5, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_IsCompatibleObject_m9763209708608E6A97CF3666F1A06C04DB3E43F1_gshared (RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_value;
		if (((RuntimeObject*)IsInst((RuntimeObject*)L_0, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 9))))
		{
			goto IL_001f;
		}
	}
	{
		RuntimeObject* L_1 = ___0_value;
		if (L_1)
		{
			goto IL_001d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = V_0;
		return false;
	}

IL_001d:
	{
		return (bool)0;
	}

IL_001f:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_System_Collections_IList_get_Item_mA59CF18AAE79EB7AEA524F6FE5AC40761AAEF8F4_gshared (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = L_1;
		RuntimeObject* L_3 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9), &L_2);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_System_Collections_IList_set_Item_mB459CE32F0FBC8222E056D47D065F8B06701CFBD_gshared (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, int32_t ___0_index, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeObject* L_0 = ___1_value;
		ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m4E879C7609DC1101BE0D3A088A9627F863855032(L_0, (int32_t)((int32_t)15), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
	}
	try
	{
		int32_t L_1 = ___0_index;
		RuntimeObject* L_2 = ___1_value;
		List_1_set_Item_m35C8C18BF5DF9A5C8867BF0C872BC39275A41A9C(__this, L_1, ((*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 9))))), il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		goto IL_002a;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0017;
		}
		throw e;
	}

CATCH_0017:
	{
		RuntimeObject* L_3 = ___1_value;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_4 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 13)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_5;
		L_5 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_4, NULL);
		ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_3, L_5, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_002a;
	}

IL_002a:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_gshared (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_item, const RuntimeMethod* method) 
{
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_1 = __this->____items;
		V_0 = L_1;
		int32_t L_2 = __this->____size;
		V_1 = L_2;
		int32_t L_3 = V_1;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_5, 1));
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_6 = V_0;
		int32_t L_7 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___0_item;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_8);
		return;
	}

IL_0034:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = ___0_item;
		List_1_AddWithResize_mCDB189127FC2EE67B5EED9DE34F837DFC6EDC212(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void List_1_AddWithResize_mCDB189127FC2EE67B5EED9DE34F837DFC6EDC212_gshared (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____size;
		V_0 = L_0;
		int32_t L_1 = V_0;
		List_1_EnsureCapacity_m3D475952F4DECC72C2F6CAC08454234565F47922(__this, ((int32_t)il2cpp_codegen_add(L_1, 1)), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		int32_t L_2 = V_0;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_2, 1));
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_3 = __this->____items;
		int32_t L_4 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = ___0_item;
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(L_4), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_5);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_System_Collections_IList_Add_m86B0C9C119B25F831577239CDA298D277FF4E55A_gshared (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeObject* L_0 = ___0_item;
		ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m4E879C7609DC1101BE0D3A088A9627F863855032(L_0, (int32_t)((int32_t)20), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
	}
	try
	{
		RuntimeObject* L_1 = ___0_item;
		List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_inline(__this, ((*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)UnBox(L_1, il2cpp_rgctx_data(method->klass->rgctx_data, 9))))), il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		goto IL_0029;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0016;
		}
		throw e;
	}

CATCH_0016:
	{
		RuntimeObject* L_2 = ___0_item;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 13)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_2, L_4, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0029;
	}

IL_0029:
	{
		int32_t L_5;
		L_5 = List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 17));
		return ((int32_t)il2cpp_codegen_subtract(L_5, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddRange_m5074E49FED0A20D75EEBFEF32BD7C59CBB6F0FEE_gshared (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		RuntimeObject* L_1 = ___0_collection;
		List_1_InsertRange_m2A9F80B354349125F355FBCDED0B624FFEC79CA4(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Clear_m455780C5A45049F9BDC25EAD3BA10A681D16385D_gshared (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		goto IL_0035;
	}

IL_0035:
	{
		__this->____size = 0;
	}

IL_003c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_m3AB3A0CBA2FC939693360C3753E53CA1E7BAD66F_gshared (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_item, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___0_item;
		int32_t L_2;
		L_2 = List_1_IndexOf_m5F1AA4E06F9B4B86729A3089AF48805434E7747A(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		return (bool)((((int32_t)((((int32_t)L_2) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0016:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_System_Collections_IList_Contains_m560D1C47255BF863ED01285CF8F451E6606BEC59_gshared (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_item;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		bool L_1;
		L_1 = List_1_IsCompatibleObject_m9763209708608E6A97CF3666F1A06C04DB3E43F1(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_item;
		bool L_3;
		L_3 = List_1_Contains_m3AB3A0CBA2FC939693360C3753E53CA1E7BAD66F(__this, ((*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 9))))), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_CopyTo_mBCE89A7155100108ADF457CCCA5BD36BCB658626_gshared (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___0_array, const RuntimeMethod* method) 
{
	{
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_0 = ___0_array;
		List_1_CopyTo_m5D24D21039B6DED1F82A87A38AB444AA78C0EA3E(__this, L_0, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_System_Collections_ICollection_CopyTo_m9D609009A8186BF7C8D77950906981C999BC2F55_gshared (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, RuntimeArray* ___0_array, int32_t ___1_arrayIndex, const RuntimeMethod* method) 
{
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		RuntimeArray* L_1 = ___0_array;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(L_1, NULL);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0012;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)7, NULL);
	}

IL_0012:
	{
	}
	try
	{
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_3 = __this->____items;
		RuntimeArray* L_4 = ___0_array;
		int32_t L_5 = ___1_arrayIndex;
		int32_t L_6 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_3, 0, L_4, L_5, L_6, NULL);
		goto IL_0031;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0029;
		}
		throw e;
	}

CATCH_0029:
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0031;
	}

IL_0031:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_CopyTo_m5D24D21039B6DED1F82A87A38AB444AA78C0EA3E_gshared (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___0_array, int32_t ___1_arrayIndex, const RuntimeMethod* method) 
{
	{
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_0 = __this->____items;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_1 = ___0_array;
		int32_t L_2 = ___1_arrayIndex;
		int32_t L_3 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_0, 0, (RuntimeArray*)L_1, L_2, L_3, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_EnsureCapacity_m3D475952F4DECC72C2F6CAC08454234565F47922_gshared (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, int32_t ___0_min, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t G_B4_0 = 0;
	{
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_0 = __this->____items;
		NullCheck(L_0);
		int32_t L_1 = ___0_min;
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length))) >= ((int32_t)L_1)))
		{
			goto IL_003d;
		}
	}
	{
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_2 = __this->____items;
		NullCheck(L_2);
		if (!(((RuntimeArray*)L_2)->max_length))
		{
			goto IL_0020;
		}
	}
	{
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_3 = __this->____items;
		NullCheck(L_3);
		G_B4_0 = ((int32_t)il2cpp_codegen_multiply(((int32_t)(((RuntimeArray*)L_3)->max_length)), 2));
		goto IL_0021;
	}

IL_0020:
	{
		G_B4_0 = 4;
	}

IL_0021:
	{
		V_0 = G_B4_0;
		int32_t L_4 = V_0;
		if ((!(((uint32_t)L_4) > ((uint32_t)((int32_t)2146435071)))))
		{
			goto IL_0030;
		}
	}
	{
		V_0 = ((int32_t)2146435071);
	}

IL_0030:
	{
		int32_t L_5 = V_0;
		int32_t L_6 = ___0_min;
		if ((((int32_t)L_5) >= ((int32_t)L_6)))
		{
			goto IL_0036;
		}
	}
	{
		int32_t L_7 = ___0_min;
		V_0 = L_7;
	}

IL_0036:
	{
		int32_t L_8 = V_0;
		List_1_set_Capacity_mF3F5104AB534524CF6D04659241FBD48C9080FFE(__this, L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 24));
	}

IL_003d:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t609488A9291E792D6A59707FF2BF03FBB727E047 List_1_GetEnumerator_m24A1CBC9428047F6672EC9B92A3E4154DC60337A_gshared (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t609488A9291E792D6A59707FF2BF03FBB727E047 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m2045BF7E8C40063172911C1C7F174F126C2F29CE((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m6173F1F072EB9EF8FBAA41E503C7EB3B46D3E0EE_gshared (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t609488A9291E792D6A59707FF2BF03FBB727E047 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m2045BF7E8C40063172911C1C7F174F126C2F29CE((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		Enumerator_t609488A9291E792D6A59707FF2BF03FBB727E047 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 25), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_System_Collections_IEnumerable_GetEnumerator_m71DE950F6F23AD0BD3F358383075D1EA8E723EEA_gshared (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t609488A9291E792D6A59707FF2BF03FBB727E047 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m2045BF7E8C40063172911C1C7F174F126C2F29CE((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		Enumerator_t609488A9291E792D6A59707FF2BF03FBB727E047 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 25), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_IndexOf_m5F1AA4E06F9B4B86729A3089AF48805434E7747A_gshared (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_item, const RuntimeMethod* method) 
{
	{
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_0 = __this->____items;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___0_item;
		int32_t L_2 = __this->____size;
		int32_t L_3;
		L_3 = Array_IndexOf_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m3E23294C983591428D5481A6201C56FA7DD46672(L_0, L_1, 0, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_System_Collections_IList_IndexOf_mF76A5F4547BB58431EDD3B74FED0CA02F0644CF7_gshared (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_item;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		bool L_1;
		L_1 = List_1_IsCompatibleObject_m9763209708608E6A97CF3666F1A06C04DB3E43F1(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_item;
		int32_t L_3;
		L_3 = List_1_IndexOf_m5F1AA4E06F9B4B86729A3089AF48805434E7747A(__this, ((*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 9))))), il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		return L_3;
	}

IL_0015:
	{
		return (-1);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Insert_mE7623D84AEA50E917A6371C1DD13D356C9190F2F_gshared (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, int32_t ___0_index, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_item, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_0012;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F((int32_t)((int32_t)13), (int32_t)((int32_t)27), NULL);
	}

IL_0012:
	{
		int32_t L_2 = __this->____size;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_3 = __this->____items;
		NullCheck(L_3);
		if ((!(((uint32_t)L_2) == ((uint32_t)((int32_t)(((RuntimeArray*)L_3)->max_length))))))
		{
			goto IL_0030;
		}
	}
	{
		int32_t L_4 = __this->____size;
		List_1_EnsureCapacity_m3D475952F4DECC72C2F6CAC08454234565F47922(__this, ((int32_t)il2cpp_codegen_add(L_4, 1)), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
	}

IL_0030:
	{
		int32_t L_5 = ___0_index;
		int32_t L_6 = __this->____size;
		if ((((int32_t)L_5) >= ((int32_t)L_6)))
		{
			goto IL_0056;
		}
	}
	{
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_7 = __this->____items;
		int32_t L_8 = ___0_index;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_9 = __this->____items;
		int32_t L_10 = ___0_index;
		int32_t L_11 = __this->____size;
		int32_t L_12 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_7, L_8, (RuntimeArray*)L_9, ((int32_t)il2cpp_codegen_add(L_10, 1)), ((int32_t)il2cpp_codegen_subtract(L_11, L_12)), NULL);
	}

IL_0056:
	{
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_13 = __this->____items;
		int32_t L_14 = ___0_index;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15 = ___1_item;
		NullCheck(L_13);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(L_14), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_15);
		int32_t L_16 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_16, 1));
		int32_t L_17 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_17, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_System_Collections_IList_Insert_m42A613F09A5B95D355050EF1AFE16C3FC466AB9C_gshared (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, int32_t ___0_index, RuntimeObject* ___1_item, const RuntimeMethod* method) 
{
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeObject* L_0 = ___1_item;
		ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m4E879C7609DC1101BE0D3A088A9627F863855032(L_0, (int32_t)((int32_t)20), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
	}
	try
	{
		int32_t L_1 = ___0_index;
		RuntimeObject* L_2 = ___1_item;
		List_1_Insert_mE7623D84AEA50E917A6371C1DD13D356C9190F2F(__this, L_1, ((*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 9))))), il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		goto IL_002a;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0017;
		}
		throw e;
	}

CATCH_0017:
	{
		RuntimeObject* L_3 = ___1_item;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_4 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 13)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_5;
		L_5 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_4, NULL);
		ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_3, L_5, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_002a;
	}

IL_002a:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_InsertRange_m2A9F80B354349125F355FBCDED0B624FFEC79CA4_gshared (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, int32_t ___0_index, RuntimeObject* ___1_collection, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	int32_t V_1 = 0;
	RuntimeObject* V_2 = NULL;
	{
		RuntimeObject* L_0 = ___1_collection;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)6, NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___0_index;
		int32_t L_2 = __this->____size;
		if ((!(((uint32_t)L_1) > ((uint32_t)L_2))))
		{
			goto IL_0017;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRange_IndexException_mC7661B8C6DD827679C95FC6B6C08F8724174936D(NULL);
	}

IL_0017:
	{
		RuntimeObject* L_3 = ___1_collection;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_3, il2cpp_rgctx_data(method->klass->rgctx_data, 5)));
		RuntimeObject* L_4 = V_0;
		if (!L_4)
		{
			goto IL_00bc;
		}
	}
	{
		RuntimeObject* L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 5), L_5);
		V_1 = L_6;
		int32_t L_7 = V_1;
		if ((((int32_t)L_7) <= ((int32_t)0)))
		{
			goto IL_00fb;
		}
	}
	{
		int32_t L_8 = __this->____size;
		int32_t L_9 = V_1;
		List_1_EnsureCapacity_m3D475952F4DECC72C2F6CAC08454234565F47922(__this, ((int32_t)il2cpp_codegen_add(L_8, L_9)), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		int32_t L_10 = ___0_index;
		int32_t L_11 = __this->____size;
		if ((((int32_t)L_10) >= ((int32_t)L_11)))
		{
			goto IL_0066;
		}
	}
	{
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_12 = __this->____items;
		int32_t L_13 = ___0_index;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_14 = __this->____items;
		int32_t L_15 = ___0_index;
		int32_t L_16 = V_1;
		int32_t L_17 = __this->____size;
		int32_t L_18 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_12, L_13, (RuntimeArray*)L_14, ((int32_t)il2cpp_codegen_add(L_15, L_16)), ((int32_t)il2cpp_codegen_subtract(L_17, L_18)), NULL);
	}

IL_0066:
	{
		RuntimeObject* L_19 = V_0;
		if ((!(((RuntimeObject*)(List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*)__this) == ((RuntimeObject*)(RuntimeObject*)L_19))))
		{
			goto IL_009f;
		}
	}
	{
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_20 = __this->____items;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_21 = __this->____items;
		int32_t L_22 = ___0_index;
		int32_t L_23 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_20, 0, (RuntimeArray*)L_21, L_22, L_23, NULL);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_24 = __this->____items;
		int32_t L_25 = ___0_index;
		int32_t L_26 = V_1;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_27 = __this->____items;
		int32_t L_28 = ___0_index;
		int32_t L_29 = __this->____size;
		int32_t L_30 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_24, ((int32_t)il2cpp_codegen_add(L_25, L_26)), (RuntimeArray*)L_27, ((int32_t)il2cpp_codegen_multiply(L_28, 2)), ((int32_t)il2cpp_codegen_subtract(L_29, L_30)), NULL);
		goto IL_00ac;
	}

IL_009f:
	{
		RuntimeObject* L_31 = V_0;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_32 = __this->____items;
		int32_t L_33 = ___0_index;
		NullCheck(L_31);
		InterfaceActionInvoker2< Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*, int32_t >::Invoke(5, il2cpp_rgctx_data(method->klass->rgctx_data, 5), L_31, L_32, L_33);
	}

IL_00ac:
	{
		int32_t L_34 = __this->____size;
		int32_t L_35 = V_1;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_34, L_35));
		goto IL_00fb;
	}

IL_00bc:
	{
		int32_t L_36 = ___0_index;
		int32_t L_37 = __this->____size;
		if ((((int32_t)L_36) >= ((int32_t)L_37)))
		{
			goto IL_00f4;
		}
	}
	{
		RuntimeObject* L_38 = ___1_collection;
		NullCheck(L_38);
		RuntimeObject* L_39;
		L_39 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 4), L_38);
		V_2 = L_39;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00ea:
			{
				{
					RuntimeObject* L_40 = V_2;
					if (!L_40)
					{
						goto IL_00f3;
					}
				}
				{
					RuntimeObject* L_41 = V_2;
					NullCheck((RuntimeObject*)L_41);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_41);
				}

IL_00f3:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_00e0_1;
			}

IL_00ce_1:
			{
				int32_t L_42 = ___0_index;
				int32_t L_43 = L_42;
				___0_index = ((int32_t)il2cpp_codegen_add(L_43, 1));
				RuntimeObject* L_44 = V_2;
				NullCheck(L_44);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_45;
				L_45 = InterfaceFuncInvoker0< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 27), L_44);
				List_1_Insert_mE7623D84AEA50E917A6371C1DD13D356C9190F2F(__this, L_43, L_45, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
			}

IL_00e0_1:
			{
				RuntimeObject* L_46 = V_2;
				NullCheck((RuntimeObject*)L_46);
				bool L_47;
				L_47 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_46);
				if (L_47)
				{
					goto IL_00ce_1;
				}
			}
			{
				goto IL_00fb;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00f4:
	{
		RuntimeObject* L_48 = ___1_collection;
		List_1_AddEnumerable_m3F61E1BEC6F6043A8E6F87420863504DE9F59C6E(__this, L_48, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
	}

IL_00fb:
	{
		int32_t L_49 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_49, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_mA22ACBFC00BF518337732F3D3033AABB2DD46676_gshared (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_item;
		int32_t L_1;
		L_1 = List_1_IndexOf_m5F1AA4E06F9B4B86729A3089AF48805434E7747A(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		int32_t L_3 = V_0;
		List_1_RemoveAt_m482122FD05018D3A1F5EE75A17852A8F8A911679(__this, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 32));
		return (bool)1;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_System_Collections_IList_Remove_mF1A061E436DC7C52EA2F62895DFE513FD25F027C_gshared (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_item;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		bool L_1;
		L_1 = List_1_IsCompatibleObject_m9763209708608E6A97CF3666F1A06C04DB3E43F1(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_item;
		bool L_3;
		L_3 = List_1_Remove_mA22ACBFC00BF518337732F3D3033AABB2DD46676(__this, ((*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 9))))), il2cpp_rgctx_method(method->klass->rgctx_data, 33));
	}

IL_0015:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_RemoveAll_m4068A34D21FB6DB539BE2FBD2DBBA76DBA17F427_gshared (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, Predicate_1_tE96ECD003F473EE07C8DCDFCCD657300A8DE453B* ___0_match, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		Predicate_1_tE96ECD003F473EE07C8DCDFCCD657300A8DE453B* L_0 = ___0_match;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)8, NULL);
	}

IL_0009:
	{
		V_0 = 0;
		goto IL_0011;
	}

IL_000d:
	{
		int32_t L_1 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_1, 1));
	}

IL_0011:
	{
		int32_t L_2 = V_0;
		int32_t L_3 = __this->____size;
		if ((((int32_t)L_2) >= ((int32_t)L_3)))
		{
			goto IL_002e;
		}
	}
	{
		Predicate_1_tE96ECD003F473EE07C8DCDFCCD657300A8DE453B* L_4 = ___0_match;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_5 = __this->____items;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		NullCheck(L_4);
		bool L_9;
		L_9 = Predicate_1_Invoke_m9FE817A40A1AA77B5B15B6C0E90EB7A4715A819D_inline(L_4, L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 35));
		if (!L_9)
		{
			goto IL_000d;
		}
	}

IL_002e:
	{
		int32_t L_10 = V_0;
		int32_t L_11 = __this->____size;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_0039;
		}
	}
	{
		return 0;
	}

IL_0039:
	{
		int32_t L_12 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
		goto IL_0089;
	}

IL_003f:
	{
		int32_t L_13 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_0043:
	{
		int32_t L_14 = V_1;
		int32_t L_15 = __this->____size;
		if ((((int32_t)L_14) >= ((int32_t)L_15)))
		{
			goto IL_0060;
		}
	}
	{
		Predicate_1_tE96ECD003F473EE07C8DCDFCCD657300A8DE453B* L_16 = ___0_match;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_17 = __this->____items;
		int32_t L_18 = V_1;
		NullCheck(L_17);
		int32_t L_19 = L_18;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		NullCheck(L_16);
		bool L_21;
		L_21 = Predicate_1_Invoke_m9FE817A40A1AA77B5B15B6C0E90EB7A4715A819D_inline(L_16, L_20, il2cpp_rgctx_method(method->klass->rgctx_data, 35));
		if (L_21)
		{
			goto IL_003f;
		}
	}

IL_0060:
	{
		int32_t L_22 = V_1;
		int32_t L_23 = __this->____size;
		if ((((int32_t)L_22) >= ((int32_t)L_23)))
		{
			goto IL_0089;
		}
	}
	{
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_24 = __this->____items;
		int32_t L_25 = V_0;
		int32_t L_26 = L_25;
		V_0 = ((int32_t)il2cpp_codegen_add(L_26, 1));
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_27 = __this->____items;
		int32_t L_28 = V_1;
		int32_t L_29 = L_28;
		V_1 = ((int32_t)il2cpp_codegen_add(L_29, 1));
		NullCheck(L_27);
		int32_t L_30 = L_29;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_30));
		NullCheck(L_24);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(L_26), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_31);
	}

IL_0089:
	{
		int32_t L_32 = V_1;
		int32_t L_33 = __this->____size;
		if ((((int32_t)L_32) < ((int32_t)L_33)))
		{
			goto IL_0043;
		}
	}
	{
		goto IL_00ad;
	}

IL_00ad:
	{
		int32_t L_34 = __this->____size;
		int32_t L_35 = V_0;
		int32_t L_36 = V_0;
		__this->____size = L_36;
		int32_t L_37 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_37, 1));
		return ((int32_t)il2cpp_codegen_subtract(L_34, L_35));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_m482122FD05018D3A1F5EE75A17852A8F8A911679_gshared (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRange_IndexException_mC7661B8C6DD827679C95FC6B6C08F8724174936D(NULL);
	}

IL_000e:
	{
		int32_t L_2 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_subtract(L_2, 1));
		int32_t L_3 = ___0_index;
		int32_t L_4 = __this->____size;
		if ((((int32_t)L_3) >= ((int32_t)L_4)))
		{
			goto IL_0042;
		}
	}
	{
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_5 = __this->____items;
		int32_t L_6 = ___0_index;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_7 = __this->____items;
		int32_t L_8 = ___0_index;
		int32_t L_9 = __this->____size;
		int32_t L_10 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, ((int32_t)il2cpp_codegen_add(L_6, 1)), (RuntimeArray*)L_7, L_8, ((int32_t)il2cpp_codegen_subtract(L_9, L_10)), NULL);
	}

IL_0042:
	{
		goto IL_0063;
	}

IL_0063:
	{
		int32_t L_11 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_11, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveRange_m2459C0BC8F20CF66E82F55757ABCF60A69752B6D_gshared (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, int32_t ___0_index, int32_t ___1_count, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_count;
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F((int32_t)((int32_t)16), (int32_t)4, NULL);
	}

IL_0015:
	{
		int32_t L_2 = __this->____size;
		int32_t L_3 = ___0_index;
		int32_t L_4 = ___1_count;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_2, L_3))) >= ((int32_t)L_4)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)((int32_t)23), NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_count;
		if ((((int32_t)L_5) <= ((int32_t)0)))
		{
			goto IL_008d;
		}
	}
	{
		int32_t L_6 = __this->____size;
		int32_t L_7 = __this->____size;
		int32_t L_8 = ___1_count;
		__this->____size = ((int32_t)il2cpp_codegen_subtract(L_7, L_8));
		int32_t L_9 = ___0_index;
		int32_t L_10 = __this->____size;
		if ((((int32_t)L_9) >= ((int32_t)L_10)))
		{
			goto IL_0066;
		}
	}
	{
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_11 = __this->____items;
		int32_t L_12 = ___0_index;
		int32_t L_13 = ___1_count;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_14 = __this->____items;
		int32_t L_15 = ___0_index;
		int32_t L_16 = __this->____size;
		int32_t L_17 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_11, ((int32_t)il2cpp_codegen_add(L_12, L_13)), (RuntimeArray*)L_14, L_15, ((int32_t)il2cpp_codegen_subtract(L_16, L_17)), NULL);
	}

IL_0066:
	{
		int32_t L_18 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_18, 1));
		goto IL_008d;
	}

IL_008d:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Reverse_m6176C1C61287BC196A8039EFD94C4C197C592F72_gshared (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 17));
		List_1_Reverse_mC864E0AB0C4F6970C423BCBF255DF82A68155E8B(__this, 0, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 36));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Reverse_mC864E0AB0C4F6970C423BCBF255DF82A68155E8B_gshared (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, int32_t ___0_index, int32_t ___1_count, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_count;
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F((int32_t)((int32_t)16), (int32_t)4, NULL);
	}

IL_0015:
	{
		int32_t L_2 = __this->____size;
		int32_t L_3 = ___0_index;
		int32_t L_4 = ___1_count;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_2, L_3))) >= ((int32_t)L_4)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)((int32_t)23), NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_count;
		if ((((int32_t)L_5) <= ((int32_t)1)))
		{
			goto IL_0038;
		}
	}
	{
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_6 = __this->____items;
		int32_t L_7 = ___0_index;
		int32_t L_8 = ___1_count;
		Array_Reverse_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mDEEDD12A164F41DC4C3EE36DCDDE671EA8C18084(L_6, L_7, L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 37));
	}

IL_0038:
	{
		int32_t L_9 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_9, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_m51760B6514FB9D9C8F7EEBBD60CA2192CB7D3777_gshared (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 17));
		RuntimeObject* L_1 = ___0_comparer;
		List_1_Sort_m69FABA33F3CBE64D5C30DC43E211D9971FFE827E(__this, 0, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 39));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_m69FABA33F3CBE64D5C30DC43E211D9971FFE827E_gshared (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, int32_t ___0_index, int32_t ___1_count, RuntimeObject* ___2_comparer, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_count;
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F((int32_t)((int32_t)16), (int32_t)4, NULL);
	}

IL_0015:
	{
		int32_t L_2 = __this->____size;
		int32_t L_3 = ___0_index;
		int32_t L_4 = ___1_count;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_2, L_3))) >= ((int32_t)L_4)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)((int32_t)23), NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_count;
		if ((((int32_t)L_5) <= ((int32_t)1)))
		{
			goto IL_0039;
		}
	}
	{
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_6 = __this->____items;
		int32_t L_7 = ___0_index;
		int32_t L_8 = ___1_count;
		RuntimeObject* L_9 = ___2_comparer;
		Array_Sort_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m3CA841E40073D0F005011B0D0DC91D6FF6BCBEF5(L_6, L_7, L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 40));
	}

IL_0039:
	{
		int32_t L_10 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_10, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_m931B86872C81BF6F23E40265DD666EA769082715_gshared (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, Comparison_1_t388CFEE675F4A6E15BB604A7AD4C3A5B6D265FB7* ___0_comparison, const RuntimeMethod* method) 
{
	{
		Comparison_1_t388CFEE675F4A6E15BB604A7AD4C3A5B6D265FB7* L_0 = ___0_comparison;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)((int32_t)34), NULL);
	}

IL_000a:
	{
		int32_t L_1 = __this->____size;
		if ((((int32_t)L_1) <= ((int32_t)1)))
		{
			goto IL_0026;
		}
	}
	{
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_2 = __this->____items;
		int32_t L_3 = __this->____size;
		Comparison_1_t388CFEE675F4A6E15BB604A7AD4C3A5B6D265FB7* L_4 = ___0_comparison;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 43));
		ArraySortHelper_1_Sort_mA9371769E1F6D5DDE053EA4A4ED2B9DDBA500404(L_2, 0, L_3, L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 42));
	}

IL_0026:
	{
		int32_t L_5 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_5, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* List_1_ToArray_mF7A66D08104196EBAE0E29F0DD9BA140656EA5F3_gshared (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, const RuntimeMethod* method) 
{
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* V_0 = NULL;
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_1 = ((List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 2)))->___s_emptyArray;
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____size;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_3 = (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_2);
		V_0 = L_3;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_4 = __this->____items;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_5 = V_0;
		int32_t L_6 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_4, 0, (RuntimeArray*)L_5, 0, L_6, NULL);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_7 = V_0;
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddEnumerable_m3F61E1BEC6F6043A8E6F87420863504DE9F59C6E_gshared (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, RuntimeObject* ___0_enumerable, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		RuntimeObject* L_1 = ___0_enumerable;
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 4), L_1);
		V_0 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0063:
			{
				{
					RuntimeObject* L_3 = V_0;
					if (!L_3)
					{
						goto IL_006c;
					}
				}
				{
					RuntimeObject* L_4 = V_0;
					NullCheck((RuntimeObject*)L_4);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_4);
				}

IL_006c:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_0059_1;
			}

IL_0017_1:
			{
				RuntimeObject* L_5 = V_0;
				NullCheck(L_5);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
				L_6 = InterfaceFuncInvoker0< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 27), L_5);
				V_1 = L_6;
				int32_t L_7 = __this->____size;
				Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_8 = __this->____items;
				NullCheck(L_8);
				if ((!(((uint32_t)L_7) == ((uint32_t)((int32_t)(((RuntimeArray*)L_8)->max_length))))))
				{
					goto IL_003c_1;
				}
			}
			{
				int32_t L_9 = __this->____size;
				List_1_EnsureCapacity_m3D475952F4DECC72C2F6CAC08454234565F47922(__this, ((int32_t)il2cpp_codegen_add(L_9, 1)), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
			}

IL_003c_1:
			{
				Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_10 = __this->____items;
				int32_t L_11 = __this->____size;
				V_2 = L_11;
				int32_t L_12 = V_2;
				__this->____size = ((int32_t)il2cpp_codegen_add(L_12, 1));
				int32_t L_13 = V_2;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14 = V_1;
				NullCheck(L_10);
				(L_10)->SetAt(static_cast<il2cpp_array_size_t>(L_13), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_14);
			}

IL_0059_1:
			{
				RuntimeObject* L_15 = V_0;
				NullCheck((RuntimeObject*)L_15);
				bool L_16;
				L_16 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_15);
				if (L_16)
				{
					goto IL_0017_1;
				}
			}
			{
				goto IL_006d;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_006d:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__cctor_mB2C511F5B49BB04B022170FCE20F64ACCA3FB053_gshared (const RuntimeMethod* method) 
{
	{
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_0 = (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)SZArrayNew(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 3), (uint32_t)0);
		((List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___s_emptyArray = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___s_emptyArray), (void*)L_0);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m0AFBAEA7EC427E32CC9CA267B1930DC5DF67A374_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = ((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 2)))->___s_emptyArray;
		__this->____items = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m3069CACB5775E013107F559C825422266A09F9E8_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0012;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F((int32_t)((int32_t)12), (int32_t)4, NULL);
	}

IL_0012:
	{
		int32_t L_1 = ___0_capacity;
		if (L_1)
		{
			goto IL_0021;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_2 = ((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 2)))->___s_emptyArray;
		__this->____items = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_2);
		return;
	}

IL_0021:
	{
		int32_t L_3 = ___0_capacity;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_4 = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_3);
		__this->____items = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_4);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mACCB7726C2E9728AE336F99C68B334459F9F30FB_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	int32_t V_1 = 0;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		RuntimeObject* L_0 = ___0_collection;
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)6, NULL);
	}

IL_000f:
	{
		RuntimeObject* L_1 = ___0_collection;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_1, il2cpp_rgctx_data(method->klass->rgctx_data, 5)));
		RuntimeObject* L_2 = V_0;
		if (!L_2)
		{
			goto IL_0050;
		}
	}
	{
		RuntimeObject* L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 5), L_3);
		V_1 = L_4;
		int32_t L_5 = V_1;
		if (L_5)
		{
			goto IL_002f;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_6 = ((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 2)))->___s_emptyArray;
		__this->____items = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_6);
		return;
	}

IL_002f:
	{
		int32_t L_7 = V_1;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_8 = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_7);
		__this->____items = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_8);
		RuntimeObject* L_9 = V_0;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_10 = __this->____items;
		NullCheck(L_9);
		InterfaceActionInvoker2< __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, int32_t >::Invoke(5, il2cpp_rgctx_data(method->klass->rgctx_data, 5), L_9, L_10, 0);
		int32_t L_11 = V_1;
		__this->____size = L_11;
		return;
	}

IL_0050:
	{
		__this->____size = 0;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_12 = ((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 2)))->___s_emptyArray;
		__this->____items = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_12);
		RuntimeObject* L_13 = ___0_collection;
		((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(__this, L_13, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Capacity_mD365C22FA3D32D70A2088AB13116E7BA5FBF0BFB_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* V_0 = NULL;
	{
		int32_t L_0 = ___0_value;
		int32_t L_1 = __this->____size;
		if ((((int32_t)L_0) >= ((int32_t)L_1)))
		{
			goto IL_0012;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F((int32_t)((int32_t)15), (int32_t)((int32_t)21), NULL);
	}

IL_0012:
	{
		int32_t L_2 = ___0_value;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_3 = __this->____items;
		NullCheck(L_3);
		if ((((int32_t)L_2) == ((int32_t)((int32_t)(((RuntimeArray*)L_3)->max_length)))))
		{
			goto IL_0058;
		}
	}
	{
		int32_t L_4 = ___0_value;
		if ((((int32_t)L_4) <= ((int32_t)0)))
		{
			goto IL_004d;
		}
	}
	{
		int32_t L_5 = ___0_value;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_6 = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_5);
		V_0 = L_6;
		int32_t L_7 = __this->____size;
		if ((((int32_t)L_7) <= ((int32_t)0)))
		{
			goto IL_0045;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_8 = __this->____items;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_9 = V_0;
		int32_t L_10 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_8, 0, (RuntimeArray*)L_9, 0, L_10, NULL);
	}

IL_0045:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_11 = V_0;
		__this->____items = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_11);
		return;
	}

IL_004d:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_12 = ((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 2)))->___s_emptyArray;
		__this->____items = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_12);
	}

IL_0058:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mD2ED26ACAF3BAF386FFEA83893BA51DB9FD8BA30_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m3F886C476FAC47C7E0B22BBEFA863E6E28CB6967_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_System_Collections_IList_get_IsReadOnly_m14CBA0E79745928530A7F91F920E3B29BF5977C2_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_System_Collections_ICollection_get_SyncRoot_m81521F85F116B00354BB0F726158451F3F1543F8_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____syncRoot;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject** L_1 = (RuntimeObject**)(&__this->____syncRoot);
		RuntimeObject* L_2 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_2, NULL);
		RuntimeObject* L_3;
		L_3 = InterlockedCompareExchangeImpl<RuntimeObject*>(L_1, L_2, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = __this->____syncRoot;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_get_Item_m6E4BA37C1FB558E4A62AE4324212E45D09C5C937_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, int32_t ___0_index, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9));
	const Il2CppFullySharedGenericAny L_5 = alloca(SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRange_IndexException_mC7661B8C6DD827679C95FC6B6C08F8724174936D(NULL);
	}

IL_000e:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_2 = __this->____items;
		int32_t L_3 = ___0_index;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		il2cpp_codegen_memcpy(L_5, (L_2)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4)), SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
		il2cpp_codegen_memcpy(il2cppRetVal, L_5, SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Item_m9A958091885CC5363CCFE9F0BC472EAFCB56C813_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, int32_t ___0_index, Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9));
	const Il2CppFullySharedGenericAny L_4 = alloca(SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRange_IndexException_mC7661B8C6DD827679C95FC6B6C08F8724174936D(NULL);
	}

IL_000e:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_2 = __this->____items;
		int32_t L_3 = ___0_index;
		il2cpp_codegen_memcpy(L_4, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)) ? ___1_value : &___1_value), SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
		NullCheck(L_2);
		il2cpp_codegen_memcpy((L_2)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_3)), L_4, SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->klass->rgctx_data, 9), (void**)(L_2)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_3)), (void*)L_4);
		int32_t L_5 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_5, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_IsCompatibleObject_mF063A5AC0A6B869965B78A300A210C77D7D85A9E_gshared (RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 9));
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
	memset(V_0, 0, SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
	{
		RuntimeObject* L_0 = ___0_value;
		if (((RuntimeObject*)IsInst((RuntimeObject*)L_0, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 9))))
		{
			goto IL_001f;
		}
	}
	{
		RuntimeObject* L_1 = ___0_value;
		if (L_1)
		{
			goto IL_001d;
		}
	}
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_0, SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
		il2cpp_codegen_memcpy(L_2, V_0, SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
		bool L_3 = !il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 9), L_2);
		bool L_4 = L_3;
		return L_4;
	}

IL_001d:
	{
		return (bool)0;
	}

IL_001f:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_System_Collections_IList_get_Item_m9468A95C180AB56C22EF37B808E722B82FA5DA1D_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
	{
		int32_t L_0 = ___0_index;
		InvokerActionInvoker2< int32_t, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)), il2cpp_rgctx_method(method->klass->rgctx_data, 10), __this, L_0, (Il2CppFullySharedGenericAny*)L_1);
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9), L_1);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_System_Collections_IList_set_Item_m0F05BC227468EA87CF5E5E2D0707EFEDD6DB1D48_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, int32_t ___0_index, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9));
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeObject* L_0 = ___1_value;
		((  void (*) (RuntimeObject*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(L_0, (int32_t)((int32_t)15), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
	}
	try
	{
		int32_t L_1 = ___0_index;
		RuntimeObject* L_2 = ___1_value;
		void* L_4 = UnBox_Any(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 9), L_3);
		InvokerActionInvoker2< int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)), il2cpp_rgctx_method(method->klass->rgctx_data, 12), __this, L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)) ? (((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_4))): *(void**)(((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_4)))));
		goto IL_002a;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0017;
		}
		throw e;
	}

CATCH_0017:
	{
		RuntimeObject* L_5 = ___1_value;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 13)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_5, L_7, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_002a;
	}

IL_002a:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mD4F3498FBD3BDD3F03CBCFB38041CBAC9C28CAFC_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9));
	const Il2CppFullySharedGenericAny L_8 = alloca(SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
	const Il2CppFullySharedGenericAny L_9 = L_8;
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_1 = __this->____items;
		V_0 = L_1;
		int32_t L_2 = __this->____size;
		V_1 = L_2;
		int32_t L_3 = V_1;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_5, 1));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_6 = V_0;
		int32_t L_7 = V_1;
		il2cpp_codegen_memcpy(L_8, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)) ? ___0_item : &___0_item), SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
		NullCheck(L_6);
		il2cpp_codegen_memcpy((L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7)), L_8, SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->klass->rgctx_data, 9), (void**)(L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7)), (void*)L_8);
		return;
	}

IL_0034:
	{
		il2cpp_codegen_memcpy(L_9, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)) ? ___0_item : &___0_item), SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 14)), il2cpp_rgctx_method(method->klass->rgctx_data, 14), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)) ? L_9: *(void**)L_9));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void List_1_AddWithResize_mA6DFDBC2B22D6318212C6989A34784BD8303AF33_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9));
	const Il2CppFullySharedGenericAny L_5 = alloca(SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____size;
		V_0 = L_0;
		int32_t L_1 = V_0;
		((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)))(__this, ((int32_t)il2cpp_codegen_add(L_1, 1)), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		int32_t L_2 = V_0;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_2, 1));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_3 = __this->____items;
		int32_t L_4 = V_0;
		il2cpp_codegen_memcpy(L_5, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)) ? ___0_item : &___0_item), SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
		NullCheck(L_3);
		il2cpp_codegen_memcpy((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4)), L_5, SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->klass->rgctx_data, 9), (void**)(L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4)), (void*)L_5);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_System_Collections_IList_Add_m16AFA75CCE3355CE51D428B0931951485666BF3D_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9));
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeObject* L_0 = ___0_item;
		((  void (*) (RuntimeObject*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(L_0, (int32_t)((int32_t)20), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
	}
	try
	{
		RuntimeObject* L_1 = ___0_item;
		void* L_3 = UnBox_Any(L_1, il2cpp_rgctx_data(method->klass->rgctx_data, 9), L_2);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 16)), il2cpp_rgctx_method(method->klass->rgctx_data, 16), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)) ? (((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_3))): *(void**)(((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_3)))));
		goto IL_0029;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0016;
		}
		throw e;
	}

CATCH_0016:
	{
		RuntimeObject* L_4 = ___0_item;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 13)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_6;
		L_6 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_5, NULL);
		ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_4, L_6, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0029;
	}

IL_0029:
	{
		int32_t L_7;
		L_7 = ((  int32_t (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 17)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 17));
		return ((int32_t)il2cpp_codegen_subtract(L_7, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddRange_m44DED39FFEBC8F2ACF6162DB065B649E888B9C57_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		RuntimeObject* L_1 = ___0_collection;
		((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, int32_t, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 18)))(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Clear_mD615D1BCB2C9DD91DAD86A2F9E5CF1DFFCBF7925_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		bool L_1;
		L_1 = il2cpp_codegen_is_reference_or_contains_references(il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		if (!L_1)
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_2 = __this->____size;
		V_0 = L_2;
		__this->____size = 0;
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_4 = __this->____items;
		int32_t L_5 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_4, 0, L_5, NULL);
		return;
	}

IL_0035:
	{
		__this->____size = 0;
	}

IL_003c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_m8DA550B703DFB328B69C4712064C667D7CA33DF1_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
	{
		int32_t L_0 = __this->____size;
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)) ? ___0_item : &___0_item), SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
		int32_t L_2;
		L_2 = InvokerFuncInvoker1< int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 20)), il2cpp_rgctx_method(method->klass->rgctx_data, 20), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)) ? L_1: *(void**)L_1));
		return (bool)((((int32_t)((((int32_t)L_2) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0016:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_System_Collections_IList_Contains_m20FD9B23AB202EAE6A3EBD3271A64B10BB21C5D9_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9));
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
	{
		RuntimeObject* L_0 = ___0_item;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		bool L_1;
		L_1 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 21)))(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_item;
		void* L_4 = UnBox_Any(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 9), L_3);
		bool L_5;
		L_5 = InvokerFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 22)), il2cpp_rgctx_method(method->klass->rgctx_data, 22), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)) ? (((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_4))): *(void**)(((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_4)))));
		return L_5;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_CopyTo_m9632CAFAB9E06DBDE71886CC36E6C910F8350F9C_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, const RuntimeMethod* method) 
{
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = ___0_array;
		((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 23)))(__this, L_0, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_System_Collections_ICollection_CopyTo_mAAA2256D3B50B6A712DFB270B01B470759AB4FE9_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, RuntimeArray* ___0_array, int32_t ___1_arrayIndex, const RuntimeMethod* method) 
{
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		RuntimeArray* L_1 = ___0_array;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(L_1, NULL);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0012;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)7, NULL);
	}

IL_0012:
	{
	}
	try
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_3 = __this->____items;
		RuntimeArray* L_4 = ___0_array;
		int32_t L_5 = ___1_arrayIndex;
		int32_t L_6 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_3, 0, L_4, L_5, L_6, NULL);
		goto IL_0031;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0029;
		}
		throw e;
	}

CATCH_0029:
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0031;
	}

IL_0031:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_CopyTo_m5180D7A430072A21034A0692CDD1D565ADEE2ABB_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, int32_t ___1_arrayIndex, const RuntimeMethod* method) 
{
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = __this->____items;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_1 = ___0_array;
		int32_t L_2 = ___1_arrayIndex;
		int32_t L_3 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_0, 0, (RuntimeArray*)L_1, L_2, L_3, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_EnsureCapacity_m0116C3A6AF6FB7DCF2E909AD859A0ADC86A60C66_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, int32_t ___0_min, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t G_B4_0 = 0;
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = __this->____items;
		NullCheck(L_0);
		int32_t L_1 = ___0_min;
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length))) >= ((int32_t)L_1)))
		{
			goto IL_003d;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_2 = __this->____items;
		NullCheck(L_2);
		if (!(((RuntimeArray*)L_2)->max_length))
		{
			goto IL_0020;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_3 = __this->____items;
		NullCheck(L_3);
		G_B4_0 = ((int32_t)il2cpp_codegen_multiply(((int32_t)(((RuntimeArray*)L_3)->max_length)), 2));
		goto IL_0021;
	}

IL_0020:
	{
		G_B4_0 = 4;
	}

IL_0021:
	{
		V_0 = G_B4_0;
		int32_t L_4 = V_0;
		if ((!(((uint32_t)L_4) > ((uint32_t)((int32_t)2146435071)))))
		{
			goto IL_0030;
		}
	}
	{
		V_0 = ((int32_t)2146435071);
	}

IL_0030:
	{
		int32_t L_5 = V_0;
		int32_t L_6 = ___0_min;
		if ((((int32_t)L_5) >= ((int32_t)L_6)))
		{
			goto IL_0036;
		}
	}
	{
		int32_t L_7 = ___0_min;
		V_0 = L_7;
	}

IL_0036:
	{
		int32_t L_8 = V_0;
		((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 24)))(__this, L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 24));
	}

IL_003d:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_GetEnumerator_m8B2A92ACD4FBA5FBDC3F6F4F5C23A0DDF491DA61_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_Enumerator_t4982EA6BF5A270D5544CF8876DE60B125EDF8FB9 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 25));
	const Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF L_0 = alloca(SizeOf_Enumerator_t4982EA6BF5A270D5544CF8876DE60B125EDF8FB9);
	{
		memset(L_0, 0, SizeOf_Enumerator_t4982EA6BF5A270D5544CF8876DE60B125EDF8FB9);
		Enumerator__ctor_m5C66A91DC68887BE203985B56EF2F74222E9AF50((Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*)L_0, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		il2cpp_codegen_memcpy(il2cppRetVal, L_0, SizeOf_Enumerator_t4982EA6BF5A270D5544CF8876DE60B125EDF8FB9);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_mF8AB18BC6656CC469BFB6E837C001C2DE0833859_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_Enumerator_t4982EA6BF5A270D5544CF8876DE60B125EDF8FB9 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 25));
	const Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF L_0 = alloca(SizeOf_Enumerator_t4982EA6BF5A270D5544CF8876DE60B125EDF8FB9);
	{
		memset(L_0, 0, SizeOf_Enumerator_t4982EA6BF5A270D5544CF8876DE60B125EDF8FB9);
		Enumerator__ctor_m5C66A91DC68887BE203985B56EF2F74222E9AF50((Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*)L_0, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		RuntimeObject* L_1 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 25), L_0);
		return (RuntimeObject*)L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_System_Collections_IEnumerable_GetEnumerator_m83A6D1115899BF6BA842C33FE41FAD8D6EB43ED9_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_Enumerator_t4982EA6BF5A270D5544CF8876DE60B125EDF8FB9 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 25));
	const Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF L_0 = alloca(SizeOf_Enumerator_t4982EA6BF5A270D5544CF8876DE60B125EDF8FB9);
	{
		memset(L_0, 0, SizeOf_Enumerator_t4982EA6BF5A270D5544CF8876DE60B125EDF8FB9);
		Enumerator__ctor_m5C66A91DC68887BE203985B56EF2F74222E9AF50((Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*)L_0, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		RuntimeObject* L_1 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 25), L_0);
		return (RuntimeObject*)L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_IndexOf_m1FFA888B47CE3256B0AC301302FAD79AAAFC0818_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = __this->____items;
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)) ? ___0_item : &___0_item), SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
		int32_t L_2 = __this->____size;
		int32_t L_3;
		L_3 = InvokerFuncInvoker4< int32_t, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, Il2CppFullySharedGenericAny, int32_t, int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 28)), il2cpp_rgctx_method(method->klass->rgctx_data, 28), NULL, L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)) ? L_1: *(void**)L_1), 0, L_2);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_System_Collections_IList_IndexOf_mF0601617A54C360278652B7AEE34E69F21B5ADDA_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9));
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
	{
		RuntimeObject* L_0 = ___0_item;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		bool L_1;
		L_1 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 21)))(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_item;
		void* L_4 = UnBox_Any(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 9), L_3);
		int32_t L_5;
		L_5 = InvokerFuncInvoker1< int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 20)), il2cpp_rgctx_method(method->klass->rgctx_data, 20), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)) ? (((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_4))): *(void**)(((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_4)))));
		return L_5;
	}

IL_0015:
	{
		return (-1);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Insert_mB8862677E04375531A30F3EC07AC2372FCE61F55_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, int32_t ___0_index, Il2CppFullySharedGenericAny ___1_item, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9));
	const Il2CppFullySharedGenericAny L_15 = alloca(SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_0012;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F((int32_t)((int32_t)13), (int32_t)((int32_t)27), NULL);
	}

IL_0012:
	{
		int32_t L_2 = __this->____size;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_3 = __this->____items;
		NullCheck(L_3);
		if ((!(((uint32_t)L_2) == ((uint32_t)((int32_t)(((RuntimeArray*)L_3)->max_length))))))
		{
			goto IL_0030;
		}
	}
	{
		int32_t L_4 = __this->____size;
		((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)))(__this, ((int32_t)il2cpp_codegen_add(L_4, 1)), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
	}

IL_0030:
	{
		int32_t L_5 = ___0_index;
		int32_t L_6 = __this->____size;
		if ((((int32_t)L_5) >= ((int32_t)L_6)))
		{
			goto IL_0056;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_7 = __this->____items;
		int32_t L_8 = ___0_index;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_9 = __this->____items;
		int32_t L_10 = ___0_index;
		int32_t L_11 = __this->____size;
		int32_t L_12 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_7, L_8, (RuntimeArray*)L_9, ((int32_t)il2cpp_codegen_add(L_10, 1)), ((int32_t)il2cpp_codegen_subtract(L_11, L_12)), NULL);
	}

IL_0056:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_13 = __this->____items;
		int32_t L_14 = ___0_index;
		il2cpp_codegen_memcpy(L_15, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)) ? ___1_item : &___1_item), SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
		NullCheck(L_13);
		il2cpp_codegen_memcpy((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14)), L_15, SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->klass->rgctx_data, 9), (void**)(L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14)), (void*)L_15);
		int32_t L_16 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_16, 1));
		int32_t L_17 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_17, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_System_Collections_IList_Insert_m3A5BCE3337DF64C89354C0CDF5DB4EE39A30BCA7_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, int32_t ___0_index, RuntimeObject* ___1_item, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9));
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeObject* L_0 = ___1_item;
		((  void (*) (RuntimeObject*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(L_0, (int32_t)((int32_t)20), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
	}
	try
	{
		int32_t L_1 = ___0_index;
		RuntimeObject* L_2 = ___1_item;
		void* L_4 = UnBox_Any(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 9), L_3);
		InvokerActionInvoker2< int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 29)), il2cpp_rgctx_method(method->klass->rgctx_data, 29), __this, L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)) ? (((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_4))): *(void**)(((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_4)))));
		goto IL_002a;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0017;
		}
		throw e;
	}

CATCH_0017:
	{
		RuntimeObject* L_5 = ___1_item;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 13)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_5, L_7, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_002a;
	}

IL_002a:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_InsertRange_m729639E2C8D1AA7579AC78D259085921E7DC72F2_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, int32_t ___0_index, RuntimeObject* ___1_collection, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9));
	const Il2CppFullySharedGenericAny L_45 = alloca(SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
	RuntimeObject* V_0 = NULL;
	int32_t V_1 = 0;
	RuntimeObject* V_2 = NULL;
	{
		RuntimeObject* L_0 = ___1_collection;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)6, NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___0_index;
		int32_t L_2 = __this->____size;
		if ((!(((uint32_t)L_1) > ((uint32_t)L_2))))
		{
			goto IL_0017;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRange_IndexException_mC7661B8C6DD827679C95FC6B6C08F8724174936D(NULL);
	}

IL_0017:
	{
		RuntimeObject* L_3 = ___1_collection;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_3, il2cpp_rgctx_data(method->klass->rgctx_data, 5)));
		RuntimeObject* L_4 = V_0;
		if (!L_4)
		{
			goto IL_00bc;
		}
	}
	{
		RuntimeObject* L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 5), L_5);
		V_1 = L_6;
		int32_t L_7 = V_1;
		if ((((int32_t)L_7) <= ((int32_t)0)))
		{
			goto IL_00fb;
		}
	}
	{
		int32_t L_8 = __this->____size;
		int32_t L_9 = V_1;
		((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)))(__this, ((int32_t)il2cpp_codegen_add(L_8, L_9)), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		int32_t L_10 = ___0_index;
		int32_t L_11 = __this->____size;
		if ((((int32_t)L_10) >= ((int32_t)L_11)))
		{
			goto IL_0066;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_12 = __this->____items;
		int32_t L_13 = ___0_index;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_14 = __this->____items;
		int32_t L_15 = ___0_index;
		int32_t L_16 = V_1;
		int32_t L_17 = __this->____size;
		int32_t L_18 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_12, L_13, (RuntimeArray*)L_14, ((int32_t)il2cpp_codegen_add(L_15, L_16)), ((int32_t)il2cpp_codegen_subtract(L_17, L_18)), NULL);
	}

IL_0066:
	{
		RuntimeObject* L_19 = V_0;
		if ((!(((RuntimeObject*)(List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this) == ((RuntimeObject*)(RuntimeObject*)L_19))))
		{
			goto IL_009f;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_20 = __this->____items;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_21 = __this->____items;
		int32_t L_22 = ___0_index;
		int32_t L_23 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_20, 0, (RuntimeArray*)L_21, L_22, L_23, NULL);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_24 = __this->____items;
		int32_t L_25 = ___0_index;
		int32_t L_26 = V_1;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_27 = __this->____items;
		int32_t L_28 = ___0_index;
		int32_t L_29 = __this->____size;
		int32_t L_30 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_24, ((int32_t)il2cpp_codegen_add(L_25, L_26)), (RuntimeArray*)L_27, ((int32_t)il2cpp_codegen_multiply(L_28, 2)), ((int32_t)il2cpp_codegen_subtract(L_29, L_30)), NULL);
		goto IL_00ac;
	}

IL_009f:
	{
		RuntimeObject* L_31 = V_0;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_32 = __this->____items;
		int32_t L_33 = ___0_index;
		NullCheck(L_31);
		InterfaceActionInvoker2< __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, int32_t >::Invoke(5, il2cpp_rgctx_data(method->klass->rgctx_data, 5), L_31, L_32, L_33);
	}

IL_00ac:
	{
		int32_t L_34 = __this->____size;
		int32_t L_35 = V_1;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_34, L_35));
		goto IL_00fb;
	}

IL_00bc:
	{
		int32_t L_36 = ___0_index;
		int32_t L_37 = __this->____size;
		if ((((int32_t)L_36) >= ((int32_t)L_37)))
		{
			goto IL_00f4;
		}
	}
	{
		RuntimeObject* L_38 = ___1_collection;
		NullCheck(L_38);
		RuntimeObject* L_39;
		L_39 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 4), L_38);
		V_2 = L_39;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00ea:
			{
				{
					RuntimeObject* L_40 = V_2;
					if (!L_40)
					{
						goto IL_00f3;
					}
				}
				{
					RuntimeObject* L_41 = V_2;
					NullCheck((RuntimeObject*)L_41);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_41);
				}

IL_00f3:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_00e0_1;
			}

IL_00ce_1:
			{
				int32_t L_42 = ___0_index;
				int32_t L_43 = L_42;
				___0_index = ((int32_t)il2cpp_codegen_add(L_43, 1));
				RuntimeObject* L_44 = V_2;
				NullCheck(L_44);
				InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 27), L_44, (Il2CppFullySharedGenericAny*)L_45);
				InvokerActionInvoker2< int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 29)), il2cpp_rgctx_method(method->klass->rgctx_data, 29), __this, L_43, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)) ? L_45: *(void**)L_45));
			}

IL_00e0_1:
			{
				RuntimeObject* L_46 = V_2;
				NullCheck((RuntimeObject*)L_46);
				bool L_47;
				L_47 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_46);
				if (L_47)
				{
					goto IL_00ce_1;
				}
			}
			{
				goto IL_00fb;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00f4:
	{
		RuntimeObject* L_48 = ___1_collection;
		((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(__this, L_48, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
	}

IL_00fb:
	{
		int32_t L_49 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_49, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_m9BCE8CEF94E6F2BF8624D65214FF4F3CA686D60C_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
	int32_t V_0 = 0;
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)) ? ___0_item : &___0_item), SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
		int32_t L_1;
		L_1 = InvokerFuncInvoker1< int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 20)), il2cpp_rgctx_method(method->klass->rgctx_data, 20), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)) ? L_0: *(void**)L_0));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		int32_t L_3 = V_0;
		((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 32)))(__this, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 32));
		return (bool)1;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_System_Collections_IList_Remove_m69B0EB46209420A0DF794AE7598F8C3E02515509_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9));
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
	{
		RuntimeObject* L_0 = ___0_item;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		bool L_1;
		L_1 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 21)))(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_item;
		void* L_4 = UnBox_Any(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 9), L_3);
		bool L_5;
		L_5 = InvokerFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 33)), il2cpp_rgctx_method(method->klass->rgctx_data, 33), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)) ? (((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_4))): *(void**)(((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_4)))));
	}

IL_0015:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_RemoveAll_m64ACE8FD442E00A79160BB070C0133B43A8C4075_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, Predicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107* ___0_match, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9));
	const Il2CppFullySharedGenericAny L_8 = alloca(SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
	const Il2CppFullySharedGenericAny L_20 = L_8;
	const Il2CppFullySharedGenericAny L_31 = L_8;
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		Predicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107* L_0 = ___0_match;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)8, NULL);
	}

IL_0009:
	{
		V_0 = 0;
		goto IL_0011;
	}

IL_000d:
	{
		int32_t L_1 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_1, 1));
	}

IL_0011:
	{
		int32_t L_2 = V_0;
		int32_t L_3 = __this->____size;
		if ((((int32_t)L_2) >= ((int32_t)L_3)))
		{
			goto IL_002e;
		}
	}
	{
		Predicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107* L_4 = ___0_match;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_5 = __this->____items;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		il2cpp_codegen_memcpy(L_8, (L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7)), SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
		NullCheck(L_4);
		bool L_9;
		L_9 = InvokerFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 35)), il2cpp_rgctx_method(method->klass->rgctx_data, 35), L_4, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)) ? L_8: *(void**)L_8));
		if (!L_9)
		{
			goto IL_000d;
		}
	}

IL_002e:
	{
		int32_t L_10 = V_0;
		int32_t L_11 = __this->____size;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_0039;
		}
	}
	{
		return 0;
	}

IL_0039:
	{
		int32_t L_12 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
		goto IL_0089;
	}

IL_003f:
	{
		int32_t L_13 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_0043:
	{
		int32_t L_14 = V_1;
		int32_t L_15 = __this->____size;
		if ((((int32_t)L_14) >= ((int32_t)L_15)))
		{
			goto IL_0060;
		}
	}
	{
		Predicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107* L_16 = ___0_match;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_17 = __this->____items;
		int32_t L_18 = V_1;
		NullCheck(L_17);
		int32_t L_19 = L_18;
		il2cpp_codegen_memcpy(L_20, (L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_19)), SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
		NullCheck(L_16);
		bool L_21;
		L_21 = InvokerFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 35)), il2cpp_rgctx_method(method->klass->rgctx_data, 35), L_16, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)) ? L_20: *(void**)L_20));
		if (L_21)
		{
			goto IL_003f;
		}
	}

IL_0060:
	{
		int32_t L_22 = V_1;
		int32_t L_23 = __this->____size;
		if ((((int32_t)L_22) >= ((int32_t)L_23)))
		{
			goto IL_0089;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_24 = __this->____items;
		int32_t L_25 = V_0;
		int32_t L_26 = L_25;
		V_0 = ((int32_t)il2cpp_codegen_add(L_26, 1));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_27 = __this->____items;
		int32_t L_28 = V_1;
		int32_t L_29 = L_28;
		V_1 = ((int32_t)il2cpp_codegen_add(L_29, 1));
		NullCheck(L_27);
		int32_t L_30 = L_29;
		il2cpp_codegen_memcpy(L_31, (L_27)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_30)), SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
		NullCheck(L_24);
		il2cpp_codegen_memcpy((L_24)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)), L_31, SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->klass->rgctx_data, 9), (void**)(L_24)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)), (void*)L_31);
	}

IL_0089:
	{
		int32_t L_32 = V_1;
		int32_t L_33 = __this->____size;
		if ((((int32_t)L_32) < ((int32_t)L_33)))
		{
			goto IL_0043;
		}
	}
	{
		bool L_34;
		L_34 = il2cpp_codegen_is_reference_or_contains_references(il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		if (!L_34)
		{
			goto IL_00ad;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_35 = __this->____items;
		int32_t L_36 = V_0;
		int32_t L_37 = __this->____size;
		int32_t L_38 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_35, L_36, ((int32_t)il2cpp_codegen_subtract(L_37, L_38)), NULL);
	}

IL_00ad:
	{
		int32_t L_39 = __this->____size;
		int32_t L_40 = V_0;
		int32_t L_41 = V_0;
		__this->____size = L_41;
		int32_t L_42 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_42, 1));
		return ((int32_t)il2cpp_codegen_subtract(L_39, L_40));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_mF6C23E9072D8CBE2872705E7E4D08BDB78770F5C_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9));
	const Il2CppFullySharedGenericAny L_14 = alloca(SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
	memset(V_0, 0, SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRange_IndexException_mC7661B8C6DD827679C95FC6B6C08F8724174936D(NULL);
	}

IL_000e:
	{
		int32_t L_2 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_subtract(L_2, 1));
		int32_t L_3 = ___0_index;
		int32_t L_4 = __this->____size;
		if ((((int32_t)L_3) >= ((int32_t)L_4)))
		{
			goto IL_0042;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_5 = __this->____items;
		int32_t L_6 = ___0_index;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_7 = __this->____items;
		int32_t L_8 = ___0_index;
		int32_t L_9 = __this->____size;
		int32_t L_10 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, ((int32_t)il2cpp_codegen_add(L_6, 1)), (RuntimeArray*)L_7, L_8, ((int32_t)il2cpp_codegen_subtract(L_9, L_10)), NULL);
	}

IL_0042:
	{
		bool L_11;
		L_11 = il2cpp_codegen_is_reference_or_contains_references(il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		if (!L_11)
		{
			goto IL_0063;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_12 = __this->____items;
		int32_t L_13 = __this->____size;
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_0, SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
		il2cpp_codegen_memcpy(L_14, V_0, SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
		NullCheck(L_12);
		il2cpp_codegen_memcpy((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)), L_14, SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->klass->rgctx_data, 9), (void**)(L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)), (void*)L_14);
	}

IL_0063:
	{
		int32_t L_15 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_15, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveRange_mCD6121D4FDE143767E6F0EC89183A9A349884DFF_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, int32_t ___0_index, int32_t ___1_count, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_count;
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F((int32_t)((int32_t)16), (int32_t)4, NULL);
	}

IL_0015:
	{
		int32_t L_2 = __this->____size;
		int32_t L_3 = ___0_index;
		int32_t L_4 = ___1_count;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_2, L_3))) >= ((int32_t)L_4)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)((int32_t)23), NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_count;
		if ((((int32_t)L_5) <= ((int32_t)0)))
		{
			goto IL_008d;
		}
	}
	{
		int32_t L_6 = __this->____size;
		int32_t L_7 = __this->____size;
		int32_t L_8 = ___1_count;
		__this->____size = ((int32_t)il2cpp_codegen_subtract(L_7, L_8));
		int32_t L_9 = ___0_index;
		int32_t L_10 = __this->____size;
		if ((((int32_t)L_9) >= ((int32_t)L_10)))
		{
			goto IL_0066;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_11 = __this->____items;
		int32_t L_12 = ___0_index;
		int32_t L_13 = ___1_count;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_14 = __this->____items;
		int32_t L_15 = ___0_index;
		int32_t L_16 = __this->____size;
		int32_t L_17 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_11, ((int32_t)il2cpp_codegen_add(L_12, L_13)), (RuntimeArray*)L_14, L_15, ((int32_t)il2cpp_codegen_subtract(L_16, L_17)), NULL);
	}

IL_0066:
	{
		int32_t L_18 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_18, 1));
		bool L_19;
		L_19 = il2cpp_codegen_is_reference_or_contains_references(il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		if (!L_19)
		{
			goto IL_008d;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_20 = __this->____items;
		int32_t L_21 = __this->____size;
		int32_t L_22 = ___1_count;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_20, L_21, L_22, NULL);
	}

IL_008d:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Reverse_m31924FC6445F9A1633DA40A8930F89E271B477F2_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = ((  int32_t (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 17)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 17));
		((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 36)))(__this, 0, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 36));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Reverse_m4F224F8A44C29751CCF7ED914FC00BFE7F27CD01_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, int32_t ___0_index, int32_t ___1_count, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_count;
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F((int32_t)((int32_t)16), (int32_t)4, NULL);
	}

IL_0015:
	{
		int32_t L_2 = __this->____size;
		int32_t L_3 = ___0_index;
		int32_t L_4 = ___1_count;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_2, L_3))) >= ((int32_t)L_4)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)((int32_t)23), NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_count;
		if ((((int32_t)L_5) <= ((int32_t)1)))
		{
			goto IL_0038;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_6 = __this->____items;
		int32_t L_7 = ___0_index;
		int32_t L_8 = ___1_count;
		((  void (*) (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 37)))(L_6, L_7, L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 37));
	}

IL_0038:
	{
		int32_t L_9 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_9, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_mCBEFEE4479438557E591F7AEF3BFDE2297DA269D_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = ((  int32_t (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 17)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 17));
		RuntimeObject* L_1 = ___0_comparer;
		((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, int32_t, int32_t, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 39)))(__this, 0, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 39));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_m851B4290E563560C0037434A52D469666ABDE79D_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, int32_t ___0_index, int32_t ___1_count, RuntimeObject* ___2_comparer, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_count;
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F((int32_t)((int32_t)16), (int32_t)4, NULL);
	}

IL_0015:
	{
		int32_t L_2 = __this->____size;
		int32_t L_3 = ___0_index;
		int32_t L_4 = ___1_count;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_2, L_3))) >= ((int32_t)L_4)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)((int32_t)23), NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_count;
		if ((((int32_t)L_5) <= ((int32_t)1)))
		{
			goto IL_0039;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_6 = __this->____items;
		int32_t L_7 = ___0_index;
		int32_t L_8 = ___1_count;
		RuntimeObject* L_9 = ___2_comparer;
		((  void (*) (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, int32_t, int32_t, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 40)))(L_6, L_7, L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 40));
	}

IL_0039:
	{
		int32_t L_10 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_10, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_mF939EF9300267AF108323ABAECB490A27894309B_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, Comparison_1_tE94B5C4AE59DE10B7A54AD7C3291462A05D5CD49* ___0_comparison, const RuntimeMethod* method) 
{
	{
		Comparison_1_tE94B5C4AE59DE10B7A54AD7C3291462A05D5CD49* L_0 = ___0_comparison;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)((int32_t)34), NULL);
	}

IL_000a:
	{
		int32_t L_1 = __this->____size;
		if ((((int32_t)L_1) <= ((int32_t)1)))
		{
			goto IL_0026;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_2 = __this->____items;
		int32_t L_3 = __this->____size;
		Comparison_1_tE94B5C4AE59DE10B7A54AD7C3291462A05D5CD49* L_4 = ___0_comparison;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 43));
		((  void (*) (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, int32_t, int32_t, Comparison_1_tE94B5C4AE59DE10B7A54AD7C3291462A05D5CD49*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 42)))(L_2, 0, L_3, L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 42));
	}

IL_0026:
	{
		int32_t L_5 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_5, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* List_1_ToArray_m5160526E5983BD8ED24DFFE47C33B141C1B3187A_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, const RuntimeMethod* method) 
{
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* V_0 = NULL;
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_1 = ((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 2)))->___s_emptyArray;
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____size;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_3 = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_2);
		V_0 = L_3;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_4 = __this->____items;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_5 = V_0;
		int32_t L_6 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_4, 0, (RuntimeArray*)L_5, 0, L_6, NULL);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_7 = V_0;
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddEnumerable_mFD4E2919839A27C7CEACADF62222C63701302D02_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, RuntimeObject* ___0_enumerable, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9));
	const Il2CppFullySharedGenericAny L_6 = alloca(SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
	const Il2CppFullySharedGenericAny L_14 = L_6;
	RuntimeObject* V_0 = NULL;
	Il2CppFullySharedGenericAny V_1 = alloca(SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
	memset(V_1, 0, SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
	int32_t V_2 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		RuntimeObject* L_1 = ___0_enumerable;
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 4), L_1);
		V_0 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0063:
			{
				{
					RuntimeObject* L_3 = V_0;
					if (!L_3)
					{
						goto IL_006c;
					}
				}
				{
					RuntimeObject* L_4 = V_0;
					NullCheck((RuntimeObject*)L_4);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_4);
				}

IL_006c:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_0059_1;
			}

IL_0017_1:
			{
				RuntimeObject* L_5 = V_0;
				NullCheck(L_5);
				InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 27), L_5, (Il2CppFullySharedGenericAny*)L_6);
				il2cpp_codegen_memcpy(V_1, L_6, SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
				int32_t L_7 = __this->____size;
				__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_8 = __this->____items;
				NullCheck(L_8);
				if ((!(((uint32_t)L_7) == ((uint32_t)((int32_t)(((RuntimeArray*)L_8)->max_length))))))
				{
					goto IL_003c_1;
				}
			}
			{
				int32_t L_9 = __this->____size;
				((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)))(__this, ((int32_t)il2cpp_codegen_add(L_9, 1)), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
			}

IL_003c_1:
			{
				__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_10 = __this->____items;
				int32_t L_11 = __this->____size;
				V_2 = L_11;
				int32_t L_12 = V_2;
				__this->____size = ((int32_t)il2cpp_codegen_add(L_12, 1));
				int32_t L_13 = V_2;
				il2cpp_codegen_memcpy(L_14, V_1, SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
				NullCheck(L_10);
				il2cpp_codegen_memcpy((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)), L_14, SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
				Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->klass->rgctx_data, 9), (void**)(L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)), (void*)L_14);
			}

IL_0059_1:
			{
				RuntimeObject* L_15 = V_0;
				NullCheck((RuntimeObject*)L_15);
				bool L_16;
				L_16 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_15);
				if (L_16)
				{
					goto IL_0017_1;
				}
			}
			{
				goto IL_006d;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_006d:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__cctor_mFBD61154F711CE4EF252AA0B8B504EFC3E7E5B37_gshared (const RuntimeMethod* method) 
{
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)SZArrayNew(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 3), (uint32_t)0);
		((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___s_emptyArray = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___s_emptyArray), (void*)L_0);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mF5CCF832B2A17822B9C64E78D9814190165C1D7B_gshared (List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		OrderBlockU5BU5D_tD67C39FB212889AFAAB991BE1AE144ED8D35EE88* L_0 = ((List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 2)))->___s_emptyArray;
		__this->____items = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m3F4723F3305F67834CE85E425907F53C7AB30484_gshared (List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0012;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F((int32_t)((int32_t)12), (int32_t)4, NULL);
	}

IL_0012:
	{
		int32_t L_1 = ___0_capacity;
		if (L_1)
		{
			goto IL_0021;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		OrderBlockU5BU5D_tD67C39FB212889AFAAB991BE1AE144ED8D35EE88* L_2 = ((List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 2)))->___s_emptyArray;
		__this->____items = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_2);
		return;
	}

IL_0021:
	{
		int32_t L_3 = ___0_capacity;
		OrderBlockU5BU5D_tD67C39FB212889AFAAB991BE1AE144ED8D35EE88* L_4 = (OrderBlockU5BU5D_tD67C39FB212889AFAAB991BE1AE144ED8D35EE88*)(OrderBlockU5BU5D_tD67C39FB212889AFAAB991BE1AE144ED8D35EE88*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_3);
		__this->____items = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_4);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m704785946C26F21A75CF1D70A2DF69E177349DEC_gshared (List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	int32_t V_1 = 0;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		RuntimeObject* L_0 = ___0_collection;
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)6, NULL);
	}

IL_000f:
	{
		RuntimeObject* L_1 = ___0_collection;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_1, il2cpp_rgctx_data(method->klass->rgctx_data, 5)));
		RuntimeObject* L_2 = V_0;
		if (!L_2)
		{
			goto IL_0050;
		}
	}
	{
		RuntimeObject* L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 5), L_3);
		V_1 = L_4;
		int32_t L_5 = V_1;
		if (L_5)
		{
			goto IL_002f;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		OrderBlockU5BU5D_tD67C39FB212889AFAAB991BE1AE144ED8D35EE88* L_6 = ((List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 2)))->___s_emptyArray;
		__this->____items = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_6);
		return;
	}

IL_002f:
	{
		int32_t L_7 = V_1;
		OrderBlockU5BU5D_tD67C39FB212889AFAAB991BE1AE144ED8D35EE88* L_8 = (OrderBlockU5BU5D_tD67C39FB212889AFAAB991BE1AE144ED8D35EE88*)(OrderBlockU5BU5D_tD67C39FB212889AFAAB991BE1AE144ED8D35EE88*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_7);
		__this->____items = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_8);
		RuntimeObject* L_9 = V_0;
		OrderBlockU5BU5D_tD67C39FB212889AFAAB991BE1AE144ED8D35EE88* L_10 = __this->____items;
		NullCheck(L_9);
		InterfaceActionInvoker2< OrderBlockU5BU5D_tD67C39FB212889AFAAB991BE1AE144ED8D35EE88*, int32_t >::Invoke(5, il2cpp_rgctx_data(method->klass->rgctx_data, 5), L_9, L_10, 0);
		int32_t L_11 = V_1;
		__this->____size = L_11;
		return;
	}

IL_0050:
	{
		__this->____size = 0;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		OrderBlockU5BU5D_tD67C39FB212889AFAAB991BE1AE144ED8D35EE88* L_12 = ((List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 2)))->___s_emptyArray;
		__this->____items = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_12);
		RuntimeObject* L_13 = ___0_collection;
		List_1_AddEnumerable_mA6E73354873BEAC5429A80AE43CB210589A7EC7E(__this, L_13, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Capacity_mC49015D45A78A39909C4541BDB84DAA369E6A4C1_gshared (List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	OrderBlockU5BU5D_tD67C39FB212889AFAAB991BE1AE144ED8D35EE88* V_0 = NULL;
	{
		int32_t L_0 = ___0_value;
		int32_t L_1 = __this->____size;
		if ((((int32_t)L_0) >= ((int32_t)L_1)))
		{
			goto IL_0012;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F((int32_t)((int32_t)15), (int32_t)((int32_t)21), NULL);
	}

IL_0012:
	{
		int32_t L_2 = ___0_value;
		OrderBlockU5BU5D_tD67C39FB212889AFAAB991BE1AE144ED8D35EE88* L_3 = __this->____items;
		NullCheck(L_3);
		if ((((int32_t)L_2) == ((int32_t)((int32_t)(((RuntimeArray*)L_3)->max_length)))))
		{
			goto IL_0058;
		}
	}
	{
		int32_t L_4 = ___0_value;
		if ((((int32_t)L_4) <= ((int32_t)0)))
		{
			goto IL_004d;
		}
	}
	{
		int32_t L_5 = ___0_value;
		OrderBlockU5BU5D_tD67C39FB212889AFAAB991BE1AE144ED8D35EE88* L_6 = (OrderBlockU5BU5D_tD67C39FB212889AFAAB991BE1AE144ED8D35EE88*)(OrderBlockU5BU5D_tD67C39FB212889AFAAB991BE1AE144ED8D35EE88*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_5);
		V_0 = L_6;
		int32_t L_7 = __this->____size;
		if ((((int32_t)L_7) <= ((int32_t)0)))
		{
			goto IL_0045;
		}
	}
	{
		OrderBlockU5BU5D_tD67C39FB212889AFAAB991BE1AE144ED8D35EE88* L_8 = __this->____items;
		OrderBlockU5BU5D_tD67C39FB212889AFAAB991BE1AE144ED8D35EE88* L_9 = V_0;
		int32_t L_10 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_8, 0, (RuntimeArray*)L_9, 0, L_10, NULL);
	}

IL_0045:
	{
		OrderBlockU5BU5D_tD67C39FB212889AFAAB991BE1AE144ED8D35EE88* L_11 = V_0;
		__this->____items = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_11);
		return;
	}

IL_004d:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		OrderBlockU5BU5D_tD67C39FB212889AFAAB991BE1AE144ED8D35EE88* L_12 = ((List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 2)))->___s_emptyArray;
		__this->____items = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_12);
	}

IL_0058:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m905EB6FD0B91CEE1CC0165F1EBB8C1309AEE4BEC_gshared (List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_mBED108A047B825499042EC8A2431574F954E5A1E_gshared (List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_System_Collections_IList_get_IsReadOnly_m6C1F6CE05082E4FB4A2F6D416FC3061FDDA22A58_gshared (List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_System_Collections_ICollection_get_SyncRoot_m220D863F6533A08A7363BF166DA7009AD0717998_gshared (List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____syncRoot;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject** L_1 = (RuntimeObject**)(&__this->____syncRoot);
		RuntimeObject* L_2 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_2, NULL);
		RuntimeObject* L_3;
		L_3 = InterlockedCompareExchangeImpl<RuntimeObject*>(L_1, L_2, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = __this->____syncRoot;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837 List_1_get_Item_mB65D799560ADD289EA08E717412A24EFADA7FB57_gshared (List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRange_IndexException_mC7661B8C6DD827679C95FC6B6C08F8724174936D(NULL);
	}

IL_000e:
	{
		OrderBlockU5BU5D_tD67C39FB212889AFAAB991BE1AE144ED8D35EE88* L_2 = __this->____items;
		int32_t L_3 = ___0_index;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837 L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Item_m7533012D6C4CE083D5CAF670259B97F6D5D506F4_gshared (List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A* __this, int32_t ___0_index, OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837 ___1_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRange_IndexException_mC7661B8C6DD827679C95FC6B6C08F8724174936D(NULL);
	}

IL_000e:
	{
		OrderBlockU5BU5D_tD67C39FB212889AFAAB991BE1AE144ED8D35EE88* L_2 = __this->____items;
		int32_t L_3 = ___0_index;
		OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837 L_4 = ___1_value;
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(L_3), (OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837)L_4);
		int32_t L_5 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_5, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_IsCompatibleObject_mA2F95E82C59734A475035EF3B9DD4BCE9F8429DB_gshared (RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_value;
		if (((RuntimeObject*)IsInst((RuntimeObject*)L_0, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 9))))
		{
			goto IL_001f;
		}
	}
	{
		RuntimeObject* L_1 = ___0_value;
		if (L_1)
		{
			goto IL_001d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837));
		OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837 L_2 = V_0;
		return false;
	}

IL_001d:
	{
		return (bool)0;
	}

IL_001f:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_System_Collections_IList_get_Item_m1E70F596E00E1A551FAA8FBC581829AC9F9C5380_gshared (List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837 L_1;
		L_1 = List_1_get_Item_mB65D799560ADD289EA08E717412A24EFADA7FB57(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837 L_2 = L_1;
		RuntimeObject* L_3 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9), &L_2);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_System_Collections_IList_set_Item_m1DA92BD10C1F7E8C92A5ADDC41B5B59E38B45DEC_gshared (List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A* __this, int32_t ___0_index, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeObject* L_0 = ___1_value;
		ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisOrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837_m054615FD6A62EE7702B344B2E24BA8423FEF9621(L_0, (int32_t)((int32_t)15), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
	}
	try
	{
		int32_t L_1 = ___0_index;
		RuntimeObject* L_2 = ___1_value;
		List_1_set_Item_m7533012D6C4CE083D5CAF670259B97F6D5D506F4(__this, L_1, ((*(OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837*)((OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837*)(OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 9))))), il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		goto IL_002a;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0017;
		}
		throw e;
	}

CATCH_0017:
	{
		RuntimeObject* L_3 = ___1_value;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_4 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 13)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_5;
		L_5 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_4, NULL);
		ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_3, L_5, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_002a;
	}

IL_002a:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mB308EE5BFFD89A7B8C251644D76CA547456F3012_gshared (List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A* __this, OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837 ___0_item, const RuntimeMethod* method) 
{
	OrderBlockU5BU5D_tD67C39FB212889AFAAB991BE1AE144ED8D35EE88* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		OrderBlockU5BU5D_tD67C39FB212889AFAAB991BE1AE144ED8D35EE88* L_1 = __this->____items;
		V_0 = L_1;
		int32_t L_2 = __this->____size;
		V_1 = L_2;
		int32_t L_3 = V_1;
		OrderBlockU5BU5D_tD67C39FB212889AFAAB991BE1AE144ED8D35EE88* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_5, 1));
		OrderBlockU5BU5D_tD67C39FB212889AFAAB991BE1AE144ED8D35EE88* L_6 = V_0;
		int32_t L_7 = V_1;
		OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837 L_8 = ___0_item;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837)L_8);
		return;
	}

IL_0034:
	{
		OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837 L_9 = ___0_item;
		List_1_AddWithResize_m8B3D79788ADC2B54C9B12CC9EC1158E6A04CDEBC(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void List_1_AddWithResize_m8B3D79788ADC2B54C9B12CC9EC1158E6A04CDEBC_gshared (List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A* __this, OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837 ___0_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____size;
		V_0 = L_0;
		int32_t L_1 = V_0;
		List_1_EnsureCapacity_mB6EB012362AA419CAA8BF0C488F1010486273A69(__this, ((int32_t)il2cpp_codegen_add(L_1, 1)), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		int32_t L_2 = V_0;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_2, 1));
		OrderBlockU5BU5D_tD67C39FB212889AFAAB991BE1AE144ED8D35EE88* L_3 = __this->____items;
		int32_t L_4 = V_0;
		OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837 L_5 = ___0_item;
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(L_4), (OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837)L_5);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_System_Collections_IList_Add_mAC1736DC5831C59BD64FC09C14F03AF5B9802CBF_gshared (List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeObject* L_0 = ___0_item;
		ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisOrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837_m054615FD6A62EE7702B344B2E24BA8423FEF9621(L_0, (int32_t)((int32_t)20), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
	}
	try
	{
		RuntimeObject* L_1 = ___0_item;
		List_1_Add_mB308EE5BFFD89A7B8C251644D76CA547456F3012_inline(__this, ((*(OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837*)((OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837*)(OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837*)UnBox(L_1, il2cpp_rgctx_data(method->klass->rgctx_data, 9))))), il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		goto IL_0029;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0016;
		}
		throw e;
	}

CATCH_0016:
	{
		RuntimeObject* L_2 = ___0_item;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 13)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_2, L_4, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0029;
	}

IL_0029:
	{
		int32_t L_5;
		L_5 = List_1_get_Count_m905EB6FD0B91CEE1CC0165F1EBB8C1309AEE4BEC_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 17));
		return ((int32_t)il2cpp_codegen_subtract(L_5, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddRange_m4C28D7F5EE927CF1E9858BE460EA4DFB7F5D3AFA_gshared (List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		RuntimeObject* L_1 = ___0_collection;
		List_1_InsertRange_m9AA9E2C5627FB6CD9F3493CA8A99588EDA08125D(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Clear_mFCE2A5F0F23BC41E5B1E6F8ABA41D99A8A5AABA9_gshared (List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
	}
	{
		int32_t L_1 = __this->____size;
		V_0 = L_1;
		__this->____size = 0;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		OrderBlockU5BU5D_tD67C39FB212889AFAAB991BE1AE144ED8D35EE88* L_3 = __this->____items;
		int32_t L_4 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_3, 0, L_4, NULL);
		return;
	}

IL_003c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_m590D7926DA2B45C95850710F87644BCD235F1A70_gshared (List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A* __this, OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837 ___0_item, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837 L_1 = ___0_item;
		int32_t L_2;
		L_2 = List_1_IndexOf_mFA6A5CD427374237339591ED8A5218B6E7EA7F4C(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		return (bool)((((int32_t)((((int32_t)L_2) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0016:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_System_Collections_IList_Contains_m04EF9F1B5EB5475A55429F987420A7AE443BE0BB_gshared (List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_item;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		bool L_1;
		L_1 = List_1_IsCompatibleObject_mA2F95E82C59734A475035EF3B9DD4BCE9F8429DB(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_item;
		bool L_3;
		L_3 = List_1_Contains_m590D7926DA2B45C95850710F87644BCD235F1A70(__this, ((*(OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837*)((OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837*)(OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 9))))), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_CopyTo_m901F0963BA82CF65FCD89C086C5D7B3ABA3765C2_gshared (List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A* __this, OrderBlockU5BU5D_tD67C39FB212889AFAAB991BE1AE144ED8D35EE88* ___0_array, const RuntimeMethod* method) 
{
	{
		OrderBlockU5BU5D_tD67C39FB212889AFAAB991BE1AE144ED8D35EE88* L_0 = ___0_array;
		List_1_CopyTo_m96F4BF1E6FF691338A44AAB62506964ACAD70715(__this, L_0, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_System_Collections_ICollection_CopyTo_mB2933E53E11C20CD8D22EF6328C1D9FB7595BA9E_gshared (List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A* __this, RuntimeArray* ___0_array, int32_t ___1_arrayIndex, const RuntimeMethod* method) 
{
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		RuntimeArray* L_1 = ___0_array;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(L_1, NULL);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0012;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)7, NULL);
	}

IL_0012:
	{
	}
	try
	{
		OrderBlockU5BU5D_tD67C39FB212889AFAAB991BE1AE144ED8D35EE88* L_3 = __this->____items;
		RuntimeArray* L_4 = ___0_array;
		int32_t L_5 = ___1_arrayIndex;
		int32_t L_6 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_3, 0, L_4, L_5, L_6, NULL);
		goto IL_0031;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0029;
		}
		throw e;
	}

CATCH_0029:
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0031;
	}

IL_0031:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_CopyTo_m96F4BF1E6FF691338A44AAB62506964ACAD70715_gshared (List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A* __this, OrderBlockU5BU5D_tD67C39FB212889AFAAB991BE1AE144ED8D35EE88* ___0_array, int32_t ___1_arrayIndex, const RuntimeMethod* method) 
{
	{
		OrderBlockU5BU5D_tD67C39FB212889AFAAB991BE1AE144ED8D35EE88* L_0 = __this->____items;
		OrderBlockU5BU5D_tD67C39FB212889AFAAB991BE1AE144ED8D35EE88* L_1 = ___0_array;
		int32_t L_2 = ___1_arrayIndex;
		int32_t L_3 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_0, 0, (RuntimeArray*)L_1, L_2, L_3, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_EnsureCapacity_mB6EB012362AA419CAA8BF0C488F1010486273A69_gshared (List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A* __this, int32_t ___0_min, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t G_B4_0 = 0;
	{
		OrderBlockU5BU5D_tD67C39FB212889AFAAB991BE1AE144ED8D35EE88* L_0 = __this->____items;
		NullCheck(L_0);
		int32_t L_1 = ___0_min;
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length))) >= ((int32_t)L_1)))
		{
			goto IL_003d;
		}
	}
	{
		OrderBlockU5BU5D_tD67C39FB212889AFAAB991BE1AE144ED8D35EE88* L_2 = __this->____items;
		NullCheck(L_2);
		if (!(((RuntimeArray*)L_2)->max_length))
		{
			goto IL_0020;
		}
	}
	{
		OrderBlockU5BU5D_tD67C39FB212889AFAAB991BE1AE144ED8D35EE88* L_3 = __this->____items;
		NullCheck(L_3);
		G_B4_0 = ((int32_t)il2cpp_codegen_multiply(((int32_t)(((RuntimeArray*)L_3)->max_length)), 2));
		goto IL_0021;
	}

IL_0020:
	{
		G_B4_0 = 4;
	}

IL_0021:
	{
		V_0 = G_B4_0;
		int32_t L_4 = V_0;
		if ((!(((uint32_t)L_4) > ((uint32_t)((int32_t)2146435071)))))
		{
			goto IL_0030;
		}
	}
	{
		V_0 = ((int32_t)2146435071);
	}

IL_0030:
	{
		int32_t L_5 = V_0;
		int32_t L_6 = ___0_min;
		if ((((int32_t)L_5) >= ((int32_t)L_6)))
		{
			goto IL_0036;
		}
	}
	{
		int32_t L_7 = ___0_min;
		V_0 = L_7;
	}

IL_0036:
	{
		int32_t L_8 = V_0;
		List_1_set_Capacity_mC49015D45A78A39909C4541BDB84DAA369E6A4C1(__this, L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 24));
	}

IL_003d:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t389EF10F90069ED924478E5694DFE1BB5CBCF251 List_1_GetEnumerator_mBE57F88655594CAF946932CCDC95E8773FC4C4A6_gshared (List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t389EF10F90069ED924478E5694DFE1BB5CBCF251 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mCAD56839187542C3B25E2C1493BBD62861333E4E((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m8956517C0AA90A843C73167BF6CF0156995ADB13_gshared (List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t389EF10F90069ED924478E5694DFE1BB5CBCF251 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mCAD56839187542C3B25E2C1493BBD62861333E4E((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		Enumerator_t389EF10F90069ED924478E5694DFE1BB5CBCF251 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 25), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_System_Collections_IEnumerable_GetEnumerator_m8D77CF72C1A81595B4557A40BD1877C3EC630AA3_gshared (List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t389EF10F90069ED924478E5694DFE1BB5CBCF251 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mCAD56839187542C3B25E2C1493BBD62861333E4E((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		Enumerator_t389EF10F90069ED924478E5694DFE1BB5CBCF251 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 25), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_IndexOf_mFA6A5CD427374237339591ED8A5218B6E7EA7F4C_gshared (List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A* __this, OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837 ___0_item, const RuntimeMethod* method) 
{
	{
		OrderBlockU5BU5D_tD67C39FB212889AFAAB991BE1AE144ED8D35EE88* L_0 = __this->____items;
		OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837 L_1 = ___0_item;
		int32_t L_2 = __this->____size;
		int32_t L_3;
		L_3 = Array_IndexOf_TisOrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837_m972A3CE5298A6193E512B34C64201444B051D8E9(L_0, L_1, 0, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_System_Collections_IList_IndexOf_m3FAB7DEDF1376DCB40FF595ECE24A82D09D133E9_gshared (List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_item;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		bool L_1;
		L_1 = List_1_IsCompatibleObject_mA2F95E82C59734A475035EF3B9DD4BCE9F8429DB(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_item;
		int32_t L_3;
		L_3 = List_1_IndexOf_mFA6A5CD427374237339591ED8A5218B6E7EA7F4C(__this, ((*(OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837*)((OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837*)(OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 9))))), il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		return L_3;
	}

IL_0015:
	{
		return (-1);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Insert_mF138D66498A5DE06E21A7149C35FA14729F4F5E1_gshared (List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A* __this, int32_t ___0_index, OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837 ___1_item, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_0012;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F((int32_t)((int32_t)13), (int32_t)((int32_t)27), NULL);
	}

IL_0012:
	{
		int32_t L_2 = __this->____size;
		OrderBlockU5BU5D_tD67C39FB212889AFAAB991BE1AE144ED8D35EE88* L_3 = __this->____items;
		NullCheck(L_3);
		if ((!(((uint32_t)L_2) == ((uint32_t)((int32_t)(((RuntimeArray*)L_3)->max_length))))))
		{
			goto IL_0030;
		}
	}
	{
		int32_t L_4 = __this->____size;
		List_1_EnsureCapacity_mB6EB012362AA419CAA8BF0C488F1010486273A69(__this, ((int32_t)il2cpp_codegen_add(L_4, 1)), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
	}

IL_0030:
	{
		int32_t L_5 = ___0_index;
		int32_t L_6 = __this->____size;
		if ((((int32_t)L_5) >= ((int32_t)L_6)))
		{
			goto IL_0056;
		}
	}
	{
		OrderBlockU5BU5D_tD67C39FB212889AFAAB991BE1AE144ED8D35EE88* L_7 = __this->____items;
		int32_t L_8 = ___0_index;
		OrderBlockU5BU5D_tD67C39FB212889AFAAB991BE1AE144ED8D35EE88* L_9 = __this->____items;
		int32_t L_10 = ___0_index;
		int32_t L_11 = __this->____size;
		int32_t L_12 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_7, L_8, (RuntimeArray*)L_9, ((int32_t)il2cpp_codegen_add(L_10, 1)), ((int32_t)il2cpp_codegen_subtract(L_11, L_12)), NULL);
	}

IL_0056:
	{
		OrderBlockU5BU5D_tD67C39FB212889AFAAB991BE1AE144ED8D35EE88* L_13 = __this->____items;
		int32_t L_14 = ___0_index;
		OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837 L_15 = ___1_item;
		NullCheck(L_13);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(L_14), (OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837)L_15);
		int32_t L_16 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_16, 1));
		int32_t L_17 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_17, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_System_Collections_IList_Insert_m22B1E1E9ABC66027ABDF98D71BAC7AE153F67C15_gshared (List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A* __this, int32_t ___0_index, RuntimeObject* ___1_item, const RuntimeMethod* method) 
{
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeObject* L_0 = ___1_item;
		ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisOrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837_m054615FD6A62EE7702B344B2E24BA8423FEF9621(L_0, (int32_t)((int32_t)20), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
	}
	try
	{
		int32_t L_1 = ___0_index;
		RuntimeObject* L_2 = ___1_item;
		List_1_Insert_mF138D66498A5DE06E21A7149C35FA14729F4F5E1(__this, L_1, ((*(OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837*)((OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837*)(OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 9))))), il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		goto IL_002a;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0017;
		}
		throw e;
	}

CATCH_0017:
	{
		RuntimeObject* L_3 = ___1_item;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_4 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 13)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_5;
		L_5 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_4, NULL);
		ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_3, L_5, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_002a;
	}

IL_002a:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_InsertRange_m9AA9E2C5627FB6CD9F3493CA8A99588EDA08125D_gshared (List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A* __this, int32_t ___0_index, RuntimeObject* ___1_collection, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	int32_t V_1 = 0;
	RuntimeObject* V_2 = NULL;
	{
		RuntimeObject* L_0 = ___1_collection;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)6, NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___0_index;
		int32_t L_2 = __this->____size;
		if ((!(((uint32_t)L_1) > ((uint32_t)L_2))))
		{
			goto IL_0017;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRange_IndexException_mC7661B8C6DD827679C95FC6B6C08F8724174936D(NULL);
	}

IL_0017:
	{
		RuntimeObject* L_3 = ___1_collection;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_3, il2cpp_rgctx_data(method->klass->rgctx_data, 5)));
		RuntimeObject* L_4 = V_0;
		if (!L_4)
		{
			goto IL_00bc;
		}
	}
	{
		RuntimeObject* L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 5), L_5);
		V_1 = L_6;
		int32_t L_7 = V_1;
		if ((((int32_t)L_7) <= ((int32_t)0)))
		{
			goto IL_00fb;
		}
	}
	{
		int32_t L_8 = __this->____size;
		int32_t L_9 = V_1;
		List_1_EnsureCapacity_mB6EB012362AA419CAA8BF0C488F1010486273A69(__this, ((int32_t)il2cpp_codegen_add(L_8, L_9)), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		int32_t L_10 = ___0_index;
		int32_t L_11 = __this->____size;
		if ((((int32_t)L_10) >= ((int32_t)L_11)))
		{
			goto IL_0066;
		}
	}
	{
		OrderBlockU5BU5D_tD67C39FB212889AFAAB991BE1AE144ED8D35EE88* L_12 = __this->____items;
		int32_t L_13 = ___0_index;
		OrderBlockU5BU5D_tD67C39FB212889AFAAB991BE1AE144ED8D35EE88* L_14 = __this->____items;
		int32_t L_15 = ___0_index;
		int32_t L_16 = V_1;
		int32_t L_17 = __this->____size;
		int32_t L_18 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_12, L_13, (RuntimeArray*)L_14, ((int32_t)il2cpp_codegen_add(L_15, L_16)), ((int32_t)il2cpp_codegen_subtract(L_17, L_18)), NULL);
	}

IL_0066:
	{
		RuntimeObject* L_19 = V_0;
		if ((!(((RuntimeObject*)(List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A*)__this) == ((RuntimeObject*)(RuntimeObject*)L_19))))
		{
			goto IL_009f;
		}
	}
	{
		OrderBlockU5BU5D_tD67C39FB212889AFAAB991BE1AE144ED8D35EE88* L_20 = __this->____items;
		OrderBlockU5BU5D_tD67C39FB212889AFAAB991BE1AE144ED8D35EE88* L_21 = __this->____items;
		int32_t L_22 = ___0_index;
		int32_t L_23 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_20, 0, (RuntimeArray*)L_21, L_22, L_23, NULL);
		OrderBlockU5BU5D_tD67C39FB212889AFAAB991BE1AE144ED8D35EE88* L_24 = __this->____items;
		int32_t L_25 = ___0_index;
		int32_t L_26 = V_1;
		OrderBlockU5BU5D_tD67C39FB212889AFAAB991BE1AE144ED8D35EE88* L_27 = __this->____items;
		int32_t L_28 = ___0_index;
		int32_t L_29 = __this->____size;
		int32_t L_30 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_24, ((int32_t)il2cpp_codegen_add(L_25, L_26)), (RuntimeArray*)L_27, ((int32_t)il2cpp_codegen_multiply(L_28, 2)), ((int32_t)il2cpp_codegen_subtract(L_29, L_30)), NULL);
		goto IL_00ac;
	}

IL_009f:
	{
		RuntimeObject* L_31 = V_0;
		OrderBlockU5BU5D_tD67C39FB212889AFAAB991BE1AE144ED8D35EE88* L_32 = __this->____items;
		int32_t L_33 = ___0_index;
		NullCheck(L_31);
		InterfaceActionInvoker2< OrderBlockU5BU5D_tD67C39FB212889AFAAB991BE1AE144ED8D35EE88*, int32_t >::Invoke(5, il2cpp_rgctx_data(method->klass->rgctx_data, 5), L_31, L_32, L_33);
	}

IL_00ac:
	{
		int32_t L_34 = __this->____size;
		int32_t L_35 = V_1;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_34, L_35));
		goto IL_00fb;
	}

IL_00bc:
	{
		int32_t L_36 = ___0_index;
		int32_t L_37 = __this->____size;
		if ((((int32_t)L_36) >= ((int32_t)L_37)))
		{
			goto IL_00f4;
		}
	}
	{
		RuntimeObject* L_38 = ___1_collection;
		NullCheck(L_38);
		RuntimeObject* L_39;
		L_39 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 4), L_38);
		V_2 = L_39;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00ea:
			{
				{
					RuntimeObject* L_40 = V_2;
					if (!L_40)
					{
						goto IL_00f3;
					}
				}
				{
					RuntimeObject* L_41 = V_2;
					NullCheck((RuntimeObject*)L_41);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_41);
				}

IL_00f3:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_00e0_1;
			}

IL_00ce_1:
			{
				int32_t L_42 = ___0_index;
				int32_t L_43 = L_42;
				___0_index = ((int32_t)il2cpp_codegen_add(L_43, 1));
				RuntimeObject* L_44 = V_2;
				NullCheck(L_44);
				OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837 L_45;
				L_45 = InterfaceFuncInvoker0< OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837 >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 27), L_44);
				List_1_Insert_mF138D66498A5DE06E21A7149C35FA14729F4F5E1(__this, L_43, L_45, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
			}

IL_00e0_1:
			{
				RuntimeObject* L_46 = V_2;
				NullCheck((RuntimeObject*)L_46);
				bool L_47;
				L_47 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_46);
				if (L_47)
				{
					goto IL_00ce_1;
				}
			}
			{
				goto IL_00fb;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00f4:
	{
		RuntimeObject* L_48 = ___1_collection;
		List_1_AddEnumerable_mA6E73354873BEAC5429A80AE43CB210589A7EC7E(__this, L_48, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
	}

IL_00fb:
	{
		int32_t L_49 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_49, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_m02DCEAFFE826B31F80767A9D191CB4587D82F7BC_gshared (List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A* __this, OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837 ___0_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837 L_0 = ___0_item;
		int32_t L_1;
		L_1 = List_1_IndexOf_mFA6A5CD427374237339591ED8A5218B6E7EA7F4C(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		int32_t L_3 = V_0;
		List_1_RemoveAt_m30CC1D4CA1984DCAEDBCD2228B538A0503AF854A(__this, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 32));
		return (bool)1;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_System_Collections_IList_Remove_m2E22ECF19C2591E73B083E2B26EED5B2E4B8B3BB_gshared (List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_item;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		bool L_1;
		L_1 = List_1_IsCompatibleObject_mA2F95E82C59734A475035EF3B9DD4BCE9F8429DB(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_item;
		bool L_3;
		L_3 = List_1_Remove_m02DCEAFFE826B31F80767A9D191CB4587D82F7BC(__this, ((*(OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837*)((OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837*)(OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 9))))), il2cpp_rgctx_method(method->klass->rgctx_data, 33));
	}

IL_0015:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_RemoveAll_m99F96CEBE01EC91E6838BFE939CF7B3C41D67CAE_gshared (List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A* __this, Predicate_1_t8194F57B81937B278B5EFEF0F5B667BBB054B0D0* ___0_match, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		Predicate_1_t8194F57B81937B278B5EFEF0F5B667BBB054B0D0* L_0 = ___0_match;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)8, NULL);
	}

IL_0009:
	{
		V_0 = 0;
		goto IL_0011;
	}

IL_000d:
	{
		int32_t L_1 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_1, 1));
	}

IL_0011:
	{
		int32_t L_2 = V_0;
		int32_t L_3 = __this->____size;
		if ((((int32_t)L_2) >= ((int32_t)L_3)))
		{
			goto IL_002e;
		}
	}
	{
		Predicate_1_t8194F57B81937B278B5EFEF0F5B667BBB054B0D0* L_4 = ___0_match;
		OrderBlockU5BU5D_tD67C39FB212889AFAAB991BE1AE144ED8D35EE88* L_5 = __this->____items;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837 L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		NullCheck(L_4);
		bool L_9;
		L_9 = Predicate_1_Invoke_m182E0ACAA85455151F5750CE87F942DA6E3DD3D6_inline(L_4, L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 35));
		if (!L_9)
		{
			goto IL_000d;
		}
	}

IL_002e:
	{
		int32_t L_10 = V_0;
		int32_t L_11 = __this->____size;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_0039;
		}
	}
	{
		return 0;
	}

IL_0039:
	{
		int32_t L_12 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
		goto IL_0089;
	}

IL_003f:
	{
		int32_t L_13 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_0043:
	{
		int32_t L_14 = V_1;
		int32_t L_15 = __this->____size;
		if ((((int32_t)L_14) >= ((int32_t)L_15)))
		{
			goto IL_0060;
		}
	}
	{
		Predicate_1_t8194F57B81937B278B5EFEF0F5B667BBB054B0D0* L_16 = ___0_match;
		OrderBlockU5BU5D_tD67C39FB212889AFAAB991BE1AE144ED8D35EE88* L_17 = __this->____items;
		int32_t L_18 = V_1;
		NullCheck(L_17);
		int32_t L_19 = L_18;
		OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837 L_20 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		NullCheck(L_16);
		bool L_21;
		L_21 = Predicate_1_Invoke_m182E0ACAA85455151F5750CE87F942DA6E3DD3D6_inline(L_16, L_20, il2cpp_rgctx_method(method->klass->rgctx_data, 35));
		if (L_21)
		{
			goto IL_003f;
		}
	}

IL_0060:
	{
		int32_t L_22 = V_1;
		int32_t L_23 = __this->____size;
		if ((((int32_t)L_22) >= ((int32_t)L_23)))
		{
			goto IL_0089;
		}
	}
	{
		OrderBlockU5BU5D_tD67C39FB212889AFAAB991BE1AE144ED8D35EE88* L_24 = __this->____items;
		int32_t L_25 = V_0;
		int32_t L_26 = L_25;
		V_0 = ((int32_t)il2cpp_codegen_add(L_26, 1));
		OrderBlockU5BU5D_tD67C39FB212889AFAAB991BE1AE144ED8D35EE88* L_27 = __this->____items;
		int32_t L_28 = V_1;
		int32_t L_29 = L_28;
		V_1 = ((int32_t)il2cpp_codegen_add(L_29, 1));
		NullCheck(L_27);
		int32_t L_30 = L_29;
		OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837 L_31 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_30));
		NullCheck(L_24);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(L_26), (OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837)L_31);
	}

IL_0089:
	{
		int32_t L_32 = V_1;
		int32_t L_33 = __this->____size;
		if ((((int32_t)L_32) < ((int32_t)L_33)))
		{
			goto IL_0043;
		}
	}
	{
	}
	{
		OrderBlockU5BU5D_tD67C39FB212889AFAAB991BE1AE144ED8D35EE88* L_34 = __this->____items;
		int32_t L_35 = V_0;
		int32_t L_36 = __this->____size;
		int32_t L_37 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_34, L_35, ((int32_t)il2cpp_codegen_subtract(L_36, L_37)), NULL);
	}

IL_00ad:
	{
		int32_t L_38 = __this->____size;
		int32_t L_39 = V_0;
		int32_t L_40 = V_0;
		__this->____size = L_40;
		int32_t L_41 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_41, 1));
		return ((int32_t)il2cpp_codegen_subtract(L_38, L_39));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_m30CC1D4CA1984DCAEDBCD2228B538A0503AF854A_gshared (List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRange_IndexException_mC7661B8C6DD827679C95FC6B6C08F8724174936D(NULL);
	}

IL_000e:
	{
		int32_t L_2 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_subtract(L_2, 1));
		int32_t L_3 = ___0_index;
		int32_t L_4 = __this->____size;
		if ((((int32_t)L_3) >= ((int32_t)L_4)))
		{
			goto IL_0042;
		}
	}
	{
		OrderBlockU5BU5D_tD67C39FB212889AFAAB991BE1AE144ED8D35EE88* L_5 = __this->____items;
		int32_t L_6 = ___0_index;
		OrderBlockU5BU5D_tD67C39FB212889AFAAB991BE1AE144ED8D35EE88* L_7 = __this->____items;
		int32_t L_8 = ___0_index;
		int32_t L_9 = __this->____size;
		int32_t L_10 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, ((int32_t)il2cpp_codegen_add(L_6, 1)), (RuntimeArray*)L_7, L_8, ((int32_t)il2cpp_codegen_subtract(L_9, L_10)), NULL);
	}

IL_0042:
	{
	}
	{
		OrderBlockU5BU5D_tD67C39FB212889AFAAB991BE1AE144ED8D35EE88* L_11 = __this->____items;
		int32_t L_12 = __this->____size;
		il2cpp_codegen_initobj((&V_0), sizeof(OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837));
		OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837 L_13 = V_0;
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(L_12), (OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837)L_13);
	}

IL_0063:
	{
		int32_t L_14 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_14, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveRange_mC34416B52737986556034E2111A5817EDEE0C189_gshared (List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A* __this, int32_t ___0_index, int32_t ___1_count, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_count;
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F((int32_t)((int32_t)16), (int32_t)4, NULL);
	}

IL_0015:
	{
		int32_t L_2 = __this->____size;
		int32_t L_3 = ___0_index;
		int32_t L_4 = ___1_count;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_2, L_3))) >= ((int32_t)L_4)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)((int32_t)23), NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_count;
		if ((((int32_t)L_5) <= ((int32_t)0)))
		{
			goto IL_008d;
		}
	}
	{
		int32_t L_6 = __this->____size;
		int32_t L_7 = __this->____size;
		int32_t L_8 = ___1_count;
		__this->____size = ((int32_t)il2cpp_codegen_subtract(L_7, L_8));
		int32_t L_9 = ___0_index;
		int32_t L_10 = __this->____size;
		if ((((int32_t)L_9) >= ((int32_t)L_10)))
		{
			goto IL_0066;
		}
	}
	{
		OrderBlockU5BU5D_tD67C39FB212889AFAAB991BE1AE144ED8D35EE88* L_11 = __this->____items;
		int32_t L_12 = ___0_index;
		int32_t L_13 = ___1_count;
		OrderBlockU5BU5D_tD67C39FB212889AFAAB991BE1AE144ED8D35EE88* L_14 = __this->____items;
		int32_t L_15 = ___0_index;
		int32_t L_16 = __this->____size;
		int32_t L_17 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_11, ((int32_t)il2cpp_codegen_add(L_12, L_13)), (RuntimeArray*)L_14, L_15, ((int32_t)il2cpp_codegen_subtract(L_16, L_17)), NULL);
	}

IL_0066:
	{
		int32_t L_18 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_18, 1));
	}
	{
		OrderBlockU5BU5D_tD67C39FB212889AFAAB991BE1AE144ED8D35EE88* L_19 = __this->____items;
		int32_t L_20 = __this->____size;
		int32_t L_21 = ___1_count;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_19, L_20, L_21, NULL);
	}

IL_008d:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Reverse_mFF087DD699EA7B98F8636ED593ED83D64ABE078F_gshared (List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = List_1_get_Count_m905EB6FD0B91CEE1CC0165F1EBB8C1309AEE4BEC_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 17));
		List_1_Reverse_m5903E8D5CE5B92A29530763E182314BDFA781664(__this, 0, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 36));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Reverse_m5903E8D5CE5B92A29530763E182314BDFA781664_gshared (List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A* __this, int32_t ___0_index, int32_t ___1_count, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_count;
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F((int32_t)((int32_t)16), (int32_t)4, NULL);
	}

IL_0015:
	{
		int32_t L_2 = __this->____size;
		int32_t L_3 = ___0_index;
		int32_t L_4 = ___1_count;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_2, L_3))) >= ((int32_t)L_4)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)((int32_t)23), NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_count;
		if ((((int32_t)L_5) <= ((int32_t)1)))
		{
			goto IL_0038;
		}
	}
	{
		OrderBlockU5BU5D_tD67C39FB212889AFAAB991BE1AE144ED8D35EE88* L_6 = __this->____items;
		int32_t L_7 = ___0_index;
		int32_t L_8 = ___1_count;
		Array_Reverse_TisOrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837_mDCB49D07F30FD9D952124968159FDF346234BD04(L_6, L_7, L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 37));
	}

IL_0038:
	{
		int32_t L_9 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_9, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_mC839D031A5AAA84A68243F93E39544BA3A966203_gshared (List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = List_1_get_Count_m905EB6FD0B91CEE1CC0165F1EBB8C1309AEE4BEC_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 17));
		RuntimeObject* L_1 = ___0_comparer;
		List_1_Sort_mEBED487B845A66E3298CA30654B7EC17F7481995(__this, 0, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 39));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_mEBED487B845A66E3298CA30654B7EC17F7481995_gshared (List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A* __this, int32_t ___0_index, int32_t ___1_count, RuntimeObject* ___2_comparer, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_count;
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F((int32_t)((int32_t)16), (int32_t)4, NULL);
	}

IL_0015:
	{
		int32_t L_2 = __this->____size;
		int32_t L_3 = ___0_index;
		int32_t L_4 = ___1_count;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_2, L_3))) >= ((int32_t)L_4)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)((int32_t)23), NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_count;
		if ((((int32_t)L_5) <= ((int32_t)1)))
		{
			goto IL_0039;
		}
	}
	{
		OrderBlockU5BU5D_tD67C39FB212889AFAAB991BE1AE144ED8D35EE88* L_6 = __this->____items;
		int32_t L_7 = ___0_index;
		int32_t L_8 = ___1_count;
		RuntimeObject* L_9 = ___2_comparer;
		Array_Sort_TisOrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837_m438D9EDDBF93A09C81E89458C2362F85487923EC(L_6, L_7, L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 40));
	}

IL_0039:
	{
		int32_t L_10 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_10, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_m014D10ACC5ECFB795A9812357A6AD9FFF19F3C47_gshared (List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A* __this, Comparison_1_tC8BBA462D5337723AC34773EEE343018753C7FF3* ___0_comparison, const RuntimeMethod* method) 
{
	{
		Comparison_1_tC8BBA462D5337723AC34773EEE343018753C7FF3* L_0 = ___0_comparison;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)((int32_t)34), NULL);
	}

IL_000a:
	{
		int32_t L_1 = __this->____size;
		if ((((int32_t)L_1) <= ((int32_t)1)))
		{
			goto IL_0026;
		}
	}
	{
		OrderBlockU5BU5D_tD67C39FB212889AFAAB991BE1AE144ED8D35EE88* L_2 = __this->____items;
		int32_t L_3 = __this->____size;
		Comparison_1_tC8BBA462D5337723AC34773EEE343018753C7FF3* L_4 = ___0_comparison;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 43));
		ArraySortHelper_1_Sort_m4A8362BBA870329F45001F17310B50E583BFF19F(L_2, 0, L_3, L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 42));
	}

IL_0026:
	{
		int32_t L_5 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_5, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OrderBlockU5BU5D_tD67C39FB212889AFAAB991BE1AE144ED8D35EE88* List_1_ToArray_m5E0DDBEF3289BA470AD71416C050605CE275FF3B_gshared (List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A* __this, const RuntimeMethod* method) 
{
	OrderBlockU5BU5D_tD67C39FB212889AFAAB991BE1AE144ED8D35EE88* V_0 = NULL;
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		OrderBlockU5BU5D_tD67C39FB212889AFAAB991BE1AE144ED8D35EE88* L_1 = ((List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 2)))->___s_emptyArray;
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____size;
		OrderBlockU5BU5D_tD67C39FB212889AFAAB991BE1AE144ED8D35EE88* L_3 = (OrderBlockU5BU5D_tD67C39FB212889AFAAB991BE1AE144ED8D35EE88*)(OrderBlockU5BU5D_tD67C39FB212889AFAAB991BE1AE144ED8D35EE88*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_2);
		V_0 = L_3;
		OrderBlockU5BU5D_tD67C39FB212889AFAAB991BE1AE144ED8D35EE88* L_4 = __this->____items;
		OrderBlockU5BU5D_tD67C39FB212889AFAAB991BE1AE144ED8D35EE88* L_5 = V_0;
		int32_t L_6 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_4, 0, (RuntimeArray*)L_5, 0, L_6, NULL);
		OrderBlockU5BU5D_tD67C39FB212889AFAAB991BE1AE144ED8D35EE88* L_7 = V_0;
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddEnumerable_mA6E73354873BEAC5429A80AE43CB210589A7EC7E_gshared (List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A* __this, RuntimeObject* ___0_enumerable, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		RuntimeObject* L_1 = ___0_enumerable;
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 4), L_1);
		V_0 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0063:
			{
				{
					RuntimeObject* L_3 = V_0;
					if (!L_3)
					{
						goto IL_006c;
					}
				}
				{
					RuntimeObject* L_4 = V_0;
					NullCheck((RuntimeObject*)L_4);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_4);
				}

IL_006c:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_0059_1;
			}

IL_0017_1:
			{
				RuntimeObject* L_5 = V_0;
				NullCheck(L_5);
				OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837 L_6;
				L_6 = InterfaceFuncInvoker0< OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837 >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 27), L_5);
				V_1 = L_6;
				int32_t L_7 = __this->____size;
				OrderBlockU5BU5D_tD67C39FB212889AFAAB991BE1AE144ED8D35EE88* L_8 = __this->____items;
				NullCheck(L_8);
				if ((!(((uint32_t)L_7) == ((uint32_t)((int32_t)(((RuntimeArray*)L_8)->max_length))))))
				{
					goto IL_003c_1;
				}
			}
			{
				int32_t L_9 = __this->____size;
				List_1_EnsureCapacity_mB6EB012362AA419CAA8BF0C488F1010486273A69(__this, ((int32_t)il2cpp_codegen_add(L_9, 1)), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
			}

IL_003c_1:
			{
				OrderBlockU5BU5D_tD67C39FB212889AFAAB991BE1AE144ED8D35EE88* L_10 = __this->____items;
				int32_t L_11 = __this->____size;
				V_2 = L_11;
				int32_t L_12 = V_2;
				__this->____size = ((int32_t)il2cpp_codegen_add(L_12, 1));
				int32_t L_13 = V_2;
				OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837 L_14 = V_1;
				NullCheck(L_10);
				(L_10)->SetAt(static_cast<il2cpp_array_size_t>(L_13), (OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837)L_14);
			}

IL_0059_1:
			{
				RuntimeObject* L_15 = V_0;
				NullCheck((RuntimeObject*)L_15);
				bool L_16;
				L_16 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_15);
				if (L_16)
				{
					goto IL_0017_1;
				}
			}
			{
				goto IL_006d;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_006d:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__cctor_mBA1A334B4DB00D75CD4BF205DE68E28F92477FF0_gshared (const RuntimeMethod* method) 
{
	{
		OrderBlockU5BU5D_tD67C39FB212889AFAAB991BE1AE144ED8D35EE88* L_0 = (OrderBlockU5BU5D_tD67C39FB212889AFAAB991BE1AE144ED8D35EE88*)(OrderBlockU5BU5D_tD67C39FB212889AFAAB991BE1AE144ED8D35EE88*)SZArrayNew(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 3), (uint32_t)0);
		((List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___s_emptyArray = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___s_emptyArray), (void*)L_0);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mFEF8BE0609A5B0185A946E4BE78E3AE078DCDFDF_gshared (List_1_tDB6FA8EDA7A26227B5CA100203EF7BAFA0FDBDDF* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		SingleRangeU5BU5D_t9F938F2249733D85C4F97842A125778D69A843D6* L_0 = ((List_1_tDB6FA8EDA7A26227B5CA100203EF7BAFA0FDBDDF_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 2)))->___s_emptyArray;
		__this->____items = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m9D4C783EADEFE471AE4694A264FC274077D002B4_gshared (List_1_tDB6FA8EDA7A26227B5CA100203EF7BAFA0FDBDDF* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0012;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F((int32_t)((int32_t)12), (int32_t)4, NULL);
	}

IL_0012:
	{
		int32_t L_1 = ___0_capacity;
		if (L_1)
		{
			goto IL_0021;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		SingleRangeU5BU5D_t9F938F2249733D85C4F97842A125778D69A843D6* L_2 = ((List_1_tDB6FA8EDA7A26227B5CA100203EF7BAFA0FDBDDF_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 2)))->___s_emptyArray;
		__this->____items = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_2);
		return;
	}

IL_0021:
	{
		int32_t L_3 = ___0_capacity;
		SingleRangeU5BU5D_t9F938F2249733D85C4F97842A125778D69A843D6* L_4 = (SingleRangeU5BU5D_t9F938F2249733D85C4F97842A125778D69A843D6*)(SingleRangeU5BU5D_t9F938F2249733D85C4F97842A125778D69A843D6*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_3);
		__this->____items = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_4);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m9B0EBFC1936470C69C4E10C853BDA10392BBB663_gshared (List_1_tDB6FA8EDA7A26227B5CA100203EF7BAFA0FDBDDF* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	int32_t V_1 = 0;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		RuntimeObject* L_0 = ___0_collection;
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)6, NULL);
	}

IL_000f:
	{
		RuntimeObject* L_1 = ___0_collection;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_1, il2cpp_rgctx_data(method->klass->rgctx_data, 5)));
		RuntimeObject* L_2 = V_0;
		if (!L_2)
		{
			goto IL_0050;
		}
	}
	{
		RuntimeObject* L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 5), L_3);
		V_1 = L_4;
		int32_t L_5 = V_1;
		if (L_5)
		{
			goto IL_002f;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		SingleRangeU5BU5D_t9F938F2249733D85C4F97842A125778D69A843D6* L_6 = ((List_1_tDB6FA8EDA7A26227B5CA100203EF7BAFA0FDBDDF_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 2)))->___s_emptyArray;
		__this->____items = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_6);
		return;
	}

IL_002f:
	{
		int32_t L_7 = V_1;
		SingleRangeU5BU5D_t9F938F2249733D85C4F97842A125778D69A843D6* L_8 = (SingleRangeU5BU5D_t9F938F2249733D85C4F97842A125778D69A843D6*)(SingleRangeU5BU5D_t9F938F2249733D85C4F97842A125778D69A843D6*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_7);
		__this->____items = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_8);
		RuntimeObject* L_9 = V_0;
		SingleRangeU5BU5D_t9F938F2249733D85C4F97842A125778D69A843D6* L_10 = __this->____items;
		NullCheck(L_9);
		InterfaceActionInvoker2< SingleRangeU5BU5D_t9F938F2249733D85C4F97842A125778D69A843D6*, int32_t >::Invoke(5, il2cpp_rgctx_data(method->klass->rgctx_data, 5), L_9, L_10, 0);
		int32_t L_11 = V_1;
		__this->____size = L_11;
		return;
	}

IL_0050:
	{
		__this->____size = 0;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		SingleRangeU5BU5D_t9F938F2249733D85C4F97842A125778D69A843D6* L_12 = ((List_1_tDB6FA8EDA7A26227B5CA100203EF7BAFA0FDBDDF_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 2)))->___s_emptyArray;
		__this->____items = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_12);
		RuntimeObject* L_13 = ___0_collection;
		List_1_AddEnumerable_mDF2147E522AD80A7B6A79CF8E7F00EC7DBF8A032(__this, L_13, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Capacity_m40FE27C2AB4F6F5F863957210FA90C1BF581D293_gshared (List_1_tDB6FA8EDA7A26227B5CA100203EF7BAFA0FDBDDF* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	SingleRangeU5BU5D_t9F938F2249733D85C4F97842A125778D69A843D6* V_0 = NULL;
	{
		int32_t L_0 = ___0_value;
		int32_t L_1 = __this->____size;
		if ((((int32_t)L_0) >= ((int32_t)L_1)))
		{
			goto IL_0012;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F((int32_t)((int32_t)15), (int32_t)((int32_t)21), NULL);
	}

IL_0012:
	{
		int32_t L_2 = ___0_value;
		SingleRangeU5BU5D_t9F938F2249733D85C4F97842A125778D69A843D6* L_3 = __this->____items;
		NullCheck(L_3);
		if ((((int32_t)L_2) == ((int32_t)((int32_t)(((RuntimeArray*)L_3)->max_length)))))
		{
			goto IL_0058;
		}
	}
	{
		int32_t L_4 = ___0_value;
		if ((((int32_t)L_4) <= ((int32_t)0)))
		{
			goto IL_004d;
		}
	}
	{
		int32_t L_5 = ___0_value;
		SingleRangeU5BU5D_t9F938F2249733D85C4F97842A125778D69A843D6* L_6 = (SingleRangeU5BU5D_t9F938F2249733D85C4F97842A125778D69A843D6*)(SingleRangeU5BU5D_t9F938F2249733D85C4F97842A125778D69A843D6*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_5);
		V_0 = L_6;
		int32_t L_7 = __this->____size;
		if ((((int32_t)L_7) <= ((int32_t)0)))
		{
			goto IL_0045;
		}
	}
	{
		SingleRangeU5BU5D_t9F938F2249733D85C4F97842A125778D69A843D6* L_8 = __this->____items;
		SingleRangeU5BU5D_t9F938F2249733D85C4F97842A125778D69A843D6* L_9 = V_0;
		int32_t L_10 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_8, 0, (RuntimeArray*)L_9, 0, L_10, NULL);
	}

IL_0045:
	{
		SingleRangeU5BU5D_t9F938F2249733D85C4F97842A125778D69A843D6* L_11 = V_0;
		__this->____items = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_11);
		return;
	}

IL_004d:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		SingleRangeU5BU5D_t9F938F2249733D85C4F97842A125778D69A843D6* L_12 = ((List_1_tDB6FA8EDA7A26227B5CA100203EF7BAFA0FDBDDF_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 2)))->___s_emptyArray;
		__this->____items = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_12);
	}

IL_0058:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mF3540C84790DAB9D381F00753BA20A85694C3446_gshared (List_1_tDB6FA8EDA7A26227B5CA100203EF7BAFA0FDBDDF* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m822C3C1C1A45E2F95780EF9170EEEC8BDB72A42A_gshared (List_1_tDB6FA8EDA7A26227B5CA100203EF7BAFA0FDBDDF* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_System_Collections_IList_get_IsReadOnly_mC73F97533663A2940520ECD601A07775A683F622_gshared (List_1_tDB6FA8EDA7A26227B5CA100203EF7BAFA0FDBDDF* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_System_Collections_ICollection_get_SyncRoot_mACA969D1E637325E64B895FFA84FF8DBB882724B_gshared (List_1_tDB6FA8EDA7A26227B5CA100203EF7BAFA0FDBDDF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____syncRoot;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject** L_1 = (RuntimeObject**)(&__this->____syncRoot);
		RuntimeObject* L_2 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_2, NULL);
		RuntimeObject* L_3;
		L_3 = InterlockedCompareExchangeImpl<RuntimeObject*>(L_1, L_2, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = __this->____syncRoot;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC List_1_get_Item_mAAE7FBDBD94CC48BA01C01ACFC3C66EE219110D0_gshared (List_1_tDB6FA8EDA7A26227B5CA100203EF7BAFA0FDBDDF* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRange_IndexException_mC7661B8C6DD827679C95FC6B6C08F8724174936D(NULL);
	}

IL_000e:
	{
		SingleRangeU5BU5D_t9F938F2249733D85C4F97842A125778D69A843D6* L_2 = __this->____items;
		int32_t L_3 = ___0_index;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Item_m58893707EC3B663186D1550A23DE96C818416CBD_gshared (List_1_tDB6FA8EDA7A26227B5CA100203EF7BAFA0FDBDDF* __this, int32_t ___0_index, SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC ___1_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRange_IndexException_mC7661B8C6DD827679C95FC6B6C08F8724174936D(NULL);
	}

IL_000e:
	{
		SingleRangeU5BU5D_t9F938F2249733D85C4F97842A125778D69A843D6* L_2 = __this->____items;
		int32_t L_3 = ___0_index;
		SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC L_4 = ___1_value;
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(L_3), (SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC)L_4);
		int32_t L_5 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_5, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_IsCompatibleObject_mC9CB5EB21839923C050E6922FE7050867F374865_gshared (RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_value;
		if (((RuntimeObject*)IsInst((RuntimeObject*)L_0, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 9))))
		{
			goto IL_001f;
		}
	}
	{
		RuntimeObject* L_1 = ___0_value;
		if (L_1)
		{
			goto IL_001d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC));
		SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC L_2 = V_0;
		return false;
	}

IL_001d:
	{
		return (bool)0;
	}

IL_001f:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_System_Collections_IList_get_Item_m328466F241E01D12C4560BF873B0DCB364184FAC_gshared (List_1_tDB6FA8EDA7A26227B5CA100203EF7BAFA0FDBDDF* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC L_1;
		L_1 = List_1_get_Item_mAAE7FBDBD94CC48BA01C01ACFC3C66EE219110D0(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC L_2 = L_1;
		RuntimeObject* L_3 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9), &L_2);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_System_Collections_IList_set_Item_mC8AC62D168434E9AB15DF194B4259FE7913CD978_gshared (List_1_tDB6FA8EDA7A26227B5CA100203EF7BAFA0FDBDDF* __this, int32_t ___0_index, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeObject* L_0 = ___1_value;
		ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisSingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC_m85CB6FEF509A4859399929F09F545FA1133C3051(L_0, (int32_t)((int32_t)15), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
	}
	try
	{
		int32_t L_1 = ___0_index;
		RuntimeObject* L_2 = ___1_value;
		List_1_set_Item_m58893707EC3B663186D1550A23DE96C818416CBD(__this, L_1, ((*(SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC*)((SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC*)(SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 9))))), il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		goto IL_002a;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0017;
		}
		throw e;
	}

CATCH_0017:
	{
		RuntimeObject* L_3 = ___1_value;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_4 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 13)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_5;
		L_5 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_4, NULL);
		ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_3, L_5, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_002a;
	}

IL_002a:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_m624C469B79ADC28E429B7A3CA96DA72345621643_gshared (List_1_tDB6FA8EDA7A26227B5CA100203EF7BAFA0FDBDDF* __this, SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC ___0_item, const RuntimeMethod* method) 
{
	SingleRangeU5BU5D_t9F938F2249733D85C4F97842A125778D69A843D6* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		SingleRangeU5BU5D_t9F938F2249733D85C4F97842A125778D69A843D6* L_1 = __this->____items;
		V_0 = L_1;
		int32_t L_2 = __this->____size;
		V_1 = L_2;
		int32_t L_3 = V_1;
		SingleRangeU5BU5D_t9F938F2249733D85C4F97842A125778D69A843D6* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_5, 1));
		SingleRangeU5BU5D_t9F938F2249733D85C4F97842A125778D69A843D6* L_6 = V_0;
		int32_t L_7 = V_1;
		SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC L_8 = ___0_item;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC)L_8);
		return;
	}

IL_0034:
	{
		SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC L_9 = ___0_item;
		List_1_AddWithResize_m594A4155F206677F45ECD9AAE7E9EFD0AE6137ED(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void List_1_AddWithResize_m594A4155F206677F45ECD9AAE7E9EFD0AE6137ED_gshared (List_1_tDB6FA8EDA7A26227B5CA100203EF7BAFA0FDBDDF* __this, SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC ___0_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____size;
		V_0 = L_0;
		int32_t L_1 = V_0;
		List_1_EnsureCapacity_m1A140613D2D236E9CF413F81D549E39415DF0058(__this, ((int32_t)il2cpp_codegen_add(L_1, 1)), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		int32_t L_2 = V_0;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_2, 1));
		SingleRangeU5BU5D_t9F938F2249733D85C4F97842A125778D69A843D6* L_3 = __this->____items;
		int32_t L_4 = V_0;
		SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC L_5 = ___0_item;
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(L_4), (SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC)L_5);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_System_Collections_IList_Add_mA3942A650A2BBD4285AB8BCB8F6E3C9AC3C4C6C4_gshared (List_1_tDB6FA8EDA7A26227B5CA100203EF7BAFA0FDBDDF* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeObject* L_0 = ___0_item;
		ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisSingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC_m85CB6FEF509A4859399929F09F545FA1133C3051(L_0, (int32_t)((int32_t)20), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
	}
	try
	{
		RuntimeObject* L_1 = ___0_item;
		List_1_Add_m624C469B79ADC28E429B7A3CA96DA72345621643_inline(__this, ((*(SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC*)((SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC*)(SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC*)UnBox(L_1, il2cpp_rgctx_data(method->klass->rgctx_data, 9))))), il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		goto IL_0029;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0016;
		}
		throw e;
	}

CATCH_0016:
	{
		RuntimeObject* L_2 = ___0_item;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 13)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_2, L_4, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0029;
	}

IL_0029:
	{
		int32_t L_5;
		L_5 = List_1_get_Count_mF3540C84790DAB9D381F00753BA20A85694C3446_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 17));
		return ((int32_t)il2cpp_codegen_subtract(L_5, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddRange_m6C9383E6FC71D115A5C539DD079A91E2472A7DB0_gshared (List_1_tDB6FA8EDA7A26227B5CA100203EF7BAFA0FDBDDF* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		RuntimeObject* L_1 = ___0_collection;
		List_1_InsertRange_m8C743BAB2CDB84037FE830DF12A8B561EFEEEA60(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Clear_m21752AD1C5AFF444A40956A05C1AC41FB9F88DCB_gshared (List_1_tDB6FA8EDA7A26227B5CA100203EF7BAFA0FDBDDF* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		goto IL_0035;
	}

IL_0035:
	{
		__this->____size = 0;
	}

IL_003c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_mA5832B215E464CAC8345E7ECC45562E884AE146D_gshared (List_1_tDB6FA8EDA7A26227B5CA100203EF7BAFA0FDBDDF* __this, SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC ___0_item, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC L_1 = ___0_item;
		int32_t L_2;
		L_2 = List_1_IndexOf_mF5A7DA78EA07100BDE8044CA37C505F36AD7ACB1(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		return (bool)((((int32_t)((((int32_t)L_2) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0016:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_System_Collections_IList_Contains_mED517429468C156C8F8C5608555F8420C755EEF1_gshared (List_1_tDB6FA8EDA7A26227B5CA100203EF7BAFA0FDBDDF* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_item;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		bool L_1;
		L_1 = List_1_IsCompatibleObject_mC9CB5EB21839923C050E6922FE7050867F374865(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_item;
		bool L_3;
		L_3 = List_1_Contains_mA5832B215E464CAC8345E7ECC45562E884AE146D(__this, ((*(SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC*)((SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC*)(SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 9))))), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_CopyTo_m3BE7B292C99B3D90B11E5E2B982FC38BEDB111F1_gshared (List_1_tDB6FA8EDA7A26227B5CA100203EF7BAFA0FDBDDF* __this, SingleRangeU5BU5D_t9F938F2249733D85C4F97842A125778D69A843D6* ___0_array, const RuntimeMethod* method) 
{
	{
		SingleRangeU5BU5D_t9F938F2249733D85C4F97842A125778D69A843D6* L_0 = ___0_array;
		List_1_CopyTo_m15B9FC56E0418F730FC3A37C8E482F7108D73B62(__this, L_0, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_System_Collections_ICollection_CopyTo_mAACFB6ECDBAA2A5F6B154D4F3CCC28E9B4BA781E_gshared (List_1_tDB6FA8EDA7A26227B5CA100203EF7BAFA0FDBDDF* __this, RuntimeArray* ___0_array, int32_t ___1_arrayIndex, const RuntimeMethod* method) 
{
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		RuntimeArray* L_1 = ___0_array;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(L_1, NULL);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0012;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)7, NULL);
	}

IL_0012:
	{
	}
	try
	{
		SingleRangeU5BU5D_t9F938F2249733D85C4F97842A125778D69A843D6* L_3 = __this->____items;
		RuntimeArray* L_4 = ___0_array;
		int32_t L_5 = ___1_arrayIndex;
		int32_t L_6 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_3, 0, L_4, L_5, L_6, NULL);
		goto IL_0031;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0029;
		}
		throw e;
	}

CATCH_0029:
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0031;
	}

IL_0031:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_CopyTo_m15B9FC56E0418F730FC3A37C8E482F7108D73B62_gshared (List_1_tDB6FA8EDA7A26227B5CA100203EF7BAFA0FDBDDF* __this, SingleRangeU5BU5D_t9F938F2249733D85C4F97842A125778D69A843D6* ___0_array, int32_t ___1_arrayIndex, const RuntimeMethod* method) 
{
	{
		SingleRangeU5BU5D_t9F938F2249733D85C4F97842A125778D69A843D6* L_0 = __this->____items;
		SingleRangeU5BU5D_t9F938F2249733D85C4F97842A125778D69A843D6* L_1 = ___0_array;
		int32_t L_2 = ___1_arrayIndex;
		int32_t L_3 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_0, 0, (RuntimeArray*)L_1, L_2, L_3, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_EnsureCapacity_m1A140613D2D236E9CF413F81D549E39415DF0058_gshared (List_1_tDB6FA8EDA7A26227B5CA100203EF7BAFA0FDBDDF* __this, int32_t ___0_min, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t G_B4_0 = 0;
	{
		SingleRangeU5BU5D_t9F938F2249733D85C4F97842A125778D69A843D6* L_0 = __this->____items;
		NullCheck(L_0);
		int32_t L_1 = ___0_min;
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length))) >= ((int32_t)L_1)))
		{
			goto IL_003d;
		}
	}
	{
		SingleRangeU5BU5D_t9F938F2249733D85C4F97842A125778D69A843D6* L_2 = __this->____items;
		NullCheck(L_2);
		if (!(((RuntimeArray*)L_2)->max_length))
		{
			goto IL_0020;
		}
	}
	{
		SingleRangeU5BU5D_t9F938F2249733D85C4F97842A125778D69A843D6* L_3 = __this->____items;
		NullCheck(L_3);
		G_B4_0 = ((int32_t)il2cpp_codegen_multiply(((int32_t)(((RuntimeArray*)L_3)->max_length)), 2));
		goto IL_0021;
	}

IL_0020:
	{
		G_B4_0 = 4;
	}

IL_0021:
	{
		V_0 = G_B4_0;
		int32_t L_4 = V_0;
		if ((!(((uint32_t)L_4) > ((uint32_t)((int32_t)2146435071)))))
		{
			goto IL_0030;
		}
	}
	{
		V_0 = ((int32_t)2146435071);
	}

IL_0030:
	{
		int32_t L_5 = V_0;
		int32_t L_6 = ___0_min;
		if ((((int32_t)L_5) >= ((int32_t)L_6)))
		{
			goto IL_0036;
		}
	}
	{
		int32_t L_7 = ___0_min;
		V_0 = L_7;
	}

IL_0036:
	{
		int32_t L_8 = V_0;
		List_1_set_Capacity_m40FE27C2AB4F6F5F863957210FA90C1BF581D293(__this, L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 24));
	}

IL_003d:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t59E02176F2EE4E264A4750514AA127E2E21FF5D9 List_1_GetEnumerator_mAAAF1FE8DEBF77859AC0663A4C794BB8570C9930_gshared (List_1_tDB6FA8EDA7A26227B5CA100203EF7BAFA0FDBDDF* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t59E02176F2EE4E264A4750514AA127E2E21FF5D9 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m159144864209387AA18DEABE7B7985388F8F3452((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_mBCEC03D60D1DB36D692026A18BEB259489900E5C_gshared (List_1_tDB6FA8EDA7A26227B5CA100203EF7BAFA0FDBDDF* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t59E02176F2EE4E264A4750514AA127E2E21FF5D9 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m159144864209387AA18DEABE7B7985388F8F3452((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		Enumerator_t59E02176F2EE4E264A4750514AA127E2E21FF5D9 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 25), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_System_Collections_IEnumerable_GetEnumerator_m2720314B086456588769D3DE8AFB012759038C96_gshared (List_1_tDB6FA8EDA7A26227B5CA100203EF7BAFA0FDBDDF* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t59E02176F2EE4E264A4750514AA127E2E21FF5D9 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m159144864209387AA18DEABE7B7985388F8F3452((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		Enumerator_t59E02176F2EE4E264A4750514AA127E2E21FF5D9 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 25), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_IndexOf_mF5A7DA78EA07100BDE8044CA37C505F36AD7ACB1_gshared (List_1_tDB6FA8EDA7A26227B5CA100203EF7BAFA0FDBDDF* __this, SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC ___0_item, const RuntimeMethod* method) 
{
	{
		SingleRangeU5BU5D_t9F938F2249733D85C4F97842A125778D69A843D6* L_0 = __this->____items;
		SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC L_1 = ___0_item;
		int32_t L_2 = __this->____size;
		int32_t L_3;
		L_3 = Array_IndexOf_TisSingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC_m5A2EB67A073F2BFF5B3DCDDBD15D75BC3CFB909C(L_0, L_1, 0, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_System_Collections_IList_IndexOf_mB8E1E8E1A197395AD882409A03CD6F2D4B9BE328_gshared (List_1_tDB6FA8EDA7A26227B5CA100203EF7BAFA0FDBDDF* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_item;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		bool L_1;
		L_1 = List_1_IsCompatibleObject_mC9CB5EB21839923C050E6922FE7050867F374865(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_item;
		int32_t L_3;
		L_3 = List_1_IndexOf_mF5A7DA78EA07100BDE8044CA37C505F36AD7ACB1(__this, ((*(SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC*)((SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC*)(SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 9))))), il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		return L_3;
	}

IL_0015:
	{
		return (-1);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Insert_mC8E7189F3D9D95975CFE821AC3B560B2EA7AB7A8_gshared (List_1_tDB6FA8EDA7A26227B5CA100203EF7BAFA0FDBDDF* __this, int32_t ___0_index, SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC ___1_item, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_0012;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F((int32_t)((int32_t)13), (int32_t)((int32_t)27), NULL);
	}

IL_0012:
	{
		int32_t L_2 = __this->____size;
		SingleRangeU5BU5D_t9F938F2249733D85C4F97842A125778D69A843D6* L_3 = __this->____items;
		NullCheck(L_3);
		if ((!(((uint32_t)L_2) == ((uint32_t)((int32_t)(((RuntimeArray*)L_3)->max_length))))))
		{
			goto IL_0030;
		}
	}
	{
		int32_t L_4 = __this->____size;
		List_1_EnsureCapacity_m1A140613D2D236E9CF413F81D549E39415DF0058(__this, ((int32_t)il2cpp_codegen_add(L_4, 1)), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
	}

IL_0030:
	{
		int32_t L_5 = ___0_index;
		int32_t L_6 = __this->____size;
		if ((((int32_t)L_5) >= ((int32_t)L_6)))
		{
			goto IL_0056;
		}
	}
	{
		SingleRangeU5BU5D_t9F938F2249733D85C4F97842A125778D69A843D6* L_7 = __this->____items;
		int32_t L_8 = ___0_index;
		SingleRangeU5BU5D_t9F938F2249733D85C4F97842A125778D69A843D6* L_9 = __this->____items;
		int32_t L_10 = ___0_index;
		int32_t L_11 = __this->____size;
		int32_t L_12 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_7, L_8, (RuntimeArray*)L_9, ((int32_t)il2cpp_codegen_add(L_10, 1)), ((int32_t)il2cpp_codegen_subtract(L_11, L_12)), NULL);
	}

IL_0056:
	{
		SingleRangeU5BU5D_t9F938F2249733D85C4F97842A125778D69A843D6* L_13 = __this->____items;
		int32_t L_14 = ___0_index;
		SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC L_15 = ___1_item;
		NullCheck(L_13);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(L_14), (SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC)L_15);
		int32_t L_16 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_16, 1));
		int32_t L_17 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_17, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_System_Collections_IList_Insert_mBD8DBA214029319A0AED43030E4EDE7B27E12C6A_gshared (List_1_tDB6FA8EDA7A26227B5CA100203EF7BAFA0FDBDDF* __this, int32_t ___0_index, RuntimeObject* ___1_item, const RuntimeMethod* method) 
{
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeObject* L_0 = ___1_item;
		ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisSingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC_m85CB6FEF509A4859399929F09F545FA1133C3051(L_0, (int32_t)((int32_t)20), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
	}
	try
	{
		int32_t L_1 = ___0_index;
		RuntimeObject* L_2 = ___1_item;
		List_1_Insert_mC8E7189F3D9D95975CFE821AC3B560B2EA7AB7A8(__this, L_1, ((*(SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC*)((SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC*)(SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 9))))), il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		goto IL_002a;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0017;
		}
		throw e;
	}

CATCH_0017:
	{
		RuntimeObject* L_3 = ___1_item;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_4 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 13)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_5;
		L_5 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_4, NULL);
		ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_3, L_5, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_002a;
	}

IL_002a:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_InsertRange_m8C743BAB2CDB84037FE830DF12A8B561EFEEEA60_gshared (List_1_tDB6FA8EDA7A26227B5CA100203EF7BAFA0FDBDDF* __this, int32_t ___0_index, RuntimeObject* ___1_collection, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	int32_t V_1 = 0;
	RuntimeObject* V_2 = NULL;
	{
		RuntimeObject* L_0 = ___1_collection;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)6, NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___0_index;
		int32_t L_2 = __this->____size;
		if ((!(((uint32_t)L_1) > ((uint32_t)L_2))))
		{
			goto IL_0017;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRange_IndexException_mC7661B8C6DD827679C95FC6B6C08F8724174936D(NULL);
	}

IL_0017:
	{
		RuntimeObject* L_3 = ___1_collection;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_3, il2cpp_rgctx_data(method->klass->rgctx_data, 5)));
		RuntimeObject* L_4 = V_0;
		if (!L_4)
		{
			goto IL_00bc;
		}
	}
	{
		RuntimeObject* L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 5), L_5);
		V_1 = L_6;
		int32_t L_7 = V_1;
		if ((((int32_t)L_7) <= ((int32_t)0)))
		{
			goto IL_00fb;
		}
	}
	{
		int32_t L_8 = __this->____size;
		int32_t L_9 = V_1;
		List_1_EnsureCapacity_m1A140613D2D236E9CF413F81D549E39415DF0058(__this, ((int32_t)il2cpp_codegen_add(L_8, L_9)), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		int32_t L_10 = ___0_index;
		int32_t L_11 = __this->____size;
		if ((((int32_t)L_10) >= ((int32_t)L_11)))
		{
			goto IL_0066;
		}
	}
	{
		SingleRangeU5BU5D_t9F938F2249733D85C4F97842A125778D69A843D6* L_12 = __this->____items;
		int32_t L_13 = ___0_index;
		SingleRangeU5BU5D_t9F938F2249733D85C4F97842A125778D69A843D6* L_14 = __this->____items;
		int32_t L_15 = ___0_index;
		int32_t L_16 = V_1;
		int32_t L_17 = __this->____size;
		int32_t L_18 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_12, L_13, (RuntimeArray*)L_14, ((int32_t)il2cpp_codegen_add(L_15, L_16)), ((int32_t)il2cpp_codegen_subtract(L_17, L_18)), NULL);
	}

IL_0066:
	{
		RuntimeObject* L_19 = V_0;
		if ((!(((RuntimeObject*)(List_1_tDB6FA8EDA7A26227B5CA100203EF7BAFA0FDBDDF*)__this) == ((RuntimeObject*)(RuntimeObject*)L_19))))
		{
			goto IL_009f;
		}
	}
	{
		SingleRangeU5BU5D_t9F938F2249733D85C4F97842A125778D69A843D6* L_20 = __this->____items;
		SingleRangeU5BU5D_t9F938F2249733D85C4F97842A125778D69A843D6* L_21 = __this->____items;
		int32_t L_22 = ___0_index;
		int32_t L_23 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_20, 0, (RuntimeArray*)L_21, L_22, L_23, NULL);
		SingleRangeU5BU5D_t9F938F2249733D85C4F97842A125778D69A843D6* L_24 = __this->____items;
		int32_t L_25 = ___0_index;
		int32_t L_26 = V_1;
		SingleRangeU5BU5D_t9F938F2249733D85C4F97842A125778D69A843D6* L_27 = __this->____items;
		int32_t L_28 = ___0_index;
		int32_t L_29 = __this->____size;
		int32_t L_30 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_24, ((int32_t)il2cpp_codegen_add(L_25, L_26)), (RuntimeArray*)L_27, ((int32_t)il2cpp_codegen_multiply(L_28, 2)), ((int32_t)il2cpp_codegen_subtract(L_29, L_30)), NULL);
		goto IL_00ac;
	}

IL_009f:
	{
		RuntimeObject* L_31 = V_0;
		SingleRangeU5BU5D_t9F938F2249733D85C4F97842A125778D69A843D6* L_32 = __this->____items;
		int32_t L_33 = ___0_index;
		NullCheck(L_31);
		InterfaceActionInvoker2< SingleRangeU5BU5D_t9F938F2249733D85C4F97842A125778D69A843D6*, int32_t >::Invoke(5, il2cpp_rgctx_data(method->klass->rgctx_data, 5), L_31, L_32, L_33);
	}

IL_00ac:
	{
		int32_t L_34 = __this->____size;
		int32_t L_35 = V_1;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_34, L_35));
		goto IL_00fb;
	}

IL_00bc:
	{
		int32_t L_36 = ___0_index;
		int32_t L_37 = __this->____size;
		if ((((int32_t)L_36) >= ((int32_t)L_37)))
		{
			goto IL_00f4;
		}
	}
	{
		RuntimeObject* L_38 = ___1_collection;
		NullCheck(L_38);
		RuntimeObject* L_39;
		L_39 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 4), L_38);
		V_2 = L_39;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00ea:
			{
				{
					RuntimeObject* L_40 = V_2;
					if (!L_40)
					{
						goto IL_00f3;
					}
				}
				{
					RuntimeObject* L_41 = V_2;
					NullCheck((RuntimeObject*)L_41);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_41);
				}

IL_00f3:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_00e0_1;
			}

IL_00ce_1:
			{
				int32_t L_42 = ___0_index;
				int32_t L_43 = L_42;
				___0_index = ((int32_t)il2cpp_codegen_add(L_43, 1));
				RuntimeObject* L_44 = V_2;
				NullCheck(L_44);
				SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC L_45;
				L_45 = InterfaceFuncInvoker0< SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 27), L_44);
				List_1_Insert_mC8E7189F3D9D95975CFE821AC3B560B2EA7AB7A8(__this, L_43, L_45, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
			}

IL_00e0_1:
			{
				RuntimeObject* L_46 = V_2;
				NullCheck((RuntimeObject*)L_46);
				bool L_47;
				L_47 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_46);
				if (L_47)
				{
					goto IL_00ce_1;
				}
			}
			{
				goto IL_00fb;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00f4:
	{
		RuntimeObject* L_48 = ___1_collection;
		List_1_AddEnumerable_mDF2147E522AD80A7B6A79CF8E7F00EC7DBF8A032(__this, L_48, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
	}

IL_00fb:
	{
		int32_t L_49 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_49, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_mA8E72E7CFB72101AA88E01A84F746ECBD8E91B3F_gshared (List_1_tDB6FA8EDA7A26227B5CA100203EF7BAFA0FDBDDF* __this, SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC ___0_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC L_0 = ___0_item;
		int32_t L_1;
		L_1 = List_1_IndexOf_mF5A7DA78EA07100BDE8044CA37C505F36AD7ACB1(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		int32_t L_3 = V_0;
		List_1_RemoveAt_m911F1AFFA59FD181BA9363E0B6C8B5B95067EC3B(__this, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 32));
		return (bool)1;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_System_Collections_IList_Remove_mF11CDACF173F28EBB282A0E10465306215533D69_gshared (List_1_tDB6FA8EDA7A26227B5CA100203EF7BAFA0FDBDDF* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_item;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		bool L_1;
		L_1 = List_1_IsCompatibleObject_mC9CB5EB21839923C050E6922FE7050867F374865(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_item;
		bool L_3;
		L_3 = List_1_Remove_mA8E72E7CFB72101AA88E01A84F746ECBD8E91B3F(__this, ((*(SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC*)((SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC*)(SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 9))))), il2cpp_rgctx_method(method->klass->rgctx_data, 33));
	}

IL_0015:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_RemoveAll_m942EE1B1849CFF13050D5AC9C5543626606E41FD_gshared (List_1_tDB6FA8EDA7A26227B5CA100203EF7BAFA0FDBDDF* __this, Predicate_1_t107748E0E0D2277266234EAF67AC068394C4351C* ___0_match, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		Predicate_1_t107748E0E0D2277266234EAF67AC068394C4351C* L_0 = ___0_match;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)8, NULL);
	}

IL_0009:
	{
		V_0 = 0;
		goto IL_0011;
	}

IL_000d:
	{
		int32_t L_1 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_1, 1));
	}

IL_0011:
	{
		int32_t L_2 = V_0;
		int32_t L_3 = __this->____size;
		if ((((int32_t)L_2) >= ((int32_t)L_3)))
		{
			goto IL_002e;
		}
	}
	{
		Predicate_1_t107748E0E0D2277266234EAF67AC068394C4351C* L_4 = ___0_match;
		SingleRangeU5BU5D_t9F938F2249733D85C4F97842A125778D69A843D6* L_5 = __this->____items;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		NullCheck(L_4);
		bool L_9;
		L_9 = Predicate_1_Invoke_mADD6CFDE192E3E822D5296926054ED8A41DB09C4_inline(L_4, L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 35));
		if (!L_9)
		{
			goto IL_000d;
		}
	}

IL_002e:
	{
		int32_t L_10 = V_0;
		int32_t L_11 = __this->____size;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_0039;
		}
	}
	{
		return 0;
	}

IL_0039:
	{
		int32_t L_12 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
		goto IL_0089;
	}

IL_003f:
	{
		int32_t L_13 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_0043:
	{
		int32_t L_14 = V_1;
		int32_t L_15 = __this->____size;
		if ((((int32_t)L_14) >= ((int32_t)L_15)))
		{
			goto IL_0060;
		}
	}
	{
		Predicate_1_t107748E0E0D2277266234EAF67AC068394C4351C* L_16 = ___0_match;
		SingleRangeU5BU5D_t9F938F2249733D85C4F97842A125778D69A843D6* L_17 = __this->____items;
		int32_t L_18 = V_1;
		NullCheck(L_17);
		int32_t L_19 = L_18;
		SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC L_20 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		NullCheck(L_16);
		bool L_21;
		L_21 = Predicate_1_Invoke_mADD6CFDE192E3E822D5296926054ED8A41DB09C4_inline(L_16, L_20, il2cpp_rgctx_method(method->klass->rgctx_data, 35));
		if (L_21)
		{
			goto IL_003f;
		}
	}

IL_0060:
	{
		int32_t L_22 = V_1;
		int32_t L_23 = __this->____size;
		if ((((int32_t)L_22) >= ((int32_t)L_23)))
		{
			goto IL_0089;
		}
	}
	{
		SingleRangeU5BU5D_t9F938F2249733D85C4F97842A125778D69A843D6* L_24 = __this->____items;
		int32_t L_25 = V_0;
		int32_t L_26 = L_25;
		V_0 = ((int32_t)il2cpp_codegen_add(L_26, 1));
		SingleRangeU5BU5D_t9F938F2249733D85C4F97842A125778D69A843D6* L_27 = __this->____items;
		int32_t L_28 = V_1;
		int32_t L_29 = L_28;
		V_1 = ((int32_t)il2cpp_codegen_add(L_29, 1));
		NullCheck(L_27);
		int32_t L_30 = L_29;
		SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC L_31 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_30));
		NullCheck(L_24);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(L_26), (SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC)L_31);
	}

IL_0089:
	{
		int32_t L_32 = V_1;
		int32_t L_33 = __this->____size;
		if ((((int32_t)L_32) < ((int32_t)L_33)))
		{
			goto IL_0043;
		}
	}
	{
		goto IL_00ad;
	}

IL_00ad:
	{
		int32_t L_34 = __this->____size;
		int32_t L_35 = V_0;
		int32_t L_36 = V_0;
		__this->____size = L_36;
		int32_t L_37 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_37, 1));
		return ((int32_t)il2cpp_codegen_subtract(L_34, L_35));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_m911F1AFFA59FD181BA9363E0B6C8B5B95067EC3B_gshared (List_1_tDB6FA8EDA7A26227B5CA100203EF7BAFA0FDBDDF* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRange_IndexException_mC7661B8C6DD827679C95FC6B6C08F8724174936D(NULL);
	}

IL_000e:
	{
		int32_t L_2 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_subtract(L_2, 1));
		int32_t L_3 = ___0_index;
		int32_t L_4 = __this->____size;
		if ((((int32_t)L_3) >= ((int32_t)L_4)))
		{
			goto IL_0042;
		}
	}
	{
		SingleRangeU5BU5D_t9F938F2249733D85C4F97842A125778D69A843D6* L_5 = __this->____items;
		int32_t L_6 = ___0_index;
		SingleRangeU5BU5D_t9F938F2249733D85C4F97842A125778D69A843D6* L_7 = __this->____items;
		int32_t L_8 = ___0_index;
		int32_t L_9 = __this->____size;
		int32_t L_10 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, ((int32_t)il2cpp_codegen_add(L_6, 1)), (RuntimeArray*)L_7, L_8, ((int32_t)il2cpp_codegen_subtract(L_9, L_10)), NULL);
	}

IL_0042:
	{
		goto IL_0063;
	}

IL_0063:
	{
		int32_t L_11 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_11, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveRange_m5B47428142038A77A46C58F4673D5B84A07CEA92_gshared (List_1_tDB6FA8EDA7A26227B5CA100203EF7BAFA0FDBDDF* __this, int32_t ___0_index, int32_t ___1_count, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_count;
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F((int32_t)((int32_t)16), (int32_t)4, NULL);
	}

IL_0015:
	{
		int32_t L_2 = __this->____size;
		int32_t L_3 = ___0_index;
		int32_t L_4 = ___1_count;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_2, L_3))) >= ((int32_t)L_4)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)((int32_t)23), NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_count;
		if ((((int32_t)L_5) <= ((int32_t)0)))
		{
			goto IL_008d;
		}
	}
	{
		int32_t L_6 = __this->____size;
		int32_t L_7 = __this->____size;
		int32_t L_8 = ___1_count;
		__this->____size = ((int32_t)il2cpp_codegen_subtract(L_7, L_8));
		int32_t L_9 = ___0_index;
		int32_t L_10 = __this->____size;
		if ((((int32_t)L_9) >= ((int32_t)L_10)))
		{
			goto IL_0066;
		}
	}
	{
		SingleRangeU5BU5D_t9F938F2249733D85C4F97842A125778D69A843D6* L_11 = __this->____items;
		int32_t L_12 = ___0_index;
		int32_t L_13 = ___1_count;
		SingleRangeU5BU5D_t9F938F2249733D85C4F97842A125778D69A843D6* L_14 = __this->____items;
		int32_t L_15 = ___0_index;
		int32_t L_16 = __this->____size;
		int32_t L_17 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_11, ((int32_t)il2cpp_codegen_add(L_12, L_13)), (RuntimeArray*)L_14, L_15, ((int32_t)il2cpp_codegen_subtract(L_16, L_17)), NULL);
	}

IL_0066:
	{
		int32_t L_18 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_18, 1));
		goto IL_008d;
	}

IL_008d:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Reverse_m615589F6FA55D03C1E49CD0793C4579B1EA8ACB9_gshared (List_1_tDB6FA8EDA7A26227B5CA100203EF7BAFA0FDBDDF* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = List_1_get_Count_mF3540C84790DAB9D381F00753BA20A85694C3446_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 17));
		List_1_Reverse_m6558ECB96638BF339DAB6BDB70413BA7570A84F9(__this, 0, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 36));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Reverse_m6558ECB96638BF339DAB6BDB70413BA7570A84F9_gshared (List_1_tDB6FA8EDA7A26227B5CA100203EF7BAFA0FDBDDF* __this, int32_t ___0_index, int32_t ___1_count, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_count;
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F((int32_t)((int32_t)16), (int32_t)4, NULL);
	}

IL_0015:
	{
		int32_t L_2 = __this->____size;
		int32_t L_3 = ___0_index;
		int32_t L_4 = ___1_count;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_2, L_3))) >= ((int32_t)L_4)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)((int32_t)23), NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_count;
		if ((((int32_t)L_5) <= ((int32_t)1)))
		{
			goto IL_0038;
		}
	}
	{
		SingleRangeU5BU5D_t9F938F2249733D85C4F97842A125778D69A843D6* L_6 = __this->____items;
		int32_t L_7 = ___0_index;
		int32_t L_8 = ___1_count;
		Array_Reverse_TisSingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC_mD8F006C0A007C05BB69E417FA65A5A66965F997C(L_6, L_7, L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 37));
	}

IL_0038:
	{
		int32_t L_9 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_9, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_m73682F7A633F3DDE4C73BA091D7DF9A6B37C9EDF_gshared (List_1_tDB6FA8EDA7A26227B5CA100203EF7BAFA0FDBDDF* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = List_1_get_Count_mF3540C84790DAB9D381F00753BA20A85694C3446_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 17));
		RuntimeObject* L_1 = ___0_comparer;
		List_1_Sort_m4F48B52D720DB8E76904DB4647F7BDA63FDEC552(__this, 0, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 39));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_m4F48B52D720DB8E76904DB4647F7BDA63FDEC552_gshared (List_1_tDB6FA8EDA7A26227B5CA100203EF7BAFA0FDBDDF* __this, int32_t ___0_index, int32_t ___1_count, RuntimeObject* ___2_comparer, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_count;
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F((int32_t)((int32_t)16), (int32_t)4, NULL);
	}

IL_0015:
	{
		int32_t L_2 = __this->____size;
		int32_t L_3 = ___0_index;
		int32_t L_4 = ___1_count;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_2, L_3))) >= ((int32_t)L_4)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)((int32_t)23), NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_count;
		if ((((int32_t)L_5) <= ((int32_t)1)))
		{
			goto IL_0039;
		}
	}
	{
		SingleRangeU5BU5D_t9F938F2249733D85C4F97842A125778D69A843D6* L_6 = __this->____items;
		int32_t L_7 = ___0_index;
		int32_t L_8 = ___1_count;
		RuntimeObject* L_9 = ___2_comparer;
		Array_Sort_TisSingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC_mE6A4B57DE0CB3DEC8371BDC3DAAAD29D6C9E3B2B(L_6, L_7, L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 40));
	}

IL_0039:
	{
		int32_t L_10 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_10, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_mA14F47787ACFCA9DBDE6F5227BC1070CC0AC6E24_gshared (List_1_tDB6FA8EDA7A26227B5CA100203EF7BAFA0FDBDDF* __this, Comparison_1_tA6E38F9B8A5E125EC6515F9679C2079C747A0149* ___0_comparison, const RuntimeMethod* method) 
{
	{
		Comparison_1_tA6E38F9B8A5E125EC6515F9679C2079C747A0149* L_0 = ___0_comparison;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)((int32_t)34), NULL);
	}

IL_000a:
	{
		int32_t L_1 = __this->____size;
		if ((((int32_t)L_1) <= ((int32_t)1)))
		{
			goto IL_0026;
		}
	}
	{
		SingleRangeU5BU5D_t9F938F2249733D85C4F97842A125778D69A843D6* L_2 = __this->____items;
		int32_t L_3 = __this->____size;
		Comparison_1_tA6E38F9B8A5E125EC6515F9679C2079C747A0149* L_4 = ___0_comparison;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 43));
		ArraySortHelper_1_Sort_m3182DABDA1EFACFF8268887837CA976A3577C3E6(L_2, 0, L_3, L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 42));
	}

IL_0026:
	{
		int32_t L_5 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_5, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SingleRangeU5BU5D_t9F938F2249733D85C4F97842A125778D69A843D6* List_1_ToArray_m60A0D5DD91FC53DD96E7949CE29E6FA9724180F2_gshared (List_1_tDB6FA8EDA7A26227B5CA100203EF7BAFA0FDBDDF* __this, const RuntimeMethod* method) 
{
	SingleRangeU5BU5D_t9F938F2249733D85C4F97842A125778D69A843D6* V_0 = NULL;
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		SingleRangeU5BU5D_t9F938F2249733D85C4F97842A125778D69A843D6* L_1 = ((List_1_tDB6FA8EDA7A26227B5CA100203EF7BAFA0FDBDDF_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 2)))->___s_emptyArray;
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____size;
		SingleRangeU5BU5D_t9F938F2249733D85C4F97842A125778D69A843D6* L_3 = (SingleRangeU5BU5D_t9F938F2249733D85C4F97842A125778D69A843D6*)(SingleRangeU5BU5D_t9F938F2249733D85C4F97842A125778D69A843D6*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_2);
		V_0 = L_3;
		SingleRangeU5BU5D_t9F938F2249733D85C4F97842A125778D69A843D6* L_4 = __this->____items;
		SingleRangeU5BU5D_t9F938F2249733D85C4F97842A125778D69A843D6* L_5 = V_0;
		int32_t L_6 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_4, 0, (RuntimeArray*)L_5, 0, L_6, NULL);
		SingleRangeU5BU5D_t9F938F2249733D85C4F97842A125778D69A843D6* L_7 = V_0;
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddEnumerable_mDF2147E522AD80A7B6A79CF8E7F00EC7DBF8A032_gshared (List_1_tDB6FA8EDA7A26227B5CA100203EF7BAFA0FDBDDF* __this, RuntimeObject* ___0_enumerable, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		RuntimeObject* L_1 = ___0_enumerable;
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 4), L_1);
		V_0 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0063:
			{
				{
					RuntimeObject* L_3 = V_0;
					if (!L_3)
					{
						goto IL_006c;
					}
				}
				{
					RuntimeObject* L_4 = V_0;
					NullCheck((RuntimeObject*)L_4);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_4);
				}

IL_006c:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_0059_1;
			}

IL_0017_1:
			{
				RuntimeObject* L_5 = V_0;
				NullCheck(L_5);
				SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC L_6;
				L_6 = InterfaceFuncInvoker0< SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 27), L_5);
				V_1 = L_6;
				int32_t L_7 = __this->____size;
				SingleRangeU5BU5D_t9F938F2249733D85C4F97842A125778D69A843D6* L_8 = __this->____items;
				NullCheck(L_8);
				if ((!(((uint32_t)L_7) == ((uint32_t)((int32_t)(((RuntimeArray*)L_8)->max_length))))))
				{
					goto IL_003c_1;
				}
			}
			{
				int32_t L_9 = __this->____size;
				List_1_EnsureCapacity_m1A140613D2D236E9CF413F81D549E39415DF0058(__this, ((int32_t)il2cpp_codegen_add(L_9, 1)), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
			}

IL_003c_1:
			{
				SingleRangeU5BU5D_t9F938F2249733D85C4F97842A125778D69A843D6* L_10 = __this->____items;
				int32_t L_11 = __this->____size;
				V_2 = L_11;
				int32_t L_12 = V_2;
				__this->____size = ((int32_t)il2cpp_codegen_add(L_12, 1));
				int32_t L_13 = V_2;
				SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC L_14 = V_1;
				NullCheck(L_10);
				(L_10)->SetAt(static_cast<il2cpp_array_size_t>(L_13), (SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC)L_14);
			}

IL_0059_1:
			{
				RuntimeObject* L_15 = V_0;
				NullCheck((RuntimeObject*)L_15);
				bool L_16;
				L_16 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_15);
				if (L_16)
				{
					goto IL_0017_1;
				}
			}
			{
				goto IL_006d;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_006d:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__cctor_mC80073FB316593C1A68C371348A1661067257614_gshared (const RuntimeMethod* method) 
{
	{
		SingleRangeU5BU5D_t9F938F2249733D85C4F97842A125778D69A843D6* L_0 = (SingleRangeU5BU5D_t9F938F2249733D85C4F97842A125778D69A843D6*)(SingleRangeU5BU5D_t9F938F2249733D85C4F97842A125778D69A843D6*)SZArrayNew(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 3), (uint32_t)0);
		((List_1_tDB6FA8EDA7A26227B5CA100203EF7BAFA0FDBDDF_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___s_emptyArray = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((List_1_tDB6FA8EDA7A26227B5CA100203EF7BAFA0FDBDDF_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___s_emptyArray), (void*)L_0);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m76818CA3690BB91AA7450B449616AE334EA0972C_gshared (List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577* L_0 = ((List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 2)))->___s_emptyArray;
		__this->____items = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m8708E31E39AC124FF9BFE9D74B61944006EBA29A_gshared (List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0012;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F((int32_t)((int32_t)12), (int32_t)4, NULL);
	}

IL_0012:
	{
		int32_t L_1 = ___0_capacity;
		if (L_1)
		{
			goto IL_0021;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577* L_2 = ((List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 2)))->___s_emptyArray;
		__this->____items = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_2);
		return;
	}

IL_0021:
	{
		int32_t L_3 = ___0_capacity;
		WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577* L_4 = (WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577*)(WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_3);
		__this->____items = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_4);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m17517E2A0D5972758C0BE550758EC2FC7AD88D3F_gshared (List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	int32_t V_1 = 0;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		RuntimeObject* L_0 = ___0_collection;
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)6, NULL);
	}

IL_000f:
	{
		RuntimeObject* L_1 = ___0_collection;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_1, il2cpp_rgctx_data(method->klass->rgctx_data, 5)));
		RuntimeObject* L_2 = V_0;
		if (!L_2)
		{
			goto IL_0050;
		}
	}
	{
		RuntimeObject* L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 5), L_3);
		V_1 = L_4;
		int32_t L_5 = V_1;
		if (L_5)
		{
			goto IL_002f;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577* L_6 = ((List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 2)))->___s_emptyArray;
		__this->____items = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_6);
		return;
	}

IL_002f:
	{
		int32_t L_7 = V_1;
		WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577* L_8 = (WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577*)(WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_7);
		__this->____items = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_8);
		RuntimeObject* L_9 = V_0;
		WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577* L_10 = __this->____items;
		NullCheck(L_9);
		InterfaceActionInvoker2< WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577*, int32_t >::Invoke(5, il2cpp_rgctx_data(method->klass->rgctx_data, 5), L_9, L_10, 0);
		int32_t L_11 = V_1;
		__this->____size = L_11;
		return;
	}

IL_0050:
	{
		__this->____size = 0;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577* L_12 = ((List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 2)))->___s_emptyArray;
		__this->____items = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_12);
		RuntimeObject* L_13 = ___0_collection;
		List_1_AddEnumerable_m0C19209F7F2E7D8F63F4AEDAB78FF7F76347ECFB(__this, L_13, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Capacity_m060BDC309579AD262C87F876AC2A1E81D316472A_gshared (List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577* V_0 = NULL;
	{
		int32_t L_0 = ___0_value;
		int32_t L_1 = __this->____size;
		if ((((int32_t)L_0) >= ((int32_t)L_1)))
		{
			goto IL_0012;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F((int32_t)((int32_t)15), (int32_t)((int32_t)21), NULL);
	}

IL_0012:
	{
		int32_t L_2 = ___0_value;
		WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577* L_3 = __this->____items;
		NullCheck(L_3);
		if ((((int32_t)L_2) == ((int32_t)((int32_t)(((RuntimeArray*)L_3)->max_length)))))
		{
			goto IL_0058;
		}
	}
	{
		int32_t L_4 = ___0_value;
		if ((((int32_t)L_4) <= ((int32_t)0)))
		{
			goto IL_004d;
		}
	}
	{
		int32_t L_5 = ___0_value;
		WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577* L_6 = (WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577*)(WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_5);
		V_0 = L_6;
		int32_t L_7 = __this->____size;
		if ((((int32_t)L_7) <= ((int32_t)0)))
		{
			goto IL_0045;
		}
	}
	{
		WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577* L_8 = __this->____items;
		WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577* L_9 = V_0;
		int32_t L_10 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_8, 0, (RuntimeArray*)L_9, 0, L_10, NULL);
	}

IL_0045:
	{
		WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577* L_11 = V_0;
		__this->____items = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_11);
		return;
	}

IL_004d:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577* L_12 = ((List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 2)))->___s_emptyArray;
		__this->____items = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_12);
	}

IL_0058:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m2F90A932E325FFA55047769F5E45E453D80C27D1_gshared (List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m9B7FE4A7EBCCC2B672D99C7E6425070115CBD2E8_gshared (List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_System_Collections_IList_get_IsReadOnly_m8736FE812286213E4682031FDDA83EBAAF4CC0A5_gshared (List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_System_Collections_ICollection_get_SyncRoot_mD2CB873FD4B92A901140ED6AD5BCCD54DAEAE6F4_gshared (List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____syncRoot;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject** L_1 = (RuntimeObject**)(&__this->____syncRoot);
		RuntimeObject* L_2 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_2, NULL);
		RuntimeObject* L_3;
		L_3 = InterlockedCompareExchangeImpl<RuntimeObject*>(L_1, L_2, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = __this->____syncRoot;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44 List_1_get_Item_mE33CCA6A6D338BD1F44C8E35CE75806952CBF0CC_gshared (List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRange_IndexException_mC7661B8C6DD827679C95FC6B6C08F8724174936D(NULL);
	}

IL_000e:
	{
		WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577* L_2 = __this->____items;
		int32_t L_3 = ___0_index;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44 L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Item_m47EF2DD78187A4AFDDBA8AFE5C2D83DE376C0A0A_gshared (List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4* __this, int32_t ___0_index, WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44 ___1_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRange_IndexException_mC7661B8C6DD827679C95FC6B6C08F8724174936D(NULL);
	}

IL_000e:
	{
		WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577* L_2 = __this->____items;
		int32_t L_3 = ___0_index;
		WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44 L_4 = ___1_value;
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(L_3), (WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44)L_4);
		int32_t L_5 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_5, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_IsCompatibleObject_m041D9A4962B238EF7BC9922EAF0F5FC8E6267EF6_gshared (RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_value;
		if (((RuntimeObject*)IsInst((RuntimeObject*)L_0, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 9))))
		{
			goto IL_001f;
		}
	}
	{
		RuntimeObject* L_1 = ___0_value;
		if (L_1)
		{
			goto IL_001d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44));
		WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44 L_2 = V_0;
		return false;
	}

IL_001d:
	{
		return (bool)0;
	}

IL_001f:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_System_Collections_IList_get_Item_mBFBEA7C6C4D0AB8A0D8EF79E28EBF53FCB7FFEF1_gshared (List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44 L_1;
		L_1 = List_1_get_Item_mE33CCA6A6D338BD1F44C8E35CE75806952CBF0CC(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44 L_2 = L_1;
		RuntimeObject* L_3 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9), &L_2);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_System_Collections_IList_set_Item_m4AAC3D191376883593AF8E9B6B334B92FB0D9C4D_gshared (List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4* __this, int32_t ___0_index, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeObject* L_0 = ___1_value;
		ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisWorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44_mB9D015C9FCBF6CD2BCA1E436743F0CC080CFC110(L_0, (int32_t)((int32_t)15), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
	}
	try
	{
		int32_t L_1 = ___0_index;
		RuntimeObject* L_2 = ___1_value;
		List_1_set_Item_m47EF2DD78187A4AFDDBA8AFE5C2D83DE376C0A0A(__this, L_1, ((*(WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44*)((WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44*)(WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 9))))), il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		goto IL_002a;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0017;
		}
		throw e;
	}

CATCH_0017:
	{
		RuntimeObject* L_3 = ___1_value;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_4 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 13)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_5;
		L_5 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_4, NULL);
		ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_3, L_5, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_002a;
	}

IL_002a:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_m4AF1A89B7FCCDFD5755D0C21A65347642A37B152_gshared (List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4* __this, WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44 ___0_item, const RuntimeMethod* method) 
{
	WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577* L_1 = __this->____items;
		V_0 = L_1;
		int32_t L_2 = __this->____size;
		V_1 = L_2;
		int32_t L_3 = V_1;
		WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_5, 1));
		WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577* L_6 = V_0;
		int32_t L_7 = V_1;
		WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44 L_8 = ___0_item;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44)L_8);
		return;
	}

IL_0034:
	{
		WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44 L_9 = ___0_item;
		List_1_AddWithResize_m45EC1E38A4A473EA779C21FBFEB2C0E39E4C7846(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void List_1_AddWithResize_m45EC1E38A4A473EA779C21FBFEB2C0E39E4C7846_gshared (List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4* __this, WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44 ___0_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____size;
		V_0 = L_0;
		int32_t L_1 = V_0;
		List_1_EnsureCapacity_mF38503ED9938B2CECF0B618845E9E32167654016(__this, ((int32_t)il2cpp_codegen_add(L_1, 1)), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		int32_t L_2 = V_0;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_2, 1));
		WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577* L_3 = __this->____items;
		int32_t L_4 = V_0;
		WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44 L_5 = ___0_item;
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(L_4), (WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44)L_5);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_System_Collections_IList_Add_m1B366DE3275E543F3FA70031C94C7F336BD5CFFF_gshared (List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeObject* L_0 = ___0_item;
		ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisWorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44_mB9D015C9FCBF6CD2BCA1E436743F0CC080CFC110(L_0, (int32_t)((int32_t)20), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
	}
	try
	{
		RuntimeObject* L_1 = ___0_item;
		List_1_Add_m4AF1A89B7FCCDFD5755D0C21A65347642A37B152_inline(__this, ((*(WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44*)((WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44*)(WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44*)UnBox(L_1, il2cpp_rgctx_data(method->klass->rgctx_data, 9))))), il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		goto IL_0029;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0016;
		}
		throw e;
	}

CATCH_0016:
	{
		RuntimeObject* L_2 = ___0_item;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 13)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_2, L_4, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0029;
	}

IL_0029:
	{
		int32_t L_5;
		L_5 = List_1_get_Count_m2F90A932E325FFA55047769F5E45E453D80C27D1_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 17));
		return ((int32_t)il2cpp_codegen_subtract(L_5, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddRange_m916A38AAB2F35C697A0CC9EE87A56C6B6D047302_gshared (List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		RuntimeObject* L_1 = ___0_collection;
		List_1_InsertRange_m13CC4FA54580EFF2DDFDDB9E830D9A383A0E4DCC(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Clear_m1F57FE95E77F7897B0685BE4B2CAD395A384B6DB_gshared (List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
	}
	{
		int32_t L_1 = __this->____size;
		V_0 = L_1;
		__this->____size = 0;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577* L_3 = __this->____items;
		int32_t L_4 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_3, 0, L_4, NULL);
		return;
	}

IL_003c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_m1303A79CAE668AD1204F2D7DF8D2DFCF9DDC6D0D_gshared (List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4* __this, WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44 ___0_item, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44 L_1 = ___0_item;
		int32_t L_2;
		L_2 = List_1_IndexOf_m48E7DF20C4C52830C219E189B9DAF4220941B7D1(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		return (bool)((((int32_t)((((int32_t)L_2) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0016:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_System_Collections_IList_Contains_m09BA6D1CC549FA9F5642F3FC47741F976B5F35D9_gshared (List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_item;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		bool L_1;
		L_1 = List_1_IsCompatibleObject_m041D9A4962B238EF7BC9922EAF0F5FC8E6267EF6(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_item;
		bool L_3;
		L_3 = List_1_Contains_m1303A79CAE668AD1204F2D7DF8D2DFCF9DDC6D0D(__this, ((*(WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44*)((WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44*)(WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 9))))), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_CopyTo_m451E2DF9CA2E0541B3E2970333284D8A5A327356_gshared (List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4* __this, WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577* ___0_array, const RuntimeMethod* method) 
{
	{
		WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577* L_0 = ___0_array;
		List_1_CopyTo_m0E03ED6DB864BF551838BF1B49786675D995A7E7(__this, L_0, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_System_Collections_ICollection_CopyTo_m1C8CDB982CCA69CC00815F2CC7A9F57C8588DF5D_gshared (List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4* __this, RuntimeArray* ___0_array, int32_t ___1_arrayIndex, const RuntimeMethod* method) 
{
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		RuntimeArray* L_1 = ___0_array;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(L_1, NULL);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0012;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)7, NULL);
	}

IL_0012:
	{
	}
	try
	{
		WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577* L_3 = __this->____items;
		RuntimeArray* L_4 = ___0_array;
		int32_t L_5 = ___1_arrayIndex;
		int32_t L_6 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_3, 0, L_4, L_5, L_6, NULL);
		goto IL_0031;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0029;
		}
		throw e;
	}

CATCH_0029:
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0031;
	}

IL_0031:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_CopyTo_m0E03ED6DB864BF551838BF1B49786675D995A7E7_gshared (List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4* __this, WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577* ___0_array, int32_t ___1_arrayIndex, const RuntimeMethod* method) 
{
	{
		WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577* L_0 = __this->____items;
		WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577* L_1 = ___0_array;
		int32_t L_2 = ___1_arrayIndex;
		int32_t L_3 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_0, 0, (RuntimeArray*)L_1, L_2, L_3, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_EnsureCapacity_mF38503ED9938B2CECF0B618845E9E32167654016_gshared (List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4* __this, int32_t ___0_min, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t G_B4_0 = 0;
	{
		WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577* L_0 = __this->____items;
		NullCheck(L_0);
		int32_t L_1 = ___0_min;
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length))) >= ((int32_t)L_1)))
		{
			goto IL_003d;
		}
	}
	{
		WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577* L_2 = __this->____items;
		NullCheck(L_2);
		if (!(((RuntimeArray*)L_2)->max_length))
		{
			goto IL_0020;
		}
	}
	{
		WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577* L_3 = __this->____items;
		NullCheck(L_3);
		G_B4_0 = ((int32_t)il2cpp_codegen_multiply(((int32_t)(((RuntimeArray*)L_3)->max_length)), 2));
		goto IL_0021;
	}

IL_0020:
	{
		G_B4_0 = 4;
	}

IL_0021:
	{
		V_0 = G_B4_0;
		int32_t L_4 = V_0;
		if ((!(((uint32_t)L_4) > ((uint32_t)((int32_t)2146435071)))))
		{
			goto IL_0030;
		}
	}
	{
		V_0 = ((int32_t)2146435071);
	}

IL_0030:
	{
		int32_t L_5 = V_0;
		int32_t L_6 = ___0_min;
		if ((((int32_t)L_5) >= ((int32_t)L_6)))
		{
			goto IL_0036;
		}
	}
	{
		int32_t L_7 = ___0_min;
		V_0 = L_7;
	}

IL_0036:
	{
		int32_t L_8 = V_0;
		List_1_set_Capacity_m060BDC309579AD262C87F876AC2A1E81D316472A(__this, L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 24));
	}

IL_003d:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t7ECA23D5C1F4F41D95EEA8488F11D3D913089B4C List_1_GetEnumerator_mDAC48FEB52A5FC903525BC2573F962982C808938_gshared (List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t7ECA23D5C1F4F41D95EEA8488F11D3D913089B4C L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m67AC7635AF0AF22787100E7C16277521B24BF922((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m8B0D48A21061F79C1042EC9FF62A0662C3DA57E9_gshared (List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t7ECA23D5C1F4F41D95EEA8488F11D3D913089B4C L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m67AC7635AF0AF22787100E7C16277521B24BF922((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		Enumerator_t7ECA23D5C1F4F41D95EEA8488F11D3D913089B4C L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 25), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_System_Collections_IEnumerable_GetEnumerator_m7FF9BA8186A2B5BB00640308FB254A09C44A455D_gshared (List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t7ECA23D5C1F4F41D95EEA8488F11D3D913089B4C L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m67AC7635AF0AF22787100E7C16277521B24BF922((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		Enumerator_t7ECA23D5C1F4F41D95EEA8488F11D3D913089B4C L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 25), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_IndexOf_m48E7DF20C4C52830C219E189B9DAF4220941B7D1_gshared (List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4* __this, WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44 ___0_item, const RuntimeMethod* method) 
{
	{
		WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577* L_0 = __this->____items;
		WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44 L_1 = ___0_item;
		int32_t L_2 = __this->____size;
		int32_t L_3;
		L_3 = Array_IndexOf_TisWorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44_mD7FA52403DD62EA78B636E1A4E8119ABED32F37E(L_0, L_1, 0, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_System_Collections_IList_IndexOf_m6D8F7CA7A498C36D9C2987B99914AA61C55A46A1_gshared (List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_item;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		bool L_1;
		L_1 = List_1_IsCompatibleObject_m041D9A4962B238EF7BC9922EAF0F5FC8E6267EF6(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_item;
		int32_t L_3;
		L_3 = List_1_IndexOf_m48E7DF20C4C52830C219E189B9DAF4220941B7D1(__this, ((*(WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44*)((WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44*)(WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 9))))), il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		return L_3;
	}

IL_0015:
	{
		return (-1);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Insert_m3AA6C81C13315A0F1CD886CA63438F3FC55EFD70_gshared (List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4* __this, int32_t ___0_index, WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44 ___1_item, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_0012;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F((int32_t)((int32_t)13), (int32_t)((int32_t)27), NULL);
	}

IL_0012:
	{
		int32_t L_2 = __this->____size;
		WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577* L_3 = __this->____items;
		NullCheck(L_3);
		if ((!(((uint32_t)L_2) == ((uint32_t)((int32_t)(((RuntimeArray*)L_3)->max_length))))))
		{
			goto IL_0030;
		}
	}
	{
		int32_t L_4 = __this->____size;
		List_1_EnsureCapacity_mF38503ED9938B2CECF0B618845E9E32167654016(__this, ((int32_t)il2cpp_codegen_add(L_4, 1)), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
	}

IL_0030:
	{
		int32_t L_5 = ___0_index;
		int32_t L_6 = __this->____size;
		if ((((int32_t)L_5) >= ((int32_t)L_6)))
		{
			goto IL_0056;
		}
	}
	{
		WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577* L_7 = __this->____items;
		int32_t L_8 = ___0_index;
		WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577* L_9 = __this->____items;
		int32_t L_10 = ___0_index;
		int32_t L_11 = __this->____size;
		int32_t L_12 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_7, L_8, (RuntimeArray*)L_9, ((int32_t)il2cpp_codegen_add(L_10, 1)), ((int32_t)il2cpp_codegen_subtract(L_11, L_12)), NULL);
	}

IL_0056:
	{
		WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577* L_13 = __this->____items;
		int32_t L_14 = ___0_index;
		WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44 L_15 = ___1_item;
		NullCheck(L_13);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(L_14), (WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44)L_15);
		int32_t L_16 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_16, 1));
		int32_t L_17 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_17, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_System_Collections_IList_Insert_mF8E5FAD14C555D38AEC224571195D52EA3C14D23_gshared (List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4* __this, int32_t ___0_index, RuntimeObject* ___1_item, const RuntimeMethod* method) 
{
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeObject* L_0 = ___1_item;
		ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisWorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44_mB9D015C9FCBF6CD2BCA1E436743F0CC080CFC110(L_0, (int32_t)((int32_t)20), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
	}
	try
	{
		int32_t L_1 = ___0_index;
		RuntimeObject* L_2 = ___1_item;
		List_1_Insert_m3AA6C81C13315A0F1CD886CA63438F3FC55EFD70(__this, L_1, ((*(WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44*)((WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44*)(WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 9))))), il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		goto IL_002a;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0017;
		}
		throw e;
	}

CATCH_0017:
	{
		RuntimeObject* L_3 = ___1_item;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_4 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 13)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_5;
		L_5 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_4, NULL);
		ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_3, L_5, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_002a;
	}

IL_002a:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_InsertRange_m13CC4FA54580EFF2DDFDDB9E830D9A383A0E4DCC_gshared (List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4* __this, int32_t ___0_index, RuntimeObject* ___1_collection, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	int32_t V_1 = 0;
	RuntimeObject* V_2 = NULL;
	{
		RuntimeObject* L_0 = ___1_collection;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)6, NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___0_index;
		int32_t L_2 = __this->____size;
		if ((!(((uint32_t)L_1) > ((uint32_t)L_2))))
		{
			goto IL_0017;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRange_IndexException_mC7661B8C6DD827679C95FC6B6C08F8724174936D(NULL);
	}

IL_0017:
	{
		RuntimeObject* L_3 = ___1_collection;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_3, il2cpp_rgctx_data(method->klass->rgctx_data, 5)));
		RuntimeObject* L_4 = V_0;
		if (!L_4)
		{
			goto IL_00bc;
		}
	}
	{
		RuntimeObject* L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 5), L_5);
		V_1 = L_6;
		int32_t L_7 = V_1;
		if ((((int32_t)L_7) <= ((int32_t)0)))
		{
			goto IL_00fb;
		}
	}
	{
		int32_t L_8 = __this->____size;
		int32_t L_9 = V_1;
		List_1_EnsureCapacity_mF38503ED9938B2CECF0B618845E9E32167654016(__this, ((int32_t)il2cpp_codegen_add(L_8, L_9)), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		int32_t L_10 = ___0_index;
		int32_t L_11 = __this->____size;
		if ((((int32_t)L_10) >= ((int32_t)L_11)))
		{
			goto IL_0066;
		}
	}
	{
		WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577* L_12 = __this->____items;
		int32_t L_13 = ___0_index;
		WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577* L_14 = __this->____items;
		int32_t L_15 = ___0_index;
		int32_t L_16 = V_1;
		int32_t L_17 = __this->____size;
		int32_t L_18 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_12, L_13, (RuntimeArray*)L_14, ((int32_t)il2cpp_codegen_add(L_15, L_16)), ((int32_t)il2cpp_codegen_subtract(L_17, L_18)), NULL);
	}

IL_0066:
	{
		RuntimeObject* L_19 = V_0;
		if ((!(((RuntimeObject*)(List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4*)__this) == ((RuntimeObject*)(RuntimeObject*)L_19))))
		{
			goto IL_009f;
		}
	}
	{
		WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577* L_20 = __this->____items;
		WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577* L_21 = __this->____items;
		int32_t L_22 = ___0_index;
		int32_t L_23 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_20, 0, (RuntimeArray*)L_21, L_22, L_23, NULL);
		WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577* L_24 = __this->____items;
		int32_t L_25 = ___0_index;
		int32_t L_26 = V_1;
		WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577* L_27 = __this->____items;
		int32_t L_28 = ___0_index;
		int32_t L_29 = __this->____size;
		int32_t L_30 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_24, ((int32_t)il2cpp_codegen_add(L_25, L_26)), (RuntimeArray*)L_27, ((int32_t)il2cpp_codegen_multiply(L_28, 2)), ((int32_t)il2cpp_codegen_subtract(L_29, L_30)), NULL);
		goto IL_00ac;
	}

IL_009f:
	{
		RuntimeObject* L_31 = V_0;
		WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577* L_32 = __this->____items;
		int32_t L_33 = ___0_index;
		NullCheck(L_31);
		InterfaceActionInvoker2< WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577*, int32_t >::Invoke(5, il2cpp_rgctx_data(method->klass->rgctx_data, 5), L_31, L_32, L_33);
	}

IL_00ac:
	{
		int32_t L_34 = __this->____size;
		int32_t L_35 = V_1;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_34, L_35));
		goto IL_00fb;
	}

IL_00bc:
	{
		int32_t L_36 = ___0_index;
		int32_t L_37 = __this->____size;
		if ((((int32_t)L_36) >= ((int32_t)L_37)))
		{
			goto IL_00f4;
		}
	}
	{
		RuntimeObject* L_38 = ___1_collection;
		NullCheck(L_38);
		RuntimeObject* L_39;
		L_39 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 4), L_38);
		V_2 = L_39;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00ea:
			{
				{
					RuntimeObject* L_40 = V_2;
					if (!L_40)
					{
						goto IL_00f3;
					}
				}
				{
					RuntimeObject* L_41 = V_2;
					NullCheck((RuntimeObject*)L_41);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_41);
				}

IL_00f3:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_00e0_1;
			}

IL_00ce_1:
			{
				int32_t L_42 = ___0_index;
				int32_t L_43 = L_42;
				___0_index = ((int32_t)il2cpp_codegen_add(L_43, 1));
				RuntimeObject* L_44 = V_2;
				NullCheck(L_44);
				WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44 L_45;
				L_45 = InterfaceFuncInvoker0< WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44 >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 27), L_44);
				List_1_Insert_m3AA6C81C13315A0F1CD886CA63438F3FC55EFD70(__this, L_43, L_45, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
			}

IL_00e0_1:
			{
				RuntimeObject* L_46 = V_2;
				NullCheck((RuntimeObject*)L_46);
				bool L_47;
				L_47 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_46);
				if (L_47)
				{
					goto IL_00ce_1;
				}
			}
			{
				goto IL_00fb;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00f4:
	{
		RuntimeObject* L_48 = ___1_collection;
		List_1_AddEnumerable_m0C19209F7F2E7D8F63F4AEDAB78FF7F76347ECFB(__this, L_48, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
	}

IL_00fb:
	{
		int32_t L_49 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_49, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_mC74ED88927A060D6631231DB26A042412C32D85B_gshared (List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4* __this, WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44 ___0_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44 L_0 = ___0_item;
		int32_t L_1;
		L_1 = List_1_IndexOf_m48E7DF20C4C52830C219E189B9DAF4220941B7D1(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		int32_t L_3 = V_0;
		List_1_RemoveAt_m7476D799F5CC07697D447853DA4DAEB4D3741B84(__this, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 32));
		return (bool)1;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_System_Collections_IList_Remove_m5D7BE3C47B2C061A2B8FA92A1D33CB76FC7245B5_gshared (List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_item;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		bool L_1;
		L_1 = List_1_IsCompatibleObject_m041D9A4962B238EF7BC9922EAF0F5FC8E6267EF6(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_item;
		bool L_3;
		L_3 = List_1_Remove_mC74ED88927A060D6631231DB26A042412C32D85B(__this, ((*(WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44*)((WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44*)(WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 9))))), il2cpp_rgctx_method(method->klass->rgctx_data, 33));
	}

IL_0015:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_RemoveAll_m005637F944C32E3C8F63E3D10D1267C2746F11D4_gshared (List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4* __this, Predicate_1_t5A30DC3457D23124EDD16C06F92FCB77A9C8A8FD* ___0_match, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		Predicate_1_t5A30DC3457D23124EDD16C06F92FCB77A9C8A8FD* L_0 = ___0_match;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)8, NULL);
	}

IL_0009:
	{
		V_0 = 0;
		goto IL_0011;
	}

IL_000d:
	{
		int32_t L_1 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_1, 1));
	}

IL_0011:
	{
		int32_t L_2 = V_0;
		int32_t L_3 = __this->____size;
		if ((((int32_t)L_2) >= ((int32_t)L_3)))
		{
			goto IL_002e;
		}
	}
	{
		Predicate_1_t5A30DC3457D23124EDD16C06F92FCB77A9C8A8FD* L_4 = ___0_match;
		WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577* L_5 = __this->____items;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44 L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		NullCheck(L_4);
		bool L_9;
		L_9 = Predicate_1_Invoke_m8D5A11CC70C8E6CD6EE4FD9D625B299AF1B8DCE7_inline(L_4, L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 35));
		if (!L_9)
		{
			goto IL_000d;
		}
	}

IL_002e:
	{
		int32_t L_10 = V_0;
		int32_t L_11 = __this->____size;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_0039;
		}
	}
	{
		return 0;
	}

IL_0039:
	{
		int32_t L_12 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
		goto IL_0089;
	}

IL_003f:
	{
		int32_t L_13 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_0043:
	{
		int32_t L_14 = V_1;
		int32_t L_15 = __this->____size;
		if ((((int32_t)L_14) >= ((int32_t)L_15)))
		{
			goto IL_0060;
		}
	}
	{
		Predicate_1_t5A30DC3457D23124EDD16C06F92FCB77A9C8A8FD* L_16 = ___0_match;
		WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577* L_17 = __this->____items;
		int32_t L_18 = V_1;
		NullCheck(L_17);
		int32_t L_19 = L_18;
		WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44 L_20 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		NullCheck(L_16);
		bool L_21;
		L_21 = Predicate_1_Invoke_m8D5A11CC70C8E6CD6EE4FD9D625B299AF1B8DCE7_inline(L_16, L_20, il2cpp_rgctx_method(method->klass->rgctx_data, 35));
		if (L_21)
		{
			goto IL_003f;
		}
	}

IL_0060:
	{
		int32_t L_22 = V_1;
		int32_t L_23 = __this->____size;
		if ((((int32_t)L_22) >= ((int32_t)L_23)))
		{
			goto IL_0089;
		}
	}
	{
		WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577* L_24 = __this->____items;
		int32_t L_25 = V_0;
		int32_t L_26 = L_25;
		V_0 = ((int32_t)il2cpp_codegen_add(L_26, 1));
		WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577* L_27 = __this->____items;
		int32_t L_28 = V_1;
		int32_t L_29 = L_28;
		V_1 = ((int32_t)il2cpp_codegen_add(L_29, 1));
		NullCheck(L_27);
		int32_t L_30 = L_29;
		WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44 L_31 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_30));
		NullCheck(L_24);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(L_26), (WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44)L_31);
	}

IL_0089:
	{
		int32_t L_32 = V_1;
		int32_t L_33 = __this->____size;
		if ((((int32_t)L_32) < ((int32_t)L_33)))
		{
			goto IL_0043;
		}
	}
	{
	}
	{
		WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577* L_34 = __this->____items;
		int32_t L_35 = V_0;
		int32_t L_36 = __this->____size;
		int32_t L_37 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_34, L_35, ((int32_t)il2cpp_codegen_subtract(L_36, L_37)), NULL);
	}

IL_00ad:
	{
		int32_t L_38 = __this->____size;
		int32_t L_39 = V_0;
		int32_t L_40 = V_0;
		__this->____size = L_40;
		int32_t L_41 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_41, 1));
		return ((int32_t)il2cpp_codegen_subtract(L_38, L_39));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_m7476D799F5CC07697D447853DA4DAEB4D3741B84_gshared (List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRange_IndexException_mC7661B8C6DD827679C95FC6B6C08F8724174936D(NULL);
	}

IL_000e:
	{
		int32_t L_2 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_subtract(L_2, 1));
		int32_t L_3 = ___0_index;
		int32_t L_4 = __this->____size;
		if ((((int32_t)L_3) >= ((int32_t)L_4)))
		{
			goto IL_0042;
		}
	}
	{
		WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577* L_5 = __this->____items;
		int32_t L_6 = ___0_index;
		WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577* L_7 = __this->____items;
		int32_t L_8 = ___0_index;
		int32_t L_9 = __this->____size;
		int32_t L_10 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, ((int32_t)il2cpp_codegen_add(L_6, 1)), (RuntimeArray*)L_7, L_8, ((int32_t)il2cpp_codegen_subtract(L_9, L_10)), NULL);
	}

IL_0042:
	{
	}
	{
		WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577* L_11 = __this->____items;
		int32_t L_12 = __this->____size;
		il2cpp_codegen_initobj((&V_0), sizeof(WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44));
		WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44 L_13 = V_0;
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(L_12), (WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44)L_13);
	}

IL_0063:
	{
		int32_t L_14 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_14, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveRange_m2901392D7A738F8CF88B0BA8F672545272728AAE_gshared (List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4* __this, int32_t ___0_index, int32_t ___1_count, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_count;
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F((int32_t)((int32_t)16), (int32_t)4, NULL);
	}

IL_0015:
	{
		int32_t L_2 = __this->____size;
		int32_t L_3 = ___0_index;
		int32_t L_4 = ___1_count;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_2, L_3))) >= ((int32_t)L_4)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)((int32_t)23), NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_count;
		if ((((int32_t)L_5) <= ((int32_t)0)))
		{
			goto IL_008d;
		}
	}
	{
		int32_t L_6 = __this->____size;
		int32_t L_7 = __this->____size;
		int32_t L_8 = ___1_count;
		__this->____size = ((int32_t)il2cpp_codegen_subtract(L_7, L_8));
		int32_t L_9 = ___0_index;
		int32_t L_10 = __this->____size;
		if ((((int32_t)L_9) >= ((int32_t)L_10)))
		{
			goto IL_0066;
		}
	}
	{
		WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577* L_11 = __this->____items;
		int32_t L_12 = ___0_index;
		int32_t L_13 = ___1_count;
		WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577* L_14 = __this->____items;
		int32_t L_15 = ___0_index;
		int32_t L_16 = __this->____size;
		int32_t L_17 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_11, ((int32_t)il2cpp_codegen_add(L_12, L_13)), (RuntimeArray*)L_14, L_15, ((int32_t)il2cpp_codegen_subtract(L_16, L_17)), NULL);
	}

IL_0066:
	{
		int32_t L_18 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_18, 1));
	}
	{
		WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577* L_19 = __this->____items;
		int32_t L_20 = __this->____size;
		int32_t L_21 = ___1_count;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_19, L_20, L_21, NULL);
	}

IL_008d:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Reverse_mC5E17A02816494CB629ABC67C63BF7C11660EEE2_gshared (List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = List_1_get_Count_m2F90A932E325FFA55047769F5E45E453D80C27D1_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 17));
		List_1_Reverse_mA82B743941194D34E26FD74ABCA431B3E5B9C2FF(__this, 0, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 36));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Reverse_mA82B743941194D34E26FD74ABCA431B3E5B9C2FF_gshared (List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4* __this, int32_t ___0_index, int32_t ___1_count, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_count;
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F((int32_t)((int32_t)16), (int32_t)4, NULL);
	}

IL_0015:
	{
		int32_t L_2 = __this->____size;
		int32_t L_3 = ___0_index;
		int32_t L_4 = ___1_count;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_2, L_3))) >= ((int32_t)L_4)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)((int32_t)23), NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_count;
		if ((((int32_t)L_5) <= ((int32_t)1)))
		{
			goto IL_0038;
		}
	}
	{
		WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577* L_6 = __this->____items;
		int32_t L_7 = ___0_index;
		int32_t L_8 = ___1_count;
		Array_Reverse_TisWorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44_m88E01FB6C608D58721AAECE3C58B2107CB926E3B(L_6, L_7, L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 37));
	}

IL_0038:
	{
		int32_t L_9 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_9, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_mDED6F07C6D7F8E15DD7BE41B1F142B361F45E41F_gshared (List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = List_1_get_Count_m2F90A932E325FFA55047769F5E45E453D80C27D1_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 17));
		RuntimeObject* L_1 = ___0_comparer;
		List_1_Sort_m740F84AD8B0226D65AE841BEA5DA739C69A29FAE(__this, 0, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 39));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_m740F84AD8B0226D65AE841BEA5DA739C69A29FAE_gshared (List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4* __this, int32_t ___0_index, int32_t ___1_count, RuntimeObject* ___2_comparer, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_count;
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F((int32_t)((int32_t)16), (int32_t)4, NULL);
	}

IL_0015:
	{
		int32_t L_2 = __this->____size;
		int32_t L_3 = ___0_index;
		int32_t L_4 = ___1_count;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_2, L_3))) >= ((int32_t)L_4)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)((int32_t)23), NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_count;
		if ((((int32_t)L_5) <= ((int32_t)1)))
		{
			goto IL_0039;
		}
	}
	{
		WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577* L_6 = __this->____items;
		int32_t L_7 = ___0_index;
		int32_t L_8 = ___1_count;
		RuntimeObject* L_9 = ___2_comparer;
		Array_Sort_TisWorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44_m4974E84199207C342ABD5C3DDB83FB22A7831AF8(L_6, L_7, L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 40));
	}

IL_0039:
	{
		int32_t L_10 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_10, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_m9C2F84308D7884A5E74414FA29C52E3922BE50D8_gshared (List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4* __this, Comparison_1_t4349A0C0F6E57844038D08909A07D093BF8BBF87* ___0_comparison, const RuntimeMethod* method) 
{
	{
		Comparison_1_t4349A0C0F6E57844038D08909A07D093BF8BBF87* L_0 = ___0_comparison;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)((int32_t)34), NULL);
	}

IL_000a:
	{
		int32_t L_1 = __this->____size;
		if ((((int32_t)L_1) <= ((int32_t)1)))
		{
			goto IL_0026;
		}
	}
	{
		WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577* L_2 = __this->____items;
		int32_t L_3 = __this->____size;
		Comparison_1_t4349A0C0F6E57844038D08909A07D093BF8BBF87* L_4 = ___0_comparison;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 43));
		ArraySortHelper_1_Sort_mF8B226978F672DF67F415832E3FCC44027498627(L_2, 0, L_3, L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 42));
	}

IL_0026:
	{
		int32_t L_5 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_5, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577* List_1_ToArray_m984AB52176DCF42799585854230BD2EF36BF8312_gshared (List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4* __this, const RuntimeMethod* method) 
{
	WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577* V_0 = NULL;
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577* L_1 = ((List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 2)))->___s_emptyArray;
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____size;
		WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577* L_3 = (WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577*)(WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_2);
		V_0 = L_3;
		WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577* L_4 = __this->____items;
		WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577* L_5 = V_0;
		int32_t L_6 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_4, 0, (RuntimeArray*)L_5, 0, L_6, NULL);
		WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577* L_7 = V_0;
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddEnumerable_m0C19209F7F2E7D8F63F4AEDAB78FF7F76347ECFB_gshared (List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4* __this, RuntimeObject* ___0_enumerable, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		RuntimeObject* L_1 = ___0_enumerable;
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 4), L_1);
		V_0 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0063:
			{
				{
					RuntimeObject* L_3 = V_0;
					if (!L_3)
					{
						goto IL_006c;
					}
				}
				{
					RuntimeObject* L_4 = V_0;
					NullCheck((RuntimeObject*)L_4);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_4);
				}

IL_006c:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_0059_1;
			}

IL_0017_1:
			{
				RuntimeObject* L_5 = V_0;
				NullCheck(L_5);
				WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44 L_6;
				L_6 = InterfaceFuncInvoker0< WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44 >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 27), L_5);
				V_1 = L_6;
				int32_t L_7 = __this->____size;
				WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577* L_8 = __this->____items;
				NullCheck(L_8);
				if ((!(((uint32_t)L_7) == ((uint32_t)((int32_t)(((RuntimeArray*)L_8)->max_length))))))
				{
					goto IL_003c_1;
				}
			}
			{
				int32_t L_9 = __this->____size;
				List_1_EnsureCapacity_mF38503ED9938B2CECF0B618845E9E32167654016(__this, ((int32_t)il2cpp_codegen_add(L_9, 1)), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
			}

IL_003c_1:
			{
				WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577* L_10 = __this->____items;
				int32_t L_11 = __this->____size;
				V_2 = L_11;
				int32_t L_12 = V_2;
				__this->____size = ((int32_t)il2cpp_codegen_add(L_12, 1));
				int32_t L_13 = V_2;
				WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44 L_14 = V_1;
				NullCheck(L_10);
				(L_10)->SetAt(static_cast<il2cpp_array_size_t>(L_13), (WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44)L_14);
			}

IL_0059_1:
			{
				RuntimeObject* L_15 = V_0;
				NullCheck((RuntimeObject*)L_15);
				bool L_16;
				L_16 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_15);
				if (L_16)
				{
					goto IL_0017_1;
				}
			}
			{
				goto IL_006d;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_006d:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__cctor_m6D6789A3D7BD60EC295E929536719E1D5FB94E91_gshared (const RuntimeMethod* method) 
{
	{
		WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577* L_0 = (WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577*)(WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577*)SZArrayNew(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 3), (uint32_t)0);
		((List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___s_emptyArray = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___s_emptyArray), (void*)L_0);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LockedStack_TryPush_m5BDC2C116499049CE5BA9BE19DA9FB24922D6C35_gshared (LockedStack_t000073AA14F1B0C46471D9C699C9CDE10CB7CA17* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_array, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t V_1 = 0;
	{
		V_0 = (bool)0;
		Monitor_Enter_m759A82E6E56E06C313A9AF4679E304E0D58ABB93((RuntimeObject*)__this, NULL);
		int32_t L_0 = __this->____count;
		if ((((int32_t)L_0) >= ((int32_t)8)))
		{
			goto IL_0046;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		bool L_1 = ((TlsOverPerCoreLockedStacksArrayPool_1_t99785B1054684FDD1A65104B70B272C02AA00542_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 2)))->___s_trimBuffers;
		if (!L_1)
		{
			goto IL_002b;
		}
	}
	{
		int32_t L_2 = __this->____count;
		if (L_2)
		{
			goto IL_002b;
		}
	}
	{
		int32_t L_3;
		L_3 = Environment_get_TickCount_m183BFCF001E12849E3D898957F0B81FD88BA183C(NULL);
		__this->____firstStackItemMS = (uint32_t)L_3;
	}

IL_002b:
	{
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_4 = __this->____arrays;
		int32_t L_5 = __this->____count;
		V_1 = L_5;
		int32_t L_6 = V_1;
		__this->____count = ((int32_t)il2cpp_codegen_add(L_6, 1));
		int32_t L_7 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = ___0_array;
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)L_8);
		V_0 = (bool)1;
	}

IL_0046:
	{
		Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA((RuntimeObject*)__this, NULL);
		bool L_9 = V_0;
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* LockedStack_TryPop_mDB91FB748A9B7CE098ADDA59FEF9C3E8B893E330_gshared (LockedStack_t000073AA14F1B0C46471D9C699C9CDE10CB7CA17* __this, const RuntimeMethod* method) 
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	int32_t V_1 = 0;
	{
		V_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL;
		Monitor_Enter_m759A82E6E56E06C313A9AF4679E304E0D58ABB93((RuntimeObject*)__this, NULL);
		int32_t L_0 = __this->____count;
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_0038;
		}
	}
	{
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_1 = __this->____arrays;
		int32_t L_2 = __this->____count;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_2, 1));
		int32_t L_3 = V_1;
		__this->____count = L_3;
		int32_t L_4 = V_1;
		NullCheck(L_1);
		int32_t L_5 = L_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		V_0 = L_6;
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_7 = __this->____arrays;
		int32_t L_8 = __this->____count;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, NULL);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(L_8), (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL);
	}

IL_0038:
	{
		Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA((RuntimeObject*)__this, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = V_0;
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LockedStack_Trim_mE6765D2537AE69D5BE9A7F77BE76190B24237FD2_gshared (LockedStack_t000073AA14F1B0C46471D9C699C9CDE10CB7CA17* __this, uint32_t ___0_tickCount, int32_t ___1_id, int32_t ___2_pressure, int32_t ___3_bucketSize, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArrayPoolEventSource_tDB6CA549DFC2FBEB134C71EB85DBD6D943E5C888_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	LockedStack_t000073AA14F1B0C46471D9C699C9CDE10CB7CA17* V_1 = NULL;
	bool V_2 = false;
	ArrayPoolEventSource_tDB6CA549DFC2FBEB134C71EB85DBD6D943E5C888* V_3 = NULL;
	int32_t V_4 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_5 = NULL;
	int32_t V_6 = 0;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = __this->____count;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		return;
	}

IL_0009:
	{
		int32_t L_1 = ___2_pressure;
		if ((((int32_t)L_1) == ((int32_t)2)))
		{
			goto IL_0014;
		}
	}
	{
		G_B5_0 = ((int32_t)60000);
		goto IL_0019;
	}

IL_0014:
	{
		G_B5_0 = ((int32_t)10000);
	}

IL_0019:
	{
		V_0 = (uint32_t)G_B5_0;
		V_1 = __this;
		V_2 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0110:
			{
				{
					bool L_2 = V_2;
					if (!L_2)
					{
						goto IL_0119;
					}
				}
				{
					LockedStack_t000073AA14F1B0C46471D9C699C9CDE10CB7CA17* L_3 = V_1;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA((RuntimeObject*)L_3, NULL);
				}

IL_0119:
				{
					return;
				}
			}
		});
		try
		{
			{
				LockedStack_t000073AA14F1B0C46471D9C699C9CDE10CB7CA17* L_4 = V_1;
				Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149((RuntimeObject*)L_4, (&V_2), NULL);
				int32_t L_5 = __this->____count;
				if ((((int32_t)L_5) <= ((int32_t)0)))
				{
					goto IL_0038_1;
				}
			}
			{
				uint32_t L_6 = __this->____firstStackItemMS;
				uint32_t L_7 = ___0_tickCount;
				if ((!(((uint32_t)L_6) <= ((uint32_t)L_7))))
				{
					goto IL_0046_1;
				}
			}

IL_0038_1:
			{
				uint32_t L_8 = ___0_tickCount;
				uint32_t L_9 = __this->____firstStackItemMS;
				uint32_t L_10 = V_0;
				if ((!(((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_8, (int32_t)L_9))) > ((uint32_t)L_10))))
				{
					goto IL_010e_1;
				}
			}

IL_0046_1:
			{
				il2cpp_codegen_runtime_class_init_inline(ArrayPoolEventSource_tDB6CA549DFC2FBEB134C71EB85DBD6D943E5C888_il2cpp_TypeInfo_var);
				ArrayPoolEventSource_tDB6CA549DFC2FBEB134C71EB85DBD6D943E5C888* L_11 = ((ArrayPoolEventSource_tDB6CA549DFC2FBEB134C71EB85DBD6D943E5C888_StaticFields*)il2cpp_codegen_static_fields_for(ArrayPoolEventSource_tDB6CA549DFC2FBEB134C71EB85DBD6D943E5C888_il2cpp_TypeInfo_var))->___Log;
				V_3 = L_11;
				V_4 = 1;
				int32_t L_12 = ___2_pressure;
				if ((((int32_t)L_12) == ((int32_t)1)))
				{
					goto IL_0089_1;
				}
			}
			{
				int32_t L_13 = ___2_pressure;
				if ((!(((uint32_t)L_13) == ((uint32_t)2))))
				{
					goto IL_00d3_1;
				}
			}
			{
				V_4 = 8;
				int32_t L_14 = ___3_bucketSize;
				if ((((int32_t)L_14) <= ((int32_t)((int32_t)16384))))
				{
					goto IL_0069_1;
				}
			}
			{
				int32_t L_15 = V_4;
				V_4 = ((int32_t)il2cpp_codegen_add(L_15, 1));
			}

IL_0069_1:
			{
				int32_t L_16;
				L_16 = il2cpp_unsafe_sizeof<uint8_t>();
				if ((((int32_t)L_16) <= ((int32_t)((int32_t)16))))
				{
					goto IL_0078_1;
				}
			}
			{
				int32_t L_17 = V_4;
				V_4 = ((int32_t)il2cpp_codegen_add(L_17, 1));
			}

IL_0078_1:
			{
				int32_t L_18;
				L_18 = il2cpp_unsafe_sizeof<uint8_t>();
				if ((((int32_t)L_18) <= ((int32_t)((int32_t)32))))
				{
					goto IL_00d3_1;
				}
			}
			{
				int32_t L_19 = V_4;
				V_4 = ((int32_t)il2cpp_codegen_add(L_19, 1));
				goto IL_00d3_1;
			}

IL_0089_1:
			{
				V_4 = 2;
				goto IL_00d3_1;
			}

IL_008e_1:
			{
				ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_20 = __this->____arrays;
				int32_t L_21 = __this->____count;
				V_6 = ((int32_t)il2cpp_codegen_subtract(L_21, 1));
				int32_t L_22 = V_6;
				__this->____count = L_22;
				int32_t L_23 = V_6;
				NullCheck(L_20);
				int32_t L_24 = L_23;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_25 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
				V_5 = L_25;
				ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_26 = __this->____arrays;
				int32_t L_27 = __this->____count;
				NullCheck(L_26);
				ArrayElementTypeCheck (L_26, NULL);
				(L_26)->SetAt(static_cast<il2cpp_array_size_t>(L_27), (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL);
				ArrayPoolEventSource_tDB6CA549DFC2FBEB134C71EB85DBD6D943E5C888* L_28 = V_3;
				NullCheck((EventSource_tA86759A1E6F272632C299AAC181C0A67E5C52F25*)L_28);
				bool L_29;
				L_29 = EventSource_IsEnabled_m0B2F63F81423D7832DC5526D0F3490C77CAB57A5((EventSource_tA86759A1E6F272632C299AAC181C0A67E5C52F25*)L_28, NULL);
				if (!L_29)
				{
					goto IL_00d3_1;
				}
			}
			{
				ArrayPoolEventSource_tDB6CA549DFC2FBEB134C71EB85DBD6D943E5C888* L_30 = V_3;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_31 = V_5;
				NullCheck((RuntimeObject*)L_31);
				int32_t L_32;
				L_32 = VirtualFuncInvoker0< int32_t >::Invoke(2, (RuntimeObject*)L_31);
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_33 = V_5;
				NullCheck(L_33);
				int32_t L_34 = ___1_id;
				NullCheck(L_30);
				ArrayPoolEventSource_BufferTrimmed_m7E5BBBCE84BEF9C79981E482AC6D2FA6FFB2ECB0(L_30, L_32, ((int32_t)(((RuntimeArray*)L_33)->max_length)), L_34, NULL);
			}

IL_00d3_1:
			{
				int32_t L_35 = __this->____count;
				if ((((int32_t)L_35) <= ((int32_t)0)))
				{
					goto IL_00e6_1;
				}
			}
			{
				int32_t L_36 = V_4;
				int32_t L_37 = L_36;
				V_4 = ((int32_t)il2cpp_codegen_subtract(L_37, 1));
				if ((((int32_t)L_37) > ((int32_t)0)))
				{
					goto IL_008e_1;
				}
			}

IL_00e6_1:
			{
				int32_t L_38 = __this->____count;
				if ((((int32_t)L_38) <= ((int32_t)0)))
				{
					goto IL_010e_1;
				}
			}
			{
				uint32_t L_39 = __this->____firstStackItemMS;
				if ((!(((uint32_t)L_39) < ((uint32_t)((int32_t)-15001)))))
				{
					goto IL_010e_1;
				}
			}
			{
				uint32_t L_40 = __this->____firstStackItemMS;
				__this->____firstStackItemMS = (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_40, ((int32_t)15000)));
			}

IL_010e_1:
			{
				goto IL_011a;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_011a:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LockedStack__ctor_m48BF912C083D1F7936C86ADE5D2E67C635D446A7_gshared (LockedStack_t000073AA14F1B0C46471D9C699C9CDE10CB7CA17* __this, const RuntimeMethod* method) 
{
	{
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_0 = (ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA*)(ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 8), (uint32_t)8);
		__this->____arrays = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____arrays), (void*)L_0);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LockedStack_TryPush_m82B3979AB5E28781A560CEA668FE26A16F5DA7F3_gshared (LockedStack_t55EA3BEB39A80E4F0A2009E69BE4365D6CFFBB7B* __this, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___0_array, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t V_1 = 0;
	{
		V_0 = (bool)0;
		Monitor_Enter_m759A82E6E56E06C313A9AF4679E304E0D58ABB93((RuntimeObject*)__this, NULL);
		int32_t L_0 = __this->____count;
		if ((((int32_t)L_0) >= ((int32_t)8)))
		{
			goto IL_0046;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		bool L_1 = ((TlsOverPerCoreLockedStacksArrayPool_1_t8906D917899793F9523A1B1DFB3008CA600B7F00_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 2)))->___s_trimBuffers;
		if (!L_1)
		{
			goto IL_002b;
		}
	}
	{
		int32_t L_2 = __this->____count;
		if (L_2)
		{
			goto IL_002b;
		}
	}
	{
		int32_t L_3;
		L_3 = Environment_get_TickCount_m183BFCF001E12849E3D898957F0B81FD88BA183C(NULL);
		__this->____firstStackItemMS = (uint32_t)L_3;
	}

IL_002b:
	{
		CharU5BU5DU5BU5D_tE6ABF380CD3BBDBB52C3EF725A02224F2B4AA680* L_4 = __this->____arrays;
		int32_t L_5 = __this->____count;
		V_1 = L_5;
		int32_t L_6 = V_1;
		__this->____count = ((int32_t)il2cpp_codegen_add(L_6, 1));
		int32_t L_7 = V_1;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_8 = ___0_array;
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)L_8);
		V_0 = (bool)1;
	}

IL_0046:
	{
		Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA((RuntimeObject*)__this, NULL);
		bool L_9 = V_0;
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* LockedStack_TryPop_mCD2CF7FF64C294717440AC2805C364BFE96249DD_gshared (LockedStack_t55EA3BEB39A80E4F0A2009E69BE4365D6CFFBB7B* __this, const RuntimeMethod* method) 
{
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* V_0 = NULL;
	int32_t V_1 = 0;
	{
		V_0 = (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)NULL;
		Monitor_Enter_m759A82E6E56E06C313A9AF4679E304E0D58ABB93((RuntimeObject*)__this, NULL);
		int32_t L_0 = __this->____count;
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_0038;
		}
	}
	{
		CharU5BU5DU5BU5D_tE6ABF380CD3BBDBB52C3EF725A02224F2B4AA680* L_1 = __this->____arrays;
		int32_t L_2 = __this->____count;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_2, 1));
		int32_t L_3 = V_1;
		__this->____count = L_3;
		int32_t L_4 = V_1;
		NullCheck(L_1);
		int32_t L_5 = L_4;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_6 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		V_0 = L_6;
		CharU5BU5DU5BU5D_tE6ABF380CD3BBDBB52C3EF725A02224F2B4AA680* L_7 = __this->____arrays;
		int32_t L_8 = __this->____count;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, NULL);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(L_8), (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)NULL);
	}

IL_0038:
	{
		Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA((RuntimeObject*)__this, NULL);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_9 = V_0;
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LockedStack_Trim_m6223F32D4A246447A96A76D92C720547ED1A4F81_gshared (LockedStack_t55EA3BEB39A80E4F0A2009E69BE4365D6CFFBB7B* __this, uint32_t ___0_tickCount, int32_t ___1_id, int32_t ___2_pressure, int32_t ___3_bucketSize, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArrayPoolEventSource_tDB6CA549DFC2FBEB134C71EB85DBD6D943E5C888_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	LockedStack_t55EA3BEB39A80E4F0A2009E69BE4365D6CFFBB7B* V_1 = NULL;
	bool V_2 = false;
	ArrayPoolEventSource_tDB6CA549DFC2FBEB134C71EB85DBD6D943E5C888* V_3 = NULL;
	int32_t V_4 = 0;
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* V_5 = NULL;
	int32_t V_6 = 0;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = __this->____count;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		return;
	}

IL_0009:
	{
		int32_t L_1 = ___2_pressure;
		if ((((int32_t)L_1) == ((int32_t)2)))
		{
			goto IL_0014;
		}
	}
	{
		G_B5_0 = ((int32_t)60000);
		goto IL_0019;
	}

IL_0014:
	{
		G_B5_0 = ((int32_t)10000);
	}

IL_0019:
	{
		V_0 = (uint32_t)G_B5_0;
		V_1 = __this;
		V_2 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0110:
			{
				{
					bool L_2 = V_2;
					if (!L_2)
					{
						goto IL_0119;
					}
				}
				{
					LockedStack_t55EA3BEB39A80E4F0A2009E69BE4365D6CFFBB7B* L_3 = V_1;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA((RuntimeObject*)L_3, NULL);
				}

IL_0119:
				{
					return;
				}
			}
		});
		try
		{
			{
				LockedStack_t55EA3BEB39A80E4F0A2009E69BE4365D6CFFBB7B* L_4 = V_1;
				Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149((RuntimeObject*)L_4, (&V_2), NULL);
				int32_t L_5 = __this->____count;
				if ((((int32_t)L_5) <= ((int32_t)0)))
				{
					goto IL_0038_1;
				}
			}
			{
				uint32_t L_6 = __this->____firstStackItemMS;
				uint32_t L_7 = ___0_tickCount;
				if ((!(((uint32_t)L_6) <= ((uint32_t)L_7))))
				{
					goto IL_0046_1;
				}
			}

IL_0038_1:
			{
				uint32_t L_8 = ___0_tickCount;
				uint32_t L_9 = __this->____firstStackItemMS;
				uint32_t L_10 = V_0;
				if ((!(((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_8, (int32_t)L_9))) > ((uint32_t)L_10))))
				{
					goto IL_010e_1;
				}
			}

IL_0046_1:
			{
				il2cpp_codegen_runtime_class_init_inline(ArrayPoolEventSource_tDB6CA549DFC2FBEB134C71EB85DBD6D943E5C888_il2cpp_TypeInfo_var);
				ArrayPoolEventSource_tDB6CA549DFC2FBEB134C71EB85DBD6D943E5C888* L_11 = ((ArrayPoolEventSource_tDB6CA549DFC2FBEB134C71EB85DBD6D943E5C888_StaticFields*)il2cpp_codegen_static_fields_for(ArrayPoolEventSource_tDB6CA549DFC2FBEB134C71EB85DBD6D943E5C888_il2cpp_TypeInfo_var))->___Log;
				V_3 = L_11;
				V_4 = 1;
				int32_t L_12 = ___2_pressure;
				if ((((int32_t)L_12) == ((int32_t)1)))
				{
					goto IL_0089_1;
				}
			}
			{
				int32_t L_13 = ___2_pressure;
				if ((!(((uint32_t)L_13) == ((uint32_t)2))))
				{
					goto IL_00d3_1;
				}
			}
			{
				V_4 = 8;
				int32_t L_14 = ___3_bucketSize;
				if ((((int32_t)L_14) <= ((int32_t)((int32_t)16384))))
				{
					goto IL_0069_1;
				}
			}
			{
				int32_t L_15 = V_4;
				V_4 = ((int32_t)il2cpp_codegen_add(L_15, 1));
			}

IL_0069_1:
			{
				int32_t L_16;
				L_16 = il2cpp_unsafe_sizeof<Il2CppChar>();
				if ((((int32_t)L_16) <= ((int32_t)((int32_t)16))))
				{
					goto IL_0078_1;
				}
			}
			{
				int32_t L_17 = V_4;
				V_4 = ((int32_t)il2cpp_codegen_add(L_17, 1));
			}

IL_0078_1:
			{
				int32_t L_18;
				L_18 = il2cpp_unsafe_sizeof<Il2CppChar>();
				if ((((int32_t)L_18) <= ((int32_t)((int32_t)32))))
				{
					goto IL_00d3_1;
				}
			}
			{
				int32_t L_19 = V_4;
				V_4 = ((int32_t)il2cpp_codegen_add(L_19, 1));
				goto IL_00d3_1;
			}

IL_0089_1:
			{
				V_4 = 2;
				goto IL_00d3_1;
			}

IL_008e_1:
			{
				CharU5BU5DU5BU5D_tE6ABF380CD3BBDBB52C3EF725A02224F2B4AA680* L_20 = __this->____arrays;
				int32_t L_21 = __this->____count;
				V_6 = ((int32_t)il2cpp_codegen_subtract(L_21, 1));
				int32_t L_22 = V_6;
				__this->____count = L_22;
				int32_t L_23 = V_6;
				NullCheck(L_20);
				int32_t L_24 = L_23;
				CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_25 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
				V_5 = L_25;
				CharU5BU5DU5BU5D_tE6ABF380CD3BBDBB52C3EF725A02224F2B4AA680* L_26 = __this->____arrays;
				int32_t L_27 = __this->____count;
				NullCheck(L_26);
				ArrayElementTypeCheck (L_26, NULL);
				(L_26)->SetAt(static_cast<il2cpp_array_size_t>(L_27), (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)NULL);
				ArrayPoolEventSource_tDB6CA549DFC2FBEB134C71EB85DBD6D943E5C888* L_28 = V_3;
				NullCheck((EventSource_tA86759A1E6F272632C299AAC181C0A67E5C52F25*)L_28);
				bool L_29;
				L_29 = EventSource_IsEnabled_m0B2F63F81423D7832DC5526D0F3490C77CAB57A5((EventSource_tA86759A1E6F272632C299AAC181C0A67E5C52F25*)L_28, NULL);
				if (!L_29)
				{
					goto IL_00d3_1;
				}
			}
			{
				ArrayPoolEventSource_tDB6CA549DFC2FBEB134C71EB85DBD6D943E5C888* L_30 = V_3;
				CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_31 = V_5;
				NullCheck((RuntimeObject*)L_31);
				int32_t L_32;
				L_32 = VirtualFuncInvoker0< int32_t >::Invoke(2, (RuntimeObject*)L_31);
				CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_33 = V_5;
				NullCheck(L_33);
				int32_t L_34 = ___1_id;
				NullCheck(L_30);
				ArrayPoolEventSource_BufferTrimmed_m7E5BBBCE84BEF9C79981E482AC6D2FA6FFB2ECB0(L_30, L_32, ((int32_t)(((RuntimeArray*)L_33)->max_length)), L_34, NULL);
			}

IL_00d3_1:
			{
				int32_t L_35 = __this->____count;
				if ((((int32_t)L_35) <= ((int32_t)0)))
				{
					goto IL_00e6_1;
				}
			}
			{
				int32_t L_36 = V_4;
				int32_t L_37 = L_36;
				V_4 = ((int32_t)il2cpp_codegen_subtract(L_37, 1));
				if ((((int32_t)L_37) > ((int32_t)0)))
				{
					goto IL_008e_1;
				}
			}

IL_00e6_1:
			{
				int32_t L_38 = __this->____count;
				if ((((int32_t)L_38) <= ((int32_t)0)))
				{
					goto IL_010e_1;
				}
			}
			{
				uint32_t L_39 = __this->____firstStackItemMS;
				if ((!(((uint32_t)L_39) < ((uint32_t)((int32_t)-15001)))))
				{
					goto IL_010e_1;
				}
			}
			{
				uint32_t L_40 = __this->____firstStackItemMS;
				__this->____firstStackItemMS = (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_40, ((int32_t)15000)));
			}

IL_010e_1:
			{
				goto IL_011a;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_011a:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LockedStack__ctor_mDB2CB0C8C084B569C05BEFC87650BA56778A4A42_gshared (LockedStack_t55EA3BEB39A80E4F0A2009E69BE4365D6CFFBB7B* __this, const RuntimeMethod* method) 
{
	{
		CharU5BU5DU5BU5D_tE6ABF380CD3BBDBB52C3EF725A02224F2B4AA680* L_0 = (CharU5BU5DU5BU5D_tE6ABF380CD3BBDBB52C3EF725A02224F2B4AA680*)(CharU5BU5DU5BU5D_tE6ABF380CD3BBDBB52C3EF725A02224F2B4AA680*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 8), (uint32_t)8);
		__this->____arrays = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____arrays), (void*)L_0);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LockedStack_TryPush_m42B8D8A267B151AFF0AB674C698C6E45DFB7BAE7_gshared (LockedStack_t41A87F7FF06A8633FE1FF193C1AA749E23B5A5DC* __this, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_array, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t V_1 = 0;
	{
		V_0 = (bool)0;
		Monitor_Enter_m759A82E6E56E06C313A9AF4679E304E0D58ABB93((RuntimeObject*)__this, NULL);
		int32_t L_0 = __this->____count;
		if ((((int32_t)L_0) >= ((int32_t)8)))
		{
			goto IL_0046;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		bool L_1 = ((TlsOverPerCoreLockedStacksArrayPool_1_t5B35E5C672C6B144AA2ACF24F6AB93FC7FDEAECC_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 2)))->___s_trimBuffers;
		if (!L_1)
		{
			goto IL_002b;
		}
	}
	{
		int32_t L_2 = __this->____count;
		if (L_2)
		{
			goto IL_002b;
		}
	}
	{
		int32_t L_3;
		L_3 = Environment_get_TickCount_m183BFCF001E12849E3D898957F0B81FD88BA183C(NULL);
		__this->____firstStackItemMS = (uint32_t)L_3;
	}

IL_002b:
	{
		Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* L_4 = __this->____arrays;
		int32_t L_5 = __this->____count;
		V_1 = L_5;
		int32_t L_6 = V_1;
		__this->____count = ((int32_t)il2cpp_codegen_add(L_6, 1));
		int32_t L_7 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = ___0_array;
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)L_8);
		V_0 = (bool)1;
	}

IL_0046:
	{
		Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA((RuntimeObject*)__this, NULL);
		bool L_9 = V_0;
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* LockedStack_TryPop_m57DE5B7210D358D526648221485B4AF85F088405_gshared (LockedStack_t41A87F7FF06A8633FE1FF193C1AA749E23B5A5DC* __this, const RuntimeMethod* method) 
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	int32_t V_1 = 0;
	{
		V_0 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL;
		Monitor_Enter_m759A82E6E56E06C313A9AF4679E304E0D58ABB93((RuntimeObject*)__this, NULL);
		int32_t L_0 = __this->____count;
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_0038;
		}
	}
	{
		Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* L_1 = __this->____arrays;
		int32_t L_2 = __this->____count;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_2, 1));
		int32_t L_3 = V_1;
		__this->____count = L_3;
		int32_t L_4 = V_1;
		NullCheck(L_1);
		int32_t L_5 = L_4;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		V_0 = L_6;
		Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* L_7 = __this->____arrays;
		int32_t L_8 = __this->____count;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, NULL);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(L_8), (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL);
	}

IL_0038:
	{
		Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA((RuntimeObject*)__this, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = V_0;
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LockedStack_Trim_m4D537414CE1A41665FDDD1E21D002889BE70B5F8_gshared (LockedStack_t41A87F7FF06A8633FE1FF193C1AA749E23B5A5DC* __this, uint32_t ___0_tickCount, int32_t ___1_id, int32_t ___2_pressure, int32_t ___3_bucketSize, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArrayPoolEventSource_tDB6CA549DFC2FBEB134C71EB85DBD6D943E5C888_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	LockedStack_t41A87F7FF06A8633FE1FF193C1AA749E23B5A5DC* V_1 = NULL;
	bool V_2 = false;
	ArrayPoolEventSource_tDB6CA549DFC2FBEB134C71EB85DBD6D943E5C888* V_3 = NULL;
	int32_t V_4 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_5 = NULL;
	int32_t V_6 = 0;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = __this->____count;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		return;
	}

IL_0009:
	{
		int32_t L_1 = ___2_pressure;
		if ((((int32_t)L_1) == ((int32_t)2)))
		{
			goto IL_0014;
		}
	}
	{
		G_B5_0 = ((int32_t)60000);
		goto IL_0019;
	}

IL_0014:
	{
		G_B5_0 = ((int32_t)10000);
	}

IL_0019:
	{
		V_0 = (uint32_t)G_B5_0;
		V_1 = __this;
		V_2 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0110:
			{
				{
					bool L_2 = V_2;
					if (!L_2)
					{
						goto IL_0119;
					}
				}
				{
					LockedStack_t41A87F7FF06A8633FE1FF193C1AA749E23B5A5DC* L_3 = V_1;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA((RuntimeObject*)L_3, NULL);
				}

IL_0119:
				{
					return;
				}
			}
		});
		try
		{
			{
				LockedStack_t41A87F7FF06A8633FE1FF193C1AA749E23B5A5DC* L_4 = V_1;
				Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149((RuntimeObject*)L_4, (&V_2), NULL);
				int32_t L_5 = __this->____count;
				if ((((int32_t)L_5) <= ((int32_t)0)))
				{
					goto IL_0038_1;
				}
			}
			{
				uint32_t L_6 = __this->____firstStackItemMS;
				uint32_t L_7 = ___0_tickCount;
				if ((!(((uint32_t)L_6) <= ((uint32_t)L_7))))
				{
					goto IL_0046_1;
				}
			}

IL_0038_1:
			{
				uint32_t L_8 = ___0_tickCount;
				uint32_t L_9 = __this->____firstStackItemMS;
				uint32_t L_10 = V_0;
				if ((!(((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_8, (int32_t)L_9))) > ((uint32_t)L_10))))
				{
					goto IL_010e_1;
				}
			}

IL_0046_1:
			{
				il2cpp_codegen_runtime_class_init_inline(ArrayPoolEventSource_tDB6CA549DFC2FBEB134C71EB85DBD6D943E5C888_il2cpp_TypeInfo_var);
				ArrayPoolEventSource_tDB6CA549DFC2FBEB134C71EB85DBD6D943E5C888* L_11 = ((ArrayPoolEventSource_tDB6CA549DFC2FBEB134C71EB85DBD6D943E5C888_StaticFields*)il2cpp_codegen_static_fields_for(ArrayPoolEventSource_tDB6CA549DFC2FBEB134C71EB85DBD6D943E5C888_il2cpp_TypeInfo_var))->___Log;
				V_3 = L_11;
				V_4 = 1;
				int32_t L_12 = ___2_pressure;
				if ((((int32_t)L_12) == ((int32_t)1)))
				{
					goto IL_0089_1;
				}
			}
			{
				int32_t L_13 = ___2_pressure;
				if ((!(((uint32_t)L_13) == ((uint32_t)2))))
				{
					goto IL_00d3_1;
				}
			}
			{
				V_4 = 8;
				int32_t L_14 = ___3_bucketSize;
				if ((((int32_t)L_14) <= ((int32_t)((int32_t)16384))))
				{
					goto IL_0069_1;
				}
			}
			{
				int32_t L_15 = V_4;
				V_4 = ((int32_t)il2cpp_codegen_add(L_15, 1));
			}

IL_0069_1:
			{
				int32_t L_16;
				L_16 = il2cpp_unsafe_sizeof<int32_t>();
				if ((((int32_t)L_16) <= ((int32_t)((int32_t)16))))
				{
					goto IL_0078_1;
				}
			}
			{
				int32_t L_17 = V_4;
				V_4 = ((int32_t)il2cpp_codegen_add(L_17, 1));
			}

IL_0078_1:
			{
				int32_t L_18;
				L_18 = il2cpp_unsafe_sizeof<int32_t>();
				if ((((int32_t)L_18) <= ((int32_t)((int32_t)32))))
				{
					goto IL_00d3_1;
				}
			}
			{
				int32_t L_19 = V_4;
				V_4 = ((int32_t)il2cpp_codegen_add(L_19, 1));
				goto IL_00d3_1;
			}

IL_0089_1:
			{
				V_4 = 2;
				goto IL_00d3_1;
			}

IL_008e_1:
			{
				Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* L_20 = __this->____arrays;
				int32_t L_21 = __this->____count;
				V_6 = ((int32_t)il2cpp_codegen_subtract(L_21, 1));
				int32_t L_22 = V_6;
				__this->____count = L_22;
				int32_t L_23 = V_6;
				NullCheck(L_20);
				int32_t L_24 = L_23;
				Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_25 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
				V_5 = L_25;
				Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* L_26 = __this->____arrays;
				int32_t L_27 = __this->____count;
				NullCheck(L_26);
				ArrayElementTypeCheck (L_26, NULL);
				(L_26)->SetAt(static_cast<il2cpp_array_size_t>(L_27), (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL);
				ArrayPoolEventSource_tDB6CA549DFC2FBEB134C71EB85DBD6D943E5C888* L_28 = V_3;
				NullCheck((EventSource_tA86759A1E6F272632C299AAC181C0A67E5C52F25*)L_28);
				bool L_29;
				L_29 = EventSource_IsEnabled_m0B2F63F81423D7832DC5526D0F3490C77CAB57A5((EventSource_tA86759A1E6F272632C299AAC181C0A67E5C52F25*)L_28, NULL);
				if (!L_29)
				{
					goto IL_00d3_1;
				}
			}
			{
				ArrayPoolEventSource_tDB6CA549DFC2FBEB134C71EB85DBD6D943E5C888* L_30 = V_3;
				Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_31 = V_5;
				NullCheck((RuntimeObject*)L_31);
				int32_t L_32;
				L_32 = VirtualFuncInvoker0< int32_t >::Invoke(2, (RuntimeObject*)L_31);
				Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_33 = V_5;
				NullCheck(L_33);
				int32_t L_34 = ___1_id;
				NullCheck(L_30);
				ArrayPoolEventSource_BufferTrimmed_m7E5BBBCE84BEF9C79981E482AC6D2FA6FFB2ECB0(L_30, L_32, ((int32_t)(((RuntimeArray*)L_33)->max_length)), L_34, NULL);
			}

IL_00d3_1:
			{
				int32_t L_35 = __this->____count;
				if ((((int32_t)L_35) <= ((int32_t)0)))
				{
					goto IL_00e6_1;
				}
			}
			{
				int32_t L_36 = V_4;
				int32_t L_37 = L_36;
				V_4 = ((int32_t)il2cpp_codegen_subtract(L_37, 1));
				if ((((int32_t)L_37) > ((int32_t)0)))
				{
					goto IL_008e_1;
				}
			}

IL_00e6_1:
			{
				int32_t L_38 = __this->____count;
				if ((((int32_t)L_38) <= ((int32_t)0)))
				{
					goto IL_010e_1;
				}
			}
			{
				uint32_t L_39 = __this->____firstStackItemMS;
				if ((!(((uint32_t)L_39) < ((uint32_t)((int32_t)-15001)))))
				{
					goto IL_010e_1;
				}
			}
			{
				uint32_t L_40 = __this->____firstStackItemMS;
				__this->____firstStackItemMS = (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_40, ((int32_t)15000)));
			}

IL_010e_1:
			{
				goto IL_011a;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_011a:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LockedStack__ctor_m4E8B919AC1335C2FE1D57995CEF343FBE0386EE1_gshared (LockedStack_t41A87F7FF06A8633FE1FF193C1AA749E23B5A5DC* __this, const RuntimeMethod* method) 
{
	{
		Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* L_0 = (Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E*)(Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 8), (uint32_t)8);
		__this->____arrays = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____arrays), (void*)L_0);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LockedStack_TryPush_m43E5E7A2F0386A3BEF9CFD2705141DB4E81D52B0_gshared (LockedStack_tA2963E19C6D1029555446DD09B0B4208AC0F8E4A* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t V_1 = 0;
	{
		V_0 = (bool)0;
		Monitor_Enter_m759A82E6E56E06C313A9AF4679E304E0D58ABB93((RuntimeObject*)__this, NULL);
		int32_t L_0 = __this->____count;
		if ((((int32_t)L_0) >= ((int32_t)8)))
		{
			goto IL_0046;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		bool L_1 = ((TlsOverPerCoreLockedStacksArrayPool_1_tE35D2E7EF078343B5B040BA33BB77E88B1AC8F0F_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 2)))->___s_trimBuffers;
		if (!L_1)
		{
			goto IL_002b;
		}
	}
	{
		int32_t L_2 = __this->____count;
		if (L_2)
		{
			goto IL_002b;
		}
	}
	{
		int32_t L_3;
		L_3 = Environment_get_TickCount_m183BFCF001E12849E3D898957F0B81FD88BA183C(NULL);
		__this->____firstStackItemMS = (uint32_t)L_3;
	}

IL_002b:
	{
		__Il2CppFullySharedGenericTypeU5BU5DU5BU5D_tAE866946296CBB820B69570ADEE87D79ADAAC33F* L_4 = __this->____arrays;
		int32_t L_5 = __this->____count;
		V_1 = L_5;
		int32_t L_6 = V_1;
		__this->____count = ((int32_t)il2cpp_codegen_add(L_6, 1));
		int32_t L_7 = V_1;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_8 = ___0_array;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_8);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)L_8);
		V_0 = (bool)1;
	}

IL_0046:
	{
		Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA((RuntimeObject*)__this, NULL);
		bool L_9 = V_0;
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* LockedStack_TryPop_m25DDC8C5A35FAD9A7D146972888DE02342BD5DAB_gshared (LockedStack_tA2963E19C6D1029555446DD09B0B4208AC0F8E4A* __this, const RuntimeMethod* method) 
{
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* V_0 = NULL;
	int32_t V_1 = 0;
	{
		V_0 = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)NULL;
		Monitor_Enter_m759A82E6E56E06C313A9AF4679E304E0D58ABB93((RuntimeObject*)__this, NULL);
		int32_t L_0 = __this->____count;
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_0038;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5DU5BU5D_tAE866946296CBB820B69570ADEE87D79ADAAC33F* L_1 = __this->____arrays;
		int32_t L_2 = __this->____count;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_2, 1));
		int32_t L_3 = V_1;
		__this->____count = L_3;
		int32_t L_4 = V_1;
		NullCheck(L_1);
		int32_t L_5 = L_4;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_6 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		V_0 = L_6;
		__Il2CppFullySharedGenericTypeU5BU5DU5BU5D_tAE866946296CBB820B69570ADEE87D79ADAAC33F* L_7 = __this->____arrays;
		int32_t L_8 = __this->____count;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, NULL);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(L_8), (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)NULL);
	}

IL_0038:
	{
		Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA((RuntimeObject*)__this, NULL);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_9 = V_0;
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LockedStack_Trim_m2611CBE6E011E00269FB6B0610403EA10DEFCA1C_gshared (LockedStack_tA2963E19C6D1029555446DD09B0B4208AC0F8E4A* __this, uint32_t ___0_tickCount, int32_t ___1_id, int32_t ___2_pressure, int32_t ___3_bucketSize, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArrayPoolEventSource_tDB6CA549DFC2FBEB134C71EB85DBD6D943E5C888_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	LockedStack_tA2963E19C6D1029555446DD09B0B4208AC0F8E4A* V_1 = NULL;
	bool V_2 = false;
	ArrayPoolEventSource_tDB6CA549DFC2FBEB134C71EB85DBD6D943E5C888* V_3 = NULL;
	int32_t V_4 = 0;
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* V_5 = NULL;
	int32_t V_6 = 0;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = __this->____count;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		return;
	}

IL_0009:
	{
		int32_t L_1 = ___2_pressure;
		if ((((int32_t)L_1) == ((int32_t)2)))
		{
			goto IL_0014;
		}
	}
	{
		G_B5_0 = ((int32_t)60000);
		goto IL_0019;
	}

IL_0014:
	{
		G_B5_0 = ((int32_t)10000);
	}

IL_0019:
	{
		V_0 = (uint32_t)G_B5_0;
		V_1 = __this;
		V_2 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0110:
			{
				{
					bool L_2 = V_2;
					if (!L_2)
					{
						goto IL_0119;
					}
				}
				{
					LockedStack_tA2963E19C6D1029555446DD09B0B4208AC0F8E4A* L_3 = V_1;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA((RuntimeObject*)L_3, NULL);
				}

IL_0119:
				{
					return;
				}
			}
		});
		try
		{
			{
				LockedStack_tA2963E19C6D1029555446DD09B0B4208AC0F8E4A* L_4 = V_1;
				Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149((RuntimeObject*)L_4, (&V_2), NULL);
				int32_t L_5 = __this->____count;
				if ((((int32_t)L_5) <= ((int32_t)0)))
				{
					goto IL_0038_1;
				}
			}
			{
				uint32_t L_6 = __this->____firstStackItemMS;
				uint32_t L_7 = ___0_tickCount;
				if ((!(((uint32_t)L_6) <= ((uint32_t)L_7))))
				{
					goto IL_0046_1;
				}
			}

IL_0038_1:
			{
				uint32_t L_8 = ___0_tickCount;
				uint32_t L_9 = __this->____firstStackItemMS;
				uint32_t L_10 = V_0;
				if ((!(((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_8, (int32_t)L_9))) > ((uint32_t)L_10))))
				{
					goto IL_010e_1;
				}
			}

IL_0046_1:
			{
				il2cpp_codegen_runtime_class_init_inline(ArrayPoolEventSource_tDB6CA549DFC2FBEB134C71EB85DBD6D943E5C888_il2cpp_TypeInfo_var);
				ArrayPoolEventSource_tDB6CA549DFC2FBEB134C71EB85DBD6D943E5C888* L_11 = ((ArrayPoolEventSource_tDB6CA549DFC2FBEB134C71EB85DBD6D943E5C888_StaticFields*)il2cpp_codegen_static_fields_for(ArrayPoolEventSource_tDB6CA549DFC2FBEB134C71EB85DBD6D943E5C888_il2cpp_TypeInfo_var))->___Log;
				V_3 = L_11;
				V_4 = 1;
				int32_t L_12 = ___2_pressure;
				if ((((int32_t)L_12) == ((int32_t)1)))
				{
					goto IL_0089_1;
				}
			}
			{
				int32_t L_13 = ___2_pressure;
				if ((!(((uint32_t)L_13) == ((uint32_t)2))))
				{
					goto IL_00d3_1;
				}
			}
			{
				V_4 = 8;
				int32_t L_14 = ___3_bucketSize;
				if ((((int32_t)L_14) <= ((int32_t)((int32_t)16384))))
				{
					goto IL_0069_1;
				}
			}
			{
				int32_t L_15 = V_4;
				V_4 = ((int32_t)il2cpp_codegen_add(L_15, 1));
			}

IL_0069_1:
			{
				int32_t L_16;
				L_16 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)))(il2cpp_rgctx_method(method->klass->rgctx_data, 7));
				if ((((int32_t)L_16) <= ((int32_t)((int32_t)16))))
				{
					goto IL_0078_1;
				}
			}
			{
				int32_t L_17 = V_4;
				V_4 = ((int32_t)il2cpp_codegen_add(L_17, 1));
			}

IL_0078_1:
			{
				int32_t L_18;
				L_18 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)))(il2cpp_rgctx_method(method->klass->rgctx_data, 7));
				if ((((int32_t)L_18) <= ((int32_t)((int32_t)32))))
				{
					goto IL_00d3_1;
				}
			}
			{
				int32_t L_19 = V_4;
				V_4 = ((int32_t)il2cpp_codegen_add(L_19, 1));
				goto IL_00d3_1;
			}

IL_0089_1:
			{
				V_4 = 2;
				goto IL_00d3_1;
			}

IL_008e_1:
			{
				__Il2CppFullySharedGenericTypeU5BU5DU5BU5D_tAE866946296CBB820B69570ADEE87D79ADAAC33F* L_20 = __this->____arrays;
				int32_t L_21 = __this->____count;
				V_6 = ((int32_t)il2cpp_codegen_subtract(L_21, 1));
				int32_t L_22 = V_6;
				__this->____count = L_22;
				int32_t L_23 = V_6;
				NullCheck(L_20);
				int32_t L_24 = L_23;
				__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_25 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
				V_5 = L_25;
				__Il2CppFullySharedGenericTypeU5BU5DU5BU5D_tAE866946296CBB820B69570ADEE87D79ADAAC33F* L_26 = __this->____arrays;
				int32_t L_27 = __this->____count;
				NullCheck(L_26);
				ArrayElementTypeCheck (L_26, NULL);
				(L_26)->SetAt(static_cast<il2cpp_array_size_t>(L_27), (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)NULL);
				ArrayPoolEventSource_tDB6CA549DFC2FBEB134C71EB85DBD6D943E5C888* L_28 = V_3;
				NullCheck((EventSource_tA86759A1E6F272632C299AAC181C0A67E5C52F25*)L_28);
				bool L_29;
				L_29 = EventSource_IsEnabled_m0B2F63F81423D7832DC5526D0F3490C77CAB57A5((EventSource_tA86759A1E6F272632C299AAC181C0A67E5C52F25*)L_28, NULL);
				if (!L_29)
				{
					goto IL_00d3_1;
				}
			}
			{
				ArrayPoolEventSource_tDB6CA549DFC2FBEB134C71EB85DBD6D943E5C888* L_30 = V_3;
				__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_31 = V_5;
				NullCheck((RuntimeObject*)L_31);
				int32_t L_32;
				L_32 = VirtualFuncInvoker0< int32_t >::Invoke(2, (RuntimeObject*)L_31);
				__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_33 = V_5;
				NullCheck(L_33);
				int32_t L_34 = ___1_id;
				NullCheck(L_30);
				ArrayPoolEventSource_BufferTrimmed_m7E5BBBCE84BEF9C79981E482AC6D2FA6FFB2ECB0(L_30, L_32, ((int32_t)(((RuntimeArray*)L_33)->max_length)), L_34, NULL);
			}

IL_00d3_1:
			{
				int32_t L_35 = __this->____count;
				if ((((int32_t)L_35) <= ((int32_t)0)))
				{
					goto IL_00e6_1;
				}
			}
			{
				int32_t L_36 = V_4;
				int32_t L_37 = L_36;
				V_4 = ((int32_t)il2cpp_codegen_subtract(L_37, 1));
				if ((((int32_t)L_37) > ((int32_t)0)))
				{
					goto IL_008e_1;
				}
			}

IL_00e6_1:
			{
				int32_t L_38 = __this->____count;
				if ((((int32_t)L_38) <= ((int32_t)0)))
				{
					goto IL_010e_1;
				}
			}
			{
				uint32_t L_39 = __this->____firstStackItemMS;
				if ((!(((uint32_t)L_39) < ((uint32_t)((int32_t)-15001)))))
				{
					goto IL_010e_1;
				}
			}
			{
				uint32_t L_40 = __this->____firstStackItemMS;
				__this->____firstStackItemMS = (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_40, ((int32_t)15000)));
			}

IL_010e_1:
			{
				goto IL_011a;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_011a:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LockedStack__ctor_mDC1C46693A1D2D00E172498967CA24C98E5205D4_gshared (LockedStack_tA2963E19C6D1029555446DD09B0B4208AC0F8E4A* __this, const RuntimeMethod* method) 
{
	{
		__Il2CppFullySharedGenericTypeU5BU5DU5BU5D_tAE866946296CBB820B69570ADEE87D79ADAAC33F* L_0 = (__Il2CppFullySharedGenericTypeU5BU5DU5BU5D_tAE866946296CBB820B69570ADEE87D79ADAAC33F*)(__Il2CppFullySharedGenericTypeU5BU5DU5BU5D_tAE866946296CBB820B69570ADEE87D79ADAAC33F*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 8), (uint32_t)8);
		__this->____arrays = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____arrays), (void*)L_0);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LongEnumEqualityComparer_1_Equals_m87226A6E5044C64940B1E62F62D70FCE887EA333_gshared (LongEnumEqualityComparer_1_t84E9660A2B34FF3EBE584576308B60B885D573D2* __this, Il2CppFullySharedGenericStruct ___0_x, Il2CppFullySharedGenericStruct ___1_y, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t08EC0605FED6CD64D1E8EB373C40A572F9F0362B = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0));
	const Il2CppFullySharedGenericStruct L_0 = alloca(SizeOf_T_t08EC0605FED6CD64D1E8EB373C40A572F9F0362B);
	const Il2CppFullySharedGenericStruct L_2 = alloca(SizeOf_T_t08EC0605FED6CD64D1E8EB373C40A572F9F0362B);
	int64_t V_0 = 0;
	{
		il2cpp_codegen_memcpy(L_0, ___0_x, SizeOf_T_t08EC0605FED6CD64D1E8EB373C40A572F9F0362B);
		int64_t L_1;
		L_1 = InvokerFuncInvoker1< int64_t, Il2CppFullySharedGenericStruct >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)), il2cpp_rgctx_method(method->klass->rgctx_data, 1), NULL, L_0);
		il2cpp_codegen_memcpy(L_2, ___1_y, SizeOf_T_t08EC0605FED6CD64D1E8EB373C40A572F9F0362B);
		int64_t L_3;
		L_3 = InvokerFuncInvoker1< int64_t, Il2CppFullySharedGenericStruct >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)), il2cpp_rgctx_method(method->klass->rgctx_data, 1), NULL, L_2);
		V_0 = L_3;
		int64_t L_4 = V_0;
		return (bool)((((int64_t)L_1) == ((int64_t)L_4))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LongEnumEqualityComparer_1_GetHashCode_m61BF4CA9A33282177F9DD76BB500FCF4D37CBBBE_gshared (LongEnumEqualityComparer_1_t84E9660A2B34FF3EBE584576308B60B885D573D2* __this, Il2CppFullySharedGenericStruct ___0_obj, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t08EC0605FED6CD64D1E8EB373C40A572F9F0362B = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0));
	const Il2CppFullySharedGenericStruct L_0 = alloca(SizeOf_T_t08EC0605FED6CD64D1E8EB373C40A572F9F0362B);
	int64_t V_0 = 0;
	{
		il2cpp_codegen_memcpy(L_0, ___0_obj, SizeOf_T_t08EC0605FED6CD64D1E8EB373C40A572F9F0362B);
		int64_t L_1;
		L_1 = InvokerFuncInvoker1< int64_t, Il2CppFullySharedGenericStruct >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)), il2cpp_rgctx_method(method->klass->rgctx_data, 1), NULL, L_0);
		V_0 = L_1;
		int32_t L_2;
		L_2 = Int64_GetHashCode_mDB050BE2AC244D92B14D1DF725AAD279CDC48496((&V_0), NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LongEnumEqualityComparer_1_Equals_m280B770B270E901648E8FDD542D25AF52CA6277D_gshared (LongEnumEqualityComparer_1_t84E9660A2B34FF3EBE584576308B60B885D573D2* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_obj;
		return (bool)((!(((RuntimeObject*)(LongEnumEqualityComparer_1_t84E9660A2B34FF3EBE584576308B60B885D573D2*)((LongEnumEqualityComparer_1_t84E9660A2B34FF3EBE584576308B60B885D573D2*)IsInstSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(method->klass->rgctx_data, 2)))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LongEnumEqualityComparer_1_GetHashCode_m1B5FABC53D2E5598D4A5A1270A520F1B4641E11C_gshared (LongEnumEqualityComparer_1_t84E9660A2B34FF3EBE584576308B60B885D573D2* __this, const RuntimeMethod* method) 
{
	{
		NullCheck((RuntimeObject*)__this);
		Type_t* L_0;
		L_0 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((RuntimeObject*)__this, NULL);
		NullCheck((MemberInfo_t*)L_0);
		String_t* L_1;
		L_1 = VirtualFuncInvoker0< String_t* >::Invoke(7, (MemberInfo_t*)L_0);
		NullCheck((RuntimeObject*)L_1);
		int32_t L_2;
		L_2 = VirtualFuncInvoker0< int32_t >::Invoke(2, (RuntimeObject*)L_1);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LongEnumEqualityComparer_1__ctor_mE638EE50B5DDF2DB094F6BF8703B23872496CBA6_gshared (LongEnumEqualityComparer_1_t84E9660A2B34FF3EBE584576308B60B885D573D2* __this, const RuntimeMethod* method) 
{
	{
		((  void (*) (EqualityComparer_1_t458C8DC3748A89A213F4738B57D3742C4896ABE9*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))((EqualityComparer_1_t458C8DC3748A89A213F4738B57D3742C4896ABE9*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LongEnumEqualityComparer_1__ctor_mA0738549DB4AF45B2147E7AEE297513FD4CC4F0D_gshared (LongEnumEqualityComparer_1_t84E9660A2B34FF3EBE584576308B60B885D573D2* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_information, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	{
		((  void (*) (EqualityComparer_1_t458C8DC3748A89A213F4738B57D3742C4896ABE9*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))((EqualityComparer_1_t458C8DC3748A89A213F4738B57D3742C4896ABE9*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LongEnumEqualityComparer_1_GetObjectData_mD2CD7924C13DE56E2A77BC35201C20CEC5FEA139_gshared (LongEnumEqualityComparer_1_t84E9660A2B34FF3EBE584576308B60B885D573D2* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = ___0_info;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 5)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_1, NULL);
		NullCheck(L_0);
		SerializationInfo_SetType_m5D07E1C38028872E49EA01129ED5BF1AF674C475(L_0, L_2, NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LowLevelDictionary_2__ctor_m0B413ACD3C26D0F35D16683B6A2CEBCC3170E65A_gshared (LowLevelDictionary_2_t4C52985827C66ED86805FEED7556812E4207A114* __this, const RuntimeMethod* method) 
{
	{
		DefaultComparer_1_tF1F3B8981298E50FBC17BDC8CA0B4CFE867AD644* L_0 = (DefaultComparer_1_tF1F3B8981298E50FBC17BDC8CA0B4CFE867AD644*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 0));
		DefaultComparer_1__ctor_m1FB334BED8F2ED543F453D87C912BDA6611F368E(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
		LowLevelDictionary_2__ctor_mB6B362C12FBFC3BDA4766411FDC767993214AFA2(__this, ((int32_t)17), (RuntimeObject*)L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LowLevelDictionary_2__ctor_mB6B362C12FBFC3BDA4766411FDC767993214AFA2_gshared (LowLevelDictionary_2_t4C52985827C66ED86805FEED7556812E4207A114* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		RuntimeObject* L_0 = ___1_comparer;
		__this->____comparer = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer), (void*)L_0);
		int32_t L_1 = ___0_capacity;
		LowLevelDictionary_2_Clear_m7229E17DB8B64A5E367126DD076AA0577B2ED5A7(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LowLevelDictionary_2_set_Item_mD4043EA322BBAEBB1B94917145129443C56C982B_gshared (LowLevelDictionary_2_t4C52985827C66ED86805FEED7556812E4207A114* __this, int32_t ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	Entry_t776AD7605FD3B32B33A463DA5E56809C57BFA1AB* V_0 = NULL;
	{
		goto IL_0013;
	}

IL_0013:
	{
		int32_t L_1 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_1, 1));
		int32_t L_2 = ___0_key;
		Entry_t776AD7605FD3B32B33A463DA5E56809C57BFA1AB* L_3;
		L_3 = LowLevelDictionary_2_Find_m9E8AF9DE397CFCC424FF17C0125FACDB261E3AEB(__this, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		V_0 = L_3;
		Entry_t776AD7605FD3B32B33A463DA5E56809C57BFA1AB* L_4 = V_0;
		if (!L_4)
		{
			goto IL_0034;
		}
	}
	{
		Entry_t776AD7605FD3B32B33A463DA5E56809C57BFA1AB* L_5 = V_0;
		RuntimeObject* L_6 = ___1_value;
		NullCheck(L_5);
		L_5->____value = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&L_5->____value), (void*)L_6);
		return;
	}

IL_0034:
	{
		int32_t L_7 = ___0_key;
		RuntimeObject* L_8 = ___1_value;
		Entry_t776AD7605FD3B32B33A463DA5E56809C57BFA1AB* L_9;
		L_9 = LowLevelDictionary_2_UncheckedAdd_m4B36B6453ADD7712B323A995014660300EDFD5BB(__this, L_7, L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LowLevelDictionary_2_Clear_m7229E17DB8B64A5E367126DD076AA0577B2ED5A7_gshared (LowLevelDictionary_2_t4C52985827C66ED86805FEED7556812E4207A114* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		int32_t L_1 = ___0_capacity;
		EntryU5BU5D_t16529C13B3C98BF11CD3EF6FAF58FEA29EABDCA6* L_2 = (EntryU5BU5D_t16529C13B3C98BF11CD3EF6FAF58FEA29EABDCA6*)(EntryU5BU5D_t16529C13B3C98BF11CD3EF6FAF58FEA29EABDCA6*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 11), (uint32_t)L_1);
		__this->____buckets = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_2);
		__this->____numEntries = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LowLevelDictionary_2_Remove_mDC5F88E2C3B2CA9902A5F7F156FDB86D651DFF5F_gshared (LowLevelDictionary_2_t4C52985827C66ED86805FEED7556812E4207A114* __this, int32_t ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Entry_t776AD7605FD3B32B33A463DA5E56809C57BFA1AB* V_1 = NULL;
	Entry_t776AD7605FD3B32B33A463DA5E56809C57BFA1AB* V_2 = NULL;
	{
		goto IL_0013;
	}

IL_0013:
	{
		int32_t L_1 = ___0_key;
		int32_t L_2;
		L_2 = LowLevelDictionary_2_GetBucket_m31C0AA9C3A13F586A702DFDE7508A606E20B4A9B(__this, L_1, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		V_0 = L_2;
		V_1 = (Entry_t776AD7605FD3B32B33A463DA5E56809C57BFA1AB*)NULL;
		EntryU5BU5D_t16529C13B3C98BF11CD3EF6FAF58FEA29EABDCA6* L_3 = __this->____buckets;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		Entry_t776AD7605FD3B32B33A463DA5E56809C57BFA1AB* L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		V_2 = L_6;
		goto IL_0083;
	}

IL_0029:
	{
		RuntimeObject* L_7 = __this->____comparer;
		int32_t L_8 = ___0_key;
		Entry_t776AD7605FD3B32B33A463DA5E56809C57BFA1AB* L_9 = V_2;
		NullCheck(L_9);
		int32_t L_10 = L_9->____key;
		NullCheck(L_7);
		bool L_11;
		L_11 = InterfaceFuncInvoker2< bool, int32_t, int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_7, L_8, L_10);
		if (!L_11)
		{
			goto IL_007a;
		}
	}
	{
		Entry_t776AD7605FD3B32B33A463DA5E56809C57BFA1AB* L_12 = V_1;
		if (L_12)
		{
			goto IL_0050;
		}
	}
	{
		EntryU5BU5D_t16529C13B3C98BF11CD3EF6FAF58FEA29EABDCA6* L_13 = __this->____buckets;
		int32_t L_14 = V_0;
		Entry_t776AD7605FD3B32B33A463DA5E56809C57BFA1AB* L_15 = V_2;
		NullCheck(L_15);
		Entry_t776AD7605FD3B32B33A463DA5E56809C57BFA1AB* L_16 = L_15->____next;
		NullCheck(L_13);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(L_14), (Entry_t776AD7605FD3B32B33A463DA5E56809C57BFA1AB*)L_16);
		goto IL_005c;
	}

IL_0050:
	{
		Entry_t776AD7605FD3B32B33A463DA5E56809C57BFA1AB* L_17 = V_1;
		Entry_t776AD7605FD3B32B33A463DA5E56809C57BFA1AB* L_18 = V_2;
		NullCheck(L_18);
		Entry_t776AD7605FD3B32B33A463DA5E56809C57BFA1AB* L_19 = L_18->____next;
		NullCheck(L_17);
		L_17->____next = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&L_17->____next), (void*)L_19);
	}

IL_005c:
	{
		int32_t L_20 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_20, 1));
		int32_t L_21 = __this->____numEntries;
		__this->____numEntries = ((int32_t)il2cpp_codegen_subtract(L_21, 1));
		return (bool)1;
	}

IL_007a:
	{
		Entry_t776AD7605FD3B32B33A463DA5E56809C57BFA1AB* L_22 = V_2;
		V_1 = L_22;
		Entry_t776AD7605FD3B32B33A463DA5E56809C57BFA1AB* L_23 = V_2;
		NullCheck(L_23);
		Entry_t776AD7605FD3B32B33A463DA5E56809C57BFA1AB* L_24 = L_23->____next;
		V_2 = L_24;
	}

IL_0083:
	{
		Entry_t776AD7605FD3B32B33A463DA5E56809C57BFA1AB* L_25 = V_2;
		if (L_25)
		{
			goto IL_0029;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Entry_t776AD7605FD3B32B33A463DA5E56809C57BFA1AB* LowLevelDictionary_2_Find_m9E8AF9DE397CFCC424FF17C0125FACDB261E3AEB_gshared (LowLevelDictionary_2_t4C52985827C66ED86805FEED7556812E4207A114* __this, int32_t ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Entry_t776AD7605FD3B32B33A463DA5E56809C57BFA1AB* V_1 = NULL;
	{
		int32_t L_0 = ___0_key;
		int32_t L_1;
		L_1 = LowLevelDictionary_2_GetBucket_m31C0AA9C3A13F586A702DFDE7508A606E20B4A9B(__this, L_0, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		V_0 = L_1;
		EntryU5BU5D_t16529C13B3C98BF11CD3EF6FAF58FEA29EABDCA6* L_2 = __this->____buckets;
		int32_t L_3 = V_0;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		Entry_t776AD7605FD3B32B33A463DA5E56809C57BFA1AB* L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_1 = L_5;
		goto IL_0031;
	}

IL_0014:
	{
		RuntimeObject* L_6 = __this->____comparer;
		int32_t L_7 = ___0_key;
		Entry_t776AD7605FD3B32B33A463DA5E56809C57BFA1AB* L_8 = V_1;
		NullCheck(L_8);
		int32_t L_9 = L_8->____key;
		NullCheck(L_6);
		bool L_10;
		L_10 = InterfaceFuncInvoker2< bool, int32_t, int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_6, L_7, L_9);
		if (!L_10)
		{
			goto IL_002a;
		}
	}
	{
		Entry_t776AD7605FD3B32B33A463DA5E56809C57BFA1AB* L_11 = V_1;
		return L_11;
	}

IL_002a:
	{
		Entry_t776AD7605FD3B32B33A463DA5E56809C57BFA1AB* L_12 = V_1;
		NullCheck(L_12);
		Entry_t776AD7605FD3B32B33A463DA5E56809C57BFA1AB* L_13 = L_12->____next;
		V_1 = L_13;
	}

IL_0031:
	{
		Entry_t776AD7605FD3B32B33A463DA5E56809C57BFA1AB* L_14 = V_1;
		if (L_14)
		{
			goto IL_0014;
		}
	}
	{
		return (Entry_t776AD7605FD3B32B33A463DA5E56809C57BFA1AB*)NULL;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Entry_t776AD7605FD3B32B33A463DA5E56809C57BFA1AB* LowLevelDictionary_2_UncheckedAdd_m4B36B6453ADD7712B323A995014660300EDFD5BB_gshared (LowLevelDictionary_2_t4C52985827C66ED86805FEED7556812E4207A114* __this, int32_t ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	Entry_t776AD7605FD3B32B33A463DA5E56809C57BFA1AB* V_0 = NULL;
	int32_t V_1 = 0;
	{
		Entry_t776AD7605FD3B32B33A463DA5E56809C57BFA1AB* L_0 = (Entry_t776AD7605FD3B32B33A463DA5E56809C57BFA1AB*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 8));
		Entry__ctor_m1523ABCDEBE31BA50D6801DB569FB6C6DA0EAB65(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		V_0 = L_0;
		Entry_t776AD7605FD3B32B33A463DA5E56809C57BFA1AB* L_1 = V_0;
		int32_t L_2 = ___0_key;
		NullCheck(L_1);
		L_1->____key = L_2;
		Entry_t776AD7605FD3B32B33A463DA5E56809C57BFA1AB* L_3 = V_0;
		RuntimeObject* L_4 = ___1_value;
		NullCheck(L_3);
		L_3->____value = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->____value), (void*)L_4);
		int32_t L_5 = ___0_key;
		int32_t L_6;
		L_6 = LowLevelDictionary_2_GetBucket_m31C0AA9C3A13F586A702DFDE7508A606E20B4A9B(__this, L_5, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		V_1 = L_6;
		Entry_t776AD7605FD3B32B33A463DA5E56809C57BFA1AB* L_7 = V_0;
		EntryU5BU5D_t16529C13B3C98BF11CD3EF6FAF58FEA29EABDCA6* L_8 = __this->____buckets;
		int32_t L_9 = V_1;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		Entry_t776AD7605FD3B32B33A463DA5E56809C57BFA1AB* L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		NullCheck(L_7);
		L_7->____next = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&L_7->____next), (void*)L_11);
		EntryU5BU5D_t16529C13B3C98BF11CD3EF6FAF58FEA29EABDCA6* L_12 = __this->____buckets;
		int32_t L_13 = V_1;
		Entry_t776AD7605FD3B32B33A463DA5E56809C57BFA1AB* L_14 = V_0;
		NullCheck(L_12);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(L_13), (Entry_t776AD7605FD3B32B33A463DA5E56809C57BFA1AB*)L_14);
		int32_t L_15 = __this->____numEntries;
		__this->____numEntries = ((int32_t)il2cpp_codegen_add(L_15, 1));
		int32_t L_16 = __this->____numEntries;
		EntryU5BU5D_t16529C13B3C98BF11CD3EF6FAF58FEA29EABDCA6* L_17 = __this->____buckets;
		NullCheck(L_17);
		if ((((int32_t)L_16) <= ((int32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(((RuntimeArray*)L_17)->max_length)), 2)))))
		{
			goto IL_005a;
		}
	}
	{
		LowLevelDictionary_2_ExpandBuckets_m033D9FFFD113915A8BD824AC730C492F01631A9A(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
	}

IL_005a:
	{
		Entry_t776AD7605FD3B32B33A463DA5E56809C57BFA1AB* L_18 = V_0;
		return L_18;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LowLevelDictionary_2_ExpandBuckets_m033D9FFFD113915A8BD824AC730C492F01631A9A_gshared (LowLevelDictionary_2_t4C52985827C66ED86805FEED7556812E4207A114* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	EntryU5BU5D_t16529C13B3C98BF11CD3EF6FAF58FEA29EABDCA6* V_1 = NULL;
	int32_t V_2 = 0;
	Entry_t776AD7605FD3B32B33A463DA5E56809C57BFA1AB* V_3 = NULL;
	int32_t V_4 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	try
	{
		{
			EntryU5BU5D_t16529C13B3C98BF11CD3EF6FAF58FEA29EABDCA6* L_0 = __this->____buckets;
			NullCheck(L_0);
			V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(((int32_t)(((RuntimeArray*)L_0)->max_length)), 2)), 1));
			int32_t L_1 = V_0;
			EntryU5BU5D_t16529C13B3C98BF11CD3EF6FAF58FEA29EABDCA6* L_2 = (EntryU5BU5D_t16529C13B3C98BF11CD3EF6FAF58FEA29EABDCA6*)(EntryU5BU5D_t16529C13B3C98BF11CD3EF6FAF58FEA29EABDCA6*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 11), (uint32_t)L_1);
			V_1 = L_2;
			V_2 = 0;
			goto IL_004f_1;
		}

IL_0018_1:
		{
			EntryU5BU5D_t16529C13B3C98BF11CD3EF6FAF58FEA29EABDCA6* L_3 = __this->____buckets;
			int32_t L_4 = V_2;
			NullCheck(L_3);
			int32_t L_5 = L_4;
			Entry_t776AD7605FD3B32B33A463DA5E56809C57BFA1AB* L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
			V_3 = L_6;
			goto IL_0048_1;
		}

IL_0023_1:
		{
			Entry_t776AD7605FD3B32B33A463DA5E56809C57BFA1AB* L_7 = V_3;
			NullCheck(L_7);
			Entry_t776AD7605FD3B32B33A463DA5E56809C57BFA1AB* L_8 = L_7->____next;
			Entry_t776AD7605FD3B32B33A463DA5E56809C57BFA1AB* L_9 = V_3;
			NullCheck(L_9);
			int32_t L_10 = L_9->____key;
			int32_t L_11 = V_0;
			int32_t L_12;
			L_12 = LowLevelDictionary_2_GetBucket_m31C0AA9C3A13F586A702DFDE7508A606E20B4A9B(__this, L_10, L_11, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
			V_4 = L_12;
			Entry_t776AD7605FD3B32B33A463DA5E56809C57BFA1AB* L_13 = V_3;
			EntryU5BU5D_t16529C13B3C98BF11CD3EF6FAF58FEA29EABDCA6* L_14 = V_1;
			int32_t L_15 = V_4;
			NullCheck(L_14);
			int32_t L_16 = L_15;
			Entry_t776AD7605FD3B32B33A463DA5E56809C57BFA1AB* L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
			NullCheck(L_13);
			L_13->____next = L_17;
			Il2CppCodeGenWriteBarrier((void**)(&L_13->____next), (void*)L_17);
			EntryU5BU5D_t16529C13B3C98BF11CD3EF6FAF58FEA29EABDCA6* L_18 = V_1;
			int32_t L_19 = V_4;
			Entry_t776AD7605FD3B32B33A463DA5E56809C57BFA1AB* L_20 = V_3;
			NullCheck(L_18);
			(L_18)->SetAt(static_cast<il2cpp_array_size_t>(L_19), (Entry_t776AD7605FD3B32B33A463DA5E56809C57BFA1AB*)L_20);
			V_3 = L_8;
		}

IL_0048_1:
		{
			Entry_t776AD7605FD3B32B33A463DA5E56809C57BFA1AB* L_21 = V_3;
			if (L_21)
			{
				goto IL_0023_1;
			}
		}
		{
			int32_t L_22 = V_2;
			V_2 = ((int32_t)il2cpp_codegen_add(L_22, 1));
		}

IL_004f_1:
		{
			int32_t L_23 = V_2;
			EntryU5BU5D_t16529C13B3C98BF11CD3EF6FAF58FEA29EABDCA6* L_24 = __this->____buckets;
			NullCheck(L_24);
			if ((((int32_t)L_23) < ((int32_t)((int32_t)(((RuntimeArray*)L_24)->max_length)))))
			{
				goto IL_0018_1;
			}
		}
		{
			EntryU5BU5D_t16529C13B3C98BF11CD3EF6FAF58FEA29EABDCA6* L_25 = V_1;
			__this->____buckets = L_25;
			Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_25);
			goto IL_0066;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OutOfMemoryException_tE6DC2F937EC4A8699271D5151C4DF83BDE99EE7F_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0063;
		}
		throw e;
	}

CATCH_0063:
	{
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0066;
	}

IL_0066:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LowLevelDictionary_2_GetBucket_m31C0AA9C3A13F586A702DFDE7508A606E20B4A9B_gshared (LowLevelDictionary_2_t4C52985827C66ED86805FEED7556812E4207A114* __this, int32_t ___0_key, int32_t ___1_numBuckets, const RuntimeMethod* method) 
{
	int32_t G_B2_0 = 0;
	int32_t G_B1_0 = 0;
	int32_t G_B3_0 = 0;
	int32_t G_B3_1 = 0;
	{
		RuntimeObject* L_0 = __this->____comparer;
		int32_t L_1 = ___0_key;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_0, L_1);
		int32_t L_3 = ___1_numBuckets;
		if (!L_3)
		{
			G_B2_0 = ((int32_t)(L_2&((int32_t)2147483647LL)));
			goto IL_0018;
		}
		G_B1_0 = ((int32_t)(L_2&((int32_t)2147483647LL)));
	}
	{
		int32_t L_4 = ___1_numBuckets;
		G_B3_0 = L_4;
		G_B3_1 = G_B1_0;
		goto IL_0020;
	}

IL_0018:
	{
		EntryU5BU5D_t16529C13B3C98BF11CD3EF6FAF58FEA29EABDCA6* L_5 = __this->____buckets;
		NullCheck(L_5);
		G_B3_0 = ((int32_t)(((RuntimeArray*)L_5)->max_length));
		G_B3_1 = G_B2_0;
	}

IL_0020:
	{
		return ((int32_t)(G_B3_1%G_B3_0));
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t LazyHelper_get_State_m8EE9669E6DC61CC32EC9B8C29B006D83009971CD_inline (LazyHelper_t1784351780B2D1AC002869BB3C7A35AA64762602* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CStateU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 2));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ((EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 2)))->___Value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ListBuilder_1_get_Count_m5FC923A60B6BCD6D28FA95B0495EF5E537266285_gshared_inline (ListBuilder_1_tCC8A75CAC31AC22CAA5DFE54A082DB3FA07EAD51* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____count;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_gshared_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_item, const RuntimeMethod* method) 
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____items;
		V_0 = L_1;
		int32_t L_2 = __this->____size;
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
		__this->____size = ((int32_t)il2cpp_codegen_add(L_5, 1));
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
		List_1_AddWithResize_m378B392086AAB6F400944FA9839516326B3F7BB8(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_gshared_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_mD16C664FFE93598D1C12AC86190D12B0F90B5419_gshared_inline (Predicate_1_t6CDE3111264F492F4F13277756366A07CA78A4C3* __this, int32_t ___0_obj, const RuntimeMethod* method) 
{
	typedef bool (*FunctionPointerType) (RuntimeObject*, int32_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_obj, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m809450298141D527D3A4FFAF77AE69D9B08CC17F_gshared_inline (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* __this, int32_t ___0_item, const RuntimeMethod* method) 
{
	Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* L_1 = __this->____items;
		V_0 = L_1;
		int32_t L_2 = __this->____size;
		V_1 = L_2;
		int32_t L_3 = V_1;
		Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_5, 1));
		Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* L_6 = V_0;
		int32_t L_7 = V_1;
		int32_t L_8 = ___0_item;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (int32_t)L_8);
		return;
	}

IL_0034:
	{
		int32_t L_9 = ___0_item;
		List_1_AddWithResize_mAD159B09F28BD7914562E219CA52E2D4BDCF5530(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m9080410FAF175EB3313FCE9515BA3A9D8E11718F_gshared_inline (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_m561B5F43F62B494CB43593312075556BAA567E0B_gshared_inline (Predicate_1_t5C52E5DEC72D8848A1024CF1E1E512DB092F800A* __this, int32_t ___0_obj, const RuntimeMethod* method) 
{
	typedef bool (*FunctionPointerType) (RuntimeObject*, int32_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_obj, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = __this->____items;
		V_0 = L_1;
		int32_t L_2 = __this->____size;
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
		__this->____size = ((int32_t)il2cpp_codegen_add(L_5, 1));
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
		List_1_AddWithResize_m79A9BF770BEF9C06BE40D5401E55E375F2726CC4(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_m6AC449189DCEE89A4FA2A2B724DE296A1DFB6A9B_gshared_inline (Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	typedef bool (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_obj, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m93D11AF4102DBFC260157991485B7F81A0FC4638_gshared_inline (List_1_t9DE980811C648CE80197045689D21D2B224E7912* __this, Point_t4F128496D336DF7AA8817608D59E72CEF8DBFB93 ___0_item, const RuntimeMethod* method) 
{
	PointU5BU5D_tBF08949C6A5139156312E05FFEBA360828D28F4C* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		PointU5BU5D_tBF08949C6A5139156312E05FFEBA360828D28F4C* L_1 = __this->____items;
		V_0 = L_1;
		int32_t L_2 = __this->____size;
		V_1 = L_2;
		int32_t L_3 = V_1;
		PointU5BU5D_tBF08949C6A5139156312E05FFEBA360828D28F4C* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_5, 1));
		PointU5BU5D_tBF08949C6A5139156312E05FFEBA360828D28F4C* L_6 = V_0;
		int32_t L_7 = V_1;
		Point_t4F128496D336DF7AA8817608D59E72CEF8DBFB93 L_8 = ___0_item;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (Point_t4F128496D336DF7AA8817608D59E72CEF8DBFB93)L_8);
		return;
	}

IL_0034:
	{
		Point_t4F128496D336DF7AA8817608D59E72CEF8DBFB93 L_9 = ___0_item;
		List_1_AddWithResize_mEE6F2A13EA6E4345FD10BD84686C624C931BDB94(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m364C36D74BA0E74DAF87657A16515729C25460BB_gshared_inline (List_1_t9DE980811C648CE80197045689D21D2B224E7912* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_m6A70A7AB2F00E03E6030B95A9BCB53868C27EA94_gshared_inline (Predicate_1_t2812BD9A4B34C2F0C29CD9C263856BAE4515A201* __this, Point_t4F128496D336DF7AA8817608D59E72CEF8DBFB93 ___0_obj, const RuntimeMethod* method) 
{
	typedef bool (*FunctionPointerType) (RuntimeObject*, Point_t4F128496D336DF7AA8817608D59E72CEF8DBFB93, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_obj, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m28DCD73896A7493A6DD85C89A5959213159327C0_gshared_inline (List_1_t2EF0515F9247C0F480F55BF3E296366A47CB0324* __this, RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA ___0_item, const RuntimeMethod* method) 
{
	RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7* L_1 = __this->____items;
		V_0 = L_1;
		int32_t L_2 = __this->____size;
		V_1 = L_2;
		int32_t L_3 = V_1;
		RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_5, 1));
		RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7* L_6 = V_0;
		int32_t L_7 = V_1;
		RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA L_8 = ___0_item;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA)L_8);
		return;
	}

IL_0034:
	{
		RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA L_9 = ___0_item;
		List_1_AddWithResize_mA220A208EC71F5CD6865F6C2B7D5F053282001A4(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m9DF5F004FF70828FB56F22C81485C8A57B3192DB_gshared_inline (List_1_t2EF0515F9247C0F480F55BF3E296366A47CB0324* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_m2F26628AD1EBED3D755F7995B33076DC98F923F7_gshared_inline (Predicate_1_t231FE77F451704871DD8332FA13BC563C1DF98A7* __this, RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA ___0_obj, const RuntimeMethod* method) 
{
	typedef bool (*FunctionPointerType) (RuntimeObject*, RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_obj, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_gshared_inline (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_item, const RuntimeMethod* method) 
{
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_1 = __this->____items;
		V_0 = L_1;
		int32_t L_2 = __this->____size;
		V_1 = L_2;
		int32_t L_3 = V_1;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_5, 1));
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_6 = V_0;
		int32_t L_7 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___0_item;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_8);
		return;
	}

IL_0034:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = ___0_item;
		List_1_AddWithResize_mCDB189127FC2EE67B5EED9DE34F837DFC6EDC212(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_gshared_inline (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_m9FE817A40A1AA77B5B15B6C0E90EB7A4715A819D_gshared_inline (Predicate_1_tE96ECD003F473EE07C8DCDFCCD657300A8DE453B* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_obj, const RuntimeMethod* method) 
{
	typedef bool (*FunctionPointerType) (RuntimeObject*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_obj, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mB308EE5BFFD89A7B8C251644D76CA547456F3012_gshared_inline (List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A* __this, OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837 ___0_item, const RuntimeMethod* method) 
{
	OrderBlockU5BU5D_tD67C39FB212889AFAAB991BE1AE144ED8D35EE88* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		OrderBlockU5BU5D_tD67C39FB212889AFAAB991BE1AE144ED8D35EE88* L_1 = __this->____items;
		V_0 = L_1;
		int32_t L_2 = __this->____size;
		V_1 = L_2;
		int32_t L_3 = V_1;
		OrderBlockU5BU5D_tD67C39FB212889AFAAB991BE1AE144ED8D35EE88* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_5, 1));
		OrderBlockU5BU5D_tD67C39FB212889AFAAB991BE1AE144ED8D35EE88* L_6 = V_0;
		int32_t L_7 = V_1;
		OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837 L_8 = ___0_item;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837)L_8);
		return;
	}

IL_0034:
	{
		OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837 L_9 = ___0_item;
		List_1_AddWithResize_m8B3D79788ADC2B54C9B12CC9EC1158E6A04CDEBC(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m905EB6FD0B91CEE1CC0165F1EBB8C1309AEE4BEC_gshared_inline (List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_m182E0ACAA85455151F5750CE87F942DA6E3DD3D6_gshared_inline (Predicate_1_t8194F57B81937B278B5EFEF0F5B667BBB054B0D0* __this, OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837 ___0_obj, const RuntimeMethod* method) 
{
	typedef bool (*FunctionPointerType) (RuntimeObject*, OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_obj, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m624C469B79ADC28E429B7A3CA96DA72345621643_gshared_inline (List_1_tDB6FA8EDA7A26227B5CA100203EF7BAFA0FDBDDF* __this, SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC ___0_item, const RuntimeMethod* method) 
{
	SingleRangeU5BU5D_t9F938F2249733D85C4F97842A125778D69A843D6* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		SingleRangeU5BU5D_t9F938F2249733D85C4F97842A125778D69A843D6* L_1 = __this->____items;
		V_0 = L_1;
		int32_t L_2 = __this->____size;
		V_1 = L_2;
		int32_t L_3 = V_1;
		SingleRangeU5BU5D_t9F938F2249733D85C4F97842A125778D69A843D6* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_5, 1));
		SingleRangeU5BU5D_t9F938F2249733D85C4F97842A125778D69A843D6* L_6 = V_0;
		int32_t L_7 = V_1;
		SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC L_8 = ___0_item;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC)L_8);
		return;
	}

IL_0034:
	{
		SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC L_9 = ___0_item;
		List_1_AddWithResize_m594A4155F206677F45ECD9AAE7E9EFD0AE6137ED(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mF3540C84790DAB9D381F00753BA20A85694C3446_gshared_inline (List_1_tDB6FA8EDA7A26227B5CA100203EF7BAFA0FDBDDF* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_mADD6CFDE192E3E822D5296926054ED8A41DB09C4_gshared_inline (Predicate_1_t107748E0E0D2277266234EAF67AC068394C4351C* __this, SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC ___0_obj, const RuntimeMethod* method) 
{
	typedef bool (*FunctionPointerType) (RuntimeObject*, SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_obj, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m4AF1A89B7FCCDFD5755D0C21A65347642A37B152_gshared_inline (List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4* __this, WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44 ___0_item, const RuntimeMethod* method) 
{
	WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577* L_1 = __this->____items;
		V_0 = L_1;
		int32_t L_2 = __this->____size;
		V_1 = L_2;
		int32_t L_3 = V_1;
		WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_5, 1));
		WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577* L_6 = V_0;
		int32_t L_7 = V_1;
		WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44 L_8 = ___0_item;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44)L_8);
		return;
	}

IL_0034:
	{
		WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44 L_9 = ___0_item;
		List_1_AddWithResize_m45EC1E38A4A473EA779C21FBFEB2C0E39E4C7846(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m2F90A932E325FFA55047769F5E45E453D80C27D1_gshared_inline (List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_m8D5A11CC70C8E6CD6EE4FD9D625B299AF1B8DCE7_gshared_inline (Predicate_1_t5A30DC3457D23124EDD16C06F92FCB77A9C8A8FD* __this, WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44 ___0_obj, const RuntimeMethod* method) 
{
	typedef bool (*FunctionPointerType) (RuntimeObject*, WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_obj, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
