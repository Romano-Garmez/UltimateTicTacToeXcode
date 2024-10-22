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
template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
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
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct VirtFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct VirtFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct VirtActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct VirtFuncInvoker4
{
	typedef R (*Func)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
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
struct GenericVirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
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
struct GenericInterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Action`1<System.Object>
struct Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task>
struct Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5;
// System.Func`1<System.Threading.Tasks.Task/ContingentProperties>
struct Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B;
// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<System.Net.WebSockets.WebSocketReceiveResult>>
struct Func_2_t3E70501828E336A95A943FA3F6EC4B1DB7736B3E;
// System.Collections.Generic.IEnumerable`1<System.Byte[]>
struct IEnumerable_1_t9B09E145338E5053E03FE6190E5D1262CF40AA35;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t52B1AC8D9E5E1ED28DF6C46A37C9A1B00B394F9D;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tE6A65C5E45E33FD7D9849FD0914DE3AD32B68050;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.String>
struct KeyCollection_t52C81163A051BCD87A36FEF95F736DD600E2305D;
// System.Collections.Generic.List`1<System.ArraySegment`1<System.Byte>>
struct List_1_tAC5780506F34558E53CD51BF8B2E6633C667059B;
// System.Collections.Generic.List`1<System.Byte[]>
struct List_1_t08E192A6E99857FD75EAA081A5D3BEC33729EDBE;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Collections.Generic.List`1<System.String>
struct List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3;
// System.Predicate`1<System.Object>
struct Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB;
// System.Predicate`1<System.Threading.Tasks.Task>
struct Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD;
// System.Threading.Tasks.TaskFactory`1<System.Net.WebSockets.WebSocketReceiveResult>
struct TaskFactory_1_tC063EA52EE4C2F5600912DE4F3612E7BCD1A2095;
// System.Threading.Tasks.Task`1<System.Int32>
struct Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725;
// System.Threading.Tasks.Task`1<System.Object>
struct Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17;
// System.Threading.Tasks.Task`1<System.Threading.Tasks.VoidTaskResult>
struct Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3;
// System.Threading.Tasks.Task`1<System.Net.WebSockets.WebSocketReceiveResult>
struct Task_1_t79E764D87096B674F330B1306805A0FF72B2E83E;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.String>
struct ValueCollection_t9161A5C97376D261665798FA27DAFD5177305C81;
// System.ArraySegment`1<System.Byte>[]
struct ArraySegment_1U5BU5D_t821BA8E5F776D41AA08A36AF8AD2D3FC6B12EDE4;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.String>[]
struct EntryU5BU5D_t52A654EA9927D1B5F56CA05CF209F2E4393C4510;
// System.Threading.SparselyPopulatedArray`1<System.Threading.CancellationCallbackInfo>[]
struct SparselyPopulatedArray_1U5BU5D_t4D2064CEC206620DC5001D7C857A845833DCB52A;
// System.Byte[][]
struct ByteU5BU5DU5BU5D_t95107DE217CCFA8CD77945AC2CB9492D4D01FE8D;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Threading.CancellationTokenRegistration[]
struct CancellationTokenRegistrationU5BU5D_t864BA2E1E6485FDC593F17F7C01525F33CCE7910;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;
// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6;
// System.ArgumentException
struct ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// System.Reflection.Binder
struct Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30;
// System.Threading.CancellationCallbackInfo
struct CancellationCallbackInfo_t7FC8CF6DB4845FCB0138771E86AE058710B1117B;
// System.Threading.CancellationTokenSource
struct CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3;
// System.Net.WebSockets.ClientWebSocket
struct ClientWebSocket_tA2D70722EB2DD788E27D46C7E262C85C984EEE09;
// System.Net.WebSockets.ClientWebSocketOptions
struct ClientWebSocketOptions_t542669394208DA09FBC06141585E0CA380ACEC85;
// System.Globalization.CodePageDataItem
struct CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// System.Threading.ContextCallback
struct ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B;
// System.Net.CookieContainer
struct CookieContainer_tF22AADBBB0BBD4D3FF4440A226F8E8580B08F4C2;
// UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7;
// UnityEngine.CustomYieldInstruction
struct CustomYieldInstruction_t4ED1543FBAA3143362854EB1867B42E5D190A5C7;
// System.Text.DecoderFallback
struct DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// System.Text.EncoderFallback
struct EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4;
// System.Text.Encoding
struct Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827;
// System.Exception
struct Exception_t;
// System.Runtime.ExceptionServices.ExceptionDispatchInfo
struct ExceptionDispatchInfo_t85442E41DA1485CFF22598AC362EE986DF3CDD09;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// System.Collections.Hashtable
struct Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Runtime.CompilerServices.IAsyncStateMachine
struct IAsyncStateMachine_tAE063F84A60E1058FCA4E3EA9F555D3462641F7D;
// System.Net.ICredentials
struct ICredentials_t7F4F7C8E1E36461DC5388554FF404E2203D30C48;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.Collections.IEnumerator
struct IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105;
// System.Net.IWebProxy
struct IWebProxy_t27B6C29F0B62B717A9778AD251E31C21A91C32B3;
// MainThreadUtil
struct MainThreadUtil_t5C0093E7A5EC95A615FCFFB62C0135DBB840E1D0;
// System.Threading.ManualResetEvent
struct ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA;
// System.Reflection.MemberFilter
struct MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81;
// System.IO.MemoryStream
struct MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// System.Threading.SemaphoreSlim
struct SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385;
// System.Threading.SendOrPostCallback
struct SendOrPostCallback_t6B7334CE017AF595535507519400AC02D688DC3C;
// System.Threading.Tasks.StackGuard
struct StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D;
// System.String
struct String_t;
// System.Threading.SynchronizationContext
struct SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069;
// System.Threading.Tasks.Task
struct Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60;
// System.Threading.Tasks.TaskFactory
struct TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D;
// System.Threading.Timer
struct Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB;
// System.Threading.TimerCallback
struct TimerCallback_tD193CC50BF27E129E6857E1E8A7EAC24BD131814;
// System.Type
struct Type_t;
// System.Uri
struct Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612;
// System.UriParser
struct UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// NativeWebSocket.WaitForBackgroundThread
struct WaitForBackgroundThread_t8C5103639A29F371BDBADD1375E435C26BD1F00B;
// WaitForUpdate
struct WaitForUpdate_t0977047DBECB52C15D8149E0817A0DCD8F2ECDA2;
// System.Net.WebHeaderCollection
struct WebHeaderCollection_tB7EEB47640F12A532E1D8331A5AD498A289824D4;
// NativeWebSocket.WebSocket
struct WebSocket_t5FA66A4CDB32ECEC66E8A22DA5C2F3F778802646;
// NativeWebSocket.WebSocketCloseEventHandler
struct WebSocketCloseEventHandler_tD2F6193A42EB71C99D482FC38E4EC30825567A12;
// NativeWebSocket.WebSocketErrorEventHandler
struct WebSocketErrorEventHandler_t1B9EEB799CE0D22694C37BD87CEDBDF9FB199528;
// System.Net.WebSockets.WebSocketHandle
struct WebSocketHandle_t39F2F748886F0AEA42BB56CB4836BA17834AD3A4;
// NativeWebSocket.WebSocketMessageEventHandler
struct WebSocketMessageEventHandler_t58A60AF5E7F18EC4591F32F0894E4BA5A7A8F222;
// NativeWebSocket.WebSocketOpenEventHandler
struct WebSocketOpenEventHandler_tDA44AD311FF420B05C807A25ED3C313A2D9514B0;
// System.Net.WebSockets.WebSocketReceiveResult
struct WebSocketReceiveResult_tEB9BD882DB3C2B94DFDA4655DAD6DFD2DDF85122;
// System.Security.Cryptography.X509Certificates.X509CertificateCollection
struct X509CertificateCollection_t2990976CAD6265665564A400870A381968AB706B;
// MainThreadUtil/<>c__DisplayClass9_0
struct U3CU3Ec__DisplayClass9_0_tFA5A6CDE9007824D70A78C68EBEE3D1A55BFEC8B;
// System.IO.Stream/ReadWriteTask
struct ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974;
// System.Threading.Tasks.Task/ContingentProperties
struct ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0;
// System.Uri/UriInfo
struct UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45;
// NativeWebSocket.WaitForBackgroundThread/<>c
struct U3CU3Ec_t86F09608A4F5B7ADD94C973234164A2E9A3AB258;
// WaitForUpdate/<CoroutineWrapper>d__4
struct U3CCoroutineWrapperU3Ed__4_tD49B312DE148AC0AB7B48D24D92FFFCE0599CD7F;
// WaitForUpdate/MainThreadAwaiter
struct MainThreadAwaiter_t07EC1C94003617C1B1C0EEF3FDE6C52A66F42FC1;

IL2CPP_EXTERN_C RuntimeClass* Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ClientWebSocket_tA2D70722EB2DD788E27D46C7E262C85C984EEE09_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Enum_t23B90B40F60E677A8025267341651C94AE079CDA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t08E192A6E99857FD75EAA081A5D3BEC33729EDBE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tAC5780506F34558E53CD51BF8B2E6633C667059B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MainThreadAwaiter_t07EC1C94003617C1B1C0EEF3FDE6C52A66F42FC1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MainThreadUtil_t5C0093E7A5EC95A615FCFFB62C0135DBB840E1D0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SendOrPostCallback_t6B7334CE017AF595535507519400AC02D688DC3C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CCoroutineWrapperU3Ed__4_tD49B312DE148AC0AB7B48D24D92FFFCE0599CD7F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass9_0_tFA5A6CDE9007824D70A78C68EBEE3D1A55BFEC8B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t86F09608A4F5B7ADD94C973234164A2E9A3AB258_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForBackgroundThread_t8C5103639A29F371BDBADD1375E435C26BD1F00B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForUpdate_t0977047DBECB52C15D8149E0817A0DCD8F2ECDA2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WebSocketCloseCode_tC5045D0C22A7514F1F7D1F59549A5A9B7D88F510_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WebSocketCloseEventHandler_tD2F6193A42EB71C99D482FC38E4EC30825567A12_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WebSocketErrorEventHandler_t1B9EEB799CE0D22694C37BD87CEDBDF9FB199528_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WebSocketMessageEventHandler_t58A60AF5E7F18EC4591F32F0894E4BA5A7A8F222_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WebSocketOpenEventHandler_tDA44AD311FF420B05C807A25ED3C313A2D9514B0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral37422C200CFCABD757B9019D3ABA76E55A7A5DA5;
IL2CPP_EXTERN_C String_t* _stringLiteral479625953694FC0583C3D8F93F44332026972846;
IL2CPP_EXTERN_C String_t* _stringLiteral56D7741BCA89552362FD24D11BB8980E3D8A444C;
IL2CPP_EXTERN_C String_t* _stringLiteral587B0E053519266A1A5628C5DBE03AA33A3BBE95;
IL2CPP_EXTERN_C const RuntimeMethod* ArraySegment_1__ctor_mAA780E22BB5AE07078510EDCE524DD1EA1E98E0D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ArraySegment_1__ctor_mB8E7E8D50D7933AF431552AB0D1B93FA747CC151_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ArraySegment_1_get_Array_m3D83A2CFF4D51F8ED83C89538616FF0A700F463C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ArraySegment_1_get_Count_mC13AC26CCFD0EACBCC08F24F2A7BB22841B44C32_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ArraySegment_1_get_Offset_m13F255A2A7A730982F330A448FCB32239782C505_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_AwaitOnCompleted_TisMainThreadAwaiter_t07EC1C94003617C1B1C0EEF3FDE6C52A66F42FC1_TisU3CReceiveU3Ed__36_tAD99CF678583A10E2AD64335EB851ABC77878E0C_mEAE25AD68DB3ACBEC79C6C1800AA1FE4DE7AA0B4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C_TisU3CReceiveU3Ed__36_tAD99CF678583A10E2AD64335EB851ABC77878E0C_m9870273794D79F8F0FCF35325F6C18344C121011_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tE7CEF18367E979C3A40489CF01B7F0C9D2DC7FD6_TisU3CReceiveU3Ed__36_tAD99CF678583A10E2AD64335EB851ABC77878E0C_m09DFAB6318BD6894F5593C2B7AE0A92F1D2ABF50_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CCloseU3Ed__37_t2B8C769B471A3E7EF033776A04F6922AC5E7DBE4_m99E5BC10F103D5B68E339F73E42B2FF8B3141E3B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CConnectU3Ed__27_t981981F013AF3401CBA896BAF061C290E36CBBEC_m326752BD3E37A144ED26B777F9010D1D5208EEEB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CHandleQueueU3Ed__33_t195271007DF8F3318A09DD491A9A5408DA560F40_mC5107023865B64E42C84456A9A570F6EA05529E8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CReceiveU3Ed__36_tAD99CF678583A10E2AD64335EB851ABC77878E0C_m9F54F113924E225A0E68DFEBB7AC3DD40796D886_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CSendMessageU3Ed__32_t98E469030BF6849D4377D3C2EC6B58D959874AF7_m3BEB6369909AD4257D33A9C83136C0D54D5ABC7F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_Start_TisU3CCloseU3Ed__37_t2B8C769B471A3E7EF033776A04F6922AC5E7DBE4_m32F449BF94BE4BB81C2D0B6BE9E7CE914FA07819_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_Start_TisU3CConnectU3Ed__27_t981981F013AF3401CBA896BAF061C290E36CBBEC_m0D4711D8D0EE0E00C5B84F63948F0B821EF4DE59_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_Start_TisU3CHandleQueueU3Ed__33_t195271007DF8F3318A09DD491A9A5408DA560F40_m953745A4A8CF4B7BC9A246D3B2271038C35C81C0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_Start_TisU3CReceiveU3Ed__36_tAD99CF678583A10E2AD64335EB851ABC77878E0C_m3C573B64266E6A0EB2C15C47C47547154E30B5C7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_Start_TisU3CSendMessageU3Ed__32_t98E469030BF6849D4377D3C2EC6B58D959874AF7_m939C124DE206D2D5A2C187F485229A4344A1BD58_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_GetEnumerator_m8C0A038B5FA7E62DEF4DB9EF1F5FCC4348D785C5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mA6747E78BD4DF1D09D9091C1B3EBAE0FDB200666_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m65A91D17CADA79F187F4D68980A9C8640B6C9FC7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m76E867298698AA2B89F9D57E21CEFCD16B372D22_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mA57D4325DBD9D10EB3E43C99CC18DB6C3CE85FC8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mCE70417061695048D84E473D50556E46B8630F54_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m45394A0B01FA26CB32851562F9CBF27DB35FF4DD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m9B0E356FA9FCFB9B1BECC6D7C5DF5C03309251AA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisMainThreadUtil_t5C0093E7A5EC95A615FCFFB62C0135DBB840E1D0_mA75C3695A8A592441FC88024007C1B59CE86B290_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Key_m42802FFFC275E928911F87B16DFE504319DF58F1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Value_mB6B24D3920A4744624F8ED9AE493783D0E5F81DD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m7382F9FB42CFCC39EB42749795866FD34FC9B736_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mE2D42E8F87548101921C1F2DAA810601D3D70904_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m5621C38865E52261F1EBAD5841646169F08B0E0D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m35388695226DE2F7B0B5D0A07016716D6AD9CAEF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_RemoveAt_mEE8557B501BCCCDFD7BA8563504405FC81A65957_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m390A2307193B6A62098EE9A3798568873C7D3CF3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m951713A2C8790F19949E1D872CC93903C6E6596A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mC74F8340E150B8F9520188937677421C55AF5C05_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m7D8A7D7BE06561F4695456CA5B4696E85DD6C84B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mCEBCF66B19764A2EFF9F5F81C78323729EC10F60_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m8763363EF411BE8EC9CCEBEF4AA81F71601D4584_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mBB7B78C8411D5DB18818B1BD99D1D4E29F2EF39B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_Value_m7DB9FB5C8C333030A091B400CB163A9A28A17634_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_GetResult_mCDCAAF89F5D74175A37B6E9F507C970EDAF07B97_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_get_IsCompleted_m2D13C0370C28B8EA4406A35F0A8BC012DF3C8537_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1_GetAwaiter_m46A488400364A14C5B4A6B616BD7A1BB08927520_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CCoroutineWrapperU3Ed__4_System_Collections_IEnumerator_Reset_m687AA3DF64EE887B87103EBA01DCEF81567572FF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CReceiveU3Ed__36_MoveNext_m86AB6017D86F2DC7F0CD07ED2DD279E33852F576_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CGetAwaiterU3Eb__0_0_m88C13AA593812ADF78936F7A6302101B0103C97C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass9_0_U3CRunU3Eb__0_mFE3B1B2E492DF422D90BFC13067FDA36D5DB4BFB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WebSocket__ctor_m7E9FBA59F0C7A75E56A532FB588446048F6A91C7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* WebSocketCloseCode_tC5045D0C22A7514F1F7D1F59549A5A9B7D88F510_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ArraySegment_1U5BU5D_t821BA8E5F776D41AA08A36AF8AD2D3FC6B12EDE4;
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
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
struct U3CModuleU3E_t2E9D258B43BFCC5D56B045CC60C986C3664E4083 
{
public:

public:
};


// System.Object


// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t52A654EA9927D1B5F56CA05CF209F2E4393C4510* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t52C81163A051BCD87A36FEF95F736DD600E2305D * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t9161A5C97376D261665798FA27DAFD5177305C81 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___entries_1)); }
	inline EntryU5BU5D_t52A654EA9927D1B5F56CA05CF209F2E4393C4510* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t52A654EA9927D1B5F56CA05CF209F2E4393C4510** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t52A654EA9927D1B5F56CA05CF209F2E4393C4510* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___keys_7)); }
	inline KeyCollection_t52C81163A051BCD87A36FEF95F736DD600E2305D * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t52C81163A051BCD87A36FEF95F736DD600E2305D ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t52C81163A051BCD87A36FEF95F736DD600E2305D * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___values_8)); }
	inline ValueCollection_t9161A5C97376D261665798FA27DAFD5177305C81 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t9161A5C97376D261665798FA27DAFD5177305C81 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t9161A5C97376D261665798FA27DAFD5177305C81 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.ArraySegment`1<System.Byte>>
struct List_1_tAC5780506F34558E53CD51BF8B2E6633C667059B  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ArraySegment_1U5BU5D_t821BA8E5F776D41AA08A36AF8AD2D3FC6B12EDE4* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tAC5780506F34558E53CD51BF8B2E6633C667059B, ____items_1)); }
	inline ArraySegment_1U5BU5D_t821BA8E5F776D41AA08A36AF8AD2D3FC6B12EDE4* get__items_1() const { return ____items_1; }
	inline ArraySegment_1U5BU5D_t821BA8E5F776D41AA08A36AF8AD2D3FC6B12EDE4** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ArraySegment_1U5BU5D_t821BA8E5F776D41AA08A36AF8AD2D3FC6B12EDE4* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tAC5780506F34558E53CD51BF8B2E6633C667059B, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tAC5780506F34558E53CD51BF8B2E6633C667059B, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tAC5780506F34558E53CD51BF8B2E6633C667059B, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tAC5780506F34558E53CD51BF8B2E6633C667059B_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ArraySegment_1U5BU5D_t821BA8E5F776D41AA08A36AF8AD2D3FC6B12EDE4* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tAC5780506F34558E53CD51BF8B2E6633C667059B_StaticFields, ____emptyArray_5)); }
	inline ArraySegment_1U5BU5D_t821BA8E5F776D41AA08A36AF8AD2D3FC6B12EDE4* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ArraySegment_1U5BU5D_t821BA8E5F776D41AA08A36AF8AD2D3FC6B12EDE4** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ArraySegment_1U5BU5D_t821BA8E5F776D41AA08A36AF8AD2D3FC6B12EDE4* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Byte[]>
struct List_1_t08E192A6E99857FD75EAA081A5D3BEC33729EDBE  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ByteU5BU5DU5BU5D_t95107DE217CCFA8CD77945AC2CB9492D4D01FE8D* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t08E192A6E99857FD75EAA081A5D3BEC33729EDBE, ____items_1)); }
	inline ByteU5BU5DU5BU5D_t95107DE217CCFA8CD77945AC2CB9492D4D01FE8D* get__items_1() const { return ____items_1; }
	inline ByteU5BU5DU5BU5D_t95107DE217CCFA8CD77945AC2CB9492D4D01FE8D** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ByteU5BU5DU5BU5D_t95107DE217CCFA8CD77945AC2CB9492D4D01FE8D* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t08E192A6E99857FD75EAA081A5D3BEC33729EDBE, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t08E192A6E99857FD75EAA081A5D3BEC33729EDBE, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t08E192A6E99857FD75EAA081A5D3BEC33729EDBE, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t08E192A6E99857FD75EAA081A5D3BEC33729EDBE_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ByteU5BU5DU5BU5D_t95107DE217CCFA8CD77945AC2CB9492D4D01FE8D* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t08E192A6E99857FD75EAA081A5D3BEC33729EDBE_StaticFields, ____emptyArray_5)); }
	inline ByteU5BU5DU5BU5D_t95107DE217CCFA8CD77945AC2CB9492D4D01FE8D* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ByteU5BU5DU5BU5D_t95107DE217CCFA8CD77945AC2CB9492D4D01FE8D** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ByteU5BU5DU5BU5D_t95107DE217CCFA8CD77945AC2CB9492D4D01FE8D* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____items_1)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__items_1() const { return ____items_1; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields, ____emptyArray_5)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.String>
struct List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3, ____items_1)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get__items_1() const { return ____items_1; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_StaticFields, ____emptyArray_5)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get__emptyArray_5() const { return ____emptyArray_5; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// UnityEngine.CustomYieldInstruction
struct CustomYieldInstruction_t4ED1543FBAA3143362854EB1867B42E5D190A5C7  : public RuntimeObject
{
public:

public:
};


// System.Text.Encoding
struct Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827  : public RuntimeObject
{
public:
	// System.Int32 System.Text.Encoding::m_codePage
	int32_t ___m_codePage_55;
	// System.Globalization.CodePageDataItem System.Text.Encoding::dataItem
	CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E * ___dataItem_56;
	// System.Boolean System.Text.Encoding::m_deserializedFromEverett
	bool ___m_deserializedFromEverett_57;
	// System.Boolean System.Text.Encoding::m_isReadOnly
	bool ___m_isReadOnly_58;
	// System.Text.EncoderFallback System.Text.Encoding::encoderFallback
	EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 * ___encoderFallback_59;
	// System.Text.DecoderFallback System.Text.Encoding::decoderFallback
	DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D * ___decoderFallback_60;

public:
	inline static int32_t get_offset_of_m_codePage_55() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___m_codePage_55)); }
	inline int32_t get_m_codePage_55() const { return ___m_codePage_55; }
	inline int32_t* get_address_of_m_codePage_55() { return &___m_codePage_55; }
	inline void set_m_codePage_55(int32_t value)
	{
		___m_codePage_55 = value;
	}

	inline static int32_t get_offset_of_dataItem_56() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___dataItem_56)); }
	inline CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E * get_dataItem_56() const { return ___dataItem_56; }
	inline CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E ** get_address_of_dataItem_56() { return &___dataItem_56; }
	inline void set_dataItem_56(CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E * value)
	{
		___dataItem_56 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dataItem_56), (void*)value);
	}

	inline static int32_t get_offset_of_m_deserializedFromEverett_57() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___m_deserializedFromEverett_57)); }
	inline bool get_m_deserializedFromEverett_57() const { return ___m_deserializedFromEverett_57; }
	inline bool* get_address_of_m_deserializedFromEverett_57() { return &___m_deserializedFromEverett_57; }
	inline void set_m_deserializedFromEverett_57(bool value)
	{
		___m_deserializedFromEverett_57 = value;
	}

	inline static int32_t get_offset_of_m_isReadOnly_58() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___m_isReadOnly_58)); }
	inline bool get_m_isReadOnly_58() const { return ___m_isReadOnly_58; }
	inline bool* get_address_of_m_isReadOnly_58() { return &___m_isReadOnly_58; }
	inline void set_m_isReadOnly_58(bool value)
	{
		___m_isReadOnly_58 = value;
	}

	inline static int32_t get_offset_of_encoderFallback_59() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___encoderFallback_59)); }
	inline EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 * get_encoderFallback_59() const { return ___encoderFallback_59; }
	inline EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 ** get_address_of_encoderFallback_59() { return &___encoderFallback_59; }
	inline void set_encoderFallback_59(EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 * value)
	{
		___encoderFallback_59 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___encoderFallback_59), (void*)value);
	}

	inline static int32_t get_offset_of_decoderFallback_60() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___decoderFallback_60)); }
	inline DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D * get_decoderFallback_60() const { return ___decoderFallback_60; }
	inline DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D ** get_address_of_decoderFallback_60() { return &___decoderFallback_60; }
	inline void set_decoderFallback_60(DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D * value)
	{
		___decoderFallback_60 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___decoderFallback_60), (void*)value);
	}
};

struct Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields
{
public:
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::defaultEncoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___defaultEncoding_0;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::unicodeEncoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___unicodeEncoding_1;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::bigEndianUnicode
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___bigEndianUnicode_2;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf7Encoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___utf7Encoding_3;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8Encoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___utf8Encoding_4;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf32Encoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___utf32Encoding_5;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::asciiEncoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___asciiEncoding_6;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::latin1Encoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___latin1Encoding_7;
	// System.Collections.Hashtable modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::encodings
	Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * ___encodings_8;
	// System.Object System.Text.Encoding::s_InternalSyncObject
	RuntimeObject * ___s_InternalSyncObject_61;

public:
	inline static int32_t get_offset_of_defaultEncoding_0() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___defaultEncoding_0)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_defaultEncoding_0() const { return ___defaultEncoding_0; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_defaultEncoding_0() { return &___defaultEncoding_0; }
	inline void set_defaultEncoding_0(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___defaultEncoding_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultEncoding_0), (void*)value);
	}

	inline static int32_t get_offset_of_unicodeEncoding_1() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___unicodeEncoding_1)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_unicodeEncoding_1() const { return ___unicodeEncoding_1; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_unicodeEncoding_1() { return &___unicodeEncoding_1; }
	inline void set_unicodeEncoding_1(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___unicodeEncoding_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___unicodeEncoding_1), (void*)value);
	}

	inline static int32_t get_offset_of_bigEndianUnicode_2() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___bigEndianUnicode_2)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_bigEndianUnicode_2() const { return ___bigEndianUnicode_2; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_bigEndianUnicode_2() { return &___bigEndianUnicode_2; }
	inline void set_bigEndianUnicode_2(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___bigEndianUnicode_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bigEndianUnicode_2), (void*)value);
	}

	inline static int32_t get_offset_of_utf7Encoding_3() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___utf7Encoding_3)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_utf7Encoding_3() const { return ___utf7Encoding_3; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_utf7Encoding_3() { return &___utf7Encoding_3; }
	inline void set_utf7Encoding_3(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___utf7Encoding_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___utf7Encoding_3), (void*)value);
	}

	inline static int32_t get_offset_of_utf8Encoding_4() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___utf8Encoding_4)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_utf8Encoding_4() const { return ___utf8Encoding_4; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_utf8Encoding_4() { return &___utf8Encoding_4; }
	inline void set_utf8Encoding_4(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___utf8Encoding_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___utf8Encoding_4), (void*)value);
	}

	inline static int32_t get_offset_of_utf32Encoding_5() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___utf32Encoding_5)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_utf32Encoding_5() const { return ___utf32Encoding_5; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_utf32Encoding_5() { return &___utf32Encoding_5; }
	inline void set_utf32Encoding_5(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___utf32Encoding_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___utf32Encoding_5), (void*)value);
	}

	inline static int32_t get_offset_of_asciiEncoding_6() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___asciiEncoding_6)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_asciiEncoding_6() const { return ___asciiEncoding_6; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_asciiEncoding_6() { return &___asciiEncoding_6; }
	inline void set_asciiEncoding_6(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___asciiEncoding_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___asciiEncoding_6), (void*)value);
	}

	inline static int32_t get_offset_of_latin1Encoding_7() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___latin1Encoding_7)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_latin1Encoding_7() const { return ___latin1Encoding_7; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_latin1Encoding_7() { return &___latin1Encoding_7; }
	inline void set_latin1Encoding_7(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___latin1Encoding_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___latin1Encoding_7), (void*)value);
	}

	inline static int32_t get_offset_of_encodings_8() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___encodings_8)); }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * get_encodings_8() const { return ___encodings_8; }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC ** get_address_of_encodings_8() { return &___encodings_8; }
	inline void set_encodings_8(Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * value)
	{
		___encodings_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___encodings_8), (void*)value);
	}

	inline static int32_t get_offset_of_s_InternalSyncObject_61() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___s_InternalSyncObject_61)); }
	inline RuntimeObject * get_s_InternalSyncObject_61() const { return ___s_InternalSyncObject_61; }
	inline RuntimeObject ** get_address_of_s_InternalSyncObject_61() { return &___s_InternalSyncObject_61; }
	inline void set_s_InternalSyncObject_61(RuntimeObject * value)
	{
		___s_InternalSyncObject_61 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_InternalSyncObject_61), (void*)value);
	}
};


// System.Runtime.ExceptionServices.ExceptionDispatchInfo
struct ExceptionDispatchInfo_t85442E41DA1485CFF22598AC362EE986DF3CDD09  : public RuntimeObject
{
public:
	// System.Exception System.Runtime.ExceptionServices.ExceptionDispatchInfo::m_Exception
	Exception_t * ___m_Exception_0;
	// System.Object System.Runtime.ExceptionServices.ExceptionDispatchInfo::m_stackTrace
	RuntimeObject * ___m_stackTrace_1;

public:
	inline static int32_t get_offset_of_m_Exception_0() { return static_cast<int32_t>(offsetof(ExceptionDispatchInfo_t85442E41DA1485CFF22598AC362EE986DF3CDD09, ___m_Exception_0)); }
	inline Exception_t * get_m_Exception_0() const { return ___m_Exception_0; }
	inline Exception_t ** get_address_of_m_Exception_0() { return &___m_Exception_0; }
	inline void set_m_Exception_0(Exception_t * value)
	{
		___m_Exception_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Exception_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_stackTrace_1() { return static_cast<int32_t>(offsetof(ExceptionDispatchInfo_t85442E41DA1485CFF22598AC362EE986DF3CDD09, ___m_stackTrace_1)); }
	inline RuntimeObject * get_m_stackTrace_1() const { return ___m_stackTrace_1; }
	inline RuntimeObject ** get_address_of_m_stackTrace_1() { return &___m_stackTrace_1; }
	inline void set_m_stackTrace_1(RuntimeObject * value)
	{
		___m_stackTrace_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_stackTrace_1), (void*)value);
	}
};


// System.MarshalByRefObject
struct MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8  : public RuntimeObject
{
public:
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject * ____identity_0;

public:
	inline static int32_t get_offset_of__identity_0() { return static_cast<int32_t>(offsetof(MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8, ____identity_0)); }
	inline RuntimeObject * get__identity_0() const { return ____identity_0; }
	inline RuntimeObject ** get_address_of__identity_0() { return &____identity_0; }
	inline void set__identity_0(RuntimeObject * value)
	{
		____identity_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____identity_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
public:

public:
};


// System.String
struct String_t  : public RuntimeObject
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


// System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
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

// NativeWebSocket.WaitForBackgroundThread
struct WaitForBackgroundThread_t8C5103639A29F371BDBADD1375E435C26BD1F00B  : public RuntimeObject
{
public:

public:
};


// System.Net.WebSockets.WebSocket
struct WebSocket_t163494E6D52FFC7BACDCD1488EB1B61B392C298D  : public RuntimeObject
{
public:

public:
};


// NativeWebSocket.WebSocketHelpers
struct WebSocketHelpers_t096972EF3A8EDEC8A3AA1E4E87E616118AB8D41B  : public RuntimeObject
{
public:

public:
};


// UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
};

// MainThreadUtil/<>c__DisplayClass9_0
struct U3CU3Ec__DisplayClass9_0_tFA5A6CDE9007824D70A78C68EBEE3D1A55BFEC8B  : public RuntimeObject
{
public:
	// System.Collections.IEnumerator MainThreadUtil/<>c__DisplayClass9_0::waitForUpdate
	RuntimeObject* ___waitForUpdate_0;

public:
	inline static int32_t get_offset_of_waitForUpdate_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass9_0_tFA5A6CDE9007824D70A78C68EBEE3D1A55BFEC8B, ___waitForUpdate_0)); }
	inline RuntimeObject* get_waitForUpdate_0() const { return ___waitForUpdate_0; }
	inline RuntimeObject** get_address_of_waitForUpdate_0() { return &___waitForUpdate_0; }
	inline void set_waitForUpdate_0(RuntimeObject* value)
	{
		___waitForUpdate_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___waitForUpdate_0), (void*)value);
	}
};


// NativeWebSocket.WaitForBackgroundThread/<>c
struct U3CU3Ec_t86F09608A4F5B7ADD94C973234164A2E9A3AB258  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t86F09608A4F5B7ADD94C973234164A2E9A3AB258_StaticFields
{
public:
	// NativeWebSocket.WaitForBackgroundThread/<>c NativeWebSocket.WaitForBackgroundThread/<>c::<>9
	U3CU3Ec_t86F09608A4F5B7ADD94C973234164A2E9A3AB258 * ___U3CU3E9_0;
	// System.Action NativeWebSocket.WaitForBackgroundThread/<>c::<>9__0_0
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___U3CU3E9__0_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t86F09608A4F5B7ADD94C973234164A2E9A3AB258_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t86F09608A4F5B7ADD94C973234164A2E9A3AB258 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t86F09608A4F5B7ADD94C973234164A2E9A3AB258 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t86F09608A4F5B7ADD94C973234164A2E9A3AB258 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__0_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t86F09608A4F5B7ADD94C973234164A2E9A3AB258_StaticFields, ___U3CU3E9__0_0_1)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_U3CU3E9__0_0_1() const { return ___U3CU3E9__0_0_1; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_U3CU3E9__0_0_1() { return &___U3CU3E9__0_0_1; }
	inline void set_U3CU3E9__0_0_1(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___U3CU3E9__0_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__0_0_1), (void*)value);
	}
};


// WaitForUpdate/<CoroutineWrapper>d__4
struct U3CCoroutineWrapperU3Ed__4_tD49B312DE148AC0AB7B48D24D92FFFCE0599CD7F  : public RuntimeObject
{
public:
	// System.Int32 WaitForUpdate/<CoroutineWrapper>d__4::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object WaitForUpdate/<CoroutineWrapper>d__4::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// System.Collections.IEnumerator WaitForUpdate/<CoroutineWrapper>d__4::theWorker
	RuntimeObject* ___theWorker_2;
	// WaitForUpdate/MainThreadAwaiter WaitForUpdate/<CoroutineWrapper>d__4::awaiter
	MainThreadAwaiter_t07EC1C94003617C1B1C0EEF3FDE6C52A66F42FC1 * ___awaiter_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CCoroutineWrapperU3Ed__4_tD49B312DE148AC0AB7B48D24D92FFFCE0599CD7F, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CCoroutineWrapperU3Ed__4_tD49B312DE148AC0AB7B48D24D92FFFCE0599CD7F, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_theWorker_2() { return static_cast<int32_t>(offsetof(U3CCoroutineWrapperU3Ed__4_tD49B312DE148AC0AB7B48D24D92FFFCE0599CD7F, ___theWorker_2)); }
	inline RuntimeObject* get_theWorker_2() const { return ___theWorker_2; }
	inline RuntimeObject** get_address_of_theWorker_2() { return &___theWorker_2; }
	inline void set_theWorker_2(RuntimeObject* value)
	{
		___theWorker_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___theWorker_2), (void*)value);
	}

	inline static int32_t get_offset_of_awaiter_3() { return static_cast<int32_t>(offsetof(U3CCoroutineWrapperU3Ed__4_tD49B312DE148AC0AB7B48D24D92FFFCE0599CD7F, ___awaiter_3)); }
	inline MainThreadAwaiter_t07EC1C94003617C1B1C0EEF3FDE6C52A66F42FC1 * get_awaiter_3() const { return ___awaiter_3; }
	inline MainThreadAwaiter_t07EC1C94003617C1B1C0EEF3FDE6C52A66F42FC1 ** get_address_of_awaiter_3() { return &___awaiter_3; }
	inline void set_awaiter_3(MainThreadAwaiter_t07EC1C94003617C1B1C0EEF3FDE6C52A66F42FC1 * value)
	{
		___awaiter_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___awaiter_3), (void*)value);
	}
};


// WaitForUpdate/MainThreadAwaiter
struct MainThreadAwaiter_t07EC1C94003617C1B1C0EEF3FDE6C52A66F42FC1  : public RuntimeObject
{
public:
	// System.Action WaitForUpdate/MainThreadAwaiter::continuation
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___continuation_0;
	// System.Boolean WaitForUpdate/MainThreadAwaiter::<IsCompleted>k__BackingField
	bool ___U3CIsCompletedU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_continuation_0() { return static_cast<int32_t>(offsetof(MainThreadAwaiter_t07EC1C94003617C1B1C0EEF3FDE6C52A66F42FC1, ___continuation_0)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_continuation_0() const { return ___continuation_0; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_continuation_0() { return &___continuation_0; }
	inline void set_continuation_0(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___continuation_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___continuation_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CIsCompletedU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(MainThreadAwaiter_t07EC1C94003617C1B1C0EEF3FDE6C52A66F42FC1, ___U3CIsCompletedU3Ek__BackingField_1)); }
	inline bool get_U3CIsCompletedU3Ek__BackingField_1() const { return ___U3CIsCompletedU3Ek__BackingField_1; }
	inline bool* get_address_of_U3CIsCompletedU3Ek__BackingField_1() { return &___U3CIsCompletedU3Ek__BackingField_1; }
	inline void set_U3CIsCompletedU3Ek__BackingField_1(bool value)
	{
		___U3CIsCompletedU3Ek__BackingField_1 = value;
	}
};


// System.ArraySegment`1<System.Byte>
struct ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE 
{
public:
	// T[] System.ArraySegment`1::_array
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ____array_0;
	// System.Int32 System.ArraySegment`1::_offset
	int32_t ____offset_1;
	// System.Int32 System.ArraySegment`1::_count
	int32_t ____count_2;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE, ____array_0)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get__array_0() const { return ____array_0; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__offset_1() { return static_cast<int32_t>(offsetof(ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE, ____offset_1)); }
	inline int32_t get__offset_1() const { return ____offset_1; }
	inline int32_t* get_address_of__offset_1() { return &____offset_1; }
	inline void set__offset_1(int32_t value)
	{
		____offset_1 = value;
	}

	inline static int32_t get_offset_of__count_2() { return static_cast<int32_t>(offsetof(ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE, ____count_2)); }
	inline int32_t get__count_2() const { return ____count_2; }
	inline int32_t* get_address_of__count_2() { return &____count_2; }
	inline void set__count_2(int32_t value)
	{
		____count_2 = value;
	}
};


// System.Collections.Generic.List`1/Enumerator<System.Object>
struct Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	RuntimeObject * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___list_0)); }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * get_list_0() const { return ___list_0; }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___current_3)); }
	inline RuntimeObject * get_current_3() const { return ___current_3; }
	inline RuntimeObject ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(RuntimeObject * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Collections.Generic.List`1/Enumerator<System.String>
struct Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	String_t* ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B, ___list_0)); }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * get_list_0() const { return ___list_0; }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B, ___current_3)); }
	inline String_t* get_current_3() const { return ___current_3; }
	inline String_t** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(String_t* value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
struct KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject * ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625, ___key_0)); }
	inline RuntimeObject * get_key_0() const { return ___key_0; }
	inline RuntimeObject ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(RuntimeObject * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___key_0), (void*)value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};


// System.Collections.Generic.KeyValuePair`2<System.String,System.String>
struct KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	String_t* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	String_t* ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC, ___key_0)); }
	inline String_t* get_key_0() const { return ___key_0; }
	inline String_t** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(String_t* value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___key_0), (void*)value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC, ___value_1)); }
	inline String_t* get_value_1() const { return ___value_1; }
	inline String_t** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(String_t* value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};


// System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>
struct TaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE 
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.TaskAwaiter`1::m_task
	Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * ___m_task_0;

public:
	inline static int32_t get_offset_of_m_task_0() { return static_cast<int32_t>(offsetof(TaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE, ___m_task_0)); }
	inline Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * get_m_task_0() const { return ___m_task_0; }
	inline Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 ** get_address_of_m_task_0() { return &___m_task_0; }
	inline void set_m_task_0(Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * value)
	{
		___m_task_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_0), (void*)value);
	}
};


// System.Runtime.CompilerServices.TaskAwaiter`1<System.Net.WebSockets.WebSocketReceiveResult>
struct TaskAwaiter_1_tE7CEF18367E979C3A40489CF01B7F0C9D2DC7FD6 
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.TaskAwaiter`1::m_task
	Task_1_t79E764D87096B674F330B1306805A0FF72B2E83E * ___m_task_0;

public:
	inline static int32_t get_offset_of_m_task_0() { return static_cast<int32_t>(offsetof(TaskAwaiter_1_tE7CEF18367E979C3A40489CF01B7F0C9D2DC7FD6, ___m_task_0)); }
	inline Task_1_t79E764D87096B674F330B1306805A0FF72B2E83E * get_m_task_0() const { return ___m_task_0; }
	inline Task_1_t79E764D87096B674F330B1306805A0FF72B2E83E ** get_address_of_m_task_0() { return &___m_task_0; }
	inline void set_m_task_0(Task_1_t79E764D87096B674F330B1306805A0FF72B2E83E * value)
	{
		___m_task_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_0), (void*)value);
	}
};


// System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34 
{
public:
	// System.Runtime.CompilerServices.IAsyncStateMachine System.Runtime.CompilerServices.AsyncMethodBuilderCore::m_stateMachine
	RuntimeObject* ___m_stateMachine_0;
	// System.Action System.Runtime.CompilerServices.AsyncMethodBuilderCore::m_defaultContextAction
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___m_defaultContextAction_1;

public:
	inline static int32_t get_offset_of_m_stateMachine_0() { return static_cast<int32_t>(offsetof(AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34, ___m_stateMachine_0)); }
	inline RuntimeObject* get_m_stateMachine_0() const { return ___m_stateMachine_0; }
	inline RuntimeObject** get_address_of_m_stateMachine_0() { return &___m_stateMachine_0; }
	inline void set_m_stateMachine_0(RuntimeObject* value)
	{
		___m_stateMachine_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_stateMachine_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_defaultContextAction_1() { return static_cast<int32_t>(offsetof(AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34, ___m_defaultContextAction_1)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_m_defaultContextAction_1() const { return ___m_defaultContextAction_1; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_m_defaultContextAction_1() { return &___m_defaultContextAction_1; }
	inline void set_m_defaultContextAction_1(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___m_defaultContextAction_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_defaultContextAction_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34_marshaled_pinvoke
{
	RuntimeObject* ___m_stateMachine_0;
	Il2CppMethodPointer ___m_defaultContextAction_1;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34_marshaled_com
{
	RuntimeObject* ___m_stateMachine_0;
	Il2CppMethodPointer ___m_defaultContextAction_1;
};

// System.Boolean
struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
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


// System.Byte
struct Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056, ___m_value_0)); }
	inline uint8_t get_m_value_0() const { return ___m_value_0; }
	inline uint8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint8_t value)
	{
		___m_value_0 = value;
	}
};


// System.Threading.CancellationToken
struct CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD 
{
public:
	// System.Threading.CancellationTokenSource System.Threading.CancellationToken::m_source
	CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * ___m_source_0;

public:
	inline static int32_t get_offset_of_m_source_0() { return static_cast<int32_t>(offsetof(CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD, ___m_source_0)); }
	inline CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * get_m_source_0() const { return ___m_source_0; }
	inline CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 ** get_address_of_m_source_0() { return &___m_source_0; }
	inline void set_m_source_0(CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * value)
	{
		___m_source_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_source_0), (void*)value);
	}
};

struct CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD_StaticFields
{
public:
	// System.Action`1<System.Object> System.Threading.CancellationToken::s_ActionToActionObjShunt
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ___s_ActionToActionObjShunt_1;

public:
	inline static int32_t get_offset_of_s_ActionToActionObjShunt_1() { return static_cast<int32_t>(offsetof(CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD_StaticFields, ___s_ActionToActionObjShunt_1)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get_s_ActionToActionObjShunt_1() const { return ___s_ActionToActionObjShunt_1; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of_s_ActionToActionObjShunt_1() { return &___s_ActionToActionObjShunt_1; }
	inline void set_s_ActionToActionObjShunt_1(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		___s_ActionToActionObjShunt_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ActionToActionObjShunt_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Threading.CancellationToken
struct CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD_marshaled_pinvoke
{
	CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * ___m_source_0;
};
// Native definition for COM marshalling of System.Threading.CancellationToken
struct CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD_marshaled_com
{
	CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * ___m_source_0;
};

// System.Net.WebSockets.ClientWebSocket
struct ClientWebSocket_tA2D70722EB2DD788E27D46C7E262C85C984EEE09  : public WebSocket_t163494E6D52FFC7BACDCD1488EB1B61B392C298D
{
public:
	// System.Net.WebSockets.ClientWebSocketOptions System.Net.WebSockets.ClientWebSocket::_options
	ClientWebSocketOptions_t542669394208DA09FBC06141585E0CA380ACEC85 * ____options_0;
	// System.Net.WebSockets.WebSocketHandle System.Net.WebSockets.ClientWebSocket::_innerWebSocket
	WebSocketHandle_t39F2F748886F0AEA42BB56CB4836BA17834AD3A4 * ____innerWebSocket_1;
	// System.Int32 System.Net.WebSockets.ClientWebSocket::_state
	int32_t ____state_2;

public:
	inline static int32_t get_offset_of__options_0() { return static_cast<int32_t>(offsetof(ClientWebSocket_tA2D70722EB2DD788E27D46C7E262C85C984EEE09, ____options_0)); }
	inline ClientWebSocketOptions_t542669394208DA09FBC06141585E0CA380ACEC85 * get__options_0() const { return ____options_0; }
	inline ClientWebSocketOptions_t542669394208DA09FBC06141585E0CA380ACEC85 ** get_address_of__options_0() { return &____options_0; }
	inline void set__options_0(ClientWebSocketOptions_t542669394208DA09FBC06141585E0CA380ACEC85 * value)
	{
		____options_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____options_0), (void*)value);
	}

	inline static int32_t get_offset_of__innerWebSocket_1() { return static_cast<int32_t>(offsetof(ClientWebSocket_tA2D70722EB2DD788E27D46C7E262C85C984EEE09, ____innerWebSocket_1)); }
	inline WebSocketHandle_t39F2F748886F0AEA42BB56CB4836BA17834AD3A4 * get__innerWebSocket_1() const { return ____innerWebSocket_1; }
	inline WebSocketHandle_t39F2F748886F0AEA42BB56CB4836BA17834AD3A4 ** get_address_of__innerWebSocket_1() { return &____innerWebSocket_1; }
	inline void set__innerWebSocket_1(WebSocketHandle_t39F2F748886F0AEA42BB56CB4836BA17834AD3A4 * value)
	{
		____innerWebSocket_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerWebSocket_1), (void*)value);
	}

	inline static int32_t get_offset_of__state_2() { return static_cast<int32_t>(offsetof(ClientWebSocket_tA2D70722EB2DD788E27D46C7E262C85C984EEE09, ____state_2)); }
	inline int32_t get__state_2() const { return ____state_2; }
	inline int32_t* get_address_of__state_2() { return &____state_2; }
	inline void set__state_2(int32_t value)
	{
		____state_2 = value;
	}
};


// System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
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

// System.Int32
struct Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
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
struct Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3 
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
struct IntPtr_t 
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


// System.IO.Stream
struct Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB  : public MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8
{
public:
	// System.IO.Stream/ReadWriteTask System.IO.Stream::_activeReadWriteTask
	ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974 * ____activeReadWriteTask_2;
	// System.Threading.SemaphoreSlim System.IO.Stream::_asyncActiveSemaphore
	SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 * ____asyncActiveSemaphore_3;

public:
	inline static int32_t get_offset_of__activeReadWriteTask_2() { return static_cast<int32_t>(offsetof(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB, ____activeReadWriteTask_2)); }
	inline ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974 * get__activeReadWriteTask_2() const { return ____activeReadWriteTask_2; }
	inline ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974 ** get_address_of__activeReadWriteTask_2() { return &____activeReadWriteTask_2; }
	inline void set__activeReadWriteTask_2(ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974 * value)
	{
		____activeReadWriteTask_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____activeReadWriteTask_2), (void*)value);
	}

	inline static int32_t get_offset_of__asyncActiveSemaphore_3() { return static_cast<int32_t>(offsetof(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB, ____asyncActiveSemaphore_3)); }
	inline SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 * get__asyncActiveSemaphore_3() const { return ____asyncActiveSemaphore_3; }
	inline SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 ** get_address_of__asyncActiveSemaphore_3() { return &____asyncActiveSemaphore_3; }
	inline void set__asyncActiveSemaphore_3(SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 * value)
	{
		____asyncActiveSemaphore_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____asyncActiveSemaphore_3), (void*)value);
	}
};

struct Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB_StaticFields
{
public:
	// System.IO.Stream System.IO.Stream::Null
	Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___Null_1;

public:
	inline static int32_t get_offset_of_Null_1() { return static_cast<int32_t>(offsetof(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB_StaticFields, ___Null_1)); }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * get_Null_1() const { return ___Null_1; }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB ** get_address_of_Null_1() { return &___Null_1; }
	inline void set_Null_1(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * value)
	{
		___Null_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Null_1), (void*)value);
	}
};


// System.Runtime.CompilerServices.TaskAwaiter
struct TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C 
{
public:
	// System.Threading.Tasks.Task System.Runtime.CompilerServices.TaskAwaiter::m_task
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___m_task_0;

public:
	inline static int32_t get_offset_of_m_task_0() { return static_cast<int32_t>(offsetof(TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C, ___m_task_0)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_m_task_0() const { return ___m_task_0; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_m_task_0() { return &___m_task_0; }
	inline void set_m_task_0(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___m_task_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.TaskAwaiter
struct TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_marshaled_pinvoke
{
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___m_task_0;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.TaskAwaiter
struct TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_marshaled_com
{
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___m_task_0;
};

// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
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


// WaitForUpdate
struct WaitForUpdate_t0977047DBECB52C15D8149E0817A0DCD8F2ECDA2  : public CustomYieldInstruction_t4ED1543FBAA3143362854EB1867B42E5D190A5C7
{
public:

public:
};


// System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter
struct ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C 
{
public:
	// System.Threading.Tasks.Task System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter::m_task
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___m_task_0;
	// System.Boolean System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter::m_continueOnCapturedContext
	bool ___m_continueOnCapturedContext_1;

public:
	inline static int32_t get_offset_of_m_task_0() { return static_cast<int32_t>(offsetof(ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C, ___m_task_0)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_m_task_0() const { return ___m_task_0; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_m_task_0() { return &___m_task_0; }
	inline void set_m_task_0(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___m_task_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_continueOnCapturedContext_1() { return static_cast<int32_t>(offsetof(ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C, ___m_continueOnCapturedContext_1)); }
	inline bool get_m_continueOnCapturedContext_1() const { return ___m_continueOnCapturedContext_1; }
	inline bool* get_address_of_m_continueOnCapturedContext_1() { return &___m_continueOnCapturedContext_1; }
	inline void set_m_continueOnCapturedContext_1(bool value)
	{
		___m_continueOnCapturedContext_1 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter
struct ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C_marshaled_pinvoke
{
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___m_task_0;
	int32_t ___m_continueOnCapturedContext_1;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter
struct ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C_marshaled_com
{
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___m_task_0;
	int32_t ___m_continueOnCapturedContext_1;
};

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Threading.Tasks.VoidTaskResult>
struct AsyncTaskMethodBuilder_1_t3E10C35B53D8718724E2BF748600FB762F4719AD 
{
public:
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_coreState
	AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34  ___m_coreState_1;
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_task
	Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * ___m_task_2;

public:
	inline static int32_t get_offset_of_m_coreState_1() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_t3E10C35B53D8718724E2BF748600FB762F4719AD, ___m_coreState_1)); }
	inline AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34  get_m_coreState_1() const { return ___m_coreState_1; }
	inline AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34 * get_address_of_m_coreState_1() { return &___m_coreState_1; }
	inline void set_m_coreState_1(AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34  value)
	{
		___m_coreState_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_task_2() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_t3E10C35B53D8718724E2BF748600FB762F4719AD, ___m_task_2)); }
	inline Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * get_m_task_2() const { return ___m_task_2; }
	inline Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 ** get_address_of_m_task_2() { return &___m_task_2; }
	inline void set_m_task_2(Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * value)
	{
		___m_task_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_2), (void*)value);
	}
};

struct AsyncTaskMethodBuilder_1_t3E10C35B53D8718724E2BF748600FB762F4719AD_StaticFields
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::s_defaultResultTask
	Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * ___s_defaultResultTask_0;

public:
	inline static int32_t get_offset_of_s_defaultResultTask_0() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_t3E10C35B53D8718724E2BF748600FB762F4719AD_StaticFields, ___s_defaultResultTask_0)); }
	inline Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * get_s_defaultResultTask_0() const { return ___s_defaultResultTask_0; }
	inline Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 ** get_address_of_s_defaultResultTask_0() { return &___s_defaultResultTask_0; }
	inline void set_s_defaultResultTask_0(Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * value)
	{
		___s_defaultResultTask_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_defaultResultTask_0), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>
struct Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::dictionary
	Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::version
	int32_t ___version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::index
	int32_t ___index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::current
	KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  ___current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::getEnumeratorRetType
	int32_t ___getEnumeratorRetType_4;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0, ___dictionary_0)); }
	inline Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}

	inline static int32_t get_offset_of_version_1() { return static_cast<int32_t>(offsetof(Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0, ___version_1)); }
	inline int32_t get_version_1() const { return ___version_1; }
	inline int32_t* get_address_of_version_1() { return &___version_1; }
	inline void set_version_1(int32_t value)
	{
		___version_1 = value;
	}

	inline static int32_t get_offset_of_index_2() { return static_cast<int32_t>(offsetof(Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0, ___index_2)); }
	inline int32_t get_index_2() const { return ___index_2; }
	inline int32_t* get_address_of_index_2() { return &___index_2; }
	inline void set_index_2(int32_t value)
	{
		___index_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0, ___current_3)); }
	inline KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  get_current_3() const { return ___current_3; }
	inline KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___key_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___value_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_getEnumeratorRetType_4() { return static_cast<int32_t>(offsetof(Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0, ___getEnumeratorRetType_4)); }
	inline int32_t get_getEnumeratorRetType_4() const { return ___getEnumeratorRetType_4; }
	inline int32_t* get_address_of_getEnumeratorRetType_4() { return &___getEnumeratorRetType_4; }
	inline void set_getEnumeratorRetType_4(int32_t value)
	{
		___getEnumeratorRetType_4 = value;
	}
};


// System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.String>
struct Enumerator_tEDF5E503528903FB9B9A1D645C82789D7B8006CB 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::dictionary
	Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::version
	int32_t ___version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::index
	int32_t ___index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::current
	KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC  ___current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::getEnumeratorRetType
	int32_t ___getEnumeratorRetType_4;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_tEDF5E503528903FB9B9A1D645C82789D7B8006CB, ___dictionary_0)); }
	inline Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}

	inline static int32_t get_offset_of_version_1() { return static_cast<int32_t>(offsetof(Enumerator_tEDF5E503528903FB9B9A1D645C82789D7B8006CB, ___version_1)); }
	inline int32_t get_version_1() const { return ___version_1; }
	inline int32_t* get_address_of_version_1() { return &___version_1; }
	inline void set_version_1(int32_t value)
	{
		___version_1 = value;
	}

	inline static int32_t get_offset_of_index_2() { return static_cast<int32_t>(offsetof(Enumerator_tEDF5E503528903FB9B9A1D645C82789D7B8006CB, ___index_2)); }
	inline int32_t get_index_2() const { return ___index_2; }
	inline int32_t* get_address_of_index_2() { return &___index_2; }
	inline void set_index_2(int32_t value)
	{
		___index_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tEDF5E503528903FB9B9A1D645C82789D7B8006CB, ___current_3)); }
	inline KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC  get_current_3() const { return ___current_3; }
	inline KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC  value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___key_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___value_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_getEnumeratorRetType_4() { return static_cast<int32_t>(offsetof(Enumerator_tEDF5E503528903FB9B9A1D645C82789D7B8006CB, ___getEnumeratorRetType_4)); }
	inline int32_t get_getEnumeratorRetType_4() const { return ___getEnumeratorRetType_4; }
	inline int32_t* get_address_of_getEnumeratorRetType_4() { return &___getEnumeratorRetType_4; }
	inline void set_getEnumeratorRetType_4(int32_t value)
	{
		___getEnumeratorRetType_4 = value;
	}
};


// System.Nullable`1<System.ArraySegment`1<System.Byte>>
struct Nullable_1_t7A4FF613B5A608EA17F834BFF58114A8EF6A8CD4 
{
public:
	// T System.Nullable`1::value
	ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t7A4FF613B5A608EA17F834BFF58114A8EF6A8CD4, ___value_0)); }
	inline ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  get_value_0() const { return ___value_0; }
	inline ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE * get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  value)
	{
		___value_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_0))->____array_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t7A4FF613B5A608EA17F834BFF58114A8EF6A8CD4, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Reflection.BindingFlags
struct BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Threading.CancellationTokenSource
struct CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3  : public RuntimeObject
{
public:
	// System.Threading.ManualResetEvent modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.CancellationTokenSource::m_kernelEvent
	ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA * ___m_kernelEvent_3;
	// System.Threading.SparselyPopulatedArray`1<System.Threading.CancellationCallbackInfo>[] modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.CancellationTokenSource::m_registeredCallbacksLists
	SparselyPopulatedArray_1U5BU5D_t4D2064CEC206620DC5001D7C857A845833DCB52A* ___m_registeredCallbacksLists_4;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.CancellationTokenSource::m_state
	int32_t ___m_state_9;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.CancellationTokenSource::m_threadIDExecutingCallbacks
	int32_t ___m_threadIDExecutingCallbacks_10;
	// System.Boolean System.Threading.CancellationTokenSource::m_disposed
	bool ___m_disposed_11;
	// System.Threading.CancellationTokenRegistration[] System.Threading.CancellationTokenSource::m_linkingRegistrations
	CancellationTokenRegistrationU5BU5D_t864BA2E1E6485FDC593F17F7C01525F33CCE7910* ___m_linkingRegistrations_12;
	// System.Threading.CancellationCallbackInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.CancellationTokenSource::m_executingCallback
	CancellationCallbackInfo_t7FC8CF6DB4845FCB0138771E86AE058710B1117B * ___m_executingCallback_14;
	// System.Threading.Timer modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.CancellationTokenSource::m_timer
	Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB * ___m_timer_15;

public:
	inline static int32_t get_offset_of_m_kernelEvent_3() { return static_cast<int32_t>(offsetof(CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3, ___m_kernelEvent_3)); }
	inline ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA * get_m_kernelEvent_3() const { return ___m_kernelEvent_3; }
	inline ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA ** get_address_of_m_kernelEvent_3() { return &___m_kernelEvent_3; }
	inline void set_m_kernelEvent_3(ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA * value)
	{
		___m_kernelEvent_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_kernelEvent_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_registeredCallbacksLists_4() { return static_cast<int32_t>(offsetof(CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3, ___m_registeredCallbacksLists_4)); }
	inline SparselyPopulatedArray_1U5BU5D_t4D2064CEC206620DC5001D7C857A845833DCB52A* get_m_registeredCallbacksLists_4() const { return ___m_registeredCallbacksLists_4; }
	inline SparselyPopulatedArray_1U5BU5D_t4D2064CEC206620DC5001D7C857A845833DCB52A** get_address_of_m_registeredCallbacksLists_4() { return &___m_registeredCallbacksLists_4; }
	inline void set_m_registeredCallbacksLists_4(SparselyPopulatedArray_1U5BU5D_t4D2064CEC206620DC5001D7C857A845833DCB52A* value)
	{
		___m_registeredCallbacksLists_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_registeredCallbacksLists_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_state_9() { return static_cast<int32_t>(offsetof(CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3, ___m_state_9)); }
	inline int32_t get_m_state_9() const { return ___m_state_9; }
	inline int32_t* get_address_of_m_state_9() { return &___m_state_9; }
	inline void set_m_state_9(int32_t value)
	{
		___m_state_9 = value;
	}

	inline static int32_t get_offset_of_m_threadIDExecutingCallbacks_10() { return static_cast<int32_t>(offsetof(CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3, ___m_threadIDExecutingCallbacks_10)); }
	inline int32_t get_m_threadIDExecutingCallbacks_10() const { return ___m_threadIDExecutingCallbacks_10; }
	inline int32_t* get_address_of_m_threadIDExecutingCallbacks_10() { return &___m_threadIDExecutingCallbacks_10; }
	inline void set_m_threadIDExecutingCallbacks_10(int32_t value)
	{
		___m_threadIDExecutingCallbacks_10 = value;
	}

	inline static int32_t get_offset_of_m_disposed_11() { return static_cast<int32_t>(offsetof(CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3, ___m_disposed_11)); }
	inline bool get_m_disposed_11() const { return ___m_disposed_11; }
	inline bool* get_address_of_m_disposed_11() { return &___m_disposed_11; }
	inline void set_m_disposed_11(bool value)
	{
		___m_disposed_11 = value;
	}

	inline static int32_t get_offset_of_m_linkingRegistrations_12() { return static_cast<int32_t>(offsetof(CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3, ___m_linkingRegistrations_12)); }
	inline CancellationTokenRegistrationU5BU5D_t864BA2E1E6485FDC593F17F7C01525F33CCE7910* get_m_linkingRegistrations_12() const { return ___m_linkingRegistrations_12; }
	inline CancellationTokenRegistrationU5BU5D_t864BA2E1E6485FDC593F17F7C01525F33CCE7910** get_address_of_m_linkingRegistrations_12() { return &___m_linkingRegistrations_12; }
	inline void set_m_linkingRegistrations_12(CancellationTokenRegistrationU5BU5D_t864BA2E1E6485FDC593F17F7C01525F33CCE7910* value)
	{
		___m_linkingRegistrations_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_linkingRegistrations_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_executingCallback_14() { return static_cast<int32_t>(offsetof(CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3, ___m_executingCallback_14)); }
	inline CancellationCallbackInfo_t7FC8CF6DB4845FCB0138771E86AE058710B1117B * get_m_executingCallback_14() const { return ___m_executingCallback_14; }
	inline CancellationCallbackInfo_t7FC8CF6DB4845FCB0138771E86AE058710B1117B ** get_address_of_m_executingCallback_14() { return &___m_executingCallback_14; }
	inline void set_m_executingCallback_14(CancellationCallbackInfo_t7FC8CF6DB4845FCB0138771E86AE058710B1117B * value)
	{
		___m_executingCallback_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_executingCallback_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_timer_15() { return static_cast<int32_t>(offsetof(CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3, ___m_timer_15)); }
	inline Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB * get_m_timer_15() const { return ___m_timer_15; }
	inline Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB ** get_address_of_m_timer_15() { return &___m_timer_15; }
	inline void set_m_timer_15(Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB * value)
	{
		___m_timer_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_timer_15), (void*)value);
	}
};

struct CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3_StaticFields
{
public:
	// System.Threading.CancellationTokenSource System.Threading.CancellationTokenSource::_staticSource_Set
	CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * ____staticSource_Set_0;
	// System.Threading.CancellationTokenSource System.Threading.CancellationTokenSource::_staticSource_NotCancelable
	CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * ____staticSource_NotCancelable_1;
	// System.Int32 System.Threading.CancellationTokenSource::s_nLists
	int32_t ___s_nLists_2;
	// System.Action`1<System.Object> System.Threading.CancellationTokenSource::s_LinkedTokenCancelDelegate
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ___s_LinkedTokenCancelDelegate_13;
	// System.Threading.TimerCallback System.Threading.CancellationTokenSource::s_timerCallback
	TimerCallback_tD193CC50BF27E129E6857E1E8A7EAC24BD131814 * ___s_timerCallback_16;

public:
	inline static int32_t get_offset_of__staticSource_Set_0() { return static_cast<int32_t>(offsetof(CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3_StaticFields, ____staticSource_Set_0)); }
	inline CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * get__staticSource_Set_0() const { return ____staticSource_Set_0; }
	inline CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 ** get_address_of__staticSource_Set_0() { return &____staticSource_Set_0; }
	inline void set__staticSource_Set_0(CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * value)
	{
		____staticSource_Set_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____staticSource_Set_0), (void*)value);
	}

	inline static int32_t get_offset_of__staticSource_NotCancelable_1() { return static_cast<int32_t>(offsetof(CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3_StaticFields, ____staticSource_NotCancelable_1)); }
	inline CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * get__staticSource_NotCancelable_1() const { return ____staticSource_NotCancelable_1; }
	inline CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 ** get_address_of__staticSource_NotCancelable_1() { return &____staticSource_NotCancelable_1; }
	inline void set__staticSource_NotCancelable_1(CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * value)
	{
		____staticSource_NotCancelable_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____staticSource_NotCancelable_1), (void*)value);
	}

	inline static int32_t get_offset_of_s_nLists_2() { return static_cast<int32_t>(offsetof(CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3_StaticFields, ___s_nLists_2)); }
	inline int32_t get_s_nLists_2() const { return ___s_nLists_2; }
	inline int32_t* get_address_of_s_nLists_2() { return &___s_nLists_2; }
	inline void set_s_nLists_2(int32_t value)
	{
		___s_nLists_2 = value;
	}

	inline static int32_t get_offset_of_s_LinkedTokenCancelDelegate_13() { return static_cast<int32_t>(offsetof(CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3_StaticFields, ___s_LinkedTokenCancelDelegate_13)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get_s_LinkedTokenCancelDelegate_13() const { return ___s_LinkedTokenCancelDelegate_13; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of_s_LinkedTokenCancelDelegate_13() { return &___s_LinkedTokenCancelDelegate_13; }
	inline void set_s_LinkedTokenCancelDelegate_13(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		___s_LinkedTokenCancelDelegate_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_LinkedTokenCancelDelegate_13), (void*)value);
	}

	inline static int32_t get_offset_of_s_timerCallback_16() { return static_cast<int32_t>(offsetof(CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3_StaticFields, ___s_timerCallback_16)); }
	inline TimerCallback_tD193CC50BF27E129E6857E1E8A7EAC24BD131814 * get_s_timerCallback_16() const { return ___s_timerCallback_16; }
	inline TimerCallback_tD193CC50BF27E129E6857E1E8A7EAC24BD131814 ** get_address_of_s_timerCallback_16() { return &___s_timerCallback_16; }
	inline void set_s_timerCallback_16(TimerCallback_tD193CC50BF27E129E6857E1E8A7EAC24BD131814 * value)
	{
		___s_timerCallback_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_timerCallback_16), (void*)value);
	}
};


// System.Runtime.CompilerServices.ConfiguredTaskAwaitable
struct ConfiguredTaskAwaitable_t4B703D7D241C339E7814EFFE5D266424E90BCE1E 
{
public:
	// System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter System.Runtime.CompilerServices.ConfiguredTaskAwaitable::m_configuredTaskAwaiter
	ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C  ___m_configuredTaskAwaiter_0;

public:
	inline static int32_t get_offset_of_m_configuredTaskAwaiter_0() { return static_cast<int32_t>(offsetof(ConfiguredTaskAwaitable_t4B703D7D241C339E7814EFFE5D266424E90BCE1E, ___m_configuredTaskAwaiter_0)); }
	inline ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C  get_m_configuredTaskAwaiter_0() const { return ___m_configuredTaskAwaiter_0; }
	inline ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C * get_address_of_m_configuredTaskAwaiter_0() { return &___m_configuredTaskAwaiter_0; }
	inline void set_m_configuredTaskAwaiter_0(ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C  value)
	{
		___m_configuredTaskAwaiter_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_configuredTaskAwaiter_0))->___m_task_0), (void*)NULL);
	}
};

// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.ConfiguredTaskAwaitable
struct ConfiguredTaskAwaitable_t4B703D7D241C339E7814EFFE5D266424E90BCE1E_marshaled_pinvoke
{
	ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C_marshaled_pinvoke ___m_configuredTaskAwaiter_0;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.ConfiguredTaskAwaitable
struct ConfiguredTaskAwaitable_t4B703D7D241C339E7814EFFE5D266424E90BCE1E_marshaled_com
{
	ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C_marshaled_com ___m_configuredTaskAwaiter_0;
};

// UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7_marshaled_pinvoke : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7_marshaled_com : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
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

// System.Exception
struct Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____className_1), (void*)value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_2), (void*)value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_3), (void*)value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerException_4), (void*)value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____helpURL_5), (void*)value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTrace_6), (void*)value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTraceString_7), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____remoteStackTraceString_8), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dynamicMethods_10), (void*)value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____source_12), (void*)value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_trace_ips_15), (void*)value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EDILock_0), (void*)value);
	}
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
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
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
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// UnityEngine.HideFlags
struct HideFlags_tDC64149E37544FF83B2B4222D3E9DC8188766A12 
{
public:
	// System.Int32 UnityEngine.HideFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(HideFlags_tDC64149E37544FF83B2B4222D3E9DC8188766A12, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Int32Enum
struct Int32Enum_t9B63F771913F2B6D586F1173B44A41FBE26F6B5C 
{
public:
	// System.Int32 System.Int32Enum::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Int32Enum_t9B63F771913F2B6D586F1173B44A41FBE26F6B5C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.IO.MemoryStream
struct MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C  : public Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB
{
public:
	// System.Byte[] System.IO.MemoryStream::_buffer
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ____buffer_4;
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
	Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 * ____lastReadTask_13;

public:
	inline static int32_t get_offset_of__buffer_4() { return static_cast<int32_t>(offsetof(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C, ____buffer_4)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get__buffer_4() const { return ____buffer_4; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of__buffer_4() { return &____buffer_4; }
	inline void set__buffer_4(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		____buffer_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____buffer_4), (void*)value);
	}

	inline static int32_t get_offset_of__origin_5() { return static_cast<int32_t>(offsetof(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C, ____origin_5)); }
	inline int32_t get__origin_5() const { return ____origin_5; }
	inline int32_t* get_address_of__origin_5() { return &____origin_5; }
	inline void set__origin_5(int32_t value)
	{
		____origin_5 = value;
	}

	inline static int32_t get_offset_of__position_6() { return static_cast<int32_t>(offsetof(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C, ____position_6)); }
	inline int32_t get__position_6() const { return ____position_6; }
	inline int32_t* get_address_of__position_6() { return &____position_6; }
	inline void set__position_6(int32_t value)
	{
		____position_6 = value;
	}

	inline static int32_t get_offset_of__length_7() { return static_cast<int32_t>(offsetof(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C, ____length_7)); }
	inline int32_t get__length_7() const { return ____length_7; }
	inline int32_t* get_address_of__length_7() { return &____length_7; }
	inline void set__length_7(int32_t value)
	{
		____length_7 = value;
	}

	inline static int32_t get_offset_of__capacity_8() { return static_cast<int32_t>(offsetof(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C, ____capacity_8)); }
	inline int32_t get__capacity_8() const { return ____capacity_8; }
	inline int32_t* get_address_of__capacity_8() { return &____capacity_8; }
	inline void set__capacity_8(int32_t value)
	{
		____capacity_8 = value;
	}

	inline static int32_t get_offset_of__expandable_9() { return static_cast<int32_t>(offsetof(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C, ____expandable_9)); }
	inline bool get__expandable_9() const { return ____expandable_9; }
	inline bool* get_address_of__expandable_9() { return &____expandable_9; }
	inline void set__expandable_9(bool value)
	{
		____expandable_9 = value;
	}

	inline static int32_t get_offset_of__writable_10() { return static_cast<int32_t>(offsetof(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C, ____writable_10)); }
	inline bool get__writable_10() const { return ____writable_10; }
	inline bool* get_address_of__writable_10() { return &____writable_10; }
	inline void set__writable_10(bool value)
	{
		____writable_10 = value;
	}

	inline static int32_t get_offset_of__exposable_11() { return static_cast<int32_t>(offsetof(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C, ____exposable_11)); }
	inline bool get__exposable_11() const { return ____exposable_11; }
	inline bool* get_address_of__exposable_11() { return &____exposable_11; }
	inline void set__exposable_11(bool value)
	{
		____exposable_11 = value;
	}

	inline static int32_t get_offset_of__isOpen_12() { return static_cast<int32_t>(offsetof(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C, ____isOpen_12)); }
	inline bool get__isOpen_12() const { return ____isOpen_12; }
	inline bool* get_address_of__isOpen_12() { return &____isOpen_12; }
	inline void set__isOpen_12(bool value)
	{
		____isOpen_12 = value;
	}

	inline static int32_t get_offset_of__lastReadTask_13() { return static_cast<int32_t>(offsetof(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C, ____lastReadTask_13)); }
	inline Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 * get__lastReadTask_13() const { return ____lastReadTask_13; }
	inline Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 ** get_address_of__lastReadTask_13() { return &____lastReadTask_13; }
	inline void set__lastReadTask_13(Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 * value)
	{
		____lastReadTask_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____lastReadTask_13), (void*)value);
	}
};


// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A  : public RuntimeObject
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

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};


// System.IO.SeekOrigin
struct SeekOrigin_t4A91B37D046CD7A6578066059AE9F6269A888D4F 
{
public:
	// System.Int32 System.IO.SeekOrigin::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SeekOrigin_t4A91B37D046CD7A6578066059AE9F6269A888D4F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Threading.SynchronizationContextProperties
struct SynchronizationContextProperties_t1A9B979AA4252E755DB5A8CC447FBF89E0AB296A 
{
public:
	// System.Int32 System.Threading.SynchronizationContextProperties::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SynchronizationContextProperties_t1A9B979AA4252E755DB5A8CC447FBF89E0AB296A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Threading.Tasks.Task
struct Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60  : public RuntimeObject
{
public:
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_taskId
	int32_t ___m_taskId_4;
	// System.Object System.Threading.Tasks.Task::m_action
	RuntimeObject * ___m_action_5;
	// System.Object System.Threading.Tasks.Task::m_stateObject
	RuntimeObject * ___m_stateObject_6;
	// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.Task::m_taskScheduler
	TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * ___m_taskScheduler_7;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::m_parent
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___m_parent_8;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_stateFlags
	int32_t ___m_stateFlags_9;
	// System.Object modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_continuationObject
	RuntimeObject * ___m_continuationObject_10;
	// System.Threading.Tasks.Task/ContingentProperties modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_contingentProperties
	ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 * ___m_contingentProperties_15;

public:
	inline static int32_t get_offset_of_m_taskId_4() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_taskId_4)); }
	inline int32_t get_m_taskId_4() const { return ___m_taskId_4; }
	inline int32_t* get_address_of_m_taskId_4() { return &___m_taskId_4; }
	inline void set_m_taskId_4(int32_t value)
	{
		___m_taskId_4 = value;
	}

	inline static int32_t get_offset_of_m_action_5() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_action_5)); }
	inline RuntimeObject * get_m_action_5() const { return ___m_action_5; }
	inline RuntimeObject ** get_address_of_m_action_5() { return &___m_action_5; }
	inline void set_m_action_5(RuntimeObject * value)
	{
		___m_action_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_action_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_stateObject_6() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_stateObject_6)); }
	inline RuntimeObject * get_m_stateObject_6() const { return ___m_stateObject_6; }
	inline RuntimeObject ** get_address_of_m_stateObject_6() { return &___m_stateObject_6; }
	inline void set_m_stateObject_6(RuntimeObject * value)
	{
		___m_stateObject_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_stateObject_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_taskScheduler_7() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_taskScheduler_7)); }
	inline TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * get_m_taskScheduler_7() const { return ___m_taskScheduler_7; }
	inline TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D ** get_address_of_m_taskScheduler_7() { return &___m_taskScheduler_7; }
	inline void set_m_taskScheduler_7(TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * value)
	{
		___m_taskScheduler_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_taskScheduler_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_parent_8() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_parent_8)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_m_parent_8() const { return ___m_parent_8; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_m_parent_8() { return &___m_parent_8; }
	inline void set_m_parent_8(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___m_parent_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_parent_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_stateFlags_9() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_stateFlags_9)); }
	inline int32_t get_m_stateFlags_9() const { return ___m_stateFlags_9; }
	inline int32_t* get_address_of_m_stateFlags_9() { return &___m_stateFlags_9; }
	inline void set_m_stateFlags_9(int32_t value)
	{
		___m_stateFlags_9 = value;
	}

	inline static int32_t get_offset_of_m_continuationObject_10() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_continuationObject_10)); }
	inline RuntimeObject * get_m_continuationObject_10() const { return ___m_continuationObject_10; }
	inline RuntimeObject ** get_address_of_m_continuationObject_10() { return &___m_continuationObject_10; }
	inline void set_m_continuationObject_10(RuntimeObject * value)
	{
		___m_continuationObject_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_continuationObject_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_contingentProperties_15() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_contingentProperties_15)); }
	inline ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 * get_m_contingentProperties_15() const { return ___m_contingentProperties_15; }
	inline ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 ** get_address_of_m_contingentProperties_15() { return &___m_contingentProperties_15; }
	inline void set_m_contingentProperties_15(ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 * value)
	{
		___m_contingentProperties_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_contingentProperties_15), (void*)value);
	}
};

struct Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields
{
public:
	// System.Int32 System.Threading.Tasks.Task::s_taskIdCounter
	int32_t ___s_taskIdCounter_2;
	// System.Threading.Tasks.TaskFactory System.Threading.Tasks.Task::s_factory
	TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B * ___s_factory_3;
	// System.Object System.Threading.Tasks.Task::s_taskCompletionSentinel
	RuntimeObject * ___s_taskCompletionSentinel_11;
	// System.Boolean System.Threading.Tasks.Task::s_asyncDebuggingEnabled
	bool ___s_asyncDebuggingEnabled_12;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_currentActiveTasks
	Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8 * ___s_currentActiveTasks_13;
	// System.Object System.Threading.Tasks.Task::s_activeTasksLock
	RuntimeObject * ___s_activeTasksLock_14;
	// System.Action`1<System.Object> System.Threading.Tasks.Task::s_taskCancelCallback
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ___s_taskCancelCallback_16;
	// System.Func`1<System.Threading.Tasks.Task/ContingentProperties> System.Threading.Tasks.Task::s_createContingentProperties
	Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B * ___s_createContingentProperties_17;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::s_completedTask
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___s_completedTask_18;
	// System.Predicate`1<System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_IsExceptionObservedByParentPredicate
	Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD * ___s_IsExceptionObservedByParentPredicate_19;
	// System.Threading.ContextCallback System.Threading.Tasks.Task::s_ecCallback
	ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B * ___s_ecCallback_20;
	// System.Predicate`1<System.Object> System.Threading.Tasks.Task::s_IsTaskContinuationNullPredicate
	Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * ___s_IsTaskContinuationNullPredicate_21;

public:
	inline static int32_t get_offset_of_s_taskIdCounter_2() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_taskIdCounter_2)); }
	inline int32_t get_s_taskIdCounter_2() const { return ___s_taskIdCounter_2; }
	inline int32_t* get_address_of_s_taskIdCounter_2() { return &___s_taskIdCounter_2; }
	inline void set_s_taskIdCounter_2(int32_t value)
	{
		___s_taskIdCounter_2 = value;
	}

	inline static int32_t get_offset_of_s_factory_3() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_factory_3)); }
	inline TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B * get_s_factory_3() const { return ___s_factory_3; }
	inline TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B ** get_address_of_s_factory_3() { return &___s_factory_3; }
	inline void set_s_factory_3(TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B * value)
	{
		___s_factory_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_factory_3), (void*)value);
	}

	inline static int32_t get_offset_of_s_taskCompletionSentinel_11() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_taskCompletionSentinel_11)); }
	inline RuntimeObject * get_s_taskCompletionSentinel_11() const { return ___s_taskCompletionSentinel_11; }
	inline RuntimeObject ** get_address_of_s_taskCompletionSentinel_11() { return &___s_taskCompletionSentinel_11; }
	inline void set_s_taskCompletionSentinel_11(RuntimeObject * value)
	{
		___s_taskCompletionSentinel_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_taskCompletionSentinel_11), (void*)value);
	}

	inline static int32_t get_offset_of_s_asyncDebuggingEnabled_12() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_asyncDebuggingEnabled_12)); }
	inline bool get_s_asyncDebuggingEnabled_12() const { return ___s_asyncDebuggingEnabled_12; }
	inline bool* get_address_of_s_asyncDebuggingEnabled_12() { return &___s_asyncDebuggingEnabled_12; }
	inline void set_s_asyncDebuggingEnabled_12(bool value)
	{
		___s_asyncDebuggingEnabled_12 = value;
	}

	inline static int32_t get_offset_of_s_currentActiveTasks_13() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_currentActiveTasks_13)); }
	inline Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8 * get_s_currentActiveTasks_13() const { return ___s_currentActiveTasks_13; }
	inline Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8 ** get_address_of_s_currentActiveTasks_13() { return &___s_currentActiveTasks_13; }
	inline void set_s_currentActiveTasks_13(Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8 * value)
	{
		___s_currentActiveTasks_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_currentActiveTasks_13), (void*)value);
	}

	inline static int32_t get_offset_of_s_activeTasksLock_14() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_activeTasksLock_14)); }
	inline RuntimeObject * get_s_activeTasksLock_14() const { return ___s_activeTasksLock_14; }
	inline RuntimeObject ** get_address_of_s_activeTasksLock_14() { return &___s_activeTasksLock_14; }
	inline void set_s_activeTasksLock_14(RuntimeObject * value)
	{
		___s_activeTasksLock_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_activeTasksLock_14), (void*)value);
	}

	inline static int32_t get_offset_of_s_taskCancelCallback_16() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_taskCancelCallback_16)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get_s_taskCancelCallback_16() const { return ___s_taskCancelCallback_16; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of_s_taskCancelCallback_16() { return &___s_taskCancelCallback_16; }
	inline void set_s_taskCancelCallback_16(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		___s_taskCancelCallback_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_taskCancelCallback_16), (void*)value);
	}

	inline static int32_t get_offset_of_s_createContingentProperties_17() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_createContingentProperties_17)); }
	inline Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B * get_s_createContingentProperties_17() const { return ___s_createContingentProperties_17; }
	inline Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B ** get_address_of_s_createContingentProperties_17() { return &___s_createContingentProperties_17; }
	inline void set_s_createContingentProperties_17(Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B * value)
	{
		___s_createContingentProperties_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_createContingentProperties_17), (void*)value);
	}

	inline static int32_t get_offset_of_s_completedTask_18() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_completedTask_18)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_s_completedTask_18() const { return ___s_completedTask_18; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_s_completedTask_18() { return &___s_completedTask_18; }
	inline void set_s_completedTask_18(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___s_completedTask_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_completedTask_18), (void*)value);
	}

	inline static int32_t get_offset_of_s_IsExceptionObservedByParentPredicate_19() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_IsExceptionObservedByParentPredicate_19)); }
	inline Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD * get_s_IsExceptionObservedByParentPredicate_19() const { return ___s_IsExceptionObservedByParentPredicate_19; }
	inline Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD ** get_address_of_s_IsExceptionObservedByParentPredicate_19() { return &___s_IsExceptionObservedByParentPredicate_19; }
	inline void set_s_IsExceptionObservedByParentPredicate_19(Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD * value)
	{
		___s_IsExceptionObservedByParentPredicate_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_IsExceptionObservedByParentPredicate_19), (void*)value);
	}

	inline static int32_t get_offset_of_s_ecCallback_20() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_ecCallback_20)); }
	inline ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B * get_s_ecCallback_20() const { return ___s_ecCallback_20; }
	inline ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B ** get_address_of_s_ecCallback_20() { return &___s_ecCallback_20; }
	inline void set_s_ecCallback_20(ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B * value)
	{
		___s_ecCallback_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ecCallback_20), (void*)value);
	}

	inline static int32_t get_offset_of_s_IsTaskContinuationNullPredicate_21() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_IsTaskContinuationNullPredicate_21)); }
	inline Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * get_s_IsTaskContinuationNullPredicate_21() const { return ___s_IsTaskContinuationNullPredicate_21; }
	inline Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB ** get_address_of_s_IsTaskContinuationNullPredicate_21() { return &___s_IsTaskContinuationNullPredicate_21; }
	inline void set_s_IsTaskContinuationNullPredicate_21(Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * value)
	{
		___s_IsTaskContinuationNullPredicate_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_IsTaskContinuationNullPredicate_21), (void*)value);
	}
};

struct Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_ThreadStaticFields
{
public:
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::t_currentTask
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___t_currentTask_0;
	// System.Threading.Tasks.StackGuard System.Threading.Tasks.Task::t_stackGuard
	StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D * ___t_stackGuard_1;

public:
	inline static int32_t get_offset_of_t_currentTask_0() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_ThreadStaticFields, ___t_currentTask_0)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_t_currentTask_0() const { return ___t_currentTask_0; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_t_currentTask_0() { return &___t_currentTask_0; }
	inline void set_t_currentTask_0(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___t_currentTask_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___t_currentTask_0), (void*)value);
	}

	inline static int32_t get_offset_of_t_stackGuard_1() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_ThreadStaticFields, ___t_stackGuard_1)); }
	inline StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D * get_t_stackGuard_1() const { return ___t_stackGuard_1; }
	inline StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D ** get_address_of_t_stackGuard_1() { return &___t_stackGuard_1; }
	inline void set_t_stackGuard_1(StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D * value)
	{
		___t_stackGuard_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___t_stackGuard_1), (void*)value);
	}
};


// System.TimeSpan
struct TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 
{
public:
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_22;

public:
	inline static int32_t get_offset_of__ticks_22() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203, ____ticks_22)); }
	inline int64_t get__ticks_22() const { return ____ticks_22; }
	inline int64_t* get_address_of__ticks_22() { return &____ticks_22; }
	inline void set__ticks_22(int64_t value)
	{
		____ticks_22 = value;
	}
};

struct TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields
{
public:
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___Zero_19;
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___MaxValue_20;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___MinValue_21;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.TimeSpan::_legacyConfigChecked
	bool ____legacyConfigChecked_23;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.TimeSpan::_legacyMode
	bool ____legacyMode_24;

public:
	inline static int32_t get_offset_of_Zero_19() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ___Zero_19)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_Zero_19() const { return ___Zero_19; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_Zero_19() { return &___Zero_19; }
	inline void set_Zero_19(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___Zero_19 = value;
	}

	inline static int32_t get_offset_of_MaxValue_20() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ___MaxValue_20)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_MaxValue_20() const { return ___MaxValue_20; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_MaxValue_20() { return &___MaxValue_20; }
	inline void set_MaxValue_20(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___MaxValue_20 = value;
	}

	inline static int32_t get_offset_of_MinValue_21() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ___MinValue_21)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_MinValue_21() const { return ___MinValue_21; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_MinValue_21() { return &___MinValue_21; }
	inline void set_MinValue_21(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___MinValue_21 = value;
	}

	inline static int32_t get_offset_of__legacyConfigChecked_23() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ____legacyConfigChecked_23)); }
	inline bool get__legacyConfigChecked_23() const { return ____legacyConfigChecked_23; }
	inline bool* get_address_of__legacyConfigChecked_23() { return &____legacyConfigChecked_23; }
	inline void set__legacyConfigChecked_23(bool value)
	{
		____legacyConfigChecked_23 = value;
	}

	inline static int32_t get_offset_of__legacyMode_24() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ____legacyMode_24)); }
	inline bool get__legacyMode_24() const { return ____legacyMode_24; }
	inline bool* get_address_of__legacyMode_24() { return &____legacyMode_24; }
	inline void set__legacyMode_24(bool value)
	{
		____legacyMode_24 = value;
	}
};


// System.UriFormat
struct UriFormat_t25C936463BDE737B16A8EC3DA05091FC31F1A71F 
{
public:
	// System.Int32 System.UriFormat::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UriFormat_t25C936463BDE737B16A8EC3DA05091FC31F1A71F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.UriIdnScope
struct UriIdnScope_tBA22B992BA582F68F2B98CDEBCB24299F249DE4D 
{
public:
	// System.Int32 System.UriIdnScope::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UriIdnScope_tBA22B992BA582F68F2B98CDEBCB24299F249DE4D, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.UriKind
struct UriKind_tFC16ACC1842283AAE2C7F50C9C70EFBF6550B3FC 
{
public:
	// System.Int32 System.UriKind::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UriKind_tFC16ACC1842283AAE2C7F50C9C70EFBF6550B3FC, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// NativeWebSocket.WebSocket
struct WebSocket_t5FA66A4CDB32ECEC66E8A22DA5C2F3F778802646  : public RuntimeObject
{
public:
	// NativeWebSocket.WebSocketOpenEventHandler NativeWebSocket.WebSocket::OnOpen
	WebSocketOpenEventHandler_tDA44AD311FF420B05C807A25ED3C313A2D9514B0 * ___OnOpen_0;
	// NativeWebSocket.WebSocketMessageEventHandler NativeWebSocket.WebSocket::OnMessage
	WebSocketMessageEventHandler_t58A60AF5E7F18EC4591F32F0894E4BA5A7A8F222 * ___OnMessage_1;
	// NativeWebSocket.WebSocketErrorEventHandler NativeWebSocket.WebSocket::OnError
	WebSocketErrorEventHandler_t1B9EEB799CE0D22694C37BD87CEDBDF9FB199528 * ___OnError_2;
	// NativeWebSocket.WebSocketCloseEventHandler NativeWebSocket.WebSocket::OnClose
	WebSocketCloseEventHandler_tD2F6193A42EB71C99D482FC38E4EC30825567A12 * ___OnClose_3;
	// System.Uri NativeWebSocket.WebSocket::uri
	Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * ___uri_4;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> NativeWebSocket.WebSocket::headers
	Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * ___headers_5;
	// System.Collections.Generic.List`1<System.String> NativeWebSocket.WebSocket::subprotocols
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___subprotocols_6;
	// System.Net.WebSockets.ClientWebSocket NativeWebSocket.WebSocket::m_Socket
	ClientWebSocket_tA2D70722EB2DD788E27D46C7E262C85C984EEE09 * ___m_Socket_7;
	// System.Threading.CancellationTokenSource NativeWebSocket.WebSocket::m_TokenSource
	CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * ___m_TokenSource_8;
	// System.Threading.CancellationToken NativeWebSocket.WebSocket::m_CancellationToken
	CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  ___m_CancellationToken_9;
	// System.Object NativeWebSocket.WebSocket::OutgoingMessageLock
	RuntimeObject * ___OutgoingMessageLock_10;
	// System.Object NativeWebSocket.WebSocket::IncomingMessageLock
	RuntimeObject * ___IncomingMessageLock_11;
	// System.Boolean NativeWebSocket.WebSocket::isSending
	bool ___isSending_12;
	// System.Collections.Generic.List`1<System.ArraySegment`1<System.Byte>> NativeWebSocket.WebSocket::sendBytesQueue
	List_1_tAC5780506F34558E53CD51BF8B2E6633C667059B * ___sendBytesQueue_13;
	// System.Collections.Generic.List`1<System.ArraySegment`1<System.Byte>> NativeWebSocket.WebSocket::sendTextQueue
	List_1_tAC5780506F34558E53CD51BF8B2E6633C667059B * ___sendTextQueue_14;
	// System.Collections.Generic.List`1<System.Byte[]> NativeWebSocket.WebSocket::m_MessageList
	List_1_t08E192A6E99857FD75EAA081A5D3BEC33729EDBE * ___m_MessageList_15;

public:
	inline static int32_t get_offset_of_OnOpen_0() { return static_cast<int32_t>(offsetof(WebSocket_t5FA66A4CDB32ECEC66E8A22DA5C2F3F778802646, ___OnOpen_0)); }
	inline WebSocketOpenEventHandler_tDA44AD311FF420B05C807A25ED3C313A2D9514B0 * get_OnOpen_0() const { return ___OnOpen_0; }
	inline WebSocketOpenEventHandler_tDA44AD311FF420B05C807A25ED3C313A2D9514B0 ** get_address_of_OnOpen_0() { return &___OnOpen_0; }
	inline void set_OnOpen_0(WebSocketOpenEventHandler_tDA44AD311FF420B05C807A25ED3C313A2D9514B0 * value)
	{
		___OnOpen_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnOpen_0), (void*)value);
	}

	inline static int32_t get_offset_of_OnMessage_1() { return static_cast<int32_t>(offsetof(WebSocket_t5FA66A4CDB32ECEC66E8A22DA5C2F3F778802646, ___OnMessage_1)); }
	inline WebSocketMessageEventHandler_t58A60AF5E7F18EC4591F32F0894E4BA5A7A8F222 * get_OnMessage_1() const { return ___OnMessage_1; }
	inline WebSocketMessageEventHandler_t58A60AF5E7F18EC4591F32F0894E4BA5A7A8F222 ** get_address_of_OnMessage_1() { return &___OnMessage_1; }
	inline void set_OnMessage_1(WebSocketMessageEventHandler_t58A60AF5E7F18EC4591F32F0894E4BA5A7A8F222 * value)
	{
		___OnMessage_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnMessage_1), (void*)value);
	}

	inline static int32_t get_offset_of_OnError_2() { return static_cast<int32_t>(offsetof(WebSocket_t5FA66A4CDB32ECEC66E8A22DA5C2F3F778802646, ___OnError_2)); }
	inline WebSocketErrorEventHandler_t1B9EEB799CE0D22694C37BD87CEDBDF9FB199528 * get_OnError_2() const { return ___OnError_2; }
	inline WebSocketErrorEventHandler_t1B9EEB799CE0D22694C37BD87CEDBDF9FB199528 ** get_address_of_OnError_2() { return &___OnError_2; }
	inline void set_OnError_2(WebSocketErrorEventHandler_t1B9EEB799CE0D22694C37BD87CEDBDF9FB199528 * value)
	{
		___OnError_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnError_2), (void*)value);
	}

	inline static int32_t get_offset_of_OnClose_3() { return static_cast<int32_t>(offsetof(WebSocket_t5FA66A4CDB32ECEC66E8A22DA5C2F3F778802646, ___OnClose_3)); }
	inline WebSocketCloseEventHandler_tD2F6193A42EB71C99D482FC38E4EC30825567A12 * get_OnClose_3() const { return ___OnClose_3; }
	inline WebSocketCloseEventHandler_tD2F6193A42EB71C99D482FC38E4EC30825567A12 ** get_address_of_OnClose_3() { return &___OnClose_3; }
	inline void set_OnClose_3(WebSocketCloseEventHandler_tD2F6193A42EB71C99D482FC38E4EC30825567A12 * value)
	{
		___OnClose_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnClose_3), (void*)value);
	}

	inline static int32_t get_offset_of_uri_4() { return static_cast<int32_t>(offsetof(WebSocket_t5FA66A4CDB32ECEC66E8A22DA5C2F3F778802646, ___uri_4)); }
	inline Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * get_uri_4() const { return ___uri_4; }
	inline Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 ** get_address_of_uri_4() { return &___uri_4; }
	inline void set_uri_4(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * value)
	{
		___uri_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___uri_4), (void*)value);
	}

	inline static int32_t get_offset_of_headers_5() { return static_cast<int32_t>(offsetof(WebSocket_t5FA66A4CDB32ECEC66E8A22DA5C2F3F778802646, ___headers_5)); }
	inline Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * get_headers_5() const { return ___headers_5; }
	inline Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 ** get_address_of_headers_5() { return &___headers_5; }
	inline void set_headers_5(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * value)
	{
		___headers_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___headers_5), (void*)value);
	}

	inline static int32_t get_offset_of_subprotocols_6() { return static_cast<int32_t>(offsetof(WebSocket_t5FA66A4CDB32ECEC66E8A22DA5C2F3F778802646, ___subprotocols_6)); }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * get_subprotocols_6() const { return ___subprotocols_6; }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 ** get_address_of_subprotocols_6() { return &___subprotocols_6; }
	inline void set_subprotocols_6(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * value)
	{
		___subprotocols_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___subprotocols_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Socket_7() { return static_cast<int32_t>(offsetof(WebSocket_t5FA66A4CDB32ECEC66E8A22DA5C2F3F778802646, ___m_Socket_7)); }
	inline ClientWebSocket_tA2D70722EB2DD788E27D46C7E262C85C984EEE09 * get_m_Socket_7() const { return ___m_Socket_7; }
	inline ClientWebSocket_tA2D70722EB2DD788E27D46C7E262C85C984EEE09 ** get_address_of_m_Socket_7() { return &___m_Socket_7; }
	inline void set_m_Socket_7(ClientWebSocket_tA2D70722EB2DD788E27D46C7E262C85C984EEE09 * value)
	{
		___m_Socket_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Socket_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_TokenSource_8() { return static_cast<int32_t>(offsetof(WebSocket_t5FA66A4CDB32ECEC66E8A22DA5C2F3F778802646, ___m_TokenSource_8)); }
	inline CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * get_m_TokenSource_8() const { return ___m_TokenSource_8; }
	inline CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 ** get_address_of_m_TokenSource_8() { return &___m_TokenSource_8; }
	inline void set_m_TokenSource_8(CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * value)
	{
		___m_TokenSource_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TokenSource_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_CancellationToken_9() { return static_cast<int32_t>(offsetof(WebSocket_t5FA66A4CDB32ECEC66E8A22DA5C2F3F778802646, ___m_CancellationToken_9)); }
	inline CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  get_m_CancellationToken_9() const { return ___m_CancellationToken_9; }
	inline CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD * get_address_of_m_CancellationToken_9() { return &___m_CancellationToken_9; }
	inline void set_m_CancellationToken_9(CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  value)
	{
		___m_CancellationToken_9 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_CancellationToken_9))->___m_source_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_OutgoingMessageLock_10() { return static_cast<int32_t>(offsetof(WebSocket_t5FA66A4CDB32ECEC66E8A22DA5C2F3F778802646, ___OutgoingMessageLock_10)); }
	inline RuntimeObject * get_OutgoingMessageLock_10() const { return ___OutgoingMessageLock_10; }
	inline RuntimeObject ** get_address_of_OutgoingMessageLock_10() { return &___OutgoingMessageLock_10; }
	inline void set_OutgoingMessageLock_10(RuntimeObject * value)
	{
		___OutgoingMessageLock_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OutgoingMessageLock_10), (void*)value);
	}

	inline static int32_t get_offset_of_IncomingMessageLock_11() { return static_cast<int32_t>(offsetof(WebSocket_t5FA66A4CDB32ECEC66E8A22DA5C2F3F778802646, ___IncomingMessageLock_11)); }
	inline RuntimeObject * get_IncomingMessageLock_11() const { return ___IncomingMessageLock_11; }
	inline RuntimeObject ** get_address_of_IncomingMessageLock_11() { return &___IncomingMessageLock_11; }
	inline void set_IncomingMessageLock_11(RuntimeObject * value)
	{
		___IncomingMessageLock_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___IncomingMessageLock_11), (void*)value);
	}

	inline static int32_t get_offset_of_isSending_12() { return static_cast<int32_t>(offsetof(WebSocket_t5FA66A4CDB32ECEC66E8A22DA5C2F3F778802646, ___isSending_12)); }
	inline bool get_isSending_12() const { return ___isSending_12; }
	inline bool* get_address_of_isSending_12() { return &___isSending_12; }
	inline void set_isSending_12(bool value)
	{
		___isSending_12 = value;
	}

	inline static int32_t get_offset_of_sendBytesQueue_13() { return static_cast<int32_t>(offsetof(WebSocket_t5FA66A4CDB32ECEC66E8A22DA5C2F3F778802646, ___sendBytesQueue_13)); }
	inline List_1_tAC5780506F34558E53CD51BF8B2E6633C667059B * get_sendBytesQueue_13() const { return ___sendBytesQueue_13; }
	inline List_1_tAC5780506F34558E53CD51BF8B2E6633C667059B ** get_address_of_sendBytesQueue_13() { return &___sendBytesQueue_13; }
	inline void set_sendBytesQueue_13(List_1_tAC5780506F34558E53CD51BF8B2E6633C667059B * value)
	{
		___sendBytesQueue_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sendBytesQueue_13), (void*)value);
	}

	inline static int32_t get_offset_of_sendTextQueue_14() { return static_cast<int32_t>(offsetof(WebSocket_t5FA66A4CDB32ECEC66E8A22DA5C2F3F778802646, ___sendTextQueue_14)); }
	inline List_1_tAC5780506F34558E53CD51BF8B2E6633C667059B * get_sendTextQueue_14() const { return ___sendTextQueue_14; }
	inline List_1_tAC5780506F34558E53CD51BF8B2E6633C667059B ** get_address_of_sendTextQueue_14() { return &___sendTextQueue_14; }
	inline void set_sendTextQueue_14(List_1_tAC5780506F34558E53CD51BF8B2E6633C667059B * value)
	{
		___sendTextQueue_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sendTextQueue_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_MessageList_15() { return static_cast<int32_t>(offsetof(WebSocket_t5FA66A4CDB32ECEC66E8A22DA5C2F3F778802646, ___m_MessageList_15)); }
	inline List_1_t08E192A6E99857FD75EAA081A5D3BEC33729EDBE * get_m_MessageList_15() const { return ___m_MessageList_15; }
	inline List_1_t08E192A6E99857FD75EAA081A5D3BEC33729EDBE ** get_address_of_m_MessageList_15() { return &___m_MessageList_15; }
	inline void set_m_MessageList_15(List_1_t08E192A6E99857FD75EAA081A5D3BEC33729EDBE * value)
	{
		___m_MessageList_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_MessageList_15), (void*)value);
	}
};


// NativeWebSocket.WebSocketCloseCode
struct WebSocketCloseCode_tC5045D0C22A7514F1F7D1F59549A5A9B7D88F510 
{
public:
	// System.Int32 NativeWebSocket.WebSocketCloseCode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(WebSocketCloseCode_tC5045D0C22A7514F1F7D1F59549A5A9B7D88F510, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Net.WebSockets.WebSocketCloseStatus
struct WebSocketCloseStatus_t3F80BE84F62E6E4BF4A1BE486A6123B4C216EE71 
{
public:
	// System.Int32 System.Net.WebSockets.WebSocketCloseStatus::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(WebSocketCloseStatus_t3F80BE84F62E6E4BF4A1BE486A6123B4C216EE71, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Net.WebSockets.WebSocketMessageType
struct WebSocketMessageType_tF7042A3143AD0252FC984BD22ADA17B64B727D7D 
{
public:
	// System.Int32 System.Net.WebSockets.WebSocketMessageType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(WebSocketMessageType_tF7042A3143AD0252FC984BD22ADA17B64B727D7D, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// NativeWebSocket.WebSocketState
struct WebSocketState_t014B75135689C305B0BE57E5544ECF3305D545BD 
{
public:
	// System.Int32 NativeWebSocket.WebSocketState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(WebSocketState_t014B75135689C305B0BE57E5544ECF3305D545BD, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Net.WebSockets.WebSocketState
struct WebSocketState_t302343A2337712283EA85C8BCAD335D66FFC1E77 
{
public:
	// System.Int32 System.Net.WebSockets.WebSocketState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(WebSocketState_t302343A2337712283EA85C8BCAD335D66FFC1E77, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Uri/Flags
struct Flags_t72C622DF5C3ED762F55AB36EC2CCDDF3AF56B8D4 
{
public:
	// System.UInt64 System.Uri/Flags::value__
	uint64_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Flags_t72C622DF5C3ED762F55AB36EC2CCDDF3AF56B8D4, ___value___2)); }
	inline uint64_t get_value___2() const { return ___value___2; }
	inline uint64_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint64_t value)
	{
		___value___2 = value;
	}
};


// System.Nullable`1<System.Int32Enum>
struct Nullable_1_t64244F99361E39CBE565C5E89436C898F18DF5DC 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t64244F99361E39CBE565C5E89436C898F18DF5DC, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t64244F99361E39CBE565C5E89436C898F18DF5DC, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Nullable`1<System.Net.WebSockets.WebSocketCloseStatus>
struct Nullable_1_tEEF07CE805E86A33961C7C0AE095FA4A628605C6 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_tEEF07CE805E86A33961C7C0AE095FA4A628605C6, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_tEEF07CE805E86A33961C7C0AE095FA4A628605C6, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Threading.Tasks.Task`1<System.Net.WebSockets.WebSocketReceiveResult>
struct Task_1_t79E764D87096B674F330B1306805A0FF72B2E83E  : public Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60
{
public:
	// TResult System.Threading.Tasks.Task`1::m_result
	WebSocketReceiveResult_tEB9BD882DB3C2B94DFDA4655DAD6DFD2DDF85122 * ___m_result_22;

public:
	inline static int32_t get_offset_of_m_result_22() { return static_cast<int32_t>(offsetof(Task_1_t79E764D87096B674F330B1306805A0FF72B2E83E, ___m_result_22)); }
	inline WebSocketReceiveResult_tEB9BD882DB3C2B94DFDA4655DAD6DFD2DDF85122 * get_m_result_22() const { return ___m_result_22; }
	inline WebSocketReceiveResult_tEB9BD882DB3C2B94DFDA4655DAD6DFD2DDF85122 ** get_address_of_m_result_22() { return &___m_result_22; }
	inline void set_m_result_22(WebSocketReceiveResult_tEB9BD882DB3C2B94DFDA4655DAD6DFD2DDF85122 * value)
	{
		___m_result_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_result_22), (void*)value);
	}
};

struct Task_1_t79E764D87096B674F330B1306805A0FF72B2E83E_StaticFields
{
public:
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_Factory
	TaskFactory_1_tC063EA52EE4C2F5600912DE4F3612E7BCD1A2095 * ___s_Factory_23;
	// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<TResult>> System.Threading.Tasks.Task`1::TaskWhenAnyCast
	Func_2_t3E70501828E336A95A943FA3F6EC4B1DB7736B3E * ___TaskWhenAnyCast_24;

public:
	inline static int32_t get_offset_of_s_Factory_23() { return static_cast<int32_t>(offsetof(Task_1_t79E764D87096B674F330B1306805A0FF72B2E83E_StaticFields, ___s_Factory_23)); }
	inline TaskFactory_1_tC063EA52EE4C2F5600912DE4F3612E7BCD1A2095 * get_s_Factory_23() const { return ___s_Factory_23; }
	inline TaskFactory_1_tC063EA52EE4C2F5600912DE4F3612E7BCD1A2095 ** get_address_of_s_Factory_23() { return &___s_Factory_23; }
	inline void set_s_Factory_23(TaskFactory_1_tC063EA52EE4C2F5600912DE4F3612E7BCD1A2095 * value)
	{
		___s_Factory_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Factory_23), (void*)value);
	}

	inline static int32_t get_offset_of_TaskWhenAnyCast_24() { return static_cast<int32_t>(offsetof(Task_1_t79E764D87096B674F330B1306805A0FF72B2E83E_StaticFields, ___TaskWhenAnyCast_24)); }
	inline Func_2_t3E70501828E336A95A943FA3F6EC4B1DB7736B3E * get_TaskWhenAnyCast_24() const { return ___TaskWhenAnyCast_24; }
	inline Func_2_t3E70501828E336A95A943FA3F6EC4B1DB7736B3E ** get_address_of_TaskWhenAnyCast_24() { return &___TaskWhenAnyCast_24; }
	inline void set_TaskWhenAnyCast_24(Func_2_t3E70501828E336A95A943FA3F6EC4B1DB7736B3E * value)
	{
		___TaskWhenAnyCast_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TaskWhenAnyCast_24), (void*)value);
	}
};


// System.Runtime.CompilerServices.AsyncTaskMethodBuilder
struct AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B 
{
public:
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Threading.Tasks.VoidTaskResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder::m_builder
	AsyncTaskMethodBuilder_1_t3E10C35B53D8718724E2BF748600FB762F4719AD  ___m_builder_1;

public:
	inline static int32_t get_offset_of_m_builder_1() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B, ___m_builder_1)); }
	inline AsyncTaskMethodBuilder_1_t3E10C35B53D8718724E2BF748600FB762F4719AD  get_m_builder_1() const { return ___m_builder_1; }
	inline AsyncTaskMethodBuilder_1_t3E10C35B53D8718724E2BF748600FB762F4719AD * get_address_of_m_builder_1() { return &___m_builder_1; }
	inline void set_m_builder_1(AsyncTaskMethodBuilder_1_t3E10C35B53D8718724E2BF748600FB762F4719AD  value)
	{
		___m_builder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_builder_1))->___m_task_2), (void*)NULL);
		#endif
	}
};

struct AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B_StaticFields
{
public:
	// System.Threading.Tasks.Task`1<System.Threading.Tasks.VoidTaskResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder::s_cachedCompleted
	Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * ___s_cachedCompleted_0;

public:
	inline static int32_t get_offset_of_s_cachedCompleted_0() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B_StaticFields, ___s_cachedCompleted_0)); }
	inline Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * get_s_cachedCompleted_0() const { return ___s_cachedCompleted_0; }
	inline Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 ** get_address_of_s_cachedCompleted_0() { return &___s_cachedCompleted_0; }
	inline void set_s_cachedCompleted_0(Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * value)
	{
		___s_cachedCompleted_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_cachedCompleted_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.AsyncTaskMethodBuilder
struct AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B_marshaled_pinvoke
{
	AsyncTaskMethodBuilder_1_t3E10C35B53D8718724E2BF748600FB762F4719AD  ___m_builder_1;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.AsyncTaskMethodBuilder
struct AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B_marshaled_com
{
	AsyncTaskMethodBuilder_1_t3E10C35B53D8718724E2BF748600FB762F4719AD  ___m_builder_1;
};

// System.Net.WebSockets.ClientWebSocketOptions
struct ClientWebSocketOptions_t542669394208DA09FBC06141585E0CA380ACEC85  : public RuntimeObject
{
public:
	// System.Boolean System.Net.WebSockets.ClientWebSocketOptions::_isReadOnly
	bool ____isReadOnly_0;
	// System.Collections.Generic.List`1<System.String> System.Net.WebSockets.ClientWebSocketOptions::_requestedSubProtocols
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ____requestedSubProtocols_1;
	// System.Net.WebHeaderCollection System.Net.WebSockets.ClientWebSocketOptions::_requestHeaders
	WebHeaderCollection_tB7EEB47640F12A532E1D8331A5AD498A289824D4 * ____requestHeaders_2;
	// System.TimeSpan System.Net.WebSockets.ClientWebSocketOptions::_keepAliveInterval
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ____keepAliveInterval_3;
	// System.Boolean System.Net.WebSockets.ClientWebSocketOptions::_useDefaultCredentials
	bool ____useDefaultCredentials_4;
	// System.Net.ICredentials System.Net.WebSockets.ClientWebSocketOptions::_credentials
	RuntimeObject* ____credentials_5;
	// System.Net.IWebProxy System.Net.WebSockets.ClientWebSocketOptions::_proxy
	RuntimeObject* ____proxy_6;
	// System.Security.Cryptography.X509Certificates.X509CertificateCollection System.Net.WebSockets.ClientWebSocketOptions::_clientCertificates
	X509CertificateCollection_t2990976CAD6265665564A400870A381968AB706B * ____clientCertificates_7;
	// System.Net.CookieContainer System.Net.WebSockets.ClientWebSocketOptions::_cookies
	CookieContainer_tF22AADBBB0BBD4D3FF4440A226F8E8580B08F4C2 * ____cookies_8;
	// System.Int32 System.Net.WebSockets.ClientWebSocketOptions::_receiveBufferSize
	int32_t ____receiveBufferSize_9;
	// System.Int32 System.Net.WebSockets.ClientWebSocketOptions::_sendBufferSize
	int32_t ____sendBufferSize_10;
	// System.Nullable`1<System.ArraySegment`1<System.Byte>> System.Net.WebSockets.ClientWebSocketOptions::_buffer
	Nullable_1_t7A4FF613B5A608EA17F834BFF58114A8EF6A8CD4  ____buffer_11;

public:
	inline static int32_t get_offset_of__isReadOnly_0() { return static_cast<int32_t>(offsetof(ClientWebSocketOptions_t542669394208DA09FBC06141585E0CA380ACEC85, ____isReadOnly_0)); }
	inline bool get__isReadOnly_0() const { return ____isReadOnly_0; }
	inline bool* get_address_of__isReadOnly_0() { return &____isReadOnly_0; }
	inline void set__isReadOnly_0(bool value)
	{
		____isReadOnly_0 = value;
	}

	inline static int32_t get_offset_of__requestedSubProtocols_1() { return static_cast<int32_t>(offsetof(ClientWebSocketOptions_t542669394208DA09FBC06141585E0CA380ACEC85, ____requestedSubProtocols_1)); }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * get__requestedSubProtocols_1() const { return ____requestedSubProtocols_1; }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 ** get_address_of__requestedSubProtocols_1() { return &____requestedSubProtocols_1; }
	inline void set__requestedSubProtocols_1(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * value)
	{
		____requestedSubProtocols_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____requestedSubProtocols_1), (void*)value);
	}

	inline static int32_t get_offset_of__requestHeaders_2() { return static_cast<int32_t>(offsetof(ClientWebSocketOptions_t542669394208DA09FBC06141585E0CA380ACEC85, ____requestHeaders_2)); }
	inline WebHeaderCollection_tB7EEB47640F12A532E1D8331A5AD498A289824D4 * get__requestHeaders_2() const { return ____requestHeaders_2; }
	inline WebHeaderCollection_tB7EEB47640F12A532E1D8331A5AD498A289824D4 ** get_address_of__requestHeaders_2() { return &____requestHeaders_2; }
	inline void set__requestHeaders_2(WebHeaderCollection_tB7EEB47640F12A532E1D8331A5AD498A289824D4 * value)
	{
		____requestHeaders_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____requestHeaders_2), (void*)value);
	}

	inline static int32_t get_offset_of__keepAliveInterval_3() { return static_cast<int32_t>(offsetof(ClientWebSocketOptions_t542669394208DA09FBC06141585E0CA380ACEC85, ____keepAliveInterval_3)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get__keepAliveInterval_3() const { return ____keepAliveInterval_3; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of__keepAliveInterval_3() { return &____keepAliveInterval_3; }
	inline void set__keepAliveInterval_3(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		____keepAliveInterval_3 = value;
	}

	inline static int32_t get_offset_of__useDefaultCredentials_4() { return static_cast<int32_t>(offsetof(ClientWebSocketOptions_t542669394208DA09FBC06141585E0CA380ACEC85, ____useDefaultCredentials_4)); }
	inline bool get__useDefaultCredentials_4() const { return ____useDefaultCredentials_4; }
	inline bool* get_address_of__useDefaultCredentials_4() { return &____useDefaultCredentials_4; }
	inline void set__useDefaultCredentials_4(bool value)
	{
		____useDefaultCredentials_4 = value;
	}

	inline static int32_t get_offset_of__credentials_5() { return static_cast<int32_t>(offsetof(ClientWebSocketOptions_t542669394208DA09FBC06141585E0CA380ACEC85, ____credentials_5)); }
	inline RuntimeObject* get__credentials_5() const { return ____credentials_5; }
	inline RuntimeObject** get_address_of__credentials_5() { return &____credentials_5; }
	inline void set__credentials_5(RuntimeObject* value)
	{
		____credentials_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____credentials_5), (void*)value);
	}

	inline static int32_t get_offset_of__proxy_6() { return static_cast<int32_t>(offsetof(ClientWebSocketOptions_t542669394208DA09FBC06141585E0CA380ACEC85, ____proxy_6)); }
	inline RuntimeObject* get__proxy_6() const { return ____proxy_6; }
	inline RuntimeObject** get_address_of__proxy_6() { return &____proxy_6; }
	inline void set__proxy_6(RuntimeObject* value)
	{
		____proxy_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____proxy_6), (void*)value);
	}

	inline static int32_t get_offset_of__clientCertificates_7() { return static_cast<int32_t>(offsetof(ClientWebSocketOptions_t542669394208DA09FBC06141585E0CA380ACEC85, ____clientCertificates_7)); }
	inline X509CertificateCollection_t2990976CAD6265665564A400870A381968AB706B * get__clientCertificates_7() const { return ____clientCertificates_7; }
	inline X509CertificateCollection_t2990976CAD6265665564A400870A381968AB706B ** get_address_of__clientCertificates_7() { return &____clientCertificates_7; }
	inline void set__clientCertificates_7(X509CertificateCollection_t2990976CAD6265665564A400870A381968AB706B * value)
	{
		____clientCertificates_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____clientCertificates_7), (void*)value);
	}

	inline static int32_t get_offset_of__cookies_8() { return static_cast<int32_t>(offsetof(ClientWebSocketOptions_t542669394208DA09FBC06141585E0CA380ACEC85, ____cookies_8)); }
	inline CookieContainer_tF22AADBBB0BBD4D3FF4440A226F8E8580B08F4C2 * get__cookies_8() const { return ____cookies_8; }
	inline CookieContainer_tF22AADBBB0BBD4D3FF4440A226F8E8580B08F4C2 ** get_address_of__cookies_8() { return &____cookies_8; }
	inline void set__cookies_8(CookieContainer_tF22AADBBB0BBD4D3FF4440A226F8E8580B08F4C2 * value)
	{
		____cookies_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____cookies_8), (void*)value);
	}

	inline static int32_t get_offset_of__receiveBufferSize_9() { return static_cast<int32_t>(offsetof(ClientWebSocketOptions_t542669394208DA09FBC06141585E0CA380ACEC85, ____receiveBufferSize_9)); }
	inline int32_t get__receiveBufferSize_9() const { return ____receiveBufferSize_9; }
	inline int32_t* get_address_of__receiveBufferSize_9() { return &____receiveBufferSize_9; }
	inline void set__receiveBufferSize_9(int32_t value)
	{
		____receiveBufferSize_9 = value;
	}

	inline static int32_t get_offset_of__sendBufferSize_10() { return static_cast<int32_t>(offsetof(ClientWebSocketOptions_t542669394208DA09FBC06141585E0CA380ACEC85, ____sendBufferSize_10)); }
	inline int32_t get__sendBufferSize_10() const { return ____sendBufferSize_10; }
	inline int32_t* get_address_of__sendBufferSize_10() { return &____sendBufferSize_10; }
	inline void set__sendBufferSize_10(int32_t value)
	{
		____sendBufferSize_10 = value;
	}

	inline static int32_t get_offset_of__buffer_11() { return static_cast<int32_t>(offsetof(ClientWebSocketOptions_t542669394208DA09FBC06141585E0CA380ACEC85, ____buffer_11)); }
	inline Nullable_1_t7A4FF613B5A608EA17F834BFF58114A8EF6A8CD4  get__buffer_11() const { return ____buffer_11; }
	inline Nullable_1_t7A4FF613B5A608EA17F834BFF58114A8EF6A8CD4 * get_address_of__buffer_11() { return &____buffer_11; }
	inline void set__buffer_11(Nullable_1_t7A4FF613B5A608EA17F834BFF58114A8EF6A8CD4  value)
	{
		____buffer_11 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&____buffer_11))->___value_0))->____array_0), (void*)NULL);
	}
};


// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
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

// System.Threading.SynchronizationContext
struct SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069  : public RuntimeObject
{
public:
	// System.Threading.SynchronizationContextProperties System.Threading.SynchronizationContext::_props
	int32_t ____props_0;

public:
	inline static int32_t get_offset_of__props_0() { return static_cast<int32_t>(offsetof(SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069, ____props_0)); }
	inline int32_t get__props_0() const { return ____props_0; }
	inline int32_t* get_address_of__props_0() { return &____props_0; }
	inline void set__props_0(int32_t value)
	{
		____props_0 = value;
	}
};

struct SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069_StaticFields
{
public:
	// System.Type System.Threading.SynchronizationContext::s_cachedPreparedType1
	Type_t * ___s_cachedPreparedType1_1;
	// System.Type System.Threading.SynchronizationContext::s_cachedPreparedType2
	Type_t * ___s_cachedPreparedType2_2;
	// System.Type System.Threading.SynchronizationContext::s_cachedPreparedType3
	Type_t * ___s_cachedPreparedType3_3;
	// System.Type System.Threading.SynchronizationContext::s_cachedPreparedType4
	Type_t * ___s_cachedPreparedType4_4;
	// System.Type System.Threading.SynchronizationContext::s_cachedPreparedType5
	Type_t * ___s_cachedPreparedType5_5;

public:
	inline static int32_t get_offset_of_s_cachedPreparedType1_1() { return static_cast<int32_t>(offsetof(SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069_StaticFields, ___s_cachedPreparedType1_1)); }
	inline Type_t * get_s_cachedPreparedType1_1() const { return ___s_cachedPreparedType1_1; }
	inline Type_t ** get_address_of_s_cachedPreparedType1_1() { return &___s_cachedPreparedType1_1; }
	inline void set_s_cachedPreparedType1_1(Type_t * value)
	{
		___s_cachedPreparedType1_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_cachedPreparedType1_1), (void*)value);
	}

	inline static int32_t get_offset_of_s_cachedPreparedType2_2() { return static_cast<int32_t>(offsetof(SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069_StaticFields, ___s_cachedPreparedType2_2)); }
	inline Type_t * get_s_cachedPreparedType2_2() const { return ___s_cachedPreparedType2_2; }
	inline Type_t ** get_address_of_s_cachedPreparedType2_2() { return &___s_cachedPreparedType2_2; }
	inline void set_s_cachedPreparedType2_2(Type_t * value)
	{
		___s_cachedPreparedType2_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_cachedPreparedType2_2), (void*)value);
	}

	inline static int32_t get_offset_of_s_cachedPreparedType3_3() { return static_cast<int32_t>(offsetof(SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069_StaticFields, ___s_cachedPreparedType3_3)); }
	inline Type_t * get_s_cachedPreparedType3_3() const { return ___s_cachedPreparedType3_3; }
	inline Type_t ** get_address_of_s_cachedPreparedType3_3() { return &___s_cachedPreparedType3_3; }
	inline void set_s_cachedPreparedType3_3(Type_t * value)
	{
		___s_cachedPreparedType3_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_cachedPreparedType3_3), (void*)value);
	}

	inline static int32_t get_offset_of_s_cachedPreparedType4_4() { return static_cast<int32_t>(offsetof(SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069_StaticFields, ___s_cachedPreparedType4_4)); }
	inline Type_t * get_s_cachedPreparedType4_4() const { return ___s_cachedPreparedType4_4; }
	inline Type_t ** get_address_of_s_cachedPreparedType4_4() { return &___s_cachedPreparedType4_4; }
	inline void set_s_cachedPreparedType4_4(Type_t * value)
	{
		___s_cachedPreparedType4_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_cachedPreparedType4_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_cachedPreparedType5_5() { return static_cast<int32_t>(offsetof(SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069_StaticFields, ___s_cachedPreparedType5_5)); }
	inline Type_t * get_s_cachedPreparedType5_5() const { return ___s_cachedPreparedType5_5; }
	inline Type_t ** get_address_of_s_cachedPreparedType5_5() { return &___s_cachedPreparedType5_5; }
	inline void set_s_cachedPreparedType5_5(Type_t * value)
	{
		___s_cachedPreparedType5_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_cachedPreparedType5_5), (void*)value);
	}
};


// System.SystemException
struct SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// System.Type
struct Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ____impl_9;

public:
	inline static int32_t get_offset_of__impl_9() { return static_cast<int32_t>(offsetof(Type_t, ____impl_9)); }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  get__impl_9() const { return ____impl_9; }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 * get_address_of__impl_9() { return &____impl_9; }
	inline void set__impl_9(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  value)
	{
		____impl_9 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterAttribute_0;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterName_1;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterNameIgnoreCase_2;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_3;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_4;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* ___EmptyTypes_5;
	// System.Reflection.Binder System.Type::defaultBinder
	Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * ___defaultBinder_6;

public:
	inline static int32_t get_offset_of_FilterAttribute_0() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_0)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterAttribute_0() const { return ___FilterAttribute_0; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterAttribute_0() { return &___FilterAttribute_0; }
	inline void set_FilterAttribute_0(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterAttribute_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterAttribute_0), (void*)value);
	}

	inline static int32_t get_offset_of_FilterName_1() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_1)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterName_1() const { return ___FilterName_1; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterName_1() { return &___FilterName_1; }
	inline void set_FilterName_1(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterName_1), (void*)value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_2)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterNameIgnoreCase_2() const { return ___FilterNameIgnoreCase_2; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterNameIgnoreCase_2() { return &___FilterNameIgnoreCase_2; }
	inline void set_FilterNameIgnoreCase_2(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterNameIgnoreCase_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterNameIgnoreCase_2), (void*)value);
	}

	inline static int32_t get_offset_of_Missing_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_3)); }
	inline RuntimeObject * get_Missing_3() const { return ___Missing_3; }
	inline RuntimeObject ** get_address_of_Missing_3() { return &___Missing_3; }
	inline void set_Missing_3(RuntimeObject * value)
	{
		___Missing_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Missing_3), (void*)value);
	}

	inline static int32_t get_offset_of_Delimiter_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_4)); }
	inline Il2CppChar get_Delimiter_4() const { return ___Delimiter_4; }
	inline Il2CppChar* get_address_of_Delimiter_4() { return &___Delimiter_4; }
	inline void set_Delimiter_4(Il2CppChar value)
	{
		___Delimiter_4 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_5)); }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* get_EmptyTypes_5() const { return ___EmptyTypes_5; }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755** get_address_of_EmptyTypes_5() { return &___EmptyTypes_5; }
	inline void set_EmptyTypes_5(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* value)
	{
		___EmptyTypes_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EmptyTypes_5), (void*)value);
	}

	inline static int32_t get_offset_of_defaultBinder_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___defaultBinder_6)); }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * get_defaultBinder_6() const { return ___defaultBinder_6; }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 ** get_address_of_defaultBinder_6() { return &___defaultBinder_6; }
	inline void set_defaultBinder_6(Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * value)
	{
		___defaultBinder_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultBinder_6), (void*)value);
	}
};


// System.Uri
struct Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612  : public RuntimeObject
{
public:
	// System.String System.Uri::m_String
	String_t* ___m_String_16;
	// System.String System.Uri::m_originalUnicodeString
	String_t* ___m_originalUnicodeString_17;
	// System.UriParser System.Uri::m_Syntax
	UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * ___m_Syntax_18;
	// System.String System.Uri::m_DnsSafeHost
	String_t* ___m_DnsSafeHost_19;
	// System.Uri/Flags System.Uri::m_Flags
	uint64_t ___m_Flags_20;
	// System.Uri/UriInfo System.Uri::m_Info
	UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * ___m_Info_21;
	// System.Boolean System.Uri::m_iriParsing
	bool ___m_iriParsing_22;

public:
	inline static int32_t get_offset_of_m_String_16() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612, ___m_String_16)); }
	inline String_t* get_m_String_16() const { return ___m_String_16; }
	inline String_t** get_address_of_m_String_16() { return &___m_String_16; }
	inline void set_m_String_16(String_t* value)
	{
		___m_String_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_String_16), (void*)value);
	}

	inline static int32_t get_offset_of_m_originalUnicodeString_17() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612, ___m_originalUnicodeString_17)); }
	inline String_t* get_m_originalUnicodeString_17() const { return ___m_originalUnicodeString_17; }
	inline String_t** get_address_of_m_originalUnicodeString_17() { return &___m_originalUnicodeString_17; }
	inline void set_m_originalUnicodeString_17(String_t* value)
	{
		___m_originalUnicodeString_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_originalUnicodeString_17), (void*)value);
	}

	inline static int32_t get_offset_of_m_Syntax_18() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612, ___m_Syntax_18)); }
	inline UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * get_m_Syntax_18() const { return ___m_Syntax_18; }
	inline UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A ** get_address_of_m_Syntax_18() { return &___m_Syntax_18; }
	inline void set_m_Syntax_18(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * value)
	{
		___m_Syntax_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Syntax_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_DnsSafeHost_19() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612, ___m_DnsSafeHost_19)); }
	inline String_t* get_m_DnsSafeHost_19() const { return ___m_DnsSafeHost_19; }
	inline String_t** get_address_of_m_DnsSafeHost_19() { return &___m_DnsSafeHost_19; }
	inline void set_m_DnsSafeHost_19(String_t* value)
	{
		___m_DnsSafeHost_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DnsSafeHost_19), (void*)value);
	}

	inline static int32_t get_offset_of_m_Flags_20() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612, ___m_Flags_20)); }
	inline uint64_t get_m_Flags_20() const { return ___m_Flags_20; }
	inline uint64_t* get_address_of_m_Flags_20() { return &___m_Flags_20; }
	inline void set_m_Flags_20(uint64_t value)
	{
		___m_Flags_20 = value;
	}

	inline static int32_t get_offset_of_m_Info_21() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612, ___m_Info_21)); }
	inline UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * get_m_Info_21() const { return ___m_Info_21; }
	inline UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 ** get_address_of_m_Info_21() { return &___m_Info_21; }
	inline void set_m_Info_21(UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * value)
	{
		___m_Info_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Info_21), (void*)value);
	}

	inline static int32_t get_offset_of_m_iriParsing_22() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612, ___m_iriParsing_22)); }
	inline bool get_m_iriParsing_22() const { return ___m_iriParsing_22; }
	inline bool* get_address_of_m_iriParsing_22() { return &___m_iriParsing_22; }
	inline void set_m_iriParsing_22(bool value)
	{
		___m_iriParsing_22 = value;
	}
};

struct Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields
{
public:
	// System.String System.Uri::UriSchemeFile
	String_t* ___UriSchemeFile_0;
	// System.String System.Uri::UriSchemeFtp
	String_t* ___UriSchemeFtp_1;
	// System.String System.Uri::UriSchemeGopher
	String_t* ___UriSchemeGopher_2;
	// System.String System.Uri::UriSchemeHttp
	String_t* ___UriSchemeHttp_3;
	// System.String System.Uri::UriSchemeHttps
	String_t* ___UriSchemeHttps_4;
	// System.String System.Uri::UriSchemeWs
	String_t* ___UriSchemeWs_5;
	// System.String System.Uri::UriSchemeWss
	String_t* ___UriSchemeWss_6;
	// System.String System.Uri::UriSchemeMailto
	String_t* ___UriSchemeMailto_7;
	// System.String System.Uri::UriSchemeNews
	String_t* ___UriSchemeNews_8;
	// System.String System.Uri::UriSchemeNntp
	String_t* ___UriSchemeNntp_9;
	// System.String System.Uri::UriSchemeNetTcp
	String_t* ___UriSchemeNetTcp_10;
	// System.String System.Uri::UriSchemeNetPipe
	String_t* ___UriSchemeNetPipe_11;
	// System.String System.Uri::SchemeDelimiter
	String_t* ___SchemeDelimiter_12;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_ConfigInitialized
	bool ___s_ConfigInitialized_23;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_ConfigInitializing
	bool ___s_ConfigInitializing_24;
	// System.UriIdnScope modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_IdnScope
	int32_t ___s_IdnScope_25;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_IriParsing
	bool ___s_IriParsing_26;
	// System.Boolean System.Uri::useDotNetRelativeOrAbsolute
	bool ___useDotNetRelativeOrAbsolute_27;
	// System.Boolean System.Uri::IsWindowsFileSystem
	bool ___IsWindowsFileSystem_29;
	// System.Object System.Uri::s_initLock
	RuntimeObject * ___s_initLock_30;
	// System.Char[] System.Uri::HexLowerChars
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___HexLowerChars_34;
	// System.Char[] System.Uri::_WSchars
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ____WSchars_35;

public:
	inline static int32_t get_offset_of_UriSchemeFile_0() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeFile_0)); }
	inline String_t* get_UriSchemeFile_0() const { return ___UriSchemeFile_0; }
	inline String_t** get_address_of_UriSchemeFile_0() { return &___UriSchemeFile_0; }
	inline void set_UriSchemeFile_0(String_t* value)
	{
		___UriSchemeFile_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeFile_0), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeFtp_1() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeFtp_1)); }
	inline String_t* get_UriSchemeFtp_1() const { return ___UriSchemeFtp_1; }
	inline String_t** get_address_of_UriSchemeFtp_1() { return &___UriSchemeFtp_1; }
	inline void set_UriSchemeFtp_1(String_t* value)
	{
		___UriSchemeFtp_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeFtp_1), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeGopher_2() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeGopher_2)); }
	inline String_t* get_UriSchemeGopher_2() const { return ___UriSchemeGopher_2; }
	inline String_t** get_address_of_UriSchemeGopher_2() { return &___UriSchemeGopher_2; }
	inline void set_UriSchemeGopher_2(String_t* value)
	{
		___UriSchemeGopher_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeGopher_2), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeHttp_3() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeHttp_3)); }
	inline String_t* get_UriSchemeHttp_3() const { return ___UriSchemeHttp_3; }
	inline String_t** get_address_of_UriSchemeHttp_3() { return &___UriSchemeHttp_3; }
	inline void set_UriSchemeHttp_3(String_t* value)
	{
		___UriSchemeHttp_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeHttp_3), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeHttps_4() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeHttps_4)); }
	inline String_t* get_UriSchemeHttps_4() const { return ___UriSchemeHttps_4; }
	inline String_t** get_address_of_UriSchemeHttps_4() { return &___UriSchemeHttps_4; }
	inline void set_UriSchemeHttps_4(String_t* value)
	{
		___UriSchemeHttps_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeHttps_4), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeWs_5() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeWs_5)); }
	inline String_t* get_UriSchemeWs_5() const { return ___UriSchemeWs_5; }
	inline String_t** get_address_of_UriSchemeWs_5() { return &___UriSchemeWs_5; }
	inline void set_UriSchemeWs_5(String_t* value)
	{
		___UriSchemeWs_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeWs_5), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeWss_6() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeWss_6)); }
	inline String_t* get_UriSchemeWss_6() const { return ___UriSchemeWss_6; }
	inline String_t** get_address_of_UriSchemeWss_6() { return &___UriSchemeWss_6; }
	inline void set_UriSchemeWss_6(String_t* value)
	{
		___UriSchemeWss_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeWss_6), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeMailto_7() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeMailto_7)); }
	inline String_t* get_UriSchemeMailto_7() const { return ___UriSchemeMailto_7; }
	inline String_t** get_address_of_UriSchemeMailto_7() { return &___UriSchemeMailto_7; }
	inline void set_UriSchemeMailto_7(String_t* value)
	{
		___UriSchemeMailto_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeMailto_7), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeNews_8() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeNews_8)); }
	inline String_t* get_UriSchemeNews_8() const { return ___UriSchemeNews_8; }
	inline String_t** get_address_of_UriSchemeNews_8() { return &___UriSchemeNews_8; }
	inline void set_UriSchemeNews_8(String_t* value)
	{
		___UriSchemeNews_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeNews_8), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeNntp_9() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeNntp_9)); }
	inline String_t* get_UriSchemeNntp_9() const { return ___UriSchemeNntp_9; }
	inline String_t** get_address_of_UriSchemeNntp_9() { return &___UriSchemeNntp_9; }
	inline void set_UriSchemeNntp_9(String_t* value)
	{
		___UriSchemeNntp_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeNntp_9), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeNetTcp_10() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeNetTcp_10)); }
	inline String_t* get_UriSchemeNetTcp_10() const { return ___UriSchemeNetTcp_10; }
	inline String_t** get_address_of_UriSchemeNetTcp_10() { return &___UriSchemeNetTcp_10; }
	inline void set_UriSchemeNetTcp_10(String_t* value)
	{
		___UriSchemeNetTcp_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeNetTcp_10), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeNetPipe_11() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeNetPipe_11)); }
	inline String_t* get_UriSchemeNetPipe_11() const { return ___UriSchemeNetPipe_11; }
	inline String_t** get_address_of_UriSchemeNetPipe_11() { return &___UriSchemeNetPipe_11; }
	inline void set_UriSchemeNetPipe_11(String_t* value)
	{
		___UriSchemeNetPipe_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeNetPipe_11), (void*)value);
	}

	inline static int32_t get_offset_of_SchemeDelimiter_12() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___SchemeDelimiter_12)); }
	inline String_t* get_SchemeDelimiter_12() const { return ___SchemeDelimiter_12; }
	inline String_t** get_address_of_SchemeDelimiter_12() { return &___SchemeDelimiter_12; }
	inline void set_SchemeDelimiter_12(String_t* value)
	{
		___SchemeDelimiter_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SchemeDelimiter_12), (void*)value);
	}

	inline static int32_t get_offset_of_s_ConfigInitialized_23() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___s_ConfigInitialized_23)); }
	inline bool get_s_ConfigInitialized_23() const { return ___s_ConfigInitialized_23; }
	inline bool* get_address_of_s_ConfigInitialized_23() { return &___s_ConfigInitialized_23; }
	inline void set_s_ConfigInitialized_23(bool value)
	{
		___s_ConfigInitialized_23 = value;
	}

	inline static int32_t get_offset_of_s_ConfigInitializing_24() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___s_ConfigInitializing_24)); }
	inline bool get_s_ConfigInitializing_24() const { return ___s_ConfigInitializing_24; }
	inline bool* get_address_of_s_ConfigInitializing_24() { return &___s_ConfigInitializing_24; }
	inline void set_s_ConfigInitializing_24(bool value)
	{
		___s_ConfigInitializing_24 = value;
	}

	inline static int32_t get_offset_of_s_IdnScope_25() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___s_IdnScope_25)); }
	inline int32_t get_s_IdnScope_25() const { return ___s_IdnScope_25; }
	inline int32_t* get_address_of_s_IdnScope_25() { return &___s_IdnScope_25; }
	inline void set_s_IdnScope_25(int32_t value)
	{
		___s_IdnScope_25 = value;
	}

	inline static int32_t get_offset_of_s_IriParsing_26() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___s_IriParsing_26)); }
	inline bool get_s_IriParsing_26() const { return ___s_IriParsing_26; }
	inline bool* get_address_of_s_IriParsing_26() { return &___s_IriParsing_26; }
	inline void set_s_IriParsing_26(bool value)
	{
		___s_IriParsing_26 = value;
	}

	inline static int32_t get_offset_of_useDotNetRelativeOrAbsolute_27() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___useDotNetRelativeOrAbsolute_27)); }
	inline bool get_useDotNetRelativeOrAbsolute_27() const { return ___useDotNetRelativeOrAbsolute_27; }
	inline bool* get_address_of_useDotNetRelativeOrAbsolute_27() { return &___useDotNetRelativeOrAbsolute_27; }
	inline void set_useDotNetRelativeOrAbsolute_27(bool value)
	{
		___useDotNetRelativeOrAbsolute_27 = value;
	}

	inline static int32_t get_offset_of_IsWindowsFileSystem_29() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___IsWindowsFileSystem_29)); }
	inline bool get_IsWindowsFileSystem_29() const { return ___IsWindowsFileSystem_29; }
	inline bool* get_address_of_IsWindowsFileSystem_29() { return &___IsWindowsFileSystem_29; }
	inline void set_IsWindowsFileSystem_29(bool value)
	{
		___IsWindowsFileSystem_29 = value;
	}

	inline static int32_t get_offset_of_s_initLock_30() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___s_initLock_30)); }
	inline RuntimeObject * get_s_initLock_30() const { return ___s_initLock_30; }
	inline RuntimeObject ** get_address_of_s_initLock_30() { return &___s_initLock_30; }
	inline void set_s_initLock_30(RuntimeObject * value)
	{
		___s_initLock_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_initLock_30), (void*)value);
	}

	inline static int32_t get_offset_of_HexLowerChars_34() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___HexLowerChars_34)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_HexLowerChars_34() const { return ___HexLowerChars_34; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_HexLowerChars_34() { return &___HexLowerChars_34; }
	inline void set_HexLowerChars_34(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___HexLowerChars_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___HexLowerChars_34), (void*)value);
	}

	inline static int32_t get_offset_of__WSchars_35() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ____WSchars_35)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get__WSchars_35() const { return ____WSchars_35; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of__WSchars_35() { return &____WSchars_35; }
	inline void set__WSchars_35(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		____WSchars_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____WSchars_35), (void*)value);
	}
};


// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6  : public MulticastDelegate_t
{
public:

public:
};


// System.ArgumentException
struct ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:
	// System.String System.ArgumentException::m_paramName
	String_t* ___m_paramName_17;

public:
	inline static int32_t get_offset_of_m_paramName_17() { return static_cast<int32_t>(offsetof(ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00, ___m_paramName_17)); }
	inline String_t* get_m_paramName_17() const { return ___m_paramName_17; }
	inline String_t** get_address_of_m_paramName_17() { return &___m_paramName_17; }
	inline void set_m_paramName_17(String_t* value)
	{
		___m_paramName_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_paramName_17), (void*)value);
	}
};


// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// System.Threading.SendOrPostCallback
struct SendOrPostCallback_t6B7334CE017AF595535507519400AC02D688DC3C  : public MulticastDelegate_t
{
public:

public:
};


// NativeWebSocket.WebSocketCloseEventHandler
struct WebSocketCloseEventHandler_tD2F6193A42EB71C99D482FC38E4EC30825567A12  : public MulticastDelegate_t
{
public:

public:
};


// NativeWebSocket.WebSocketErrorEventHandler
struct WebSocketErrorEventHandler_t1B9EEB799CE0D22694C37BD87CEDBDF9FB199528  : public MulticastDelegate_t
{
public:

public:
};


// NativeWebSocket.WebSocketMessageEventHandler
struct WebSocketMessageEventHandler_t58A60AF5E7F18EC4591F32F0894E4BA5A7A8F222  : public MulticastDelegate_t
{
public:

public:
};


// NativeWebSocket.WebSocketOpenEventHandler
struct WebSocketOpenEventHandler_tDA44AD311FF420B05C807A25ED3C313A2D9514B0  : public MulticastDelegate_t
{
public:

public:
};


// System.Net.WebSockets.WebSocketReceiveResult
struct WebSocketReceiveResult_tEB9BD882DB3C2B94DFDA4655DAD6DFD2DDF85122  : public RuntimeObject
{
public:
	// System.Int32 System.Net.WebSockets.WebSocketReceiveResult::<Count>k__BackingField
	int32_t ___U3CCountU3Ek__BackingField_0;
	// System.Boolean System.Net.WebSockets.WebSocketReceiveResult::<EndOfMessage>k__BackingField
	bool ___U3CEndOfMessageU3Ek__BackingField_1;
	// System.Net.WebSockets.WebSocketMessageType System.Net.WebSockets.WebSocketReceiveResult::<MessageType>k__BackingField
	int32_t ___U3CMessageTypeU3Ek__BackingField_2;
	// System.Nullable`1<System.Net.WebSockets.WebSocketCloseStatus> System.Net.WebSockets.WebSocketReceiveResult::<CloseStatus>k__BackingField
	Nullable_1_tEEF07CE805E86A33961C7C0AE095FA4A628605C6  ___U3CCloseStatusU3Ek__BackingField_3;
	// System.String System.Net.WebSockets.WebSocketReceiveResult::<CloseStatusDescription>k__BackingField
	String_t* ___U3CCloseStatusDescriptionU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3CCountU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(WebSocketReceiveResult_tEB9BD882DB3C2B94DFDA4655DAD6DFD2DDF85122, ___U3CCountU3Ek__BackingField_0)); }
	inline int32_t get_U3CCountU3Ek__BackingField_0() const { return ___U3CCountU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CCountU3Ek__BackingField_0() { return &___U3CCountU3Ek__BackingField_0; }
	inline void set_U3CCountU3Ek__BackingField_0(int32_t value)
	{
		___U3CCountU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CEndOfMessageU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(WebSocketReceiveResult_tEB9BD882DB3C2B94DFDA4655DAD6DFD2DDF85122, ___U3CEndOfMessageU3Ek__BackingField_1)); }
	inline bool get_U3CEndOfMessageU3Ek__BackingField_1() const { return ___U3CEndOfMessageU3Ek__BackingField_1; }
	inline bool* get_address_of_U3CEndOfMessageU3Ek__BackingField_1() { return &___U3CEndOfMessageU3Ek__BackingField_1; }
	inline void set_U3CEndOfMessageU3Ek__BackingField_1(bool value)
	{
		___U3CEndOfMessageU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CMessageTypeU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(WebSocketReceiveResult_tEB9BD882DB3C2B94DFDA4655DAD6DFD2DDF85122, ___U3CMessageTypeU3Ek__BackingField_2)); }
	inline int32_t get_U3CMessageTypeU3Ek__BackingField_2() const { return ___U3CMessageTypeU3Ek__BackingField_2; }
	inline int32_t* get_address_of_U3CMessageTypeU3Ek__BackingField_2() { return &___U3CMessageTypeU3Ek__BackingField_2; }
	inline void set_U3CMessageTypeU3Ek__BackingField_2(int32_t value)
	{
		___U3CMessageTypeU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CCloseStatusU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(WebSocketReceiveResult_tEB9BD882DB3C2B94DFDA4655DAD6DFD2DDF85122, ___U3CCloseStatusU3Ek__BackingField_3)); }
	inline Nullable_1_tEEF07CE805E86A33961C7C0AE095FA4A628605C6  get_U3CCloseStatusU3Ek__BackingField_3() const { return ___U3CCloseStatusU3Ek__BackingField_3; }
	inline Nullable_1_tEEF07CE805E86A33961C7C0AE095FA4A628605C6 * get_address_of_U3CCloseStatusU3Ek__BackingField_3() { return &___U3CCloseStatusU3Ek__BackingField_3; }
	inline void set_U3CCloseStatusU3Ek__BackingField_3(Nullable_1_tEEF07CE805E86A33961C7C0AE095FA4A628605C6  value)
	{
		___U3CCloseStatusU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CCloseStatusDescriptionU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(WebSocketReceiveResult_tEB9BD882DB3C2B94DFDA4655DAD6DFD2DDF85122, ___U3CCloseStatusDescriptionU3Ek__BackingField_4)); }
	inline String_t* get_U3CCloseStatusDescriptionU3Ek__BackingField_4() const { return ___U3CCloseStatusDescriptionU3Ek__BackingField_4; }
	inline String_t** get_address_of_U3CCloseStatusDescriptionU3Ek__BackingField_4() { return &___U3CCloseStatusDescriptionU3Ek__BackingField_4; }
	inline void set_U3CCloseStatusDescriptionU3Ek__BackingField_4(String_t* value)
	{
		___U3CCloseStatusDescriptionU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CCloseStatusDescriptionU3Ek__BackingField_4), (void*)value);
	}
};


// NativeWebSocket.WebSocket/<Close>d__37
struct U3CCloseU3Ed__37_t2B8C769B471A3E7EF033776A04F6922AC5E7DBE4 
{
public:
	// System.Int32 NativeWebSocket.WebSocket/<Close>d__37::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder NativeWebSocket.WebSocket/<Close>d__37::<>t__builder
	AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  ___U3CU3Et__builder_1;
	// NativeWebSocket.WebSocket NativeWebSocket.WebSocket/<Close>d__37::<>4__this
	WebSocket_t5FA66A4CDB32ECEC66E8A22DA5C2F3F778802646 * ___U3CU3E4__this_2;
	// System.Runtime.CompilerServices.TaskAwaiter NativeWebSocket.WebSocket/<Close>d__37::<>u__1
	TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  ___U3CU3Eu__1_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CCloseU3Ed__37_t2B8C769B471A3E7EF033776A04F6922AC5E7DBE4, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CCloseU3Ed__37_t2B8C769B471A3E7EF033776A04F6922AC5E7DBE4, ___U3CU3Et__builder_1)); }
	inline AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  value)
	{
		___U3CU3Et__builder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___U3CU3Et__builder_1))->___m_builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___U3CU3Et__builder_1))->___m_builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_builder_1))->___m_task_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CCloseU3Ed__37_t2B8C769B471A3E7EF033776A04F6922AC5E7DBE4, ___U3CU3E4__this_2)); }
	inline WebSocket_t5FA66A4CDB32ECEC66E8A22DA5C2F3F778802646 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline WebSocket_t5FA66A4CDB32ECEC66E8A22DA5C2F3F778802646 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(WebSocket_t5FA66A4CDB32ECEC66E8A22DA5C2F3F778802646 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_3() { return static_cast<int32_t>(offsetof(U3CCloseU3Ed__37_t2B8C769B471A3E7EF033776A04F6922AC5E7DBE4, ___U3CU3Eu__1_3)); }
	inline TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  get_U3CU3Eu__1_3() const { return ___U3CU3Eu__1_3; }
	inline TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * get_address_of_U3CU3Eu__1_3() { return &___U3CU3Eu__1_3; }
	inline void set_U3CU3Eu__1_3(TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  value)
	{
		___U3CU3Eu__1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Eu__1_3))->___m_task_0), (void*)NULL);
	}
};


// NativeWebSocket.WebSocket/<Connect>d__27
struct U3CConnectU3Ed__27_t981981F013AF3401CBA896BAF061C290E36CBBEC 
{
public:
	// System.Int32 NativeWebSocket.WebSocket/<Connect>d__27::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder NativeWebSocket.WebSocket/<Connect>d__27::<>t__builder
	AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  ___U3CU3Et__builder_1;
	// NativeWebSocket.WebSocket NativeWebSocket.WebSocket/<Connect>d__27::<>4__this
	WebSocket_t5FA66A4CDB32ECEC66E8A22DA5C2F3F778802646 * ___U3CU3E4__this_2;
	// System.Runtime.CompilerServices.TaskAwaiter NativeWebSocket.WebSocket/<Connect>d__27::<>u__1
	TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  ___U3CU3Eu__1_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CConnectU3Ed__27_t981981F013AF3401CBA896BAF061C290E36CBBEC, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CConnectU3Ed__27_t981981F013AF3401CBA896BAF061C290E36CBBEC, ___U3CU3Et__builder_1)); }
	inline AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  value)
	{
		___U3CU3Et__builder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___U3CU3Et__builder_1))->___m_builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___U3CU3Et__builder_1))->___m_builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_builder_1))->___m_task_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CConnectU3Ed__27_t981981F013AF3401CBA896BAF061C290E36CBBEC, ___U3CU3E4__this_2)); }
	inline WebSocket_t5FA66A4CDB32ECEC66E8A22DA5C2F3F778802646 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline WebSocket_t5FA66A4CDB32ECEC66E8A22DA5C2F3F778802646 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(WebSocket_t5FA66A4CDB32ECEC66E8A22DA5C2F3F778802646 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_3() { return static_cast<int32_t>(offsetof(U3CConnectU3Ed__27_t981981F013AF3401CBA896BAF061C290E36CBBEC, ___U3CU3Eu__1_3)); }
	inline TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  get_U3CU3Eu__1_3() const { return ___U3CU3Eu__1_3; }
	inline TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * get_address_of_U3CU3Eu__1_3() { return &___U3CU3Eu__1_3; }
	inline void set_U3CU3Eu__1_3(TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  value)
	{
		___U3CU3Eu__1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Eu__1_3))->___m_task_0), (void*)NULL);
	}
};


// NativeWebSocket.WebSocket/<HandleQueue>d__33
struct U3CHandleQueueU3Ed__33_t195271007DF8F3318A09DD491A9A5408DA560F40 
{
public:
	// System.Int32 NativeWebSocket.WebSocket/<HandleQueue>d__33::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder NativeWebSocket.WebSocket/<HandleQueue>d__33::<>t__builder
	AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  ___U3CU3Et__builder_1;
	// NativeWebSocket.WebSocket NativeWebSocket.WebSocket/<HandleQueue>d__33::<>4__this
	WebSocket_t5FA66A4CDB32ECEC66E8A22DA5C2F3F778802646 * ___U3CU3E4__this_2;
	// System.Collections.Generic.List`1<System.ArraySegment`1<System.Byte>> NativeWebSocket.WebSocket/<HandleQueue>d__33::queue
	List_1_tAC5780506F34558E53CD51BF8B2E6633C667059B * ___queue_3;
	// System.Net.WebSockets.WebSocketMessageType NativeWebSocket.WebSocket/<HandleQueue>d__33::messageType
	int32_t ___messageType_4;
	// System.Runtime.CompilerServices.TaskAwaiter NativeWebSocket.WebSocket/<HandleQueue>d__33::<>u__1
	TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  ___U3CU3Eu__1_5;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CHandleQueueU3Ed__33_t195271007DF8F3318A09DD491A9A5408DA560F40, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CHandleQueueU3Ed__33_t195271007DF8F3318A09DD491A9A5408DA560F40, ___U3CU3Et__builder_1)); }
	inline AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  value)
	{
		___U3CU3Et__builder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___U3CU3Et__builder_1))->___m_builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___U3CU3Et__builder_1))->___m_builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_builder_1))->___m_task_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CHandleQueueU3Ed__33_t195271007DF8F3318A09DD491A9A5408DA560F40, ___U3CU3E4__this_2)); }
	inline WebSocket_t5FA66A4CDB32ECEC66E8A22DA5C2F3F778802646 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline WebSocket_t5FA66A4CDB32ECEC66E8A22DA5C2F3F778802646 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(WebSocket_t5FA66A4CDB32ECEC66E8A22DA5C2F3F778802646 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_queue_3() { return static_cast<int32_t>(offsetof(U3CHandleQueueU3Ed__33_t195271007DF8F3318A09DD491A9A5408DA560F40, ___queue_3)); }
	inline List_1_tAC5780506F34558E53CD51BF8B2E6633C667059B * get_queue_3() const { return ___queue_3; }
	inline List_1_tAC5780506F34558E53CD51BF8B2E6633C667059B ** get_address_of_queue_3() { return &___queue_3; }
	inline void set_queue_3(List_1_tAC5780506F34558E53CD51BF8B2E6633C667059B * value)
	{
		___queue_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___queue_3), (void*)value);
	}

	inline static int32_t get_offset_of_messageType_4() { return static_cast<int32_t>(offsetof(U3CHandleQueueU3Ed__33_t195271007DF8F3318A09DD491A9A5408DA560F40, ___messageType_4)); }
	inline int32_t get_messageType_4() const { return ___messageType_4; }
	inline int32_t* get_address_of_messageType_4() { return &___messageType_4; }
	inline void set_messageType_4(int32_t value)
	{
		___messageType_4 = value;
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_5() { return static_cast<int32_t>(offsetof(U3CHandleQueueU3Ed__33_t195271007DF8F3318A09DD491A9A5408DA560F40, ___U3CU3Eu__1_5)); }
	inline TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  get_U3CU3Eu__1_5() const { return ___U3CU3Eu__1_5; }
	inline TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * get_address_of_U3CU3Eu__1_5() { return &___U3CU3Eu__1_5; }
	inline void set_U3CU3Eu__1_5(TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  value)
	{
		___U3CU3Eu__1_5 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Eu__1_5))->___m_task_0), (void*)NULL);
	}
};


// NativeWebSocket.WebSocket/<Receive>d__36
struct U3CReceiveU3Ed__36_tAD99CF678583A10E2AD64335EB851ABC77878E0C 
{
public:
	// System.Int32 NativeWebSocket.WebSocket/<Receive>d__36::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder NativeWebSocket.WebSocket/<Receive>d__36::<>t__builder
	AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  ___U3CU3Et__builder_1;
	// NativeWebSocket.WebSocket NativeWebSocket.WebSocket/<Receive>d__36::<>4__this
	WebSocket_t5FA66A4CDB32ECEC66E8A22DA5C2F3F778802646 * ___U3CU3E4__this_2;
	// NativeWebSocket.WebSocketCloseCode NativeWebSocket.WebSocket/<Receive>d__36::<closeCode>5__2
	int32_t ___U3CcloseCodeU3E5__2_3;
	// System.ArraySegment`1<System.Byte> NativeWebSocket.WebSocket/<Receive>d__36::<buffer>5__3
	ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  ___U3CbufferU3E5__3_4;
	// System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter NativeWebSocket.WebSocket/<Receive>d__36::<>u__1
	ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C  ___U3CU3Eu__1_5;
	// System.Object NativeWebSocket.WebSocket/<Receive>d__36::<>7__wrap3
	RuntimeObject * ___U3CU3E7__wrap3_6;
	// System.Int32 NativeWebSocket.WebSocket/<Receive>d__36::<>7__wrap4
	int32_t ___U3CU3E7__wrap4_7;
	// System.Net.WebSockets.WebSocketReceiveResult NativeWebSocket.WebSocket/<Receive>d__36::<result>5__6
	WebSocketReceiveResult_tEB9BD882DB3C2B94DFDA4655DAD6DFD2DDF85122 * ___U3CresultU3E5__6_8;
	// System.IO.MemoryStream NativeWebSocket.WebSocket/<Receive>d__36::<ms>5__7
	MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * ___U3CmsU3E5__7_9;
	// System.Runtime.CompilerServices.TaskAwaiter`1<System.Net.WebSockets.WebSocketReceiveResult> NativeWebSocket.WebSocket/<Receive>d__36::<>u__2
	TaskAwaiter_1_tE7CEF18367E979C3A40489CF01B7F0C9D2DC7FD6  ___U3CU3Eu__2_10;
	// System.Runtime.CompilerServices.TaskAwaiter NativeWebSocket.WebSocket/<Receive>d__36::<>u__3
	TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  ___U3CU3Eu__3_11;
	// System.Object NativeWebSocket.WebSocket/<Receive>d__36::<>u__4
	RuntimeObject * ___U3CU3Eu__4_12;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CReceiveU3Ed__36_tAD99CF678583A10E2AD64335EB851ABC77878E0C, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CReceiveU3Ed__36_tAD99CF678583A10E2AD64335EB851ABC77878E0C, ___U3CU3Et__builder_1)); }
	inline AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  value)
	{
		___U3CU3Et__builder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___U3CU3Et__builder_1))->___m_builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___U3CU3Et__builder_1))->___m_builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_builder_1))->___m_task_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CReceiveU3Ed__36_tAD99CF678583A10E2AD64335EB851ABC77878E0C, ___U3CU3E4__this_2)); }
	inline WebSocket_t5FA66A4CDB32ECEC66E8A22DA5C2F3F778802646 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline WebSocket_t5FA66A4CDB32ECEC66E8A22DA5C2F3F778802646 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(WebSocket_t5FA66A4CDB32ECEC66E8A22DA5C2F3F778802646 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CcloseCodeU3E5__2_3() { return static_cast<int32_t>(offsetof(U3CReceiveU3Ed__36_tAD99CF678583A10E2AD64335EB851ABC77878E0C, ___U3CcloseCodeU3E5__2_3)); }
	inline int32_t get_U3CcloseCodeU3E5__2_3() const { return ___U3CcloseCodeU3E5__2_3; }
	inline int32_t* get_address_of_U3CcloseCodeU3E5__2_3() { return &___U3CcloseCodeU3E5__2_3; }
	inline void set_U3CcloseCodeU3E5__2_3(int32_t value)
	{
		___U3CcloseCodeU3E5__2_3 = value;
	}

	inline static int32_t get_offset_of_U3CbufferU3E5__3_4() { return static_cast<int32_t>(offsetof(U3CReceiveU3Ed__36_tAD99CF678583A10E2AD64335EB851ABC77878E0C, ___U3CbufferU3E5__3_4)); }
	inline ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  get_U3CbufferU3E5__3_4() const { return ___U3CbufferU3E5__3_4; }
	inline ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE * get_address_of_U3CbufferU3E5__3_4() { return &___U3CbufferU3E5__3_4; }
	inline void set_U3CbufferU3E5__3_4(ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  value)
	{
		___U3CbufferU3E5__3_4 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CbufferU3E5__3_4))->____array_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_5() { return static_cast<int32_t>(offsetof(U3CReceiveU3Ed__36_tAD99CF678583A10E2AD64335EB851ABC77878E0C, ___U3CU3Eu__1_5)); }
	inline ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C  get_U3CU3Eu__1_5() const { return ___U3CU3Eu__1_5; }
	inline ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C * get_address_of_U3CU3Eu__1_5() { return &___U3CU3Eu__1_5; }
	inline void set_U3CU3Eu__1_5(ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C  value)
	{
		___U3CU3Eu__1_5 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Eu__1_5))->___m_task_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_U3CU3E7__wrap3_6() { return static_cast<int32_t>(offsetof(U3CReceiveU3Ed__36_tAD99CF678583A10E2AD64335EB851ABC77878E0C, ___U3CU3E7__wrap3_6)); }
	inline RuntimeObject * get_U3CU3E7__wrap3_6() const { return ___U3CU3E7__wrap3_6; }
	inline RuntimeObject ** get_address_of_U3CU3E7__wrap3_6() { return &___U3CU3E7__wrap3_6; }
	inline void set_U3CU3E7__wrap3_6(RuntimeObject * value)
	{
		___U3CU3E7__wrap3_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E7__wrap3_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E7__wrap4_7() { return static_cast<int32_t>(offsetof(U3CReceiveU3Ed__36_tAD99CF678583A10E2AD64335EB851ABC77878E0C, ___U3CU3E7__wrap4_7)); }
	inline int32_t get_U3CU3E7__wrap4_7() const { return ___U3CU3E7__wrap4_7; }
	inline int32_t* get_address_of_U3CU3E7__wrap4_7() { return &___U3CU3E7__wrap4_7; }
	inline void set_U3CU3E7__wrap4_7(int32_t value)
	{
		___U3CU3E7__wrap4_7 = value;
	}

	inline static int32_t get_offset_of_U3CresultU3E5__6_8() { return static_cast<int32_t>(offsetof(U3CReceiveU3Ed__36_tAD99CF678583A10E2AD64335EB851ABC77878E0C, ___U3CresultU3E5__6_8)); }
	inline WebSocketReceiveResult_tEB9BD882DB3C2B94DFDA4655DAD6DFD2DDF85122 * get_U3CresultU3E5__6_8() const { return ___U3CresultU3E5__6_8; }
	inline WebSocketReceiveResult_tEB9BD882DB3C2B94DFDA4655DAD6DFD2DDF85122 ** get_address_of_U3CresultU3E5__6_8() { return &___U3CresultU3E5__6_8; }
	inline void set_U3CresultU3E5__6_8(WebSocketReceiveResult_tEB9BD882DB3C2B94DFDA4655DAD6DFD2DDF85122 * value)
	{
		___U3CresultU3E5__6_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CresultU3E5__6_8), (void*)value);
	}

	inline static int32_t get_offset_of_U3CmsU3E5__7_9() { return static_cast<int32_t>(offsetof(U3CReceiveU3Ed__36_tAD99CF678583A10E2AD64335EB851ABC77878E0C, ___U3CmsU3E5__7_9)); }
	inline MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * get_U3CmsU3E5__7_9() const { return ___U3CmsU3E5__7_9; }
	inline MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C ** get_address_of_U3CmsU3E5__7_9() { return &___U3CmsU3E5__7_9; }
	inline void set_U3CmsU3E5__7_9(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * value)
	{
		___U3CmsU3E5__7_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CmsU3E5__7_9), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Eu__2_10() { return static_cast<int32_t>(offsetof(U3CReceiveU3Ed__36_tAD99CF678583A10E2AD64335EB851ABC77878E0C, ___U3CU3Eu__2_10)); }
	inline TaskAwaiter_1_tE7CEF18367E979C3A40489CF01B7F0C9D2DC7FD6  get_U3CU3Eu__2_10() const { return ___U3CU3Eu__2_10; }
	inline TaskAwaiter_1_tE7CEF18367E979C3A40489CF01B7F0C9D2DC7FD6 * get_address_of_U3CU3Eu__2_10() { return &___U3CU3Eu__2_10; }
	inline void set_U3CU3Eu__2_10(TaskAwaiter_1_tE7CEF18367E979C3A40489CF01B7F0C9D2DC7FD6  value)
	{
		___U3CU3Eu__2_10 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Eu__2_10))->___m_task_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_U3CU3Eu__3_11() { return static_cast<int32_t>(offsetof(U3CReceiveU3Ed__36_tAD99CF678583A10E2AD64335EB851ABC77878E0C, ___U3CU3Eu__3_11)); }
	inline TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  get_U3CU3Eu__3_11() const { return ___U3CU3Eu__3_11; }
	inline TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * get_address_of_U3CU3Eu__3_11() { return &___U3CU3Eu__3_11; }
	inline void set_U3CU3Eu__3_11(TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  value)
	{
		___U3CU3Eu__3_11 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Eu__3_11))->___m_task_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_U3CU3Eu__4_12() { return static_cast<int32_t>(offsetof(U3CReceiveU3Ed__36_tAD99CF678583A10E2AD64335EB851ABC77878E0C, ___U3CU3Eu__4_12)); }
	inline RuntimeObject * get_U3CU3Eu__4_12() const { return ___U3CU3Eu__4_12; }
	inline RuntimeObject ** get_address_of_U3CU3Eu__4_12() { return &___U3CU3Eu__4_12; }
	inline void set_U3CU3Eu__4_12(RuntimeObject * value)
	{
		___U3CU3Eu__4_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3Eu__4_12), (void*)value);
	}
};


// NativeWebSocket.WebSocket/<SendMessage>d__32
struct U3CSendMessageU3Ed__32_t98E469030BF6849D4377D3C2EC6B58D959874AF7 
{
public:
	// System.Int32 NativeWebSocket.WebSocket/<SendMessage>d__32::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder NativeWebSocket.WebSocket/<SendMessage>d__32::<>t__builder
	AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  ___U3CU3Et__builder_1;
	// System.ArraySegment`1<System.Byte> NativeWebSocket.WebSocket/<SendMessage>d__32::buffer
	ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  ___buffer_2;
	// NativeWebSocket.WebSocket NativeWebSocket.WebSocket/<SendMessage>d__32::<>4__this
	WebSocket_t5FA66A4CDB32ECEC66E8A22DA5C2F3F778802646 * ___U3CU3E4__this_3;
	// System.Net.WebSockets.WebSocketMessageType NativeWebSocket.WebSocket/<SendMessage>d__32::messageType
	int32_t ___messageType_4;
	// System.Collections.Generic.List`1<System.ArraySegment`1<System.Byte>> NativeWebSocket.WebSocket/<SendMessage>d__32::queue
	List_1_tAC5780506F34558E53CD51BF8B2E6633C667059B * ___queue_5;
	// System.Runtime.CompilerServices.TaskAwaiter NativeWebSocket.WebSocket/<SendMessage>d__32::<>u__1
	TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  ___U3CU3Eu__1_6;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CSendMessageU3Ed__32_t98E469030BF6849D4377D3C2EC6B58D959874AF7, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CSendMessageU3Ed__32_t98E469030BF6849D4377D3C2EC6B58D959874AF7, ___U3CU3Et__builder_1)); }
	inline AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  value)
	{
		___U3CU3Et__builder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___U3CU3Et__builder_1))->___m_builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___U3CU3Et__builder_1))->___m_builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_builder_1))->___m_task_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_buffer_2() { return static_cast<int32_t>(offsetof(U3CSendMessageU3Ed__32_t98E469030BF6849D4377D3C2EC6B58D959874AF7, ___buffer_2)); }
	inline ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  get_buffer_2() const { return ___buffer_2; }
	inline ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE * get_address_of_buffer_2() { return &___buffer_2; }
	inline void set_buffer_2(ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  value)
	{
		___buffer_2 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___buffer_2))->____array_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_3() { return static_cast<int32_t>(offsetof(U3CSendMessageU3Ed__32_t98E469030BF6849D4377D3C2EC6B58D959874AF7, ___U3CU3E4__this_3)); }
	inline WebSocket_t5FA66A4CDB32ECEC66E8A22DA5C2F3F778802646 * get_U3CU3E4__this_3() const { return ___U3CU3E4__this_3; }
	inline WebSocket_t5FA66A4CDB32ECEC66E8A22DA5C2F3F778802646 ** get_address_of_U3CU3E4__this_3() { return &___U3CU3E4__this_3; }
	inline void set_U3CU3E4__this_3(WebSocket_t5FA66A4CDB32ECEC66E8A22DA5C2F3F778802646 * value)
	{
		___U3CU3E4__this_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_3), (void*)value);
	}

	inline static int32_t get_offset_of_messageType_4() { return static_cast<int32_t>(offsetof(U3CSendMessageU3Ed__32_t98E469030BF6849D4377D3C2EC6B58D959874AF7, ___messageType_4)); }
	inline int32_t get_messageType_4() const { return ___messageType_4; }
	inline int32_t* get_address_of_messageType_4() { return &___messageType_4; }
	inline void set_messageType_4(int32_t value)
	{
		___messageType_4 = value;
	}

	inline static int32_t get_offset_of_queue_5() { return static_cast<int32_t>(offsetof(U3CSendMessageU3Ed__32_t98E469030BF6849D4377D3C2EC6B58D959874AF7, ___queue_5)); }
	inline List_1_tAC5780506F34558E53CD51BF8B2E6633C667059B * get_queue_5() const { return ___queue_5; }
	inline List_1_tAC5780506F34558E53CD51BF8B2E6633C667059B ** get_address_of_queue_5() { return &___queue_5; }
	inline void set_queue_5(List_1_tAC5780506F34558E53CD51BF8B2E6633C667059B * value)
	{
		___queue_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___queue_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_6() { return static_cast<int32_t>(offsetof(U3CSendMessageU3Ed__32_t98E469030BF6849D4377D3C2EC6B58D959874AF7, ___U3CU3Eu__1_6)); }
	inline TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  get_U3CU3Eu__1_6() const { return ___U3CU3Eu__1_6; }
	inline TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * get_address_of_U3CU3Eu__1_6() { return &___U3CU3Eu__1_6; }
	inline void set_U3CU3Eu__1_6(TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  value)
	{
		___U3CU3Eu__1_6 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Eu__1_6))->___m_task_0), (void*)NULL);
	}
};


// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// MainThreadUtil
struct MainThreadUtil_t5C0093E7A5EC95A615FCFFB62C0135DBB840E1D0  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};

struct MainThreadUtil_t5C0093E7A5EC95A615FCFFB62C0135DBB840E1D0_StaticFields
{
public:
	// MainThreadUtil MainThreadUtil::<Instance>k__BackingField
	MainThreadUtil_t5C0093E7A5EC95A615FCFFB62C0135DBB840E1D0 * ___U3CInstanceU3Ek__BackingField_4;
	// System.Threading.SynchronizationContext MainThreadUtil::<synchronizationContext>k__BackingField
	SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * ___U3CsynchronizationContextU3Ek__BackingField_5;

public:
	inline static int32_t get_offset_of_U3CInstanceU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(MainThreadUtil_t5C0093E7A5EC95A615FCFFB62C0135DBB840E1D0_StaticFields, ___U3CInstanceU3Ek__BackingField_4)); }
	inline MainThreadUtil_t5C0093E7A5EC95A615FCFFB62C0135DBB840E1D0 * get_U3CInstanceU3Ek__BackingField_4() const { return ___U3CInstanceU3Ek__BackingField_4; }
	inline MainThreadUtil_t5C0093E7A5EC95A615FCFFB62C0135DBB840E1D0 ** get_address_of_U3CInstanceU3Ek__BackingField_4() { return &___U3CInstanceU3Ek__BackingField_4; }
	inline void set_U3CInstanceU3Ek__BackingField_4(MainThreadUtil_t5C0093E7A5EC95A615FCFFB62C0135DBB840E1D0 * value)
	{
		___U3CInstanceU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CInstanceU3Ek__BackingField_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CsynchronizationContextU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(MainThreadUtil_t5C0093E7A5EC95A615FCFFB62C0135DBB840E1D0_StaticFields, ___U3CsynchronizationContextU3Ek__BackingField_5)); }
	inline SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * get_U3CsynchronizationContextU3Ek__BackingField_5() const { return ___U3CsynchronizationContextU3Ek__BackingField_5; }
	inline SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 ** get_address_of_U3CsynchronizationContextU3Ek__BackingField_5() { return &___U3CsynchronizationContextU3Ek__BackingField_5; }
	inline void set_U3CsynchronizationContextU3Ek__BackingField_5(SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * value)
	{
		___U3CsynchronizationContextU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CsynchronizationContextU3Ek__BackingField_5), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) uint8_t m_Items[1];

public:
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
// System.ArraySegment`1<System.Byte>[]
struct ArraySegment_1U5BU5D_t821BA8E5F776D41AA08A36AF8AD2D3FC6B12EDE4  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  m_Items[1];

public:
	inline ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->____array_0), (void*)NULL);
	}
	inline ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->____array_0), (void*)NULL);
	}
};


// !!0 UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_AddComponent_TisRuntimeObject_mBDBD6EC58A4409E35E4C5D08757C36E4938256B1_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.ArraySegment`1<System.Byte>>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m951713A2C8790F19949E1D872CC93903C6E6596A_gshared (List_1_tAC5780506F34558E53CD51BF8B2E6633C667059B * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m2C8EE5C13636D67F6C451C4935049F534AEC658F_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Start<NativeWebSocket.WebSocket/<Connect>d__27>(!!0&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_Start_TisU3CConnectU3Ed__27_t981981F013AF3401CBA896BAF061C290E36CBBEC_m0D4711D8D0EE0E00C5B84F63948F0B821EF4DE59_gshared (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, U3CConnectU3Ed__27_t981981F013AF3401CBA896BAF061C290E36CBBEC * ___stateMachine0, const RuntimeMethod* method);
// System.Void System.ArraySegment`1<System.Byte>::.ctor(!0[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArraySegment_1__ctor_mAA780E22BB5AE07078510EDCE524DD1EA1E98E0D_gshared (ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___array0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Start<NativeWebSocket.WebSocket/<SendMessage>d__32>(!!0&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_Start_TisU3CSendMessageU3Ed__32_t98E469030BF6849D4377D3C2EC6B58D959874AF7_m939C124DE206D2D5A2C187F485229A4344A1BD58_gshared (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, U3CSendMessageU3Ed__32_t98E469030BF6849D4377D3C2EC6B58D959874AF7 * ___stateMachine0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Start<NativeWebSocket.WebSocket/<HandleQueue>d__33>(!!0&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_Start_TisU3CHandleQueueU3Ed__33_t195271007DF8F3318A09DD491A9A5408DA560F40_m953745A4A8CF4B7BC9A246D3B2271038C35C81C0_gshared (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, U3CHandleQueueU3Ed__33_t195271007DF8F3318A09DD491A9A5408DA560F40 * ___stateMachine0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Collections.Generic.IEnumerable`1<!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m1D864B65CCD0498EC4BFFBDA8F8D04AE5333195A_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject* ___collection0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Clear_m5FB5A9C59D8625FDFB06876C4D8848F0F07ABFD0_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Start<NativeWebSocket.WebSocket/<Receive>d__36>(!!0&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_Start_TisU3CReceiveU3Ed__36_tAD99CF678583A10E2AD64335EB851ABC77878E0C_m3C573B64266E6A0EB2C15C47C47547154E30B5C7_gshared (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, U3CReceiveU3Ed__36_tAD99CF678583A10E2AD64335EB851ABC77878E0C * ___stateMachine0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Start<NativeWebSocket.WebSocket/<Close>d__37>(!!0&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_Start_TisU3CCloseU3Ed__37_t2B8C769B471A3E7EF033776A04F6922AC5E7DBE4_m32F449BF94BE4BB81C2D0B6BE9E7CE914FA07819_gshared (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, U3CCloseU3Ed__37_t2B8C769B471A3E7EF033776A04F6922AC5E7DBE4 * ___stateMachine0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,NativeWebSocket.WebSocket/<Close>d__37>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CCloseU3Ed__37_t2B8C769B471A3E7EF033776A04F6922AC5E7DBE4_m99E5BC10F103D5B68E339F73E42B2FF8B3141E3B_gshared (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * ___awaiter0, U3CCloseU3Ed__37_t2B8C769B471A3E7EF033776A04F6922AC5E7DBE4 * ___stateMachine1, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0  Dictionary_2_GetEnumerator_mA44BBB15DFBD8E08B5E60E23AA5044D45C3F889F_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, const RuntimeMethod* method);
// System.Collections.Generic.KeyValuePair`2<!0,!1> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  Enumerator_get_Current_m17E1C36ECBB09CC2AB892710866F8655D83A6048_gshared_inline (Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Key()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Key_mCAD7B121DB998D7C56EB0281215A860EFE9DCD95_gshared_inline (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * __this, const RuntimeMethod* method);
// !1 System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Value_m622223593F7461E7812C581DDB145270016ED303_gshared_inline (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mCAD84084129516BD41DE5CC3E1FABA5A8DF836D0_gshared (Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m85CA135BAB22C9F0C87C84AB90FF6740D1859279_gshared (Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0 * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,NativeWebSocket.WebSocket/<Connect>d__27>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CConnectU3Ed__27_t981981F013AF3401CBA896BAF061C290E36CBBEC_m326752BD3E37A144ED26B777F9010D1D5208EEEB_gshared (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * ___awaiter0, U3CConnectU3Ed__27_t981981F013AF3401CBA896BAF061C290E36CBBEC * ___stateMachine1, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.ArraySegment`1<System.Byte>>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m7D8A7D7BE06561F4695456CA5B4696E85DD6C84B_gshared_inline (List_1_tAC5780506F34558E53CD51BF8B2E6633C667059B * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.ArraySegment`1<System.Byte>>::get_Item(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  List_1_get_Item_mBB7B78C8411D5DB18818B1BD99D1D4E29F2EF39B_gshared_inline (List_1_tAC5780506F34558E53CD51BF8B2E6633C667059B * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.ArraySegment`1<System.Byte>>::RemoveAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_mEE8557B501BCCCDFD7BA8563504405FC81A65957_gshared (List_1_tAC5780506F34558E53CD51BF8B2E6633C667059B * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Int32 System.ArraySegment`1<System.Byte>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ArraySegment_1_get_Count_mC13AC26CCFD0EACBCC08F24F2A7BB22841B44C32_gshared_inline (ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,NativeWebSocket.WebSocket/<HandleQueue>d__33>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CHandleQueueU3Ed__33_t195271007DF8F3318A09DD491A9A5408DA560F40_mC5107023865B64E42C84456A9A570F6EA05529E8_gshared (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * ___awaiter0, U3CHandleQueueU3Ed__33_t195271007DF8F3318A09DD491A9A5408DA560F40 * ___stateMachine1, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter,NativeWebSocket.WebSocket/<Receive>d__36>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C_TisU3CReceiveU3Ed__36_tAD99CF678583A10E2AD64335EB851ABC77878E0C_m9870273794D79F8F0FCF35325F6C18344C121011_gshared (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C * ___awaiter0, U3CReceiveU3Ed__36_tAD99CF678583A10E2AD64335EB851ABC77878E0C * ___stateMachine1, const RuntimeMethod* method);
// System.Void System.ArraySegment`1<System.Byte>::.ctor(!0[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArraySegment_1__ctor_mB8E7E8D50D7933AF431552AB0D1B93FA747CC151_gshared (ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___array0, const RuntimeMethod* method);
// System.Runtime.CompilerServices.TaskAwaiter`1<!0> System.Threading.Tasks.Task`1<System.Object>::GetAwaiter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE  Task_1_GetAwaiter_m4F5B9EF55874E9959CE12E71ADEAC798960F0FE3_gshared (Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * __this, const RuntimeMethod* method);
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TaskAwaiter_1_get_IsCompleted_mEC81351691C5A577A64F3B728036AD979AB3AF94_gshared (TaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>,NativeWebSocket.WebSocket/<Receive>d__36>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE_TisU3CReceiveU3Ed__36_tAD99CF678583A10E2AD64335EB851ABC77878E0C_m38FBA6E7FE685C0E16350F4692044B72C32042CC_gshared (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, TaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE * ___awaiter0, U3CReceiveU3Ed__36_tAD99CF678583A10E2AD64335EB851ABC77878E0C * ___stateMachine1, const RuntimeMethod* method);
// !0 System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * TaskAwaiter_1_GetResult_m7703A30E4F4EA17FBA4243DE1BF9412521B2AFDA_gshared (TaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE * __this, const RuntimeMethod* method);
// !0[] System.ArraySegment`1<System.Byte>::get_Array()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ArraySegment_1_get_Array_m3D83A2CFF4D51F8ED83C89538616FF0A700F463C_gshared_inline (ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE * __this, const RuntimeMethod* method);
// System.Int32 System.ArraySegment`1<System.Byte>::get_Offset()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ArraySegment_1_get_Offset_m13F255A2A7A730982F330A448FCB32239782C505_gshared_inline (ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,NativeWebSocket.WebSocket/<Receive>d__36>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CReceiveU3Ed__36_tAD99CF678583A10E2AD64335EB851ABC77878E0C_m9F54F113924E225A0E68DFEBB7AC3DD40796D886_gshared (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * ___awaiter0, U3CReceiveU3Ed__36_tAD99CF678583A10E2AD64335EB851ABC77878E0C * ___stateMachine1, const RuntimeMethod* method);
// !0 System.Nullable`1<System.Int32Enum>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Nullable_1_get_Value_m77372528F6C4C9FDB4E3E861D107E867B4AF04C2_gshared (Nullable_1_t64244F99361E39CBE565C5E89436C898F18DF5DC * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitOnCompleted<System.Object,NativeWebSocket.WebSocket/<Receive>d__36>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_AwaitOnCompleted_TisRuntimeObject_TisU3CReceiveU3Ed__36_tAD99CF678583A10E2AD64335EB851ABC77878E0C_m5533FDA88F2415A96F07E41FBFE80ABD815B1155_gshared (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, RuntimeObject ** ___awaiter0, U3CReceiveU3Ed__36_tAD99CF678583A10E2AD64335EB851ABC77878E0C * ___stateMachine1, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,NativeWebSocket.WebSocket/<SendMessage>d__32>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CSendMessageU3Ed__32_t98E469030BF6849D4377D3C2EC6B58D959874AF7_m3BEB6369909AD4257D33A9C83136C0D54D5ABC7F_gshared (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * ___awaiter0, U3CSendMessageU3Ed__32_t98E469030BF6849D4377D3C2EC6B58D959874AF7 * ___stateMachine1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.ArraySegment`1<System.Byte>>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_m7382F9FB42CFCC39EB42749795866FD34FC9B736_gshared (List_1_tAC5780506F34558E53CD51BF8B2E6633C667059B * __this, ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  ___item0, const RuntimeMethod* method);

// System.Void UnityEngine.GameObject::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_mDF8BF31EAE3E03F24421531B25FB4BEDB7C87144 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, String_t* ___name0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<MainThreadUtil>()
inline MainThreadUtil_t5C0093E7A5EC95A615FCFFB62C0135DBB840E1D0 * GameObject_AddComponent_TisMainThreadUtil_t5C0093E7A5EC95A615FCFFB62C0135DBB840E1D0_mA75C3695A8A592441FC88024007C1B59CE86B290 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  MainThreadUtil_t5C0093E7A5EC95A615FCFFB62C0135DBB840E1D0 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_mBDBD6EC58A4409E35E4C5D08757C36E4938256B1_gshared)(__this, method);
}
// System.Void MainThreadUtil::set_Instance(MainThreadUtil)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MainThreadUtil_set_Instance_mE36406ACB810770A02870BBDB59F6AAB15749CC9_inline (MainThreadUtil_t5C0093E7A5EC95A615FCFFB62C0135DBB840E1D0 * ___value0, const RuntimeMethod* method);
// System.Threading.SynchronizationContext System.Threading.SynchronizationContext::get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * SynchronizationContext_get_Current_m4841CFFADFD0F0D82CE91800EE1225926440B942 (const RuntimeMethod* method);
// System.Void MainThreadUtil::set_synchronizationContext(System.Threading.SynchronizationContext)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MainThreadUtil_set_synchronizationContext_m202245B8B916BBC291BCBED5E72432402E90813C_inline (SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * ___value0, const RuntimeMethod* method);
// System.Void MainThreadUtil/<>c__DisplayClass9_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass9_0__ctor_m85FE194D0E546FE039318B759AA63C71768E7375 (U3CU3Ec__DisplayClass9_0_tFA5A6CDE9007824D70A78C68EBEE3D1A55BFEC8B * __this, const RuntimeMethod* method);
// System.Threading.SynchronizationContext MainThreadUtil::get_synchronizationContext()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * MainThreadUtil_get_synchronizationContext_m4ADF2BF9393F1353703851A44B0CCC692991A5E9_inline (const RuntimeMethod* method);
// System.Void System.Threading.SendOrPostCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SendOrPostCallback__ctor_m68774F2BDC46DE2BA6C3D61D66481FD4D994F6A4 (SendOrPostCallback_t6B7334CE017AF595535507519400AC02D688DC3C * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Object::set_hideFlags(UnityEngine.HideFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_set_hideFlags_m7DE229AF60B92F0C68819F77FEB27D775E66F3AC (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Object::DontDestroyOnLoad(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DontDestroyOnLoad_m03007A68ABBA4CCD8C27B944964983395E7640F9 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___target0, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// System.Void System.Action::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Threading.Tasks.Task System.Threading.Tasks.Task::Run(System.Action)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * Task_Run_m77F41B8D89AFD69BE94888BC2CAD5E3183A79B8D (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___action0, const RuntimeMethod* method);
// System.Runtime.CompilerServices.ConfiguredTaskAwaitable System.Threading.Tasks.Task::ConfigureAwait(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConfiguredTaskAwaitable_t4B703D7D241C339E7814EFFE5D266424E90BCE1E  Task_ConfigureAwait_m0477031D48C23B8368049C62C53C33D32322EDCE (Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * __this, bool ___continueOnCapturedContext0, const RuntimeMethod* method);
// System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter System.Runtime.CompilerServices.ConfiguredTaskAwaitable::GetAwaiter()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C  ConfiguredTaskAwaitable_GetAwaiter_m9F912D7DF74F087AFAF1F478CE59152DF22395A2_inline (ConfiguredTaskAwaitable_t4B703D7D241C339E7814EFFE5D266424E90BCE1E * __this, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void WaitForUpdate/MainThreadAwaiter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainThreadAwaiter__ctor_m1949E3D0A7F4AD2074660D8C3BDCE14C57B257E5 (MainThreadAwaiter_t07EC1C94003617C1B1C0EEF3FDE6C52A66F42FC1 * __this, const RuntimeMethod* method);
// System.Collections.IEnumerator WaitForUpdate::CoroutineWrapper(System.Collections.IEnumerator,WaitForUpdate/MainThreadAwaiter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WaitForUpdate_CoroutineWrapper_m5609313E1C594C75DC676FBC3819ED305AA2223C (RuntimeObject* ___theWorker0, MainThreadAwaiter_t07EC1C94003617C1B1C0EEF3FDE6C52A66F42FC1 * ___awaiter1, const RuntimeMethod* method);
// System.Void MainThreadUtil::Run(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainThreadUtil_Run_mB3179C3E1B35315A5B18BF80A40E3E5253FAE248 (RuntimeObject* ___waitForUpdate0, const RuntimeMethod* method);
// System.Void WaitForUpdate/<CoroutineWrapper>d__4::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCoroutineWrapperU3Ed__4__ctor_m1713DD5897E32730039727BD3D8B44C767930466 (U3CCoroutineWrapperU3Ed__4_tD49B312DE148AC0AB7B48D24D92FFFCE0599CD7F * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Void UnityEngine.CustomYieldInstruction::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CustomYieldInstruction__ctor_m01929E3EEB78B751510038B32D889061960DA1BE (CustomYieldInstruction_t4ED1543FBAA3143362854EB1867B42E5D190A5C7 * __this, const RuntimeMethod* method);
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55 (Delegate_t * ___a0, Delegate_t * ___b1, const RuntimeMethod* method);
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4 (Delegate_t * ___source0, Delegate_t * ___value1, const RuntimeMethod* method);
// System.Void System.Net.WebSockets.ClientWebSocket::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClientWebSocket__ctor_m8857DF54323F6C7B663F85AAAD2A0DB7CF79FC06 (ClientWebSocket_tA2D70722EB2DD788E27D46C7E262C85C984EEE09 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.ArraySegment`1<System.Byte>>::.ctor()
inline void List_1__ctor_m951713A2C8790F19949E1D872CC93903C6E6596A (List_1_tAC5780506F34558E53CD51BF8B2E6633C667059B * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tAC5780506F34558E53CD51BF8B2E6633C667059B *, const RuntimeMethod*))List_1__ctor_m951713A2C8790F19949E1D872CC93903C6E6596A_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Byte[]>::.ctor()
inline void List_1__ctor_mC74F8340E150B8F9520188937677421C55AF5C05 (List_1_t08E192A6E99857FD75EAA081A5D3BEC33729EDBE * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t08E192A6E99857FD75EAA081A5D3BEC33729EDBE *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Void System.Uri::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Uri__ctor_m7724F43B1525624FFF97A774B6B909B075714D5C (Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * __this, String_t* ___uriString0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::.ctor()
inline void Dictionary_2__ctor_mA6747E78BD4DF1D09D9091C1B3EBAE0FDB200666 (Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 *, const RuntimeMethod*))Dictionary_2__ctor_m2C8EE5C13636D67F6C451C4935049F534AEC658F_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.String>::.ctor()
inline void List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9 (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.String System.Uri::get_Scheme()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Uri_get_Scheme_mEC4980E1C82DE3963007E33C759742A02A26FF29 (Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * __this, const RuntimeMethod* method);
// System.Boolean System.String::Equals(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Equals_m8A062B96B61A7D652E7D73C9B3E904F6B0E5F41D (String_t* __this, String_t* ___value0, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.Void System.ArgumentException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void System.Threading.CancellationTokenSource::Cancel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CancellationTokenSource_Cancel_m2D87D42962FF166576B4FB3A34DF5C07F4AECEF1 (CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * __this, const RuntimeMethod* method);
// System.Runtime.CompilerServices.AsyncTaskMethodBuilder System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  AsyncTaskMethodBuilder_Create_mFF3A436623D0A24B2063FDB41694EDFDA7783DE8 (const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Start<NativeWebSocket.WebSocket/<Connect>d__27>(!!0&)
inline void AsyncTaskMethodBuilder_Start_TisU3CConnectU3Ed__27_t981981F013AF3401CBA896BAF061C290E36CBBEC_m0D4711D8D0EE0E00C5B84F63948F0B821EF4DE59 (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, U3CConnectU3Ed__27_t981981F013AF3401CBA896BAF061C290E36CBBEC * ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *, U3CConnectU3Ed__27_t981981F013AF3401CBA896BAF061C290E36CBBEC *, const RuntimeMethod*))AsyncTaskMethodBuilder_Start_TisU3CConnectU3Ed__27_t981981F013AF3401CBA896BAF061C290E36CBBEC_m0D4711D8D0EE0E00C5B84F63948F0B821EF4DE59_gshared)(__this, ___stateMachine0, method);
}
// System.Threading.Tasks.Task System.Runtime.CompilerServices.AsyncTaskMethodBuilder::get_Task()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * AsyncTaskMethodBuilder_get_Task_m130181C15F259D4FAAD717BF53402A1FD0AD19F4 (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, const RuntimeMethod* method);
// System.Text.Encoding System.Text.Encoding::get_UTF8()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * Encoding_get_UTF8_mC877FB3137BBD566AEE7B15F9BF61DC4EF8F5E5E (const RuntimeMethod* method);
// System.Void System.ArraySegment`1<System.Byte>::.ctor(!0[],System.Int32,System.Int32)
inline void ArraySegment_1__ctor_mAA780E22BB5AE07078510EDCE524DD1EA1E98E0D (ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___array0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method)
{
	((  void (*) (ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE *, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, int32_t, const RuntimeMethod*))ArraySegment_1__ctor_mAA780E22BB5AE07078510EDCE524DD1EA1E98E0D_gshared)(__this, ___array0, ___offset1, ___count2, method);
}
// System.Threading.Tasks.Task NativeWebSocket.WebSocket::SendMessage(System.Collections.Generic.List`1<System.ArraySegment`1<System.Byte>>,System.Net.WebSockets.WebSocketMessageType,System.ArraySegment`1<System.Byte>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * WebSocket_SendMessage_mFDCD6FBE6DC5EE7DF135A3D0D03FB48C1D57B11A (WebSocket_t5FA66A4CDB32ECEC66E8A22DA5C2F3F778802646 * __this, List_1_tAC5780506F34558E53CD51BF8B2E6633C667059B * ___queue0, int32_t ___messageType1, ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  ___buffer2, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Start<NativeWebSocket.WebSocket/<SendMessage>d__32>(!!0&)
inline void AsyncTaskMethodBuilder_Start_TisU3CSendMessageU3Ed__32_t98E469030BF6849D4377D3C2EC6B58D959874AF7_m939C124DE206D2D5A2C187F485229A4344A1BD58 (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, U3CSendMessageU3Ed__32_t98E469030BF6849D4377D3C2EC6B58D959874AF7 * ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *, U3CSendMessageU3Ed__32_t98E469030BF6849D4377D3C2EC6B58D959874AF7 *, const RuntimeMethod*))AsyncTaskMethodBuilder_Start_TisU3CSendMessageU3Ed__32_t98E469030BF6849D4377D3C2EC6B58D959874AF7_m939C124DE206D2D5A2C187F485229A4344A1BD58_gshared)(__this, ___stateMachine0, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Start<NativeWebSocket.WebSocket/<HandleQueue>d__33>(!!0&)
inline void AsyncTaskMethodBuilder_Start_TisU3CHandleQueueU3Ed__33_t195271007DF8F3318A09DD491A9A5408DA560F40_m953745A4A8CF4B7BC9A246D3B2271038C35C81C0 (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, U3CHandleQueueU3Ed__33_t195271007DF8F3318A09DD491A9A5408DA560F40 * ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *, U3CHandleQueueU3Ed__33_t195271007DF8F3318A09DD491A9A5408DA560F40 *, const RuntimeMethod*))AsyncTaskMethodBuilder_Start_TisU3CHandleQueueU3Ed__33_t195271007DF8F3318A09DD491A9A5408DA560F40_m953745A4A8CF4B7BC9A246D3B2271038C35C81C0_gshared)(__this, ___stateMachine0, method);
}
// System.Int32 System.Collections.Generic.List`1<System.Byte[]>::get_Count()
inline int32_t List_1_get_Count_mCEBCF66B19764A2EFF9F5F81C78323729EC10F60_inline (List_1_t08E192A6E99857FD75EAA081A5D3BEC33729EDBE * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t08E192A6E99857FD75EAA081A5D3BEC33729EDBE *, const RuntimeMethod*))List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline)(__this, method);
}
// System.Void System.Threading.Monitor::Enter(System.Object,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Enter_mBEB6CC84184B46F26375EC3FC8921D16E48EA4C4 (RuntimeObject * ___obj0, bool* ___lockTaken1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Byte[]>::.ctor(System.Collections.Generic.IEnumerable`1<!0>)
inline void List_1__ctor_m390A2307193B6A62098EE9A3798568873C7D3CF3 (List_1_t08E192A6E99857FD75EAA081A5D3BEC33729EDBE * __this, RuntimeObject* ___collection0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t08E192A6E99857FD75EAA081A5D3BEC33729EDBE *, RuntimeObject*, const RuntimeMethod*))List_1__ctor_m1D864B65CCD0498EC4BFFBDA8F8D04AE5333195A_gshared)(__this, ___collection0, method);
}
// System.Void System.Collections.Generic.List`1<System.Byte[]>::Clear()
inline void List_1_Clear_m5621C38865E52261F1EBAD5841646169F08B0E0D (List_1_t08E192A6E99857FD75EAA081A5D3BEC33729EDBE * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t08E192A6E99857FD75EAA081A5D3BEC33729EDBE *, const RuntimeMethod*))List_1_Clear_m5FB5A9C59D8625FDFB06876C4D8848F0F07ABFD0_gshared)(__this, method);
}
// System.Void System.Threading.Monitor::Exit(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A (RuntimeObject * ___obj0, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Byte[]>::get_Item(System.Int32)
inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* List_1_get_Item_m8763363EF411BE8EC9CCEBEF4AA81F71601D4584_inline (List_1_t08E192A6E99857FD75EAA081A5D3BEC33729EDBE * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* (*) (List_1_t08E192A6E99857FD75EAA081A5D3BEC33729EDBE *, int32_t, const RuntimeMethod*))List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline)(__this, ___index0, method);
}
// System.Void NativeWebSocket.WebSocketMessageEventHandler::Invoke(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketMessageEventHandler_Invoke_m60A1C6B77B149F190EC5D6FE48210C18484B6033 (WebSocketMessageEventHandler_t58A60AF5E7F18EC4591F32F0894E4BA5A7A8F222 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___data0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Start<NativeWebSocket.WebSocket/<Receive>d__36>(!!0&)
inline void AsyncTaskMethodBuilder_Start_TisU3CReceiveU3Ed__36_tAD99CF678583A10E2AD64335EB851ABC77878E0C_m3C573B64266E6A0EB2C15C47C47547154E30B5C7 (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, U3CReceiveU3Ed__36_tAD99CF678583A10E2AD64335EB851ABC77878E0C * ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *, U3CReceiveU3Ed__36_tAD99CF678583A10E2AD64335EB851ABC77878E0C *, const RuntimeMethod*))AsyncTaskMethodBuilder_Start_TisU3CReceiveU3Ed__36_tAD99CF678583A10E2AD64335EB851ABC77878E0C_m3C573B64266E6A0EB2C15C47C47547154E30B5C7_gshared)(__this, ___stateMachine0, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Start<NativeWebSocket.WebSocket/<Close>d__37>(!!0&)
inline void AsyncTaskMethodBuilder_Start_TisU3CCloseU3Ed__37_t2B8C769B471A3E7EF033776A04F6922AC5E7DBE4_m32F449BF94BE4BB81C2D0B6BE9E7CE914FA07819 (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, U3CCloseU3Ed__37_t2B8C769B471A3E7EF033776A04F6922AC5E7DBE4 * ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *, U3CCloseU3Ed__37_t2B8C769B471A3E7EF033776A04F6922AC5E7DBE4 *, const RuntimeMethod*))AsyncTaskMethodBuilder_Start_TisU3CCloseU3Ed__37_t2B8C769B471A3E7EF033776A04F6922AC5E7DBE4_m32F449BF94BE4BB81C2D0B6BE9E7CE914FA07819_gshared)(__this, ___stateMachine0, method);
}
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E (RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ___handle0, const RuntimeMethod* method);
// System.Boolean System.Enum::IsDefined(System.Type,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enum_IsDefined_m70E955627155998B426145940DE105ECEF213B96 (Type_t * ___enumType0, RuntimeObject * ___value1, const RuntimeMethod* method);
// MainThreadUtil MainThreadUtil::get_Instance()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MainThreadUtil_t5C0093E7A5EC95A615FCFFB62C0135DBB840E1D0 * MainThreadUtil_get_Instance_mCFF83408C438B83E56B4DDB397AF30E461D4B2CE_inline (const RuntimeMethod* method);
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719 (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, RuntimeObject* ___routine0, const RuntimeMethod* method);
// System.Void NativeWebSocket.WaitForBackgroundThread/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m2F2B21DFC515046F66ABF0276BAB9BB00E8A879A (U3CU3Ec_t86F09608A4F5B7ADD94C973234164A2E9A3AB258 * __this, const RuntimeMethod* method);
// System.Void WaitForUpdate/MainThreadAwaiter::Complete()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainThreadAwaiter_Complete_m6A82AB5D6A367C7C4A6ADCDE05C157A6942F3DCD (MainThreadAwaiter_t07EC1C94003617C1B1C0EEF3FDE6C52A66F42FC1 * __this, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * __this, const RuntimeMethod* method);
// System.Void WaitForUpdate/MainThreadAwaiter::set_IsCompleted(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MainThreadAwaiter_set_IsCompleted_mD648A7D44B393AC9F2BF4BF4FB97C81C02175891_inline (MainThreadAwaiter_t07EC1C94003617C1B1C0EEF3FDE6C52A66F42FC1 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void System.Action::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * __this, const RuntimeMethod* method);
// NativeWebSocket.WebSocketState NativeWebSocket.WebSocket::get_State()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WebSocket_get_State_m05FA846782E157A4DAD2258AAE0708074F5D6917 (WebSocket_t5FA66A4CDB32ECEC66E8A22DA5C2F3F778802646 * __this, const RuntimeMethod* method);
// System.Runtime.CompilerServices.TaskAwaiter System.Threading.Tasks.Task::GetAwaiter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  Task_GetAwaiter_m1FF7528A8FE13F79207DFE970F642078EF6B1260 (Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * __this, const RuntimeMethod* method);
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TaskAwaiter_get_IsCompleted_m6F97613C55E505B5664C3C0CFC4677D296EAA8BC (TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,NativeWebSocket.WebSocket/<Close>d__37>(!!0&,!!1&)
inline void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CCloseU3Ed__37_t2B8C769B471A3E7EF033776A04F6922AC5E7DBE4_m99E5BC10F103D5B68E339F73E42B2FF8B3141E3B (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * ___awaiter0, U3CCloseU3Ed__37_t2B8C769B471A3E7EF033776A04F6922AC5E7DBE4 * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *, U3CCloseU3Ed__37_t2B8C769B471A3E7EF033776A04F6922AC5E7DBE4 *, const RuntimeMethod*))AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CCloseU3Ed__37_t2B8C769B471A3E7EF033776A04F6922AC5E7DBE4_m99E5BC10F103D5B68E339F73E42B2FF8B3141E3B_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void System.Runtime.CompilerServices.TaskAwaiter::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskAwaiter_GetResult_m578EEFEC4DD1AE5E77C899B8BAA3825EB79D1330 (TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::SetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_SetException_m54A9FC97C33C9AC4E514923F7C58D76B94D344C4 (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, Exception_t * ___exception0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::SetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_SetResult_m89AF7435D1B349EE8A377B5DFFC082999D9F8CD9 (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, const RuntimeMethod* method);
// System.Void NativeWebSocket.WebSocket/<Close>d__37::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCloseU3Ed__37_MoveNext_mB73CBA9A34F9A0B40AC72A0851111B0AC5AC2D3F (U3CCloseU3Ed__37_t2B8C769B471A3E7EF033776A04F6922AC5E7DBE4 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_SetStateMachine_m68788E9C6C30BBAA030DEC1963E8A6C6B2C8A3E6 (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Void NativeWebSocket.WebSocket/<Close>d__37::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCloseU3Ed__37_SetStateMachine_mA954D7E48E7B8CE876E8BF6FEE3F261C79F5F0C9 (U3CCloseU3Ed__37_t2B8C769B471A3E7EF033776A04F6922AC5E7DBE4 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Void System.Threading.CancellationTokenSource::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CancellationTokenSource__ctor_mC30FDC4F672A8495141CC213126B7FEA2A1BDCEB (CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * __this, const RuntimeMethod* method);
// System.Threading.CancellationToken System.Threading.CancellationTokenSource::get_Token()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  CancellationTokenSource_get_Token_m2A9A82BA3532B89870363E8C1DEAE2F1EFD3962C (CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * __this, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2<System.String,System.String>::GetEnumerator()
inline Enumerator_tEDF5E503528903FB9B9A1D645C82789D7B8006CB  Dictionary_2_GetEnumerator_m8C0A038B5FA7E62DEF4DB9EF1F5FCC4348D785C5 (Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tEDF5E503528903FB9B9A1D645C82789D7B8006CB  (*) (Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 *, const RuntimeMethod*))Dictionary_2_GetEnumerator_mA44BBB15DFBD8E08B5E60E23AA5044D45C3F889F_gshared)(__this, method);
}
// System.Collections.Generic.KeyValuePair`2<!0,!1> System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.String>::get_Current()
inline KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC  Enumerator_get_Current_m45394A0B01FA26CB32851562F9CBF27DB35FF4DD_inline (Enumerator_tEDF5E503528903FB9B9A1D645C82789D7B8006CB * __this, const RuntimeMethod* method)
{
	return ((  KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC  (*) (Enumerator_tEDF5E503528903FB9B9A1D645C82789D7B8006CB *, const RuntimeMethod*))Enumerator_get_Current_m17E1C36ECBB09CC2AB892710866F8655D83A6048_gshared_inline)(__this, method);
}
// System.Net.WebSockets.ClientWebSocketOptions System.Net.WebSockets.ClientWebSocket::get_Options()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ClientWebSocketOptions_t542669394208DA09FBC06141585E0CA380ACEC85 * ClientWebSocket_get_Options_m18F5E10870627D19E76D2B8D6F64E5076EC9D78C_inline (ClientWebSocket_tA2D70722EB2DD788E27D46C7E262C85C984EEE09 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.KeyValuePair`2<System.String,System.String>::get_Key()
inline String_t* KeyValuePair_2_get_Key_m42802FFFC275E928911F87B16DFE504319DF58F1_inline (KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC * __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC *, const RuntimeMethod*))KeyValuePair_2_get_Key_mCAD7B121DB998D7C56EB0281215A860EFE9DCD95_gshared_inline)(__this, method);
}
// !1 System.Collections.Generic.KeyValuePair`2<System.String,System.String>::get_Value()
inline String_t* KeyValuePair_2_get_Value_mB6B24D3920A4744624F8ED9AE493783D0E5F81DD_inline (KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC * __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC *, const RuntimeMethod*))KeyValuePair_2_get_Value_m622223593F7461E7812C581DDB145270016ED303_gshared_inline)(__this, method);
}
// System.Void System.Net.WebSockets.ClientWebSocketOptions::SetRequestHeader(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClientWebSocketOptions_SetRequestHeader_m39396A44A4B7DE02CBC69FB0EDE5E4B0699E52C7 (ClientWebSocketOptions_t542669394208DA09FBC06141585E0CA380ACEC85 * __this, String_t* ___headerName0, String_t* ___headerValue1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.String>::MoveNext()
inline bool Enumerator_MoveNext_mA57D4325DBD9D10EB3E43C99CC18DB6C3CE85FC8 (Enumerator_tEDF5E503528903FB9B9A1D645C82789D7B8006CB * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tEDF5E503528903FB9B9A1D645C82789D7B8006CB *, const RuntimeMethod*))Enumerator_MoveNext_mCAD84084129516BD41DE5CC3E1FABA5A8DF836D0_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.String>::Dispose()
inline void Enumerator_Dispose_m76E867298698AA2B89F9D57E21CEFCD16B372D22 (Enumerator_tEDF5E503528903FB9B9A1D645C82789D7B8006CB * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tEDF5E503528903FB9B9A1D645C82789D7B8006CB *, const RuntimeMethod*))Enumerator_Dispose_m85CA135BAB22C9F0C87C84AB90FF6740D1859279_gshared)(__this, method);
}
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.String>::GetEnumerator()
inline Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B  List_1_GetEnumerator_m35388695226DE2F7B0B5D0A07016716D6AD9CAEF (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B  (*) (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *, const RuntimeMethod*))List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<System.String>::get_Current()
inline String_t* Enumerator_get_Current_m9B0E356FA9FCFB9B1BECC6D7C5DF5C03309251AA_inline (Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B * __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B *, const RuntimeMethod*))Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline)(__this, method);
}
// System.Void System.Net.WebSockets.ClientWebSocketOptions::AddSubProtocol(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClientWebSocketOptions_AddSubProtocol_mA593BFE6189EDA508CE3BBF95FFB3592016BC945 (ClientWebSocketOptions_t542669394208DA09FBC06141585E0CA380ACEC85 * __this, String_t* ___subProtocol0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.String>::MoveNext()
inline bool Enumerator_MoveNext_mCE70417061695048D84E473D50556E46B8630F54 (Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B *, const RuntimeMethod*))Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<System.String>::Dispose()
inline void Enumerator_Dispose_m65A91D17CADA79F187F4D68980A9C8640B6C9FC7 (Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B *, const RuntimeMethod*))Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared)(__this, method);
}
// System.Threading.Tasks.Task System.Net.WebSockets.ClientWebSocket::ConnectAsync(System.Uri,System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ClientWebSocket_ConnectAsync_m2FF7047AC718D6181EF7E3840543DB645089D72D (ClientWebSocket_tA2D70722EB2DD788E27D46C7E262C85C984EEE09 * __this, Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * ___uri0, CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  ___cancellationToken1, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,NativeWebSocket.WebSocket/<Connect>d__27>(!!0&,!!1&)
inline void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CConnectU3Ed__27_t981981F013AF3401CBA896BAF061C290E36CBBEC_m326752BD3E37A144ED26B777F9010D1D5208EEEB (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * ___awaiter0, U3CConnectU3Ed__27_t981981F013AF3401CBA896BAF061C290E36CBBEC * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *, U3CConnectU3Ed__27_t981981F013AF3401CBA896BAF061C290E36CBBEC *, const RuntimeMethod*))AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CConnectU3Ed__27_t981981F013AF3401CBA896BAF061C290E36CBBEC_m326752BD3E37A144ED26B777F9010D1D5208EEEB_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void NativeWebSocket.WebSocketOpenEventHandler::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketOpenEventHandler_Invoke_m0B7AC1A32BF46548E2CCFB62EF49B90A467319DA (WebSocketOpenEventHandler_tDA44AD311FF420B05C807A25ED3C313A2D9514B0 * __this, const RuntimeMethod* method);
// System.Threading.Tasks.Task NativeWebSocket.WebSocket::Receive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * WebSocket_Receive_m50315FDED6E66BAD5813963D1635146C8EF0CC31 (WebSocket_t5FA66A4CDB32ECEC66E8A22DA5C2F3F778802646 * __this, const RuntimeMethod* method);
// System.Void NativeWebSocket.WebSocketErrorEventHandler::Invoke(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketErrorEventHandler_Invoke_mDA8A42C5C77F34DB31A6B07D5A59F72C94F98728 (WebSocketErrorEventHandler_t1B9EEB799CE0D22694C37BD87CEDBDF9FB199528 * __this, String_t* ___errorMsg0, const RuntimeMethod* method);
// System.Void NativeWebSocket.WebSocketCloseEventHandler::Invoke(NativeWebSocket.WebSocketCloseCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketCloseEventHandler_Invoke_mA421ED8AEB852C58D6A2657DD1CFD33D9ABA343D (WebSocketCloseEventHandler_tD2F6193A42EB71C99D482FC38E4EC30825567A12 * __this, int32_t ___closeCode0, const RuntimeMethod* method);
// System.Void NativeWebSocket.WebSocket/<Connect>d__27::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CConnectU3Ed__27_MoveNext_mA38D97807E794A41E3BF4E85ACD940DB7B28E7C8 (U3CConnectU3Ed__27_t981981F013AF3401CBA896BAF061C290E36CBBEC * __this, const RuntimeMethod* method);
// System.Void NativeWebSocket.WebSocket/<Connect>d__27::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CConnectU3Ed__27_SetStateMachine_m07CDB5F5DADC999757DAEBABE375D2C8918C977A (U3CConnectU3Ed__27_t981981F013AF3401CBA896BAF061C290E36CBBEC * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.ArraySegment`1<System.Byte>>::get_Count()
inline int32_t List_1_get_Count_m7D8A7D7BE06561F4695456CA5B4696E85DD6C84B_inline (List_1_tAC5780506F34558E53CD51BF8B2E6633C667059B * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tAC5780506F34558E53CD51BF8B2E6633C667059B *, const RuntimeMethod*))List_1_get_Count_m7D8A7D7BE06561F4695456CA5B4696E85DD6C84B_gshared_inline)(__this, method);
}
// !0 System.Collections.Generic.List`1<System.ArraySegment`1<System.Byte>>::get_Item(System.Int32)
inline ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  List_1_get_Item_mBB7B78C8411D5DB18818B1BD99D1D4E29F2EF39B_inline (List_1_tAC5780506F34558E53CD51BF8B2E6633C667059B * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  (*) (List_1_tAC5780506F34558E53CD51BF8B2E6633C667059B *, int32_t, const RuntimeMethod*))List_1_get_Item_mBB7B78C8411D5DB18818B1BD99D1D4E29F2EF39B_gshared_inline)(__this, ___index0, method);
}
// System.Void System.Collections.Generic.List`1<System.ArraySegment`1<System.Byte>>::RemoveAt(System.Int32)
inline void List_1_RemoveAt_mEE8557B501BCCCDFD7BA8563504405FC81A65957 (List_1_tAC5780506F34558E53CD51BF8B2E6633C667059B * __this, int32_t ___index0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tAC5780506F34558E53CD51BF8B2E6633C667059B *, int32_t, const RuntimeMethod*))List_1_RemoveAt_mEE8557B501BCCCDFD7BA8563504405FC81A65957_gshared)(__this, ___index0, method);
}
// System.Int32 System.ArraySegment`1<System.Byte>::get_Count()
inline int32_t ArraySegment_1_get_Count_mC13AC26CCFD0EACBCC08F24F2A7BB22841B44C32_inline (ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE *, const RuntimeMethod*))ArraySegment_1_get_Count_mC13AC26CCFD0EACBCC08F24F2A7BB22841B44C32_gshared_inline)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,NativeWebSocket.WebSocket/<HandleQueue>d__33>(!!0&,!!1&)
inline void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CHandleQueueU3Ed__33_t195271007DF8F3318A09DD491A9A5408DA560F40_mC5107023865B64E42C84456A9A570F6EA05529E8 (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * ___awaiter0, U3CHandleQueueU3Ed__33_t195271007DF8F3318A09DD491A9A5408DA560F40 * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *, U3CHandleQueueU3Ed__33_t195271007DF8F3318A09DD491A9A5408DA560F40 *, const RuntimeMethod*))AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CHandleQueueU3Ed__33_t195271007DF8F3318A09DD491A9A5408DA560F40_mC5107023865B64E42C84456A9A570F6EA05529E8_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void NativeWebSocket.WebSocket/<HandleQueue>d__33::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CHandleQueueU3Ed__33_MoveNext_mA951AB749CC766F13FD5C1CDB8AA04410AA9624C (U3CHandleQueueU3Ed__33_t195271007DF8F3318A09DD491A9A5408DA560F40 * __this, const RuntimeMethod* method);
// System.Void NativeWebSocket.WebSocket/<HandleQueue>d__33::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CHandleQueueU3Ed__33_SetStateMachine_mF1283D57FB75C905A87D60DA2CE99EBFC22E7BF6 (U3CHandleQueueU3Ed__33_t195271007DF8F3318A09DD491A9A5408DA560F40 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Void NativeWebSocket.WaitForBackgroundThread::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForBackgroundThread__ctor_m7FDD180743EC313419B58BFEB1BE2EA84F70461D (WaitForBackgroundThread_t8C5103639A29F371BDBADD1375E435C26BD1F00B * __this, const RuntimeMethod* method);
// System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter NativeWebSocket.WaitForBackgroundThread::GetAwaiter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C  WaitForBackgroundThread_GetAwaiter_m510AE03EC48BED018E5446F8C4C124EB0E1C4396 (WaitForBackgroundThread_t8C5103639A29F371BDBADD1375E435C26BD1F00B * __this, const RuntimeMethod* method);
// System.Boolean System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConfiguredTaskAwaiter_get_IsCompleted_m98056416CC6E5741A2201994591D27D127A17730 (ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter,NativeWebSocket.WebSocket/<Receive>d__36>(!!0&,!!1&)
inline void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C_TisU3CReceiveU3Ed__36_tAD99CF678583A10E2AD64335EB851ABC77878E0C_m9870273794D79F8F0FCF35325F6C18344C121011 (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C * ___awaiter0, U3CReceiveU3Ed__36_tAD99CF678583A10E2AD64335EB851ABC77878E0C * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *, ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C *, U3CReceiveU3Ed__36_tAD99CF678583A10E2AD64335EB851ABC77878E0C *, const RuntimeMethod*))AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C_TisU3CReceiveU3Ed__36_tAD99CF678583A10E2AD64335EB851ABC77878E0C_m9870273794D79F8F0FCF35325F6C18344C121011_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConfiguredTaskAwaiter_GetResult_m29A9880E9FCC4B8E9928B60E137FB53D0C8F0CE6 (ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C * __this, const RuntimeMethod* method);
// System.Void System.ArraySegment`1<System.Byte>::.ctor(!0[])
inline void ArraySegment_1__ctor_mB8E7E8D50D7933AF431552AB0D1B93FA747CC151 (ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___array0, const RuntimeMethod* method)
{
	((  void (*) (ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE *, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, const RuntimeMethod*))ArraySegment_1__ctor_mB8E7E8D50D7933AF431552AB0D1B93FA747CC151_gshared)(__this, ___array0, method);
}
// System.Void System.IO.MemoryStream::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoryStream__ctor_mD27B3DF2400D46A4A81EE78B0BD2C29EFCFAA44F (MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * __this, const RuntimeMethod* method);
// System.Runtime.CompilerServices.TaskAwaiter`1<!0> System.Threading.Tasks.Task`1<System.Net.WebSockets.WebSocketReceiveResult>::GetAwaiter()
inline TaskAwaiter_1_tE7CEF18367E979C3A40489CF01B7F0C9D2DC7FD6  Task_1_GetAwaiter_m46A488400364A14C5B4A6B616BD7A1BB08927520 (Task_1_t79E764D87096B674F330B1306805A0FF72B2E83E * __this, const RuntimeMethod* method)
{
	return ((  TaskAwaiter_1_tE7CEF18367E979C3A40489CF01B7F0C9D2DC7FD6  (*) (Task_1_t79E764D87096B674F330B1306805A0FF72B2E83E *, const RuntimeMethod*))Task_1_GetAwaiter_m4F5B9EF55874E9959CE12E71ADEAC798960F0FE3_gshared)(__this, method);
}
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<System.Net.WebSockets.WebSocketReceiveResult>::get_IsCompleted()
inline bool TaskAwaiter_1_get_IsCompleted_m2D13C0370C28B8EA4406A35F0A8BC012DF3C8537 (TaskAwaiter_1_tE7CEF18367E979C3A40489CF01B7F0C9D2DC7FD6 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (TaskAwaiter_1_tE7CEF18367E979C3A40489CF01B7F0C9D2DC7FD6 *, const RuntimeMethod*))TaskAwaiter_1_get_IsCompleted_mEC81351691C5A577A64F3B728036AD979AB3AF94_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Net.WebSockets.WebSocketReceiveResult>,NativeWebSocket.WebSocket/<Receive>d__36>(!!0&,!!1&)
inline void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tE7CEF18367E979C3A40489CF01B7F0C9D2DC7FD6_TisU3CReceiveU3Ed__36_tAD99CF678583A10E2AD64335EB851ABC77878E0C_m09DFAB6318BD6894F5593C2B7AE0A92F1D2ABF50 (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, TaskAwaiter_1_tE7CEF18367E979C3A40489CF01B7F0C9D2DC7FD6 * ___awaiter0, U3CReceiveU3Ed__36_tAD99CF678583A10E2AD64335EB851ABC77878E0C * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *, TaskAwaiter_1_tE7CEF18367E979C3A40489CF01B7F0C9D2DC7FD6 *, U3CReceiveU3Ed__36_tAD99CF678583A10E2AD64335EB851ABC77878E0C *, const RuntimeMethod*))AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE_TisU3CReceiveU3Ed__36_tAD99CF678583A10E2AD64335EB851ABC77878E0C_m38FBA6E7FE685C0E16350F4692044B72C32042CC_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// !0 System.Runtime.CompilerServices.TaskAwaiter`1<System.Net.WebSockets.WebSocketReceiveResult>::GetResult()
inline WebSocketReceiveResult_tEB9BD882DB3C2B94DFDA4655DAD6DFD2DDF85122 * TaskAwaiter_1_GetResult_mCDCAAF89F5D74175A37B6E9F507C970EDAF07B97 (TaskAwaiter_1_tE7CEF18367E979C3A40489CF01B7F0C9D2DC7FD6 * __this, const RuntimeMethod* method)
{
	return ((  WebSocketReceiveResult_tEB9BD882DB3C2B94DFDA4655DAD6DFD2DDF85122 * (*) (TaskAwaiter_1_tE7CEF18367E979C3A40489CF01B7F0C9D2DC7FD6 *, const RuntimeMethod*))TaskAwaiter_1_GetResult_m7703A30E4F4EA17FBA4243DE1BF9412521B2AFDA_gshared)(__this, method);
}
// !0[] System.ArraySegment`1<System.Byte>::get_Array()
inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ArraySegment_1_get_Array_m3D83A2CFF4D51F8ED83C89538616FF0A700F463C_inline (ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE * __this, const RuntimeMethod* method)
{
	return ((  ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* (*) (ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE *, const RuntimeMethod*))ArraySegment_1_get_Array_m3D83A2CFF4D51F8ED83C89538616FF0A700F463C_gshared_inline)(__this, method);
}
// System.Int32 System.ArraySegment`1<System.Byte>::get_Offset()
inline int32_t ArraySegment_1_get_Offset_m13F255A2A7A730982F330A448FCB32239782C505_inline (ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE *, const RuntimeMethod*))ArraySegment_1_get_Offset_m13F255A2A7A730982F330A448FCB32239782C505_gshared_inline)(__this, method);
}
// System.Int32 System.Net.WebSockets.WebSocketReceiveResult::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t WebSocketReceiveResult_get_Count_m9A22CB095E69E1DE69FDA79295ECC5BE8A147CB9_inline (WebSocketReceiveResult_tEB9BD882DB3C2B94DFDA4655DAD6DFD2DDF85122 * __this, const RuntimeMethod* method);
// System.Boolean System.Net.WebSockets.WebSocketReceiveResult::get_EndOfMessage()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool WebSocketReceiveResult_get_EndOfMessage_m233182D8ABF49FEE3C82D6C217CAAC5922104F57_inline (WebSocketReceiveResult_tEB9BD882DB3C2B94DFDA4655DAD6DFD2DDF85122 * __this, const RuntimeMethod* method);
// System.Net.WebSockets.WebSocketMessageType System.Net.WebSockets.WebSocketReceiveResult::get_MessageType()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t WebSocketReceiveResult_get_MessageType_mBE189CACCE7DCDC1C5C0CF9873DD3290BC686478_inline (WebSocketReceiveResult_tEB9BD882DB3C2B94DFDA4655DAD6DFD2DDF85122 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Byte[]>::Add(!0)
inline void List_1_Add_mE2D42E8F87548101921C1F2DAA810601D3D70904 (List_1_t08E192A6E99857FD75EAA081A5D3BEC33729EDBE * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t08E192A6E99857FD75EAA081A5D3BEC33729EDBE *, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// System.Threading.Tasks.Task NativeWebSocket.WebSocket::Close()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * WebSocket_Close_mEA005048BB477FF7D215C8D67891FC71DD0C3801 (WebSocket_t5FA66A4CDB32ECEC66E8A22DA5C2F3F778802646 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,NativeWebSocket.WebSocket/<Receive>d__36>(!!0&,!!1&)
inline void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CReceiveU3Ed__36_tAD99CF678583A10E2AD64335EB851ABC77878E0C_m9F54F113924E225A0E68DFEBB7AC3DD40796D886 (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * ___awaiter0, U3CReceiveU3Ed__36_tAD99CF678583A10E2AD64335EB851ABC77878E0C * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *, U3CReceiveU3Ed__36_tAD99CF678583A10E2AD64335EB851ABC77878E0C *, const RuntimeMethod*))AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CReceiveU3Ed__36_tAD99CF678583A10E2AD64335EB851ABC77878E0C_m9F54F113924E225A0E68DFEBB7AC3DD40796D886_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Nullable`1<System.Net.WebSockets.WebSocketCloseStatus> System.Net.WebSockets.WebSocketReceiveResult::get_CloseStatus()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_tEEF07CE805E86A33961C7C0AE095FA4A628605C6  WebSocketReceiveResult_get_CloseStatus_m92539B962F06EB04D7D3728893927435D0037FFF_inline (WebSocketReceiveResult_tEB9BD882DB3C2B94DFDA4655DAD6DFD2DDF85122 * __this, const RuntimeMethod* method);
// !0 System.Nullable`1<System.Net.WebSockets.WebSocketCloseStatus>::get_Value()
inline int32_t Nullable_1_get_Value_m7DB9FB5C8C333030A091B400CB163A9A28A17634 (Nullable_1_tEEF07CE805E86A33961C7C0AE095FA4A628605C6 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Nullable_1_tEEF07CE805E86A33961C7C0AE095FA4A628605C6 *, const RuntimeMethod*))Nullable_1_get_Value_m77372528F6C4C9FDB4E3E861D107E867B4AF04C2_gshared)(__this, method);
}
// NativeWebSocket.WebSocketCloseCode NativeWebSocket.WebSocketHelpers::ParseCloseCodeEnum(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WebSocketHelpers_ParseCloseCodeEnum_mAC862131BD4DB650462AD9679CAB225D6145DB0B (int32_t ___closeCode0, const RuntimeMethod* method);
// System.Void WaitForUpdate::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForUpdate__ctor_m79A893938A089B8952EB0AD0AAD3FEEAF8856E90 (WaitForUpdate_t0977047DBECB52C15D8149E0817A0DCD8F2ECDA2 * __this, const RuntimeMethod* method);
// WaitForUpdate/MainThreadAwaiter WaitForUpdate::GetAwaiter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MainThreadAwaiter_t07EC1C94003617C1B1C0EEF3FDE6C52A66F42FC1 * WaitForUpdate_GetAwaiter_m5A7735EFFCCE017E8695188A41EDE8700FA19EAA (WaitForUpdate_t0977047DBECB52C15D8149E0817A0DCD8F2ECDA2 * __this, const RuntimeMethod* method);
// System.Boolean WaitForUpdate/MainThreadAwaiter::get_IsCompleted()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool MainThreadAwaiter_get_IsCompleted_m71FB3B9EB749E398BAEF85167D0A10959BFE1E27_inline (MainThreadAwaiter_t07EC1C94003617C1B1C0EEF3FDE6C52A66F42FC1 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitOnCompleted<WaitForUpdate/MainThreadAwaiter,NativeWebSocket.WebSocket/<Receive>d__36>(!!0&,!!1&)
inline void AsyncTaskMethodBuilder_AwaitOnCompleted_TisMainThreadAwaiter_t07EC1C94003617C1B1C0EEF3FDE6C52A66F42FC1_TisU3CReceiveU3Ed__36_tAD99CF678583A10E2AD64335EB851ABC77878E0C_mEAE25AD68DB3ACBEC79C6C1800AA1FE4DE7AA0B4 (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, MainThreadAwaiter_t07EC1C94003617C1B1C0EEF3FDE6C52A66F42FC1 ** ___awaiter0, U3CReceiveU3Ed__36_tAD99CF678583A10E2AD64335EB851ABC77878E0C * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *, MainThreadAwaiter_t07EC1C94003617C1B1C0EEF3FDE6C52A66F42FC1 **, U3CReceiveU3Ed__36_tAD99CF678583A10E2AD64335EB851ABC77878E0C *, const RuntimeMethod*))AsyncTaskMethodBuilder_AwaitOnCompleted_TisRuntimeObject_TisU3CReceiveU3Ed__36_tAD99CF678583A10E2AD64335EB851ABC77878E0C_m5533FDA88F2415A96F07E41FBFE80ABD815B1155_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void WaitForUpdate/MainThreadAwaiter::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainThreadAwaiter_GetResult_mA14349F8037CA82F2DFF7C9B0DE318017A3AA687 (MainThreadAwaiter_t07EC1C94003617C1B1C0EEF3FDE6C52A66F42FC1 * __this, const RuntimeMethod* method);
// System.Runtime.ExceptionServices.ExceptionDispatchInfo System.Runtime.ExceptionServices.ExceptionDispatchInfo::Capture(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ExceptionDispatchInfo_t85442E41DA1485CFF22598AC362EE986DF3CDD09 * ExceptionDispatchInfo_Capture_m972BB7AC3DEF807C66DD794FA29D48829252F40B (Exception_t * ___source0, const RuntimeMethod* method);
// System.Void System.Runtime.ExceptionServices.ExceptionDispatchInfo::Throw()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionDispatchInfo_Throw_m7BB0D6275623932B2FCEB0BD7FF4073ED010C095 (ExceptionDispatchInfo_t85442E41DA1485CFF22598AC362EE986DF3CDD09 * __this, const RuntimeMethod* method);
// System.Void NativeWebSocket.WebSocket/<Receive>d__36::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CReceiveU3Ed__36_MoveNext_m86AB6017D86F2DC7F0CD07ED2DD279E33852F576 (U3CReceiveU3Ed__36_tAD99CF678583A10E2AD64335EB851ABC77878E0C * __this, const RuntimeMethod* method);
// System.Void NativeWebSocket.WebSocket/<Receive>d__36::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CReceiveU3Ed__36_SetStateMachine_mFD882EFF032EBB67E94B0E706F06E23506E147BA (U3CReceiveU3Ed__36_tAD99CF678583A10E2AD64335EB851ABC77878E0C * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Boolean System.Threading.Monitor::TryEnter(System.Object,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Monitor_TryEnter_m84F72176BCC72F6E07481CD969B4283C4BDBFC3D (RuntimeObject * ___obj0, int32_t ___millisecondsTimeout1, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,NativeWebSocket.WebSocket/<SendMessage>d__32>(!!0&,!!1&)
inline void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CSendMessageU3Ed__32_t98E469030BF6849D4377D3C2EC6B58D959874AF7_m3BEB6369909AD4257D33A9C83136C0D54D5ABC7F (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * ___awaiter0, U3CSendMessageU3Ed__32_t98E469030BF6849D4377D3C2EC6B58D959874AF7 * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *, U3CSendMessageU3Ed__32_t98E469030BF6849D4377D3C2EC6B58D959874AF7 *, const RuntimeMethod*))AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CSendMessageU3Ed__32_t98E469030BF6849D4377D3C2EC6B58D959874AF7_m3BEB6369909AD4257D33A9C83136C0D54D5ABC7F_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void System.Threading.Tasks.Task::Wait(System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Task_Wait_mCBC1BDB8521568A8D287560A082020CF2B3AF058 (Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * __this, CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  ___cancellationToken0, const RuntimeMethod* method);
// System.Threading.Tasks.Task NativeWebSocket.WebSocket::HandleQueue(System.Collections.Generic.List`1<System.ArraySegment`1<System.Byte>>,System.Net.WebSockets.WebSocketMessageType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * WebSocket_HandleQueue_mB9F63BE2C41A82F9DCBB0DF3807D1F5F0B89E457 (WebSocket_t5FA66A4CDB32ECEC66E8A22DA5C2F3F778802646 * __this, List_1_tAC5780506F34558E53CD51BF8B2E6633C667059B * ___queue0, int32_t ___messageType1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.ArraySegment`1<System.Byte>>::Add(!0)
inline void List_1_Add_m7382F9FB42CFCC39EB42749795866FD34FC9B736 (List_1_tAC5780506F34558E53CD51BF8B2E6633C667059B * __this, ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tAC5780506F34558E53CD51BF8B2E6633C667059B *, ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE , const RuntimeMethod*))List_1_Add_m7382F9FB42CFCC39EB42749795866FD34FC9B736_gshared)(__this, ___item0, method);
}
// System.Void NativeWebSocket.WebSocket/<SendMessage>d__32::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSendMessageU3Ed__32_MoveNext_m03D4A1E1C7ED7A2B4F95D065FAD62B7A7E89C223 (U3CSendMessageU3Ed__32_t98E469030BF6849D4377D3C2EC6B58D959874AF7 * __this, const RuntimeMethod* method);
// System.Void NativeWebSocket.WebSocket/<SendMessage>d__32::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSendMessageU3Ed__32_SetStateMachine_m44B373F7BB911BA5865D020C46CBA3294F335FC9 (U3CSendMessageU3Ed__32_t98E469030BF6849D4377D3C2EC6B58D959874AF7 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929 (const RuntimeMethod* method);
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
// MainThreadUtil MainThreadUtil::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MainThreadUtil_t5C0093E7A5EC95A615FCFFB62C0135DBB840E1D0 * MainThreadUtil_get_Instance_mCFF83408C438B83E56B4DDB397AF30E461D4B2CE (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MainThreadUtil_t5C0093E7A5EC95A615FCFFB62C0135DBB840E1D0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static MainThreadUtil Instance { get; private set; }
		MainThreadUtil_t5C0093E7A5EC95A615FCFFB62C0135DBB840E1D0 * L_0 = ((MainThreadUtil_t5C0093E7A5EC95A615FCFFB62C0135DBB840E1D0_StaticFields*)il2cpp_codegen_static_fields_for(MainThreadUtil_t5C0093E7A5EC95A615FCFFB62C0135DBB840E1D0_il2cpp_TypeInfo_var))->get_U3CInstanceU3Ek__BackingField_4();
		return L_0;
	}
}
// System.Void MainThreadUtil::set_Instance(MainThreadUtil)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainThreadUtil_set_Instance_mE36406ACB810770A02870BBDB59F6AAB15749CC9 (MainThreadUtil_t5C0093E7A5EC95A615FCFFB62C0135DBB840E1D0 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MainThreadUtil_t5C0093E7A5EC95A615FCFFB62C0135DBB840E1D0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static MainThreadUtil Instance { get; private set; }
		MainThreadUtil_t5C0093E7A5EC95A615FCFFB62C0135DBB840E1D0 * L_0 = ___value0;
		((MainThreadUtil_t5C0093E7A5EC95A615FCFFB62C0135DBB840E1D0_StaticFields*)il2cpp_codegen_static_fields_for(MainThreadUtil_t5C0093E7A5EC95A615FCFFB62C0135DBB840E1D0_il2cpp_TypeInfo_var))->set_U3CInstanceU3Ek__BackingField_4(L_0);
		return;
	}
}
// System.Threading.SynchronizationContext MainThreadUtil::get_synchronizationContext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * MainThreadUtil_get_synchronizationContext_m4ADF2BF9393F1353703851A44B0CCC692991A5E9 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MainThreadUtil_t5C0093E7A5EC95A615FCFFB62C0135DBB840E1D0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static SynchronizationContext synchronizationContext { get; private set; }
		SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * L_0 = ((MainThreadUtil_t5C0093E7A5EC95A615FCFFB62C0135DBB840E1D0_StaticFields*)il2cpp_codegen_static_fields_for(MainThreadUtil_t5C0093E7A5EC95A615FCFFB62C0135DBB840E1D0_il2cpp_TypeInfo_var))->get_U3CsynchronizationContextU3Ek__BackingField_5();
		return L_0;
	}
}
// System.Void MainThreadUtil::set_synchronizationContext(System.Threading.SynchronizationContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainThreadUtil_set_synchronizationContext_m202245B8B916BBC291BCBED5E72432402E90813C (SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MainThreadUtil_t5C0093E7A5EC95A615FCFFB62C0135DBB840E1D0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static SynchronizationContext synchronizationContext { get; private set; }
		SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * L_0 = ___value0;
		((MainThreadUtil_t5C0093E7A5EC95A615FCFFB62C0135DBB840E1D0_StaticFields*)il2cpp_codegen_static_fields_for(MainThreadUtil_t5C0093E7A5EC95A615FCFFB62C0135DBB840E1D0_il2cpp_TypeInfo_var))->set_U3CsynchronizationContextU3Ek__BackingField_5(L_0);
		return;
	}
}
// System.Void MainThreadUtil::Setup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainThreadUtil_Setup_mC25FD44349CB078770AFD7725DF9D2B27354D5AE (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisMainThreadUtil_t5C0093E7A5EC95A615FCFFB62C0135DBB840E1D0_mA75C3695A8A592441FC88024007C1B59CE86B290_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral479625953694FC0583C3D8F93F44332026972846);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Instance = new GameObject("MainThreadUtil")
		//     .AddComponent<MainThreadUtil>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)il2cpp_codegen_object_new(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var);
		GameObject__ctor_mDF8BF31EAE3E03F24421531B25FB4BEDB7C87144(L_0, _stringLiteral479625953694FC0583C3D8F93F44332026972846, /*hidden argument*/NULL);
		NullCheck(L_0);
		MainThreadUtil_t5C0093E7A5EC95A615FCFFB62C0135DBB840E1D0 * L_1;
		L_1 = GameObject_AddComponent_TisMainThreadUtil_t5C0093E7A5EC95A615FCFFB62C0135DBB840E1D0_mA75C3695A8A592441FC88024007C1B59CE86B290(L_0, /*hidden argument*/GameObject_AddComponent_TisMainThreadUtil_t5C0093E7A5EC95A615FCFFB62C0135DBB840E1D0_mA75C3695A8A592441FC88024007C1B59CE86B290_RuntimeMethod_var);
		MainThreadUtil_set_Instance_mE36406ACB810770A02870BBDB59F6AAB15749CC9_inline(L_1, /*hidden argument*/NULL);
		// synchronizationContext = SynchronizationContext.Current;
		SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * L_2;
		L_2 = SynchronizationContext_get_Current_m4841CFFADFD0F0D82CE91800EE1225926440B942(/*hidden argument*/NULL);
		MainThreadUtil_set_synchronizationContext_m202245B8B916BBC291BCBED5E72432402E90813C_inline(L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MainThreadUtil::Run(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainThreadUtil_Run_mB3179C3E1B35315A5B18BF80A40E3E5253FAE248 (RuntimeObject* ___waitForUpdate0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SendOrPostCallback_t6B7334CE017AF595535507519400AC02D688DC3C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass9_0_U3CRunU3Eb__0_mFE3B1B2E492DF422D90BFC13067FDA36D5DB4BFB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass9_0_tFA5A6CDE9007824D70A78C68EBEE3D1A55BFEC8B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass9_0_tFA5A6CDE9007824D70A78C68EBEE3D1A55BFEC8B * V_0 = NULL;
	{
		U3CU3Ec__DisplayClass9_0_tFA5A6CDE9007824D70A78C68EBEE3D1A55BFEC8B * L_0 = (U3CU3Ec__DisplayClass9_0_tFA5A6CDE9007824D70A78C68EBEE3D1A55BFEC8B *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass9_0_tFA5A6CDE9007824D70A78C68EBEE3D1A55BFEC8B_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass9_0__ctor_m85FE194D0E546FE039318B759AA63C71768E7375(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass9_0_tFA5A6CDE9007824D70A78C68EBEE3D1A55BFEC8B * L_1 = V_0;
		RuntimeObject* L_2 = ___waitForUpdate0;
		NullCheck(L_1);
		L_1->set_waitForUpdate_0(L_2);
		// synchronizationContext.Post(_ => Instance.StartCoroutine(
		//             waitForUpdate), null);
		SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * L_3;
		L_3 = MainThreadUtil_get_synchronizationContext_m4ADF2BF9393F1353703851A44B0CCC692991A5E9_inline(/*hidden argument*/NULL);
		U3CU3Ec__DisplayClass9_0_tFA5A6CDE9007824D70A78C68EBEE3D1A55BFEC8B * L_4 = V_0;
		SendOrPostCallback_t6B7334CE017AF595535507519400AC02D688DC3C * L_5 = (SendOrPostCallback_t6B7334CE017AF595535507519400AC02D688DC3C *)il2cpp_codegen_object_new(SendOrPostCallback_t6B7334CE017AF595535507519400AC02D688DC3C_il2cpp_TypeInfo_var);
		SendOrPostCallback__ctor_m68774F2BDC46DE2BA6C3D61D66481FD4D994F6A4(L_5, L_4, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass9_0_U3CRunU3Eb__0_mFE3B1B2E492DF422D90BFC13067FDA36D5DB4BFB_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_3);
		VirtActionInvoker2< SendOrPostCallback_t6B7334CE017AF595535507519400AC02D688DC3C *, RuntimeObject * >::Invoke(5 /* System.Void System.Threading.SynchronizationContext::Post(System.Threading.SendOrPostCallback,System.Object) */, L_3, L_5, NULL);
		// }
		return;
	}
}
// System.Void MainThreadUtil::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainThreadUtil_Awake_mBF14567A2FD7A14C7599957035CE5C739F2052B9 (MainThreadUtil_t5C0093E7A5EC95A615FCFFB62C0135DBB840E1D0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// gameObject.hideFlags = HideFlags.HideAndDontSave;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Object_set_hideFlags_m7DE229AF60B92F0C68819F77FEB27D775E66F3AC(L_0, ((int32_t)61), /*hidden argument*/NULL);
		// DontDestroyOnLoad(gameObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m03007A68ABBA4CCD8C27B944964983395E7640F9(L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MainThreadUtil::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainThreadUtil__ctor_m6E29D6F58084EBED77E5B89BA4814CAD8B421DE4 (MainThreadUtil_t5C0093E7A5EC95A615FCFFB62C0135DBB840E1D0 * __this, const RuntimeMethod* method)
{
	{
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
// System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter NativeWebSocket.WaitForBackgroundThread::GetAwaiter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C  WaitForBackgroundThread_GetAwaiter_m510AE03EC48BED018E5446F8C4C124EB0E1C4396 (WaitForBackgroundThread_t8C5103639A29F371BDBADD1375E435C26BD1F00B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CGetAwaiterU3Eb__0_0_m88C13AA593812ADF78936F7A6302101B0103C97C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t86F09608A4F5B7ADD94C973234164A2E9A3AB258_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ConfiguredTaskAwaitable_t4B703D7D241C339E7814EFFE5D266424E90BCE1E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * G_B2_0 = NULL;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * G_B1_0 = NULL;
	{
		// return Task.Run(() => { }).ConfigureAwait(false).GetAwaiter();
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t86F09608A4F5B7ADD94C973234164A2E9A3AB258_il2cpp_TypeInfo_var);
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_0 = ((U3CU3Ec_t86F09608A4F5B7ADD94C973234164A2E9A3AB258_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t86F09608A4F5B7ADD94C973234164A2E9A3AB258_il2cpp_TypeInfo_var))->get_U3CU3E9__0_0_1();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_001f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t86F09608A4F5B7ADD94C973234164A2E9A3AB258_il2cpp_TypeInfo_var);
		U3CU3Ec_t86F09608A4F5B7ADD94C973234164A2E9A3AB258 * L_2 = ((U3CU3Ec_t86F09608A4F5B7ADD94C973234164A2E9A3AB258_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t86F09608A4F5B7ADD94C973234164A2E9A3AB258_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_3 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)il2cpp_codegen_object_new(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B(L_3, L_2, (intptr_t)((intptr_t)U3CU3Ec_U3CGetAwaiterU3Eb__0_0_m88C13AA593812ADF78936F7A6302101B0103C97C_RuntimeMethod_var), /*hidden argument*/NULL);
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_4 = L_3;
		((U3CU3Ec_t86F09608A4F5B7ADD94C973234164A2E9A3AB258_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t86F09608A4F5B7ADD94C973234164A2E9A3AB258_il2cpp_TypeInfo_var))->set_U3CU3E9__0_0_1(L_4);
		G_B2_0 = L_4;
	}

IL_001f:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
		Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_5;
		L_5 = Task_Run_m77F41B8D89AFD69BE94888BC2CAD5E3183A79B8D(G_B2_0, /*hidden argument*/NULL);
		NullCheck(L_5);
		ConfiguredTaskAwaitable_t4B703D7D241C339E7814EFFE5D266424E90BCE1E  L_6;
		L_6 = Task_ConfigureAwait_m0477031D48C23B8368049C62C53C33D32322EDCE(L_5, (bool)0, /*hidden argument*/NULL);
		V_0 = L_6;
		ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C  L_7;
		L_7 = ConfiguredTaskAwaitable_GetAwaiter_m9F912D7DF74F087AFAF1F478CE59152DF22395A2_inline((ConfiguredTaskAwaitable_t4B703D7D241C339E7814EFFE5D266424E90BCE1E *)(&V_0), /*hidden argument*/NULL);
		return L_7;
	}
}
// System.Void NativeWebSocket.WaitForBackgroundThread::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForBackgroundThread__ctor_m7FDD180743EC313419B58BFEB1BE2EA84F70461D (WaitForBackgroundThread_t8C5103639A29F371BDBADD1375E435C26BD1F00B * __this, const RuntimeMethod* method)
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
// System.Boolean WaitForUpdate::get_keepWaiting()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WaitForUpdate_get_keepWaiting_mB525686724E1B51DBAC78BEAF839A2BCC595D79B (WaitForUpdate_t0977047DBECB52C15D8149E0817A0DCD8F2ECDA2 * __this, const RuntimeMethod* method)
{
	{
		// get { return false; }
		return (bool)0;
	}
}
// WaitForUpdate/MainThreadAwaiter WaitForUpdate::GetAwaiter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MainThreadAwaiter_t07EC1C94003617C1B1C0EEF3FDE6C52A66F42FC1 * WaitForUpdate_GetAwaiter_m5A7735EFFCCE017E8695188A41EDE8700FA19EAA (WaitForUpdate_t0977047DBECB52C15D8149E0817A0DCD8F2ECDA2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MainThreadAwaiter_t07EC1C94003617C1B1C0EEF3FDE6C52A66F42FC1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MainThreadAwaiter_t07EC1C94003617C1B1C0EEF3FDE6C52A66F42FC1 * V_0 = NULL;
	{
		// var awaiter = new MainThreadAwaiter();
		MainThreadAwaiter_t07EC1C94003617C1B1C0EEF3FDE6C52A66F42FC1 * L_0 = (MainThreadAwaiter_t07EC1C94003617C1B1C0EEF3FDE6C52A66F42FC1 *)il2cpp_codegen_object_new(MainThreadAwaiter_t07EC1C94003617C1B1C0EEF3FDE6C52A66F42FC1_il2cpp_TypeInfo_var);
		MainThreadAwaiter__ctor_m1949E3D0A7F4AD2074660D8C3BDCE14C57B257E5(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		// MainThreadUtil.Run(CoroutineWrapper(this, awaiter));
		MainThreadAwaiter_t07EC1C94003617C1B1C0EEF3FDE6C52A66F42FC1 * L_1 = V_0;
		RuntimeObject* L_2;
		L_2 = WaitForUpdate_CoroutineWrapper_m5609313E1C594C75DC676FBC3819ED305AA2223C(__this, L_1, /*hidden argument*/NULL);
		MainThreadUtil_Run_mB3179C3E1B35315A5B18BF80A40E3E5253FAE248(L_2, /*hidden argument*/NULL);
		// return awaiter;
		MainThreadAwaiter_t07EC1C94003617C1B1C0EEF3FDE6C52A66F42FC1 * L_3 = V_0;
		return L_3;
	}
}
// System.Collections.IEnumerator WaitForUpdate::CoroutineWrapper(System.Collections.IEnumerator,WaitForUpdate/MainThreadAwaiter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WaitForUpdate_CoroutineWrapper_m5609313E1C594C75DC676FBC3819ED305AA2223C (RuntimeObject* ___theWorker0, MainThreadAwaiter_t07EC1C94003617C1B1C0EEF3FDE6C52A66F42FC1 * ___awaiter1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CCoroutineWrapperU3Ed__4_tD49B312DE148AC0AB7B48D24D92FFFCE0599CD7F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CCoroutineWrapperU3Ed__4_tD49B312DE148AC0AB7B48D24D92FFFCE0599CD7F * L_0 = (U3CCoroutineWrapperU3Ed__4_tD49B312DE148AC0AB7B48D24D92FFFCE0599CD7F *)il2cpp_codegen_object_new(U3CCoroutineWrapperU3Ed__4_tD49B312DE148AC0AB7B48D24D92FFFCE0599CD7F_il2cpp_TypeInfo_var);
		U3CCoroutineWrapperU3Ed__4__ctor_m1713DD5897E32730039727BD3D8B44C767930466(L_0, 0, /*hidden argument*/NULL);
		U3CCoroutineWrapperU3Ed__4_tD49B312DE148AC0AB7B48D24D92FFFCE0599CD7F * L_1 = L_0;
		RuntimeObject* L_2 = ___theWorker0;
		NullCheck(L_1);
		L_1->set_theWorker_2(L_2);
		U3CCoroutineWrapperU3Ed__4_tD49B312DE148AC0AB7B48D24D92FFFCE0599CD7F * L_3 = L_1;
		MainThreadAwaiter_t07EC1C94003617C1B1C0EEF3FDE6C52A66F42FC1 * L_4 = ___awaiter1;
		NullCheck(L_3);
		L_3->set_awaiter_3(L_4);
		return L_3;
	}
}
// System.Void WaitForUpdate::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForUpdate__ctor_m79A893938A089B8952EB0AD0AAD3FEEAF8856E90 (WaitForUpdate_t0977047DBECB52C15D8149E0817A0DCD8F2ECDA2 * __this, const RuntimeMethod* method)
{
	{
		CustomYieldInstruction__ctor_m01929E3EEB78B751510038B32D889061960DA1BE(__this, /*hidden argument*/NULL);
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
// System.Void NativeWebSocket.WebSocket::add_OnOpen(NativeWebSocket.WebSocketOpenEventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket_add_OnOpen_m1277DE45569EFA5BB71930D684BE89457A30DE49 (WebSocket_t5FA66A4CDB32ECEC66E8A22DA5C2F3F778802646 * __this, WebSocketOpenEventHandler_tDA44AD311FF420B05C807A25ED3C313A2D9514B0 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebSocketOpenEventHandler_tDA44AD311FF420B05C807A25ED3C313A2D9514B0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	WebSocketOpenEventHandler_tDA44AD311FF420B05C807A25ED3C313A2D9514B0 * V_0 = NULL;
	WebSocketOpenEventHandler_tDA44AD311FF420B05C807A25ED3C313A2D9514B0 * V_1 = NULL;
	WebSocketOpenEventHandler_tDA44AD311FF420B05C807A25ED3C313A2D9514B0 * V_2 = NULL;
	{
		WebSocketOpenEventHandler_tDA44AD311FF420B05C807A25ED3C313A2D9514B0 * L_0 = __this->get_OnOpen_0();
		V_0 = L_0;
	}

IL_0007:
	{
		WebSocketOpenEventHandler_tDA44AD311FF420B05C807A25ED3C313A2D9514B0 * L_1 = V_0;
		V_1 = L_1;
		WebSocketOpenEventHandler_tDA44AD311FF420B05C807A25ED3C313A2D9514B0 * L_2 = V_1;
		WebSocketOpenEventHandler_tDA44AD311FF420B05C807A25ED3C313A2D9514B0 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((WebSocketOpenEventHandler_tDA44AD311FF420B05C807A25ED3C313A2D9514B0 *)CastclassSealed((RuntimeObject*)L_4, WebSocketOpenEventHandler_tDA44AD311FF420B05C807A25ED3C313A2D9514B0_il2cpp_TypeInfo_var));
		WebSocketOpenEventHandler_tDA44AD311FF420B05C807A25ED3C313A2D9514B0 ** L_5 = __this->get_address_of_OnOpen_0();
		WebSocketOpenEventHandler_tDA44AD311FF420B05C807A25ED3C313A2D9514B0 * L_6 = V_2;
		WebSocketOpenEventHandler_tDA44AD311FF420B05C807A25ED3C313A2D9514B0 * L_7 = V_1;
		WebSocketOpenEventHandler_tDA44AD311FF420B05C807A25ED3C313A2D9514B0 * L_8;
		L_8 = InterlockedCompareExchangeImpl<WebSocketOpenEventHandler_tDA44AD311FF420B05C807A25ED3C313A2D9514B0 *>((WebSocketOpenEventHandler_tDA44AD311FF420B05C807A25ED3C313A2D9514B0 **)L_5, L_6, L_7);
		V_0 = L_8;
		WebSocketOpenEventHandler_tDA44AD311FF420B05C807A25ED3C313A2D9514B0 * L_9 = V_0;
		WebSocketOpenEventHandler_tDA44AD311FF420B05C807A25ED3C313A2D9514B0 * L_10 = V_1;
		if ((!(((RuntimeObject*)(WebSocketOpenEventHandler_tDA44AD311FF420B05C807A25ED3C313A2D9514B0 *)L_9) == ((RuntimeObject*)(WebSocketOpenEventHandler_tDA44AD311FF420B05C807A25ED3C313A2D9514B0 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void NativeWebSocket.WebSocket::remove_OnOpen(NativeWebSocket.WebSocketOpenEventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket_remove_OnOpen_m8AFB58785E24F49930B67404B5F82B685B73BB87 (WebSocket_t5FA66A4CDB32ECEC66E8A22DA5C2F3F778802646 * __this, WebSocketOpenEventHandler_tDA44AD311FF420B05C807A25ED3C313A2D9514B0 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebSocketOpenEventHandler_tDA44AD311FF420B05C807A25ED3C313A2D9514B0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	WebSocketOpenEventHandler_tDA44AD311FF420B05C807A25ED3C313A2D9514B0 * V_0 = NULL;
	WebSocketOpenEventHandler_tDA44AD311FF420B05C807A25ED3C313A2D9514B0 * V_1 = NULL;
	WebSocketOpenEventHandler_tDA44AD311FF420B05C807A25ED3C313A2D9514B0 * V_2 = NULL;
	{
		WebSocketOpenEventHandler_tDA44AD311FF420B05C807A25ED3C313A2D9514B0 * L_0 = __this->get_OnOpen_0();
		V_0 = L_0;
	}

IL_0007:
	{
		WebSocketOpenEventHandler_tDA44AD311FF420B05C807A25ED3C313A2D9514B0 * L_1 = V_0;
		V_1 = L_1;
		WebSocketOpenEventHandler_tDA44AD311FF420B05C807A25ED3C313A2D9514B0 * L_2 = V_1;
		WebSocketOpenEventHandler_tDA44AD311FF420B05C807A25ED3C313A2D9514B0 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((WebSocketOpenEventHandler_tDA44AD311FF420B05C807A25ED3C313A2D9514B0 *)CastclassSealed((RuntimeObject*)L_4, WebSocketOpenEventHandler_tDA44AD311FF420B05C807A25ED3C313A2D9514B0_il2cpp_TypeInfo_var));
		WebSocketOpenEventHandler_tDA44AD311FF420B05C807A25ED3C313A2D9514B0 ** L_5 = __this->get_address_of_OnOpen_0();
		WebSocketOpenEventHandler_tDA44AD311FF420B05C807A25ED3C313A2D9514B0 * L_6 = V_2;
		WebSocketOpenEventHandler_tDA44AD311FF420B05C807A25ED3C313A2D9514B0 * L_7 = V_1;
		WebSocketOpenEventHandler_tDA44AD311FF420B05C807A25ED3C313A2D9514B0 * L_8;
		L_8 = InterlockedCompareExchangeImpl<WebSocketOpenEventHandler_tDA44AD311FF420B05C807A25ED3C313A2D9514B0 *>((WebSocketOpenEventHandler_tDA44AD311FF420B05C807A25ED3C313A2D9514B0 **)L_5, L_6, L_7);
		V_0 = L_8;
		WebSocketOpenEventHandler_tDA44AD311FF420B05C807A25ED3C313A2D9514B0 * L_9 = V_0;
		WebSocketOpenEventHandler_tDA44AD311FF420B05C807A25ED3C313A2D9514B0 * L_10 = V_1;
		if ((!(((RuntimeObject*)(WebSocketOpenEventHandler_tDA44AD311FF420B05C807A25ED3C313A2D9514B0 *)L_9) == ((RuntimeObject*)(WebSocketOpenEventHandler_tDA44AD311FF420B05C807A25ED3C313A2D9514B0 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void NativeWebSocket.WebSocket::add_OnMessage(NativeWebSocket.WebSocketMessageEventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket_add_OnMessage_mFE637C7366A0011E23575E385AA79E4F2434F1C4 (WebSocket_t5FA66A4CDB32ECEC66E8A22DA5C2F3F778802646 * __this, WebSocketMessageEventHandler_t58A60AF5E7F18EC4591F32F0894E4BA5A7A8F222 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebSocketMessageEventHandler_t58A60AF5E7F18EC4591F32F0894E4BA5A7A8F222_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	WebSocketMessageEventHandler_t58A60AF5E7F18EC4591F32F0894E4BA5A7A8F222 * V_0 = NULL;
	WebSocketMessageEventHandler_t58A60AF5E7F18EC4591F32F0894E4BA5A7A8F222 * V_1 = NULL;
	WebSocketMessageEventHandler_t58A60AF5E7F18EC4591F32F0894E4BA5A7A8F222 * V_2 = NULL;
	{
		WebSocketMessageEventHandler_t58A60AF5E7F18EC4591F32F0894E4BA5A7A8F222 * L_0 = __this->get_OnMessage_1();
		V_0 = L_0;
	}

IL_0007:
	{
		WebSocketMessageEventHandler_t58A60AF5E7F18EC4591F32F0894E4BA5A7A8F222 * L_1 = V_0;
		V_1 = L_1;
		WebSocketMessageEventHandler_t58A60AF5E7F18EC4591F32F0894E4BA5A7A8F222 * L_2 = V_1;
		WebSocketMessageEventHandler_t58A60AF5E7F18EC4591F32F0894E4BA5A7A8F222 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((WebSocketMessageEventHandler_t58A60AF5E7F18EC4591F32F0894E4BA5A7A8F222 *)CastclassSealed((RuntimeObject*)L_4, WebSocketMessageEventHandler_t58A60AF5E7F18EC4591F32F0894E4BA5A7A8F222_il2cpp_TypeInfo_var));
		WebSocketMessageEventHandler_t58A60AF5E7F18EC4591F32F0894E4BA5A7A8F222 ** L_5 = __this->get_address_of_OnMessage_1();
		WebSocketMessageEventHandler_t58A60AF5E7F18EC4591F32F0894E4BA5A7A8F222 * L_6 = V_2;
		WebSocketMessageEventHandler_t58A60AF5E7F18EC4591F32F0894E4BA5A7A8F222 * L_7 = V_1;
		WebSocketMessageEventHandler_t58A60AF5E7F18EC4591F32F0894E4BA5A7A8F222 * L_8;
		L_8 = InterlockedCompareExchangeImpl<WebSocketMessageEventHandler_t58A60AF5E7F18EC4591F32F0894E4BA5A7A8F222 *>((WebSocketMessageEventHandler_t58A60AF5E7F18EC4591F32F0894E4BA5A7A8F222 **)L_5, L_6, L_7);
		V_0 = L_8;
		WebSocketMessageEventHandler_t58A60AF5E7F18EC4591F32F0894E4BA5A7A8F222 * L_9 = V_0;
		WebSocketMessageEventHandler_t58A60AF5E7F18EC4591F32F0894E4BA5A7A8F222 * L_10 = V_1;
		if ((!(((RuntimeObject*)(WebSocketMessageEventHandler_t58A60AF5E7F18EC4591F32F0894E4BA5A7A8F222 *)L_9) == ((RuntimeObject*)(WebSocketMessageEventHandler_t58A60AF5E7F18EC4591F32F0894E4BA5A7A8F222 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void NativeWebSocket.WebSocket::remove_OnMessage(NativeWebSocket.WebSocketMessageEventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket_remove_OnMessage_m7E2BF4B94CA64938F9C800C1CAAAD36922008297 (WebSocket_t5FA66A4CDB32ECEC66E8A22DA5C2F3F778802646 * __this, WebSocketMessageEventHandler_t58A60AF5E7F18EC4591F32F0894E4BA5A7A8F222 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebSocketMessageEventHandler_t58A60AF5E7F18EC4591F32F0894E4BA5A7A8F222_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	WebSocketMessageEventHandler_t58A60AF5E7F18EC4591F32F0894E4BA5A7A8F222 * V_0 = NULL;
	WebSocketMessageEventHandler_t58A60AF5E7F18EC4591F32F0894E4BA5A7A8F222 * V_1 = NULL;
	WebSocketMessageEventHandler_t58A60AF5E7F18EC4591F32F0894E4BA5A7A8F222 * V_2 = NULL;
	{
		WebSocketMessageEventHandler_t58A60AF5E7F18EC4591F32F0894E4BA5A7A8F222 * L_0 = __this->get_OnMessage_1();
		V_0 = L_0;
	}

IL_0007:
	{
		WebSocketMessageEventHandler_t58A60AF5E7F18EC4591F32F0894E4BA5A7A8F222 * L_1 = V_0;
		V_1 = L_1;
		WebSocketMessageEventHandler_t58A60AF5E7F18EC4591F32F0894E4BA5A7A8F222 * L_2 = V_1;
		WebSocketMessageEventHandler_t58A60AF5E7F18EC4591F32F0894E4BA5A7A8F222 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((WebSocketMessageEventHandler_t58A60AF5E7F18EC4591F32F0894E4BA5A7A8F222 *)CastclassSealed((RuntimeObject*)L_4, WebSocketMessageEventHandler_t58A60AF5E7F18EC4591F32F0894E4BA5A7A8F222_il2cpp_TypeInfo_var));
		WebSocketMessageEventHandler_t58A60AF5E7F18EC4591F32F0894E4BA5A7A8F222 ** L_5 = __this->get_address_of_OnMessage_1();
		WebSocketMessageEventHandler_t58A60AF5E7F18EC4591F32F0894E4BA5A7A8F222 * L_6 = V_2;
		WebSocketMessageEventHandler_t58A60AF5E7F18EC4591F32F0894E4BA5A7A8F222 * L_7 = V_1;
		WebSocketMessageEventHandler_t58A60AF5E7F18EC4591F32F0894E4BA5A7A8F222 * L_8;
		L_8 = InterlockedCompareExchangeImpl<WebSocketMessageEventHandler_t58A60AF5E7F18EC4591F32F0894E4BA5A7A8F222 *>((WebSocketMessageEventHandler_t58A60AF5E7F18EC4591F32F0894E4BA5A7A8F222 **)L_5, L_6, L_7);
		V_0 = L_8;
		WebSocketMessageEventHandler_t58A60AF5E7F18EC4591F32F0894E4BA5A7A8F222 * L_9 = V_0;
		WebSocketMessageEventHandler_t58A60AF5E7F18EC4591F32F0894E4BA5A7A8F222 * L_10 = V_1;
		if ((!(((RuntimeObject*)(WebSocketMessageEventHandler_t58A60AF5E7F18EC4591F32F0894E4BA5A7A8F222 *)L_9) == ((RuntimeObject*)(WebSocketMessageEventHandler_t58A60AF5E7F18EC4591F32F0894E4BA5A7A8F222 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void NativeWebSocket.WebSocket::add_OnError(NativeWebSocket.WebSocketErrorEventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket_add_OnError_m7D63176F1961A83C6416531105C33D6EA9F3E052 (WebSocket_t5FA66A4CDB32ECEC66E8A22DA5C2F3F778802646 * __this, WebSocketErrorEventHandler_t1B9EEB799CE0D22694C37BD87CEDBDF9FB199528 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebSocketErrorEventHandler_t1B9EEB799CE0D22694C37BD87CEDBDF9FB199528_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	WebSocketErrorEventHandler_t1B9EEB799CE0D22694C37BD87CEDBDF9FB199528 * V_0 = NULL;
	WebSocketErrorEventHandler_t1B9EEB799CE0D22694C37BD87CEDBDF9FB199528 * V_1 = NULL;
	WebSocketErrorEventHandler_t1B9EEB799CE0D22694C37BD87CEDBDF9FB199528 * V_2 = NULL;
	{
		WebSocketErrorEventHandler_t1B9EEB799CE0D22694C37BD87CEDBDF9FB199528 * L_0 = __this->get_OnError_2();
		V_0 = L_0;
	}

IL_0007:
	{
		WebSocketErrorEventHandler_t1B9EEB799CE0D22694C37BD87CEDBDF9FB199528 * L_1 = V_0;
		V_1 = L_1;
		WebSocketErrorEventHandler_t1B9EEB799CE0D22694C37BD87CEDBDF9FB199528 * L_2 = V_1;
		WebSocketErrorEventHandler_t1B9EEB799CE0D22694C37BD87CEDBDF9FB199528 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((WebSocketErrorEventHandler_t1B9EEB799CE0D22694C37BD87CEDBDF9FB199528 *)CastclassSealed((RuntimeObject*)L_4, WebSocketErrorEventHandler_t1B9EEB799CE0D22694C37BD87CEDBDF9FB199528_il2cpp_TypeInfo_var));
		WebSocketErrorEventHandler_t1B9EEB799CE0D22694C37BD87CEDBDF9FB199528 ** L_5 = __this->get_address_of_OnError_2();
		WebSocketErrorEventHandler_t1B9EEB799CE0D22694C37BD87CEDBDF9FB199528 * L_6 = V_2;
		WebSocketErrorEventHandler_t1B9EEB799CE0D22694C37BD87CEDBDF9FB199528 * L_7 = V_1;
		WebSocketErrorEventHandler_t1B9EEB799CE0D22694C37BD87CEDBDF9FB199528 * L_8;
		L_8 = InterlockedCompareExchangeImpl<WebSocketErrorEventHandler_t1B9EEB799CE0D22694C37BD87CEDBDF9FB199528 *>((WebSocketErrorEventHandler_t1B9EEB799CE0D22694C37BD87CEDBDF9FB199528 **)L_5, L_6, L_7);
		V_0 = L_8;
		WebSocketErrorEventHandler_t1B9EEB799CE0D22694C37BD87CEDBDF9FB199528 * L_9 = V_0;
		WebSocketErrorEventHandler_t1B9EEB799CE0D22694C37BD87CEDBDF9FB199528 * L_10 = V_1;
		if ((!(((RuntimeObject*)(WebSocketErrorEventHandler_t1B9EEB799CE0D22694C37BD87CEDBDF9FB199528 *)L_9) == ((RuntimeObject*)(WebSocketErrorEventHandler_t1B9EEB799CE0D22694C37BD87CEDBDF9FB199528 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void NativeWebSocket.WebSocket::remove_OnError(NativeWebSocket.WebSocketErrorEventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket_remove_OnError_m8CD0DCAEC1399634F19B9A142B657F9D91A0B7E8 (WebSocket_t5FA66A4CDB32ECEC66E8A22DA5C2F3F778802646 * __this, WebSocketErrorEventHandler_t1B9EEB799CE0D22694C37BD87CEDBDF9FB199528 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebSocketErrorEventHandler_t1B9EEB799CE0D22694C37BD87CEDBDF9FB199528_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	WebSocketErrorEventHandler_t1B9EEB799CE0D22694C37BD87CEDBDF9FB199528 * V_0 = NULL;
	WebSocketErrorEventHandler_t1B9EEB799CE0D22694C37BD87CEDBDF9FB199528 * V_1 = NULL;
	WebSocketErrorEventHandler_t1B9EEB799CE0D22694C37BD87CEDBDF9FB199528 * V_2 = NULL;
	{
		WebSocketErrorEventHandler_t1B9EEB799CE0D22694C37BD87CEDBDF9FB199528 * L_0 = __this->get_OnError_2();
		V_0 = L_0;
	}

IL_0007:
	{
		WebSocketErrorEventHandler_t1B9EEB799CE0D22694C37BD87CEDBDF9FB199528 * L_1 = V_0;
		V_1 = L_1;
		WebSocketErrorEventHandler_t1B9EEB799CE0D22694C37BD87CEDBDF9FB199528 * L_2 = V_1;
		WebSocketErrorEventHandler_t1B9EEB799CE0D22694C37BD87CEDBDF9FB199528 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((WebSocketErrorEventHandler_t1B9EEB799CE0D22694C37BD87CEDBDF9FB199528 *)CastclassSealed((RuntimeObject*)L_4, WebSocketErrorEventHandler_t1B9EEB799CE0D22694C37BD87CEDBDF9FB199528_il2cpp_TypeInfo_var));
		WebSocketErrorEventHandler_t1B9EEB799CE0D22694C37BD87CEDBDF9FB199528 ** L_5 = __this->get_address_of_OnError_2();
		WebSocketErrorEventHandler_t1B9EEB799CE0D22694C37BD87CEDBDF9FB199528 * L_6 = V_2;
		WebSocketErrorEventHandler_t1B9EEB799CE0D22694C37BD87CEDBDF9FB199528 * L_7 = V_1;
		WebSocketErrorEventHandler_t1B9EEB799CE0D22694C37BD87CEDBDF9FB199528 * L_8;
		L_8 = InterlockedCompareExchangeImpl<WebSocketErrorEventHandler_t1B9EEB799CE0D22694C37BD87CEDBDF9FB199528 *>((WebSocketErrorEventHandler_t1B9EEB799CE0D22694C37BD87CEDBDF9FB199528 **)L_5, L_6, L_7);
		V_0 = L_8;
		WebSocketErrorEventHandler_t1B9EEB799CE0D22694C37BD87CEDBDF9FB199528 * L_9 = V_0;
		WebSocketErrorEventHandler_t1B9EEB799CE0D22694C37BD87CEDBDF9FB199528 * L_10 = V_1;
		if ((!(((RuntimeObject*)(WebSocketErrorEventHandler_t1B9EEB799CE0D22694C37BD87CEDBDF9FB199528 *)L_9) == ((RuntimeObject*)(WebSocketErrorEventHandler_t1B9EEB799CE0D22694C37BD87CEDBDF9FB199528 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void NativeWebSocket.WebSocket::add_OnClose(NativeWebSocket.WebSocketCloseEventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket_add_OnClose_m2EFF41AAA88992CB37B3317E0C9F67DA6A2B9308 (WebSocket_t5FA66A4CDB32ECEC66E8A22DA5C2F3F778802646 * __this, WebSocketCloseEventHandler_tD2F6193A42EB71C99D482FC38E4EC30825567A12 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebSocketCloseEventHandler_tD2F6193A42EB71C99D482FC38E4EC30825567A12_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	WebSocketCloseEventHandler_tD2F6193A42EB71C99D482FC38E4EC30825567A12 * V_0 = NULL;
	WebSocketCloseEventHandler_tD2F6193A42EB71C99D482FC38E4EC30825567A12 * V_1 = NULL;
	WebSocketCloseEventHandler_tD2F6193A42EB71C99D482FC38E4EC30825567A12 * V_2 = NULL;
	{
		WebSocketCloseEventHandler_tD2F6193A42EB71C99D482FC38E4EC30825567A12 * L_0 = __this->get_OnClose_3();
		V_0 = L_0;
	}

IL_0007:
	{
		WebSocketCloseEventHandler_tD2F6193A42EB71C99D482FC38E4EC30825567A12 * L_1 = V_0;
		V_1 = L_1;
		WebSocketCloseEventHandler_tD2F6193A42EB71C99D482FC38E4EC30825567A12 * L_2 = V_1;
		WebSocketCloseEventHandler_tD2F6193A42EB71C99D482FC38E4EC30825567A12 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((WebSocketCloseEventHandler_tD2F6193A42EB71C99D482FC38E4EC30825567A12 *)CastclassSealed((RuntimeObject*)L_4, WebSocketCloseEventHandler_tD2F6193A42EB71C99D482FC38E4EC30825567A12_il2cpp_TypeInfo_var));
		WebSocketCloseEventHandler_tD2F6193A42EB71C99D482FC38E4EC30825567A12 ** L_5 = __this->get_address_of_OnClose_3();
		WebSocketCloseEventHandler_tD2F6193A42EB71C99D482FC38E4EC30825567A12 * L_6 = V_2;
		WebSocketCloseEventHandler_tD2F6193A42EB71C99D482FC38E4EC30825567A12 * L_7 = V_1;
		WebSocketCloseEventHandler_tD2F6193A42EB71C99D482FC38E4EC30825567A12 * L_8;
		L_8 = InterlockedCompareExchangeImpl<WebSocketCloseEventHandler_tD2F6193A42EB71C99D482FC38E4EC30825567A12 *>((WebSocketCloseEventHandler_tD2F6193A42EB71C99D482FC38E4EC30825567A12 **)L_5, L_6, L_7);
		V_0 = L_8;
		WebSocketCloseEventHandler_tD2F6193A42EB71C99D482FC38E4EC30825567A12 * L_9 = V_0;
		WebSocketCloseEventHandler_tD2F6193A42EB71C99D482FC38E4EC30825567A12 * L_10 = V_1;
		if ((!(((RuntimeObject*)(WebSocketCloseEventHandler_tD2F6193A42EB71C99D482FC38E4EC30825567A12 *)L_9) == ((RuntimeObject*)(WebSocketCloseEventHandler_tD2F6193A42EB71C99D482FC38E4EC30825567A12 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void NativeWebSocket.WebSocket::remove_OnClose(NativeWebSocket.WebSocketCloseEventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket_remove_OnClose_m0D748C0E933D5D65E0DC47DB2604D825131CE748 (WebSocket_t5FA66A4CDB32ECEC66E8A22DA5C2F3F778802646 * __this, WebSocketCloseEventHandler_tD2F6193A42EB71C99D482FC38E4EC30825567A12 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebSocketCloseEventHandler_tD2F6193A42EB71C99D482FC38E4EC30825567A12_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	WebSocketCloseEventHandler_tD2F6193A42EB71C99D482FC38E4EC30825567A12 * V_0 = NULL;
	WebSocketCloseEventHandler_tD2F6193A42EB71C99D482FC38E4EC30825567A12 * V_1 = NULL;
	WebSocketCloseEventHandler_tD2F6193A42EB71C99D482FC38E4EC30825567A12 * V_2 = NULL;
	{
		WebSocketCloseEventHandler_tD2F6193A42EB71C99D482FC38E4EC30825567A12 * L_0 = __this->get_OnClose_3();
		V_0 = L_0;
	}

IL_0007:
	{
		WebSocketCloseEventHandler_tD2F6193A42EB71C99D482FC38E4EC30825567A12 * L_1 = V_0;
		V_1 = L_1;
		WebSocketCloseEventHandler_tD2F6193A42EB71C99D482FC38E4EC30825567A12 * L_2 = V_1;
		WebSocketCloseEventHandler_tD2F6193A42EB71C99D482FC38E4EC30825567A12 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((WebSocketCloseEventHandler_tD2F6193A42EB71C99D482FC38E4EC30825567A12 *)CastclassSealed((RuntimeObject*)L_4, WebSocketCloseEventHandler_tD2F6193A42EB71C99D482FC38E4EC30825567A12_il2cpp_TypeInfo_var));
		WebSocketCloseEventHandler_tD2F6193A42EB71C99D482FC38E4EC30825567A12 ** L_5 = __this->get_address_of_OnClose_3();
		WebSocketCloseEventHandler_tD2F6193A42EB71C99D482FC38E4EC30825567A12 * L_6 = V_2;
		WebSocketCloseEventHandler_tD2F6193A42EB71C99D482FC38E4EC30825567A12 * L_7 = V_1;
		WebSocketCloseEventHandler_tD2F6193A42EB71C99D482FC38E4EC30825567A12 * L_8;
		L_8 = InterlockedCompareExchangeImpl<WebSocketCloseEventHandler_tD2F6193A42EB71C99D482FC38E4EC30825567A12 *>((WebSocketCloseEventHandler_tD2F6193A42EB71C99D482FC38E4EC30825567A12 **)L_5, L_6, L_7);
		V_0 = L_8;
		WebSocketCloseEventHandler_tD2F6193A42EB71C99D482FC38E4EC30825567A12 * L_9 = V_0;
		WebSocketCloseEventHandler_tD2F6193A42EB71C99D482FC38E4EC30825567A12 * L_10 = V_1;
		if ((!(((RuntimeObject*)(WebSocketCloseEventHandler_tD2F6193A42EB71C99D482FC38E4EC30825567A12 *)L_9) == ((RuntimeObject*)(WebSocketCloseEventHandler_tD2F6193A42EB71C99D482FC38E4EC30825567A12 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void NativeWebSocket.WebSocket::.ctor(System.String,System.Collections.Generic.Dictionary`2<System.String,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket__ctor_m7E9FBA59F0C7A75E56A532FB588446048F6A91C7 (WebSocket_t5FA66A4CDB32ECEC66E8A22DA5C2F3F778802646 * __this, String_t* ___url0, Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * ___headers1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ClientWebSocket_tA2D70722EB2DD788E27D46C7E262C85C984EEE09_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mA6747E78BD4DF1D09D9091C1B3EBAE0FDB200666_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m951713A2C8790F19949E1D872CC93903C6E6596A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mC74F8340E150B8F9520188937677421C55AF5C05_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t08E192A6E99857FD75EAA081A5D3BEC33729EDBE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tAC5780506F34558E53CD51BF8B2E6633C667059B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral56D7741BCA89552362FD24D11BB8980E3D8A444C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral587B0E053519266A1A5628C5DBE03AA33A3BBE95);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// private ClientWebSocket m_Socket = new ClientWebSocket();
		ClientWebSocket_tA2D70722EB2DD788E27D46C7E262C85C984EEE09 * L_0 = (ClientWebSocket_tA2D70722EB2DD788E27D46C7E262C85C984EEE09 *)il2cpp_codegen_object_new(ClientWebSocket_tA2D70722EB2DD788E27D46C7E262C85C984EEE09_il2cpp_TypeInfo_var);
		ClientWebSocket__ctor_m8857DF54323F6C7B663F85AAAD2A0DB7CF79FC06(L_0, /*hidden argument*/NULL);
		__this->set_m_Socket_7(L_0);
		// private readonly object OutgoingMessageLock = new object();
		RuntimeObject * L_1 = (RuntimeObject *)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(L_1, /*hidden argument*/NULL);
		__this->set_OutgoingMessageLock_10(L_1);
		// private readonly object IncomingMessageLock = new object();
		RuntimeObject * L_2 = (RuntimeObject *)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(L_2, /*hidden argument*/NULL);
		__this->set_IncomingMessageLock_11(L_2);
		// private List<ArraySegment<byte>> sendBytesQueue = new List<ArraySegment<byte>>();
		List_1_tAC5780506F34558E53CD51BF8B2E6633C667059B * L_3 = (List_1_tAC5780506F34558E53CD51BF8B2E6633C667059B *)il2cpp_codegen_object_new(List_1_tAC5780506F34558E53CD51BF8B2E6633C667059B_il2cpp_TypeInfo_var);
		List_1__ctor_m951713A2C8790F19949E1D872CC93903C6E6596A(L_3, /*hidden argument*/List_1__ctor_m951713A2C8790F19949E1D872CC93903C6E6596A_RuntimeMethod_var);
		__this->set_sendBytesQueue_13(L_3);
		// private List<ArraySegment<byte>> sendTextQueue = new List<ArraySegment<byte>>();
		List_1_tAC5780506F34558E53CD51BF8B2E6633C667059B * L_4 = (List_1_tAC5780506F34558E53CD51BF8B2E6633C667059B *)il2cpp_codegen_object_new(List_1_tAC5780506F34558E53CD51BF8B2E6633C667059B_il2cpp_TypeInfo_var);
		List_1__ctor_m951713A2C8790F19949E1D872CC93903C6E6596A(L_4, /*hidden argument*/List_1__ctor_m951713A2C8790F19949E1D872CC93903C6E6596A_RuntimeMethod_var);
		__this->set_sendTextQueue_14(L_4);
		// private List<byte[]> m_MessageList = new List<byte[]>();
		List_1_t08E192A6E99857FD75EAA081A5D3BEC33729EDBE * L_5 = (List_1_t08E192A6E99857FD75EAA081A5D3BEC33729EDBE *)il2cpp_codegen_object_new(List_1_t08E192A6E99857FD75EAA081A5D3BEC33729EDBE_il2cpp_TypeInfo_var);
		List_1__ctor_mC74F8340E150B8F9520188937677421C55AF5C05(L_5, /*hidden argument*/List_1__ctor_mC74F8340E150B8F9520188937677421C55AF5C05_RuntimeMethod_var);
		__this->set_m_MessageList_15(L_5);
		// public WebSocket(string url, Dictionary<string, string> headers = null)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// uri = new Uri(url);
		String_t* L_6 = ___url0;
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_7 = (Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 *)il2cpp_codegen_object_new(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_il2cpp_TypeInfo_var);
		Uri__ctor_m7724F43B1525624FFF97A774B6B909B075714D5C(L_7, L_6, /*hidden argument*/NULL);
		__this->set_uri_4(L_7);
		// if (headers == null)
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_8 = ___headers1;
		if (L_8)
		{
			goto IL_0064;
		}
	}
	{
		// this.headers = new Dictionary<string, string>();
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_9 = (Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 *)il2cpp_codegen_object_new(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mA6747E78BD4DF1D09D9091C1B3EBAE0FDB200666(L_9, /*hidden argument*/Dictionary_2__ctor_mA6747E78BD4DF1D09D9091C1B3EBAE0FDB200666_RuntimeMethod_var);
		__this->set_headers_5(L_9);
		// }
		goto IL_006b;
	}

IL_0064:
	{
		// this.headers = headers;
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_10 = ___headers1;
		__this->set_headers_5(L_10);
	}

IL_006b:
	{
		// subprotocols = new List<string>();
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_11 = (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *)il2cpp_codegen_object_new(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var);
		List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9(L_11, /*hidden argument*/List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9_RuntimeMethod_var);
		__this->set_subprotocols_6(L_11);
		// string protocol = uri.Scheme;
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_12 = __this->get_uri_4();
		NullCheck(L_12);
		String_t* L_13;
		L_13 = Uri_get_Scheme_mEC4980E1C82DE3963007E33C759742A02A26FF29(L_12, /*hidden argument*/NULL);
		V_0 = L_13;
		// if (!protocol.Equals("ws") && !protocol.Equals("wss"))
		String_t* L_14 = V_0;
		NullCheck(L_14);
		bool L_15;
		L_15 = String_Equals_m8A062B96B61A7D652E7D73C9B3E904F6B0E5F41D(L_14, _stringLiteral587B0E053519266A1A5628C5DBE03AA33A3BBE95, /*hidden argument*/NULL);
		if (L_15)
		{
			goto IL_00ad;
		}
	}
	{
		String_t* L_16 = V_0;
		NullCheck(L_16);
		bool L_17;
		L_17 = String_Equals_m8A062B96B61A7D652E7D73C9B3E904F6B0E5F41D(L_16, _stringLiteral56D7741BCA89552362FD24D11BB8980E3D8A444C, /*hidden argument*/NULL);
		if (L_17)
		{
			goto IL_00ad;
		}
	}
	{
		// throw new ArgumentException("Unsupported protocol: " + protocol);
		String_t* L_18 = V_0;
		String_t* L_19;
		L_19 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral37422C200CFCABD757B9019D3ABA76E55A7A5DA5)), L_18, /*hidden argument*/NULL);
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_20 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC(L_20, L_19, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_20, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WebSocket__ctor_m7E9FBA59F0C7A75E56A532FB588446048F6A91C7_RuntimeMethod_var)));
	}

IL_00ad:
	{
		// }
		return;
	}
}
// System.Void NativeWebSocket.WebSocket::CancelConnection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket_CancelConnection_mC0104D14139714B80FD46B7C85EBED44BE6993F5 (WebSocket_t5FA66A4CDB32ECEC66E8A22DA5C2F3F778802646 * __this, const RuntimeMethod* method)
{
	CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * G_B2_0 = NULL;
	CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * G_B1_0 = NULL;
	{
		// m_TokenSource?.Cancel();
		CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * L_0 = __this->get_m_TokenSource_8();
		CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		NullCheck(G_B2_0);
		CancellationTokenSource_Cancel_m2D87D42962FF166576B4FB3A34DF5C07F4AECEF1(G_B2_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Threading.Tasks.Task NativeWebSocket.WebSocket::Connect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * WebSocket_Connect_mD17160594159DCD4E66F394E53B59DB2E80D022A (WebSocket_t5FA66A4CDB32ECEC66E8A22DA5C2F3F778802646 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_Start_TisU3CConnectU3Ed__27_t981981F013AF3401CBA896BAF061C290E36CBBEC_m0D4711D8D0EE0E00C5B84F63948F0B821EF4DE59_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CConnectU3Ed__27_t981981F013AF3401CBA896BAF061C290E36CBBEC  V_0;
	memset((&V_0), 0, sizeof(V_0));
	AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		(&V_0)->set_U3CU3E4__this_2(__this);
		IL2CPP_RUNTIME_CLASS_INIT(AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  L_0;
		L_0 = AsyncTaskMethodBuilder_Create_mFF3A436623D0A24B2063FDB41694EDFDA7783DE8(/*hidden argument*/NULL);
		(&V_0)->set_U3CU3Et__builder_1(L_0);
		(&V_0)->set_U3CU3E1__state_0((-1));
		U3CConnectU3Ed__27_t981981F013AF3401CBA896BAF061C290E36CBBEC  L_1 = V_0;
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  L_2 = L_1.get_U3CU3Et__builder_1();
		V_1 = L_2;
		AsyncTaskMethodBuilder_Start_TisU3CConnectU3Ed__27_t981981F013AF3401CBA896BAF061C290E36CBBEC_m0D4711D8D0EE0E00C5B84F63948F0B821EF4DE59((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)(&V_1), (U3CConnectU3Ed__27_t981981F013AF3401CBA896BAF061C290E36CBBEC *)(&V_0), /*hidden argument*/AsyncTaskMethodBuilder_Start_TisU3CConnectU3Ed__27_t981981F013AF3401CBA896BAF061C290E36CBBEC_m0D4711D8D0EE0E00C5B84F63948F0B821EF4DE59_RuntimeMethod_var);
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_3 = (&V_0)->get_address_of_U3CU3Et__builder_1();
		Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_4;
		L_4 = AsyncTaskMethodBuilder_get_Task_m130181C15F259D4FAAD717BF53402A1FD0AD19F4((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// NativeWebSocket.WebSocketState NativeWebSocket.WebSocket::get_State()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WebSocket_get_State_m05FA846782E157A4DAD2258AAE0708074F5D6917 (WebSocket_t5FA66A4CDB32ECEC66E8A22DA5C2F3F778802646 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// switch (m_Socket.State)
		ClientWebSocket_tA2D70722EB2DD788E27D46C7E262C85C984EEE09 * L_0 = __this->get_m_Socket_7();
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtFuncInvoker0< int32_t >::Invoke(5 /* System.Net.WebSockets.WebSocketState System.Net.WebSockets.WebSocket::get_State() */, L_0);
		V_0 = L_1;
		int32_t L_2 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_2, (int32_t)1)))
		{
			case 0:
			{
				goto IL_002a;
			}
			case 1:
			{
				goto IL_002c;
			}
			case 2:
			{
				goto IL_002e;
			}
			case 3:
			{
				goto IL_002e;
			}
			case 4:
			{
				goto IL_0030;
			}
		}
	}
	{
		goto IL_0032;
	}

IL_002a:
	{
		// return WebSocketState.Connecting;
		return (int32_t)(0);
	}

IL_002c:
	{
		// return WebSocketState.Open;
		return (int32_t)(1);
	}

IL_002e:
	{
		// return WebSocketState.Closing;
		return (int32_t)(2);
	}

IL_0030:
	{
		// return WebSocketState.Closed;
		return (int32_t)(3);
	}

IL_0032:
	{
		// return WebSocketState.Closed;
		return (int32_t)(3);
	}
}
// System.Threading.Tasks.Task NativeWebSocket.WebSocket::SendText(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * WebSocket_SendText_mA860EFD91CEC0E76D35AF658560425CC3ADECF99 (WebSocket_t5FA66A4CDB32ECEC66E8A22DA5C2F3F778802646 * __this, String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArraySegment_1__ctor_mAA780E22BB5AE07078510EDCE524DD1EA1E98E0D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_0 = NULL;
	{
		// var encoded = Encoding.UTF8.GetBytes(message);
		Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * L_0;
		L_0 = Encoding_get_UTF8_mC877FB3137BBD566AEE7B15F9BF61DC4EF8F5E5E(/*hidden argument*/NULL);
		String_t* L_1 = ___message0;
		NullCheck(L_0);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_2;
		L_2 = VirtFuncInvoker1< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, String_t* >::Invoke(16 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_0, L_1);
		V_0 = L_2;
		// return SendMessage(sendTextQueue, WebSocketMessageType.Text, new ArraySegment<byte>(encoded, 0, encoded.Length));
		List_1_tAC5780506F34558E53CD51BF8B2E6633C667059B * L_3 = __this->get_sendTextQueue_14();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_4 = V_0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_5 = V_0;
		NullCheck(L_5);
		ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  L_6;
		memset((&L_6), 0, sizeof(L_6));
		ArraySegment_1__ctor_mAA780E22BB5AE07078510EDCE524DD1EA1E98E0D((&L_6), L_4, 0, ((int32_t)((int32_t)(((RuntimeArray*)L_5)->max_length))), /*hidden argument*/ArraySegment_1__ctor_mAA780E22BB5AE07078510EDCE524DD1EA1E98E0D_RuntimeMethod_var);
		Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_7;
		L_7 = WebSocket_SendMessage_mFDCD6FBE6DC5EE7DF135A3D0D03FB48C1D57B11A(__this, L_3, 0, L_6, /*hidden argument*/NULL);
		return L_7;
	}
}
// System.Threading.Tasks.Task NativeWebSocket.WebSocket::SendMessage(System.Collections.Generic.List`1<System.ArraySegment`1<System.Byte>>,System.Net.WebSockets.WebSocketMessageType,System.ArraySegment`1<System.Byte>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * WebSocket_SendMessage_mFDCD6FBE6DC5EE7DF135A3D0D03FB48C1D57B11A (WebSocket_t5FA66A4CDB32ECEC66E8A22DA5C2F3F778802646 * __this, List_1_tAC5780506F34558E53CD51BF8B2E6633C667059B * ___queue0, int32_t ___messageType1, ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  ___buffer2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_Start_TisU3CSendMessageU3Ed__32_t98E469030BF6849D4377D3C2EC6B58D959874AF7_m939C124DE206D2D5A2C187F485229A4344A1BD58_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CSendMessageU3Ed__32_t98E469030BF6849D4377D3C2EC6B58D959874AF7  V_0;
	memset((&V_0), 0, sizeof(V_0));
	AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		(&V_0)->set_U3CU3E4__this_3(__this);
		List_1_tAC5780506F34558E53CD51BF8B2E6633C667059B * L_0 = ___queue0;
		(&V_0)->set_queue_5(L_0);
		int32_t L_1 = ___messageType1;
		(&V_0)->set_messageType_4(L_1);
		ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  L_2 = ___buffer2;
		(&V_0)->set_buffer_2(L_2);
		IL2CPP_RUNTIME_CLASS_INIT(AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  L_3;
		L_3 = AsyncTaskMethodBuilder_Create_mFF3A436623D0A24B2063FDB41694EDFDA7783DE8(/*hidden argument*/NULL);
		(&V_0)->set_U3CU3Et__builder_1(L_3);
		(&V_0)->set_U3CU3E1__state_0((-1));
		U3CSendMessageU3Ed__32_t98E469030BF6849D4377D3C2EC6B58D959874AF7  L_4 = V_0;
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  L_5 = L_4.get_U3CU3Et__builder_1();
		V_1 = L_5;
		AsyncTaskMethodBuilder_Start_TisU3CSendMessageU3Ed__32_t98E469030BF6849D4377D3C2EC6B58D959874AF7_m939C124DE206D2D5A2C187F485229A4344A1BD58((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)(&V_1), (U3CSendMessageU3Ed__32_t98E469030BF6849D4377D3C2EC6B58D959874AF7 *)(&V_0), /*hidden argument*/AsyncTaskMethodBuilder_Start_TisU3CSendMessageU3Ed__32_t98E469030BF6849D4377D3C2EC6B58D959874AF7_m939C124DE206D2D5A2C187F485229A4344A1BD58_RuntimeMethod_var);
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_6 = (&V_0)->get_address_of_U3CU3Et__builder_1();
		Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_7;
		L_7 = AsyncTaskMethodBuilder_get_Task_m130181C15F259D4FAAD717BF53402A1FD0AD19F4((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_6, /*hidden argument*/NULL);
		return L_7;
	}
}
// System.Threading.Tasks.Task NativeWebSocket.WebSocket::HandleQueue(System.Collections.Generic.List`1<System.ArraySegment`1<System.Byte>>,System.Net.WebSockets.WebSocketMessageType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * WebSocket_HandleQueue_mB9F63BE2C41A82F9DCBB0DF3807D1F5F0B89E457 (WebSocket_t5FA66A4CDB32ECEC66E8A22DA5C2F3F778802646 * __this, List_1_tAC5780506F34558E53CD51BF8B2E6633C667059B * ___queue0, int32_t ___messageType1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_Start_TisU3CHandleQueueU3Ed__33_t195271007DF8F3318A09DD491A9A5408DA560F40_m953745A4A8CF4B7BC9A246D3B2271038C35C81C0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CHandleQueueU3Ed__33_t195271007DF8F3318A09DD491A9A5408DA560F40  V_0;
	memset((&V_0), 0, sizeof(V_0));
	AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		(&V_0)->set_U3CU3E4__this_2(__this);
		List_1_tAC5780506F34558E53CD51BF8B2E6633C667059B * L_0 = ___queue0;
		(&V_0)->set_queue_3(L_0);
		int32_t L_1 = ___messageType1;
		(&V_0)->set_messageType_4(L_1);
		IL2CPP_RUNTIME_CLASS_INIT(AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  L_2;
		L_2 = AsyncTaskMethodBuilder_Create_mFF3A436623D0A24B2063FDB41694EDFDA7783DE8(/*hidden argument*/NULL);
		(&V_0)->set_U3CU3Et__builder_1(L_2);
		(&V_0)->set_U3CU3E1__state_0((-1));
		U3CHandleQueueU3Ed__33_t195271007DF8F3318A09DD491A9A5408DA560F40  L_3 = V_0;
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  L_4 = L_3.get_U3CU3Et__builder_1();
		V_1 = L_4;
		AsyncTaskMethodBuilder_Start_TisU3CHandleQueueU3Ed__33_t195271007DF8F3318A09DD491A9A5408DA560F40_m953745A4A8CF4B7BC9A246D3B2271038C35C81C0((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)(&V_1), (U3CHandleQueueU3Ed__33_t195271007DF8F3318A09DD491A9A5408DA560F40 *)(&V_0), /*hidden argument*/AsyncTaskMethodBuilder_Start_TisU3CHandleQueueU3Ed__33_t195271007DF8F3318A09DD491A9A5408DA560F40_m953745A4A8CF4B7BC9A246D3B2271038C35C81C0_RuntimeMethod_var);
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_5 = (&V_0)->get_address_of_U3CU3Et__builder_1();
		Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_6;
		L_6 = AsyncTaskMethodBuilder_get_Task_m130181C15F259D4FAAD717BF53402A1FD0AD19F4((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_5, /*hidden argument*/NULL);
		return L_6;
	}
}
// System.Void NativeWebSocket.WebSocket::DispatchMessageQueue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket_DispatchMessageQueue_mE767C33A40B6402AEB80FAAC684FC9FD1E3D6656 (WebSocket_t5FA66A4CDB32ECEC66E8A22DA5C2F3F778802646 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m5621C38865E52261F1EBAD5841646169F08B0E0D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m390A2307193B6A62098EE9A3798568873C7D3CF3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mCEBCF66B19764A2EFF9F5F81C78323729EC10F60_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m8763363EF411BE8EC9CCEBEF4AA81F71601D4584_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t08E192A6E99857FD75EAA081A5D3BEC33729EDBE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t08E192A6E99857FD75EAA081A5D3BEC33729EDBE * V_0 = NULL;
	int32_t V_1 = 0;
	RuntimeObject * V_2 = NULL;
	bool V_3 = false;
	int32_t V_4 = 0;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	WebSocketMessageEventHandler_t58A60AF5E7F18EC4591F32F0894E4BA5A7A8F222 * G_B10_0 = NULL;
	WebSocketMessageEventHandler_t58A60AF5E7F18EC4591F32F0894E4BA5A7A8F222 * G_B9_0 = NULL;
	{
		// if (m_MessageList.Count == 0)
		List_1_t08E192A6E99857FD75EAA081A5D3BEC33729EDBE * L_0 = __this->get_m_MessageList_15();
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_mCEBCF66B19764A2EFF9F5F81C78323729EC10F60_inline(L_0, /*hidden argument*/List_1_get_Count_mCEBCF66B19764A2EFF9F5F81C78323729EC10F60_RuntimeMethod_var);
		if (L_1)
		{
			goto IL_000e;
		}
	}
	{
		// return;
		return;
	}

IL_000e:
	{
		// lock (IncomingMessageLock)
		RuntimeObject * L_2 = __this->get_IncomingMessageLock_11();
		V_2 = L_2;
		V_3 = (bool)0;
	}

IL_0017:
	try
	{ // begin try (depth: 1)
		RuntimeObject * L_3 = V_2;
		Monitor_Enter_mBEB6CC84184B46F26375EC3FC8921D16E48EA4C4(L_3, (bool*)(&V_3), /*hidden argument*/NULL);
		// messageListCopy = new List<byte[]>(m_MessageList);
		List_1_t08E192A6E99857FD75EAA081A5D3BEC33729EDBE * L_4 = __this->get_m_MessageList_15();
		List_1_t08E192A6E99857FD75EAA081A5D3BEC33729EDBE * L_5 = (List_1_t08E192A6E99857FD75EAA081A5D3BEC33729EDBE *)il2cpp_codegen_object_new(List_1_t08E192A6E99857FD75EAA081A5D3BEC33729EDBE_il2cpp_TypeInfo_var);
		List_1__ctor_m390A2307193B6A62098EE9A3798568873C7D3CF3(L_5, L_4, /*hidden argument*/List_1__ctor_m390A2307193B6A62098EE9A3798568873C7D3CF3_RuntimeMethod_var);
		V_0 = L_5;
		// m_MessageList.Clear();
		List_1_t08E192A6E99857FD75EAA081A5D3BEC33729EDBE * L_6 = __this->get_m_MessageList_15();
		NullCheck(L_6);
		List_1_Clear_m5621C38865E52261F1EBAD5841646169F08B0E0D(L_6, /*hidden argument*/List_1_Clear_m5621C38865E52261F1EBAD5841646169F08B0E0D_RuntimeMethod_var);
		// }
		IL2CPP_LEAVE(0x42, FINALLY_0038);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0038;
	}

FINALLY_0038:
	{ // begin finally (depth: 1)
		{
			bool L_7 = V_3;
			if (!L_7)
			{
				goto IL_0041;
			}
		}

IL_003b:
		{
			RuntimeObject * L_8 = V_2;
			Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_8, /*hidden argument*/NULL);
		}

IL_0041:
		{
			IL2CPP_END_FINALLY(56)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(56)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x42, IL_0042)
	}

IL_0042:
	{
		// var len = messageListCopy.Count;
		List_1_t08E192A6E99857FD75EAA081A5D3BEC33729EDBE * L_9 = V_0;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = List_1_get_Count_mCEBCF66B19764A2EFF9F5F81C78323729EC10F60_inline(L_9, /*hidden argument*/List_1_get_Count_mCEBCF66B19764A2EFF9F5F81C78323729EC10F60_RuntimeMethod_var);
		V_1 = L_10;
		// for (int i = 0; i < len; i++)
		V_4 = 0;
		goto IL_006d;
	}

IL_004e:
	{
		// OnMessage?.Invoke(messageListCopy[i]);
		WebSocketMessageEventHandler_t58A60AF5E7F18EC4591F32F0894E4BA5A7A8F222 * L_11 = __this->get_OnMessage_1();
		WebSocketMessageEventHandler_t58A60AF5E7F18EC4591F32F0894E4BA5A7A8F222 * L_12 = L_11;
		G_B9_0 = L_12;
		if (L_12)
		{
			G_B10_0 = L_12;
			goto IL_005a;
		}
	}
	{
		goto IL_0067;
	}

IL_005a:
	{
		List_1_t08E192A6E99857FD75EAA081A5D3BEC33729EDBE * L_13 = V_0;
		int32_t L_14 = V_4;
		NullCheck(L_13);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_15;
		L_15 = List_1_get_Item_m8763363EF411BE8EC9CCEBEF4AA81F71601D4584_inline(L_13, L_14, /*hidden argument*/List_1_get_Item_m8763363EF411BE8EC9CCEBEF4AA81F71601D4584_RuntimeMethod_var);
		NullCheck(G_B10_0);
		WebSocketMessageEventHandler_Invoke_m60A1C6B77B149F190EC5D6FE48210C18484B6033(G_B10_0, L_15, /*hidden argument*/NULL);
	}

IL_0067:
	{
		// for (int i = 0; i < len; i++)
		int32_t L_16 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_16, (int32_t)1));
	}

IL_006d:
	{
		// for (int i = 0; i < len; i++)
		int32_t L_17 = V_4;
		int32_t L_18 = V_1;
		if ((((int32_t)L_17) < ((int32_t)L_18)))
		{
			goto IL_004e;
		}
	}
	{
		// }
		return;
	}
}
// System.Threading.Tasks.Task NativeWebSocket.WebSocket::Receive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * WebSocket_Receive_m50315FDED6E66BAD5813963D1635146C8EF0CC31 (WebSocket_t5FA66A4CDB32ECEC66E8A22DA5C2F3F778802646 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_Start_TisU3CReceiveU3Ed__36_tAD99CF678583A10E2AD64335EB851ABC77878E0C_m3C573B64266E6A0EB2C15C47C47547154E30B5C7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CReceiveU3Ed__36_tAD99CF678583A10E2AD64335EB851ABC77878E0C  V_0;
	memset((&V_0), 0, sizeof(V_0));
	AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		(&V_0)->set_U3CU3E4__this_2(__this);
		IL2CPP_RUNTIME_CLASS_INIT(AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  L_0;
		L_0 = AsyncTaskMethodBuilder_Create_mFF3A436623D0A24B2063FDB41694EDFDA7783DE8(/*hidden argument*/NULL);
		(&V_0)->set_U3CU3Et__builder_1(L_0);
		(&V_0)->set_U3CU3E1__state_0((-1));
		U3CReceiveU3Ed__36_tAD99CF678583A10E2AD64335EB851ABC77878E0C  L_1 = V_0;
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  L_2 = L_1.get_U3CU3Et__builder_1();
		V_1 = L_2;
		AsyncTaskMethodBuilder_Start_TisU3CReceiveU3Ed__36_tAD99CF678583A10E2AD64335EB851ABC77878E0C_m3C573B64266E6A0EB2C15C47C47547154E30B5C7((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)(&V_1), (U3CReceiveU3Ed__36_tAD99CF678583A10E2AD64335EB851ABC77878E0C *)(&V_0), /*hidden argument*/AsyncTaskMethodBuilder_Start_TisU3CReceiveU3Ed__36_tAD99CF678583A10E2AD64335EB851ABC77878E0C_m3C573B64266E6A0EB2C15C47C47547154E30B5C7_RuntimeMethod_var);
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_3 = (&V_0)->get_address_of_U3CU3Et__builder_1();
		Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_4;
		L_4 = AsyncTaskMethodBuilder_get_Task_m130181C15F259D4FAAD717BF53402A1FD0AD19F4((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Threading.Tasks.Task NativeWebSocket.WebSocket::Close()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * WebSocket_Close_mEA005048BB477FF7D215C8D67891FC71DD0C3801 (WebSocket_t5FA66A4CDB32ECEC66E8A22DA5C2F3F778802646 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_Start_TisU3CCloseU3Ed__37_t2B8C769B471A3E7EF033776A04F6922AC5E7DBE4_m32F449BF94BE4BB81C2D0B6BE9E7CE914FA07819_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CCloseU3Ed__37_t2B8C769B471A3E7EF033776A04F6922AC5E7DBE4  V_0;
	memset((&V_0), 0, sizeof(V_0));
	AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		(&V_0)->set_U3CU3E4__this_2(__this);
		IL2CPP_RUNTIME_CLASS_INIT(AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  L_0;
		L_0 = AsyncTaskMethodBuilder_Create_mFF3A436623D0A24B2063FDB41694EDFDA7783DE8(/*hidden argument*/NULL);
		(&V_0)->set_U3CU3Et__builder_1(L_0);
		(&V_0)->set_U3CU3E1__state_0((-1));
		U3CCloseU3Ed__37_t2B8C769B471A3E7EF033776A04F6922AC5E7DBE4  L_1 = V_0;
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  L_2 = L_1.get_U3CU3Et__builder_1();
		V_1 = L_2;
		AsyncTaskMethodBuilder_Start_TisU3CCloseU3Ed__37_t2B8C769B471A3E7EF033776A04F6922AC5E7DBE4_m32F449BF94BE4BB81C2D0B6BE9E7CE914FA07819((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)(&V_1), (U3CCloseU3Ed__37_t2B8C769B471A3E7EF033776A04F6922AC5E7DBE4 *)(&V_0), /*hidden argument*/AsyncTaskMethodBuilder_Start_TisU3CCloseU3Ed__37_t2B8C769B471A3E7EF033776A04F6922AC5E7DBE4_m32F449BF94BE4BB81C2D0B6BE9E7CE914FA07819_RuntimeMethod_var);
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_3 = (&V_0)->get_address_of_U3CU3Et__builder_1();
		Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_4;
		L_4 = AsyncTaskMethodBuilder_get_Task_m130181C15F259D4FAAD717BF53402A1FD0AD19F4((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_3, /*hidden argument*/NULL);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_WebSocketCloseEventHandler_tD2F6193A42EB71C99D482FC38E4EC30825567A12 (WebSocketCloseEventHandler_tD2F6193A42EB71C99D482FC38E4EC30825567A12 * __this, int32_t ___closeCode0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	il2cppPInvokeFunc(___closeCode0);

}
// System.Void NativeWebSocket.WebSocketCloseEventHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketCloseEventHandler__ctor_m4429EA362B8CCC4F63462934A230E30DA265B78F (WebSocketCloseEventHandler_tD2F6193A42EB71C99D482FC38E4EC30825567A12 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void NativeWebSocket.WebSocketCloseEventHandler::Invoke(NativeWebSocket.WebSocketCloseCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketCloseEventHandler_Invoke_mA421ED8AEB852C58D6A2657DD1CFD33D9ABA343D (WebSocketCloseEventHandler_tD2F6193A42EB71C99D482FC38E4EC30825567A12 * __this, int32_t ___closeCode0, const RuntimeMethod* method)
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
				typedef void (*FunctionPointerType) (int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___closeCode0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___closeCode0, targetMethod);
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
						GenericInterfaceActionInvoker1< int32_t >::Invoke(targetMethod, targetThis, ___closeCode0);
					else
						GenericVirtActionInvoker1< int32_t >::Invoke(targetMethod, targetThis, ___closeCode0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___closeCode0);
					else
						VirtActionInvoker1< int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___closeCode0);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((RuntimeObject*)(reinterpret_cast<RuntimeObject*>(&___closeCode0) - 1), targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, int32_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___closeCode0, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult NativeWebSocket.WebSocketCloseEventHandler::BeginInvoke(NativeWebSocket.WebSocketCloseCode,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WebSocketCloseEventHandler_BeginInvoke_m4A0830A6215B8CB74E3E936C6013D60F17CDAF2D (WebSocketCloseEventHandler_tD2F6193A42EB71C99D482FC38E4EC30825567A12 * __this, int32_t ___closeCode0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebSocketCloseCode_tC5045D0C22A7514F1F7D1F59549A5A9B7D88F510_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(WebSocketCloseCode_tC5045D0C22A7514F1F7D1F59549A5A9B7D88F510_il2cpp_TypeInfo_var, &___closeCode0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Void NativeWebSocket.WebSocketCloseEventHandler::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketCloseEventHandler_EndInvoke_m1E382D58CC61B3AFA3D8A0DD71D18FE6A32D1D44 (WebSocketCloseEventHandler_tD2F6193A42EB71C99D482FC38E4EC30825567A12 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_WebSocketErrorEventHandler_t1B9EEB799CE0D22694C37BD87CEDBDF9FB199528 (WebSocketErrorEventHandler_t1B9EEB799CE0D22694C37BD87CEDBDF9FB199528 * __this, String_t* ___errorMsg0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Marshaling of parameter '___errorMsg0' to native representation
	char* ____errorMsg0_marshaled = NULL;
	____errorMsg0_marshaled = il2cpp_codegen_marshal_string(___errorMsg0);

	// Native function invocation
	il2cppPInvokeFunc(____errorMsg0_marshaled);

	// Marshaling cleanup of parameter '___errorMsg0' native representation
	il2cpp_codegen_marshal_free(____errorMsg0_marshaled);
	____errorMsg0_marshaled = NULL;

}
// System.Void NativeWebSocket.WebSocketErrorEventHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketErrorEventHandler__ctor_m396E76E1C5C607DAE231D41E6345AE63FC326CBF (WebSocketErrorEventHandler_t1B9EEB799CE0D22694C37BD87CEDBDF9FB199528 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void NativeWebSocket.WebSocketErrorEventHandler::Invoke(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketErrorEventHandler_Invoke_mDA8A42C5C77F34DB31A6B07D5A59F72C94F98728 (WebSocketErrorEventHandler_t1B9EEB799CE0D22694C37BD87CEDBDF9FB199528 * __this, String_t* ___errorMsg0, const RuntimeMethod* method)
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
				typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___errorMsg0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___errorMsg0, targetMethod);
			}
		}
		else if (___parameterCount != 1)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, ___errorMsg0);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, ___errorMsg0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___errorMsg0);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___errorMsg0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___errorMsg0, targetMethod);
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
						GenericInterfaceActionInvoker1< String_t* >::Invoke(targetMethod, targetThis, ___errorMsg0);
					else
						GenericVirtActionInvoker1< String_t* >::Invoke(targetMethod, targetThis, ___errorMsg0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___errorMsg0);
					else
						VirtActionInvoker1< String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___errorMsg0);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___errorMsg0, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, String_t*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___errorMsg0, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult NativeWebSocket.WebSocketErrorEventHandler::BeginInvoke(System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WebSocketErrorEventHandler_BeginInvoke_m383795076D87CBEA1475B559ABB9340E484C19F2 (WebSocketErrorEventHandler_t1B9EEB799CE0D22694C37BD87CEDBDF9FB199528 * __this, String_t* ___errorMsg0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___errorMsg0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Void NativeWebSocket.WebSocketErrorEventHandler::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketErrorEventHandler_EndInvoke_m51BA1F47CDD12B5DC8890963389490B85689161F (WebSocketErrorEventHandler_t1B9EEB799CE0D22694C37BD87CEDBDF9FB199528 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
// NativeWebSocket.WebSocketCloseCode NativeWebSocket.WebSocketHelpers::ParseCloseCodeEnum(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WebSocketHelpers_ParseCloseCodeEnum_mAC862131BD4DB650462AD9679CAB225D6145DB0B (int32_t ___closeCode0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enum_t23B90B40F60E677A8025267341651C94AE079CDA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebSocketCloseCode_tC5045D0C22A7514F1F7D1F59549A5A9B7D88F510_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (WebSocketCloseCode.IsDefined(typeof(WebSocketCloseCode), closeCode))
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_0 = { reinterpret_cast<intptr_t> (WebSocketCloseCode_tC5045D0C22A7514F1F7D1F59549A5A9B7D88F510_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1;
		L_1 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_0, /*hidden argument*/NULL);
		int32_t L_2 = ___closeCode0;
		int32_t L_3 = L_2;
		RuntimeObject * L_4 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_3);
		IL2CPP_RUNTIME_CLASS_INIT(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Enum_IsDefined_m70E955627155998B426145940DE105ECEF213B96(L_1, L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0019;
		}
	}
	{
		// return (WebSocketCloseCode)closeCode;
		int32_t L_6 = ___closeCode0;
		return (int32_t)(L_6);
	}

IL_0019:
	{
		// return WebSocketCloseCode.Undefined;
		return (int32_t)(((int32_t)1004));
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_WebSocketMessageEventHandler_t58A60AF5E7F18EC4591F32F0894E4BA5A7A8F222 (WebSocketMessageEventHandler_t58A60AF5E7F18EC4591F32F0894E4BA5A7A8F222 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___data0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(uint8_t*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Marshaling of parameter '___data0' to native representation
	uint8_t* ____data0_marshaled = NULL;
	if (___data0 != NULL)
	{
		____data0_marshaled = reinterpret_cast<uint8_t*>((___data0)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	il2cppPInvokeFunc(____data0_marshaled);

}
// System.Void NativeWebSocket.WebSocketMessageEventHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketMessageEventHandler__ctor_m4B7A43452558A2E637198F4BD3367F6AF8FC24CF (WebSocketMessageEventHandler_t58A60AF5E7F18EC4591F32F0894E4BA5A7A8F222 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void NativeWebSocket.WebSocketMessageEventHandler::Invoke(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketMessageEventHandler_Invoke_m60A1C6B77B149F190EC5D6FE48210C18484B6033 (WebSocketMessageEventHandler_t58A60AF5E7F18EC4591F32F0894E4BA5A7A8F222 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___data0, const RuntimeMethod* method)
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
				typedef void (*FunctionPointerType) (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___data0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___data0, targetMethod);
			}
		}
		else if (___parameterCount != 1)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, ___data0);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, ___data0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___data0);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___data0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___data0, targetMethod);
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
						GenericInterfaceActionInvoker1< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* >::Invoke(targetMethod, targetThis, ___data0);
					else
						GenericVirtActionInvoker1< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* >::Invoke(targetMethod, targetThis, ___data0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___data0);
					else
						VirtActionInvoker1< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___data0);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___data0, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___data0, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult NativeWebSocket.WebSocketMessageEventHandler::BeginInvoke(System.Byte[],System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WebSocketMessageEventHandler_BeginInvoke_m4705C77BD9ED62B6EC2F97BB8BAE20AF8F065A20 (WebSocketMessageEventHandler_t58A60AF5E7F18EC4591F32F0894E4BA5A7A8F222 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___data0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___data0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Void NativeWebSocket.WebSocketMessageEventHandler::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketMessageEventHandler_EndInvoke_m4E1416CAB76296D617168D11A25DBB1E6FC18198 (WebSocketMessageEventHandler_t58A60AF5E7F18EC4591F32F0894E4BA5A7A8F222 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_WebSocketOpenEventHandler_tDA44AD311FF420B05C807A25ED3C313A2D9514B0 (WebSocketOpenEventHandler_tDA44AD311FF420B05C807A25ED3C313A2D9514B0 * __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void NativeWebSocket.WebSocketOpenEventHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketOpenEventHandler__ctor_m0A63637ED213C1E911FD3422758902404D8B1161 (WebSocketOpenEventHandler_tDA44AD311FF420B05C807A25ED3C313A2D9514B0 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void NativeWebSocket.WebSocketOpenEventHandler::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketOpenEventHandler_Invoke_m0B7AC1A32BF46548E2CCFB62EF49B90A467319DA (WebSocketOpenEventHandler_tDA44AD311FF420B05C807A25ED3C313A2D9514B0 * __this, const RuntimeMethod* method)
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
			if (___parameterCount == 0)
			{
				// open
				typedef void (*FunctionPointerType) (const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
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
						GenericInterfaceActionInvoker0::Invoke(targetMethod, targetThis);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, targetThis);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
	}
}
// System.IAsyncResult NativeWebSocket.WebSocketOpenEventHandler::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WebSocketOpenEventHandler_BeginInvoke_mABFF7671604570C2A9A02C0AD6746E3C1801BDD4 (WebSocketOpenEventHandler_tDA44AD311FF420B05C807A25ED3C313A2D9514B0 * __this, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback0, RuntimeObject * ___object1, const RuntimeMethod* method)
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);;
}
// System.Void NativeWebSocket.WebSocketOpenEventHandler::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketOpenEventHandler_EndInvoke_m164BAC909D31C26083F38C2B1109ABE1F1ABAF84 (WebSocketOpenEventHandler_tDA44AD311FF420B05C807A25ED3C313A2D9514B0 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
// System.Void MainThreadUtil/<>c__DisplayClass9_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass9_0__ctor_m85FE194D0E546FE039318B759AA63C71768E7375 (U3CU3Ec__DisplayClass9_0_tFA5A6CDE9007824D70A78C68EBEE3D1A55BFEC8B * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MainThreadUtil/<>c__DisplayClass9_0::<Run>b__0(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass9_0_U3CRunU3Eb__0_mFE3B1B2E492DF422D90BFC13067FDA36D5DB4BFB (U3CU3Ec__DisplayClass9_0_tFA5A6CDE9007824D70A78C68EBEE3D1A55BFEC8B * __this, RuntimeObject * ____0, const RuntimeMethod* method)
{
	{
		// synchronizationContext.Post(_ => Instance.StartCoroutine(
		//             waitForUpdate), null);
		MainThreadUtil_t5C0093E7A5EC95A615FCFFB62C0135DBB840E1D0 * L_0;
		L_0 = MainThreadUtil_get_Instance_mCFF83408C438B83E56B4DDB397AF30E461D4B2CE_inline(/*hidden argument*/NULL);
		RuntimeObject* L_1 = __this->get_waitForUpdate_0();
		NullCheck(L_0);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_2;
		L_2 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(L_0, L_1, /*hidden argument*/NULL);
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
// System.Void NativeWebSocket.WaitForBackgroundThread/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mE8A174E024C2B9E0827F558556F7E46EFFC8C666 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t86F09608A4F5B7ADD94C973234164A2E9A3AB258_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t86F09608A4F5B7ADD94C973234164A2E9A3AB258 * L_0 = (U3CU3Ec_t86F09608A4F5B7ADD94C973234164A2E9A3AB258 *)il2cpp_codegen_object_new(U3CU3Ec_t86F09608A4F5B7ADD94C973234164A2E9A3AB258_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m2F2B21DFC515046F66ABF0276BAB9BB00E8A879A(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t86F09608A4F5B7ADD94C973234164A2E9A3AB258_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t86F09608A4F5B7ADD94C973234164A2E9A3AB258_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void NativeWebSocket.WaitForBackgroundThread/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m2F2B21DFC515046F66ABF0276BAB9BB00E8A879A (U3CU3Ec_t86F09608A4F5B7ADD94C973234164A2E9A3AB258 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void NativeWebSocket.WaitForBackgroundThread/<>c::<GetAwaiter>b__0_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CGetAwaiterU3Eb__0_0_m88C13AA593812ADF78936F7A6302101B0103C97C (U3CU3Ec_t86F09608A4F5B7ADD94C973234164A2E9A3AB258 * __this, const RuntimeMethod* method)
{
	{
		// return Task.Run(() => { }).ConfigureAwait(false).GetAwaiter();
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
// System.Void WaitForUpdate/<CoroutineWrapper>d__4::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCoroutineWrapperU3Ed__4__ctor_m1713DD5897E32730039727BD3D8B44C767930466 (U3CCoroutineWrapperU3Ed__4_tD49B312DE148AC0AB7B48D24D92FFFCE0599CD7F * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void WaitForUpdate/<CoroutineWrapper>d__4::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCoroutineWrapperU3Ed__4_System_IDisposable_Dispose_m661A78AF1634F3982933B12B90E949B658C54AD8 (U3CCoroutineWrapperU3Ed__4_tD49B312DE148AC0AB7B48D24D92FFFCE0599CD7F * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean WaitForUpdate/<CoroutineWrapper>d__4::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CCoroutineWrapperU3Ed__4_MoveNext_m36192552A425D9BC2BAD61BE150B1E1EE6A9374A (U3CCoroutineWrapperU3Ed__4_tD49B312DE148AC0AB7B48D24D92FFFCE0599CD7F * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_002c;
		}
	}
	{
		return (bool)0;
	}

IL_0010:
	{
		__this->set_U3CU3E1__state_0((-1));
		// yield return theWorker;
		RuntimeObject* L_3 = __this->get_theWorker_2();
		__this->set_U3CU3E2__current_1(L_3);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_002c:
	{
		__this->set_U3CU3E1__state_0((-1));
		// awaiter.Complete();
		MainThreadAwaiter_t07EC1C94003617C1B1C0EEF3FDE6C52A66F42FC1 * L_4 = __this->get_awaiter_3();
		NullCheck(L_4);
		MainThreadAwaiter_Complete_m6A82AB5D6A367C7C4A6ADCDE05C157A6942F3DCD(L_4, /*hidden argument*/NULL);
		// }
		return (bool)0;
	}
}
// System.Object WaitForUpdate/<CoroutineWrapper>d__4::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CCoroutineWrapperU3Ed__4_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mE13DD059AA55241FF39DEFB8C2ECE95D2FC87C3F (U3CCoroutineWrapperU3Ed__4_tD49B312DE148AC0AB7B48D24D92FFFCE0599CD7F * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void WaitForUpdate/<CoroutineWrapper>d__4::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCoroutineWrapperU3Ed__4_System_Collections_IEnumerator_Reset_m687AA3DF64EE887B87103EBA01DCEF81567572FF (U3CCoroutineWrapperU3Ed__4_tD49B312DE148AC0AB7B48D24D92FFFCE0599CD7F * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CCoroutineWrapperU3Ed__4_System_Collections_IEnumerator_Reset_m687AA3DF64EE887B87103EBA01DCEF81567572FF_RuntimeMethod_var)));
	}
}
// System.Object WaitForUpdate/<CoroutineWrapper>d__4::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CCoroutineWrapperU3Ed__4_System_Collections_IEnumerator_get_Current_mC09D5979C8653D21CE6E2C2505E5F5694CB9099D (U3CCoroutineWrapperU3Ed__4_tD49B312DE148AC0AB7B48D24D92FFFCE0599CD7F * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
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
// System.Boolean WaitForUpdate/MainThreadAwaiter::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MainThreadAwaiter_get_IsCompleted_m71FB3B9EB749E398BAEF85167D0A10959BFE1E27 (MainThreadAwaiter_t07EC1C94003617C1B1C0EEF3FDE6C52A66F42FC1 * __this, const RuntimeMethod* method)
{
	{
		// public bool IsCompleted { get; set; }
		bool L_0 = __this->get_U3CIsCompletedU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void WaitForUpdate/MainThreadAwaiter::set_IsCompleted(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainThreadAwaiter_set_IsCompleted_mD648A7D44B393AC9F2BF4BF4FB97C81C02175891 (MainThreadAwaiter_t07EC1C94003617C1B1C0EEF3FDE6C52A66F42FC1 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool IsCompleted { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CIsCompletedU3Ek__BackingField_1(L_0);
		return;
	}
}
// System.Void WaitForUpdate/MainThreadAwaiter::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainThreadAwaiter_GetResult_mA14349F8037CA82F2DFF7C9B0DE318017A3AA687 (MainThreadAwaiter_t07EC1C94003617C1B1C0EEF3FDE6C52A66F42FC1 * __this, const RuntimeMethod* method)
{
	{
		// public void GetResult() { }
		return;
	}
}
// System.Void WaitForUpdate/MainThreadAwaiter::Complete()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainThreadAwaiter_Complete_m6A82AB5D6A367C7C4A6ADCDE05C157A6942F3DCD (MainThreadAwaiter_t07EC1C94003617C1B1C0EEF3FDE6C52A66F42FC1 * __this, const RuntimeMethod* method)
{
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * G_B2_0 = NULL;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * G_B1_0 = NULL;
	{
		// IsCompleted = true;
		MainThreadAwaiter_set_IsCompleted_mD648A7D44B393AC9F2BF4BF4FB97C81C02175891_inline(__this, (bool)1, /*hidden argument*/NULL);
		// continuation?.Invoke();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_0 = __this->get_continuation_0();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_0012;
		}
	}
	{
		return;
	}

IL_0012:
	{
		NullCheck(G_B2_0);
		Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E(G_B2_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void WaitForUpdate/MainThreadAwaiter::System.Runtime.CompilerServices.INotifyCompletion.OnCompleted(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainThreadAwaiter_System_Runtime_CompilerServices_INotifyCompletion_OnCompleted_mF4DC4E136362A2F2684D4DE500D1F80A712D912D (MainThreadAwaiter_t07EC1C94003617C1B1C0EEF3FDE6C52A66F42FC1 * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___continuation0, const RuntimeMethod* method)
{
	{
		// this.continuation = continuation;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_0 = ___continuation0;
		__this->set_continuation_0(L_0);
		// }
		return;
	}
}
// System.Void WaitForUpdate/MainThreadAwaiter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainThreadAwaiter__ctor_m1949E3D0A7F4AD2074660D8C3BDCE14C57B257E5 (MainThreadAwaiter_t07EC1C94003617C1B1C0EEF3FDE6C52A66F42FC1 * __this, const RuntimeMethod* method)
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
// System.Void NativeWebSocket.WebSocket/<Close>d__37::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCloseU3Ed__37_MoveNext_mB73CBA9A34F9A0B40AC72A0851111B0AC5AC2D3F (U3CCloseU3Ed__37_t2B8C769B471A3E7EF033776A04F6922AC5E7DBE4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CCloseU3Ed__37_t2B8C769B471A3E7EF033776A04F6922AC5E7DBE4_m99E5BC10F103D5B68E339F73E42B2FF8B3141E3B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	WebSocket_t5FA66A4CDB32ECEC66E8A22DA5C2F3F778802646 * V_1 = NULL;
	TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Exception_t * V_3 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 3> __leave_targets;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		WebSocket_t5FA66A4CDB32ECEC66E8A22DA5C2F3F778802646 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_0064;
			}
		}

IL_0011:
		{
			// if (State == WebSocketState.Open)
			WebSocket_t5FA66A4CDB32ECEC66E8A22DA5C2F3F778802646 * L_3 = V_1;
			NullCheck(L_3);
			int32_t L_4;
			L_4 = WebSocket_get_State_m05FA846782E157A4DAD2258AAE0708074F5D6917(L_3, /*hidden argument*/NULL);
			if ((!(((uint32_t)L_4) == ((uint32_t)1))))
			{
				goto IL_0087;
			}
		}

IL_001a:
		{
			// await m_Socket.CloseAsync(WebSocketCloseStatus.NormalClosure, string.Empty, m_CancellationToken);
			WebSocket_t5FA66A4CDB32ECEC66E8A22DA5C2F3F778802646 * L_5 = V_1;
			NullCheck(L_5);
			ClientWebSocket_tA2D70722EB2DD788E27D46C7E262C85C984EEE09 * L_6 = L_5->get_m_Socket_7();
			String_t* L_7 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			WebSocket_t5FA66A4CDB32ECEC66E8A22DA5C2F3F778802646 * L_8 = V_1;
			NullCheck(L_8);
			CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  L_9 = L_8->get_m_CancellationToken_9();
			NullCheck(L_6);
			Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_10;
			L_10 = VirtFuncInvoker3< Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *, int32_t, String_t*, CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  >::Invoke(7 /* System.Threading.Tasks.Task System.Net.WebSockets.WebSocket::CloseAsync(System.Net.WebSockets.WebSocketCloseStatus,System.String,System.Threading.CancellationToken) */, L_6, ((int32_t)1000), L_7, L_9);
			NullCheck(L_10);
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_11;
			L_11 = Task_GetAwaiter_m1FF7528A8FE13F79207DFE970F642078EF6B1260(L_10, /*hidden argument*/NULL);
			V_2 = L_11;
			bool L_12;
			L_12 = TaskAwaiter_get_IsCompleted_m6F97613C55E505B5664C3C0CFC4677D296EAA8BC((TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_2), /*hidden argument*/NULL);
			if (L_12)
			{
				goto IL_0080;
			}
		}

IL_0044:
		{
			int32_t L_13 = 0;
			V_0 = L_13;
			__this->set_U3CU3E1__state_0(L_13);
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_14 = V_2;
			__this->set_U3CU3Eu__1_3(L_14);
			AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_15 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CCloseU3Ed__37_t2B8C769B471A3E7EF033776A04F6922AC5E7DBE4_m99E5BC10F103D5B68E339F73E42B2FF8B3141E3B((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_15, (TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_2), (U3CCloseU3Ed__37_t2B8C769B471A3E7EF033776A04F6922AC5E7DBE4 *)__this, /*hidden argument*/AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CCloseU3Ed__37_t2B8C769B471A3E7EF033776A04F6922AC5E7DBE4_m99E5BC10F103D5B68E339F73E42B2FF8B3141E3B_RuntimeMethod_var);
			goto IL_00b3;
		}

IL_0064:
		{
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_16 = __this->get_U3CU3Eu__1_3();
			V_2 = L_16;
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * L_17 = __this->get_address_of_U3CU3Eu__1_3();
			il2cpp_codegen_initobj(L_17, sizeof(TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C ));
			int32_t L_18 = (-1);
			V_0 = L_18;
			__this->set_U3CU3E1__state_0(L_18);
		}

IL_0080:
		{
			TaskAwaiter_GetResult_m578EEFEC4DD1AE5E77C899B8BAA3825EB79D1330((TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_2), /*hidden argument*/NULL);
		}

IL_0087:
		{
			goto IL_00a0;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0089;
		}
		throw e;
	}

CATCH_0089:
	{ // begin catch(System.Exception)
		V_3 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_19 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_20 = V_3;
		AsyncTaskMethodBuilder_SetException_m54A9FC97C33C9AC4E514923F7C58D76B94D344C4((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_19, L_20, /*hidden argument*/NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00b3;
	} // end catch (depth: 1)

IL_00a0:
	{
		// }
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_21 = __this->get_address_of_U3CU3Et__builder_1();
		AsyncTaskMethodBuilder_SetResult_m89AF7435D1B349EE8A377B5DFFC082999D9F8CD9((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_21, /*hidden argument*/NULL);
	}

IL_00b3:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CCloseU3Ed__37_MoveNext_mB73CBA9A34F9A0B40AC72A0851111B0AC5AC2D3F_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CCloseU3Ed__37_t2B8C769B471A3E7EF033776A04F6922AC5E7DBE4 * _thisAdjusted = reinterpret_cast<U3CCloseU3Ed__37_t2B8C769B471A3E7EF033776A04F6922AC5E7DBE4 *>(__this + _offset);
	U3CCloseU3Ed__37_MoveNext_mB73CBA9A34F9A0B40AC72A0851111B0AC5AC2D3F(_thisAdjusted, method);
}
// System.Void NativeWebSocket.WebSocket/<Close>d__37::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCloseU3Ed__37_SetStateMachine_mA954D7E48E7B8CE876E8BF6FEE3F261C79F5F0C9 (U3CCloseU3Ed__37_t2B8C769B471A3E7EF033776A04F6922AC5E7DBE4 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	{
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_0 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncTaskMethodBuilder_SetStateMachine_m68788E9C6C30BBAA030DEC1963E8A6C6B2C8A3E6((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CCloseU3Ed__37_SetStateMachine_mA954D7E48E7B8CE876E8BF6FEE3F261C79F5F0C9_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CCloseU3Ed__37_t2B8C769B471A3E7EF033776A04F6922AC5E7DBE4 * _thisAdjusted = reinterpret_cast<U3CCloseU3Ed__37_t2B8C769B471A3E7EF033776A04F6922AC5E7DBE4 *>(__this + _offset);
	U3CCloseU3Ed__37_SetStateMachine_mA954D7E48E7B8CE876E8BF6FEE3F261C79F5F0C9(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void NativeWebSocket.WebSocket/<Connect>d__27::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CConnectU3Ed__27_MoveNext_mA38D97807E794A41E3BF4E85ACD940DB7B28E7C8 (U3CConnectU3Ed__27_t981981F013AF3401CBA896BAF061C290E36CBBEC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CConnectU3Ed__27_t981981F013AF3401CBA896BAF061C290E36CBBEC_m326752BD3E37A144ED26B777F9010D1D5208EEEB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ClientWebSocket_tA2D70722EB2DD788E27D46C7E262C85C984EEE09_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_GetEnumerator_m8C0A038B5FA7E62DEF4DB9EF1F5FCC4348D785C5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m65A91D17CADA79F187F4D68980A9C8640B6C9FC7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m76E867298698AA2B89F9D57E21CEFCD16B372D22_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mA57D4325DBD9D10EB3E43C99CC18DB6C3CE85FC8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mCE70417061695048D84E473D50556E46B8630F54_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m45394A0B01FA26CB32851562F9CBF27DB35FF4DD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m9B0E356FA9FCFB9B1BECC6D7C5DF5C03309251AA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_m42802FFFC275E928911F87B16DFE504319DF58F1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_mB6B24D3920A4744624F8ED9AE493783D0E5F81DD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m35388695226DE2F7B0B5D0A07016716D6AD9CAEF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	WebSocket_t5FA66A4CDB32ECEC66E8A22DA5C2F3F778802646 * V_1 = NULL;
	Enumerator_tEDF5E503528903FB9B9A1D645C82789D7B8006CB  V_2;
	memset((&V_2), 0, sizeof(V_2));
	KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC  V_3;
	memset((&V_3), 0, sizeof(V_3));
	Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B  V_4;
	memset((&V_4), 0, sizeof(V_4));
	String_t* V_5 = NULL;
	TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  V_6;
	memset((&V_6), 0, sizeof(V_6));
	Exception_t * V_7 = NULL;
	Exception_t * V_8 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 9> __leave_targets;
	WebSocketOpenEventHandler_tDA44AD311FF420B05C807A25ED3C313A2D9514B0 * G_B25_0 = NULL;
	WebSocketOpenEventHandler_tDA44AD311FF420B05C807A25ED3C313A2D9514B0 * G_B24_0 = NULL;
	WebSocketErrorEventHandler_t1B9EEB799CE0D22694C37BD87CEDBDF9FB199528 * G_B32_0 = NULL;
	WebSocketErrorEventHandler_t1B9EEB799CE0D22694C37BD87CEDBDF9FB199528 * G_B31_0 = NULL;
	WebSocketCloseEventHandler_tD2F6193A42EB71C99D482FC38E4EC30825567A12 * G_B35_0 = NULL;
	WebSocketCloseEventHandler_tD2F6193A42EB71C99D482FC38E4EC30825567A12 * G_B34_0 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		WebSocket_t5FA66A4CDB32ECEC66E8A22DA5C2F3F778802646 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_2 = V_0;
		}

IL_0013:
		try
		{ // begin try (depth: 2)
			try
			{ // begin try (depth: 3)
				{
					int32_t L_3 = V_0;
					if (!L_3)
					{
						goto IL_012a;
					}
				}

IL_0019:
				{
					int32_t L_4 = V_0;
					if ((((int32_t)L_4) == ((int32_t)1)))
					{
						goto IL_0199;
					}
				}

IL_0020:
				{
					// m_TokenSource = new CancellationTokenSource();
					WebSocket_t5FA66A4CDB32ECEC66E8A22DA5C2F3F778802646 * L_5 = V_1;
					CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * L_6 = (CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 *)il2cpp_codegen_object_new(CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3_il2cpp_TypeInfo_var);
					CancellationTokenSource__ctor_mC30FDC4F672A8495141CC213126B7FEA2A1BDCEB(L_6, /*hidden argument*/NULL);
					NullCheck(L_5);
					L_5->set_m_TokenSource_8(L_6);
					// m_CancellationToken = m_TokenSource.Token;
					WebSocket_t5FA66A4CDB32ECEC66E8A22DA5C2F3F778802646 * L_7 = V_1;
					WebSocket_t5FA66A4CDB32ECEC66E8A22DA5C2F3F778802646 * L_8 = V_1;
					NullCheck(L_8);
					CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * L_9 = L_8->get_m_TokenSource_8();
					NullCheck(L_9);
					CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  L_10;
					L_10 = CancellationTokenSource_get_Token_m2A9A82BA3532B89870363E8C1DEAE2F1EFD3962C(L_9, /*hidden argument*/NULL);
					NullCheck(L_7);
					L_7->set_m_CancellationToken_9(L_10);
					// m_Socket = new ClientWebSocket();
					WebSocket_t5FA66A4CDB32ECEC66E8A22DA5C2F3F778802646 * L_11 = V_1;
					ClientWebSocket_tA2D70722EB2DD788E27D46C7E262C85C984EEE09 * L_12 = (ClientWebSocket_tA2D70722EB2DD788E27D46C7E262C85C984EEE09 *)il2cpp_codegen_object_new(ClientWebSocket_tA2D70722EB2DD788E27D46C7E262C85C984EEE09_il2cpp_TypeInfo_var);
					ClientWebSocket__ctor_m8857DF54323F6C7B663F85AAAD2A0DB7CF79FC06(L_12, /*hidden argument*/NULL);
					NullCheck(L_11);
					L_11->set_m_Socket_7(L_12);
					// foreach (var header in headers)
					WebSocket_t5FA66A4CDB32ECEC66E8A22DA5C2F3F778802646 * L_13 = V_1;
					NullCheck(L_13);
					Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_14 = L_13->get_headers_5();
					NullCheck(L_14);
					Enumerator_tEDF5E503528903FB9B9A1D645C82789D7B8006CB  L_15;
					L_15 = Dictionary_2_GetEnumerator_m8C0A038B5FA7E62DEF4DB9EF1F5FCC4348D785C5(L_14, /*hidden argument*/Dictionary_2_GetEnumerator_m8C0A038B5FA7E62DEF4DB9EF1F5FCC4348D785C5_RuntimeMethod_var);
					V_2 = L_15;
				}

IL_0053:
				try
				{ // begin try (depth: 4)
					{
						goto IL_007b;
					}

IL_0055:
					{
						// foreach (var header in headers)
						KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC  L_16;
						L_16 = Enumerator_get_Current_m45394A0B01FA26CB32851562F9CBF27DB35FF4DD_inline((Enumerator_tEDF5E503528903FB9B9A1D645C82789D7B8006CB *)(&V_2), /*hidden argument*/Enumerator_get_Current_m45394A0B01FA26CB32851562F9CBF27DB35FF4DD_RuntimeMethod_var);
						V_3 = L_16;
						// m_Socket.Options.SetRequestHeader(header.Key, header.Value);
						WebSocket_t5FA66A4CDB32ECEC66E8A22DA5C2F3F778802646 * L_17 = V_1;
						NullCheck(L_17);
						ClientWebSocket_tA2D70722EB2DD788E27D46C7E262C85C984EEE09 * L_18 = L_17->get_m_Socket_7();
						NullCheck(L_18);
						ClientWebSocketOptions_t542669394208DA09FBC06141585E0CA380ACEC85 * L_19;
						L_19 = ClientWebSocket_get_Options_m18F5E10870627D19E76D2B8D6F64E5076EC9D78C_inline(L_18, /*hidden argument*/NULL);
						String_t* L_20;
						L_20 = KeyValuePair_2_get_Key_m42802FFFC275E928911F87B16DFE504319DF58F1_inline((KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC *)(&V_3), /*hidden argument*/KeyValuePair_2_get_Key_m42802FFFC275E928911F87B16DFE504319DF58F1_RuntimeMethod_var);
						String_t* L_21;
						L_21 = KeyValuePair_2_get_Value_mB6B24D3920A4744624F8ED9AE493783D0E5F81DD_inline((KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC *)(&V_3), /*hidden argument*/KeyValuePair_2_get_Value_mB6B24D3920A4744624F8ED9AE493783D0E5F81DD_RuntimeMethod_var);
						NullCheck(L_19);
						ClientWebSocketOptions_SetRequestHeader_m39396A44A4B7DE02CBC69FB0EDE5E4B0699E52C7(L_19, L_20, L_21, /*hidden argument*/NULL);
					}

IL_007b:
					{
						// foreach (var header in headers)
						bool L_22;
						L_22 = Enumerator_MoveNext_mA57D4325DBD9D10EB3E43C99CC18DB6C3CE85FC8((Enumerator_tEDF5E503528903FB9B9A1D645C82789D7B8006CB *)(&V_2), /*hidden argument*/Enumerator_MoveNext_mA57D4325DBD9D10EB3E43C99CC18DB6C3CE85FC8_RuntimeMethod_var);
						if (L_22)
						{
							goto IL_0055;
						}
					}

IL_0084:
					{
						IL2CPP_LEAVE(0x98, FINALLY_0086);
					}
				} // end try (depth: 4)
				catch(Il2CppExceptionWrapper& e)
				{
					__last_unhandled_exception = (Exception_t *)e.ex;
					goto FINALLY_0086;
				}

FINALLY_0086:
				{ // begin finally (depth: 4)
					{
						int32_t L_23 = V_0;
						if ((((int32_t)L_23) >= ((int32_t)0)))
						{
							goto IL_0097;
						}
					}

IL_008a:
					{
						Enumerator_Dispose_m76E867298698AA2B89F9D57E21CEFCD16B372D22((Enumerator_tEDF5E503528903FB9B9A1D645C82789D7B8006CB *)(&V_2), /*hidden argument*/Enumerator_Dispose_m76E867298698AA2B89F9D57E21CEFCD16B372D22_RuntimeMethod_var);
					}

IL_0097:
					{
						IL2CPP_END_FINALLY(134)
					}
				} // end finally (depth: 4)
				IL2CPP_CLEANUP(134)
				{
					IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
					IL2CPP_JUMP_TBL(0x98, IL_0098)
				}

IL_0098:
				{
					// foreach (string subprotocol in subprotocols) {
					WebSocket_t5FA66A4CDB32ECEC66E8A22DA5C2F3F778802646 * L_24 = V_1;
					NullCheck(L_24);
					List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_25 = L_24->get_subprotocols_6();
					NullCheck(L_25);
					Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B  L_26;
					L_26 = List_1_GetEnumerator_m35388695226DE2F7B0B5D0A07016716D6AD9CAEF(L_25, /*hidden argument*/List_1_GetEnumerator_m35388695226DE2F7B0B5D0A07016716D6AD9CAEF_RuntimeMethod_var);
					V_4 = L_26;
				}

IL_00a5:
				try
				{ // begin try (depth: 4)
					{
						goto IL_00c2;
					}

IL_00a7:
					{
						// foreach (string subprotocol in subprotocols) {
						String_t* L_27;
						L_27 = Enumerator_get_Current_m9B0E356FA9FCFB9B1BECC6D7C5DF5C03309251AA_inline((Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B *)(&V_4), /*hidden argument*/Enumerator_get_Current_m9B0E356FA9FCFB9B1BECC6D7C5DF5C03309251AA_RuntimeMethod_var);
						V_5 = L_27;
						// m_Socket.Options.AddSubProtocol(subprotocol);
						WebSocket_t5FA66A4CDB32ECEC66E8A22DA5C2F3F778802646 * L_28 = V_1;
						NullCheck(L_28);
						ClientWebSocket_tA2D70722EB2DD788E27D46C7E262C85C984EEE09 * L_29 = L_28->get_m_Socket_7();
						NullCheck(L_29);
						ClientWebSocketOptions_t542669394208DA09FBC06141585E0CA380ACEC85 * L_30;
						L_30 = ClientWebSocket_get_Options_m18F5E10870627D19E76D2B8D6F64E5076EC9D78C_inline(L_29, /*hidden argument*/NULL);
						String_t* L_31 = V_5;
						NullCheck(L_30);
						ClientWebSocketOptions_AddSubProtocol_mA593BFE6189EDA508CE3BBF95FFB3592016BC945(L_30, L_31, /*hidden argument*/NULL);
					}

IL_00c2:
					{
						// foreach (string subprotocol in subprotocols) {
						bool L_32;
						L_32 = Enumerator_MoveNext_mCE70417061695048D84E473D50556E46B8630F54((Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B *)(&V_4), /*hidden argument*/Enumerator_MoveNext_mCE70417061695048D84E473D50556E46B8630F54_RuntimeMethod_var);
						if (L_32)
						{
							goto IL_00a7;
						}
					}

IL_00cb:
					{
						IL2CPP_LEAVE(0xDF, FINALLY_00cd);
					}
				} // end try (depth: 4)
				catch(Il2CppExceptionWrapper& e)
				{
					__last_unhandled_exception = (Exception_t *)e.ex;
					goto FINALLY_00cd;
				}

FINALLY_00cd:
				{ // begin finally (depth: 4)
					{
						int32_t L_33 = V_0;
						if ((((int32_t)L_33) >= ((int32_t)0)))
						{
							goto IL_00de;
						}
					}

IL_00d1:
					{
						Enumerator_Dispose_m65A91D17CADA79F187F4D68980A9C8640B6C9FC7((Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B *)(&V_4), /*hidden argument*/Enumerator_Dispose_m65A91D17CADA79F187F4D68980A9C8640B6C9FC7_RuntimeMethod_var);
					}

IL_00de:
					{
						IL2CPP_END_FINALLY(205)
					}
				} // end finally (depth: 4)
				IL2CPP_CLEANUP(205)
				{
					IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
					IL2CPP_JUMP_TBL(0xDF, IL_00df)
				}

IL_00df:
				{
					// await m_Socket.ConnectAsync(uri, m_CancellationToken);
					WebSocket_t5FA66A4CDB32ECEC66E8A22DA5C2F3F778802646 * L_34 = V_1;
					NullCheck(L_34);
					ClientWebSocket_tA2D70722EB2DD788E27D46C7E262C85C984EEE09 * L_35 = L_34->get_m_Socket_7();
					WebSocket_t5FA66A4CDB32ECEC66E8A22DA5C2F3F778802646 * L_36 = V_1;
					NullCheck(L_36);
					Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_37 = L_36->get_uri_4();
					WebSocket_t5FA66A4CDB32ECEC66E8A22DA5C2F3F778802646 * L_38 = V_1;
					NullCheck(L_38);
					CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  L_39 = L_38->get_m_CancellationToken_9();
					NullCheck(L_35);
					Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_40;
					L_40 = ClientWebSocket_ConnectAsync_m2FF7047AC718D6181EF7E3840543DB645089D72D(L_35, L_37, L_39, /*hidden argument*/NULL);
					NullCheck(L_40);
					TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_41;
					L_41 = Task_GetAwaiter_m1FF7528A8FE13F79207DFE970F642078EF6B1260(L_40, /*hidden argument*/NULL);
					V_6 = L_41;
					bool L_42;
					L_42 = TaskAwaiter_get_IsCompleted_m6F97613C55E505B5664C3C0CFC4677D296EAA8BC((TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_6), /*hidden argument*/NULL);
					if (L_42)
					{
						goto IL_0147;
					}
				}

IL_0106:
				{
					int32_t L_43 = 0;
					V_0 = L_43;
					__this->set_U3CU3E1__state_0(L_43);
					TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_44 = V_6;
					__this->set_U3CU3Eu__1_3(L_44);
					AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_45 = __this->get_address_of_U3CU3Et__builder_1();
					AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CConnectU3Ed__27_t981981F013AF3401CBA896BAF061C290E36CBBEC_m326752BD3E37A144ED26B777F9010D1D5208EEEB((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_45, (TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_6), (U3CConnectU3Ed__27_t981981F013AF3401CBA896BAF061C290E36CBBEC *)__this, /*hidden argument*/AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CConnectU3Ed__27_t981981F013AF3401CBA896BAF061C290E36CBBEC_m326752BD3E37A144ED26B777F9010D1D5208EEEB_RuntimeMethod_var);
					IL2CPP_LEAVE(0x244, FINALLY_01f3);
				}

IL_012a:
				{
					TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_46 = __this->get_U3CU3Eu__1_3();
					V_6 = L_46;
					TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * L_47 = __this->get_address_of_U3CU3Eu__1_3();
					il2cpp_codegen_initobj(L_47, sizeof(TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C ));
					int32_t L_48 = (-1);
					V_0 = L_48;
					__this->set_U3CU3E1__state_0(L_48);
				}

IL_0147:
				{
					TaskAwaiter_GetResult_m578EEFEC4DD1AE5E77C899B8BAA3825EB79D1330((TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_6), /*hidden argument*/NULL);
					// OnOpen?.Invoke();
					WebSocket_t5FA66A4CDB32ECEC66E8A22DA5C2F3F778802646 * L_49 = V_1;
					NullCheck(L_49);
					WebSocketOpenEventHandler_tDA44AD311FF420B05C807A25ED3C313A2D9514B0 * L_50 = L_49->get_OnOpen_0();
					WebSocketOpenEventHandler_tDA44AD311FF420B05C807A25ED3C313A2D9514B0 * L_51 = L_50;
					G_B24_0 = L_51;
					if (L_51)
					{
						G_B25_0 = L_51;
						goto IL_015a;
					}
				}

IL_0157:
				{
					goto IL_015f;
				}

IL_015a:
				{
					NullCheck(G_B25_0);
					WebSocketOpenEventHandler_Invoke_m0B7AC1A32BF46548E2CCFB62EF49B90A467319DA(G_B25_0, /*hidden argument*/NULL);
				}

IL_015f:
				{
					// await Receive();
					WebSocket_t5FA66A4CDB32ECEC66E8A22DA5C2F3F778802646 * L_52 = V_1;
					NullCheck(L_52);
					Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_53;
					L_53 = WebSocket_Receive_m50315FDED6E66BAD5813963D1635146C8EF0CC31(L_52, /*hidden argument*/NULL);
					NullCheck(L_53);
					TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_54;
					L_54 = Task_GetAwaiter_m1FF7528A8FE13F79207DFE970F642078EF6B1260(L_53, /*hidden argument*/NULL);
					V_6 = L_54;
					bool L_55;
					L_55 = TaskAwaiter_get_IsCompleted_m6F97613C55E505B5664C3C0CFC4677D296EAA8BC((TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_6), /*hidden argument*/NULL);
					if (L_55)
					{
						goto IL_01b6;
					}
				}

IL_0175:
				{
					int32_t L_56 = 1;
					V_0 = L_56;
					__this->set_U3CU3E1__state_0(L_56);
					TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_57 = V_6;
					__this->set_U3CU3Eu__1_3(L_57);
					AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_58 = __this->get_address_of_U3CU3Et__builder_1();
					AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CConnectU3Ed__27_t981981F013AF3401CBA896BAF061C290E36CBBEC_m326752BD3E37A144ED26B777F9010D1D5208EEEB((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_58, (TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_6), (U3CConnectU3Ed__27_t981981F013AF3401CBA896BAF061C290E36CBBEC *)__this, /*hidden argument*/AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CConnectU3Ed__27_t981981F013AF3401CBA896BAF061C290E36CBBEC_m326752BD3E37A144ED26B777F9010D1D5208EEEB_RuntimeMethod_var);
					IL2CPP_LEAVE(0x244, FINALLY_01f3);
				}

IL_0199:
				{
					TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_59 = __this->get_U3CU3Eu__1_3();
					V_6 = L_59;
					TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * L_60 = __this->get_address_of_U3CU3Eu__1_3();
					il2cpp_codegen_initobj(L_60, sizeof(TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C ));
					int32_t L_61 = (-1);
					V_0 = L_61;
					__this->set_U3CU3E1__state_0(L_61);
				}

IL_01b6:
				{
					TaskAwaiter_GetResult_m578EEFEC4DD1AE5E77C899B8BAA3825EB79D1330((TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_6), /*hidden argument*/NULL);
					// }
					goto IL_01f1;
				}
			} // end try (depth: 3)
			catch(Il2CppExceptionWrapper& e)
			{
				if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
				{
					IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
					goto CATCH_01bf;
				}
				throw e;
			}

CATCH_01bf:
			{ // begin catch(System.Exception)
				{
					// catch (Exception ex)
					V_7 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
					// OnError?.Invoke(ex.Message);
					WebSocket_t5FA66A4CDB32ECEC66E8A22DA5C2F3F778802646 * L_62 = V_1;
					NullCheck(L_62);
					WebSocketErrorEventHandler_t1B9EEB799CE0D22694C37BD87CEDBDF9FB199528 * L_63 = L_62->get_OnError_2();
					WebSocketErrorEventHandler_t1B9EEB799CE0D22694C37BD87CEDBDF9FB199528 * L_64 = L_63;
					G_B31_0 = L_64;
					if (L_64)
					{
						G_B32_0 = L_64;
						goto IL_01cd;
					}
				}

IL_01ca:
				{
					goto IL_01d9;
				}

IL_01cd:
				{
					Exception_t * L_65 = V_7;
					NullCheck(L_65);
					String_t* L_66;
					L_66 = VirtFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_65);
					NullCheck(G_B32_0);
					WebSocketErrorEventHandler_Invoke_mDA8A42C5C77F34DB31A6B07D5A59F72C94F98728(G_B32_0, L_66, /*hidden argument*/NULL);
				}

IL_01d9:
				{
					// OnClose?.Invoke(WebSocketCloseCode.Abnormal);
					WebSocket_t5FA66A4CDB32ECEC66E8A22DA5C2F3F778802646 * L_67 = V_1;
					NullCheck(L_67);
					WebSocketCloseEventHandler_tD2F6193A42EB71C99D482FC38E4EC30825567A12 * L_68 = L_67->get_OnClose_3();
					WebSocketCloseEventHandler_tD2F6193A42EB71C99D482FC38E4EC30825567A12 * L_69 = L_68;
					G_B34_0 = L_69;
					if (L_69)
					{
						G_B35_0 = L_69;
						goto IL_01e5;
					}
				}

IL_01e2:
				{
					goto IL_01ef;
				}

IL_01e5:
				{
					NullCheck(G_B35_0);
					WebSocketCloseEventHandler_Invoke_mA421ED8AEB852C58D6A2657DD1CFD33D9ABA343D(G_B35_0, ((int32_t)1006), /*hidden argument*/NULL);
				}

IL_01ef:
				{
					// }
					IL2CPP_POP_ACTIVE_EXCEPTION();
					goto IL_01f1;
				}
			} // end catch (depth: 3)

IL_01f1:
			{
				IL2CPP_LEAVE(0x216, FINALLY_01f3);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_01f3;
		}

FINALLY_01f3:
		{ // begin finally (depth: 2)
			{
				int32_t L_70 = V_0;
				if ((((int32_t)L_70) >= ((int32_t)0)))
				{
					goto IL_0215;
				}
			}

IL_01f7:
			{
				// if (m_Socket != null)
				WebSocket_t5FA66A4CDB32ECEC66E8A22DA5C2F3F778802646 * L_71 = V_1;
				NullCheck(L_71);
				ClientWebSocket_tA2D70722EB2DD788E27D46C7E262C85C984EEE09 * L_72 = L_71->get_m_Socket_7();
				if (!L_72)
				{
					goto IL_0215;
				}
			}

IL_01ff:
			{
				// m_TokenSource.Cancel();
				WebSocket_t5FA66A4CDB32ECEC66E8A22DA5C2F3F778802646 * L_73 = V_1;
				NullCheck(L_73);
				CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * L_74 = L_73->get_m_TokenSource_8();
				NullCheck(L_74);
				CancellationTokenSource_Cancel_m2D87D42962FF166576B4FB3A34DF5C07F4AECEF1(L_74, /*hidden argument*/NULL);
				// m_Socket.Dispose();
				WebSocket_t5FA66A4CDB32ECEC66E8A22DA5C2F3F778802646 * L_75 = V_1;
				NullCheck(L_75);
				ClientWebSocket_tA2D70722EB2DD788E27D46C7E262C85C984EEE09 * L_76 = L_75->get_m_Socket_7();
				NullCheck(L_76);
				VirtActionInvoker0::Invoke(9 /* System.Void System.Net.WebSockets.WebSocket::Dispose() */, L_76);
			}

IL_0215:
			{
				IL2CPP_END_FINALLY(499)
			}
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(499)
		{
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
			IL2CPP_JUMP_TBL(0x244, IL_0244)
			IL2CPP_JUMP_TBL(0x216, IL_0216)
		}

IL_0216:
		{
			goto IL_0231;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0218;
		}
		throw e;
	}

CATCH_0218:
	{ // begin catch(System.Exception)
		V_8 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_77 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_78 = V_8;
		AsyncTaskMethodBuilder_SetException_m54A9FC97C33C9AC4E514923F7C58D76B94D344C4((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_77, L_78, /*hidden argument*/NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0244;
	} // end catch (depth: 1)

IL_0231:
	{
		// }
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_79 = __this->get_address_of_U3CU3Et__builder_1();
		AsyncTaskMethodBuilder_SetResult_m89AF7435D1B349EE8A377B5DFFC082999D9F8CD9((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_79, /*hidden argument*/NULL);
	}

IL_0244:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CConnectU3Ed__27_MoveNext_mA38D97807E794A41E3BF4E85ACD940DB7B28E7C8_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CConnectU3Ed__27_t981981F013AF3401CBA896BAF061C290E36CBBEC * _thisAdjusted = reinterpret_cast<U3CConnectU3Ed__27_t981981F013AF3401CBA896BAF061C290E36CBBEC *>(__this + _offset);
	U3CConnectU3Ed__27_MoveNext_mA38D97807E794A41E3BF4E85ACD940DB7B28E7C8(_thisAdjusted, method);
}
// System.Void NativeWebSocket.WebSocket/<Connect>d__27::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CConnectU3Ed__27_SetStateMachine_m07CDB5F5DADC999757DAEBABE375D2C8918C977A (U3CConnectU3Ed__27_t981981F013AF3401CBA896BAF061C290E36CBBEC * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	{
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_0 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncTaskMethodBuilder_SetStateMachine_m68788E9C6C30BBAA030DEC1963E8A6C6B2C8A3E6((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CConnectU3Ed__27_SetStateMachine_m07CDB5F5DADC999757DAEBABE375D2C8918C977A_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CConnectU3Ed__27_t981981F013AF3401CBA896BAF061C290E36CBBEC * _thisAdjusted = reinterpret_cast<U3CConnectU3Ed__27_t981981F013AF3401CBA896BAF061C290E36CBBEC *>(__this + _offset);
	U3CConnectU3Ed__27_SetStateMachine_m07CDB5F5DADC999757DAEBABE375D2C8918C977A(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void NativeWebSocket.WebSocket/<HandleQueue>d__33::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CHandleQueueU3Ed__33_MoveNext_mA951AB749CC766F13FD5C1CDB8AA04410AA9624C (U3CHandleQueueU3Ed__33_t195271007DF8F3318A09DD491A9A5408DA560F40 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArraySegment_1_get_Count_mC13AC26CCFD0EACBCC08F24F2A7BB22841B44C32_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CHandleQueueU3Ed__33_t195271007DF8F3318A09DD491A9A5408DA560F40_mC5107023865B64E42C84456A9A570F6EA05529E8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_RemoveAt_mEE8557B501BCCCDFD7BA8563504405FC81A65957_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m7D8A7D7BE06561F4695456CA5B4696E85DD6C84B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mBB7B78C8411D5DB18818B1BD99D1D4E29F2EF39B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	WebSocket_t5FA66A4CDB32ECEC66E8A22DA5C2F3F778802646 * V_1 = NULL;
	ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  V_2;
	memset((&V_2), 0, sizeof(V_2));
	RuntimeObject * V_3 = NULL;
	bool V_4 = false;
	TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  V_5;
	memset((&V_5), 0, sizeof(V_5));
	Exception_t * V_6 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 4> __leave_targets;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		WebSocket_t5FA66A4CDB32ECEC66E8A22DA5C2F3F778802646 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_00b4;
			}
		}

IL_0014:
		{
			// var buffer = new ArraySegment<byte>();
			il2cpp_codegen_initobj((&V_2), sizeof(ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE ));
			// lock (OutgoingMessageLock)
			WebSocket_t5FA66A4CDB32ECEC66E8A22DA5C2F3F778802646 * L_3 = V_1;
			NullCheck(L_3);
			RuntimeObject * L_4 = L_3->get_OutgoingMessageLock_10();
			V_3 = L_4;
			V_4 = (bool)0;
		}

IL_0026:
		try
		{ // begin try (depth: 2)
			{
				RuntimeObject * L_5 = V_3;
				Monitor_Enter_mBEB6CC84184B46F26375EC3FC8921D16E48EA4C4(L_5, (bool*)(&V_4), /*hidden argument*/NULL);
				// if (queue.Count > 0)
				List_1_tAC5780506F34558E53CD51BF8B2E6633C667059B * L_6 = __this->get_queue_3();
				NullCheck(L_6);
				int32_t L_7;
				L_7 = List_1_get_Count_m7D8A7D7BE06561F4695456CA5B4696E85DD6C84B_inline(L_6, /*hidden argument*/List_1_get_Count_m7D8A7D7BE06561F4695456CA5B4696E85DD6C84B_RuntimeMethod_var);
				if ((((int32_t)L_7) <= ((int32_t)0)))
				{
					goto IL_0055;
				}
			}

IL_003c:
			{
				// buffer = queue[0];
				List_1_tAC5780506F34558E53CD51BF8B2E6633C667059B * L_8 = __this->get_queue_3();
				NullCheck(L_8);
				ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  L_9;
				L_9 = List_1_get_Item_mBB7B78C8411D5DB18818B1BD99D1D4E29F2EF39B_inline(L_8, 0, /*hidden argument*/List_1_get_Item_mBB7B78C8411D5DB18818B1BD99D1D4E29F2EF39B_RuntimeMethod_var);
				V_2 = L_9;
				// queue.RemoveAt(0);
				List_1_tAC5780506F34558E53CD51BF8B2E6633C667059B * L_10 = __this->get_queue_3();
				NullCheck(L_10);
				List_1_RemoveAt_mEE8557B501BCCCDFD7BA8563504405FC81A65957(L_10, 0, /*hidden argument*/List_1_RemoveAt_mEE8557B501BCCCDFD7BA8563504405FC81A65957_RuntimeMethod_var);
			}

IL_0055:
			{
				// }
				IL2CPP_LEAVE(0x66, FINALLY_0057);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_0057;
		}

FINALLY_0057:
		{ // begin finally (depth: 2)
			{
				int32_t L_11 = V_0;
				if ((((int32_t)L_11) >= ((int32_t)0)))
				{
					goto IL_0065;
				}
			}

IL_005b:
			{
				bool L_12 = V_4;
				if (!L_12)
				{
					goto IL_0065;
				}
			}

IL_005f:
			{
				RuntimeObject * L_13 = V_3;
				Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_13, /*hidden argument*/NULL);
			}

IL_0065:
			{
				IL2CPP_END_FINALLY(87)
			}
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(87)
		{
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
			IL2CPP_JUMP_TBL(0x66, IL_0066)
		}

IL_0066:
		{
			// if (buffer.Count > 0)
			int32_t L_14;
			L_14 = ArraySegment_1_get_Count_mC13AC26CCFD0EACBCC08F24F2A7BB22841B44C32_inline((ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE *)(&V_2), /*hidden argument*/ArraySegment_1_get_Count_mC13AC26CCFD0EACBCC08F24F2A7BB22841B44C32_RuntimeMethod_var);
			if ((((int32_t)L_14) <= ((int32_t)0)))
			{
				goto IL_00d8;
			}
		}

IL_0070:
		{
			// await SendMessage(queue, messageType, buffer);
			WebSocket_t5FA66A4CDB32ECEC66E8A22DA5C2F3F778802646 * L_15 = V_1;
			List_1_tAC5780506F34558E53CD51BF8B2E6633C667059B * L_16 = __this->get_queue_3();
			int32_t L_17 = __this->get_messageType_4();
			ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  L_18 = V_2;
			NullCheck(L_15);
			Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_19;
			L_19 = WebSocket_SendMessage_mFDCD6FBE6DC5EE7DF135A3D0D03FB48C1D57B11A(L_15, L_16, L_17, L_18, /*hidden argument*/NULL);
			NullCheck(L_19);
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_20;
			L_20 = Task_GetAwaiter_m1FF7528A8FE13F79207DFE970F642078EF6B1260(L_19, /*hidden argument*/NULL);
			V_5 = L_20;
			bool L_21;
			L_21 = TaskAwaiter_get_IsCompleted_m6F97613C55E505B5664C3C0CFC4677D296EAA8BC((TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_5), /*hidden argument*/NULL);
			if (L_21)
			{
				goto IL_00d1;
			}
		}

IL_0093:
		{
			int32_t L_22 = 0;
			V_0 = L_22;
			__this->set_U3CU3E1__state_0(L_22);
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_23 = V_5;
			__this->set_U3CU3Eu__1_5(L_23);
			AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_24 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CHandleQueueU3Ed__33_t195271007DF8F3318A09DD491A9A5408DA560F40_mC5107023865B64E42C84456A9A570F6EA05529E8((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_24, (TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_5), (U3CHandleQueueU3Ed__33_t195271007DF8F3318A09DD491A9A5408DA560F40 *)__this, /*hidden argument*/AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CHandleQueueU3Ed__33_t195271007DF8F3318A09DD491A9A5408DA560F40_mC5107023865B64E42C84456A9A570F6EA05529E8_RuntimeMethod_var);
			goto IL_0106;
		}

IL_00b4:
		{
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_25 = __this->get_U3CU3Eu__1_5();
			V_5 = L_25;
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * L_26 = __this->get_address_of_U3CU3Eu__1_5();
			il2cpp_codegen_initobj(L_26, sizeof(TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C ));
			int32_t L_27 = (-1);
			V_0 = L_27;
			__this->set_U3CU3E1__state_0(L_27);
		}

IL_00d1:
		{
			TaskAwaiter_GetResult_m578EEFEC4DD1AE5E77C899B8BAA3825EB79D1330((TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_5), /*hidden argument*/NULL);
		}

IL_00d8:
		{
			goto IL_00f3;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00da;
		}
		throw e;
	}

CATCH_00da:
	{ // begin catch(System.Exception)
		V_6 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_28 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_29 = V_6;
		AsyncTaskMethodBuilder_SetException_m54A9FC97C33C9AC4E514923F7C58D76B94D344C4((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_28, L_29, /*hidden argument*/NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0106;
	} // end catch (depth: 1)

IL_00f3:
	{
		// }
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_30 = __this->get_address_of_U3CU3Et__builder_1();
		AsyncTaskMethodBuilder_SetResult_m89AF7435D1B349EE8A377B5DFFC082999D9F8CD9((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_30, /*hidden argument*/NULL);
	}

IL_0106:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CHandleQueueU3Ed__33_MoveNext_mA951AB749CC766F13FD5C1CDB8AA04410AA9624C_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CHandleQueueU3Ed__33_t195271007DF8F3318A09DD491A9A5408DA560F40 * _thisAdjusted = reinterpret_cast<U3CHandleQueueU3Ed__33_t195271007DF8F3318A09DD491A9A5408DA560F40 *>(__this + _offset);
	U3CHandleQueueU3Ed__33_MoveNext_mA951AB749CC766F13FD5C1CDB8AA04410AA9624C(_thisAdjusted, method);
}
// System.Void NativeWebSocket.WebSocket/<HandleQueue>d__33::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CHandleQueueU3Ed__33_SetStateMachine_mF1283D57FB75C905A87D60DA2CE99EBFC22E7BF6 (U3CHandleQueueU3Ed__33_t195271007DF8F3318A09DD491A9A5408DA560F40 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	{
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_0 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncTaskMethodBuilder_SetStateMachine_m68788E9C6C30BBAA030DEC1963E8A6C6B2C8A3E6((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CHandleQueueU3Ed__33_SetStateMachine_mF1283D57FB75C905A87D60DA2CE99EBFC22E7BF6_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CHandleQueueU3Ed__33_t195271007DF8F3318A09DD491A9A5408DA560F40 * _thisAdjusted = reinterpret_cast<U3CHandleQueueU3Ed__33_t195271007DF8F3318A09DD491A9A5408DA560F40 *>(__this + _offset);
	U3CHandleQueueU3Ed__33_SetStateMachine_mF1283D57FB75C905A87D60DA2CE99EBFC22E7BF6(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void NativeWebSocket.WebSocket/<Receive>d__36::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CReceiveU3Ed__36_MoveNext_m86AB6017D86F2DC7F0CD07ED2DD279E33852F576 (U3CReceiveU3Ed__36_tAD99CF678583A10E2AD64335EB851ABC77878E0C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArraySegment_1__ctor_mB8E7E8D50D7933AF431552AB0D1B93FA747CC151_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArraySegment_1_get_Array_m3D83A2CFF4D51F8ED83C89538616FF0A700F463C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArraySegment_1_get_Offset_m13F255A2A7A730982F330A448FCB32239782C505_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_AwaitOnCompleted_TisMainThreadAwaiter_t07EC1C94003617C1B1C0EEF3FDE6C52A66F42FC1_TisU3CReceiveU3Ed__36_tAD99CF678583A10E2AD64335EB851ABC77878E0C_mEAE25AD68DB3ACBEC79C6C1800AA1FE4DE7AA0B4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C_TisU3CReceiveU3Ed__36_tAD99CF678583A10E2AD64335EB851ABC77878E0C_m9870273794D79F8F0FCF35325F6C18344C121011_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tE7CEF18367E979C3A40489CF01B7F0C9D2DC7FD6_TisU3CReceiveU3Ed__36_tAD99CF678583A10E2AD64335EB851ABC77878E0C_m09DFAB6318BD6894F5593C2B7AE0A92F1D2ABF50_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CReceiveU3Ed__36_tAD99CF678583A10E2AD64335EB851ABC77878E0C_m9F54F113924E225A0E68DFEBB7AC3DD40796D886_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mE2D42E8F87548101921C1F2DAA810601D3D70904_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MainThreadAwaiter_t07EC1C94003617C1B1C0EEF3FDE6C52A66F42FC1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_Value_m7DB9FB5C8C333030A091B400CB163A9A28A17634_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_GetResult_mCDCAAF89F5D74175A37B6E9F507C970EDAF07B97_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_get_IsCompleted_m2D13C0370C28B8EA4406A35F0A8BC012DF3C8537_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_GetAwaiter_m46A488400364A14C5B4A6B616BD7A1BB08927520_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForBackgroundThread_t8C5103639A29F371BDBADD1375E435C26BD1F00B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForUpdate_t0977047DBECB52C15D8149E0817A0DCD8F2ECDA2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	WebSocket_t5FA66A4CDB32ECEC66E8A22DA5C2F3F778802646 * V_1 = NULL;
	ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C  V_2;
	memset((&V_2), 0, sizeof(V_2));
	WebSocketReceiveResult_tEB9BD882DB3C2B94DFDA4655DAD6DFD2DDF85122 * V_3 = NULL;
	TaskAwaiter_1_tE7CEF18367E979C3A40489CF01B7F0C9D2DC7FD6  V_4;
	memset((&V_4), 0, sizeof(V_4));
	RuntimeObject * V_5 = NULL;
	bool V_6 = false;
	TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  V_7;
	memset((&V_7), 0, sizeof(V_7));
	Nullable_1_tEEF07CE805E86A33961C7C0AE095FA4A628605C6  V_8;
	memset((&V_8), 0, sizeof(V_8));
	MainThreadAwaiter_t07EC1C94003617C1B1C0EEF3FDE6C52A66F42FC1 * V_9 = NULL;
	Exception_t * V_10 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 3> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 14> __leave_targets;
	WebSocketCloseEventHandler_tD2F6193A42EB71C99D482FC38E4EC30825567A12 * G_B53_0 = NULL;
	WebSocketCloseEventHandler_tD2F6193A42EB71C99D482FC38E4EC30825567A12 * G_B52_0 = NULL;
	Exception_t * G_B57_0 = NULL;
	Exception_t * G_B56_0 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		WebSocket_t5FA66A4CDB32ECEC66E8A22DA5C2F3F778802646 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			switch (L_2)
			{
				case 0:
				{
					goto IL_0066;
				}
				case 1:
				{
					goto IL_00ac;
				}
				case 2:
				{
					goto IL_00ac;
				}
				case 3:
				{
					goto IL_0355;
				}
			}
		}

IL_0024:
		{
			// WebSocketCloseCode closeCode = WebSocketCloseCode.Abnormal;
			__this->set_U3CcloseCodeU3E5__2_3(((int32_t)1006));
			// await new WaitForBackgroundThread();
			WaitForBackgroundThread_t8C5103639A29F371BDBADD1375E435C26BD1F00B * L_3 = (WaitForBackgroundThread_t8C5103639A29F371BDBADD1375E435C26BD1F00B *)il2cpp_codegen_object_new(WaitForBackgroundThread_t8C5103639A29F371BDBADD1375E435C26BD1F00B_il2cpp_TypeInfo_var);
			WaitForBackgroundThread__ctor_m7FDD180743EC313419B58BFEB1BE2EA84F70461D(L_3, /*hidden argument*/NULL);
			NullCheck(L_3);
			ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C  L_4;
			L_4 = WaitForBackgroundThread_GetAwaiter_m510AE03EC48BED018E5446F8C4C124EB0E1C4396(L_3, /*hidden argument*/NULL);
			V_2 = L_4;
			bool L_5;
			L_5 = ConfiguredTaskAwaiter_get_IsCompleted_m98056416CC6E5741A2201994591D27D127A17730((ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C *)(&V_2), /*hidden argument*/NULL);
			if (L_5)
			{
				goto IL_0082;
			}
		}

IL_0043:
		{
			int32_t L_6 = 0;
			V_0 = L_6;
			__this->set_U3CU3E1__state_0(L_6);
			ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C  L_7 = V_2;
			__this->set_U3CU3Eu__1_5(L_7);
			AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_8 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C_TisU3CReceiveU3Ed__36_tAD99CF678583A10E2AD64335EB851ABC77878E0C_m9870273794D79F8F0FCF35325F6C18344C121011((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_8, (ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C *)(&V_2), (U3CReceiveU3Ed__36_tAD99CF678583A10E2AD64335EB851ABC77878E0C *)__this, /*hidden argument*/AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C_TisU3CReceiveU3Ed__36_tAD99CF678583A10E2AD64335EB851ABC77878E0C_m9870273794D79F8F0FCF35325F6C18344C121011_RuntimeMethod_var);
			goto IL_03e8;
		}

IL_0066:
		{
			ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C  L_9 = __this->get_U3CU3Eu__1_5();
			V_2 = L_9;
			ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C * L_10 = __this->get_address_of_U3CU3Eu__1_5();
			il2cpp_codegen_initobj(L_10, sizeof(ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C ));
			int32_t L_11 = (-1);
			V_0 = L_11;
			__this->set_U3CU3E1__state_0(L_11);
		}

IL_0082:
		{
			ConfiguredTaskAwaiter_GetResult_m29A9880E9FCC4B8E9928B60E137FB53D0C8F0CE6((ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C *)(&V_2), /*hidden argument*/NULL);
			// ArraySegment<byte> buffer = new ArraySegment<byte>(new byte[8192]);
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_12 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)((int32_t)8192));
			ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  L_13;
			memset((&L_13), 0, sizeof(L_13));
			ArraySegment_1__ctor_mB8E7E8D50D7933AF431552AB0D1B93FA747CC151((&L_13), L_12, /*hidden argument*/ArraySegment_1__ctor_mB8E7E8D50D7933AF431552AB0D1B93FA747CC151_RuntimeMethod_var);
			__this->set_U3CbufferU3E5__3_4(L_13);
			__this->set_U3CU3E7__wrap3_6(NULL);
			__this->set_U3CU3E7__wrap4_7(0);
		}

IL_00ac:
		{
		}

IL_00ad:
		try
		{ // begin try (depth: 2)
			{
				int32_t L_14 = V_0;
			}

IL_00b4:
			try
			{ // begin try (depth: 3)
				{
					int32_t L_15 = V_0;
					if ((!(((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_15, (int32_t)1))) > ((uint32_t)1))))
					{
						goto IL_00d1;
					}
				}

IL_00ba:
				{
					goto IL_02ed;
				}

IL_00bf:
				{
					// WebSocketReceiveResult result = null;
					__this->set_U3CresultU3E5__6_8((WebSocketReceiveResult_tEB9BD882DB3C2B94DFDA4655DAD6DFD2DDF85122 *)NULL);
					// using (var ms = new MemoryStream())
					MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * L_16 = (MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C *)il2cpp_codegen_object_new(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C_il2cpp_TypeInfo_var);
					MemoryStream__ctor_mD27B3DF2400D46A4A81EE78B0BD2C29EFCFAA44F(L_16, /*hidden argument*/NULL);
					__this->set_U3CmsU3E5__7_9(L_16);
				}

IL_00d1:
				{
				}

IL_00d2:
				try
				{ // begin try (depth: 4)
					{
						int32_t L_17 = V_0;
						if ((((int32_t)L_17) == ((int32_t)1)))
						{
							goto IL_0128;
						}
					}

IL_00d6:
					{
						int32_t L_18 = V_0;
						if ((((int32_t)L_18) == ((int32_t)2)))
						{
							goto IL_0280;
						}
					}

IL_00dd:
					{
						// result = await m_Socket.ReceiveAsync(buffer, m_CancellationToken);
						WebSocket_t5FA66A4CDB32ECEC66E8A22DA5C2F3F778802646 * L_19 = V_1;
						NullCheck(L_19);
						ClientWebSocket_tA2D70722EB2DD788E27D46C7E262C85C984EEE09 * L_20 = L_19->get_m_Socket_7();
						ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  L_21 = __this->get_U3CbufferU3E5__3_4();
						WebSocket_t5FA66A4CDB32ECEC66E8A22DA5C2F3F778802646 * L_22 = V_1;
						NullCheck(L_22);
						CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  L_23 = L_22->get_m_CancellationToken_9();
						NullCheck(L_20);
						Task_1_t79E764D87096B674F330B1306805A0FF72B2E83E * L_24;
						L_24 = VirtFuncInvoker2< Task_1_t79E764D87096B674F330B1306805A0FF72B2E83E *, ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE , CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  >::Invoke(10 /* System.Threading.Tasks.Task`1<System.Net.WebSockets.WebSocketReceiveResult> System.Net.WebSockets.WebSocket::ReceiveAsync(System.ArraySegment`1<System.Byte>,System.Threading.CancellationToken) */, L_20, L_21, L_23);
						NullCheck(L_24);
						TaskAwaiter_1_tE7CEF18367E979C3A40489CF01B7F0C9D2DC7FD6  L_25;
						L_25 = Task_1_GetAwaiter_m46A488400364A14C5B4A6B616BD7A1BB08927520(L_24, /*hidden argument*/Task_1_GetAwaiter_m46A488400364A14C5B4A6B616BD7A1BB08927520_RuntimeMethod_var);
						V_4 = L_25;
						bool L_26;
						L_26 = TaskAwaiter_1_get_IsCompleted_m2D13C0370C28B8EA4406A35F0A8BC012DF3C8537((TaskAwaiter_1_tE7CEF18367E979C3A40489CF01B7F0C9D2DC7FD6 *)(&V_4), /*hidden argument*/TaskAwaiter_1_get_IsCompleted_m2D13C0370C28B8EA4406A35F0A8BC012DF3C8537_RuntimeMethod_var);
						if (L_26)
						{
							goto IL_0145;
						}
					}

IL_0104:
					{
						int32_t L_27 = 1;
						V_0 = L_27;
						__this->set_U3CU3E1__state_0(L_27);
						TaskAwaiter_1_tE7CEF18367E979C3A40489CF01B7F0C9D2DC7FD6  L_28 = V_4;
						__this->set_U3CU3Eu__2_10(L_28);
						AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_29 = __this->get_address_of_U3CU3Et__builder_1();
						AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tE7CEF18367E979C3A40489CF01B7F0C9D2DC7FD6_TisU3CReceiveU3Ed__36_tAD99CF678583A10E2AD64335EB851ABC77878E0C_m09DFAB6318BD6894F5593C2B7AE0A92F1D2ABF50((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_29, (TaskAwaiter_1_tE7CEF18367E979C3A40489CF01B7F0C9D2DC7FD6 *)(&V_4), (U3CReceiveU3Ed__36_tAD99CF678583A10E2AD64335EB851ABC77878E0C *)__this, /*hidden argument*/AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tE7CEF18367E979C3A40489CF01B7F0C9D2DC7FD6_TisU3CReceiveU3Ed__36_tAD99CF678583A10E2AD64335EB851ABC77878E0C_m09DFAB6318BD6894F5593C2B7AE0A92F1D2ABF50_RuntimeMethod_var);
						IL2CPP_LEAVE(0x3E8, FINALLY_02c7);
					}

IL_0128:
					{
						TaskAwaiter_1_tE7CEF18367E979C3A40489CF01B7F0C9D2DC7FD6  L_30 = __this->get_U3CU3Eu__2_10();
						V_4 = L_30;
						TaskAwaiter_1_tE7CEF18367E979C3A40489CF01B7F0C9D2DC7FD6 * L_31 = __this->get_address_of_U3CU3Eu__2_10();
						il2cpp_codegen_initobj(L_31, sizeof(TaskAwaiter_1_tE7CEF18367E979C3A40489CF01B7F0C9D2DC7FD6 ));
						int32_t L_32 = (-1);
						V_0 = L_32;
						__this->set_U3CU3E1__state_0(L_32);
					}

IL_0145:
					{
						WebSocketReceiveResult_tEB9BD882DB3C2B94DFDA4655DAD6DFD2DDF85122 * L_33;
						L_33 = TaskAwaiter_1_GetResult_mCDCAAF89F5D74175A37B6E9F507C970EDAF07B97((TaskAwaiter_1_tE7CEF18367E979C3A40489CF01B7F0C9D2DC7FD6 *)(&V_4), /*hidden argument*/TaskAwaiter_1_GetResult_mCDCAAF89F5D74175A37B6E9F507C970EDAF07B97_RuntimeMethod_var);
						V_3 = L_33;
						WebSocketReceiveResult_tEB9BD882DB3C2B94DFDA4655DAD6DFD2DDF85122 * L_34 = V_3;
						__this->set_U3CresultU3E5__6_8(L_34);
						// ms.Write(buffer.Array, buffer.Offset, result.Count);
						MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * L_35 = __this->get_U3CmsU3E5__7_9();
						ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE * L_36 = __this->get_address_of_U3CbufferU3E5__3_4();
						ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_37;
						L_37 = ArraySegment_1_get_Array_m3D83A2CFF4D51F8ED83C89538616FF0A700F463C_inline((ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE *)L_36, /*hidden argument*/ArraySegment_1_get_Array_m3D83A2CFF4D51F8ED83C89538616FF0A700F463C_RuntimeMethod_var);
						ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE * L_38 = __this->get_address_of_U3CbufferU3E5__3_4();
						int32_t L_39;
						L_39 = ArraySegment_1_get_Offset_m13F255A2A7A730982F330A448FCB32239782C505_inline((ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE *)L_38, /*hidden argument*/ArraySegment_1_get_Offset_m13F255A2A7A730982F330A448FCB32239782C505_RuntimeMethod_var);
						WebSocketReceiveResult_tEB9BD882DB3C2B94DFDA4655DAD6DFD2DDF85122 * L_40 = __this->get_U3CresultU3E5__6_8();
						NullCheck(L_40);
						int32_t L_41;
						L_41 = WebSocketReceiveResult_get_Count_m9A22CB095E69E1DE69FDA79295ECC5BE8A147CB9_inline(L_40, /*hidden argument*/NULL);
						NullCheck(L_35);
						VirtActionInvoker3< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, int32_t >::Invoke(28 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_35, L_37, L_39, L_41);
						// while (!result.EndOfMessage);
						WebSocketReceiveResult_tEB9BD882DB3C2B94DFDA4655DAD6DFD2DDF85122 * L_42 = __this->get_U3CresultU3E5__6_8();
						NullCheck(L_42);
						bool L_43;
						L_43 = WebSocketReceiveResult_get_EndOfMessage_m233182D8ABF49FEE3C82D6C217CAAC5922104F57_inline(L_42, /*hidden argument*/NULL);
						if (!L_43)
						{
							goto IL_00dd;
						}
					}

IL_0190:
					{
						// ms.Seek(0, SeekOrigin.Begin);
						MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * L_44 = __this->get_U3CmsU3E5__7_9();
						NullCheck(L_44);
						int64_t L_45;
						L_45 = VirtFuncInvoker2< int64_t, int64_t, int32_t >::Invoke(25 /* System.Int64 System.IO.Stream::Seek(System.Int64,System.IO.SeekOrigin) */, L_44, ((int64_t)((int64_t)0)), 0);
						// if (result.MessageType == WebSocketMessageType.Text)
						WebSocketReceiveResult_tEB9BD882DB3C2B94DFDA4655DAD6DFD2DDF85122 * L_46 = __this->get_U3CresultU3E5__6_8();
						NullCheck(L_46);
						int32_t L_47;
						L_47 = WebSocketReceiveResult_get_MessageType_mBE189CACCE7DCDC1C5C0CF9873DD3290BC686478_inline(L_46, /*hidden argument*/NULL);
						if (L_47)
						{
							goto IL_01eb;
						}
					}

IL_01ac:
					{
						// lock (IncomingMessageLock)
						WebSocket_t5FA66A4CDB32ECEC66E8A22DA5C2F3F778802646 * L_48 = V_1;
						NullCheck(L_48);
						RuntimeObject * L_49 = L_48->get_IncomingMessageLock_11();
						V_5 = L_49;
						V_6 = (bool)0;
					}

IL_01b7:
					try
					{ // begin try (depth: 5)
						RuntimeObject * L_50 = V_5;
						Monitor_Enter_mBEB6CC84184B46F26375EC3FC8921D16E48EA4C4(L_50, (bool*)(&V_6), /*hidden argument*/NULL);
						// m_MessageList.Add(ms.ToArray());
						WebSocket_t5FA66A4CDB32ECEC66E8A22DA5C2F3F778802646 * L_51 = V_1;
						NullCheck(L_51);
						List_1_t08E192A6E99857FD75EAA081A5D3BEC33729EDBE * L_52 = L_51->get_m_MessageList_15();
						MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * L_53 = __this->get_U3CmsU3E5__7_9();
						NullCheck(L_53);
						ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_54;
						L_54 = VirtFuncInvoker0< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* >::Invoke(33 /* System.Byte[] System.IO.MemoryStream::ToArray() */, L_53);
						NullCheck(L_52);
						List_1_Add_mE2D42E8F87548101921C1F2DAA810601D3D70904(L_52, L_54, /*hidden argument*/List_1_Add_mE2D42E8F87548101921C1F2DAA810601D3D70904_RuntimeMethod_var);
						// }
						IL2CPP_LEAVE(0x2C5, FINALLY_01db);
					} // end try (depth: 5)
					catch(Il2CppExceptionWrapper& e)
					{
						__last_unhandled_exception = (Exception_t *)e.ex;
						goto FINALLY_01db;
					}

FINALLY_01db:
					{ // begin finally (depth: 5)
						{
							int32_t L_55 = V_0;
							if ((((int32_t)L_55) >= ((int32_t)0)))
							{
								goto IL_01ea;
							}
						}

IL_01df:
						{
							bool L_56 = V_6;
							if (!L_56)
							{
								goto IL_01ea;
							}
						}

IL_01e3:
						{
							RuntimeObject * L_57 = V_5;
							Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_57, /*hidden argument*/NULL);
						}

IL_01ea:
						{
							IL2CPP_END_FINALLY(475)
						}
					} // end finally (depth: 5)
					IL2CPP_CLEANUP(475)
					{
						IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
						IL2CPP_JUMP_TBL(0x2C5, IL_02c5)
					}

IL_01eb:
					{
						// else if (result.MessageType == WebSocketMessageType.Binary)
						WebSocketReceiveResult_tEB9BD882DB3C2B94DFDA4655DAD6DFD2DDF85122 * L_58 = __this->get_U3CresultU3E5__6_8();
						NullCheck(L_58);
						int32_t L_59;
						L_59 = WebSocketReceiveResult_get_MessageType_mBE189CACCE7DCDC1C5C0CF9873DD3290BC686478_inline(L_58, /*hidden argument*/NULL);
						if ((!(((uint32_t)L_59) == ((uint32_t)1))))
						{
							goto IL_0238;
						}
					}

IL_01f9:
					{
						// lock (IncomingMessageLock)
						WebSocket_t5FA66A4CDB32ECEC66E8A22DA5C2F3F778802646 * L_60 = V_1;
						NullCheck(L_60);
						RuntimeObject * L_61 = L_60->get_IncomingMessageLock_11();
						V_5 = L_61;
						V_6 = (bool)0;
					}

IL_0204:
					try
					{ // begin try (depth: 5)
						RuntimeObject * L_62 = V_5;
						Monitor_Enter_mBEB6CC84184B46F26375EC3FC8921D16E48EA4C4(L_62, (bool*)(&V_6), /*hidden argument*/NULL);
						// m_MessageList.Add(ms.ToArray());
						WebSocket_t5FA66A4CDB32ECEC66E8A22DA5C2F3F778802646 * L_63 = V_1;
						NullCheck(L_63);
						List_1_t08E192A6E99857FD75EAA081A5D3BEC33729EDBE * L_64 = L_63->get_m_MessageList_15();
						MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * L_65 = __this->get_U3CmsU3E5__7_9();
						NullCheck(L_65);
						ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_66;
						L_66 = VirtFuncInvoker0< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* >::Invoke(33 /* System.Byte[] System.IO.MemoryStream::ToArray() */, L_65);
						NullCheck(L_64);
						List_1_Add_mE2D42E8F87548101921C1F2DAA810601D3D70904(L_64, L_66, /*hidden argument*/List_1_Add_mE2D42E8F87548101921C1F2DAA810601D3D70904_RuntimeMethod_var);
						// }
						IL2CPP_LEAVE(0x2C5, FINALLY_0228);
					} // end try (depth: 5)
					catch(Il2CppExceptionWrapper& e)
					{
						__last_unhandled_exception = (Exception_t *)e.ex;
						goto FINALLY_0228;
					}

FINALLY_0228:
					{ // begin finally (depth: 5)
						{
							int32_t L_67 = V_0;
							if ((((int32_t)L_67) >= ((int32_t)0)))
							{
								goto IL_0237;
							}
						}

IL_022c:
						{
							bool L_68 = V_6;
							if (!L_68)
							{
								goto IL_0237;
							}
						}

IL_0230:
						{
							RuntimeObject * L_69 = V_5;
							Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_69, /*hidden argument*/NULL);
						}

IL_0237:
						{
							IL2CPP_END_FINALLY(552)
						}
					} // end finally (depth: 5)
					IL2CPP_CLEANUP(552)
					{
						IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
						IL2CPP_JUMP_TBL(0x2C5, IL_02c5)
					}

IL_0238:
					{
						// else if (result.MessageType == WebSocketMessageType.Close)
						WebSocketReceiveResult_tEB9BD882DB3C2B94DFDA4655DAD6DFD2DDF85122 * L_70 = __this->get_U3CresultU3E5__6_8();
						NullCheck(L_70);
						int32_t L_71;
						L_71 = WebSocketReceiveResult_get_MessageType_mBE189CACCE7DCDC1C5C0CF9873DD3290BC686478_inline(L_70, /*hidden argument*/NULL);
						if ((!(((uint32_t)L_71) == ((uint32_t)2))))
						{
							goto IL_02c5;
						}
					}

IL_0246:
					{
						// await Close();
						WebSocket_t5FA66A4CDB32ECEC66E8A22DA5C2F3F778802646 * L_72 = V_1;
						NullCheck(L_72);
						Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_73;
						L_73 = WebSocket_Close_mEA005048BB477FF7D215C8D67891FC71DD0C3801(L_72, /*hidden argument*/NULL);
						NullCheck(L_73);
						TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_74;
						L_74 = Task_GetAwaiter_m1FF7528A8FE13F79207DFE970F642078EF6B1260(L_73, /*hidden argument*/NULL);
						V_7 = L_74;
						bool L_75;
						L_75 = TaskAwaiter_get_IsCompleted_m6F97613C55E505B5664C3C0CFC4677D296EAA8BC((TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_7), /*hidden argument*/NULL);
						if (L_75)
						{
							goto IL_029d;
						}
					}

IL_025c:
					{
						int32_t L_76 = 2;
						V_0 = L_76;
						__this->set_U3CU3E1__state_0(L_76);
						TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_77 = V_7;
						__this->set_U3CU3Eu__3_11(L_77);
						AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_78 = __this->get_address_of_U3CU3Et__builder_1();
						AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CReceiveU3Ed__36_tAD99CF678583A10E2AD64335EB851ABC77878E0C_m9F54F113924E225A0E68DFEBB7AC3DD40796D886((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_78, (TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_7), (U3CReceiveU3Ed__36_tAD99CF678583A10E2AD64335EB851ABC77878E0C *)__this, /*hidden argument*/AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CReceiveU3Ed__36_tAD99CF678583A10E2AD64335EB851ABC77878E0C_m9F54F113924E225A0E68DFEBB7AC3DD40796D886_RuntimeMethod_var);
						IL2CPP_LEAVE(0x3E8, FINALLY_02c7);
					}

IL_0280:
					{
						TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_79 = __this->get_U3CU3Eu__3_11();
						V_7 = L_79;
						TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * L_80 = __this->get_address_of_U3CU3Eu__3_11();
						il2cpp_codegen_initobj(L_80, sizeof(TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C ));
						int32_t L_81 = (-1);
						V_0 = L_81;
						__this->set_U3CU3E1__state_0(L_81);
					}

IL_029d:
					{
						TaskAwaiter_GetResult_m578EEFEC4DD1AE5E77C899B8BAA3825EB79D1330((TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_7), /*hidden argument*/NULL);
						// closeCode = WebSocketHelpers.ParseCloseCodeEnum((int)result.CloseStatus);
						WebSocketReceiveResult_tEB9BD882DB3C2B94DFDA4655DAD6DFD2DDF85122 * L_82 = __this->get_U3CresultU3E5__6_8();
						NullCheck(L_82);
						Nullable_1_tEEF07CE805E86A33961C7C0AE095FA4A628605C6  L_83;
						L_83 = WebSocketReceiveResult_get_CloseStatus_m92539B962F06EB04D7D3728893927435D0037FFF_inline(L_82, /*hidden argument*/NULL);
						V_8 = L_83;
						int32_t L_84;
						L_84 = Nullable_1_get_Value_m7DB9FB5C8C333030A091B400CB163A9A28A17634((Nullable_1_tEEF07CE805E86A33961C7C0AE095FA4A628605C6 *)(&V_8), /*hidden argument*/Nullable_1_get_Value_m7DB9FB5C8C333030A091B400CB163A9A28A17634_RuntimeMethod_var);
						int32_t L_85;
						L_85 = WebSocketHelpers_ParseCloseCodeEnum_mAC862131BD4DB650462AD9679CAB225D6145DB0B(L_84, /*hidden argument*/NULL);
						__this->set_U3CcloseCodeU3E5__2_3(L_85);
						// break;
						IL2CPP_LEAVE(0x2FE, FINALLY_02c7);
					}

IL_02c5:
					{
						// }
						IL2CPP_LEAVE(0x2DF, FINALLY_02c7);
					}
				} // end try (depth: 4)
				catch(Il2CppExceptionWrapper& e)
				{
					__last_unhandled_exception = (Exception_t *)e.ex;
					goto FINALLY_02c7;
				}

FINALLY_02c7:
				{ // begin finally (depth: 4)
					{
						int32_t L_86 = V_0;
						if ((((int32_t)L_86) >= ((int32_t)0)))
						{
							goto IL_02de;
						}
					}

IL_02cb:
					{
						MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * L_87 = __this->get_U3CmsU3E5__7_9();
						if (!L_87)
						{
							goto IL_02de;
						}
					}

IL_02d3:
					{
						MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * L_88 = __this->get_U3CmsU3E5__7_9();
						NullCheck(L_88);
						InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_88);
					}

IL_02de:
					{
						IL2CPP_END_FINALLY(711)
					}
				} // end finally (depth: 4)
				IL2CPP_CLEANUP(711)
				{
					IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
					IL2CPP_JUMP_TBL(0x3E8, IL_03e8)
					IL2CPP_JUMP_TBL(0x2FE, IL_02fe)
					IL2CPP_JUMP_TBL(0x2DF, IL_02df)
				}

IL_02df:
				{
					__this->set_U3CmsU3E5__7_9((MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C *)NULL);
					// }
					__this->set_U3CresultU3E5__6_8((WebSocketReceiveResult_tEB9BD882DB3C2B94DFDA4655DAD6DFD2DDF85122 *)NULL);
				}

IL_02ed:
				{
					// while (m_Socket.State == System.Net.WebSockets.WebSocketState.Open)
					WebSocket_t5FA66A4CDB32ECEC66E8A22DA5C2F3F778802646 * L_89 = V_1;
					NullCheck(L_89);
					ClientWebSocket_tA2D70722EB2DD788E27D46C7E262C85C984EEE09 * L_90 = L_89->get_m_Socket_7();
					NullCheck(L_90);
					int32_t L_91;
					L_91 = VirtFuncInvoker0< int32_t >::Invoke(5 /* System.Net.WebSockets.WebSocketState System.Net.WebSockets.WebSocket::get_State() */, L_90);
					if ((((int32_t)L_91) == ((int32_t)2)))
					{
						goto IL_00bf;
					}
				}

IL_02fe:
				{
					// }
					goto IL_030e;
				}
			} // end try (depth: 3)
			catch(Il2CppExceptionWrapper& e)
			{
				if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
				{
					IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
					goto CATCH_0300;
				}
				throw e;
			}

CATCH_0300:
			{ // begin catch(System.Exception)
				// catch (Exception)
				// m_TokenSource.Cancel();
				WebSocket_t5FA66A4CDB32ECEC66E8A22DA5C2F3F778802646 * L_92 = V_1;
				NullCheck(L_92);
				CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * L_93 = L_92->get_m_TokenSource_8();
				NullCheck(L_93);
				CancellationTokenSource_Cancel_m2D87D42962FF166576B4FB3A34DF5C07F4AECEF1(L_93, /*hidden argument*/NULL);
				// }
				IL2CPP_POP_ACTIVE_EXCEPTION();
				goto IL_030e;
			} // end catch (depth: 3)

IL_030e:
			{
				goto IL_031c;
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0310;
			}
			throw e;
		}

CATCH_0310:
		{ // begin catch(System.Object)
			V_5 = ((RuntimeObject *)IL2CPP_GET_ACTIVE_EXCEPTION(RuntimeObject *));
			RuntimeObject * L_94 = V_5;
			__this->set_U3CU3E7__wrap3_6(L_94);
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_031c;
		} // end catch (depth: 2)

IL_031c:
		{
			// await new WaitForUpdate();
			WaitForUpdate_t0977047DBECB52C15D8149E0817A0DCD8F2ECDA2 * L_95 = (WaitForUpdate_t0977047DBECB52C15D8149E0817A0DCD8F2ECDA2 *)il2cpp_codegen_object_new(WaitForUpdate_t0977047DBECB52C15D8149E0817A0DCD8F2ECDA2_il2cpp_TypeInfo_var);
			WaitForUpdate__ctor_m79A893938A089B8952EB0AD0AAD3FEEAF8856E90(L_95, /*hidden argument*/NULL);
			NullCheck(L_95);
			MainThreadAwaiter_t07EC1C94003617C1B1C0EEF3FDE6C52A66F42FC1 * L_96;
			L_96 = WaitForUpdate_GetAwaiter_m5A7735EFFCCE017E8695188A41EDE8700FA19EAA(L_95, /*hidden argument*/NULL);
			V_9 = L_96;
			MainThreadAwaiter_t07EC1C94003617C1B1C0EEF3FDE6C52A66F42FC1 * L_97 = V_9;
			NullCheck(L_97);
			bool L_98;
			L_98 = MainThreadAwaiter_get_IsCompleted_m71FB3B9EB749E398BAEF85167D0A10959BFE1E27_inline(L_97, /*hidden argument*/NULL);
			if (L_98)
			{
				goto IL_0372;
			}
		}

IL_0331:
		{
			int32_t L_99 = 3;
			V_0 = L_99;
			__this->set_U3CU3E1__state_0(L_99);
			MainThreadAwaiter_t07EC1C94003617C1B1C0EEF3FDE6C52A66F42FC1 * L_100 = V_9;
			__this->set_U3CU3Eu__4_12(L_100);
			AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_101 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncTaskMethodBuilder_AwaitOnCompleted_TisMainThreadAwaiter_t07EC1C94003617C1B1C0EEF3FDE6C52A66F42FC1_TisU3CReceiveU3Ed__36_tAD99CF678583A10E2AD64335EB851ABC77878E0C_mEAE25AD68DB3ACBEC79C6C1800AA1FE4DE7AA0B4((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_101, (MainThreadAwaiter_t07EC1C94003617C1B1C0EEF3FDE6C52A66F42FC1 **)(&V_9), (U3CReceiveU3Ed__36_tAD99CF678583A10E2AD64335EB851ABC77878E0C *)__this, /*hidden argument*/AsyncTaskMethodBuilder_AwaitOnCompleted_TisMainThreadAwaiter_t07EC1C94003617C1B1C0EEF3FDE6C52A66F42FC1_TisU3CReceiveU3Ed__36_tAD99CF678583A10E2AD64335EB851ABC77878E0C_mEAE25AD68DB3ACBEC79C6C1800AA1FE4DE7AA0B4_RuntimeMethod_var);
			goto IL_03e8;
		}

IL_0355:
		{
			RuntimeObject * L_102 = __this->get_U3CU3Eu__4_12();
			V_9 = ((MainThreadAwaiter_t07EC1C94003617C1B1C0EEF3FDE6C52A66F42FC1 *)CastclassClass((RuntimeObject*)L_102, MainThreadAwaiter_t07EC1C94003617C1B1C0EEF3FDE6C52A66F42FC1_il2cpp_TypeInfo_var));
			__this->set_U3CU3Eu__4_12(NULL);
			int32_t L_103 = (-1);
			V_0 = L_103;
			__this->set_U3CU3E1__state_0(L_103);
		}

IL_0372:
		{
			MainThreadAwaiter_t07EC1C94003617C1B1C0EEF3FDE6C52A66F42FC1 * L_104 = V_9;
			NullCheck(L_104);
			MainThreadAwaiter_GetResult_mA14349F8037CA82F2DFF7C9B0DE318017A3AA687(L_104, /*hidden argument*/NULL);
			// OnClose?.Invoke(closeCode);
			WebSocket_t5FA66A4CDB32ECEC66E8A22DA5C2F3F778802646 * L_105 = V_1;
			NullCheck(L_105);
			WebSocketCloseEventHandler_tD2F6193A42EB71C99D482FC38E4EC30825567A12 * L_106 = L_105->get_OnClose_3();
			WebSocketCloseEventHandler_tD2F6193A42EB71C99D482FC38E4EC30825567A12 * L_107 = L_106;
			G_B52_0 = L_107;
			if (L_107)
			{
				G_B53_0 = L_107;
				goto IL_0385;
			}
		}

IL_0382:
		{
			goto IL_0390;
		}

IL_0385:
		{
			int32_t L_108 = __this->get_U3CcloseCodeU3E5__2_3();
			NullCheck(G_B53_0);
			WebSocketCloseEventHandler_Invoke_mA421ED8AEB852C58D6A2657DD1CFD33D9ABA343D(G_B53_0, L_108, /*hidden argument*/NULL);
		}

IL_0390:
		{
			RuntimeObject * L_109 = __this->get_U3CU3E7__wrap3_6();
			V_5 = L_109;
			RuntimeObject * L_110 = V_5;
			if (!L_110)
			{
				goto IL_03b3;
			}
		}

IL_039c:
		{
			RuntimeObject * L_111 = V_5;
			Exception_t * L_112 = ((Exception_t *)IsInstClass((RuntimeObject*)L_111, Exception_t_il2cpp_TypeInfo_var));
			G_B56_0 = L_112;
			if (L_112)
			{
				G_B57_0 = L_112;
				goto IL_03a9;
			}
		}

IL_03a6:
		{
			RuntimeObject * L_113 = V_5;
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_113, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CReceiveU3Ed__36_MoveNext_m86AB6017D86F2DC7F0CD07ED2DD279E33852F576_RuntimeMethod_var)));
		}

IL_03a9:
		{
			ExceptionDispatchInfo_t85442E41DA1485CFF22598AC362EE986DF3CDD09 * L_114;
			L_114 = ExceptionDispatchInfo_Capture_m972BB7AC3DEF807C66DD794FA29D48829252F40B(G_B57_0, /*hidden argument*/NULL);
			NullCheck(L_114);
			ExceptionDispatchInfo_Throw_m7BB0D6275623932B2FCEB0BD7FF4073ED010C095(L_114, /*hidden argument*/NULL);
		}

IL_03b3:
		{
			__this->set_U3CU3E7__wrap3_6(NULL);
			goto IL_03d5;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_03bc;
		}
		throw e;
	}

CATCH_03bc:
	{ // begin catch(System.Exception)
		V_10 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_115 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_116 = V_10;
		AsyncTaskMethodBuilder_SetException_m54A9FC97C33C9AC4E514923F7C58D76B94D344C4((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_115, L_116, /*hidden argument*/NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_03e8;
	} // end catch (depth: 1)

IL_03d5:
	{
		// }
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_117 = __this->get_address_of_U3CU3Et__builder_1();
		AsyncTaskMethodBuilder_SetResult_m89AF7435D1B349EE8A377B5DFFC082999D9F8CD9((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_117, /*hidden argument*/NULL);
	}

IL_03e8:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CReceiveU3Ed__36_MoveNext_m86AB6017D86F2DC7F0CD07ED2DD279E33852F576_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CReceiveU3Ed__36_tAD99CF678583A10E2AD64335EB851ABC77878E0C * _thisAdjusted = reinterpret_cast<U3CReceiveU3Ed__36_tAD99CF678583A10E2AD64335EB851ABC77878E0C *>(__this + _offset);
	U3CReceiveU3Ed__36_MoveNext_m86AB6017D86F2DC7F0CD07ED2DD279E33852F576(_thisAdjusted, method);
}
// System.Void NativeWebSocket.WebSocket/<Receive>d__36::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CReceiveU3Ed__36_SetStateMachine_mFD882EFF032EBB67E94B0E706F06E23506E147BA (U3CReceiveU3Ed__36_tAD99CF678583A10E2AD64335EB851ABC77878E0C * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	{
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_0 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncTaskMethodBuilder_SetStateMachine_m68788E9C6C30BBAA030DEC1963E8A6C6B2C8A3E6((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CReceiveU3Ed__36_SetStateMachine_mFD882EFF032EBB67E94B0E706F06E23506E147BA_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CReceiveU3Ed__36_tAD99CF678583A10E2AD64335EB851ABC77878E0C * _thisAdjusted = reinterpret_cast<U3CReceiveU3Ed__36_tAD99CF678583A10E2AD64335EB851ABC77878E0C *>(__this + _offset);
	U3CReceiveU3Ed__36_SetStateMachine_mFD882EFF032EBB67E94B0E706F06E23506E147BA(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void NativeWebSocket.WebSocket/<SendMessage>d__32::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSendMessageU3Ed__32_MoveNext_m03D4A1E1C7ED7A2B4F95D065FAD62B7A7E89C223 (U3CSendMessageU3Ed__32_t98E469030BF6849D4377D3C2EC6B58D959874AF7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArraySegment_1_get_Count_mC13AC26CCFD0EACBCC08F24F2A7BB22841B44C32_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CSendMessageU3Ed__32_t98E469030BF6849D4377D3C2EC6B58D959874AF7_m3BEB6369909AD4257D33A9C83136C0D54D5ABC7F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m7382F9FB42CFCC39EB42749795866FD34FC9B736_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	WebSocket_t5FA66A4CDB32ECEC66E8A22DA5C2F3F778802646 * V_1 = NULL;
	bool V_2 = false;
	RuntimeObject * V_3 = NULL;
	bool V_4 = false;
	TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  V_5;
	memset((&V_5), 0, sizeof(V_5));
	Exception_t * V_6 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 10> __leave_targets;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		WebSocket_t5FA66A4CDB32ECEC66E8A22DA5C2F3F778802646 * L_1 = __this->get_U3CU3E4__this_3();
		V_1 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_00cd;
			}
		}

IL_0014:
		{
			int32_t L_3 = V_0;
			if ((((int32_t)L_3) == ((int32_t)1)))
			{
				goto IL_01a2;
			}
		}

IL_001b:
		{
			// if (buffer.Count == 0)
			ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE * L_4 = __this->get_address_of_buffer_2();
			int32_t L_5;
			L_5 = ArraySegment_1_get_Count_mC13AC26CCFD0EACBCC08F24F2A7BB22841B44C32_inline((ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE *)L_4, /*hidden argument*/ArraySegment_1_get_Count_mC13AC26CCFD0EACBCC08F24F2A7BB22841B44C32_RuntimeMethod_var);
			if (L_5)
			{
				goto IL_002d;
			}
		}

IL_0028:
		{
			// return;
			goto IL_0217;
		}

IL_002d:
		{
			// lock (OutgoingMessageLock)
			WebSocket_t5FA66A4CDB32ECEC66E8A22DA5C2F3F778802646 * L_6 = V_1;
			NullCheck(L_6);
			RuntimeObject * L_7 = L_6->get_OutgoingMessageLock_10();
			V_3 = L_7;
			V_4 = (bool)0;
		}

IL_0037:
		try
		{ // begin try (depth: 2)
			{
				RuntimeObject * L_8 = V_3;
				Monitor_Enter_mBEB6CC84184B46F26375EC3FC8921D16E48EA4C4(L_8, (bool*)(&V_4), /*hidden argument*/NULL);
				// sending = isSending;
				WebSocket_t5FA66A4CDB32ECEC66E8A22DA5C2F3F778802646 * L_9 = V_1;
				NullCheck(L_9);
				bool L_10 = L_9->get_isSending_12();
				V_2 = L_10;
				// if (!isSending)
				WebSocket_t5FA66A4CDB32ECEC66E8A22DA5C2F3F778802646 * L_11 = V_1;
				NullCheck(L_11);
				bool L_12 = L_11->get_isSending_12();
				if (L_12)
				{
					goto IL_0055;
				}
			}

IL_004e:
			{
				// isSending = true;
				WebSocket_t5FA66A4CDB32ECEC66E8A22DA5C2F3F778802646 * L_13 = V_1;
				NullCheck(L_13);
				L_13->set_isSending_12((bool)1);
			}

IL_0055:
			{
				// }
				IL2CPP_LEAVE(0x66, FINALLY_0057);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_0057;
		}

FINALLY_0057:
		{ // begin finally (depth: 2)
			{
				int32_t L_14 = V_0;
				if ((((int32_t)L_14) >= ((int32_t)0)))
				{
					goto IL_0065;
				}
			}

IL_005b:
			{
				bool L_15 = V_4;
				if (!L_15)
				{
					goto IL_0065;
				}
			}

IL_005f:
			{
				RuntimeObject * L_16 = V_3;
				Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_16, /*hidden argument*/NULL);
			}

IL_0065:
			{
				IL2CPP_END_FINALLY(87)
			}
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(87)
		{
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
			IL2CPP_JUMP_TBL(0x66, IL_0066)
		}

IL_0066:
		{
			// if (!sending)
			bool L_17 = V_2;
			if (L_17)
			{
				goto IL_01c8;
			}
		}

IL_006c:
		{
			// if (!Monitor.TryEnter(m_Socket, 1000))
			WebSocket_t5FA66A4CDB32ECEC66E8A22DA5C2F3F778802646 * L_18 = V_1;
			NullCheck(L_18);
			ClientWebSocket_tA2D70722EB2DD788E27D46C7E262C85C984EEE09 * L_19 = L_18->get_m_Socket_7();
			bool L_20;
			L_20 = Monitor_TryEnter_m84F72176BCC72F6E07481CD969B4283C4BDBFC3D(L_19, ((int32_t)1000), /*hidden argument*/NULL);
			if (L_20)
			{
				goto IL_00f6;
			}
		}

IL_007e:
		{
			// await m_Socket.CloseAsync(WebSocketCloseStatus.InternalServerError, string.Empty, m_CancellationToken);
			WebSocket_t5FA66A4CDB32ECEC66E8A22DA5C2F3F778802646 * L_21 = V_1;
			NullCheck(L_21);
			ClientWebSocket_tA2D70722EB2DD788E27D46C7E262C85C984EEE09 * L_22 = L_21->get_m_Socket_7();
			String_t* L_23 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			WebSocket_t5FA66A4CDB32ECEC66E8A22DA5C2F3F778802646 * L_24 = V_1;
			NullCheck(L_24);
			CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  L_25 = L_24->get_m_CancellationToken_9();
			NullCheck(L_22);
			Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_26;
			L_26 = VirtFuncInvoker3< Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *, int32_t, String_t*, CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  >::Invoke(7 /* System.Threading.Tasks.Task System.Net.WebSockets.WebSocket::CloseAsync(System.Net.WebSockets.WebSocketCloseStatus,System.String,System.Threading.CancellationToken) */, L_22, ((int32_t)1011), L_23, L_25);
			NullCheck(L_26);
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_27;
			L_27 = Task_GetAwaiter_m1FF7528A8FE13F79207DFE970F642078EF6B1260(L_26, /*hidden argument*/NULL);
			V_5 = L_27;
			bool L_28;
			L_28 = TaskAwaiter_get_IsCompleted_m6F97613C55E505B5664C3C0CFC4677D296EAA8BC((TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_5), /*hidden argument*/NULL);
			if (L_28)
			{
				goto IL_00ea;
			}
		}

IL_00a9:
		{
			int32_t L_29 = 0;
			V_0 = L_29;
			__this->set_U3CU3E1__state_0(L_29);
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_30 = V_5;
			__this->set_U3CU3Eu__1_6(L_30);
			AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_31 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CSendMessageU3Ed__32_t98E469030BF6849D4377D3C2EC6B58D959874AF7_m3BEB6369909AD4257D33A9C83136C0D54D5ABC7F((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_31, (TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_5), (U3CSendMessageU3Ed__32_t98E469030BF6849D4377D3C2EC6B58D959874AF7 *)__this, /*hidden argument*/AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CSendMessageU3Ed__32_t98E469030BF6849D4377D3C2EC6B58D959874AF7_m3BEB6369909AD4257D33A9C83136C0D54D5ABC7F_RuntimeMethod_var);
			goto IL_022a;
		}

IL_00cd:
		{
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_32 = __this->get_U3CU3Eu__1_6();
			V_5 = L_32;
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * L_33 = __this->get_address_of_U3CU3Eu__1_6();
			il2cpp_codegen_initobj(L_33, sizeof(TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C ));
			int32_t L_34 = (-1);
			V_0 = L_34;
			__this->set_U3CU3E1__state_0(L_34);
		}

IL_00ea:
		{
			TaskAwaiter_GetResult_m578EEFEC4DD1AE5E77C899B8BAA3825EB79D1330((TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_5), /*hidden argument*/NULL);
			// return;
			goto IL_0217;
		}

IL_00f6:
		{
		}

IL_00f7:
		try
		{ // begin try (depth: 2)
			// var t = m_Socket.SendAsync(buffer, messageType, true, m_CancellationToken);
			WebSocket_t5FA66A4CDB32ECEC66E8A22DA5C2F3F778802646 * L_35 = V_1;
			NullCheck(L_35);
			ClientWebSocket_tA2D70722EB2DD788E27D46C7E262C85C984EEE09 * L_36 = L_35->get_m_Socket_7();
			ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  L_37 = __this->get_buffer_2();
			int32_t L_38 = __this->get_messageType_4();
			WebSocket_t5FA66A4CDB32ECEC66E8A22DA5C2F3F778802646 * L_39 = V_1;
			NullCheck(L_39);
			CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  L_40 = L_39->get_m_CancellationToken_9();
			NullCheck(L_36);
			Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_41;
			L_41 = VirtFuncInvoker4< Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *, ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE , int32_t, bool, CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  >::Invoke(11 /* System.Threading.Tasks.Task System.Net.WebSockets.WebSocket::SendAsync(System.ArraySegment`1<System.Byte>,System.Net.WebSockets.WebSocketMessageType,System.Boolean,System.Threading.CancellationToken) */, L_36, L_37, L_38, (bool)1, L_40);
			// t.Wait(m_CancellationToken);
			WebSocket_t5FA66A4CDB32ECEC66E8A22DA5C2F3F778802646 * L_42 = V_1;
			NullCheck(L_42);
			CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  L_43 = L_42->get_m_CancellationToken_9();
			NullCheck(L_41);
			Task_Wait_mCBC1BDB8521568A8D287560A082020CF2B3AF058(L_41, L_43, /*hidden argument*/NULL);
			// }
			IL2CPP_LEAVE(0x132, FINALLY_0122);
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_0122;
		}

FINALLY_0122:
		{ // begin finally (depth: 2)
			{
				int32_t L_44 = V_0;
				if ((((int32_t)L_44) >= ((int32_t)0)))
				{
					goto IL_0131;
				}
			}

IL_0126:
			{
				// Monitor.Exit(m_Socket);
				WebSocket_t5FA66A4CDB32ECEC66E8A22DA5C2F3F778802646 * L_45 = V_1;
				NullCheck(L_45);
				ClientWebSocket_tA2D70722EB2DD788E27D46C7E262C85C984EEE09 * L_46 = L_45->get_m_Socket_7();
				Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_46, /*hidden argument*/NULL);
			}

IL_0131:
			{
				IL2CPP_END_FINALLY(290)
			}
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(290)
		{
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
			IL2CPP_JUMP_TBL(0x132, IL_0132)
		}

IL_0132:
		{
			// lock (OutgoingMessageLock)
			WebSocket_t5FA66A4CDB32ECEC66E8A22DA5C2F3F778802646 * L_47 = V_1;
			NullCheck(L_47);
			RuntimeObject * L_48 = L_47->get_OutgoingMessageLock_10();
			V_3 = L_48;
			V_4 = (bool)0;
		}

IL_013c:
		try
		{ // begin try (depth: 2)
			RuntimeObject * L_49 = V_3;
			Monitor_Enter_mBEB6CC84184B46F26375EC3FC8921D16E48EA4C4(L_49, (bool*)(&V_4), /*hidden argument*/NULL);
			// isSending = false;
			WebSocket_t5FA66A4CDB32ECEC66E8A22DA5C2F3F778802646 * L_50 = V_1;
			NullCheck(L_50);
			L_50->set_isSending_12((bool)0);
			// }
			IL2CPP_LEAVE(0x15C, FINALLY_014d);
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_014d;
		}

FINALLY_014d:
		{ // begin finally (depth: 2)
			{
				int32_t L_51 = V_0;
				if ((((int32_t)L_51) >= ((int32_t)0)))
				{
					goto IL_015b;
				}
			}

IL_0151:
			{
				bool L_52 = V_4;
				if (!L_52)
				{
					goto IL_015b;
				}
			}

IL_0155:
			{
				RuntimeObject * L_53 = V_3;
				Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_53, /*hidden argument*/NULL);
			}

IL_015b:
			{
				IL2CPP_END_FINALLY(333)
			}
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(333)
		{
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
			IL2CPP_JUMP_TBL(0x15C, IL_015c)
		}

IL_015c:
		{
			// await HandleQueue(queue, messageType);
			WebSocket_t5FA66A4CDB32ECEC66E8A22DA5C2F3F778802646 * L_54 = V_1;
			List_1_tAC5780506F34558E53CD51BF8B2E6633C667059B * L_55 = __this->get_queue_5();
			int32_t L_56 = __this->get_messageType_4();
			NullCheck(L_54);
			Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_57;
			L_57 = WebSocket_HandleQueue_mB9F63BE2C41A82F9DCBB0DF3807D1F5F0B89E457(L_54, L_55, L_56, /*hidden argument*/NULL);
			NullCheck(L_57);
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_58;
			L_58 = Task_GetAwaiter_m1FF7528A8FE13F79207DFE970F642078EF6B1260(L_57, /*hidden argument*/NULL);
			V_5 = L_58;
			bool L_59;
			L_59 = TaskAwaiter_get_IsCompleted_m6F97613C55E505B5664C3C0CFC4677D296EAA8BC((TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_5), /*hidden argument*/NULL);
			if (L_59)
			{
				goto IL_01bf;
			}
		}

IL_017e:
		{
			int32_t L_60 = 1;
			V_0 = L_60;
			__this->set_U3CU3E1__state_0(L_60);
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_61 = V_5;
			__this->set_U3CU3Eu__1_6(L_61);
			AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_62 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CSendMessageU3Ed__32_t98E469030BF6849D4377D3C2EC6B58D959874AF7_m3BEB6369909AD4257D33A9C83136C0D54D5ABC7F((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_62, (TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_5), (U3CSendMessageU3Ed__32_t98E469030BF6849D4377D3C2EC6B58D959874AF7 *)__this, /*hidden argument*/AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CSendMessageU3Ed__32_t98E469030BF6849D4377D3C2EC6B58D959874AF7_m3BEB6369909AD4257D33A9C83136C0D54D5ABC7F_RuntimeMethod_var);
			goto IL_022a;
		}

IL_01a2:
		{
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_63 = __this->get_U3CU3Eu__1_6();
			V_5 = L_63;
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * L_64 = __this->get_address_of_U3CU3Eu__1_6();
			il2cpp_codegen_initobj(L_64, sizeof(TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C ));
			int32_t L_65 = (-1);
			V_0 = L_65;
			__this->set_U3CU3E1__state_0(L_65);
		}

IL_01bf:
		{
			TaskAwaiter_GetResult_m578EEFEC4DD1AE5E77C899B8BAA3825EB79D1330((TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_5), /*hidden argument*/NULL);
			// }
			goto IL_01fc;
		}

IL_01c8:
		{
			// lock (OutgoingMessageLock)
			WebSocket_t5FA66A4CDB32ECEC66E8A22DA5C2F3F778802646 * L_66 = V_1;
			NullCheck(L_66);
			RuntimeObject * L_67 = L_66->get_OutgoingMessageLock_10();
			V_3 = L_67;
			V_4 = (bool)0;
		}

IL_01d2:
		try
		{ // begin try (depth: 2)
			RuntimeObject * L_68 = V_3;
			Monitor_Enter_mBEB6CC84184B46F26375EC3FC8921D16E48EA4C4(L_68, (bool*)(&V_4), /*hidden argument*/NULL);
			// queue.Add(buffer);
			List_1_tAC5780506F34558E53CD51BF8B2E6633C667059B * L_69 = __this->get_queue_5();
			ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  L_70 = __this->get_buffer_2();
			NullCheck(L_69);
			List_1_Add_m7382F9FB42CFCC39EB42749795866FD34FC9B736(L_69, L_70, /*hidden argument*/List_1_Add_m7382F9FB42CFCC39EB42749795866FD34FC9B736_RuntimeMethod_var);
			// }
			IL2CPP_LEAVE(0x1FC, FINALLY_01ed);
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_01ed;
		}

FINALLY_01ed:
		{ // begin finally (depth: 2)
			{
				int32_t L_71 = V_0;
				if ((((int32_t)L_71) >= ((int32_t)0)))
				{
					goto IL_01fb;
				}
			}

IL_01f1:
			{
				bool L_72 = V_4;
				if (!L_72)
				{
					goto IL_01fb;
				}
			}

IL_01f5:
			{
				RuntimeObject * L_73 = V_3;
				Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_73, /*hidden argument*/NULL);
			}

IL_01fb:
			{
				IL2CPP_END_FINALLY(493)
			}
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(493)
		{
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
			IL2CPP_JUMP_TBL(0x1FC, IL_01fc)
		}

IL_01fc:
		{
			goto IL_0217;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_01fe;
		}
		throw e;
	}

CATCH_01fe:
	{ // begin catch(System.Exception)
		V_6 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_74 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_75 = V_6;
		AsyncTaskMethodBuilder_SetException_m54A9FC97C33C9AC4E514923F7C58D76B94D344C4((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_74, L_75, /*hidden argument*/NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_022a;
	} // end catch (depth: 1)

IL_0217:
	{
		// }
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_76 = __this->get_address_of_U3CU3Et__builder_1();
		AsyncTaskMethodBuilder_SetResult_m89AF7435D1B349EE8A377B5DFFC082999D9F8CD9((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_76, /*hidden argument*/NULL);
	}

IL_022a:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CSendMessageU3Ed__32_MoveNext_m03D4A1E1C7ED7A2B4F95D065FAD62B7A7E89C223_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CSendMessageU3Ed__32_t98E469030BF6849D4377D3C2EC6B58D959874AF7 * _thisAdjusted = reinterpret_cast<U3CSendMessageU3Ed__32_t98E469030BF6849D4377D3C2EC6B58D959874AF7 *>(__this + _offset);
	U3CSendMessageU3Ed__32_MoveNext_m03D4A1E1C7ED7A2B4F95D065FAD62B7A7E89C223(_thisAdjusted, method);
}
// System.Void NativeWebSocket.WebSocket/<SendMessage>d__32::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSendMessageU3Ed__32_SetStateMachine_m44B373F7BB911BA5865D020C46CBA3294F335FC9 (U3CSendMessageU3Ed__32_t98E469030BF6849D4377D3C2EC6B58D959874AF7 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	{
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_0 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncTaskMethodBuilder_SetStateMachine_m68788E9C6C30BBAA030DEC1963E8A6C6B2C8A3E6((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CSendMessageU3Ed__32_SetStateMachine_m44B373F7BB911BA5865D020C46CBA3294F335FC9_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CSendMessageU3Ed__32_t98E469030BF6849D4377D3C2EC6B58D959874AF7 * _thisAdjusted = reinterpret_cast<U3CSendMessageU3Ed__32_t98E469030BF6849D4377D3C2EC6B58D959874AF7 *>(__this + _offset);
	U3CSendMessageU3Ed__32_SetStateMachine_m44B373F7BB911BA5865D020C46CBA3294F335FC9(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MainThreadUtil_set_Instance_mE36406ACB810770A02870BBDB59F6AAB15749CC9_inline (MainThreadUtil_t5C0093E7A5EC95A615FCFFB62C0135DBB840E1D0 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MainThreadUtil_t5C0093E7A5EC95A615FCFFB62C0135DBB840E1D0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static MainThreadUtil Instance { get; private set; }
		MainThreadUtil_t5C0093E7A5EC95A615FCFFB62C0135DBB840E1D0 * L_0 = ___value0;
		((MainThreadUtil_t5C0093E7A5EC95A615FCFFB62C0135DBB840E1D0_StaticFields*)il2cpp_codegen_static_fields_for(MainThreadUtil_t5C0093E7A5EC95A615FCFFB62C0135DBB840E1D0_il2cpp_TypeInfo_var))->set_U3CInstanceU3Ek__BackingField_4(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MainThreadUtil_set_synchronizationContext_m202245B8B916BBC291BCBED5E72432402E90813C_inline (SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MainThreadUtil_t5C0093E7A5EC95A615FCFFB62C0135DBB840E1D0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static SynchronizationContext synchronizationContext { get; private set; }
		SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * L_0 = ___value0;
		((MainThreadUtil_t5C0093E7A5EC95A615FCFFB62C0135DBB840E1D0_StaticFields*)il2cpp_codegen_static_fields_for(MainThreadUtil_t5C0093E7A5EC95A615FCFFB62C0135DBB840E1D0_il2cpp_TypeInfo_var))->set_U3CsynchronizationContextU3Ek__BackingField_5(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * MainThreadUtil_get_synchronizationContext_m4ADF2BF9393F1353703851A44B0CCC692991A5E9_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MainThreadUtil_t5C0093E7A5EC95A615FCFFB62C0135DBB840E1D0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static SynchronizationContext synchronizationContext { get; private set; }
		SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * L_0 = ((MainThreadUtil_t5C0093E7A5EC95A615FCFFB62C0135DBB840E1D0_StaticFields*)il2cpp_codegen_static_fields_for(MainThreadUtil_t5C0093E7A5EC95A615FCFFB62C0135DBB840E1D0_il2cpp_TypeInfo_var))->get_U3CsynchronizationContextU3Ek__BackingField_5();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C  ConfiguredTaskAwaitable_GetAwaiter_m9F912D7DF74F087AFAF1F478CE59152DF22395A2_inline (ConfiguredTaskAwaitable_t4B703D7D241C339E7814EFFE5D266424E90BCE1E * __this, const RuntimeMethod* method)
{
	{
		ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C  L_0 = __this->get_m_configuredTaskAwaiter_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MainThreadUtil_t5C0093E7A5EC95A615FCFFB62C0135DBB840E1D0 * MainThreadUtil_get_Instance_mCFF83408C438B83E56B4DDB397AF30E461D4B2CE_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MainThreadUtil_t5C0093E7A5EC95A615FCFFB62C0135DBB840E1D0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static MainThreadUtil Instance { get; private set; }
		MainThreadUtil_t5C0093E7A5EC95A615FCFFB62C0135DBB840E1D0 * L_0 = ((MainThreadUtil_t5C0093E7A5EC95A615FCFFB62C0135DBB840E1D0_StaticFields*)il2cpp_codegen_static_fields_for(MainThreadUtil_t5C0093E7A5EC95A615FCFFB62C0135DBB840E1D0_il2cpp_TypeInfo_var))->get_U3CInstanceU3Ek__BackingField_4();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MainThreadAwaiter_set_IsCompleted_mD648A7D44B393AC9F2BF4BF4FB97C81C02175891_inline (MainThreadAwaiter_t07EC1C94003617C1B1C0EEF3FDE6C52A66F42FC1 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool IsCompleted { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CIsCompletedU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ClientWebSocketOptions_t542669394208DA09FBC06141585E0CA380ACEC85 * ClientWebSocket_get_Options_m18F5E10870627D19E76D2B8D6F64E5076EC9D78C_inline (ClientWebSocket_tA2D70722EB2DD788E27D46C7E262C85C984EEE09 * __this, const RuntimeMethod* method)
{
	{
		ClientWebSocketOptions_t542669394208DA09FBC06141585E0CA380ACEC85 * L_0 = __this->get__options_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t WebSocketReceiveResult_get_Count_m9A22CB095E69E1DE69FDA79295ECC5BE8A147CB9_inline (WebSocketReceiveResult_tEB9BD882DB3C2B94DFDA4655DAD6DFD2DDF85122 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CCountU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool WebSocketReceiveResult_get_EndOfMessage_m233182D8ABF49FEE3C82D6C217CAAC5922104F57_inline (WebSocketReceiveResult_tEB9BD882DB3C2B94DFDA4655DAD6DFD2DDF85122 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_U3CEndOfMessageU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t WebSocketReceiveResult_get_MessageType_mBE189CACCE7DCDC1C5C0CF9873DD3290BC686478_inline (WebSocketReceiveResult_tEB9BD882DB3C2B94DFDA4655DAD6DFD2DDF85122 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CMessageTypeU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_tEEF07CE805E86A33961C7C0AE095FA4A628605C6  WebSocketReceiveResult_get_CloseStatus_m92539B962F06EB04D7D3728893927435D0037FFF_inline (WebSocketReceiveResult_tEB9BD882DB3C2B94DFDA4655DAD6DFD2DDF85122 * __this, const RuntimeMethod* method)
{
	{
		Nullable_1_tEEF07CE805E86A33961C7C0AE095FA4A628605C6  L_0 = __this->get_U3CCloseStatusU3Ek__BackingField_3();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool MainThreadAwaiter_get_IsCompleted_m71FB3B9EB749E398BAEF85167D0A10959BFE1E27_inline (MainThreadAwaiter_t07EC1C94003617C1B1C0EEF3FDE6C52A66F42FC1 * __this, const RuntimeMethod* method)
{
	{
		// public bool IsCompleted { get; set; }
		bool L_0 = __this->get_U3CIsCompletedU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = (int32_t)__this->get__size_2();
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929(/*hidden argument*/NULL);
	}

IL_000e:
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get__items_1();
		int32_t L_3 = ___index0;
		RuntimeObject * L_4;
		L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_2, (int32_t)L_3);
		return (RuntimeObject *)L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  Enumerator_get_Current_m17E1C36ECBB09CC2AB892710866F8655D83A6048_gshared_inline (Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0 * __this, const RuntimeMethod* method)
{
	{
		KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  L_0 = (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 )__this->get_current_3();
		return (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 )L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Key_mCAD7B121DB998D7C56EB0281215A860EFE9DCD95_gshared_inline (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_key_0();
		return (RuntimeObject *)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Value_m622223593F7461E7812C581DDB145270016ED303_gshared_inline (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_value_1();
		return (RuntimeObject *)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_current_3();
		return (RuntimeObject *)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m7D8A7D7BE06561F4695456CA5B4696E85DD6C84B_gshared_inline (List_1_tAC5780506F34558E53CD51BF8B2E6633C667059B * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  List_1_get_Item_mBB7B78C8411D5DB18818B1BD99D1D4E29F2EF39B_gshared_inline (List_1_tAC5780506F34558E53CD51BF8B2E6633C667059B * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = (int32_t)__this->get__size_2();
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929(/*hidden argument*/NULL);
	}

IL_000e:
	{
		ArraySegment_1U5BU5D_t821BA8E5F776D41AA08A36AF8AD2D3FC6B12EDE4* L_2 = (ArraySegment_1U5BU5D_t821BA8E5F776D41AA08A36AF8AD2D3FC6B12EDE4*)__this->get__items_1();
		int32_t L_3 = ___index0;
		ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  L_4;
		L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((ArraySegment_1U5BU5D_t821BA8E5F776D41AA08A36AF8AD2D3FC6B12EDE4*)L_2, (int32_t)L_3);
		return (ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE )L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ArraySegment_1_get_Count_mC13AC26CCFD0EACBCC08F24F2A7BB22841B44C32_gshared_inline (ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__count_2();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ArraySegment_1_get_Array_m3D83A2CFF4D51F8ED83C89538616FF0A700F463C_gshared_inline (ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE * __this, const RuntimeMethod* method)
{
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)__this->get__array_0();
		return (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ArraySegment_1_get_Offset_m13F255A2A7A730982F330A448FCB32239782C505_gshared_inline (ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__offset_1();
		return (int32_t)L_0;
	}
}
