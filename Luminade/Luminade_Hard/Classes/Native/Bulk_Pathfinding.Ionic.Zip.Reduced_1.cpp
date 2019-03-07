#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "il2cpp-class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"

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
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
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
template <typename R, typename T1>
struct GenericVirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
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
template <typename R, typename T1>
struct GenericInterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// Microsoft.Win32.SafeHandles.SafeWaitHandle
struct SafeWaitHandle_t1972936122;
// Pathfinding.Ionic.Crc.CRC32
struct CRC32_t288211679;
// Pathfinding.Ionic.Zlib.DeflateManager
struct DeflateManager_t3554793512;
// Pathfinding.Ionic.Zlib.DeflateManager/CompressFunc
struct CompressFunc_t2219633776;
// Pathfinding.Ionic.Zlib.DeflateManager/Config
struct Config_t3362677528;
// Pathfinding.Ionic.Zlib.DeflateManager/Config[]
struct ConfigU5BU5D_t3063149961;
// Pathfinding.Ionic.Zlib.DeflateStream
struct DeflateStream_t475334119;
// Pathfinding.Ionic.Zlib.GZipStream
struct GZipStream_t4208907177;
// Pathfinding.Ionic.Zlib.InfTree
struct InfTree_t2692649235;
// Pathfinding.Ionic.Zlib.InflateBlocks
struct InflateBlocks_t4119258979;
// Pathfinding.Ionic.Zlib.InflateCodes
struct InflateCodes_t3940108927;
// Pathfinding.Ionic.Zlib.InflateManager
struct InflateManager_t3682621372;
// Pathfinding.Ionic.Zlib.ParallelDeflateOutputStream
struct ParallelDeflateOutputStream_t2527365669;
// Pathfinding.Ionic.Zlib.StaticTree
struct StaticTree_t3743034110;
// Pathfinding.Ionic.Zlib.Tree
struct Tree_t776904304;
// Pathfinding.Ionic.Zlib.WorkItem
struct WorkItem_t2706050929;
// Pathfinding.Ionic.Zlib.WorkItem[]
struct WorkItemU5BU5D_t3948263340;
// Pathfinding.Ionic.Zlib.ZlibBaseStream
struct ZlibBaseStream_t3561210688;
// Pathfinding.Ionic.Zlib.ZlibCodec
struct ZlibCodec_t855427629;
// Pathfinding.Ionic.Zlib.ZlibException
struct ZlibException_t3942143964;
// System.ArgumentException
struct ArgumentException_t132251570;
// System.ArgumentNullException
struct ArgumentNullException_t1615371798;
// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_t777629997;
// System.AsyncCallback
struct AsyncCallback_t3962456242;
// System.Byte[]
struct ByteU5BU5D_t4116647657;
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.Collections.Generic.List`1<Pathfinding.Ionic.Zlib.WorkItem>
struct List_1_t4178125671;
// System.Collections.Generic.List`1<System.Byte>
struct List_1_t2606371118;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t257213610;
// System.Collections.Generic.Queue`1<System.Int32>
struct Queue_1_t2797205247;
// System.Collections.IDictionary
struct IDictionary_t1363984059;
// System.DelegateData
struct DelegateData_t1677132599;
// System.Exception
struct Exception_t;
// System.IAsyncResult
struct IAsyncResult_t767004451;
// System.IO.Stream
struct Stream_t1273022909;
// System.Int16[]
struct Int16U5BU5D_t3686840178;
// System.Int32[]
struct Int32U5BU5D_t385246372;
// System.Int32[][]
struct Int32U5BU5DU5BU5D_t3365920845;
// System.IntPtr[]
struct IntPtrU5BU5D_t4013366056;
// System.InvalidOperationException
struct InvalidOperationException_t56020091;
// System.NotImplementedException
struct NotImplementedException_t3489357830;
// System.NotSupportedException
struct NotSupportedException_t1314879016;
// System.ObjectDisposedException
struct ObjectDisposedException_t21392786;
// System.Object[]
struct ObjectU5BU5D_t2843939325;
// System.Reflection.Assembly
struct Assembly_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Runtime.Remoting.ServerIdentity
struct ServerIdentity_t2342208608;
// System.SByte[]
struct SByteU5BU5D_t2651576203;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t1281789340;
// System.Text.DecoderFallback
struct DecoderFallback_t3123823036;
// System.Text.EncoderFallback
struct EncoderFallback_t1188251036;
// System.Text.Encoding
struct Encoding_t1523322056;
// System.Threading.AutoResetEvent
struct AutoResetEvent_t1333520283;
// System.Threading.EventWaitHandle
struct EventWaitHandle_t777845177;
// System.Threading.WaitCallback
struct WaitCallback_t2448485498;
// System.UInt32[]
struct UInt32U5BU5D_t2770800703;
// System.Void
struct Void_t1185182177;

extern RuntimeClass* Adler_t3126894214_il2cpp_TypeInfo_var;
extern RuntimeClass* ArgumentException_t132251570_il2cpp_TypeInfo_var;
extern RuntimeClass* ArgumentNullException_t1615371798_il2cpp_TypeInfo_var;
extern RuntimeClass* ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var;
extern RuntimeClass* AutoResetEvent_t1333520283_il2cpp_TypeInfo_var;
extern RuntimeClass* BitConverter_t3118986983_il2cpp_TypeInfo_var;
extern RuntimeClass* ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var;
extern RuntimeClass* CRC32_t288211679_il2cpp_TypeInfo_var;
extern RuntimeClass* ConfigU5BU5D_t3063149961_il2cpp_TypeInfo_var;
extern RuntimeClass* Config_t3362677528_il2cpp_TypeInfo_var;
extern RuntimeClass* DateTime_t3738529785_il2cpp_TypeInfo_var;
extern RuntimeClass* DeflateManager_t3554793512_il2cpp_TypeInfo_var;
extern RuntimeClass* Encoding_t1523322056_il2cpp_TypeInfo_var;
extern RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
extern RuntimeClass* FlushType_t281923595_il2cpp_TypeInfo_var;
extern RuntimeClass* GZipStream_t4208907177_il2cpp_TypeInfo_var;
extern RuntimeClass* InfTree_t2692649235_il2cpp_TypeInfo_var;
extern RuntimeClass* InflateBlocks_t4119258979_il2cpp_TypeInfo_var;
extern RuntimeClass* InflateCodes_t3940108927_il2cpp_TypeInfo_var;
extern RuntimeClass* InflateManager_t3682621372_il2cpp_TypeInfo_var;
extern RuntimeClass* Int16U5BU5D_t3686840178_il2cpp_TypeInfo_var;
extern RuntimeClass* Int32U5BU5DU5BU5D_t3365920845_il2cpp_TypeInfo_var;
extern RuntimeClass* Int32U5BU5D_t385246372_il2cpp_TypeInfo_var;
extern RuntimeClass* Int32_t2950945753_il2cpp_TypeInfo_var;
extern RuntimeClass* InternalConstants_t3209989667_il2cpp_TypeInfo_var;
extern RuntimeClass* InternalInflateConstants_t2469443330_il2cpp_TypeInfo_var;
extern RuntimeClass* InvalidOperationException_t56020091_il2cpp_TypeInfo_var;
extern RuntimeClass* List_1_t2606371118_il2cpp_TypeInfo_var;
extern RuntimeClass* List_1_t4178125671_il2cpp_TypeInfo_var;
extern RuntimeClass* NotImplementedException_t3489357830_il2cpp_TypeInfo_var;
extern RuntimeClass* NotSupportedException_t1314879016_il2cpp_TypeInfo_var;
extern RuntimeClass* ObjectDisposedException_t21392786_il2cpp_TypeInfo_var;
extern RuntimeClass* ParallelDeflateOutputStream_t2527365669_il2cpp_TypeInfo_var;
extern RuntimeClass* Path_t1605229823_il2cpp_TypeInfo_var;
extern RuntimeClass* Queue_1_t2797205247_il2cpp_TypeInfo_var;
extern RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
extern RuntimeClass* SByteU5BU5D_t2651576203_il2cpp_TypeInfo_var;
extern RuntimeClass* StaticTree_t3743034110_il2cpp_TypeInfo_var;
extern RuntimeClass* Stream_t1273022909_il2cpp_TypeInfo_var;
extern RuntimeClass* String_t_il2cpp_TypeInfo_var;
extern RuntimeClass* Tree_t776904304_il2cpp_TypeInfo_var;
extern RuntimeClass* WaitCallback_t2448485498_il2cpp_TypeInfo_var;
extern RuntimeClass* WorkItem_t2706050929_il2cpp_TypeInfo_var;
extern RuntimeClass* ZlibBaseStream_t3561210688_il2cpp_TypeInfo_var;
extern RuntimeClass* ZlibCodec_t855427629_il2cpp_TypeInfo_var;
extern RuntimeClass* ZlibException_t3942143964_il2cpp_TypeInfo_var;
extern RuntimeField* U3CPrivateImplementationDetailsU3EU7B99f15b47U2D93f0U2D442dU2Da950U2D84e2e79a92c8U7D_t3841250540____U24fieldU2D10_12_FieldInfo_var;
extern RuntimeField* U3CPrivateImplementationDetailsU3EU7B99f15b47U2D93f0U2D442dU2Da950U2D84e2e79a92c8U7D_t3841250540____U24fieldU2D11_13_FieldInfo_var;
extern RuntimeField* U3CPrivateImplementationDetailsU3EU7B99f15b47U2D93f0U2D442dU2Da950U2D84e2e79a92c8U7D_t3841250540____U24fieldU2D12_14_FieldInfo_var;
extern RuntimeField* U3CPrivateImplementationDetailsU3EU7B99f15b47U2D93f0U2D442dU2Da950U2D84e2e79a92c8U7D_t3841250540____U24fieldU2D13_15_FieldInfo_var;
extern RuntimeField* U3CPrivateImplementationDetailsU3EU7B99f15b47U2D93f0U2D442dU2Da950U2D84e2e79a92c8U7D_t3841250540____U24fieldU2D14_16_FieldInfo_var;
extern RuntimeField* U3CPrivateImplementationDetailsU3EU7B99f15b47U2D93f0U2D442dU2Da950U2D84e2e79a92c8U7D_t3841250540____U24fieldU2D15_17_FieldInfo_var;
extern RuntimeField* U3CPrivateImplementationDetailsU3EU7B99f15b47U2D93f0U2D442dU2Da950U2D84e2e79a92c8U7D_t3841250540____U24fieldU2D16_18_FieldInfo_var;
extern RuntimeField* U3CPrivateImplementationDetailsU3EU7B99f15b47U2D93f0U2D442dU2Da950U2D84e2e79a92c8U7D_t3841250540____U24fieldU2D5_1_FieldInfo_var;
extern RuntimeField* U3CPrivateImplementationDetailsU3EU7B99f15b47U2D93f0U2D442dU2Da950U2D84e2e79a92c8U7D_t3841250540____U24fieldU2D6_2_FieldInfo_var;
extern RuntimeField* U3CPrivateImplementationDetailsU3EU7B99f15b47U2D93f0U2D442dU2Da950U2D84e2e79a92c8U7D_t3841250540____U24fieldU2D7_3_FieldInfo_var;
extern RuntimeField* U3CPrivateImplementationDetailsU3EU7B99f15b47U2D93f0U2D442dU2Da950U2D84e2e79a92c8U7D_t3841250540____U24fieldU2D8_4_FieldInfo_var;
extern RuntimeField* U3CPrivateImplementationDetailsU3EU7B99f15b47U2D93f0U2D442dU2Da950U2D84e2e79a92c8U7D_t3841250540____U24fieldU2D9_5_FieldInfo_var;
extern RuntimeField* U3CPrivateImplementationDetailsU3EU7B99f15b47U2D93f0U2D442dU2Da950U2D84e2e79a92c8U7D_t3841250540____U24fieldU2DA_6_FieldInfo_var;
extern RuntimeField* U3CPrivateImplementationDetailsU3EU7B99f15b47U2D93f0U2D442dU2Da950U2D84e2e79a92c8U7D_t3841250540____U24fieldU2DB_7_FieldInfo_var;
extern RuntimeField* U3CPrivateImplementationDetailsU3EU7B99f15b47U2D93f0U2D442dU2Da950U2D84e2e79a92c8U7D_t3841250540____U24fieldU2DC_8_FieldInfo_var;
extern RuntimeField* U3CPrivateImplementationDetailsU3EU7B99f15b47U2D93f0U2D442dU2Da950U2D84e2e79a92c8U7D_t3841250540____U24fieldU2DD_9_FieldInfo_var;
extern RuntimeField* U3CPrivateImplementationDetailsU3EU7B99f15b47U2D93f0U2D442dU2Da950U2D84e2e79a92c8U7D_t3841250540____U24fieldU2DE_10_FieldInfo_var;
extern RuntimeField* U3CPrivateImplementationDetailsU3EU7B99f15b47U2D93f0U2D442dU2Da950U2D84e2e79a92c8U7D_t3841250540____U24fieldU2DF_11_FieldInfo_var;
extern String_t* _stringLiteral1082126080;
extern String_t* _stringLiteral1172543146;
extern String_t* _stringLiteral1198825947;
extern String_t* _stringLiteral1557091951;
extern String_t* _stringLiteral1602692132;
extern String_t* _stringLiteral1632380673;
extern String_t* _stringLiteral1695370412;
extern String_t* _stringLiteral1697005394;
extern String_t* _stringLiteral1826280742;
extern String_t* _stringLiteral187030262;
extern String_t* _stringLiteral1925293292;
extern String_t* _stringLiteral1934335260;
extern String_t* _stringLiteral2002595880;
extern String_t* _stringLiteral2025561382;
extern String_t* _stringLiteral2050137400;
extern String_t* _stringLiteral211766613;
extern String_t* _stringLiteral2141582119;
extern String_t* _stringLiteral2170521191;
extern String_t* _stringLiteral2190778985;
extern String_t* _stringLiteral2222283939;
extern String_t* _stringLiteral2273615499;
extern String_t* _stringLiteral2274994096;
extern String_t* _stringLiteral2303578358;
extern String_t* _stringLiteral2309888372;
extern String_t* _stringLiteral2353645521;
extern String_t* _stringLiteral2424698027;
extern String_t* _stringLiteral2443272288;
extern String_t* _stringLiteral2473209919;
extern String_t* _stringLiteral253958326;
extern String_t* _stringLiteral2542349176;
extern String_t* _stringLiteral2599125110;
extern String_t* _stringLiteral2599821629;
extern String_t* _stringLiteral2610389508;
extern String_t* _stringLiteral2706553987;
extern String_t* _stringLiteral2732742904;
extern String_t* _stringLiteral2773167031;
extern String_t* _stringLiteral2805817557;
extern String_t* _stringLiteral2995007023;
extern String_t* _stringLiteral3064251135;
extern String_t* _stringLiteral3176807651;
extern String_t* _stringLiteral3241828283;
extern String_t* _stringLiteral3450517398;
extern String_t* _stringLiteral3452614529;
extern String_t* _stringLiteral3452614644;
extern String_t* _stringLiteral3452826457;
extern String_t* _stringLiteral3454384060;
extern String_t* _stringLiteral3454842823;
extern String_t* _stringLiteral3466233701;
extern String_t* _stringLiteral3496442404;
extern String_t* _stringLiteral3939495523;
extern String_t* _stringLiteral4047066308;
extern String_t* _stringLiteral4065135959;
extern String_t* _stringLiteral4131726187;
extern String_t* _stringLiteral4210913594;
extern String_t* _stringLiteral4246376530;
extern String_t* _stringLiteral646863083;
extern String_t* _stringLiteral653669095;
extern String_t* _stringLiteral781983919;
extern String_t* _stringLiteral788423978;
extern String_t* _stringLiteral801382093;
extern String_t* _stringLiteral805964055;
extern String_t* _stringLiteral80618735;
extern String_t* _stringLiteral80935222;
extern String_t* _stringLiteral820318032;
extern const RuntimeMethod* DeflateStream_Flush_m393146983_RuntimeMethod_var;
extern const RuntimeMethod* DeflateStream_Read_m3537371485_RuntimeMethod_var;
extern const RuntimeMethod* DeflateStream_Seek_m514835037_RuntimeMethod_var;
extern const RuntimeMethod* DeflateStream_SetLength_m376888871_RuntimeMethod_var;
extern const RuntimeMethod* DeflateStream_Write_m2646442581_RuntimeMethod_var;
extern const RuntimeMethod* DeflateStream_get_CanRead_m1238003853_RuntimeMethod_var;
extern const RuntimeMethod* DeflateStream_get_CanWrite_m2540911101_RuntimeMethod_var;
extern const RuntimeMethod* DeflateStream_get_Length_m1435244085_RuntimeMethod_var;
extern const RuntimeMethod* DeflateStream_set_BufferSize_m952162683_RuntimeMethod_var;
extern const RuntimeMethod* DeflateStream_set_Position_m1334922663_RuntimeMethod_var;
extern const RuntimeMethod* DeflateStream_set_Strategy_m6117387_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_Dispose_m3632834591_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_MoveNext_m2358318413_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_get_Current_m1777060775_RuntimeMethod_var;
extern const RuntimeMethod* GZipStream_Flush_m1454360200_RuntimeMethod_var;
extern const RuntimeMethod* GZipStream_Read_m1010400840_RuntimeMethod_var;
extern const RuntimeMethod* GZipStream_Seek_m302471040_RuntimeMethod_var;
extern const RuntimeMethod* GZipStream_SetLength_m2241988901_RuntimeMethod_var;
extern const RuntimeMethod* GZipStream_Write_m3471208808_RuntimeMethod_var;
extern const RuntimeMethod* GZipStream_get_CanRead_m1470299676_RuntimeMethod_var;
extern const RuntimeMethod* GZipStream_get_CanWrite_m1194543746_RuntimeMethod_var;
extern const RuntimeMethod* GZipStream_get_Length_m3926558001_RuntimeMethod_var;
extern const RuntimeMethod* GZipStream_set_Comment_m423742318_RuntimeMethod_var;
extern const RuntimeMethod* GZipStream_set_FileName_m3205917940_RuntimeMethod_var;
extern const RuntimeMethod* GZipStream_set_Position_m3742896157_RuntimeMethod_var;
extern const RuntimeMethod* InflateManager_Inflate_m4163498486_RuntimeMethod_var;
extern const RuntimeMethod* InflateManager_Initialize_m1637778925_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Add_m1572258377_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Add_m464853802_RuntimeMethod_var;
extern const RuntimeMethod* List_1_GetEnumerator_m4123270977_RuntimeMethod_var;
extern const RuntimeMethod* List_1_ToArray_m2059327837_RuntimeMethod_var;
extern const RuntimeMethod* List_1__ctor_m1822985305_RuntimeMethod_var;
extern const RuntimeMethod* List_1__ctor_m883961986_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Item_m658768736_RuntimeMethod_var;
extern const RuntimeMethod* Nullable_1__ctor_m1631813323_RuntimeMethod_var;
extern const RuntimeMethod* Nullable_1_get_HasValue_m3507792363_RuntimeMethod_var;
extern const RuntimeMethod* Nullable_1_get_Value_m3011339833_RuntimeMethod_var;
extern const RuntimeMethod* ParallelDeflateOutputStream_Close_m3760413339_RuntimeMethod_var;
extern const RuntimeMethod* ParallelDeflateOutputStream_Flush_m2261587351_RuntimeMethod_var;
extern const RuntimeMethod* ParallelDeflateOutputStream_Read_m1336784324_RuntimeMethod_var;
extern const RuntimeMethod* ParallelDeflateOutputStream_Seek_m2974656278_RuntimeMethod_var;
extern const RuntimeMethod* ParallelDeflateOutputStream_SetLength_m1741036122_RuntimeMethod_var;
extern const RuntimeMethod* ParallelDeflateOutputStream_Write_m1685201846_RuntimeMethod_var;
extern const RuntimeMethod* ParallelDeflateOutputStream__DeflateOne_m1526306249_RuntimeMethod_var;
extern const RuntimeMethod* ParallelDeflateOutputStream__FlushFinish_m1293563418_RuntimeMethod_var;
extern const RuntimeMethod* ParallelDeflateOutputStream__Flush_m2129508559_RuntimeMethod_var;
extern const RuntimeMethod* ParallelDeflateOutputStream_get_Length_m525527501_RuntimeMethod_var;
extern const RuntimeMethod* ParallelDeflateOutputStream_set_BufferSize_m2932976188_RuntimeMethod_var;
extern const RuntimeMethod* ParallelDeflateOutputStream_set_MaxBufferPairs_m811257751_RuntimeMethod_var;
extern const RuntimeMethod* ParallelDeflateOutputStream_set_Position_m1261720496_RuntimeMethod_var;
extern const RuntimeMethod* Queue_1_Clear_m3201131089_RuntimeMethod_var;
extern const RuntimeMethod* Queue_1_Dequeue_m2220656947_RuntimeMethod_var;
extern const RuntimeMethod* Queue_1_Enqueue_m4020669210_RuntimeMethod_var;
extern const RuntimeMethod* Queue_1__ctor_m1580917939_RuntimeMethod_var;
extern const RuntimeMethod* Queue_1_get_Count_m2189316761_RuntimeMethod_var;
extern const RuntimeMethod* ZlibBaseStream_ReadZeroTerminatedString_m511734528_RuntimeMethod_var;
extern const RuntimeMethod* ZlibBaseStream_Read_m2470219779_RuntimeMethod_var;
extern const RuntimeMethod* ZlibBaseStream_Seek_m1647119654_RuntimeMethod_var;
extern const RuntimeMethod* ZlibBaseStream_Write_m1435760464_RuntimeMethod_var;
extern const RuntimeMethod* ZlibBaseStream__ReadAndValidateGzipHeader_m2873668385_RuntimeMethod_var;
extern const RuntimeMethod* ZlibBaseStream_finish_m1911048356_RuntimeMethod_var;
extern const RuntimeMethod* ZlibBaseStream_get_Position_m1658146246_RuntimeMethod_var;
extern const RuntimeMethod* ZlibBaseStream_set_Position_m3707116880_RuntimeMethod_var;
extern const RuntimeMethod* ZlibCodec_Deflate_m110580741_RuntimeMethod_var;
extern const RuntimeMethod* ZlibCodec_EndDeflate_m2070701999_RuntimeMethod_var;
extern const RuntimeMethod* ZlibCodec_EndInflate_m2725978086_RuntimeMethod_var;
extern const RuntimeMethod* ZlibCodec_Inflate_m1006171035_RuntimeMethod_var;
extern const RuntimeMethod* ZlibCodec_InitializeInflate_m150460593_RuntimeMethod_var;
extern const RuntimeMethod* ZlibCodec_ResetDeflate_m1569060282_RuntimeMethod_var;
extern const RuntimeMethod* ZlibCodec__InternalInitializeDeflate_m1783914882_RuntimeMethod_var;
extern const RuntimeMethod* ZlibCodec_flush_pending_m1862003519_RuntimeMethod_var;
extern const uint32_t CompressFunc_BeginInvoke_m3013655697_MetadataUsageId;
extern const uint32_t Config_Lookup_m3425561697_MetadataUsageId;
extern const uint32_t Config__cctor_m2964993941_MetadataUsageId;
extern const uint32_t DeflateStream_Flush_m393146983_MetadataUsageId;
extern const uint32_t DeflateStream_Read_m3537371485_MetadataUsageId;
extern const uint32_t DeflateStream_Seek_m514835037_MetadataUsageId;
extern const uint32_t DeflateStream_SetLength_m376888871_MetadataUsageId;
extern const uint32_t DeflateStream_Write_m2646442581_MetadataUsageId;
extern const uint32_t DeflateStream__ctor_m3294195712_MetadataUsageId;
extern const uint32_t DeflateStream_get_CanRead_m1238003853_MetadataUsageId;
extern const uint32_t DeflateStream_get_CanWrite_m2540911101_MetadataUsageId;
extern const uint32_t DeflateStream_get_Length_m1435244085_MetadataUsageId;
extern const uint32_t DeflateStream_set_BufferSize_m952162683_MetadataUsageId;
extern const uint32_t DeflateStream_set_Position_m1334922663_MetadataUsageId;
extern const uint32_t DeflateStream_set_Strategy_m6117387_MetadataUsageId;
extern const uint32_t GZipStream_EmitHeader_m1512102614_MetadataUsageId;
extern const uint32_t GZipStream_Flush_m1454360200_MetadataUsageId;
extern const uint32_t GZipStream_Read_m1010400840_MetadataUsageId;
extern const uint32_t GZipStream_Seek_m302471040_MetadataUsageId;
extern const uint32_t GZipStream_SetLength_m2241988901_MetadataUsageId;
extern const uint32_t GZipStream_Write_m3471208808_MetadataUsageId;
extern const uint32_t GZipStream__cctor_m403782270_MetadataUsageId;
extern const uint32_t GZipStream_get_CanRead_m1470299676_MetadataUsageId;
extern const uint32_t GZipStream_get_CanWrite_m1194543746_MetadataUsageId;
extern const uint32_t GZipStream_get_Length_m3926558001_MetadataUsageId;
extern const uint32_t GZipStream_set_Comment_m423742318_MetadataUsageId;
extern const uint32_t GZipStream_set_FileName_m3205917940_MetadataUsageId;
extern const uint32_t GZipStream_set_Position_m3742896157_MetadataUsageId;
extern const uint32_t InfTree__cctor_m3760730896_MetadataUsageId;
extern const uint32_t InfTree_inflate_trees_bits_m1558208322_MetadataUsageId;
extern const uint32_t InfTree_inflate_trees_dynamic_m3043938686_MetadataUsageId;
extern const uint32_t InfTree_inflate_trees_fixed_m36146089_MetadataUsageId;
extern const uint32_t InfTree_initWorkArea_m1371470808_MetadataUsageId;
extern const uint32_t InflateBlocks_Flush_m2330293879_MetadataUsageId;
extern const uint32_t InflateBlocks_Process_m3038927653_MetadataUsageId;
extern const uint32_t InflateBlocks_Reset_m1167299319_MetadataUsageId;
extern const uint32_t InflateBlocks__cctor_m576882730_MetadataUsageId;
extern const uint32_t InflateBlocks__ctor_m1052329913_MetadataUsageId;
extern const uint32_t InflateCodes_InflateFast_m1267240824_MetadataUsageId;
extern const uint32_t InflateCodes_Process_m2804328384_MetadataUsageId;
extern const uint32_t InflateManager_Inflate_m4163498486_MetadataUsageId;
extern const uint32_t InflateManager_Initialize_m1637778925_MetadataUsageId;
extern const uint32_t InflateManager__cctor_m1438856959_MetadataUsageId;
extern const uint32_t InternalConstants__cctor_m1151965872_MetadataUsageId;
extern const uint32_t InternalInflateConstants__cctor_m678261186_MetadataUsageId;
extern const uint32_t ParallelDeflateOutputStream_Close_m3760413339_MetadataUsageId;
extern const uint32_t ParallelDeflateOutputStream_EmitPendingBuffers_m2912639916_MetadataUsageId;
extern const uint32_t ParallelDeflateOutputStream_Flush_m2261587351_MetadataUsageId;
extern const uint32_t ParallelDeflateOutputStream_Read_m1336784324_MetadataUsageId;
extern const uint32_t ParallelDeflateOutputStream_Reset_m1022075450_MetadataUsageId;
extern const uint32_t ParallelDeflateOutputStream_Seek_m2974656278_MetadataUsageId;
extern const uint32_t ParallelDeflateOutputStream_SetLength_m1741036122_MetadataUsageId;
extern const uint32_t ParallelDeflateOutputStream_Write_m1685201846_MetadataUsageId;
extern const uint32_t ParallelDeflateOutputStream__DeflateOne_m1526306249_MetadataUsageId;
extern const uint32_t ParallelDeflateOutputStream__FlushFinish_m1293563418_MetadataUsageId;
extern const uint32_t ParallelDeflateOutputStream__Flush_m2129508559_MetadataUsageId;
extern const uint32_t ParallelDeflateOutputStream__InitializePoolOfWorkItems_m3855684877_MetadataUsageId;
extern const uint32_t ParallelDeflateOutputStream__cctor_m3757393707_MetadataUsageId;
extern const uint32_t ParallelDeflateOutputStream__ctor_m1283854089_MetadataUsageId;
extern const uint32_t ParallelDeflateOutputStream_get_Length_m525527501_MetadataUsageId;
extern const uint32_t ParallelDeflateOutputStream_set_BufferSize_m2932976188_MetadataUsageId;
extern const uint32_t ParallelDeflateOutputStream_set_MaxBufferPairs_m811257751_MetadataUsageId;
extern const uint32_t ParallelDeflateOutputStream_set_Position_m1261720496_MetadataUsageId;
extern const uint32_t StaticTree__cctor_m3230077685_MetadataUsageId;
extern const uint32_t Tree_DistanceCode_m2135165113_MetadataUsageId;
extern const uint32_t Tree__cctor_m1905366005_MetadataUsageId;
extern const uint32_t Tree_build_tree_m676301226_MetadataUsageId;
extern const uint32_t Tree_gen_bitlen_m1750572723_MetadataUsageId;
extern const uint32_t Tree_gen_codes_m2921036433_MetadataUsageId;
extern const uint32_t WorkItem__ctor_m105125814_MetadataUsageId;
extern const uint32_t ZlibBaseStream_ReadZeroTerminatedString_m511734528_MetadataUsageId;
extern const uint32_t ZlibBaseStream_Read_m2470219779_MetadataUsageId;
extern const uint32_t ZlibBaseStream_Seek_m1647119654_MetadataUsageId;
extern const uint32_t ZlibBaseStream_Write_m1435760464_MetadataUsageId;
extern const uint32_t ZlibBaseStream__ReadAndValidateGzipHeader_m2873668385_MetadataUsageId;
extern const uint32_t ZlibBaseStream__ctor_m4090808400_MetadataUsageId;
extern const uint32_t ZlibBaseStream_finish_m1911048356_MetadataUsageId;
extern const uint32_t ZlibBaseStream_get_Position_m1658146246_MetadataUsageId;
extern const uint32_t ZlibBaseStream_get_workingBuffer_m1750492206_MetadataUsageId;
extern const uint32_t ZlibBaseStream_get_z_m2638430214_MetadataUsageId;
extern const uint32_t ZlibBaseStream_set_Position_m3707116880_MetadataUsageId;
extern const uint32_t ZlibCodec_Deflate_m110580741_MetadataUsageId;
extern const uint32_t ZlibCodec_EndDeflate_m2070701999_MetadataUsageId;
extern const uint32_t ZlibCodec_EndInflate_m2725978086_MetadataUsageId;
extern const uint32_t ZlibCodec_Inflate_m1006171035_MetadataUsageId;
extern const uint32_t ZlibCodec_InitializeInflate_m150460593_MetadataUsageId;
extern const uint32_t ZlibCodec_ResetDeflate_m1569060282_MetadataUsageId;
extern const uint32_t ZlibCodec__InternalInitializeDeflate_m1783914882_MetadataUsageId;
extern const uint32_t ZlibCodec_flush_pending_m1862003519_MetadataUsageId;
extern const uint32_t ZlibCodec_read_buf_m2667585112_MetadataUsageId;

struct ConfigU5BU5D_t3063149961;
struct ByteU5BU5D_t4116647657;
struct Int16U5BU5D_t3686840178;
struct Int32U5BU5D_t385246372;
struct Int32U5BU5DU5BU5D_t3365920845;
struct SByteU5BU5D_t2651576203;


#ifndef RUNTIMEOBJECT_H
#define RUNTIMEOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEOBJECT_H
#ifndef CRC32_T288211679_H
#define CRC32_T288211679_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Pathfinding.Ionic.Crc.CRC32
struct  CRC32_t288211679  : public RuntimeObject
{
public:
	static const Il2CppGuid CLSID;

public:
	// System.UInt32 Pathfinding.Ionic.Crc.CRC32::dwPolynomial
	uint32_t ___dwPolynomial_0;
	// System.Int64 Pathfinding.Ionic.Crc.CRC32::_TotalBytesRead
	int64_t ____TotalBytesRead_1;
	// System.Boolean Pathfinding.Ionic.Crc.CRC32::reverseBits
	bool ___reverseBits_2;
	// System.UInt32[] Pathfinding.Ionic.Crc.CRC32::crc32Table
	UInt32U5BU5D_t2770800703* ___crc32Table_3;
	// System.UInt32 Pathfinding.Ionic.Crc.CRC32::_register
	uint32_t ____register_4;

public:
	inline static int32_t get_offset_of_dwPolynomial_0() { return static_cast<int32_t>(offsetof(CRC32_t288211679, ___dwPolynomial_0)); }
	inline uint32_t get_dwPolynomial_0() const { return ___dwPolynomial_0; }
	inline uint32_t* get_address_of_dwPolynomial_0() { return &___dwPolynomial_0; }
	inline void set_dwPolynomial_0(uint32_t value)
	{
		___dwPolynomial_0 = value;
	}

	inline static int32_t get_offset_of__TotalBytesRead_1() { return static_cast<int32_t>(offsetof(CRC32_t288211679, ____TotalBytesRead_1)); }
	inline int64_t get__TotalBytesRead_1() const { return ____TotalBytesRead_1; }
	inline int64_t* get_address_of__TotalBytesRead_1() { return &____TotalBytesRead_1; }
	inline void set__TotalBytesRead_1(int64_t value)
	{
		____TotalBytesRead_1 = value;
	}

	inline static int32_t get_offset_of_reverseBits_2() { return static_cast<int32_t>(offsetof(CRC32_t288211679, ___reverseBits_2)); }
	inline bool get_reverseBits_2() const { return ___reverseBits_2; }
	inline bool* get_address_of_reverseBits_2() { return &___reverseBits_2; }
	inline void set_reverseBits_2(bool value)
	{
		___reverseBits_2 = value;
	}

	inline static int32_t get_offset_of_crc32Table_3() { return static_cast<int32_t>(offsetof(CRC32_t288211679, ___crc32Table_3)); }
	inline UInt32U5BU5D_t2770800703* get_crc32Table_3() const { return ___crc32Table_3; }
	inline UInt32U5BU5D_t2770800703** get_address_of_crc32Table_3() { return &___crc32Table_3; }
	inline void set_crc32Table_3(UInt32U5BU5D_t2770800703* value)
	{
		___crc32Table_3 = value;
		Il2CppCodeGenWriteBarrier((&___crc32Table_3), value);
	}

	inline static int32_t get_offset_of__register_4() { return static_cast<int32_t>(offsetof(CRC32_t288211679, ____register_4)); }
	inline uint32_t get__register_4() const { return ____register_4; }
	inline uint32_t* get_address_of__register_4() { return &____register_4; }
	inline void set__register_4(uint32_t value)
	{
		____register_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CRC32_T288211679_H
#ifndef INFTREE_T2692649235_H
#define INFTREE_T2692649235_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Pathfinding.Ionic.Zlib.InfTree
struct  InfTree_t2692649235  : public RuntimeObject
{
public:
	// System.Int32[] Pathfinding.Ionic.Zlib.InfTree::hn
	Int32U5BU5D_t385246372* ___hn_6;
	// System.Int32[] Pathfinding.Ionic.Zlib.InfTree::v
	Int32U5BU5D_t385246372* ___v_7;
	// System.Int32[] Pathfinding.Ionic.Zlib.InfTree::c
	Int32U5BU5D_t385246372* ___c_8;
	// System.Int32[] Pathfinding.Ionic.Zlib.InfTree::r
	Int32U5BU5D_t385246372* ___r_9;
	// System.Int32[] Pathfinding.Ionic.Zlib.InfTree::u
	Int32U5BU5D_t385246372* ___u_10;
	// System.Int32[] Pathfinding.Ionic.Zlib.InfTree::x
	Int32U5BU5D_t385246372* ___x_11;

public:
	inline static int32_t get_offset_of_hn_6() { return static_cast<int32_t>(offsetof(InfTree_t2692649235, ___hn_6)); }
	inline Int32U5BU5D_t385246372* get_hn_6() const { return ___hn_6; }
	inline Int32U5BU5D_t385246372** get_address_of_hn_6() { return &___hn_6; }
	inline void set_hn_6(Int32U5BU5D_t385246372* value)
	{
		___hn_6 = value;
		Il2CppCodeGenWriteBarrier((&___hn_6), value);
	}

	inline static int32_t get_offset_of_v_7() { return static_cast<int32_t>(offsetof(InfTree_t2692649235, ___v_7)); }
	inline Int32U5BU5D_t385246372* get_v_7() const { return ___v_7; }
	inline Int32U5BU5D_t385246372** get_address_of_v_7() { return &___v_7; }
	inline void set_v_7(Int32U5BU5D_t385246372* value)
	{
		___v_7 = value;
		Il2CppCodeGenWriteBarrier((&___v_7), value);
	}

	inline static int32_t get_offset_of_c_8() { return static_cast<int32_t>(offsetof(InfTree_t2692649235, ___c_8)); }
	inline Int32U5BU5D_t385246372* get_c_8() const { return ___c_8; }
	inline Int32U5BU5D_t385246372** get_address_of_c_8() { return &___c_8; }
	inline void set_c_8(Int32U5BU5D_t385246372* value)
	{
		___c_8 = value;
		Il2CppCodeGenWriteBarrier((&___c_8), value);
	}

	inline static int32_t get_offset_of_r_9() { return static_cast<int32_t>(offsetof(InfTree_t2692649235, ___r_9)); }
	inline Int32U5BU5D_t385246372* get_r_9() const { return ___r_9; }
	inline Int32U5BU5D_t385246372** get_address_of_r_9() { return &___r_9; }
	inline void set_r_9(Int32U5BU5D_t385246372* value)
	{
		___r_9 = value;
		Il2CppCodeGenWriteBarrier((&___r_9), value);
	}

	inline static int32_t get_offset_of_u_10() { return static_cast<int32_t>(offsetof(InfTree_t2692649235, ___u_10)); }
	inline Int32U5BU5D_t385246372* get_u_10() const { return ___u_10; }
	inline Int32U5BU5D_t385246372** get_address_of_u_10() { return &___u_10; }
	inline void set_u_10(Int32U5BU5D_t385246372* value)
	{
		___u_10 = value;
		Il2CppCodeGenWriteBarrier((&___u_10), value);
	}

	inline static int32_t get_offset_of_x_11() { return static_cast<int32_t>(offsetof(InfTree_t2692649235, ___x_11)); }
	inline Int32U5BU5D_t385246372* get_x_11() const { return ___x_11; }
	inline Int32U5BU5D_t385246372** get_address_of_x_11() { return &___x_11; }
	inline void set_x_11(Int32U5BU5D_t385246372* value)
	{
		___x_11 = value;
		Il2CppCodeGenWriteBarrier((&___x_11), value);
	}
};

struct InfTree_t2692649235_StaticFields
{
public:
	// System.Int32[] Pathfinding.Ionic.Zlib.InfTree::fixed_tl
	Int32U5BU5D_t385246372* ___fixed_tl_0;
	// System.Int32[] Pathfinding.Ionic.Zlib.InfTree::fixed_td
	Int32U5BU5D_t385246372* ___fixed_td_1;
	// System.Int32[] Pathfinding.Ionic.Zlib.InfTree::cplens
	Int32U5BU5D_t385246372* ___cplens_2;
	// System.Int32[] Pathfinding.Ionic.Zlib.InfTree::cplext
	Int32U5BU5D_t385246372* ___cplext_3;
	// System.Int32[] Pathfinding.Ionic.Zlib.InfTree::cpdist
	Int32U5BU5D_t385246372* ___cpdist_4;
	// System.Int32[] Pathfinding.Ionic.Zlib.InfTree::cpdext
	Int32U5BU5D_t385246372* ___cpdext_5;

public:
	inline static int32_t get_offset_of_fixed_tl_0() { return static_cast<int32_t>(offsetof(InfTree_t2692649235_StaticFields, ___fixed_tl_0)); }
	inline Int32U5BU5D_t385246372* get_fixed_tl_0() const { return ___fixed_tl_0; }
	inline Int32U5BU5D_t385246372** get_address_of_fixed_tl_0() { return &___fixed_tl_0; }
	inline void set_fixed_tl_0(Int32U5BU5D_t385246372* value)
	{
		___fixed_tl_0 = value;
		Il2CppCodeGenWriteBarrier((&___fixed_tl_0), value);
	}

	inline static int32_t get_offset_of_fixed_td_1() { return static_cast<int32_t>(offsetof(InfTree_t2692649235_StaticFields, ___fixed_td_1)); }
	inline Int32U5BU5D_t385246372* get_fixed_td_1() const { return ___fixed_td_1; }
	inline Int32U5BU5D_t385246372** get_address_of_fixed_td_1() { return &___fixed_td_1; }
	inline void set_fixed_td_1(Int32U5BU5D_t385246372* value)
	{
		___fixed_td_1 = value;
		Il2CppCodeGenWriteBarrier((&___fixed_td_1), value);
	}

	inline static int32_t get_offset_of_cplens_2() { return static_cast<int32_t>(offsetof(InfTree_t2692649235_StaticFields, ___cplens_2)); }
	inline Int32U5BU5D_t385246372* get_cplens_2() const { return ___cplens_2; }
	inline Int32U5BU5D_t385246372** get_address_of_cplens_2() { return &___cplens_2; }
	inline void set_cplens_2(Int32U5BU5D_t385246372* value)
	{
		___cplens_2 = value;
		Il2CppCodeGenWriteBarrier((&___cplens_2), value);
	}

	inline static int32_t get_offset_of_cplext_3() { return static_cast<int32_t>(offsetof(InfTree_t2692649235_StaticFields, ___cplext_3)); }
	inline Int32U5BU5D_t385246372* get_cplext_3() const { return ___cplext_3; }
	inline Int32U5BU5D_t385246372** get_address_of_cplext_3() { return &___cplext_3; }
	inline void set_cplext_3(Int32U5BU5D_t385246372* value)
	{
		___cplext_3 = value;
		Il2CppCodeGenWriteBarrier((&___cplext_3), value);
	}

	inline static int32_t get_offset_of_cpdist_4() { return static_cast<int32_t>(offsetof(InfTree_t2692649235_StaticFields, ___cpdist_4)); }
	inline Int32U5BU5D_t385246372* get_cpdist_4() const { return ___cpdist_4; }
	inline Int32U5BU5D_t385246372** get_address_of_cpdist_4() { return &___cpdist_4; }
	inline void set_cpdist_4(Int32U5BU5D_t385246372* value)
	{
		___cpdist_4 = value;
		Il2CppCodeGenWriteBarrier((&___cpdist_4), value);
	}

	inline static int32_t get_offset_of_cpdext_5() { return static_cast<int32_t>(offsetof(InfTree_t2692649235_StaticFields, ___cpdext_5)); }
	inline Int32U5BU5D_t385246372* get_cpdext_5() const { return ___cpdext_5; }
	inline Int32U5BU5D_t385246372** get_address_of_cpdext_5() { return &___cpdext_5; }
	inline void set_cpdext_5(Int32U5BU5D_t385246372* value)
	{
		___cpdext_5 = value;
		Il2CppCodeGenWriteBarrier((&___cpdext_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INFTREE_T2692649235_H
#ifndef INFLATECODES_T3940108927_H
#define INFLATECODES_T3940108927_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Pathfinding.Ionic.Zlib.InflateCodes
struct  InflateCodes_t3940108927  : public RuntimeObject
{
public:
	// System.Int32 Pathfinding.Ionic.Zlib.InflateCodes::mode
	int32_t ___mode_0;
	// System.Int32 Pathfinding.Ionic.Zlib.InflateCodes::len
	int32_t ___len_1;
	// System.Int32[] Pathfinding.Ionic.Zlib.InflateCodes::tree
	Int32U5BU5D_t385246372* ___tree_2;
	// System.Int32 Pathfinding.Ionic.Zlib.InflateCodes::tree_index
	int32_t ___tree_index_3;
	// System.Int32 Pathfinding.Ionic.Zlib.InflateCodes::need
	int32_t ___need_4;
	// System.Int32 Pathfinding.Ionic.Zlib.InflateCodes::lit
	int32_t ___lit_5;
	// System.Int32 Pathfinding.Ionic.Zlib.InflateCodes::bitsToGet
	int32_t ___bitsToGet_6;
	// System.Int32 Pathfinding.Ionic.Zlib.InflateCodes::dist
	int32_t ___dist_7;
	// System.Byte Pathfinding.Ionic.Zlib.InflateCodes::lbits
	uint8_t ___lbits_8;
	// System.Byte Pathfinding.Ionic.Zlib.InflateCodes::dbits
	uint8_t ___dbits_9;
	// System.Int32[] Pathfinding.Ionic.Zlib.InflateCodes::ltree
	Int32U5BU5D_t385246372* ___ltree_10;
	// System.Int32 Pathfinding.Ionic.Zlib.InflateCodes::ltree_index
	int32_t ___ltree_index_11;
	// System.Int32[] Pathfinding.Ionic.Zlib.InflateCodes::dtree
	Int32U5BU5D_t385246372* ___dtree_12;
	// System.Int32 Pathfinding.Ionic.Zlib.InflateCodes::dtree_index
	int32_t ___dtree_index_13;

public:
	inline static int32_t get_offset_of_mode_0() { return static_cast<int32_t>(offsetof(InflateCodes_t3940108927, ___mode_0)); }
	inline int32_t get_mode_0() const { return ___mode_0; }
	inline int32_t* get_address_of_mode_0() { return &___mode_0; }
	inline void set_mode_0(int32_t value)
	{
		___mode_0 = value;
	}

	inline static int32_t get_offset_of_len_1() { return static_cast<int32_t>(offsetof(InflateCodes_t3940108927, ___len_1)); }
	inline int32_t get_len_1() const { return ___len_1; }
	inline int32_t* get_address_of_len_1() { return &___len_1; }
	inline void set_len_1(int32_t value)
	{
		___len_1 = value;
	}

	inline static int32_t get_offset_of_tree_2() { return static_cast<int32_t>(offsetof(InflateCodes_t3940108927, ___tree_2)); }
	inline Int32U5BU5D_t385246372* get_tree_2() const { return ___tree_2; }
	inline Int32U5BU5D_t385246372** get_address_of_tree_2() { return &___tree_2; }
	inline void set_tree_2(Int32U5BU5D_t385246372* value)
	{
		___tree_2 = value;
		Il2CppCodeGenWriteBarrier((&___tree_2), value);
	}

	inline static int32_t get_offset_of_tree_index_3() { return static_cast<int32_t>(offsetof(InflateCodes_t3940108927, ___tree_index_3)); }
	inline int32_t get_tree_index_3() const { return ___tree_index_3; }
	inline int32_t* get_address_of_tree_index_3() { return &___tree_index_3; }
	inline void set_tree_index_3(int32_t value)
	{
		___tree_index_3 = value;
	}

	inline static int32_t get_offset_of_need_4() { return static_cast<int32_t>(offsetof(InflateCodes_t3940108927, ___need_4)); }
	inline int32_t get_need_4() const { return ___need_4; }
	inline int32_t* get_address_of_need_4() { return &___need_4; }
	inline void set_need_4(int32_t value)
	{
		___need_4 = value;
	}

	inline static int32_t get_offset_of_lit_5() { return static_cast<int32_t>(offsetof(InflateCodes_t3940108927, ___lit_5)); }
	inline int32_t get_lit_5() const { return ___lit_5; }
	inline int32_t* get_address_of_lit_5() { return &___lit_5; }
	inline void set_lit_5(int32_t value)
	{
		___lit_5 = value;
	}

	inline static int32_t get_offset_of_bitsToGet_6() { return static_cast<int32_t>(offsetof(InflateCodes_t3940108927, ___bitsToGet_6)); }
	inline int32_t get_bitsToGet_6() const { return ___bitsToGet_6; }
	inline int32_t* get_address_of_bitsToGet_6() { return &___bitsToGet_6; }
	inline void set_bitsToGet_6(int32_t value)
	{
		___bitsToGet_6 = value;
	}

	inline static int32_t get_offset_of_dist_7() { return static_cast<int32_t>(offsetof(InflateCodes_t3940108927, ___dist_7)); }
	inline int32_t get_dist_7() const { return ___dist_7; }
	inline int32_t* get_address_of_dist_7() { return &___dist_7; }
	inline void set_dist_7(int32_t value)
	{
		___dist_7 = value;
	}

	inline static int32_t get_offset_of_lbits_8() { return static_cast<int32_t>(offsetof(InflateCodes_t3940108927, ___lbits_8)); }
	inline uint8_t get_lbits_8() const { return ___lbits_8; }
	inline uint8_t* get_address_of_lbits_8() { return &___lbits_8; }
	inline void set_lbits_8(uint8_t value)
	{
		___lbits_8 = value;
	}

	inline static int32_t get_offset_of_dbits_9() { return static_cast<int32_t>(offsetof(InflateCodes_t3940108927, ___dbits_9)); }
	inline uint8_t get_dbits_9() const { return ___dbits_9; }
	inline uint8_t* get_address_of_dbits_9() { return &___dbits_9; }
	inline void set_dbits_9(uint8_t value)
	{
		___dbits_9 = value;
	}

	inline static int32_t get_offset_of_ltree_10() { return static_cast<int32_t>(offsetof(InflateCodes_t3940108927, ___ltree_10)); }
	inline Int32U5BU5D_t385246372* get_ltree_10() const { return ___ltree_10; }
	inline Int32U5BU5D_t385246372** get_address_of_ltree_10() { return &___ltree_10; }
	inline void set_ltree_10(Int32U5BU5D_t385246372* value)
	{
		___ltree_10 = value;
		Il2CppCodeGenWriteBarrier((&___ltree_10), value);
	}

	inline static int32_t get_offset_of_ltree_index_11() { return static_cast<int32_t>(offsetof(InflateCodes_t3940108927, ___ltree_index_11)); }
	inline int32_t get_ltree_index_11() const { return ___ltree_index_11; }
	inline int32_t* get_address_of_ltree_index_11() { return &___ltree_index_11; }
	inline void set_ltree_index_11(int32_t value)
	{
		___ltree_index_11 = value;
	}

	inline static int32_t get_offset_of_dtree_12() { return static_cast<int32_t>(offsetof(InflateCodes_t3940108927, ___dtree_12)); }
	inline Int32U5BU5D_t385246372* get_dtree_12() const { return ___dtree_12; }
	inline Int32U5BU5D_t385246372** get_address_of_dtree_12() { return &___dtree_12; }
	inline void set_dtree_12(Int32U5BU5D_t385246372* value)
	{
		___dtree_12 = value;
		Il2CppCodeGenWriteBarrier((&___dtree_12), value);
	}

	inline static int32_t get_offset_of_dtree_index_13() { return static_cast<int32_t>(offsetof(InflateCodes_t3940108927, ___dtree_index_13)); }
	inline int32_t get_dtree_index_13() const { return ___dtree_index_13; }
	inline int32_t* get_address_of_dtree_index_13() { return &___dtree_index_13; }
	inline void set_dtree_index_13(int32_t value)
	{
		___dtree_index_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INFLATECODES_T3940108927_H
#ifndef INTERNALCONSTANTS_T3209989667_H
#define INTERNALCONSTANTS_T3209989667_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Pathfinding.Ionic.Zlib.InternalConstants
struct  InternalConstants_t3209989667  : public RuntimeObject
{
public:

public:
};

struct InternalConstants_t3209989667_StaticFields
{
public:
	// System.Int32 Pathfinding.Ionic.Zlib.InternalConstants::MAX_BITS
	int32_t ___MAX_BITS_0;
	// System.Int32 Pathfinding.Ionic.Zlib.InternalConstants::BL_CODES
	int32_t ___BL_CODES_1;
	// System.Int32 Pathfinding.Ionic.Zlib.InternalConstants::D_CODES
	int32_t ___D_CODES_2;
	// System.Int32 Pathfinding.Ionic.Zlib.InternalConstants::LITERALS
	int32_t ___LITERALS_3;
	// System.Int32 Pathfinding.Ionic.Zlib.InternalConstants::LENGTH_CODES
	int32_t ___LENGTH_CODES_4;
	// System.Int32 Pathfinding.Ionic.Zlib.InternalConstants::L_CODES
	int32_t ___L_CODES_5;
	// System.Int32 Pathfinding.Ionic.Zlib.InternalConstants::MAX_BL_BITS
	int32_t ___MAX_BL_BITS_6;
	// System.Int32 Pathfinding.Ionic.Zlib.InternalConstants::REP_3_6
	int32_t ___REP_3_6_7;
	// System.Int32 Pathfinding.Ionic.Zlib.InternalConstants::REPZ_3_10
	int32_t ___REPZ_3_10_8;
	// System.Int32 Pathfinding.Ionic.Zlib.InternalConstants::REPZ_11_138
	int32_t ___REPZ_11_138_9;

public:
	inline static int32_t get_offset_of_MAX_BITS_0() { return static_cast<int32_t>(offsetof(InternalConstants_t3209989667_StaticFields, ___MAX_BITS_0)); }
	inline int32_t get_MAX_BITS_0() const { return ___MAX_BITS_0; }
	inline int32_t* get_address_of_MAX_BITS_0() { return &___MAX_BITS_0; }
	inline void set_MAX_BITS_0(int32_t value)
	{
		___MAX_BITS_0 = value;
	}

	inline static int32_t get_offset_of_BL_CODES_1() { return static_cast<int32_t>(offsetof(InternalConstants_t3209989667_StaticFields, ___BL_CODES_1)); }
	inline int32_t get_BL_CODES_1() const { return ___BL_CODES_1; }
	inline int32_t* get_address_of_BL_CODES_1() { return &___BL_CODES_1; }
	inline void set_BL_CODES_1(int32_t value)
	{
		___BL_CODES_1 = value;
	}

	inline static int32_t get_offset_of_D_CODES_2() { return static_cast<int32_t>(offsetof(InternalConstants_t3209989667_StaticFields, ___D_CODES_2)); }
	inline int32_t get_D_CODES_2() const { return ___D_CODES_2; }
	inline int32_t* get_address_of_D_CODES_2() { return &___D_CODES_2; }
	inline void set_D_CODES_2(int32_t value)
	{
		___D_CODES_2 = value;
	}

	inline static int32_t get_offset_of_LITERALS_3() { return static_cast<int32_t>(offsetof(InternalConstants_t3209989667_StaticFields, ___LITERALS_3)); }
	inline int32_t get_LITERALS_3() const { return ___LITERALS_3; }
	inline int32_t* get_address_of_LITERALS_3() { return &___LITERALS_3; }
	inline void set_LITERALS_3(int32_t value)
	{
		___LITERALS_3 = value;
	}

	inline static int32_t get_offset_of_LENGTH_CODES_4() { return static_cast<int32_t>(offsetof(InternalConstants_t3209989667_StaticFields, ___LENGTH_CODES_4)); }
	inline int32_t get_LENGTH_CODES_4() const { return ___LENGTH_CODES_4; }
	inline int32_t* get_address_of_LENGTH_CODES_4() { return &___LENGTH_CODES_4; }
	inline void set_LENGTH_CODES_4(int32_t value)
	{
		___LENGTH_CODES_4 = value;
	}

	inline static int32_t get_offset_of_L_CODES_5() { return static_cast<int32_t>(offsetof(InternalConstants_t3209989667_StaticFields, ___L_CODES_5)); }
	inline int32_t get_L_CODES_5() const { return ___L_CODES_5; }
	inline int32_t* get_address_of_L_CODES_5() { return &___L_CODES_5; }
	inline void set_L_CODES_5(int32_t value)
	{
		___L_CODES_5 = value;
	}

	inline static int32_t get_offset_of_MAX_BL_BITS_6() { return static_cast<int32_t>(offsetof(InternalConstants_t3209989667_StaticFields, ___MAX_BL_BITS_6)); }
	inline int32_t get_MAX_BL_BITS_6() const { return ___MAX_BL_BITS_6; }
	inline int32_t* get_address_of_MAX_BL_BITS_6() { return &___MAX_BL_BITS_6; }
	inline void set_MAX_BL_BITS_6(int32_t value)
	{
		___MAX_BL_BITS_6 = value;
	}

	inline static int32_t get_offset_of_REP_3_6_7() { return static_cast<int32_t>(offsetof(InternalConstants_t3209989667_StaticFields, ___REP_3_6_7)); }
	inline int32_t get_REP_3_6_7() const { return ___REP_3_6_7; }
	inline int32_t* get_address_of_REP_3_6_7() { return &___REP_3_6_7; }
	inline void set_REP_3_6_7(int32_t value)
	{
		___REP_3_6_7 = value;
	}

	inline static int32_t get_offset_of_REPZ_3_10_8() { return static_cast<int32_t>(offsetof(InternalConstants_t3209989667_StaticFields, ___REPZ_3_10_8)); }
	inline int32_t get_REPZ_3_10_8() const { return ___REPZ_3_10_8; }
	inline int32_t* get_address_of_REPZ_3_10_8() { return &___REPZ_3_10_8; }
	inline void set_REPZ_3_10_8(int32_t value)
	{
		___REPZ_3_10_8 = value;
	}

	inline static int32_t get_offset_of_REPZ_11_138_9() { return static_cast<int32_t>(offsetof(InternalConstants_t3209989667_StaticFields, ___REPZ_11_138_9)); }
	inline int32_t get_REPZ_11_138_9() const { return ___REPZ_11_138_9; }
	inline int32_t* get_address_of_REPZ_11_138_9() { return &___REPZ_11_138_9; }
	inline void set_REPZ_11_138_9(int32_t value)
	{
		___REPZ_11_138_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTERNALCONSTANTS_T3209989667_H
#ifndef INTERNALINFLATECONSTANTS_T2469443330_H
#define INTERNALINFLATECONSTANTS_T2469443330_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Pathfinding.Ionic.Zlib.InternalInflateConstants
struct  InternalInflateConstants_t2469443330  : public RuntimeObject
{
public:

public:
};

struct InternalInflateConstants_t2469443330_StaticFields
{
public:
	// System.Int32[] Pathfinding.Ionic.Zlib.InternalInflateConstants::InflateMask
	Int32U5BU5D_t385246372* ___InflateMask_0;

public:
	inline static int32_t get_offset_of_InflateMask_0() { return static_cast<int32_t>(offsetof(InternalInflateConstants_t2469443330_StaticFields, ___InflateMask_0)); }
	inline Int32U5BU5D_t385246372* get_InflateMask_0() const { return ___InflateMask_0; }
	inline Int32U5BU5D_t385246372** get_address_of_InflateMask_0() { return &___InflateMask_0; }
	inline void set_InflateMask_0(Int32U5BU5D_t385246372* value)
	{
		___InflateMask_0 = value;
		Il2CppCodeGenWriteBarrier((&___InflateMask_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTERNALINFLATECONSTANTS_T2469443330_H
#ifndef SHAREDUTILS_T1376593564_H
#define SHAREDUTILS_T1376593564_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Pathfinding.Ionic.Zlib.SharedUtils
struct  SharedUtils_t1376593564  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SHAREDUTILS_T1376593564_H
#ifndef STATICTREE_T3743034110_H
#define STATICTREE_T3743034110_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Pathfinding.Ionic.Zlib.StaticTree
struct  StaticTree_t3743034110  : public RuntimeObject
{
public:
	// System.Int16[] Pathfinding.Ionic.Zlib.StaticTree::treeCodes
	Int16U5BU5D_t3686840178* ___treeCodes_5;
	// System.Int32[] Pathfinding.Ionic.Zlib.StaticTree::extraBits
	Int32U5BU5D_t385246372* ___extraBits_6;
	// System.Int32 Pathfinding.Ionic.Zlib.StaticTree::extraBase
	int32_t ___extraBase_7;
	// System.Int32 Pathfinding.Ionic.Zlib.StaticTree::elems
	int32_t ___elems_8;
	// System.Int32 Pathfinding.Ionic.Zlib.StaticTree::maxLength
	int32_t ___maxLength_9;

public:
	inline static int32_t get_offset_of_treeCodes_5() { return static_cast<int32_t>(offsetof(StaticTree_t3743034110, ___treeCodes_5)); }
	inline Int16U5BU5D_t3686840178* get_treeCodes_5() const { return ___treeCodes_5; }
	inline Int16U5BU5D_t3686840178** get_address_of_treeCodes_5() { return &___treeCodes_5; }
	inline void set_treeCodes_5(Int16U5BU5D_t3686840178* value)
	{
		___treeCodes_5 = value;
		Il2CppCodeGenWriteBarrier((&___treeCodes_5), value);
	}

	inline static int32_t get_offset_of_extraBits_6() { return static_cast<int32_t>(offsetof(StaticTree_t3743034110, ___extraBits_6)); }
	inline Int32U5BU5D_t385246372* get_extraBits_6() const { return ___extraBits_6; }
	inline Int32U5BU5D_t385246372** get_address_of_extraBits_6() { return &___extraBits_6; }
	inline void set_extraBits_6(Int32U5BU5D_t385246372* value)
	{
		___extraBits_6 = value;
		Il2CppCodeGenWriteBarrier((&___extraBits_6), value);
	}

	inline static int32_t get_offset_of_extraBase_7() { return static_cast<int32_t>(offsetof(StaticTree_t3743034110, ___extraBase_7)); }
	inline int32_t get_extraBase_7() const { return ___extraBase_7; }
	inline int32_t* get_address_of_extraBase_7() { return &___extraBase_7; }
	inline void set_extraBase_7(int32_t value)
	{
		___extraBase_7 = value;
	}

	inline static int32_t get_offset_of_elems_8() { return static_cast<int32_t>(offsetof(StaticTree_t3743034110, ___elems_8)); }
	inline int32_t get_elems_8() const { return ___elems_8; }
	inline int32_t* get_address_of_elems_8() { return &___elems_8; }
	inline void set_elems_8(int32_t value)
	{
		___elems_8 = value;
	}

	inline static int32_t get_offset_of_maxLength_9() { return static_cast<int32_t>(offsetof(StaticTree_t3743034110, ___maxLength_9)); }
	inline int32_t get_maxLength_9() const { return ___maxLength_9; }
	inline int32_t* get_address_of_maxLength_9() { return &___maxLength_9; }
	inline void set_maxLength_9(int32_t value)
	{
		___maxLength_9 = value;
	}
};

struct StaticTree_t3743034110_StaticFields
{
public:
	// System.Int16[] Pathfinding.Ionic.Zlib.StaticTree::lengthAndLiteralsTreeCodes
	Int16U5BU5D_t3686840178* ___lengthAndLiteralsTreeCodes_0;
	// System.Int16[] Pathfinding.Ionic.Zlib.StaticTree::distTreeCodes
	Int16U5BU5D_t3686840178* ___distTreeCodes_1;
	// Pathfinding.Ionic.Zlib.StaticTree Pathfinding.Ionic.Zlib.StaticTree::Literals
	StaticTree_t3743034110 * ___Literals_2;
	// Pathfinding.Ionic.Zlib.StaticTree Pathfinding.Ionic.Zlib.StaticTree::Distances
	StaticTree_t3743034110 * ___Distances_3;
	// Pathfinding.Ionic.Zlib.StaticTree Pathfinding.Ionic.Zlib.StaticTree::BitLengths
	StaticTree_t3743034110 * ___BitLengths_4;

public:
	inline static int32_t get_offset_of_lengthAndLiteralsTreeCodes_0() { return static_cast<int32_t>(offsetof(StaticTree_t3743034110_StaticFields, ___lengthAndLiteralsTreeCodes_0)); }
	inline Int16U5BU5D_t3686840178* get_lengthAndLiteralsTreeCodes_0() const { return ___lengthAndLiteralsTreeCodes_0; }
	inline Int16U5BU5D_t3686840178** get_address_of_lengthAndLiteralsTreeCodes_0() { return &___lengthAndLiteralsTreeCodes_0; }
	inline void set_lengthAndLiteralsTreeCodes_0(Int16U5BU5D_t3686840178* value)
	{
		___lengthAndLiteralsTreeCodes_0 = value;
		Il2CppCodeGenWriteBarrier((&___lengthAndLiteralsTreeCodes_0), value);
	}

	inline static int32_t get_offset_of_distTreeCodes_1() { return static_cast<int32_t>(offsetof(StaticTree_t3743034110_StaticFields, ___distTreeCodes_1)); }
	inline Int16U5BU5D_t3686840178* get_distTreeCodes_1() const { return ___distTreeCodes_1; }
	inline Int16U5BU5D_t3686840178** get_address_of_distTreeCodes_1() { return &___distTreeCodes_1; }
	inline void set_distTreeCodes_1(Int16U5BU5D_t3686840178* value)
	{
		___distTreeCodes_1 = value;
		Il2CppCodeGenWriteBarrier((&___distTreeCodes_1), value);
	}

	inline static int32_t get_offset_of_Literals_2() { return static_cast<int32_t>(offsetof(StaticTree_t3743034110_StaticFields, ___Literals_2)); }
	inline StaticTree_t3743034110 * get_Literals_2() const { return ___Literals_2; }
	inline StaticTree_t3743034110 ** get_address_of_Literals_2() { return &___Literals_2; }
	inline void set_Literals_2(StaticTree_t3743034110 * value)
	{
		___Literals_2 = value;
		Il2CppCodeGenWriteBarrier((&___Literals_2), value);
	}

	inline static int32_t get_offset_of_Distances_3() { return static_cast<int32_t>(offsetof(StaticTree_t3743034110_StaticFields, ___Distances_3)); }
	inline StaticTree_t3743034110 * get_Distances_3() const { return ___Distances_3; }
	inline StaticTree_t3743034110 ** get_address_of_Distances_3() { return &___Distances_3; }
	inline void set_Distances_3(StaticTree_t3743034110 * value)
	{
		___Distances_3 = value;
		Il2CppCodeGenWriteBarrier((&___Distances_3), value);
	}

	inline static int32_t get_offset_of_BitLengths_4() { return static_cast<int32_t>(offsetof(StaticTree_t3743034110_StaticFields, ___BitLengths_4)); }
	inline StaticTree_t3743034110 * get_BitLengths_4() const { return ___BitLengths_4; }
	inline StaticTree_t3743034110 ** get_address_of_BitLengths_4() { return &___BitLengths_4; }
	inline void set_BitLengths_4(StaticTree_t3743034110 * value)
	{
		___BitLengths_4 = value;
		Il2CppCodeGenWriteBarrier((&___BitLengths_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STATICTREE_T3743034110_H
#ifndef TREE_T776904304_H
#define TREE_T776904304_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Pathfinding.Ionic.Zlib.Tree
struct  Tree_t776904304  : public RuntimeObject
{
public:
	// System.Int16[] Pathfinding.Ionic.Zlib.Tree::dyn_tree
	Int16U5BU5D_t3686840178* ___dyn_tree_9;
	// System.Int32 Pathfinding.Ionic.Zlib.Tree::max_code
	int32_t ___max_code_10;
	// Pathfinding.Ionic.Zlib.StaticTree Pathfinding.Ionic.Zlib.Tree::staticTree
	StaticTree_t3743034110 * ___staticTree_11;

public:
	inline static int32_t get_offset_of_dyn_tree_9() { return static_cast<int32_t>(offsetof(Tree_t776904304, ___dyn_tree_9)); }
	inline Int16U5BU5D_t3686840178* get_dyn_tree_9() const { return ___dyn_tree_9; }
	inline Int16U5BU5D_t3686840178** get_address_of_dyn_tree_9() { return &___dyn_tree_9; }
	inline void set_dyn_tree_9(Int16U5BU5D_t3686840178* value)
	{
		___dyn_tree_9 = value;
		Il2CppCodeGenWriteBarrier((&___dyn_tree_9), value);
	}

	inline static int32_t get_offset_of_max_code_10() { return static_cast<int32_t>(offsetof(Tree_t776904304, ___max_code_10)); }
	inline int32_t get_max_code_10() const { return ___max_code_10; }
	inline int32_t* get_address_of_max_code_10() { return &___max_code_10; }
	inline void set_max_code_10(int32_t value)
	{
		___max_code_10 = value;
	}

	inline static int32_t get_offset_of_staticTree_11() { return static_cast<int32_t>(offsetof(Tree_t776904304, ___staticTree_11)); }
	inline StaticTree_t3743034110 * get_staticTree_11() const { return ___staticTree_11; }
	inline StaticTree_t3743034110 ** get_address_of_staticTree_11() { return &___staticTree_11; }
	inline void set_staticTree_11(StaticTree_t3743034110 * value)
	{
		___staticTree_11 = value;
		Il2CppCodeGenWriteBarrier((&___staticTree_11), value);
	}
};

struct Tree_t776904304_StaticFields
{
public:
	// System.Int32 Pathfinding.Ionic.Zlib.Tree::HEAP_SIZE
	int32_t ___HEAP_SIZE_0;
	// System.Int32[] Pathfinding.Ionic.Zlib.Tree::ExtraLengthBits
	Int32U5BU5D_t385246372* ___ExtraLengthBits_1;
	// System.Int32[] Pathfinding.Ionic.Zlib.Tree::ExtraDistanceBits
	Int32U5BU5D_t385246372* ___ExtraDistanceBits_2;
	// System.Int32[] Pathfinding.Ionic.Zlib.Tree::extra_blbits
	Int32U5BU5D_t385246372* ___extra_blbits_3;
	// System.SByte[] Pathfinding.Ionic.Zlib.Tree::bl_order
	SByteU5BU5D_t2651576203* ___bl_order_4;
	// System.SByte[] Pathfinding.Ionic.Zlib.Tree::_dist_code
	SByteU5BU5D_t2651576203* ____dist_code_5;
	// System.SByte[] Pathfinding.Ionic.Zlib.Tree::LengthCode
	SByteU5BU5D_t2651576203* ___LengthCode_6;
	// System.Int32[] Pathfinding.Ionic.Zlib.Tree::LengthBase
	Int32U5BU5D_t385246372* ___LengthBase_7;
	// System.Int32[] Pathfinding.Ionic.Zlib.Tree::DistanceBase
	Int32U5BU5D_t385246372* ___DistanceBase_8;

public:
	inline static int32_t get_offset_of_HEAP_SIZE_0() { return static_cast<int32_t>(offsetof(Tree_t776904304_StaticFields, ___HEAP_SIZE_0)); }
	inline int32_t get_HEAP_SIZE_0() const { return ___HEAP_SIZE_0; }
	inline int32_t* get_address_of_HEAP_SIZE_0() { return &___HEAP_SIZE_0; }
	inline void set_HEAP_SIZE_0(int32_t value)
	{
		___HEAP_SIZE_0 = value;
	}

	inline static int32_t get_offset_of_ExtraLengthBits_1() { return static_cast<int32_t>(offsetof(Tree_t776904304_StaticFields, ___ExtraLengthBits_1)); }
	inline Int32U5BU5D_t385246372* get_ExtraLengthBits_1() const { return ___ExtraLengthBits_1; }
	inline Int32U5BU5D_t385246372** get_address_of_ExtraLengthBits_1() { return &___ExtraLengthBits_1; }
	inline void set_ExtraLengthBits_1(Int32U5BU5D_t385246372* value)
	{
		___ExtraLengthBits_1 = value;
		Il2CppCodeGenWriteBarrier((&___ExtraLengthBits_1), value);
	}

	inline static int32_t get_offset_of_ExtraDistanceBits_2() { return static_cast<int32_t>(offsetof(Tree_t776904304_StaticFields, ___ExtraDistanceBits_2)); }
	inline Int32U5BU5D_t385246372* get_ExtraDistanceBits_2() const { return ___ExtraDistanceBits_2; }
	inline Int32U5BU5D_t385246372** get_address_of_ExtraDistanceBits_2() { return &___ExtraDistanceBits_2; }
	inline void set_ExtraDistanceBits_2(Int32U5BU5D_t385246372* value)
	{
		___ExtraDistanceBits_2 = value;
		Il2CppCodeGenWriteBarrier((&___ExtraDistanceBits_2), value);
	}

	inline static int32_t get_offset_of_extra_blbits_3() { return static_cast<int32_t>(offsetof(Tree_t776904304_StaticFields, ___extra_blbits_3)); }
	inline Int32U5BU5D_t385246372* get_extra_blbits_3() const { return ___extra_blbits_3; }
	inline Int32U5BU5D_t385246372** get_address_of_extra_blbits_3() { return &___extra_blbits_3; }
	inline void set_extra_blbits_3(Int32U5BU5D_t385246372* value)
	{
		___extra_blbits_3 = value;
		Il2CppCodeGenWriteBarrier((&___extra_blbits_3), value);
	}

	inline static int32_t get_offset_of_bl_order_4() { return static_cast<int32_t>(offsetof(Tree_t776904304_StaticFields, ___bl_order_4)); }
	inline SByteU5BU5D_t2651576203* get_bl_order_4() const { return ___bl_order_4; }
	inline SByteU5BU5D_t2651576203** get_address_of_bl_order_4() { return &___bl_order_4; }
	inline void set_bl_order_4(SByteU5BU5D_t2651576203* value)
	{
		___bl_order_4 = value;
		Il2CppCodeGenWriteBarrier((&___bl_order_4), value);
	}

	inline static int32_t get_offset_of__dist_code_5() { return static_cast<int32_t>(offsetof(Tree_t776904304_StaticFields, ____dist_code_5)); }
	inline SByteU5BU5D_t2651576203* get__dist_code_5() const { return ____dist_code_5; }
	inline SByteU5BU5D_t2651576203** get_address_of__dist_code_5() { return &____dist_code_5; }
	inline void set__dist_code_5(SByteU5BU5D_t2651576203* value)
	{
		____dist_code_5 = value;
		Il2CppCodeGenWriteBarrier((&____dist_code_5), value);
	}

	inline static int32_t get_offset_of_LengthCode_6() { return static_cast<int32_t>(offsetof(Tree_t776904304_StaticFields, ___LengthCode_6)); }
	inline SByteU5BU5D_t2651576203* get_LengthCode_6() const { return ___LengthCode_6; }
	inline SByteU5BU5D_t2651576203** get_address_of_LengthCode_6() { return &___LengthCode_6; }
	inline void set_LengthCode_6(SByteU5BU5D_t2651576203* value)
	{
		___LengthCode_6 = value;
		Il2CppCodeGenWriteBarrier((&___LengthCode_6), value);
	}

	inline static int32_t get_offset_of_LengthBase_7() { return static_cast<int32_t>(offsetof(Tree_t776904304_StaticFields, ___LengthBase_7)); }
	inline Int32U5BU5D_t385246372* get_LengthBase_7() const { return ___LengthBase_7; }
	inline Int32U5BU5D_t385246372** get_address_of_LengthBase_7() { return &___LengthBase_7; }
	inline void set_LengthBase_7(Int32U5BU5D_t385246372* value)
	{
		___LengthBase_7 = value;
		Il2CppCodeGenWriteBarrier((&___LengthBase_7), value);
	}

	inline static int32_t get_offset_of_DistanceBase_8() { return static_cast<int32_t>(offsetof(Tree_t776904304_StaticFields, ___DistanceBase_8)); }
	inline Int32U5BU5D_t385246372* get_DistanceBase_8() const { return ___DistanceBase_8; }
	inline Int32U5BU5D_t385246372** get_address_of_DistanceBase_8() { return &___DistanceBase_8; }
	inline void set_DistanceBase_8(Int32U5BU5D_t385246372* value)
	{
		___DistanceBase_8 = value;
		Il2CppCodeGenWriteBarrier((&___DistanceBase_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TREE_T776904304_H
#ifndef WORKITEM_T2706050929_H
#define WORKITEM_T2706050929_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Pathfinding.Ionic.Zlib.WorkItem
struct  WorkItem_t2706050929  : public RuntimeObject
{
public:
	// System.Byte[] Pathfinding.Ionic.Zlib.WorkItem::buffer
	ByteU5BU5D_t4116647657* ___buffer_0;
	// System.Byte[] Pathfinding.Ionic.Zlib.WorkItem::compressed
	ByteU5BU5D_t4116647657* ___compressed_1;
	// System.Int32 Pathfinding.Ionic.Zlib.WorkItem::crc
	int32_t ___crc_2;
	// System.Int32 Pathfinding.Ionic.Zlib.WorkItem::index
	int32_t ___index_3;
	// System.Int32 Pathfinding.Ionic.Zlib.WorkItem::ordinal
	int32_t ___ordinal_4;
	// System.Int32 Pathfinding.Ionic.Zlib.WorkItem::inputBytesAvailable
	int32_t ___inputBytesAvailable_5;
	// System.Int32 Pathfinding.Ionic.Zlib.WorkItem::compressedBytesAvailable
	int32_t ___compressedBytesAvailable_6;
	// Pathfinding.Ionic.Zlib.ZlibCodec Pathfinding.Ionic.Zlib.WorkItem::compressor
	ZlibCodec_t855427629 * ___compressor_7;

public:
	inline static int32_t get_offset_of_buffer_0() { return static_cast<int32_t>(offsetof(WorkItem_t2706050929, ___buffer_0)); }
	inline ByteU5BU5D_t4116647657* get_buffer_0() const { return ___buffer_0; }
	inline ByteU5BU5D_t4116647657** get_address_of_buffer_0() { return &___buffer_0; }
	inline void set_buffer_0(ByteU5BU5D_t4116647657* value)
	{
		___buffer_0 = value;
		Il2CppCodeGenWriteBarrier((&___buffer_0), value);
	}

	inline static int32_t get_offset_of_compressed_1() { return static_cast<int32_t>(offsetof(WorkItem_t2706050929, ___compressed_1)); }
	inline ByteU5BU5D_t4116647657* get_compressed_1() const { return ___compressed_1; }
	inline ByteU5BU5D_t4116647657** get_address_of_compressed_1() { return &___compressed_1; }
	inline void set_compressed_1(ByteU5BU5D_t4116647657* value)
	{
		___compressed_1 = value;
		Il2CppCodeGenWriteBarrier((&___compressed_1), value);
	}

	inline static int32_t get_offset_of_crc_2() { return static_cast<int32_t>(offsetof(WorkItem_t2706050929, ___crc_2)); }
	inline int32_t get_crc_2() const { return ___crc_2; }
	inline int32_t* get_address_of_crc_2() { return &___crc_2; }
	inline void set_crc_2(int32_t value)
	{
		___crc_2 = value;
	}

	inline static int32_t get_offset_of_index_3() { return static_cast<int32_t>(offsetof(WorkItem_t2706050929, ___index_3)); }
	inline int32_t get_index_3() const { return ___index_3; }
	inline int32_t* get_address_of_index_3() { return &___index_3; }
	inline void set_index_3(int32_t value)
	{
		___index_3 = value;
	}

	inline static int32_t get_offset_of_ordinal_4() { return static_cast<int32_t>(offsetof(WorkItem_t2706050929, ___ordinal_4)); }
	inline int32_t get_ordinal_4() const { return ___ordinal_4; }
	inline int32_t* get_address_of_ordinal_4() { return &___ordinal_4; }
	inline void set_ordinal_4(int32_t value)
	{
		___ordinal_4 = value;
	}

	inline static int32_t get_offset_of_inputBytesAvailable_5() { return static_cast<int32_t>(offsetof(WorkItem_t2706050929, ___inputBytesAvailable_5)); }
	inline int32_t get_inputBytesAvailable_5() const { return ___inputBytesAvailable_5; }
	inline int32_t* get_address_of_inputBytesAvailable_5() { return &___inputBytesAvailable_5; }
	inline void set_inputBytesAvailable_5(int32_t value)
	{
		___inputBytesAvailable_5 = value;
	}

	inline static int32_t get_offset_of_compressedBytesAvailable_6() { return static_cast<int32_t>(offsetof(WorkItem_t2706050929, ___compressedBytesAvailable_6)); }
	inline int32_t get_compressedBytesAvailable_6() const { return ___compressedBytesAvailable_6; }
	inline int32_t* get_address_of_compressedBytesAvailable_6() { return &___compressedBytesAvailable_6; }
	inline void set_compressedBytesAvailable_6(int32_t value)
	{
		___compressedBytesAvailable_6 = value;
	}

	inline static int32_t get_offset_of_compressor_7() { return static_cast<int32_t>(offsetof(WorkItem_t2706050929, ___compressor_7)); }
	inline ZlibCodec_t855427629 * get_compressor_7() const { return ___compressor_7; }
	inline ZlibCodec_t855427629 ** get_address_of_compressor_7() { return &___compressor_7; }
	inline void set_compressor_7(ZlibCodec_t855427629 * value)
	{
		___compressor_7 = value;
		Il2CppCodeGenWriteBarrier((&___compressor_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WORKITEM_T2706050929_H
struct Il2CppArrayBounds;
#ifndef RUNTIMEARRAY_H
#define RUNTIMEARRAY_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Array

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEARRAY_H
#ifndef LIST_1_T4178125671_H
#define LIST_1_T4178125671_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<Pathfinding.Ionic.Zlib.WorkItem>
struct  List_1_t4178125671  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	WorkItemU5BU5D_t3948263340* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t4178125671, ____items_1)); }
	inline WorkItemU5BU5D_t3948263340* get__items_1() const { return ____items_1; }
	inline WorkItemU5BU5D_t3948263340** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(WorkItemU5BU5D_t3948263340* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t4178125671, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t4178125671, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t4178125671_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	WorkItemU5BU5D_t3948263340* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t4178125671_StaticFields, ___EmptyArray_4)); }
	inline WorkItemU5BU5D_t3948263340* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline WorkItemU5BU5D_t3948263340** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(WorkItemU5BU5D_t3948263340* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T4178125671_H
#ifndef LIST_1_T2606371118_H
#define LIST_1_T2606371118_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<System.Byte>
struct  List_1_t2606371118  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ByteU5BU5D_t4116647657* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t2606371118, ____items_1)); }
	inline ByteU5BU5D_t4116647657* get__items_1() const { return ____items_1; }
	inline ByteU5BU5D_t4116647657** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ByteU5BU5D_t4116647657* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t2606371118, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t2606371118, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t2606371118_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	ByteU5BU5D_t4116647657* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t2606371118_StaticFields, ___EmptyArray_4)); }
	inline ByteU5BU5D_t4116647657* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline ByteU5BU5D_t4116647657** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(ByteU5BU5D_t4116647657* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T2606371118_H
#ifndef QUEUE_1_T2797205247_H
#define QUEUE_1_T2797205247_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Queue`1<System.Int32>
struct  Queue_1_t2797205247  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.Queue`1::_array
	Int32U5BU5D_t385246372* ____array_0;
	// System.Int32 System.Collections.Generic.Queue`1::_head
	int32_t ____head_1;
	// System.Int32 System.Collections.Generic.Queue`1::_tail
	int32_t ____tail_2;
	// System.Int32 System.Collections.Generic.Queue`1::_size
	int32_t ____size_3;
	// System.Int32 System.Collections.Generic.Queue`1::_version
	int32_t ____version_4;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(Queue_1_t2797205247, ____array_0)); }
	inline Int32U5BU5D_t385246372* get__array_0() const { return ____array_0; }
	inline Int32U5BU5D_t385246372** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(Int32U5BU5D_t385246372* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((&____array_0), value);
	}

	inline static int32_t get_offset_of__head_1() { return static_cast<int32_t>(offsetof(Queue_1_t2797205247, ____head_1)); }
	inline int32_t get__head_1() const { return ____head_1; }
	inline int32_t* get_address_of__head_1() { return &____head_1; }
	inline void set__head_1(int32_t value)
	{
		____head_1 = value;
	}

	inline static int32_t get_offset_of__tail_2() { return static_cast<int32_t>(offsetof(Queue_1_t2797205247, ____tail_2)); }
	inline int32_t get__tail_2() const { return ____tail_2; }
	inline int32_t* get_address_of__tail_2() { return &____tail_2; }
	inline void set__tail_2(int32_t value)
	{
		____tail_2 = value;
	}

	inline static int32_t get_offset_of__size_3() { return static_cast<int32_t>(offsetof(Queue_1_t2797205247, ____size_3)); }
	inline int32_t get__size_3() const { return ____size_3; }
	inline int32_t* get_address_of__size_3() { return &____size_3; }
	inline void set__size_3(int32_t value)
	{
		____size_3 = value;
	}

	inline static int32_t get_offset_of__version_4() { return static_cast<int32_t>(offsetof(Queue_1_t2797205247, ____version_4)); }
	inline int32_t get__version_4() const { return ____version_4; }
	inline int32_t* get_address_of__version_4() { return &____version_4; }
	inline void set__version_4(int32_t value)
	{
		____version_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // QUEUE_1_T2797205247_H
#ifndef EXCEPTION_T_H
#define EXCEPTION_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Exception
struct  Exception_t  : public RuntimeObject
{
public:
	// System.IntPtr[] System.Exception::trace_ips
	IntPtrU5BU5D_t4013366056* ___trace_ips_0;
	// System.Exception System.Exception::inner_exception
	Exception_t * ___inner_exception_1;
	// System.String System.Exception::message
	String_t* ___message_2;
	// System.String System.Exception::help_link
	String_t* ___help_link_3;
	// System.String System.Exception::class_name
	String_t* ___class_name_4;
	// System.String System.Exception::stack_trace
	String_t* ___stack_trace_5;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_6;
	// System.Int32 System.Exception::remote_stack_index
	int32_t ___remote_stack_index_7;
	// System.Int32 System.Exception::hresult
	int32_t ___hresult_8;
	// System.String System.Exception::source
	String_t* ___source_9;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_10;

public:
	inline static int32_t get_offset_of_trace_ips_0() { return static_cast<int32_t>(offsetof(Exception_t, ___trace_ips_0)); }
	inline IntPtrU5BU5D_t4013366056* get_trace_ips_0() const { return ___trace_ips_0; }
	inline IntPtrU5BU5D_t4013366056** get_address_of_trace_ips_0() { return &___trace_ips_0; }
	inline void set_trace_ips_0(IntPtrU5BU5D_t4013366056* value)
	{
		___trace_ips_0 = value;
		Il2CppCodeGenWriteBarrier((&___trace_ips_0), value);
	}

	inline static int32_t get_offset_of_inner_exception_1() { return static_cast<int32_t>(offsetof(Exception_t, ___inner_exception_1)); }
	inline Exception_t * get_inner_exception_1() const { return ___inner_exception_1; }
	inline Exception_t ** get_address_of_inner_exception_1() { return &___inner_exception_1; }
	inline void set_inner_exception_1(Exception_t * value)
	{
		___inner_exception_1 = value;
		Il2CppCodeGenWriteBarrier((&___inner_exception_1), value);
	}

	inline static int32_t get_offset_of_message_2() { return static_cast<int32_t>(offsetof(Exception_t, ___message_2)); }
	inline String_t* get_message_2() const { return ___message_2; }
	inline String_t** get_address_of_message_2() { return &___message_2; }
	inline void set_message_2(String_t* value)
	{
		___message_2 = value;
		Il2CppCodeGenWriteBarrier((&___message_2), value);
	}

	inline static int32_t get_offset_of_help_link_3() { return static_cast<int32_t>(offsetof(Exception_t, ___help_link_3)); }
	inline String_t* get_help_link_3() const { return ___help_link_3; }
	inline String_t** get_address_of_help_link_3() { return &___help_link_3; }
	inline void set_help_link_3(String_t* value)
	{
		___help_link_3 = value;
		Il2CppCodeGenWriteBarrier((&___help_link_3), value);
	}

	inline static int32_t get_offset_of_class_name_4() { return static_cast<int32_t>(offsetof(Exception_t, ___class_name_4)); }
	inline String_t* get_class_name_4() const { return ___class_name_4; }
	inline String_t** get_address_of_class_name_4() { return &___class_name_4; }
	inline void set_class_name_4(String_t* value)
	{
		___class_name_4 = value;
		Il2CppCodeGenWriteBarrier((&___class_name_4), value);
	}

	inline static int32_t get_offset_of_stack_trace_5() { return static_cast<int32_t>(offsetof(Exception_t, ___stack_trace_5)); }
	inline String_t* get_stack_trace_5() const { return ___stack_trace_5; }
	inline String_t** get_address_of_stack_trace_5() { return &___stack_trace_5; }
	inline void set_stack_trace_5(String_t* value)
	{
		___stack_trace_5 = value;
		Il2CppCodeGenWriteBarrier((&___stack_trace_5), value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_6() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_6)); }
	inline String_t* get__remoteStackTraceString_6() const { return ____remoteStackTraceString_6; }
	inline String_t** get_address_of__remoteStackTraceString_6() { return &____remoteStackTraceString_6; }
	inline void set__remoteStackTraceString_6(String_t* value)
	{
		____remoteStackTraceString_6 = value;
		Il2CppCodeGenWriteBarrier((&____remoteStackTraceString_6), value);
	}

	inline static int32_t get_offset_of_remote_stack_index_7() { return static_cast<int32_t>(offsetof(Exception_t, ___remote_stack_index_7)); }
	inline int32_t get_remote_stack_index_7() const { return ___remote_stack_index_7; }
	inline int32_t* get_address_of_remote_stack_index_7() { return &___remote_stack_index_7; }
	inline void set_remote_stack_index_7(int32_t value)
	{
		___remote_stack_index_7 = value;
	}

	inline static int32_t get_offset_of_hresult_8() { return static_cast<int32_t>(offsetof(Exception_t, ___hresult_8)); }
	inline int32_t get_hresult_8() const { return ___hresult_8; }
	inline int32_t* get_address_of_hresult_8() { return &___hresult_8; }
	inline void set_hresult_8(int32_t value)
	{
		___hresult_8 = value;
	}

	inline static int32_t get_offset_of_source_9() { return static_cast<int32_t>(offsetof(Exception_t, ___source_9)); }
	inline String_t* get_source_9() const { return ___source_9; }
	inline String_t** get_address_of_source_9() { return &___source_9; }
	inline void set_source_9(String_t* value)
	{
		___source_9 = value;
		Il2CppCodeGenWriteBarrier((&___source_9), value);
	}

	inline static int32_t get_offset_of__data_10() { return static_cast<int32_t>(offsetof(Exception_t, ____data_10)); }
	inline RuntimeObject* get__data_10() const { return ____data_10; }
	inline RuntimeObject** get_address_of__data_10() { return &____data_10; }
	inline void set__data_10(RuntimeObject* value)
	{
		____data_10 = value;
		Il2CppCodeGenWriteBarrier((&____data_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXCEPTION_T_H
#ifndef STREAM_T1273022909_H
#define STREAM_T1273022909_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.Stream
struct  Stream_t1273022909  : public RuntimeObject
{
public:

public:
};

struct Stream_t1273022909_StaticFields
{
public:
	// System.IO.Stream System.IO.Stream::Null
	Stream_t1273022909 * ___Null_0;

public:
	inline static int32_t get_offset_of_Null_0() { return static_cast<int32_t>(offsetof(Stream_t1273022909_StaticFields, ___Null_0)); }
	inline Stream_t1273022909 * get_Null_0() const { return ___Null_0; }
	inline Stream_t1273022909 ** get_address_of_Null_0() { return &___Null_0; }
	inline void set_Null_0(Stream_t1273022909 * value)
	{
		___Null_0 = value;
		Il2CppCodeGenWriteBarrier((&___Null_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STREAM_T1273022909_H
#ifndef MARSHALBYREFOBJECT_T2760389100_H
#define MARSHALBYREFOBJECT_T2760389100_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MarshalByRefObject
struct  MarshalByRefObject_t2760389100  : public RuntimeObject
{
public:
	// System.Runtime.Remoting.ServerIdentity System.MarshalByRefObject::_identity
	ServerIdentity_t2342208608 * ____identity_0;

public:
	inline static int32_t get_offset_of__identity_0() { return static_cast<int32_t>(offsetof(MarshalByRefObject_t2760389100, ____identity_0)); }
	inline ServerIdentity_t2342208608 * get__identity_0() const { return ____identity_0; }
	inline ServerIdentity_t2342208608 ** get_address_of__identity_0() { return &____identity_0; }
	inline void set__identity_0(ServerIdentity_t2342208608 * value)
	{
		____identity_0 = value;
		Il2CppCodeGenWriteBarrier((&____identity_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MARSHALBYREFOBJECT_T2760389100_H
#ifndef STRING_T_H
#define STRING_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::length
	int32_t ___length_0;
	// System.Char System.String::start_char
	Il2CppChar ___start_char_1;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(String_t, ___length_0)); }
	inline int32_t get_length_0() const { return ___length_0; }
	inline int32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(int32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_start_char_1() { return static_cast<int32_t>(offsetof(String_t, ___start_char_1)); }
	inline Il2CppChar get_start_char_1() const { return ___start_char_1; }
	inline Il2CppChar* get_address_of_start_char_1() { return &___start_char_1; }
	inline void set_start_char_1(Il2CppChar value)
	{
		___start_char_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_2;
	// System.Char[] System.String::WhiteChars
	CharU5BU5D_t3528271667* ___WhiteChars_3;

public:
	inline static int32_t get_offset_of_Empty_2() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_2)); }
	inline String_t* get_Empty_2() const { return ___Empty_2; }
	inline String_t** get_address_of_Empty_2() { return &___Empty_2; }
	inline void set_Empty_2(String_t* value)
	{
		___Empty_2 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_2), value);
	}

	inline static int32_t get_offset_of_WhiteChars_3() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___WhiteChars_3)); }
	inline CharU5BU5D_t3528271667* get_WhiteChars_3() const { return ___WhiteChars_3; }
	inline CharU5BU5D_t3528271667** get_address_of_WhiteChars_3() { return &___WhiteChars_3; }
	inline void set_WhiteChars_3(CharU5BU5D_t3528271667* value)
	{
		___WhiteChars_3 = value;
		Il2CppCodeGenWriteBarrier((&___WhiteChars_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRING_T_H
#ifndef ENCODING_T1523322056_H
#define ENCODING_T1523322056_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.Encoding
struct  Encoding_t1523322056  : public RuntimeObject
{
public:
	// System.Int32 System.Text.Encoding::codePage
	int32_t ___codePage_0;
	// System.Int32 System.Text.Encoding::windows_code_page
	int32_t ___windows_code_page_1;
	// System.Boolean System.Text.Encoding::is_readonly
	bool ___is_readonly_2;
	// System.Text.DecoderFallback System.Text.Encoding::decoder_fallback
	DecoderFallback_t3123823036 * ___decoder_fallback_3;
	// System.Text.EncoderFallback System.Text.Encoding::encoder_fallback
	EncoderFallback_t1188251036 * ___encoder_fallback_4;
	// System.String System.Text.Encoding::body_name
	String_t* ___body_name_8;
	// System.String System.Text.Encoding::encoding_name
	String_t* ___encoding_name_9;
	// System.String System.Text.Encoding::header_name
	String_t* ___header_name_10;
	// System.Boolean System.Text.Encoding::is_mail_news_display
	bool ___is_mail_news_display_11;
	// System.Boolean System.Text.Encoding::is_mail_news_save
	bool ___is_mail_news_save_12;
	// System.Boolean System.Text.Encoding::is_browser_save
	bool ___is_browser_save_13;
	// System.Boolean System.Text.Encoding::is_browser_display
	bool ___is_browser_display_14;
	// System.String System.Text.Encoding::web_name
	String_t* ___web_name_15;

public:
	inline static int32_t get_offset_of_codePage_0() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___codePage_0)); }
	inline int32_t get_codePage_0() const { return ___codePage_0; }
	inline int32_t* get_address_of_codePage_0() { return &___codePage_0; }
	inline void set_codePage_0(int32_t value)
	{
		___codePage_0 = value;
	}

	inline static int32_t get_offset_of_windows_code_page_1() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___windows_code_page_1)); }
	inline int32_t get_windows_code_page_1() const { return ___windows_code_page_1; }
	inline int32_t* get_address_of_windows_code_page_1() { return &___windows_code_page_1; }
	inline void set_windows_code_page_1(int32_t value)
	{
		___windows_code_page_1 = value;
	}

	inline static int32_t get_offset_of_is_readonly_2() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___is_readonly_2)); }
	inline bool get_is_readonly_2() const { return ___is_readonly_2; }
	inline bool* get_address_of_is_readonly_2() { return &___is_readonly_2; }
	inline void set_is_readonly_2(bool value)
	{
		___is_readonly_2 = value;
	}

	inline static int32_t get_offset_of_decoder_fallback_3() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___decoder_fallback_3)); }
	inline DecoderFallback_t3123823036 * get_decoder_fallback_3() const { return ___decoder_fallback_3; }
	inline DecoderFallback_t3123823036 ** get_address_of_decoder_fallback_3() { return &___decoder_fallback_3; }
	inline void set_decoder_fallback_3(DecoderFallback_t3123823036 * value)
	{
		___decoder_fallback_3 = value;
		Il2CppCodeGenWriteBarrier((&___decoder_fallback_3), value);
	}

	inline static int32_t get_offset_of_encoder_fallback_4() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___encoder_fallback_4)); }
	inline EncoderFallback_t1188251036 * get_encoder_fallback_4() const { return ___encoder_fallback_4; }
	inline EncoderFallback_t1188251036 ** get_address_of_encoder_fallback_4() { return &___encoder_fallback_4; }
	inline void set_encoder_fallback_4(EncoderFallback_t1188251036 * value)
	{
		___encoder_fallback_4 = value;
		Il2CppCodeGenWriteBarrier((&___encoder_fallback_4), value);
	}

	inline static int32_t get_offset_of_body_name_8() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___body_name_8)); }
	inline String_t* get_body_name_8() const { return ___body_name_8; }
	inline String_t** get_address_of_body_name_8() { return &___body_name_8; }
	inline void set_body_name_8(String_t* value)
	{
		___body_name_8 = value;
		Il2CppCodeGenWriteBarrier((&___body_name_8), value);
	}

	inline static int32_t get_offset_of_encoding_name_9() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___encoding_name_9)); }
	inline String_t* get_encoding_name_9() const { return ___encoding_name_9; }
	inline String_t** get_address_of_encoding_name_9() { return &___encoding_name_9; }
	inline void set_encoding_name_9(String_t* value)
	{
		___encoding_name_9 = value;
		Il2CppCodeGenWriteBarrier((&___encoding_name_9), value);
	}

	inline static int32_t get_offset_of_header_name_10() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___header_name_10)); }
	inline String_t* get_header_name_10() const { return ___header_name_10; }
	inline String_t** get_address_of_header_name_10() { return &___header_name_10; }
	inline void set_header_name_10(String_t* value)
	{
		___header_name_10 = value;
		Il2CppCodeGenWriteBarrier((&___header_name_10), value);
	}

	inline static int32_t get_offset_of_is_mail_news_display_11() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___is_mail_news_display_11)); }
	inline bool get_is_mail_news_display_11() const { return ___is_mail_news_display_11; }
	inline bool* get_address_of_is_mail_news_display_11() { return &___is_mail_news_display_11; }
	inline void set_is_mail_news_display_11(bool value)
	{
		___is_mail_news_display_11 = value;
	}

	inline static int32_t get_offset_of_is_mail_news_save_12() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___is_mail_news_save_12)); }
	inline bool get_is_mail_news_save_12() const { return ___is_mail_news_save_12; }
	inline bool* get_address_of_is_mail_news_save_12() { return &___is_mail_news_save_12; }
	inline void set_is_mail_news_save_12(bool value)
	{
		___is_mail_news_save_12 = value;
	}

	inline static int32_t get_offset_of_is_browser_save_13() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___is_browser_save_13)); }
	inline bool get_is_browser_save_13() const { return ___is_browser_save_13; }
	inline bool* get_address_of_is_browser_save_13() { return &___is_browser_save_13; }
	inline void set_is_browser_save_13(bool value)
	{
		___is_browser_save_13 = value;
	}

	inline static int32_t get_offset_of_is_browser_display_14() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___is_browser_display_14)); }
	inline bool get_is_browser_display_14() const { return ___is_browser_display_14; }
	inline bool* get_address_of_is_browser_display_14() { return &___is_browser_display_14; }
	inline void set_is_browser_display_14(bool value)
	{
		___is_browser_display_14 = value;
	}

	inline static int32_t get_offset_of_web_name_15() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___web_name_15)); }
	inline String_t* get_web_name_15() const { return ___web_name_15; }
	inline String_t** get_address_of_web_name_15() { return &___web_name_15; }
	inline void set_web_name_15(String_t* value)
	{
		___web_name_15 = value;
		Il2CppCodeGenWriteBarrier((&___web_name_15), value);
	}
};

struct Encoding_t1523322056_StaticFields
{
public:
	// System.Reflection.Assembly System.Text.Encoding::i18nAssembly
	Assembly_t * ___i18nAssembly_5;
	// System.Boolean System.Text.Encoding::i18nDisabled
	bool ___i18nDisabled_6;
	// System.Object[] System.Text.Encoding::encodings
	ObjectU5BU5D_t2843939325* ___encodings_7;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::asciiEncoding
	Encoding_t1523322056 * ___asciiEncoding_16;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::bigEndianEncoding
	Encoding_t1523322056 * ___bigEndianEncoding_17;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::defaultEncoding
	Encoding_t1523322056 * ___defaultEncoding_18;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf7Encoding
	Encoding_t1523322056 * ___utf7Encoding_19;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8EncodingWithMarkers
	Encoding_t1523322056 * ___utf8EncodingWithMarkers_20;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8EncodingWithoutMarkers
	Encoding_t1523322056 * ___utf8EncodingWithoutMarkers_21;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::unicodeEncoding
	Encoding_t1523322056 * ___unicodeEncoding_22;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::isoLatin1Encoding
	Encoding_t1523322056 * ___isoLatin1Encoding_23;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8EncodingUnsafe
	Encoding_t1523322056 * ___utf8EncodingUnsafe_24;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf32Encoding
	Encoding_t1523322056 * ___utf32Encoding_25;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::bigEndianUTF32Encoding
	Encoding_t1523322056 * ___bigEndianUTF32Encoding_26;
	// System.Object System.Text.Encoding::lockobj
	RuntimeObject * ___lockobj_27;

public:
	inline static int32_t get_offset_of_i18nAssembly_5() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___i18nAssembly_5)); }
	inline Assembly_t * get_i18nAssembly_5() const { return ___i18nAssembly_5; }
	inline Assembly_t ** get_address_of_i18nAssembly_5() { return &___i18nAssembly_5; }
	inline void set_i18nAssembly_5(Assembly_t * value)
	{
		___i18nAssembly_5 = value;
		Il2CppCodeGenWriteBarrier((&___i18nAssembly_5), value);
	}

	inline static int32_t get_offset_of_i18nDisabled_6() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___i18nDisabled_6)); }
	inline bool get_i18nDisabled_6() const { return ___i18nDisabled_6; }
	inline bool* get_address_of_i18nDisabled_6() { return &___i18nDisabled_6; }
	inline void set_i18nDisabled_6(bool value)
	{
		___i18nDisabled_6 = value;
	}

	inline static int32_t get_offset_of_encodings_7() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___encodings_7)); }
	inline ObjectU5BU5D_t2843939325* get_encodings_7() const { return ___encodings_7; }
	inline ObjectU5BU5D_t2843939325** get_address_of_encodings_7() { return &___encodings_7; }
	inline void set_encodings_7(ObjectU5BU5D_t2843939325* value)
	{
		___encodings_7 = value;
		Il2CppCodeGenWriteBarrier((&___encodings_7), value);
	}

	inline static int32_t get_offset_of_asciiEncoding_16() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___asciiEncoding_16)); }
	inline Encoding_t1523322056 * get_asciiEncoding_16() const { return ___asciiEncoding_16; }
	inline Encoding_t1523322056 ** get_address_of_asciiEncoding_16() { return &___asciiEncoding_16; }
	inline void set_asciiEncoding_16(Encoding_t1523322056 * value)
	{
		___asciiEncoding_16 = value;
		Il2CppCodeGenWriteBarrier((&___asciiEncoding_16), value);
	}

	inline static int32_t get_offset_of_bigEndianEncoding_17() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___bigEndianEncoding_17)); }
	inline Encoding_t1523322056 * get_bigEndianEncoding_17() const { return ___bigEndianEncoding_17; }
	inline Encoding_t1523322056 ** get_address_of_bigEndianEncoding_17() { return &___bigEndianEncoding_17; }
	inline void set_bigEndianEncoding_17(Encoding_t1523322056 * value)
	{
		___bigEndianEncoding_17 = value;
		Il2CppCodeGenWriteBarrier((&___bigEndianEncoding_17), value);
	}

	inline static int32_t get_offset_of_defaultEncoding_18() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___defaultEncoding_18)); }
	inline Encoding_t1523322056 * get_defaultEncoding_18() const { return ___defaultEncoding_18; }
	inline Encoding_t1523322056 ** get_address_of_defaultEncoding_18() { return &___defaultEncoding_18; }
	inline void set_defaultEncoding_18(Encoding_t1523322056 * value)
	{
		___defaultEncoding_18 = value;
		Il2CppCodeGenWriteBarrier((&___defaultEncoding_18), value);
	}

	inline static int32_t get_offset_of_utf7Encoding_19() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___utf7Encoding_19)); }
	inline Encoding_t1523322056 * get_utf7Encoding_19() const { return ___utf7Encoding_19; }
	inline Encoding_t1523322056 ** get_address_of_utf7Encoding_19() { return &___utf7Encoding_19; }
	inline void set_utf7Encoding_19(Encoding_t1523322056 * value)
	{
		___utf7Encoding_19 = value;
		Il2CppCodeGenWriteBarrier((&___utf7Encoding_19), value);
	}

	inline static int32_t get_offset_of_utf8EncodingWithMarkers_20() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___utf8EncodingWithMarkers_20)); }
	inline Encoding_t1523322056 * get_utf8EncodingWithMarkers_20() const { return ___utf8EncodingWithMarkers_20; }
	inline Encoding_t1523322056 ** get_address_of_utf8EncodingWithMarkers_20() { return &___utf8EncodingWithMarkers_20; }
	inline void set_utf8EncodingWithMarkers_20(Encoding_t1523322056 * value)
	{
		___utf8EncodingWithMarkers_20 = value;
		Il2CppCodeGenWriteBarrier((&___utf8EncodingWithMarkers_20), value);
	}

	inline static int32_t get_offset_of_utf8EncodingWithoutMarkers_21() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___utf8EncodingWithoutMarkers_21)); }
	inline Encoding_t1523322056 * get_utf8EncodingWithoutMarkers_21() const { return ___utf8EncodingWithoutMarkers_21; }
	inline Encoding_t1523322056 ** get_address_of_utf8EncodingWithoutMarkers_21() { return &___utf8EncodingWithoutMarkers_21; }
	inline void set_utf8EncodingWithoutMarkers_21(Encoding_t1523322056 * value)
	{
		___utf8EncodingWithoutMarkers_21 = value;
		Il2CppCodeGenWriteBarrier((&___utf8EncodingWithoutMarkers_21), value);
	}

	inline static int32_t get_offset_of_unicodeEncoding_22() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___unicodeEncoding_22)); }
	inline Encoding_t1523322056 * get_unicodeEncoding_22() const { return ___unicodeEncoding_22; }
	inline Encoding_t1523322056 ** get_address_of_unicodeEncoding_22() { return &___unicodeEncoding_22; }
	inline void set_unicodeEncoding_22(Encoding_t1523322056 * value)
	{
		___unicodeEncoding_22 = value;
		Il2CppCodeGenWriteBarrier((&___unicodeEncoding_22), value);
	}

	inline static int32_t get_offset_of_isoLatin1Encoding_23() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___isoLatin1Encoding_23)); }
	inline Encoding_t1523322056 * get_isoLatin1Encoding_23() const { return ___isoLatin1Encoding_23; }
	inline Encoding_t1523322056 ** get_address_of_isoLatin1Encoding_23() { return &___isoLatin1Encoding_23; }
	inline void set_isoLatin1Encoding_23(Encoding_t1523322056 * value)
	{
		___isoLatin1Encoding_23 = value;
		Il2CppCodeGenWriteBarrier((&___isoLatin1Encoding_23), value);
	}

	inline static int32_t get_offset_of_utf8EncodingUnsafe_24() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___utf8EncodingUnsafe_24)); }
	inline Encoding_t1523322056 * get_utf8EncodingUnsafe_24() const { return ___utf8EncodingUnsafe_24; }
	inline Encoding_t1523322056 ** get_address_of_utf8EncodingUnsafe_24() { return &___utf8EncodingUnsafe_24; }
	inline void set_utf8EncodingUnsafe_24(Encoding_t1523322056 * value)
	{
		___utf8EncodingUnsafe_24 = value;
		Il2CppCodeGenWriteBarrier((&___utf8EncodingUnsafe_24), value);
	}

	inline static int32_t get_offset_of_utf32Encoding_25() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___utf32Encoding_25)); }
	inline Encoding_t1523322056 * get_utf32Encoding_25() const { return ___utf32Encoding_25; }
	inline Encoding_t1523322056 ** get_address_of_utf32Encoding_25() { return &___utf32Encoding_25; }
	inline void set_utf32Encoding_25(Encoding_t1523322056 * value)
	{
		___utf32Encoding_25 = value;
		Il2CppCodeGenWriteBarrier((&___utf32Encoding_25), value);
	}

	inline static int32_t get_offset_of_bigEndianUTF32Encoding_26() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___bigEndianUTF32Encoding_26)); }
	inline Encoding_t1523322056 * get_bigEndianUTF32Encoding_26() const { return ___bigEndianUTF32Encoding_26; }
	inline Encoding_t1523322056 ** get_address_of_bigEndianUTF32Encoding_26() { return &___bigEndianUTF32Encoding_26; }
	inline void set_bigEndianUTF32Encoding_26(Encoding_t1523322056 * value)
	{
		___bigEndianUTF32Encoding_26 = value;
		Il2CppCodeGenWriteBarrier((&___bigEndianUTF32Encoding_26), value);
	}

	inline static int32_t get_offset_of_lockobj_27() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___lockobj_27)); }
	inline RuntimeObject * get_lockobj_27() const { return ___lockobj_27; }
	inline RuntimeObject ** get_address_of_lockobj_27() { return &___lockobj_27; }
	inline void set_lockobj_27(RuntimeObject * value)
	{
		___lockobj_27 = value;
		Il2CppCodeGenWriteBarrier((&___lockobj_27), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCODING_T1523322056_H
#ifndef VALUETYPE_T3640485471_H
#define VALUETYPE_T3640485471_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t3640485471  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_com
{
};
#endif // VALUETYPE_T3640485471_H
#ifndef U24ARRAYTYPEU3D1152_T2547539028_H
#define U24ARRAYTYPEU3D1152_T2547539028_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>{99f15b47-93f0-442d-a950-84e2e79a92c8}/$ArrayType=1152
struct  U24ArrayTypeU3D1152_t2547539028 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t U24ArrayTypeU3D1152_t2547539028__padding[1152];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU3D1152_T2547539028_H
#ifndef U24ARRAYTYPEU3D116_T22472633_H
#define U24ARRAYTYPEU3D116_T22472633_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>{99f15b47-93f0-442d-a950-84e2e79a92c8}/$ArrayType=116
struct  U24ArrayTypeU3D116_t22472633 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t U24ArrayTypeU3D116_t22472633__padding[116];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU3D116_T22472633_H
#ifndef U24ARRAYTYPEU3D12_T3226631958_H
#define U24ARRAYTYPEU3D12_T3226631958_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>{99f15b47-93f0-442d-a950-84e2e79a92c8}/$ArrayType=12
struct  U24ArrayTypeU3D12_t3226631958 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t U24ArrayTypeU3D12_t3226631958__padding[12];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU3D12_T3226631958_H
#ifndef U24ARRAYTYPEU3D120_T3154574979_H
#define U24ARRAYTYPEU3D120_T3154574979_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>{99f15b47-93f0-442d-a950-84e2e79a92c8}/$ArrayType=120
struct  U24ArrayTypeU3D120_t3154574979 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t U24ArrayTypeU3D120_t3154574979__padding[120];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU3D120_T3154574979_H
#ifndef U24ARRAYTYPEU3D124_T1185206511_H
#define U24ARRAYTYPEU3D124_T1185206511_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>{99f15b47-93f0-442d-a950-84e2e79a92c8}/$ArrayType=124
struct  U24ArrayTypeU3D124_t1185206511 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t U24ArrayTypeU3D124_t1185206511__padding[124];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU3D124_T1185206511_H
#ifndef U24ARRAYTYPEU3D20_T3226763031_H
#define U24ARRAYTYPEU3D20_T3226763031_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>{99f15b47-93f0-442d-a950-84e2e79a92c8}/$ArrayType=20
struct  U24ArrayTypeU3D20_t3226763031 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t U24ArrayTypeU3D20_t3226763031__padding[20];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU3D20_T3226763031_H
#ifndef U24ARRAYTYPEU3D256_T22734778_H
#define U24ARRAYTYPEU3D256_T22734778_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>{99f15b47-93f0-442d-a950-84e2e79a92c8}/$ArrayType=256
struct  U24ArrayTypeU3D256_t22734778 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t U24ArrayTypeU3D256_t22734778__padding[256];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU3D256_T22734778_H
#ifndef U24ARRAYTYPEU3D384_T1185861873_H
#define U24ARRAYTYPEU3D384_T1185861873_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>{99f15b47-93f0-442d-a950-84e2e79a92c8}/$ArrayType=384
struct  U24ArrayTypeU3D384_t1185861873 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t U24ArrayTypeU3D384_t1185861873__padding[384];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU3D384_T1185861873_H
#ifndef U24ARRAYTYPEU3D512_T1991841097_H
#define U24ARRAYTYPEU3D512_T1991841097_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>{99f15b47-93f0-442d-a950-84e2e79a92c8}/$ArrayType=512
struct  U24ArrayTypeU3D512_t1991841097 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t U24ArrayTypeU3D512_t1991841097__padding[512];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU3D512_T1991841097_H
#ifndef U24ARRAYTYPEU3D6144_T1363792108_H
#define U24ARRAYTYPEU3D6144_T1363792108_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>{99f15b47-93f0-442d-a950-84e2e79a92c8}/$ArrayType=6144
struct  U24ArrayTypeU3D6144_t1363792108 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t U24ArrayTypeU3D6144_t1363792108__padding[6144];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU3D6144_T1363792108_H
#ifndef U24ARRAYTYPEU3D68_T3227287315_H
#define U24ARRAYTYPEU3D68_T3227287315_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>{99f15b47-93f0-442d-a950-84e2e79a92c8}/$ArrayType=68
struct  U24ArrayTypeU3D68_t3227287315 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t U24ArrayTypeU3D68_t3227287315__padding[68];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU3D68_T3227287315_H
#ifndef U24ARRAYTYPEU3D76_T3226894100_H
#define U24ARRAYTYPEU3D76_T3226894100_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>{99f15b47-93f0-442d-a950-84e2e79a92c8}/$ArrayType=76
struct  U24ArrayTypeU3D76_t3226894100 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t U24ArrayTypeU3D76_t3226894100__padding[76];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU3D76_T3226894100_H
#ifndef DEFLATESTREAM_T475334119_H
#define DEFLATESTREAM_T475334119_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Pathfinding.Ionic.Zlib.DeflateStream
struct  DeflateStream_t475334119  : public Stream_t1273022909
{
public:
	// Pathfinding.Ionic.Zlib.ZlibBaseStream Pathfinding.Ionic.Zlib.DeflateStream::_baseStream
	ZlibBaseStream_t3561210688 * ____baseStream_1;
	// System.IO.Stream Pathfinding.Ionic.Zlib.DeflateStream::_innerStream
	Stream_t1273022909 * ____innerStream_2;
	// System.Boolean Pathfinding.Ionic.Zlib.DeflateStream::_disposed
	bool ____disposed_3;

public:
	inline static int32_t get_offset_of__baseStream_1() { return static_cast<int32_t>(offsetof(DeflateStream_t475334119, ____baseStream_1)); }
	inline ZlibBaseStream_t3561210688 * get__baseStream_1() const { return ____baseStream_1; }
	inline ZlibBaseStream_t3561210688 ** get_address_of__baseStream_1() { return &____baseStream_1; }
	inline void set__baseStream_1(ZlibBaseStream_t3561210688 * value)
	{
		____baseStream_1 = value;
		Il2CppCodeGenWriteBarrier((&____baseStream_1), value);
	}

	inline static int32_t get_offset_of__innerStream_2() { return static_cast<int32_t>(offsetof(DeflateStream_t475334119, ____innerStream_2)); }
	inline Stream_t1273022909 * get__innerStream_2() const { return ____innerStream_2; }
	inline Stream_t1273022909 ** get_address_of__innerStream_2() { return &____innerStream_2; }
	inline void set__innerStream_2(Stream_t1273022909 * value)
	{
		____innerStream_2 = value;
		Il2CppCodeGenWriteBarrier((&____innerStream_2), value);
	}

	inline static int32_t get_offset_of__disposed_3() { return static_cast<int32_t>(offsetof(DeflateStream_t475334119, ____disposed_3)); }
	inline bool get__disposed_3() const { return ____disposed_3; }
	inline bool* get_address_of__disposed_3() { return &____disposed_3; }
	inline void set__disposed_3(bool value)
	{
		____disposed_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEFLATESTREAM_T475334119_H
#ifndef ZLIBEXCEPTION_T3942143964_H
#define ZLIBEXCEPTION_T3942143964_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Pathfinding.Ionic.Zlib.ZlibException
struct  ZlibException_t3942143964  : public Exception_t
{
public:
	static const Il2CppGuid CLSID;

public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ZLIBEXCEPTION_T3942143964_H
#ifndef BOOLEAN_T97287965_H
#define BOOLEAN_T97287965_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Boolean
struct  Boolean_t97287965 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Boolean_t97287965, ___m_value_2)); }
	inline bool get_m_value_2() const { return ___m_value_2; }
	inline bool* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(bool value)
	{
		___m_value_2 = value;
	}
};

struct Boolean_t97287965_StaticFields
{
public:
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_0;
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_1;

public:
	inline static int32_t get_offset_of_FalseString_0() { return static_cast<int32_t>(offsetof(Boolean_t97287965_StaticFields, ___FalseString_0)); }
	inline String_t* get_FalseString_0() const { return ___FalseString_0; }
	inline String_t** get_address_of_FalseString_0() { return &___FalseString_0; }
	inline void set_FalseString_0(String_t* value)
	{
		___FalseString_0 = value;
		Il2CppCodeGenWriteBarrier((&___FalseString_0), value);
	}

	inline static int32_t get_offset_of_TrueString_1() { return static_cast<int32_t>(offsetof(Boolean_t97287965_StaticFields, ___TrueString_1)); }
	inline String_t* get_TrueString_1() const { return ___TrueString_1; }
	inline String_t** get_address_of_TrueString_1() { return &___TrueString_1; }
	inline void set_TrueString_1(String_t* value)
	{
		___TrueString_1 = value;
		Il2CppCodeGenWriteBarrier((&___TrueString_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOOLEAN_T97287965_H
#ifndef BYTE_T1134296376_H
#define BYTE_T1134296376_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Byte
struct  Byte_t1134296376 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Byte_t1134296376, ___m_value_2)); }
	inline uint8_t get_m_value_2() const { return ___m_value_2; }
	inline uint8_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(uint8_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BYTE_T1134296376_H
#ifndef ENUMERATOR_T1772402252_H
#define ENUMERATOR_T1772402252_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1/Enumerator<Pathfinding.Ionic.Zlib.WorkItem>
struct  Enumerator_t1772402252 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::l
	List_1_t4178125671 * ___l_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::next
	int32_t ___next_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::ver
	int32_t ___ver_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	WorkItem_t2706050929 * ___current_3;

public:
	inline static int32_t get_offset_of_l_0() { return static_cast<int32_t>(offsetof(Enumerator_t1772402252, ___l_0)); }
	inline List_1_t4178125671 * get_l_0() const { return ___l_0; }
	inline List_1_t4178125671 ** get_address_of_l_0() { return &___l_0; }
	inline void set_l_0(List_1_t4178125671 * value)
	{
		___l_0 = value;
		Il2CppCodeGenWriteBarrier((&___l_0), value);
	}

	inline static int32_t get_offset_of_next_1() { return static_cast<int32_t>(offsetof(Enumerator_t1772402252, ___next_1)); }
	inline int32_t get_next_1() const { return ___next_1; }
	inline int32_t* get_address_of_next_1() { return &___next_1; }
	inline void set_next_1(int32_t value)
	{
		___next_1 = value;
	}

	inline static int32_t get_offset_of_ver_2() { return static_cast<int32_t>(offsetof(Enumerator_t1772402252, ___ver_2)); }
	inline int32_t get_ver_2() const { return ___ver_2; }
	inline int32_t* get_address_of_ver_2() { return &___ver_2; }
	inline void set_ver_2(int32_t value)
	{
		___ver_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t1772402252, ___current_3)); }
	inline WorkItem_t2706050929 * get_current_3() const { return ___current_3; }
	inline WorkItem_t2706050929 ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(WorkItem_t2706050929 * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((&___current_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T1772402252_H
#ifndef ENUMERATOR_T2146457487_H
#define ENUMERATOR_T2146457487_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1/Enumerator<System.Object>
struct  Enumerator_t2146457487 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::l
	List_1_t257213610 * ___l_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::next
	int32_t ___next_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::ver
	int32_t ___ver_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	RuntimeObject * ___current_3;

public:
	inline static int32_t get_offset_of_l_0() { return static_cast<int32_t>(offsetof(Enumerator_t2146457487, ___l_0)); }
	inline List_1_t257213610 * get_l_0() const { return ___l_0; }
	inline List_1_t257213610 ** get_address_of_l_0() { return &___l_0; }
	inline void set_l_0(List_1_t257213610 * value)
	{
		___l_0 = value;
		Il2CppCodeGenWriteBarrier((&___l_0), value);
	}

	inline static int32_t get_offset_of_next_1() { return static_cast<int32_t>(offsetof(Enumerator_t2146457487, ___next_1)); }
	inline int32_t get_next_1() const { return ___next_1; }
	inline int32_t* get_address_of_next_1() { return &___next_1; }
	inline void set_next_1(int32_t value)
	{
		___next_1 = value;
	}

	inline static int32_t get_offset_of_ver_2() { return static_cast<int32_t>(offsetof(Enumerator_t2146457487, ___ver_2)); }
	inline int32_t get_ver_2() const { return ___ver_2; }
	inline int32_t* get_address_of_ver_2() { return &___ver_2; }
	inline void set_ver_2(int32_t value)
	{
		___ver_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t2146457487, ___current_3)); }
	inline RuntimeObject * get_current_3() const { return ___current_3; }
	inline RuntimeObject ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(RuntimeObject * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((&___current_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T2146457487_H
#ifndef DOUBLE_T594665363_H
#define DOUBLE_T594665363_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Double
struct  Double_t594665363 
{
public:
	// System.Double System.Double::m_value
	double ___m_value_13;

public:
	inline static int32_t get_offset_of_m_value_13() { return static_cast<int32_t>(offsetof(Double_t594665363, ___m_value_13)); }
	inline double get_m_value_13() const { return ___m_value_13; }
	inline double* get_address_of_m_value_13() { return &___m_value_13; }
	inline void set_m_value_13(double value)
	{
		___m_value_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DOUBLE_T594665363_H
#ifndef ENUM_T4135868527_H
#define ENUM_T4135868527_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t4135868527  : public ValueType_t3640485471
{
public:

public:
};

struct Enum_t4135868527_StaticFields
{
public:
	// System.Char[] System.Enum::split_char
	CharU5BU5D_t3528271667* ___split_char_0;

public:
	inline static int32_t get_offset_of_split_char_0() { return static_cast<int32_t>(offsetof(Enum_t4135868527_StaticFields, ___split_char_0)); }
	inline CharU5BU5D_t3528271667* get_split_char_0() const { return ___split_char_0; }
	inline CharU5BU5D_t3528271667** get_address_of_split_char_0() { return &___split_char_0; }
	inline void set_split_char_0(CharU5BU5D_t3528271667* value)
	{
		___split_char_0 = value;
		Il2CppCodeGenWriteBarrier((&___split_char_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t4135868527_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t4135868527_marshaled_com
{
};
#endif // ENUM_T4135868527_H
#ifndef INT16_T2552820387_H
#define INT16_T2552820387_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int16
struct  Int16_t2552820387 
{
public:
	// System.Int16 System.Int16::m_value
	int16_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int16_t2552820387, ___m_value_0)); }
	inline int16_t get_m_value_0() const { return ___m_value_0; }
	inline int16_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int16_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT16_T2552820387_H
#ifndef INT32_T2950945753_H
#define INT32_T2950945753_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int32
struct  Int32_t2950945753 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Int32_t2950945753, ___m_value_2)); }
	inline int32_t get_m_value_2() const { return ___m_value_2; }
	inline int32_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(int32_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT32_T2950945753_H
#ifndef INT64_T3736567304_H
#define INT64_T3736567304_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int64
struct  Int64_t3736567304 
{
public:
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Int64_t3736567304, ___m_value_2)); }
	inline int64_t get_m_value_2() const { return ___m_value_2; }
	inline int64_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(int64_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT64_T3736567304_H
#ifndef INTPTR_T_H
#define INTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

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

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTPTR_T_H
#ifndef SBYTE_T1669577662_H
#define SBYTE_T1669577662_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.SByte
struct  SByte_t1669577662 
{
public:
	// System.SByte System.SByte::m_value
	int8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(SByte_t1669577662, ___m_value_0)); }
	inline int8_t get_m_value_0() const { return ___m_value_0; }
	inline int8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int8_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SBYTE_T1669577662_H
#ifndef SYSTEMEXCEPTION_T176217640_H
#define SYSTEMEXCEPTION_T176217640_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.SystemException
struct  SystemException_t176217640  : public Exception_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYSTEMEXCEPTION_T176217640_H
#ifndef TIMESPAN_T881159249_H
#define TIMESPAN_T881159249_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.TimeSpan
struct  TimeSpan_t881159249 
{
public:
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_8;

public:
	inline static int32_t get_offset_of__ticks_8() { return static_cast<int32_t>(offsetof(TimeSpan_t881159249, ____ticks_8)); }
	inline int64_t get__ticks_8() const { return ____ticks_8; }
	inline int64_t* get_address_of__ticks_8() { return &____ticks_8; }
	inline void set__ticks_8(int64_t value)
	{
		____ticks_8 = value;
	}
};

struct TimeSpan_t881159249_StaticFields
{
public:
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_t881159249  ___MaxValue_5;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_t881159249  ___MinValue_6;
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_t881159249  ___Zero_7;

public:
	inline static int32_t get_offset_of_MaxValue_5() { return static_cast<int32_t>(offsetof(TimeSpan_t881159249_StaticFields, ___MaxValue_5)); }
	inline TimeSpan_t881159249  get_MaxValue_5() const { return ___MaxValue_5; }
	inline TimeSpan_t881159249 * get_address_of_MaxValue_5() { return &___MaxValue_5; }
	inline void set_MaxValue_5(TimeSpan_t881159249  value)
	{
		___MaxValue_5 = value;
	}

	inline static int32_t get_offset_of_MinValue_6() { return static_cast<int32_t>(offsetof(TimeSpan_t881159249_StaticFields, ___MinValue_6)); }
	inline TimeSpan_t881159249  get_MinValue_6() const { return ___MinValue_6; }
	inline TimeSpan_t881159249 * get_address_of_MinValue_6() { return &___MinValue_6; }
	inline void set_MinValue_6(TimeSpan_t881159249  value)
	{
		___MinValue_6 = value;
	}

	inline static int32_t get_offset_of_Zero_7() { return static_cast<int32_t>(offsetof(TimeSpan_t881159249_StaticFields, ___Zero_7)); }
	inline TimeSpan_t881159249  get_Zero_7() const { return ___Zero_7; }
	inline TimeSpan_t881159249 * get_address_of_Zero_7() { return &___Zero_7; }
	inline void set_Zero_7(TimeSpan_t881159249  value)
	{
		___Zero_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TIMESPAN_T881159249_H
#ifndef UINT32_T2560061978_H
#define UINT32_T2560061978_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UInt32
struct  UInt32_t2560061978 
{
public:
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(UInt32_t2560061978, ___m_value_2)); }
	inline uint32_t get_m_value_2() const { return ___m_value_2; }
	inline uint32_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(uint32_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINT32_T2560061978_H
#ifndef VOID_T1185182177_H
#define VOID_T1185182177_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t1185182177 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T1185182177_H
#ifndef U3CPRIVATEIMPLEMENTATIONDETAILSU3EU7B99F15B47U2D93F0U2D442DU2DA950U2D84E2E79A92C8U7D_T3841250540_H
#define U3CPRIVATEIMPLEMENTATIONDETAILSU3EU7B99F15B47U2D93F0U2D442DU2DA950U2D84E2E79A92C8U7D_T3841250540_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>{99f15b47-93f0-442d-a950-84e2e79a92c8}
struct  U3CPrivateImplementationDetailsU3EU7B99f15b47U2D93f0U2D442dU2Da950U2D84e2e79a92c8U7D_t3841250540  : public RuntimeObject
{
public:

public:
};

struct U3CPrivateImplementationDetailsU3EU7B99f15b47U2D93f0U2D442dU2Da950U2D84e2e79a92c8U7D_t3841250540_StaticFields
{
public:
	// <PrivateImplementationDetails>{99f15b47-93f0-442d-a950-84e2e79a92c8}/$ArrayType=12 <PrivateImplementationDetails>{99f15b47-93f0-442d-a950-84e2e79a92c8}::$field-0
	U24ArrayTypeU3D12_t3226631958  ___U24fieldU2D0_0;
	// <PrivateImplementationDetails>{99f15b47-93f0-442d-a950-84e2e79a92c8}/$ArrayType=6144 <PrivateImplementationDetails>{99f15b47-93f0-442d-a950-84e2e79a92c8}::$field-5
	U24ArrayTypeU3D6144_t1363792108  ___U24fieldU2D5_1;
	// <PrivateImplementationDetails>{99f15b47-93f0-442d-a950-84e2e79a92c8}/$ArrayType=384 <PrivateImplementationDetails>{99f15b47-93f0-442d-a950-84e2e79a92c8}::$field-6
	U24ArrayTypeU3D384_t1185861873  ___U24fieldU2D6_2;
	// <PrivateImplementationDetails>{99f15b47-93f0-442d-a950-84e2e79a92c8}/$ArrayType=124 <PrivateImplementationDetails>{99f15b47-93f0-442d-a950-84e2e79a92c8}::$field-7
	U24ArrayTypeU3D124_t1185206511  ___U24fieldU2D7_3;
	// <PrivateImplementationDetails>{99f15b47-93f0-442d-a950-84e2e79a92c8}/$ArrayType=124 <PrivateImplementationDetails>{99f15b47-93f0-442d-a950-84e2e79a92c8}::$field-8
	U24ArrayTypeU3D124_t1185206511  ___U24fieldU2D8_4;
	// <PrivateImplementationDetails>{99f15b47-93f0-442d-a950-84e2e79a92c8}/$ArrayType=120 <PrivateImplementationDetails>{99f15b47-93f0-442d-a950-84e2e79a92c8}::$field-9
	U24ArrayTypeU3D120_t3154574979  ___U24fieldU2D9_5;
	// <PrivateImplementationDetails>{99f15b47-93f0-442d-a950-84e2e79a92c8}/$ArrayType=120 <PrivateImplementationDetails>{99f15b47-93f0-442d-a950-84e2e79a92c8}::$field-A
	U24ArrayTypeU3D120_t3154574979  ___U24fieldU2DA_6;
	// <PrivateImplementationDetails>{99f15b47-93f0-442d-a950-84e2e79a92c8}/$ArrayType=76 <PrivateImplementationDetails>{99f15b47-93f0-442d-a950-84e2e79a92c8}::$field-B
	U24ArrayTypeU3D76_t3226894100  ___U24fieldU2DB_7;
	// <PrivateImplementationDetails>{99f15b47-93f0-442d-a950-84e2e79a92c8}/$ArrayType=68 <PrivateImplementationDetails>{99f15b47-93f0-442d-a950-84e2e79a92c8}::$field-C
	U24ArrayTypeU3D68_t3227287315  ___U24fieldU2DC_8;
	// <PrivateImplementationDetails>{99f15b47-93f0-442d-a950-84e2e79a92c8}/$ArrayType=116 <PrivateImplementationDetails>{99f15b47-93f0-442d-a950-84e2e79a92c8}::$field-D
	U24ArrayTypeU3D116_t22472633  ___U24fieldU2DD_9;
	// <PrivateImplementationDetails>{99f15b47-93f0-442d-a950-84e2e79a92c8}/$ArrayType=120 <PrivateImplementationDetails>{99f15b47-93f0-442d-a950-84e2e79a92c8}::$field-E
	U24ArrayTypeU3D120_t3154574979  ___U24fieldU2DE_10;
	// <PrivateImplementationDetails>{99f15b47-93f0-442d-a950-84e2e79a92c8}/$ArrayType=76 <PrivateImplementationDetails>{99f15b47-93f0-442d-a950-84e2e79a92c8}::$field-F
	U24ArrayTypeU3D76_t3226894100  ___U24fieldU2DF_11;
	// <PrivateImplementationDetails>{99f15b47-93f0-442d-a950-84e2e79a92c8}/$ArrayType=20 <PrivateImplementationDetails>{99f15b47-93f0-442d-a950-84e2e79a92c8}::$field-10
	U24ArrayTypeU3D20_t3226763031  ___U24fieldU2D10_12;
	// <PrivateImplementationDetails>{99f15b47-93f0-442d-a950-84e2e79a92c8}/$ArrayType=512 <PrivateImplementationDetails>{99f15b47-93f0-442d-a950-84e2e79a92c8}::$field-11
	U24ArrayTypeU3D512_t1991841097  ___U24fieldU2D11_13;
	// <PrivateImplementationDetails>{99f15b47-93f0-442d-a950-84e2e79a92c8}/$ArrayType=256 <PrivateImplementationDetails>{99f15b47-93f0-442d-a950-84e2e79a92c8}::$field-12
	U24ArrayTypeU3D256_t22734778  ___U24fieldU2D12_14;
	// <PrivateImplementationDetails>{99f15b47-93f0-442d-a950-84e2e79a92c8}/$ArrayType=116 <PrivateImplementationDetails>{99f15b47-93f0-442d-a950-84e2e79a92c8}::$field-13
	U24ArrayTypeU3D116_t22472633  ___U24fieldU2D13_15;
	// <PrivateImplementationDetails>{99f15b47-93f0-442d-a950-84e2e79a92c8}/$ArrayType=120 <PrivateImplementationDetails>{99f15b47-93f0-442d-a950-84e2e79a92c8}::$field-14
	U24ArrayTypeU3D120_t3154574979  ___U24fieldU2D14_16;
	// <PrivateImplementationDetails>{99f15b47-93f0-442d-a950-84e2e79a92c8}/$ArrayType=1152 <PrivateImplementationDetails>{99f15b47-93f0-442d-a950-84e2e79a92c8}::$field-15
	U24ArrayTypeU3D1152_t2547539028  ___U24fieldU2D15_17;
	// <PrivateImplementationDetails>{99f15b47-93f0-442d-a950-84e2e79a92c8}/$ArrayType=120 <PrivateImplementationDetails>{99f15b47-93f0-442d-a950-84e2e79a92c8}::$field-16
	U24ArrayTypeU3D120_t3154574979  ___U24fieldU2D16_18;

public:
	inline static int32_t get_offset_of_U24fieldU2D0_0() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3EU7B99f15b47U2D93f0U2D442dU2Da950U2D84e2e79a92c8U7D_t3841250540_StaticFields, ___U24fieldU2D0_0)); }
	inline U24ArrayTypeU3D12_t3226631958  get_U24fieldU2D0_0() const { return ___U24fieldU2D0_0; }
	inline U24ArrayTypeU3D12_t3226631958 * get_address_of_U24fieldU2D0_0() { return &___U24fieldU2D0_0; }
	inline void set_U24fieldU2D0_0(U24ArrayTypeU3D12_t3226631958  value)
	{
		___U24fieldU2D0_0 = value;
	}

	inline static int32_t get_offset_of_U24fieldU2D5_1() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3EU7B99f15b47U2D93f0U2D442dU2Da950U2D84e2e79a92c8U7D_t3841250540_StaticFields, ___U24fieldU2D5_1)); }
	inline U24ArrayTypeU3D6144_t1363792108  get_U24fieldU2D5_1() const { return ___U24fieldU2D5_1; }
	inline U24ArrayTypeU3D6144_t1363792108 * get_address_of_U24fieldU2D5_1() { return &___U24fieldU2D5_1; }
	inline void set_U24fieldU2D5_1(U24ArrayTypeU3D6144_t1363792108  value)
	{
		___U24fieldU2D5_1 = value;
	}

	inline static int32_t get_offset_of_U24fieldU2D6_2() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3EU7B99f15b47U2D93f0U2D442dU2Da950U2D84e2e79a92c8U7D_t3841250540_StaticFields, ___U24fieldU2D6_2)); }
	inline U24ArrayTypeU3D384_t1185861873  get_U24fieldU2D6_2() const { return ___U24fieldU2D6_2; }
	inline U24ArrayTypeU3D384_t1185861873 * get_address_of_U24fieldU2D6_2() { return &___U24fieldU2D6_2; }
	inline void set_U24fieldU2D6_2(U24ArrayTypeU3D384_t1185861873  value)
	{
		___U24fieldU2D6_2 = value;
	}

	inline static int32_t get_offset_of_U24fieldU2D7_3() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3EU7B99f15b47U2D93f0U2D442dU2Da950U2D84e2e79a92c8U7D_t3841250540_StaticFields, ___U24fieldU2D7_3)); }
	inline U24ArrayTypeU3D124_t1185206511  get_U24fieldU2D7_3() const { return ___U24fieldU2D7_3; }
	inline U24ArrayTypeU3D124_t1185206511 * get_address_of_U24fieldU2D7_3() { return &___U24fieldU2D7_3; }
	inline void set_U24fieldU2D7_3(U24ArrayTypeU3D124_t1185206511  value)
	{
		___U24fieldU2D7_3 = value;
	}

	inline static int32_t get_offset_of_U24fieldU2D8_4() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3EU7B99f15b47U2D93f0U2D442dU2Da950U2D84e2e79a92c8U7D_t3841250540_StaticFields, ___U24fieldU2D8_4)); }
	inline U24ArrayTypeU3D124_t1185206511  get_U24fieldU2D8_4() const { return ___U24fieldU2D8_4; }
	inline U24ArrayTypeU3D124_t1185206511 * get_address_of_U24fieldU2D8_4() { return &___U24fieldU2D8_4; }
	inline void set_U24fieldU2D8_4(U24ArrayTypeU3D124_t1185206511  value)
	{
		___U24fieldU2D8_4 = value;
	}

	inline static int32_t get_offset_of_U24fieldU2D9_5() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3EU7B99f15b47U2D93f0U2D442dU2Da950U2D84e2e79a92c8U7D_t3841250540_StaticFields, ___U24fieldU2D9_5)); }
	inline U24ArrayTypeU3D120_t3154574979  get_U24fieldU2D9_5() const { return ___U24fieldU2D9_5; }
	inline U24ArrayTypeU3D120_t3154574979 * get_address_of_U24fieldU2D9_5() { return &___U24fieldU2D9_5; }
	inline void set_U24fieldU2D9_5(U24ArrayTypeU3D120_t3154574979  value)
	{
		___U24fieldU2D9_5 = value;
	}

	inline static int32_t get_offset_of_U24fieldU2DA_6() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3EU7B99f15b47U2D93f0U2D442dU2Da950U2D84e2e79a92c8U7D_t3841250540_StaticFields, ___U24fieldU2DA_6)); }
	inline U24ArrayTypeU3D120_t3154574979  get_U24fieldU2DA_6() const { return ___U24fieldU2DA_6; }
	inline U24ArrayTypeU3D120_t3154574979 * get_address_of_U24fieldU2DA_6() { return &___U24fieldU2DA_6; }
	inline void set_U24fieldU2DA_6(U24ArrayTypeU3D120_t3154574979  value)
	{
		___U24fieldU2DA_6 = value;
	}

	inline static int32_t get_offset_of_U24fieldU2DB_7() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3EU7B99f15b47U2D93f0U2D442dU2Da950U2D84e2e79a92c8U7D_t3841250540_StaticFields, ___U24fieldU2DB_7)); }
	inline U24ArrayTypeU3D76_t3226894100  get_U24fieldU2DB_7() const { return ___U24fieldU2DB_7; }
	inline U24ArrayTypeU3D76_t3226894100 * get_address_of_U24fieldU2DB_7() { return &___U24fieldU2DB_7; }
	inline void set_U24fieldU2DB_7(U24ArrayTypeU3D76_t3226894100  value)
	{
		___U24fieldU2DB_7 = value;
	}

	inline static int32_t get_offset_of_U24fieldU2DC_8() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3EU7B99f15b47U2D93f0U2D442dU2Da950U2D84e2e79a92c8U7D_t3841250540_StaticFields, ___U24fieldU2DC_8)); }
	inline U24ArrayTypeU3D68_t3227287315  get_U24fieldU2DC_8() const { return ___U24fieldU2DC_8; }
	inline U24ArrayTypeU3D68_t3227287315 * get_address_of_U24fieldU2DC_8() { return &___U24fieldU2DC_8; }
	inline void set_U24fieldU2DC_8(U24ArrayTypeU3D68_t3227287315  value)
	{
		___U24fieldU2DC_8 = value;
	}

	inline static int32_t get_offset_of_U24fieldU2DD_9() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3EU7B99f15b47U2D93f0U2D442dU2Da950U2D84e2e79a92c8U7D_t3841250540_StaticFields, ___U24fieldU2DD_9)); }
	inline U24ArrayTypeU3D116_t22472633  get_U24fieldU2DD_9() const { return ___U24fieldU2DD_9; }
	inline U24ArrayTypeU3D116_t22472633 * get_address_of_U24fieldU2DD_9() { return &___U24fieldU2DD_9; }
	inline void set_U24fieldU2DD_9(U24ArrayTypeU3D116_t22472633  value)
	{
		___U24fieldU2DD_9 = value;
	}

	inline static int32_t get_offset_of_U24fieldU2DE_10() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3EU7B99f15b47U2D93f0U2D442dU2Da950U2D84e2e79a92c8U7D_t3841250540_StaticFields, ___U24fieldU2DE_10)); }
	inline U24ArrayTypeU3D120_t3154574979  get_U24fieldU2DE_10() const { return ___U24fieldU2DE_10; }
	inline U24ArrayTypeU3D120_t3154574979 * get_address_of_U24fieldU2DE_10() { return &___U24fieldU2DE_10; }
	inline void set_U24fieldU2DE_10(U24ArrayTypeU3D120_t3154574979  value)
	{
		___U24fieldU2DE_10 = value;
	}

	inline static int32_t get_offset_of_U24fieldU2DF_11() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3EU7B99f15b47U2D93f0U2D442dU2Da950U2D84e2e79a92c8U7D_t3841250540_StaticFields, ___U24fieldU2DF_11)); }
	inline U24ArrayTypeU3D76_t3226894100  get_U24fieldU2DF_11() const { return ___U24fieldU2DF_11; }
	inline U24ArrayTypeU3D76_t3226894100 * get_address_of_U24fieldU2DF_11() { return &___U24fieldU2DF_11; }
	inline void set_U24fieldU2DF_11(U24ArrayTypeU3D76_t3226894100  value)
	{
		___U24fieldU2DF_11 = value;
	}

	inline static int32_t get_offset_of_U24fieldU2D10_12() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3EU7B99f15b47U2D93f0U2D442dU2Da950U2D84e2e79a92c8U7D_t3841250540_StaticFields, ___U24fieldU2D10_12)); }
	inline U24ArrayTypeU3D20_t3226763031  get_U24fieldU2D10_12() const { return ___U24fieldU2D10_12; }
	inline U24ArrayTypeU3D20_t3226763031 * get_address_of_U24fieldU2D10_12() { return &___U24fieldU2D10_12; }
	inline void set_U24fieldU2D10_12(U24ArrayTypeU3D20_t3226763031  value)
	{
		___U24fieldU2D10_12 = value;
	}

	inline static int32_t get_offset_of_U24fieldU2D11_13() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3EU7B99f15b47U2D93f0U2D442dU2Da950U2D84e2e79a92c8U7D_t3841250540_StaticFields, ___U24fieldU2D11_13)); }
	inline U24ArrayTypeU3D512_t1991841097  get_U24fieldU2D11_13() const { return ___U24fieldU2D11_13; }
	inline U24ArrayTypeU3D512_t1991841097 * get_address_of_U24fieldU2D11_13() { return &___U24fieldU2D11_13; }
	inline void set_U24fieldU2D11_13(U24ArrayTypeU3D512_t1991841097  value)
	{
		___U24fieldU2D11_13 = value;
	}

	inline static int32_t get_offset_of_U24fieldU2D12_14() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3EU7B99f15b47U2D93f0U2D442dU2Da950U2D84e2e79a92c8U7D_t3841250540_StaticFields, ___U24fieldU2D12_14)); }
	inline U24ArrayTypeU3D256_t22734778  get_U24fieldU2D12_14() const { return ___U24fieldU2D12_14; }
	inline U24ArrayTypeU3D256_t22734778 * get_address_of_U24fieldU2D12_14() { return &___U24fieldU2D12_14; }
	inline void set_U24fieldU2D12_14(U24ArrayTypeU3D256_t22734778  value)
	{
		___U24fieldU2D12_14 = value;
	}

	inline static int32_t get_offset_of_U24fieldU2D13_15() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3EU7B99f15b47U2D93f0U2D442dU2Da950U2D84e2e79a92c8U7D_t3841250540_StaticFields, ___U24fieldU2D13_15)); }
	inline U24ArrayTypeU3D116_t22472633  get_U24fieldU2D13_15() const { return ___U24fieldU2D13_15; }
	inline U24ArrayTypeU3D116_t22472633 * get_address_of_U24fieldU2D13_15() { return &___U24fieldU2D13_15; }
	inline void set_U24fieldU2D13_15(U24ArrayTypeU3D116_t22472633  value)
	{
		___U24fieldU2D13_15 = value;
	}

	inline static int32_t get_offset_of_U24fieldU2D14_16() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3EU7B99f15b47U2D93f0U2D442dU2Da950U2D84e2e79a92c8U7D_t3841250540_StaticFields, ___U24fieldU2D14_16)); }
	inline U24ArrayTypeU3D120_t3154574979  get_U24fieldU2D14_16() const { return ___U24fieldU2D14_16; }
	inline U24ArrayTypeU3D120_t3154574979 * get_address_of_U24fieldU2D14_16() { return &___U24fieldU2D14_16; }
	inline void set_U24fieldU2D14_16(U24ArrayTypeU3D120_t3154574979  value)
	{
		___U24fieldU2D14_16 = value;
	}

	inline static int32_t get_offset_of_U24fieldU2D15_17() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3EU7B99f15b47U2D93f0U2D442dU2Da950U2D84e2e79a92c8U7D_t3841250540_StaticFields, ___U24fieldU2D15_17)); }
	inline U24ArrayTypeU3D1152_t2547539028  get_U24fieldU2D15_17() const { return ___U24fieldU2D15_17; }
	inline U24ArrayTypeU3D1152_t2547539028 * get_address_of_U24fieldU2D15_17() { return &___U24fieldU2D15_17; }
	inline void set_U24fieldU2D15_17(U24ArrayTypeU3D1152_t2547539028  value)
	{
		___U24fieldU2D15_17 = value;
	}

	inline static int32_t get_offset_of_U24fieldU2D16_18() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3EU7B99f15b47U2D93f0U2D442dU2Da950U2D84e2e79a92c8U7D_t3841250540_StaticFields, ___U24fieldU2D16_18)); }
	inline U24ArrayTypeU3D120_t3154574979  get_U24fieldU2D16_18() const { return ___U24fieldU2D16_18; }
	inline U24ArrayTypeU3D120_t3154574979 * get_address_of_U24fieldU2D16_18() { return &___U24fieldU2D16_18; }
	inline void set_U24fieldU2D16_18(U24ArrayTypeU3D120_t3154574979  value)
	{
		___U24fieldU2D16_18 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CPRIVATEIMPLEMENTATIONDETAILSU3EU7B99F15B47U2D93F0U2D442DU2DA950U2D84E2E79A92C8U7D_T3841250540_H
#ifndef BLOCKSTATE_T4265564059_H
#define BLOCKSTATE_T4265564059_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Pathfinding.Ionic.Zlib.BlockState
struct  BlockState_t4265564059 
{
public:
	// System.Int32 Pathfinding.Ionic.Zlib.BlockState::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(BlockState_t4265564059, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BLOCKSTATE_T4265564059_H
#ifndef COMPRESSIONLEVEL_T1144237203_H
#define COMPRESSIONLEVEL_T1144237203_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Pathfinding.Ionic.Zlib.CompressionLevel
struct  CompressionLevel_t1144237203 
{
public:
	// System.Int32 Pathfinding.Ionic.Zlib.CompressionLevel::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(CompressionLevel_t1144237203, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPRESSIONLEVEL_T1144237203_H
#ifndef COMPRESSIONMODE_T4047330232_H
#define COMPRESSIONMODE_T4047330232_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Pathfinding.Ionic.Zlib.CompressionMode
struct  CompressionMode_t4047330232 
{
public:
	// System.Int32 Pathfinding.Ionic.Zlib.CompressionMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(CompressionMode_t4047330232, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPRESSIONMODE_T4047330232_H
#ifndef COMPRESSIONSTRATEGY_T1507033995_H
#define COMPRESSIONSTRATEGY_T1507033995_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Pathfinding.Ionic.Zlib.CompressionStrategy
struct  CompressionStrategy_t1507033995 
{
public:
	// System.Int32 Pathfinding.Ionic.Zlib.CompressionStrategy::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(CompressionStrategy_t1507033995, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPRESSIONSTRATEGY_T1507033995_H
#ifndef DEFLATEFLAVOR_T2602064151_H
#define DEFLATEFLAVOR_T2602064151_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Pathfinding.Ionic.Zlib.DeflateFlavor
struct  DeflateFlavor_t2602064151 
{
public:
	// System.Int32 Pathfinding.Ionic.Zlib.DeflateFlavor::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(DeflateFlavor_t2602064151, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEFLATEFLAVOR_T2602064151_H
#ifndef FLUSHTYPE_T281923595_H
#define FLUSHTYPE_T281923595_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Pathfinding.Ionic.Zlib.FlushType
struct  FlushType_t281923595 
{
public:
	// System.Int32 Pathfinding.Ionic.Zlib.FlushType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(FlushType_t281923595, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FLUSHTYPE_T281923595_H
#ifndef INFLATEBLOCKMODE_T3900566543_H
#define INFLATEBLOCKMODE_T3900566543_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Pathfinding.Ionic.Zlib.InflateBlocks/InflateBlockMode
struct  InflateBlockMode_t3900566543 
{
public:
	// System.Int32 Pathfinding.Ionic.Zlib.InflateBlocks/InflateBlockMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(InflateBlockMode_t3900566543, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INFLATEBLOCKMODE_T3900566543_H
#ifndef INFLATEMANAGERMODE_T3017950707_H
#define INFLATEMANAGERMODE_T3017950707_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Pathfinding.Ionic.Zlib.InflateManager/InflateManagerMode
struct  InflateManagerMode_t3017950707 
{
public:
	// System.Int32 Pathfinding.Ionic.Zlib.InflateManager/InflateManagerMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(InflateManagerMode_t3017950707, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INFLATEMANAGERMODE_T3017950707_H
#ifndef TRACEBITS_T3137025118_H
#define TRACEBITS_T3137025118_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Pathfinding.Ionic.Zlib.ParallelDeflateOutputStream/TraceBits
struct  TraceBits_t3137025118 
{
public:
	// System.UInt32 Pathfinding.Ionic.Zlib.ParallelDeflateOutputStream/TraceBits::value__
	uint32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TraceBits_t3137025118, ___value___1)); }
	inline uint32_t get_value___1() const { return ___value___1; }
	inline uint32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(uint32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRACEBITS_T3137025118_H
#ifndef STREAMMODE_T554997952_H
#define STREAMMODE_T554997952_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Pathfinding.Ionic.Zlib.ZlibBaseStream/StreamMode
struct  StreamMode_t554997952 
{
public:
	// System.Int32 Pathfinding.Ionic.Zlib.ZlibBaseStream/StreamMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(StreamMode_t554997952, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STREAMMODE_T554997952_H
#ifndef ZLIBSTREAMFLAVOR_T1088655598_H
#define ZLIBSTREAMFLAVOR_T1088655598_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Pathfinding.Ionic.Zlib.ZlibStreamFlavor
struct  ZlibStreamFlavor_t1088655598 
{
public:
	// System.Int32 Pathfinding.Ionic.Zlib.ZlibStreamFlavor::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ZlibStreamFlavor_t1088655598, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ZLIBSTREAMFLAVOR_T1088655598_H
#ifndef ARGUMENTEXCEPTION_T132251570_H
#define ARGUMENTEXCEPTION_T132251570_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ArgumentException
struct  ArgumentException_t132251570  : public SystemException_t176217640
{
public:
	// System.String System.ArgumentException::param_name
	String_t* ___param_name_12;

public:
	inline static int32_t get_offset_of_param_name_12() { return static_cast<int32_t>(offsetof(ArgumentException_t132251570, ___param_name_12)); }
	inline String_t* get_param_name_12() const { return ___param_name_12; }
	inline String_t** get_address_of_param_name_12() { return &___param_name_12; }
	inline void set_param_name_12(String_t* value)
	{
		___param_name_12 = value;
		Il2CppCodeGenWriteBarrier((&___param_name_12), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARGUMENTEXCEPTION_T132251570_H
#ifndef DATETIMEKIND_T3468814247_H
#define DATETIMEKIND_T3468814247_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DateTimeKind
struct  DateTimeKind_t3468814247 
{
public:
	// System.Int32 System.DateTimeKind::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(DateTimeKind_t3468814247, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATETIMEKIND_T3468814247_H
#ifndef DELEGATE_T1188392813_H
#define DELEGATE_T1188392813_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Delegate
struct  Delegate_t1188392813  : public RuntimeObject
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
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_5;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_6;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_7;
	// System.DelegateData System.Delegate::data
	DelegateData_t1677132599 * ___data_8;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_target_2), value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_method_code_5() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_code_5)); }
	inline intptr_t get_method_code_5() const { return ___method_code_5; }
	inline intptr_t* get_address_of_method_code_5() { return &___method_code_5; }
	inline void set_method_code_5(intptr_t value)
	{
		___method_code_5 = value;
	}

	inline static int32_t get_offset_of_method_info_6() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_info_6)); }
	inline MethodInfo_t * get_method_info_6() const { return ___method_info_6; }
	inline MethodInfo_t ** get_address_of_method_info_6() { return &___method_info_6; }
	inline void set_method_info_6(MethodInfo_t * value)
	{
		___method_info_6 = value;
		Il2CppCodeGenWriteBarrier((&___method_info_6), value);
	}

	inline static int32_t get_offset_of_original_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___original_method_info_7)); }
	inline MethodInfo_t * get_original_method_info_7() const { return ___original_method_info_7; }
	inline MethodInfo_t ** get_address_of_original_method_info_7() { return &___original_method_info_7; }
	inline void set_original_method_info_7(MethodInfo_t * value)
	{
		___original_method_info_7 = value;
		Il2CppCodeGenWriteBarrier((&___original_method_info_7), value);
	}

	inline static int32_t get_offset_of_data_8() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___data_8)); }
	inline DelegateData_t1677132599 * get_data_8() const { return ___data_8; }
	inline DelegateData_t1677132599 ** get_address_of_data_8() { return &___data_8; }
	inline void set_data_8(DelegateData_t1677132599 * value)
	{
		___data_8 = value;
		Il2CppCodeGenWriteBarrier((&___data_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DELEGATE_T1188392813_H
#ifndef SEEKORIGIN_T1441174344_H
#define SEEKORIGIN_T1441174344_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.SeekOrigin
struct  SeekOrigin_t1441174344 
{
public:
	// System.Int32 System.IO.SeekOrigin::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(SeekOrigin_t1441174344, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SEEKORIGIN_T1441174344_H
#ifndef INVALIDOPERATIONEXCEPTION_T56020091_H
#define INVALIDOPERATIONEXCEPTION_T56020091_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.InvalidOperationException
struct  InvalidOperationException_t56020091  : public SystemException_t176217640
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INVALIDOPERATIONEXCEPTION_T56020091_H
#ifndef NOTIMPLEMENTEDEXCEPTION_T3489357830_H
#define NOTIMPLEMENTEDEXCEPTION_T3489357830_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.NotImplementedException
struct  NotImplementedException_t3489357830  : public SystemException_t176217640
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NOTIMPLEMENTEDEXCEPTION_T3489357830_H
#ifndef NOTSUPPORTEDEXCEPTION_T1314879016_H
#define NOTSUPPORTEDEXCEPTION_T1314879016_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.NotSupportedException
struct  NotSupportedException_t1314879016  : public SystemException_t176217640
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NOTSUPPORTEDEXCEPTION_T1314879016_H
#ifndef RUNTIMEFIELDHANDLE_T1871169219_H
#define RUNTIMEFIELDHANDLE_T1871169219_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.RuntimeFieldHandle
struct  RuntimeFieldHandle_t1871169219 
{
public:
	// System.IntPtr System.RuntimeFieldHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeFieldHandle_t1871169219, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEFIELDHANDLE_T1871169219_H
#ifndef WAITHANDLE_T1743403487_H
#define WAITHANDLE_T1743403487_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.WaitHandle
struct  WaitHandle_t1743403487  : public MarshalByRefObject_t2760389100
{
public:
	// Microsoft.Win32.SafeHandles.SafeWaitHandle System.Threading.WaitHandle::safe_wait_handle
	SafeWaitHandle_t1972936122 * ___safe_wait_handle_2;
	// System.Boolean System.Threading.WaitHandle::disposed
	bool ___disposed_4;

public:
	inline static int32_t get_offset_of_safe_wait_handle_2() { return static_cast<int32_t>(offsetof(WaitHandle_t1743403487, ___safe_wait_handle_2)); }
	inline SafeWaitHandle_t1972936122 * get_safe_wait_handle_2() const { return ___safe_wait_handle_2; }
	inline SafeWaitHandle_t1972936122 ** get_address_of_safe_wait_handle_2() { return &___safe_wait_handle_2; }
	inline void set_safe_wait_handle_2(SafeWaitHandle_t1972936122 * value)
	{
		___safe_wait_handle_2 = value;
		Il2CppCodeGenWriteBarrier((&___safe_wait_handle_2), value);
	}

	inline static int32_t get_offset_of_disposed_4() { return static_cast<int32_t>(offsetof(WaitHandle_t1743403487, ___disposed_4)); }
	inline bool get_disposed_4() const { return ___disposed_4; }
	inline bool* get_address_of_disposed_4() { return &___disposed_4; }
	inline void set_disposed_4(bool value)
	{
		___disposed_4 = value;
	}
};

struct WaitHandle_t1743403487_StaticFields
{
public:
	// System.IntPtr System.Threading.WaitHandle::InvalidHandle
	intptr_t ___InvalidHandle_3;

public:
	inline static int32_t get_offset_of_InvalidHandle_3() { return static_cast<int32_t>(offsetof(WaitHandle_t1743403487_StaticFields, ___InvalidHandle_3)); }
	inline intptr_t get_InvalidHandle_3() const { return ___InvalidHandle_3; }
	inline intptr_t* get_address_of_InvalidHandle_3() { return &___InvalidHandle_3; }
	inline void set_InvalidHandle_3(intptr_t value)
	{
		___InvalidHandle_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WAITHANDLE_T1743403487_H
#ifndef DEFLATEMANAGER_T3554793512_H
#define DEFLATEMANAGER_T3554793512_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Pathfinding.Ionic.Zlib.DeflateManager
struct  DeflateManager_t3554793512  : public RuntimeObject
{
public:
	// Pathfinding.Ionic.Zlib.DeflateManager/CompressFunc Pathfinding.Ionic.Zlib.DeflateManager::DeflateFunction
	CompressFunc_t2219633776 * ___DeflateFunction_2;
	// Pathfinding.Ionic.Zlib.ZlibCodec Pathfinding.Ionic.Zlib.DeflateManager::_codec
	ZlibCodec_t855427629 * ____codec_21;
	// System.Int32 Pathfinding.Ionic.Zlib.DeflateManager::status
	int32_t ___status_22;
	// System.Byte[] Pathfinding.Ionic.Zlib.DeflateManager::pending
	ByteU5BU5D_t4116647657* ___pending_23;
	// System.Int32 Pathfinding.Ionic.Zlib.DeflateManager::nextPending
	int32_t ___nextPending_24;
	// System.Int32 Pathfinding.Ionic.Zlib.DeflateManager::pendingCount
	int32_t ___pendingCount_25;
	// System.SByte Pathfinding.Ionic.Zlib.DeflateManager::data_type
	int8_t ___data_type_26;
	// System.Int32 Pathfinding.Ionic.Zlib.DeflateManager::last_flush
	int32_t ___last_flush_27;
	// System.Int32 Pathfinding.Ionic.Zlib.DeflateManager::w_size
	int32_t ___w_size_28;
	// System.Int32 Pathfinding.Ionic.Zlib.DeflateManager::w_bits
	int32_t ___w_bits_29;
	// System.Int32 Pathfinding.Ionic.Zlib.DeflateManager::w_mask
	int32_t ___w_mask_30;
	// System.Byte[] Pathfinding.Ionic.Zlib.DeflateManager::window
	ByteU5BU5D_t4116647657* ___window_31;
	// System.Int32 Pathfinding.Ionic.Zlib.DeflateManager::window_size
	int32_t ___window_size_32;
	// System.Int16[] Pathfinding.Ionic.Zlib.DeflateManager::prev
	Int16U5BU5D_t3686840178* ___prev_33;
	// System.Int16[] Pathfinding.Ionic.Zlib.DeflateManager::head
	Int16U5BU5D_t3686840178* ___head_34;
	// System.Int32 Pathfinding.Ionic.Zlib.DeflateManager::ins_h
	int32_t ___ins_h_35;
	// System.Int32 Pathfinding.Ionic.Zlib.DeflateManager::hash_size
	int32_t ___hash_size_36;
	// System.Int32 Pathfinding.Ionic.Zlib.DeflateManager::hash_bits
	int32_t ___hash_bits_37;
	// System.Int32 Pathfinding.Ionic.Zlib.DeflateManager::hash_mask
	int32_t ___hash_mask_38;
	// System.Int32 Pathfinding.Ionic.Zlib.DeflateManager::hash_shift
	int32_t ___hash_shift_39;
	// System.Int32 Pathfinding.Ionic.Zlib.DeflateManager::block_start
	int32_t ___block_start_40;
	// Pathfinding.Ionic.Zlib.DeflateManager/Config Pathfinding.Ionic.Zlib.DeflateManager::config
	Config_t3362677528 * ___config_41;
	// System.Int32 Pathfinding.Ionic.Zlib.DeflateManager::match_length
	int32_t ___match_length_42;
	// System.Int32 Pathfinding.Ionic.Zlib.DeflateManager::prev_match
	int32_t ___prev_match_43;
	// System.Int32 Pathfinding.Ionic.Zlib.DeflateManager::match_available
	int32_t ___match_available_44;
	// System.Int32 Pathfinding.Ionic.Zlib.DeflateManager::strstart
	int32_t ___strstart_45;
	// System.Int32 Pathfinding.Ionic.Zlib.DeflateManager::match_start
	int32_t ___match_start_46;
	// System.Int32 Pathfinding.Ionic.Zlib.DeflateManager::lookahead
	int32_t ___lookahead_47;
	// System.Int32 Pathfinding.Ionic.Zlib.DeflateManager::prev_length
	int32_t ___prev_length_48;
	// Pathfinding.Ionic.Zlib.CompressionLevel Pathfinding.Ionic.Zlib.DeflateManager::compressionLevel
	int32_t ___compressionLevel_49;
	// Pathfinding.Ionic.Zlib.CompressionStrategy Pathfinding.Ionic.Zlib.DeflateManager::compressionStrategy
	int32_t ___compressionStrategy_50;
	// System.Int16[] Pathfinding.Ionic.Zlib.DeflateManager::dyn_ltree
	Int16U5BU5D_t3686840178* ___dyn_ltree_51;
	// System.Int16[] Pathfinding.Ionic.Zlib.DeflateManager::dyn_dtree
	Int16U5BU5D_t3686840178* ___dyn_dtree_52;
	// System.Int16[] Pathfinding.Ionic.Zlib.DeflateManager::bl_tree
	Int16U5BU5D_t3686840178* ___bl_tree_53;
	// Pathfinding.Ionic.Zlib.Tree Pathfinding.Ionic.Zlib.DeflateManager::treeLiterals
	Tree_t776904304 * ___treeLiterals_54;
	// Pathfinding.Ionic.Zlib.Tree Pathfinding.Ionic.Zlib.DeflateManager::treeDistances
	Tree_t776904304 * ___treeDistances_55;
	// Pathfinding.Ionic.Zlib.Tree Pathfinding.Ionic.Zlib.DeflateManager::treeBitLengths
	Tree_t776904304 * ___treeBitLengths_56;
	// System.Int16[] Pathfinding.Ionic.Zlib.DeflateManager::bl_count
	Int16U5BU5D_t3686840178* ___bl_count_57;
	// System.Int32[] Pathfinding.Ionic.Zlib.DeflateManager::heap
	Int32U5BU5D_t385246372* ___heap_58;
	// System.Int32 Pathfinding.Ionic.Zlib.DeflateManager::heap_len
	int32_t ___heap_len_59;
	// System.Int32 Pathfinding.Ionic.Zlib.DeflateManager::heap_max
	int32_t ___heap_max_60;
	// System.SByte[] Pathfinding.Ionic.Zlib.DeflateManager::depth
	SByteU5BU5D_t2651576203* ___depth_61;
	// System.Int32 Pathfinding.Ionic.Zlib.DeflateManager::_lengthOffset
	int32_t ____lengthOffset_62;
	// System.Int32 Pathfinding.Ionic.Zlib.DeflateManager::lit_bufsize
	int32_t ___lit_bufsize_63;
	// System.Int32 Pathfinding.Ionic.Zlib.DeflateManager::last_lit
	int32_t ___last_lit_64;
	// System.Int32 Pathfinding.Ionic.Zlib.DeflateManager::_distanceOffset
	int32_t ____distanceOffset_65;
	// System.Int32 Pathfinding.Ionic.Zlib.DeflateManager::opt_len
	int32_t ___opt_len_66;
	// System.Int32 Pathfinding.Ionic.Zlib.DeflateManager::static_len
	int32_t ___static_len_67;
	// System.Int32 Pathfinding.Ionic.Zlib.DeflateManager::matches
	int32_t ___matches_68;
	// System.Int32 Pathfinding.Ionic.Zlib.DeflateManager::last_eob_len
	int32_t ___last_eob_len_69;
	// System.Int16 Pathfinding.Ionic.Zlib.DeflateManager::bi_buf
	int16_t ___bi_buf_70;
	// System.Int32 Pathfinding.Ionic.Zlib.DeflateManager::bi_valid
	int32_t ___bi_valid_71;
	// System.Boolean Pathfinding.Ionic.Zlib.DeflateManager::Rfc1950BytesEmitted
	bool ___Rfc1950BytesEmitted_72;
	// System.Boolean Pathfinding.Ionic.Zlib.DeflateManager::_WantRfc1950HeaderBytes
	bool ____WantRfc1950HeaderBytes_73;

public:
	inline static int32_t get_offset_of_DeflateFunction_2() { return static_cast<int32_t>(offsetof(DeflateManager_t3554793512, ___DeflateFunction_2)); }
	inline CompressFunc_t2219633776 * get_DeflateFunction_2() const { return ___DeflateFunction_2; }
	inline CompressFunc_t2219633776 ** get_address_of_DeflateFunction_2() { return &___DeflateFunction_2; }
	inline void set_DeflateFunction_2(CompressFunc_t2219633776 * value)
	{
		___DeflateFunction_2 = value;
		Il2CppCodeGenWriteBarrier((&___DeflateFunction_2), value);
	}

	inline static int32_t get_offset_of__codec_21() { return static_cast<int32_t>(offsetof(DeflateManager_t3554793512, ____codec_21)); }
	inline ZlibCodec_t855427629 * get__codec_21() const { return ____codec_21; }
	inline ZlibCodec_t855427629 ** get_address_of__codec_21() { return &____codec_21; }
	inline void set__codec_21(ZlibCodec_t855427629 * value)
	{
		____codec_21 = value;
		Il2CppCodeGenWriteBarrier((&____codec_21), value);
	}

	inline static int32_t get_offset_of_status_22() { return static_cast<int32_t>(offsetof(DeflateManager_t3554793512, ___status_22)); }
	inline int32_t get_status_22() const { return ___status_22; }
	inline int32_t* get_address_of_status_22() { return &___status_22; }
	inline void set_status_22(int32_t value)
	{
		___status_22 = value;
	}

	inline static int32_t get_offset_of_pending_23() { return static_cast<int32_t>(offsetof(DeflateManager_t3554793512, ___pending_23)); }
	inline ByteU5BU5D_t4116647657* get_pending_23() const { return ___pending_23; }
	inline ByteU5BU5D_t4116647657** get_address_of_pending_23() { return &___pending_23; }
	inline void set_pending_23(ByteU5BU5D_t4116647657* value)
	{
		___pending_23 = value;
		Il2CppCodeGenWriteBarrier((&___pending_23), value);
	}

	inline static int32_t get_offset_of_nextPending_24() { return static_cast<int32_t>(offsetof(DeflateManager_t3554793512, ___nextPending_24)); }
	inline int32_t get_nextPending_24() const { return ___nextPending_24; }
	inline int32_t* get_address_of_nextPending_24() { return &___nextPending_24; }
	inline void set_nextPending_24(int32_t value)
	{
		___nextPending_24 = value;
	}

	inline static int32_t get_offset_of_pendingCount_25() { return static_cast<int32_t>(offsetof(DeflateManager_t3554793512, ___pendingCount_25)); }
	inline int32_t get_pendingCount_25() const { return ___pendingCount_25; }
	inline int32_t* get_address_of_pendingCount_25() { return &___pendingCount_25; }
	inline void set_pendingCount_25(int32_t value)
	{
		___pendingCount_25 = value;
	}

	inline static int32_t get_offset_of_data_type_26() { return static_cast<int32_t>(offsetof(DeflateManager_t3554793512, ___data_type_26)); }
	inline int8_t get_data_type_26() const { return ___data_type_26; }
	inline int8_t* get_address_of_data_type_26() { return &___data_type_26; }
	inline void set_data_type_26(int8_t value)
	{
		___data_type_26 = value;
	}

	inline static int32_t get_offset_of_last_flush_27() { return static_cast<int32_t>(offsetof(DeflateManager_t3554793512, ___last_flush_27)); }
	inline int32_t get_last_flush_27() const { return ___last_flush_27; }
	inline int32_t* get_address_of_last_flush_27() { return &___last_flush_27; }
	inline void set_last_flush_27(int32_t value)
	{
		___last_flush_27 = value;
	}

	inline static int32_t get_offset_of_w_size_28() { return static_cast<int32_t>(offsetof(DeflateManager_t3554793512, ___w_size_28)); }
	inline int32_t get_w_size_28() const { return ___w_size_28; }
	inline int32_t* get_address_of_w_size_28() { return &___w_size_28; }
	inline void set_w_size_28(int32_t value)
	{
		___w_size_28 = value;
	}

	inline static int32_t get_offset_of_w_bits_29() { return static_cast<int32_t>(offsetof(DeflateManager_t3554793512, ___w_bits_29)); }
	inline int32_t get_w_bits_29() const { return ___w_bits_29; }
	inline int32_t* get_address_of_w_bits_29() { return &___w_bits_29; }
	inline void set_w_bits_29(int32_t value)
	{
		___w_bits_29 = value;
	}

	inline static int32_t get_offset_of_w_mask_30() { return static_cast<int32_t>(offsetof(DeflateManager_t3554793512, ___w_mask_30)); }
	inline int32_t get_w_mask_30() const { return ___w_mask_30; }
	inline int32_t* get_address_of_w_mask_30() { return &___w_mask_30; }
	inline void set_w_mask_30(int32_t value)
	{
		___w_mask_30 = value;
	}

	inline static int32_t get_offset_of_window_31() { return static_cast<int32_t>(offsetof(DeflateManager_t3554793512, ___window_31)); }
	inline ByteU5BU5D_t4116647657* get_window_31() const { return ___window_31; }
	inline ByteU5BU5D_t4116647657** get_address_of_window_31() { return &___window_31; }
	inline void set_window_31(ByteU5BU5D_t4116647657* value)
	{
		___window_31 = value;
		Il2CppCodeGenWriteBarrier((&___window_31), value);
	}

	inline static int32_t get_offset_of_window_size_32() { return static_cast<int32_t>(offsetof(DeflateManager_t3554793512, ___window_size_32)); }
	inline int32_t get_window_size_32() const { return ___window_size_32; }
	inline int32_t* get_address_of_window_size_32() { return &___window_size_32; }
	inline void set_window_size_32(int32_t value)
	{
		___window_size_32 = value;
	}

	inline static int32_t get_offset_of_prev_33() { return static_cast<int32_t>(offsetof(DeflateManager_t3554793512, ___prev_33)); }
	inline Int16U5BU5D_t3686840178* get_prev_33() const { return ___prev_33; }
	inline Int16U5BU5D_t3686840178** get_address_of_prev_33() { return &___prev_33; }
	inline void set_prev_33(Int16U5BU5D_t3686840178* value)
	{
		___prev_33 = value;
		Il2CppCodeGenWriteBarrier((&___prev_33), value);
	}

	inline static int32_t get_offset_of_head_34() { return static_cast<int32_t>(offsetof(DeflateManager_t3554793512, ___head_34)); }
	inline Int16U5BU5D_t3686840178* get_head_34() const { return ___head_34; }
	inline Int16U5BU5D_t3686840178** get_address_of_head_34() { return &___head_34; }
	inline void set_head_34(Int16U5BU5D_t3686840178* value)
	{
		___head_34 = value;
		Il2CppCodeGenWriteBarrier((&___head_34), value);
	}

	inline static int32_t get_offset_of_ins_h_35() { return static_cast<int32_t>(offsetof(DeflateManager_t3554793512, ___ins_h_35)); }
	inline int32_t get_ins_h_35() const { return ___ins_h_35; }
	inline int32_t* get_address_of_ins_h_35() { return &___ins_h_35; }
	inline void set_ins_h_35(int32_t value)
	{
		___ins_h_35 = value;
	}

	inline static int32_t get_offset_of_hash_size_36() { return static_cast<int32_t>(offsetof(DeflateManager_t3554793512, ___hash_size_36)); }
	inline int32_t get_hash_size_36() const { return ___hash_size_36; }
	inline int32_t* get_address_of_hash_size_36() { return &___hash_size_36; }
	inline void set_hash_size_36(int32_t value)
	{
		___hash_size_36 = value;
	}

	inline static int32_t get_offset_of_hash_bits_37() { return static_cast<int32_t>(offsetof(DeflateManager_t3554793512, ___hash_bits_37)); }
	inline int32_t get_hash_bits_37() const { return ___hash_bits_37; }
	inline int32_t* get_address_of_hash_bits_37() { return &___hash_bits_37; }
	inline void set_hash_bits_37(int32_t value)
	{
		___hash_bits_37 = value;
	}

	inline static int32_t get_offset_of_hash_mask_38() { return static_cast<int32_t>(offsetof(DeflateManager_t3554793512, ___hash_mask_38)); }
	inline int32_t get_hash_mask_38() const { return ___hash_mask_38; }
	inline int32_t* get_address_of_hash_mask_38() { return &___hash_mask_38; }
	inline void set_hash_mask_38(int32_t value)
	{
		___hash_mask_38 = value;
	}

	inline static int32_t get_offset_of_hash_shift_39() { return static_cast<int32_t>(offsetof(DeflateManager_t3554793512, ___hash_shift_39)); }
	inline int32_t get_hash_shift_39() const { return ___hash_shift_39; }
	inline int32_t* get_address_of_hash_shift_39() { return &___hash_shift_39; }
	inline void set_hash_shift_39(int32_t value)
	{
		___hash_shift_39 = value;
	}

	inline static int32_t get_offset_of_block_start_40() { return static_cast<int32_t>(offsetof(DeflateManager_t3554793512, ___block_start_40)); }
	inline int32_t get_block_start_40() const { return ___block_start_40; }
	inline int32_t* get_address_of_block_start_40() { return &___block_start_40; }
	inline void set_block_start_40(int32_t value)
	{
		___block_start_40 = value;
	}

	inline static int32_t get_offset_of_config_41() { return static_cast<int32_t>(offsetof(DeflateManager_t3554793512, ___config_41)); }
	inline Config_t3362677528 * get_config_41() const { return ___config_41; }
	inline Config_t3362677528 ** get_address_of_config_41() { return &___config_41; }
	inline void set_config_41(Config_t3362677528 * value)
	{
		___config_41 = value;
		Il2CppCodeGenWriteBarrier((&___config_41), value);
	}

	inline static int32_t get_offset_of_match_length_42() { return static_cast<int32_t>(offsetof(DeflateManager_t3554793512, ___match_length_42)); }
	inline int32_t get_match_length_42() const { return ___match_length_42; }
	inline int32_t* get_address_of_match_length_42() { return &___match_length_42; }
	inline void set_match_length_42(int32_t value)
	{
		___match_length_42 = value;
	}

	inline static int32_t get_offset_of_prev_match_43() { return static_cast<int32_t>(offsetof(DeflateManager_t3554793512, ___prev_match_43)); }
	inline int32_t get_prev_match_43() const { return ___prev_match_43; }
	inline int32_t* get_address_of_prev_match_43() { return &___prev_match_43; }
	inline void set_prev_match_43(int32_t value)
	{
		___prev_match_43 = value;
	}

	inline static int32_t get_offset_of_match_available_44() { return static_cast<int32_t>(offsetof(DeflateManager_t3554793512, ___match_available_44)); }
	inline int32_t get_match_available_44() const { return ___match_available_44; }
	inline int32_t* get_address_of_match_available_44() { return &___match_available_44; }
	inline void set_match_available_44(int32_t value)
	{
		___match_available_44 = value;
	}

	inline static int32_t get_offset_of_strstart_45() { return static_cast<int32_t>(offsetof(DeflateManager_t3554793512, ___strstart_45)); }
	inline int32_t get_strstart_45() const { return ___strstart_45; }
	inline int32_t* get_address_of_strstart_45() { return &___strstart_45; }
	inline void set_strstart_45(int32_t value)
	{
		___strstart_45 = value;
	}

	inline static int32_t get_offset_of_match_start_46() { return static_cast<int32_t>(offsetof(DeflateManager_t3554793512, ___match_start_46)); }
	inline int32_t get_match_start_46() const { return ___match_start_46; }
	inline int32_t* get_address_of_match_start_46() { return &___match_start_46; }
	inline void set_match_start_46(int32_t value)
	{
		___match_start_46 = value;
	}

	inline static int32_t get_offset_of_lookahead_47() { return static_cast<int32_t>(offsetof(DeflateManager_t3554793512, ___lookahead_47)); }
	inline int32_t get_lookahead_47() const { return ___lookahead_47; }
	inline int32_t* get_address_of_lookahead_47() { return &___lookahead_47; }
	inline void set_lookahead_47(int32_t value)
	{
		___lookahead_47 = value;
	}

	inline static int32_t get_offset_of_prev_length_48() { return static_cast<int32_t>(offsetof(DeflateManager_t3554793512, ___prev_length_48)); }
	inline int32_t get_prev_length_48() const { return ___prev_length_48; }
	inline int32_t* get_address_of_prev_length_48() { return &___prev_length_48; }
	inline void set_prev_length_48(int32_t value)
	{
		___prev_length_48 = value;
	}

	inline static int32_t get_offset_of_compressionLevel_49() { return static_cast<int32_t>(offsetof(DeflateManager_t3554793512, ___compressionLevel_49)); }
	inline int32_t get_compressionLevel_49() const { return ___compressionLevel_49; }
	inline int32_t* get_address_of_compressionLevel_49() { return &___compressionLevel_49; }
	inline void set_compressionLevel_49(int32_t value)
	{
		___compressionLevel_49 = value;
	}

	inline static int32_t get_offset_of_compressionStrategy_50() { return static_cast<int32_t>(offsetof(DeflateManager_t3554793512, ___compressionStrategy_50)); }
	inline int32_t get_compressionStrategy_50() const { return ___compressionStrategy_50; }
	inline int32_t* get_address_of_compressionStrategy_50() { return &___compressionStrategy_50; }
	inline void set_compressionStrategy_50(int32_t value)
	{
		___compressionStrategy_50 = value;
	}

	inline static int32_t get_offset_of_dyn_ltree_51() { return static_cast<int32_t>(offsetof(DeflateManager_t3554793512, ___dyn_ltree_51)); }
	inline Int16U5BU5D_t3686840178* get_dyn_ltree_51() const { return ___dyn_ltree_51; }
	inline Int16U5BU5D_t3686840178** get_address_of_dyn_ltree_51() { return &___dyn_ltree_51; }
	inline void set_dyn_ltree_51(Int16U5BU5D_t3686840178* value)
	{
		___dyn_ltree_51 = value;
		Il2CppCodeGenWriteBarrier((&___dyn_ltree_51), value);
	}

	inline static int32_t get_offset_of_dyn_dtree_52() { return static_cast<int32_t>(offsetof(DeflateManager_t3554793512, ___dyn_dtree_52)); }
	inline Int16U5BU5D_t3686840178* get_dyn_dtree_52() const { return ___dyn_dtree_52; }
	inline Int16U5BU5D_t3686840178** get_address_of_dyn_dtree_52() { return &___dyn_dtree_52; }
	inline void set_dyn_dtree_52(Int16U5BU5D_t3686840178* value)
	{
		___dyn_dtree_52 = value;
		Il2CppCodeGenWriteBarrier((&___dyn_dtree_52), value);
	}

	inline static int32_t get_offset_of_bl_tree_53() { return static_cast<int32_t>(offsetof(DeflateManager_t3554793512, ___bl_tree_53)); }
	inline Int16U5BU5D_t3686840178* get_bl_tree_53() const { return ___bl_tree_53; }
	inline Int16U5BU5D_t3686840178** get_address_of_bl_tree_53() { return &___bl_tree_53; }
	inline void set_bl_tree_53(Int16U5BU5D_t3686840178* value)
	{
		___bl_tree_53 = value;
		Il2CppCodeGenWriteBarrier((&___bl_tree_53), value);
	}

	inline static int32_t get_offset_of_treeLiterals_54() { return static_cast<int32_t>(offsetof(DeflateManager_t3554793512, ___treeLiterals_54)); }
	inline Tree_t776904304 * get_treeLiterals_54() const { return ___treeLiterals_54; }
	inline Tree_t776904304 ** get_address_of_treeLiterals_54() { return &___treeLiterals_54; }
	inline void set_treeLiterals_54(Tree_t776904304 * value)
	{
		___treeLiterals_54 = value;
		Il2CppCodeGenWriteBarrier((&___treeLiterals_54), value);
	}

	inline static int32_t get_offset_of_treeDistances_55() { return static_cast<int32_t>(offsetof(DeflateManager_t3554793512, ___treeDistances_55)); }
	inline Tree_t776904304 * get_treeDistances_55() const { return ___treeDistances_55; }
	inline Tree_t776904304 ** get_address_of_treeDistances_55() { return &___treeDistances_55; }
	inline void set_treeDistances_55(Tree_t776904304 * value)
	{
		___treeDistances_55 = value;
		Il2CppCodeGenWriteBarrier((&___treeDistances_55), value);
	}

	inline static int32_t get_offset_of_treeBitLengths_56() { return static_cast<int32_t>(offsetof(DeflateManager_t3554793512, ___treeBitLengths_56)); }
	inline Tree_t776904304 * get_treeBitLengths_56() const { return ___treeBitLengths_56; }
	inline Tree_t776904304 ** get_address_of_treeBitLengths_56() { return &___treeBitLengths_56; }
	inline void set_treeBitLengths_56(Tree_t776904304 * value)
	{
		___treeBitLengths_56 = value;
		Il2CppCodeGenWriteBarrier((&___treeBitLengths_56), value);
	}

	inline static int32_t get_offset_of_bl_count_57() { return static_cast<int32_t>(offsetof(DeflateManager_t3554793512, ___bl_count_57)); }
	inline Int16U5BU5D_t3686840178* get_bl_count_57() const { return ___bl_count_57; }
	inline Int16U5BU5D_t3686840178** get_address_of_bl_count_57() { return &___bl_count_57; }
	inline void set_bl_count_57(Int16U5BU5D_t3686840178* value)
	{
		___bl_count_57 = value;
		Il2CppCodeGenWriteBarrier((&___bl_count_57), value);
	}

	inline static int32_t get_offset_of_heap_58() { return static_cast<int32_t>(offsetof(DeflateManager_t3554793512, ___heap_58)); }
	inline Int32U5BU5D_t385246372* get_heap_58() const { return ___heap_58; }
	inline Int32U5BU5D_t385246372** get_address_of_heap_58() { return &___heap_58; }
	inline void set_heap_58(Int32U5BU5D_t385246372* value)
	{
		___heap_58 = value;
		Il2CppCodeGenWriteBarrier((&___heap_58), value);
	}

	inline static int32_t get_offset_of_heap_len_59() { return static_cast<int32_t>(offsetof(DeflateManager_t3554793512, ___heap_len_59)); }
	inline int32_t get_heap_len_59() const { return ___heap_len_59; }
	inline int32_t* get_address_of_heap_len_59() { return &___heap_len_59; }
	inline void set_heap_len_59(int32_t value)
	{
		___heap_len_59 = value;
	}

	inline static int32_t get_offset_of_heap_max_60() { return static_cast<int32_t>(offsetof(DeflateManager_t3554793512, ___heap_max_60)); }
	inline int32_t get_heap_max_60() const { return ___heap_max_60; }
	inline int32_t* get_address_of_heap_max_60() { return &___heap_max_60; }
	inline void set_heap_max_60(int32_t value)
	{
		___heap_max_60 = value;
	}

	inline static int32_t get_offset_of_depth_61() { return static_cast<int32_t>(offsetof(DeflateManager_t3554793512, ___depth_61)); }
	inline SByteU5BU5D_t2651576203* get_depth_61() const { return ___depth_61; }
	inline SByteU5BU5D_t2651576203** get_address_of_depth_61() { return &___depth_61; }
	inline void set_depth_61(SByteU5BU5D_t2651576203* value)
	{
		___depth_61 = value;
		Il2CppCodeGenWriteBarrier((&___depth_61), value);
	}

	inline static int32_t get_offset_of__lengthOffset_62() { return static_cast<int32_t>(offsetof(DeflateManager_t3554793512, ____lengthOffset_62)); }
	inline int32_t get__lengthOffset_62() const { return ____lengthOffset_62; }
	inline int32_t* get_address_of__lengthOffset_62() { return &____lengthOffset_62; }
	inline void set__lengthOffset_62(int32_t value)
	{
		____lengthOffset_62 = value;
	}

	inline static int32_t get_offset_of_lit_bufsize_63() { return static_cast<int32_t>(offsetof(DeflateManager_t3554793512, ___lit_bufsize_63)); }
	inline int32_t get_lit_bufsize_63() const { return ___lit_bufsize_63; }
	inline int32_t* get_address_of_lit_bufsize_63() { return &___lit_bufsize_63; }
	inline void set_lit_bufsize_63(int32_t value)
	{
		___lit_bufsize_63 = value;
	}

	inline static int32_t get_offset_of_last_lit_64() { return static_cast<int32_t>(offsetof(DeflateManager_t3554793512, ___last_lit_64)); }
	inline int32_t get_last_lit_64() const { return ___last_lit_64; }
	inline int32_t* get_address_of_last_lit_64() { return &___last_lit_64; }
	inline void set_last_lit_64(int32_t value)
	{
		___last_lit_64 = value;
	}

	inline static int32_t get_offset_of__distanceOffset_65() { return static_cast<int32_t>(offsetof(DeflateManager_t3554793512, ____distanceOffset_65)); }
	inline int32_t get__distanceOffset_65() const { return ____distanceOffset_65; }
	inline int32_t* get_address_of__distanceOffset_65() { return &____distanceOffset_65; }
	inline void set__distanceOffset_65(int32_t value)
	{
		____distanceOffset_65 = value;
	}

	inline static int32_t get_offset_of_opt_len_66() { return static_cast<int32_t>(offsetof(DeflateManager_t3554793512, ___opt_len_66)); }
	inline int32_t get_opt_len_66() const { return ___opt_len_66; }
	inline int32_t* get_address_of_opt_len_66() { return &___opt_len_66; }
	inline void set_opt_len_66(int32_t value)
	{
		___opt_len_66 = value;
	}

	inline static int32_t get_offset_of_static_len_67() { return static_cast<int32_t>(offsetof(DeflateManager_t3554793512, ___static_len_67)); }
	inline int32_t get_static_len_67() const { return ___static_len_67; }
	inline int32_t* get_address_of_static_len_67() { return &___static_len_67; }
	inline void set_static_len_67(int32_t value)
	{
		___static_len_67 = value;
	}

	inline static int32_t get_offset_of_matches_68() { return static_cast<int32_t>(offsetof(DeflateManager_t3554793512, ___matches_68)); }
	inline int32_t get_matches_68() const { return ___matches_68; }
	inline int32_t* get_address_of_matches_68() { return &___matches_68; }
	inline void set_matches_68(int32_t value)
	{
		___matches_68 = value;
	}

	inline static int32_t get_offset_of_last_eob_len_69() { return static_cast<int32_t>(offsetof(DeflateManager_t3554793512, ___last_eob_len_69)); }
	inline int32_t get_last_eob_len_69() const { return ___last_eob_len_69; }
	inline int32_t* get_address_of_last_eob_len_69() { return &___last_eob_len_69; }
	inline void set_last_eob_len_69(int32_t value)
	{
		___last_eob_len_69 = value;
	}

	inline static int32_t get_offset_of_bi_buf_70() { return static_cast<int32_t>(offsetof(DeflateManager_t3554793512, ___bi_buf_70)); }
	inline int16_t get_bi_buf_70() const { return ___bi_buf_70; }
	inline int16_t* get_address_of_bi_buf_70() { return &___bi_buf_70; }
	inline void set_bi_buf_70(int16_t value)
	{
		___bi_buf_70 = value;
	}

	inline static int32_t get_offset_of_bi_valid_71() { return static_cast<int32_t>(offsetof(DeflateManager_t3554793512, ___bi_valid_71)); }
	inline int32_t get_bi_valid_71() const { return ___bi_valid_71; }
	inline int32_t* get_address_of_bi_valid_71() { return &___bi_valid_71; }
	inline void set_bi_valid_71(int32_t value)
	{
		___bi_valid_71 = value;
	}

	inline static int32_t get_offset_of_Rfc1950BytesEmitted_72() { return static_cast<int32_t>(offsetof(DeflateManager_t3554793512, ___Rfc1950BytesEmitted_72)); }
	inline bool get_Rfc1950BytesEmitted_72() const { return ___Rfc1950BytesEmitted_72; }
	inline bool* get_address_of_Rfc1950BytesEmitted_72() { return &___Rfc1950BytesEmitted_72; }
	inline void set_Rfc1950BytesEmitted_72(bool value)
	{
		___Rfc1950BytesEmitted_72 = value;
	}

	inline static int32_t get_offset_of__WantRfc1950HeaderBytes_73() { return static_cast<int32_t>(offsetof(DeflateManager_t3554793512, ____WantRfc1950HeaderBytes_73)); }
	inline bool get__WantRfc1950HeaderBytes_73() const { return ____WantRfc1950HeaderBytes_73; }
	inline bool* get_address_of__WantRfc1950HeaderBytes_73() { return &____WantRfc1950HeaderBytes_73; }
	inline void set__WantRfc1950HeaderBytes_73(bool value)
	{
		____WantRfc1950HeaderBytes_73 = value;
	}
};

struct DeflateManager_t3554793512_StaticFields
{
public:
	// System.Int32 Pathfinding.Ionic.Zlib.DeflateManager::MEM_LEVEL_MAX
	int32_t ___MEM_LEVEL_MAX_0;
	// System.Int32 Pathfinding.Ionic.Zlib.DeflateManager::MEM_LEVEL_DEFAULT
	int32_t ___MEM_LEVEL_DEFAULT_1;
	// System.String[] Pathfinding.Ionic.Zlib.DeflateManager::_ErrorMessage
	StringU5BU5D_t1281789340* ____ErrorMessage_3;
	// System.Int32 Pathfinding.Ionic.Zlib.DeflateManager::PRESET_DICT
	int32_t ___PRESET_DICT_4;
	// System.Int32 Pathfinding.Ionic.Zlib.DeflateManager::INIT_STATE
	int32_t ___INIT_STATE_5;
	// System.Int32 Pathfinding.Ionic.Zlib.DeflateManager::BUSY_STATE
	int32_t ___BUSY_STATE_6;
	// System.Int32 Pathfinding.Ionic.Zlib.DeflateManager::FINISH_STATE
	int32_t ___FINISH_STATE_7;
	// System.Int32 Pathfinding.Ionic.Zlib.DeflateManager::Z_DEFLATED
	int32_t ___Z_DEFLATED_8;
	// System.Int32 Pathfinding.Ionic.Zlib.DeflateManager::STORED_BLOCK
	int32_t ___STORED_BLOCK_9;
	// System.Int32 Pathfinding.Ionic.Zlib.DeflateManager::STATIC_TREES
	int32_t ___STATIC_TREES_10;
	// System.Int32 Pathfinding.Ionic.Zlib.DeflateManager::DYN_TREES
	int32_t ___DYN_TREES_11;
	// System.Int32 Pathfinding.Ionic.Zlib.DeflateManager::Z_BINARY
	int32_t ___Z_BINARY_12;
	// System.Int32 Pathfinding.Ionic.Zlib.DeflateManager::Z_ASCII
	int32_t ___Z_ASCII_13;
	// System.Int32 Pathfinding.Ionic.Zlib.DeflateManager::Z_UNKNOWN
	int32_t ___Z_UNKNOWN_14;
	// System.Int32 Pathfinding.Ionic.Zlib.DeflateManager::Buf_size
	int32_t ___Buf_size_15;
	// System.Int32 Pathfinding.Ionic.Zlib.DeflateManager::MIN_MATCH
	int32_t ___MIN_MATCH_16;
	// System.Int32 Pathfinding.Ionic.Zlib.DeflateManager::MAX_MATCH
	int32_t ___MAX_MATCH_17;
	// System.Int32 Pathfinding.Ionic.Zlib.DeflateManager::MIN_LOOKAHEAD
	int32_t ___MIN_LOOKAHEAD_18;
	// System.Int32 Pathfinding.Ionic.Zlib.DeflateManager::HEAP_SIZE
	int32_t ___HEAP_SIZE_19;
	// System.Int32 Pathfinding.Ionic.Zlib.DeflateManager::END_BLOCK
	int32_t ___END_BLOCK_20;

public:
	inline static int32_t get_offset_of_MEM_LEVEL_MAX_0() { return static_cast<int32_t>(offsetof(DeflateManager_t3554793512_StaticFields, ___MEM_LEVEL_MAX_0)); }
	inline int32_t get_MEM_LEVEL_MAX_0() const { return ___MEM_LEVEL_MAX_0; }
	inline int32_t* get_address_of_MEM_LEVEL_MAX_0() { return &___MEM_LEVEL_MAX_0; }
	inline void set_MEM_LEVEL_MAX_0(int32_t value)
	{
		___MEM_LEVEL_MAX_0 = value;
	}

	inline static int32_t get_offset_of_MEM_LEVEL_DEFAULT_1() { return static_cast<int32_t>(offsetof(DeflateManager_t3554793512_StaticFields, ___MEM_LEVEL_DEFAULT_1)); }
	inline int32_t get_MEM_LEVEL_DEFAULT_1() const { return ___MEM_LEVEL_DEFAULT_1; }
	inline int32_t* get_address_of_MEM_LEVEL_DEFAULT_1() { return &___MEM_LEVEL_DEFAULT_1; }
	inline void set_MEM_LEVEL_DEFAULT_1(int32_t value)
	{
		___MEM_LEVEL_DEFAULT_1 = value;
	}

	inline static int32_t get_offset_of__ErrorMessage_3() { return static_cast<int32_t>(offsetof(DeflateManager_t3554793512_StaticFields, ____ErrorMessage_3)); }
	inline StringU5BU5D_t1281789340* get__ErrorMessage_3() const { return ____ErrorMessage_3; }
	inline StringU5BU5D_t1281789340** get_address_of__ErrorMessage_3() { return &____ErrorMessage_3; }
	inline void set__ErrorMessage_3(StringU5BU5D_t1281789340* value)
	{
		____ErrorMessage_3 = value;
		Il2CppCodeGenWriteBarrier((&____ErrorMessage_3), value);
	}

	inline static int32_t get_offset_of_PRESET_DICT_4() { return static_cast<int32_t>(offsetof(DeflateManager_t3554793512_StaticFields, ___PRESET_DICT_4)); }
	inline int32_t get_PRESET_DICT_4() const { return ___PRESET_DICT_4; }
	inline int32_t* get_address_of_PRESET_DICT_4() { return &___PRESET_DICT_4; }
	inline void set_PRESET_DICT_4(int32_t value)
	{
		___PRESET_DICT_4 = value;
	}

	inline static int32_t get_offset_of_INIT_STATE_5() { return static_cast<int32_t>(offsetof(DeflateManager_t3554793512_StaticFields, ___INIT_STATE_5)); }
	inline int32_t get_INIT_STATE_5() const { return ___INIT_STATE_5; }
	inline int32_t* get_address_of_INIT_STATE_5() { return &___INIT_STATE_5; }
	inline void set_INIT_STATE_5(int32_t value)
	{
		___INIT_STATE_5 = value;
	}

	inline static int32_t get_offset_of_BUSY_STATE_6() { return static_cast<int32_t>(offsetof(DeflateManager_t3554793512_StaticFields, ___BUSY_STATE_6)); }
	inline int32_t get_BUSY_STATE_6() const { return ___BUSY_STATE_6; }
	inline int32_t* get_address_of_BUSY_STATE_6() { return &___BUSY_STATE_6; }
	inline void set_BUSY_STATE_6(int32_t value)
	{
		___BUSY_STATE_6 = value;
	}

	inline static int32_t get_offset_of_FINISH_STATE_7() { return static_cast<int32_t>(offsetof(DeflateManager_t3554793512_StaticFields, ___FINISH_STATE_7)); }
	inline int32_t get_FINISH_STATE_7() const { return ___FINISH_STATE_7; }
	inline int32_t* get_address_of_FINISH_STATE_7() { return &___FINISH_STATE_7; }
	inline void set_FINISH_STATE_7(int32_t value)
	{
		___FINISH_STATE_7 = value;
	}

	inline static int32_t get_offset_of_Z_DEFLATED_8() { return static_cast<int32_t>(offsetof(DeflateManager_t3554793512_StaticFields, ___Z_DEFLATED_8)); }
	inline int32_t get_Z_DEFLATED_8() const { return ___Z_DEFLATED_8; }
	inline int32_t* get_address_of_Z_DEFLATED_8() { return &___Z_DEFLATED_8; }
	inline void set_Z_DEFLATED_8(int32_t value)
	{
		___Z_DEFLATED_8 = value;
	}

	inline static int32_t get_offset_of_STORED_BLOCK_9() { return static_cast<int32_t>(offsetof(DeflateManager_t3554793512_StaticFields, ___STORED_BLOCK_9)); }
	inline int32_t get_STORED_BLOCK_9() const { return ___STORED_BLOCK_9; }
	inline int32_t* get_address_of_STORED_BLOCK_9() { return &___STORED_BLOCK_9; }
	inline void set_STORED_BLOCK_9(int32_t value)
	{
		___STORED_BLOCK_9 = value;
	}

	inline static int32_t get_offset_of_STATIC_TREES_10() { return static_cast<int32_t>(offsetof(DeflateManager_t3554793512_StaticFields, ___STATIC_TREES_10)); }
	inline int32_t get_STATIC_TREES_10() const { return ___STATIC_TREES_10; }
	inline int32_t* get_address_of_STATIC_TREES_10() { return &___STATIC_TREES_10; }
	inline void set_STATIC_TREES_10(int32_t value)
	{
		___STATIC_TREES_10 = value;
	}

	inline static int32_t get_offset_of_DYN_TREES_11() { return static_cast<int32_t>(offsetof(DeflateManager_t3554793512_StaticFields, ___DYN_TREES_11)); }
	inline int32_t get_DYN_TREES_11() const { return ___DYN_TREES_11; }
	inline int32_t* get_address_of_DYN_TREES_11() { return &___DYN_TREES_11; }
	inline void set_DYN_TREES_11(int32_t value)
	{
		___DYN_TREES_11 = value;
	}

	inline static int32_t get_offset_of_Z_BINARY_12() { return static_cast<int32_t>(offsetof(DeflateManager_t3554793512_StaticFields, ___Z_BINARY_12)); }
	inline int32_t get_Z_BINARY_12() const { return ___Z_BINARY_12; }
	inline int32_t* get_address_of_Z_BINARY_12() { return &___Z_BINARY_12; }
	inline void set_Z_BINARY_12(int32_t value)
	{
		___Z_BINARY_12 = value;
	}

	inline static int32_t get_offset_of_Z_ASCII_13() { return static_cast<int32_t>(offsetof(DeflateManager_t3554793512_StaticFields, ___Z_ASCII_13)); }
	inline int32_t get_Z_ASCII_13() const { return ___Z_ASCII_13; }
	inline int32_t* get_address_of_Z_ASCII_13() { return &___Z_ASCII_13; }
	inline void set_Z_ASCII_13(int32_t value)
	{
		___Z_ASCII_13 = value;
	}

	inline static int32_t get_offset_of_Z_UNKNOWN_14() { return static_cast<int32_t>(offsetof(DeflateManager_t3554793512_StaticFields, ___Z_UNKNOWN_14)); }
	inline int32_t get_Z_UNKNOWN_14() const { return ___Z_UNKNOWN_14; }
	inline int32_t* get_address_of_Z_UNKNOWN_14() { return &___Z_UNKNOWN_14; }
	inline void set_Z_UNKNOWN_14(int32_t value)
	{
		___Z_UNKNOWN_14 = value;
	}

	inline static int32_t get_offset_of_Buf_size_15() { return static_cast<int32_t>(offsetof(DeflateManager_t3554793512_StaticFields, ___Buf_size_15)); }
	inline int32_t get_Buf_size_15() const { return ___Buf_size_15; }
	inline int32_t* get_address_of_Buf_size_15() { return &___Buf_size_15; }
	inline void set_Buf_size_15(int32_t value)
	{
		___Buf_size_15 = value;
	}

	inline static int32_t get_offset_of_MIN_MATCH_16() { return static_cast<int32_t>(offsetof(DeflateManager_t3554793512_StaticFields, ___MIN_MATCH_16)); }
	inline int32_t get_MIN_MATCH_16() const { return ___MIN_MATCH_16; }
	inline int32_t* get_address_of_MIN_MATCH_16() { return &___MIN_MATCH_16; }
	inline void set_MIN_MATCH_16(int32_t value)
	{
		___MIN_MATCH_16 = value;
	}

	inline static int32_t get_offset_of_MAX_MATCH_17() { return static_cast<int32_t>(offsetof(DeflateManager_t3554793512_StaticFields, ___MAX_MATCH_17)); }
	inline int32_t get_MAX_MATCH_17() const { return ___MAX_MATCH_17; }
	inline int32_t* get_address_of_MAX_MATCH_17() { return &___MAX_MATCH_17; }
	inline void set_MAX_MATCH_17(int32_t value)
	{
		___MAX_MATCH_17 = value;
	}

	inline static int32_t get_offset_of_MIN_LOOKAHEAD_18() { return static_cast<int32_t>(offsetof(DeflateManager_t3554793512_StaticFields, ___MIN_LOOKAHEAD_18)); }
	inline int32_t get_MIN_LOOKAHEAD_18() const { return ___MIN_LOOKAHEAD_18; }
	inline int32_t* get_address_of_MIN_LOOKAHEAD_18() { return &___MIN_LOOKAHEAD_18; }
	inline void set_MIN_LOOKAHEAD_18(int32_t value)
	{
		___MIN_LOOKAHEAD_18 = value;
	}

	inline static int32_t get_offset_of_HEAP_SIZE_19() { return static_cast<int32_t>(offsetof(DeflateManager_t3554793512_StaticFields, ___HEAP_SIZE_19)); }
	inline int32_t get_HEAP_SIZE_19() const { return ___HEAP_SIZE_19; }
	inline int32_t* get_address_of_HEAP_SIZE_19() { return &___HEAP_SIZE_19; }
	inline void set_HEAP_SIZE_19(int32_t value)
	{
		___HEAP_SIZE_19 = value;
	}

	inline static int32_t get_offset_of_END_BLOCK_20() { return static_cast<int32_t>(offsetof(DeflateManager_t3554793512_StaticFields, ___END_BLOCK_20)); }
	inline int32_t get_END_BLOCK_20() const { return ___END_BLOCK_20; }
	inline int32_t* get_address_of_END_BLOCK_20() { return &___END_BLOCK_20; }
	inline void set_END_BLOCK_20(int32_t value)
	{
		___END_BLOCK_20 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEFLATEMANAGER_T3554793512_H
#ifndef CONFIG_T3362677528_H
#define CONFIG_T3362677528_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Pathfinding.Ionic.Zlib.DeflateManager/Config
struct  Config_t3362677528  : public RuntimeObject
{
public:
	// System.Int32 Pathfinding.Ionic.Zlib.DeflateManager/Config::GoodLength
	int32_t ___GoodLength_0;
	// System.Int32 Pathfinding.Ionic.Zlib.DeflateManager/Config::MaxLazy
	int32_t ___MaxLazy_1;
	// System.Int32 Pathfinding.Ionic.Zlib.DeflateManager/Config::NiceLength
	int32_t ___NiceLength_2;
	// System.Int32 Pathfinding.Ionic.Zlib.DeflateManager/Config::MaxChainLength
	int32_t ___MaxChainLength_3;
	// Pathfinding.Ionic.Zlib.DeflateFlavor Pathfinding.Ionic.Zlib.DeflateManager/Config::Flavor
	int32_t ___Flavor_4;

public:
	inline static int32_t get_offset_of_GoodLength_0() { return static_cast<int32_t>(offsetof(Config_t3362677528, ___GoodLength_0)); }
	inline int32_t get_GoodLength_0() const { return ___GoodLength_0; }
	inline int32_t* get_address_of_GoodLength_0() { return &___GoodLength_0; }
	inline void set_GoodLength_0(int32_t value)
	{
		___GoodLength_0 = value;
	}

	inline static int32_t get_offset_of_MaxLazy_1() { return static_cast<int32_t>(offsetof(Config_t3362677528, ___MaxLazy_1)); }
	inline int32_t get_MaxLazy_1() const { return ___MaxLazy_1; }
	inline int32_t* get_address_of_MaxLazy_1() { return &___MaxLazy_1; }
	inline void set_MaxLazy_1(int32_t value)
	{
		___MaxLazy_1 = value;
	}

	inline static int32_t get_offset_of_NiceLength_2() { return static_cast<int32_t>(offsetof(Config_t3362677528, ___NiceLength_2)); }
	inline int32_t get_NiceLength_2() const { return ___NiceLength_2; }
	inline int32_t* get_address_of_NiceLength_2() { return &___NiceLength_2; }
	inline void set_NiceLength_2(int32_t value)
	{
		___NiceLength_2 = value;
	}

	inline static int32_t get_offset_of_MaxChainLength_3() { return static_cast<int32_t>(offsetof(Config_t3362677528, ___MaxChainLength_3)); }
	inline int32_t get_MaxChainLength_3() const { return ___MaxChainLength_3; }
	inline int32_t* get_address_of_MaxChainLength_3() { return &___MaxChainLength_3; }
	inline void set_MaxChainLength_3(int32_t value)
	{
		___MaxChainLength_3 = value;
	}

	inline static int32_t get_offset_of_Flavor_4() { return static_cast<int32_t>(offsetof(Config_t3362677528, ___Flavor_4)); }
	inline int32_t get_Flavor_4() const { return ___Flavor_4; }
	inline int32_t* get_address_of_Flavor_4() { return &___Flavor_4; }
	inline void set_Flavor_4(int32_t value)
	{
		___Flavor_4 = value;
	}
};

struct Config_t3362677528_StaticFields
{
public:
	// Pathfinding.Ionic.Zlib.DeflateManager/Config[] Pathfinding.Ionic.Zlib.DeflateManager/Config::Table
	ConfigU5BU5D_t3063149961* ___Table_5;

public:
	inline static int32_t get_offset_of_Table_5() { return static_cast<int32_t>(offsetof(Config_t3362677528_StaticFields, ___Table_5)); }
	inline ConfigU5BU5D_t3063149961* get_Table_5() const { return ___Table_5; }
	inline ConfigU5BU5D_t3063149961** get_address_of_Table_5() { return &___Table_5; }
	inline void set_Table_5(ConfigU5BU5D_t3063149961* value)
	{
		___Table_5 = value;
		Il2CppCodeGenWriteBarrier((&___Table_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONFIG_T3362677528_H
#ifndef INFLATEBLOCKS_T4119258979_H
#define INFLATEBLOCKS_T4119258979_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Pathfinding.Ionic.Zlib.InflateBlocks
struct  InflateBlocks_t4119258979  : public RuntimeObject
{
public:
	// Pathfinding.Ionic.Zlib.InflateBlocks/InflateBlockMode Pathfinding.Ionic.Zlib.InflateBlocks::mode
	int32_t ___mode_1;
	// System.Int32 Pathfinding.Ionic.Zlib.InflateBlocks::left
	int32_t ___left_2;
	// System.Int32 Pathfinding.Ionic.Zlib.InflateBlocks::table
	int32_t ___table_3;
	// System.Int32 Pathfinding.Ionic.Zlib.InflateBlocks::index
	int32_t ___index_4;
	// System.Int32[] Pathfinding.Ionic.Zlib.InflateBlocks::blens
	Int32U5BU5D_t385246372* ___blens_5;
	// System.Int32[] Pathfinding.Ionic.Zlib.InflateBlocks::bb
	Int32U5BU5D_t385246372* ___bb_6;
	// System.Int32[] Pathfinding.Ionic.Zlib.InflateBlocks::tb
	Int32U5BU5D_t385246372* ___tb_7;
	// Pathfinding.Ionic.Zlib.InflateCodes Pathfinding.Ionic.Zlib.InflateBlocks::codes
	InflateCodes_t3940108927 * ___codes_8;
	// System.Int32 Pathfinding.Ionic.Zlib.InflateBlocks::last
	int32_t ___last_9;
	// Pathfinding.Ionic.Zlib.ZlibCodec Pathfinding.Ionic.Zlib.InflateBlocks::_codec
	ZlibCodec_t855427629 * ____codec_10;
	// System.Int32 Pathfinding.Ionic.Zlib.InflateBlocks::bitk
	int32_t ___bitk_11;
	// System.Int32 Pathfinding.Ionic.Zlib.InflateBlocks::bitb
	int32_t ___bitb_12;
	// System.Int32[] Pathfinding.Ionic.Zlib.InflateBlocks::hufts
	Int32U5BU5D_t385246372* ___hufts_13;
	// System.Byte[] Pathfinding.Ionic.Zlib.InflateBlocks::window
	ByteU5BU5D_t4116647657* ___window_14;
	// System.Int32 Pathfinding.Ionic.Zlib.InflateBlocks::end
	int32_t ___end_15;
	// System.Int32 Pathfinding.Ionic.Zlib.InflateBlocks::readAt
	int32_t ___readAt_16;
	// System.Int32 Pathfinding.Ionic.Zlib.InflateBlocks::writeAt
	int32_t ___writeAt_17;
	// System.Object Pathfinding.Ionic.Zlib.InflateBlocks::checkfn
	RuntimeObject * ___checkfn_18;
	// System.UInt32 Pathfinding.Ionic.Zlib.InflateBlocks::check
	uint32_t ___check_19;
	// Pathfinding.Ionic.Zlib.InfTree Pathfinding.Ionic.Zlib.InflateBlocks::inftree
	InfTree_t2692649235 * ___inftree_20;

public:
	inline static int32_t get_offset_of_mode_1() { return static_cast<int32_t>(offsetof(InflateBlocks_t4119258979, ___mode_1)); }
	inline int32_t get_mode_1() const { return ___mode_1; }
	inline int32_t* get_address_of_mode_1() { return &___mode_1; }
	inline void set_mode_1(int32_t value)
	{
		___mode_1 = value;
	}

	inline static int32_t get_offset_of_left_2() { return static_cast<int32_t>(offsetof(InflateBlocks_t4119258979, ___left_2)); }
	inline int32_t get_left_2() const { return ___left_2; }
	inline int32_t* get_address_of_left_2() { return &___left_2; }
	inline void set_left_2(int32_t value)
	{
		___left_2 = value;
	}

	inline static int32_t get_offset_of_table_3() { return static_cast<int32_t>(offsetof(InflateBlocks_t4119258979, ___table_3)); }
	inline int32_t get_table_3() const { return ___table_3; }
	inline int32_t* get_address_of_table_3() { return &___table_3; }
	inline void set_table_3(int32_t value)
	{
		___table_3 = value;
	}

	inline static int32_t get_offset_of_index_4() { return static_cast<int32_t>(offsetof(InflateBlocks_t4119258979, ___index_4)); }
	inline int32_t get_index_4() const { return ___index_4; }
	inline int32_t* get_address_of_index_4() { return &___index_4; }
	inline void set_index_4(int32_t value)
	{
		___index_4 = value;
	}

	inline static int32_t get_offset_of_blens_5() { return static_cast<int32_t>(offsetof(InflateBlocks_t4119258979, ___blens_5)); }
	inline Int32U5BU5D_t385246372* get_blens_5() const { return ___blens_5; }
	inline Int32U5BU5D_t385246372** get_address_of_blens_5() { return &___blens_5; }
	inline void set_blens_5(Int32U5BU5D_t385246372* value)
	{
		___blens_5 = value;
		Il2CppCodeGenWriteBarrier((&___blens_5), value);
	}

	inline static int32_t get_offset_of_bb_6() { return static_cast<int32_t>(offsetof(InflateBlocks_t4119258979, ___bb_6)); }
	inline Int32U5BU5D_t385246372* get_bb_6() const { return ___bb_6; }
	inline Int32U5BU5D_t385246372** get_address_of_bb_6() { return &___bb_6; }
	inline void set_bb_6(Int32U5BU5D_t385246372* value)
	{
		___bb_6 = value;
		Il2CppCodeGenWriteBarrier((&___bb_6), value);
	}

	inline static int32_t get_offset_of_tb_7() { return static_cast<int32_t>(offsetof(InflateBlocks_t4119258979, ___tb_7)); }
	inline Int32U5BU5D_t385246372* get_tb_7() const { return ___tb_7; }
	inline Int32U5BU5D_t385246372** get_address_of_tb_7() { return &___tb_7; }
	inline void set_tb_7(Int32U5BU5D_t385246372* value)
	{
		___tb_7 = value;
		Il2CppCodeGenWriteBarrier((&___tb_7), value);
	}

	inline static int32_t get_offset_of_codes_8() { return static_cast<int32_t>(offsetof(InflateBlocks_t4119258979, ___codes_8)); }
	inline InflateCodes_t3940108927 * get_codes_8() const { return ___codes_8; }
	inline InflateCodes_t3940108927 ** get_address_of_codes_8() { return &___codes_8; }
	inline void set_codes_8(InflateCodes_t3940108927 * value)
	{
		___codes_8 = value;
		Il2CppCodeGenWriteBarrier((&___codes_8), value);
	}

	inline static int32_t get_offset_of_last_9() { return static_cast<int32_t>(offsetof(InflateBlocks_t4119258979, ___last_9)); }
	inline int32_t get_last_9() const { return ___last_9; }
	inline int32_t* get_address_of_last_9() { return &___last_9; }
	inline void set_last_9(int32_t value)
	{
		___last_9 = value;
	}

	inline static int32_t get_offset_of__codec_10() { return static_cast<int32_t>(offsetof(InflateBlocks_t4119258979, ____codec_10)); }
	inline ZlibCodec_t855427629 * get__codec_10() const { return ____codec_10; }
	inline ZlibCodec_t855427629 ** get_address_of__codec_10() { return &____codec_10; }
	inline void set__codec_10(ZlibCodec_t855427629 * value)
	{
		____codec_10 = value;
		Il2CppCodeGenWriteBarrier((&____codec_10), value);
	}

	inline static int32_t get_offset_of_bitk_11() { return static_cast<int32_t>(offsetof(InflateBlocks_t4119258979, ___bitk_11)); }
	inline int32_t get_bitk_11() const { return ___bitk_11; }
	inline int32_t* get_address_of_bitk_11() { return &___bitk_11; }
	inline void set_bitk_11(int32_t value)
	{
		___bitk_11 = value;
	}

	inline static int32_t get_offset_of_bitb_12() { return static_cast<int32_t>(offsetof(InflateBlocks_t4119258979, ___bitb_12)); }
	inline int32_t get_bitb_12() const { return ___bitb_12; }
	inline int32_t* get_address_of_bitb_12() { return &___bitb_12; }
	inline void set_bitb_12(int32_t value)
	{
		___bitb_12 = value;
	}

	inline static int32_t get_offset_of_hufts_13() { return static_cast<int32_t>(offsetof(InflateBlocks_t4119258979, ___hufts_13)); }
	inline Int32U5BU5D_t385246372* get_hufts_13() const { return ___hufts_13; }
	inline Int32U5BU5D_t385246372** get_address_of_hufts_13() { return &___hufts_13; }
	inline void set_hufts_13(Int32U5BU5D_t385246372* value)
	{
		___hufts_13 = value;
		Il2CppCodeGenWriteBarrier((&___hufts_13), value);
	}

	inline static int32_t get_offset_of_window_14() { return static_cast<int32_t>(offsetof(InflateBlocks_t4119258979, ___window_14)); }
	inline ByteU5BU5D_t4116647657* get_window_14() const { return ___window_14; }
	inline ByteU5BU5D_t4116647657** get_address_of_window_14() { return &___window_14; }
	inline void set_window_14(ByteU5BU5D_t4116647657* value)
	{
		___window_14 = value;
		Il2CppCodeGenWriteBarrier((&___window_14), value);
	}

	inline static int32_t get_offset_of_end_15() { return static_cast<int32_t>(offsetof(InflateBlocks_t4119258979, ___end_15)); }
	inline int32_t get_end_15() const { return ___end_15; }
	inline int32_t* get_address_of_end_15() { return &___end_15; }
	inline void set_end_15(int32_t value)
	{
		___end_15 = value;
	}

	inline static int32_t get_offset_of_readAt_16() { return static_cast<int32_t>(offsetof(InflateBlocks_t4119258979, ___readAt_16)); }
	inline int32_t get_readAt_16() const { return ___readAt_16; }
	inline int32_t* get_address_of_readAt_16() { return &___readAt_16; }
	inline void set_readAt_16(int32_t value)
	{
		___readAt_16 = value;
	}

	inline static int32_t get_offset_of_writeAt_17() { return static_cast<int32_t>(offsetof(InflateBlocks_t4119258979, ___writeAt_17)); }
	inline int32_t get_writeAt_17() const { return ___writeAt_17; }
	inline int32_t* get_address_of_writeAt_17() { return &___writeAt_17; }
	inline void set_writeAt_17(int32_t value)
	{
		___writeAt_17 = value;
	}

	inline static int32_t get_offset_of_checkfn_18() { return static_cast<int32_t>(offsetof(InflateBlocks_t4119258979, ___checkfn_18)); }
	inline RuntimeObject * get_checkfn_18() const { return ___checkfn_18; }
	inline RuntimeObject ** get_address_of_checkfn_18() { return &___checkfn_18; }
	inline void set_checkfn_18(RuntimeObject * value)
	{
		___checkfn_18 = value;
		Il2CppCodeGenWriteBarrier((&___checkfn_18), value);
	}

	inline static int32_t get_offset_of_check_19() { return static_cast<int32_t>(offsetof(InflateBlocks_t4119258979, ___check_19)); }
	inline uint32_t get_check_19() const { return ___check_19; }
	inline uint32_t* get_address_of_check_19() { return &___check_19; }
	inline void set_check_19(uint32_t value)
	{
		___check_19 = value;
	}

	inline static int32_t get_offset_of_inftree_20() { return static_cast<int32_t>(offsetof(InflateBlocks_t4119258979, ___inftree_20)); }
	inline InfTree_t2692649235 * get_inftree_20() const { return ___inftree_20; }
	inline InfTree_t2692649235 ** get_address_of_inftree_20() { return &___inftree_20; }
	inline void set_inftree_20(InfTree_t2692649235 * value)
	{
		___inftree_20 = value;
		Il2CppCodeGenWriteBarrier((&___inftree_20), value);
	}
};

struct InflateBlocks_t4119258979_StaticFields
{
public:
	// System.Int32[] Pathfinding.Ionic.Zlib.InflateBlocks::border
	Int32U5BU5D_t385246372* ___border_0;

public:
	inline static int32_t get_offset_of_border_0() { return static_cast<int32_t>(offsetof(InflateBlocks_t4119258979_StaticFields, ___border_0)); }
	inline Int32U5BU5D_t385246372* get_border_0() const { return ___border_0; }
	inline Int32U5BU5D_t385246372** get_address_of_border_0() { return &___border_0; }
	inline void set_border_0(Int32U5BU5D_t385246372* value)
	{
		___border_0 = value;
		Il2CppCodeGenWriteBarrier((&___border_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INFLATEBLOCKS_T4119258979_H
#ifndef INFLATEMANAGER_T3682621372_H
#define INFLATEMANAGER_T3682621372_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Pathfinding.Ionic.Zlib.InflateManager
struct  InflateManager_t3682621372  : public RuntimeObject
{
public:
	// Pathfinding.Ionic.Zlib.InflateManager/InflateManagerMode Pathfinding.Ionic.Zlib.InflateManager::mode
	int32_t ___mode_0;
	// Pathfinding.Ionic.Zlib.ZlibCodec Pathfinding.Ionic.Zlib.InflateManager::_codec
	ZlibCodec_t855427629 * ____codec_1;
	// System.Int32 Pathfinding.Ionic.Zlib.InflateManager::method
	int32_t ___method_2;
	// System.UInt32 Pathfinding.Ionic.Zlib.InflateManager::computedCheck
	uint32_t ___computedCheck_3;
	// System.UInt32 Pathfinding.Ionic.Zlib.InflateManager::expectedCheck
	uint32_t ___expectedCheck_4;
	// System.Int32 Pathfinding.Ionic.Zlib.InflateManager::marker
	int32_t ___marker_5;
	// System.Boolean Pathfinding.Ionic.Zlib.InflateManager::_handleRfc1950HeaderBytes
	bool ____handleRfc1950HeaderBytes_6;
	// System.Int32 Pathfinding.Ionic.Zlib.InflateManager::wbits
	int32_t ___wbits_7;
	// Pathfinding.Ionic.Zlib.InflateBlocks Pathfinding.Ionic.Zlib.InflateManager::blocks
	InflateBlocks_t4119258979 * ___blocks_8;

public:
	inline static int32_t get_offset_of_mode_0() { return static_cast<int32_t>(offsetof(InflateManager_t3682621372, ___mode_0)); }
	inline int32_t get_mode_0() const { return ___mode_0; }
	inline int32_t* get_address_of_mode_0() { return &___mode_0; }
	inline void set_mode_0(int32_t value)
	{
		___mode_0 = value;
	}

	inline static int32_t get_offset_of__codec_1() { return static_cast<int32_t>(offsetof(InflateManager_t3682621372, ____codec_1)); }
	inline ZlibCodec_t855427629 * get__codec_1() const { return ____codec_1; }
	inline ZlibCodec_t855427629 ** get_address_of__codec_1() { return &____codec_1; }
	inline void set__codec_1(ZlibCodec_t855427629 * value)
	{
		____codec_1 = value;
		Il2CppCodeGenWriteBarrier((&____codec_1), value);
	}

	inline static int32_t get_offset_of_method_2() { return static_cast<int32_t>(offsetof(InflateManager_t3682621372, ___method_2)); }
	inline int32_t get_method_2() const { return ___method_2; }
	inline int32_t* get_address_of_method_2() { return &___method_2; }
	inline void set_method_2(int32_t value)
	{
		___method_2 = value;
	}

	inline static int32_t get_offset_of_computedCheck_3() { return static_cast<int32_t>(offsetof(InflateManager_t3682621372, ___computedCheck_3)); }
	inline uint32_t get_computedCheck_3() const { return ___computedCheck_3; }
	inline uint32_t* get_address_of_computedCheck_3() { return &___computedCheck_3; }
	inline void set_computedCheck_3(uint32_t value)
	{
		___computedCheck_3 = value;
	}

	inline static int32_t get_offset_of_expectedCheck_4() { return static_cast<int32_t>(offsetof(InflateManager_t3682621372, ___expectedCheck_4)); }
	inline uint32_t get_expectedCheck_4() const { return ___expectedCheck_4; }
	inline uint32_t* get_address_of_expectedCheck_4() { return &___expectedCheck_4; }
	inline void set_expectedCheck_4(uint32_t value)
	{
		___expectedCheck_4 = value;
	}

	inline static int32_t get_offset_of_marker_5() { return static_cast<int32_t>(offsetof(InflateManager_t3682621372, ___marker_5)); }
	inline int32_t get_marker_5() const { return ___marker_5; }
	inline int32_t* get_address_of_marker_5() { return &___marker_5; }
	inline void set_marker_5(int32_t value)
	{
		___marker_5 = value;
	}

	inline static int32_t get_offset_of__handleRfc1950HeaderBytes_6() { return static_cast<int32_t>(offsetof(InflateManager_t3682621372, ____handleRfc1950HeaderBytes_6)); }
	inline bool get__handleRfc1950HeaderBytes_6() const { return ____handleRfc1950HeaderBytes_6; }
	inline bool* get_address_of__handleRfc1950HeaderBytes_6() { return &____handleRfc1950HeaderBytes_6; }
	inline void set__handleRfc1950HeaderBytes_6(bool value)
	{
		____handleRfc1950HeaderBytes_6 = value;
	}

	inline static int32_t get_offset_of_wbits_7() { return static_cast<int32_t>(offsetof(InflateManager_t3682621372, ___wbits_7)); }
	inline int32_t get_wbits_7() const { return ___wbits_7; }
	inline int32_t* get_address_of_wbits_7() { return &___wbits_7; }
	inline void set_wbits_7(int32_t value)
	{
		___wbits_7 = value;
	}

	inline static int32_t get_offset_of_blocks_8() { return static_cast<int32_t>(offsetof(InflateManager_t3682621372, ___blocks_8)); }
	inline InflateBlocks_t4119258979 * get_blocks_8() const { return ___blocks_8; }
	inline InflateBlocks_t4119258979 ** get_address_of_blocks_8() { return &___blocks_8; }
	inline void set_blocks_8(InflateBlocks_t4119258979 * value)
	{
		___blocks_8 = value;
		Il2CppCodeGenWriteBarrier((&___blocks_8), value);
	}
};

struct InflateManager_t3682621372_StaticFields
{
public:
	// System.Byte[] Pathfinding.Ionic.Zlib.InflateManager::mark
	ByteU5BU5D_t4116647657* ___mark_9;

public:
	inline static int32_t get_offset_of_mark_9() { return static_cast<int32_t>(offsetof(InflateManager_t3682621372_StaticFields, ___mark_9)); }
	inline ByteU5BU5D_t4116647657* get_mark_9() const { return ___mark_9; }
	inline ByteU5BU5D_t4116647657** get_address_of_mark_9() { return &___mark_9; }
	inline void set_mark_9(ByteU5BU5D_t4116647657* value)
	{
		___mark_9 = value;
		Il2CppCodeGenWriteBarrier((&___mark_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INFLATEMANAGER_T3682621372_H
#ifndef PARALLELDEFLATEOUTPUTSTREAM_T2527365669_H
#define PARALLELDEFLATEOUTPUTSTREAM_T2527365669_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Pathfinding.Ionic.Zlib.ParallelDeflateOutputStream
struct  ParallelDeflateOutputStream_t2527365669  : public Stream_t1273022909
{
public:
	// System.Collections.Generic.List`1<Pathfinding.Ionic.Zlib.WorkItem> Pathfinding.Ionic.Zlib.ParallelDeflateOutputStream::_pool
	List_1_t4178125671 * ____pool_3;
	// System.Boolean Pathfinding.Ionic.Zlib.ParallelDeflateOutputStream::_leaveOpen
	bool ____leaveOpen_4;
	// System.Boolean Pathfinding.Ionic.Zlib.ParallelDeflateOutputStream::emitting
	bool ___emitting_5;
	// System.IO.Stream Pathfinding.Ionic.Zlib.ParallelDeflateOutputStream::_outStream
	Stream_t1273022909 * ____outStream_6;
	// System.Int32 Pathfinding.Ionic.Zlib.ParallelDeflateOutputStream::_maxBufferPairs
	int32_t ____maxBufferPairs_7;
	// System.Int32 Pathfinding.Ionic.Zlib.ParallelDeflateOutputStream::_bufferSize
	int32_t ____bufferSize_8;
	// System.Threading.AutoResetEvent Pathfinding.Ionic.Zlib.ParallelDeflateOutputStream::_newlyCompressedBlob
	AutoResetEvent_t1333520283 * ____newlyCompressedBlob_9;
	// System.Object Pathfinding.Ionic.Zlib.ParallelDeflateOutputStream::_outputLock
	RuntimeObject * ____outputLock_10;
	// System.Boolean Pathfinding.Ionic.Zlib.ParallelDeflateOutputStream::_isClosed
	bool ____isClosed_11;
	// System.Boolean Pathfinding.Ionic.Zlib.ParallelDeflateOutputStream::_firstWriteDone
	bool ____firstWriteDone_12;
	// System.Int32 Pathfinding.Ionic.Zlib.ParallelDeflateOutputStream::_currentlyFilling
	int32_t ____currentlyFilling_13;
	// System.Int32 Pathfinding.Ionic.Zlib.ParallelDeflateOutputStream::_lastFilled
	int32_t ____lastFilled_14;
	// System.Int32 Pathfinding.Ionic.Zlib.ParallelDeflateOutputStream::_lastWritten
	int32_t ____lastWritten_15;
	// System.Int32 Pathfinding.Ionic.Zlib.ParallelDeflateOutputStream::_latestCompressed
	int32_t ____latestCompressed_16;
	// System.Int32 Pathfinding.Ionic.Zlib.ParallelDeflateOutputStream::_Crc32
	int32_t ____Crc32_17;
	// Pathfinding.Ionic.Crc.CRC32 Pathfinding.Ionic.Zlib.ParallelDeflateOutputStream::_runningCrc
	CRC32_t288211679 * ____runningCrc_18;
	// System.Object Pathfinding.Ionic.Zlib.ParallelDeflateOutputStream::_latestLock
	RuntimeObject * ____latestLock_19;
	// System.Collections.Generic.Queue`1<System.Int32> Pathfinding.Ionic.Zlib.ParallelDeflateOutputStream::_toWrite
	Queue_1_t2797205247 * ____toWrite_20;
	// System.Collections.Generic.Queue`1<System.Int32> Pathfinding.Ionic.Zlib.ParallelDeflateOutputStream::_toFill
	Queue_1_t2797205247 * ____toFill_21;
	// System.Int64 Pathfinding.Ionic.Zlib.ParallelDeflateOutputStream::_totalBytesProcessed
	int64_t ____totalBytesProcessed_22;
	// Pathfinding.Ionic.Zlib.CompressionLevel Pathfinding.Ionic.Zlib.ParallelDeflateOutputStream::_compressLevel
	int32_t ____compressLevel_23;
	// System.Exception modreq(System.Runtime.CompilerServices.IsVolatile) Pathfinding.Ionic.Zlib.ParallelDeflateOutputStream::_pendingException
	Exception_t * ____pendingException_24;
	// System.Boolean Pathfinding.Ionic.Zlib.ParallelDeflateOutputStream::_handlingException
	bool ____handlingException_25;
	// System.Object Pathfinding.Ionic.Zlib.ParallelDeflateOutputStream::_eLock
	RuntimeObject * ____eLock_26;
	// Pathfinding.Ionic.Zlib.ParallelDeflateOutputStream/TraceBits Pathfinding.Ionic.Zlib.ParallelDeflateOutputStream::_DesiredTrace
	uint32_t ____DesiredTrace_27;
	// Pathfinding.Ionic.Zlib.CompressionStrategy Pathfinding.Ionic.Zlib.ParallelDeflateOutputStream::<Strategy>k__BackingField
	int32_t ___U3CStrategyU3Ek__BackingField_28;

public:
	inline static int32_t get_offset_of__pool_3() { return static_cast<int32_t>(offsetof(ParallelDeflateOutputStream_t2527365669, ____pool_3)); }
	inline List_1_t4178125671 * get__pool_3() const { return ____pool_3; }
	inline List_1_t4178125671 ** get_address_of__pool_3() { return &____pool_3; }
	inline void set__pool_3(List_1_t4178125671 * value)
	{
		____pool_3 = value;
		Il2CppCodeGenWriteBarrier((&____pool_3), value);
	}

	inline static int32_t get_offset_of__leaveOpen_4() { return static_cast<int32_t>(offsetof(ParallelDeflateOutputStream_t2527365669, ____leaveOpen_4)); }
	inline bool get__leaveOpen_4() const { return ____leaveOpen_4; }
	inline bool* get_address_of__leaveOpen_4() { return &____leaveOpen_4; }
	inline void set__leaveOpen_4(bool value)
	{
		____leaveOpen_4 = value;
	}

	inline static int32_t get_offset_of_emitting_5() { return static_cast<int32_t>(offsetof(ParallelDeflateOutputStream_t2527365669, ___emitting_5)); }
	inline bool get_emitting_5() const { return ___emitting_5; }
	inline bool* get_address_of_emitting_5() { return &___emitting_5; }
	inline void set_emitting_5(bool value)
	{
		___emitting_5 = value;
	}

	inline static int32_t get_offset_of__outStream_6() { return static_cast<int32_t>(offsetof(ParallelDeflateOutputStream_t2527365669, ____outStream_6)); }
	inline Stream_t1273022909 * get__outStream_6() const { return ____outStream_6; }
	inline Stream_t1273022909 ** get_address_of__outStream_6() { return &____outStream_6; }
	inline void set__outStream_6(Stream_t1273022909 * value)
	{
		____outStream_6 = value;
		Il2CppCodeGenWriteBarrier((&____outStream_6), value);
	}

	inline static int32_t get_offset_of__maxBufferPairs_7() { return static_cast<int32_t>(offsetof(ParallelDeflateOutputStream_t2527365669, ____maxBufferPairs_7)); }
	inline int32_t get__maxBufferPairs_7() const { return ____maxBufferPairs_7; }
	inline int32_t* get_address_of__maxBufferPairs_7() { return &____maxBufferPairs_7; }
	inline void set__maxBufferPairs_7(int32_t value)
	{
		____maxBufferPairs_7 = value;
	}

	inline static int32_t get_offset_of__bufferSize_8() { return static_cast<int32_t>(offsetof(ParallelDeflateOutputStream_t2527365669, ____bufferSize_8)); }
	inline int32_t get__bufferSize_8() const { return ____bufferSize_8; }
	inline int32_t* get_address_of__bufferSize_8() { return &____bufferSize_8; }
	inline void set__bufferSize_8(int32_t value)
	{
		____bufferSize_8 = value;
	}

	inline static int32_t get_offset_of__newlyCompressedBlob_9() { return static_cast<int32_t>(offsetof(ParallelDeflateOutputStream_t2527365669, ____newlyCompressedBlob_9)); }
	inline AutoResetEvent_t1333520283 * get__newlyCompressedBlob_9() const { return ____newlyCompressedBlob_9; }
	inline AutoResetEvent_t1333520283 ** get_address_of__newlyCompressedBlob_9() { return &____newlyCompressedBlob_9; }
	inline void set__newlyCompressedBlob_9(AutoResetEvent_t1333520283 * value)
	{
		____newlyCompressedBlob_9 = value;
		Il2CppCodeGenWriteBarrier((&____newlyCompressedBlob_9), value);
	}

	inline static int32_t get_offset_of__outputLock_10() { return static_cast<int32_t>(offsetof(ParallelDeflateOutputStream_t2527365669, ____outputLock_10)); }
	inline RuntimeObject * get__outputLock_10() const { return ____outputLock_10; }
	inline RuntimeObject ** get_address_of__outputLock_10() { return &____outputLock_10; }
	inline void set__outputLock_10(RuntimeObject * value)
	{
		____outputLock_10 = value;
		Il2CppCodeGenWriteBarrier((&____outputLock_10), value);
	}

	inline static int32_t get_offset_of__isClosed_11() { return static_cast<int32_t>(offsetof(ParallelDeflateOutputStream_t2527365669, ____isClosed_11)); }
	inline bool get__isClosed_11() const { return ____isClosed_11; }
	inline bool* get_address_of__isClosed_11() { return &____isClosed_11; }
	inline void set__isClosed_11(bool value)
	{
		____isClosed_11 = value;
	}

	inline static int32_t get_offset_of__firstWriteDone_12() { return static_cast<int32_t>(offsetof(ParallelDeflateOutputStream_t2527365669, ____firstWriteDone_12)); }
	inline bool get__firstWriteDone_12() const { return ____firstWriteDone_12; }
	inline bool* get_address_of__firstWriteDone_12() { return &____firstWriteDone_12; }
	inline void set__firstWriteDone_12(bool value)
	{
		____firstWriteDone_12 = value;
	}

	inline static int32_t get_offset_of__currentlyFilling_13() { return static_cast<int32_t>(offsetof(ParallelDeflateOutputStream_t2527365669, ____currentlyFilling_13)); }
	inline int32_t get__currentlyFilling_13() const { return ____currentlyFilling_13; }
	inline int32_t* get_address_of__currentlyFilling_13() { return &____currentlyFilling_13; }
	inline void set__currentlyFilling_13(int32_t value)
	{
		____currentlyFilling_13 = value;
	}

	inline static int32_t get_offset_of__lastFilled_14() { return static_cast<int32_t>(offsetof(ParallelDeflateOutputStream_t2527365669, ____lastFilled_14)); }
	inline int32_t get__lastFilled_14() const { return ____lastFilled_14; }
	inline int32_t* get_address_of__lastFilled_14() { return &____lastFilled_14; }
	inline void set__lastFilled_14(int32_t value)
	{
		____lastFilled_14 = value;
	}

	inline static int32_t get_offset_of__lastWritten_15() { return static_cast<int32_t>(offsetof(ParallelDeflateOutputStream_t2527365669, ____lastWritten_15)); }
	inline int32_t get__lastWritten_15() const { return ____lastWritten_15; }
	inline int32_t* get_address_of__lastWritten_15() { return &____lastWritten_15; }
	inline void set__lastWritten_15(int32_t value)
	{
		____lastWritten_15 = value;
	}

	inline static int32_t get_offset_of__latestCompressed_16() { return static_cast<int32_t>(offsetof(ParallelDeflateOutputStream_t2527365669, ____latestCompressed_16)); }
	inline int32_t get__latestCompressed_16() const { return ____latestCompressed_16; }
	inline int32_t* get_address_of__latestCompressed_16() { return &____latestCompressed_16; }
	inline void set__latestCompressed_16(int32_t value)
	{
		____latestCompressed_16 = value;
	}

	inline static int32_t get_offset_of__Crc32_17() { return static_cast<int32_t>(offsetof(ParallelDeflateOutputStream_t2527365669, ____Crc32_17)); }
	inline int32_t get__Crc32_17() const { return ____Crc32_17; }
	inline int32_t* get_address_of__Crc32_17() { return &____Crc32_17; }
	inline void set__Crc32_17(int32_t value)
	{
		____Crc32_17 = value;
	}

	inline static int32_t get_offset_of__runningCrc_18() { return static_cast<int32_t>(offsetof(ParallelDeflateOutputStream_t2527365669, ____runningCrc_18)); }
	inline CRC32_t288211679 * get__runningCrc_18() const { return ____runningCrc_18; }
	inline CRC32_t288211679 ** get_address_of__runningCrc_18() { return &____runningCrc_18; }
	inline void set__runningCrc_18(CRC32_t288211679 * value)
	{
		____runningCrc_18 = value;
		Il2CppCodeGenWriteBarrier((&____runningCrc_18), value);
	}

	inline static int32_t get_offset_of__latestLock_19() { return static_cast<int32_t>(offsetof(ParallelDeflateOutputStream_t2527365669, ____latestLock_19)); }
	inline RuntimeObject * get__latestLock_19() const { return ____latestLock_19; }
	inline RuntimeObject ** get_address_of__latestLock_19() { return &____latestLock_19; }
	inline void set__latestLock_19(RuntimeObject * value)
	{
		____latestLock_19 = value;
		Il2CppCodeGenWriteBarrier((&____latestLock_19), value);
	}

	inline static int32_t get_offset_of__toWrite_20() { return static_cast<int32_t>(offsetof(ParallelDeflateOutputStream_t2527365669, ____toWrite_20)); }
	inline Queue_1_t2797205247 * get__toWrite_20() const { return ____toWrite_20; }
	inline Queue_1_t2797205247 ** get_address_of__toWrite_20() { return &____toWrite_20; }
	inline void set__toWrite_20(Queue_1_t2797205247 * value)
	{
		____toWrite_20 = value;
		Il2CppCodeGenWriteBarrier((&____toWrite_20), value);
	}

	inline static int32_t get_offset_of__toFill_21() { return static_cast<int32_t>(offsetof(ParallelDeflateOutputStream_t2527365669, ____toFill_21)); }
	inline Queue_1_t2797205247 * get__toFill_21() const { return ____toFill_21; }
	inline Queue_1_t2797205247 ** get_address_of__toFill_21() { return &____toFill_21; }
	inline void set__toFill_21(Queue_1_t2797205247 * value)
	{
		____toFill_21 = value;
		Il2CppCodeGenWriteBarrier((&____toFill_21), value);
	}

	inline static int32_t get_offset_of__totalBytesProcessed_22() { return static_cast<int32_t>(offsetof(ParallelDeflateOutputStream_t2527365669, ____totalBytesProcessed_22)); }
	inline int64_t get__totalBytesProcessed_22() const { return ____totalBytesProcessed_22; }
	inline int64_t* get_address_of__totalBytesProcessed_22() { return &____totalBytesProcessed_22; }
	inline void set__totalBytesProcessed_22(int64_t value)
	{
		____totalBytesProcessed_22 = value;
	}

	inline static int32_t get_offset_of__compressLevel_23() { return static_cast<int32_t>(offsetof(ParallelDeflateOutputStream_t2527365669, ____compressLevel_23)); }
	inline int32_t get__compressLevel_23() const { return ____compressLevel_23; }
	inline int32_t* get_address_of__compressLevel_23() { return &____compressLevel_23; }
	inline void set__compressLevel_23(int32_t value)
	{
		____compressLevel_23 = value;
	}

	inline static int32_t get_offset_of__pendingException_24() { return static_cast<int32_t>(offsetof(ParallelDeflateOutputStream_t2527365669, ____pendingException_24)); }
	inline Exception_t * get__pendingException_24() const { return ____pendingException_24; }
	inline Exception_t ** get_address_of__pendingException_24() { return &____pendingException_24; }
	inline void set__pendingException_24(Exception_t * value)
	{
		____pendingException_24 = value;
		Il2CppCodeGenWriteBarrier((&____pendingException_24), value);
	}

	inline static int32_t get_offset_of__handlingException_25() { return static_cast<int32_t>(offsetof(ParallelDeflateOutputStream_t2527365669, ____handlingException_25)); }
	inline bool get__handlingException_25() const { return ____handlingException_25; }
	inline bool* get_address_of__handlingException_25() { return &____handlingException_25; }
	inline void set__handlingException_25(bool value)
	{
		____handlingException_25 = value;
	}

	inline static int32_t get_offset_of__eLock_26() { return static_cast<int32_t>(offsetof(ParallelDeflateOutputStream_t2527365669, ____eLock_26)); }
	inline RuntimeObject * get__eLock_26() const { return ____eLock_26; }
	inline RuntimeObject ** get_address_of__eLock_26() { return &____eLock_26; }
	inline void set__eLock_26(RuntimeObject * value)
	{
		____eLock_26 = value;
		Il2CppCodeGenWriteBarrier((&____eLock_26), value);
	}

	inline static int32_t get_offset_of__DesiredTrace_27() { return static_cast<int32_t>(offsetof(ParallelDeflateOutputStream_t2527365669, ____DesiredTrace_27)); }
	inline uint32_t get__DesiredTrace_27() const { return ____DesiredTrace_27; }
	inline uint32_t* get_address_of__DesiredTrace_27() { return &____DesiredTrace_27; }
	inline void set__DesiredTrace_27(uint32_t value)
	{
		____DesiredTrace_27 = value;
	}

	inline static int32_t get_offset_of_U3CStrategyU3Ek__BackingField_28() { return static_cast<int32_t>(offsetof(ParallelDeflateOutputStream_t2527365669, ___U3CStrategyU3Ek__BackingField_28)); }
	inline int32_t get_U3CStrategyU3Ek__BackingField_28() const { return ___U3CStrategyU3Ek__BackingField_28; }
	inline int32_t* get_address_of_U3CStrategyU3Ek__BackingField_28() { return &___U3CStrategyU3Ek__BackingField_28; }
	inline void set_U3CStrategyU3Ek__BackingField_28(int32_t value)
	{
		___U3CStrategyU3Ek__BackingField_28 = value;
	}
};

struct ParallelDeflateOutputStream_t2527365669_StaticFields
{
public:
	// System.Int32 Pathfinding.Ionic.Zlib.ParallelDeflateOutputStream::IO_BUFFER_SIZE_DEFAULT
	int32_t ___IO_BUFFER_SIZE_DEFAULT_1;
	// System.Int32 Pathfinding.Ionic.Zlib.ParallelDeflateOutputStream::BufferPairsPerCore
	int32_t ___BufferPairsPerCore_2;

public:
	inline static int32_t get_offset_of_IO_BUFFER_SIZE_DEFAULT_1() { return static_cast<int32_t>(offsetof(ParallelDeflateOutputStream_t2527365669_StaticFields, ___IO_BUFFER_SIZE_DEFAULT_1)); }
	inline int32_t get_IO_BUFFER_SIZE_DEFAULT_1() const { return ___IO_BUFFER_SIZE_DEFAULT_1; }
	inline int32_t* get_address_of_IO_BUFFER_SIZE_DEFAULT_1() { return &___IO_BUFFER_SIZE_DEFAULT_1; }
	inline void set_IO_BUFFER_SIZE_DEFAULT_1(int32_t value)
	{
		___IO_BUFFER_SIZE_DEFAULT_1 = value;
	}

	inline static int32_t get_offset_of_BufferPairsPerCore_2() { return static_cast<int32_t>(offsetof(ParallelDeflateOutputStream_t2527365669_StaticFields, ___BufferPairsPerCore_2)); }
	inline int32_t get_BufferPairsPerCore_2() const { return ___BufferPairsPerCore_2; }
	inline int32_t* get_address_of_BufferPairsPerCore_2() { return &___BufferPairsPerCore_2; }
	inline void set_BufferPairsPerCore_2(int32_t value)
	{
		___BufferPairsPerCore_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PARALLELDEFLATEOUTPUTSTREAM_T2527365669_H
#ifndef ZLIBCODEC_T855427629_H
#define ZLIBCODEC_T855427629_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Pathfinding.Ionic.Zlib.ZlibCodec
struct  ZlibCodec_t855427629  : public RuntimeObject
{
public:
	static const Il2CppGuid CLSID;

public:
	// System.Byte[] Pathfinding.Ionic.Zlib.ZlibCodec::InputBuffer
	ByteU5BU5D_t4116647657* ___InputBuffer_0;
	// System.Int32 Pathfinding.Ionic.Zlib.ZlibCodec::NextIn
	int32_t ___NextIn_1;
	// System.Int32 Pathfinding.Ionic.Zlib.ZlibCodec::AvailableBytesIn
	int32_t ___AvailableBytesIn_2;
	// System.Int64 Pathfinding.Ionic.Zlib.ZlibCodec::TotalBytesIn
	int64_t ___TotalBytesIn_3;
	// System.Byte[] Pathfinding.Ionic.Zlib.ZlibCodec::OutputBuffer
	ByteU5BU5D_t4116647657* ___OutputBuffer_4;
	// System.Int32 Pathfinding.Ionic.Zlib.ZlibCodec::NextOut
	int32_t ___NextOut_5;
	// System.Int32 Pathfinding.Ionic.Zlib.ZlibCodec::AvailableBytesOut
	int32_t ___AvailableBytesOut_6;
	// System.Int64 Pathfinding.Ionic.Zlib.ZlibCodec::TotalBytesOut
	int64_t ___TotalBytesOut_7;
	// System.String Pathfinding.Ionic.Zlib.ZlibCodec::Message
	String_t* ___Message_8;
	// Pathfinding.Ionic.Zlib.DeflateManager Pathfinding.Ionic.Zlib.ZlibCodec::dstate
	DeflateManager_t3554793512 * ___dstate_9;
	// Pathfinding.Ionic.Zlib.InflateManager Pathfinding.Ionic.Zlib.ZlibCodec::istate
	InflateManager_t3682621372 * ___istate_10;
	// System.UInt32 Pathfinding.Ionic.Zlib.ZlibCodec::_Adler32
	uint32_t ____Adler32_11;
	// Pathfinding.Ionic.Zlib.CompressionLevel Pathfinding.Ionic.Zlib.ZlibCodec::CompressLevel
	int32_t ___CompressLevel_12;
	// System.Int32 Pathfinding.Ionic.Zlib.ZlibCodec::WindowBits
	int32_t ___WindowBits_13;
	// Pathfinding.Ionic.Zlib.CompressionStrategy Pathfinding.Ionic.Zlib.ZlibCodec::Strategy
	int32_t ___Strategy_14;

public:
	inline static int32_t get_offset_of_InputBuffer_0() { return static_cast<int32_t>(offsetof(ZlibCodec_t855427629, ___InputBuffer_0)); }
	inline ByteU5BU5D_t4116647657* get_InputBuffer_0() const { return ___InputBuffer_0; }
	inline ByteU5BU5D_t4116647657** get_address_of_InputBuffer_0() { return &___InputBuffer_0; }
	inline void set_InputBuffer_0(ByteU5BU5D_t4116647657* value)
	{
		___InputBuffer_0 = value;
		Il2CppCodeGenWriteBarrier((&___InputBuffer_0), value);
	}

	inline static int32_t get_offset_of_NextIn_1() { return static_cast<int32_t>(offsetof(ZlibCodec_t855427629, ___NextIn_1)); }
	inline int32_t get_NextIn_1() const { return ___NextIn_1; }
	inline int32_t* get_address_of_NextIn_1() { return &___NextIn_1; }
	inline void set_NextIn_1(int32_t value)
	{
		___NextIn_1 = value;
	}

	inline static int32_t get_offset_of_AvailableBytesIn_2() { return static_cast<int32_t>(offsetof(ZlibCodec_t855427629, ___AvailableBytesIn_2)); }
	inline int32_t get_AvailableBytesIn_2() const { return ___AvailableBytesIn_2; }
	inline int32_t* get_address_of_AvailableBytesIn_2() { return &___AvailableBytesIn_2; }
	inline void set_AvailableBytesIn_2(int32_t value)
	{
		___AvailableBytesIn_2 = value;
	}

	inline static int32_t get_offset_of_TotalBytesIn_3() { return static_cast<int32_t>(offsetof(ZlibCodec_t855427629, ___TotalBytesIn_3)); }
	inline int64_t get_TotalBytesIn_3() const { return ___TotalBytesIn_3; }
	inline int64_t* get_address_of_TotalBytesIn_3() { return &___TotalBytesIn_3; }
	inline void set_TotalBytesIn_3(int64_t value)
	{
		___TotalBytesIn_3 = value;
	}

	inline static int32_t get_offset_of_OutputBuffer_4() { return static_cast<int32_t>(offsetof(ZlibCodec_t855427629, ___OutputBuffer_4)); }
	inline ByteU5BU5D_t4116647657* get_OutputBuffer_4() const { return ___OutputBuffer_4; }
	inline ByteU5BU5D_t4116647657** get_address_of_OutputBuffer_4() { return &___OutputBuffer_4; }
	inline void set_OutputBuffer_4(ByteU5BU5D_t4116647657* value)
	{
		___OutputBuffer_4 = value;
		Il2CppCodeGenWriteBarrier((&___OutputBuffer_4), value);
	}

	inline static int32_t get_offset_of_NextOut_5() { return static_cast<int32_t>(offsetof(ZlibCodec_t855427629, ___NextOut_5)); }
	inline int32_t get_NextOut_5() const { return ___NextOut_5; }
	inline int32_t* get_address_of_NextOut_5() { return &___NextOut_5; }
	inline void set_NextOut_5(int32_t value)
	{
		___NextOut_5 = value;
	}

	inline static int32_t get_offset_of_AvailableBytesOut_6() { return static_cast<int32_t>(offsetof(ZlibCodec_t855427629, ___AvailableBytesOut_6)); }
	inline int32_t get_AvailableBytesOut_6() const { return ___AvailableBytesOut_6; }
	inline int32_t* get_address_of_AvailableBytesOut_6() { return &___AvailableBytesOut_6; }
	inline void set_AvailableBytesOut_6(int32_t value)
	{
		___AvailableBytesOut_6 = value;
	}

	inline static int32_t get_offset_of_TotalBytesOut_7() { return static_cast<int32_t>(offsetof(ZlibCodec_t855427629, ___TotalBytesOut_7)); }
	inline int64_t get_TotalBytesOut_7() const { return ___TotalBytesOut_7; }
	inline int64_t* get_address_of_TotalBytesOut_7() { return &___TotalBytesOut_7; }
	inline void set_TotalBytesOut_7(int64_t value)
	{
		___TotalBytesOut_7 = value;
	}

	inline static int32_t get_offset_of_Message_8() { return static_cast<int32_t>(offsetof(ZlibCodec_t855427629, ___Message_8)); }
	inline String_t* get_Message_8() const { return ___Message_8; }
	inline String_t** get_address_of_Message_8() { return &___Message_8; }
	inline void set_Message_8(String_t* value)
	{
		___Message_8 = value;
		Il2CppCodeGenWriteBarrier((&___Message_8), value);
	}

	inline static int32_t get_offset_of_dstate_9() { return static_cast<int32_t>(offsetof(ZlibCodec_t855427629, ___dstate_9)); }
	inline DeflateManager_t3554793512 * get_dstate_9() const { return ___dstate_9; }
	inline DeflateManager_t3554793512 ** get_address_of_dstate_9() { return &___dstate_9; }
	inline void set_dstate_9(DeflateManager_t3554793512 * value)
	{
		___dstate_9 = value;
		Il2CppCodeGenWriteBarrier((&___dstate_9), value);
	}

	inline static int32_t get_offset_of_istate_10() { return static_cast<int32_t>(offsetof(ZlibCodec_t855427629, ___istate_10)); }
	inline InflateManager_t3682621372 * get_istate_10() const { return ___istate_10; }
	inline InflateManager_t3682621372 ** get_address_of_istate_10() { return &___istate_10; }
	inline void set_istate_10(InflateManager_t3682621372 * value)
	{
		___istate_10 = value;
		Il2CppCodeGenWriteBarrier((&___istate_10), value);
	}

	inline static int32_t get_offset_of__Adler32_11() { return static_cast<int32_t>(offsetof(ZlibCodec_t855427629, ____Adler32_11)); }
	inline uint32_t get__Adler32_11() const { return ____Adler32_11; }
	inline uint32_t* get_address_of__Adler32_11() { return &____Adler32_11; }
	inline void set__Adler32_11(uint32_t value)
	{
		____Adler32_11 = value;
	}

	inline static int32_t get_offset_of_CompressLevel_12() { return static_cast<int32_t>(offsetof(ZlibCodec_t855427629, ___CompressLevel_12)); }
	inline int32_t get_CompressLevel_12() const { return ___CompressLevel_12; }
	inline int32_t* get_address_of_CompressLevel_12() { return &___CompressLevel_12; }
	inline void set_CompressLevel_12(int32_t value)
	{
		___CompressLevel_12 = value;
	}

	inline static int32_t get_offset_of_WindowBits_13() { return static_cast<int32_t>(offsetof(ZlibCodec_t855427629, ___WindowBits_13)); }
	inline int32_t get_WindowBits_13() const { return ___WindowBits_13; }
	inline int32_t* get_address_of_WindowBits_13() { return &___WindowBits_13; }
	inline void set_WindowBits_13(int32_t value)
	{
		___WindowBits_13 = value;
	}

	inline static int32_t get_offset_of_Strategy_14() { return static_cast<int32_t>(offsetof(ZlibCodec_t855427629, ___Strategy_14)); }
	inline int32_t get_Strategy_14() const { return ___Strategy_14; }
	inline int32_t* get_address_of_Strategy_14() { return &___Strategy_14; }
	inline void set_Strategy_14(int32_t value)
	{
		___Strategy_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ZLIBCODEC_T855427629_H
#ifndef ARGUMENTNULLEXCEPTION_T1615371798_H
#define ARGUMENTNULLEXCEPTION_T1615371798_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ArgumentNullException
struct  ArgumentNullException_t1615371798  : public ArgumentException_t132251570
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARGUMENTNULLEXCEPTION_T1615371798_H
#ifndef ARGUMENTOUTOFRANGEEXCEPTION_T777629997_H
#define ARGUMENTOUTOFRANGEEXCEPTION_T777629997_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ArgumentOutOfRangeException
struct  ArgumentOutOfRangeException_t777629997  : public ArgumentException_t132251570
{
public:
	// System.Object System.ArgumentOutOfRangeException::actual_value
	RuntimeObject * ___actual_value_13;

public:
	inline static int32_t get_offset_of_actual_value_13() { return static_cast<int32_t>(offsetof(ArgumentOutOfRangeException_t777629997, ___actual_value_13)); }
	inline RuntimeObject * get_actual_value_13() const { return ___actual_value_13; }
	inline RuntimeObject ** get_address_of_actual_value_13() { return &___actual_value_13; }
	inline void set_actual_value_13(RuntimeObject * value)
	{
		___actual_value_13 = value;
		Il2CppCodeGenWriteBarrier((&___actual_value_13), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARGUMENTOUTOFRANGEEXCEPTION_T777629997_H
#ifndef DATETIME_T3738529785_H
#define DATETIME_T3738529785_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DateTime
struct  DateTime_t3738529785 
{
public:
	// System.TimeSpan System.DateTime::ticks
	TimeSpan_t881159249  ___ticks_10;
	// System.DateTimeKind System.DateTime::kind
	int32_t ___kind_11;

public:
	inline static int32_t get_offset_of_ticks_10() { return static_cast<int32_t>(offsetof(DateTime_t3738529785, ___ticks_10)); }
	inline TimeSpan_t881159249  get_ticks_10() const { return ___ticks_10; }
	inline TimeSpan_t881159249 * get_address_of_ticks_10() { return &___ticks_10; }
	inline void set_ticks_10(TimeSpan_t881159249  value)
	{
		___ticks_10 = value;
	}

	inline static int32_t get_offset_of_kind_11() { return static_cast<int32_t>(offsetof(DateTime_t3738529785, ___kind_11)); }
	inline int32_t get_kind_11() const { return ___kind_11; }
	inline int32_t* get_address_of_kind_11() { return &___kind_11; }
	inline void set_kind_11(int32_t value)
	{
		___kind_11 = value;
	}
};

struct DateTime_t3738529785_StaticFields
{
public:
	// System.DateTime System.DateTime::MaxValue
	DateTime_t3738529785  ___MaxValue_12;
	// System.DateTime System.DateTime::MinValue
	DateTime_t3738529785  ___MinValue_13;
	// System.String[] System.DateTime::ParseTimeFormats
	StringU5BU5D_t1281789340* ___ParseTimeFormats_14;
	// System.String[] System.DateTime::ParseYearDayMonthFormats
	StringU5BU5D_t1281789340* ___ParseYearDayMonthFormats_15;
	// System.String[] System.DateTime::ParseYearMonthDayFormats
	StringU5BU5D_t1281789340* ___ParseYearMonthDayFormats_16;
	// System.String[] System.DateTime::ParseDayMonthYearFormats
	StringU5BU5D_t1281789340* ___ParseDayMonthYearFormats_17;
	// System.String[] System.DateTime::ParseMonthDayYearFormats
	StringU5BU5D_t1281789340* ___ParseMonthDayYearFormats_18;
	// System.String[] System.DateTime::MonthDayShortFormats
	StringU5BU5D_t1281789340* ___MonthDayShortFormats_19;
	// System.String[] System.DateTime::DayMonthShortFormats
	StringU5BU5D_t1281789340* ___DayMonthShortFormats_20;
	// System.Int32[] System.DateTime::daysmonth
	Int32U5BU5D_t385246372* ___daysmonth_21;
	// System.Int32[] System.DateTime::daysmonthleap
	Int32U5BU5D_t385246372* ___daysmonthleap_22;
	// System.Object System.DateTime::to_local_time_span_object
	RuntimeObject * ___to_local_time_span_object_23;
	// System.Int64 System.DateTime::last_now
	int64_t ___last_now_24;

public:
	inline static int32_t get_offset_of_MaxValue_12() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___MaxValue_12)); }
	inline DateTime_t3738529785  get_MaxValue_12() const { return ___MaxValue_12; }
	inline DateTime_t3738529785 * get_address_of_MaxValue_12() { return &___MaxValue_12; }
	inline void set_MaxValue_12(DateTime_t3738529785  value)
	{
		___MaxValue_12 = value;
	}

	inline static int32_t get_offset_of_MinValue_13() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___MinValue_13)); }
	inline DateTime_t3738529785  get_MinValue_13() const { return ___MinValue_13; }
	inline DateTime_t3738529785 * get_address_of_MinValue_13() { return &___MinValue_13; }
	inline void set_MinValue_13(DateTime_t3738529785  value)
	{
		___MinValue_13 = value;
	}

	inline static int32_t get_offset_of_ParseTimeFormats_14() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___ParseTimeFormats_14)); }
	inline StringU5BU5D_t1281789340* get_ParseTimeFormats_14() const { return ___ParseTimeFormats_14; }
	inline StringU5BU5D_t1281789340** get_address_of_ParseTimeFormats_14() { return &___ParseTimeFormats_14; }
	inline void set_ParseTimeFormats_14(StringU5BU5D_t1281789340* value)
	{
		___ParseTimeFormats_14 = value;
		Il2CppCodeGenWriteBarrier((&___ParseTimeFormats_14), value);
	}

	inline static int32_t get_offset_of_ParseYearDayMonthFormats_15() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___ParseYearDayMonthFormats_15)); }
	inline StringU5BU5D_t1281789340* get_ParseYearDayMonthFormats_15() const { return ___ParseYearDayMonthFormats_15; }
	inline StringU5BU5D_t1281789340** get_address_of_ParseYearDayMonthFormats_15() { return &___ParseYearDayMonthFormats_15; }
	inline void set_ParseYearDayMonthFormats_15(StringU5BU5D_t1281789340* value)
	{
		___ParseYearDayMonthFormats_15 = value;
		Il2CppCodeGenWriteBarrier((&___ParseYearDayMonthFormats_15), value);
	}

	inline static int32_t get_offset_of_ParseYearMonthDayFormats_16() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___ParseYearMonthDayFormats_16)); }
	inline StringU5BU5D_t1281789340* get_ParseYearMonthDayFormats_16() const { return ___ParseYearMonthDayFormats_16; }
	inline StringU5BU5D_t1281789340** get_address_of_ParseYearMonthDayFormats_16() { return &___ParseYearMonthDayFormats_16; }
	inline void set_ParseYearMonthDayFormats_16(StringU5BU5D_t1281789340* value)
	{
		___ParseYearMonthDayFormats_16 = value;
		Il2CppCodeGenWriteBarrier((&___ParseYearMonthDayFormats_16), value);
	}

	inline static int32_t get_offset_of_ParseDayMonthYearFormats_17() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___ParseDayMonthYearFormats_17)); }
	inline StringU5BU5D_t1281789340* get_ParseDayMonthYearFormats_17() const { return ___ParseDayMonthYearFormats_17; }
	inline StringU5BU5D_t1281789340** get_address_of_ParseDayMonthYearFormats_17() { return &___ParseDayMonthYearFormats_17; }
	inline void set_ParseDayMonthYearFormats_17(StringU5BU5D_t1281789340* value)
	{
		___ParseDayMonthYearFormats_17 = value;
		Il2CppCodeGenWriteBarrier((&___ParseDayMonthYearFormats_17), value);
	}

	inline static int32_t get_offset_of_ParseMonthDayYearFormats_18() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___ParseMonthDayYearFormats_18)); }
	inline StringU5BU5D_t1281789340* get_ParseMonthDayYearFormats_18() const { return ___ParseMonthDayYearFormats_18; }
	inline StringU5BU5D_t1281789340** get_address_of_ParseMonthDayYearFormats_18() { return &___ParseMonthDayYearFormats_18; }
	inline void set_ParseMonthDayYearFormats_18(StringU5BU5D_t1281789340* value)
	{
		___ParseMonthDayYearFormats_18 = value;
		Il2CppCodeGenWriteBarrier((&___ParseMonthDayYearFormats_18), value);
	}

	inline static int32_t get_offset_of_MonthDayShortFormats_19() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___MonthDayShortFormats_19)); }
	inline StringU5BU5D_t1281789340* get_MonthDayShortFormats_19() const { return ___MonthDayShortFormats_19; }
	inline StringU5BU5D_t1281789340** get_address_of_MonthDayShortFormats_19() { return &___MonthDayShortFormats_19; }
	inline void set_MonthDayShortFormats_19(StringU5BU5D_t1281789340* value)
	{
		___MonthDayShortFormats_19 = value;
		Il2CppCodeGenWriteBarrier((&___MonthDayShortFormats_19), value);
	}

	inline static int32_t get_offset_of_DayMonthShortFormats_20() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___DayMonthShortFormats_20)); }
	inline StringU5BU5D_t1281789340* get_DayMonthShortFormats_20() const { return ___DayMonthShortFormats_20; }
	inline StringU5BU5D_t1281789340** get_address_of_DayMonthShortFormats_20() { return &___DayMonthShortFormats_20; }
	inline void set_DayMonthShortFormats_20(StringU5BU5D_t1281789340* value)
	{
		___DayMonthShortFormats_20 = value;
		Il2CppCodeGenWriteBarrier((&___DayMonthShortFormats_20), value);
	}

	inline static int32_t get_offset_of_daysmonth_21() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___daysmonth_21)); }
	inline Int32U5BU5D_t385246372* get_daysmonth_21() const { return ___daysmonth_21; }
	inline Int32U5BU5D_t385246372** get_address_of_daysmonth_21() { return &___daysmonth_21; }
	inline void set_daysmonth_21(Int32U5BU5D_t385246372* value)
	{
		___daysmonth_21 = value;
		Il2CppCodeGenWriteBarrier((&___daysmonth_21), value);
	}

	inline static int32_t get_offset_of_daysmonthleap_22() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___daysmonthleap_22)); }
	inline Int32U5BU5D_t385246372* get_daysmonthleap_22() const { return ___daysmonthleap_22; }
	inline Int32U5BU5D_t385246372** get_address_of_daysmonthleap_22() { return &___daysmonthleap_22; }
	inline void set_daysmonthleap_22(Int32U5BU5D_t385246372* value)
	{
		___daysmonthleap_22 = value;
		Il2CppCodeGenWriteBarrier((&___daysmonthleap_22), value);
	}

	inline static int32_t get_offset_of_to_local_time_span_object_23() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___to_local_time_span_object_23)); }
	inline RuntimeObject * get_to_local_time_span_object_23() const { return ___to_local_time_span_object_23; }
	inline RuntimeObject ** get_address_of_to_local_time_span_object_23() { return &___to_local_time_span_object_23; }
	inline void set_to_local_time_span_object_23(RuntimeObject * value)
	{
		___to_local_time_span_object_23 = value;
		Il2CppCodeGenWriteBarrier((&___to_local_time_span_object_23), value);
	}

	inline static int32_t get_offset_of_last_now_24() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___last_now_24)); }
	inline int64_t get_last_now_24() const { return ___last_now_24; }
	inline int64_t* get_address_of_last_now_24() { return &___last_now_24; }
	inline void set_last_now_24(int64_t value)
	{
		___last_now_24 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATETIME_T3738529785_H
#ifndef MULTICASTDELEGATE_T_H
#define MULTICASTDELEGATE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t1188392813
{
public:
	// System.MulticastDelegate System.MulticastDelegate::prev
	MulticastDelegate_t * ___prev_9;
	// System.MulticastDelegate System.MulticastDelegate::kpm_next
	MulticastDelegate_t * ___kpm_next_10;

public:
	inline static int32_t get_offset_of_prev_9() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___prev_9)); }
	inline MulticastDelegate_t * get_prev_9() const { return ___prev_9; }
	inline MulticastDelegate_t ** get_address_of_prev_9() { return &___prev_9; }
	inline void set_prev_9(MulticastDelegate_t * value)
	{
		___prev_9 = value;
		Il2CppCodeGenWriteBarrier((&___prev_9), value);
	}

	inline static int32_t get_offset_of_kpm_next_10() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___kpm_next_10)); }
	inline MulticastDelegate_t * get_kpm_next_10() const { return ___kpm_next_10; }
	inline MulticastDelegate_t ** get_address_of_kpm_next_10() { return &___kpm_next_10; }
	inline void set_kpm_next_10(MulticastDelegate_t * value)
	{
		___kpm_next_10 = value;
		Il2CppCodeGenWriteBarrier((&___kpm_next_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MULTICASTDELEGATE_T_H
#ifndef OBJECTDISPOSEDEXCEPTION_T21392786_H
#define OBJECTDISPOSEDEXCEPTION_T21392786_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ObjectDisposedException
struct  ObjectDisposedException_t21392786  : public InvalidOperationException_t56020091
{
public:
	// System.String System.ObjectDisposedException::obj_name
	String_t* ___obj_name_12;
	// System.String System.ObjectDisposedException::msg
	String_t* ___msg_13;

public:
	inline static int32_t get_offset_of_obj_name_12() { return static_cast<int32_t>(offsetof(ObjectDisposedException_t21392786, ___obj_name_12)); }
	inline String_t* get_obj_name_12() const { return ___obj_name_12; }
	inline String_t** get_address_of_obj_name_12() { return &___obj_name_12; }
	inline void set_obj_name_12(String_t* value)
	{
		___obj_name_12 = value;
		Il2CppCodeGenWriteBarrier((&___obj_name_12), value);
	}

	inline static int32_t get_offset_of_msg_13() { return static_cast<int32_t>(offsetof(ObjectDisposedException_t21392786, ___msg_13)); }
	inline String_t* get_msg_13() const { return ___msg_13; }
	inline String_t** get_address_of_msg_13() { return &___msg_13; }
	inline void set_msg_13(String_t* value)
	{
		___msg_13 = value;
		Il2CppCodeGenWriteBarrier((&___msg_13), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OBJECTDISPOSEDEXCEPTION_T21392786_H
#ifndef EVENTWAITHANDLE_T777845177_H
#define EVENTWAITHANDLE_T777845177_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.EventWaitHandle
struct  EventWaitHandle_t777845177  : public WaitHandle_t1743403487
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTWAITHANDLE_T777845177_H
#ifndef COMPRESSFUNC_T2219633776_H
#define COMPRESSFUNC_T2219633776_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Pathfinding.Ionic.Zlib.DeflateManager/CompressFunc
struct  CompressFunc_t2219633776  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPRESSFUNC_T2219633776_H
#ifndef ZLIBBASESTREAM_T3561210688_H
#define ZLIBBASESTREAM_T3561210688_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Pathfinding.Ionic.Zlib.ZlibBaseStream
struct  ZlibBaseStream_t3561210688  : public Stream_t1273022909
{
public:
	// Pathfinding.Ionic.Zlib.ZlibCodec Pathfinding.Ionic.Zlib.ZlibBaseStream::_z
	ZlibCodec_t855427629 * ____z_1;
	// Pathfinding.Ionic.Zlib.ZlibBaseStream/StreamMode Pathfinding.Ionic.Zlib.ZlibBaseStream::_streamMode
	int32_t ____streamMode_2;
	// Pathfinding.Ionic.Zlib.FlushType Pathfinding.Ionic.Zlib.ZlibBaseStream::_flushMode
	int32_t ____flushMode_3;
	// Pathfinding.Ionic.Zlib.ZlibStreamFlavor Pathfinding.Ionic.Zlib.ZlibBaseStream::_flavor
	int32_t ____flavor_4;
	// Pathfinding.Ionic.Zlib.CompressionMode Pathfinding.Ionic.Zlib.ZlibBaseStream::_compressionMode
	int32_t ____compressionMode_5;
	// Pathfinding.Ionic.Zlib.CompressionLevel Pathfinding.Ionic.Zlib.ZlibBaseStream::_level
	int32_t ____level_6;
	// System.Boolean Pathfinding.Ionic.Zlib.ZlibBaseStream::_leaveOpen
	bool ____leaveOpen_7;
	// System.Byte[] Pathfinding.Ionic.Zlib.ZlibBaseStream::_workingBuffer
	ByteU5BU5D_t4116647657* ____workingBuffer_8;
	// System.Int32 Pathfinding.Ionic.Zlib.ZlibBaseStream::_bufferSize
	int32_t ____bufferSize_9;
	// System.Byte[] Pathfinding.Ionic.Zlib.ZlibBaseStream::_buf1
	ByteU5BU5D_t4116647657* ____buf1_10;
	// System.IO.Stream Pathfinding.Ionic.Zlib.ZlibBaseStream::_stream
	Stream_t1273022909 * ____stream_11;
	// Pathfinding.Ionic.Zlib.CompressionStrategy Pathfinding.Ionic.Zlib.ZlibBaseStream::Strategy
	int32_t ___Strategy_12;
	// Pathfinding.Ionic.Crc.CRC32 Pathfinding.Ionic.Zlib.ZlibBaseStream::crc
	CRC32_t288211679 * ___crc_13;
	// System.String Pathfinding.Ionic.Zlib.ZlibBaseStream::_GzipFileName
	String_t* ____GzipFileName_14;
	// System.String Pathfinding.Ionic.Zlib.ZlibBaseStream::_GzipComment
	String_t* ____GzipComment_15;
	// System.DateTime Pathfinding.Ionic.Zlib.ZlibBaseStream::_GzipMtime
	DateTime_t3738529785  ____GzipMtime_16;
	// System.Int32 Pathfinding.Ionic.Zlib.ZlibBaseStream::_gzipHeaderByteCount
	int32_t ____gzipHeaderByteCount_17;
	// System.Boolean Pathfinding.Ionic.Zlib.ZlibBaseStream::nomoreinput
	bool ___nomoreinput_18;

public:
	inline static int32_t get_offset_of__z_1() { return static_cast<int32_t>(offsetof(ZlibBaseStream_t3561210688, ____z_1)); }
	inline ZlibCodec_t855427629 * get__z_1() const { return ____z_1; }
	inline ZlibCodec_t855427629 ** get_address_of__z_1() { return &____z_1; }
	inline void set__z_1(ZlibCodec_t855427629 * value)
	{
		____z_1 = value;
		Il2CppCodeGenWriteBarrier((&____z_1), value);
	}

	inline static int32_t get_offset_of__streamMode_2() { return static_cast<int32_t>(offsetof(ZlibBaseStream_t3561210688, ____streamMode_2)); }
	inline int32_t get__streamMode_2() const { return ____streamMode_2; }
	inline int32_t* get_address_of__streamMode_2() { return &____streamMode_2; }
	inline void set__streamMode_2(int32_t value)
	{
		____streamMode_2 = value;
	}

	inline static int32_t get_offset_of__flushMode_3() { return static_cast<int32_t>(offsetof(ZlibBaseStream_t3561210688, ____flushMode_3)); }
	inline int32_t get__flushMode_3() const { return ____flushMode_3; }
	inline int32_t* get_address_of__flushMode_3() { return &____flushMode_3; }
	inline void set__flushMode_3(int32_t value)
	{
		____flushMode_3 = value;
	}

	inline static int32_t get_offset_of__flavor_4() { return static_cast<int32_t>(offsetof(ZlibBaseStream_t3561210688, ____flavor_4)); }
	inline int32_t get__flavor_4() const { return ____flavor_4; }
	inline int32_t* get_address_of__flavor_4() { return &____flavor_4; }
	inline void set__flavor_4(int32_t value)
	{
		____flavor_4 = value;
	}

	inline static int32_t get_offset_of__compressionMode_5() { return static_cast<int32_t>(offsetof(ZlibBaseStream_t3561210688, ____compressionMode_5)); }
	inline int32_t get__compressionMode_5() const { return ____compressionMode_5; }
	inline int32_t* get_address_of__compressionMode_5() { return &____compressionMode_5; }
	inline void set__compressionMode_5(int32_t value)
	{
		____compressionMode_5 = value;
	}

	inline static int32_t get_offset_of__level_6() { return static_cast<int32_t>(offsetof(ZlibBaseStream_t3561210688, ____level_6)); }
	inline int32_t get__level_6() const { return ____level_6; }
	inline int32_t* get_address_of__level_6() { return &____level_6; }
	inline void set__level_6(int32_t value)
	{
		____level_6 = value;
	}

	inline static int32_t get_offset_of__leaveOpen_7() { return static_cast<int32_t>(offsetof(ZlibBaseStream_t3561210688, ____leaveOpen_7)); }
	inline bool get__leaveOpen_7() const { return ____leaveOpen_7; }
	inline bool* get_address_of__leaveOpen_7() { return &____leaveOpen_7; }
	inline void set__leaveOpen_7(bool value)
	{
		____leaveOpen_7 = value;
	}

	inline static int32_t get_offset_of__workingBuffer_8() { return static_cast<int32_t>(offsetof(ZlibBaseStream_t3561210688, ____workingBuffer_8)); }
	inline ByteU5BU5D_t4116647657* get__workingBuffer_8() const { return ____workingBuffer_8; }
	inline ByteU5BU5D_t4116647657** get_address_of__workingBuffer_8() { return &____workingBuffer_8; }
	inline void set__workingBuffer_8(ByteU5BU5D_t4116647657* value)
	{
		____workingBuffer_8 = value;
		Il2CppCodeGenWriteBarrier((&____workingBuffer_8), value);
	}

	inline static int32_t get_offset_of__bufferSize_9() { return static_cast<int32_t>(offsetof(ZlibBaseStream_t3561210688, ____bufferSize_9)); }
	inline int32_t get__bufferSize_9() const { return ____bufferSize_9; }
	inline int32_t* get_address_of__bufferSize_9() { return &____bufferSize_9; }
	inline void set__bufferSize_9(int32_t value)
	{
		____bufferSize_9 = value;
	}

	inline static int32_t get_offset_of__buf1_10() { return static_cast<int32_t>(offsetof(ZlibBaseStream_t3561210688, ____buf1_10)); }
	inline ByteU5BU5D_t4116647657* get__buf1_10() const { return ____buf1_10; }
	inline ByteU5BU5D_t4116647657** get_address_of__buf1_10() { return &____buf1_10; }
	inline void set__buf1_10(ByteU5BU5D_t4116647657* value)
	{
		____buf1_10 = value;
		Il2CppCodeGenWriteBarrier((&____buf1_10), value);
	}

	inline static int32_t get_offset_of__stream_11() { return static_cast<int32_t>(offsetof(ZlibBaseStream_t3561210688, ____stream_11)); }
	inline Stream_t1273022909 * get__stream_11() const { return ____stream_11; }
	inline Stream_t1273022909 ** get_address_of__stream_11() { return &____stream_11; }
	inline void set__stream_11(Stream_t1273022909 * value)
	{
		____stream_11 = value;
		Il2CppCodeGenWriteBarrier((&____stream_11), value);
	}

	inline static int32_t get_offset_of_Strategy_12() { return static_cast<int32_t>(offsetof(ZlibBaseStream_t3561210688, ___Strategy_12)); }
	inline int32_t get_Strategy_12() const { return ___Strategy_12; }
	inline int32_t* get_address_of_Strategy_12() { return &___Strategy_12; }
	inline void set_Strategy_12(int32_t value)
	{
		___Strategy_12 = value;
	}

	inline static int32_t get_offset_of_crc_13() { return static_cast<int32_t>(offsetof(ZlibBaseStream_t3561210688, ___crc_13)); }
	inline CRC32_t288211679 * get_crc_13() const { return ___crc_13; }
	inline CRC32_t288211679 ** get_address_of_crc_13() { return &___crc_13; }
	inline void set_crc_13(CRC32_t288211679 * value)
	{
		___crc_13 = value;
		Il2CppCodeGenWriteBarrier((&___crc_13), value);
	}

	inline static int32_t get_offset_of__GzipFileName_14() { return static_cast<int32_t>(offsetof(ZlibBaseStream_t3561210688, ____GzipFileName_14)); }
	inline String_t* get__GzipFileName_14() const { return ____GzipFileName_14; }
	inline String_t** get_address_of__GzipFileName_14() { return &____GzipFileName_14; }
	inline void set__GzipFileName_14(String_t* value)
	{
		____GzipFileName_14 = value;
		Il2CppCodeGenWriteBarrier((&____GzipFileName_14), value);
	}

	inline static int32_t get_offset_of__GzipComment_15() { return static_cast<int32_t>(offsetof(ZlibBaseStream_t3561210688, ____GzipComment_15)); }
	inline String_t* get__GzipComment_15() const { return ____GzipComment_15; }
	inline String_t** get_address_of__GzipComment_15() { return &____GzipComment_15; }
	inline void set__GzipComment_15(String_t* value)
	{
		____GzipComment_15 = value;
		Il2CppCodeGenWriteBarrier((&____GzipComment_15), value);
	}

	inline static int32_t get_offset_of__GzipMtime_16() { return static_cast<int32_t>(offsetof(ZlibBaseStream_t3561210688, ____GzipMtime_16)); }
	inline DateTime_t3738529785  get__GzipMtime_16() const { return ____GzipMtime_16; }
	inline DateTime_t3738529785 * get_address_of__GzipMtime_16() { return &____GzipMtime_16; }
	inline void set__GzipMtime_16(DateTime_t3738529785  value)
	{
		____GzipMtime_16 = value;
	}

	inline static int32_t get_offset_of__gzipHeaderByteCount_17() { return static_cast<int32_t>(offsetof(ZlibBaseStream_t3561210688, ____gzipHeaderByteCount_17)); }
	inline int32_t get__gzipHeaderByteCount_17() const { return ____gzipHeaderByteCount_17; }
	inline int32_t* get_address_of__gzipHeaderByteCount_17() { return &____gzipHeaderByteCount_17; }
	inline void set__gzipHeaderByteCount_17(int32_t value)
	{
		____gzipHeaderByteCount_17 = value;
	}

	inline static int32_t get_offset_of_nomoreinput_18() { return static_cast<int32_t>(offsetof(ZlibBaseStream_t3561210688, ___nomoreinput_18)); }
	inline bool get_nomoreinput_18() const { return ___nomoreinput_18; }
	inline bool* get_address_of_nomoreinput_18() { return &___nomoreinput_18; }
	inline void set_nomoreinput_18(bool value)
	{
		___nomoreinput_18 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ZLIBBASESTREAM_T3561210688_H
#ifndef ASYNCCALLBACK_T3962456242_H
#define ASYNCCALLBACK_T3962456242_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.AsyncCallback
struct  AsyncCallback_t3962456242  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASYNCCALLBACK_T3962456242_H
#ifndef NULLABLE_1_T1166124571_H
#define NULLABLE_1_T1166124571_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Nullable`1<System.DateTime>
struct  Nullable_1_t1166124571 
{
public:
	// T System.Nullable`1::value
	DateTime_t3738529785  ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t1166124571, ___value_0)); }
	inline DateTime_t3738529785  get_value_0() const { return ___value_0; }
	inline DateTime_t3738529785 * get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(DateTime_t3738529785  value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t1166124571, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NULLABLE_1_T1166124571_H
#ifndef AUTORESETEVENT_T1333520283_H
#define AUTORESETEVENT_T1333520283_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.AutoResetEvent
struct  AutoResetEvent_t1333520283  : public EventWaitHandle_t777845177
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUTORESETEVENT_T1333520283_H
#ifndef WAITCALLBACK_T2448485498_H
#define WAITCALLBACK_T2448485498_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.WaitCallback
struct  WaitCallback_t2448485498  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WAITCALLBACK_T2448485498_H
#ifndef GZIPSTREAM_T4208907177_H
#define GZIPSTREAM_T4208907177_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Pathfinding.Ionic.Zlib.GZipStream
struct  GZipStream_t4208907177  : public Stream_t1273022909
{
public:
	// System.Nullable`1<System.DateTime> Pathfinding.Ionic.Zlib.GZipStream::LastModified
	Nullable_1_t1166124571  ___LastModified_1;
	// System.Int32 Pathfinding.Ionic.Zlib.GZipStream::_headerByteCount
	int32_t ____headerByteCount_2;
	// Pathfinding.Ionic.Zlib.ZlibBaseStream Pathfinding.Ionic.Zlib.GZipStream::_baseStream
	ZlibBaseStream_t3561210688 * ____baseStream_3;
	// System.Boolean Pathfinding.Ionic.Zlib.GZipStream::_disposed
	bool ____disposed_4;
	// System.Boolean Pathfinding.Ionic.Zlib.GZipStream::_firstReadDone
	bool ____firstReadDone_5;
	// System.String Pathfinding.Ionic.Zlib.GZipStream::_FileName
	String_t* ____FileName_6;
	// System.String Pathfinding.Ionic.Zlib.GZipStream::_Comment
	String_t* ____Comment_7;
	// System.Int32 Pathfinding.Ionic.Zlib.GZipStream::_Crc32
	int32_t ____Crc32_8;

public:
	inline static int32_t get_offset_of_LastModified_1() { return static_cast<int32_t>(offsetof(GZipStream_t4208907177, ___LastModified_1)); }
	inline Nullable_1_t1166124571  get_LastModified_1() const { return ___LastModified_1; }
	inline Nullable_1_t1166124571 * get_address_of_LastModified_1() { return &___LastModified_1; }
	inline void set_LastModified_1(Nullable_1_t1166124571  value)
	{
		___LastModified_1 = value;
	}

	inline static int32_t get_offset_of__headerByteCount_2() { return static_cast<int32_t>(offsetof(GZipStream_t4208907177, ____headerByteCount_2)); }
	inline int32_t get__headerByteCount_2() const { return ____headerByteCount_2; }
	inline int32_t* get_address_of__headerByteCount_2() { return &____headerByteCount_2; }
	inline void set__headerByteCount_2(int32_t value)
	{
		____headerByteCount_2 = value;
	}

	inline static int32_t get_offset_of__baseStream_3() { return static_cast<int32_t>(offsetof(GZipStream_t4208907177, ____baseStream_3)); }
	inline ZlibBaseStream_t3561210688 * get__baseStream_3() const { return ____baseStream_3; }
	inline ZlibBaseStream_t3561210688 ** get_address_of__baseStream_3() { return &____baseStream_3; }
	inline void set__baseStream_3(ZlibBaseStream_t3561210688 * value)
	{
		____baseStream_3 = value;
		Il2CppCodeGenWriteBarrier((&____baseStream_3), value);
	}

	inline static int32_t get_offset_of__disposed_4() { return static_cast<int32_t>(offsetof(GZipStream_t4208907177, ____disposed_4)); }
	inline bool get__disposed_4() const { return ____disposed_4; }
	inline bool* get_address_of__disposed_4() { return &____disposed_4; }
	inline void set__disposed_4(bool value)
	{
		____disposed_4 = value;
	}

	inline static int32_t get_offset_of__firstReadDone_5() { return static_cast<int32_t>(offsetof(GZipStream_t4208907177, ____firstReadDone_5)); }
	inline bool get__firstReadDone_5() const { return ____firstReadDone_5; }
	inline bool* get_address_of__firstReadDone_5() { return &____firstReadDone_5; }
	inline void set__firstReadDone_5(bool value)
	{
		____firstReadDone_5 = value;
	}

	inline static int32_t get_offset_of__FileName_6() { return static_cast<int32_t>(offsetof(GZipStream_t4208907177, ____FileName_6)); }
	inline String_t* get__FileName_6() const { return ____FileName_6; }
	inline String_t** get_address_of__FileName_6() { return &____FileName_6; }
	inline void set__FileName_6(String_t* value)
	{
		____FileName_6 = value;
		Il2CppCodeGenWriteBarrier((&____FileName_6), value);
	}

	inline static int32_t get_offset_of__Comment_7() { return static_cast<int32_t>(offsetof(GZipStream_t4208907177, ____Comment_7)); }
	inline String_t* get__Comment_7() const { return ____Comment_7; }
	inline String_t** get_address_of__Comment_7() { return &____Comment_7; }
	inline void set__Comment_7(String_t* value)
	{
		____Comment_7 = value;
		Il2CppCodeGenWriteBarrier((&____Comment_7), value);
	}

	inline static int32_t get_offset_of__Crc32_8() { return static_cast<int32_t>(offsetof(GZipStream_t4208907177, ____Crc32_8)); }
	inline int32_t get__Crc32_8() const { return ____Crc32_8; }
	inline int32_t* get_address_of__Crc32_8() { return &____Crc32_8; }
	inline void set__Crc32_8(int32_t value)
	{
		____Crc32_8 = value;
	}
};

struct GZipStream_t4208907177_StaticFields
{
public:
	// System.DateTime Pathfinding.Ionic.Zlib.GZipStream::_unixEpoch
	DateTime_t3738529785  ____unixEpoch_9;
	// System.Text.Encoding Pathfinding.Ionic.Zlib.GZipStream::iso8859dash1
	Encoding_t1523322056 * ___iso8859dash1_10;

public:
	inline static int32_t get_offset_of__unixEpoch_9() { return static_cast<int32_t>(offsetof(GZipStream_t4208907177_StaticFields, ____unixEpoch_9)); }
	inline DateTime_t3738529785  get__unixEpoch_9() const { return ____unixEpoch_9; }
	inline DateTime_t3738529785 * get_address_of__unixEpoch_9() { return &____unixEpoch_9; }
	inline void set__unixEpoch_9(DateTime_t3738529785  value)
	{
		____unixEpoch_9 = value;
	}

	inline static int32_t get_offset_of_iso8859dash1_10() { return static_cast<int32_t>(offsetof(GZipStream_t4208907177_StaticFields, ___iso8859dash1_10)); }
	inline Encoding_t1523322056 * get_iso8859dash1_10() const { return ___iso8859dash1_10; }
	inline Encoding_t1523322056 ** get_address_of_iso8859dash1_10() { return &___iso8859dash1_10; }
	inline void set_iso8859dash1_10(Encoding_t1523322056 * value)
	{
		___iso8859dash1_10 = value;
		Il2CppCodeGenWriteBarrier((&___iso8859dash1_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GZIPSTREAM_T4208907177_H
// Pathfinding.Ionic.Zlib.DeflateManager/Config[]
struct ConfigU5BU5D_t3063149961  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Config_t3362677528 * m_Items[1];

public:
	inline Config_t3362677528 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Config_t3362677528 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Config_t3362677528 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline Config_t3362677528 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Config_t3362677528 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Config_t3362677528 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// System.Byte[]
struct ByteU5BU5D_t4116647657  : public RuntimeArray
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
// System.Int32[]
struct Int32U5BU5D_t385246372  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int32_t m_Items[1];

public:
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
// System.Int32[][]
struct Int32U5BU5DU5BU5D_t3365920845  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Int32U5BU5D_t385246372* m_Items[1];

public:
	inline Int32U5BU5D_t385246372* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Int32U5BU5D_t385246372** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Int32U5BU5D_t385246372* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline Int32U5BU5D_t385246372* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Int32U5BU5D_t385246372** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Int32U5BU5D_t385246372* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// System.Int16[]
struct Int16U5BU5D_t3686840178  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int16_t m_Items[1];

public:
	inline int16_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int16_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int16_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int16_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int16_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int16_t value)
	{
		m_Items[index] = value;
	}
};
// System.SByte[]
struct SByteU5BU5D_t2651576203  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int8_t m_Items[1];

public:
	inline int8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int8_t value)
	{
		m_Items[index] = value;
	}
};


// System.Boolean System.Nullable`1<System.DateTime>::get_HasValue()
extern "C" IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m3507792363_gshared (Nullable_1_t1166124571 * __this, const RuntimeMethod* method);
// System.Void System.Nullable`1<System.DateTime>::.ctor(!0)
extern "C" IL2CPP_METHOD_ATTR void Nullable_1__ctor_m1631813323_gshared (Nullable_1_t1166124571 * __this, DateTime_t3738529785  p0, const RuntimeMethod* method);
// !0 System.Nullable`1<System.DateTime>::get_Value()
extern "C" IL2CPP_METHOD_ATTR DateTime_t3738529785  Nullable_1_get_Value_m3011339833_gshared (Nullable_1_t1166124571 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Queue`1<System.Int32>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Queue_1__ctor_m1580917939_gshared (Queue_1_t2797205247 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void List_1__ctor_m2321703786_gshared (List_1_t257213610 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
extern "C" IL2CPP_METHOD_ATTR void List_1_Add_m3338814081_gshared (List_1_t257213610 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Queue`1<System.Int32>::Enqueue(!0)
extern "C" IL2CPP_METHOD_ATTR void Queue_1_Enqueue_m4020669210_gshared (Queue_1_t2797205247 * __this, int32_t p0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.Queue`1<System.Int32>::get_Count()
extern "C" IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_m2189316761_gshared (Queue_1_t2797205247 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.Queue`1<System.Int32>::Dequeue()
extern "C" IL2CPP_METHOD_ATTR int32_t Queue_1_Dequeue_m2220656947_gshared (Queue_1_t2797205247 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_m2287542950_gshared (List_1_t257213610 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Queue`1<System.Int32>::Clear()
extern "C" IL2CPP_METHOD_ATTR void Queue_1_Clear_m3201131089_gshared (Queue_1_t2797205247 * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
extern "C" IL2CPP_METHOD_ATTR Enumerator_t2146457487  List_1_GetEnumerator_m2930774921_gshared (List_1_t257213610 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m470245444_gshared (Enumerator_t2146457487 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
extern "C" IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m2142368520_gshared (Enumerator_t2146457487 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
extern "C" IL2CPP_METHOD_ATTR void Enumerator_Dispose_m3007748546_gshared (Enumerator_t2146457487 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Byte>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void List_1__ctor_m883961986_gshared (List_1_t2606371118 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Byte>::Add(!0)
extern "C" IL2CPP_METHOD_ATTR void List_1_Add_m464853802_gshared (List_1_t2606371118 * __this, uint8_t p0, const RuntimeMethod* method);
// !0[] System.Collections.Generic.List`1<System.Byte>::ToArray()
extern "C" IL2CPP_METHOD_ATTR ByteU5BU5D_t4116647657* List_1_ToArray_m2059327837_gshared (List_1_t2606371118 * __this, const RuntimeMethod* method);

// Pathfinding.Ionic.Zlib.BlockState Pathfinding.Ionic.Zlib.DeflateManager/CompressFunc::Invoke(Pathfinding.Ionic.Zlib.FlushType)
extern "C" IL2CPP_METHOD_ATTR int32_t CompressFunc_Invoke_m1319313903 (CompressFunc_t2219633776 * __this, int32_t ___flush0, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Object__ctor_m297566312 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void Pathfinding.Ionic.Zlib.DeflateManager/Config::.ctor(System.Int32,System.Int32,System.Int32,System.Int32,Pathfinding.Ionic.Zlib.DeflateFlavor)
extern "C" IL2CPP_METHOD_ATTR void Config__ctor_m2697892484 (Config_t3362677528 * __this, int32_t ___goodLength0, int32_t ___maxLazy1, int32_t ___niceLength2, int32_t ___maxChainLength3, int32_t ___flavor4, const RuntimeMethod* method);
// System.Void Pathfinding.Ionic.Zlib.DeflateStream::.ctor(System.IO.Stream,Pathfinding.Ionic.Zlib.CompressionMode,Pathfinding.Ionic.Zlib.CompressionLevel,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void DeflateStream__ctor_m3294195712 (DeflateStream_t475334119 * __this, Stream_t1273022909 * ___stream0, int32_t ___mode1, int32_t ___level2, bool ___leaveOpen3, const RuntimeMethod* method);
// System.Void System.IO.Stream::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Stream__ctor_m3881936881 (Stream_t1273022909 * __this, const RuntimeMethod* method);
// System.Void Pathfinding.Ionic.Zlib.ZlibBaseStream::.ctor(System.IO.Stream,Pathfinding.Ionic.Zlib.CompressionMode,Pathfinding.Ionic.Zlib.CompressionLevel,Pathfinding.Ionic.Zlib.ZlibStreamFlavor,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void ZlibBaseStream__ctor_m4090808400 (ZlibBaseStream_t3561210688 * __this, Stream_t1273022909 * ___stream0, int32_t ___compressionMode1, int32_t ___level2, int32_t ___flavor3, bool ___leaveOpen4, const RuntimeMethod* method);
// System.Void System.ObjectDisposedException::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void ObjectDisposedException__ctor_m3603759869 (ObjectDisposedException_t21392786 * __this, String_t* p0, const RuntimeMethod* method);
// System.Void Pathfinding.Ionic.Zlib.ZlibException::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void ZlibException__ctor_m1084687637 (ZlibException_t3942143964 * __this, String_t* ___s0, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object,System.Object)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Format_m2556382932 (RuntimeObject * __this /* static, unused */, String_t* p0, RuntimeObject * p1, RuntimeObject * p2, const RuntimeMethod* method);
// System.Void System.IO.Stream::Dispose(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Stream_Dispose_m874059170 (Stream_t1273022909 * __this, bool p0, const RuntimeMethod* method);
// System.Void System.NotImplementedException::.ctor()
extern "C" IL2CPP_METHOD_ATTR void NotImplementedException__ctor_m3058704252 (NotImplementedException_t3489357830 * __this, const RuntimeMethod* method);
// System.Void System.DateTime::.ctor(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.DateTimeKind)
extern "C" IL2CPP_METHOD_ATTR void DateTime__ctor_m2956360140 (DateTime_t3738529785 * __this, int32_t p0, int32_t p1, int32_t p2, int32_t p3, int32_t p4, int32_t p5, int32_t p6, const RuntimeMethod* method);
// System.Text.Encoding System.Text.Encoding::GetEncoding(System.String)
extern "C" IL2CPP_METHOD_ATTR Encoding_t1523322056 * Encoding_GetEncoding_m2599798446 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method);
// System.Int32 System.String::IndexOf(System.String)
extern "C" IL2CPP_METHOD_ATTR int32_t String_IndexOf_m1977622757 (String_t* __this, String_t* p0, const RuntimeMethod* method);
// System.String System.String::Replace(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Replace_m1273907647 (String_t* __this, String_t* p0, String_t* p1, const RuntimeMethod* method);
// System.Boolean System.String::EndsWith(System.String)
extern "C" IL2CPP_METHOD_ATTR bool String_EndsWith_m1901926500 (String_t* __this, String_t* p0, const RuntimeMethod* method);
// System.Void System.Exception::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void Exception__ctor_m1152696503 (Exception_t * __this, String_t* p0, const RuntimeMethod* method);
// System.String System.IO.Path::GetFileName(System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* Path_GetFileName_m1354558116 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method);
// System.Int32 Pathfinding.Ionic.Zlib.ZlibBaseStream::get_Crc32()
extern "C" IL2CPP_METHOD_ATTR int32_t ZlibBaseStream_get_Crc32_m3565177866 (ZlibBaseStream_t3561210688 * __this, const RuntimeMethod* method);
// System.Void Pathfinding.Ionic.Zlib.GZipStream::set_FileName(System.String)
extern "C" IL2CPP_METHOD_ATTR void GZipStream_set_FileName_m3205917940 (GZipStream_t4208907177 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void Pathfinding.Ionic.Zlib.GZipStream::set_Comment(System.String)
extern "C" IL2CPP_METHOD_ATTR void GZipStream_set_Comment_m423742318 (GZipStream_t4208907177 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Boolean Pathfinding.Ionic.Zlib.ZlibBaseStream::get__wantCompress()
extern "C" IL2CPP_METHOD_ATTR bool ZlibBaseStream_get__wantCompress_m408635950 (ZlibBaseStream_t3561210688 * __this, const RuntimeMethod* method);
// System.Int32 Pathfinding.Ionic.Zlib.GZipStream::EmitHeader()
extern "C" IL2CPP_METHOD_ATTR int32_t GZipStream_EmitHeader_m1512102614 (GZipStream_t4208907177 * __this, const RuntimeMethod* method);
// System.Void System.InvalidOperationException::.ctor()
extern "C" IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_m2734335978 (InvalidOperationException_t56020091 * __this, const RuntimeMethod* method);
// System.String Pathfinding.Ionic.Zlib.GZipStream::get_Comment()
extern "C" IL2CPP_METHOD_ATTR String_t* GZipStream_get_Comment_m241369808 (GZipStream_t4208907177 * __this, const RuntimeMethod* method);
// System.String Pathfinding.Ionic.Zlib.GZipStream::get_FileName()
extern "C" IL2CPP_METHOD_ATTR String_t* GZipStream_get_FileName_m204659679 (GZipStream_t4208907177 * __this, const RuntimeMethod* method);
// System.Boolean System.Nullable`1<System.DateTime>::get_HasValue()
inline bool Nullable_1_get_HasValue_m3507792363 (Nullable_1_t1166124571 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_t1166124571 *, const RuntimeMethod*))Nullable_1_get_HasValue_m3507792363_gshared)(__this, method);
}
// System.DateTime System.DateTime::get_Now()
extern "C" IL2CPP_METHOD_ATTR DateTime_t3738529785  DateTime_get_Now_m1277138875 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void System.Nullable`1<System.DateTime>::.ctor(!0)
inline void Nullable_1__ctor_m1631813323 (Nullable_1_t1166124571 * __this, DateTime_t3738529785  p0, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_t1166124571 *, DateTime_t3738529785 , const RuntimeMethod*))Nullable_1__ctor_m1631813323_gshared)(__this, p0, method);
}
// !0 System.Nullable`1<System.DateTime>::get_Value()
inline DateTime_t3738529785  Nullable_1_get_Value_m3011339833 (Nullable_1_t1166124571 * __this, const RuntimeMethod* method)
{
	return ((  DateTime_t3738529785  (*) (Nullable_1_t1166124571 *, const RuntimeMethod*))Nullable_1_get_Value_m3011339833_gshared)(__this, method);
}
// System.TimeSpan System.DateTime::op_Subtraction(System.DateTime,System.DateTime)
extern "C" IL2CPP_METHOD_ATTR TimeSpan_t881159249  DateTime_op_Subtraction_m3579235380 (RuntimeObject * __this /* static, unused */, DateTime_t3738529785  p0, DateTime_t3738529785  p1, const RuntimeMethod* method);
// System.Double System.TimeSpan::get_TotalSeconds()
extern "C" IL2CPP_METHOD_ATTR double TimeSpan_get_TotalSeconds_m4083325051 (TimeSpan_t881159249 * __this, const RuntimeMethod* method);
// System.Byte[] System.BitConverter::GetBytes(System.Int32)
extern "C" IL2CPP_METHOD_ATTR ByteU5BU5D_t4116647657* BitConverter_GetBytes_m1040762521 (RuntimeObject * __this /* static, unused */, int32_t p0, const RuntimeMethod* method);
// System.Void System.Array::Copy(System.Array,System.Int32,System.Array,System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Array_Copy_m344457298 (RuntimeObject * __this /* static, unused */, RuntimeArray * p0, int32_t p1, RuntimeArray * p2, int32_t p3, int32_t p4, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.RuntimeHelpers::InitializeArray(System.Array,System.RuntimeFieldHandle)
extern "C" IL2CPP_METHOD_ATTR void RuntimeHelpers_InitializeArray_m3117905507 (RuntimeObject * __this /* static, unused */, RuntimeArray * p0, RuntimeFieldHandle_t1871169219  p1, const RuntimeMethod* method);
// System.Int32 Pathfinding.Ionic.Zlib.SharedUtils::URShift(System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR int32_t SharedUtils_URShift_m2479621630 (RuntimeObject * __this /* static, unused */, int32_t ___number0, int32_t ___bits1, const RuntimeMethod* method);
// System.Void Pathfinding.Ionic.Zlib.InfTree::initWorkArea(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void InfTree_initWorkArea_m1371470808 (InfTree_t2692649235 * __this, int32_t ___vsize0, const RuntimeMethod* method);
// System.Int32 Pathfinding.Ionic.Zlib.InfTree::huft_build(System.Int32[],System.Int32,System.Int32,System.Int32,System.Int32[],System.Int32[],System.Int32[],System.Int32[],System.Int32[],System.Int32[],System.Int32[])
extern "C" IL2CPP_METHOD_ATTR int32_t InfTree_huft_build_m2186021824 (InfTree_t2692649235 * __this, Int32U5BU5D_t385246372* ___b0, int32_t ___bindex1, int32_t ___n2, int32_t ___s3, Int32U5BU5D_t385246372* ___d4, Int32U5BU5D_t385246372* ___e5, Int32U5BU5D_t385246372* ___t6, Int32U5BU5D_t385246372* ___m7, Int32U5BU5D_t385246372* ___hp8, Int32U5BU5D_t385246372* ___hn9, Int32U5BU5D_t385246372* ___v10, const RuntimeMethod* method);
// System.Void System.Array::Clear(System.Array,System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Array_Clear_m2231608178 (RuntimeObject * __this /* static, unused */, RuntimeArray * p0, int32_t p1, int32_t p2, const RuntimeMethod* method);
// System.Void Pathfinding.Ionic.Zlib.InflateCodes::.ctor()
extern "C" IL2CPP_METHOD_ATTR void InflateCodes__ctor_m51491151 (InflateCodes_t3940108927 * __this, const RuntimeMethod* method);
// System.Void Pathfinding.Ionic.Zlib.InfTree::.ctor()
extern "C" IL2CPP_METHOD_ATTR void InfTree__ctor_m1906075377 (InfTree_t2692649235 * __this, const RuntimeMethod* method);
// System.UInt32 Pathfinding.Ionic.Zlib.InflateBlocks::Reset()
extern "C" IL2CPP_METHOD_ATTR uint32_t InflateBlocks_Reset_m1167299319 (InflateBlocks_t4119258979 * __this, const RuntimeMethod* method);
// System.UInt32 Pathfinding.Ionic.Zlib.Adler::Adler32(System.UInt32,System.Byte[],System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR uint32_t Adler_Adler32_m1147423111 (RuntimeObject * __this /* static, unused */, uint32_t ___adler0, ByteU5BU5D_t4116647657* ___buf1, int32_t ___index2, int32_t ___len3, const RuntimeMethod* method);
// System.Int32 Pathfinding.Ionic.Zlib.InflateBlocks::Flush(System.Int32)
extern "C" IL2CPP_METHOD_ATTR int32_t InflateBlocks_Flush_m2330293879 (InflateBlocks_t4119258979 * __this, int32_t ___r0, const RuntimeMethod* method);
// System.Int32 Pathfinding.Ionic.Zlib.InfTree::inflate_trees_fixed(System.Int32[],System.Int32[],System.Int32[][],System.Int32[][],Pathfinding.Ionic.Zlib.ZlibCodec)
extern "C" IL2CPP_METHOD_ATTR int32_t InfTree_inflate_trees_fixed_m36146089 (RuntimeObject * __this /* static, unused */, Int32U5BU5D_t385246372* ___bl0, Int32U5BU5D_t385246372* ___bd1, Int32U5BU5DU5BU5D_t3365920845* ___tl2, Int32U5BU5DU5BU5D_t3365920845* ___td3, ZlibCodec_t855427629 * ___z4, const RuntimeMethod* method);
// System.Void Pathfinding.Ionic.Zlib.InflateCodes::Init(System.Int32,System.Int32,System.Int32[],System.Int32,System.Int32[],System.Int32)
extern "C" IL2CPP_METHOD_ATTR void InflateCodes_Init_m3604941619 (InflateCodes_t3940108927 * __this, int32_t ___bl0, int32_t ___bd1, Int32U5BU5D_t385246372* ___tl2, int32_t ___tl_index3, Int32U5BU5D_t385246372* ___td4, int32_t ___td_index5, const RuntimeMethod* method);
// System.Int32 Pathfinding.Ionic.Zlib.InfTree::inflate_trees_bits(System.Int32[],System.Int32[],System.Int32[],System.Int32[],Pathfinding.Ionic.Zlib.ZlibCodec)
extern "C" IL2CPP_METHOD_ATTR int32_t InfTree_inflate_trees_bits_m1558208322 (InfTree_t2692649235 * __this, Int32U5BU5D_t385246372* ___c0, Int32U5BU5D_t385246372* ___bb1, Int32U5BU5D_t385246372* ___tb2, Int32U5BU5D_t385246372* ___hp3, ZlibCodec_t855427629 * ___z4, const RuntimeMethod* method);
// System.Int32 Pathfinding.Ionic.Zlib.InfTree::inflate_trees_dynamic(System.Int32,System.Int32,System.Int32[],System.Int32[],System.Int32[],System.Int32[],System.Int32[],System.Int32[],Pathfinding.Ionic.Zlib.ZlibCodec)
extern "C" IL2CPP_METHOD_ATTR int32_t InfTree_inflate_trees_dynamic_m3043938686 (InfTree_t2692649235 * __this, int32_t ___nl0, int32_t ___nd1, Int32U5BU5D_t385246372* ___c2, Int32U5BU5D_t385246372* ___bl3, Int32U5BU5D_t385246372* ___bd4, Int32U5BU5D_t385246372* ___tl5, Int32U5BU5D_t385246372* ___td6, Int32U5BU5D_t385246372* ___hp7, ZlibCodec_t855427629 * ___z8, const RuntimeMethod* method);
// System.Int32 Pathfinding.Ionic.Zlib.InflateCodes::Process(Pathfinding.Ionic.Zlib.InflateBlocks,System.Int32)
extern "C" IL2CPP_METHOD_ATTR int32_t InflateCodes_Process_m2804328384 (InflateCodes_t3940108927 * __this, InflateBlocks_t4119258979 * ___blocks0, int32_t ___r1, const RuntimeMethod* method);
// System.Int32 Pathfinding.Ionic.Zlib.InflateCodes::InflateFast(System.Int32,System.Int32,System.Int32[],System.Int32,System.Int32[],System.Int32,Pathfinding.Ionic.Zlib.InflateBlocks,Pathfinding.Ionic.Zlib.ZlibCodec)
extern "C" IL2CPP_METHOD_ATTR int32_t InflateCodes_InflateFast_m1267240824 (InflateCodes_t3940108927 * __this, int32_t ___bl0, int32_t ___bd1, Int32U5BU5D_t385246372* ___tl2, int32_t ___tl_index3, Int32U5BU5D_t385246372* ___td4, int32_t ___td_index5, InflateBlocks_t4119258979 * ___s6, ZlibCodec_t855427629 * ___z7, const RuntimeMethod* method);
// System.Boolean Pathfinding.Ionic.Zlib.InflateManager::get_HandleRfc1950HeaderBytes()
extern "C" IL2CPP_METHOD_ATTR bool InflateManager_get_HandleRfc1950HeaderBytes_m1575042719 (InflateManager_t3682621372 * __this, const RuntimeMethod* method);
// System.Void Pathfinding.Ionic.Zlib.InflateBlocks::Free()
extern "C" IL2CPP_METHOD_ATTR void InflateBlocks_Free_m244881793 (InflateBlocks_t4119258979 * __this, const RuntimeMethod* method);
// System.Int32 Pathfinding.Ionic.Zlib.InflateManager::End()
extern "C" IL2CPP_METHOD_ATTR int32_t InflateManager_End_m1674991333 (InflateManager_t3682621372 * __this, const RuntimeMethod* method);
// System.Void Pathfinding.Ionic.Zlib.InflateBlocks::.ctor(Pathfinding.Ionic.Zlib.ZlibCodec,System.Object,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void InflateBlocks__ctor_m1052329913 (InflateBlocks_t4119258979 * __this, ZlibCodec_t855427629 * ___codec0, RuntimeObject * ___checkfn1, int32_t ___w2, const RuntimeMethod* method);
// System.Int32 Pathfinding.Ionic.Zlib.InflateManager::Reset()
extern "C" IL2CPP_METHOD_ATTR int32_t InflateManager_Reset_m1165359945 (InflateManager_t3682621372 * __this, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Format_m2844511972 (RuntimeObject * __this /* static, unused */, String_t* p0, RuntimeObject * p1, const RuntimeMethod* method);
// System.Int32 Pathfinding.Ionic.Zlib.InflateBlocks::Process(System.Int32)
extern "C" IL2CPP_METHOD_ATTR int32_t InflateBlocks_Process_m3038927653 (InflateBlocks_t4119258979 * __this, int32_t ___r0, const RuntimeMethod* method);
// System.Void Pathfinding.Ionic.Zlib.ParallelDeflateOutputStream::set_Strategy(Pathfinding.Ionic.Zlib.CompressionStrategy)
extern "C" IL2CPP_METHOD_ATTR void ParallelDeflateOutputStream_set_Strategy_m906188439 (ParallelDeflateOutputStream_t2527365669 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void Pathfinding.Ionic.Zlib.ParallelDeflateOutputStream::set_MaxBufferPairs(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void ParallelDeflateOutputStream_set_MaxBufferPairs_m811257751 (ParallelDeflateOutputStream_t2527365669 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void System.ArgumentException::.ctor(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR void ArgumentException__ctor_m1216717135 (ArgumentException_t132251570 * __this, String_t* p0, String_t* p1, const RuntimeMethod* method);
// System.Void System.ArgumentOutOfRangeException::.ctor(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_m282481429 (ArgumentOutOfRangeException_t777629997 * __this, String_t* p0, String_t* p1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Queue`1<System.Int32>::.ctor()
inline void Queue_1__ctor_m1580917939 (Queue_1_t2797205247 * __this, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t2797205247 *, const RuntimeMethod*))Queue_1__ctor_m1580917939_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<Pathfinding.Ionic.Zlib.WorkItem>::.ctor()
inline void List_1__ctor_m1822985305 (List_1_t4178125671 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t4178125671 *, const RuntimeMethod*))List_1__ctor_m2321703786_gshared)(__this, method);
}
// System.Int32 System.Environment::get_ProcessorCount()
extern "C" IL2CPP_METHOD_ATTR int32_t Environment_get_ProcessorCount_m3616251798 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Int32 System.Math::Min(System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR int32_t Math_Min_m3468062251 (RuntimeObject * __this /* static, unused */, int32_t p0, int32_t p1, const RuntimeMethod* method);
// Pathfinding.Ionic.Zlib.CompressionStrategy Pathfinding.Ionic.Zlib.ParallelDeflateOutputStream::get_Strategy()
extern "C" IL2CPP_METHOD_ATTR int32_t ParallelDeflateOutputStream_get_Strategy_m1697680580 (ParallelDeflateOutputStream_t2527365669 * __this, const RuntimeMethod* method);
// System.Void Pathfinding.Ionic.Zlib.WorkItem::.ctor(System.Int32,Pathfinding.Ionic.Zlib.CompressionLevel,Pathfinding.Ionic.Zlib.CompressionStrategy,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void WorkItem__ctor_m105125814 (WorkItem_t2706050929 * __this, int32_t ___size0, int32_t ___compressLevel1, int32_t ___strategy2, int32_t ___ix3, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Pathfinding.Ionic.Zlib.WorkItem>::Add(!0)
inline void List_1_Add_m1572258377 (List_1_t4178125671 * __this, WorkItem_t2706050929 * p0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t4178125671 *, WorkItem_t2706050929 *, const RuntimeMethod*))List_1_Add_m3338814081_gshared)(__this, p0, method);
}
// System.Void System.Collections.Generic.Queue`1<System.Int32>::Enqueue(!0)
inline void Queue_1_Enqueue_m4020669210 (Queue_1_t2797205247 * __this, int32_t p0, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t2797205247 *, int32_t, const RuntimeMethod*))Queue_1_Enqueue_m4020669210_gshared)(__this, p0, method);
}
// System.Void System.Threading.AutoResetEvent::.ctor(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void AutoResetEvent__ctor_m3710433672 (AutoResetEvent_t1333520283 * __this, bool p0, const RuntimeMethod* method);
// System.Void Pathfinding.Ionic.Crc.CRC32::.ctor()
extern "C" IL2CPP_METHOD_ATTR void CRC32__ctor_m474582685 (CRC32_t288211679 * __this, const RuntimeMethod* method);
// System.Void Pathfinding.Ionic.Zlib.ParallelDeflateOutputStream::_InitializePoolOfWorkItems()
extern "C" IL2CPP_METHOD_ATTR void ParallelDeflateOutputStream__InitializePoolOfWorkItems_m3855684877 (ParallelDeflateOutputStream_t2527365669 * __this, const RuntimeMethod* method);
// System.Void Pathfinding.Ionic.Zlib.ParallelDeflateOutputStream::EmitPendingBuffers(System.Boolean,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void ParallelDeflateOutputStream_EmitPendingBuffers_m2912639916 (ParallelDeflateOutputStream_t2527365669 * __this, bool ___doAll0, bool ___mustWait1, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.Queue`1<System.Int32>::get_Count()
inline int32_t Queue_1_get_Count_m2189316761 (Queue_1_t2797205247 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Queue_1_t2797205247 *, const RuntimeMethod*))Queue_1_get_Count_m2189316761_gshared)(__this, method);
}
// !0 System.Collections.Generic.Queue`1<System.Int32>::Dequeue()
inline int32_t Queue_1_Dequeue_m2220656947 (Queue_1_t2797205247 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Queue_1_t2797205247 *, const RuntimeMethod*))Queue_1_Dequeue_m2220656947_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1<Pathfinding.Ionic.Zlib.WorkItem>::get_Item(System.Int32)
inline WorkItem_t2706050929 * List_1_get_Item_m658768736 (List_1_t4178125671 * __this, int32_t p0, const RuntimeMethod* method)
{
	return ((  WorkItem_t2706050929 * (*) (List_1_t4178125671 *, int32_t, const RuntimeMethod*))List_1_get_Item_m2287542950_gshared)(__this, p0, method);
}
// System.Void System.Buffer::BlockCopy(System.Array,System.Int32,System.Array,System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Buffer_BlockCopy_m2884209081 (RuntimeObject * __this /* static, unused */, RuntimeArray * p0, int32_t p1, RuntimeArray * p2, int32_t p3, int32_t p4, const RuntimeMethod* method);
// System.Void System.Threading.WaitCallback::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void WaitCallback__ctor_m1893321019 (WaitCallback_t2448485498 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method);
// System.Boolean System.Threading.ThreadPool::QueueUserWorkItem(System.Threading.WaitCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR bool ThreadPool_QueueUserWorkItem_m1526970260 (RuntimeObject * __this /* static, unused */, WaitCallback_t2448485498 * p0, RuntimeObject * p1, const RuntimeMethod* method);
// System.Void Pathfinding.Ionic.Zlib.ZlibCodec::.ctor()
extern "C" IL2CPP_METHOD_ATTR void ZlibCodec__ctor_m2698404987 (ZlibCodec_t855427629 * __this, const RuntimeMethod* method);
// System.Int32 Pathfinding.Ionic.Zlib.ZlibCodec::InitializeDeflate(Pathfinding.Ionic.Zlib.CompressionLevel,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR int32_t ZlibCodec_InitializeDeflate_m1391012963 (ZlibCodec_t855427629 * __this, int32_t ___level0, bool ___wantRfc1950Header1, const RuntimeMethod* method);
// System.Int32 Pathfinding.Ionic.Zlib.ZlibCodec::Deflate(Pathfinding.Ionic.Zlib.FlushType)
extern "C" IL2CPP_METHOD_ATTR int32_t ZlibCodec_Deflate_m110580741 (ZlibCodec_t855427629 * __this, int32_t ___flush0, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Concat_m3937257545 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, const RuntimeMethod* method);
// System.Int32 Pathfinding.Ionic.Zlib.ZlibCodec::EndDeflate()
extern "C" IL2CPP_METHOD_ATTR int32_t ZlibCodec_EndDeflate_m2070701999 (ZlibCodec_t855427629 * __this, const RuntimeMethod* method);
// System.Int32 Pathfinding.Ionic.Crc.CRC32::get_Crc32Result()
extern "C" IL2CPP_METHOD_ATTR int32_t CRC32_get_Crc32Result_m2014443844 (CRC32_t288211679 * __this, const RuntimeMethod* method);
// System.Void Pathfinding.Ionic.Zlib.ParallelDeflateOutputStream::_DeflateOne(System.Object)
extern "C" IL2CPP_METHOD_ATTR void ParallelDeflateOutputStream__DeflateOne_m1526306249 (ParallelDeflateOutputStream_t2527365669 * __this, RuntimeObject * ___wi0, const RuntimeMethod* method);
// System.Void Pathfinding.Ionic.Zlib.ParallelDeflateOutputStream::_FlushFinish()
extern "C" IL2CPP_METHOD_ATTR void ParallelDeflateOutputStream__FlushFinish_m1293563418 (ParallelDeflateOutputStream_t2527365669 * __this, const RuntimeMethod* method);
// System.Void Pathfinding.Ionic.Zlib.ParallelDeflateOutputStream::_Flush(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void ParallelDeflateOutputStream__Flush_m2129508559 (ParallelDeflateOutputStream_t2527365669 * __this, bool ___lastInput0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Queue`1<System.Int32>::Clear()
inline void Queue_1_Clear_m3201131089 (Queue_1_t2797205247 * __this, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t2797205247 *, const RuntimeMethod*))Queue_1_Clear_m3201131089_gshared)(__this, method);
}
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<Pathfinding.Ionic.Zlib.WorkItem>::GetEnumerator()
inline Enumerator_t1772402252  List_1_GetEnumerator_m4123270977 (List_1_t4178125671 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t1772402252  (*) (List_1_t4178125671 *, const RuntimeMethod*))List_1_GetEnumerator_m2930774921_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<Pathfinding.Ionic.Zlib.WorkItem>::get_Current()
inline WorkItem_t2706050929 * Enumerator_get_Current_m1777060775 (Enumerator_t1772402252 * __this, const RuntimeMethod* method)
{
	return ((  WorkItem_t2706050929 * (*) (Enumerator_t1772402252 *, const RuntimeMethod*))Enumerator_get_Current_m470245444_gshared)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<Pathfinding.Ionic.Zlib.WorkItem>::MoveNext()
inline bool Enumerator_MoveNext_m2358318413 (Enumerator_t1772402252 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t1772402252 *, const RuntimeMethod*))Enumerator_MoveNext_m2142368520_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<Pathfinding.Ionic.Zlib.WorkItem>::Dispose()
inline void Enumerator_Dispose_m3632834591 (Enumerator_t1772402252 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t1772402252 *, const RuntimeMethod*))Enumerator_Dispose_m3007748546_gshared)(__this, method);
}
// System.Boolean System.Threading.Monitor::TryEnter(System.Object,System.Int32)
extern "C" IL2CPP_METHOD_ATTR bool Monitor_TryEnter_m1056885636 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, int32_t p1, const RuntimeMethod* method);
// System.Void System.Threading.Monitor::Exit(System.Object)
extern "C" IL2CPP_METHOD_ATTR void Monitor_Exit_m3585316909 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void System.Threading.Monitor::Enter(System.Object)
extern "C" IL2CPP_METHOD_ATTR void Monitor_Enter_m2249409497 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void Pathfinding.Ionic.Crc.CRC32::Combine(System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void CRC32_Combine_m3604759441 (CRC32_t288211679 * __this, int32_t ___crc0, int32_t ___length1, const RuntimeMethod* method);
// System.Void Pathfinding.Ionic.Crc.CRC32::SlurpBlock(System.Byte[],System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void CRC32_SlurpBlock_m2489767400 (CRC32_t288211679 * __this, ByteU5BU5D_t4116647657* ___block0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method);
// System.Boolean Pathfinding.Ionic.Zlib.ParallelDeflateOutputStream::DeflateOneSegment(Pathfinding.Ionic.Zlib.WorkItem)
extern "C" IL2CPP_METHOD_ATTR bool ParallelDeflateOutputStream_DeflateOneSegment_m44383002 (ParallelDeflateOutputStream_t2527365669 * __this, WorkItem_t2706050929 * ___workitem0, const RuntimeMethod* method);
// System.Boolean System.Threading.EventWaitHandle::Set()
extern "C" IL2CPP_METHOD_ATTR bool EventWaitHandle_Set_m2445193251 (EventWaitHandle_t777845177 * __this, const RuntimeMethod* method);
// System.Void Pathfinding.Ionic.Zlib.ZlibCodec::ResetDeflate()
extern "C" IL2CPP_METHOD_ATTR void ZlibCodec_ResetDeflate_m1569060282 (ZlibCodec_t855427629 * __this, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
extern "C" IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m2730133172 (NotSupportedException_t1314879016 * __this, const RuntimeMethod* method);
// System.Void Pathfinding.Ionic.Zlib.StaticTree::.ctor(System.Int16[],System.Int32[],System.Int32,System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void StaticTree__ctor_m1913907501 (StaticTree_t3743034110 * __this, Int16U5BU5D_t3686840178* ___treeCodes0, Int32U5BU5D_t385246372* ___extraBits1, int32_t ___extraBase2, int32_t ___elems3, int32_t ___maxLength4, const RuntimeMethod* method);
// System.Void Pathfinding.Ionic.Zlib.DeflateManager::pqdownheap(System.Int16[],System.Int32)
extern "C" IL2CPP_METHOD_ATTR void DeflateManager_pqdownheap_m3593677249 (DeflateManager_t3554793512 * __this, Int16U5BU5D_t3686840178* ___tree0, int32_t ___k1, const RuntimeMethod* method);
// System.Byte System.Math::Max(System.Byte,System.Byte)
extern "C" IL2CPP_METHOD_ATTR uint8_t Math_Max_m4189907297 (RuntimeObject * __this /* static, unused */, uint8_t p0, uint8_t p1, const RuntimeMethod* method);
// System.Void Pathfinding.Ionic.Zlib.Tree::gen_bitlen(Pathfinding.Ionic.Zlib.DeflateManager)
extern "C" IL2CPP_METHOD_ATTR void Tree_gen_bitlen_m1750572723 (Tree_t776904304 * __this, DeflateManager_t3554793512 * ___s0, const RuntimeMethod* method);
// System.Void Pathfinding.Ionic.Zlib.Tree::gen_codes(System.Int16[],System.Int32,System.Int16[])
extern "C" IL2CPP_METHOD_ATTR void Tree_gen_codes_m2921036433 (RuntimeObject * __this /* static, unused */, Int16U5BU5D_t3686840178* ___tree0, int32_t ___max_code1, Int16U5BU5D_t3686840178* ___bl_count2, const RuntimeMethod* method);
// System.Int32 Pathfinding.Ionic.Zlib.Tree::bi_reverse(System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR int32_t Tree_bi_reverse_m1782502178 (RuntimeObject * __this /* static, unused */, int32_t ___code0, int32_t ___len1, const RuntimeMethod* method);
// System.Int32 Pathfinding.Ionic.Zlib.ZlibCodec::InitializeInflate(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR int32_t ZlibCodec_InitializeInflate_m1652333965 (ZlibCodec_t855427629 * __this, bool ___expectRfc1950Header0, const RuntimeMethod* method);
// Pathfinding.Ionic.Zlib.ZlibCodec Pathfinding.Ionic.Zlib.ZlibBaseStream::get_z()
extern "C" IL2CPP_METHOD_ATTR ZlibCodec_t855427629 * ZlibBaseStream_get_z_m2638430214 (ZlibBaseStream_t3561210688 * __this, const RuntimeMethod* method);
// System.Byte[] Pathfinding.Ionic.Zlib.ZlibBaseStream::get_workingBuffer()
extern "C" IL2CPP_METHOD_ATTR ByteU5BU5D_t4116647657* ZlibBaseStream_get_workingBuffer_m1750492206 (ZlibBaseStream_t3561210688 * __this, const RuntimeMethod* method);
// System.Int32 Pathfinding.Ionic.Zlib.ZlibCodec::Inflate(Pathfinding.Ionic.Zlib.FlushType)
extern "C" IL2CPP_METHOD_ATTR int32_t ZlibCodec_Inflate_m1006171035 (ZlibCodec_t855427629 * __this, int32_t ___flush0, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Concat_m3755062657 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, String_t* p2, const RuntimeMethod* method);
// System.Int64 Pathfinding.Ionic.Crc.CRC32::get_TotalBytesRead()
extern "C" IL2CPP_METHOD_ATTR int64_t CRC32_get_TotalBytesRead_m4084591093 (CRC32_t288211679 * __this, const RuntimeMethod* method);
// System.Int32 System.BitConverter::ToInt32(System.Byte[],System.Int32)
extern "C" IL2CPP_METHOD_ATTR int32_t BitConverter_ToInt32_m1089563119 (RuntimeObject * __this /* static, unused */, ByteU5BU5D_t4116647657* p0, int32_t p1, const RuntimeMethod* method);
// System.Int32 Pathfinding.Ionic.Zlib.ZlibCodec::EndInflate()
extern "C" IL2CPP_METHOD_ATTR int32_t ZlibCodec_EndInflate_m2725978086 (ZlibCodec_t855427629 * __this, const RuntimeMethod* method);
// System.Void Pathfinding.Ionic.Zlib.ZlibBaseStream::finish()
extern "C" IL2CPP_METHOD_ATTR void ZlibBaseStream_finish_m1911048356 (ZlibBaseStream_t3561210688 * __this, const RuntimeMethod* method);
// System.Void Pathfinding.Ionic.Zlib.ZlibBaseStream::end()
extern "C" IL2CPP_METHOD_ATTR void ZlibBaseStream_end_m107296615 (ZlibBaseStream_t3561210688 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Byte>::.ctor()
inline void List_1__ctor_m883961986 (List_1_t2606371118 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t2606371118 *, const RuntimeMethod*))List_1__ctor_m883961986_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Byte>::Add(!0)
inline void List_1_Add_m464853802 (List_1_t2606371118 * __this, uint8_t p0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t2606371118 *, uint8_t, const RuntimeMethod*))List_1_Add_m464853802_gshared)(__this, p0, method);
}
// !0[] System.Collections.Generic.List`1<System.Byte>::ToArray()
inline ByteU5BU5D_t4116647657* List_1_ToArray_m2059327837 (List_1_t2606371118 * __this, const RuntimeMethod* method)
{
	return ((  ByteU5BU5D_t4116647657* (*) (List_1_t2606371118 *, const RuntimeMethod*))List_1_ToArray_m2059327837_gshared)(__this, method);
}
// System.DateTime System.DateTime::AddSeconds(System.Double)
extern "C" IL2CPP_METHOD_ATTR DateTime_t3738529785  DateTime_AddSeconds_m332574389 (DateTime_t3738529785 * __this, double p0, const RuntimeMethod* method);
// System.String Pathfinding.Ionic.Zlib.ZlibBaseStream::ReadZeroTerminatedString()
extern "C" IL2CPP_METHOD_ATTR String_t* ZlibBaseStream_ReadZeroTerminatedString_m511734528 (ZlibBaseStream_t3561210688 * __this, const RuntimeMethod* method);
// System.Int32 Pathfinding.Ionic.Zlib.ZlibBaseStream::_ReadAndValidateGzipHeader()
extern "C" IL2CPP_METHOD_ATTR int32_t ZlibBaseStream__ReadAndValidateGzipHeader_m2873668385 (ZlibBaseStream_t3561210688 * __this, const RuntimeMethod* method);
// System.Void System.ArgumentNullException::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m1170824041 (ArgumentNullException_t1615371798 * __this, String_t* p0, const RuntimeMethod* method);
// System.Void System.ArgumentOutOfRangeException::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_m3628145864 (ArgumentOutOfRangeException_t777629997 * __this, String_t* p0, const RuntimeMethod* method);
// System.Int32 System.Array::GetLowerBound(System.Int32)
extern "C" IL2CPP_METHOD_ATTR int32_t Array_GetLowerBound_m2045984623 (RuntimeArray * __this, int32_t p0, const RuntimeMethod* method);
// System.Int32 System.Array::GetLength(System.Int32)
extern "C" IL2CPP_METHOD_ATTR int32_t Array_GetLength_m2178203778 (RuntimeArray * __this, int32_t p0, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object,System.Object,System.Object)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Format_m3339413201 (RuntimeObject * __this /* static, unused */, String_t* p0, RuntimeObject * p1, RuntimeObject * p2, RuntimeObject * p3, const RuntimeMethod* method);
// System.Int32 Pathfinding.Ionic.Zlib.ZlibCodec::InitializeInflate(System.Int32,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR int32_t ZlibCodec_InitializeInflate_m150460593 (ZlibCodec_t855427629 * __this, int32_t ___windowBits0, bool ___expectRfc1950Header1, const RuntimeMethod* method);
// System.Void Pathfinding.Ionic.Zlib.InflateManager::.ctor(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void InflateManager__ctor_m300537653 (InflateManager_t3682621372 * __this, bool ___expectRfc1950HeaderBytes0, const RuntimeMethod* method);
// System.Int32 Pathfinding.Ionic.Zlib.InflateManager::Initialize(Pathfinding.Ionic.Zlib.ZlibCodec,System.Int32)
extern "C" IL2CPP_METHOD_ATTR int32_t InflateManager_Initialize_m1637778925 (InflateManager_t3682621372 * __this, ZlibCodec_t855427629 * ___codec0, int32_t ___w1, const RuntimeMethod* method);
// System.Int32 Pathfinding.Ionic.Zlib.InflateManager::Inflate(Pathfinding.Ionic.Zlib.FlushType)
extern "C" IL2CPP_METHOD_ATTR int32_t InflateManager_Inflate_m4163498486 (InflateManager_t3682621372 * __this, int32_t ___flush0, const RuntimeMethod* method);
// System.Int32 Pathfinding.Ionic.Zlib.ZlibCodec::_InternalInitializeDeflate(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR int32_t ZlibCodec__InternalInitializeDeflate_m1783914882 (ZlibCodec_t855427629 * __this, bool ___wantRfc1950Header0, const RuntimeMethod* method);
// System.Void Pathfinding.Ionic.Zlib.DeflateManager::.ctor()
extern "C" IL2CPP_METHOD_ATTR void DeflateManager__ctor_m2647843651 (DeflateManager_t3554793512 * __this, const RuntimeMethod* method);
// System.Void Pathfinding.Ionic.Zlib.DeflateManager::set_WantRfc1950HeaderBytes(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void DeflateManager_set_WantRfc1950HeaderBytes_m1002388870 (DeflateManager_t3554793512 * __this, bool ___value0, const RuntimeMethod* method);
// System.Int32 Pathfinding.Ionic.Zlib.DeflateManager::Initialize(Pathfinding.Ionic.Zlib.ZlibCodec,Pathfinding.Ionic.Zlib.CompressionLevel,System.Int32,Pathfinding.Ionic.Zlib.CompressionStrategy)
extern "C" IL2CPP_METHOD_ATTR int32_t DeflateManager_Initialize_m3250314596 (DeflateManager_t3554793512 * __this, ZlibCodec_t855427629 * ___codec0, int32_t ___level1, int32_t ___bits2, int32_t ___compressionStrategy3, const RuntimeMethod* method);
// System.Int32 Pathfinding.Ionic.Zlib.DeflateManager::Deflate(Pathfinding.Ionic.Zlib.FlushType)
extern "C" IL2CPP_METHOD_ATTR int32_t DeflateManager_Deflate_m2916501336 (DeflateManager_t3554793512 * __this, int32_t ___flush0, const RuntimeMethod* method);
// System.Void Pathfinding.Ionic.Zlib.DeflateManager::Reset()
extern "C" IL2CPP_METHOD_ATTR void DeflateManager_Reset_m2405421907 (DeflateManager_t3554793512 * __this, const RuntimeMethod* method);
// System.Boolean Pathfinding.Ionic.Zlib.DeflateManager::get_WantRfc1950HeaderBytes()
extern "C" IL2CPP_METHOD_ATTR bool DeflateManager_get_WantRfc1950HeaderBytes_m3492961775 (DeflateManager_t3554793512 * __this, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern "C"  int32_t DelegatePInvokeWrapper_CompressFunc_t2219633776 (CompressFunc_t2219633776 * __this, int32_t ___flush0, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc)(int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___flush0);

	return returnValue;
}
// System.Void Pathfinding.Ionic.Zlib.DeflateManager/CompressFunc::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void CompressFunc__ctor_m4083429646 (CompressFunc_t2219633776 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// Pathfinding.Ionic.Zlib.BlockState Pathfinding.Ionic.Zlib.DeflateManager/CompressFunc::Invoke(Pathfinding.Ionic.Zlib.FlushType)
extern "C" IL2CPP_METHOD_ATTR int32_t CompressFunc_Invoke_m1319313903 (CompressFunc_t2219633776 * __this, int32_t ___flush0, const RuntimeMethod* method)
{
	int32_t result = 0;
	if(__this->get_prev_9() != NULL)
	{
		CompressFunc_Invoke_m1319313903((CompressFunc_t2219633776 *)__this->get_prev_9(), ___flush0, method);
	}
	Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
	RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
	RuntimeObject* targetThis = __this->get_m_target_2();
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
	bool ___methodIsStatic = MethodIsStatic(targetMethod);
	if (___methodIsStatic)
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 1)
		{
			// open
			{
				typedef int32_t (*FunctionPointerType) (RuntimeObject *, int32_t, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(NULL, ___flush0, targetMethod);
			}
		}
		else
		{
			// closed
			{
				typedef int32_t (*FunctionPointerType) (RuntimeObject *, void*, int32_t, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___flush0, targetMethod);
			}
		}
	}
	else
	{
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker1< int32_t, int32_t >::Invoke(targetMethod, targetThis, ___flush0);
					else
						result = GenericVirtFuncInvoker1< int32_t, int32_t >::Invoke(targetMethod, targetThis, ___flush0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___flush0);
					else
						result = VirtFuncInvoker1< int32_t, int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___flush0);
				}
			}
			else
			{
				typedef int32_t (*FunctionPointerType) (void*, int32_t, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___flush0, targetMethod);
			}
		}
	}
	return result;
}
// System.IAsyncResult Pathfinding.Ionic.Zlib.DeflateManager/CompressFunc::BeginInvoke(Pathfinding.Ionic.Zlib.FlushType,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* CompressFunc_BeginInvoke_m3013655697 (CompressFunc_t2219633776 * __this, int32_t ___flush0, AsyncCallback_t3962456242 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CompressFunc_BeginInvoke_m3013655697_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(FlushType_t281923595_il2cpp_TypeInfo_var, &___flush0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// Pathfinding.Ionic.Zlib.BlockState Pathfinding.Ionic.Zlib.DeflateManager/CompressFunc::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR int32_t CompressFunc_EndInvoke_m2187068077 (CompressFunc_t2219633776 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(int32_t*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Pathfinding.Ionic.Zlib.DeflateManager/Config::.ctor(System.Int32,System.Int32,System.Int32,System.Int32,Pathfinding.Ionic.Zlib.DeflateFlavor)
extern "C" IL2CPP_METHOD_ATTR void Config__ctor_m2697892484 (Config_t3362677528 * __this, int32_t ___goodLength0, int32_t ___maxLazy1, int32_t ___niceLength2, int32_t ___maxChainLength3, int32_t ___flavor4, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___goodLength0;
		__this->set_GoodLength_0(L_0);
		int32_t L_1 = ___maxLazy1;
		__this->set_MaxLazy_1(L_1);
		int32_t L_2 = ___niceLength2;
		__this->set_NiceLength_2(L_2);
		int32_t L_3 = ___maxChainLength3;
		__this->set_MaxChainLength_3(L_3);
		int32_t L_4 = ___flavor4;
		__this->set_Flavor_4(L_4);
		return;
	}
}
// System.Void Pathfinding.Ionic.Zlib.DeflateManager/Config::.cctor()
extern "C" IL2CPP_METHOD_ATTR void Config__cctor_m2964993941 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Config__cctor_m2964993941_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ConfigU5BU5D_t3063149961* L_0 = (ConfigU5BU5D_t3063149961*)SZArrayNew(ConfigU5BU5D_t3063149961_il2cpp_TypeInfo_var, (uint32_t)((int32_t)10));
		ConfigU5BU5D_t3063149961* L_1 = L_0;
		Config_t3362677528 * L_2 = (Config_t3362677528 *)il2cpp_codegen_object_new(Config_t3362677528_il2cpp_TypeInfo_var);
		Config__ctor_m2697892484(L_2, 0, 0, 0, 0, 0, /*hidden argument*/NULL);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (Config_t3362677528 *)L_2);
		ConfigU5BU5D_t3063149961* L_3 = L_1;
		Config_t3362677528 * L_4 = (Config_t3362677528 *)il2cpp_codegen_object_new(Config_t3362677528_il2cpp_TypeInfo_var);
		Config__ctor_m2697892484(L_4, 4, 4, 8, 4, 1, /*hidden argument*/NULL);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_4);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (Config_t3362677528 *)L_4);
		ConfigU5BU5D_t3063149961* L_5 = L_3;
		Config_t3362677528 * L_6 = (Config_t3362677528 *)il2cpp_codegen_object_new(Config_t3362677528_il2cpp_TypeInfo_var);
		Config__ctor_m2697892484(L_6, 4, 5, ((int32_t)16), 8, 1, /*hidden argument*/NULL);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_6);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(2), (Config_t3362677528 *)L_6);
		ConfigU5BU5D_t3063149961* L_7 = L_5;
		Config_t3362677528 * L_8 = (Config_t3362677528 *)il2cpp_codegen_object_new(Config_t3362677528_il2cpp_TypeInfo_var);
		Config__ctor_m2697892484(L_8, 4, 6, ((int32_t)32), ((int32_t)32), 1, /*hidden argument*/NULL);
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_8);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(3), (Config_t3362677528 *)L_8);
		ConfigU5BU5D_t3063149961* L_9 = L_7;
		Config_t3362677528 * L_10 = (Config_t3362677528 *)il2cpp_codegen_object_new(Config_t3362677528_il2cpp_TypeInfo_var);
		Config__ctor_m2697892484(L_10, 4, 4, ((int32_t)16), ((int32_t)16), 2, /*hidden argument*/NULL);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_10);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(4), (Config_t3362677528 *)L_10);
		ConfigU5BU5D_t3063149961* L_11 = L_9;
		Config_t3362677528 * L_12 = (Config_t3362677528 *)il2cpp_codegen_object_new(Config_t3362677528_il2cpp_TypeInfo_var);
		Config__ctor_m2697892484(L_12, 8, ((int32_t)16), ((int32_t)32), ((int32_t)32), 2, /*hidden argument*/NULL);
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_12);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(5), (Config_t3362677528 *)L_12);
		ConfigU5BU5D_t3063149961* L_13 = L_11;
		Config_t3362677528 * L_14 = (Config_t3362677528 *)il2cpp_codegen_object_new(Config_t3362677528_il2cpp_TypeInfo_var);
		Config__ctor_m2697892484(L_14, 8, ((int32_t)16), ((int32_t)128), ((int32_t)128), 2, /*hidden argument*/NULL);
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_14);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(6), (Config_t3362677528 *)L_14);
		ConfigU5BU5D_t3063149961* L_15 = L_13;
		Config_t3362677528 * L_16 = (Config_t3362677528 *)il2cpp_codegen_object_new(Config_t3362677528_il2cpp_TypeInfo_var);
		Config__ctor_m2697892484(L_16, 8, ((int32_t)32), ((int32_t)128), ((int32_t)256), 2, /*hidden argument*/NULL);
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, L_16);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(7), (Config_t3362677528 *)L_16);
		ConfigU5BU5D_t3063149961* L_17 = L_15;
		Config_t3362677528 * L_18 = (Config_t3362677528 *)il2cpp_codegen_object_new(Config_t3362677528_il2cpp_TypeInfo_var);
		Config__ctor_m2697892484(L_18, ((int32_t)32), ((int32_t)128), ((int32_t)258), ((int32_t)1024), 2, /*hidden argument*/NULL);
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_18);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(8), (Config_t3362677528 *)L_18);
		ConfigU5BU5D_t3063149961* L_19 = L_17;
		Config_t3362677528 * L_20 = (Config_t3362677528 *)il2cpp_codegen_object_new(Config_t3362677528_il2cpp_TypeInfo_var);
		Config__ctor_m2697892484(L_20, ((int32_t)32), ((int32_t)258), ((int32_t)258), ((int32_t)4096), 2, /*hidden argument*/NULL);
		NullCheck(L_19);
		ArrayElementTypeCheck (L_19, L_20);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (Config_t3362677528 *)L_20);
		((Config_t3362677528_StaticFields*)il2cpp_codegen_static_fields_for(Config_t3362677528_il2cpp_TypeInfo_var))->set_Table_5(L_19);
		return;
	}
}
// Pathfinding.Ionic.Zlib.DeflateManager/Config Pathfinding.Ionic.Zlib.DeflateManager/Config::Lookup(Pathfinding.Ionic.Zlib.CompressionLevel)
extern "C" IL2CPP_METHOD_ATTR Config_t3362677528 * Config_Lookup_m3425561697 (RuntimeObject * __this /* static, unused */, int32_t ___level0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Config_Lookup_m3425561697_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Config_t3362677528_il2cpp_TypeInfo_var);
		ConfigU5BU5D_t3063149961* L_0 = ((Config_t3362677528_StaticFields*)il2cpp_codegen_static_fields_for(Config_t3362677528_il2cpp_TypeInfo_var))->get_Table_5();
		int32_t L_1 = ___level0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		Config_t3362677528 * L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
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
// System.Void Pathfinding.Ionic.Zlib.DeflateStream::.ctor(System.IO.Stream,Pathfinding.Ionic.Zlib.CompressionMode,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void DeflateStream__ctor_m1020787283 (DeflateStream_t475334119 * __this, Stream_t1273022909 * ___stream0, int32_t ___mode1, bool ___leaveOpen2, const RuntimeMethod* method)
{
	{
		Stream_t1273022909 * L_0 = ___stream0;
		int32_t L_1 = ___mode1;
		bool L_2 = ___leaveOpen2;
		DeflateStream__ctor_m3294195712(__this, L_0, L_1, 6, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Pathfinding.Ionic.Zlib.DeflateStream::.ctor(System.IO.Stream,Pathfinding.Ionic.Zlib.CompressionMode,Pathfinding.Ionic.Zlib.CompressionLevel,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void DeflateStream__ctor_m3294195712 (DeflateStream_t475334119 * __this, Stream_t1273022909 * ___stream0, int32_t ___mode1, int32_t ___level2, bool ___leaveOpen3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DeflateStream__ctor_m3294195712_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Stream_t1273022909_il2cpp_TypeInfo_var);
		Stream__ctor_m3881936881(__this, /*hidden argument*/NULL);
		Stream_t1273022909 * L_0 = ___stream0;
		__this->set__innerStream_2(L_0);
		Stream_t1273022909 * L_1 = ___stream0;
		int32_t L_2 = ___mode1;
		int32_t L_3 = ___level2;
		bool L_4 = ___leaveOpen3;
		ZlibBaseStream_t3561210688 * L_5 = (ZlibBaseStream_t3561210688 *)il2cpp_codegen_object_new(ZlibBaseStream_t3561210688_il2cpp_TypeInfo_var);
		ZlibBaseStream__ctor_m4090808400(L_5, L_1, L_2, L_3, ((int32_t)1951), L_4, /*hidden argument*/NULL);
		__this->set__baseStream_1(L_5);
		return;
	}
}
// System.Void Pathfinding.Ionic.Zlib.DeflateStream::set_BufferSize(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void DeflateStream_set_BufferSize_m952162683 (DeflateStream_t475334119 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DeflateStream_set_BufferSize_m952162683_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = __this->get__disposed_3();
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		ObjectDisposedException_t21392786 * L_1 = (ObjectDisposedException_t21392786 *)il2cpp_codegen_object_new(ObjectDisposedException_t21392786_il2cpp_TypeInfo_var);
		ObjectDisposedException__ctor_m3603759869(L_1, _stringLiteral805964055, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, DeflateStream_set_BufferSize_m952162683_RuntimeMethod_var);
	}

IL_0016:
	{
		ZlibBaseStream_t3561210688 * L_2 = __this->get__baseStream_1();
		NullCheck(L_2);
		ByteU5BU5D_t4116647657* L_3 = L_2->get__workingBuffer_8();
		if (!L_3)
		{
			goto IL_0031;
		}
	}
	{
		ZlibException_t3942143964 * L_4 = (ZlibException_t3942143964 *)il2cpp_codegen_object_new(ZlibException_t3942143964_il2cpp_TypeInfo_var);
		ZlibException__ctor_m1084687637(L_4, _stringLiteral2542349176, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, NULL, DeflateStream_set_BufferSize_m952162683_RuntimeMethod_var);
	}

IL_0031:
	{
		int32_t L_5 = ___value0;
		if ((((int32_t)L_5) >= ((int32_t)((int32_t)1024))))
		{
			goto IL_005c;
		}
	}
	{
		int32_t L_6 = ___value0;
		int32_t L_7 = L_6;
		RuntimeObject * L_8 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_7);
		int32_t L_9 = ((int32_t)1024);
		RuntimeObject * L_10 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_9);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_11 = String_Format_m2556382932(NULL /*static, unused*/, _stringLiteral2050137400, L_8, L_10, /*hidden argument*/NULL);
		ZlibException_t3942143964 * L_12 = (ZlibException_t3942143964 *)il2cpp_codegen_object_new(ZlibException_t3942143964_il2cpp_TypeInfo_var);
		ZlibException__ctor_m1084687637(L_12, L_11, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_12, NULL, DeflateStream_set_BufferSize_m952162683_RuntimeMethod_var);
	}

IL_005c:
	{
		ZlibBaseStream_t3561210688 * L_13 = __this->get__baseStream_1();
		int32_t L_14 = ___value0;
		NullCheck(L_13);
		L_13->set__bufferSize_9(L_14);
		return;
	}
}
// System.Void Pathfinding.Ionic.Zlib.DeflateStream::set_Strategy(Pathfinding.Ionic.Zlib.CompressionStrategy)
extern "C" IL2CPP_METHOD_ATTR void DeflateStream_set_Strategy_m6117387 (DeflateStream_t475334119 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DeflateStream_set_Strategy_m6117387_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = __this->get__disposed_3();
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		ObjectDisposedException_t21392786 * L_1 = (ObjectDisposedException_t21392786 *)il2cpp_codegen_object_new(ObjectDisposedException_t21392786_il2cpp_TypeInfo_var);
		ObjectDisposedException__ctor_m3603759869(L_1, _stringLiteral805964055, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, DeflateStream_set_Strategy_m6117387_RuntimeMethod_var);
	}

IL_0016:
	{
		ZlibBaseStream_t3561210688 * L_2 = __this->get__baseStream_1();
		int32_t L_3 = ___value0;
		NullCheck(L_2);
		L_2->set_Strategy_12(L_3);
		return;
	}
}
// System.Void Pathfinding.Ionic.Zlib.DeflateStream::Dispose(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void DeflateStream_Dispose_m2194587680 (DeflateStream_t475334119 * __this, bool ___disposing0, const RuntimeMethod* method)
{
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			bool L_0 = __this->get__disposed_3();
			if (L_0)
			{
				goto IL_002e;
			}
		}

IL_000b:
		{
			bool L_1 = ___disposing0;
			if (!L_1)
			{
				goto IL_0027;
			}
		}

IL_0011:
		{
			ZlibBaseStream_t3561210688 * L_2 = __this->get__baseStream_1();
			if (!L_2)
			{
				goto IL_0027;
			}
		}

IL_001c:
		{
			ZlibBaseStream_t3561210688 * L_3 = __this->get__baseStream_1();
			NullCheck(L_3);
			VirtActionInvoker0::Invoke(12 /* System.Void System.IO.Stream::Close() */, L_3);
		}

IL_0027:
		{
			__this->set__disposed_3((bool)1);
		}

IL_002e:
		{
			IL2CPP_LEAVE(0x3B, FINALLY_0033);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0033;
	}

FINALLY_0033:
	{ // begin finally (depth: 1)
		bool L_4 = ___disposing0;
		Stream_Dispose_m874059170(__this, L_4, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(51)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(51)
	{
		IL2CPP_JUMP_TBL(0x3B, IL_003b)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_003b:
	{
		return;
	}
}
// System.Boolean Pathfinding.Ionic.Zlib.DeflateStream::get_CanRead()
extern "C" IL2CPP_METHOD_ATTR bool DeflateStream_get_CanRead_m1238003853 (DeflateStream_t475334119 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DeflateStream_get_CanRead_m1238003853_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = __this->get__disposed_3();
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		ObjectDisposedException_t21392786 * L_1 = (ObjectDisposedException_t21392786 *)il2cpp_codegen_object_new(ObjectDisposedException_t21392786_il2cpp_TypeInfo_var);
		ObjectDisposedException__ctor_m3603759869(L_1, _stringLiteral805964055, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, DeflateStream_get_CanRead_m1238003853_RuntimeMethod_var);
	}

IL_0016:
	{
		ZlibBaseStream_t3561210688 * L_2 = __this->get__baseStream_1();
		NullCheck(L_2);
		Stream_t1273022909 * L_3 = L_2->get__stream_11();
		NullCheck(L_3);
		bool L_4 = VirtFuncInvoker0< bool >::Invoke(5 /* System.Boolean System.IO.Stream::get_CanRead() */, L_3);
		return L_4;
	}
}
// System.Boolean Pathfinding.Ionic.Zlib.DeflateStream::get_CanSeek()
extern "C" IL2CPP_METHOD_ATTR bool DeflateStream_get_CanSeek_m2542162380 (DeflateStream_t475334119 * __this, const RuntimeMethod* method)
{
	{
		return (bool)0;
	}
}
// System.Boolean Pathfinding.Ionic.Zlib.DeflateStream::get_CanWrite()
extern "C" IL2CPP_METHOD_ATTR bool DeflateStream_get_CanWrite_m2540911101 (DeflateStream_t475334119 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DeflateStream_get_CanWrite_m2540911101_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = __this->get__disposed_3();
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		ObjectDisposedException_t21392786 * L_1 = (ObjectDisposedException_t21392786 *)il2cpp_codegen_object_new(ObjectDisposedException_t21392786_il2cpp_TypeInfo_var);
		ObjectDisposedException__ctor_m3603759869(L_1, _stringLiteral805964055, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, DeflateStream_get_CanWrite_m2540911101_RuntimeMethod_var);
	}

IL_0016:
	{
		ZlibBaseStream_t3561210688 * L_2 = __this->get__baseStream_1();
		NullCheck(L_2);
		Stream_t1273022909 * L_3 = L_2->get__stream_11();
		NullCheck(L_3);
		bool L_4 = VirtFuncInvoker0< bool >::Invoke(7 /* System.Boolean System.IO.Stream::get_CanWrite() */, L_3);
		return L_4;
	}
}
// System.Void Pathfinding.Ionic.Zlib.DeflateStream::Flush()
extern "C" IL2CPP_METHOD_ATTR void DeflateStream_Flush_m393146983 (DeflateStream_t475334119 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DeflateStream_Flush_m393146983_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = __this->get__disposed_3();
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		ObjectDisposedException_t21392786 * L_1 = (ObjectDisposedException_t21392786 *)il2cpp_codegen_object_new(ObjectDisposedException_t21392786_il2cpp_TypeInfo_var);
		ObjectDisposedException__ctor_m3603759869(L_1, _stringLiteral805964055, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, DeflateStream_Flush_m393146983_RuntimeMethod_var);
	}

IL_0016:
	{
		ZlibBaseStream_t3561210688 * L_2 = __this->get__baseStream_1();
		NullCheck(L_2);
		VirtActionInvoker0::Invoke(13 /* System.Void System.IO.Stream::Flush() */, L_2);
		return;
	}
}
// System.Int64 Pathfinding.Ionic.Zlib.DeflateStream::get_Length()
extern "C" IL2CPP_METHOD_ATTR int64_t DeflateStream_get_Length_m1435244085 (DeflateStream_t475334119 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DeflateStream_get_Length_m1435244085_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotImplementedException_t3489357830 * L_0 = (NotImplementedException_t3489357830 *)il2cpp_codegen_object_new(NotImplementedException_t3489357830_il2cpp_TypeInfo_var);
		NotImplementedException__ctor_m3058704252(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, DeflateStream_get_Length_m1435244085_RuntimeMethod_var);
	}
}
// System.Int64 Pathfinding.Ionic.Zlib.DeflateStream::get_Position()
extern "C" IL2CPP_METHOD_ATTR int64_t DeflateStream_get_Position_m3939266960 (DeflateStream_t475334119 * __this, const RuntimeMethod* method)
{
	{
		ZlibBaseStream_t3561210688 * L_0 = __this->get__baseStream_1();
		NullCheck(L_0);
		int32_t L_1 = L_0->get__streamMode_2();
		if (L_1)
		{
			goto IL_0021;
		}
	}
	{
		ZlibBaseStream_t3561210688 * L_2 = __this->get__baseStream_1();
		NullCheck(L_2);
		ZlibCodec_t855427629 * L_3 = L_2->get__z_1();
		NullCheck(L_3);
		int64_t L_4 = L_3->get_TotalBytesOut_7();
		return L_4;
	}

IL_0021:
	{
		ZlibBaseStream_t3561210688 * L_5 = __this->get__baseStream_1();
		NullCheck(L_5);
		int32_t L_6 = L_5->get__streamMode_2();
		if ((!(((uint32_t)L_6) == ((uint32_t)1))))
		{
			goto IL_0043;
		}
	}
	{
		ZlibBaseStream_t3561210688 * L_7 = __this->get__baseStream_1();
		NullCheck(L_7);
		ZlibCodec_t855427629 * L_8 = L_7->get__z_1();
		NullCheck(L_8);
		int64_t L_9 = L_8->get_TotalBytesIn_3();
		return L_9;
	}

IL_0043:
	{
		return (((int64_t)((int64_t)0)));
	}
}
// System.Void Pathfinding.Ionic.Zlib.DeflateStream::set_Position(System.Int64)
extern "C" IL2CPP_METHOD_ATTR void DeflateStream_set_Position_m1334922663 (DeflateStream_t475334119 * __this, int64_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DeflateStream_set_Position_m1334922663_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotImplementedException_t3489357830 * L_0 = (NotImplementedException_t3489357830 *)il2cpp_codegen_object_new(NotImplementedException_t3489357830_il2cpp_TypeInfo_var);
		NotImplementedException__ctor_m3058704252(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, DeflateStream_set_Position_m1334922663_RuntimeMethod_var);
	}
}
// System.Int32 Pathfinding.Ionic.Zlib.DeflateStream::Read(System.Byte[],System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR int32_t DeflateStream_Read_m3537371485 (DeflateStream_t475334119 * __this, ByteU5BU5D_t4116647657* ___buffer0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DeflateStream_Read_m3537371485_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = __this->get__disposed_3();
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		ObjectDisposedException_t21392786 * L_1 = (ObjectDisposedException_t21392786 *)il2cpp_codegen_object_new(ObjectDisposedException_t21392786_il2cpp_TypeInfo_var);
		ObjectDisposedException__ctor_m3603759869(L_1, _stringLiteral805964055, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, DeflateStream_Read_m3537371485_RuntimeMethod_var);
	}

IL_0016:
	{
		ZlibBaseStream_t3561210688 * L_2 = __this->get__baseStream_1();
		ByteU5BU5D_t4116647657* L_3 = ___buffer0;
		int32_t L_4 = ___offset1;
		int32_t L_5 = ___count2;
		NullCheck(L_2);
		int32_t L_6 = VirtFuncInvoker3< int32_t, ByteU5BU5D_t4116647657*, int32_t, int32_t >::Invoke(14 /* System.Int32 System.IO.Stream::Read(System.Byte[],System.Int32,System.Int32) */, L_2, L_3, L_4, L_5);
		return L_6;
	}
}
// System.Int64 Pathfinding.Ionic.Zlib.DeflateStream::Seek(System.Int64,System.IO.SeekOrigin)
extern "C" IL2CPP_METHOD_ATTR int64_t DeflateStream_Seek_m514835037 (DeflateStream_t475334119 * __this, int64_t ___offset0, int32_t ___origin1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DeflateStream_Seek_m514835037_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotImplementedException_t3489357830 * L_0 = (NotImplementedException_t3489357830 *)il2cpp_codegen_object_new(NotImplementedException_t3489357830_il2cpp_TypeInfo_var);
		NotImplementedException__ctor_m3058704252(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, DeflateStream_Seek_m514835037_RuntimeMethod_var);
	}
}
// System.Void Pathfinding.Ionic.Zlib.DeflateStream::SetLength(System.Int64)
extern "C" IL2CPP_METHOD_ATTR void DeflateStream_SetLength_m376888871 (DeflateStream_t475334119 * __this, int64_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DeflateStream_SetLength_m376888871_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotImplementedException_t3489357830 * L_0 = (NotImplementedException_t3489357830 *)il2cpp_codegen_object_new(NotImplementedException_t3489357830_il2cpp_TypeInfo_var);
		NotImplementedException__ctor_m3058704252(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, DeflateStream_SetLength_m376888871_RuntimeMethod_var);
	}
}
// System.Void Pathfinding.Ionic.Zlib.DeflateStream::Write(System.Byte[],System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void DeflateStream_Write_m2646442581 (DeflateStream_t475334119 * __this, ByteU5BU5D_t4116647657* ___buffer0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DeflateStream_Write_m2646442581_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = __this->get__disposed_3();
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		ObjectDisposedException_t21392786 * L_1 = (ObjectDisposedException_t21392786 *)il2cpp_codegen_object_new(ObjectDisposedException_t21392786_il2cpp_TypeInfo_var);
		ObjectDisposedException__ctor_m3603759869(L_1, _stringLiteral805964055, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, DeflateStream_Write_m2646442581_RuntimeMethod_var);
	}

IL_0016:
	{
		ZlibBaseStream_t3561210688 * L_2 = __this->get__baseStream_1();
		ByteU5BU5D_t4116647657* L_3 = ___buffer0;
		int32_t L_4 = ___offset1;
		int32_t L_5 = ___count2;
		NullCheck(L_2);
		VirtActionInvoker3< ByteU5BU5D_t4116647657*, int32_t, int32_t >::Invoke(18 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_2, L_3, L_4, L_5);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Pathfinding.Ionic.Zlib.GZipStream::.cctor()
extern "C" IL2CPP_METHOD_ATTR void GZipStream__cctor_m403782270 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GZipStream__cctor_m403782270_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		DateTime_t3738529785  L_0;
		memset(&L_0, 0, sizeof(L_0));
		DateTime__ctor_m2956360140((&L_0), ((int32_t)1970), 1, 1, 0, 0, 0, 1, /*hidden argument*/NULL);
		((GZipStream_t4208907177_StaticFields*)il2cpp_codegen_static_fields_for(GZipStream_t4208907177_il2cpp_TypeInfo_var))->set__unixEpoch_9(L_0);
		IL2CPP_RUNTIME_CLASS_INIT(Encoding_t1523322056_il2cpp_TypeInfo_var);
		Encoding_t1523322056 * L_1 = Encoding_GetEncoding_m2599798446(NULL /*static, unused*/, _stringLiteral2805817557, /*hidden argument*/NULL);
		((GZipStream_t4208907177_StaticFields*)il2cpp_codegen_static_fields_for(GZipStream_t4208907177_il2cpp_TypeInfo_var))->set_iso8859dash1_10(L_1);
		return;
	}
}
// System.String Pathfinding.Ionic.Zlib.GZipStream::get_Comment()
extern "C" IL2CPP_METHOD_ATTR String_t* GZipStream_get_Comment_m241369808 (GZipStream_t4208907177 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get__Comment_7();
		return L_0;
	}
}
// System.Void Pathfinding.Ionic.Zlib.GZipStream::set_Comment(System.String)
extern "C" IL2CPP_METHOD_ATTR void GZipStream_set_Comment_m423742318 (GZipStream_t4208907177 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GZipStream_set_Comment_m423742318_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = __this->get__disposed_4();
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		ObjectDisposedException_t21392786 * L_1 = (ObjectDisposedException_t21392786 *)il2cpp_codegen_object_new(ObjectDisposedException_t21392786_il2cpp_TypeInfo_var);
		ObjectDisposedException__ctor_m3603759869(L_1, _stringLiteral2443272288, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, GZipStream_set_Comment_m423742318_RuntimeMethod_var);
	}

IL_0016:
	{
		String_t* L_2 = ___value0;
		__this->set__Comment_7(L_2);
		return;
	}
}
// System.String Pathfinding.Ionic.Zlib.GZipStream::get_FileName()
extern "C" IL2CPP_METHOD_ATTR String_t* GZipStream_get_FileName_m204659679 (GZipStream_t4208907177 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get__FileName_6();
		return L_0;
	}
}
// System.Void Pathfinding.Ionic.Zlib.GZipStream::set_FileName(System.String)
extern "C" IL2CPP_METHOD_ATTR void GZipStream_set_FileName_m3205917940 (GZipStream_t4208907177 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GZipStream_set_FileName_m3205917940_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = __this->get__disposed_4();
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		ObjectDisposedException_t21392786 * L_1 = (ObjectDisposedException_t21392786 *)il2cpp_codegen_object_new(ObjectDisposedException_t21392786_il2cpp_TypeInfo_var);
		ObjectDisposedException__ctor_m3603759869(L_1, _stringLiteral2443272288, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, GZipStream_set_FileName_m3205917940_RuntimeMethod_var);
	}

IL_0016:
	{
		String_t* L_2 = ___value0;
		__this->set__FileName_6(L_2);
		String_t* L_3 = __this->get__FileName_6();
		if (L_3)
		{
			goto IL_0029;
		}
	}
	{
		return;
	}

IL_0029:
	{
		String_t* L_4 = __this->get__FileName_6();
		NullCheck(L_4);
		int32_t L_5 = String_IndexOf_m1977622757(L_4, _stringLiteral3452614529, /*hidden argument*/NULL);
		if ((((int32_t)L_5) == ((int32_t)(-1))))
		{
			goto IL_005a;
		}
	}
	{
		String_t* L_6 = __this->get__FileName_6();
		NullCheck(L_6);
		String_t* L_7 = String_Replace_m1273907647(L_6, _stringLiteral3452614529, _stringLiteral3452614644, /*hidden argument*/NULL);
		__this->set__FileName_6(L_7);
	}

IL_005a:
	{
		String_t* L_8 = __this->get__FileName_6();
		NullCheck(L_8);
		bool L_9 = String_EndsWith_m1901926500(L_8, _stringLiteral3452614644, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_007a;
		}
	}
	{
		Exception_t * L_10 = (Exception_t *)il2cpp_codegen_object_new(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m1152696503(L_10, _stringLiteral2222283939, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, NULL, GZipStream_set_FileName_m3205917940_RuntimeMethod_var);
	}

IL_007a:
	{
		String_t* L_11 = __this->get__FileName_6();
		NullCheck(L_11);
		int32_t L_12 = String_IndexOf_m1977622757(L_11, _stringLiteral3452614644, /*hidden argument*/NULL);
		if ((((int32_t)L_12) == ((int32_t)(-1))))
		{
			goto IL_00a1;
		}
	}
	{
		String_t* L_13 = __this->get__FileName_6();
		IL2CPP_RUNTIME_CLASS_INIT(Path_t1605229823_il2cpp_TypeInfo_var);
		String_t* L_14 = Path_GetFileName_m1354558116(NULL /*static, unused*/, L_13, /*hidden argument*/NULL);
		__this->set__FileName_6(L_14);
	}

IL_00a1:
	{
		return;
	}
}
// System.Void Pathfinding.Ionic.Zlib.GZipStream::Dispose(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void GZipStream_Dispose_m1187061254 (GZipStream_t4208907177 * __this, bool ___disposing0, const RuntimeMethod* method)
{
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			bool L_0 = __this->get__disposed_4();
			if (L_0)
			{
				goto IL_003f;
			}
		}

IL_000b:
		{
			bool L_1 = ___disposing0;
			if (!L_1)
			{
				goto IL_0038;
			}
		}

IL_0011:
		{
			ZlibBaseStream_t3561210688 * L_2 = __this->get__baseStream_3();
			if (!L_2)
			{
				goto IL_0038;
			}
		}

IL_001c:
		{
			ZlibBaseStream_t3561210688 * L_3 = __this->get__baseStream_3();
			NullCheck(L_3);
			VirtActionInvoker0::Invoke(12 /* System.Void System.IO.Stream::Close() */, L_3);
			ZlibBaseStream_t3561210688 * L_4 = __this->get__baseStream_3();
			NullCheck(L_4);
			int32_t L_5 = ZlibBaseStream_get_Crc32_m3565177866(L_4, /*hidden argument*/NULL);
			__this->set__Crc32_8(L_5);
		}

IL_0038:
		{
			__this->set__disposed_4((bool)1);
		}

IL_003f:
		{
			IL2CPP_LEAVE(0x4C, FINALLY_0044);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0044;
	}

FINALLY_0044:
	{ // begin finally (depth: 1)
		bool L_6 = ___disposing0;
		Stream_Dispose_m874059170(__this, L_6, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(68)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(68)
	{
		IL2CPP_JUMP_TBL(0x4C, IL_004c)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_004c:
	{
		return;
	}
}
// System.Boolean Pathfinding.Ionic.Zlib.GZipStream::get_CanRead()
extern "C" IL2CPP_METHOD_ATTR bool GZipStream_get_CanRead_m1470299676 (GZipStream_t4208907177 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GZipStream_get_CanRead_m1470299676_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = __this->get__disposed_4();
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		ObjectDisposedException_t21392786 * L_1 = (ObjectDisposedException_t21392786 *)il2cpp_codegen_object_new(ObjectDisposedException_t21392786_il2cpp_TypeInfo_var);
		ObjectDisposedException__ctor_m3603759869(L_1, _stringLiteral2443272288, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, GZipStream_get_CanRead_m1470299676_RuntimeMethod_var);
	}

IL_0016:
	{
		ZlibBaseStream_t3561210688 * L_2 = __this->get__baseStream_3();
		NullCheck(L_2);
		Stream_t1273022909 * L_3 = L_2->get__stream_11();
		NullCheck(L_3);
		bool L_4 = VirtFuncInvoker0< bool >::Invoke(5 /* System.Boolean System.IO.Stream::get_CanRead() */, L_3);
		return L_4;
	}
}
// System.Boolean Pathfinding.Ionic.Zlib.GZipStream::get_CanSeek()
extern "C" IL2CPP_METHOD_ATTR bool GZipStream_get_CanSeek_m3780056975 (GZipStream_t4208907177 * __this, const RuntimeMethod* method)
{
	{
		return (bool)0;
	}
}
// System.Boolean Pathfinding.Ionic.Zlib.GZipStream::get_CanWrite()
extern "C" IL2CPP_METHOD_ATTR bool GZipStream_get_CanWrite_m1194543746 (GZipStream_t4208907177 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GZipStream_get_CanWrite_m1194543746_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = __this->get__disposed_4();
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		ObjectDisposedException_t21392786 * L_1 = (ObjectDisposedException_t21392786 *)il2cpp_codegen_object_new(ObjectDisposedException_t21392786_il2cpp_TypeInfo_var);
		ObjectDisposedException__ctor_m3603759869(L_1, _stringLiteral2443272288, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, GZipStream_get_CanWrite_m1194543746_RuntimeMethod_var);
	}

IL_0016:
	{
		ZlibBaseStream_t3561210688 * L_2 = __this->get__baseStream_3();
		NullCheck(L_2);
		Stream_t1273022909 * L_3 = L_2->get__stream_11();
		NullCheck(L_3);
		bool L_4 = VirtFuncInvoker0< bool >::Invoke(7 /* System.Boolean System.IO.Stream::get_CanWrite() */, L_3);
		return L_4;
	}
}
// System.Void Pathfinding.Ionic.Zlib.GZipStream::Flush()
extern "C" IL2CPP_METHOD_ATTR void GZipStream_Flush_m1454360200 (GZipStream_t4208907177 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GZipStream_Flush_m1454360200_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = __this->get__disposed_4();
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		ObjectDisposedException_t21392786 * L_1 = (ObjectDisposedException_t21392786 *)il2cpp_codegen_object_new(ObjectDisposedException_t21392786_il2cpp_TypeInfo_var);
		ObjectDisposedException__ctor_m3603759869(L_1, _stringLiteral2443272288, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, GZipStream_Flush_m1454360200_RuntimeMethod_var);
	}

IL_0016:
	{
		ZlibBaseStream_t3561210688 * L_2 = __this->get__baseStream_3();
		NullCheck(L_2);
		VirtActionInvoker0::Invoke(13 /* System.Void System.IO.Stream::Flush() */, L_2);
		return;
	}
}
// System.Int64 Pathfinding.Ionic.Zlib.GZipStream::get_Length()
extern "C" IL2CPP_METHOD_ATTR int64_t GZipStream_get_Length_m3926558001 (GZipStream_t4208907177 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GZipStream_get_Length_m3926558001_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotImplementedException_t3489357830 * L_0 = (NotImplementedException_t3489357830 *)il2cpp_codegen_object_new(NotImplementedException_t3489357830_il2cpp_TypeInfo_var);
		NotImplementedException__ctor_m3058704252(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, GZipStream_get_Length_m3926558001_RuntimeMethod_var);
	}
}
// System.Int64 Pathfinding.Ionic.Zlib.GZipStream::get_Position()
extern "C" IL2CPP_METHOD_ATTR int64_t GZipStream_get_Position_m737728905 (GZipStream_t4208907177 * __this, const RuntimeMethod* method)
{
	{
		ZlibBaseStream_t3561210688 * L_0 = __this->get__baseStream_3();
		NullCheck(L_0);
		int32_t L_1 = L_0->get__streamMode_2();
		if (L_1)
		{
			goto IL_0029;
		}
	}
	{
		ZlibBaseStream_t3561210688 * L_2 = __this->get__baseStream_3();
		NullCheck(L_2);
		ZlibCodec_t855427629 * L_3 = L_2->get__z_1();
		NullCheck(L_3);
		int64_t L_4 = L_3->get_TotalBytesOut_7();
		int32_t L_5 = __this->get__headerByteCount_2();
		return ((int64_t)il2cpp_codegen_add((int64_t)L_4, (int64_t)(((int64_t)((int64_t)L_5)))));
	}

IL_0029:
	{
		ZlibBaseStream_t3561210688 * L_6 = __this->get__baseStream_3();
		NullCheck(L_6);
		int32_t L_7 = L_6->get__streamMode_2();
		if ((!(((uint32_t)L_7) == ((uint32_t)1))))
		{
			goto IL_0058;
		}
	}
	{
		ZlibBaseStream_t3561210688 * L_8 = __this->get__baseStream_3();
		NullCheck(L_8);
		ZlibCodec_t855427629 * L_9 = L_8->get__z_1();
		NullCheck(L_9);
		int64_t L_10 = L_9->get_TotalBytesIn_3();
		ZlibBaseStream_t3561210688 * L_11 = __this->get__baseStream_3();
		NullCheck(L_11);
		int32_t L_12 = L_11->get__gzipHeaderByteCount_17();
		return ((int64_t)il2cpp_codegen_add((int64_t)L_10, (int64_t)(((int64_t)((int64_t)L_12)))));
	}

IL_0058:
	{
		return (((int64_t)((int64_t)0)));
	}
}
// System.Void Pathfinding.Ionic.Zlib.GZipStream::set_Position(System.Int64)
extern "C" IL2CPP_METHOD_ATTR void GZipStream_set_Position_m3742896157 (GZipStream_t4208907177 * __this, int64_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GZipStream_set_Position_m3742896157_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotImplementedException_t3489357830 * L_0 = (NotImplementedException_t3489357830 *)il2cpp_codegen_object_new(NotImplementedException_t3489357830_il2cpp_TypeInfo_var);
		NotImplementedException__ctor_m3058704252(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, GZipStream_set_Position_m3742896157_RuntimeMethod_var);
	}
}
// System.Int32 Pathfinding.Ionic.Zlib.GZipStream::Read(System.Byte[],System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR int32_t GZipStream_Read_m1010400840 (GZipStream_t4208907177 * __this, ByteU5BU5D_t4116647657* ___buffer0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GZipStream_Read_m1010400840_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		bool L_0 = __this->get__disposed_4();
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		ObjectDisposedException_t21392786 * L_1 = (ObjectDisposedException_t21392786 *)il2cpp_codegen_object_new(ObjectDisposedException_t21392786_il2cpp_TypeInfo_var);
		ObjectDisposedException__ctor_m3603759869(L_1, _stringLiteral2443272288, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, GZipStream_Read_m1010400840_RuntimeMethod_var);
	}

IL_0016:
	{
		ZlibBaseStream_t3561210688 * L_2 = __this->get__baseStream_3();
		ByteU5BU5D_t4116647657* L_3 = ___buffer0;
		int32_t L_4 = ___offset1;
		int32_t L_5 = ___count2;
		NullCheck(L_2);
		int32_t L_6 = VirtFuncInvoker3< int32_t, ByteU5BU5D_t4116647657*, int32_t, int32_t >::Invoke(14 /* System.Int32 System.IO.Stream::Read(System.Byte[],System.Int32,System.Int32) */, L_2, L_3, L_4, L_5);
		V_0 = L_6;
		bool L_7 = __this->get__firstReadDone_5();
		if (L_7)
		{
			goto IL_0059;
		}
	}
	{
		__this->set__firstReadDone_5((bool)1);
		ZlibBaseStream_t3561210688 * L_8 = __this->get__baseStream_3();
		NullCheck(L_8);
		String_t* L_9 = L_8->get__GzipFileName_14();
		GZipStream_set_FileName_m3205917940(__this, L_9, /*hidden argument*/NULL);
		ZlibBaseStream_t3561210688 * L_10 = __this->get__baseStream_3();
		NullCheck(L_10);
		String_t* L_11 = L_10->get__GzipComment_15();
		GZipStream_set_Comment_m423742318(__this, L_11, /*hidden argument*/NULL);
	}

IL_0059:
	{
		int32_t L_12 = V_0;
		return L_12;
	}
}
// System.Int64 Pathfinding.Ionic.Zlib.GZipStream::Seek(System.Int64,System.IO.SeekOrigin)
extern "C" IL2CPP_METHOD_ATTR int64_t GZipStream_Seek_m302471040 (GZipStream_t4208907177 * __this, int64_t ___offset0, int32_t ___origin1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GZipStream_Seek_m302471040_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotImplementedException_t3489357830 * L_0 = (NotImplementedException_t3489357830 *)il2cpp_codegen_object_new(NotImplementedException_t3489357830_il2cpp_TypeInfo_var);
		NotImplementedException__ctor_m3058704252(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, GZipStream_Seek_m302471040_RuntimeMethod_var);
	}
}
// System.Void Pathfinding.Ionic.Zlib.GZipStream::SetLength(System.Int64)
extern "C" IL2CPP_METHOD_ATTR void GZipStream_SetLength_m2241988901 (GZipStream_t4208907177 * __this, int64_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GZipStream_SetLength_m2241988901_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotImplementedException_t3489357830 * L_0 = (NotImplementedException_t3489357830 *)il2cpp_codegen_object_new(NotImplementedException_t3489357830_il2cpp_TypeInfo_var);
		NotImplementedException__ctor_m3058704252(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, GZipStream_SetLength_m2241988901_RuntimeMethod_var);
	}
}
// System.Void Pathfinding.Ionic.Zlib.GZipStream::Write(System.Byte[],System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void GZipStream_Write_m3471208808 (GZipStream_t4208907177 * __this, ByteU5BU5D_t4116647657* ___buffer0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GZipStream_Write_m3471208808_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = __this->get__disposed_4();
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		ObjectDisposedException_t21392786 * L_1 = (ObjectDisposedException_t21392786 *)il2cpp_codegen_object_new(ObjectDisposedException_t21392786_il2cpp_TypeInfo_var);
		ObjectDisposedException__ctor_m3603759869(L_1, _stringLiteral2443272288, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, GZipStream_Write_m3471208808_RuntimeMethod_var);
	}

IL_0016:
	{
		ZlibBaseStream_t3561210688 * L_2 = __this->get__baseStream_3();
		NullCheck(L_2);
		int32_t L_3 = L_2->get__streamMode_2();
		if ((!(((uint32_t)L_3) == ((uint32_t)2))))
		{
			goto IL_004e;
		}
	}
	{
		ZlibBaseStream_t3561210688 * L_4 = __this->get__baseStream_3();
		NullCheck(L_4);
		bool L_5 = ZlibBaseStream_get__wantCompress_m408635950(L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0048;
		}
	}
	{
		int32_t L_6 = GZipStream_EmitHeader_m1512102614(__this, /*hidden argument*/NULL);
		__this->set__headerByteCount_2(L_6);
		goto IL_004e;
	}

IL_0048:
	{
		InvalidOperationException_t56020091 * L_7 = (InvalidOperationException_t56020091 *)il2cpp_codegen_object_new(InvalidOperationException_t56020091_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m2734335978(L_7, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, NULL, GZipStream_Write_m3471208808_RuntimeMethod_var);
	}

IL_004e:
	{
		ZlibBaseStream_t3561210688 * L_8 = __this->get__baseStream_3();
		ByteU5BU5D_t4116647657* L_9 = ___buffer0;
		int32_t L_10 = ___offset1;
		int32_t L_11 = ___count2;
		NullCheck(L_8);
		VirtActionInvoker3< ByteU5BU5D_t4116647657*, int32_t, int32_t >::Invoke(18 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_8, L_9, L_10, L_11);
		return;
	}
}
// System.Int32 Pathfinding.Ionic.Zlib.GZipStream::EmitHeader()
extern "C" IL2CPP_METHOD_ATTR int32_t GZipStream_EmitHeader_m1512102614 (GZipStream_t4208907177 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GZipStream_EmitHeader_m1512102614_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_t4116647657* V_0 = NULL;
	ByteU5BU5D_t4116647657* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	ByteU5BU5D_t4116647657* V_5 = NULL;
	int32_t V_6 = 0;
	uint8_t V_7 = 0x0;
	TimeSpan_t881159249  V_8;
	memset(&V_8, 0, sizeof(V_8));
	int32_t V_9 = 0;
	ByteU5BU5D_t4116647657* G_B3_0 = NULL;
	ByteU5BU5D_t4116647657* G_B6_0 = NULL;
	int32_t G_B9_0 = 0;
	int32_t G_B12_0 = 0;
	{
		String_t* L_0 = GZipStream_get_Comment_m241369808(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		G_B3_0 = ((ByteU5BU5D_t4116647657*)(NULL));
		goto IL_0021;
	}

IL_0011:
	{
		IL2CPP_RUNTIME_CLASS_INIT(GZipStream_t4208907177_il2cpp_TypeInfo_var);
		Encoding_t1523322056 * L_1 = ((GZipStream_t4208907177_StaticFields*)il2cpp_codegen_static_fields_for(GZipStream_t4208907177_il2cpp_TypeInfo_var))->get_iso8859dash1_10();
		String_t* L_2 = GZipStream_get_Comment_m241369808(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		ByteU5BU5D_t4116647657* L_3 = VirtFuncInvoker1< ByteU5BU5D_t4116647657*, String_t* >::Invoke(10 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_1, L_2);
		G_B3_0 = L_3;
	}

IL_0021:
	{
		V_0 = G_B3_0;
		String_t* L_4 = GZipStream_get_FileName_m204659679(__this, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_0033;
		}
	}
	{
		G_B6_0 = ((ByteU5BU5D_t4116647657*)(NULL));
		goto IL_0043;
	}

IL_0033:
	{
		IL2CPP_RUNTIME_CLASS_INIT(GZipStream_t4208907177_il2cpp_TypeInfo_var);
		Encoding_t1523322056 * L_5 = ((GZipStream_t4208907177_StaticFields*)il2cpp_codegen_static_fields_for(GZipStream_t4208907177_il2cpp_TypeInfo_var))->get_iso8859dash1_10();
		String_t* L_6 = GZipStream_get_FileName_m204659679(__this, /*hidden argument*/NULL);
		NullCheck(L_5);
		ByteU5BU5D_t4116647657* L_7 = VirtFuncInvoker1< ByteU5BU5D_t4116647657*, String_t* >::Invoke(10 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_5, L_6);
		G_B6_0 = L_7;
	}

IL_0043:
	{
		V_1 = G_B6_0;
		String_t* L_8 = GZipStream_get_Comment_m241369808(__this, /*hidden argument*/NULL);
		if (L_8)
		{
			goto IL_0055;
		}
	}
	{
		G_B9_0 = 0;
		goto IL_005a;
	}

IL_0055:
	{
		ByteU5BU5D_t4116647657* L_9 = V_0;
		NullCheck(L_9);
		G_B9_0 = ((int32_t)il2cpp_codegen_add((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_9)->max_length)))), (int32_t)1));
	}

IL_005a:
	{
		V_2 = G_B9_0;
		String_t* L_10 = GZipStream_get_FileName_m204659679(__this, /*hidden argument*/NULL);
		if (L_10)
		{
			goto IL_006c;
		}
	}
	{
		G_B12_0 = 0;
		goto IL_0071;
	}

IL_006c:
	{
		ByteU5BU5D_t4116647657* L_11 = V_1;
		NullCheck(L_11);
		G_B12_0 = ((int32_t)il2cpp_codegen_add((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_11)->max_length)))), (int32_t)1));
	}

IL_0071:
	{
		V_3 = G_B12_0;
		int32_t L_12 = V_2;
		int32_t L_13 = V_3;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)10), (int32_t)L_12)), (int32_t)L_13));
		int32_t L_14 = V_4;
		ByteU5BU5D_t4116647657* L_15 = (ByteU5BU5D_t4116647657*)SZArrayNew(ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var, (uint32_t)L_14);
		V_5 = L_15;
		V_6 = 0;
		ByteU5BU5D_t4116647657* L_16 = V_5;
		int32_t L_17 = V_6;
		int32_t L_18 = L_17;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_18, (int32_t)1));
		NullCheck(L_16);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(L_18), (uint8_t)((int32_t)31));
		ByteU5BU5D_t4116647657* L_19 = V_5;
		int32_t L_20 = V_6;
		int32_t L_21 = L_20;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_21, (int32_t)1));
		NullCheck(L_19);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(L_21), (uint8_t)((int32_t)139));
		ByteU5BU5D_t4116647657* L_22 = V_5;
		int32_t L_23 = V_6;
		int32_t L_24 = L_23;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_24, (int32_t)1));
		NullCheck(L_22);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(L_24), (uint8_t)8);
		V_7 = (uint8_t)0;
		String_t* L_25 = GZipStream_get_Comment_m241369808(__this, /*hidden argument*/NULL);
		if (!L_25)
		{
			goto IL_00c2;
		}
	}
	{
		uint8_t L_26 = V_7;
		V_7 = (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)L_26^(int32_t)((int32_t)16))))));
	}

IL_00c2:
	{
		String_t* L_27 = GZipStream_get_FileName_m204659679(__this, /*hidden argument*/NULL);
		if (!L_27)
		{
			goto IL_00d4;
		}
	}
	{
		uint8_t L_28 = V_7;
		V_7 = (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)L_28^(int32_t)8)))));
	}

IL_00d4:
	{
		ByteU5BU5D_t4116647657* L_29 = V_5;
		int32_t L_30 = V_6;
		int32_t L_31 = L_30;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_31, (int32_t)1));
		uint8_t L_32 = V_7;
		NullCheck(L_29);
		(L_29)->SetAt(static_cast<il2cpp_array_size_t>(L_31), (uint8_t)L_32);
		Nullable_1_t1166124571 * L_33 = __this->get_address_of_LastModified_1();
		bool L_34 = Nullable_1_get_HasValue_m3507792363((Nullable_1_t1166124571 *)L_33, /*hidden argument*/Nullable_1_get_HasValue_m3507792363_RuntimeMethod_var);
		if (L_34)
		{
			goto IL_0100;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_t3738529785_il2cpp_TypeInfo_var);
		DateTime_t3738529785  L_35 = DateTime_get_Now_m1277138875(NULL /*static, unused*/, /*hidden argument*/NULL);
		Nullable_1_t1166124571  L_36;
		memset(&L_36, 0, sizeof(L_36));
		Nullable_1__ctor_m1631813323((&L_36), L_35, /*hidden argument*/Nullable_1__ctor_m1631813323_RuntimeMethod_var);
		__this->set_LastModified_1(L_36);
	}

IL_0100:
	{
		Nullable_1_t1166124571 * L_37 = __this->get_address_of_LastModified_1();
		DateTime_t3738529785  L_38 = Nullable_1_get_Value_m3011339833((Nullable_1_t1166124571 *)L_37, /*hidden argument*/Nullable_1_get_Value_m3011339833_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(GZipStream_t4208907177_il2cpp_TypeInfo_var);
		DateTime_t3738529785  L_39 = ((GZipStream_t4208907177_StaticFields*)il2cpp_codegen_static_fields_for(GZipStream_t4208907177_il2cpp_TypeInfo_var))->get__unixEpoch_9();
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_t3738529785_il2cpp_TypeInfo_var);
		TimeSpan_t881159249  L_40 = DateTime_op_Subtraction_m3579235380(NULL /*static, unused*/, L_38, L_39, /*hidden argument*/NULL);
		V_8 = L_40;
		double L_41 = TimeSpan_get_TotalSeconds_m4083325051((TimeSpan_t881159249 *)(&V_8), /*hidden argument*/NULL);
		V_9 = (((int32_t)((int32_t)L_41)));
		int32_t L_42 = V_9;
		IL2CPP_RUNTIME_CLASS_INIT(BitConverter_t3118986983_il2cpp_TypeInfo_var);
		ByteU5BU5D_t4116647657* L_43 = BitConverter_GetBytes_m1040762521(NULL /*static, unused*/, L_42, /*hidden argument*/NULL);
		ByteU5BU5D_t4116647657* L_44 = V_5;
		int32_t L_45 = V_6;
		Array_Copy_m344457298(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_43, 0, (RuntimeArray *)(RuntimeArray *)L_44, L_45, 4, /*hidden argument*/NULL);
		int32_t L_46 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_46, (int32_t)4));
		ByteU5BU5D_t4116647657* L_47 = V_5;
		int32_t L_48 = V_6;
		int32_t L_49 = L_48;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_49, (int32_t)1));
		NullCheck(L_47);
		(L_47)->SetAt(static_cast<il2cpp_array_size_t>(L_49), (uint8_t)0);
		ByteU5BU5D_t4116647657* L_50 = V_5;
		int32_t L_51 = V_6;
		int32_t L_52 = L_51;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_52, (int32_t)1));
		NullCheck(L_50);
		(L_50)->SetAt(static_cast<il2cpp_array_size_t>(L_52), (uint8_t)((int32_t)255));
		int32_t L_53 = V_3;
		if (!L_53)
		{
			goto IL_017a;
		}
	}
	{
		ByteU5BU5D_t4116647657* L_54 = V_1;
		ByteU5BU5D_t4116647657* L_55 = V_5;
		int32_t L_56 = V_6;
		int32_t L_57 = V_3;
		Array_Copy_m344457298(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_54, 0, (RuntimeArray *)(RuntimeArray *)L_55, L_56, ((int32_t)il2cpp_codegen_subtract((int32_t)L_57, (int32_t)1)), /*hidden argument*/NULL);
		int32_t L_58 = V_6;
		int32_t L_59 = V_3;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_58, (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_59, (int32_t)1))));
		ByteU5BU5D_t4116647657* L_60 = V_5;
		int32_t L_61 = V_6;
		int32_t L_62 = L_61;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_62, (int32_t)1));
		NullCheck(L_60);
		(L_60)->SetAt(static_cast<il2cpp_array_size_t>(L_62), (uint8_t)0);
	}

IL_017a:
	{
		int32_t L_63 = V_2;
		if (!L_63)
		{
			goto IL_01a1;
		}
	}
	{
		ByteU5BU5D_t4116647657* L_64 = V_0;
		ByteU5BU5D_t4116647657* L_65 = V_5;
		int32_t L_66 = V_6;
		int32_t L_67 = V_2;
		Array_Copy_m344457298(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_64, 0, (RuntimeArray *)(RuntimeArray *)L_65, L_66, ((int32_t)il2cpp_codegen_subtract((int32_t)L_67, (int32_t)1)), /*hidden argument*/NULL);
		int32_t L_68 = V_6;
		int32_t L_69 = V_2;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_68, (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_69, (int32_t)1))));
		ByteU5BU5D_t4116647657* L_70 = V_5;
		int32_t L_71 = V_6;
		int32_t L_72 = L_71;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_72, (int32_t)1));
		NullCheck(L_70);
		(L_70)->SetAt(static_cast<il2cpp_array_size_t>(L_72), (uint8_t)0);
	}

IL_01a1:
	{
		ZlibBaseStream_t3561210688 * L_73 = __this->get__baseStream_3();
		NullCheck(L_73);
		Stream_t1273022909 * L_74 = L_73->get__stream_11();
		ByteU5BU5D_t4116647657* L_75 = V_5;
		ByteU5BU5D_t4116647657* L_76 = V_5;
		NullCheck(L_76);
		NullCheck(L_74);
		VirtActionInvoker3< ByteU5BU5D_t4116647657*, int32_t, int32_t >::Invoke(18 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_74, L_75, 0, (((int32_t)((int32_t)(((RuntimeArray *)L_76)->max_length)))));
		ByteU5BU5D_t4116647657* L_77 = V_5;
		NullCheck(L_77);
		return (((int32_t)((int32_t)(((RuntimeArray *)L_77)->max_length))));
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
// System.Void Pathfinding.Ionic.Zlib.InfTree::.ctor()
extern "C" IL2CPP_METHOD_ATTR void InfTree__ctor_m1906075377 (InfTree_t2692649235 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Pathfinding.Ionic.Zlib.InfTree::.cctor()
extern "C" IL2CPP_METHOD_ATTR void InfTree__cctor_m3760730896 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InfTree__cctor_m3760730896_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Int32U5BU5D_t385246372* L_0 = (Int32U5BU5D_t385246372*)SZArrayNew(Int32U5BU5D_t385246372_il2cpp_TypeInfo_var, (uint32_t)((int32_t)1536));
		Int32U5BU5D_t385246372* L_1 = L_0;
		RuntimeFieldHandle_t1871169219  L_2 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3EU7B99f15b47U2D93f0U2D442dU2Da950U2D84e2e79a92c8U7D_t3841250540____U24fieldU2D5_1_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m3117905507(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_1, L_2, /*hidden argument*/NULL);
		((InfTree_t2692649235_StaticFields*)il2cpp_codegen_static_fields_for(InfTree_t2692649235_il2cpp_TypeInfo_var))->set_fixed_tl_0(L_1);
		Int32U5BU5D_t385246372* L_3 = (Int32U5BU5D_t385246372*)SZArrayNew(Int32U5BU5D_t385246372_il2cpp_TypeInfo_var, (uint32_t)((int32_t)96));
		Int32U5BU5D_t385246372* L_4 = L_3;
		RuntimeFieldHandle_t1871169219  L_5 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3EU7B99f15b47U2D93f0U2D442dU2Da950U2D84e2e79a92c8U7D_t3841250540____U24fieldU2D6_2_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m3117905507(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_4, L_5, /*hidden argument*/NULL);
		((InfTree_t2692649235_StaticFields*)il2cpp_codegen_static_fields_for(InfTree_t2692649235_il2cpp_TypeInfo_var))->set_fixed_td_1(L_4);
		Int32U5BU5D_t385246372* L_6 = (Int32U5BU5D_t385246372*)SZArrayNew(Int32U5BU5D_t385246372_il2cpp_TypeInfo_var, (uint32_t)((int32_t)31));
		Int32U5BU5D_t385246372* L_7 = L_6;
		RuntimeFieldHandle_t1871169219  L_8 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3EU7B99f15b47U2D93f0U2D442dU2Da950U2D84e2e79a92c8U7D_t3841250540____U24fieldU2D7_3_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m3117905507(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_7, L_8, /*hidden argument*/NULL);
		((InfTree_t2692649235_StaticFields*)il2cpp_codegen_static_fields_for(InfTree_t2692649235_il2cpp_TypeInfo_var))->set_cplens_2(L_7);
		Int32U5BU5D_t385246372* L_9 = (Int32U5BU5D_t385246372*)SZArrayNew(Int32U5BU5D_t385246372_il2cpp_TypeInfo_var, (uint32_t)((int32_t)31));
		Int32U5BU5D_t385246372* L_10 = L_9;
		RuntimeFieldHandle_t1871169219  L_11 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3EU7B99f15b47U2D93f0U2D442dU2Da950U2D84e2e79a92c8U7D_t3841250540____U24fieldU2D8_4_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m3117905507(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_10, L_11, /*hidden argument*/NULL);
		((InfTree_t2692649235_StaticFields*)il2cpp_codegen_static_fields_for(InfTree_t2692649235_il2cpp_TypeInfo_var))->set_cplext_3(L_10);
		Int32U5BU5D_t385246372* L_12 = (Int32U5BU5D_t385246372*)SZArrayNew(Int32U5BU5D_t385246372_il2cpp_TypeInfo_var, (uint32_t)((int32_t)30));
		Int32U5BU5D_t385246372* L_13 = L_12;
		RuntimeFieldHandle_t1871169219  L_14 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3EU7B99f15b47U2D93f0U2D442dU2Da950U2D84e2e79a92c8U7D_t3841250540____U24fieldU2D9_5_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m3117905507(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_13, L_14, /*hidden argument*/NULL);
		((InfTree_t2692649235_StaticFields*)il2cpp_codegen_static_fields_for(InfTree_t2692649235_il2cpp_TypeInfo_var))->set_cpdist_4(L_13);
		Int32U5BU5D_t385246372* L_15 = (Int32U5BU5D_t385246372*)SZArrayNew(Int32U5BU5D_t385246372_il2cpp_TypeInfo_var, (uint32_t)((int32_t)30));
		Int32U5BU5D_t385246372* L_16 = L_15;
		RuntimeFieldHandle_t1871169219  L_17 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3EU7B99f15b47U2D93f0U2D442dU2Da950U2D84e2e79a92c8U7D_t3841250540____U24fieldU2DA_6_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m3117905507(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_16, L_17, /*hidden argument*/NULL);
		((InfTree_t2692649235_StaticFields*)il2cpp_codegen_static_fields_for(InfTree_t2692649235_il2cpp_TypeInfo_var))->set_cpdext_5(L_16);
		return;
	}
}
// System.Int32 Pathfinding.Ionic.Zlib.InfTree::huft_build(System.Int32[],System.Int32,System.Int32,System.Int32,System.Int32[],System.Int32[],System.Int32[],System.Int32[],System.Int32[],System.Int32[],System.Int32[])
extern "C" IL2CPP_METHOD_ATTR int32_t InfTree_huft_build_m2186021824 (InfTree_t2692649235 * __this, Int32U5BU5D_t385246372* ___b0, int32_t ___bindex1, int32_t ___n2, int32_t ___s3, Int32U5BU5D_t385246372* ___d4, Int32U5BU5D_t385246372* ___e5, Int32U5BU5D_t385246372* ___t6, Int32U5BU5D_t385246372* ___m7, Int32U5BU5D_t385246372* ___hp8, Int32U5BU5D_t385246372* ___hn9, Int32U5BU5D_t385246372* ___v10, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	int32_t V_12 = 0;
	int32_t V_13 = 0;
	int32_t V_14 = 0;
	int32_t V_15 = 0;
	int32_t G_B38_0 = 0;
	int32_t G_B56_0 = 0;
	Int32U5BU5D_t385246372* G_B56_1 = NULL;
	int32_t G_B55_0 = 0;
	Int32U5BU5D_t385246372* G_B55_1 = NULL;
	int32_t G_B57_0 = 0;
	int32_t G_B57_1 = 0;
	Int32U5BU5D_t385246372* G_B57_2 = NULL;
	int32_t G_B75_0 = 0;
	{
		V_9 = 0;
		int32_t L_0 = ___n2;
		V_4 = L_0;
	}

IL_0006:
	{
		Int32U5BU5D_t385246372* L_1 = __this->get_c_8();
		Int32U5BU5D_t385246372* L_2 = ___b0;
		int32_t L_3 = ___bindex1;
		int32_t L_4 = V_9;
		NullCheck(L_2);
		int32_t L_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)L_4));
		int32_t L_6 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		NullCheck(L_1);
		int32_t* L_7 = ((L_1)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)));
		int32_t L_8 = *((int32_t*)L_7);
		*((int32_t*)L_7) = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1));
		int32_t L_9 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1));
		int32_t L_10 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_10, (int32_t)1));
		int32_t L_11 = V_4;
		if (L_11)
		{
			goto IL_0006;
		}
	}
	{
		Int32U5BU5D_t385246372* L_12 = __this->get_c_8();
		NullCheck(L_12);
		int32_t L_13 = 0;
		int32_t L_14 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		int32_t L_15 = ___n2;
		if ((!(((uint32_t)L_14) == ((uint32_t)L_15))))
		{
			goto IL_0049;
		}
	}
	{
		Int32U5BU5D_t385246372* L_16 = ___t6;
		NullCheck(L_16);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)(-1));
		Int32U5BU5D_t385246372* L_17 = ___m7;
		NullCheck(L_17);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)0);
		return 0;
	}

IL_0049:
	{
		Int32U5BU5D_t385246372* L_18 = ___m7;
		NullCheck(L_18);
		int32_t L_19 = 0;
		int32_t L_20 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		V_7 = L_20;
		V_5 = 1;
		goto IL_0070;
	}

IL_0057:
	{
		Int32U5BU5D_t385246372* L_21 = __this->get_c_8();
		int32_t L_22 = V_5;
		NullCheck(L_21);
		int32_t L_23 = L_22;
		int32_t L_24 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		if (!L_24)
		{
			goto IL_006a;
		}
	}
	{
		goto IL_0079;
	}

IL_006a:
	{
		int32_t L_25 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_25, (int32_t)1));
	}

IL_0070:
	{
		int32_t L_26 = V_5;
		if ((((int32_t)L_26) <= ((int32_t)((int32_t)15))))
		{
			goto IL_0057;
		}
	}

IL_0079:
	{
		int32_t L_27 = V_5;
		V_6 = L_27;
		int32_t L_28 = V_7;
		int32_t L_29 = V_5;
		if ((((int32_t)L_28) >= ((int32_t)L_29)))
		{
			goto IL_008a;
		}
	}
	{
		int32_t L_30 = V_5;
		V_7 = L_30;
	}

IL_008a:
	{
		V_4 = ((int32_t)15);
		goto IL_00ac;
	}

IL_0093:
	{
		Int32U5BU5D_t385246372* L_31 = __this->get_c_8();
		int32_t L_32 = V_4;
		NullCheck(L_31);
		int32_t L_33 = L_32;
		int32_t L_34 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		if (!L_34)
		{
			goto IL_00a6;
		}
	}
	{
		goto IL_00b3;
	}

IL_00a6:
	{
		int32_t L_35 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_35, (int32_t)1));
	}

IL_00ac:
	{
		int32_t L_36 = V_4;
		if (L_36)
		{
			goto IL_0093;
		}
	}

IL_00b3:
	{
		int32_t L_37 = V_4;
		V_2 = L_37;
		int32_t L_38 = V_7;
		int32_t L_39 = V_4;
		if ((((int32_t)L_38) <= ((int32_t)L_39)))
		{
			goto IL_00c3;
		}
	}
	{
		int32_t L_40 = V_4;
		V_7 = L_40;
	}

IL_00c3:
	{
		Int32U5BU5D_t385246372* L_41 = ___m7;
		int32_t L_42 = V_7;
		NullCheck(L_41);
		(L_41)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)L_42);
		int32_t L_43 = V_5;
		V_13 = ((int32_t)((int32_t)1<<(int32_t)((int32_t)((int32_t)L_43&(int32_t)((int32_t)31)))));
		goto IL_00fb;
	}

IL_00d7:
	{
		int32_t L_44 = V_13;
		Int32U5BU5D_t385246372* L_45 = __this->get_c_8();
		int32_t L_46 = V_5;
		NullCheck(L_45);
		int32_t L_47 = L_46;
		int32_t L_48 = (L_45)->GetAt(static_cast<il2cpp_array_size_t>(L_47));
		int32_t L_49 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_44, (int32_t)L_48));
		V_13 = L_49;
		if ((((int32_t)L_49) >= ((int32_t)0)))
		{
			goto IL_00ef;
		}
	}
	{
		return ((int32_t)-3);
	}

IL_00ef:
	{
		int32_t L_50 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_50, (int32_t)1));
		int32_t L_51 = V_13;
		V_13 = ((int32_t)((int32_t)L_51<<(int32_t)1));
	}

IL_00fb:
	{
		int32_t L_52 = V_5;
		int32_t L_53 = V_4;
		if ((((int32_t)L_52) < ((int32_t)L_53)))
		{
			goto IL_00d7;
		}
	}
	{
		int32_t L_54 = V_13;
		Int32U5BU5D_t385246372* L_55 = __this->get_c_8();
		int32_t L_56 = V_4;
		NullCheck(L_55);
		int32_t L_57 = L_56;
		int32_t L_58 = (L_55)->GetAt(static_cast<il2cpp_array_size_t>(L_57));
		int32_t L_59 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_54, (int32_t)L_58));
		V_13 = L_59;
		if ((((int32_t)L_59) >= ((int32_t)0)))
		{
			goto IL_011c;
		}
	}
	{
		return ((int32_t)-3);
	}

IL_011c:
	{
		Int32U5BU5D_t385246372* L_60 = __this->get_c_8();
		int32_t L_61 = V_4;
		NullCheck(L_60);
		int32_t* L_62 = ((L_60)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_61)));
		int32_t L_63 = *((int32_t*)L_62);
		int32_t L_64 = V_13;
		*((int32_t*)L_62) = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_63, (int32_t)L_64));
		Int32U5BU5D_t385246372* L_65 = __this->get_x_11();
		int32_t L_66 = 0;
		V_5 = L_66;
		NullCheck(L_65);
		(L_65)->SetAt(static_cast<il2cpp_array_size_t>(1), (int32_t)L_66);
		V_9 = 1;
		V_12 = 2;
		goto IL_016a;
	}

IL_0146:
	{
		Int32U5BU5D_t385246372* L_67 = __this->get_x_11();
		int32_t L_68 = V_12;
		int32_t L_69 = V_5;
		Int32U5BU5D_t385246372* L_70 = __this->get_c_8();
		int32_t L_71 = V_9;
		NullCheck(L_70);
		int32_t L_72 = L_71;
		int32_t L_73 = (L_70)->GetAt(static_cast<il2cpp_array_size_t>(L_72));
		int32_t L_74 = ((int32_t)il2cpp_codegen_add((int32_t)L_69, (int32_t)L_73));
		V_5 = L_74;
		NullCheck(L_67);
		(L_67)->SetAt(static_cast<il2cpp_array_size_t>(L_68), (int32_t)L_74);
		int32_t L_75 = V_12;
		V_12 = ((int32_t)il2cpp_codegen_add((int32_t)L_75, (int32_t)1));
		int32_t L_76 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add((int32_t)L_76, (int32_t)1));
	}

IL_016a:
	{
		int32_t L_77 = V_4;
		int32_t L_78 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_77, (int32_t)1));
		V_4 = L_78;
		if (L_78)
		{
			goto IL_0146;
		}
	}
	{
		V_4 = 0;
		V_9 = 0;
	}

IL_017c:
	{
		Int32U5BU5D_t385246372* L_79 = ___b0;
		int32_t L_80 = ___bindex1;
		int32_t L_81 = V_9;
		NullCheck(L_79);
		int32_t L_82 = ((int32_t)il2cpp_codegen_add((int32_t)L_80, (int32_t)L_81));
		int32_t L_83 = (L_79)->GetAt(static_cast<il2cpp_array_size_t>(L_82));
		int32_t L_84 = L_83;
		V_5 = L_84;
		if (!L_84)
		{
			goto IL_01a6;
		}
	}
	{
		Int32U5BU5D_t385246372* L_85 = ___v10;
		Int32U5BU5D_t385246372* L_86 = __this->get_x_11();
		int32_t L_87 = V_5;
		NullCheck(L_86);
		int32_t* L_88 = ((L_86)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_87)));
		int32_t L_89 = *((int32_t*)L_88);
		int32_t L_90 = L_89;
		V_15 = L_90;
		*((int32_t*)L_88) = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_90, (int32_t)1));
		int32_t L_91 = V_15;
		int32_t L_92 = V_4;
		NullCheck(L_85);
		(L_85)->SetAt(static_cast<il2cpp_array_size_t>(L_91), (int32_t)L_92);
	}

IL_01a6:
	{
		int32_t L_93 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add((int32_t)L_93, (int32_t)1));
		int32_t L_94 = V_4;
		int32_t L_95 = ((int32_t)il2cpp_codegen_add((int32_t)L_94, (int32_t)1));
		V_4 = L_95;
		int32_t L_96 = ___n2;
		if ((((int32_t)L_95) < ((int32_t)L_96)))
		{
			goto IL_017c;
		}
	}
	{
		Int32U5BU5D_t385246372* L_97 = __this->get_x_11();
		int32_t L_98 = V_2;
		NullCheck(L_97);
		int32_t L_99 = L_98;
		int32_t L_100 = (L_97)->GetAt(static_cast<il2cpp_array_size_t>(L_99));
		___n2 = L_100;
		Int32U5BU5D_t385246372* L_101 = __this->get_x_11();
		int32_t L_102 = 0;
		V_4 = L_102;
		NullCheck(L_101);
		(L_101)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)L_102);
		V_9 = 0;
		V_3 = (-1);
		int32_t L_103 = V_7;
		V_11 = ((-L_103));
		Int32U5BU5D_t385246372* L_104 = __this->get_u_10();
		NullCheck(L_104);
		(L_104)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)0);
		V_10 = 0;
		V_14 = 0;
		goto IL_04a3;
	}

IL_01ed:
	{
		Int32U5BU5D_t385246372* L_105 = __this->get_c_8();
		int32_t L_106 = V_6;
		NullCheck(L_105);
		int32_t L_107 = L_106;
		int32_t L_108 = (L_105)->GetAt(static_cast<il2cpp_array_size_t>(L_107));
		V_0 = L_108;
		goto IL_0493;
	}

IL_01fc:
	{
		goto IL_033d;
	}

IL_0201:
	{
		int32_t L_109 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_109, (int32_t)1));
		int32_t L_110 = V_11;
		int32_t L_111 = V_7;
		V_11 = ((int32_t)il2cpp_codegen_add((int32_t)L_110, (int32_t)L_111));
		int32_t L_112 = V_2;
		int32_t L_113 = V_11;
		V_14 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_112, (int32_t)L_113));
		int32_t L_114 = V_14;
		int32_t L_115 = V_7;
		if ((((int32_t)L_114) <= ((int32_t)L_115)))
		{
			goto IL_0222;
		}
	}
	{
		int32_t L_116 = V_7;
		G_B38_0 = L_116;
		goto IL_0224;
	}

IL_0222:
	{
		int32_t L_117 = V_14;
		G_B38_0 = L_117;
	}

IL_0224:
	{
		V_14 = G_B38_0;
		int32_t L_118 = V_6;
		int32_t L_119 = V_11;
		int32_t L_120 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_118, (int32_t)L_119));
		V_5 = L_120;
		int32_t L_121 = ((int32_t)((int32_t)1<<(int32_t)((int32_t)((int32_t)L_120&(int32_t)((int32_t)31)))));
		V_1 = L_121;
		int32_t L_122 = V_0;
		if ((((int32_t)L_121) <= ((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_122, (int32_t)1)))))
		{
			goto IL_028c;
		}
	}
	{
		int32_t L_123 = V_1;
		int32_t L_124 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_123, (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_124, (int32_t)1))));
		int32_t L_125 = V_6;
		V_12 = L_125;
		int32_t L_126 = V_5;
		int32_t L_127 = V_14;
		if ((((int32_t)L_126) >= ((int32_t)L_127)))
		{
			goto IL_028c;
		}
	}
	{
		goto IL_027e;
	}

IL_0255:
	{
		int32_t L_128 = V_1;
		int32_t L_129 = ((int32_t)((int32_t)L_128<<(int32_t)1));
		V_1 = L_129;
		Int32U5BU5D_t385246372* L_130 = __this->get_c_8();
		int32_t L_131 = V_12;
		int32_t L_132 = ((int32_t)il2cpp_codegen_add((int32_t)L_131, (int32_t)1));
		V_12 = L_132;
		NullCheck(L_130);
		int32_t L_133 = L_132;
		int32_t L_134 = (L_130)->GetAt(static_cast<il2cpp_array_size_t>(L_133));
		if ((((int32_t)L_129) > ((int32_t)L_134)))
		{
			goto IL_0272;
		}
	}
	{
		goto IL_028c;
	}

IL_0272:
	{
		int32_t L_135 = V_1;
		Int32U5BU5D_t385246372* L_136 = __this->get_c_8();
		int32_t L_137 = V_12;
		NullCheck(L_136);
		int32_t L_138 = L_137;
		int32_t L_139 = (L_136)->GetAt(static_cast<il2cpp_array_size_t>(L_138));
		V_1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_135, (int32_t)L_139));
	}

IL_027e:
	{
		int32_t L_140 = V_5;
		int32_t L_141 = ((int32_t)il2cpp_codegen_add((int32_t)L_140, (int32_t)1));
		V_5 = L_141;
		int32_t L_142 = V_14;
		if ((((int32_t)L_141) < ((int32_t)L_142)))
		{
			goto IL_0255;
		}
	}

IL_028c:
	{
		int32_t L_143 = V_5;
		V_14 = ((int32_t)((int32_t)1<<(int32_t)((int32_t)((int32_t)L_143&(int32_t)((int32_t)31)))));
		Int32U5BU5D_t385246372* L_144 = ___hn9;
		NullCheck(L_144);
		int32_t L_145 = 0;
		int32_t L_146 = (L_144)->GetAt(static_cast<il2cpp_array_size_t>(L_145));
		int32_t L_147 = V_14;
		if ((((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_146, (int32_t)L_147))) <= ((int32_t)((int32_t)1440))))
		{
			goto IL_02a9;
		}
	}
	{
		return ((int32_t)-3);
	}

IL_02a9:
	{
		Int32U5BU5D_t385246372* L_148 = __this->get_u_10();
		int32_t L_149 = V_3;
		Int32U5BU5D_t385246372* L_150 = ___hn9;
		NullCheck(L_150);
		int32_t L_151 = 0;
		int32_t L_152 = (L_150)->GetAt(static_cast<il2cpp_array_size_t>(L_151));
		int32_t L_153 = L_152;
		V_10 = L_153;
		NullCheck(L_148);
		(L_148)->SetAt(static_cast<il2cpp_array_size_t>(L_149), (int32_t)L_153);
		Int32U5BU5D_t385246372* L_154 = ___hn9;
		NullCheck(L_154);
		int32_t* L_155 = ((L_154)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)));
		int32_t L_156 = *((int32_t*)L_155);
		int32_t L_157 = V_14;
		*((int32_t*)L_155) = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_156, (int32_t)L_157));
		int32_t L_158 = V_3;
		if (!L_158)
		{
			goto IL_0337;
		}
	}
	{
		Int32U5BU5D_t385246372* L_159 = __this->get_x_11();
		int32_t L_160 = V_3;
		int32_t L_161 = V_4;
		NullCheck(L_159);
		(L_159)->SetAt(static_cast<il2cpp_array_size_t>(L_160), (int32_t)L_161);
		Int32U5BU5D_t385246372* L_162 = __this->get_r_9();
		int32_t L_163 = V_5;
		NullCheck(L_162);
		(L_162)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)(((int32_t)((int32_t)(((int8_t)((int8_t)L_163)))))));
		Int32U5BU5D_t385246372* L_164 = __this->get_r_9();
		int32_t L_165 = V_7;
		NullCheck(L_164);
		(L_164)->SetAt(static_cast<il2cpp_array_size_t>(1), (int32_t)(((int32_t)((int32_t)(((int8_t)((int8_t)L_165)))))));
		int32_t L_166 = V_4;
		int32_t L_167 = V_11;
		int32_t L_168 = V_7;
		int32_t L_169 = SharedUtils_URShift_m2479621630(NULL /*static, unused*/, L_166, ((int32_t)il2cpp_codegen_subtract((int32_t)L_167, (int32_t)L_168)), /*hidden argument*/NULL);
		V_5 = L_169;
		Int32U5BU5D_t385246372* L_170 = __this->get_r_9();
		int32_t L_171 = V_10;
		Int32U5BU5D_t385246372* L_172 = __this->get_u_10();
		int32_t L_173 = V_3;
		NullCheck(L_172);
		int32_t L_174 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_173, (int32_t)1));
		int32_t L_175 = (L_172)->GetAt(static_cast<il2cpp_array_size_t>(L_174));
		int32_t L_176 = V_5;
		NullCheck(L_170);
		(L_170)->SetAt(static_cast<il2cpp_array_size_t>(2), (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_171, (int32_t)L_175)), (int32_t)L_176)));
		Int32U5BU5D_t385246372* L_177 = __this->get_r_9();
		Int32U5BU5D_t385246372* L_178 = ___hp8;
		Int32U5BU5D_t385246372* L_179 = __this->get_u_10();
		int32_t L_180 = V_3;
		NullCheck(L_179);
		int32_t L_181 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_180, (int32_t)1));
		int32_t L_182 = (L_179)->GetAt(static_cast<il2cpp_array_size_t>(L_181));
		int32_t L_183 = V_5;
		Array_Copy_m344457298(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_177, 0, (RuntimeArray *)(RuntimeArray *)L_178, ((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_182, (int32_t)L_183)), (int32_t)3)), 3, /*hidden argument*/NULL);
		goto IL_033d;
	}

IL_0337:
	{
		Int32U5BU5D_t385246372* L_184 = ___t6;
		int32_t L_185 = V_10;
		NullCheck(L_184);
		(L_184)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)L_185);
	}

IL_033d:
	{
		int32_t L_186 = V_6;
		int32_t L_187 = V_11;
		int32_t L_188 = V_7;
		if ((((int32_t)L_186) > ((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_187, (int32_t)L_188)))))
		{
			goto IL_0201;
		}
	}
	{
		Int32U5BU5D_t385246372* L_189 = __this->get_r_9();
		int32_t L_190 = V_6;
		int32_t L_191 = V_11;
		NullCheck(L_189);
		(L_189)->SetAt(static_cast<il2cpp_array_size_t>(1), (int32_t)(((int32_t)((int32_t)(((int8_t)((int8_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_190, (int32_t)L_191)))))))));
		int32_t L_192 = V_9;
		int32_t L_193 = ___n2;
		if ((((int32_t)L_192) < ((int32_t)L_193)))
		{
			goto IL_0372;
		}
	}
	{
		Int32U5BU5D_t385246372* L_194 = __this->get_r_9();
		NullCheck(L_194);
		(L_194)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)((int32_t)192));
		goto IL_03e9;
	}

IL_0372:
	{
		Int32U5BU5D_t385246372* L_195 = ___v10;
		int32_t L_196 = V_9;
		NullCheck(L_195);
		int32_t L_197 = L_196;
		int32_t L_198 = (L_195)->GetAt(static_cast<il2cpp_array_size_t>(L_197));
		int32_t L_199 = ___s3;
		if ((((int32_t)L_198) >= ((int32_t)L_199)))
		{
			goto IL_03b6;
		}
	}
	{
		Int32U5BU5D_t385246372* L_200 = __this->get_r_9();
		Int32U5BU5D_t385246372* L_201 = ___v10;
		int32_t L_202 = V_9;
		NullCheck(L_201);
		int32_t L_203 = L_202;
		int32_t L_204 = (L_201)->GetAt(static_cast<il2cpp_array_size_t>(L_203));
		G_B55_0 = 0;
		G_B55_1 = L_200;
		if ((((int32_t)L_204) >= ((int32_t)((int32_t)256))))
		{
			G_B56_0 = 0;
			G_B56_1 = L_200;
			goto IL_039a;
		}
	}
	{
		G_B57_0 = 0;
		G_B57_1 = G_B55_0;
		G_B57_2 = G_B55_1;
		goto IL_039c;
	}

IL_039a:
	{
		G_B57_0 = ((int32_t)96);
		G_B57_1 = G_B56_0;
		G_B57_2 = G_B56_1;
	}

IL_039c:
	{
		NullCheck(G_B57_2);
		(G_B57_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B57_1), (int32_t)(((int32_t)((int32_t)(((int8_t)((int8_t)G_B57_0)))))));
		Int32U5BU5D_t385246372* L_205 = __this->get_r_9();
		Int32U5BU5D_t385246372* L_206 = ___v10;
		int32_t L_207 = V_9;
		int32_t L_208 = L_207;
		V_9 = ((int32_t)il2cpp_codegen_add((int32_t)L_208, (int32_t)1));
		NullCheck(L_206);
		int32_t L_209 = L_208;
		int32_t L_210 = (L_206)->GetAt(static_cast<il2cpp_array_size_t>(L_209));
		NullCheck(L_205);
		(L_205)->SetAt(static_cast<il2cpp_array_size_t>(2), (int32_t)L_210);
		goto IL_03e9;
	}

IL_03b6:
	{
		Int32U5BU5D_t385246372* L_211 = __this->get_r_9();
		Int32U5BU5D_t385246372* L_212 = ___e5;
		Int32U5BU5D_t385246372* L_213 = ___v10;
		int32_t L_214 = V_9;
		NullCheck(L_213);
		int32_t L_215 = L_214;
		int32_t L_216 = (L_213)->GetAt(static_cast<il2cpp_array_size_t>(L_215));
		int32_t L_217 = ___s3;
		NullCheck(L_212);
		int32_t L_218 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_216, (int32_t)L_217));
		int32_t L_219 = (L_212)->GetAt(static_cast<il2cpp_array_size_t>(L_218));
		NullCheck(L_211);
		(L_211)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)(((int32_t)((int32_t)(((int8_t)((int8_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_219, (int32_t)((int32_t)16))), (int32_t)((int32_t)64))))))))));
		Int32U5BU5D_t385246372* L_220 = __this->get_r_9();
		Int32U5BU5D_t385246372* L_221 = ___d4;
		Int32U5BU5D_t385246372* L_222 = ___v10;
		int32_t L_223 = V_9;
		int32_t L_224 = L_223;
		V_9 = ((int32_t)il2cpp_codegen_add((int32_t)L_224, (int32_t)1));
		NullCheck(L_222);
		int32_t L_225 = L_224;
		int32_t L_226 = (L_222)->GetAt(static_cast<il2cpp_array_size_t>(L_225));
		int32_t L_227 = ___s3;
		NullCheck(L_221);
		int32_t L_228 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_226, (int32_t)L_227));
		int32_t L_229 = (L_221)->GetAt(static_cast<il2cpp_array_size_t>(L_228));
		NullCheck(L_220);
		(L_220)->SetAt(static_cast<il2cpp_array_size_t>(2), (int32_t)L_229);
	}

IL_03e9:
	{
		int32_t L_230 = V_6;
		int32_t L_231 = V_11;
		V_1 = ((int32_t)((int32_t)1<<(int32_t)((int32_t)((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_230, (int32_t)L_231))&(int32_t)((int32_t)31)))));
		int32_t L_232 = V_4;
		int32_t L_233 = V_11;
		int32_t L_234 = SharedUtils_URShift_m2479621630(NULL /*static, unused*/, L_232, L_233, /*hidden argument*/NULL);
		V_5 = L_234;
		goto IL_0420;
	}

IL_0404:
	{
		Int32U5BU5D_t385246372* L_235 = __this->get_r_9();
		Int32U5BU5D_t385246372* L_236 = ___hp8;
		int32_t L_237 = V_10;
		int32_t L_238 = V_5;
		Array_Copy_m344457298(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_235, 0, (RuntimeArray *)(RuntimeArray *)L_236, ((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_237, (int32_t)L_238)), (int32_t)3)), 3, /*hidden argument*/NULL);
		int32_t L_239 = V_5;
		int32_t L_240 = V_1;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_239, (int32_t)L_240));
	}

IL_0420:
	{
		int32_t L_241 = V_5;
		int32_t L_242 = V_14;
		if ((((int32_t)L_241) < ((int32_t)L_242)))
		{
			goto IL_0404;
		}
	}
	{
		int32_t L_243 = V_6;
		V_5 = ((int32_t)((int32_t)1<<(int32_t)((int32_t)((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_243, (int32_t)1))&(int32_t)((int32_t)31)))));
		goto IL_044a;
	}

IL_0439:
	{
		int32_t L_244 = V_4;
		int32_t L_245 = V_5;
		V_4 = ((int32_t)((int32_t)L_244^(int32_t)L_245));
		int32_t L_246 = V_5;
		int32_t L_247 = SharedUtils_URShift_m2479621630(NULL /*static, unused*/, L_246, 1, /*hidden argument*/NULL);
		V_5 = L_247;
	}

IL_044a:
	{
		int32_t L_248 = V_4;
		int32_t L_249 = V_5;
		if (((int32_t)((int32_t)L_248&(int32_t)L_249)))
		{
			goto IL_0439;
		}
	}
	{
		int32_t L_250 = V_4;
		int32_t L_251 = V_5;
		V_4 = ((int32_t)((int32_t)L_250^(int32_t)L_251));
		int32_t L_252 = V_11;
		V_8 = ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)((int32_t)1<<(int32_t)((int32_t)((int32_t)L_252&(int32_t)((int32_t)31))))), (int32_t)1));
		goto IL_0481;
	}

IL_046b:
	{
		int32_t L_253 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_253, (int32_t)1));
		int32_t L_254 = V_11;
		int32_t L_255 = V_7;
		V_11 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_254, (int32_t)L_255));
		int32_t L_256 = V_11;
		V_8 = ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)((int32_t)1<<(int32_t)((int32_t)((int32_t)L_256&(int32_t)((int32_t)31))))), (int32_t)1));
	}

IL_0481:
	{
		int32_t L_257 = V_4;
		int32_t L_258 = V_8;
		Int32U5BU5D_t385246372* L_259 = __this->get_x_11();
		int32_t L_260 = V_3;
		NullCheck(L_259);
		int32_t L_261 = L_260;
		int32_t L_262 = (L_259)->GetAt(static_cast<il2cpp_array_size_t>(L_261));
		if ((!(((uint32_t)((int32_t)((int32_t)L_257&(int32_t)L_258))) == ((uint32_t)L_262))))
		{
			goto IL_046b;
		}
	}

IL_0493:
	{
		int32_t L_263 = V_0;
		int32_t L_264 = L_263;
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_264, (int32_t)1));
		if (L_264)
		{
			goto IL_01fc;
		}
	}
	{
		int32_t L_265 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_265, (int32_t)1));
	}

IL_04a3:
	{
		int32_t L_266 = V_6;
		int32_t L_267 = V_2;
		if ((((int32_t)L_266) <= ((int32_t)L_267)))
		{
			goto IL_01ed;
		}
	}
	{
		int32_t L_268 = V_13;
		if (!L_268)
		{
			goto IL_04c0;
		}
	}
	{
		int32_t L_269 = V_2;
		if ((((int32_t)L_269) == ((int32_t)1)))
		{
			goto IL_04c0;
		}
	}
	{
		G_B75_0 = ((int32_t)-5);
		goto IL_04c1;
	}

IL_04c0:
	{
		G_B75_0 = 0;
	}

IL_04c1:
	{
		return G_B75_0;
	}
}
// System.Int32 Pathfinding.Ionic.Zlib.InfTree::inflate_trees_bits(System.Int32[],System.Int32[],System.Int32[],System.Int32[],Pathfinding.Ionic.Zlib.ZlibCodec)
extern "C" IL2CPP_METHOD_ATTR int32_t InfTree_inflate_trees_bits_m1558208322 (InfTree_t2692649235 * __this, Int32U5BU5D_t385246372* ___c0, Int32U5BU5D_t385246372* ___bb1, Int32U5BU5D_t385246372* ___tb2, Int32U5BU5D_t385246372* ___hp3, ZlibCodec_t855427629 * ___z4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InfTree_inflate_trees_bits_m1558208322_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		InfTree_initWorkArea_m1371470808(__this, ((int32_t)19), /*hidden argument*/NULL);
		Int32U5BU5D_t385246372* L_0 = __this->get_hn_6();
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)0);
		Int32U5BU5D_t385246372* L_1 = ___c0;
		Int32U5BU5D_t385246372* L_2 = ___tb2;
		Int32U5BU5D_t385246372* L_3 = ___bb1;
		Int32U5BU5D_t385246372* L_4 = ___hp3;
		Int32U5BU5D_t385246372* L_5 = __this->get_hn_6();
		Int32U5BU5D_t385246372* L_6 = __this->get_v_7();
		int32_t L_7 = InfTree_huft_build_m2186021824(__this, L_1, 0, ((int32_t)19), ((int32_t)19), (Int32U5BU5D_t385246372*)(Int32U5BU5D_t385246372*)NULL, (Int32U5BU5D_t385246372*)(Int32U5BU5D_t385246372*)NULL, L_2, L_3, L_4, L_5, L_6, /*hidden argument*/NULL);
		V_0 = L_7;
		int32_t L_8 = V_0;
		if ((!(((uint32_t)L_8) == ((uint32_t)((int32_t)-3)))))
		{
			goto IL_0049;
		}
	}
	{
		ZlibCodec_t855427629 * L_9 = ___z4;
		NullCheck(L_9);
		L_9->set_Message_8(_stringLiteral1826280742);
		goto IL_0068;
	}

IL_0049:
	{
		int32_t L_10 = V_0;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-5))))
		{
			goto IL_0059;
		}
	}
	{
		Int32U5BU5D_t385246372* L_11 = ___bb1;
		NullCheck(L_11);
		int32_t L_12 = 0;
		int32_t L_13 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		if (L_13)
		{
			goto IL_0068;
		}
	}

IL_0059:
	{
		ZlibCodec_t855427629 * L_14 = ___z4;
		NullCheck(L_14);
		L_14->set_Message_8(_stringLiteral653669095);
		V_0 = ((int32_t)-3);
	}

IL_0068:
	{
		int32_t L_15 = V_0;
		return L_15;
	}
}
// System.Int32 Pathfinding.Ionic.Zlib.InfTree::inflate_trees_dynamic(System.Int32,System.Int32,System.Int32[],System.Int32[],System.Int32[],System.Int32[],System.Int32[],System.Int32[],Pathfinding.Ionic.Zlib.ZlibCodec)
extern "C" IL2CPP_METHOD_ATTR int32_t InfTree_inflate_trees_dynamic_m3043938686 (InfTree_t2692649235 * __this, int32_t ___nl0, int32_t ___nd1, Int32U5BU5D_t385246372* ___c2, Int32U5BU5D_t385246372* ___bl3, Int32U5BU5D_t385246372* ___bd4, Int32U5BU5D_t385246372* ___tl5, Int32U5BU5D_t385246372* ___td6, Int32U5BU5D_t385246372* ___hp7, ZlibCodec_t855427629 * ___z8, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InfTree_inflate_trees_dynamic_m3043938686_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		InfTree_initWorkArea_m1371470808(__this, ((int32_t)288), /*hidden argument*/NULL);
		Int32U5BU5D_t385246372* L_0 = __this->get_hn_6();
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)0);
		Int32U5BU5D_t385246372* L_1 = ___c2;
		int32_t L_2 = ___nl0;
		IL2CPP_RUNTIME_CLASS_INIT(InfTree_t2692649235_il2cpp_TypeInfo_var);
		Int32U5BU5D_t385246372* L_3 = ((InfTree_t2692649235_StaticFields*)il2cpp_codegen_static_fields_for(InfTree_t2692649235_il2cpp_TypeInfo_var))->get_cplens_2();
		Int32U5BU5D_t385246372* L_4 = ((InfTree_t2692649235_StaticFields*)il2cpp_codegen_static_fields_for(InfTree_t2692649235_il2cpp_TypeInfo_var))->get_cplext_3();
		Int32U5BU5D_t385246372* L_5 = ___tl5;
		Int32U5BU5D_t385246372* L_6 = ___bl3;
		Int32U5BU5D_t385246372* L_7 = ___hp7;
		Int32U5BU5D_t385246372* L_8 = __this->get_hn_6();
		Int32U5BU5D_t385246372* L_9 = __this->get_v_7();
		int32_t L_10 = InfTree_huft_build_m2186021824(__this, L_1, 0, L_2, ((int32_t)257), L_3, L_4, L_5, L_6, L_7, L_8, L_9, /*hidden argument*/NULL);
		V_0 = L_10;
		int32_t L_11 = V_0;
		if (L_11)
		{
			goto IL_004e;
		}
	}
	{
		Int32U5BU5D_t385246372* L_12 = ___bl3;
		NullCheck(L_12);
		int32_t L_13 = 0;
		int32_t L_14 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		if (L_14)
		{
			goto IL_0080;
		}
	}

IL_004e:
	{
		int32_t L_15 = V_0;
		if ((!(((uint32_t)L_15) == ((uint32_t)((int32_t)-3)))))
		{
			goto IL_0067;
		}
	}
	{
		ZlibCodec_t855427629 * L_16 = ___z8;
		NullCheck(L_16);
		L_16->set_Message_8(_stringLiteral2473209919);
		goto IL_007e;
	}

IL_0067:
	{
		int32_t L_17 = V_0;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)-4))))
		{
			goto IL_007e;
		}
	}
	{
		ZlibCodec_t855427629 * L_18 = ___z8;
		NullCheck(L_18);
		L_18->set_Message_8(_stringLiteral211766613);
		V_0 = ((int32_t)-3);
	}

IL_007e:
	{
		int32_t L_19 = V_0;
		return L_19;
	}

IL_0080:
	{
		InfTree_initWorkArea_m1371470808(__this, ((int32_t)288), /*hidden argument*/NULL);
		Int32U5BU5D_t385246372* L_20 = ___c2;
		int32_t L_21 = ___nl0;
		int32_t L_22 = ___nd1;
		IL2CPP_RUNTIME_CLASS_INIT(InfTree_t2692649235_il2cpp_TypeInfo_var);
		Int32U5BU5D_t385246372* L_23 = ((InfTree_t2692649235_StaticFields*)il2cpp_codegen_static_fields_for(InfTree_t2692649235_il2cpp_TypeInfo_var))->get_cpdist_4();
		Int32U5BU5D_t385246372* L_24 = ((InfTree_t2692649235_StaticFields*)il2cpp_codegen_static_fields_for(InfTree_t2692649235_il2cpp_TypeInfo_var))->get_cpdext_5();
		Int32U5BU5D_t385246372* L_25 = ___td6;
		Int32U5BU5D_t385246372* L_26 = ___bd4;
		Int32U5BU5D_t385246372* L_27 = ___hp7;
		Int32U5BU5D_t385246372* L_28 = __this->get_hn_6();
		Int32U5BU5D_t385246372* L_29 = __this->get_v_7();
		int32_t L_30 = InfTree_huft_build_m2186021824(__this, L_20, L_21, L_22, 0, L_23, L_24, L_25, L_26, L_27, L_28, L_29, /*hidden argument*/NULL);
		V_0 = L_30;
		int32_t L_31 = V_0;
		if (L_31)
		{
			goto IL_00cc;
		}
	}
	{
		Int32U5BU5D_t385246372* L_32 = ___bd4;
		NullCheck(L_32);
		int32_t L_33 = 0;
		int32_t L_34 = (L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		if (L_34)
		{
			goto IL_011a;
		}
	}
	{
		int32_t L_35 = ___nl0;
		if ((((int32_t)L_35) <= ((int32_t)((int32_t)257))))
		{
			goto IL_011a;
		}
	}

IL_00cc:
	{
		int32_t L_36 = V_0;
		if ((!(((uint32_t)L_36) == ((uint32_t)((int32_t)-3)))))
		{
			goto IL_00e5;
		}
	}
	{
		ZlibCodec_t855427629 * L_37 = ___z8;
		NullCheck(L_37);
		L_37->set_Message_8(_stringLiteral4210913594);
		goto IL_0118;
	}

IL_00e5:
	{
		int32_t L_38 = V_0;
		if ((!(((uint32_t)L_38) == ((uint32_t)((int32_t)-5)))))
		{
			goto IL_0101;
		}
	}
	{
		ZlibCodec_t855427629 * L_39 = ___z8;
		NullCheck(L_39);
		L_39->set_Message_8(_stringLiteral80618735);
		V_0 = ((int32_t)-3);
		goto IL_0118;
	}

IL_0101:
	{
		int32_t L_40 = V_0;
		if ((((int32_t)L_40) == ((int32_t)((int32_t)-4))))
		{
			goto IL_0118;
		}
	}
	{
		ZlibCodec_t855427629 * L_41 = ___z8;
		NullCheck(L_41);
		L_41->set_Message_8(_stringLiteral2273615499);
		V_0 = ((int32_t)-3);
	}

IL_0118:
	{
		int32_t L_42 = V_0;
		return L_42;
	}

IL_011a:
	{
		return 0;
	}
}
// System.Int32 Pathfinding.Ionic.Zlib.InfTree::inflate_trees_fixed(System.Int32[],System.Int32[],System.Int32[][],System.Int32[][],Pathfinding.Ionic.Zlib.ZlibCodec)
extern "C" IL2CPP_METHOD_ATTR int32_t InfTree_inflate_trees_fixed_m36146089 (RuntimeObject * __this /* static, unused */, Int32U5BU5D_t385246372* ___bl0, Int32U5BU5D_t385246372* ___bd1, Int32U5BU5DU5BU5D_t3365920845* ___tl2, Int32U5BU5DU5BU5D_t3365920845* ___td3, ZlibCodec_t855427629 * ___z4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InfTree_inflate_trees_fixed_m36146089_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Int32U5BU5D_t385246372* L_0 = ___bl0;
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)((int32_t)9));
		Int32U5BU5D_t385246372* L_1 = ___bd1;
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)5);
		Int32U5BU5DU5BU5D_t3365920845* L_2 = ___tl2;
		IL2CPP_RUNTIME_CLASS_INIT(InfTree_t2692649235_il2cpp_TypeInfo_var);
		Int32U5BU5D_t385246372* L_3 = ((InfTree_t2692649235_StaticFields*)il2cpp_codegen_static_fields_for(InfTree_t2692649235_il2cpp_TypeInfo_var))->get_fixed_tl_0();
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (Int32U5BU5D_t385246372*)L_3);
		Int32U5BU5DU5BU5D_t3365920845* L_4 = ___td3;
		Int32U5BU5D_t385246372* L_5 = ((InfTree_t2692649235_StaticFields*)il2cpp_codegen_static_fields_for(InfTree_t2692649235_il2cpp_TypeInfo_var))->get_fixed_td_1();
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (Int32U5BU5D_t385246372*)L_5);
		return 0;
	}
}
// System.Void Pathfinding.Ionic.Zlib.InfTree::initWorkArea(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void InfTree_initWorkArea_m1371470808 (InfTree_t2692649235 * __this, int32_t ___vsize0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InfTree_initWorkArea_m1371470808_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Int32U5BU5D_t385246372* L_0 = __this->get_hn_6();
		if (L_0)
		{
			goto IL_005b;
		}
	}
	{
		Int32U5BU5D_t385246372* L_1 = (Int32U5BU5D_t385246372*)SZArrayNew(Int32U5BU5D_t385246372_il2cpp_TypeInfo_var, (uint32_t)1);
		__this->set_hn_6(L_1);
		int32_t L_2 = ___vsize0;
		Int32U5BU5D_t385246372* L_3 = (Int32U5BU5D_t385246372*)SZArrayNew(Int32U5BU5D_t385246372_il2cpp_TypeInfo_var, (uint32_t)L_2);
		__this->set_v_7(L_3);
		Int32U5BU5D_t385246372* L_4 = (Int32U5BU5D_t385246372*)SZArrayNew(Int32U5BU5D_t385246372_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		__this->set_c_8(L_4);
		Int32U5BU5D_t385246372* L_5 = (Int32U5BU5D_t385246372*)SZArrayNew(Int32U5BU5D_t385246372_il2cpp_TypeInfo_var, (uint32_t)3);
		__this->set_r_9(L_5);
		Int32U5BU5D_t385246372* L_6 = (Int32U5BU5D_t385246372*)SZArrayNew(Int32U5BU5D_t385246372_il2cpp_TypeInfo_var, (uint32_t)((int32_t)15));
		__this->set_u_10(L_6);
		Int32U5BU5D_t385246372* L_7 = (Int32U5BU5D_t385246372*)SZArrayNew(Int32U5BU5D_t385246372_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		__this->set_x_11(L_7);
		goto IL_00c7;
	}

IL_005b:
	{
		Int32U5BU5D_t385246372* L_8 = __this->get_v_7();
		NullCheck(L_8);
		int32_t L_9 = ___vsize0;
		if ((((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_8)->max_length))))) >= ((int32_t)L_9)))
		{
			goto IL_0075;
		}
	}
	{
		int32_t L_10 = ___vsize0;
		Int32U5BU5D_t385246372* L_11 = (Int32U5BU5D_t385246372*)SZArrayNew(Int32U5BU5D_t385246372_il2cpp_TypeInfo_var, (uint32_t)L_10);
		__this->set_v_7(L_11);
	}

IL_0075:
	{
		Int32U5BU5D_t385246372* L_12 = __this->get_v_7();
		int32_t L_13 = ___vsize0;
		Array_Clear_m2231608178(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_12, 0, L_13, /*hidden argument*/NULL);
		Int32U5BU5D_t385246372* L_14 = __this->get_c_8();
		Array_Clear_m2231608178(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_14, 0, ((int32_t)16), /*hidden argument*/NULL);
		Int32U5BU5D_t385246372* L_15 = __this->get_r_9();
		NullCheck(L_15);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)0);
		Int32U5BU5D_t385246372* L_16 = __this->get_r_9();
		NullCheck(L_16);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(1), (int32_t)0);
		Int32U5BU5D_t385246372* L_17 = __this->get_r_9();
		NullCheck(L_17);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(2), (int32_t)0);
		Int32U5BU5D_t385246372* L_18 = __this->get_u_10();
		Array_Clear_m2231608178(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_18, 0, ((int32_t)15), /*hidden argument*/NULL);
		Int32U5BU5D_t385246372* L_19 = __this->get_x_11();
		Array_Clear_m2231608178(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_19, 0, ((int32_t)16), /*hidden argument*/NULL);
	}

IL_00c7:
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
// System.Void Pathfinding.Ionic.Zlib.InflateBlocks::.ctor(Pathfinding.Ionic.Zlib.ZlibCodec,System.Object,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void InflateBlocks__ctor_m1052329913 (InflateBlocks_t4119258979 * __this, ZlibCodec_t855427629 * ___codec0, RuntimeObject * ___checkfn1, int32_t ___w2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InflateBlocks__ctor_m1052329913_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Int32U5BU5D_t385246372* L_0 = (Int32U5BU5D_t385246372*)SZArrayNew(Int32U5BU5D_t385246372_il2cpp_TypeInfo_var, (uint32_t)1);
		__this->set_bb_6(L_0);
		Int32U5BU5D_t385246372* L_1 = (Int32U5BU5D_t385246372*)SZArrayNew(Int32U5BU5D_t385246372_il2cpp_TypeInfo_var, (uint32_t)1);
		__this->set_tb_7(L_1);
		InflateCodes_t3940108927 * L_2 = (InflateCodes_t3940108927 *)il2cpp_codegen_object_new(InflateCodes_t3940108927_il2cpp_TypeInfo_var);
		InflateCodes__ctor_m51491151(L_2, /*hidden argument*/NULL);
		__this->set_codes_8(L_2);
		InfTree_t2692649235 * L_3 = (InfTree_t2692649235 *)il2cpp_codegen_object_new(InfTree_t2692649235_il2cpp_TypeInfo_var);
		InfTree__ctor_m1906075377(L_3, /*hidden argument*/NULL);
		__this->set_inftree_20(L_3);
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		ZlibCodec_t855427629 * L_4 = ___codec0;
		__this->set__codec_10(L_4);
		Int32U5BU5D_t385246372* L_5 = (Int32U5BU5D_t385246372*)SZArrayNew(Int32U5BU5D_t385246372_il2cpp_TypeInfo_var, (uint32_t)((int32_t)4320));
		__this->set_hufts_13(L_5);
		int32_t L_6 = ___w2;
		ByteU5BU5D_t4116647657* L_7 = (ByteU5BU5D_t4116647657*)SZArrayNew(ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var, (uint32_t)L_6);
		__this->set_window_14(L_7);
		int32_t L_8 = ___w2;
		__this->set_end_15(L_8);
		RuntimeObject * L_9 = ___checkfn1;
		__this->set_checkfn_18(L_9);
		__this->set_mode_1(0);
		InflateBlocks_Reset_m1167299319(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Pathfinding.Ionic.Zlib.InflateBlocks::.cctor()
extern "C" IL2CPP_METHOD_ATTR void InflateBlocks__cctor_m576882730 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InflateBlocks__cctor_m576882730_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Int32U5BU5D_t385246372* L_0 = (Int32U5BU5D_t385246372*)SZArrayNew(Int32U5BU5D_t385246372_il2cpp_TypeInfo_var, (uint32_t)((int32_t)19));
		Int32U5BU5D_t385246372* L_1 = L_0;
		RuntimeFieldHandle_t1871169219  L_2 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3EU7B99f15b47U2D93f0U2D442dU2Da950U2D84e2e79a92c8U7D_t3841250540____U24fieldU2DB_7_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m3117905507(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_1, L_2, /*hidden argument*/NULL);
		((InflateBlocks_t4119258979_StaticFields*)il2cpp_codegen_static_fields_for(InflateBlocks_t4119258979_il2cpp_TypeInfo_var))->set_border_0(L_1);
		return;
	}
}
// System.UInt32 Pathfinding.Ionic.Zlib.InflateBlocks::Reset()
extern "C" IL2CPP_METHOD_ATTR uint32_t InflateBlocks_Reset_m1167299319 (InflateBlocks_t4119258979 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InflateBlocks_Reset_m1167299319_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	int32_t V_1 = 0;
	uint32_t V_2 = 0;
	{
		uint32_t L_0 = __this->get_check_19();
		V_0 = L_0;
		__this->set_mode_1(0);
		__this->set_bitk_11(0);
		__this->set_bitb_12(0);
		int32_t L_1 = 0;
		V_1 = L_1;
		__this->set_writeAt_17(L_1);
		int32_t L_2 = V_1;
		__this->set_readAt_16(L_2);
		RuntimeObject * L_3 = __this->get_checkfn_18();
		if (!L_3)
		{
			goto IL_0054;
		}
	}
	{
		ZlibCodec_t855427629 * L_4 = __this->get__codec_10();
		IL2CPP_RUNTIME_CLASS_INIT(Adler_t3126894214_il2cpp_TypeInfo_var);
		uint32_t L_5 = Adler_Adler32_m1147423111(NULL /*static, unused*/, 0, (ByteU5BU5D_t4116647657*)(ByteU5BU5D_t4116647657*)NULL, 0, 0, /*hidden argument*/NULL);
		uint32_t L_6 = L_5;
		V_2 = L_6;
		__this->set_check_19(L_6);
		uint32_t L_7 = V_2;
		NullCheck(L_4);
		L_4->set__Adler32_11(L_7);
	}

IL_0054:
	{
		uint32_t L_8 = V_0;
		return L_8;
	}
}
// System.Int32 Pathfinding.Ionic.Zlib.InflateBlocks::Process(System.Int32)
extern "C" IL2CPP_METHOD_ATTR int32_t InflateBlocks_Process_m3038927653 (InflateBlocks_t4119258979 * __this, int32_t ___r0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InflateBlocks_Process_m3038927653_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	uint32_t V_8 = 0;
	Int32U5BU5D_t385246372* V_9 = NULL;
	Int32U5BU5D_t385246372* V_10 = NULL;
	Int32U5BU5DU5BU5D_t3365920845* V_11 = NULL;
	Int32U5BU5DU5BU5D_t3365920845* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t V_14 = 0;
	int32_t V_15 = 0;
	int32_t V_16 = 0;
	Int32U5BU5D_t385246372* V_17 = NULL;
	Int32U5BU5D_t385246372* V_18 = NULL;
	Int32U5BU5D_t385246372* V_19 = NULL;
	Int32U5BU5D_t385246372* V_20 = NULL;
	int32_t G_B3_0 = 0;
	InflateBlocks_t4119258979 * G_B29_0 = NULL;
	InflateBlocks_t4119258979 * G_B28_0 = NULL;
	int32_t G_B32_0 = 0;
	InflateBlocks_t4119258979 * G_B32_1 = NULL;
	InflateBlocks_t4119258979 * G_B31_0 = NULL;
	InflateBlocks_t4119258979 * G_B30_0 = NULL;
	int32_t G_B41_0 = 0;
	int32_t G_B46_0 = 0;
	int32_t G_B51_0 = 0;
	InflateBlocks_t4119258979 * G_B62_0 = NULL;
	InflateBlocks_t4119258979 * G_B61_0 = NULL;
	int32_t G_B63_0 = 0;
	InflateBlocks_t4119258979 * G_B63_1 = NULL;
	int32_t G_B108_0 = 0;
	int32_t G_B111_0 = 0;
	int32_t G_B124_0 = 0;
	int32_t G_B138_0 = 0;
	int32_t G_B144_0 = 0;
	{
		ZlibCodec_t855427629 * L_0 = __this->get__codec_10();
		NullCheck(L_0);
		int32_t L_1 = L_0->get_NextIn_1();
		V_3 = L_1;
		ZlibCodec_t855427629 * L_2 = __this->get__codec_10();
		NullCheck(L_2);
		int32_t L_3 = L_2->get_AvailableBytesIn_2();
		V_4 = L_3;
		int32_t L_4 = __this->get_bitb_12();
		V_1 = L_4;
		int32_t L_5 = __this->get_bitk_11();
		V_2 = L_5;
		int32_t L_6 = __this->get_writeAt_17();
		V_5 = L_6;
		int32_t L_7 = V_5;
		int32_t L_8 = __this->get_readAt_16();
		if ((((int32_t)L_7) >= ((int32_t)L_8)))
		{
			goto IL_004c;
		}
	}
	{
		int32_t L_9 = __this->get_readAt_16();
		int32_t L_10 = V_5;
		G_B3_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_9, (int32_t)L_10)), (int32_t)1));
		goto IL_0055;
	}

IL_004c:
	{
		int32_t L_11 = __this->get_end_15();
		int32_t L_12 = V_5;
		G_B3_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_11, (int32_t)L_12));
	}

IL_0055:
	{
		V_6 = G_B3_0;
	}

IL_0057:
	{
		int32_t L_13 = __this->get_mode_1();
		V_7 = L_13;
		int32_t L_14 = V_7;
		switch (L_14)
		{
			case 0:
			{
				goto IL_0093;
			}
			case 1:
			{
				goto IL_0278;
			}
			case 2:
			{
				goto IL_03dd;
			}
			case 3:
			{
				goto IL_05f8;
			}
			case 4:
			{
				goto IL_0794;
			}
			case 5:
			{
				goto IL_0965;
			}
			case 6:
			{
				goto IL_0da6;
			}
			case 7:
			{
				goto IL_0e90;
			}
			case 8:
			{
				goto IL_0f45;
			}
			case 9:
			{
				goto IL_0f9f;
			}
		}
	}
	{
		goto IL_0ffa;
	}

IL_0093:
	{
		goto IL_0127;
	}

IL_0098:
	{
		int32_t L_15 = V_4;
		if (!L_15)
		{
			goto IL_00a7;
		}
	}
	{
		___r0 = 0;
		goto IL_00fe;
	}

IL_00a7:
	{
		int32_t L_16 = V_1;
		__this->set_bitb_12(L_16);
		int32_t L_17 = V_2;
		__this->set_bitk_11(L_17);
		ZlibCodec_t855427629 * L_18 = __this->get__codec_10();
		int32_t L_19 = V_4;
		NullCheck(L_18);
		L_18->set_AvailableBytesIn_2(L_19);
		ZlibCodec_t855427629 * L_20 = __this->get__codec_10();
		ZlibCodec_t855427629 * L_21 = L_20;
		NullCheck(L_21);
		int64_t L_22 = L_21->get_TotalBytesIn_3();
		int32_t L_23 = V_3;
		ZlibCodec_t855427629 * L_24 = __this->get__codec_10();
		NullCheck(L_24);
		int32_t L_25 = L_24->get_NextIn_1();
		NullCheck(L_21);
		L_21->set_TotalBytesIn_3(((int64_t)il2cpp_codegen_add((int64_t)L_22, (int64_t)(((int64_t)((int64_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_23, (int32_t)L_25))))))));
		ZlibCodec_t855427629 * L_26 = __this->get__codec_10();
		int32_t L_27 = V_3;
		NullCheck(L_26);
		L_26->set_NextIn_1(L_27);
		int32_t L_28 = V_5;
		__this->set_writeAt_17(L_28);
		int32_t L_29 = ___r0;
		int32_t L_30 = InflateBlocks_Flush_m2330293879(__this, L_29, /*hidden argument*/NULL);
		return L_30;
	}

IL_00fe:
	{
		int32_t L_31 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_31, (int32_t)1));
		int32_t L_32 = V_1;
		ZlibCodec_t855427629 * L_33 = __this->get__codec_10();
		NullCheck(L_33);
		ByteU5BU5D_t4116647657* L_34 = L_33->get_InputBuffer_0();
		int32_t L_35 = V_3;
		int32_t L_36 = L_35;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_36, (int32_t)1));
		NullCheck(L_34);
		int32_t L_37 = L_36;
		uint8_t L_38 = (L_34)->GetAt(static_cast<il2cpp_array_size_t>(L_37));
		int32_t L_39 = V_2;
		V_1 = ((int32_t)((int32_t)L_32|(int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_38&(int32_t)((int32_t)255)))<<(int32_t)((int32_t)((int32_t)L_39&(int32_t)((int32_t)31)))))));
		int32_t L_40 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_40, (int32_t)8));
	}

IL_0127:
	{
		int32_t L_41 = V_2;
		if ((((int32_t)L_41) < ((int32_t)3)))
		{
			goto IL_0098;
		}
	}
	{
		int32_t L_42 = V_1;
		V_0 = ((int32_t)((int32_t)L_42&(int32_t)7));
		int32_t L_43 = V_0;
		__this->set_last_9(((int32_t)((int32_t)L_43&(int32_t)1)));
		int32_t L_44 = V_0;
		V_8 = ((int32_t)((uint32_t)L_44>>1));
		uint32_t L_45 = V_8;
		switch (L_45)
		{
			case 0:
			{
				goto IL_015c;
			}
			case 1:
			{
				goto IL_017f;
			}
			case 2:
			{
				goto IL_01e4;
			}
			case 3:
			{
				goto IL_01f8;
			}
		}
	}
	{
		goto IL_0273;
	}

IL_015c:
	{
		int32_t L_46 = V_1;
		V_1 = ((int32_t)((int32_t)L_46>>(int32_t)3));
		int32_t L_47 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_47, (int32_t)3));
		int32_t L_48 = V_2;
		V_0 = ((int32_t)((int32_t)L_48&(int32_t)7));
		int32_t L_49 = V_1;
		int32_t L_50 = V_0;
		V_1 = ((int32_t)((int32_t)L_49>>(int32_t)((int32_t)((int32_t)L_50&(int32_t)((int32_t)31)))));
		int32_t L_51 = V_2;
		int32_t L_52 = V_0;
		V_2 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_51, (int32_t)L_52));
		__this->set_mode_1(1);
		goto IL_0273;
	}

IL_017f:
	{
		Int32U5BU5D_t385246372* L_53 = (Int32U5BU5D_t385246372*)SZArrayNew(Int32U5BU5D_t385246372_il2cpp_TypeInfo_var, (uint32_t)1);
		V_9 = L_53;
		Int32U5BU5D_t385246372* L_54 = (Int32U5BU5D_t385246372*)SZArrayNew(Int32U5BU5D_t385246372_il2cpp_TypeInfo_var, (uint32_t)1);
		V_10 = L_54;
		Int32U5BU5DU5BU5D_t3365920845* L_55 = (Int32U5BU5DU5BU5D_t3365920845*)SZArrayNew(Int32U5BU5DU5BU5D_t3365920845_il2cpp_TypeInfo_var, (uint32_t)1);
		V_11 = L_55;
		Int32U5BU5DU5BU5D_t3365920845* L_56 = (Int32U5BU5DU5BU5D_t3365920845*)SZArrayNew(Int32U5BU5DU5BU5D_t3365920845_il2cpp_TypeInfo_var, (uint32_t)1);
		V_12 = L_56;
		Int32U5BU5D_t385246372* L_57 = V_9;
		Int32U5BU5D_t385246372* L_58 = V_10;
		Int32U5BU5DU5BU5D_t3365920845* L_59 = V_11;
		Int32U5BU5DU5BU5D_t3365920845* L_60 = V_12;
		ZlibCodec_t855427629 * L_61 = __this->get__codec_10();
		IL2CPP_RUNTIME_CLASS_INIT(InfTree_t2692649235_il2cpp_TypeInfo_var);
		InfTree_inflate_trees_fixed_m36146089(NULL /*static, unused*/, L_57, L_58, L_59, L_60, L_61, /*hidden argument*/NULL);
		InflateCodes_t3940108927 * L_62 = __this->get_codes_8();
		Int32U5BU5D_t385246372* L_63 = V_9;
		NullCheck(L_63);
		int32_t L_64 = 0;
		int32_t L_65 = (L_63)->GetAt(static_cast<il2cpp_array_size_t>(L_64));
		Int32U5BU5D_t385246372* L_66 = V_10;
		NullCheck(L_66);
		int32_t L_67 = 0;
		int32_t L_68 = (L_66)->GetAt(static_cast<il2cpp_array_size_t>(L_67));
		Int32U5BU5DU5BU5D_t3365920845* L_69 = V_11;
		NullCheck(L_69);
		int32_t L_70 = 0;
		Int32U5BU5D_t385246372* L_71 = (Int32U5BU5D_t385246372*)(L_69)->GetAt(static_cast<il2cpp_array_size_t>(L_70));
		Int32U5BU5DU5BU5D_t3365920845* L_72 = V_12;
		NullCheck(L_72);
		int32_t L_73 = 0;
		Int32U5BU5D_t385246372* L_74 = (Int32U5BU5D_t385246372*)(L_72)->GetAt(static_cast<il2cpp_array_size_t>(L_73));
		NullCheck(L_62);
		InflateCodes_Init_m3604941619(L_62, L_65, L_68, L_71, 0, L_74, 0, /*hidden argument*/NULL);
		int32_t L_75 = V_1;
		V_1 = ((int32_t)((int32_t)L_75>>(int32_t)3));
		int32_t L_76 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_76, (int32_t)3));
		__this->set_mode_1(6);
		goto IL_0273;
	}

IL_01e4:
	{
		int32_t L_77 = V_1;
		V_1 = ((int32_t)((int32_t)L_77>>(int32_t)3));
		int32_t L_78 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_78, (int32_t)3));
		__this->set_mode_1(3);
		goto IL_0273;
	}

IL_01f8:
	{
		int32_t L_79 = V_1;
		V_1 = ((int32_t)((int32_t)L_79>>(int32_t)3));
		int32_t L_80 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_80, (int32_t)3));
		__this->set_mode_1(((int32_t)9));
		ZlibCodec_t855427629 * L_81 = __this->get__codec_10();
		NullCheck(L_81);
		L_81->set_Message_8(_stringLiteral4065135959);
		___r0 = ((int32_t)-3);
		int32_t L_82 = V_1;
		__this->set_bitb_12(L_82);
		int32_t L_83 = V_2;
		__this->set_bitk_11(L_83);
		ZlibCodec_t855427629 * L_84 = __this->get__codec_10();
		int32_t L_85 = V_4;
		NullCheck(L_84);
		L_84->set_AvailableBytesIn_2(L_85);
		ZlibCodec_t855427629 * L_86 = __this->get__codec_10();
		ZlibCodec_t855427629 * L_87 = L_86;
		NullCheck(L_87);
		int64_t L_88 = L_87->get_TotalBytesIn_3();
		int32_t L_89 = V_3;
		ZlibCodec_t855427629 * L_90 = __this->get__codec_10();
		NullCheck(L_90);
		int32_t L_91 = L_90->get_NextIn_1();
		NullCheck(L_87);
		L_87->set_TotalBytesIn_3(((int64_t)il2cpp_codegen_add((int64_t)L_88, (int64_t)(((int64_t)((int64_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_89, (int32_t)L_91))))))));
		ZlibCodec_t855427629 * L_92 = __this->get__codec_10();
		int32_t L_93 = V_3;
		NullCheck(L_92);
		L_92->set_NextIn_1(L_93);
		int32_t L_94 = V_5;
		__this->set_writeAt_17(L_94);
		int32_t L_95 = ___r0;
		int32_t L_96 = InflateBlocks_Flush_m2330293879(__this, L_95, /*hidden argument*/NULL);
		return L_96;
	}

IL_0273:
	{
		goto IL_1055;
	}

IL_0278:
	{
		goto IL_030c;
	}

IL_027d:
	{
		int32_t L_97 = V_4;
		if (!L_97)
		{
			goto IL_028c;
		}
	}
	{
		___r0 = 0;
		goto IL_02e3;
	}

IL_028c:
	{
		int32_t L_98 = V_1;
		__this->set_bitb_12(L_98);
		int32_t L_99 = V_2;
		__this->set_bitk_11(L_99);
		ZlibCodec_t855427629 * L_100 = __this->get__codec_10();
		int32_t L_101 = V_4;
		NullCheck(L_100);
		L_100->set_AvailableBytesIn_2(L_101);
		ZlibCodec_t855427629 * L_102 = __this->get__codec_10();
		ZlibCodec_t855427629 * L_103 = L_102;
		NullCheck(L_103);
		int64_t L_104 = L_103->get_TotalBytesIn_3();
		int32_t L_105 = V_3;
		ZlibCodec_t855427629 * L_106 = __this->get__codec_10();
		NullCheck(L_106);
		int32_t L_107 = L_106->get_NextIn_1();
		NullCheck(L_103);
		L_103->set_TotalBytesIn_3(((int64_t)il2cpp_codegen_add((int64_t)L_104, (int64_t)(((int64_t)((int64_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_105, (int32_t)L_107))))))));
		ZlibCodec_t855427629 * L_108 = __this->get__codec_10();
		int32_t L_109 = V_3;
		NullCheck(L_108);
		L_108->set_NextIn_1(L_109);
		int32_t L_110 = V_5;
		__this->set_writeAt_17(L_110);
		int32_t L_111 = ___r0;
		int32_t L_112 = InflateBlocks_Flush_m2330293879(__this, L_111, /*hidden argument*/NULL);
		return L_112;
	}

IL_02e3:
	{
		int32_t L_113 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_113, (int32_t)1));
		int32_t L_114 = V_1;
		ZlibCodec_t855427629 * L_115 = __this->get__codec_10();
		NullCheck(L_115);
		ByteU5BU5D_t4116647657* L_116 = L_115->get_InputBuffer_0();
		int32_t L_117 = V_3;
		int32_t L_118 = L_117;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_118, (int32_t)1));
		NullCheck(L_116);
		int32_t L_119 = L_118;
		uint8_t L_120 = (L_116)->GetAt(static_cast<il2cpp_array_size_t>(L_119));
		int32_t L_121 = V_2;
		V_1 = ((int32_t)((int32_t)L_114|(int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_120&(int32_t)((int32_t)255)))<<(int32_t)((int32_t)((int32_t)L_121&(int32_t)((int32_t)31)))))));
		int32_t L_122 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_122, (int32_t)8));
	}

IL_030c:
	{
		int32_t L_123 = V_2;
		if ((((int32_t)L_123) < ((int32_t)((int32_t)32))))
		{
			goto IL_027d;
		}
	}
	{
		int32_t L_124 = V_1;
		int32_t L_125 = V_1;
		if ((((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((~L_124))>>(int32_t)((int32_t)16)))&(int32_t)((int32_t)65535)))) == ((int32_t)((int32_t)((int32_t)L_125&(int32_t)((int32_t)65535))))))
		{
			goto IL_039e;
		}
	}
	{
		__this->set_mode_1(((int32_t)9));
		ZlibCodec_t855427629 * L_126 = __this->get__codec_10();
		NullCheck(L_126);
		L_126->set_Message_8(_stringLiteral1557091951);
		___r0 = ((int32_t)-3);
		int32_t L_127 = V_1;
		__this->set_bitb_12(L_127);
		int32_t L_128 = V_2;
		__this->set_bitk_11(L_128);
		ZlibCodec_t855427629 * L_129 = __this->get__codec_10();
		int32_t L_130 = V_4;
		NullCheck(L_129);
		L_129->set_AvailableBytesIn_2(L_130);
		ZlibCodec_t855427629 * L_131 = __this->get__codec_10();
		ZlibCodec_t855427629 * L_132 = L_131;
		NullCheck(L_132);
		int64_t L_133 = L_132->get_TotalBytesIn_3();
		int32_t L_134 = V_3;
		ZlibCodec_t855427629 * L_135 = __this->get__codec_10();
		NullCheck(L_135);
		int32_t L_136 = L_135->get_NextIn_1();
		NullCheck(L_132);
		L_132->set_TotalBytesIn_3(((int64_t)il2cpp_codegen_add((int64_t)L_133, (int64_t)(((int64_t)((int64_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_134, (int32_t)L_136))))))));
		ZlibCodec_t855427629 * L_137 = __this->get__codec_10();
		int32_t L_138 = V_3;
		NullCheck(L_137);
		L_137->set_NextIn_1(L_138);
		int32_t L_139 = V_5;
		__this->set_writeAt_17(L_139);
		int32_t L_140 = ___r0;
		int32_t L_141 = InflateBlocks_Flush_m2330293879(__this, L_140, /*hidden argument*/NULL);
		return L_141;
	}

IL_039e:
	{
		int32_t L_142 = V_1;
		__this->set_left_2(((int32_t)((int32_t)L_142&(int32_t)((int32_t)65535))));
		int32_t L_143 = 0;
		V_2 = L_143;
		V_1 = L_143;
		int32_t L_144 = __this->get_left_2();
		G_B28_0 = __this;
		if (!L_144)
		{
			G_B29_0 = __this;
			goto IL_03c1;
		}
	}
	{
		G_B32_0 = 2;
		G_B32_1 = G_B28_0;
		goto IL_03d3;
	}

IL_03c1:
	{
		int32_t L_145 = __this->get_last_9();
		G_B30_0 = G_B29_0;
		if (!L_145)
		{
			G_B31_0 = G_B29_0;
			goto IL_03d2;
		}
	}
	{
		G_B32_0 = 7;
		G_B32_1 = G_B30_0;
		goto IL_03d3;
	}

IL_03d2:
	{
		G_B32_0 = 0;
		G_B32_1 = G_B31_0;
	}

IL_03d3:
	{
		NullCheck(G_B32_1);
		G_B32_1->set_mode_1(G_B32_0);
		goto IL_1055;
	}

IL_03dd:
	{
		int32_t L_146 = V_4;
		if (L_146)
		{
			goto IL_043b;
		}
	}
	{
		int32_t L_147 = V_1;
		__this->set_bitb_12(L_147);
		int32_t L_148 = V_2;
		__this->set_bitk_11(L_148);
		ZlibCodec_t855427629 * L_149 = __this->get__codec_10();
		int32_t L_150 = V_4;
		NullCheck(L_149);
		L_149->set_AvailableBytesIn_2(L_150);
		ZlibCodec_t855427629 * L_151 = __this->get__codec_10();
		ZlibCodec_t855427629 * L_152 = L_151;
		NullCheck(L_152);
		int64_t L_153 = L_152->get_TotalBytesIn_3();
		int32_t L_154 = V_3;
		ZlibCodec_t855427629 * L_155 = __this->get__codec_10();
		NullCheck(L_155);
		int32_t L_156 = L_155->get_NextIn_1();
		NullCheck(L_152);
		L_152->set_TotalBytesIn_3(((int64_t)il2cpp_codegen_add((int64_t)L_153, (int64_t)(((int64_t)((int64_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_154, (int32_t)L_156))))))));
		ZlibCodec_t855427629 * L_157 = __this->get__codec_10();
		int32_t L_158 = V_3;
		NullCheck(L_157);
		L_157->set_NextIn_1(L_158);
		int32_t L_159 = V_5;
		__this->set_writeAt_17(L_159);
		int32_t L_160 = ___r0;
		int32_t L_161 = InflateBlocks_Flush_m2330293879(__this, L_160, /*hidden argument*/NULL);
		return L_161;
	}

IL_043b:
	{
		int32_t L_162 = V_6;
		if (L_162)
		{
			goto IL_056e;
		}
	}
	{
		int32_t L_163 = V_5;
		int32_t L_164 = __this->get_end_15();
		if ((!(((uint32_t)L_163) == ((uint32_t)L_164))))
		{
			goto IL_0485;
		}
	}
	{
		int32_t L_165 = __this->get_readAt_16();
		if (!L_165)
		{
			goto IL_0485;
		}
	}
	{
		V_5 = 0;
		int32_t L_166 = V_5;
		int32_t L_167 = __this->get_readAt_16();
		if ((((int32_t)L_166) >= ((int32_t)L_167)))
		{
			goto IL_047a;
		}
	}
	{
		int32_t L_168 = __this->get_readAt_16();
		int32_t L_169 = V_5;
		G_B41_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_168, (int32_t)L_169)), (int32_t)1));
		goto IL_0483;
	}

IL_047a:
	{
		int32_t L_170 = __this->get_end_15();
		int32_t L_171 = V_5;
		G_B41_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_170, (int32_t)L_171));
	}

IL_0483:
	{
		V_6 = G_B41_0;
	}

IL_0485:
	{
		int32_t L_172 = V_6;
		if (L_172)
		{
			goto IL_056e;
		}
	}
	{
		int32_t L_173 = V_5;
		__this->set_writeAt_17(L_173);
		int32_t L_174 = ___r0;
		int32_t L_175 = InflateBlocks_Flush_m2330293879(__this, L_174, /*hidden argument*/NULL);
		___r0 = L_175;
		int32_t L_176 = __this->get_writeAt_17();
		V_5 = L_176;
		int32_t L_177 = V_5;
		int32_t L_178 = __this->get_readAt_16();
		if ((((int32_t)L_177) >= ((int32_t)L_178)))
		{
			goto IL_04c2;
		}
	}
	{
		int32_t L_179 = __this->get_readAt_16();
		int32_t L_180 = V_5;
		G_B46_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_179, (int32_t)L_180)), (int32_t)1));
		goto IL_04cb;
	}

IL_04c2:
	{
		int32_t L_181 = __this->get_end_15();
		int32_t L_182 = V_5;
		G_B46_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_181, (int32_t)L_182));
	}

IL_04cb:
	{
		V_6 = G_B46_0;
		int32_t L_183 = V_5;
		int32_t L_184 = __this->get_end_15();
		if ((!(((uint32_t)L_183) == ((uint32_t)L_184))))
		{
			goto IL_0510;
		}
	}
	{
		int32_t L_185 = __this->get_readAt_16();
		if (!L_185)
		{
			goto IL_0510;
		}
	}
	{
		V_5 = 0;
		int32_t L_186 = V_5;
		int32_t L_187 = __this->get_readAt_16();
		if ((((int32_t)L_186) >= ((int32_t)L_187)))
		{
			goto IL_0505;
		}
	}
	{
		int32_t L_188 = __this->get_readAt_16();
		int32_t L_189 = V_5;
		G_B51_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_188, (int32_t)L_189)), (int32_t)1));
		goto IL_050e;
	}

IL_0505:
	{
		int32_t L_190 = __this->get_end_15();
		int32_t L_191 = V_5;
		G_B51_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_190, (int32_t)L_191));
	}

IL_050e:
	{
		V_6 = G_B51_0;
	}

IL_0510:
	{
		int32_t L_192 = V_6;
		if (L_192)
		{
			goto IL_056e;
		}
	}
	{
		int32_t L_193 = V_1;
		__this->set_bitb_12(L_193);
		int32_t L_194 = V_2;
		__this->set_bitk_11(L_194);
		ZlibCodec_t855427629 * L_195 = __this->get__codec_10();
		int32_t L_196 = V_4;
		NullCheck(L_195);
		L_195->set_AvailableBytesIn_2(L_196);
		ZlibCodec_t855427629 * L_197 = __this->get__codec_10();
		ZlibCodec_t855427629 * L_198 = L_197;
		NullCheck(L_198);
		int64_t L_199 = L_198->get_TotalBytesIn_3();
		int32_t L_200 = V_3;
		ZlibCodec_t855427629 * L_201 = __this->get__codec_10();
		NullCheck(L_201);
		int32_t L_202 = L_201->get_NextIn_1();
		NullCheck(L_198);
		L_198->set_TotalBytesIn_3(((int64_t)il2cpp_codegen_add((int64_t)L_199, (int64_t)(((int64_t)((int64_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_200, (int32_t)L_202))))))));
		ZlibCodec_t855427629 * L_203 = __this->get__codec_10();
		int32_t L_204 = V_3;
		NullCheck(L_203);
		L_203->set_NextIn_1(L_204);
		int32_t L_205 = V_5;
		__this->set_writeAt_17(L_205);
		int32_t L_206 = ___r0;
		int32_t L_207 = InflateBlocks_Flush_m2330293879(__this, L_206, /*hidden argument*/NULL);
		return L_207;
	}

IL_056e:
	{
		___r0 = 0;
		int32_t L_208 = __this->get_left_2();
		V_0 = L_208;
		int32_t L_209 = V_0;
		int32_t L_210 = V_4;
		if ((((int32_t)L_209) <= ((int32_t)L_210)))
		{
			goto IL_0583;
		}
	}
	{
		int32_t L_211 = V_4;
		V_0 = L_211;
	}

IL_0583:
	{
		int32_t L_212 = V_0;
		int32_t L_213 = V_6;
		if ((((int32_t)L_212) <= ((int32_t)L_213)))
		{
			goto IL_058e;
		}
	}
	{
		int32_t L_214 = V_6;
		V_0 = L_214;
	}

IL_058e:
	{
		ZlibCodec_t855427629 * L_215 = __this->get__codec_10();
		NullCheck(L_215);
		ByteU5BU5D_t4116647657* L_216 = L_215->get_InputBuffer_0();
		int32_t L_217 = V_3;
		ByteU5BU5D_t4116647657* L_218 = __this->get_window_14();
		int32_t L_219 = V_5;
		int32_t L_220 = V_0;
		Array_Copy_m344457298(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_216, L_217, (RuntimeArray *)(RuntimeArray *)L_218, L_219, L_220, /*hidden argument*/NULL);
		int32_t L_221 = V_3;
		int32_t L_222 = V_0;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_221, (int32_t)L_222));
		int32_t L_223 = V_4;
		int32_t L_224 = V_0;
		V_4 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_223, (int32_t)L_224));
		int32_t L_225 = V_5;
		int32_t L_226 = V_0;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_225, (int32_t)L_226));
		int32_t L_227 = V_6;
		int32_t L_228 = V_0;
		V_6 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_227, (int32_t)L_228));
		int32_t L_229 = __this->get_left_2();
		int32_t L_230 = V_0;
		int32_t L_231 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_229, (int32_t)L_230));
		V_13 = L_231;
		__this->set_left_2(L_231);
		int32_t L_232 = V_13;
		if (!L_232)
		{
			goto IL_05db;
		}
	}
	{
		goto IL_1055;
	}

IL_05db:
	{
		int32_t L_233 = __this->get_last_9();
		G_B61_0 = __this;
		if (!L_233)
		{
			G_B62_0 = __this;
			goto IL_05ed;
		}
	}
	{
		G_B63_0 = 7;
		G_B63_1 = G_B61_0;
		goto IL_05ee;
	}

IL_05ed:
	{
		G_B63_0 = 0;
		G_B63_1 = G_B62_0;
	}

IL_05ee:
	{
		NullCheck(G_B63_1);
		G_B63_1->set_mode_1(G_B63_0);
		goto IL_1055;
	}

IL_05f8:
	{
		goto IL_068c;
	}

IL_05fd:
	{
		int32_t L_234 = V_4;
		if (!L_234)
		{
			goto IL_060c;
		}
	}
	{
		___r0 = 0;
		goto IL_0663;
	}

IL_060c:
	{
		int32_t L_235 = V_1;
		__this->set_bitb_12(L_235);
		int32_t L_236 = V_2;
		__this->set_bitk_11(L_236);
		ZlibCodec_t855427629 * L_237 = __this->get__codec_10();
		int32_t L_238 = V_4;
		NullCheck(L_237);
		L_237->set_AvailableBytesIn_2(L_238);
		ZlibCodec_t855427629 * L_239 = __this->get__codec_10();
		ZlibCodec_t855427629 * L_240 = L_239;
		NullCheck(L_240);
		int64_t L_241 = L_240->get_TotalBytesIn_3();
		int32_t L_242 = V_3;
		ZlibCodec_t855427629 * L_243 = __this->get__codec_10();
		NullCheck(L_243);
		int32_t L_244 = L_243->get_NextIn_1();
		NullCheck(L_240);
		L_240->set_TotalBytesIn_3(((int64_t)il2cpp_codegen_add((int64_t)L_241, (int64_t)(((int64_t)((int64_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_242, (int32_t)L_244))))))));
		ZlibCodec_t855427629 * L_245 = __this->get__codec_10();
		int32_t L_246 = V_3;
		NullCheck(L_245);
		L_245->set_NextIn_1(L_246);
		int32_t L_247 = V_5;
		__this->set_writeAt_17(L_247);
		int32_t L_248 = ___r0;
		int32_t L_249 = InflateBlocks_Flush_m2330293879(__this, L_248, /*hidden argument*/NULL);
		return L_249;
	}

IL_0663:
	{
		int32_t L_250 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_250, (int32_t)1));
		int32_t L_251 = V_1;
		ZlibCodec_t855427629 * L_252 = __this->get__codec_10();
		NullCheck(L_252);
		ByteU5BU5D_t4116647657* L_253 = L_252->get_InputBuffer_0();
		int32_t L_254 = V_3;
		int32_t L_255 = L_254;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_255, (int32_t)1));
		NullCheck(L_253);
		int32_t L_256 = L_255;
		uint8_t L_257 = (L_253)->GetAt(static_cast<il2cpp_array_size_t>(L_256));
		int32_t L_258 = V_2;
		V_1 = ((int32_t)((int32_t)L_251|(int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_257&(int32_t)((int32_t)255)))<<(int32_t)((int32_t)((int32_t)L_258&(int32_t)((int32_t)31)))))));
		int32_t L_259 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_259, (int32_t)8));
	}

IL_068c:
	{
		int32_t L_260 = V_2;
		if ((((int32_t)L_260) < ((int32_t)((int32_t)14))))
		{
			goto IL_05fd;
		}
	}
	{
		int32_t L_261 = V_1;
		int32_t L_262 = ((int32_t)((int32_t)L_261&(int32_t)((int32_t)16383)));
		V_0 = L_262;
		__this->set_table_3(L_262);
		int32_t L_263 = V_0;
		if ((((int32_t)((int32_t)((int32_t)L_263&(int32_t)((int32_t)31)))) > ((int32_t)((int32_t)29))))
		{
			goto IL_06bb;
		}
	}
	{
		int32_t L_264 = V_0;
		if ((((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_264>>(int32_t)5))&(int32_t)((int32_t)31)))) <= ((int32_t)((int32_t)29))))
		{
			goto IL_072e;
		}
	}

IL_06bb:
	{
		__this->set_mode_1(((int32_t)9));
		ZlibCodec_t855427629 * L_265 = __this->get__codec_10();
		NullCheck(L_265);
		L_265->set_Message_8(_stringLiteral2274994096);
		___r0 = ((int32_t)-3);
		int32_t L_266 = V_1;
		__this->set_bitb_12(L_266);
		int32_t L_267 = V_2;
		__this->set_bitk_11(L_267);
		ZlibCodec_t855427629 * L_268 = __this->get__codec_10();
		int32_t L_269 = V_4;
		NullCheck(L_268);
		L_268->set_AvailableBytesIn_2(L_269);
		ZlibCodec_t855427629 * L_270 = __this->get__codec_10();
		ZlibCodec_t855427629 * L_271 = L_270;
		NullCheck(L_271);
		int64_t L_272 = L_271->get_TotalBytesIn_3();
		int32_t L_273 = V_3;
		ZlibCodec_t855427629 * L_274 = __this->get__codec_10();
		NullCheck(L_274);
		int32_t L_275 = L_274->get_NextIn_1();
		NullCheck(L_271);
		L_271->set_TotalBytesIn_3(((int64_t)il2cpp_codegen_add((int64_t)L_272, (int64_t)(((int64_t)((int64_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_273, (int32_t)L_275))))))));
		ZlibCodec_t855427629 * L_276 = __this->get__codec_10();
		int32_t L_277 = V_3;
		NullCheck(L_276);
		L_276->set_NextIn_1(L_277);
		int32_t L_278 = V_5;
		__this->set_writeAt_17(L_278);
		int32_t L_279 = ___r0;
		int32_t L_280 = InflateBlocks_Flush_m2330293879(__this, L_279, /*hidden argument*/NULL);
		return L_280;
	}

IL_072e:
	{
		int32_t L_281 = V_0;
		int32_t L_282 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)258), (int32_t)((int32_t)((int32_t)L_281&(int32_t)((int32_t)31))))), (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_282>>(int32_t)5))&(int32_t)((int32_t)31)))));
		Int32U5BU5D_t385246372* L_283 = __this->get_blens_5();
		if (!L_283)
		{
			goto IL_0759;
		}
	}
	{
		Int32U5BU5D_t385246372* L_284 = __this->get_blens_5();
		NullCheck(L_284);
		int32_t L_285 = V_0;
		if ((((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_284)->max_length))))) >= ((int32_t)L_285)))
		{
			goto IL_076a;
		}
	}

IL_0759:
	{
		int32_t L_286 = V_0;
		Int32U5BU5D_t385246372* L_287 = (Int32U5BU5D_t385246372*)SZArrayNew(Int32U5BU5D_t385246372_il2cpp_TypeInfo_var, (uint32_t)L_286);
		__this->set_blens_5(L_287);
		goto IL_0777;
	}

IL_076a:
	{
		Int32U5BU5D_t385246372* L_288 = __this->get_blens_5();
		int32_t L_289 = V_0;
		Array_Clear_m2231608178(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_288, 0, L_289, /*hidden argument*/NULL);
	}

IL_0777:
	{
		int32_t L_290 = V_1;
		V_1 = ((int32_t)((int32_t)L_290>>(int32_t)((int32_t)14)));
		int32_t L_291 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_291, (int32_t)((int32_t)14)));
		__this->set_index_4(0);
		__this->set_mode_1(4);
		goto IL_0794;
	}

IL_0794:
	{
		goto IL_085f;
	}

IL_0799:
	{
		goto IL_082d;
	}

IL_079e:
	{
		int32_t L_292 = V_4;
		if (!L_292)
		{
			goto IL_07ad;
		}
	}
	{
		___r0 = 0;
		goto IL_0804;
	}

IL_07ad:
	{
		int32_t L_293 = V_1;
		__this->set_bitb_12(L_293);
		int32_t L_294 = V_2;
		__this->set_bitk_11(L_294);
		ZlibCodec_t855427629 * L_295 = __this->get__codec_10();
		int32_t L_296 = V_4;
		NullCheck(L_295);
		L_295->set_AvailableBytesIn_2(L_296);
		ZlibCodec_t855427629 * L_297 = __this->get__codec_10();
		ZlibCodec_t855427629 * L_298 = L_297;
		NullCheck(L_298);
		int64_t L_299 = L_298->get_TotalBytesIn_3();
		int32_t L_300 = V_3;
		ZlibCodec_t855427629 * L_301 = __this->get__codec_10();
		NullCheck(L_301);
		int32_t L_302 = L_301->get_NextIn_1();
		NullCheck(L_298);
		L_298->set_TotalBytesIn_3(((int64_t)il2cpp_codegen_add((int64_t)L_299, (int64_t)(((int64_t)((int64_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_300, (int32_t)L_302))))))));
		ZlibCodec_t855427629 * L_303 = __this->get__codec_10();
		int32_t L_304 = V_3;
		NullCheck(L_303);
		L_303->set_NextIn_1(L_304);
		int32_t L_305 = V_5;
		__this->set_writeAt_17(L_305);
		int32_t L_306 = ___r0;
		int32_t L_307 = InflateBlocks_Flush_m2330293879(__this, L_306, /*hidden argument*/NULL);
		return L_307;
	}

IL_0804:
	{
		int32_t L_308 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_308, (int32_t)1));
		int32_t L_309 = V_1;
		ZlibCodec_t855427629 * L_310 = __this->get__codec_10();
		NullCheck(L_310);
		ByteU5BU5D_t4116647657* L_311 = L_310->get_InputBuffer_0();
		int32_t L_312 = V_3;
		int32_t L_313 = L_312;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_313, (int32_t)1));
		NullCheck(L_311);
		int32_t L_314 = L_313;
		uint8_t L_315 = (L_311)->GetAt(static_cast<il2cpp_array_size_t>(L_314));
		int32_t L_316 = V_2;
		V_1 = ((int32_t)((int32_t)L_309|(int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_315&(int32_t)((int32_t)255)))<<(int32_t)((int32_t)((int32_t)L_316&(int32_t)((int32_t)31)))))));
		int32_t L_317 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_317, (int32_t)8));
	}

IL_082d:
	{
		int32_t L_318 = V_2;
		if ((((int32_t)L_318) < ((int32_t)3)))
		{
			goto IL_079e;
		}
	}
	{
		Int32U5BU5D_t385246372* L_319 = __this->get_blens_5();
		IL2CPP_RUNTIME_CLASS_INIT(InflateBlocks_t4119258979_il2cpp_TypeInfo_var);
		Int32U5BU5D_t385246372* L_320 = ((InflateBlocks_t4119258979_StaticFields*)il2cpp_codegen_static_fields_for(InflateBlocks_t4119258979_il2cpp_TypeInfo_var))->get_border_0();
		int32_t L_321 = __this->get_index_4();
		int32_t L_322 = L_321;
		V_13 = L_322;
		__this->set_index_4(((int32_t)il2cpp_codegen_add((int32_t)L_322, (int32_t)1)));
		int32_t L_323 = V_13;
		NullCheck(L_320);
		int32_t L_324 = L_323;
		int32_t L_325 = (L_320)->GetAt(static_cast<il2cpp_array_size_t>(L_324));
		int32_t L_326 = V_1;
		NullCheck(L_319);
		(L_319)->SetAt(static_cast<il2cpp_array_size_t>(L_325), (int32_t)((int32_t)((int32_t)L_326&(int32_t)7)));
		int32_t L_327 = V_1;
		V_1 = ((int32_t)((int32_t)L_327>>(int32_t)3));
		int32_t L_328 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_328, (int32_t)3));
	}

IL_085f:
	{
		int32_t L_329 = __this->get_index_4();
		int32_t L_330 = __this->get_table_3();
		if ((((int32_t)L_329) < ((int32_t)((int32_t)il2cpp_codegen_add((int32_t)4, (int32_t)((int32_t)((int32_t)L_330>>(int32_t)((int32_t)10))))))))
		{
			goto IL_0799;
		}
	}
	{
		goto IL_089b;
	}

IL_087a:
	{
		Int32U5BU5D_t385246372* L_331 = __this->get_blens_5();
		IL2CPP_RUNTIME_CLASS_INIT(InflateBlocks_t4119258979_il2cpp_TypeInfo_var);
		Int32U5BU5D_t385246372* L_332 = ((InflateBlocks_t4119258979_StaticFields*)il2cpp_codegen_static_fields_for(InflateBlocks_t4119258979_il2cpp_TypeInfo_var))->get_border_0();
		int32_t L_333 = __this->get_index_4();
		int32_t L_334 = L_333;
		V_13 = L_334;
		__this->set_index_4(((int32_t)il2cpp_codegen_add((int32_t)L_334, (int32_t)1)));
		int32_t L_335 = V_13;
		NullCheck(L_332);
		int32_t L_336 = L_335;
		int32_t L_337 = (L_332)->GetAt(static_cast<il2cpp_array_size_t>(L_336));
		NullCheck(L_331);
		(L_331)->SetAt(static_cast<il2cpp_array_size_t>(L_337), (int32_t)0);
	}

IL_089b:
	{
		int32_t L_338 = __this->get_index_4();
		if ((((int32_t)L_338) < ((int32_t)((int32_t)19))))
		{
			goto IL_087a;
		}
	}
	{
		Int32U5BU5D_t385246372* L_339 = __this->get_bb_6();
		NullCheck(L_339);
		(L_339)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)7);
		InfTree_t2692649235 * L_340 = __this->get_inftree_20();
		Int32U5BU5D_t385246372* L_341 = __this->get_blens_5();
		Int32U5BU5D_t385246372* L_342 = __this->get_bb_6();
		Int32U5BU5D_t385246372* L_343 = __this->get_tb_7();
		Int32U5BU5D_t385246372* L_344 = __this->get_hufts_13();
		ZlibCodec_t855427629 * L_345 = __this->get__codec_10();
		NullCheck(L_340);
		int32_t L_346 = InfTree_inflate_trees_bits_m1558208322(L_340, L_341, L_342, L_343, L_344, L_345, /*hidden argument*/NULL);
		V_0 = L_346;
		int32_t L_347 = V_0;
		if (!L_347)
		{
			goto IL_0952;
		}
	}
	{
		int32_t L_348 = V_0;
		___r0 = L_348;
		int32_t L_349 = ___r0;
		if ((!(((uint32_t)L_349) == ((uint32_t)((int32_t)-3)))))
		{
			goto IL_08fb;
		}
	}
	{
		__this->set_blens_5((Int32U5BU5D_t385246372*)NULL);
		__this->set_mode_1(((int32_t)9));
	}

IL_08fb:
	{
		int32_t L_350 = V_1;
		__this->set_bitb_12(L_350);
		int32_t L_351 = V_2;
		__this->set_bitk_11(L_351);
		ZlibCodec_t855427629 * L_352 = __this->get__codec_10();
		int32_t L_353 = V_4;
		NullCheck(L_352);
		L_352->set_AvailableBytesIn_2(L_353);
		ZlibCodec_t855427629 * L_354 = __this->get__codec_10();
		ZlibCodec_t855427629 * L_355 = L_354;
		NullCheck(L_355);
		int64_t L_356 = L_355->get_TotalBytesIn_3();
		int32_t L_357 = V_3;
		ZlibCodec_t855427629 * L_358 = __this->get__codec_10();
		NullCheck(L_358);
		int32_t L_359 = L_358->get_NextIn_1();
		NullCheck(L_355);
		L_355->set_TotalBytesIn_3(((int64_t)il2cpp_codegen_add((int64_t)L_356, (int64_t)(((int64_t)((int64_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_357, (int32_t)L_359))))))));
		ZlibCodec_t855427629 * L_360 = __this->get__codec_10();
		int32_t L_361 = V_3;
		NullCheck(L_360);
		L_360->set_NextIn_1(L_361);
		int32_t L_362 = V_5;
		__this->set_writeAt_17(L_362);
		int32_t L_363 = ___r0;
		int32_t L_364 = InflateBlocks_Flush_m2330293879(__this, L_363, /*hidden argument*/NULL);
		return L_364;
	}

IL_0952:
	{
		__this->set_index_4(0);
		__this->set_mode_1(5);
		goto IL_0965;
	}

IL_0965:
	{
		int32_t L_365 = __this->get_table_3();
		V_0 = L_365;
		int32_t L_366 = __this->get_index_4();
		int32_t L_367 = V_0;
		int32_t L_368 = V_0;
		if ((((int32_t)L_366) < ((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)258), (int32_t)((int32_t)((int32_t)L_367&(int32_t)((int32_t)31))))), (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_368>>(int32_t)5))&(int32_t)((int32_t)31))))))))
		{
			goto IL_098d;
		}
	}
	{
		goto IL_0c8b;
	}

IL_098d:
	{
		Int32U5BU5D_t385246372* L_369 = __this->get_bb_6();
		NullCheck(L_369);
		int32_t L_370 = 0;
		int32_t L_371 = (L_369)->GetAt(static_cast<il2cpp_array_size_t>(L_370));
		V_0 = L_371;
		goto IL_0a2a;
	}

IL_099b:
	{
		int32_t L_372 = V_4;
		if (!L_372)
		{
			goto IL_09aa;
		}
	}
	{
		___r0 = 0;
		goto IL_0a01;
	}

IL_09aa:
	{
		int32_t L_373 = V_1;
		__this->set_bitb_12(L_373);
		int32_t L_374 = V_2;
		__this->set_bitk_11(L_374);
		ZlibCodec_t855427629 * L_375 = __this->get__codec_10();
		int32_t L_376 = V_4;
		NullCheck(L_375);
		L_375->set_AvailableBytesIn_2(L_376);
		ZlibCodec_t855427629 * L_377 = __this->get__codec_10();
		ZlibCodec_t855427629 * L_378 = L_377;
		NullCheck(L_378);
		int64_t L_379 = L_378->get_TotalBytesIn_3();
		int32_t L_380 = V_3;
		ZlibCodec_t855427629 * L_381 = __this->get__codec_10();
		NullCheck(L_381);
		int32_t L_382 = L_381->get_NextIn_1();
		NullCheck(L_378);
		L_378->set_TotalBytesIn_3(((int64_t)il2cpp_codegen_add((int64_t)L_379, (int64_t)(((int64_t)((int64_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_380, (int32_t)L_382))))))));
		ZlibCodec_t855427629 * L_383 = __this->get__codec_10();
		int32_t L_384 = V_3;
		NullCheck(L_383);
		L_383->set_NextIn_1(L_384);
		int32_t L_385 = V_5;
		__this->set_writeAt_17(L_385);
		int32_t L_386 = ___r0;
		int32_t L_387 = InflateBlocks_Flush_m2330293879(__this, L_386, /*hidden argument*/NULL);
		return L_387;
	}

IL_0a01:
	{
		int32_t L_388 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_388, (int32_t)1));
		int32_t L_389 = V_1;
		ZlibCodec_t855427629 * L_390 = __this->get__codec_10();
		NullCheck(L_390);
		ByteU5BU5D_t4116647657* L_391 = L_390->get_InputBuffer_0();
		int32_t L_392 = V_3;
		int32_t L_393 = L_392;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_393, (int32_t)1));
		NullCheck(L_391);
		int32_t L_394 = L_393;
		uint8_t L_395 = (L_391)->GetAt(static_cast<il2cpp_array_size_t>(L_394));
		int32_t L_396 = V_2;
		V_1 = ((int32_t)((int32_t)L_389|(int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_395&(int32_t)((int32_t)255)))<<(int32_t)((int32_t)((int32_t)L_396&(int32_t)((int32_t)31)))))));
		int32_t L_397 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_397, (int32_t)8));
	}

IL_0a2a:
	{
		int32_t L_398 = V_2;
		int32_t L_399 = V_0;
		if ((((int32_t)L_398) < ((int32_t)L_399)))
		{
			goto IL_099b;
		}
	}
	{
		Int32U5BU5D_t385246372* L_400 = __this->get_hufts_13();
		Int32U5BU5D_t385246372* L_401 = __this->get_tb_7();
		NullCheck(L_401);
		int32_t L_402 = 0;
		int32_t L_403 = (L_401)->GetAt(static_cast<il2cpp_array_size_t>(L_402));
		int32_t L_404 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(InternalInflateConstants_t2469443330_il2cpp_TypeInfo_var);
		Int32U5BU5D_t385246372* L_405 = ((InternalInflateConstants_t2469443330_StaticFields*)il2cpp_codegen_static_fields_for(InternalInflateConstants_t2469443330_il2cpp_TypeInfo_var))->get_InflateMask_0();
		int32_t L_406 = V_0;
		NullCheck(L_405);
		int32_t L_407 = L_406;
		int32_t L_408 = (L_405)->GetAt(static_cast<il2cpp_array_size_t>(L_407));
		NullCheck(L_400);
		int32_t L_409 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_403, (int32_t)((int32_t)((int32_t)L_404&(int32_t)L_408)))), (int32_t)3)), (int32_t)1));
		int32_t L_410 = (L_400)->GetAt(static_cast<il2cpp_array_size_t>(L_409));
		V_0 = L_410;
		Int32U5BU5D_t385246372* L_411 = __this->get_hufts_13();
		Int32U5BU5D_t385246372* L_412 = __this->get_tb_7();
		NullCheck(L_412);
		int32_t L_413 = 0;
		int32_t L_414 = (L_412)->GetAt(static_cast<il2cpp_array_size_t>(L_413));
		int32_t L_415 = V_1;
		Int32U5BU5D_t385246372* L_416 = ((InternalInflateConstants_t2469443330_StaticFields*)il2cpp_codegen_static_fields_for(InternalInflateConstants_t2469443330_il2cpp_TypeInfo_var))->get_InflateMask_0();
		int32_t L_417 = V_0;
		NullCheck(L_416);
		int32_t L_418 = L_417;
		int32_t L_419 = (L_416)->GetAt(static_cast<il2cpp_array_size_t>(L_418));
		NullCheck(L_411);
		int32_t L_420 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_414, (int32_t)((int32_t)((int32_t)L_415&(int32_t)L_419)))), (int32_t)3)), (int32_t)2));
		int32_t L_421 = (L_411)->GetAt(static_cast<il2cpp_array_size_t>(L_420));
		V_16 = L_421;
		int32_t L_422 = V_16;
		if ((((int32_t)L_422) >= ((int32_t)((int32_t)16))))
		{
			goto IL_0aa3;
		}
	}
	{
		int32_t L_423 = V_1;
		int32_t L_424 = V_0;
		V_1 = ((int32_t)((int32_t)L_423>>(int32_t)((int32_t)((int32_t)L_424&(int32_t)((int32_t)31)))));
		int32_t L_425 = V_2;
		int32_t L_426 = V_0;
		V_2 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_425, (int32_t)L_426));
		Int32U5BU5D_t385246372* L_427 = __this->get_blens_5();
		int32_t L_428 = __this->get_index_4();
		int32_t L_429 = L_428;
		V_13 = L_429;
		__this->set_index_4(((int32_t)il2cpp_codegen_add((int32_t)L_429, (int32_t)1)));
		int32_t L_430 = V_13;
		int32_t L_431 = V_16;
		NullCheck(L_427);
		(L_427)->SetAt(static_cast<il2cpp_array_size_t>(L_430), (int32_t)L_431);
		goto IL_0c86;
	}

IL_0aa3:
	{
		int32_t L_432 = V_16;
		if ((!(((uint32_t)L_432) == ((uint32_t)((int32_t)18)))))
		{
			goto IL_0ab2;
		}
	}
	{
		G_B108_0 = 7;
		goto IL_0ab7;
	}

IL_0ab2:
	{
		int32_t L_433 = V_16;
		G_B108_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_433, (int32_t)((int32_t)14)));
	}

IL_0ab7:
	{
		V_14 = G_B108_0;
		int32_t L_434 = V_16;
		if ((!(((uint32_t)L_434) == ((uint32_t)((int32_t)18)))))
		{
			goto IL_0ac9;
		}
	}
	{
		G_B111_0 = ((int32_t)11);
		goto IL_0aca;
	}

IL_0ac9:
	{
		G_B111_0 = 3;
	}

IL_0aca:
	{
		V_15 = G_B111_0;
		goto IL_0b60;
	}

IL_0ad1:
	{
		int32_t L_435 = V_4;
		if (!L_435)
		{
			goto IL_0ae0;
		}
	}
	{
		___r0 = 0;
		goto IL_0b37;
	}

IL_0ae0:
	{
		int32_t L_436 = V_1;
		__this->set_bitb_12(L_436);
		int32_t L_437 = V_2;
		__this->set_bitk_11(L_437);
		ZlibCodec_t855427629 * L_438 = __this->get__codec_10();
		int32_t L_439 = V_4;
		NullCheck(L_438);
		L_438->set_AvailableBytesIn_2(L_439);
		ZlibCodec_t855427629 * L_440 = __this->get__codec_10();
		ZlibCodec_t855427629 * L_441 = L_440;
		NullCheck(L_441);
		int64_t L_442 = L_441->get_TotalBytesIn_3();
		int32_t L_443 = V_3;
		ZlibCodec_t855427629 * L_444 = __this->get__codec_10();
		NullCheck(L_444);
		int32_t L_445 = L_444->get_NextIn_1();
		NullCheck(L_441);
		L_441->set_TotalBytesIn_3(((int64_t)il2cpp_codegen_add((int64_t)L_442, (int64_t)(((int64_t)((int64_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_443, (int32_t)L_445))))))));
		ZlibCodec_t855427629 * L_446 = __this->get__codec_10();
		int32_t L_447 = V_3;
		NullCheck(L_446);
		L_446->set_NextIn_1(L_447);
		int32_t L_448 = V_5;
		__this->set_writeAt_17(L_448);
		int32_t L_449 = ___r0;
		int32_t L_450 = InflateBlocks_Flush_m2330293879(__this, L_449, /*hidden argument*/NULL);
		return L_450;
	}

IL_0b37:
	{
		int32_t L_451 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_451, (int32_t)1));
		int32_t L_452 = V_1;
		ZlibCodec_t855427629 * L_453 = __this->get__codec_10();
		NullCheck(L_453);
		ByteU5BU5D_t4116647657* L_454 = L_453->get_InputBuffer_0();
		int32_t L_455 = V_3;
		int32_t L_456 = L_455;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_456, (int32_t)1));
		NullCheck(L_454);
		int32_t L_457 = L_456;
		uint8_t L_458 = (L_454)->GetAt(static_cast<il2cpp_array_size_t>(L_457));
		int32_t L_459 = V_2;
		V_1 = ((int32_t)((int32_t)L_452|(int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_458&(int32_t)((int32_t)255)))<<(int32_t)((int32_t)((int32_t)L_459&(int32_t)((int32_t)31)))))));
		int32_t L_460 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_460, (int32_t)8));
	}

IL_0b60:
	{
		int32_t L_461 = V_2;
		int32_t L_462 = V_0;
		int32_t L_463 = V_14;
		if ((((int32_t)L_461) < ((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_462, (int32_t)L_463)))))
		{
			goto IL_0ad1;
		}
	}
	{
		int32_t L_464 = V_1;
		int32_t L_465 = V_0;
		V_1 = ((int32_t)((int32_t)L_464>>(int32_t)((int32_t)((int32_t)L_465&(int32_t)((int32_t)31)))));
		int32_t L_466 = V_2;
		int32_t L_467 = V_0;
		V_2 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_466, (int32_t)L_467));
		int32_t L_468 = V_15;
		int32_t L_469 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(InternalInflateConstants_t2469443330_il2cpp_TypeInfo_var);
		Int32U5BU5D_t385246372* L_470 = ((InternalInflateConstants_t2469443330_StaticFields*)il2cpp_codegen_static_fields_for(InternalInflateConstants_t2469443330_il2cpp_TypeInfo_var))->get_InflateMask_0();
		int32_t L_471 = V_14;
		NullCheck(L_470);
		int32_t L_472 = L_471;
		int32_t L_473 = (L_470)->GetAt(static_cast<il2cpp_array_size_t>(L_472));
		V_15 = ((int32_t)il2cpp_codegen_add((int32_t)L_468, (int32_t)((int32_t)((int32_t)L_469&(int32_t)L_473))));
		int32_t L_474 = V_1;
		int32_t L_475 = V_14;
		V_1 = ((int32_t)((int32_t)L_474>>(int32_t)((int32_t)((int32_t)L_475&(int32_t)((int32_t)31)))));
		int32_t L_476 = V_2;
		int32_t L_477 = V_14;
		V_2 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_476, (int32_t)L_477));
		int32_t L_478 = __this->get_index_4();
		V_14 = L_478;
		int32_t L_479 = __this->get_table_3();
		V_0 = L_479;
		int32_t L_480 = V_14;
		int32_t L_481 = V_15;
		int32_t L_482 = V_0;
		int32_t L_483 = V_0;
		if ((((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_480, (int32_t)L_481))) > ((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)258), (int32_t)((int32_t)((int32_t)L_482&(int32_t)((int32_t)31))))), (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_483>>(int32_t)5))&(int32_t)((int32_t)31))))))))
		{
			goto IL_0bcc;
		}
	}
	{
		int32_t L_484 = V_16;
		if ((!(((uint32_t)L_484) == ((uint32_t)((int32_t)16)))))
		{
			goto IL_0c46;
		}
	}
	{
		int32_t L_485 = V_14;
		if ((((int32_t)L_485) >= ((int32_t)1)))
		{
			goto IL_0c46;
		}
	}

IL_0bcc:
	{
		__this->set_blens_5((Int32U5BU5D_t385246372*)NULL);
		__this->set_mode_1(((int32_t)9));
		ZlibCodec_t855427629 * L_486 = __this->get__codec_10();
		NullCheck(L_486);
		L_486->set_Message_8(_stringLiteral1602692132);
		___r0 = ((int32_t)-3);
		int32_t L_487 = V_1;
		__this->set_bitb_12(L_487);
		int32_t L_488 = V_2;
		__this->set_bitk_11(L_488);
		ZlibCodec_t855427629 * L_489 = __this->get__codec_10();
		int32_t L_490 = V_4;
		NullCheck(L_489);
		L_489->set_AvailableBytesIn_2(L_490);
		ZlibCodec_t855427629 * L_491 = __this->get__codec_10();
		ZlibCodec_t855427629 * L_492 = L_491;
		NullCheck(L_492);
		int64_t L_493 = L_492->get_TotalBytesIn_3();
		int32_t L_494 = V_3;
		ZlibCodec_t855427629 * L_495 = __this->get__codec_10();
		NullCheck(L_495);
		int32_t L_496 = L_495->get_NextIn_1();
		NullCheck(L_492);
		L_492->set_TotalBytesIn_3(((int64_t)il2cpp_codegen_add((int64_t)L_493, (int64_t)(((int64_t)((int64_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_494, (int32_t)L_496))))))));
		ZlibCodec_t855427629 * L_497 = __this->get__codec_10();
		int32_t L_498 = V_3;
		NullCheck(L_497);
		L_497->set_NextIn_1(L_498);
		int32_t L_499 = V_5;
		__this->set_writeAt_17(L_499);
		int32_t L_500 = ___r0;
		int32_t L_501 = InflateBlocks_Flush_m2330293879(__this, L_500, /*hidden argument*/NULL);
		return L_501;
	}

IL_0c46:
	{
		int32_t L_502 = V_16;
		if ((!(((uint32_t)L_502) == ((uint32_t)((int32_t)16)))))
		{
			goto IL_0c5f;
		}
	}
	{
		Int32U5BU5D_t385246372* L_503 = __this->get_blens_5();
		int32_t L_504 = V_14;
		NullCheck(L_503);
		int32_t L_505 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_504, (int32_t)1));
		int32_t L_506 = (L_503)->GetAt(static_cast<il2cpp_array_size_t>(L_505));
		G_B124_0 = L_506;
		goto IL_0c60;
	}

IL_0c5f:
	{
		G_B124_0 = 0;
	}

IL_0c60:
	{
		V_16 = G_B124_0;
	}

IL_0c62:
	{
		Int32U5BU5D_t385246372* L_507 = __this->get_blens_5();
		int32_t L_508 = V_14;
		int32_t L_509 = L_508;
		V_14 = ((int32_t)il2cpp_codegen_add((int32_t)L_509, (int32_t)1));
		int32_t L_510 = V_16;
		NullCheck(L_507);
		(L_507)->SetAt(static_cast<il2cpp_array_size_t>(L_509), (int32_t)L_510);
		int32_t L_511 = V_15;
		int32_t L_512 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_511, (int32_t)1));
		V_15 = L_512;
		if (L_512)
		{
			goto IL_0c62;
		}
	}
	{
		int32_t L_513 = V_14;
		__this->set_index_4(L_513);
	}

IL_0c86:
	{
		goto IL_0965;
	}

IL_0c8b:
	{
		Int32U5BU5D_t385246372* L_514 = __this->get_tb_7();
		NullCheck(L_514);
		(L_514)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)(-1));
		Int32U5BU5D_t385246372* L_515 = (Int32U5BU5D_t385246372*)SZArrayNew(Int32U5BU5D_t385246372_il2cpp_TypeInfo_var, (uint32_t)1);
		Int32U5BU5D_t385246372* L_516 = L_515;
		NullCheck(L_516);
		(L_516)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)((int32_t)9));
		V_17 = L_516;
		Int32U5BU5D_t385246372* L_517 = (Int32U5BU5D_t385246372*)SZArrayNew(Int32U5BU5D_t385246372_il2cpp_TypeInfo_var, (uint32_t)1);
		Int32U5BU5D_t385246372* L_518 = L_517;
		NullCheck(L_518);
		(L_518)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)6);
		V_18 = L_518;
		Int32U5BU5D_t385246372* L_519 = (Int32U5BU5D_t385246372*)SZArrayNew(Int32U5BU5D_t385246372_il2cpp_TypeInfo_var, (uint32_t)1);
		V_19 = L_519;
		Int32U5BU5D_t385246372* L_520 = (Int32U5BU5D_t385246372*)SZArrayNew(Int32U5BU5D_t385246372_il2cpp_TypeInfo_var, (uint32_t)1);
		V_20 = L_520;
		int32_t L_521 = __this->get_table_3();
		V_0 = L_521;
		InfTree_t2692649235 * L_522 = __this->get_inftree_20();
		int32_t L_523 = V_0;
		int32_t L_524 = V_0;
		Int32U5BU5D_t385246372* L_525 = __this->get_blens_5();
		Int32U5BU5D_t385246372* L_526 = V_17;
		Int32U5BU5D_t385246372* L_527 = V_18;
		Int32U5BU5D_t385246372* L_528 = V_19;
		Int32U5BU5D_t385246372* L_529 = V_20;
		Int32U5BU5D_t385246372* L_530 = __this->get_hufts_13();
		ZlibCodec_t855427629 * L_531 = __this->get__codec_10();
		NullCheck(L_522);
		int32_t L_532 = InfTree_inflate_trees_dynamic_m3043938686(L_522, ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)257), (int32_t)((int32_t)((int32_t)L_523&(int32_t)((int32_t)31))))), ((int32_t)il2cpp_codegen_add((int32_t)1, (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_524>>(int32_t)5))&(int32_t)((int32_t)31))))), L_525, L_526, L_527, L_528, L_529, L_530, L_531, /*hidden argument*/NULL);
		V_0 = L_532;
		int32_t L_533 = V_0;
		if (!L_533)
		{
			goto IL_0d73;
		}
	}
	{
		int32_t L_534 = V_0;
		if ((!(((uint32_t)L_534) == ((uint32_t)((int32_t)-3)))))
		{
			goto IL_0d19;
		}
	}
	{
		__this->set_blens_5((Int32U5BU5D_t385246372*)NULL);
		__this->set_mode_1(((int32_t)9));
	}

IL_0d19:
	{
		int32_t L_535 = V_0;
		___r0 = L_535;
		int32_t L_536 = V_1;
		__this->set_bitb_12(L_536);
		int32_t L_537 = V_2;
		__this->set_bitk_11(L_537);
		ZlibCodec_t855427629 * L_538 = __this->get__codec_10();
		int32_t L_539 = V_4;
		NullCheck(L_538);
		L_538->set_AvailableBytesIn_2(L_539);
		ZlibCodec_t855427629 * L_540 = __this->get__codec_10();
		ZlibCodec_t855427629 * L_541 = L_540;
		NullCheck(L_541);
		int64_t L_542 = L_541->get_TotalBytesIn_3();
		int32_t L_543 = V_3;
		ZlibCodec_t855427629 * L_544 = __this->get__codec_10();
		NullCheck(L_544);
		int32_t L_545 = L_544->get_NextIn_1();
		NullCheck(L_541);
		L_541->set_TotalBytesIn_3(((int64_t)il2cpp_codegen_add((int64_t)L_542, (int64_t)(((int64_t)((int64_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_543, (int32_t)L_545))))))));
		ZlibCodec_t855427629 * L_546 = __this->get__codec_10();
		int32_t L_547 = V_3;
		NullCheck(L_546);
		L_546->set_NextIn_1(L_547);
		int32_t L_548 = V_5;
		__this->set_writeAt_17(L_548);
		int32_t L_549 = ___r0;
		int32_t L_550 = InflateBlocks_Flush_m2330293879(__this, L_549, /*hidden argument*/NULL);
		return L_550;
	}

IL_0d73:
	{
		InflateCodes_t3940108927 * L_551 = __this->get_codes_8();
		Int32U5BU5D_t385246372* L_552 = V_17;
		NullCheck(L_552);
		int32_t L_553 = 0;
		int32_t L_554 = (L_552)->GetAt(static_cast<il2cpp_array_size_t>(L_553));
		Int32U5BU5D_t385246372* L_555 = V_18;
		NullCheck(L_555);
		int32_t L_556 = 0;
		int32_t L_557 = (L_555)->GetAt(static_cast<il2cpp_array_size_t>(L_556));
		Int32U5BU5D_t385246372* L_558 = __this->get_hufts_13();
		Int32U5BU5D_t385246372* L_559 = V_19;
		NullCheck(L_559);
		int32_t L_560 = 0;
		int32_t L_561 = (L_559)->GetAt(static_cast<il2cpp_array_size_t>(L_560));
		Int32U5BU5D_t385246372* L_562 = __this->get_hufts_13();
		Int32U5BU5D_t385246372* L_563 = V_20;
		NullCheck(L_563);
		int32_t L_564 = 0;
		int32_t L_565 = (L_563)->GetAt(static_cast<il2cpp_array_size_t>(L_564));
		NullCheck(L_551);
		InflateCodes_Init_m3604941619(L_551, L_554, L_557, L_558, L_561, L_562, L_565, /*hidden argument*/NULL);
		__this->set_mode_1(6);
		goto IL_0da6;
	}

IL_0da6:
	{
		int32_t L_566 = V_1;
		__this->set_bitb_12(L_566);
		int32_t L_567 = V_2;
		__this->set_bitk_11(L_567);
		ZlibCodec_t855427629 * L_568 = __this->get__codec_10();
		int32_t L_569 = V_4;
		NullCheck(L_568);
		L_568->set_AvailableBytesIn_2(L_569);
		ZlibCodec_t855427629 * L_570 = __this->get__codec_10();
		ZlibCodec_t855427629 * L_571 = L_570;
		NullCheck(L_571);
		int64_t L_572 = L_571->get_TotalBytesIn_3();
		int32_t L_573 = V_3;
		ZlibCodec_t855427629 * L_574 = __this->get__codec_10();
		NullCheck(L_574);
		int32_t L_575 = L_574->get_NextIn_1();
		NullCheck(L_571);
		L_571->set_TotalBytesIn_3(((int64_t)il2cpp_codegen_add((int64_t)L_572, (int64_t)(((int64_t)((int64_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_573, (int32_t)L_575))))))));
		ZlibCodec_t855427629 * L_576 = __this->get__codec_10();
		int32_t L_577 = V_3;
		NullCheck(L_576);
		L_576->set_NextIn_1(L_577);
		int32_t L_578 = V_5;
		__this->set_writeAt_17(L_578);
		InflateCodes_t3940108927 * L_579 = __this->get_codes_8();
		int32_t L_580 = ___r0;
		NullCheck(L_579);
		int32_t L_581 = InflateCodes_Process_m2804328384(L_579, __this, L_580, /*hidden argument*/NULL);
		___r0 = L_581;
		int32_t L_582 = ___r0;
		if ((((int32_t)L_582) == ((int32_t)1)))
		{
			goto IL_0e13;
		}
	}
	{
		int32_t L_583 = ___r0;
		int32_t L_584 = InflateBlocks_Flush_m2330293879(__this, L_583, /*hidden argument*/NULL);
		return L_584;
	}

IL_0e13:
	{
		___r0 = 0;
		ZlibCodec_t855427629 * L_585 = __this->get__codec_10();
		NullCheck(L_585);
		int32_t L_586 = L_585->get_NextIn_1();
		V_3 = L_586;
		ZlibCodec_t855427629 * L_587 = __this->get__codec_10();
		NullCheck(L_587);
		int32_t L_588 = L_587->get_AvailableBytesIn_2();
		V_4 = L_588;
		int32_t L_589 = __this->get_bitb_12();
		V_1 = L_589;
		int32_t L_590 = __this->get_bitk_11();
		V_2 = L_590;
		int32_t L_591 = __this->get_writeAt_17();
		V_5 = L_591;
		int32_t L_592 = V_5;
		int32_t L_593 = __this->get_readAt_16();
		if ((((int32_t)L_592) >= ((int32_t)L_593)))
		{
			goto IL_0e62;
		}
	}
	{
		int32_t L_594 = __this->get_readAt_16();
		int32_t L_595 = V_5;
		G_B138_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_594, (int32_t)L_595)), (int32_t)1));
		goto IL_0e6b;
	}

IL_0e62:
	{
		int32_t L_596 = __this->get_end_15();
		int32_t L_597 = V_5;
		G_B138_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_596, (int32_t)L_597));
	}

IL_0e6b:
	{
		V_6 = G_B138_0;
		int32_t L_598 = __this->get_last_9();
		if (L_598)
		{
			goto IL_0e84;
		}
	}
	{
		__this->set_mode_1(0);
		goto IL_1055;
	}

IL_0e84:
	{
		__this->set_mode_1(7);
		goto IL_0e90;
	}

IL_0e90:
	{
		int32_t L_599 = V_5;
		__this->set_writeAt_17(L_599);
		int32_t L_600 = ___r0;
		int32_t L_601 = InflateBlocks_Flush_m2330293879(__this, L_600, /*hidden argument*/NULL);
		___r0 = L_601;
		int32_t L_602 = __this->get_writeAt_17();
		V_5 = L_602;
		int32_t L_603 = V_5;
		int32_t L_604 = __this->get_readAt_16();
		if ((((int32_t)L_603) >= ((int32_t)L_604)))
		{
			goto IL_0ec6;
		}
	}
	{
		int32_t L_605 = __this->get_readAt_16();
		int32_t L_606 = V_5;
		G_B144_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_605, (int32_t)L_606)), (int32_t)1));
		goto IL_0ecf;
	}

IL_0ec6:
	{
		int32_t L_607 = __this->get_end_15();
		int32_t L_608 = V_5;
		G_B144_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_607, (int32_t)L_608));
	}

IL_0ecf:
	{
		V_6 = G_B144_0;
		int32_t L_609 = __this->get_readAt_16();
		int32_t L_610 = __this->get_writeAt_17();
		if ((((int32_t)L_609) == ((int32_t)L_610)))
		{
			goto IL_0f39;
		}
	}
	{
		int32_t L_611 = V_1;
		__this->set_bitb_12(L_611);
		int32_t L_612 = V_2;
		__this->set_bitk_11(L_612);
		ZlibCodec_t855427629 * L_613 = __this->get__codec_10();
		int32_t L_614 = V_4;
		NullCheck(L_613);
		L_613->set_AvailableBytesIn_2(L_614);
		ZlibCodec_t855427629 * L_615 = __this->get__codec_10();
		ZlibCodec_t855427629 * L_616 = L_615;
		NullCheck(L_616);
		int64_t L_617 = L_616->get_TotalBytesIn_3();
		int32_t L_618 = V_3;
		ZlibCodec_t855427629 * L_619 = __this->get__codec_10();
		NullCheck(L_619);
		int32_t L_620 = L_619->get_NextIn_1();
		NullCheck(L_616);
		L_616->set_TotalBytesIn_3(((int64_t)il2cpp_codegen_add((int64_t)L_617, (int64_t)(((int64_t)((int64_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_618, (int32_t)L_620))))))));
		ZlibCodec_t855427629 * L_621 = __this->get__codec_10();
		int32_t L_622 = V_3;
		NullCheck(L_621);
		L_621->set_NextIn_1(L_622);
		int32_t L_623 = V_5;
		__this->set_writeAt_17(L_623);
		int32_t L_624 = ___r0;
		int32_t L_625 = InflateBlocks_Flush_m2330293879(__this, L_624, /*hidden argument*/NULL);
		return L_625;
	}

IL_0f39:
	{
		__this->set_mode_1(8);
		goto IL_0f45;
	}

IL_0f45:
	{
		___r0 = 1;
		int32_t L_626 = V_1;
		__this->set_bitb_12(L_626);
		int32_t L_627 = V_2;
		__this->set_bitk_11(L_627);
		ZlibCodec_t855427629 * L_628 = __this->get__codec_10();
		int32_t L_629 = V_4;
		NullCheck(L_628);
		L_628->set_AvailableBytesIn_2(L_629);
		ZlibCodec_t855427629 * L_630 = __this->get__codec_10();
		ZlibCodec_t855427629 * L_631 = L_630;
		NullCheck(L_631);
		int64_t L_632 = L_631->get_TotalBytesIn_3();
		int32_t L_633 = V_3;
		ZlibCodec_t855427629 * L_634 = __this->get__codec_10();
		NullCheck(L_634);
		int32_t L_635 = L_634->get_NextIn_1();
		NullCheck(L_631);
		L_631->set_TotalBytesIn_3(((int64_t)il2cpp_codegen_add((int64_t)L_632, (int64_t)(((int64_t)((int64_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_633, (int32_t)L_635))))))));
		ZlibCodec_t855427629 * L_636 = __this->get__codec_10();
		int32_t L_637 = V_3;
		NullCheck(L_636);
		L_636->set_NextIn_1(L_637);
		int32_t L_638 = V_5;
		__this->set_writeAt_17(L_638);
		int32_t L_639 = ___r0;
		int32_t L_640 = InflateBlocks_Flush_m2330293879(__this, L_639, /*hidden argument*/NULL);
		return L_640;
	}

IL_0f9f:
	{
		___r0 = ((int32_t)-3);
		int32_t L_641 = V_1;
		__this->set_bitb_12(L_641);
		int32_t L_642 = V_2;
		__this->set_bitk_11(L_642);
		ZlibCodec_t855427629 * L_643 = __this->get__codec_10();
		int32_t L_644 = V_4;
		NullCheck(L_643);
		L_643->set_AvailableBytesIn_2(L_644);
		ZlibCodec_t855427629 * L_645 = __this->get__codec_10();
		ZlibCodec_t855427629 * L_646 = L_645;
		NullCheck(L_646);
		int64_t L_647 = L_646->get_TotalBytesIn_3();
		int32_t L_648 = V_3;
		ZlibCodec_t855427629 * L_649 = __this->get__codec_10();
		NullCheck(L_649);
		int32_t L_650 = L_649->get_NextIn_1();
		NullCheck(L_646);
		L_646->set_TotalBytesIn_3(((int64_t)il2cpp_codegen_add((int64_t)L_647, (int64_t)(((int64_t)((int64_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_648, (int32_t)L_650))))))));
		ZlibCodec_t855427629 * L_651 = __this->get__codec_10();
		int32_t L_652 = V_3;
		NullCheck(L_651);
		L_651->set_NextIn_1(L_652);
		int32_t L_653 = V_5;
		__this->set_writeAt_17(L_653);
		int32_t L_654 = ___r0;
		int32_t L_655 = InflateBlocks_Flush_m2330293879(__this, L_654, /*hidden argument*/NULL);
		return L_655;
	}

IL_0ffa:
	{
		___r0 = ((int32_t)-2);
		int32_t L_656 = V_1;
		__this->set_bitb_12(L_656);
		int32_t L_657 = V_2;
		__this->set_bitk_11(L_657);
		ZlibCodec_t855427629 * L_658 = __this->get__codec_10();
		int32_t L_659 = V_4;
		NullCheck(L_658);
		L_658->set_AvailableBytesIn_2(L_659);
		ZlibCodec_t855427629 * L_660 = __this->get__codec_10();
		ZlibCodec_t855427629 * L_661 = L_660;
		NullCheck(L_661);
		int64_t L_662 = L_661->get_TotalBytesIn_3();
		int32_t L_663 = V_3;
		ZlibCodec_t855427629 * L_664 = __this->get__codec_10();
		NullCheck(L_664);
		int32_t L_665 = L_664->get_NextIn_1();
		NullCheck(L_661);
		L_661->set_TotalBytesIn_3(((int64_t)il2cpp_codegen_add((int64_t)L_662, (int64_t)(((int64_t)((int64_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_663, (int32_t)L_665))))))));
		ZlibCodec_t855427629 * L_666 = __this->get__codec_10();
		int32_t L_667 = V_3;
		NullCheck(L_666);
		L_666->set_NextIn_1(L_667);
		int32_t L_668 = V_5;
		__this->set_writeAt_17(L_668);
		int32_t L_669 = ___r0;
		int32_t L_670 = InflateBlocks_Flush_m2330293879(__this, L_669, /*hidden argument*/NULL);
		return L_670;
	}

IL_1055:
	{
		goto IL_0057;
	}
}
// System.Void Pathfinding.Ionic.Zlib.InflateBlocks::Free()
extern "C" IL2CPP_METHOD_ATTR void InflateBlocks_Free_m244881793 (InflateBlocks_t4119258979 * __this, const RuntimeMethod* method)
{
	{
		InflateBlocks_Reset_m1167299319(__this, /*hidden argument*/NULL);
		__this->set_window_14((ByteU5BU5D_t4116647657*)NULL);
		__this->set_hufts_13((Int32U5BU5D_t385246372*)NULL);
		return;
	}
}
// System.Int32 Pathfinding.Ionic.Zlib.InflateBlocks::Flush(System.Int32)
extern "C" IL2CPP_METHOD_ATTR int32_t InflateBlocks_Flush_m2330293879 (InflateBlocks_t4119258979 * __this, int32_t ___r0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InflateBlocks_Flush_m2330293879_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	uint32_t V_2 = 0;
	int32_t G_B5_0 = 0;
	{
		V_1 = 0;
		goto IL_0175;
	}

IL_0007:
	{
		int32_t L_0 = V_1;
		if (L_0)
		{
			goto IL_003c;
		}
	}
	{
		int32_t L_1 = __this->get_readAt_16();
		int32_t L_2 = __this->get_writeAt_17();
		if ((((int32_t)L_1) > ((int32_t)L_2)))
		{
			goto IL_0029;
		}
	}
	{
		int32_t L_3 = __this->get_writeAt_17();
		G_B5_0 = L_3;
		goto IL_002f;
	}

IL_0029:
	{
		int32_t L_4 = __this->get_end_15();
		G_B5_0 = L_4;
	}

IL_002f:
	{
		int32_t L_5 = __this->get_readAt_16();
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)G_B5_0, (int32_t)L_5));
		goto IL_004a;
	}

IL_003c:
	{
		int32_t L_6 = __this->get_writeAt_17();
		int32_t L_7 = __this->get_readAt_16();
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_6, (int32_t)L_7));
	}

IL_004a:
	{
		int32_t L_8 = V_0;
		if (L_8)
		{
			goto IL_005d;
		}
	}
	{
		int32_t L_9 = ___r0;
		if ((!(((uint32_t)L_9) == ((uint32_t)((int32_t)-5)))))
		{
			goto IL_005b;
		}
	}
	{
		___r0 = 0;
	}

IL_005b:
	{
		int32_t L_10 = ___r0;
		return L_10;
	}

IL_005d:
	{
		int32_t L_11 = V_0;
		ZlibCodec_t855427629 * L_12 = __this->get__codec_10();
		NullCheck(L_12);
		int32_t L_13 = L_12->get_AvailableBytesOut_6();
		if ((((int32_t)L_11) <= ((int32_t)L_13)))
		{
			goto IL_007a;
		}
	}
	{
		ZlibCodec_t855427629 * L_14 = __this->get__codec_10();
		NullCheck(L_14);
		int32_t L_15 = L_14->get_AvailableBytesOut_6();
		V_0 = L_15;
	}

IL_007a:
	{
		int32_t L_16 = V_0;
		if (!L_16)
		{
			goto IL_008b;
		}
	}
	{
		int32_t L_17 = ___r0;
		if ((!(((uint32_t)L_17) == ((uint32_t)((int32_t)-5)))))
		{
			goto IL_008b;
		}
	}
	{
		___r0 = 0;
	}

IL_008b:
	{
		ZlibCodec_t855427629 * L_18 = __this->get__codec_10();
		ZlibCodec_t855427629 * L_19 = L_18;
		NullCheck(L_19);
		int32_t L_20 = L_19->get_AvailableBytesOut_6();
		int32_t L_21 = V_0;
		NullCheck(L_19);
		L_19->set_AvailableBytesOut_6(((int32_t)il2cpp_codegen_subtract((int32_t)L_20, (int32_t)L_21)));
		ZlibCodec_t855427629 * L_22 = __this->get__codec_10();
		ZlibCodec_t855427629 * L_23 = L_22;
		NullCheck(L_23);
		int64_t L_24 = L_23->get_TotalBytesOut_7();
		int32_t L_25 = V_0;
		NullCheck(L_23);
		L_23->set_TotalBytesOut_7(((int64_t)il2cpp_codegen_add((int64_t)L_24, (int64_t)(((int64_t)((int64_t)L_25))))));
		RuntimeObject * L_26 = __this->get_checkfn_18();
		if (!L_26)
		{
			goto IL_00e9;
		}
	}
	{
		ZlibCodec_t855427629 * L_27 = __this->get__codec_10();
		uint32_t L_28 = __this->get_check_19();
		ByteU5BU5D_t4116647657* L_29 = __this->get_window_14();
		int32_t L_30 = __this->get_readAt_16();
		int32_t L_31 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Adler_t3126894214_il2cpp_TypeInfo_var);
		uint32_t L_32 = Adler_Adler32_m1147423111(NULL /*static, unused*/, L_28, L_29, L_30, L_31, /*hidden argument*/NULL);
		uint32_t L_33 = L_32;
		V_2 = L_33;
		__this->set_check_19(L_33);
		uint32_t L_34 = V_2;
		NullCheck(L_27);
		L_27->set__Adler32_11(L_34);
	}

IL_00e9:
	{
		ByteU5BU5D_t4116647657* L_35 = __this->get_window_14();
		int32_t L_36 = __this->get_readAt_16();
		ZlibCodec_t855427629 * L_37 = __this->get__codec_10();
		NullCheck(L_37);
		ByteU5BU5D_t4116647657* L_38 = L_37->get_OutputBuffer_4();
		ZlibCodec_t855427629 * L_39 = __this->get__codec_10();
		NullCheck(L_39);
		int32_t L_40 = L_39->get_NextOut_5();
		int32_t L_41 = V_0;
		Array_Copy_m344457298(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_35, L_36, (RuntimeArray *)(RuntimeArray *)L_38, L_40, L_41, /*hidden argument*/NULL);
		ZlibCodec_t855427629 * L_42 = __this->get__codec_10();
		ZlibCodec_t855427629 * L_43 = L_42;
		NullCheck(L_43);
		int32_t L_44 = L_43->get_NextOut_5();
		int32_t L_45 = V_0;
		NullCheck(L_43);
		L_43->set_NextOut_5(((int32_t)il2cpp_codegen_add((int32_t)L_44, (int32_t)L_45)));
		int32_t L_46 = __this->get_readAt_16();
		int32_t L_47 = V_0;
		__this->set_readAt_16(((int32_t)il2cpp_codegen_add((int32_t)L_46, (int32_t)L_47)));
		int32_t L_48 = __this->get_readAt_16();
		int32_t L_49 = __this->get_end_15();
		if ((!(((uint32_t)L_48) == ((uint32_t)L_49))))
		{
			goto IL_016d;
		}
	}
	{
		int32_t L_50 = V_1;
		if (L_50)
		{
			goto IL_016d;
		}
	}
	{
		__this->set_readAt_16(0);
		int32_t L_51 = __this->get_writeAt_17();
		int32_t L_52 = __this->get_end_15();
		if ((!(((uint32_t)L_51) == ((uint32_t)L_52))))
		{
			goto IL_0168;
		}
	}
	{
		__this->set_writeAt_17(0);
	}

IL_0168:
	{
		goto IL_0171;
	}

IL_016d:
	{
		int32_t L_53 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_53, (int32_t)1));
	}

IL_0171:
	{
		int32_t L_54 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_54, (int32_t)1));
	}

IL_0175:
	{
		int32_t L_55 = V_1;
		if ((((int32_t)L_55) < ((int32_t)2)))
		{
			goto IL_0007;
		}
	}
	{
		int32_t L_56 = ___r0;
		return L_56;
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
// System.Void Pathfinding.Ionic.Zlib.InflateCodes::.ctor()
extern "C" IL2CPP_METHOD_ATTR void InflateCodes__ctor_m51491151 (InflateCodes_t3940108927 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Pathfinding.Ionic.Zlib.InflateCodes::Init(System.Int32,System.Int32,System.Int32[],System.Int32,System.Int32[],System.Int32)
extern "C" IL2CPP_METHOD_ATTR void InflateCodes_Init_m3604941619 (InflateCodes_t3940108927 * __this, int32_t ___bl0, int32_t ___bd1, Int32U5BU5D_t385246372* ___tl2, int32_t ___tl_index3, Int32U5BU5D_t385246372* ___td4, int32_t ___td_index5, const RuntimeMethod* method)
{
	{
		__this->set_mode_0(0);
		int32_t L_0 = ___bl0;
		__this->set_lbits_8((uint8_t)(((int32_t)((uint8_t)L_0))));
		int32_t L_1 = ___bd1;
		__this->set_dbits_9((uint8_t)(((int32_t)((uint8_t)L_1))));
		Int32U5BU5D_t385246372* L_2 = ___tl2;
		__this->set_ltree_10(L_2);
		int32_t L_3 = ___tl_index3;
		__this->set_ltree_index_11(L_3);
		Int32U5BU5D_t385246372* L_4 = ___td4;
		__this->set_dtree_12(L_4);
		int32_t L_5 = ___td_index5;
		__this->set_dtree_index_13(L_5);
		__this->set_tree_2((Int32U5BU5D_t385246372*)NULL);
		return;
	}
}
// System.Int32 Pathfinding.Ionic.Zlib.InflateCodes::Process(Pathfinding.Ionic.Zlib.InflateBlocks,System.Int32)
extern "C" IL2CPP_METHOD_ATTR int32_t InflateCodes_Process_m2804328384 (InflateCodes_t3940108927 * __this, InflateBlocks_t4119258979 * ___blocks0, int32_t ___r1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InflateCodes_Process_m2804328384_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	ZlibCodec_t855427629 * V_10 = NULL;
	int32_t V_11 = 0;
	int32_t G_B3_0 = 0;
	int32_t G_B11_0 = 0;
	InflateCodes_t3940108927 * G_B14_0 = NULL;
	InflateCodes_t3940108927 * G_B13_0 = NULL;
	int32_t G_B15_0 = 0;
	InflateCodes_t3940108927 * G_B15_1 = NULL;
	int32_t G_B67_0 = 0;
	int32_t G_B72_0 = 0;
	int32_t G_B77_0 = 0;
	int32_t G_B91_0 = 0;
	int32_t G_B96_0 = 0;
	int32_t G_B101_0 = 0;
	int32_t G_B110_0 = 0;
	{
		V_3 = 0;
		V_4 = 0;
		V_5 = 0;
		InflateBlocks_t4119258979 * L_0 = ___blocks0;
		NullCheck(L_0);
		ZlibCodec_t855427629 * L_1 = L_0->get__codec_10();
		V_10 = L_1;
		ZlibCodec_t855427629 * L_2 = V_10;
		NullCheck(L_2);
		int32_t L_3 = L_2->get_NextIn_1();
		V_5 = L_3;
		ZlibCodec_t855427629 * L_4 = V_10;
		NullCheck(L_4);
		int32_t L_5 = L_4->get_AvailableBytesIn_2();
		V_6 = L_5;
		InflateBlocks_t4119258979 * L_6 = ___blocks0;
		NullCheck(L_6);
		int32_t L_7 = L_6->get_bitb_12();
		V_3 = L_7;
		InflateBlocks_t4119258979 * L_8 = ___blocks0;
		NullCheck(L_8);
		int32_t L_9 = L_8->get_bitk_11();
		V_4 = L_9;
		InflateBlocks_t4119258979 * L_10 = ___blocks0;
		NullCheck(L_10);
		int32_t L_11 = L_10->get_writeAt_17();
		V_7 = L_11;
		int32_t L_12 = V_7;
		InflateBlocks_t4119258979 * L_13 = ___blocks0;
		NullCheck(L_13);
		int32_t L_14 = L_13->get_readAt_16();
		if ((((int32_t)L_12) >= ((int32_t)L_14)))
		{
			goto IL_0056;
		}
	}
	{
		InflateBlocks_t4119258979 * L_15 = ___blocks0;
		NullCheck(L_15);
		int32_t L_16 = L_15->get_readAt_16();
		int32_t L_17 = V_7;
		G_B3_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_16, (int32_t)L_17)), (int32_t)1));
		goto IL_005f;
	}

IL_0056:
	{
		InflateBlocks_t4119258979 * L_18 = ___blocks0;
		NullCheck(L_18);
		int32_t L_19 = L_18->get_end_15();
		int32_t L_20 = V_7;
		G_B3_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_19, (int32_t)L_20));
	}

IL_005f:
	{
		V_8 = G_B3_0;
	}

IL_0061:
	{
		int32_t L_21 = __this->get_mode_0();
		V_11 = L_21;
		int32_t L_22 = V_11;
		switch (L_22)
		{
			case 0:
			{
				goto IL_009d;
			}
			case 1:
			{
				goto IL_01c4;
			}
			case 2:
			{
				goto IL_0387;
			}
			case 3:
			{
				goto IL_0471;
			}
			case 4:
			{
				goto IL_05fd;
			}
			case 5:
			{
				goto IL_06c3;
			}
			case 6:
			{
				goto IL_0868;
			}
			case 7:
			{
				goto IL_09b8;
			}
			case 8:
			{
				goto IL_0a7a;
			}
			case 9:
			{
				goto IL_0ac7;
			}
		}
	}
	{
		goto IL_0b15;
	}

IL_009d:
	{
		int32_t L_23 = V_8;
		if ((((int32_t)L_23) < ((int32_t)((int32_t)258))))
		{
			goto IL_0194;
		}
	}
	{
		int32_t L_24 = V_6;
		if ((((int32_t)L_24) < ((int32_t)((int32_t)10))))
		{
			goto IL_0194;
		}
	}
	{
		InflateBlocks_t4119258979 * L_25 = ___blocks0;
		int32_t L_26 = V_3;
		NullCheck(L_25);
		L_25->set_bitb_12(L_26);
		InflateBlocks_t4119258979 * L_27 = ___blocks0;
		int32_t L_28 = V_4;
		NullCheck(L_27);
		L_27->set_bitk_11(L_28);
		ZlibCodec_t855427629 * L_29 = V_10;
		int32_t L_30 = V_6;
		NullCheck(L_29);
		L_29->set_AvailableBytesIn_2(L_30);
		ZlibCodec_t855427629 * L_31 = V_10;
		ZlibCodec_t855427629 * L_32 = L_31;
		NullCheck(L_32);
		int64_t L_33 = L_32->get_TotalBytesIn_3();
		int32_t L_34 = V_5;
		ZlibCodec_t855427629 * L_35 = V_10;
		NullCheck(L_35);
		int32_t L_36 = L_35->get_NextIn_1();
		NullCheck(L_32);
		L_32->set_TotalBytesIn_3(((int64_t)il2cpp_codegen_add((int64_t)L_33, (int64_t)(((int64_t)((int64_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_34, (int32_t)L_36))))))));
		ZlibCodec_t855427629 * L_37 = V_10;
		int32_t L_38 = V_5;
		NullCheck(L_37);
		L_37->set_NextIn_1(L_38);
		InflateBlocks_t4119258979 * L_39 = ___blocks0;
		int32_t L_40 = V_7;
		NullCheck(L_39);
		L_39->set_writeAt_17(L_40);
		uint8_t L_41 = __this->get_lbits_8();
		uint8_t L_42 = __this->get_dbits_9();
		Int32U5BU5D_t385246372* L_43 = __this->get_ltree_10();
		int32_t L_44 = __this->get_ltree_index_11();
		Int32U5BU5D_t385246372* L_45 = __this->get_dtree_12();
		int32_t L_46 = __this->get_dtree_index_13();
		InflateBlocks_t4119258979 * L_47 = ___blocks0;
		ZlibCodec_t855427629 * L_48 = V_10;
		int32_t L_49 = InflateCodes_InflateFast_m1267240824(__this, L_41, L_42, L_43, L_44, L_45, L_46, L_47, L_48, /*hidden argument*/NULL);
		___r1 = L_49;
		ZlibCodec_t855427629 * L_50 = V_10;
		NullCheck(L_50);
		int32_t L_51 = L_50->get_NextIn_1();
		V_5 = L_51;
		ZlibCodec_t855427629 * L_52 = V_10;
		NullCheck(L_52);
		int32_t L_53 = L_52->get_AvailableBytesIn_2();
		V_6 = L_53;
		InflateBlocks_t4119258979 * L_54 = ___blocks0;
		NullCheck(L_54);
		int32_t L_55 = L_54->get_bitb_12();
		V_3 = L_55;
		InflateBlocks_t4119258979 * L_56 = ___blocks0;
		NullCheck(L_56);
		int32_t L_57 = L_56->get_bitk_11();
		V_4 = L_57;
		InflateBlocks_t4119258979 * L_58 = ___blocks0;
		NullCheck(L_58);
		int32_t L_59 = L_58->get_writeAt_17();
		V_7 = L_59;
		int32_t L_60 = V_7;
		InflateBlocks_t4119258979 * L_61 = ___blocks0;
		NullCheck(L_61);
		int32_t L_62 = L_61->get_readAt_16();
		if ((((int32_t)L_60) >= ((int32_t)L_62)))
		{
			goto IL_0169;
		}
	}
	{
		InflateBlocks_t4119258979 * L_63 = ___blocks0;
		NullCheck(L_63);
		int32_t L_64 = L_63->get_readAt_16();
		int32_t L_65 = V_7;
		G_B11_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_64, (int32_t)L_65)), (int32_t)1));
		goto IL_0172;
	}

IL_0169:
	{
		InflateBlocks_t4119258979 * L_66 = ___blocks0;
		NullCheck(L_66);
		int32_t L_67 = L_66->get_end_15();
		int32_t L_68 = V_7;
		G_B11_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_67, (int32_t)L_68));
	}

IL_0172:
	{
		V_8 = G_B11_0;
		int32_t L_69 = ___r1;
		if (!L_69)
		{
			goto IL_0194;
		}
	}
	{
		int32_t L_70 = ___r1;
		G_B13_0 = __this;
		if ((!(((uint32_t)L_70) == ((uint32_t)1))))
		{
			G_B14_0 = __this;
			goto IL_0188;
		}
	}
	{
		G_B15_0 = 7;
		G_B15_1 = G_B13_0;
		goto IL_018a;
	}

IL_0188:
	{
		G_B15_0 = ((int32_t)9);
		G_B15_1 = G_B14_0;
	}

IL_018a:
	{
		NullCheck(G_B15_1);
		G_B15_1->set_mode_0(G_B15_0);
		goto IL_0b63;
	}

IL_0194:
	{
		uint8_t L_71 = __this->get_lbits_8();
		__this->set_need_4(L_71);
		Int32U5BU5D_t385246372* L_72 = __this->get_ltree_10();
		__this->set_tree_2(L_72);
		int32_t L_73 = __this->get_ltree_index_11();
		__this->set_tree_index_3(L_73);
		__this->set_mode_0(1);
		goto IL_01c4;
	}

IL_01c4:
	{
		int32_t L_74 = __this->get_need_4();
		V_0 = L_74;
		goto IL_0253;
	}

IL_01d0:
	{
		int32_t L_75 = V_6;
		if (!L_75)
		{
			goto IL_01df;
		}
	}
	{
		___r1 = 0;
		goto IL_0229;
	}

IL_01df:
	{
		InflateBlocks_t4119258979 * L_76 = ___blocks0;
		int32_t L_77 = V_3;
		NullCheck(L_76);
		L_76->set_bitb_12(L_77);
		InflateBlocks_t4119258979 * L_78 = ___blocks0;
		int32_t L_79 = V_4;
		NullCheck(L_78);
		L_78->set_bitk_11(L_79);
		ZlibCodec_t855427629 * L_80 = V_10;
		int32_t L_81 = V_6;
		NullCheck(L_80);
		L_80->set_AvailableBytesIn_2(L_81);
		ZlibCodec_t855427629 * L_82 = V_10;
		ZlibCodec_t855427629 * L_83 = L_82;
		NullCheck(L_83);
		int64_t L_84 = L_83->get_TotalBytesIn_3();
		int32_t L_85 = V_5;
		ZlibCodec_t855427629 * L_86 = V_10;
		NullCheck(L_86);
		int32_t L_87 = L_86->get_NextIn_1();
		NullCheck(L_83);
		L_83->set_TotalBytesIn_3(((int64_t)il2cpp_codegen_add((int64_t)L_84, (int64_t)(((int64_t)((int64_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_85, (int32_t)L_87))))))));
		ZlibCodec_t855427629 * L_88 = V_10;
		int32_t L_89 = V_5;
		NullCheck(L_88);
		L_88->set_NextIn_1(L_89);
		InflateBlocks_t4119258979 * L_90 = ___blocks0;
		int32_t L_91 = V_7;
		NullCheck(L_90);
		L_90->set_writeAt_17(L_91);
		InflateBlocks_t4119258979 * L_92 = ___blocks0;
		int32_t L_93 = ___r1;
		NullCheck(L_92);
		int32_t L_94 = InflateBlocks_Flush_m2330293879(L_92, L_93, /*hidden argument*/NULL);
		return L_94;
	}

IL_0229:
	{
		int32_t L_95 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_95, (int32_t)1));
		int32_t L_96 = V_3;
		ZlibCodec_t855427629 * L_97 = V_10;
		NullCheck(L_97);
		ByteU5BU5D_t4116647657* L_98 = L_97->get_InputBuffer_0();
		int32_t L_99 = V_5;
		int32_t L_100 = L_99;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_100, (int32_t)1));
		NullCheck(L_98);
		int32_t L_101 = L_100;
		uint8_t L_102 = (L_98)->GetAt(static_cast<il2cpp_array_size_t>(L_101));
		int32_t L_103 = V_4;
		V_3 = ((int32_t)((int32_t)L_96|(int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_102&(int32_t)((int32_t)255)))<<(int32_t)((int32_t)((int32_t)L_103&(int32_t)((int32_t)31)))))));
		int32_t L_104 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_104, (int32_t)8));
	}

IL_0253:
	{
		int32_t L_105 = V_4;
		int32_t L_106 = V_0;
		if ((((int32_t)L_105) < ((int32_t)L_106)))
		{
			goto IL_01d0;
		}
	}
	{
		int32_t L_107 = __this->get_tree_index_3();
		int32_t L_108 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(InternalInflateConstants_t2469443330_il2cpp_TypeInfo_var);
		Int32U5BU5D_t385246372* L_109 = ((InternalInflateConstants_t2469443330_StaticFields*)il2cpp_codegen_static_fields_for(InternalInflateConstants_t2469443330_il2cpp_TypeInfo_var))->get_InflateMask_0();
		int32_t L_110 = V_0;
		NullCheck(L_109);
		int32_t L_111 = L_110;
		int32_t L_112 = (L_109)->GetAt(static_cast<il2cpp_array_size_t>(L_111));
		V_1 = ((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_107, (int32_t)((int32_t)((int32_t)L_108&(int32_t)L_112)))), (int32_t)3));
		int32_t L_113 = V_3;
		Int32U5BU5D_t385246372* L_114 = __this->get_tree_2();
		int32_t L_115 = V_1;
		NullCheck(L_114);
		int32_t L_116 = ((int32_t)il2cpp_codegen_add((int32_t)L_115, (int32_t)1));
		int32_t L_117 = (L_114)->GetAt(static_cast<il2cpp_array_size_t>(L_116));
		V_3 = ((int32_t)((int32_t)L_113>>(int32_t)((int32_t)((int32_t)L_117&(int32_t)((int32_t)31)))));
		int32_t L_118 = V_4;
		Int32U5BU5D_t385246372* L_119 = __this->get_tree_2();
		int32_t L_120 = V_1;
		NullCheck(L_119);
		int32_t L_121 = ((int32_t)il2cpp_codegen_add((int32_t)L_120, (int32_t)1));
		int32_t L_122 = (L_119)->GetAt(static_cast<il2cpp_array_size_t>(L_121));
		V_4 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_118, (int32_t)L_122));
		Int32U5BU5D_t385246372* L_123 = __this->get_tree_2();
		int32_t L_124 = V_1;
		NullCheck(L_123);
		int32_t L_125 = L_124;
		int32_t L_126 = (L_123)->GetAt(static_cast<il2cpp_array_size_t>(L_125));
		V_2 = L_126;
		int32_t L_127 = V_2;
		if (L_127)
		{
			goto IL_02b8;
		}
	}
	{
		Int32U5BU5D_t385246372* L_128 = __this->get_tree_2();
		int32_t L_129 = V_1;
		NullCheck(L_128);
		int32_t L_130 = ((int32_t)il2cpp_codegen_add((int32_t)L_129, (int32_t)2));
		int32_t L_131 = (L_128)->GetAt(static_cast<il2cpp_array_size_t>(L_130));
		__this->set_lit_5(L_131);
		__this->set_mode_0(6);
		goto IL_0b63;
	}

IL_02b8:
	{
		int32_t L_132 = V_2;
		if (!((int32_t)((int32_t)L_132&(int32_t)((int32_t)16))))
		{
			goto IL_02e7;
		}
	}
	{
		int32_t L_133 = V_2;
		__this->set_bitsToGet_6(((int32_t)((int32_t)L_133&(int32_t)((int32_t)15))));
		Int32U5BU5D_t385246372* L_134 = __this->get_tree_2();
		int32_t L_135 = V_1;
		NullCheck(L_134);
		int32_t L_136 = ((int32_t)il2cpp_codegen_add((int32_t)L_135, (int32_t)2));
		int32_t L_137 = (L_134)->GetAt(static_cast<il2cpp_array_size_t>(L_136));
		__this->set_len_1(L_137);
		__this->set_mode_0(2);
		goto IL_0b63;
	}

IL_02e7:
	{
		int32_t L_138 = V_2;
		if (((int32_t)((int32_t)L_138&(int32_t)((int32_t)64))))
		{
			goto IL_0310;
		}
	}
	{
		int32_t L_139 = V_2;
		__this->set_need_4(L_139);
		int32_t L_140 = V_1;
		Int32U5BU5D_t385246372* L_141 = __this->get_tree_2();
		int32_t L_142 = V_1;
		NullCheck(L_141);
		int32_t L_143 = ((int32_t)il2cpp_codegen_add((int32_t)L_142, (int32_t)2));
		int32_t L_144 = (L_141)->GetAt(static_cast<il2cpp_array_size_t>(L_143));
		__this->set_tree_index_3(((int32_t)il2cpp_codegen_add((int32_t)((int32_t)((int32_t)L_140/(int32_t)3)), (int32_t)L_144)));
		goto IL_0b63;
	}

IL_0310:
	{
		int32_t L_145 = V_2;
		if (!((int32_t)((int32_t)L_145&(int32_t)((int32_t)32))))
		{
			goto IL_0325;
		}
	}
	{
		__this->set_mode_0(7);
		goto IL_0b63;
	}

IL_0325:
	{
		__this->set_mode_0(((int32_t)9));
		ZlibCodec_t855427629 * L_146 = V_10;
		NullCheck(L_146);
		L_146->set_Message_8(_stringLiteral3064251135);
		___r1 = ((int32_t)-3);
		InflateBlocks_t4119258979 * L_147 = ___blocks0;
		int32_t L_148 = V_3;
		NullCheck(L_147);
		L_147->set_bitb_12(L_148);
		InflateBlocks_t4119258979 * L_149 = ___blocks0;
		int32_t L_150 = V_4;
		NullCheck(L_149);
		L_149->set_bitk_11(L_150);
		ZlibCodec_t855427629 * L_151 = V_10;
		int32_t L_152 = V_6;
		NullCheck(L_151);
		L_151->set_AvailableBytesIn_2(L_152);
		ZlibCodec_t855427629 * L_153 = V_10;
		ZlibCodec_t855427629 * L_154 = L_153;
		NullCheck(L_154);
		int64_t L_155 = L_154->get_TotalBytesIn_3();
		int32_t L_156 = V_5;
		ZlibCodec_t855427629 * L_157 = V_10;
		NullCheck(L_157);
		int32_t L_158 = L_157->get_NextIn_1();
		NullCheck(L_154);
		L_154->set_TotalBytesIn_3(((int64_t)il2cpp_codegen_add((int64_t)L_155, (int64_t)(((int64_t)((int64_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_156, (int32_t)L_158))))))));
		ZlibCodec_t855427629 * L_159 = V_10;
		int32_t L_160 = V_5;
		NullCheck(L_159);
		L_159->set_NextIn_1(L_160);
		InflateBlocks_t4119258979 * L_161 = ___blocks0;
		int32_t L_162 = V_7;
		NullCheck(L_161);
		L_161->set_writeAt_17(L_162);
		InflateBlocks_t4119258979 * L_163 = ___blocks0;
		int32_t L_164 = ___r1;
		NullCheck(L_163);
		int32_t L_165 = InflateBlocks_Flush_m2330293879(L_163, L_164, /*hidden argument*/NULL);
		return L_165;
	}

IL_0387:
	{
		int32_t L_166 = __this->get_bitsToGet_6();
		V_0 = L_166;
		goto IL_0416;
	}

IL_0393:
	{
		int32_t L_167 = V_6;
		if (!L_167)
		{
			goto IL_03a2;
		}
	}
	{
		___r1 = 0;
		goto IL_03ec;
	}

IL_03a2:
	{
		InflateBlocks_t4119258979 * L_168 = ___blocks0;
		int32_t L_169 = V_3;
		NullCheck(L_168);
		L_168->set_bitb_12(L_169);
		InflateBlocks_t4119258979 * L_170 = ___blocks0;
		int32_t L_171 = V_4;
		NullCheck(L_170);
		L_170->set_bitk_11(L_171);
		ZlibCodec_t855427629 * L_172 = V_10;
		int32_t L_173 = V_6;
		NullCheck(L_172);
		L_172->set_AvailableBytesIn_2(L_173);
		ZlibCodec_t855427629 * L_174 = V_10;
		ZlibCodec_t855427629 * L_175 = L_174;
		NullCheck(L_175);
		int64_t L_176 = L_175->get_TotalBytesIn_3();
		int32_t L_177 = V_5;
		ZlibCodec_t855427629 * L_178 = V_10;
		NullCheck(L_178);
		int32_t L_179 = L_178->get_NextIn_1();
		NullCheck(L_175);
		L_175->set_TotalBytesIn_3(((int64_t)il2cpp_codegen_add((int64_t)L_176, (int64_t)(((int64_t)((int64_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_177, (int32_t)L_179))))))));
		ZlibCodec_t855427629 * L_180 = V_10;
		int32_t L_181 = V_5;
		NullCheck(L_180);
		L_180->set_NextIn_1(L_181);
		InflateBlocks_t4119258979 * L_182 = ___blocks0;
		int32_t L_183 = V_7;
		NullCheck(L_182);
		L_182->set_writeAt_17(L_183);
		InflateBlocks_t4119258979 * L_184 = ___blocks0;
		int32_t L_185 = ___r1;
		NullCheck(L_184);
		int32_t L_186 = InflateBlocks_Flush_m2330293879(L_184, L_185, /*hidden argument*/NULL);
		return L_186;
	}

IL_03ec:
	{
		int32_t L_187 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_187, (int32_t)1));
		int32_t L_188 = V_3;
		ZlibCodec_t855427629 * L_189 = V_10;
		NullCheck(L_189);
		ByteU5BU5D_t4116647657* L_190 = L_189->get_InputBuffer_0();
		int32_t L_191 = V_5;
		int32_t L_192 = L_191;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_192, (int32_t)1));
		NullCheck(L_190);
		int32_t L_193 = L_192;
		uint8_t L_194 = (L_190)->GetAt(static_cast<il2cpp_array_size_t>(L_193));
		int32_t L_195 = V_4;
		V_3 = ((int32_t)((int32_t)L_188|(int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_194&(int32_t)((int32_t)255)))<<(int32_t)((int32_t)((int32_t)L_195&(int32_t)((int32_t)31)))))));
		int32_t L_196 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_196, (int32_t)8));
	}

IL_0416:
	{
		int32_t L_197 = V_4;
		int32_t L_198 = V_0;
		if ((((int32_t)L_197) < ((int32_t)L_198)))
		{
			goto IL_0393;
		}
	}
	{
		int32_t L_199 = __this->get_len_1();
		int32_t L_200 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(InternalInflateConstants_t2469443330_il2cpp_TypeInfo_var);
		Int32U5BU5D_t385246372* L_201 = ((InternalInflateConstants_t2469443330_StaticFields*)il2cpp_codegen_static_fields_for(InternalInflateConstants_t2469443330_il2cpp_TypeInfo_var))->get_InflateMask_0();
		int32_t L_202 = V_0;
		NullCheck(L_201);
		int32_t L_203 = L_202;
		int32_t L_204 = (L_201)->GetAt(static_cast<il2cpp_array_size_t>(L_203));
		__this->set_len_1(((int32_t)il2cpp_codegen_add((int32_t)L_199, (int32_t)((int32_t)((int32_t)L_200&(int32_t)L_204)))));
		int32_t L_205 = V_3;
		int32_t L_206 = V_0;
		V_3 = ((int32_t)((int32_t)L_205>>(int32_t)((int32_t)((int32_t)L_206&(int32_t)((int32_t)31)))));
		int32_t L_207 = V_4;
		int32_t L_208 = V_0;
		V_4 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_207, (int32_t)L_208));
		uint8_t L_209 = __this->get_dbits_9();
		__this->set_need_4(L_209);
		Int32U5BU5D_t385246372* L_210 = __this->get_dtree_12();
		__this->set_tree_2(L_210);
		int32_t L_211 = __this->get_dtree_index_13();
		__this->set_tree_index_3(L_211);
		__this->set_mode_0(3);
		goto IL_0471;
	}

IL_0471:
	{
		int32_t L_212 = __this->get_need_4();
		V_0 = L_212;
		goto IL_0500;
	}

IL_047d:
	{
		int32_t L_213 = V_6;
		if (!L_213)
		{
			goto IL_048c;
		}
	}
	{
		___r1 = 0;
		goto IL_04d6;
	}

IL_048c:
	{
		InflateBlocks_t4119258979 * L_214 = ___blocks0;
		int32_t L_215 = V_3;
		NullCheck(L_214);
		L_214->set_bitb_12(L_215);
		InflateBlocks_t4119258979 * L_216 = ___blocks0;
		int32_t L_217 = V_4;
		NullCheck(L_216);
		L_216->set_bitk_11(L_217);
		ZlibCodec_t855427629 * L_218 = V_10;
		int32_t L_219 = V_6;
		NullCheck(L_218);
		L_218->set_AvailableBytesIn_2(L_219);
		ZlibCodec_t855427629 * L_220 = V_10;
		ZlibCodec_t855427629 * L_221 = L_220;
		NullCheck(L_221);
		int64_t L_222 = L_221->get_TotalBytesIn_3();
		int32_t L_223 = V_5;
		ZlibCodec_t855427629 * L_224 = V_10;
		NullCheck(L_224);
		int32_t L_225 = L_224->get_NextIn_1();
		NullCheck(L_221);
		L_221->set_TotalBytesIn_3(((int64_t)il2cpp_codegen_add((int64_t)L_222, (int64_t)(((int64_t)((int64_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_223, (int32_t)L_225))))))));
		ZlibCodec_t855427629 * L_226 = V_10;
		int32_t L_227 = V_5;
		NullCheck(L_226);
		L_226->set_NextIn_1(L_227);
		InflateBlocks_t4119258979 * L_228 = ___blocks0;
		int32_t L_229 = V_7;
		NullCheck(L_228);
		L_228->set_writeAt_17(L_229);
		InflateBlocks_t4119258979 * L_230 = ___blocks0;
		int32_t L_231 = ___r1;
		NullCheck(L_230);
		int32_t L_232 = InflateBlocks_Flush_m2330293879(L_230, L_231, /*hidden argument*/NULL);
		return L_232;
	}

IL_04d6:
	{
		int32_t L_233 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_233, (int32_t)1));
		int32_t L_234 = V_3;
		ZlibCodec_t855427629 * L_235 = V_10;
		NullCheck(L_235);
		ByteU5BU5D_t4116647657* L_236 = L_235->get_InputBuffer_0();
		int32_t L_237 = V_5;
		int32_t L_238 = L_237;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_238, (int32_t)1));
		NullCheck(L_236);
		int32_t L_239 = L_238;
		uint8_t L_240 = (L_236)->GetAt(static_cast<il2cpp_array_size_t>(L_239));
		int32_t L_241 = V_4;
		V_3 = ((int32_t)((int32_t)L_234|(int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_240&(int32_t)((int32_t)255)))<<(int32_t)((int32_t)((int32_t)L_241&(int32_t)((int32_t)31)))))));
		int32_t L_242 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_242, (int32_t)8));
	}

IL_0500:
	{
		int32_t L_243 = V_4;
		int32_t L_244 = V_0;
		if ((((int32_t)L_243) < ((int32_t)L_244)))
		{
			goto IL_047d;
		}
	}
	{
		int32_t L_245 = __this->get_tree_index_3();
		int32_t L_246 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(InternalInflateConstants_t2469443330_il2cpp_TypeInfo_var);
		Int32U5BU5D_t385246372* L_247 = ((InternalInflateConstants_t2469443330_StaticFields*)il2cpp_codegen_static_fields_for(InternalInflateConstants_t2469443330_il2cpp_TypeInfo_var))->get_InflateMask_0();
		int32_t L_248 = V_0;
		NullCheck(L_247);
		int32_t L_249 = L_248;
		int32_t L_250 = (L_247)->GetAt(static_cast<il2cpp_array_size_t>(L_249));
		V_1 = ((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_245, (int32_t)((int32_t)((int32_t)L_246&(int32_t)L_250)))), (int32_t)3));
		int32_t L_251 = V_3;
		Int32U5BU5D_t385246372* L_252 = __this->get_tree_2();
		int32_t L_253 = V_1;
		NullCheck(L_252);
		int32_t L_254 = ((int32_t)il2cpp_codegen_add((int32_t)L_253, (int32_t)1));
		int32_t L_255 = (L_252)->GetAt(static_cast<il2cpp_array_size_t>(L_254));
		V_3 = ((int32_t)((int32_t)L_251>>(int32_t)((int32_t)((int32_t)L_255&(int32_t)((int32_t)31)))));
		int32_t L_256 = V_4;
		Int32U5BU5D_t385246372* L_257 = __this->get_tree_2();
		int32_t L_258 = V_1;
		NullCheck(L_257);
		int32_t L_259 = ((int32_t)il2cpp_codegen_add((int32_t)L_258, (int32_t)1));
		int32_t L_260 = (L_257)->GetAt(static_cast<il2cpp_array_size_t>(L_259));
		V_4 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_256, (int32_t)L_260));
		Int32U5BU5D_t385246372* L_261 = __this->get_tree_2();
		int32_t L_262 = V_1;
		NullCheck(L_261);
		int32_t L_263 = L_262;
		int32_t L_264 = (L_261)->GetAt(static_cast<il2cpp_array_size_t>(L_263));
		V_2 = L_264;
		int32_t L_265 = V_2;
		if (!((int32_t)((int32_t)L_265&(int32_t)((int32_t)16))))
		{
			goto IL_0572;
		}
	}
	{
		int32_t L_266 = V_2;
		__this->set_bitsToGet_6(((int32_t)((int32_t)L_266&(int32_t)((int32_t)15))));
		Int32U5BU5D_t385246372* L_267 = __this->get_tree_2();
		int32_t L_268 = V_1;
		NullCheck(L_267);
		int32_t L_269 = ((int32_t)il2cpp_codegen_add((int32_t)L_268, (int32_t)2));
		int32_t L_270 = (L_267)->GetAt(static_cast<il2cpp_array_size_t>(L_269));
		__this->set_dist_7(L_270);
		__this->set_mode_0(4);
		goto IL_0b63;
	}

IL_0572:
	{
		int32_t L_271 = V_2;
		if (((int32_t)((int32_t)L_271&(int32_t)((int32_t)64))))
		{
			goto IL_059b;
		}
	}
	{
		int32_t L_272 = V_2;
		__this->set_need_4(L_272);
		int32_t L_273 = V_1;
		Int32U5BU5D_t385246372* L_274 = __this->get_tree_2();
		int32_t L_275 = V_1;
		NullCheck(L_274);
		int32_t L_276 = ((int32_t)il2cpp_codegen_add((int32_t)L_275, (int32_t)2));
		int32_t L_277 = (L_274)->GetAt(static_cast<il2cpp_array_size_t>(L_276));
		__this->set_tree_index_3(((int32_t)il2cpp_codegen_add((int32_t)((int32_t)((int32_t)L_273/(int32_t)3)), (int32_t)L_277)));
		goto IL_0b63;
	}

IL_059b:
	{
		__this->set_mode_0(((int32_t)9));
		ZlibCodec_t855427629 * L_278 = V_10;
		NullCheck(L_278);
		L_278->set_Message_8(_stringLiteral2190778985);
		___r1 = ((int32_t)-3);
		InflateBlocks_t4119258979 * L_279 = ___blocks0;
		int32_t L_280 = V_3;
		NullCheck(L_279);
		L_279->set_bitb_12(L_280);
		InflateBlocks_t4119258979 * L_281 = ___blocks0;
		int32_t L_282 = V_4;
		NullCheck(L_281);
		L_281->set_bitk_11(L_282);
		ZlibCodec_t855427629 * L_283 = V_10;
		int32_t L_284 = V_6;
		NullCheck(L_283);
		L_283->set_AvailableBytesIn_2(L_284);
		ZlibCodec_t855427629 * L_285 = V_10;
		ZlibCodec_t855427629 * L_286 = L_285;
		NullCheck(L_286);
		int64_t L_287 = L_286->get_TotalBytesIn_3();
		int32_t L_288 = V_5;
		ZlibCodec_t855427629 * L_289 = V_10;
		NullCheck(L_289);
		int32_t L_290 = L_289->get_NextIn_1();
		NullCheck(L_286);
		L_286->set_TotalBytesIn_3(((int64_t)il2cpp_codegen_add((int64_t)L_287, (int64_t)(((int64_t)((int64_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_288, (int32_t)L_290))))))));
		ZlibCodec_t855427629 * L_291 = V_10;
		int32_t L_292 = V_5;
		NullCheck(L_291);
		L_291->set_NextIn_1(L_292);
		InflateBlocks_t4119258979 * L_293 = ___blocks0;
		int32_t L_294 = V_7;
		NullCheck(L_293);
		L_293->set_writeAt_17(L_294);
		InflateBlocks_t4119258979 * L_295 = ___blocks0;
		int32_t L_296 = ___r1;
		NullCheck(L_295);
		int32_t L_297 = InflateBlocks_Flush_m2330293879(L_295, L_296, /*hidden argument*/NULL);
		return L_297;
	}

IL_05fd:
	{
		int32_t L_298 = __this->get_bitsToGet_6();
		V_0 = L_298;
		goto IL_068c;
	}

IL_0609:
	{
		int32_t L_299 = V_6;
		if (!L_299)
		{
			goto IL_0618;
		}
	}
	{
		___r1 = 0;
		goto IL_0662;
	}

IL_0618:
	{
		InflateBlocks_t4119258979 * L_300 = ___blocks0;
		int32_t L_301 = V_3;
		NullCheck(L_300);
		L_300->set_bitb_12(L_301);
		InflateBlocks_t4119258979 * L_302 = ___blocks0;
		int32_t L_303 = V_4;
		NullCheck(L_302);
		L_302->set_bitk_11(L_303);
		ZlibCodec_t855427629 * L_304 = V_10;
		int32_t L_305 = V_6;
		NullCheck(L_304);
		L_304->set_AvailableBytesIn_2(L_305);
		ZlibCodec_t855427629 * L_306 = V_10;
		ZlibCodec_t855427629 * L_307 = L_306;
		NullCheck(L_307);
		int64_t L_308 = L_307->get_TotalBytesIn_3();
		int32_t L_309 = V_5;
		ZlibCodec_t855427629 * L_310 = V_10;
		NullCheck(L_310);
		int32_t L_311 = L_310->get_NextIn_1();
		NullCheck(L_307);
		L_307->set_TotalBytesIn_3(((int64_t)il2cpp_codegen_add((int64_t)L_308, (int64_t)(((int64_t)((int64_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_309, (int32_t)L_311))))))));
		ZlibCodec_t855427629 * L_312 = V_10;
		int32_t L_313 = V_5;
		NullCheck(L_312);
		L_312->set_NextIn_1(L_313);
		InflateBlocks_t4119258979 * L_314 = ___blocks0;
		int32_t L_315 = V_7;
		NullCheck(L_314);
		L_314->set_writeAt_17(L_315);
		InflateBlocks_t4119258979 * L_316 = ___blocks0;
		int32_t L_317 = ___r1;
		NullCheck(L_316);
		int32_t L_318 = InflateBlocks_Flush_m2330293879(L_316, L_317, /*hidden argument*/NULL);
		return L_318;
	}

IL_0662:
	{
		int32_t L_319 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_319, (int32_t)1));
		int32_t L_320 = V_3;
		ZlibCodec_t855427629 * L_321 = V_10;
		NullCheck(L_321);
		ByteU5BU5D_t4116647657* L_322 = L_321->get_InputBuffer_0();
		int32_t L_323 = V_5;
		int32_t L_324 = L_323;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_324, (int32_t)1));
		NullCheck(L_322);
		int32_t L_325 = L_324;
		uint8_t L_326 = (L_322)->GetAt(static_cast<il2cpp_array_size_t>(L_325));
		int32_t L_327 = V_4;
		V_3 = ((int32_t)((int32_t)L_320|(int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_326&(int32_t)((int32_t)255)))<<(int32_t)((int32_t)((int32_t)L_327&(int32_t)((int32_t)31)))))));
		int32_t L_328 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_328, (int32_t)8));
	}

IL_068c:
	{
		int32_t L_329 = V_4;
		int32_t L_330 = V_0;
		if ((((int32_t)L_329) < ((int32_t)L_330)))
		{
			goto IL_0609;
		}
	}
	{
		int32_t L_331 = __this->get_dist_7();
		int32_t L_332 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(InternalInflateConstants_t2469443330_il2cpp_TypeInfo_var);
		Int32U5BU5D_t385246372* L_333 = ((InternalInflateConstants_t2469443330_StaticFields*)il2cpp_codegen_static_fields_for(InternalInflateConstants_t2469443330_il2cpp_TypeInfo_var))->get_InflateMask_0();
		int32_t L_334 = V_0;
		NullCheck(L_333);
		int32_t L_335 = L_334;
		int32_t L_336 = (L_333)->GetAt(static_cast<il2cpp_array_size_t>(L_335));
		__this->set_dist_7(((int32_t)il2cpp_codegen_add((int32_t)L_331, (int32_t)((int32_t)((int32_t)L_332&(int32_t)L_336)))));
		int32_t L_337 = V_3;
		int32_t L_338 = V_0;
		V_3 = ((int32_t)((int32_t)L_337>>(int32_t)((int32_t)((int32_t)L_338&(int32_t)((int32_t)31)))));
		int32_t L_339 = V_4;
		int32_t L_340 = V_0;
		V_4 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_339, (int32_t)L_340));
		__this->set_mode_0(5);
		goto IL_06c3;
	}

IL_06c3:
	{
		int32_t L_341 = V_7;
		int32_t L_342 = __this->get_dist_7();
		V_9 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_341, (int32_t)L_342));
		goto IL_06de;
	}

IL_06d3:
	{
		int32_t L_343 = V_9;
		InflateBlocks_t4119258979 * L_344 = ___blocks0;
		NullCheck(L_344);
		int32_t L_345 = L_344->get_end_15();
		V_9 = ((int32_t)il2cpp_codegen_add((int32_t)L_343, (int32_t)L_345));
	}

IL_06de:
	{
		int32_t L_346 = V_9;
		if ((((int32_t)L_346) < ((int32_t)0)))
		{
			goto IL_06d3;
		}
	}
	{
		goto IL_0851;
	}

IL_06eb:
	{
		int32_t L_347 = V_8;
		if (L_347)
		{
			goto IL_0811;
		}
	}
	{
		int32_t L_348 = V_7;
		InflateBlocks_t4119258979 * L_349 = ___blocks0;
		NullCheck(L_349);
		int32_t L_350 = L_349->get_end_15();
		if ((!(((uint32_t)L_348) == ((uint32_t)L_350))))
		{
			goto IL_0735;
		}
	}
	{
		InflateBlocks_t4119258979 * L_351 = ___blocks0;
		NullCheck(L_351);
		int32_t L_352 = L_351->get_readAt_16();
		if (!L_352)
		{
			goto IL_0735;
		}
	}
	{
		V_7 = 0;
		int32_t L_353 = V_7;
		InflateBlocks_t4119258979 * L_354 = ___blocks0;
		NullCheck(L_354);
		int32_t L_355 = L_354->get_readAt_16();
		if ((((int32_t)L_353) >= ((int32_t)L_355)))
		{
			goto IL_072a;
		}
	}
	{
		InflateBlocks_t4119258979 * L_356 = ___blocks0;
		NullCheck(L_356);
		int32_t L_357 = L_356->get_readAt_16();
		int32_t L_358 = V_7;
		G_B67_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_357, (int32_t)L_358)), (int32_t)1));
		goto IL_0733;
	}

IL_072a:
	{
		InflateBlocks_t4119258979 * L_359 = ___blocks0;
		NullCheck(L_359);
		int32_t L_360 = L_359->get_end_15();
		int32_t L_361 = V_7;
		G_B67_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_360, (int32_t)L_361));
	}

IL_0733:
	{
		V_8 = G_B67_0;
	}

IL_0735:
	{
		int32_t L_362 = V_8;
		if (L_362)
		{
			goto IL_0811;
		}
	}
	{
		InflateBlocks_t4119258979 * L_363 = ___blocks0;
		int32_t L_364 = V_7;
		NullCheck(L_363);
		L_363->set_writeAt_17(L_364);
		InflateBlocks_t4119258979 * L_365 = ___blocks0;
		int32_t L_366 = ___r1;
		NullCheck(L_365);
		int32_t L_367 = InflateBlocks_Flush_m2330293879(L_365, L_366, /*hidden argument*/NULL);
		___r1 = L_367;
		InflateBlocks_t4119258979 * L_368 = ___blocks0;
		NullCheck(L_368);
		int32_t L_369 = L_368->get_writeAt_17();
		V_7 = L_369;
		int32_t L_370 = V_7;
		InflateBlocks_t4119258979 * L_371 = ___blocks0;
		NullCheck(L_371);
		int32_t L_372 = L_371->get_readAt_16();
		if ((((int32_t)L_370) >= ((int32_t)L_372)))
		{
			goto IL_0772;
		}
	}
	{
		InflateBlocks_t4119258979 * L_373 = ___blocks0;
		NullCheck(L_373);
		int32_t L_374 = L_373->get_readAt_16();
		int32_t L_375 = V_7;
		G_B72_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_374, (int32_t)L_375)), (int32_t)1));
		goto IL_077b;
	}

IL_0772:
	{
		InflateBlocks_t4119258979 * L_376 = ___blocks0;
		NullCheck(L_376);
		int32_t L_377 = L_376->get_end_15();
		int32_t L_378 = V_7;
		G_B72_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_377, (int32_t)L_378));
	}

IL_077b:
	{
		V_8 = G_B72_0;
		int32_t L_379 = V_7;
		InflateBlocks_t4119258979 * L_380 = ___blocks0;
		NullCheck(L_380);
		int32_t L_381 = L_380->get_end_15();
		if ((!(((uint32_t)L_379) == ((uint32_t)L_381))))
		{
			goto IL_07c0;
		}
	}
	{
		InflateBlocks_t4119258979 * L_382 = ___blocks0;
		NullCheck(L_382);
		int32_t L_383 = L_382->get_readAt_16();
		if (!L_383)
		{
			goto IL_07c0;
		}
	}
	{
		V_7 = 0;
		int32_t L_384 = V_7;
		InflateBlocks_t4119258979 * L_385 = ___blocks0;
		NullCheck(L_385);
		int32_t L_386 = L_385->get_readAt_16();
		if ((((int32_t)L_384) >= ((int32_t)L_386)))
		{
			goto IL_07b5;
		}
	}
	{
		InflateBlocks_t4119258979 * L_387 = ___blocks0;
		NullCheck(L_387);
		int32_t L_388 = L_387->get_readAt_16();
		int32_t L_389 = V_7;
		G_B77_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_388, (int32_t)L_389)), (int32_t)1));
		goto IL_07be;
	}

IL_07b5:
	{
		InflateBlocks_t4119258979 * L_390 = ___blocks0;
		NullCheck(L_390);
		int32_t L_391 = L_390->get_end_15();
		int32_t L_392 = V_7;
		G_B77_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_391, (int32_t)L_392));
	}

IL_07be:
	{
		V_8 = G_B77_0;
	}

IL_07c0:
	{
		int32_t L_393 = V_8;
		if (L_393)
		{
			goto IL_0811;
		}
	}
	{
		InflateBlocks_t4119258979 * L_394 = ___blocks0;
		int32_t L_395 = V_3;
		NullCheck(L_394);
		L_394->set_bitb_12(L_395);
		InflateBlocks_t4119258979 * L_396 = ___blocks0;
		int32_t L_397 = V_4;
		NullCheck(L_396);
		L_396->set_bitk_11(L_397);
		ZlibCodec_t855427629 * L_398 = V_10;
		int32_t L_399 = V_6;
		NullCheck(L_398);
		L_398->set_AvailableBytesIn_2(L_399);
		ZlibCodec_t855427629 * L_400 = V_10;
		ZlibCodec_t855427629 * L_401 = L_400;
		NullCheck(L_401);
		int64_t L_402 = L_401->get_TotalBytesIn_3();
		int32_t L_403 = V_5;
		ZlibCodec_t855427629 * L_404 = V_10;
		NullCheck(L_404);
		int32_t L_405 = L_404->get_NextIn_1();
		NullCheck(L_401);
		L_401->set_TotalBytesIn_3(((int64_t)il2cpp_codegen_add((int64_t)L_402, (int64_t)(((int64_t)((int64_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_403, (int32_t)L_405))))))));
		ZlibCodec_t855427629 * L_406 = V_10;
		int32_t L_407 = V_5;
		NullCheck(L_406);
		L_406->set_NextIn_1(L_407);
		InflateBlocks_t4119258979 * L_408 = ___blocks0;
		int32_t L_409 = V_7;
		NullCheck(L_408);
		L_408->set_writeAt_17(L_409);
		InflateBlocks_t4119258979 * L_410 = ___blocks0;
		int32_t L_411 = ___r1;
		NullCheck(L_410);
		int32_t L_412 = InflateBlocks_Flush_m2330293879(L_410, L_411, /*hidden argument*/NULL);
		return L_412;
	}

IL_0811:
	{
		InflateBlocks_t4119258979 * L_413 = ___blocks0;
		NullCheck(L_413);
		ByteU5BU5D_t4116647657* L_414 = L_413->get_window_14();
		int32_t L_415 = V_7;
		int32_t L_416 = L_415;
		V_7 = ((int32_t)il2cpp_codegen_add((int32_t)L_416, (int32_t)1));
		InflateBlocks_t4119258979 * L_417 = ___blocks0;
		NullCheck(L_417);
		ByteU5BU5D_t4116647657* L_418 = L_417->get_window_14();
		int32_t L_419 = V_9;
		int32_t L_420 = L_419;
		V_9 = ((int32_t)il2cpp_codegen_add((int32_t)L_420, (int32_t)1));
		NullCheck(L_418);
		int32_t L_421 = L_420;
		uint8_t L_422 = (L_418)->GetAt(static_cast<il2cpp_array_size_t>(L_421));
		NullCheck(L_414);
		(L_414)->SetAt(static_cast<il2cpp_array_size_t>(L_416), (uint8_t)L_422);
		int32_t L_423 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_423, (int32_t)1));
		int32_t L_424 = V_9;
		InflateBlocks_t4119258979 * L_425 = ___blocks0;
		NullCheck(L_425);
		int32_t L_426 = L_425->get_end_15();
		if ((!(((uint32_t)L_424) == ((uint32_t)L_426))))
		{
			goto IL_0843;
		}
	}
	{
		V_9 = 0;
	}

IL_0843:
	{
		int32_t L_427 = __this->get_len_1();
		__this->set_len_1(((int32_t)il2cpp_codegen_subtract((int32_t)L_427, (int32_t)1)));
	}

IL_0851:
	{
		int32_t L_428 = __this->get_len_1();
		if (L_428)
		{
			goto IL_06eb;
		}
	}
	{
		__this->set_mode_0(0);
		goto IL_0b63;
	}

IL_0868:
	{
		int32_t L_429 = V_8;
		if (L_429)
		{
			goto IL_098e;
		}
	}
	{
		int32_t L_430 = V_7;
		InflateBlocks_t4119258979 * L_431 = ___blocks0;
		NullCheck(L_431);
		int32_t L_432 = L_431->get_end_15();
		if ((!(((uint32_t)L_430) == ((uint32_t)L_432))))
		{
			goto IL_08b2;
		}
	}
	{
		InflateBlocks_t4119258979 * L_433 = ___blocks0;
		NullCheck(L_433);
		int32_t L_434 = L_433->get_readAt_16();
		if (!L_434)
		{
			goto IL_08b2;
		}
	}
	{
		V_7 = 0;
		int32_t L_435 = V_7;
		InflateBlocks_t4119258979 * L_436 = ___blocks0;
		NullCheck(L_436);
		int32_t L_437 = L_436->get_readAt_16();
		if ((((int32_t)L_435) >= ((int32_t)L_437)))
		{
			goto IL_08a7;
		}
	}
	{
		InflateBlocks_t4119258979 * L_438 = ___blocks0;
		NullCheck(L_438);
		int32_t L_439 = L_438->get_readAt_16();
		int32_t L_440 = V_7;
		G_B91_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_439, (int32_t)L_440)), (int32_t)1));
		goto IL_08b0;
	}

IL_08a7:
	{
		InflateBlocks_t4119258979 * L_441 = ___blocks0;
		NullCheck(L_441);
		int32_t L_442 = L_441->get_end_15();
		int32_t L_443 = V_7;
		G_B91_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_442, (int32_t)L_443));
	}

IL_08b0:
	{
		V_8 = G_B91_0;
	}

IL_08b2:
	{
		int32_t L_444 = V_8;
		if (L_444)
		{
			goto IL_098e;
		}
	}
	{
		InflateBlocks_t4119258979 * L_445 = ___blocks0;
		int32_t L_446 = V_7;
		NullCheck(L_445);
		L_445->set_writeAt_17(L_446);
		InflateBlocks_t4119258979 * L_447 = ___blocks0;
		int32_t L_448 = ___r1;
		NullCheck(L_447);
		int32_t L_449 = InflateBlocks_Flush_m2330293879(L_447, L_448, /*hidden argument*/NULL);
		___r1 = L_449;
		InflateBlocks_t4119258979 * L_450 = ___blocks0;
		NullCheck(L_450);
		int32_t L_451 = L_450->get_writeAt_17();
		V_7 = L_451;
		int32_t L_452 = V_7;
		InflateBlocks_t4119258979 * L_453 = ___blocks0;
		NullCheck(L_453);
		int32_t L_454 = L_453->get_readAt_16();
		if ((((int32_t)L_452) >= ((int32_t)L_454)))
		{
			goto IL_08ef;
		}
	}
	{
		InflateBlocks_t4119258979 * L_455 = ___blocks0;
		NullCheck(L_455);
		int32_t L_456 = L_455->get_readAt_16();
		int32_t L_457 = V_7;
		G_B96_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_456, (int32_t)L_457)), (int32_t)1));
		goto IL_08f8;
	}

IL_08ef:
	{
		InflateBlocks_t4119258979 * L_458 = ___blocks0;
		NullCheck(L_458);
		int32_t L_459 = L_458->get_end_15();
		int32_t L_460 = V_7;
		G_B96_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_459, (int32_t)L_460));
	}

IL_08f8:
	{
		V_8 = G_B96_0;
		int32_t L_461 = V_7;
		InflateBlocks_t4119258979 * L_462 = ___blocks0;
		NullCheck(L_462);
		int32_t L_463 = L_462->get_end_15();
		if ((!(((uint32_t)L_461) == ((uint32_t)L_463))))
		{
			goto IL_093d;
		}
	}
	{
		InflateBlocks_t4119258979 * L_464 = ___blocks0;
		NullCheck(L_464);
		int32_t L_465 = L_464->get_readAt_16();
		if (!L_465)
		{
			goto IL_093d;
		}
	}
	{
		V_7 = 0;
		int32_t L_466 = V_7;
		InflateBlocks_t4119258979 * L_467 = ___blocks0;
		NullCheck(L_467);
		int32_t L_468 = L_467->get_readAt_16();
		if ((((int32_t)L_466) >= ((int32_t)L_468)))
		{
			goto IL_0932;
		}
	}
	{
		InflateBlocks_t4119258979 * L_469 = ___blocks0;
		NullCheck(L_469);
		int32_t L_470 = L_469->get_readAt_16();
		int32_t L_471 = V_7;
		G_B101_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_470, (int32_t)L_471)), (int32_t)1));
		goto IL_093b;
	}

IL_0932:
	{
		InflateBlocks_t4119258979 * L_472 = ___blocks0;
		NullCheck(L_472);
		int32_t L_473 = L_472->get_end_15();
		int32_t L_474 = V_7;
		G_B101_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_473, (int32_t)L_474));
	}

IL_093b:
	{
		V_8 = G_B101_0;
	}

IL_093d:
	{
		int32_t L_475 = V_8;
		if (L_475)
		{
			goto IL_098e;
		}
	}
	{
		InflateBlocks_t4119258979 * L_476 = ___blocks0;
		int32_t L_477 = V_3;
		NullCheck(L_476);
		L_476->set_bitb_12(L_477);
		InflateBlocks_t4119258979 * L_478 = ___blocks0;
		int32_t L_479 = V_4;
		NullCheck(L_478);
		L_478->set_bitk_11(L_479);
		ZlibCodec_t855427629 * L_480 = V_10;
		int32_t L_481 = V_6;
		NullCheck(L_480);
		L_480->set_AvailableBytesIn_2(L_481);
		ZlibCodec_t855427629 * L_482 = V_10;
		ZlibCodec_t855427629 * L_483 = L_482;
		NullCheck(L_483);
		int64_t L_484 = L_483->get_TotalBytesIn_3();
		int32_t L_485 = V_5;
		ZlibCodec_t855427629 * L_486 = V_10;
		NullCheck(L_486);
		int32_t L_487 = L_486->get_NextIn_1();
		NullCheck(L_483);
		L_483->set_TotalBytesIn_3(((int64_t)il2cpp_codegen_add((int64_t)L_484, (int64_t)(((int64_t)((int64_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_485, (int32_t)L_487))))))));
		ZlibCodec_t855427629 * L_488 = V_10;
		int32_t L_489 = V_5;
		NullCheck(L_488);
		L_488->set_NextIn_1(L_489);
		InflateBlocks_t4119258979 * L_490 = ___blocks0;
		int32_t L_491 = V_7;
		NullCheck(L_490);
		L_490->set_writeAt_17(L_491);
		InflateBlocks_t4119258979 * L_492 = ___blocks0;
		int32_t L_493 = ___r1;
		NullCheck(L_492);
		int32_t L_494 = InflateBlocks_Flush_m2330293879(L_492, L_493, /*hidden argument*/NULL);
		return L_494;
	}

IL_098e:
	{
		___r1 = 0;
		InflateBlocks_t4119258979 * L_495 = ___blocks0;
		NullCheck(L_495);
		ByteU5BU5D_t4116647657* L_496 = L_495->get_window_14();
		int32_t L_497 = V_7;
		int32_t L_498 = L_497;
		V_7 = ((int32_t)il2cpp_codegen_add((int32_t)L_498, (int32_t)1));
		int32_t L_499 = __this->get_lit_5();
		NullCheck(L_496);
		(L_496)->SetAt(static_cast<il2cpp_array_size_t>(L_498), (uint8_t)(((int32_t)((uint8_t)L_499))));
		int32_t L_500 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_500, (int32_t)1));
		__this->set_mode_0(0);
		goto IL_0b63;
	}

IL_09b8:
	{
		int32_t L_501 = V_4;
		if ((((int32_t)L_501) <= ((int32_t)7)))
		{
			goto IL_09d2;
		}
	}
	{
		int32_t L_502 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_502, (int32_t)8));
		int32_t L_503 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_503, (int32_t)1));
		int32_t L_504 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_504, (int32_t)1));
	}

IL_09d2:
	{
		InflateBlocks_t4119258979 * L_505 = ___blocks0;
		int32_t L_506 = V_7;
		NullCheck(L_505);
		L_505->set_writeAt_17(L_506);
		InflateBlocks_t4119258979 * L_507 = ___blocks0;
		int32_t L_508 = ___r1;
		NullCheck(L_507);
		int32_t L_509 = InflateBlocks_Flush_m2330293879(L_507, L_508, /*hidden argument*/NULL);
		___r1 = L_509;
		InflateBlocks_t4119258979 * L_510 = ___blocks0;
		NullCheck(L_510);
		int32_t L_511 = L_510->get_writeAt_17();
		V_7 = L_511;
		int32_t L_512 = V_7;
		InflateBlocks_t4119258979 * L_513 = ___blocks0;
		NullCheck(L_513);
		int32_t L_514 = L_513->get_readAt_16();
		if ((((int32_t)L_512) >= ((int32_t)L_514)))
		{
			goto IL_0a08;
		}
	}
	{
		InflateBlocks_t4119258979 * L_515 = ___blocks0;
		NullCheck(L_515);
		int32_t L_516 = L_515->get_readAt_16();
		int32_t L_517 = V_7;
		G_B110_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_516, (int32_t)L_517)), (int32_t)1));
		goto IL_0a11;
	}

IL_0a08:
	{
		InflateBlocks_t4119258979 * L_518 = ___blocks0;
		NullCheck(L_518);
		int32_t L_519 = L_518->get_end_15();
		int32_t L_520 = V_7;
		G_B110_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_519, (int32_t)L_520));
	}

IL_0a11:
	{
		V_8 = G_B110_0;
		InflateBlocks_t4119258979 * L_521 = ___blocks0;
		NullCheck(L_521);
		int32_t L_522 = L_521->get_readAt_16();
		InflateBlocks_t4119258979 * L_523 = ___blocks0;
		NullCheck(L_523);
		int32_t L_524 = L_523->get_writeAt_17();
		if ((((int32_t)L_522) == ((int32_t)L_524)))
		{
			goto IL_0a6e;
		}
	}
	{
		InflateBlocks_t4119258979 * L_525 = ___blocks0;
		int32_t L_526 = V_3;
		NullCheck(L_525);
		L_525->set_bitb_12(L_526);
		InflateBlocks_t4119258979 * L_527 = ___blocks0;
		int32_t L_528 = V_4;
		NullCheck(L_527);
		L_527->set_bitk_11(L_528);
		ZlibCodec_t855427629 * L_529 = V_10;
		int32_t L_530 = V_6;
		NullCheck(L_529);
		L_529->set_AvailableBytesIn_2(L_530);
		ZlibCodec_t855427629 * L_531 = V_10;
		ZlibCodec_t855427629 * L_532 = L_531;
		NullCheck(L_532);
		int64_t L_533 = L_532->get_TotalBytesIn_3();
		int32_t L_534 = V_5;
		ZlibCodec_t855427629 * L_535 = V_10;
		NullCheck(L_535);
		int32_t L_536 = L_535->get_NextIn_1();
		NullCheck(L_532);
		L_532->set_TotalBytesIn_3(((int64_t)il2cpp_codegen_add((int64_t)L_533, (int64_t)(((int64_t)((int64_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_534, (int32_t)L_536))))))));
		ZlibCodec_t855427629 * L_537 = V_10;
		int32_t L_538 = V_5;
		NullCheck(L_537);
		L_537->set_NextIn_1(L_538);
		InflateBlocks_t4119258979 * L_539 = ___blocks0;
		int32_t L_540 = V_7;
		NullCheck(L_539);
		L_539->set_writeAt_17(L_540);
		InflateBlocks_t4119258979 * L_541 = ___blocks0;
		int32_t L_542 = ___r1;
		NullCheck(L_541);
		int32_t L_543 = InflateBlocks_Flush_m2330293879(L_541, L_542, /*hidden argument*/NULL);
		return L_543;
	}

IL_0a6e:
	{
		__this->set_mode_0(8);
		goto IL_0a7a;
	}

IL_0a7a:
	{
		___r1 = 1;
		InflateBlocks_t4119258979 * L_544 = ___blocks0;
		int32_t L_545 = V_3;
		NullCheck(L_544);
		L_544->set_bitb_12(L_545);
		InflateBlocks_t4119258979 * L_546 = ___blocks0;
		int32_t L_547 = V_4;
		NullCheck(L_546);
		L_546->set_bitk_11(L_547);
		ZlibCodec_t855427629 * L_548 = V_10;
		int32_t L_549 = V_6;
		NullCheck(L_548);
		L_548->set_AvailableBytesIn_2(L_549);
		ZlibCodec_t855427629 * L_550 = V_10;
		ZlibCodec_t855427629 * L_551 = L_550;
		NullCheck(L_551);
		int64_t L_552 = L_551->get_TotalBytesIn_3();
		int32_t L_553 = V_5;
		ZlibCodec_t855427629 * L_554 = V_10;
		NullCheck(L_554);
		int32_t L_555 = L_554->get_NextIn_1();
		NullCheck(L_551);
		L_551->set_TotalBytesIn_3(((int64_t)il2cpp_codegen_add((int64_t)L_552, (int64_t)(((int64_t)((int64_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_553, (int32_t)L_555))))))));
		ZlibCodec_t855427629 * L_556 = V_10;
		int32_t L_557 = V_5;
		NullCheck(L_556);
		L_556->set_NextIn_1(L_557);
		InflateBlocks_t4119258979 * L_558 = ___blocks0;
		int32_t L_559 = V_7;
		NullCheck(L_558);
		L_558->set_writeAt_17(L_559);
		InflateBlocks_t4119258979 * L_560 = ___blocks0;
		int32_t L_561 = ___r1;
		NullCheck(L_560);
		int32_t L_562 = InflateBlocks_Flush_m2330293879(L_560, L_561, /*hidden argument*/NULL);
		return L_562;
	}

IL_0ac7:
	{
		___r1 = ((int32_t)-3);
		InflateBlocks_t4119258979 * L_563 = ___blocks0;
		int32_t L_564 = V_3;
		NullCheck(L_563);
		L_563->set_bitb_12(L_564);
		InflateBlocks_t4119258979 * L_565 = ___blocks0;
		int32_t L_566 = V_4;
		NullCheck(L_565);
		L_565->set_bitk_11(L_566);
		ZlibCodec_t855427629 * L_567 = V_10;
		int32_t L_568 = V_6;
		NullCheck(L_567);
		L_567->set_AvailableBytesIn_2(L_568);
		ZlibCodec_t855427629 * L_569 = V_10;
		ZlibCodec_t855427629 * L_570 = L_569;
		NullCheck(L_570);
		int64_t L_571 = L_570->get_TotalBytesIn_3();
		int32_t L_572 = V_5;
		ZlibCodec_t855427629 * L_573 = V_10;
		NullCheck(L_573);
		int32_t L_574 = L_573->get_NextIn_1();
		NullCheck(L_570);
		L_570->set_TotalBytesIn_3(((int64_t)il2cpp_codegen_add((int64_t)L_571, (int64_t)(((int64_t)((int64_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_572, (int32_t)L_574))))))));
		ZlibCodec_t855427629 * L_575 = V_10;
		int32_t L_576 = V_5;
		NullCheck(L_575);
		L_575->set_NextIn_1(L_576);
		InflateBlocks_t4119258979 * L_577 = ___blocks0;
		int32_t L_578 = V_7;
		NullCheck(L_577);
		L_577->set_writeAt_17(L_578);
		InflateBlocks_t4119258979 * L_579 = ___blocks0;
		int32_t L_580 = ___r1;
		NullCheck(L_579);
		int32_t L_581 = InflateBlocks_Flush_m2330293879(L_579, L_580, /*hidden argument*/NULL);
		return L_581;
	}

IL_0b15:
	{
		___r1 = ((int32_t)-2);
		InflateBlocks_t4119258979 * L_582 = ___blocks0;
		int32_t L_583 = V_3;
		NullCheck(L_582);
		L_582->set_bitb_12(L_583);
		InflateBlocks_t4119258979 * L_584 = ___blocks0;
		int32_t L_585 = V_4;
		NullCheck(L_584);
		L_584->set_bitk_11(L_585);
		ZlibCodec_t855427629 * L_586 = V_10;
		int32_t L_587 = V_6;
		NullCheck(L_586);
		L_586->set_AvailableBytesIn_2(L_587);
		ZlibCodec_t855427629 * L_588 = V_10;
		ZlibCodec_t855427629 * L_589 = L_588;
		NullCheck(L_589);
		int64_t L_590 = L_589->get_TotalBytesIn_3();
		int32_t L_591 = V_5;
		ZlibCodec_t855427629 * L_592 = V_10;
		NullCheck(L_592);
		int32_t L_593 = L_592->get_NextIn_1();
		NullCheck(L_589);
		L_589->set_TotalBytesIn_3(((int64_t)il2cpp_codegen_add((int64_t)L_590, (int64_t)(((int64_t)((int64_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_591, (int32_t)L_593))))))));
		ZlibCodec_t855427629 * L_594 = V_10;
		int32_t L_595 = V_5;
		NullCheck(L_594);
		L_594->set_NextIn_1(L_595);
		InflateBlocks_t4119258979 * L_596 = ___blocks0;
		int32_t L_597 = V_7;
		NullCheck(L_596);
		L_596->set_writeAt_17(L_597);
		InflateBlocks_t4119258979 * L_598 = ___blocks0;
		int32_t L_599 = ___r1;
		NullCheck(L_598);
		int32_t L_600 = InflateBlocks_Flush_m2330293879(L_598, L_599, /*hidden argument*/NULL);
		return L_600;
	}

IL_0b63:
	{
		goto IL_0061;
	}
}
// System.Int32 Pathfinding.Ionic.Zlib.InflateCodes::InflateFast(System.Int32,System.Int32,System.Int32[],System.Int32,System.Int32[],System.Int32,Pathfinding.Ionic.Zlib.InflateBlocks,Pathfinding.Ionic.Zlib.ZlibCodec)
extern "C" IL2CPP_METHOD_ATTR int32_t InflateCodes_InflateFast_m1267240824 (InflateCodes_t3940108927 * __this, int32_t ___bl0, int32_t ___bd1, Int32U5BU5D_t385246372* ___tl2, int32_t ___tl_index3, Int32U5BU5D_t385246372* ___td4, int32_t ___td_index5, InflateBlocks_t4119258979 * ___s6, ZlibCodec_t855427629 * ___z7, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InflateCodes_InflateFast_m1267240824_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Int32U5BU5D_t385246372* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	int32_t V_12 = 0;
	int32_t V_13 = 0;
	int32_t V_14 = 0;
	int32_t V_15 = 0;
	int32_t G_B3_0 = 0;
	int32_t G_B44_0 = 0;
	int32_t G_B55_0 = 0;
	int32_t G_B59_0 = 0;
	int32_t G_B66_0 = 0;
	{
		ZlibCodec_t855427629 * L_0 = ___z7;
		NullCheck(L_0);
		int32_t L_1 = L_0->get_NextIn_1();
		V_6 = L_1;
		ZlibCodec_t855427629 * L_2 = ___z7;
		NullCheck(L_2);
		int32_t L_3 = L_2->get_AvailableBytesIn_2();
		V_7 = L_3;
		InflateBlocks_t4119258979 * L_4 = ___s6;
		NullCheck(L_4);
		int32_t L_5 = L_4->get_bitb_12();
		V_4 = L_5;
		InflateBlocks_t4119258979 * L_6 = ___s6;
		NullCheck(L_6);
		int32_t L_7 = L_6->get_bitk_11();
		V_5 = L_7;
		InflateBlocks_t4119258979 * L_8 = ___s6;
		NullCheck(L_8);
		int32_t L_9 = L_8->get_writeAt_17();
		V_8 = L_9;
		int32_t L_10 = V_8;
		InflateBlocks_t4119258979 * L_11 = ___s6;
		NullCheck(L_11);
		int32_t L_12 = L_11->get_readAt_16();
		if ((((int32_t)L_10) >= ((int32_t)L_12)))
		{
			goto IL_004c;
		}
	}
	{
		InflateBlocks_t4119258979 * L_13 = ___s6;
		NullCheck(L_13);
		int32_t L_14 = L_13->get_readAt_16();
		int32_t L_15 = V_8;
		G_B3_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_14, (int32_t)L_15)), (int32_t)1));
		goto IL_0056;
	}

IL_004c:
	{
		InflateBlocks_t4119258979 * L_16 = ___s6;
		NullCheck(L_16);
		int32_t L_17 = L_16->get_end_15();
		int32_t L_18 = V_8;
		G_B3_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_17, (int32_t)L_18));
	}

IL_0056:
	{
		V_9 = G_B3_0;
		IL2CPP_RUNTIME_CLASS_INIT(InternalInflateConstants_t2469443330_il2cpp_TypeInfo_var);
		Int32U5BU5D_t385246372* L_19 = ((InternalInflateConstants_t2469443330_StaticFields*)il2cpp_codegen_static_fields_for(InternalInflateConstants_t2469443330_il2cpp_TypeInfo_var))->get_InflateMask_0();
		int32_t L_20 = ___bl0;
		NullCheck(L_19);
		int32_t L_21 = L_20;
		int32_t L_22 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		V_10 = L_22;
		Int32U5BU5D_t385246372* L_23 = ((InternalInflateConstants_t2469443330_StaticFields*)il2cpp_codegen_static_fields_for(InternalInflateConstants_t2469443330_il2cpp_TypeInfo_var))->get_InflateMask_0();
		int32_t L_24 = ___bd1;
		NullCheck(L_23);
		int32_t L_25 = L_24;
		int32_t L_26 = (L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		V_11 = L_26;
	}

IL_006a:
	{
		goto IL_009b;
	}

IL_006f:
	{
		int32_t L_27 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_27, (int32_t)1));
		int32_t L_28 = V_4;
		ZlibCodec_t855427629 * L_29 = ___z7;
		NullCheck(L_29);
		ByteU5BU5D_t4116647657* L_30 = L_29->get_InputBuffer_0();
		int32_t L_31 = V_6;
		int32_t L_32 = L_31;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_32, (int32_t)1));
		NullCheck(L_30);
		int32_t L_33 = L_32;
		uint8_t L_34 = (L_30)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		int32_t L_35 = V_5;
		V_4 = ((int32_t)((int32_t)L_28|(int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_34&(int32_t)((int32_t)255)))<<(int32_t)((int32_t)((int32_t)L_35&(int32_t)((int32_t)31)))))));
		int32_t L_36 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_36, (int32_t)8));
	}

IL_009b:
	{
		int32_t L_37 = V_5;
		if ((((int32_t)L_37) < ((int32_t)((int32_t)20))))
		{
			goto IL_006f;
		}
	}
	{
		int32_t L_38 = V_4;
		int32_t L_39 = V_10;
		V_0 = ((int32_t)((int32_t)L_38&(int32_t)L_39));
		Int32U5BU5D_t385246372* L_40 = ___tl2;
		V_1 = L_40;
		int32_t L_41 = ___tl_index3;
		V_2 = L_41;
		int32_t L_42 = V_2;
		int32_t L_43 = V_0;
		V_15 = ((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_42, (int32_t)L_43)), (int32_t)3));
		Int32U5BU5D_t385246372* L_44 = V_1;
		int32_t L_45 = V_15;
		NullCheck(L_44);
		int32_t L_46 = L_45;
		int32_t L_47 = (L_44)->GetAt(static_cast<il2cpp_array_size_t>(L_46));
		int32_t L_48 = L_47;
		V_3 = L_48;
		if (L_48)
		{
			goto IL_00fb;
		}
	}
	{
		int32_t L_49 = V_4;
		Int32U5BU5D_t385246372* L_50 = V_1;
		int32_t L_51 = V_15;
		NullCheck(L_50);
		int32_t L_52 = ((int32_t)il2cpp_codegen_add((int32_t)L_51, (int32_t)1));
		int32_t L_53 = (L_50)->GetAt(static_cast<il2cpp_array_size_t>(L_52));
		V_4 = ((int32_t)((int32_t)L_49>>(int32_t)((int32_t)((int32_t)L_53&(int32_t)((int32_t)31)))));
		int32_t L_54 = V_5;
		Int32U5BU5D_t385246372* L_55 = V_1;
		int32_t L_56 = V_15;
		NullCheck(L_55);
		int32_t L_57 = ((int32_t)il2cpp_codegen_add((int32_t)L_56, (int32_t)1));
		int32_t L_58 = (L_55)->GetAt(static_cast<il2cpp_array_size_t>(L_57));
		V_5 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_54, (int32_t)L_58));
		InflateBlocks_t4119258979 * L_59 = ___s6;
		NullCheck(L_59);
		ByteU5BU5D_t4116647657* L_60 = L_59->get_window_14();
		int32_t L_61 = V_8;
		int32_t L_62 = L_61;
		V_8 = ((int32_t)il2cpp_codegen_add((int32_t)L_62, (int32_t)1));
		Int32U5BU5D_t385246372* L_63 = V_1;
		int32_t L_64 = V_15;
		NullCheck(L_63);
		int32_t L_65 = ((int32_t)il2cpp_codegen_add((int32_t)L_64, (int32_t)2));
		int32_t L_66 = (L_63)->GetAt(static_cast<il2cpp_array_size_t>(L_65));
		NullCheck(L_60);
		(L_60)->SetAt(static_cast<il2cpp_array_size_t>(L_62), (uint8_t)(((int32_t)((uint8_t)L_66))));
		int32_t L_67 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_67, (int32_t)1));
		goto IL_062b;
	}

IL_00fb:
	{
		int32_t L_68 = V_4;
		Int32U5BU5D_t385246372* L_69 = V_1;
		int32_t L_70 = V_15;
		NullCheck(L_69);
		int32_t L_71 = ((int32_t)il2cpp_codegen_add((int32_t)L_70, (int32_t)1));
		int32_t L_72 = (L_69)->GetAt(static_cast<il2cpp_array_size_t>(L_71));
		V_4 = ((int32_t)((int32_t)L_68>>(int32_t)((int32_t)((int32_t)L_72&(int32_t)((int32_t)31)))));
		int32_t L_73 = V_5;
		Int32U5BU5D_t385246372* L_74 = V_1;
		int32_t L_75 = V_15;
		NullCheck(L_74);
		int32_t L_76 = ((int32_t)il2cpp_codegen_add((int32_t)L_75, (int32_t)1));
		int32_t L_77 = (L_74)->GetAt(static_cast<il2cpp_array_size_t>(L_76));
		V_5 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_73, (int32_t)L_77));
		int32_t L_78 = V_3;
		if (!((int32_t)((int32_t)L_78&(int32_t)((int32_t)16))))
		{
			goto IL_049a;
		}
	}
	{
		int32_t L_79 = V_3;
		V_3 = ((int32_t)((int32_t)L_79&(int32_t)((int32_t)15)));
		Int32U5BU5D_t385246372* L_80 = V_1;
		int32_t L_81 = V_15;
		NullCheck(L_80);
		int32_t L_82 = ((int32_t)il2cpp_codegen_add((int32_t)L_81, (int32_t)2));
		int32_t L_83 = (L_80)->GetAt(static_cast<il2cpp_array_size_t>(L_82));
		int32_t L_84 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(InternalInflateConstants_t2469443330_il2cpp_TypeInfo_var);
		Int32U5BU5D_t385246372* L_85 = ((InternalInflateConstants_t2469443330_StaticFields*)il2cpp_codegen_static_fields_for(InternalInflateConstants_t2469443330_il2cpp_TypeInfo_var))->get_InflateMask_0();
		int32_t L_86 = V_3;
		NullCheck(L_85);
		int32_t L_87 = L_86;
		int32_t L_88 = (L_85)->GetAt(static_cast<il2cpp_array_size_t>(L_87));
		V_12 = ((int32_t)il2cpp_codegen_add((int32_t)L_83, (int32_t)((int32_t)((int32_t)L_84&(int32_t)L_88))));
		int32_t L_89 = V_4;
		int32_t L_90 = V_3;
		V_4 = ((int32_t)((int32_t)L_89>>(int32_t)((int32_t)((int32_t)L_90&(int32_t)((int32_t)31)))));
		int32_t L_91 = V_5;
		int32_t L_92 = V_3;
		V_5 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_91, (int32_t)L_92));
		goto IL_0175;
	}

IL_0149:
	{
		int32_t L_93 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_93, (int32_t)1));
		int32_t L_94 = V_4;
		ZlibCodec_t855427629 * L_95 = ___z7;
		NullCheck(L_95);
		ByteU5BU5D_t4116647657* L_96 = L_95->get_InputBuffer_0();
		int32_t L_97 = V_6;
		int32_t L_98 = L_97;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_98, (int32_t)1));
		NullCheck(L_96);
		int32_t L_99 = L_98;
		uint8_t L_100 = (L_96)->GetAt(static_cast<il2cpp_array_size_t>(L_99));
		int32_t L_101 = V_5;
		V_4 = ((int32_t)((int32_t)L_94|(int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_100&(int32_t)((int32_t)255)))<<(int32_t)((int32_t)((int32_t)L_101&(int32_t)((int32_t)31)))))));
		int32_t L_102 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_102, (int32_t)8));
	}

IL_0175:
	{
		int32_t L_103 = V_5;
		if ((((int32_t)L_103) < ((int32_t)((int32_t)15))))
		{
			goto IL_0149;
		}
	}
	{
		int32_t L_104 = V_4;
		int32_t L_105 = V_11;
		V_0 = ((int32_t)((int32_t)L_104&(int32_t)L_105));
		Int32U5BU5D_t385246372* L_106 = ___td4;
		V_1 = L_106;
		int32_t L_107 = ___td_index5;
		V_2 = L_107;
		int32_t L_108 = V_2;
		int32_t L_109 = V_0;
		V_15 = ((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_108, (int32_t)L_109)), (int32_t)3));
		Int32U5BU5D_t385246372* L_110 = V_1;
		int32_t L_111 = V_15;
		NullCheck(L_110);
		int32_t L_112 = L_111;
		int32_t L_113 = (L_110)->GetAt(static_cast<il2cpp_array_size_t>(L_112));
		V_3 = L_113;
	}

IL_0196:
	{
		int32_t L_114 = V_4;
		Int32U5BU5D_t385246372* L_115 = V_1;
		int32_t L_116 = V_15;
		NullCheck(L_115);
		int32_t L_117 = ((int32_t)il2cpp_codegen_add((int32_t)L_116, (int32_t)1));
		int32_t L_118 = (L_115)->GetAt(static_cast<il2cpp_array_size_t>(L_117));
		V_4 = ((int32_t)((int32_t)L_114>>(int32_t)((int32_t)((int32_t)L_118&(int32_t)((int32_t)31)))));
		int32_t L_119 = V_5;
		Int32U5BU5D_t385246372* L_120 = V_1;
		int32_t L_121 = V_15;
		NullCheck(L_120);
		int32_t L_122 = ((int32_t)il2cpp_codegen_add((int32_t)L_121, (int32_t)1));
		int32_t L_123 = (L_120)->GetAt(static_cast<il2cpp_array_size_t>(L_122));
		V_5 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_119, (int32_t)L_123));
		int32_t L_124 = V_3;
		if (!((int32_t)((int32_t)L_124&(int32_t)((int32_t)16))))
		{
			goto IL_03d0;
		}
	}
	{
		int32_t L_125 = V_3;
		V_3 = ((int32_t)((int32_t)L_125&(int32_t)((int32_t)15)));
		goto IL_01ee;
	}

IL_01c2:
	{
		int32_t L_126 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_126, (int32_t)1));
		int32_t L_127 = V_4;
		ZlibCodec_t855427629 * L_128 = ___z7;
		NullCheck(L_128);
		ByteU5BU5D_t4116647657* L_129 = L_128->get_InputBuffer_0();
		int32_t L_130 = V_6;
		int32_t L_131 = L_130;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_131, (int32_t)1));
		NullCheck(L_129);
		int32_t L_132 = L_131;
		uint8_t L_133 = (L_129)->GetAt(static_cast<il2cpp_array_size_t>(L_132));
		int32_t L_134 = V_5;
		V_4 = ((int32_t)((int32_t)L_127|(int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_133&(int32_t)((int32_t)255)))<<(int32_t)((int32_t)((int32_t)L_134&(int32_t)((int32_t)31)))))));
		int32_t L_135 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_135, (int32_t)8));
	}

IL_01ee:
	{
		int32_t L_136 = V_5;
		int32_t L_137 = V_3;
		if ((((int32_t)L_136) < ((int32_t)L_137)))
		{
			goto IL_01c2;
		}
	}
	{
		Int32U5BU5D_t385246372* L_138 = V_1;
		int32_t L_139 = V_15;
		NullCheck(L_138);
		int32_t L_140 = ((int32_t)il2cpp_codegen_add((int32_t)L_139, (int32_t)2));
		int32_t L_141 = (L_138)->GetAt(static_cast<il2cpp_array_size_t>(L_140));
		int32_t L_142 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(InternalInflateConstants_t2469443330_il2cpp_TypeInfo_var);
		Int32U5BU5D_t385246372* L_143 = ((InternalInflateConstants_t2469443330_StaticFields*)il2cpp_codegen_static_fields_for(InternalInflateConstants_t2469443330_il2cpp_TypeInfo_var))->get_InflateMask_0();
		int32_t L_144 = V_3;
		NullCheck(L_143);
		int32_t L_145 = L_144;
		int32_t L_146 = (L_143)->GetAt(static_cast<il2cpp_array_size_t>(L_145));
		V_13 = ((int32_t)il2cpp_codegen_add((int32_t)L_141, (int32_t)((int32_t)((int32_t)L_142&(int32_t)L_146))));
		int32_t L_147 = V_4;
		int32_t L_148 = V_3;
		V_4 = ((int32_t)((int32_t)L_147>>(int32_t)((int32_t)((int32_t)L_148&(int32_t)((int32_t)31)))));
		int32_t L_149 = V_5;
		int32_t L_150 = V_3;
		V_5 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_149, (int32_t)L_150));
		int32_t L_151 = V_9;
		int32_t L_152 = V_12;
		V_9 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_151, (int32_t)L_152));
		int32_t L_153 = V_8;
		int32_t L_154 = V_13;
		if ((((int32_t)L_153) < ((int32_t)L_154)))
		{
			goto IL_02bb;
		}
	}
	{
		int32_t L_155 = V_8;
		int32_t L_156 = V_13;
		V_14 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_155, (int32_t)L_156));
		int32_t L_157 = V_8;
		int32_t L_158 = V_14;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_157, (int32_t)L_158))) <= ((int32_t)0)))
		{
			goto IL_028c;
		}
	}
	{
		int32_t L_159 = V_8;
		int32_t L_160 = V_14;
		if ((((int32_t)2) <= ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_159, (int32_t)L_160)))))
		{
			goto IL_028c;
		}
	}
	{
		InflateBlocks_t4119258979 * L_161 = ___s6;
		NullCheck(L_161);
		ByteU5BU5D_t4116647657* L_162 = L_161->get_window_14();
		int32_t L_163 = V_8;
		int32_t L_164 = L_163;
		V_8 = ((int32_t)il2cpp_codegen_add((int32_t)L_164, (int32_t)1));
		InflateBlocks_t4119258979 * L_165 = ___s6;
		NullCheck(L_165);
		ByteU5BU5D_t4116647657* L_166 = L_165->get_window_14();
		int32_t L_167 = V_14;
		int32_t L_168 = L_167;
		V_14 = ((int32_t)il2cpp_codegen_add((int32_t)L_168, (int32_t)1));
		NullCheck(L_166);
		int32_t L_169 = L_168;
		uint8_t L_170 = (L_166)->GetAt(static_cast<il2cpp_array_size_t>(L_169));
		NullCheck(L_162);
		(L_162)->SetAt(static_cast<il2cpp_array_size_t>(L_164), (uint8_t)L_170);
		InflateBlocks_t4119258979 * L_171 = ___s6;
		NullCheck(L_171);
		ByteU5BU5D_t4116647657* L_172 = L_171->get_window_14();
		int32_t L_173 = V_8;
		int32_t L_174 = L_173;
		V_8 = ((int32_t)il2cpp_codegen_add((int32_t)L_174, (int32_t)1));
		InflateBlocks_t4119258979 * L_175 = ___s6;
		NullCheck(L_175);
		ByteU5BU5D_t4116647657* L_176 = L_175->get_window_14();
		int32_t L_177 = V_14;
		int32_t L_178 = L_177;
		V_14 = ((int32_t)il2cpp_codegen_add((int32_t)L_178, (int32_t)1));
		NullCheck(L_176);
		int32_t L_179 = L_178;
		uint8_t L_180 = (L_176)->GetAt(static_cast<il2cpp_array_size_t>(L_179));
		NullCheck(L_172);
		(L_172)->SetAt(static_cast<il2cpp_array_size_t>(L_174), (uint8_t)L_180);
		int32_t L_181 = V_12;
		V_12 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_181, (int32_t)2));
		goto IL_02b6;
	}

IL_028c:
	{
		InflateBlocks_t4119258979 * L_182 = ___s6;
		NullCheck(L_182);
		ByteU5BU5D_t4116647657* L_183 = L_182->get_window_14();
		int32_t L_184 = V_14;
		InflateBlocks_t4119258979 * L_185 = ___s6;
		NullCheck(L_185);
		ByteU5BU5D_t4116647657* L_186 = L_185->get_window_14();
		int32_t L_187 = V_8;
		Array_Copy_m344457298(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_183, L_184, (RuntimeArray *)(RuntimeArray *)L_186, L_187, 2, /*hidden argument*/NULL);
		int32_t L_188 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add((int32_t)L_188, (int32_t)2));
		int32_t L_189 = V_14;
		V_14 = ((int32_t)il2cpp_codegen_add((int32_t)L_189, (int32_t)2));
		int32_t L_190 = V_12;
		V_12 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_190, (int32_t)2));
	}

IL_02b6:
	{
		goto IL_035b;
	}

IL_02bb:
	{
		int32_t L_191 = V_8;
		int32_t L_192 = V_13;
		V_14 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_191, (int32_t)L_192));
	}

IL_02c2:
	{
		int32_t L_193 = V_14;
		InflateBlocks_t4119258979 * L_194 = ___s6;
		NullCheck(L_194);
		int32_t L_195 = L_194->get_end_15();
		V_14 = ((int32_t)il2cpp_codegen_add((int32_t)L_193, (int32_t)L_195));
		int32_t L_196 = V_14;
		if ((((int32_t)L_196) < ((int32_t)0)))
		{
			goto IL_02c2;
		}
	}
	{
		InflateBlocks_t4119258979 * L_197 = ___s6;
		NullCheck(L_197);
		int32_t L_198 = L_197->get_end_15();
		int32_t L_199 = V_14;
		V_3 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_198, (int32_t)L_199));
		int32_t L_200 = V_12;
		int32_t L_201 = V_3;
		if ((((int32_t)L_200) <= ((int32_t)L_201)))
		{
			goto IL_035b;
		}
	}
	{
		int32_t L_202 = V_12;
		int32_t L_203 = V_3;
		V_12 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_202, (int32_t)L_203));
		int32_t L_204 = V_8;
		int32_t L_205 = V_14;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_204, (int32_t)L_205))) <= ((int32_t)0)))
		{
			goto IL_0332;
		}
	}
	{
		int32_t L_206 = V_3;
		int32_t L_207 = V_8;
		int32_t L_208 = V_14;
		if ((((int32_t)L_206) <= ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_207, (int32_t)L_208)))))
		{
			goto IL_0332;
		}
	}

IL_0305:
	{
		InflateBlocks_t4119258979 * L_209 = ___s6;
		NullCheck(L_209);
		ByteU5BU5D_t4116647657* L_210 = L_209->get_window_14();
		int32_t L_211 = V_8;
		int32_t L_212 = L_211;
		V_8 = ((int32_t)il2cpp_codegen_add((int32_t)L_212, (int32_t)1));
		InflateBlocks_t4119258979 * L_213 = ___s6;
		NullCheck(L_213);
		ByteU5BU5D_t4116647657* L_214 = L_213->get_window_14();
		int32_t L_215 = V_14;
		int32_t L_216 = L_215;
		V_14 = ((int32_t)il2cpp_codegen_add((int32_t)L_216, (int32_t)1));
		NullCheck(L_214);
		int32_t L_217 = L_216;
		uint8_t L_218 = (L_214)->GetAt(static_cast<il2cpp_array_size_t>(L_217));
		NullCheck(L_210);
		(L_210)->SetAt(static_cast<il2cpp_array_size_t>(L_212), (uint8_t)L_218);
		int32_t L_219 = V_3;
		int32_t L_220 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_219, (int32_t)1));
		V_3 = L_220;
		if (L_220)
		{
			goto IL_0305;
		}
	}
	{
		goto IL_0358;
	}

IL_0332:
	{
		InflateBlocks_t4119258979 * L_221 = ___s6;
		NullCheck(L_221);
		ByteU5BU5D_t4116647657* L_222 = L_221->get_window_14();
		int32_t L_223 = V_14;
		InflateBlocks_t4119258979 * L_224 = ___s6;
		NullCheck(L_224);
		ByteU5BU5D_t4116647657* L_225 = L_224->get_window_14();
		int32_t L_226 = V_8;
		int32_t L_227 = V_3;
		Array_Copy_m344457298(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_222, L_223, (RuntimeArray *)(RuntimeArray *)L_225, L_226, L_227, /*hidden argument*/NULL);
		int32_t L_228 = V_8;
		int32_t L_229 = V_3;
		V_8 = ((int32_t)il2cpp_codegen_add((int32_t)L_228, (int32_t)L_229));
		int32_t L_230 = V_14;
		int32_t L_231 = V_3;
		V_14 = ((int32_t)il2cpp_codegen_add((int32_t)L_230, (int32_t)L_231));
		V_3 = 0;
	}

IL_0358:
	{
		V_14 = 0;
	}

IL_035b:
	{
		int32_t L_232 = V_8;
		int32_t L_233 = V_14;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_232, (int32_t)L_233))) <= ((int32_t)0)))
		{
			goto IL_03a1;
		}
	}
	{
		int32_t L_234 = V_12;
		int32_t L_235 = V_8;
		int32_t L_236 = V_14;
		if ((((int32_t)L_234) <= ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_235, (int32_t)L_236)))))
		{
			goto IL_03a1;
		}
	}

IL_0372:
	{
		InflateBlocks_t4119258979 * L_237 = ___s6;
		NullCheck(L_237);
		ByteU5BU5D_t4116647657* L_238 = L_237->get_window_14();
		int32_t L_239 = V_8;
		int32_t L_240 = L_239;
		V_8 = ((int32_t)il2cpp_codegen_add((int32_t)L_240, (int32_t)1));
		InflateBlocks_t4119258979 * L_241 = ___s6;
		NullCheck(L_241);
		ByteU5BU5D_t4116647657* L_242 = L_241->get_window_14();
		int32_t L_243 = V_14;
		int32_t L_244 = L_243;
		V_14 = ((int32_t)il2cpp_codegen_add((int32_t)L_244, (int32_t)1));
		NullCheck(L_242);
		int32_t L_245 = L_244;
		uint8_t L_246 = (L_242)->GetAt(static_cast<il2cpp_array_size_t>(L_245));
		NullCheck(L_238);
		(L_238)->SetAt(static_cast<il2cpp_array_size_t>(L_240), (uint8_t)L_246);
		int32_t L_247 = V_12;
		int32_t L_248 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_247, (int32_t)1));
		V_12 = L_248;
		if (L_248)
		{
			goto IL_0372;
		}
	}
	{
		goto IL_03cb;
	}

IL_03a1:
	{
		InflateBlocks_t4119258979 * L_249 = ___s6;
		NullCheck(L_249);
		ByteU5BU5D_t4116647657* L_250 = L_249->get_window_14();
		int32_t L_251 = V_14;
		InflateBlocks_t4119258979 * L_252 = ___s6;
		NullCheck(L_252);
		ByteU5BU5D_t4116647657* L_253 = L_252->get_window_14();
		int32_t L_254 = V_8;
		int32_t L_255 = V_12;
		Array_Copy_m344457298(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_250, L_251, (RuntimeArray *)(RuntimeArray *)L_253, L_254, L_255, /*hidden argument*/NULL);
		int32_t L_256 = V_8;
		int32_t L_257 = V_12;
		V_8 = ((int32_t)il2cpp_codegen_add((int32_t)L_256, (int32_t)L_257));
		int32_t L_258 = V_14;
		int32_t L_259 = V_12;
		V_14 = ((int32_t)il2cpp_codegen_add((int32_t)L_258, (int32_t)L_259));
		V_12 = 0;
	}

IL_03cb:
	{
		goto IL_0495;
	}

IL_03d0:
	{
		int32_t L_260 = V_3;
		if (((int32_t)((int32_t)L_260&(int32_t)((int32_t)64))))
		{
			goto IL_0400;
		}
	}
	{
		int32_t L_261 = V_0;
		Int32U5BU5D_t385246372* L_262 = V_1;
		int32_t L_263 = V_15;
		NullCheck(L_262);
		int32_t L_264 = ((int32_t)il2cpp_codegen_add((int32_t)L_263, (int32_t)2));
		int32_t L_265 = (L_262)->GetAt(static_cast<il2cpp_array_size_t>(L_264));
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_261, (int32_t)L_265));
		int32_t L_266 = V_0;
		int32_t L_267 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(InternalInflateConstants_t2469443330_il2cpp_TypeInfo_var);
		Int32U5BU5D_t385246372* L_268 = ((InternalInflateConstants_t2469443330_StaticFields*)il2cpp_codegen_static_fields_for(InternalInflateConstants_t2469443330_il2cpp_TypeInfo_var))->get_InflateMask_0();
		int32_t L_269 = V_3;
		NullCheck(L_268);
		int32_t L_270 = L_269;
		int32_t L_271 = (L_268)->GetAt(static_cast<il2cpp_array_size_t>(L_270));
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_266, (int32_t)((int32_t)((int32_t)L_267&(int32_t)L_271))));
		int32_t L_272 = V_2;
		int32_t L_273 = V_0;
		V_15 = ((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_272, (int32_t)L_273)), (int32_t)3));
		Int32U5BU5D_t385246372* L_274 = V_1;
		int32_t L_275 = V_15;
		NullCheck(L_274);
		int32_t L_276 = L_275;
		int32_t L_277 = (L_274)->GetAt(static_cast<il2cpp_array_size_t>(L_276));
		V_3 = L_277;
		goto IL_0490;
	}

IL_0400:
	{
		ZlibCodec_t855427629 * L_278 = ___z7;
		NullCheck(L_278);
		L_278->set_Message_8(_stringLiteral2190778985);
		ZlibCodec_t855427629 * L_279 = ___z7;
		NullCheck(L_279);
		int32_t L_280 = L_279->get_AvailableBytesIn_2();
		int32_t L_281 = V_7;
		V_12 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_280, (int32_t)L_281));
		int32_t L_282 = V_5;
		int32_t L_283 = V_12;
		if ((((int32_t)((int32_t)((int32_t)L_282>>(int32_t)3))) >= ((int32_t)L_283)))
		{
			goto IL_042c;
		}
	}
	{
		int32_t L_284 = V_5;
		G_B44_0 = ((int32_t)((int32_t)L_284>>(int32_t)3));
		goto IL_042e;
	}

IL_042c:
	{
		int32_t L_285 = V_12;
		G_B44_0 = L_285;
	}

IL_042e:
	{
		V_12 = G_B44_0;
		int32_t L_286 = V_7;
		int32_t L_287 = V_12;
		V_7 = ((int32_t)il2cpp_codegen_add((int32_t)L_286, (int32_t)L_287));
		int32_t L_288 = V_6;
		int32_t L_289 = V_12;
		V_6 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_288, (int32_t)L_289));
		int32_t L_290 = V_5;
		int32_t L_291 = V_12;
		V_5 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_290, (int32_t)((int32_t)((int32_t)L_291<<(int32_t)3))));
		InflateBlocks_t4119258979 * L_292 = ___s6;
		int32_t L_293 = V_4;
		NullCheck(L_292);
		L_292->set_bitb_12(L_293);
		InflateBlocks_t4119258979 * L_294 = ___s6;
		int32_t L_295 = V_5;
		NullCheck(L_294);
		L_294->set_bitk_11(L_295);
		ZlibCodec_t855427629 * L_296 = ___z7;
		int32_t L_297 = V_7;
		NullCheck(L_296);
		L_296->set_AvailableBytesIn_2(L_297);
		ZlibCodec_t855427629 * L_298 = ___z7;
		ZlibCodec_t855427629 * L_299 = L_298;
		NullCheck(L_299);
		int64_t L_300 = L_299->get_TotalBytesIn_3();
		int32_t L_301 = V_6;
		ZlibCodec_t855427629 * L_302 = ___z7;
		NullCheck(L_302);
		int32_t L_303 = L_302->get_NextIn_1();
		NullCheck(L_299);
		L_299->set_TotalBytesIn_3(((int64_t)il2cpp_codegen_add((int64_t)L_300, (int64_t)(((int64_t)((int64_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_301, (int32_t)L_303))))))));
		ZlibCodec_t855427629 * L_304 = ___z7;
		int32_t L_305 = V_6;
		NullCheck(L_304);
		L_304->set_NextIn_1(L_305);
		InflateBlocks_t4119258979 * L_306 = ___s6;
		int32_t L_307 = V_8;
		NullCheck(L_306);
		L_306->set_writeAt_17(L_307);
		return ((int32_t)-3);
	}

IL_0490:
	{
		goto IL_0196;
	}

IL_0495:
	{
		goto IL_062b;
	}

IL_049a:
	{
		int32_t L_308 = V_3;
		if (((int32_t)((int32_t)L_308&(int32_t)((int32_t)64))))
		{
			goto IL_050a;
		}
	}
	{
		int32_t L_309 = V_0;
		Int32U5BU5D_t385246372* L_310 = V_1;
		int32_t L_311 = V_15;
		NullCheck(L_310);
		int32_t L_312 = ((int32_t)il2cpp_codegen_add((int32_t)L_311, (int32_t)2));
		int32_t L_313 = (L_310)->GetAt(static_cast<il2cpp_array_size_t>(L_312));
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_309, (int32_t)L_313));
		int32_t L_314 = V_0;
		int32_t L_315 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(InternalInflateConstants_t2469443330_il2cpp_TypeInfo_var);
		Int32U5BU5D_t385246372* L_316 = ((InternalInflateConstants_t2469443330_StaticFields*)il2cpp_codegen_static_fields_for(InternalInflateConstants_t2469443330_il2cpp_TypeInfo_var))->get_InflateMask_0();
		int32_t L_317 = V_3;
		NullCheck(L_316);
		int32_t L_318 = L_317;
		int32_t L_319 = (L_316)->GetAt(static_cast<il2cpp_array_size_t>(L_318));
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_314, (int32_t)((int32_t)((int32_t)L_315&(int32_t)L_319))));
		int32_t L_320 = V_2;
		int32_t L_321 = V_0;
		V_15 = ((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_320, (int32_t)L_321)), (int32_t)3));
		Int32U5BU5D_t385246372* L_322 = V_1;
		int32_t L_323 = V_15;
		NullCheck(L_322);
		int32_t L_324 = L_323;
		int32_t L_325 = (L_322)->GetAt(static_cast<il2cpp_array_size_t>(L_324));
		int32_t L_326 = L_325;
		V_3 = L_326;
		if (L_326)
		{
			goto IL_0505;
		}
	}
	{
		int32_t L_327 = V_4;
		Int32U5BU5D_t385246372* L_328 = V_1;
		int32_t L_329 = V_15;
		NullCheck(L_328);
		int32_t L_330 = ((int32_t)il2cpp_codegen_add((int32_t)L_329, (int32_t)1));
		int32_t L_331 = (L_328)->GetAt(static_cast<il2cpp_array_size_t>(L_330));
		V_4 = ((int32_t)((int32_t)L_327>>(int32_t)((int32_t)((int32_t)L_331&(int32_t)((int32_t)31)))));
		int32_t L_332 = V_5;
		Int32U5BU5D_t385246372* L_333 = V_1;
		int32_t L_334 = V_15;
		NullCheck(L_333);
		int32_t L_335 = ((int32_t)il2cpp_codegen_add((int32_t)L_334, (int32_t)1));
		int32_t L_336 = (L_333)->GetAt(static_cast<il2cpp_array_size_t>(L_335));
		V_5 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_332, (int32_t)L_336));
		InflateBlocks_t4119258979 * L_337 = ___s6;
		NullCheck(L_337);
		ByteU5BU5D_t4116647657* L_338 = L_337->get_window_14();
		int32_t L_339 = V_8;
		int32_t L_340 = L_339;
		V_8 = ((int32_t)il2cpp_codegen_add((int32_t)L_340, (int32_t)1));
		Int32U5BU5D_t385246372* L_341 = V_1;
		int32_t L_342 = V_15;
		NullCheck(L_341);
		int32_t L_343 = ((int32_t)il2cpp_codegen_add((int32_t)L_342, (int32_t)2));
		int32_t L_344 = (L_341)->GetAt(static_cast<il2cpp_array_size_t>(L_343));
		NullCheck(L_338);
		(L_338)->SetAt(static_cast<il2cpp_array_size_t>(L_340), (uint8_t)(((int32_t)((uint8_t)L_344))));
		int32_t L_345 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_345, (int32_t)1));
		goto IL_062b;
	}

IL_0505:
	{
		goto IL_0626;
	}

IL_050a:
	{
		int32_t L_346 = V_3;
		if (!((int32_t)((int32_t)L_346&(int32_t)((int32_t)32))))
		{
			goto IL_0596;
		}
	}
	{
		ZlibCodec_t855427629 * L_347 = ___z7;
		NullCheck(L_347);
		int32_t L_348 = L_347->get_AvailableBytesIn_2();
		int32_t L_349 = V_7;
		V_12 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_348, (int32_t)L_349));
		int32_t L_350 = V_5;
		int32_t L_351 = V_12;
		if ((((int32_t)((int32_t)((int32_t)L_350>>(int32_t)3))) >= ((int32_t)L_351)))
		{
			goto IL_0533;
		}
	}
	{
		int32_t L_352 = V_5;
		G_B55_0 = ((int32_t)((int32_t)L_352>>(int32_t)3));
		goto IL_0535;
	}

IL_0533:
	{
		int32_t L_353 = V_12;
		G_B55_0 = L_353;
	}

IL_0535:
	{
		V_12 = G_B55_0;
		int32_t L_354 = V_7;
		int32_t L_355 = V_12;
		V_7 = ((int32_t)il2cpp_codegen_add((int32_t)L_354, (int32_t)L_355));
		int32_t L_356 = V_6;
		int32_t L_357 = V_12;
		V_6 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_356, (int32_t)L_357));
		int32_t L_358 = V_5;
		int32_t L_359 = V_12;
		V_5 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_358, (int32_t)((int32_t)((int32_t)L_359<<(int32_t)3))));
		InflateBlocks_t4119258979 * L_360 = ___s6;
		int32_t L_361 = V_4;
		NullCheck(L_360);
		L_360->set_bitb_12(L_361);
		InflateBlocks_t4119258979 * L_362 = ___s6;
		int32_t L_363 = V_5;
		NullCheck(L_362);
		L_362->set_bitk_11(L_363);
		ZlibCodec_t855427629 * L_364 = ___z7;
		int32_t L_365 = V_7;
		NullCheck(L_364);
		L_364->set_AvailableBytesIn_2(L_365);
		ZlibCodec_t855427629 * L_366 = ___z7;
		ZlibCodec_t855427629 * L_367 = L_366;
		NullCheck(L_367);
		int64_t L_368 = L_367->get_TotalBytesIn_3();
		int32_t L_369 = V_6;
		ZlibCodec_t855427629 * L_370 = ___z7;
		NullCheck(L_370);
		int32_t L_371 = L_370->get_NextIn_1();
		NullCheck(L_367);
		L_367->set_TotalBytesIn_3(((int64_t)il2cpp_codegen_add((int64_t)L_368, (int64_t)(((int64_t)((int64_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_369, (int32_t)L_371))))))));
		ZlibCodec_t855427629 * L_372 = ___z7;
		int32_t L_373 = V_6;
		NullCheck(L_372);
		L_372->set_NextIn_1(L_373);
		InflateBlocks_t4119258979 * L_374 = ___s6;
		int32_t L_375 = V_8;
		NullCheck(L_374);
		L_374->set_writeAt_17(L_375);
		return 1;
	}

IL_0596:
	{
		ZlibCodec_t855427629 * L_376 = ___z7;
		NullCheck(L_376);
		L_376->set_Message_8(_stringLiteral3064251135);
		ZlibCodec_t855427629 * L_377 = ___z7;
		NullCheck(L_377);
		int32_t L_378 = L_377->get_AvailableBytesIn_2();
		int32_t L_379 = V_7;
		V_12 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_378, (int32_t)L_379));
		int32_t L_380 = V_5;
		int32_t L_381 = V_12;
		if ((((int32_t)((int32_t)((int32_t)L_380>>(int32_t)3))) >= ((int32_t)L_381)))
		{
			goto IL_05c2;
		}
	}
	{
		int32_t L_382 = V_5;
		G_B59_0 = ((int32_t)((int32_t)L_382>>(int32_t)3));
		goto IL_05c4;
	}

IL_05c2:
	{
		int32_t L_383 = V_12;
		G_B59_0 = L_383;
	}

IL_05c4:
	{
		V_12 = G_B59_0;
		int32_t L_384 = V_7;
		int32_t L_385 = V_12;
		V_7 = ((int32_t)il2cpp_codegen_add((int32_t)L_384, (int32_t)L_385));
		int32_t L_386 = V_6;
		int32_t L_387 = V_12;
		V_6 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_386, (int32_t)L_387));
		int32_t L_388 = V_5;
		int32_t L_389 = V_12;
		V_5 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_388, (int32_t)((int32_t)((int32_t)L_389<<(int32_t)3))));
		InflateBlocks_t4119258979 * L_390 = ___s6;
		int32_t L_391 = V_4;
		NullCheck(L_390);
		L_390->set_bitb_12(L_391);
		InflateBlocks_t4119258979 * L_392 = ___s6;
		int32_t L_393 = V_5;
		NullCheck(L_392);
		L_392->set_bitk_11(L_393);
		ZlibCodec_t855427629 * L_394 = ___z7;
		int32_t L_395 = V_7;
		NullCheck(L_394);
		L_394->set_AvailableBytesIn_2(L_395);
		ZlibCodec_t855427629 * L_396 = ___z7;
		ZlibCodec_t855427629 * L_397 = L_396;
		NullCheck(L_397);
		int64_t L_398 = L_397->get_TotalBytesIn_3();
		int32_t L_399 = V_6;
		ZlibCodec_t855427629 * L_400 = ___z7;
		NullCheck(L_400);
		int32_t L_401 = L_400->get_NextIn_1();
		NullCheck(L_397);
		L_397->set_TotalBytesIn_3(((int64_t)il2cpp_codegen_add((int64_t)L_398, (int64_t)(((int64_t)((int64_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_399, (int32_t)L_401))))))));
		ZlibCodec_t855427629 * L_402 = ___z7;
		int32_t L_403 = V_6;
		NullCheck(L_402);
		L_402->set_NextIn_1(L_403);
		InflateBlocks_t4119258979 * L_404 = ___s6;
		int32_t L_405 = V_8;
		NullCheck(L_404);
		L_404->set_writeAt_17(L_405);
		return ((int32_t)-3);
	}

IL_0626:
	{
		goto IL_00fb;
	}

IL_062b:
	{
		int32_t L_406 = V_9;
		if ((((int32_t)L_406) < ((int32_t)((int32_t)258))))
		{
			goto IL_0640;
		}
	}
	{
		int32_t L_407 = V_7;
		if ((((int32_t)L_407) >= ((int32_t)((int32_t)10))))
		{
			goto IL_006a;
		}
	}

IL_0640:
	{
		ZlibCodec_t855427629 * L_408 = ___z7;
		NullCheck(L_408);
		int32_t L_409 = L_408->get_AvailableBytesIn_2();
		int32_t L_410 = V_7;
		V_12 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_409, (int32_t)L_410));
		int32_t L_411 = V_5;
		int32_t L_412 = V_12;
		if ((((int32_t)((int32_t)((int32_t)L_411>>(int32_t)3))) >= ((int32_t)L_412)))
		{
			goto IL_0660;
		}
	}
	{
		int32_t L_413 = V_5;
		G_B66_0 = ((int32_t)((int32_t)L_413>>(int32_t)3));
		goto IL_0662;
	}

IL_0660:
	{
		int32_t L_414 = V_12;
		G_B66_0 = L_414;
	}

IL_0662:
	{
		V_12 = G_B66_0;
		int32_t L_415 = V_7;
		int32_t L_416 = V_12;
		V_7 = ((int32_t)il2cpp_codegen_add((int32_t)L_415, (int32_t)L_416));
		int32_t L_417 = V_6;
		int32_t L_418 = V_12;
		V_6 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_417, (int32_t)L_418));
		int32_t L_419 = V_5;
		int32_t L_420 = V_12;
		V_5 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_419, (int32_t)((int32_t)((int32_t)L_420<<(int32_t)3))));
		InflateBlocks_t4119258979 * L_421 = ___s6;
		int32_t L_422 = V_4;
		NullCheck(L_421);
		L_421->set_bitb_12(L_422);
		InflateBlocks_t4119258979 * L_423 = ___s6;
		int32_t L_424 = V_5;
		NullCheck(L_423);
		L_423->set_bitk_11(L_424);
		ZlibCodec_t855427629 * L_425 = ___z7;
		int32_t L_426 = V_7;
		NullCheck(L_425);
		L_425->set_AvailableBytesIn_2(L_426);
		ZlibCodec_t855427629 * L_427 = ___z7;
		ZlibCodec_t855427629 * L_428 = L_427;
		NullCheck(L_428);
		int64_t L_429 = L_428->get_TotalBytesIn_3();
		int32_t L_430 = V_6;
		ZlibCodec_t855427629 * L_431 = ___z7;
		NullCheck(L_431);
		int32_t L_432 = L_431->get_NextIn_1();
		NullCheck(L_428);
		L_428->set_TotalBytesIn_3(((int64_t)il2cpp_codegen_add((int64_t)L_429, (int64_t)(((int64_t)((int64_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_430, (int32_t)L_432))))))));
		ZlibCodec_t855427629 * L_433 = ___z7;
		int32_t L_434 = V_6;
		NullCheck(L_433);
		L_433->set_NextIn_1(L_434);
		InflateBlocks_t4119258979 * L_435 = ___s6;
		int32_t L_436 = V_8;
		NullCheck(L_435);
		L_435->set_writeAt_17(L_436);
		return 0;
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
// System.Void Pathfinding.Ionic.Zlib.InflateManager::.ctor(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void InflateManager__ctor_m300537653 (InflateManager_t3682621372 * __this, bool ___expectRfc1950HeaderBytes0, const RuntimeMethod* method)
{
	{
		__this->set__handleRfc1950HeaderBytes_6((bool)1);
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		bool L_0 = ___expectRfc1950HeaderBytes0;
		__this->set__handleRfc1950HeaderBytes_6(L_0);
		return;
	}
}
// System.Void Pathfinding.Ionic.Zlib.InflateManager::.cctor()
extern "C" IL2CPP_METHOD_ATTR void InflateManager__cctor_m1438856959 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InflateManager__cctor_m1438856959_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_t4116647657* L_0 = (ByteU5BU5D_t4116647657*)SZArrayNew(ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var, (uint32_t)4);
		ByteU5BU5D_t4116647657* L_1 = L_0;
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(2), (uint8_t)((int32_t)255));
		ByteU5BU5D_t4116647657* L_2 = L_1;
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(3), (uint8_t)((int32_t)255));
		((InflateManager_t3682621372_StaticFields*)il2cpp_codegen_static_fields_for(InflateManager_t3682621372_il2cpp_TypeInfo_var))->set_mark_9(L_2);
		return;
	}
}
// System.Boolean Pathfinding.Ionic.Zlib.InflateManager::get_HandleRfc1950HeaderBytes()
extern "C" IL2CPP_METHOD_ATTR bool InflateManager_get_HandleRfc1950HeaderBytes_m1575042719 (InflateManager_t3682621372 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get__handleRfc1950HeaderBytes_6();
		return L_0;
	}
}
// System.Int32 Pathfinding.Ionic.Zlib.InflateManager::Reset()
extern "C" IL2CPP_METHOD_ATTR int32_t InflateManager_Reset_m1165359945 (InflateManager_t3682621372 * __this, const RuntimeMethod* method)
{
	int64_t V_0 = 0;
	InflateManager_t3682621372 * G_B2_0 = NULL;
	InflateManager_t3682621372 * G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	InflateManager_t3682621372 * G_B3_1 = NULL;
	{
		ZlibCodec_t855427629 * L_0 = __this->get__codec_1();
		ZlibCodec_t855427629 * L_1 = __this->get__codec_1();
		int64_t L_2 = (((int64_t)((int64_t)0)));
		V_0 = L_2;
		NullCheck(L_1);
		L_1->set_TotalBytesOut_7(L_2);
		int64_t L_3 = V_0;
		NullCheck(L_0);
		L_0->set_TotalBytesIn_3(L_3);
		ZlibCodec_t855427629 * L_4 = __this->get__codec_1();
		NullCheck(L_4);
		L_4->set_Message_8((String_t*)NULL);
		bool L_5 = InflateManager_get_HandleRfc1950HeaderBytes_m1575042719(__this, /*hidden argument*/NULL);
		G_B1_0 = __this;
		if (!L_5)
		{
			G_B2_0 = __this;
			goto IL_0039;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		goto IL_003a;
	}

IL_0039:
	{
		G_B3_0 = 7;
		G_B3_1 = G_B2_0;
	}

IL_003a:
	{
		NullCheck(G_B3_1);
		G_B3_1->set_mode_0(G_B3_0);
		InflateBlocks_t4119258979 * L_6 = __this->get_blocks_8();
		NullCheck(L_6);
		InflateBlocks_Reset_m1167299319(L_6, /*hidden argument*/NULL);
		return 0;
	}
}
// System.Int32 Pathfinding.Ionic.Zlib.InflateManager::End()
extern "C" IL2CPP_METHOD_ATTR int32_t InflateManager_End_m1674991333 (InflateManager_t3682621372 * __this, const RuntimeMethod* method)
{
	{
		InflateBlocks_t4119258979 * L_0 = __this->get_blocks_8();
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		InflateBlocks_t4119258979 * L_1 = __this->get_blocks_8();
		NullCheck(L_1);
		InflateBlocks_Free_m244881793(L_1, /*hidden argument*/NULL);
	}

IL_0016:
	{
		__this->set_blocks_8((InflateBlocks_t4119258979 *)NULL);
		return 0;
	}
}
// System.Int32 Pathfinding.Ionic.Zlib.InflateManager::Initialize(Pathfinding.Ionic.Zlib.ZlibCodec,System.Int32)
extern "C" IL2CPP_METHOD_ATTR int32_t InflateManager_Initialize_m1637778925 (InflateManager_t3682621372 * __this, ZlibCodec_t855427629 * ___codec0, int32_t ___w1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InflateManager_Initialize_m1637778925_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ZlibCodec_t855427629 * G_B5_0 = NULL;
	InflateManager_t3682621372 * G_B5_1 = NULL;
	ZlibCodec_t855427629 * G_B4_0 = NULL;
	InflateManager_t3682621372 * G_B4_1 = NULL;
	InflateManager_t3682621372 * G_B6_0 = NULL;
	ZlibCodec_t855427629 * G_B6_1 = NULL;
	InflateManager_t3682621372 * G_B6_2 = NULL;
	{
		ZlibCodec_t855427629 * L_0 = ___codec0;
		__this->set__codec_1(L_0);
		ZlibCodec_t855427629 * L_1 = __this->get__codec_1();
		NullCheck(L_1);
		L_1->set_Message_8((String_t*)NULL);
		__this->set_blocks_8((InflateBlocks_t4119258979 *)NULL);
		int32_t L_2 = ___w1;
		if ((((int32_t)L_2) < ((int32_t)8)))
		{
			goto IL_0029;
		}
	}
	{
		int32_t L_3 = ___w1;
		if ((((int32_t)L_3) <= ((int32_t)((int32_t)15))))
		{
			goto IL_003b;
		}
	}

IL_0029:
	{
		InflateManager_End_m1674991333(__this, /*hidden argument*/NULL);
		ZlibException_t3942143964 * L_4 = (ZlibException_t3942143964 *)il2cpp_codegen_object_new(ZlibException_t3942143964_il2cpp_TypeInfo_var);
		ZlibException__ctor_m1084687637(L_4, _stringLiteral2773167031, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, NULL, InflateManager_Initialize_m1637778925_RuntimeMethod_var);
	}

IL_003b:
	{
		int32_t L_5 = ___w1;
		__this->set_wbits_7(L_5);
		ZlibCodec_t855427629 * L_6 = ___codec0;
		bool L_7 = InflateManager_get_HandleRfc1950HeaderBytes_m1575042719(__this, /*hidden argument*/NULL);
		G_B4_0 = L_6;
		G_B4_1 = __this;
		if (!L_7)
		{
			G_B5_0 = L_6;
			G_B5_1 = __this;
			goto IL_0055;
		}
	}
	{
		G_B6_0 = __this;
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		goto IL_0056;
	}

IL_0055:
	{
		G_B6_0 = ((InflateManager_t3682621372 *)(NULL));
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
	}

IL_0056:
	{
		int32_t L_8 = ___w1;
		InflateBlocks_t4119258979 * L_9 = (InflateBlocks_t4119258979 *)il2cpp_codegen_object_new(InflateBlocks_t4119258979_il2cpp_TypeInfo_var);
		InflateBlocks__ctor_m1052329913(L_9, G_B6_1, G_B6_0, ((int32_t)((int32_t)1<<(int32_t)((int32_t)((int32_t)L_8&(int32_t)((int32_t)31))))), /*hidden argument*/NULL);
		NullCheck(G_B6_2);
		G_B6_2->set_blocks_8(L_9);
		InflateManager_Reset_m1165359945(__this, /*hidden argument*/NULL);
		return 0;
	}
}
// System.Int32 Pathfinding.Ionic.Zlib.InflateManager::Inflate(Pathfinding.Ionic.Zlib.FlushType)
extern "C" IL2CPP_METHOD_ATTR int32_t InflateManager_Inflate_m4163498486 (InflateManager_t3682621372 * __this, int32_t ___flush0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InflateManager_Inflate_m4163498486_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	InflateManager_t3682621372 * G_B18_0 = NULL;
	InflateManager_t3682621372 * G_B17_0 = NULL;
	int32_t G_B19_0 = 0;
	InflateManager_t3682621372 * G_B19_1 = NULL;
	{
		ZlibCodec_t855427629 * L_0 = __this->get__codec_1();
		NullCheck(L_0);
		ByteU5BU5D_t4116647657* L_1 = L_0->get_InputBuffer_0();
		if (L_1)
		{
			goto IL_001b;
		}
	}
	{
		ZlibException_t3942143964 * L_2 = (ZlibException_t3942143964 *)il2cpp_codegen_object_new(ZlibException_t3942143964_il2cpp_TypeInfo_var);
		ZlibException__ctor_m1084687637(L_2, _stringLiteral2599125110, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, NULL, InflateManager_Inflate_m4163498486_RuntimeMethod_var);
	}

IL_001b:
	{
		V_1 = 0;
		V_2 = ((int32_t)-5);
	}

IL_0020:
	{
		int32_t L_3 = __this->get_mode_0();
		V_3 = L_3;
		int32_t L_4 = V_3;
		switch (L_4)
		{
			case 0:
			{
				goto IL_006a;
			}
			case 1:
			{
				goto IL_016a;
			}
			case 2:
			{
				goto IL_0221;
			}
			case 3:
			{
				goto IL_029e;
			}
			case 4:
			{
				goto IL_031f;
			}
			case 5:
			{
				goto IL_039f;
			}
			case 6:
			{
				goto IL_042b;
			}
			case 7:
			{
				goto IL_044d;
			}
			case 8:
			{
				goto IL_04bb;
			}
			case 9:
			{
				goto IL_0539;
			}
			case 10:
			{
				goto IL_05bb;
			}
			case 11:
			{
				goto IL_063c;
			}
			case 12:
			{
				goto IL_06ed;
			}
			case 13:
			{
				goto IL_06ef;
			}
		}
	}
	{
		goto IL_070a;
	}

IL_006a:
	{
		ZlibCodec_t855427629 * L_5 = __this->get__codec_1();
		NullCheck(L_5);
		int32_t L_6 = L_5->get_AvailableBytesIn_2();
		if (L_6)
		{
			goto IL_007c;
		}
	}
	{
		int32_t L_7 = V_2;
		return L_7;
	}

IL_007c:
	{
		int32_t L_8 = V_1;
		V_2 = L_8;
		ZlibCodec_t855427629 * L_9 = __this->get__codec_1();
		ZlibCodec_t855427629 * L_10 = L_9;
		NullCheck(L_10);
		int32_t L_11 = L_10->get_AvailableBytesIn_2();
		NullCheck(L_10);
		L_10->set_AvailableBytesIn_2(((int32_t)il2cpp_codegen_subtract((int32_t)L_11, (int32_t)1)));
		ZlibCodec_t855427629 * L_12 = __this->get__codec_1();
		ZlibCodec_t855427629 * L_13 = L_12;
		NullCheck(L_13);
		int64_t L_14 = L_13->get_TotalBytesIn_3();
		NullCheck(L_13);
		L_13->set_TotalBytesIn_3(((int64_t)il2cpp_codegen_add((int64_t)L_14, (int64_t)(((int64_t)((int64_t)1))))));
		ZlibCodec_t855427629 * L_15 = __this->get__codec_1();
		NullCheck(L_15);
		ByteU5BU5D_t4116647657* L_16 = L_15->get_InputBuffer_0();
		ZlibCodec_t855427629 * L_17 = __this->get__codec_1();
		ZlibCodec_t855427629 * L_18 = L_17;
		NullCheck(L_18);
		int32_t L_19 = L_18->get_NextIn_1();
		int32_t L_20 = L_19;
		V_4 = L_20;
		NullCheck(L_18);
		L_18->set_NextIn_1(((int32_t)il2cpp_codegen_add((int32_t)L_20, (int32_t)1)));
		int32_t L_21 = V_4;
		NullCheck(L_16);
		int32_t L_22 = L_21;
		uint8_t L_23 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		uint8_t L_24 = L_23;
		V_4 = L_24;
		__this->set_method_2(L_24);
		int32_t L_25 = V_4;
		if ((((int32_t)((int32_t)((int32_t)L_25&(int32_t)((int32_t)15)))) == ((int32_t)8)))
		{
			goto IL_0111;
		}
	}
	{
		__this->set_mode_0(((int32_t)13));
		ZlibCodec_t855427629 * L_26 = __this->get__codec_1();
		int32_t L_27 = __this->get_method_2();
		int32_t L_28 = L_27;
		RuntimeObject * L_29 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_28);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_30 = String_Format_m2844511972(NULL /*static, unused*/, _stringLiteral2732742904, L_29, /*hidden argument*/NULL);
		NullCheck(L_26);
		L_26->set_Message_8(L_30);
		__this->set_marker_5(5);
		goto IL_0715;
	}

IL_0111:
	{
		int32_t L_31 = __this->get_method_2();
		int32_t L_32 = __this->get_wbits_7();
		if ((((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)((int32_t)L_31>>(int32_t)4)), (int32_t)8))) <= ((int32_t)L_32)))
		{
			goto IL_015e;
		}
	}
	{
		__this->set_mode_0(((int32_t)13));
		ZlibCodec_t855427629 * L_33 = __this->get__codec_1();
		int32_t L_34 = __this->get_method_2();
		int32_t L_35 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)((int32_t)L_34>>(int32_t)4)), (int32_t)8));
		RuntimeObject * L_36 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_35);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_37 = String_Format_m2844511972(NULL /*static, unused*/, _stringLiteral80935222, L_36, /*hidden argument*/NULL);
		NullCheck(L_33);
		L_33->set_Message_8(L_37);
		__this->set_marker_5(5);
		goto IL_0715;
	}

IL_015e:
	{
		__this->set_mode_0(1);
		goto IL_0715;
	}

IL_016a:
	{
		ZlibCodec_t855427629 * L_38 = __this->get__codec_1();
		NullCheck(L_38);
		int32_t L_39 = L_38->get_AvailableBytesIn_2();
		if (L_39)
		{
			goto IL_017c;
		}
	}
	{
		int32_t L_40 = V_2;
		return L_40;
	}

IL_017c:
	{
		int32_t L_41 = V_1;
		V_2 = L_41;
		ZlibCodec_t855427629 * L_42 = __this->get__codec_1();
		ZlibCodec_t855427629 * L_43 = L_42;
		NullCheck(L_43);
		int32_t L_44 = L_43->get_AvailableBytesIn_2();
		NullCheck(L_43);
		L_43->set_AvailableBytesIn_2(((int32_t)il2cpp_codegen_subtract((int32_t)L_44, (int32_t)1)));
		ZlibCodec_t855427629 * L_45 = __this->get__codec_1();
		ZlibCodec_t855427629 * L_46 = L_45;
		NullCheck(L_46);
		int64_t L_47 = L_46->get_TotalBytesIn_3();
		NullCheck(L_46);
		L_46->set_TotalBytesIn_3(((int64_t)il2cpp_codegen_add((int64_t)L_47, (int64_t)(((int64_t)((int64_t)1))))));
		ZlibCodec_t855427629 * L_48 = __this->get__codec_1();
		NullCheck(L_48);
		ByteU5BU5D_t4116647657* L_49 = L_48->get_InputBuffer_0();
		ZlibCodec_t855427629 * L_50 = __this->get__codec_1();
		ZlibCodec_t855427629 * L_51 = L_50;
		NullCheck(L_51);
		int32_t L_52 = L_51->get_NextIn_1();
		int32_t L_53 = L_52;
		V_4 = L_53;
		NullCheck(L_51);
		L_51->set_NextIn_1(((int32_t)il2cpp_codegen_add((int32_t)L_53, (int32_t)1)));
		int32_t L_54 = V_4;
		NullCheck(L_49);
		int32_t L_55 = L_54;
		uint8_t L_56 = (L_49)->GetAt(static_cast<il2cpp_array_size_t>(L_55));
		V_0 = ((int32_t)((int32_t)L_56&(int32_t)((int32_t)255)));
		int32_t L_57 = __this->get_method_2();
		int32_t L_58 = V_0;
		if (!((int32_t)((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)((int32_t)L_57<<(int32_t)8)), (int32_t)L_58))%(int32_t)((int32_t)31))))
		{
			goto IL_0206;
		}
	}
	{
		__this->set_mode_0(((int32_t)13));
		ZlibCodec_t855427629 * L_59 = __this->get__codec_1();
		NullCheck(L_59);
		L_59->set_Message_8(_stringLiteral187030262);
		__this->set_marker_5(5);
		goto IL_0715;
	}

IL_0206:
	{
		int32_t L_60 = V_0;
		G_B17_0 = __this;
		if (((int32_t)((int32_t)L_60&(int32_t)((int32_t)32))))
		{
			G_B18_0 = __this;
			goto IL_0216;
		}
	}
	{
		G_B19_0 = 7;
		G_B19_1 = G_B17_0;
		goto IL_0217;
	}

IL_0216:
	{
		G_B19_0 = 2;
		G_B19_1 = G_B18_0;
	}

IL_0217:
	{
		NullCheck(G_B19_1);
		G_B19_1->set_mode_0(G_B19_0);
		goto IL_0715;
	}

IL_0221:
	{
		ZlibCodec_t855427629 * L_61 = __this->get__codec_1();
		NullCheck(L_61);
		int32_t L_62 = L_61->get_AvailableBytesIn_2();
		if (L_62)
		{
			goto IL_0233;
		}
	}
	{
		int32_t L_63 = V_2;
		return L_63;
	}

IL_0233:
	{
		int32_t L_64 = V_1;
		V_2 = L_64;
		ZlibCodec_t855427629 * L_65 = __this->get__codec_1();
		ZlibCodec_t855427629 * L_66 = L_65;
		NullCheck(L_66);
		int32_t L_67 = L_66->get_AvailableBytesIn_2();
		NullCheck(L_66);
		L_66->set_AvailableBytesIn_2(((int32_t)il2cpp_codegen_subtract((int32_t)L_67, (int32_t)1)));
		ZlibCodec_t855427629 * L_68 = __this->get__codec_1();
		ZlibCodec_t855427629 * L_69 = L_68;
		NullCheck(L_69);
		int64_t L_70 = L_69->get_TotalBytesIn_3();
		NullCheck(L_69);
		L_69->set_TotalBytesIn_3(((int64_t)il2cpp_codegen_add((int64_t)L_70, (int64_t)(((int64_t)((int64_t)1))))));
		ZlibCodec_t855427629 * L_71 = __this->get__codec_1();
		NullCheck(L_71);
		ByteU5BU5D_t4116647657* L_72 = L_71->get_InputBuffer_0();
		ZlibCodec_t855427629 * L_73 = __this->get__codec_1();
		ZlibCodec_t855427629 * L_74 = L_73;
		NullCheck(L_74);
		int32_t L_75 = L_74->get_NextIn_1();
		int32_t L_76 = L_75;
		V_4 = L_76;
		NullCheck(L_74);
		L_74->set_NextIn_1(((int32_t)il2cpp_codegen_add((int32_t)L_76, (int32_t)1)));
		int32_t L_77 = V_4;
		NullCheck(L_72);
		int32_t L_78 = L_77;
		uint8_t L_79 = (L_72)->GetAt(static_cast<il2cpp_array_size_t>(L_78));
		__this->set_expectedCheck_4((((int32_t)((uint32_t)((int64_t)((int64_t)(((int64_t)((int64_t)((int32_t)((int32_t)L_79<<(int32_t)((int32_t)24))))))&(int64_t)(((int64_t)((uint64_t)(((uint32_t)((uint32_t)((int32_t)-16777216)))))))))))));
		__this->set_mode_0(3);
		goto IL_0715;
	}

IL_029e:
	{
		ZlibCodec_t855427629 * L_80 = __this->get__codec_1();
		NullCheck(L_80);
		int32_t L_81 = L_80->get_AvailableBytesIn_2();
		if (L_81)
		{
			goto IL_02b0;
		}
	}
	{
		int32_t L_82 = V_2;
		return L_82;
	}

IL_02b0:
	{
		int32_t L_83 = V_1;
		V_2 = L_83;
		ZlibCodec_t855427629 * L_84 = __this->get__codec_1();
		ZlibCodec_t855427629 * L_85 = L_84;
		NullCheck(L_85);
		int32_t L_86 = L_85->get_AvailableBytesIn_2();
		NullCheck(L_85);
		L_85->set_AvailableBytesIn_2(((int32_t)il2cpp_codegen_subtract((int32_t)L_86, (int32_t)1)));
		ZlibCodec_t855427629 * L_87 = __this->get__codec_1();
		ZlibCodec_t855427629 * L_88 = L_87;
		NullCheck(L_88);
		int64_t L_89 = L_88->get_TotalBytesIn_3();
		NullCheck(L_88);
		L_88->set_TotalBytesIn_3(((int64_t)il2cpp_codegen_add((int64_t)L_89, (int64_t)(((int64_t)((int64_t)1))))));
		uint32_t L_90 = __this->get_expectedCheck_4();
		ZlibCodec_t855427629 * L_91 = __this->get__codec_1();
		NullCheck(L_91);
		ByteU5BU5D_t4116647657* L_92 = L_91->get_InputBuffer_0();
		ZlibCodec_t855427629 * L_93 = __this->get__codec_1();
		ZlibCodec_t855427629 * L_94 = L_93;
		NullCheck(L_94);
		int32_t L_95 = L_94->get_NextIn_1();
		int32_t L_96 = L_95;
		V_4 = L_96;
		NullCheck(L_94);
		L_94->set_NextIn_1(((int32_t)il2cpp_codegen_add((int32_t)L_96, (int32_t)1)));
		int32_t L_97 = V_4;
		NullCheck(L_92);
		int32_t L_98 = L_97;
		uint8_t L_99 = (L_92)->GetAt(static_cast<il2cpp_array_size_t>(L_98));
		__this->set_expectedCheck_4(((int32_t)il2cpp_codegen_add((int32_t)L_90, (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_99<<(int32_t)((int32_t)16)))&(int32_t)((int32_t)16711680))))));
		__this->set_mode_0(4);
		goto IL_0715;
	}

IL_031f:
	{
		ZlibCodec_t855427629 * L_100 = __this->get__codec_1();
		NullCheck(L_100);
		int32_t L_101 = L_100->get_AvailableBytesIn_2();
		if (L_101)
		{
			goto IL_0331;
		}
	}
	{
		int32_t L_102 = V_2;
		return L_102;
	}

IL_0331:
	{
		int32_t L_103 = V_1;
		V_2 = L_103;
		ZlibCodec_t855427629 * L_104 = __this->get__codec_1();
		ZlibCodec_t855427629 * L_105 = L_104;
		NullCheck(L_105);
		int32_t L_106 = L_105->get_AvailableBytesIn_2();
		NullCheck(L_105);
		L_105->set_AvailableBytesIn_2(((int32_t)il2cpp_codegen_subtract((int32_t)L_106, (int32_t)1)));
		ZlibCodec_t855427629 * L_107 = __this->get__codec_1();
		ZlibCodec_t855427629 * L_108 = L_107;
		NullCheck(L_108);
		int64_t L_109 = L_108->get_TotalBytesIn_3();
		NullCheck(L_108);
		L_108->set_TotalBytesIn_3(((int64_t)il2cpp_codegen_add((int64_t)L_109, (int64_t)(((int64_t)((int64_t)1))))));
		uint32_t L_110 = __this->get_expectedCheck_4();
		ZlibCodec_t855427629 * L_111 = __this->get__codec_1();
		NullCheck(L_111);
		ByteU5BU5D_t4116647657* L_112 = L_111->get_InputBuffer_0();
		ZlibCodec_t855427629 * L_113 = __this->get__codec_1();
		ZlibCodec_t855427629 * L_114 = L_113;
		NullCheck(L_114);
		int32_t L_115 = L_114->get_NextIn_1();
		int32_t L_116 = L_115;
		V_4 = L_116;
		NullCheck(L_114);
		L_114->set_NextIn_1(((int32_t)il2cpp_codegen_add((int32_t)L_116, (int32_t)1)));
		int32_t L_117 = V_4;
		NullCheck(L_112);
		int32_t L_118 = L_117;
		uint8_t L_119 = (L_112)->GetAt(static_cast<il2cpp_array_size_t>(L_118));
		__this->set_expectedCheck_4(((int32_t)il2cpp_codegen_add((int32_t)L_110, (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_119<<(int32_t)8))&(int32_t)((int32_t)65280))))));
		__this->set_mode_0(5);
		goto IL_0715;
	}

IL_039f:
	{
		ZlibCodec_t855427629 * L_120 = __this->get__codec_1();
		NullCheck(L_120);
		int32_t L_121 = L_120->get_AvailableBytesIn_2();
		if (L_121)
		{
			goto IL_03b1;
		}
	}
	{
		int32_t L_122 = V_2;
		return L_122;
	}

IL_03b1:
	{
		int32_t L_123 = V_1;
		V_2 = L_123;
		ZlibCodec_t855427629 * L_124 = __this->get__codec_1();
		ZlibCodec_t855427629 * L_125 = L_124;
		NullCheck(L_125);
		int32_t L_126 = L_125->get_AvailableBytesIn_2();
		NullCheck(L_125);
		L_125->set_AvailableBytesIn_2(((int32_t)il2cpp_codegen_subtract((int32_t)L_126, (int32_t)1)));
		ZlibCodec_t855427629 * L_127 = __this->get__codec_1();
		ZlibCodec_t855427629 * L_128 = L_127;
		NullCheck(L_128);
		int64_t L_129 = L_128->get_TotalBytesIn_3();
		NullCheck(L_128);
		L_128->set_TotalBytesIn_3(((int64_t)il2cpp_codegen_add((int64_t)L_129, (int64_t)(((int64_t)((int64_t)1))))));
		uint32_t L_130 = __this->get_expectedCheck_4();
		ZlibCodec_t855427629 * L_131 = __this->get__codec_1();
		NullCheck(L_131);
		ByteU5BU5D_t4116647657* L_132 = L_131->get_InputBuffer_0();
		ZlibCodec_t855427629 * L_133 = __this->get__codec_1();
		ZlibCodec_t855427629 * L_134 = L_133;
		NullCheck(L_134);
		int32_t L_135 = L_134->get_NextIn_1();
		int32_t L_136 = L_135;
		V_4 = L_136;
		NullCheck(L_134);
		L_134->set_NextIn_1(((int32_t)il2cpp_codegen_add((int32_t)L_136, (int32_t)1)));
		int32_t L_137 = V_4;
		NullCheck(L_132);
		int32_t L_138 = L_137;
		uint8_t L_139 = (L_132)->GetAt(static_cast<il2cpp_array_size_t>(L_138));
		__this->set_expectedCheck_4(((int32_t)il2cpp_codegen_add((int32_t)L_130, (int32_t)((int32_t)((int32_t)L_139&(int32_t)((int32_t)255))))));
		ZlibCodec_t855427629 * L_140 = __this->get__codec_1();
		uint32_t L_141 = __this->get_expectedCheck_4();
		NullCheck(L_140);
		L_140->set__Adler32_11(L_141);
		__this->set_mode_0(6);
		return 2;
	}

IL_042b:
	{
		__this->set_mode_0(((int32_t)13));
		ZlibCodec_t855427629 * L_142 = __this->get__codec_1();
		NullCheck(L_142);
		L_142->set_Message_8(_stringLiteral3176807651);
		__this->set_marker_5(0);
		return ((int32_t)-2);
	}

IL_044d:
	{
		InflateBlocks_t4119258979 * L_143 = __this->get_blocks_8();
		int32_t L_144 = V_2;
		NullCheck(L_143);
		int32_t L_145 = InflateBlocks_Process_m3038927653(L_143, L_144, /*hidden argument*/NULL);
		V_2 = L_145;
		int32_t L_146 = V_2;
		if ((!(((uint32_t)L_146) == ((uint32_t)((int32_t)-3)))))
		{
			goto IL_0476;
		}
	}
	{
		__this->set_mode_0(((int32_t)13));
		__this->set_marker_5(0);
		goto IL_0715;
	}

IL_0476:
	{
		int32_t L_147 = V_2;
		if (L_147)
		{
			goto IL_047e;
		}
	}
	{
		int32_t L_148 = V_1;
		V_2 = L_148;
	}

IL_047e:
	{
		int32_t L_149 = V_2;
		if ((((int32_t)L_149) == ((int32_t)1)))
		{
			goto IL_0487;
		}
	}
	{
		int32_t L_150 = V_2;
		return L_150;
	}

IL_0487:
	{
		int32_t L_151 = V_1;
		V_2 = L_151;
		InflateBlocks_t4119258979 * L_152 = __this->get_blocks_8();
		NullCheck(L_152);
		uint32_t L_153 = InflateBlocks_Reset_m1167299319(L_152, /*hidden argument*/NULL);
		__this->set_computedCheck_3(L_153);
		bool L_154 = InflateManager_get_HandleRfc1950HeaderBytes_m1575042719(__this, /*hidden argument*/NULL);
		if (L_154)
		{
			goto IL_04af;
		}
	}
	{
		__this->set_mode_0(((int32_t)12));
		return 1;
	}

IL_04af:
	{
		__this->set_mode_0(8);
		goto IL_0715;
	}

IL_04bb:
	{
		ZlibCodec_t855427629 * L_155 = __this->get__codec_1();
		NullCheck(L_155);
		int32_t L_156 = L_155->get_AvailableBytesIn_2();
		if (L_156)
		{
			goto IL_04cd;
		}
	}
	{
		int32_t L_157 = V_2;
		return L_157;
	}

IL_04cd:
	{
		int32_t L_158 = V_1;
		V_2 = L_158;
		ZlibCodec_t855427629 * L_159 = __this->get__codec_1();
		ZlibCodec_t855427629 * L_160 = L_159;
		NullCheck(L_160);
		int32_t L_161 = L_160->get_AvailableBytesIn_2();
		NullCheck(L_160);
		L_160->set_AvailableBytesIn_2(((int32_t)il2cpp_codegen_subtract((int32_t)L_161, (int32_t)1)));
		ZlibCodec_t855427629 * L_162 = __this->get__codec_1();
		ZlibCodec_t855427629 * L_163 = L_162;
		NullCheck(L_163);
		int64_t L_164 = L_163->get_TotalBytesIn_3();
		NullCheck(L_163);
		L_163->set_TotalBytesIn_3(((int64_t)il2cpp_codegen_add((int64_t)L_164, (int64_t)(((int64_t)((int64_t)1))))));
		ZlibCodec_t855427629 * L_165 = __this->get__codec_1();
		NullCheck(L_165);
		ByteU5BU5D_t4116647657* L_166 = L_165->get_InputBuffer_0();
		ZlibCodec_t855427629 * L_167 = __this->get__codec_1();
		ZlibCodec_t855427629 * L_168 = L_167;
		NullCheck(L_168);
		int32_t L_169 = L_168->get_NextIn_1();
		int32_t L_170 = L_169;
		V_4 = L_170;
		NullCheck(L_168);
		L_168->set_NextIn_1(((int32_t)il2cpp_codegen_add((int32_t)L_170, (int32_t)1)));
		int32_t L_171 = V_4;
		NullCheck(L_166);
		int32_t L_172 = L_171;
		uint8_t L_173 = (L_166)->GetAt(static_cast<il2cpp_array_size_t>(L_172));
		__this->set_expectedCheck_4((((int32_t)((uint32_t)((int64_t)((int64_t)(((int64_t)((int64_t)((int32_t)((int32_t)L_173<<(int32_t)((int32_t)24))))))&(int64_t)(((int64_t)((uint64_t)(((uint32_t)((uint32_t)((int32_t)-16777216)))))))))))));
		__this->set_mode_0(((int32_t)9));
		goto IL_0715;
	}

IL_0539:
	{
		ZlibCodec_t855427629 * L_174 = __this->get__codec_1();
		NullCheck(L_174);
		int32_t L_175 = L_174->get_AvailableBytesIn_2();
		if (L_175)
		{
			goto IL_054b;
		}
	}
	{
		int32_t L_176 = V_2;
		return L_176;
	}

IL_054b:
	{
		int32_t L_177 = V_1;
		V_2 = L_177;
		ZlibCodec_t855427629 * L_178 = __this->get__codec_1();
		ZlibCodec_t855427629 * L_179 = L_178;
		NullCheck(L_179);
		int32_t L_180 = L_179->get_AvailableBytesIn_2();
		NullCheck(L_179);
		L_179->set_AvailableBytesIn_2(((int32_t)il2cpp_codegen_subtract((int32_t)L_180, (int32_t)1)));
		ZlibCodec_t855427629 * L_181 = __this->get__codec_1();
		ZlibCodec_t855427629 * L_182 = L_181;
		NullCheck(L_182);
		int64_t L_183 = L_182->get_TotalBytesIn_3();
		NullCheck(L_182);
		L_182->set_TotalBytesIn_3(((int64_t)il2cpp_codegen_add((int64_t)L_183, (int64_t)(((int64_t)((int64_t)1))))));
		uint32_t L_184 = __this->get_expectedCheck_4();
		ZlibCodec_t855427629 * L_185 = __this->get__codec_1();
		NullCheck(L_185);
		ByteU5BU5D_t4116647657* L_186 = L_185->get_InputBuffer_0();
		ZlibCodec_t855427629 * L_187 = __this->get__codec_1();
		ZlibCodec_t855427629 * L_188 = L_187;
		NullCheck(L_188);
		int32_t L_189 = L_188->get_NextIn_1();
		int32_t L_190 = L_189;
		V_4 = L_190;
		NullCheck(L_188);
		L_188->set_NextIn_1(((int32_t)il2cpp_codegen_add((int32_t)L_190, (int32_t)1)));
		int32_t L_191 = V_4;
		NullCheck(L_186);
		int32_t L_192 = L_191;
		uint8_t L_193 = (L_186)->GetAt(static_cast<il2cpp_array_size_t>(L_192));
		__this->set_expectedCheck_4(((int32_t)il2cpp_codegen_add((int32_t)L_184, (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_193<<(int32_t)((int32_t)16)))&(int32_t)((int32_t)16711680))))));
		__this->set_mode_0(((int32_t)10));
		goto IL_0715;
	}

IL_05bb:
	{
		ZlibCodec_t855427629 * L_194 = __this->get__codec_1();
		NullCheck(L_194);
		int32_t L_195 = L_194->get_AvailableBytesIn_2();
		if (L_195)
		{
			goto IL_05cd;
		}
	}
	{
		int32_t L_196 = V_2;
		return L_196;
	}

IL_05cd:
	{
		int32_t L_197 = V_1;
		V_2 = L_197;
		ZlibCodec_t855427629 * L_198 = __this->get__codec_1();
		ZlibCodec_t855427629 * L_199 = L_198;
		NullCheck(L_199);
		int32_t L_200 = L_199->get_AvailableBytesIn_2();
		NullCheck(L_199);
		L_199->set_AvailableBytesIn_2(((int32_t)il2cpp_codegen_subtract((int32_t)L_200, (int32_t)1)));
		ZlibCodec_t855427629 * L_201 = __this->get__codec_1();
		ZlibCodec_t855427629 * L_202 = L_201;
		NullCheck(L_202);
		int64_t L_203 = L_202->get_TotalBytesIn_3();
		NullCheck(L_202);
		L_202->set_TotalBytesIn_3(((int64_t)il2cpp_codegen_add((int64_t)L_203, (int64_t)(((int64_t)((int64_t)1))))));
		uint32_t L_204 = __this->get_expectedCheck_4();
		ZlibCodec_t855427629 * L_205 = __this->get__codec_1();
		NullCheck(L_205);
		ByteU5BU5D_t4116647657* L_206 = L_205->get_InputBuffer_0();
		ZlibCodec_t855427629 * L_207 = __this->get__codec_1();
		ZlibCodec_t855427629 * L_208 = L_207;
		NullCheck(L_208);
		int32_t L_209 = L_208->get_NextIn_1();
		int32_t L_210 = L_209;
		V_4 = L_210;
		NullCheck(L_208);
		L_208->set_NextIn_1(((int32_t)il2cpp_codegen_add((int32_t)L_210, (int32_t)1)));
		int32_t L_211 = V_4;
		NullCheck(L_206);
		int32_t L_212 = L_211;
		uint8_t L_213 = (L_206)->GetAt(static_cast<il2cpp_array_size_t>(L_212));
		__this->set_expectedCheck_4(((int32_t)il2cpp_codegen_add((int32_t)L_204, (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_213<<(int32_t)8))&(int32_t)((int32_t)65280))))));
		__this->set_mode_0(((int32_t)11));
		goto IL_0715;
	}

IL_063c:
	{
		ZlibCodec_t855427629 * L_214 = __this->get__codec_1();
		NullCheck(L_214);
		int32_t L_215 = L_214->get_AvailableBytesIn_2();
		if (L_215)
		{
			goto IL_064e;
		}
	}
	{
		int32_t L_216 = V_2;
		return L_216;
	}

IL_064e:
	{
		int32_t L_217 = V_1;
		V_2 = L_217;
		ZlibCodec_t855427629 * L_218 = __this->get__codec_1();
		ZlibCodec_t855427629 * L_219 = L_218;
		NullCheck(L_219);
		int32_t L_220 = L_219->get_AvailableBytesIn_2();
		NullCheck(L_219);
		L_219->set_AvailableBytesIn_2(((int32_t)il2cpp_codegen_subtract((int32_t)L_220, (int32_t)1)));
		ZlibCodec_t855427629 * L_221 = __this->get__codec_1();
		ZlibCodec_t855427629 * L_222 = L_221;
		NullCheck(L_222);
		int64_t L_223 = L_222->get_TotalBytesIn_3();
		NullCheck(L_222);
		L_222->set_TotalBytesIn_3(((int64_t)il2cpp_codegen_add((int64_t)L_223, (int64_t)(((int64_t)((int64_t)1))))));
		uint32_t L_224 = __this->get_expectedCheck_4();
		ZlibCodec_t855427629 * L_225 = __this->get__codec_1();
		NullCheck(L_225);
		ByteU5BU5D_t4116647657* L_226 = L_225->get_InputBuffer_0();
		ZlibCodec_t855427629 * L_227 = __this->get__codec_1();
		ZlibCodec_t855427629 * L_228 = L_227;
		NullCheck(L_228);
		int32_t L_229 = L_228->get_NextIn_1();
		int32_t L_230 = L_229;
		V_4 = L_230;
		NullCheck(L_228);
		L_228->set_NextIn_1(((int32_t)il2cpp_codegen_add((int32_t)L_230, (int32_t)1)));
		int32_t L_231 = V_4;
		NullCheck(L_226);
		int32_t L_232 = L_231;
		uint8_t L_233 = (L_226)->GetAt(static_cast<il2cpp_array_size_t>(L_232));
		__this->set_expectedCheck_4(((int32_t)il2cpp_codegen_add((int32_t)L_224, (int32_t)((int32_t)((int32_t)L_233&(int32_t)((int32_t)255))))));
		uint32_t L_234 = __this->get_computedCheck_3();
		uint32_t L_235 = __this->get_expectedCheck_4();
		if ((((int32_t)L_234) == ((int32_t)L_235)))
		{
			goto IL_06e3;
		}
	}
	{
		__this->set_mode_0(((int32_t)13));
		ZlibCodec_t855427629 * L_236 = __this->get__codec_1();
		NullCheck(L_236);
		L_236->set_Message_8(_stringLiteral646863083);
		__this->set_marker_5(5);
		goto IL_0715;
	}

IL_06e3:
	{
		__this->set_mode_0(((int32_t)12));
		return 1;
	}

IL_06ed:
	{
		return 1;
	}

IL_06ef:
	{
		ZlibCodec_t855427629 * L_237 = __this->get__codec_1();
		NullCheck(L_237);
		String_t* L_238 = L_237->get_Message_8();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_239 = String_Format_m2844511972(NULL /*static, unused*/, _stringLiteral2025561382, L_238, /*hidden argument*/NULL);
		ZlibException_t3942143964 * L_240 = (ZlibException_t3942143964 *)il2cpp_codegen_object_new(ZlibException_t3942143964_il2cpp_TypeInfo_var);
		ZlibException__ctor_m1084687637(L_240, L_239, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_240, NULL, InflateManager_Inflate_m4163498486_RuntimeMethod_var);
	}

IL_070a:
	{
		ZlibException_t3942143964 * L_241 = (ZlibException_t3942143964 *)il2cpp_codegen_object_new(ZlibException_t3942143964_il2cpp_TypeInfo_var);
		ZlibException__ctor_m1084687637(L_241, _stringLiteral788423978, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_241, NULL, InflateManager_Inflate_m4163498486_RuntimeMethod_var);
	}

IL_0715:
	{
		goto IL_0020;
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
// System.Void Pathfinding.Ionic.Zlib.InternalConstants::.cctor()
extern "C" IL2CPP_METHOD_ATTR void InternalConstants__cctor_m1151965872 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InternalConstants__cctor_m1151965872_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		((InternalConstants_t3209989667_StaticFields*)il2cpp_codegen_static_fields_for(InternalConstants_t3209989667_il2cpp_TypeInfo_var))->set_MAX_BITS_0(((int32_t)15));
		((InternalConstants_t3209989667_StaticFields*)il2cpp_codegen_static_fields_for(InternalConstants_t3209989667_il2cpp_TypeInfo_var))->set_BL_CODES_1(((int32_t)19));
		((InternalConstants_t3209989667_StaticFields*)il2cpp_codegen_static_fields_for(InternalConstants_t3209989667_il2cpp_TypeInfo_var))->set_D_CODES_2(((int32_t)30));
		((InternalConstants_t3209989667_StaticFields*)il2cpp_codegen_static_fields_for(InternalConstants_t3209989667_il2cpp_TypeInfo_var))->set_LITERALS_3(((int32_t)256));
		((InternalConstants_t3209989667_StaticFields*)il2cpp_codegen_static_fields_for(InternalConstants_t3209989667_il2cpp_TypeInfo_var))->set_LENGTH_CODES_4(((int32_t)29));
		int32_t L_0 = ((InternalConstants_t3209989667_StaticFields*)il2cpp_codegen_static_fields_for(InternalConstants_t3209989667_il2cpp_TypeInfo_var))->get_LITERALS_3();
		int32_t L_1 = ((InternalConstants_t3209989667_StaticFields*)il2cpp_codegen_static_fields_for(InternalConstants_t3209989667_il2cpp_TypeInfo_var))->get_LENGTH_CODES_4();
		((InternalConstants_t3209989667_StaticFields*)il2cpp_codegen_static_fields_for(InternalConstants_t3209989667_il2cpp_TypeInfo_var))->set_L_CODES_5(((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)1)), (int32_t)L_1)));
		((InternalConstants_t3209989667_StaticFields*)il2cpp_codegen_static_fields_for(InternalConstants_t3209989667_il2cpp_TypeInfo_var))->set_MAX_BL_BITS_6(7);
		((InternalConstants_t3209989667_StaticFields*)il2cpp_codegen_static_fields_for(InternalConstants_t3209989667_il2cpp_TypeInfo_var))->set_REP_3_6_7(((int32_t)16));
		((InternalConstants_t3209989667_StaticFields*)il2cpp_codegen_static_fields_for(InternalConstants_t3209989667_il2cpp_TypeInfo_var))->set_REPZ_3_10_8(((int32_t)17));
		((InternalConstants_t3209989667_StaticFields*)il2cpp_codegen_static_fields_for(InternalConstants_t3209989667_il2cpp_TypeInfo_var))->set_REPZ_11_138_9(((int32_t)18));
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
// System.Void Pathfinding.Ionic.Zlib.InternalInflateConstants::.cctor()
extern "C" IL2CPP_METHOD_ATTR void InternalInflateConstants__cctor_m678261186 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InternalInflateConstants__cctor_m678261186_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Int32U5BU5D_t385246372* L_0 = (Int32U5BU5D_t385246372*)SZArrayNew(Int32U5BU5D_t385246372_il2cpp_TypeInfo_var, (uint32_t)((int32_t)17));
		Int32U5BU5D_t385246372* L_1 = L_0;
		RuntimeFieldHandle_t1871169219  L_2 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3EU7B99f15b47U2D93f0U2D442dU2Da950U2D84e2e79a92c8U7D_t3841250540____U24fieldU2DC_8_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m3117905507(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_1, L_2, /*hidden argument*/NULL);
		((InternalInflateConstants_t2469443330_StaticFields*)il2cpp_codegen_static_fields_for(InternalInflateConstants_t2469443330_il2cpp_TypeInfo_var))->set_InflateMask_0(L_1);
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
// System.Void Pathfinding.Ionic.Zlib.ParallelDeflateOutputStream::.ctor(System.IO.Stream,Pathfinding.Ionic.Zlib.CompressionLevel,Pathfinding.Ionic.Zlib.CompressionStrategy,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void ParallelDeflateOutputStream__ctor_m1283854089 (ParallelDeflateOutputStream_t2527365669 * __this, Stream_t1273022909 * ___stream0, int32_t ___level1, int32_t ___strategy2, bool ___leaveOpen3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ParallelDeflateOutputStream__ctor_m1283854089_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(ParallelDeflateOutputStream_t2527365669_il2cpp_TypeInfo_var);
		int32_t L_0 = ((ParallelDeflateOutputStream_t2527365669_StaticFields*)il2cpp_codegen_static_fields_for(ParallelDeflateOutputStream_t2527365669_il2cpp_TypeInfo_var))->get_IO_BUFFER_SIZE_DEFAULT_1();
		__this->set__bufferSize_8(L_0);
		RuntimeObject * L_1 = (RuntimeObject *)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_m297566312(L_1, /*hidden argument*/NULL);
		__this->set__outputLock_10(L_1);
		RuntimeObject * L_2 = (RuntimeObject *)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_m297566312(L_2, /*hidden argument*/NULL);
		__this->set__latestLock_19(L_2);
		RuntimeObject * L_3 = (RuntimeObject *)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_m297566312(L_3, /*hidden argument*/NULL);
		__this->set__eLock_26(L_3);
		__this->set__DesiredTrace_27(((int32_t)26942));
		IL2CPP_RUNTIME_CLASS_INIT(Stream_t1273022909_il2cpp_TypeInfo_var);
		Stream__ctor_m3881936881(__this, /*hidden argument*/NULL);
		Stream_t1273022909 * L_4 = ___stream0;
		__this->set__outStream_6(L_4);
		int32_t L_5 = ___level1;
		__this->set__compressLevel_23(L_5);
		int32_t L_6 = ___strategy2;
		ParallelDeflateOutputStream_set_Strategy_m906188439(__this, L_6, /*hidden argument*/NULL);
		bool L_7 = ___leaveOpen3;
		__this->set__leaveOpen_4(L_7);
		ParallelDeflateOutputStream_set_MaxBufferPairs_m811257751(__this, ((int32_t)16), /*hidden argument*/NULL);
		return;
	}
}
// System.Void Pathfinding.Ionic.Zlib.ParallelDeflateOutputStream::.cctor()
extern "C" IL2CPP_METHOD_ATTR void ParallelDeflateOutputStream__cctor_m3757393707 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ParallelDeflateOutputStream__cctor_m3757393707_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		((ParallelDeflateOutputStream_t2527365669_StaticFields*)il2cpp_codegen_static_fields_for(ParallelDeflateOutputStream_t2527365669_il2cpp_TypeInfo_var))->set_IO_BUFFER_SIZE_DEFAULT_1(((int32_t)65536));
		((ParallelDeflateOutputStream_t2527365669_StaticFields*)il2cpp_codegen_static_fields_for(ParallelDeflateOutputStream_t2527365669_il2cpp_TypeInfo_var))->set_BufferPairsPerCore_2(4);
		return;
	}
}
// Pathfinding.Ionic.Zlib.CompressionStrategy Pathfinding.Ionic.Zlib.ParallelDeflateOutputStream::get_Strategy()
extern "C" IL2CPP_METHOD_ATTR int32_t ParallelDeflateOutputStream_get_Strategy_m1697680580 (ParallelDeflateOutputStream_t2527365669 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CStrategyU3Ek__BackingField_28();
		return L_0;
	}
}
// System.Void Pathfinding.Ionic.Zlib.ParallelDeflateOutputStream::set_Strategy(Pathfinding.Ionic.Zlib.CompressionStrategy)
extern "C" IL2CPP_METHOD_ATTR void ParallelDeflateOutputStream_set_Strategy_m906188439 (ParallelDeflateOutputStream_t2527365669 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CStrategyU3Ek__BackingField_28(L_0);
		return;
	}
}
// System.Void Pathfinding.Ionic.Zlib.ParallelDeflateOutputStream::set_MaxBufferPairs(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void ParallelDeflateOutputStream_set_MaxBufferPairs_m811257751 (ParallelDeflateOutputStream_t2527365669 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ParallelDeflateOutputStream_set_MaxBufferPairs_m811257751_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___value0;
		if ((((int32_t)L_0) >= ((int32_t)4)))
		{
			goto IL_0017;
		}
	}
	{
		ArgumentException_t132251570 * L_1 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1216717135(L_1, _stringLiteral2424698027, _stringLiteral4131726187, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, ParallelDeflateOutputStream_set_MaxBufferPairs_m811257751_RuntimeMethod_var);
	}

IL_0017:
	{
		int32_t L_2 = ___value0;
		__this->set__maxBufferPairs_7(L_2);
		return;
	}
}
// System.Void Pathfinding.Ionic.Zlib.ParallelDeflateOutputStream::set_BufferSize(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void ParallelDeflateOutputStream_set_BufferSize_m2932976188 (ParallelDeflateOutputStream_t2527365669 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ParallelDeflateOutputStream_set_BufferSize_m2932976188_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___value0;
		if ((((int32_t)L_0) >= ((int32_t)((int32_t)1024))))
		{
			goto IL_001b;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_1 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m282481429(L_1, _stringLiteral1172543146, _stringLiteral1925293292, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, ParallelDeflateOutputStream_set_BufferSize_m2932976188_RuntimeMethod_var);
	}

IL_001b:
	{
		int32_t L_2 = ___value0;
		__this->set__bufferSize_8(L_2);
		return;
	}
}
// System.Void Pathfinding.Ionic.Zlib.ParallelDeflateOutputStream::_InitializePoolOfWorkItems()
extern "C" IL2CPP_METHOD_ATTR void ParallelDeflateOutputStream__InitializePoolOfWorkItems_m3855684877 (ParallelDeflateOutputStream_t2527365669 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ParallelDeflateOutputStream__InitializePoolOfWorkItems_m3855684877_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		Queue_1_t2797205247 * L_0 = (Queue_1_t2797205247 *)il2cpp_codegen_object_new(Queue_1_t2797205247_il2cpp_TypeInfo_var);
		Queue_1__ctor_m1580917939(L_0, /*hidden argument*/Queue_1__ctor_m1580917939_RuntimeMethod_var);
		__this->set__toWrite_20(L_0);
		Queue_1_t2797205247 * L_1 = (Queue_1_t2797205247 *)il2cpp_codegen_object_new(Queue_1_t2797205247_il2cpp_TypeInfo_var);
		Queue_1__ctor_m1580917939(L_1, /*hidden argument*/Queue_1__ctor_m1580917939_RuntimeMethod_var);
		__this->set__toFill_21(L_1);
		List_1_t4178125671 * L_2 = (List_1_t4178125671 *)il2cpp_codegen_object_new(List_1_t4178125671_il2cpp_TypeInfo_var);
		List_1__ctor_m1822985305(L_2, /*hidden argument*/List_1__ctor_m1822985305_RuntimeMethod_var);
		__this->set__pool_3(L_2);
		IL2CPP_RUNTIME_CLASS_INIT(ParallelDeflateOutputStream_t2527365669_il2cpp_TypeInfo_var);
		int32_t L_3 = ((ParallelDeflateOutputStream_t2527365669_StaticFields*)il2cpp_codegen_static_fields_for(ParallelDeflateOutputStream_t2527365669_il2cpp_TypeInfo_var))->get_BufferPairsPerCore_2();
		int32_t L_4 = Environment_get_ProcessorCount_m3616251798(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_3, (int32_t)L_4));
		int32_t L_5 = V_0;
		int32_t L_6 = __this->get__maxBufferPairs_7();
		int32_t L_7 = Math_Min_m3468062251(NULL /*static, unused*/, L_5, L_6, /*hidden argument*/NULL);
		V_0 = L_7;
		V_1 = 0;
		goto IL_0074;
	}

IL_0041:
	{
		List_1_t4178125671 * L_8 = __this->get__pool_3();
		int32_t L_9 = __this->get__bufferSize_8();
		int32_t L_10 = __this->get__compressLevel_23();
		int32_t L_11 = ParallelDeflateOutputStream_get_Strategy_m1697680580(__this, /*hidden argument*/NULL);
		int32_t L_12 = V_1;
		WorkItem_t2706050929 * L_13 = (WorkItem_t2706050929 *)il2cpp_codegen_object_new(WorkItem_t2706050929_il2cpp_TypeInfo_var);
		WorkItem__ctor_m105125814(L_13, L_9, L_10, L_11, L_12, /*hidden argument*/NULL);
		NullCheck(L_8);
		List_1_Add_m1572258377(L_8, L_13, /*hidden argument*/List_1_Add_m1572258377_RuntimeMethod_var);
		Queue_1_t2797205247 * L_14 = __this->get__toFill_21();
		int32_t L_15 = V_1;
		NullCheck(L_14);
		Queue_1_Enqueue_m4020669210(L_14, L_15, /*hidden argument*/Queue_1_Enqueue_m4020669210_RuntimeMethod_var);
		int32_t L_16 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_16, (int32_t)1));
	}

IL_0074:
	{
		int32_t L_17 = V_1;
		int32_t L_18 = V_0;
		if ((((int32_t)L_17) < ((int32_t)L_18)))
		{
			goto IL_0041;
		}
	}
	{
		AutoResetEvent_t1333520283 * L_19 = (AutoResetEvent_t1333520283 *)il2cpp_codegen_object_new(AutoResetEvent_t1333520283_il2cpp_TypeInfo_var);
		AutoResetEvent__ctor_m3710433672(L_19, (bool)0, /*hidden argument*/NULL);
		__this->set__newlyCompressedBlob_9(L_19);
		CRC32_t288211679 * L_20 = (CRC32_t288211679 *)il2cpp_codegen_object_new(CRC32_t288211679_il2cpp_TypeInfo_var);
		CRC32__ctor_m474582685(L_20, /*hidden argument*/NULL);
		__this->set__runningCrc_18(L_20);
		__this->set__currentlyFilling_13((-1));
		__this->set__lastFilled_14((-1));
		__this->set__lastWritten_15((-1));
		__this->set__latestCompressed_16((-1));
		return;
	}
}
// System.Void Pathfinding.Ionic.Zlib.ParallelDeflateOutputStream::Write(System.Byte[],System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void ParallelDeflateOutputStream_Write_m1685201846 (ParallelDeflateOutputStream_t2527365669 * __this, ByteU5BU5D_t4116647657* ___buffer0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ParallelDeflateOutputStream_Write_m1685201846_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Exception_t * V_1 = NULL;
	int32_t V_2 = 0;
	WorkItem_t2706050929 * V_3 = NULL;
	int32_t V_4 = 0;
	int32_t G_B16_0 = 0;
	{
		V_0 = (bool)0;
		bool L_0 = __this->get__isClosed_11();
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		InvalidOperationException_t56020091 * L_1 = (InvalidOperationException_t56020091 *)il2cpp_codegen_object_new(InvalidOperationException_t56020091_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m2734335978(L_1, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, ParallelDeflateOutputStream_Write_m1685201846_RuntimeMethod_var);
	}

IL_0013:
	{
		Exception_t * L_2 = __this->get__pendingException_24();
		il2cpp_codegen_memory_barrier();
		if (!L_2)
		{
			goto IL_003b;
		}
	}
	{
		__this->set__handlingException_25((bool)1);
		Exception_t * L_3 = __this->get__pendingException_24();
		il2cpp_codegen_memory_barrier();
		V_1 = L_3;
		il2cpp_codegen_memory_barrier();
		__this->set__pendingException_24((Exception_t *)NULL);
		Exception_t * L_4 = V_1;
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, NULL, ParallelDeflateOutputStream_Write_m1685201846_RuntimeMethod_var);
	}

IL_003b:
	{
		int32_t L_5 = ___count2;
		if (L_5)
		{
			goto IL_0042;
		}
	}
	{
		return;
	}

IL_0042:
	{
		bool L_6 = __this->get__firstWriteDone_12();
		if (L_6)
		{
			goto IL_005a;
		}
	}
	{
		ParallelDeflateOutputStream__InitializePoolOfWorkItems_m3855684877(__this, /*hidden argument*/NULL);
		__this->set__firstWriteDone_12((bool)1);
	}

IL_005a:
	{
		bool L_7 = V_0;
		ParallelDeflateOutputStream_EmitPendingBuffers_m2912639916(__this, (bool)0, L_7, /*hidden argument*/NULL);
		V_0 = (bool)0;
		V_2 = (-1);
		int32_t L_8 = __this->get__currentlyFilling_13();
		if ((((int32_t)L_8) < ((int32_t)0)))
		{
			goto IL_007e;
		}
	}
	{
		int32_t L_9 = __this->get__currentlyFilling_13();
		V_2 = L_9;
		goto IL_00af;
	}

IL_007e:
	{
		Queue_1_t2797205247 * L_10 = __this->get__toFill_21();
		NullCheck(L_10);
		int32_t L_11 = Queue_1_get_Count_m2189316761(L_10, /*hidden argument*/Queue_1_get_Count_m2189316761_RuntimeMethod_var);
		if (L_11)
		{
			goto IL_0095;
		}
	}
	{
		V_0 = (bool)1;
		goto IL_0173;
	}

IL_0095:
	{
		Queue_1_t2797205247 * L_12 = __this->get__toFill_21();
		NullCheck(L_12);
		int32_t L_13 = Queue_1_Dequeue_m2220656947(L_12, /*hidden argument*/Queue_1_Dequeue_m2220656947_RuntimeMethod_var);
		V_2 = L_13;
		int32_t L_14 = __this->get__lastFilled_14();
		__this->set__lastFilled_14(((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)1)));
	}

IL_00af:
	{
		List_1_t4178125671 * L_15 = __this->get__pool_3();
		int32_t L_16 = V_2;
		NullCheck(L_15);
		WorkItem_t2706050929 * L_17 = List_1_get_Item_m658768736(L_15, L_16, /*hidden argument*/List_1_get_Item_m658768736_RuntimeMethod_var);
		V_3 = L_17;
		WorkItem_t2706050929 * L_18 = V_3;
		NullCheck(L_18);
		ByteU5BU5D_t4116647657* L_19 = L_18->get_buffer_0();
		NullCheck(L_19);
		WorkItem_t2706050929 * L_20 = V_3;
		NullCheck(L_20);
		int32_t L_21 = L_20->get_inputBytesAvailable_5();
		int32_t L_22 = ___count2;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_19)->max_length)))), (int32_t)L_21))) <= ((int32_t)L_22)))
		{
			goto IL_00d7;
		}
	}
	{
		int32_t L_23 = ___count2;
		G_B16_0 = L_23;
		goto IL_00e6;
	}

IL_00d7:
	{
		WorkItem_t2706050929 * L_24 = V_3;
		NullCheck(L_24);
		ByteU5BU5D_t4116647657* L_25 = L_24->get_buffer_0();
		NullCheck(L_25);
		WorkItem_t2706050929 * L_26 = V_3;
		NullCheck(L_26);
		int32_t L_27 = L_26->get_inputBytesAvailable_5();
		G_B16_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_25)->max_length)))), (int32_t)L_27));
	}

IL_00e6:
	{
		V_4 = G_B16_0;
		WorkItem_t2706050929 * L_28 = V_3;
		int32_t L_29 = __this->get__lastFilled_14();
		NullCheck(L_28);
		L_28->set_ordinal_4(L_29);
		ByteU5BU5D_t4116647657* L_30 = ___buffer0;
		int32_t L_31 = ___offset1;
		WorkItem_t2706050929 * L_32 = V_3;
		NullCheck(L_32);
		ByteU5BU5D_t4116647657* L_33 = L_32->get_buffer_0();
		WorkItem_t2706050929 * L_34 = V_3;
		NullCheck(L_34);
		int32_t L_35 = L_34->get_inputBytesAvailable_5();
		int32_t L_36 = V_4;
		Buffer_BlockCopy_m2884209081(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_30, L_31, (RuntimeArray *)(RuntimeArray *)L_33, L_35, L_36, /*hidden argument*/NULL);
		int32_t L_37 = ___count2;
		int32_t L_38 = V_4;
		___count2 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_37, (int32_t)L_38));
		int32_t L_39 = ___offset1;
		int32_t L_40 = V_4;
		___offset1 = ((int32_t)il2cpp_codegen_add((int32_t)L_39, (int32_t)L_40));
		WorkItem_t2706050929 * L_41 = V_3;
		WorkItem_t2706050929 * L_42 = L_41;
		NullCheck(L_42);
		int32_t L_43 = L_42->get_inputBytesAvailable_5();
		int32_t L_44 = V_4;
		NullCheck(L_42);
		L_42->set_inputBytesAvailable_5(((int32_t)il2cpp_codegen_add((int32_t)L_43, (int32_t)L_44)));
		WorkItem_t2706050929 * L_45 = V_3;
		NullCheck(L_45);
		int32_t L_46 = L_45->get_inputBytesAvailable_5();
		WorkItem_t2706050929 * L_47 = V_3;
		NullCheck(L_47);
		ByteU5BU5D_t4116647657* L_48 = L_47->get_buffer_0();
		NullCheck(L_48);
		if ((!(((uint32_t)L_46) == ((uint32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_48)->max_length))))))))
		{
			goto IL_0165;
		}
	}
	{
		intptr_t L_49 = (intptr_t)ParallelDeflateOutputStream__DeflateOne_m1526306249_RuntimeMethod_var;
		WaitCallback_t2448485498 * L_50 = (WaitCallback_t2448485498 *)il2cpp_codegen_object_new(WaitCallback_t2448485498_il2cpp_TypeInfo_var);
		WaitCallback__ctor_m1893321019(L_50, __this, (intptr_t)L_49, /*hidden argument*/NULL);
		WorkItem_t2706050929 * L_51 = V_3;
		bool L_52 = ThreadPool_QueueUserWorkItem_m1526970260(NULL /*static, unused*/, L_50, L_51, /*hidden argument*/NULL);
		if (L_52)
		{
			goto IL_0159;
		}
	}
	{
		Exception_t * L_53 = (Exception_t *)il2cpp_codegen_object_new(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m1152696503(L_53, _stringLiteral2599821629, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_53, NULL, ParallelDeflateOutputStream_Write_m1685201846_RuntimeMethod_var);
	}

IL_0159:
	{
		__this->set__currentlyFilling_13((-1));
		goto IL_016c;
	}

IL_0165:
	{
		int32_t L_54 = V_2;
		__this->set__currentlyFilling_13(L_54);
	}

IL_016c:
	{
		int32_t L_55 = ___count2;
		if ((((int32_t)L_55) <= ((int32_t)0)))
		{
			goto IL_0173;
		}
	}

IL_0173:
	{
		int32_t L_56 = ___count2;
		if ((((int32_t)L_56) > ((int32_t)0)))
		{
			goto IL_005a;
		}
	}
	{
		return;
	}
}
// System.Void Pathfinding.Ionic.Zlib.ParallelDeflateOutputStream::_FlushFinish()
extern "C" IL2CPP_METHOD_ATTR void ParallelDeflateOutputStream__FlushFinish_m1293563418 (ParallelDeflateOutputStream_t2527365669 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ParallelDeflateOutputStream__FlushFinish_m1293563418_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_t4116647657* V_0 = NULL;
	ZlibCodec_t855427629 * V_1 = NULL;
	int32_t V_2 = 0;
	{
		ByteU5BU5D_t4116647657* L_0 = (ByteU5BU5D_t4116647657*)SZArrayNew(ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var, (uint32_t)((int32_t)128));
		V_0 = L_0;
		ZlibCodec_t855427629 * L_1 = (ZlibCodec_t855427629 *)il2cpp_codegen_object_new(ZlibCodec_t855427629_il2cpp_TypeInfo_var);
		ZlibCodec__ctor_m2698404987(L_1, /*hidden argument*/NULL);
		V_1 = L_1;
		ZlibCodec_t855427629 * L_2 = V_1;
		int32_t L_3 = __this->get__compressLevel_23();
		NullCheck(L_2);
		int32_t L_4 = ZlibCodec_InitializeDeflate_m1391012963(L_2, L_3, (bool)0, /*hidden argument*/NULL);
		V_2 = L_4;
		ZlibCodec_t855427629 * L_5 = V_1;
		NullCheck(L_5);
		L_5->set_InputBuffer_0((ByteU5BU5D_t4116647657*)NULL);
		ZlibCodec_t855427629 * L_6 = V_1;
		NullCheck(L_6);
		L_6->set_NextIn_1(0);
		ZlibCodec_t855427629 * L_7 = V_1;
		NullCheck(L_7);
		L_7->set_AvailableBytesIn_2(0);
		ZlibCodec_t855427629 * L_8 = V_1;
		ByteU5BU5D_t4116647657* L_9 = V_0;
		NullCheck(L_8);
		L_8->set_OutputBuffer_4(L_9);
		ZlibCodec_t855427629 * L_10 = V_1;
		NullCheck(L_10);
		L_10->set_NextOut_5(0);
		ZlibCodec_t855427629 * L_11 = V_1;
		ByteU5BU5D_t4116647657* L_12 = V_0;
		NullCheck(L_12);
		NullCheck(L_11);
		L_11->set_AvailableBytesOut_6((((int32_t)((int32_t)(((RuntimeArray *)L_12)->max_length)))));
		ZlibCodec_t855427629 * L_13 = V_1;
		NullCheck(L_13);
		int32_t L_14 = ZlibCodec_Deflate_m110580741(L_13, 4, /*hidden argument*/NULL);
		V_2 = L_14;
		int32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)1)))
		{
			goto IL_0076;
		}
	}
	{
		int32_t L_16 = V_2;
		if (!L_16)
		{
			goto IL_0076;
		}
	}
	{
		ZlibCodec_t855427629 * L_17 = V_1;
		NullCheck(L_17);
		String_t* L_18 = L_17->get_Message_8();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_19 = String_Concat_m3937257545(NULL /*static, unused*/, _stringLiteral3452826457, L_18, /*hidden argument*/NULL);
		Exception_t * L_20 = (Exception_t *)il2cpp_codegen_object_new(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m1152696503(L_20, L_19, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_20, NULL, ParallelDeflateOutputStream__FlushFinish_m1293563418_RuntimeMethod_var);
	}

IL_0076:
	{
		ByteU5BU5D_t4116647657* L_21 = V_0;
		NullCheck(L_21);
		ZlibCodec_t855427629 * L_22 = V_1;
		NullCheck(L_22);
		int32_t L_23 = L_22->get_AvailableBytesOut_6();
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_21)->max_length)))), (int32_t)L_23))) <= ((int32_t)0)))
		{
			goto IL_009d;
		}
	}
	{
		Stream_t1273022909 * L_24 = __this->get__outStream_6();
		ByteU5BU5D_t4116647657* L_25 = V_0;
		ByteU5BU5D_t4116647657* L_26 = V_0;
		NullCheck(L_26);
		ZlibCodec_t855427629 * L_27 = V_1;
		NullCheck(L_27);
		int32_t L_28 = L_27->get_AvailableBytesOut_6();
		NullCheck(L_24);
		VirtActionInvoker3< ByteU5BU5D_t4116647657*, int32_t, int32_t >::Invoke(18 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_24, L_25, 0, ((int32_t)il2cpp_codegen_subtract((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_26)->max_length)))), (int32_t)L_28)));
	}

IL_009d:
	{
		ZlibCodec_t855427629 * L_29 = V_1;
		NullCheck(L_29);
		ZlibCodec_EndDeflate_m2070701999(L_29, /*hidden argument*/NULL);
		CRC32_t288211679 * L_30 = __this->get__runningCrc_18();
		NullCheck(L_30);
		int32_t L_31 = CRC32_get_Crc32Result_m2014443844(L_30, /*hidden argument*/NULL);
		__this->set__Crc32_17(L_31);
		return;
	}
}
// System.Void Pathfinding.Ionic.Zlib.ParallelDeflateOutputStream::_Flush(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void ParallelDeflateOutputStream__Flush_m2129508559 (ParallelDeflateOutputStream_t2527365669 * __this, bool ___lastInput0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ParallelDeflateOutputStream__Flush_m2129508559_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	WorkItem_t2706050929 * V_0 = NULL;
	{
		bool L_0 = __this->get__isClosed_11();
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		InvalidOperationException_t56020091 * L_1 = (InvalidOperationException_t56020091 *)il2cpp_codegen_object_new(InvalidOperationException_t56020091_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m2734335978(L_1, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, ParallelDeflateOutputStream__Flush_m2129508559_RuntimeMethod_var);
	}

IL_0011:
	{
		bool L_2 = __this->get_emitting_5();
		if (!L_2)
		{
			goto IL_001d;
		}
	}
	{
		return;
	}

IL_001d:
	{
		int32_t L_3 = __this->get__currentlyFilling_13();
		if ((((int32_t)L_3) < ((int32_t)0)))
		{
			goto IL_0049;
		}
	}
	{
		List_1_t4178125671 * L_4 = __this->get__pool_3();
		int32_t L_5 = __this->get__currentlyFilling_13();
		NullCheck(L_4);
		WorkItem_t2706050929 * L_6 = List_1_get_Item_m658768736(L_4, L_5, /*hidden argument*/List_1_get_Item_m658768736_RuntimeMethod_var);
		V_0 = L_6;
		WorkItem_t2706050929 * L_7 = V_0;
		ParallelDeflateOutputStream__DeflateOne_m1526306249(__this, L_7, /*hidden argument*/NULL);
		__this->set__currentlyFilling_13((-1));
	}

IL_0049:
	{
		bool L_8 = ___lastInput0;
		if (!L_8)
		{
			goto IL_0062;
		}
	}
	{
		ParallelDeflateOutputStream_EmitPendingBuffers_m2912639916(__this, (bool)1, (bool)0, /*hidden argument*/NULL);
		ParallelDeflateOutputStream__FlushFinish_m1293563418(__this, /*hidden argument*/NULL);
		goto IL_006a;
	}

IL_0062:
	{
		ParallelDeflateOutputStream_EmitPendingBuffers_m2912639916(__this, (bool)0, (bool)0, /*hidden argument*/NULL);
	}

IL_006a:
	{
		return;
	}
}
// System.Void Pathfinding.Ionic.Zlib.ParallelDeflateOutputStream::Flush()
extern "C" IL2CPP_METHOD_ATTR void ParallelDeflateOutputStream_Flush_m2261587351 (ParallelDeflateOutputStream_t2527365669 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ParallelDeflateOutputStream_Flush_m2261587351_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t * V_0 = NULL;
	{
		Exception_t * L_0 = __this->get__pendingException_24();
		il2cpp_codegen_memory_barrier();
		if (!L_0)
		{
			goto IL_0028;
		}
	}
	{
		__this->set__handlingException_25((bool)1);
		Exception_t * L_1 = __this->get__pendingException_24();
		il2cpp_codegen_memory_barrier();
		V_0 = L_1;
		il2cpp_codegen_memory_barrier();
		__this->set__pendingException_24((Exception_t *)NULL);
		Exception_t * L_2 = V_0;
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, NULL, ParallelDeflateOutputStream_Flush_m2261587351_RuntimeMethod_var);
	}

IL_0028:
	{
		bool L_3 = __this->get__handlingException_25();
		if (!L_3)
		{
			goto IL_0034;
		}
	}
	{
		return;
	}

IL_0034:
	{
		ParallelDeflateOutputStream__Flush_m2129508559(__this, (bool)0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Pathfinding.Ionic.Zlib.ParallelDeflateOutputStream::Close()
extern "C" IL2CPP_METHOD_ATTR void ParallelDeflateOutputStream_Close_m3760413339 (ParallelDeflateOutputStream_t2527365669 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ParallelDeflateOutputStream_Close_m3760413339_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t * V_0 = NULL;
	{
		Exception_t * L_0 = __this->get__pendingException_24();
		il2cpp_codegen_memory_barrier();
		if (!L_0)
		{
			goto IL_0028;
		}
	}
	{
		__this->set__handlingException_25((bool)1);
		Exception_t * L_1 = __this->get__pendingException_24();
		il2cpp_codegen_memory_barrier();
		V_0 = L_1;
		il2cpp_codegen_memory_barrier();
		__this->set__pendingException_24((Exception_t *)NULL);
		Exception_t * L_2 = V_0;
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, NULL, ParallelDeflateOutputStream_Close_m3760413339_RuntimeMethod_var);
	}

IL_0028:
	{
		bool L_3 = __this->get__handlingException_25();
		if (!L_3)
		{
			goto IL_0034;
		}
	}
	{
		return;
	}

IL_0034:
	{
		bool L_4 = __this->get__isClosed_11();
		if (!L_4)
		{
			goto IL_0040;
		}
	}
	{
		return;
	}

IL_0040:
	{
		ParallelDeflateOutputStream__Flush_m2129508559(__this, (bool)1, /*hidden argument*/NULL);
		bool L_5 = __this->get__leaveOpen_4();
		if (L_5)
		{
			goto IL_005d;
		}
	}
	{
		Stream_t1273022909 * L_6 = __this->get__outStream_6();
		NullCheck(L_6);
		VirtActionInvoker0::Invoke(12 /* System.Void System.IO.Stream::Close() */, L_6);
	}

IL_005d:
	{
		__this->set__isClosed_11((bool)1);
		return;
	}
}
// System.Void Pathfinding.Ionic.Zlib.ParallelDeflateOutputStream::Dispose()
extern "C" IL2CPP_METHOD_ATTR void ParallelDeflateOutputStream_Dispose_m2791098434 (ParallelDeflateOutputStream_t2527365669 * __this, const RuntimeMethod* method)
{
	{
		VirtActionInvoker0::Invoke(12 /* System.Void System.IO.Stream::Close() */, __this);
		__this->set__pool_3((List_1_t4178125671 *)NULL);
		VirtActionInvoker1< bool >::Invoke(11 /* System.Void System.IO.Stream::Dispose(System.Boolean) */, __this, (bool)1);
		return;
	}
}
// System.Void Pathfinding.Ionic.Zlib.ParallelDeflateOutputStream::Dispose(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void ParallelDeflateOutputStream_Dispose_m1301787495 (ParallelDeflateOutputStream_t2527365669 * __this, bool ___disposing0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___disposing0;
		Stream_Dispose_m874059170(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Pathfinding.Ionic.Zlib.ParallelDeflateOutputStream::Reset(System.IO.Stream)
extern "C" IL2CPP_METHOD_ATTR void ParallelDeflateOutputStream_Reset_m1022075450 (ParallelDeflateOutputStream_t2527365669 * __this, Stream_t1273022909 * ___stream0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ParallelDeflateOutputStream_Reset_m1022075450_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t1772402252  V_0;
	memset(&V_0, 0, sizeof(V_0));
	WorkItem_t2706050929 * V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		bool L_0 = __this->get__firstWriteDone_12();
		if (L_0)
		{
			goto IL_000c;
		}
	}
	{
		return;
	}

IL_000c:
	{
		Queue_1_t2797205247 * L_1 = __this->get__toWrite_20();
		NullCheck(L_1);
		Queue_1_Clear_m3201131089(L_1, /*hidden argument*/Queue_1_Clear_m3201131089_RuntimeMethod_var);
		Queue_1_t2797205247 * L_2 = __this->get__toFill_21();
		NullCheck(L_2);
		Queue_1_Clear_m3201131089(L_2, /*hidden argument*/Queue_1_Clear_m3201131089_RuntimeMethod_var);
		List_1_t4178125671 * L_3 = __this->get__pool_3();
		NullCheck(L_3);
		Enumerator_t1772402252  L_4 = List_1_GetEnumerator_m4123270977(L_3, /*hidden argument*/List_1_GetEnumerator_m4123270977_RuntimeMethod_var);
		V_0 = L_4;
	}

IL_002e:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0053;
		}

IL_0033:
		{
			WorkItem_t2706050929 * L_5 = Enumerator_get_Current_m1777060775((Enumerator_t1772402252 *)(&V_0), /*hidden argument*/Enumerator_get_Current_m1777060775_RuntimeMethod_var);
			V_1 = L_5;
			Queue_1_t2797205247 * L_6 = __this->get__toFill_21();
			WorkItem_t2706050929 * L_7 = V_1;
			NullCheck(L_7);
			int32_t L_8 = L_7->get_index_3();
			NullCheck(L_6);
			Queue_1_Enqueue_m4020669210(L_6, L_8, /*hidden argument*/Queue_1_Enqueue_m4020669210_RuntimeMethod_var);
			WorkItem_t2706050929 * L_9 = V_1;
			NullCheck(L_9);
			L_9->set_ordinal_4((-1));
		}

IL_0053:
		{
			bool L_10 = Enumerator_MoveNext_m2358318413((Enumerator_t1772402252 *)(&V_0), /*hidden argument*/Enumerator_MoveNext_m2358318413_RuntimeMethod_var);
			if (L_10)
			{
				goto IL_0033;
			}
		}

IL_005f:
		{
			IL2CPP_LEAVE(0x72, FINALLY_0064);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0064;
	}

FINALLY_0064:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m3632834591((Enumerator_t1772402252 *)(&V_0), /*hidden argument*/Enumerator_Dispose_m3632834591_RuntimeMethod_var);
		IL2CPP_END_FINALLY(100)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(100)
	{
		IL2CPP_JUMP_TBL(0x72, IL_0072)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0072:
	{
		__this->set__firstWriteDone_12((bool)0);
		__this->set__totalBytesProcessed_22((((int64_t)((int64_t)0))));
		CRC32_t288211679 * L_11 = (CRC32_t288211679 *)il2cpp_codegen_object_new(CRC32_t288211679_il2cpp_TypeInfo_var);
		CRC32__ctor_m474582685(L_11, /*hidden argument*/NULL);
		__this->set__runningCrc_18(L_11);
		__this->set__isClosed_11((bool)0);
		__this->set__currentlyFilling_13((-1));
		__this->set__lastFilled_14((-1));
		__this->set__lastWritten_15((-1));
		__this->set__latestCompressed_16((-1));
		Stream_t1273022909 * L_12 = ___stream0;
		__this->set__outStream_6(L_12);
		return;
	}
}
// System.Void Pathfinding.Ionic.Zlib.ParallelDeflateOutputStream::EmitPendingBuffers(System.Boolean,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void ParallelDeflateOutputStream_EmitPendingBuffers_m2912639916 (ParallelDeflateOutputStream_t2527365669 * __this, bool ___doAll0, bool ___mustWait1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ParallelDeflateOutputStream_EmitPendingBuffers_m2912639916_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	WorkItem_t2706050929 * V_3 = NULL;
	RuntimeObject * V_4 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	int32_t G_B10_0 = 0;
	{
		bool L_0 = __this->get_emitting_5();
		if (!L_0)
		{
			goto IL_000c;
		}
	}
	{
		return;
	}

IL_000c:
	{
		__this->set_emitting_5((bool)1);
		bool L_1 = ___doAll0;
		if (L_1)
		{
			goto IL_001f;
		}
	}
	{
		bool L_2 = ___mustWait1;
		if (!L_2)
		{
			goto IL_002b;
		}
	}

IL_001f:
	{
		AutoResetEvent_t1333520283 * L_3 = __this->get__newlyCompressedBlob_9();
		NullCheck(L_3);
		VirtFuncInvoker0< bool >::Invoke(10 /* System.Boolean System.Threading.WaitHandle::WaitOne() */, L_3);
	}

IL_002b:
	{
		V_0 = (-1);
		bool L_4 = ___doAll0;
		if (!L_4)
		{
			goto IL_003d;
		}
	}
	{
		G_B10_0 = ((int32_t)200);
		goto IL_004a;
	}

IL_003d:
	{
		bool L_5 = ___mustWait1;
		if (!L_5)
		{
			goto IL_0049;
		}
	}
	{
		G_B10_0 = (-1);
		goto IL_004a;
	}

IL_0049:
	{
		G_B10_0 = 0;
	}

IL_004a:
	{
		V_1 = G_B10_0;
		V_2 = (-1);
	}

IL_004d:
	{
		Queue_1_t2797205247 * L_6 = __this->get__toWrite_20();
		int32_t L_7 = V_1;
		bool L_8 = Monitor_TryEnter_m1056885636(NULL /*static, unused*/, L_6, L_7, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_017c;
		}
	}
	{
		V_2 = (-1);
	}

IL_0060:
	try
	{ // begin try (depth: 1)
		{
			Queue_1_t2797205247 * L_9 = __this->get__toWrite_20();
			NullCheck(L_9);
			int32_t L_10 = Queue_1_get_Count_m2189316761(L_9, /*hidden argument*/Queue_1_get_Count_m2189316761_RuntimeMethod_var);
			if ((((int32_t)L_10) <= ((int32_t)0)))
			{
				goto IL_007d;
			}
		}

IL_0071:
		{
			Queue_1_t2797205247 * L_11 = __this->get__toWrite_20();
			NullCheck(L_11);
			int32_t L_12 = Queue_1_Dequeue_m2220656947(L_11, /*hidden argument*/Queue_1_Dequeue_m2220656947_RuntimeMethod_var);
			V_2 = L_12;
		}

IL_007d:
		{
			IL2CPP_LEAVE(0x8E, FINALLY_0082);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0082;
	}

FINALLY_0082:
	{ // begin finally (depth: 1)
		Queue_1_t2797205247 * L_13 = __this->get__toWrite_20();
		Monitor_Exit_m3585316909(NULL /*static, unused*/, L_13, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(130)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(130)
	{
		IL2CPP_JUMP_TBL(0x8E, IL_008e)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_008e:
	{
		int32_t L_14 = V_2;
		if ((((int32_t)L_14) < ((int32_t)0)))
		{
			goto IL_0177;
		}
	}
	{
		List_1_t4178125671 * L_15 = __this->get__pool_3();
		int32_t L_16 = V_2;
		NullCheck(L_15);
		WorkItem_t2706050929 * L_17 = List_1_get_Item_m658768736(L_15, L_16, /*hidden argument*/List_1_get_Item_m658768736_RuntimeMethod_var);
		V_3 = L_17;
		WorkItem_t2706050929 * L_18 = V_3;
		NullCheck(L_18);
		int32_t L_19 = L_18->get_ordinal_4();
		int32_t L_20 = __this->get__lastWritten_15();
		if ((((int32_t)L_19) == ((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_20, (int32_t)1)))))
		{
			goto IL_0105;
		}
	}
	{
		Queue_1_t2797205247 * L_21 = __this->get__toWrite_20();
		V_4 = L_21;
		RuntimeObject * L_22 = V_4;
		Monitor_Enter_m2249409497(NULL /*static, unused*/, L_22, /*hidden argument*/NULL);
	}

IL_00c4:
	try
	{ // begin try (depth: 1)
		Queue_1_t2797205247 * L_23 = __this->get__toWrite_20();
		int32_t L_24 = V_2;
		NullCheck(L_23);
		Queue_1_Enqueue_m4020669210(L_23, L_24, /*hidden argument*/Queue_1_Enqueue_m4020669210_RuntimeMethod_var);
		IL2CPP_LEAVE(0xDD, FINALLY_00d5);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00d5;
	}

FINALLY_00d5:
	{ // begin finally (depth: 1)
		RuntimeObject * L_25 = V_4;
		Monitor_Exit_m3585316909(NULL /*static, unused*/, L_25, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(213)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(213)
	{
		IL2CPP_JUMP_TBL(0xDD, IL_00dd)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_00dd:
	{
		int32_t L_26 = V_0;
		int32_t L_27 = V_2;
		if ((!(((uint32_t)L_26) == ((uint32_t)L_27))))
		{
			goto IL_00f7;
		}
	}
	{
		AutoResetEvent_t1333520283 * L_28 = __this->get__newlyCompressedBlob_9();
		NullCheck(L_28);
		VirtFuncInvoker0< bool >::Invoke(10 /* System.Boolean System.Threading.WaitHandle::WaitOne() */, L_28);
		V_0 = (-1);
		goto IL_0100;
	}

IL_00f7:
	{
		int32_t L_29 = V_0;
		if ((!(((uint32_t)L_29) == ((uint32_t)(-1)))))
		{
			goto IL_0100;
		}
	}
	{
		int32_t L_30 = V_2;
		V_0 = L_30;
	}

IL_0100:
	{
		goto IL_017e;
	}

IL_0105:
	{
		V_0 = (-1);
		Stream_t1273022909 * L_31 = __this->get__outStream_6();
		WorkItem_t2706050929 * L_32 = V_3;
		NullCheck(L_32);
		ByteU5BU5D_t4116647657* L_33 = L_32->get_compressed_1();
		WorkItem_t2706050929 * L_34 = V_3;
		NullCheck(L_34);
		int32_t L_35 = L_34->get_compressedBytesAvailable_6();
		NullCheck(L_31);
		VirtActionInvoker3< ByteU5BU5D_t4116647657*, int32_t, int32_t >::Invoke(18 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_31, L_33, 0, L_35);
		CRC32_t288211679 * L_36 = __this->get__runningCrc_18();
		WorkItem_t2706050929 * L_37 = V_3;
		NullCheck(L_37);
		int32_t L_38 = L_37->get_crc_2();
		WorkItem_t2706050929 * L_39 = V_3;
		NullCheck(L_39);
		int32_t L_40 = L_39->get_inputBytesAvailable_5();
		NullCheck(L_36);
		CRC32_Combine_m3604759441(L_36, L_38, L_40, /*hidden argument*/NULL);
		int64_t L_41 = __this->get__totalBytesProcessed_22();
		WorkItem_t2706050929 * L_42 = V_3;
		NullCheck(L_42);
		int32_t L_43 = L_42->get_inputBytesAvailable_5();
		__this->set__totalBytesProcessed_22(((int64_t)il2cpp_codegen_add((int64_t)L_41, (int64_t)(((int64_t)((int64_t)L_43))))));
		WorkItem_t2706050929 * L_44 = V_3;
		NullCheck(L_44);
		L_44->set_inputBytesAvailable_5(0);
		WorkItem_t2706050929 * L_45 = V_3;
		NullCheck(L_45);
		int32_t L_46 = L_45->get_ordinal_4();
		__this->set__lastWritten_15(L_46);
		Queue_1_t2797205247 * L_47 = __this->get__toFill_21();
		WorkItem_t2706050929 * L_48 = V_3;
		NullCheck(L_48);
		int32_t L_49 = L_48->get_index_3();
		NullCheck(L_47);
		Queue_1_Enqueue_m4020669210(L_47, L_49, /*hidden argument*/Queue_1_Enqueue_m4020669210_RuntimeMethod_var);
		int32_t L_50 = V_1;
		if ((!(((uint32_t)L_50) == ((uint32_t)(-1)))))
		{
			goto IL_0177;
		}
	}
	{
		V_1 = 0;
	}

IL_0177:
	{
		goto IL_017e;
	}

IL_017c:
	{
		V_2 = (-1);
	}

IL_017e:
	{
		int32_t L_51 = V_2;
		if ((((int32_t)L_51) >= ((int32_t)0)))
		{
			goto IL_004d;
		}
	}
	{
		bool L_52 = ___doAll0;
		if (!L_52)
		{
			goto IL_019c;
		}
	}
	{
		int32_t L_53 = __this->get__lastWritten_15();
		int32_t L_54 = __this->get__latestCompressed_16();
		if ((!(((uint32_t)L_53) == ((uint32_t)L_54))))
		{
			goto IL_002b;
		}
	}

IL_019c:
	{
		__this->set_emitting_5((bool)0);
		return;
	}
}
// System.Void Pathfinding.Ionic.Zlib.ParallelDeflateOutputStream::_DeflateOne(System.Object)
extern "C" IL2CPP_METHOD_ATTR void ParallelDeflateOutputStream__DeflateOne_m1526306249 (ParallelDeflateOutputStream_t2527365669 * __this, RuntimeObject * ___wi0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ParallelDeflateOutputStream__DeflateOne_m1526306249_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	WorkItem_t2706050929 * V_0 = NULL;
	int32_t V_1 = 0;
	CRC32_t288211679 * V_2 = NULL;
	RuntimeObject * V_3 = NULL;
	RuntimeObject * V_4 = NULL;
	Exception_t * V_5 = NULL;
	RuntimeObject * V_6 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		RuntimeObject * L_0 = ___wi0;
		V_0 = ((WorkItem_t2706050929 *)CastclassClass((RuntimeObject*)L_0, WorkItem_t2706050929_il2cpp_TypeInfo_var));
	}

IL_0007:
	try
	{ // begin try (depth: 1)
		{
			WorkItem_t2706050929 * L_1 = V_0;
			NullCheck(L_1);
			int32_t L_2 = L_1->get_index_3();
			V_1 = L_2;
			CRC32_t288211679 * L_3 = (CRC32_t288211679 *)il2cpp_codegen_object_new(CRC32_t288211679_il2cpp_TypeInfo_var);
			CRC32__ctor_m474582685(L_3, /*hidden argument*/NULL);
			V_2 = L_3;
			CRC32_t288211679 * L_4 = V_2;
			WorkItem_t2706050929 * L_5 = V_0;
			NullCheck(L_5);
			ByteU5BU5D_t4116647657* L_6 = L_5->get_buffer_0();
			WorkItem_t2706050929 * L_7 = V_0;
			NullCheck(L_7);
			int32_t L_8 = L_7->get_inputBytesAvailable_5();
			NullCheck(L_4);
			CRC32_SlurpBlock_m2489767400(L_4, L_6, 0, L_8, /*hidden argument*/NULL);
			WorkItem_t2706050929 * L_9 = V_0;
			ParallelDeflateOutputStream_DeflateOneSegment_m44383002(__this, L_9, /*hidden argument*/NULL);
			WorkItem_t2706050929 * L_10 = V_0;
			CRC32_t288211679 * L_11 = V_2;
			NullCheck(L_11);
			int32_t L_12 = CRC32_get_Crc32Result_m2014443844(L_11, /*hidden argument*/NULL);
			NullCheck(L_10);
			L_10->set_crc_2(L_12);
			RuntimeObject * L_13 = __this->get__latestLock_19();
			V_3 = L_13;
			RuntimeObject * L_14 = V_3;
			Monitor_Enter_m2249409497(NULL /*static, unused*/, L_14, /*hidden argument*/NULL);
		}

IL_0048:
		try
		{ // begin try (depth: 2)
			{
				WorkItem_t2706050929 * L_15 = V_0;
				NullCheck(L_15);
				int32_t L_16 = L_15->get_ordinal_4();
				int32_t L_17 = __this->get__latestCompressed_16();
				if ((((int32_t)L_16) <= ((int32_t)L_17)))
				{
					goto IL_0065;
				}
			}

IL_0059:
			{
				WorkItem_t2706050929 * L_18 = V_0;
				NullCheck(L_18);
				int32_t L_19 = L_18->get_ordinal_4();
				__this->set__latestCompressed_16(L_19);
			}

IL_0065:
			{
				IL2CPP_LEAVE(0x71, FINALLY_006a);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_006a;
		}

FINALLY_006a:
		{ // begin finally (depth: 2)
			RuntimeObject * L_20 = V_3;
			Monitor_Exit_m3585316909(NULL /*static, unused*/, L_20, /*hidden argument*/NULL);
			IL2CPP_END_FINALLY(106)
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(106)
		{
			IL2CPP_JUMP_TBL(0x71, IL_0071)
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		}

IL_0071:
		{
			Queue_1_t2797205247 * L_21 = __this->get__toWrite_20();
			V_4 = L_21;
			RuntimeObject * L_22 = V_4;
			Monitor_Enter_m2249409497(NULL /*static, unused*/, L_22, /*hidden argument*/NULL);
		}

IL_0080:
		try
		{ // begin try (depth: 2)
			Queue_1_t2797205247 * L_23 = __this->get__toWrite_20();
			WorkItem_t2706050929 * L_24 = V_0;
			NullCheck(L_24);
			int32_t L_25 = L_24->get_index_3();
			NullCheck(L_23);
			Queue_1_Enqueue_m4020669210(L_23, L_25, /*hidden argument*/Queue_1_Enqueue_m4020669210_RuntimeMethod_var);
			IL2CPP_LEAVE(0x9E, FINALLY_0096);
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_0096;
		}

FINALLY_0096:
		{ // begin finally (depth: 2)
			RuntimeObject * L_26 = V_4;
			Monitor_Exit_m3585316909(NULL /*static, unused*/, L_26, /*hidden argument*/NULL);
			IL2CPP_END_FINALLY(150)
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(150)
		{
			IL2CPP_JUMP_TBL(0x9E, IL_009e)
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		}

IL_009e:
		{
			AutoResetEvent_t1333520283 * L_27 = __this->get__newlyCompressedBlob_9();
			NullCheck(L_27);
			EventWaitHandle_Set_m2445193251(L_27, /*hidden argument*/NULL);
			goto IL_00e9;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_00af;
		throw e;
	}

CATCH_00af:
	{ // begin catch(System.Exception)
		{
			V_5 = ((Exception_t *)__exception_local);
			RuntimeObject * L_28 = __this->get__eLock_26();
			V_6 = L_28;
			RuntimeObject * L_29 = V_6;
			Monitor_Enter_m2249409497(NULL /*static, unused*/, L_29, /*hidden argument*/NULL);
		}

IL_00c0:
		try
		{ // begin try (depth: 2)
			{
				Exception_t * L_30 = __this->get__pendingException_24();
				il2cpp_codegen_memory_barrier();
				if (!L_30)
				{
					goto IL_00d7;
				}
			}

IL_00cd:
			{
				Exception_t * L_31 = V_5;
				il2cpp_codegen_memory_barrier();
				__this->set__pendingException_24(L_31);
			}

IL_00d7:
			{
				IL2CPP_LEAVE(0xE4, FINALLY_00dc);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_00dc;
		}

FINALLY_00dc:
		{ // begin finally (depth: 2)
			RuntimeObject * L_32 = V_6;
			Monitor_Exit_m3585316909(NULL /*static, unused*/, L_32, /*hidden argument*/NULL);
			IL2CPP_END_FINALLY(220)
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(220)
		{
			IL2CPP_JUMP_TBL(0xE4, IL_00e4)
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		}

IL_00e4:
		{
			goto IL_00e9;
		}
	} // end catch (depth: 1)

IL_00e9:
	{
		return;
	}
}
// System.Boolean Pathfinding.Ionic.Zlib.ParallelDeflateOutputStream::DeflateOneSegment(Pathfinding.Ionic.Zlib.WorkItem)
extern "C" IL2CPP_METHOD_ATTR bool ParallelDeflateOutputStream_DeflateOneSegment_m44383002 (ParallelDeflateOutputStream_t2527365669 * __this, WorkItem_t2706050929 * ___workitem0, const RuntimeMethod* method)
{
	ZlibCodec_t855427629 * V_0 = NULL;
	int32_t V_1 = 0;
	{
		WorkItem_t2706050929 * L_0 = ___workitem0;
		NullCheck(L_0);
		ZlibCodec_t855427629 * L_1 = L_0->get_compressor_7();
		V_0 = L_1;
		V_1 = 0;
		ZlibCodec_t855427629 * L_2 = V_0;
		NullCheck(L_2);
		ZlibCodec_ResetDeflate_m1569060282(L_2, /*hidden argument*/NULL);
		ZlibCodec_t855427629 * L_3 = V_0;
		NullCheck(L_3);
		L_3->set_NextIn_1(0);
		ZlibCodec_t855427629 * L_4 = V_0;
		WorkItem_t2706050929 * L_5 = ___workitem0;
		NullCheck(L_5);
		int32_t L_6 = L_5->get_inputBytesAvailable_5();
		NullCheck(L_4);
		L_4->set_AvailableBytesIn_2(L_6);
		ZlibCodec_t855427629 * L_7 = V_0;
		NullCheck(L_7);
		L_7->set_NextOut_5(0);
		ZlibCodec_t855427629 * L_8 = V_0;
		WorkItem_t2706050929 * L_9 = ___workitem0;
		NullCheck(L_9);
		ByteU5BU5D_t4116647657* L_10 = L_9->get_compressed_1();
		NullCheck(L_10);
		NullCheck(L_8);
		L_8->set_AvailableBytesOut_6((((int32_t)((int32_t)(((RuntimeArray *)L_10)->max_length)))));
	}

IL_0037:
	{
		ZlibCodec_t855427629 * L_11 = V_0;
		NullCheck(L_11);
		ZlibCodec_Deflate_m110580741(L_11, 0, /*hidden argument*/NULL);
		ZlibCodec_t855427629 * L_12 = V_0;
		NullCheck(L_12);
		int32_t L_13 = L_12->get_AvailableBytesIn_2();
		if ((((int32_t)L_13) > ((int32_t)0)))
		{
			goto IL_0037;
		}
	}
	{
		ZlibCodec_t855427629 * L_14 = V_0;
		NullCheck(L_14);
		int32_t L_15 = L_14->get_AvailableBytesOut_6();
		if (!L_15)
		{
			goto IL_0037;
		}
	}
	{
		ZlibCodec_t855427629 * L_16 = V_0;
		NullCheck(L_16);
		int32_t L_17 = ZlibCodec_Deflate_m110580741(L_16, 2, /*hidden argument*/NULL);
		V_1 = L_17;
		WorkItem_t2706050929 * L_18 = ___workitem0;
		ZlibCodec_t855427629 * L_19 = V_0;
		NullCheck(L_19);
		int64_t L_20 = L_19->get_TotalBytesOut_7();
		NullCheck(L_18);
		L_18->set_compressedBytesAvailable_6((((int32_t)((int32_t)L_20))));
		return (bool)1;
	}
}
// System.Boolean Pathfinding.Ionic.Zlib.ParallelDeflateOutputStream::get_CanSeek()
extern "C" IL2CPP_METHOD_ATTR bool ParallelDeflateOutputStream_get_CanSeek_m4104925064 (ParallelDeflateOutputStream_t2527365669 * __this, const RuntimeMethod* method)
{
	{
		return (bool)0;
	}
}
// System.Boolean Pathfinding.Ionic.Zlib.ParallelDeflateOutputStream::get_CanRead()
extern "C" IL2CPP_METHOD_ATTR bool ParallelDeflateOutputStream_get_CanRead_m1415512467 (ParallelDeflateOutputStream_t2527365669 * __this, const RuntimeMethod* method)
{
	{
		return (bool)0;
	}
}
// System.Boolean Pathfinding.Ionic.Zlib.ParallelDeflateOutputStream::get_CanWrite()
extern "C" IL2CPP_METHOD_ATTR bool ParallelDeflateOutputStream_get_CanWrite_m1961201887 (ParallelDeflateOutputStream_t2527365669 * __this, const RuntimeMethod* method)
{
	{
		Stream_t1273022909 * L_0 = __this->get__outStream_6();
		NullCheck(L_0);
		bool L_1 = VirtFuncInvoker0< bool >::Invoke(7 /* System.Boolean System.IO.Stream::get_CanWrite() */, L_0);
		return L_1;
	}
}
// System.Int64 Pathfinding.Ionic.Zlib.ParallelDeflateOutputStream::get_Length()
extern "C" IL2CPP_METHOD_ATTR int64_t ParallelDeflateOutputStream_get_Length_m525527501 (ParallelDeflateOutputStream_t2527365669 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ParallelDeflateOutputStream_get_Length_m525527501_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_t1314879016 * L_0 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2730133172(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, ParallelDeflateOutputStream_get_Length_m525527501_RuntimeMethod_var);
	}
}
// System.Int64 Pathfinding.Ionic.Zlib.ParallelDeflateOutputStream::get_Position()
extern "C" IL2CPP_METHOD_ATTR int64_t ParallelDeflateOutputStream_get_Position_m1381445614 (ParallelDeflateOutputStream_t2527365669 * __this, const RuntimeMethod* method)
{
	{
		Stream_t1273022909 * L_0 = __this->get__outStream_6();
		NullCheck(L_0);
		int64_t L_1 = VirtFuncInvoker0< int64_t >::Invoke(9 /* System.Int64 System.IO.Stream::get_Position() */, L_0);
		return L_1;
	}
}
// System.Void Pathfinding.Ionic.Zlib.ParallelDeflateOutputStream::set_Position(System.Int64)
extern "C" IL2CPP_METHOD_ATTR void ParallelDeflateOutputStream_set_Position_m1261720496 (ParallelDeflateOutputStream_t2527365669 * __this, int64_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ParallelDeflateOutputStream_set_Position_m1261720496_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_t1314879016 * L_0 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2730133172(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, ParallelDeflateOutputStream_set_Position_m1261720496_RuntimeMethod_var);
	}
}
// System.Int32 Pathfinding.Ionic.Zlib.ParallelDeflateOutputStream::Read(System.Byte[],System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR int32_t ParallelDeflateOutputStream_Read_m1336784324 (ParallelDeflateOutputStream_t2527365669 * __this, ByteU5BU5D_t4116647657* ___buffer0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ParallelDeflateOutputStream_Read_m1336784324_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_t1314879016 * L_0 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2730133172(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, ParallelDeflateOutputStream_Read_m1336784324_RuntimeMethod_var);
	}
}
// System.Int64 Pathfinding.Ionic.Zlib.ParallelDeflateOutputStream::Seek(System.Int64,System.IO.SeekOrigin)
extern "C" IL2CPP_METHOD_ATTR int64_t ParallelDeflateOutputStream_Seek_m2974656278 (ParallelDeflateOutputStream_t2527365669 * __this, int64_t ___offset0, int32_t ___origin1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ParallelDeflateOutputStream_Seek_m2974656278_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_t1314879016 * L_0 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2730133172(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, ParallelDeflateOutputStream_Seek_m2974656278_RuntimeMethod_var);
	}
}
// System.Void Pathfinding.Ionic.Zlib.ParallelDeflateOutputStream::SetLength(System.Int64)
extern "C" IL2CPP_METHOD_ATTR void ParallelDeflateOutputStream_SetLength_m1741036122 (ParallelDeflateOutputStream_t2527365669 * __this, int64_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ParallelDeflateOutputStream_SetLength_m1741036122_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_t1314879016 * L_0 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2730133172(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, ParallelDeflateOutputStream_SetLength_m1741036122_RuntimeMethod_var);
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
// System.Int32 Pathfinding.Ionic.Zlib.SharedUtils::URShift(System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR int32_t SharedUtils_URShift_m2479621630 (RuntimeObject * __this /* static, unused */, int32_t ___number0, int32_t ___bits1, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___number0;
		int32_t L_1 = ___bits1;
		return ((int32_t)((uint32_t)L_0>>((int32_t)((int32_t)L_1&(int32_t)((int32_t)31)))));
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
// System.Void Pathfinding.Ionic.Zlib.StaticTree::.ctor(System.Int16[],System.Int32[],System.Int32,System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void StaticTree__ctor_m1913907501 (StaticTree_t3743034110 * __this, Int16U5BU5D_t3686840178* ___treeCodes0, Int32U5BU5D_t385246372* ___extraBits1, int32_t ___extraBase2, int32_t ___elems3, int32_t ___maxLength4, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		Int16U5BU5D_t3686840178* L_0 = ___treeCodes0;
		__this->set_treeCodes_5(L_0);
		Int32U5BU5D_t385246372* L_1 = ___extraBits1;
		__this->set_extraBits_6(L_1);
		int32_t L_2 = ___extraBase2;
		__this->set_extraBase_7(L_2);
		int32_t L_3 = ___elems3;
		__this->set_elems_8(L_3);
		int32_t L_4 = ___maxLength4;
		__this->set_maxLength_9(L_4);
		return;
	}
}
// System.Void Pathfinding.Ionic.Zlib.StaticTree::.cctor()
extern "C" IL2CPP_METHOD_ATTR void StaticTree__cctor_m3230077685 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StaticTree__cctor_m3230077685_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Int16U5BU5D_t3686840178* L_0 = (Int16U5BU5D_t3686840178*)SZArrayNew(Int16U5BU5D_t3686840178_il2cpp_TypeInfo_var, (uint32_t)((int32_t)576));
		Int16U5BU5D_t3686840178* L_1 = L_0;
		RuntimeFieldHandle_t1871169219  L_2 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3EU7B99f15b47U2D93f0U2D442dU2Da950U2D84e2e79a92c8U7D_t3841250540____U24fieldU2D15_17_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m3117905507(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_1, L_2, /*hidden argument*/NULL);
		((StaticTree_t3743034110_StaticFields*)il2cpp_codegen_static_fields_for(StaticTree_t3743034110_il2cpp_TypeInfo_var))->set_lengthAndLiteralsTreeCodes_0(L_1);
		Int16U5BU5D_t3686840178* L_3 = (Int16U5BU5D_t3686840178*)SZArrayNew(Int16U5BU5D_t3686840178_il2cpp_TypeInfo_var, (uint32_t)((int32_t)60));
		Int16U5BU5D_t3686840178* L_4 = L_3;
		RuntimeFieldHandle_t1871169219  L_5 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3EU7B99f15b47U2D93f0U2D442dU2Da950U2D84e2e79a92c8U7D_t3841250540____U24fieldU2D16_18_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m3117905507(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_4, L_5, /*hidden argument*/NULL);
		((StaticTree_t3743034110_StaticFields*)il2cpp_codegen_static_fields_for(StaticTree_t3743034110_il2cpp_TypeInfo_var))->set_distTreeCodes_1(L_4);
		Int16U5BU5D_t3686840178* L_6 = ((StaticTree_t3743034110_StaticFields*)il2cpp_codegen_static_fields_for(StaticTree_t3743034110_il2cpp_TypeInfo_var))->get_lengthAndLiteralsTreeCodes_0();
		IL2CPP_RUNTIME_CLASS_INIT(Tree_t776904304_il2cpp_TypeInfo_var);
		Int32U5BU5D_t385246372* L_7 = ((Tree_t776904304_StaticFields*)il2cpp_codegen_static_fields_for(Tree_t776904304_il2cpp_TypeInfo_var))->get_ExtraLengthBits_1();
		IL2CPP_RUNTIME_CLASS_INIT(InternalConstants_t3209989667_il2cpp_TypeInfo_var);
		int32_t L_8 = ((InternalConstants_t3209989667_StaticFields*)il2cpp_codegen_static_fields_for(InternalConstants_t3209989667_il2cpp_TypeInfo_var))->get_LITERALS_3();
		int32_t L_9 = ((InternalConstants_t3209989667_StaticFields*)il2cpp_codegen_static_fields_for(InternalConstants_t3209989667_il2cpp_TypeInfo_var))->get_L_CODES_5();
		int32_t L_10 = ((InternalConstants_t3209989667_StaticFields*)il2cpp_codegen_static_fields_for(InternalConstants_t3209989667_il2cpp_TypeInfo_var))->get_MAX_BITS_0();
		StaticTree_t3743034110 * L_11 = (StaticTree_t3743034110 *)il2cpp_codegen_object_new(StaticTree_t3743034110_il2cpp_TypeInfo_var);
		StaticTree__ctor_m1913907501(L_11, L_6, L_7, ((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1)), L_9, L_10, /*hidden argument*/NULL);
		((StaticTree_t3743034110_StaticFields*)il2cpp_codegen_static_fields_for(StaticTree_t3743034110_il2cpp_TypeInfo_var))->set_Literals_2(L_11);
		Int16U5BU5D_t3686840178* L_12 = ((StaticTree_t3743034110_StaticFields*)il2cpp_codegen_static_fields_for(StaticTree_t3743034110_il2cpp_TypeInfo_var))->get_distTreeCodes_1();
		Int32U5BU5D_t385246372* L_13 = ((Tree_t776904304_StaticFields*)il2cpp_codegen_static_fields_for(Tree_t776904304_il2cpp_TypeInfo_var))->get_ExtraDistanceBits_2();
		int32_t L_14 = ((InternalConstants_t3209989667_StaticFields*)il2cpp_codegen_static_fields_for(InternalConstants_t3209989667_il2cpp_TypeInfo_var))->get_D_CODES_2();
		int32_t L_15 = ((InternalConstants_t3209989667_StaticFields*)il2cpp_codegen_static_fields_for(InternalConstants_t3209989667_il2cpp_TypeInfo_var))->get_MAX_BITS_0();
		StaticTree_t3743034110 * L_16 = (StaticTree_t3743034110 *)il2cpp_codegen_object_new(StaticTree_t3743034110_il2cpp_TypeInfo_var);
		StaticTree__ctor_m1913907501(L_16, L_12, L_13, 0, L_14, L_15, /*hidden argument*/NULL);
		((StaticTree_t3743034110_StaticFields*)il2cpp_codegen_static_fields_for(StaticTree_t3743034110_il2cpp_TypeInfo_var))->set_Distances_3(L_16);
		Int32U5BU5D_t385246372* L_17 = ((Tree_t776904304_StaticFields*)il2cpp_codegen_static_fields_for(Tree_t776904304_il2cpp_TypeInfo_var))->get_extra_blbits_3();
		int32_t L_18 = ((InternalConstants_t3209989667_StaticFields*)il2cpp_codegen_static_fields_for(InternalConstants_t3209989667_il2cpp_TypeInfo_var))->get_BL_CODES_1();
		int32_t L_19 = ((InternalConstants_t3209989667_StaticFields*)il2cpp_codegen_static_fields_for(InternalConstants_t3209989667_il2cpp_TypeInfo_var))->get_MAX_BL_BITS_6();
		StaticTree_t3743034110 * L_20 = (StaticTree_t3743034110 *)il2cpp_codegen_object_new(StaticTree_t3743034110_il2cpp_TypeInfo_var);
		StaticTree__ctor_m1913907501(L_20, (Int16U5BU5D_t3686840178*)(Int16U5BU5D_t3686840178*)NULL, L_17, 0, L_18, L_19, /*hidden argument*/NULL);
		((StaticTree_t3743034110_StaticFields*)il2cpp_codegen_static_fields_for(StaticTree_t3743034110_il2cpp_TypeInfo_var))->set_BitLengths_4(L_20);
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
// System.Void Pathfinding.Ionic.Zlib.Tree::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Tree__ctor_m3607565243 (Tree_t776904304 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Pathfinding.Ionic.Zlib.Tree::.cctor()
extern "C" IL2CPP_METHOD_ATTR void Tree__cctor_m1905366005 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Tree__cctor_m1905366005_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InternalConstants_t3209989667_il2cpp_TypeInfo_var);
		int32_t L_0 = ((InternalConstants_t3209989667_StaticFields*)il2cpp_codegen_static_fields_for(InternalConstants_t3209989667_il2cpp_TypeInfo_var))->get_L_CODES_5();
		((Tree_t776904304_StaticFields*)il2cpp_codegen_static_fields_for(Tree_t776904304_il2cpp_TypeInfo_var))->set_HEAP_SIZE_0(((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)2, (int32_t)L_0)), (int32_t)1)));
		Int32U5BU5D_t385246372* L_1 = (Int32U5BU5D_t385246372*)SZArrayNew(Int32U5BU5D_t385246372_il2cpp_TypeInfo_var, (uint32_t)((int32_t)29));
		Int32U5BU5D_t385246372* L_2 = L_1;
		RuntimeFieldHandle_t1871169219  L_3 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3EU7B99f15b47U2D93f0U2D442dU2Da950U2D84e2e79a92c8U7D_t3841250540____U24fieldU2DD_9_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m3117905507(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_2, L_3, /*hidden argument*/NULL);
		((Tree_t776904304_StaticFields*)il2cpp_codegen_static_fields_for(Tree_t776904304_il2cpp_TypeInfo_var))->set_ExtraLengthBits_1(L_2);
		Int32U5BU5D_t385246372* L_4 = (Int32U5BU5D_t385246372*)SZArrayNew(Int32U5BU5D_t385246372_il2cpp_TypeInfo_var, (uint32_t)((int32_t)30));
		Int32U5BU5D_t385246372* L_5 = L_4;
		RuntimeFieldHandle_t1871169219  L_6 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3EU7B99f15b47U2D93f0U2D442dU2Da950U2D84e2e79a92c8U7D_t3841250540____U24fieldU2DE_10_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m3117905507(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_5, L_6, /*hidden argument*/NULL);
		((Tree_t776904304_StaticFields*)il2cpp_codegen_static_fields_for(Tree_t776904304_il2cpp_TypeInfo_var))->set_ExtraDistanceBits_2(L_5);
		Int32U5BU5D_t385246372* L_7 = (Int32U5BU5D_t385246372*)SZArrayNew(Int32U5BU5D_t385246372_il2cpp_TypeInfo_var, (uint32_t)((int32_t)19));
		Int32U5BU5D_t385246372* L_8 = L_7;
		RuntimeFieldHandle_t1871169219  L_9 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3EU7B99f15b47U2D93f0U2D442dU2Da950U2D84e2e79a92c8U7D_t3841250540____U24fieldU2DF_11_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m3117905507(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_8, L_9, /*hidden argument*/NULL);
		((Tree_t776904304_StaticFields*)il2cpp_codegen_static_fields_for(Tree_t776904304_il2cpp_TypeInfo_var))->set_extra_blbits_3(L_8);
		SByteU5BU5D_t2651576203* L_10 = (SByteU5BU5D_t2651576203*)SZArrayNew(SByteU5BU5D_t2651576203_il2cpp_TypeInfo_var, (uint32_t)((int32_t)19));
		SByteU5BU5D_t2651576203* L_11 = L_10;
		RuntimeFieldHandle_t1871169219  L_12 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3EU7B99f15b47U2D93f0U2D442dU2Da950U2D84e2e79a92c8U7D_t3841250540____U24fieldU2D10_12_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m3117905507(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_11, L_12, /*hidden argument*/NULL);
		((Tree_t776904304_StaticFields*)il2cpp_codegen_static_fields_for(Tree_t776904304_il2cpp_TypeInfo_var))->set_bl_order_4(L_11);
		SByteU5BU5D_t2651576203* L_13 = (SByteU5BU5D_t2651576203*)SZArrayNew(SByteU5BU5D_t2651576203_il2cpp_TypeInfo_var, (uint32_t)((int32_t)512));
		SByteU5BU5D_t2651576203* L_14 = L_13;
		RuntimeFieldHandle_t1871169219  L_15 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3EU7B99f15b47U2D93f0U2D442dU2Da950U2D84e2e79a92c8U7D_t3841250540____U24fieldU2D11_13_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m3117905507(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_14, L_15, /*hidden argument*/NULL);
		((Tree_t776904304_StaticFields*)il2cpp_codegen_static_fields_for(Tree_t776904304_il2cpp_TypeInfo_var))->set__dist_code_5(L_14);
		SByteU5BU5D_t2651576203* L_16 = (SByteU5BU5D_t2651576203*)SZArrayNew(SByteU5BU5D_t2651576203_il2cpp_TypeInfo_var, (uint32_t)((int32_t)256));
		SByteU5BU5D_t2651576203* L_17 = L_16;
		RuntimeFieldHandle_t1871169219  L_18 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3EU7B99f15b47U2D93f0U2D442dU2Da950U2D84e2e79a92c8U7D_t3841250540____U24fieldU2D12_14_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m3117905507(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_17, L_18, /*hidden argument*/NULL);
		((Tree_t776904304_StaticFields*)il2cpp_codegen_static_fields_for(Tree_t776904304_il2cpp_TypeInfo_var))->set_LengthCode_6(L_17);
		Int32U5BU5D_t385246372* L_19 = (Int32U5BU5D_t385246372*)SZArrayNew(Int32U5BU5D_t385246372_il2cpp_TypeInfo_var, (uint32_t)((int32_t)29));
		Int32U5BU5D_t385246372* L_20 = L_19;
		RuntimeFieldHandle_t1871169219  L_21 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3EU7B99f15b47U2D93f0U2D442dU2Da950U2D84e2e79a92c8U7D_t3841250540____U24fieldU2D13_15_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m3117905507(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_20, L_21, /*hidden argument*/NULL);
		((Tree_t776904304_StaticFields*)il2cpp_codegen_static_fields_for(Tree_t776904304_il2cpp_TypeInfo_var))->set_LengthBase_7(L_20);
		Int32U5BU5D_t385246372* L_22 = (Int32U5BU5D_t385246372*)SZArrayNew(Int32U5BU5D_t385246372_il2cpp_TypeInfo_var, (uint32_t)((int32_t)30));
		Int32U5BU5D_t385246372* L_23 = L_22;
		RuntimeFieldHandle_t1871169219  L_24 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3EU7B99f15b47U2D93f0U2D442dU2Da950U2D84e2e79a92c8U7D_t3841250540____U24fieldU2D14_16_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m3117905507(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_23, L_24, /*hidden argument*/NULL);
		((Tree_t776904304_StaticFields*)il2cpp_codegen_static_fields_for(Tree_t776904304_il2cpp_TypeInfo_var))->set_DistanceBase_8(L_23);
		return;
	}
}
// System.Int32 Pathfinding.Ionic.Zlib.Tree::DistanceCode(System.Int32)
extern "C" IL2CPP_METHOD_ATTR int32_t Tree_DistanceCode_m2135165113 (RuntimeObject * __this /* static, unused */, int32_t ___dist0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Tree_DistanceCode_m2135165113_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = ___dist0;
		if ((((int32_t)L_0) >= ((int32_t)((int32_t)256))))
		{
			goto IL_0017;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Tree_t776904304_il2cpp_TypeInfo_var);
		SByteU5BU5D_t2651576203* L_1 = ((Tree_t776904304_StaticFields*)il2cpp_codegen_static_fields_for(Tree_t776904304_il2cpp_TypeInfo_var))->get__dist_code_5();
		int32_t L_2 = ___dist0;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		int8_t L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		G_B3_0 = ((int32_t)(L_4));
		goto IL_002a;
	}

IL_0017:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Tree_t776904304_il2cpp_TypeInfo_var);
		SByteU5BU5D_t2651576203* L_5 = ((Tree_t776904304_StaticFields*)il2cpp_codegen_static_fields_for(Tree_t776904304_il2cpp_TypeInfo_var))->get__dist_code_5();
		int32_t L_6 = ___dist0;
		int32_t L_7 = SharedUtils_URShift_m2479621630(NULL /*static, unused*/, L_6, 7, /*hidden argument*/NULL);
		NullCheck(L_5);
		int32_t L_8 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)256), (int32_t)L_7));
		int8_t L_9 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		G_B3_0 = ((int32_t)(L_9));
	}

IL_002a:
	{
		return (((int32_t)((int32_t)G_B3_0)));
	}
}
// System.Void Pathfinding.Ionic.Zlib.Tree::gen_bitlen(Pathfinding.Ionic.Zlib.DeflateManager)
extern "C" IL2CPP_METHOD_ATTR void Tree_gen_bitlen_m1750572723 (Tree_t776904304 * __this, DeflateManager_t3554793512 * ___s0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Tree_gen_bitlen_m1750572723_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Int16U5BU5D_t3686840178* V_0 = NULL;
	Int16U5BU5D_t3686840178* V_1 = NULL;
	Int32U5BU5D_t385246372* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int16_t V_10 = 0;
	int32_t V_11 = 0;
	{
		Int16U5BU5D_t3686840178* L_0 = __this->get_dyn_tree_9();
		V_0 = L_0;
		StaticTree_t3743034110 * L_1 = __this->get_staticTree_11();
		NullCheck(L_1);
		Int16U5BU5D_t3686840178* L_2 = L_1->get_treeCodes_5();
		V_1 = L_2;
		StaticTree_t3743034110 * L_3 = __this->get_staticTree_11();
		NullCheck(L_3);
		Int32U5BU5D_t385246372* L_4 = L_3->get_extraBits_6();
		V_2 = L_4;
		StaticTree_t3743034110 * L_5 = __this->get_staticTree_11();
		NullCheck(L_5);
		int32_t L_6 = L_5->get_extraBase_7();
		V_3 = L_6;
		StaticTree_t3743034110 * L_7 = __this->get_staticTree_11();
		NullCheck(L_7);
		int32_t L_8 = L_7->get_maxLength_9();
		V_4 = L_8;
		V_11 = 0;
		V_8 = 0;
		goto IL_0053;
	}

IL_0043:
	{
		DeflateManager_t3554793512 * L_9 = ___s0;
		NullCheck(L_9);
		Int16U5BU5D_t3686840178* L_10 = L_9->get_bl_count_57();
		int32_t L_11 = V_8;
		NullCheck(L_10);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(L_11), (int16_t)0);
		int32_t L_12 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1));
	}

IL_0053:
	{
		int32_t L_13 = V_8;
		IL2CPP_RUNTIME_CLASS_INIT(InternalConstants_t3209989667_il2cpp_TypeInfo_var);
		int32_t L_14 = ((InternalConstants_t3209989667_StaticFields*)il2cpp_codegen_static_fields_for(InternalConstants_t3209989667_il2cpp_TypeInfo_var))->get_MAX_BITS_0();
		if ((((int32_t)L_13) <= ((int32_t)L_14)))
		{
			goto IL_0043;
		}
	}
	{
		Int16U5BU5D_t3686840178* L_15 = V_0;
		DeflateManager_t3554793512 * L_16 = ___s0;
		NullCheck(L_16);
		Int32U5BU5D_t385246372* L_17 = L_16->get_heap_58();
		DeflateManager_t3554793512 * L_18 = ___s0;
		NullCheck(L_18);
		int32_t L_19 = L_18->get_heap_max_60();
		NullCheck(L_17);
		int32_t L_20 = L_19;
		int32_t L_21 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		NullCheck(L_15);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_21, (int32_t)2)), (int32_t)1))), (int16_t)0);
		DeflateManager_t3554793512 * L_22 = ___s0;
		NullCheck(L_22);
		int32_t L_23 = L_22->get_heap_max_60();
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_23, (int32_t)1));
		goto IL_0139;
	}

IL_0082:
	{
		DeflateManager_t3554793512 * L_24 = ___s0;
		NullCheck(L_24);
		Int32U5BU5D_t385246372* L_25 = L_24->get_heap_58();
		int32_t L_26 = V_5;
		NullCheck(L_25);
		int32_t L_27 = L_26;
		int32_t L_28 = (L_25)->GetAt(static_cast<il2cpp_array_size_t>(L_27));
		V_6 = L_28;
		Int16U5BU5D_t3686840178* L_29 = V_0;
		Int16U5BU5D_t3686840178* L_30 = V_0;
		int32_t L_31 = V_6;
		NullCheck(L_30);
		int32_t L_32 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_31, (int32_t)2)), (int32_t)1));
		int16_t L_33 = (L_30)->GetAt(static_cast<il2cpp_array_size_t>(L_32));
		NullCheck(L_29);
		int32_t L_34 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_33, (int32_t)2)), (int32_t)1));
		int16_t L_35 = (L_29)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		V_8 = ((int32_t)il2cpp_codegen_add((int32_t)L_35, (int32_t)1));
		int32_t L_36 = V_8;
		int32_t L_37 = V_4;
		if ((((int32_t)L_36) <= ((int32_t)L_37)))
		{
			goto IL_00b2;
		}
	}
	{
		int32_t L_38 = V_4;
		V_8 = L_38;
		int32_t L_39 = V_11;
		V_11 = ((int32_t)il2cpp_codegen_add((int32_t)L_39, (int32_t)1));
	}

IL_00b2:
	{
		Int16U5BU5D_t3686840178* L_40 = V_0;
		int32_t L_41 = V_6;
		int32_t L_42 = V_8;
		NullCheck(L_40);
		(L_40)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_41, (int32_t)2)), (int32_t)1))), (int16_t)(((int16_t)((int16_t)L_42))));
		int32_t L_43 = V_6;
		int32_t L_44 = __this->get_max_code_10();
		if ((((int32_t)L_43) <= ((int32_t)L_44)))
		{
			goto IL_00cf;
		}
	}
	{
		goto IL_0133;
	}

IL_00cf:
	{
		DeflateManager_t3554793512 * L_45 = ___s0;
		NullCheck(L_45);
		Int16U5BU5D_t3686840178* L_46 = L_45->get_bl_count_57();
		int32_t L_47 = V_8;
		NullCheck(L_46);
		int16_t* L_48 = ((L_46)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_47)));
		int32_t L_49 = *((int16_t*)L_48);
		*((int16_t*)L_48) = (int16_t)(((int16_t)((int16_t)((int32_t)il2cpp_codegen_add((int32_t)L_49, (int32_t)1)))));
		V_9 = 0;
		int32_t L_50 = V_6;
		int32_t L_51 = V_3;
		if ((((int32_t)L_50) < ((int32_t)L_51)))
		{
			goto IL_00f5;
		}
	}
	{
		Int32U5BU5D_t385246372* L_52 = V_2;
		int32_t L_53 = V_6;
		int32_t L_54 = V_3;
		NullCheck(L_52);
		int32_t L_55 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_53, (int32_t)L_54));
		int32_t L_56 = (L_52)->GetAt(static_cast<il2cpp_array_size_t>(L_55));
		V_9 = L_56;
	}

IL_00f5:
	{
		Int16U5BU5D_t3686840178* L_57 = V_0;
		int32_t L_58 = V_6;
		NullCheck(L_57);
		int32_t L_59 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_58, (int32_t)2));
		int16_t L_60 = (L_57)->GetAt(static_cast<il2cpp_array_size_t>(L_59));
		V_10 = L_60;
		DeflateManager_t3554793512 * L_61 = ___s0;
		DeflateManager_t3554793512 * L_62 = L_61;
		NullCheck(L_62);
		int32_t L_63 = L_62->get_opt_len_66();
		int16_t L_64 = V_10;
		int32_t L_65 = V_8;
		int32_t L_66 = V_9;
		NullCheck(L_62);
		L_62->set_opt_len_66(((int32_t)il2cpp_codegen_add((int32_t)L_63, (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_64, (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_65, (int32_t)L_66)))))));
		Int16U5BU5D_t3686840178* L_67 = V_1;
		if (!L_67)
		{
			goto IL_0133;
		}
	}
	{
		DeflateManager_t3554793512 * L_68 = ___s0;
		DeflateManager_t3554793512 * L_69 = L_68;
		NullCheck(L_69);
		int32_t L_70 = L_69->get_static_len_67();
		int16_t L_71 = V_10;
		Int16U5BU5D_t3686840178* L_72 = V_1;
		int32_t L_73 = V_6;
		NullCheck(L_72);
		int32_t L_74 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_73, (int32_t)2)), (int32_t)1));
		int16_t L_75 = (L_72)->GetAt(static_cast<il2cpp_array_size_t>(L_74));
		int32_t L_76 = V_9;
		NullCheck(L_69);
		L_69->set_static_len_67(((int32_t)il2cpp_codegen_add((int32_t)L_70, (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_71, (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_75, (int32_t)L_76)))))));
	}

IL_0133:
	{
		int32_t L_77 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_77, (int32_t)1));
	}

IL_0139:
	{
		int32_t L_78 = V_5;
		IL2CPP_RUNTIME_CLASS_INIT(Tree_t776904304_il2cpp_TypeInfo_var);
		int32_t L_79 = ((Tree_t776904304_StaticFields*)il2cpp_codegen_static_fields_for(Tree_t776904304_il2cpp_TypeInfo_var))->get_HEAP_SIZE_0();
		if ((((int32_t)L_78) < ((int32_t)L_79)))
		{
			goto IL_0082;
		}
	}
	{
		int32_t L_80 = V_11;
		if (L_80)
		{
			goto IL_014d;
		}
	}
	{
		return;
	}

IL_014d:
	{
		int32_t L_81 = V_4;
		V_8 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_81, (int32_t)1));
		goto IL_015e;
	}

IL_0158:
	{
		int32_t L_82 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_82, (int32_t)1));
	}

IL_015e:
	{
		DeflateManager_t3554793512 * L_83 = ___s0;
		NullCheck(L_83);
		Int16U5BU5D_t3686840178* L_84 = L_83->get_bl_count_57();
		int32_t L_85 = V_8;
		NullCheck(L_84);
		int32_t L_86 = L_85;
		int16_t L_87 = (L_84)->GetAt(static_cast<il2cpp_array_size_t>(L_86));
		if (!L_87)
		{
			goto IL_0158;
		}
	}
	{
		DeflateManager_t3554793512 * L_88 = ___s0;
		NullCheck(L_88);
		Int16U5BU5D_t3686840178* L_89 = L_88->get_bl_count_57();
		int32_t L_90 = V_8;
		NullCheck(L_89);
		int16_t* L_91 = ((L_89)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_90)));
		int32_t L_92 = *((int16_t*)L_91);
		*((int16_t*)L_91) = (int16_t)(((int16_t)((int16_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_92, (int32_t)1)))));
		DeflateManager_t3554793512 * L_93 = ___s0;
		NullCheck(L_93);
		Int16U5BU5D_t3686840178* L_94 = L_93->get_bl_count_57();
		int32_t L_95 = V_8;
		DeflateManager_t3554793512 * L_96 = ___s0;
		NullCheck(L_96);
		Int16U5BU5D_t3686840178* L_97 = L_96->get_bl_count_57();
		int32_t L_98 = V_8;
		NullCheck(L_97);
		int32_t L_99 = ((int32_t)il2cpp_codegen_add((int32_t)L_98, (int32_t)1));
		int16_t L_100 = (L_97)->GetAt(static_cast<il2cpp_array_size_t>(L_99));
		NullCheck(L_94);
		(L_94)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_95, (int32_t)1))), (int16_t)(((int16_t)((int16_t)((int32_t)il2cpp_codegen_add((int32_t)L_100, (int32_t)2))))));
		DeflateManager_t3554793512 * L_101 = ___s0;
		NullCheck(L_101);
		Int16U5BU5D_t3686840178* L_102 = L_101->get_bl_count_57();
		int32_t L_103 = V_4;
		NullCheck(L_102);
		int16_t* L_104 = ((L_102)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_103)));
		int32_t L_105 = *((int16_t*)L_104);
		*((int16_t*)L_104) = (int16_t)(((int16_t)((int16_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_105, (int32_t)1)))));
		int32_t L_106 = V_11;
		V_11 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_106, (int32_t)2));
		int32_t L_107 = V_11;
		if ((((int32_t)L_107) > ((int32_t)0)))
		{
			goto IL_014d;
		}
	}
	{
		int32_t L_108 = V_4;
		V_8 = L_108;
		goto IL_0245;
	}

IL_01c2:
	{
		DeflateManager_t3554793512 * L_109 = ___s0;
		NullCheck(L_109);
		Int16U5BU5D_t3686840178* L_110 = L_109->get_bl_count_57();
		int32_t L_111 = V_8;
		NullCheck(L_110);
		int32_t L_112 = L_111;
		int16_t L_113 = (L_110)->GetAt(static_cast<il2cpp_array_size_t>(L_112));
		V_6 = L_113;
		goto IL_0238;
	}

IL_01d2:
	{
		DeflateManager_t3554793512 * L_114 = ___s0;
		NullCheck(L_114);
		Int32U5BU5D_t385246372* L_115 = L_114->get_heap_58();
		int32_t L_116 = V_5;
		int32_t L_117 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_116, (int32_t)1));
		V_5 = L_117;
		NullCheck(L_115);
		int32_t L_118 = L_117;
		int32_t L_119 = (L_115)->GetAt(static_cast<il2cpp_array_size_t>(L_118));
		V_7 = L_119;
		int32_t L_120 = V_7;
		int32_t L_121 = __this->get_max_code_10();
		if ((((int32_t)L_120) <= ((int32_t)L_121)))
		{
			goto IL_01f4;
		}
	}
	{
		goto IL_0238;
	}

IL_01f4:
	{
		Int16U5BU5D_t3686840178* L_122 = V_0;
		int32_t L_123 = V_7;
		NullCheck(L_122);
		int32_t L_124 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_123, (int32_t)2)), (int32_t)1));
		int16_t L_125 = (L_122)->GetAt(static_cast<il2cpp_array_size_t>(L_124));
		int32_t L_126 = V_8;
		if ((((int32_t)L_125) == ((int32_t)L_126)))
		{
			goto IL_0232;
		}
	}
	{
		DeflateManager_t3554793512 * L_127 = ___s0;
		DeflateManager_t3554793512 * L_128 = ___s0;
		NullCheck(L_128);
		int32_t L_129 = L_128->get_opt_len_66();
		int32_t L_130 = V_8;
		Int16U5BU5D_t3686840178* L_131 = V_0;
		int32_t L_132 = V_7;
		NullCheck(L_131);
		int32_t L_133 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_132, (int32_t)2)), (int32_t)1));
		int16_t L_134 = (L_131)->GetAt(static_cast<il2cpp_array_size_t>(L_133));
		Int16U5BU5D_t3686840178* L_135 = V_0;
		int32_t L_136 = V_7;
		NullCheck(L_135);
		int32_t L_137 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_136, (int32_t)2));
		int16_t L_138 = (L_135)->GetAt(static_cast<il2cpp_array_size_t>(L_137));
		NullCheck(L_127);
		L_127->set_opt_len_66((((int32_t)((int32_t)((int64_t)il2cpp_codegen_add((int64_t)(((int64_t)((int64_t)L_129))), (int64_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)il2cpp_codegen_subtract((int64_t)(((int64_t)((int64_t)L_130))), (int64_t)(((int64_t)((int64_t)L_134))))), (int64_t)(((int64_t)((int64_t)L_138)))))))))));
		Int16U5BU5D_t3686840178* L_139 = V_0;
		int32_t L_140 = V_7;
		int32_t L_141 = V_8;
		NullCheck(L_139);
		(L_139)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_140, (int32_t)2)), (int32_t)1))), (int16_t)(((int16_t)((int16_t)L_141))));
	}

IL_0232:
	{
		int32_t L_142 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_142, (int32_t)1));
	}

IL_0238:
	{
		int32_t L_143 = V_6;
		if (L_143)
		{
			goto IL_01d2;
		}
	}
	{
		int32_t L_144 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_144, (int32_t)1));
	}

IL_0245:
	{
		int32_t L_145 = V_8;
		if (L_145)
		{
			goto IL_01c2;
		}
	}
	{
		return;
	}
}
// System.Void Pathfinding.Ionic.Zlib.Tree::build_tree(Pathfinding.Ionic.Zlib.DeflateManager)
extern "C" IL2CPP_METHOD_ATTR void Tree_build_tree_m676301226 (Tree_t776904304 * __this, DeflateManager_t3554793512 * ___s0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Tree_build_tree_m676301226_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Int16U5BU5D_t3686840178* V_0 = NULL;
	Int16U5BU5D_t3686840178* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int16_t V_8 = 0;
	int32_t G_B9_0 = 0;
	Int32U5BU5D_t385246372* G_B9_1 = NULL;
	int32_t G_B8_0 = 0;
	Int32U5BU5D_t385246372* G_B8_1 = NULL;
	int32_t G_B10_0 = 0;
	int32_t G_B10_1 = 0;
	Int32U5BU5D_t385246372* G_B10_2 = NULL;
	{
		Int16U5BU5D_t3686840178* L_0 = __this->get_dyn_tree_9();
		V_0 = L_0;
		StaticTree_t3743034110 * L_1 = __this->get_staticTree_11();
		NullCheck(L_1);
		Int16U5BU5D_t3686840178* L_2 = L_1->get_treeCodes_5();
		V_1 = L_2;
		StaticTree_t3743034110 * L_3 = __this->get_staticTree_11();
		NullCheck(L_3);
		int32_t L_4 = L_3->get_elems_8();
		V_2 = L_4;
		V_5 = (-1);
		DeflateManager_t3554793512 * L_5 = ___s0;
		NullCheck(L_5);
		L_5->set_heap_len_59(0);
		DeflateManager_t3554793512 * L_6 = ___s0;
		IL2CPP_RUNTIME_CLASS_INIT(Tree_t776904304_il2cpp_TypeInfo_var);
		int32_t L_7 = ((Tree_t776904304_StaticFields*)il2cpp_codegen_static_fields_for(Tree_t776904304_il2cpp_TypeInfo_var))->get_HEAP_SIZE_0();
		NullCheck(L_6);
		L_6->set_heap_max_60(L_7);
		V_3 = 0;
		goto IL_007d;
	}

IL_003b:
	{
		Int16U5BU5D_t3686840178* L_8 = V_0;
		int32_t L_9 = V_3;
		NullCheck(L_8);
		int32_t L_10 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_9, (int32_t)2));
		int16_t L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		if (!L_11)
		{
			goto IL_0071;
		}
	}
	{
		DeflateManager_t3554793512 * L_12 = ___s0;
		NullCheck(L_12);
		Int32U5BU5D_t385246372* L_13 = L_12->get_heap_58();
		DeflateManager_t3554793512 * L_14 = ___s0;
		DeflateManager_t3554793512 * L_15 = L_14;
		NullCheck(L_15);
		int32_t L_16 = L_15->get_heap_len_59();
		int32_t L_17 = ((int32_t)il2cpp_codegen_add((int32_t)L_16, (int32_t)1));
		V_7 = L_17;
		NullCheck(L_15);
		L_15->set_heap_len_59(L_17);
		int32_t L_18 = V_7;
		int32_t L_19 = V_3;
		int32_t L_20 = L_19;
		V_5 = L_20;
		NullCheck(L_13);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(L_18), (int32_t)L_20);
		DeflateManager_t3554793512 * L_21 = ___s0;
		NullCheck(L_21);
		SByteU5BU5D_t2651576203* L_22 = L_21->get_depth_61();
		int32_t L_23 = V_3;
		NullCheck(L_22);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(L_23), (int8_t)0);
		goto IL_0079;
	}

IL_0071:
	{
		Int16U5BU5D_t3686840178* L_24 = V_0;
		int32_t L_25 = V_3;
		NullCheck(L_24);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_25, (int32_t)2)), (int32_t)1))), (int16_t)0);
	}

IL_0079:
	{
		int32_t L_26 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_26, (int32_t)1));
	}

IL_007d:
	{
		int32_t L_27 = V_3;
		int32_t L_28 = V_2;
		if ((((int32_t)L_27) < ((int32_t)L_28)))
		{
			goto IL_003b;
		}
	}
	{
		goto IL_00f9;
	}

IL_0089:
	{
		DeflateManager_t3554793512 * L_29 = ___s0;
		NullCheck(L_29);
		Int32U5BU5D_t385246372* L_30 = L_29->get_heap_58();
		DeflateManager_t3554793512 * L_31 = ___s0;
		DeflateManager_t3554793512 * L_32 = L_31;
		NullCheck(L_32);
		int32_t L_33 = L_32->get_heap_len_59();
		int32_t L_34 = ((int32_t)il2cpp_codegen_add((int32_t)L_33, (int32_t)1));
		V_7 = L_34;
		NullCheck(L_32);
		L_32->set_heap_len_59(L_34);
		int32_t L_35 = V_7;
		int32_t L_36 = V_5;
		G_B8_0 = L_35;
		G_B8_1 = L_30;
		if ((((int32_t)L_36) >= ((int32_t)2)))
		{
			G_B9_0 = L_35;
			G_B9_1 = L_30;
			goto IL_00b6;
		}
	}
	{
		int32_t L_37 = V_5;
		int32_t L_38 = ((int32_t)il2cpp_codegen_add((int32_t)L_37, (int32_t)1));
		V_5 = L_38;
		G_B10_0 = L_38;
		G_B10_1 = G_B8_0;
		G_B10_2 = G_B8_1;
		goto IL_00b7;
	}

IL_00b6:
	{
		G_B10_0 = 0;
		G_B10_1 = G_B9_0;
		G_B10_2 = G_B9_1;
	}

IL_00b7:
	{
		int32_t L_39 = G_B10_0;
		V_7 = L_39;
		NullCheck(G_B10_2);
		(G_B10_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B10_1), (int32_t)L_39);
		int32_t L_40 = V_7;
		V_6 = L_40;
		Int16U5BU5D_t3686840178* L_41 = V_0;
		int32_t L_42 = V_6;
		NullCheck(L_41);
		(L_41)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_multiply((int32_t)L_42, (int32_t)2))), (int16_t)1);
		DeflateManager_t3554793512 * L_43 = ___s0;
		NullCheck(L_43);
		SByteU5BU5D_t2651576203* L_44 = L_43->get_depth_61();
		int32_t L_45 = V_6;
		NullCheck(L_44);
		(L_44)->SetAt(static_cast<il2cpp_array_size_t>(L_45), (int8_t)0);
		DeflateManager_t3554793512 * L_46 = ___s0;
		DeflateManager_t3554793512 * L_47 = L_46;
		NullCheck(L_47);
		int32_t L_48 = L_47->get_opt_len_66();
		NullCheck(L_47);
		L_47->set_opt_len_66(((int32_t)il2cpp_codegen_subtract((int32_t)L_48, (int32_t)1)));
		Int16U5BU5D_t3686840178* L_49 = V_1;
		if (!L_49)
		{
			goto IL_00f9;
		}
	}
	{
		DeflateManager_t3554793512 * L_50 = ___s0;
		DeflateManager_t3554793512 * L_51 = L_50;
		NullCheck(L_51);
		int32_t L_52 = L_51->get_static_len_67();
		Int16U5BU5D_t3686840178* L_53 = V_1;
		int32_t L_54 = V_6;
		NullCheck(L_53);
		int32_t L_55 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_54, (int32_t)2)), (int32_t)1));
		int16_t L_56 = (L_53)->GetAt(static_cast<il2cpp_array_size_t>(L_55));
		NullCheck(L_51);
		L_51->set_static_len_67(((int32_t)il2cpp_codegen_subtract((int32_t)L_52, (int32_t)L_56)));
	}

IL_00f9:
	{
		DeflateManager_t3554793512 * L_57 = ___s0;
		NullCheck(L_57);
		int32_t L_58 = L_57->get_heap_len_59();
		if ((((int32_t)L_58) < ((int32_t)2)))
		{
			goto IL_0089;
		}
	}
	{
		int32_t L_59 = V_5;
		__this->set_max_code_10(L_59);
		DeflateManager_t3554793512 * L_60 = ___s0;
		NullCheck(L_60);
		int32_t L_61 = L_60->get_heap_len_59();
		V_3 = ((int32_t)((int32_t)L_61/(int32_t)2));
		goto IL_0127;
	}

IL_011b:
	{
		DeflateManager_t3554793512 * L_62 = ___s0;
		Int16U5BU5D_t3686840178* L_63 = V_0;
		int32_t L_64 = V_3;
		NullCheck(L_62);
		DeflateManager_pqdownheap_m3593677249(L_62, L_63, L_64, /*hidden argument*/NULL);
		int32_t L_65 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_65, (int32_t)1));
	}

IL_0127:
	{
		int32_t L_66 = V_3;
		if ((((int32_t)L_66) >= ((int32_t)1)))
		{
			goto IL_011b;
		}
	}
	{
		int32_t L_67 = V_2;
		V_6 = L_67;
	}

IL_0131:
	{
		DeflateManager_t3554793512 * L_68 = ___s0;
		NullCheck(L_68);
		Int32U5BU5D_t385246372* L_69 = L_68->get_heap_58();
		NullCheck(L_69);
		int32_t L_70 = 1;
		int32_t L_71 = (L_69)->GetAt(static_cast<il2cpp_array_size_t>(L_70));
		V_3 = L_71;
		DeflateManager_t3554793512 * L_72 = ___s0;
		NullCheck(L_72);
		Int32U5BU5D_t385246372* L_73 = L_72->get_heap_58();
		DeflateManager_t3554793512 * L_74 = ___s0;
		NullCheck(L_74);
		Int32U5BU5D_t385246372* L_75 = L_74->get_heap_58();
		DeflateManager_t3554793512 * L_76 = ___s0;
		DeflateManager_t3554793512 * L_77 = L_76;
		NullCheck(L_77);
		int32_t L_78 = L_77->get_heap_len_59();
		int32_t L_79 = L_78;
		V_7 = L_79;
		NullCheck(L_77);
		L_77->set_heap_len_59(((int32_t)il2cpp_codegen_subtract((int32_t)L_79, (int32_t)1)));
		int32_t L_80 = V_7;
		NullCheck(L_75);
		int32_t L_81 = L_80;
		int32_t L_82 = (L_75)->GetAt(static_cast<il2cpp_array_size_t>(L_81));
		NullCheck(L_73);
		(L_73)->SetAt(static_cast<il2cpp_array_size_t>(1), (int32_t)L_82);
		DeflateManager_t3554793512 * L_83 = ___s0;
		Int16U5BU5D_t3686840178* L_84 = V_0;
		NullCheck(L_83);
		DeflateManager_pqdownheap_m3593677249(L_83, L_84, 1, /*hidden argument*/NULL);
		DeflateManager_t3554793512 * L_85 = ___s0;
		NullCheck(L_85);
		Int32U5BU5D_t385246372* L_86 = L_85->get_heap_58();
		NullCheck(L_86);
		int32_t L_87 = 1;
		int32_t L_88 = (L_86)->GetAt(static_cast<il2cpp_array_size_t>(L_87));
		V_4 = L_88;
		DeflateManager_t3554793512 * L_89 = ___s0;
		NullCheck(L_89);
		Int32U5BU5D_t385246372* L_90 = L_89->get_heap_58();
		DeflateManager_t3554793512 * L_91 = ___s0;
		DeflateManager_t3554793512 * L_92 = L_91;
		NullCheck(L_92);
		int32_t L_93 = L_92->get_heap_max_60();
		int32_t L_94 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_93, (int32_t)1));
		V_7 = L_94;
		NullCheck(L_92);
		L_92->set_heap_max_60(L_94);
		int32_t L_95 = V_7;
		int32_t L_96 = V_3;
		NullCheck(L_90);
		(L_90)->SetAt(static_cast<il2cpp_array_size_t>(L_95), (int32_t)L_96);
		DeflateManager_t3554793512 * L_97 = ___s0;
		NullCheck(L_97);
		Int32U5BU5D_t385246372* L_98 = L_97->get_heap_58();
		DeflateManager_t3554793512 * L_99 = ___s0;
		DeflateManager_t3554793512 * L_100 = L_99;
		NullCheck(L_100);
		int32_t L_101 = L_100->get_heap_max_60();
		int32_t L_102 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_101, (int32_t)1));
		V_7 = L_102;
		NullCheck(L_100);
		L_100->set_heap_max_60(L_102);
		int32_t L_103 = V_7;
		int32_t L_104 = V_4;
		NullCheck(L_98);
		(L_98)->SetAt(static_cast<il2cpp_array_size_t>(L_103), (int32_t)L_104);
		Int16U5BU5D_t3686840178* L_105 = V_0;
		int32_t L_106 = V_6;
		Int16U5BU5D_t3686840178* L_107 = V_0;
		int32_t L_108 = V_3;
		NullCheck(L_107);
		int32_t L_109 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_108, (int32_t)2));
		int16_t L_110 = (L_107)->GetAt(static_cast<il2cpp_array_size_t>(L_109));
		Int16U5BU5D_t3686840178* L_111 = V_0;
		int32_t L_112 = V_4;
		NullCheck(L_111);
		int32_t L_113 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_112, (int32_t)2));
		int16_t L_114 = (L_111)->GetAt(static_cast<il2cpp_array_size_t>(L_113));
		NullCheck(L_105);
		(L_105)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_multiply((int32_t)L_106, (int32_t)2))), (int16_t)(((int16_t)((int16_t)((int32_t)il2cpp_codegen_add((int32_t)L_110, (int32_t)L_114))))));
		DeflateManager_t3554793512 * L_115 = ___s0;
		NullCheck(L_115);
		SByteU5BU5D_t2651576203* L_116 = L_115->get_depth_61();
		int32_t L_117 = V_6;
		DeflateManager_t3554793512 * L_118 = ___s0;
		NullCheck(L_118);
		SByteU5BU5D_t2651576203* L_119 = L_118->get_depth_61();
		int32_t L_120 = V_3;
		NullCheck(L_119);
		int32_t L_121 = L_120;
		int8_t L_122 = (L_119)->GetAt(static_cast<il2cpp_array_size_t>(L_121));
		DeflateManager_t3554793512 * L_123 = ___s0;
		NullCheck(L_123);
		SByteU5BU5D_t2651576203* L_124 = L_123->get_depth_61();
		int32_t L_125 = V_4;
		NullCheck(L_124);
		int32_t L_126 = L_125;
		int8_t L_127 = (L_124)->GetAt(static_cast<il2cpp_array_size_t>(L_126));
		uint8_t L_128 = Math_Max_m4189907297(NULL /*static, unused*/, (uint8_t)(((int32_t)((uint8_t)L_122))), (uint8_t)(((int32_t)((uint8_t)L_127))), /*hidden argument*/NULL);
		NullCheck(L_116);
		(L_116)->SetAt(static_cast<il2cpp_array_size_t>(L_117), (int8_t)(((int8_t)((int8_t)((int32_t)il2cpp_codegen_add((int32_t)L_128, (int32_t)1))))));
		Int16U5BU5D_t3686840178* L_129 = V_0;
		int32_t L_130 = V_3;
		Int16U5BU5D_t3686840178* L_131 = V_0;
		int32_t L_132 = V_4;
		int32_t L_133 = V_6;
		int16_t L_134 = (((int16_t)((int16_t)L_133)));
		V_8 = L_134;
		NullCheck(L_131);
		(L_131)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_132, (int32_t)2)), (int32_t)1))), (int16_t)L_134);
		int16_t L_135 = V_8;
		NullCheck(L_129);
		(L_129)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_130, (int32_t)2)), (int32_t)1))), (int16_t)L_135);
		DeflateManager_t3554793512 * L_136 = ___s0;
		NullCheck(L_136);
		Int32U5BU5D_t385246372* L_137 = L_136->get_heap_58();
		int32_t L_138 = V_6;
		int32_t L_139 = L_138;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_139, (int32_t)1));
		NullCheck(L_137);
		(L_137)->SetAt(static_cast<il2cpp_array_size_t>(1), (int32_t)L_139);
		DeflateManager_t3554793512 * L_140 = ___s0;
		Int16U5BU5D_t3686840178* L_141 = V_0;
		NullCheck(L_140);
		DeflateManager_pqdownheap_m3593677249(L_140, L_141, 1, /*hidden argument*/NULL);
		DeflateManager_t3554793512 * L_142 = ___s0;
		NullCheck(L_142);
		int32_t L_143 = L_142->get_heap_len_59();
		if ((((int32_t)L_143) >= ((int32_t)2)))
		{
			goto IL_0131;
		}
	}
	{
		DeflateManager_t3554793512 * L_144 = ___s0;
		NullCheck(L_144);
		Int32U5BU5D_t385246372* L_145 = L_144->get_heap_58();
		DeflateManager_t3554793512 * L_146 = ___s0;
		DeflateManager_t3554793512 * L_147 = L_146;
		NullCheck(L_147);
		int32_t L_148 = L_147->get_heap_max_60();
		int32_t L_149 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_148, (int32_t)1));
		V_7 = L_149;
		NullCheck(L_147);
		L_147->set_heap_max_60(L_149);
		int32_t L_150 = V_7;
		DeflateManager_t3554793512 * L_151 = ___s0;
		NullCheck(L_151);
		Int32U5BU5D_t385246372* L_152 = L_151->get_heap_58();
		NullCheck(L_152);
		int32_t L_153 = 1;
		int32_t L_154 = (L_152)->GetAt(static_cast<il2cpp_array_size_t>(L_153));
		NullCheck(L_145);
		(L_145)->SetAt(static_cast<il2cpp_array_size_t>(L_150), (int32_t)L_154);
		DeflateManager_t3554793512 * L_155 = ___s0;
		Tree_gen_bitlen_m1750572723(__this, L_155, /*hidden argument*/NULL);
		Int16U5BU5D_t3686840178* L_156 = V_0;
		int32_t L_157 = V_5;
		DeflateManager_t3554793512 * L_158 = ___s0;
		NullCheck(L_158);
		Int16U5BU5D_t3686840178* L_159 = L_158->get_bl_count_57();
		IL2CPP_RUNTIME_CLASS_INIT(Tree_t776904304_il2cpp_TypeInfo_var);
		Tree_gen_codes_m2921036433(NULL /*static, unused*/, L_156, L_157, L_159, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Pathfinding.Ionic.Zlib.Tree::gen_codes(System.Int16[],System.Int32,System.Int16[])
extern "C" IL2CPP_METHOD_ATTR void Tree_gen_codes_m2921036433 (RuntimeObject * __this /* static, unused */, Int16U5BU5D_t3686840178* ___tree0, int32_t ___max_code1, Int16U5BU5D_t3686840178* ___bl_count2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Tree_gen_codes_m2921036433_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Int16U5BU5D_t3686840178* V_0 = NULL;
	int16_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int16_t V_5 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(InternalConstants_t3209989667_il2cpp_TypeInfo_var);
		int32_t L_0 = ((InternalConstants_t3209989667_StaticFields*)il2cpp_codegen_static_fields_for(InternalConstants_t3209989667_il2cpp_TypeInfo_var))->get_MAX_BITS_0();
		Int16U5BU5D_t3686840178* L_1 = (Int16U5BU5D_t3686840178*)SZArrayNew(Int16U5BU5D_t3686840178_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)1)));
		V_0 = L_1;
		V_1 = (int16_t)0;
		V_2 = 1;
		goto IL_0029;
	}

IL_0016:
	{
		Int16U5BU5D_t3686840178* L_2 = V_0;
		int32_t L_3 = V_2;
		int16_t L_4 = V_1;
		Int16U5BU5D_t3686840178* L_5 = ___bl_count2;
		int32_t L_6 = V_2;
		NullCheck(L_5);
		int32_t L_7 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_6, (int32_t)1));
		int16_t L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		int16_t L_9 = (((int16_t)((int16_t)((int32_t)((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)L_8))<<(int32_t)1)))));
		V_1 = L_9;
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(L_3), (int16_t)L_9);
		int32_t L_10 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1));
	}

IL_0029:
	{
		int32_t L_11 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(InternalConstants_t3209989667_il2cpp_TypeInfo_var);
		int32_t L_12 = ((InternalConstants_t3209989667_StaticFields*)il2cpp_codegen_static_fields_for(InternalConstants_t3209989667_il2cpp_TypeInfo_var))->get_MAX_BITS_0();
		if ((((int32_t)L_11) <= ((int32_t)L_12)))
		{
			goto IL_0016;
		}
	}
	{
		V_3 = 0;
		goto IL_0074;
	}

IL_003b:
	{
		Int16U5BU5D_t3686840178* L_13 = ___tree0;
		int32_t L_14 = V_3;
		NullCheck(L_13);
		int32_t L_15 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_14, (int32_t)2)), (int32_t)1));
		int16_t L_16 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		V_4 = L_16;
		int32_t L_17 = V_4;
		if (L_17)
		{
			goto IL_0050;
		}
	}
	{
		goto IL_0070;
	}

IL_0050:
	{
		Int16U5BU5D_t3686840178* L_18 = ___tree0;
		int32_t L_19 = V_3;
		Int16U5BU5D_t3686840178* L_20 = V_0;
		int32_t L_21 = V_4;
		NullCheck(L_20);
		int16_t* L_22 = ((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)));
		int32_t L_23 = *((int16_t*)L_22);
		int32_t L_24 = L_23;
		V_5 = (int16_t)L_24;
		*((int16_t*)L_22) = (int16_t)(((int16_t)((int16_t)((int32_t)il2cpp_codegen_add((int32_t)L_24, (int32_t)1)))));
		int16_t L_25 = V_5;
		int32_t L_26 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(Tree_t776904304_il2cpp_TypeInfo_var);
		int32_t L_27 = Tree_bi_reverse_m1782502178(NULL /*static, unused*/, L_25, L_26, /*hidden argument*/NULL);
		NullCheck(L_18);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_multiply((int32_t)L_19, (int32_t)2))), (int16_t)(((int16_t)((int16_t)L_27))));
	}

IL_0070:
	{
		int32_t L_28 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_28, (int32_t)1));
	}

IL_0074:
	{
		int32_t L_29 = V_3;
		int32_t L_30 = ___max_code1;
		if ((((int32_t)L_29) <= ((int32_t)L_30)))
		{
			goto IL_003b;
		}
	}
	{
		return;
	}
}
// System.Int32 Pathfinding.Ionic.Zlib.Tree::bi_reverse(System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR int32_t Tree_bi_reverse_m1782502178 (RuntimeObject * __this /* static, unused */, int32_t ___code0, int32_t ___len1, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		V_0 = 0;
	}

IL_0002:
	{
		int32_t L_0 = V_0;
		int32_t L_1 = ___code0;
		V_0 = ((int32_t)((int32_t)L_0|(int32_t)((int32_t)((int32_t)L_1&(int32_t)1))));
		int32_t L_2 = ___code0;
		___code0 = ((int32_t)((int32_t)L_2>>(int32_t)1));
		int32_t L_3 = V_0;
		V_0 = ((int32_t)((int32_t)L_3<<(int32_t)1));
		int32_t L_4 = ___len1;
		int32_t L_5 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_4, (int32_t)1));
		___len1 = L_5;
		if ((((int32_t)L_5) > ((int32_t)0)))
		{
			goto IL_0002;
		}
	}
	{
		int32_t L_6 = V_0;
		return ((int32_t)((int32_t)L_6>>(int32_t)1));
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
// System.Void Pathfinding.Ionic.Zlib.WorkItem::.ctor(System.Int32,Pathfinding.Ionic.Zlib.CompressionLevel,Pathfinding.Ionic.Zlib.CompressionStrategy,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void WorkItem__ctor_m105125814 (WorkItem_t2706050929 * __this, int32_t ___size0, int32_t ___compressLevel1, int32_t ___strategy2, int32_t ___ix3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WorkItem__ctor_m105125814_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___size0;
		ByteU5BU5D_t4116647657* L_1 = (ByteU5BU5D_t4116647657*)SZArrayNew(ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var, (uint32_t)L_0);
		__this->set_buffer_0(L_1);
		int32_t L_2 = ___size0;
		int32_t L_3 = ___size0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)((int32_t)L_3/(int32_t)((int32_t)32768))), (int32_t)1)), (int32_t)5)), (int32_t)2))));
		int32_t L_4 = V_0;
		ByteU5BU5D_t4116647657* L_5 = (ByteU5BU5D_t4116647657*)SZArrayNew(ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var, (uint32_t)L_4);
		__this->set_compressed_1(L_5);
		ZlibCodec_t855427629 * L_6 = (ZlibCodec_t855427629 *)il2cpp_codegen_object_new(ZlibCodec_t855427629_il2cpp_TypeInfo_var);
		ZlibCodec__ctor_m2698404987(L_6, /*hidden argument*/NULL);
		__this->set_compressor_7(L_6);
		ZlibCodec_t855427629 * L_7 = __this->get_compressor_7();
		int32_t L_8 = ___compressLevel1;
		NullCheck(L_7);
		ZlibCodec_InitializeDeflate_m1391012963(L_7, L_8, (bool)0, /*hidden argument*/NULL);
		ZlibCodec_t855427629 * L_9 = __this->get_compressor_7();
		ByteU5BU5D_t4116647657* L_10 = __this->get_compressed_1();
		NullCheck(L_9);
		L_9->set_OutputBuffer_4(L_10);
		ZlibCodec_t855427629 * L_11 = __this->get_compressor_7();
		ByteU5BU5D_t4116647657* L_12 = __this->get_buffer_0();
		NullCheck(L_11);
		L_11->set_InputBuffer_0(L_12);
		int32_t L_13 = ___ix3;
		__this->set_index_3(L_13);
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
// System.Void Pathfinding.Ionic.Zlib.ZlibBaseStream::.ctor(System.IO.Stream,Pathfinding.Ionic.Zlib.CompressionMode,Pathfinding.Ionic.Zlib.CompressionLevel,Pathfinding.Ionic.Zlib.ZlibStreamFlavor,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void ZlibBaseStream__ctor_m4090808400 (ZlibBaseStream_t3561210688 * __this, Stream_t1273022909 * ___stream0, int32_t ___compressionMode1, int32_t ___level2, int32_t ___flavor3, bool ___leaveOpen4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ZlibBaseStream__ctor_m4090808400_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set__streamMode_2(2);
		__this->set__bufferSize_9(((int32_t)16384));
		ByteU5BU5D_t4116647657* L_0 = (ByteU5BU5D_t4116647657*)SZArrayNew(ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var, (uint32_t)1);
		__this->set__buf1_10(L_0);
		IL2CPP_RUNTIME_CLASS_INIT(Stream_t1273022909_il2cpp_TypeInfo_var);
		Stream__ctor_m3881936881(__this, /*hidden argument*/NULL);
		__this->set__flushMode_3(0);
		Stream_t1273022909 * L_1 = ___stream0;
		__this->set__stream_11(L_1);
		bool L_2 = ___leaveOpen4;
		__this->set__leaveOpen_7(L_2);
		int32_t L_3 = ___compressionMode1;
		__this->set__compressionMode_5(L_3);
		int32_t L_4 = ___flavor3;
		__this->set__flavor_4(L_4);
		int32_t L_5 = ___level2;
		__this->set__level_6(L_5);
		int32_t L_6 = ___flavor3;
		if ((!(((uint32_t)L_6) == ((uint32_t)((int32_t)1952)))))
		{
			goto IL_0067;
		}
	}
	{
		CRC32_t288211679 * L_7 = (CRC32_t288211679 *)il2cpp_codegen_object_new(CRC32_t288211679_il2cpp_TypeInfo_var);
		CRC32__ctor_m474582685(L_7, /*hidden argument*/NULL);
		__this->set_crc_13(L_7);
	}

IL_0067:
	{
		return;
	}
}
// System.Int32 Pathfinding.Ionic.Zlib.ZlibBaseStream::get_Crc32()
extern "C" IL2CPP_METHOD_ATTR int32_t ZlibBaseStream_get_Crc32_m3565177866 (ZlibBaseStream_t3561210688 * __this, const RuntimeMethod* method)
{
	{
		CRC32_t288211679 * L_0 = __this->get_crc_13();
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		return 0;
	}

IL_000d:
	{
		CRC32_t288211679 * L_1 = __this->get_crc_13();
		NullCheck(L_1);
		int32_t L_2 = CRC32_get_Crc32Result_m2014443844(L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Boolean Pathfinding.Ionic.Zlib.ZlibBaseStream::get__wantCompress()
extern "C" IL2CPP_METHOD_ATTR bool ZlibBaseStream_get__wantCompress_m408635950 (ZlibBaseStream_t3561210688 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get__compressionMode_5();
		return (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
	}
}
// Pathfinding.Ionic.Zlib.ZlibCodec Pathfinding.Ionic.Zlib.ZlibBaseStream::get_z()
extern "C" IL2CPP_METHOD_ATTR ZlibCodec_t855427629 * ZlibBaseStream_get_z_m2638430214 (ZlibBaseStream_t3561210688 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ZlibBaseStream_get_z_m2638430214_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		ZlibCodec_t855427629 * L_0 = __this->get__z_1();
		if (L_0)
		{
			goto IL_0066;
		}
	}
	{
		int32_t L_1 = __this->get__flavor_4();
		V_0 = (bool)((((int32_t)L_1) == ((int32_t)((int32_t)1950)))? 1 : 0);
		ZlibCodec_t855427629 * L_2 = (ZlibCodec_t855427629 *)il2cpp_codegen_object_new(ZlibCodec_t855427629_il2cpp_TypeInfo_var);
		ZlibCodec__ctor_m2698404987(L_2, /*hidden argument*/NULL);
		__this->set__z_1(L_2);
		int32_t L_3 = __this->get__compressionMode_5();
		if ((!(((uint32_t)L_3) == ((uint32_t)1))))
		{
			goto IL_0042;
		}
	}
	{
		ZlibCodec_t855427629 * L_4 = __this->get__z_1();
		bool L_5 = V_0;
		NullCheck(L_4);
		ZlibCodec_InitializeInflate_m1652333965(L_4, L_5, /*hidden argument*/NULL);
		goto IL_0066;
	}

IL_0042:
	{
		ZlibCodec_t855427629 * L_6 = __this->get__z_1();
		int32_t L_7 = __this->get_Strategy_12();
		NullCheck(L_6);
		L_6->set_Strategy_14(L_7);
		ZlibCodec_t855427629 * L_8 = __this->get__z_1();
		int32_t L_9 = __this->get__level_6();
		bool L_10 = V_0;
		NullCheck(L_8);
		ZlibCodec_InitializeDeflate_m1391012963(L_8, L_9, L_10, /*hidden argument*/NULL);
	}

IL_0066:
	{
		ZlibCodec_t855427629 * L_11 = __this->get__z_1();
		return L_11;
	}
}
// System.Byte[] Pathfinding.Ionic.Zlib.ZlibBaseStream::get_workingBuffer()
extern "C" IL2CPP_METHOD_ATTR ByteU5BU5D_t4116647657* ZlibBaseStream_get_workingBuffer_m1750492206 (ZlibBaseStream_t3561210688 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ZlibBaseStream_get_workingBuffer_m1750492206_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_t4116647657* L_0 = __this->get__workingBuffer_8();
		if (L_0)
		{
			goto IL_001c;
		}
	}
	{
		int32_t L_1 = __this->get__bufferSize_9();
		ByteU5BU5D_t4116647657* L_2 = (ByteU5BU5D_t4116647657*)SZArrayNew(ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var, (uint32_t)L_1);
		__this->set__workingBuffer_8(L_2);
	}

IL_001c:
	{
		ByteU5BU5D_t4116647657* L_3 = __this->get__workingBuffer_8();
		return L_3;
	}
}
// System.Void Pathfinding.Ionic.Zlib.ZlibBaseStream::Write(System.Byte[],System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void ZlibBaseStream_Write_m1435760464 (ZlibBaseStream_t3561210688 * __this, ByteU5BU5D_t4116647657* ___buffer0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ZlibBaseStream_Write_m1435760464_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	int32_t G_B12_0 = 0;
	String_t* G_B17_0 = NULL;
	int32_t G_B21_0 = 0;
	int32_t G_B26_0 = 0;
	{
		CRC32_t288211679 * L_0 = __this->get_crc_13();
		if (!L_0)
		{
			goto IL_0019;
		}
	}
	{
		CRC32_t288211679 * L_1 = __this->get_crc_13();
		ByteU5BU5D_t4116647657* L_2 = ___buffer0;
		int32_t L_3 = ___offset1;
		int32_t L_4 = ___count2;
		NullCheck(L_1);
		CRC32_SlurpBlock_m2489767400(L_1, L_2, L_3, L_4, /*hidden argument*/NULL);
	}

IL_0019:
	{
		int32_t L_5 = __this->get__streamMode_2();
		if ((!(((uint32_t)L_5) == ((uint32_t)2))))
		{
			goto IL_0031;
		}
	}
	{
		__this->set__streamMode_2(0);
		goto IL_0047;
	}

IL_0031:
	{
		int32_t L_6 = __this->get__streamMode_2();
		if (!L_6)
		{
			goto IL_0047;
		}
	}
	{
		ZlibException_t3942143964 * L_7 = (ZlibException_t3942143964 *)il2cpp_codegen_object_new(ZlibException_t3942143964_il2cpp_TypeInfo_var);
		ZlibException__ctor_m1084687637(L_7, _stringLiteral2995007023, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, NULL, ZlibBaseStream_Write_m1435760464_RuntimeMethod_var);
	}

IL_0047:
	{
		int32_t L_8 = ___count2;
		if (L_8)
		{
			goto IL_004e;
		}
	}
	{
		return;
	}

IL_004e:
	{
		ZlibCodec_t855427629 * L_9 = ZlibBaseStream_get_z_m2638430214(__this, /*hidden argument*/NULL);
		ByteU5BU5D_t4116647657* L_10 = ___buffer0;
		NullCheck(L_9);
		L_9->set_InputBuffer_0(L_10);
		ZlibCodec_t855427629 * L_11 = __this->get__z_1();
		int32_t L_12 = ___offset1;
		NullCheck(L_11);
		L_11->set_NextIn_1(L_12);
		ZlibCodec_t855427629 * L_13 = __this->get__z_1();
		int32_t L_14 = ___count2;
		NullCheck(L_13);
		L_13->set_AvailableBytesIn_2(L_14);
		V_0 = (bool)0;
	}

IL_0074:
	{
		ZlibCodec_t855427629 * L_15 = __this->get__z_1();
		ByteU5BU5D_t4116647657* L_16 = ZlibBaseStream_get_workingBuffer_m1750492206(__this, /*hidden argument*/NULL);
		NullCheck(L_15);
		L_15->set_OutputBuffer_4(L_16);
		ZlibCodec_t855427629 * L_17 = __this->get__z_1();
		NullCheck(L_17);
		L_17->set_NextOut_5(0);
		ZlibCodec_t855427629 * L_18 = __this->get__z_1();
		ByteU5BU5D_t4116647657* L_19 = __this->get__workingBuffer_8();
		NullCheck(L_19);
		NullCheck(L_18);
		L_18->set_AvailableBytesOut_6((((int32_t)((int32_t)(((RuntimeArray *)L_19)->max_length)))));
		bool L_20 = ZlibBaseStream_get__wantCompress_m408635950(__this, /*hidden argument*/NULL);
		if (!L_20)
		{
			goto IL_00c5;
		}
	}
	{
		ZlibCodec_t855427629 * L_21 = __this->get__z_1();
		int32_t L_22 = __this->get__flushMode_3();
		NullCheck(L_21);
		int32_t L_23 = ZlibCodec_Deflate_m110580741(L_21, L_22, /*hidden argument*/NULL);
		G_B12_0 = L_23;
		goto IL_00d6;
	}

IL_00c5:
	{
		ZlibCodec_t855427629 * L_24 = __this->get__z_1();
		int32_t L_25 = __this->get__flushMode_3();
		NullCheck(L_24);
		int32_t L_26 = ZlibCodec_Inflate_m1006171035(L_24, L_25, /*hidden argument*/NULL);
		G_B12_0 = L_26;
	}

IL_00d6:
	{
		V_1 = G_B12_0;
		int32_t L_27 = V_1;
		if (!L_27)
		{
			goto IL_0119;
		}
	}
	{
		int32_t L_28 = V_1;
		if ((((int32_t)L_28) == ((int32_t)1)))
		{
			goto IL_0119;
		}
	}
	{
		bool L_29 = ZlibBaseStream_get__wantCompress_m408635950(__this, /*hidden argument*/NULL);
		if (!L_29)
		{
			goto IL_00f9;
		}
	}
	{
		G_B17_0 = _stringLiteral3454384060;
		goto IL_00fe;
	}

IL_00f9:
	{
		G_B17_0 = _stringLiteral3454842823;
	}

IL_00fe:
	{
		ZlibCodec_t855427629 * L_30 = __this->get__z_1();
		NullCheck(L_30);
		String_t* L_31 = L_30->get_Message_8();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_32 = String_Concat_m3755062657(NULL /*static, unused*/, G_B17_0, _stringLiteral1697005394, L_31, /*hidden argument*/NULL);
		ZlibException_t3942143964 * L_33 = (ZlibException_t3942143964 *)il2cpp_codegen_object_new(ZlibException_t3942143964_il2cpp_TypeInfo_var);
		ZlibException__ctor_m1084687637(L_33, L_32, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_33, NULL, ZlibBaseStream_Write_m1435760464_RuntimeMethod_var);
	}

IL_0119:
	{
		Stream_t1273022909 * L_34 = __this->get__stream_11();
		ByteU5BU5D_t4116647657* L_35 = __this->get__workingBuffer_8();
		ByteU5BU5D_t4116647657* L_36 = __this->get__workingBuffer_8();
		NullCheck(L_36);
		ZlibCodec_t855427629 * L_37 = __this->get__z_1();
		NullCheck(L_37);
		int32_t L_38 = L_37->get_AvailableBytesOut_6();
		NullCheck(L_34);
		VirtActionInvoker3< ByteU5BU5D_t4116647657*, int32_t, int32_t >::Invoke(18 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_34, L_35, 0, ((int32_t)il2cpp_codegen_subtract((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_36)->max_length)))), (int32_t)L_38)));
		ZlibCodec_t855427629 * L_39 = __this->get__z_1();
		NullCheck(L_39);
		int32_t L_40 = L_39->get_AvailableBytesIn_2();
		if (L_40)
		{
			goto IL_0162;
		}
	}
	{
		ZlibCodec_t855427629 * L_41 = __this->get__z_1();
		NullCheck(L_41);
		int32_t L_42 = L_41->get_AvailableBytesOut_6();
		G_B21_0 = ((((int32_t)((((int32_t)L_42) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0163;
	}

IL_0162:
	{
		G_B21_0 = 0;
	}

IL_0163:
	{
		V_0 = (bool)G_B21_0;
		int32_t L_43 = __this->get__flavor_4();
		if ((!(((uint32_t)L_43) == ((uint32_t)((int32_t)1952)))))
		{
			goto IL_01a5;
		}
	}
	{
		bool L_44 = ZlibBaseStream_get__wantCompress_m408635950(__this, /*hidden argument*/NULL);
		if (L_44)
		{
			goto IL_01a5;
		}
	}
	{
		ZlibCodec_t855427629 * L_45 = __this->get__z_1();
		NullCheck(L_45);
		int32_t L_46 = L_45->get_AvailableBytesIn_2();
		if ((!(((uint32_t)L_46) == ((uint32_t)8))))
		{
			goto IL_01a3;
		}
	}
	{
		ZlibCodec_t855427629 * L_47 = __this->get__z_1();
		NullCheck(L_47);
		int32_t L_48 = L_47->get_AvailableBytesOut_6();
		G_B26_0 = ((((int32_t)((((int32_t)L_48) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_01a4;
	}

IL_01a3:
	{
		G_B26_0 = 0;
	}

IL_01a4:
	{
		V_0 = (bool)G_B26_0;
	}

IL_01a5:
	{
		bool L_49 = V_0;
		if (!L_49)
		{
			goto IL_0074;
		}
	}
	{
		return;
	}
}
// System.Void Pathfinding.Ionic.Zlib.ZlibBaseStream::finish()
extern "C" IL2CPP_METHOD_ATTR void ZlibBaseStream_finish_m1911048356 (ZlibBaseStream_t3561210688 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ZlibBaseStream_finish_m1911048356_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	String_t* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	ByteU5BU5D_t4116647657* V_5 = NULL;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	int32_t G_B7_0 = 0;
	String_t* G_B12_0 = NULL;
	int32_t G_B20_0 = 0;
	int32_t G_B25_0 = 0;
	{
		ZlibCodec_t855427629 * L_0 = __this->get__z_1();
		if (L_0)
		{
			goto IL_000c;
		}
	}
	{
		return;
	}

IL_000c:
	{
		int32_t L_1 = __this->get__streamMode_2();
		if (L_1)
		{
			goto IL_020d;
		}
	}
	{
		V_0 = (bool)0;
	}

IL_0019:
	{
		ZlibCodec_t855427629 * L_2 = __this->get__z_1();
		ByteU5BU5D_t4116647657* L_3 = ZlibBaseStream_get_workingBuffer_m1750492206(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		L_2->set_OutputBuffer_4(L_3);
		ZlibCodec_t855427629 * L_4 = __this->get__z_1();
		NullCheck(L_4);
		L_4->set_NextOut_5(0);
		ZlibCodec_t855427629 * L_5 = __this->get__z_1();
		ByteU5BU5D_t4116647657* L_6 = __this->get__workingBuffer_8();
		NullCheck(L_6);
		NullCheck(L_5);
		L_5->set_AvailableBytesOut_6((((int32_t)((int32_t)(((RuntimeArray *)L_6)->max_length)))));
		bool L_7 = ZlibBaseStream_get__wantCompress_m408635950(__this, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0065;
		}
	}
	{
		ZlibCodec_t855427629 * L_8 = __this->get__z_1();
		NullCheck(L_8);
		int32_t L_9 = ZlibCodec_Deflate_m110580741(L_8, 4, /*hidden argument*/NULL);
		G_B7_0 = L_9;
		goto IL_0071;
	}

IL_0065:
	{
		ZlibCodec_t855427629 * L_10 = __this->get__z_1();
		NullCheck(L_10);
		int32_t L_11 = ZlibCodec_Inflate_m1006171035(L_10, 4, /*hidden argument*/NULL);
		G_B7_0 = L_11;
	}

IL_0071:
	{
		V_1 = G_B7_0;
		int32_t L_12 = V_1;
		if ((((int32_t)L_12) == ((int32_t)1)))
		{
			goto IL_00e7;
		}
	}
	{
		int32_t L_13 = V_1;
		if (!L_13)
		{
			goto IL_00e7;
		}
	}
	{
		bool L_14 = ZlibBaseStream_get__wantCompress_m408635950(__this, /*hidden argument*/NULL);
		if (!L_14)
		{
			goto IL_0094;
		}
	}
	{
		G_B12_0 = _stringLiteral3454384060;
		goto IL_0099;
	}

IL_0094:
	{
		G_B12_0 = _stringLiteral3454842823;
	}

IL_0099:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_15 = String_Concat_m3937257545(NULL /*static, unused*/, G_B12_0, _stringLiteral3466233701, /*hidden argument*/NULL);
		V_2 = L_15;
		ZlibCodec_t855427629 * L_16 = __this->get__z_1();
		NullCheck(L_16);
		String_t* L_17 = L_16->get_Message_8();
		if (L_17)
		{
			goto IL_00cb;
		}
	}
	{
		String_t* L_18 = V_2;
		int32_t L_19 = V_1;
		int32_t L_20 = L_19;
		RuntimeObject * L_21 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_20);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_22 = String_Format_m2556382932(NULL /*static, unused*/, _stringLiteral2141582119, L_18, L_21, /*hidden argument*/NULL);
		ZlibException_t3942143964 * L_23 = (ZlibException_t3942143964 *)il2cpp_codegen_object_new(ZlibException_t3942143964_il2cpp_TypeInfo_var);
		ZlibException__ctor_m1084687637(L_23, L_22, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_23, NULL, ZlibBaseStream_finish_m1911048356_RuntimeMethod_var);
	}

IL_00cb:
	{
		String_t* L_24 = V_2;
		ZlibCodec_t855427629 * L_25 = __this->get__z_1();
		NullCheck(L_25);
		String_t* L_26 = L_25->get_Message_8();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_27 = String_Concat_m3755062657(NULL /*static, unused*/, L_24, _stringLiteral3450517398, L_26, /*hidden argument*/NULL);
		ZlibException_t3942143964 * L_28 = (ZlibException_t3942143964 *)il2cpp_codegen_object_new(ZlibException_t3942143964_il2cpp_TypeInfo_var);
		ZlibException__ctor_m1084687637(L_28, L_27, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_28, NULL, ZlibBaseStream_finish_m1911048356_RuntimeMethod_var);
	}

IL_00e7:
	{
		ByteU5BU5D_t4116647657* L_29 = __this->get__workingBuffer_8();
		NullCheck(L_29);
		ZlibCodec_t855427629 * L_30 = __this->get__z_1();
		NullCheck(L_30);
		int32_t L_31 = L_30->get_AvailableBytesOut_6();
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_29)->max_length)))), (int32_t)L_31))) <= ((int32_t)0)))
		{
			goto IL_0127;
		}
	}
	{
		Stream_t1273022909 * L_32 = __this->get__stream_11();
		ByteU5BU5D_t4116647657* L_33 = __this->get__workingBuffer_8();
		ByteU5BU5D_t4116647657* L_34 = __this->get__workingBuffer_8();
		NullCheck(L_34);
		ZlibCodec_t855427629 * L_35 = __this->get__z_1();
		NullCheck(L_35);
		int32_t L_36 = L_35->get_AvailableBytesOut_6();
		NullCheck(L_32);
		VirtActionInvoker3< ByteU5BU5D_t4116647657*, int32_t, int32_t >::Invoke(18 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_32, L_33, 0, ((int32_t)il2cpp_codegen_subtract((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_34)->max_length)))), (int32_t)L_36)));
	}

IL_0127:
	{
		ZlibCodec_t855427629 * L_37 = __this->get__z_1();
		NullCheck(L_37);
		int32_t L_38 = L_37->get_AvailableBytesIn_2();
		if (L_38)
		{
			goto IL_014a;
		}
	}
	{
		ZlibCodec_t855427629 * L_39 = __this->get__z_1();
		NullCheck(L_39);
		int32_t L_40 = L_39->get_AvailableBytesOut_6();
		G_B20_0 = ((((int32_t)((((int32_t)L_40) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_014b;
	}

IL_014a:
	{
		G_B20_0 = 0;
	}

IL_014b:
	{
		V_0 = (bool)G_B20_0;
		int32_t L_41 = __this->get__flavor_4();
		if ((!(((uint32_t)L_41) == ((uint32_t)((int32_t)1952)))))
		{
			goto IL_018d;
		}
	}
	{
		bool L_42 = ZlibBaseStream_get__wantCompress_m408635950(__this, /*hidden argument*/NULL);
		if (L_42)
		{
			goto IL_018d;
		}
	}
	{
		ZlibCodec_t855427629 * L_43 = __this->get__z_1();
		NullCheck(L_43);
		int32_t L_44 = L_43->get_AvailableBytesIn_2();
		if ((!(((uint32_t)L_44) == ((uint32_t)8))))
		{
			goto IL_018b;
		}
	}
	{
		ZlibCodec_t855427629 * L_45 = __this->get__z_1();
		NullCheck(L_45);
		int32_t L_46 = L_45->get_AvailableBytesOut_6();
		G_B25_0 = ((((int32_t)((((int32_t)L_46) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_018c;
	}

IL_018b:
	{
		G_B25_0 = 0;
	}

IL_018c:
	{
		V_0 = (bool)G_B25_0;
	}

IL_018d:
	{
		bool L_47 = V_0;
		if (!L_47)
		{
			goto IL_0019;
		}
	}
	{
		VirtActionInvoker0::Invoke(13 /* System.Void System.IO.Stream::Flush() */, __this);
		int32_t L_48 = __this->get__flavor_4();
		if ((!(((uint32_t)L_48) == ((uint32_t)((int32_t)1952)))))
		{
			goto IL_0208;
		}
	}
	{
		bool L_49 = ZlibBaseStream_get__wantCompress_m408635950(__this, /*hidden argument*/NULL);
		if (!L_49)
		{
			goto IL_01fd;
		}
	}
	{
		CRC32_t288211679 * L_50 = __this->get_crc_13();
		NullCheck(L_50);
		int32_t L_51 = CRC32_get_Crc32Result_m2014443844(L_50, /*hidden argument*/NULL);
		V_3 = L_51;
		Stream_t1273022909 * L_52 = __this->get__stream_11();
		int32_t L_53 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(BitConverter_t3118986983_il2cpp_TypeInfo_var);
		ByteU5BU5D_t4116647657* L_54 = BitConverter_GetBytes_m1040762521(NULL /*static, unused*/, L_53, /*hidden argument*/NULL);
		NullCheck(L_52);
		VirtActionInvoker3< ByteU5BU5D_t4116647657*, int32_t, int32_t >::Invoke(18 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_52, L_54, 0, 4);
		CRC32_t288211679 * L_55 = __this->get_crc_13();
		NullCheck(L_55);
		int64_t L_56 = CRC32_get_TotalBytesRead_m4084591093(L_55, /*hidden argument*/NULL);
		V_4 = (((int32_t)((int32_t)((int64_t)((int64_t)L_56&(int64_t)(((int64_t)((uint64_t)(((uint32_t)((uint32_t)(-1))))))))))));
		Stream_t1273022909 * L_57 = __this->get__stream_11();
		int32_t L_58 = V_4;
		ByteU5BU5D_t4116647657* L_59 = BitConverter_GetBytes_m1040762521(NULL /*static, unused*/, L_58, /*hidden argument*/NULL);
		NullCheck(L_57);
		VirtActionInvoker3< ByteU5BU5D_t4116647657*, int32_t, int32_t >::Invoke(18 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_57, L_59, 0, 4);
		goto IL_0208;
	}

IL_01fd:
	{
		ZlibException_t3942143964 * L_60 = (ZlibException_t3942143964 *)il2cpp_codegen_object_new(ZlibException_t3942143964_il2cpp_TypeInfo_var);
		ZlibException__ctor_m1084687637(L_60, _stringLiteral2706553987, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_60, NULL, ZlibBaseStream_finish_m1911048356_RuntimeMethod_var);
	}

IL_0208:
	{
		goto IL_0397;
	}

IL_020d:
	{
		int32_t L_61 = __this->get__streamMode_2();
		if ((!(((uint32_t)L_61) == ((uint32_t)1))))
		{
			goto IL_0397;
		}
	}
	{
		int32_t L_62 = __this->get__flavor_4();
		if ((!(((uint32_t)L_62) == ((uint32_t)((int32_t)1952)))))
		{
			goto IL_0397;
		}
	}
	{
		bool L_63 = ZlibBaseStream_get__wantCompress_m408635950(__this, /*hidden argument*/NULL);
		if (L_63)
		{
			goto IL_038c;
		}
	}
	{
		ZlibCodec_t855427629 * L_64 = __this->get__z_1();
		NullCheck(L_64);
		int64_t L_65 = L_64->get_TotalBytesOut_7();
		if ((!(((uint64_t)L_65) == ((uint64_t)(((int64_t)((int64_t)0)))))))
		{
			goto IL_0247;
		}
	}
	{
		return;
	}

IL_0247:
	{
		ByteU5BU5D_t4116647657* L_66 = (ByteU5BU5D_t4116647657*)SZArrayNew(ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var, (uint32_t)8);
		V_5 = L_66;
		ZlibCodec_t855427629 * L_67 = __this->get__z_1();
		NullCheck(L_67);
		int32_t L_68 = L_67->get_AvailableBytesIn_2();
		if ((((int32_t)L_68) >= ((int32_t)8)))
		{
			goto IL_02e5;
		}
	}
	{
		ZlibCodec_t855427629 * L_69 = __this->get__z_1();
		NullCheck(L_69);
		ByteU5BU5D_t4116647657* L_70 = L_69->get_InputBuffer_0();
		ZlibCodec_t855427629 * L_71 = __this->get__z_1();
		NullCheck(L_71);
		int32_t L_72 = L_71->get_NextIn_1();
		ByteU5BU5D_t4116647657* L_73 = V_5;
		ZlibCodec_t855427629 * L_74 = __this->get__z_1();
		NullCheck(L_74);
		int32_t L_75 = L_74->get_AvailableBytesIn_2();
		Array_Copy_m344457298(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_70, L_72, (RuntimeArray *)(RuntimeArray *)L_73, 0, L_75, /*hidden argument*/NULL);
		ZlibCodec_t855427629 * L_76 = __this->get__z_1();
		NullCheck(L_76);
		int32_t L_77 = L_76->get_AvailableBytesIn_2();
		V_6 = ((int32_t)il2cpp_codegen_subtract((int32_t)8, (int32_t)L_77));
		Stream_t1273022909 * L_78 = __this->get__stream_11();
		ByteU5BU5D_t4116647657* L_79 = V_5;
		ZlibCodec_t855427629 * L_80 = __this->get__z_1();
		NullCheck(L_80);
		int32_t L_81 = L_80->get_AvailableBytesIn_2();
		int32_t L_82 = V_6;
		NullCheck(L_78);
		int32_t L_83 = VirtFuncInvoker3< int32_t, ByteU5BU5D_t4116647657*, int32_t, int32_t >::Invoke(14 /* System.Int32 System.IO.Stream::Read(System.Byte[],System.Int32,System.Int32) */, L_78, L_79, L_81, L_82);
		V_7 = L_83;
		int32_t L_84 = V_6;
		int32_t L_85 = V_7;
		if ((((int32_t)L_84) == ((int32_t)L_85)))
		{
			goto IL_02e0;
		}
	}
	{
		ZlibCodec_t855427629 * L_86 = __this->get__z_1();
		NullCheck(L_86);
		int32_t L_87 = L_86->get_AvailableBytesIn_2();
		int32_t L_88 = V_7;
		int32_t L_89 = ((int32_t)il2cpp_codegen_add((int32_t)L_87, (int32_t)L_88));
		RuntimeObject * L_90 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_89);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_91 = String_Format_m2844511972(NULL /*static, unused*/, _stringLiteral820318032, L_90, /*hidden argument*/NULL);
		ZlibException_t3942143964 * L_92 = (ZlibException_t3942143964 *)il2cpp_codegen_object_new(ZlibException_t3942143964_il2cpp_TypeInfo_var);
		ZlibException__ctor_m1084687637(L_92, L_91, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_92, NULL, ZlibBaseStream_finish_m1911048356_RuntimeMethod_var);
	}

IL_02e0:
	{
		goto IL_0307;
	}

IL_02e5:
	{
		ZlibCodec_t855427629 * L_93 = __this->get__z_1();
		NullCheck(L_93);
		ByteU5BU5D_t4116647657* L_94 = L_93->get_InputBuffer_0();
		ZlibCodec_t855427629 * L_95 = __this->get__z_1();
		NullCheck(L_95);
		int32_t L_96 = L_95->get_NextIn_1();
		ByteU5BU5D_t4116647657* L_97 = V_5;
		ByteU5BU5D_t4116647657* L_98 = V_5;
		NullCheck(L_98);
		Array_Copy_m344457298(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_94, L_96, (RuntimeArray *)(RuntimeArray *)L_97, 0, (((int32_t)((int32_t)(((RuntimeArray *)L_98)->max_length)))), /*hidden argument*/NULL);
	}

IL_0307:
	{
		ByteU5BU5D_t4116647657* L_99 = V_5;
		IL2CPP_RUNTIME_CLASS_INIT(BitConverter_t3118986983_il2cpp_TypeInfo_var);
		int32_t L_100 = BitConverter_ToInt32_m1089563119(NULL /*static, unused*/, L_99, 0, /*hidden argument*/NULL);
		V_8 = L_100;
		CRC32_t288211679 * L_101 = __this->get_crc_13();
		NullCheck(L_101);
		int32_t L_102 = CRC32_get_Crc32Result_m2014443844(L_101, /*hidden argument*/NULL);
		V_9 = L_102;
		ByteU5BU5D_t4116647657* L_103 = V_5;
		int32_t L_104 = BitConverter_ToInt32_m1089563119(NULL /*static, unused*/, L_103, 4, /*hidden argument*/NULL);
		V_10 = L_104;
		ZlibCodec_t855427629 * L_105 = __this->get__z_1();
		NullCheck(L_105);
		int64_t L_106 = L_105->get_TotalBytesOut_7();
		V_11 = (((int32_t)((int32_t)((int64_t)((int64_t)L_106&(int64_t)(((int64_t)((uint64_t)(((uint32_t)((uint32_t)(-1))))))))))));
		int32_t L_107 = V_9;
		int32_t L_108 = V_8;
		if ((((int32_t)L_107) == ((int32_t)L_108)))
		{
			goto IL_0360;
		}
	}
	{
		int32_t L_109 = V_9;
		int32_t L_110 = L_109;
		RuntimeObject * L_111 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_110);
		int32_t L_112 = V_8;
		int32_t L_113 = L_112;
		RuntimeObject * L_114 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_113);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_115 = String_Format_m2556382932(NULL /*static, unused*/, _stringLiteral1198825947, L_111, L_114, /*hidden argument*/NULL);
		ZlibException_t3942143964 * L_116 = (ZlibException_t3942143964 *)il2cpp_codegen_object_new(ZlibException_t3942143964_il2cpp_TypeInfo_var);
		ZlibException__ctor_m1084687637(L_116, L_115, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_116, NULL, ZlibBaseStream_finish_m1911048356_RuntimeMethod_var);
	}

IL_0360:
	{
		int32_t L_117 = V_11;
		int32_t L_118 = V_10;
		if ((((int32_t)L_117) == ((int32_t)L_118)))
		{
			goto IL_0387;
		}
	}
	{
		int32_t L_119 = V_11;
		int32_t L_120 = L_119;
		RuntimeObject * L_121 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_120);
		int32_t L_122 = V_10;
		int32_t L_123 = L_122;
		RuntimeObject * L_124 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_123);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_125 = String_Format_m2556382932(NULL /*static, unused*/, _stringLiteral3496442404, L_121, L_124, /*hidden argument*/NULL);
		ZlibException_t3942143964 * L_126 = (ZlibException_t3942143964 *)il2cpp_codegen_object_new(ZlibException_t3942143964_il2cpp_TypeInfo_var);
		ZlibException__ctor_m1084687637(L_126, L_125, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_126, NULL, ZlibBaseStream_finish_m1911048356_RuntimeMethod_var);
	}

IL_0387:
	{
		goto IL_0397;
	}

IL_038c:
	{
		ZlibException_t3942143964 * L_127 = (ZlibException_t3942143964 *)il2cpp_codegen_object_new(ZlibException_t3942143964_il2cpp_TypeInfo_var);
		ZlibException__ctor_m1084687637(L_127, _stringLiteral1695370412, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_127, NULL, ZlibBaseStream_finish_m1911048356_RuntimeMethod_var);
	}

IL_0397:
	{
		return;
	}
}
// System.Void Pathfinding.Ionic.Zlib.ZlibBaseStream::end()
extern "C" IL2CPP_METHOD_ATTR void ZlibBaseStream_end_m107296615 (ZlibBaseStream_t3561210688 * __this, const RuntimeMethod* method)
{
	{
		ZlibCodec_t855427629 * L_0 = ZlibBaseStream_get_z_m2638430214(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_000c;
		}
	}
	{
		return;
	}

IL_000c:
	{
		bool L_1 = ZlibBaseStream_get__wantCompress_m408635950(__this, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0028;
		}
	}
	{
		ZlibCodec_t855427629 * L_2 = __this->get__z_1();
		NullCheck(L_2);
		ZlibCodec_EndDeflate_m2070701999(L_2, /*hidden argument*/NULL);
		goto IL_0034;
	}

IL_0028:
	{
		ZlibCodec_t855427629 * L_3 = __this->get__z_1();
		NullCheck(L_3);
		ZlibCodec_EndInflate_m2725978086(L_3, /*hidden argument*/NULL);
	}

IL_0034:
	{
		__this->set__z_1((ZlibCodec_t855427629 *)NULL);
		return;
	}
}
// System.Void Pathfinding.Ionic.Zlib.ZlibBaseStream::Close()
extern "C" IL2CPP_METHOD_ATTR void ZlibBaseStream_Close_m4034357216 (ZlibBaseStream_t3561210688 * __this, const RuntimeMethod* method)
{
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		Stream_t1273022909 * L_0 = __this->get__stream_11();
		if (L_0)
		{
			goto IL_000c;
		}
	}
	{
		return;
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		ZlibBaseStream_finish_m1911048356(__this, /*hidden argument*/NULL);
		IL2CPP_LEAVE(0x3B, FINALLY_0017);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0017;
	}

FINALLY_0017:
	{ // begin finally (depth: 1)
		{
			ZlibBaseStream_end_m107296615(__this, /*hidden argument*/NULL);
			bool L_1 = __this->get__leaveOpen_7();
			if (L_1)
			{
				goto IL_0033;
			}
		}

IL_0028:
		{
			Stream_t1273022909 * L_2 = __this->get__stream_11();
			NullCheck(L_2);
			VirtActionInvoker0::Invoke(12 /* System.Void System.IO.Stream::Close() */, L_2);
		}

IL_0033:
		{
			__this->set__stream_11((Stream_t1273022909 *)NULL);
			IL2CPP_END_FINALLY(23)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(23)
	{
		IL2CPP_JUMP_TBL(0x3B, IL_003b)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_003b:
	{
		return;
	}
}
// System.Void Pathfinding.Ionic.Zlib.ZlibBaseStream::Flush()
extern "C" IL2CPP_METHOD_ATTR void ZlibBaseStream_Flush_m2956027872 (ZlibBaseStream_t3561210688 * __this, const RuntimeMethod* method)
{
	{
		Stream_t1273022909 * L_0 = __this->get__stream_11();
		NullCheck(L_0);
		VirtActionInvoker0::Invoke(13 /* System.Void System.IO.Stream::Flush() */, L_0);
		return;
	}
}
// System.Int64 Pathfinding.Ionic.Zlib.ZlibBaseStream::Seek(System.Int64,System.IO.SeekOrigin)
extern "C" IL2CPP_METHOD_ATTR int64_t ZlibBaseStream_Seek_m1647119654 (ZlibBaseStream_t3561210688 * __this, int64_t ___offset0, int32_t ___origin1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ZlibBaseStream_Seek_m1647119654_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotImplementedException_t3489357830 * L_0 = (NotImplementedException_t3489357830 *)il2cpp_codegen_object_new(NotImplementedException_t3489357830_il2cpp_TypeInfo_var);
		NotImplementedException__ctor_m3058704252(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, ZlibBaseStream_Seek_m1647119654_RuntimeMethod_var);
	}
}
// System.Void Pathfinding.Ionic.Zlib.ZlibBaseStream::SetLength(System.Int64)
extern "C" IL2CPP_METHOD_ATTR void ZlibBaseStream_SetLength_m1280451082 (ZlibBaseStream_t3561210688 * __this, int64_t ___value0, const RuntimeMethod* method)
{
	{
		Stream_t1273022909 * L_0 = __this->get__stream_11();
		int64_t L_1 = ___value0;
		NullCheck(L_0);
		VirtActionInvoker1< int64_t >::Invoke(17 /* System.Void System.IO.Stream::SetLength(System.Int64) */, L_0, L_1);
		return;
	}
}
// System.String Pathfinding.Ionic.Zlib.ZlibBaseStream::ReadZeroTerminatedString()
extern "C" IL2CPP_METHOD_ATTR String_t* ZlibBaseStream_ReadZeroTerminatedString_m511734528 (ZlibBaseStream_t3561210688 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ZlibBaseStream_ReadZeroTerminatedString_m511734528_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t2606371118 * V_0 = NULL;
	bool V_1 = false;
	int32_t V_2 = 0;
	ByteU5BU5D_t4116647657* V_3 = NULL;
	{
		List_1_t2606371118 * L_0 = (List_1_t2606371118 *)il2cpp_codegen_object_new(List_1_t2606371118_il2cpp_TypeInfo_var);
		List_1__ctor_m883961986(L_0, /*hidden argument*/List_1__ctor_m883961986_RuntimeMethod_var);
		V_0 = L_0;
		V_1 = (bool)0;
	}

IL_0008:
	{
		Stream_t1273022909 * L_1 = __this->get__stream_11();
		ByteU5BU5D_t4116647657* L_2 = __this->get__buf1_10();
		NullCheck(L_1);
		int32_t L_3 = VirtFuncInvoker3< int32_t, ByteU5BU5D_t4116647657*, int32_t, int32_t >::Invoke(14 /* System.Int32 System.IO.Stream::Read(System.Byte[],System.Int32,System.Int32) */, L_1, L_2, 0, 1);
		V_2 = L_3;
		int32_t L_4 = V_2;
		if ((((int32_t)L_4) == ((int32_t)1)))
		{
			goto IL_002e;
		}
	}
	{
		ZlibException_t3942143964 * L_5 = (ZlibException_t3942143964 *)il2cpp_codegen_object_new(ZlibException_t3942143964_il2cpp_TypeInfo_var);
		ZlibException__ctor_m1084687637(L_5, _stringLiteral2303578358, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, NULL, ZlibBaseStream_ReadZeroTerminatedString_m511734528_RuntimeMethod_var);
	}

IL_002e:
	{
		ByteU5BU5D_t4116647657* L_6 = __this->get__buf1_10();
		NullCheck(L_6);
		int32_t L_7 = 0;
		uint8_t L_8 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		if (L_8)
		{
			goto IL_0042;
		}
	}
	{
		V_1 = (bool)1;
		goto IL_0050;
	}

IL_0042:
	{
		List_1_t2606371118 * L_9 = V_0;
		ByteU5BU5D_t4116647657* L_10 = __this->get__buf1_10();
		NullCheck(L_10);
		int32_t L_11 = 0;
		uint8_t L_12 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		NullCheck(L_9);
		List_1_Add_m464853802(L_9, L_12, /*hidden argument*/List_1_Add_m464853802_RuntimeMethod_var);
	}

IL_0050:
	{
		bool L_13 = V_1;
		if (!L_13)
		{
			goto IL_0008;
		}
	}
	{
		List_1_t2606371118 * L_14 = V_0;
		NullCheck(L_14);
		ByteU5BU5D_t4116647657* L_15 = List_1_ToArray_m2059327837(L_14, /*hidden argument*/List_1_ToArray_m2059327837_RuntimeMethod_var);
		V_3 = L_15;
		IL2CPP_RUNTIME_CLASS_INIT(GZipStream_t4208907177_il2cpp_TypeInfo_var);
		Encoding_t1523322056 * L_16 = ((GZipStream_t4208907177_StaticFields*)il2cpp_codegen_static_fields_for(GZipStream_t4208907177_il2cpp_TypeInfo_var))->get_iso8859dash1_10();
		ByteU5BU5D_t4116647657* L_17 = V_3;
		ByteU5BU5D_t4116647657* L_18 = V_3;
		NullCheck(L_18);
		NullCheck(L_16);
		String_t* L_19 = VirtFuncInvoker3< String_t*, ByteU5BU5D_t4116647657*, int32_t, int32_t >::Invoke(21 /* System.String System.Text.Encoding::GetString(System.Byte[],System.Int32,System.Int32) */, L_16, L_17, 0, (((int32_t)((int32_t)(((RuntimeArray *)L_18)->max_length)))));
		return L_19;
	}
}
// System.Int32 Pathfinding.Ionic.Zlib.ZlibBaseStream::_ReadAndValidateGzipHeader()
extern "C" IL2CPP_METHOD_ATTR int32_t ZlibBaseStream__ReadAndValidateGzipHeader_m2873668385 (ZlibBaseStream_t3561210688 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ZlibBaseStream__ReadAndValidateGzipHeader_m2873668385_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ByteU5BU5D_t4116647657* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	DateTime_t3738529785  V_4;
	memset(&V_4, 0, sizeof(V_4));
	int16_t V_5 = 0;
	ByteU5BU5D_t4116647657* V_6 = NULL;
	{
		V_0 = 0;
		ByteU5BU5D_t4116647657* L_0 = (ByteU5BU5D_t4116647657*)SZArrayNew(ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var, (uint32_t)((int32_t)10));
		V_1 = L_0;
		Stream_t1273022909 * L_1 = __this->get__stream_11();
		ByteU5BU5D_t4116647657* L_2 = V_1;
		ByteU5BU5D_t4116647657* L_3 = V_1;
		NullCheck(L_3);
		NullCheck(L_1);
		int32_t L_4 = VirtFuncInvoker3< int32_t, ByteU5BU5D_t4116647657*, int32_t, int32_t >::Invoke(14 /* System.Int32 System.IO.Stream::Read(System.Byte[],System.Int32,System.Int32) */, L_1, L_2, 0, (((int32_t)((int32_t)(((RuntimeArray *)L_3)->max_length)))));
		V_2 = L_4;
		int32_t L_5 = V_2;
		if (L_5)
		{
			goto IL_0023;
		}
	}
	{
		return 0;
	}

IL_0023:
	{
		int32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)10))))
		{
			goto IL_0036;
		}
	}
	{
		ZlibException_t3942143964 * L_7 = (ZlibException_t3942143964 *)il2cpp_codegen_object_new(ZlibException_t3942143964_il2cpp_TypeInfo_var);
		ZlibException__ctor_m1084687637(L_7, _stringLiteral1632380673, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, NULL, ZlibBaseStream__ReadAndValidateGzipHeader_m2873668385_RuntimeMethod_var);
	}

IL_0036:
	{
		ByteU5BU5D_t4116647657* L_8 = V_1;
		NullCheck(L_8);
		int32_t L_9 = 0;
		uint8_t L_10 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		if ((!(((uint32_t)L_10) == ((uint32_t)((int32_t)31)))))
		{
			goto IL_0056;
		}
	}
	{
		ByteU5BU5D_t4116647657* L_11 = V_1;
		NullCheck(L_11);
		int32_t L_12 = 1;
		uint8_t L_13 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		if ((!(((uint32_t)L_13) == ((uint32_t)((int32_t)139)))))
		{
			goto IL_0056;
		}
	}
	{
		ByteU5BU5D_t4116647657* L_14 = V_1;
		NullCheck(L_14);
		int32_t L_15 = 2;
		uint8_t L_16 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		if ((((int32_t)L_16) == ((int32_t)8)))
		{
			goto IL_0061;
		}
	}

IL_0056:
	{
		ZlibException_t3942143964 * L_17 = (ZlibException_t3942143964 *)il2cpp_codegen_object_new(ZlibException_t3942143964_il2cpp_TypeInfo_var);
		ZlibException__ctor_m1084687637(L_17, _stringLiteral2353645521, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_17, NULL, ZlibBaseStream__ReadAndValidateGzipHeader_m2873668385_RuntimeMethod_var);
	}

IL_0061:
	{
		ByteU5BU5D_t4116647657* L_18 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(BitConverter_t3118986983_il2cpp_TypeInfo_var);
		int32_t L_19 = BitConverter_ToInt32_m1089563119(NULL /*static, unused*/, L_18, 4, /*hidden argument*/NULL);
		V_3 = L_19;
		IL2CPP_RUNTIME_CLASS_INIT(GZipStream_t4208907177_il2cpp_TypeInfo_var);
		DateTime_t3738529785  L_20 = ((GZipStream_t4208907177_StaticFields*)il2cpp_codegen_static_fields_for(GZipStream_t4208907177_il2cpp_TypeInfo_var))->get__unixEpoch_9();
		V_4 = L_20;
		int32_t L_21 = V_3;
		DateTime_t3738529785  L_22 = DateTime_AddSeconds_m332574389((DateTime_t3738529785 *)(&V_4), (((double)((double)L_21))), /*hidden argument*/NULL);
		__this->set__GzipMtime_16(L_22);
		int32_t L_23 = V_0;
		int32_t L_24 = V_2;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_23, (int32_t)L_24));
		ByteU5BU5D_t4116647657* L_25 = V_1;
		NullCheck(L_25);
		int32_t L_26 = 3;
		uint8_t L_27 = (L_25)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
		if ((!(((uint32_t)((int32_t)((int32_t)L_27&(int32_t)4))) == ((uint32_t)4))))
		{
			goto IL_00e4;
		}
	}
	{
		Stream_t1273022909 * L_28 = __this->get__stream_11();
		ByteU5BU5D_t4116647657* L_29 = V_1;
		NullCheck(L_28);
		int32_t L_30 = VirtFuncInvoker3< int32_t, ByteU5BU5D_t4116647657*, int32_t, int32_t >::Invoke(14 /* System.Int32 System.IO.Stream::Read(System.Byte[],System.Int32,System.Int32) */, L_28, L_29, 0, 2);
		V_2 = L_30;
		int32_t L_31 = V_0;
		int32_t L_32 = V_2;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_31, (int32_t)L_32));
		ByteU5BU5D_t4116647657* L_33 = V_1;
		NullCheck(L_33);
		int32_t L_34 = 0;
		uint8_t L_35 = (L_33)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		ByteU5BU5D_t4116647657* L_36 = V_1;
		NullCheck(L_36);
		int32_t L_37 = 1;
		uint8_t L_38 = (L_36)->GetAt(static_cast<il2cpp_array_size_t>(L_37));
		V_5 = (((int16_t)((int16_t)((int32_t)il2cpp_codegen_add((int32_t)L_35, (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_38, (int32_t)((int32_t)256))))))));
		int16_t L_39 = V_5;
		ByteU5BU5D_t4116647657* L_40 = (ByteU5BU5D_t4116647657*)SZArrayNew(ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var, (uint32_t)L_39);
		V_6 = L_40;
		Stream_t1273022909 * L_41 = __this->get__stream_11();
		ByteU5BU5D_t4116647657* L_42 = V_6;
		ByteU5BU5D_t4116647657* L_43 = V_6;
		NullCheck(L_43);
		NullCheck(L_41);
		int32_t L_44 = VirtFuncInvoker3< int32_t, ByteU5BU5D_t4116647657*, int32_t, int32_t >::Invoke(14 /* System.Int32 System.IO.Stream::Read(System.Byte[],System.Int32,System.Int32) */, L_41, L_42, 0, (((int32_t)((int32_t)(((RuntimeArray *)L_43)->max_length)))));
		V_2 = L_44;
		int32_t L_45 = V_2;
		int16_t L_46 = V_5;
		if ((((int32_t)L_45) == ((int32_t)L_46)))
		{
			goto IL_00e0;
		}
	}
	{
		ZlibException_t3942143964 * L_47 = (ZlibException_t3942143964 *)il2cpp_codegen_object_new(ZlibException_t3942143964_il2cpp_TypeInfo_var);
		ZlibException__ctor_m1084687637(L_47, _stringLiteral781983919, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_47, NULL, ZlibBaseStream__ReadAndValidateGzipHeader_m2873668385_RuntimeMethod_var);
	}

IL_00e0:
	{
		int32_t L_48 = V_0;
		int32_t L_49 = V_2;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_48, (int32_t)L_49));
	}

IL_00e4:
	{
		ByteU5BU5D_t4116647657* L_50 = V_1;
		NullCheck(L_50);
		int32_t L_51 = 3;
		uint8_t L_52 = (L_50)->GetAt(static_cast<il2cpp_array_size_t>(L_51));
		if ((!(((uint32_t)((int32_t)((int32_t)L_52&(int32_t)8))) == ((uint32_t)8))))
		{
			goto IL_00fb;
		}
	}
	{
		String_t* L_53 = ZlibBaseStream_ReadZeroTerminatedString_m511734528(__this, /*hidden argument*/NULL);
		__this->set__GzipFileName_14(L_53);
	}

IL_00fb:
	{
		ByteU5BU5D_t4116647657* L_54 = V_1;
		NullCheck(L_54);
		int32_t L_55 = 3;
		uint8_t L_56 = (L_54)->GetAt(static_cast<il2cpp_array_size_t>(L_55));
		if ((!(((uint32_t)((int32_t)((int32_t)L_56&(int32_t)((int32_t)16)))) == ((uint32_t)((int32_t)16)))))
		{
			goto IL_0114;
		}
	}
	{
		String_t* L_57 = ZlibBaseStream_ReadZeroTerminatedString_m511734528(__this, /*hidden argument*/NULL);
		__this->set__GzipComment_15(L_57);
	}

IL_0114:
	{
		ByteU5BU5D_t4116647657* L_58 = V_1;
		NullCheck(L_58);
		int32_t L_59 = 3;
		uint8_t L_60 = (L_58)->GetAt(static_cast<il2cpp_array_size_t>(L_59));
		if ((!(((uint32_t)((int32_t)((int32_t)L_60&(int32_t)2))) == ((uint32_t)2))))
		{
			goto IL_012e;
		}
	}
	{
		ByteU5BU5D_t4116647657* L_61 = __this->get__buf1_10();
		VirtFuncInvoker3< int32_t, ByteU5BU5D_t4116647657*, int32_t, int32_t >::Invoke(14 /* System.Int32 System.IO.Stream::Read(System.Byte[],System.Int32,System.Int32) */, __this, L_61, 0, 1);
	}

IL_012e:
	{
		int32_t L_62 = V_0;
		return L_62;
	}
}
// System.Int32 Pathfinding.Ionic.Zlib.ZlibBaseStream::Read(System.Byte[],System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR int32_t ZlibBaseStream_Read_m2470219779 (ZlibBaseStream_t3561210688 * __this, ByteU5BU5D_t4116647657* ___buffer0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ZlibBaseStream_Read_m2470219779_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t G_B29_0 = 0;
	String_t* G_B36_0 = NULL;
	String_t* G_B35_0 = NULL;
	String_t* G_B37_0 = NULL;
	String_t* G_B37_1 = NULL;
	{
		int32_t L_0 = __this->get__streamMode_2();
		if ((!(((uint32_t)L_0) == ((uint32_t)2))))
		{
			goto IL_0063;
		}
	}
	{
		Stream_t1273022909 * L_1 = __this->get__stream_11();
		NullCheck(L_1);
		bool L_2 = VirtFuncInvoker0< bool >::Invoke(5 /* System.Boolean System.IO.Stream::get_CanRead() */, L_1);
		if (L_2)
		{
			goto IL_0027;
		}
	}
	{
		ZlibException_t3942143964 * L_3 = (ZlibException_t3942143964 *)il2cpp_codegen_object_new(ZlibException_t3942143964_il2cpp_TypeInfo_var);
		ZlibException__ctor_m1084687637(L_3, _stringLiteral3241828283, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, NULL, ZlibBaseStream_Read_m2470219779_RuntimeMethod_var);
	}

IL_0027:
	{
		__this->set__streamMode_2(1);
		ZlibCodec_t855427629 * L_4 = ZlibBaseStream_get_z_m2638430214(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		L_4->set_AvailableBytesIn_2(0);
		int32_t L_5 = __this->get__flavor_4();
		if ((!(((uint32_t)L_5) == ((uint32_t)((int32_t)1952)))))
		{
			goto IL_0063;
		}
	}
	{
		int32_t L_6 = ZlibBaseStream__ReadAndValidateGzipHeader_m2873668385(__this, /*hidden argument*/NULL);
		__this->set__gzipHeaderByteCount_17(L_6);
		int32_t L_7 = __this->get__gzipHeaderByteCount_17();
		if (L_7)
		{
			goto IL_0063;
		}
	}
	{
		return 0;
	}

IL_0063:
	{
		int32_t L_8 = __this->get__streamMode_2();
		if ((((int32_t)L_8) == ((int32_t)1)))
		{
			goto IL_007a;
		}
	}
	{
		ZlibException_t3942143964 * L_9 = (ZlibException_t3942143964 *)il2cpp_codegen_object_new(ZlibException_t3942143964_il2cpp_TypeInfo_var);
		ZlibException__ctor_m1084687637(L_9, _stringLiteral2610389508, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, NULL, ZlibBaseStream_Read_m2470219779_RuntimeMethod_var);
	}

IL_007a:
	{
		int32_t L_10 = ___count2;
		if (L_10)
		{
			goto IL_0082;
		}
	}
	{
		return 0;
	}

IL_0082:
	{
		bool L_11 = __this->get_nomoreinput_18();
		if (!L_11)
		{
			goto IL_009a;
		}
	}
	{
		bool L_12 = ZlibBaseStream_get__wantCompress_m408635950(__this, /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_009a;
		}
	}
	{
		return 0;
	}

IL_009a:
	{
		ByteU5BU5D_t4116647657* L_13 = ___buffer0;
		if (L_13)
		{
			goto IL_00ab;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_14 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_14, _stringLiteral3939495523, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_14, NULL, ZlibBaseStream_Read_m2470219779_RuntimeMethod_var);
	}

IL_00ab:
	{
		int32_t L_15 = ___count2;
		if ((((int32_t)L_15) >= ((int32_t)0)))
		{
			goto IL_00bd;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_16 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_16, _stringLiteral2002595880, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_16, NULL, ZlibBaseStream_Read_m2470219779_RuntimeMethod_var);
	}

IL_00bd:
	{
		int32_t L_17 = ___offset1;
		ByteU5BU5D_t4116647657* L_18 = ___buffer0;
		NullCheck((RuntimeArray *)(RuntimeArray *)L_18);
		int32_t L_19 = Array_GetLowerBound_m2045984623((RuntimeArray *)(RuntimeArray *)L_18, 0, /*hidden argument*/NULL);
		if ((((int32_t)L_17) >= ((int32_t)L_19)))
		{
			goto IL_00d5;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_20 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_20, _stringLiteral1082126080, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_20, NULL, ZlibBaseStream_Read_m2470219779_RuntimeMethod_var);
	}

IL_00d5:
	{
		int32_t L_21 = ___offset1;
		int32_t L_22 = ___count2;
		ByteU5BU5D_t4116647657* L_23 = ___buffer0;
		NullCheck((RuntimeArray *)(RuntimeArray *)L_23);
		int32_t L_24 = Array_GetLength_m2178203778((RuntimeArray *)(RuntimeArray *)L_23, 0, /*hidden argument*/NULL);
		if ((((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_21, (int32_t)L_22))) <= ((int32_t)L_24)))
		{
			goto IL_00ef;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_25 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_25, _stringLiteral2002595880, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_25, NULL, ZlibBaseStream_Read_m2470219779_RuntimeMethod_var);
	}

IL_00ef:
	{
		V_0 = 0;
		ZlibCodec_t855427629 * L_26 = __this->get__z_1();
		ByteU5BU5D_t4116647657* L_27 = ___buffer0;
		NullCheck(L_26);
		L_26->set_OutputBuffer_4(L_27);
		ZlibCodec_t855427629 * L_28 = __this->get__z_1();
		int32_t L_29 = ___offset1;
		NullCheck(L_28);
		L_28->set_NextOut_5(L_29);
		ZlibCodec_t855427629 * L_30 = __this->get__z_1();
		int32_t L_31 = ___count2;
		NullCheck(L_30);
		L_30->set_AvailableBytesOut_6(L_31);
		ZlibCodec_t855427629 * L_32 = __this->get__z_1();
		ByteU5BU5D_t4116647657* L_33 = ZlibBaseStream_get_workingBuffer_m1750492206(__this, /*hidden argument*/NULL);
		NullCheck(L_32);
		L_32->set_InputBuffer_0(L_33);
	}

IL_0126:
	{
		ZlibCodec_t855427629 * L_34 = __this->get__z_1();
		NullCheck(L_34);
		int32_t L_35 = L_34->get_AvailableBytesIn_2();
		if (L_35)
		{
			goto IL_0189;
		}
	}
	{
		bool L_36 = __this->get_nomoreinput_18();
		if (L_36)
		{
			goto IL_0189;
		}
	}
	{
		ZlibCodec_t855427629 * L_37 = __this->get__z_1();
		NullCheck(L_37);
		L_37->set_NextIn_1(0);
		ZlibCodec_t855427629 * L_38 = __this->get__z_1();
		Stream_t1273022909 * L_39 = __this->get__stream_11();
		ByteU5BU5D_t4116647657* L_40 = __this->get__workingBuffer_8();
		ByteU5BU5D_t4116647657* L_41 = __this->get__workingBuffer_8();
		NullCheck(L_41);
		NullCheck(L_39);
		int32_t L_42 = VirtFuncInvoker3< int32_t, ByteU5BU5D_t4116647657*, int32_t, int32_t >::Invoke(14 /* System.Int32 System.IO.Stream::Read(System.Byte[],System.Int32,System.Int32) */, L_39, L_40, 0, (((int32_t)((int32_t)(((RuntimeArray *)L_41)->max_length)))));
		NullCheck(L_38);
		L_38->set_AvailableBytesIn_2(L_42);
		ZlibCodec_t855427629 * L_43 = __this->get__z_1();
		NullCheck(L_43);
		int32_t L_44 = L_43->get_AvailableBytesIn_2();
		if (L_44)
		{
			goto IL_0189;
		}
	}
	{
		__this->set_nomoreinput_18((bool)1);
	}

IL_0189:
	{
		bool L_45 = ZlibBaseStream_get__wantCompress_m408635950(__this, /*hidden argument*/NULL);
		if (!L_45)
		{
			goto IL_01aa;
		}
	}
	{
		ZlibCodec_t855427629 * L_46 = __this->get__z_1();
		int32_t L_47 = __this->get__flushMode_3();
		NullCheck(L_46);
		int32_t L_48 = ZlibCodec_Deflate_m110580741(L_46, L_47, /*hidden argument*/NULL);
		G_B29_0 = L_48;
		goto IL_01bb;
	}

IL_01aa:
	{
		ZlibCodec_t855427629 * L_49 = __this->get__z_1();
		int32_t L_50 = __this->get__flushMode_3();
		NullCheck(L_49);
		int32_t L_51 = ZlibCodec_Inflate_m1006171035(L_49, L_50, /*hidden argument*/NULL);
		G_B29_0 = L_51;
	}

IL_01bb:
	{
		V_0 = G_B29_0;
		bool L_52 = __this->get_nomoreinput_18();
		if (!L_52)
		{
			goto IL_01d1;
		}
	}
	{
		int32_t L_53 = V_0;
		if ((!(((uint32_t)L_53) == ((uint32_t)((int32_t)-5)))))
		{
			goto IL_01d1;
		}
	}
	{
		return 0;
	}

IL_01d1:
	{
		int32_t L_54 = V_0;
		if (!L_54)
		{
			goto IL_0219;
		}
	}
	{
		int32_t L_55 = V_0;
		if ((((int32_t)L_55) == ((int32_t)1)))
		{
			goto IL_0219;
		}
	}
	{
		bool L_56 = ZlibBaseStream_get__wantCompress_m408635950(__this, /*hidden argument*/NULL);
		G_B35_0 = _stringLiteral2170521191;
		if (!L_56)
		{
			G_B36_0 = _stringLiteral2170521191;
			goto IL_01f8;
		}
	}
	{
		G_B37_0 = _stringLiteral3454384060;
		G_B37_1 = G_B35_0;
		goto IL_01fd;
	}

IL_01f8:
	{
		G_B37_0 = _stringLiteral3454842823;
		G_B37_1 = G_B36_0;
	}

IL_01fd:
	{
		int32_t L_57 = V_0;
		int32_t L_58 = L_57;
		RuntimeObject * L_59 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_58);
		ZlibCodec_t855427629 * L_60 = __this->get__z_1();
		NullCheck(L_60);
		String_t* L_61 = L_60->get_Message_8();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_62 = String_Format_m3339413201(NULL /*static, unused*/, G_B37_1, G_B37_0, L_59, L_61, /*hidden argument*/NULL);
		ZlibException_t3942143964 * L_63 = (ZlibException_t3942143964 *)il2cpp_codegen_object_new(ZlibException_t3942143964_il2cpp_TypeInfo_var);
		ZlibException__ctor_m1084687637(L_63, L_62, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_63, NULL, ZlibBaseStream_Read_m2470219779_RuntimeMethod_var);
	}

IL_0219:
	{
		bool L_64 = __this->get_nomoreinput_18();
		if (L_64)
		{
			goto IL_022b;
		}
	}
	{
		int32_t L_65 = V_0;
		if ((!(((uint32_t)L_65) == ((uint32_t)1))))
		{
			goto IL_0241;
		}
	}

IL_022b:
	{
		ZlibCodec_t855427629 * L_66 = __this->get__z_1();
		NullCheck(L_66);
		int32_t L_67 = L_66->get_AvailableBytesOut_6();
		int32_t L_68 = ___count2;
		if ((!(((uint32_t)L_67) == ((uint32_t)L_68))))
		{
			goto IL_0241;
		}
	}
	{
		goto IL_0263;
	}

IL_0241:
	{
		ZlibCodec_t855427629 * L_69 = __this->get__z_1();
		NullCheck(L_69);
		int32_t L_70 = L_69->get_AvailableBytesOut_6();
		if ((((int32_t)L_70) <= ((int32_t)0)))
		{
			goto IL_0263;
		}
	}
	{
		bool L_71 = __this->get_nomoreinput_18();
		if (L_71)
		{
			goto IL_0263;
		}
	}
	{
		int32_t L_72 = V_0;
		if (!L_72)
		{
			goto IL_0126;
		}
	}

IL_0263:
	{
		ZlibCodec_t855427629 * L_73 = __this->get__z_1();
		NullCheck(L_73);
		int32_t L_74 = L_73->get_AvailableBytesOut_6();
		if ((((int32_t)L_74) <= ((int32_t)0)))
		{
			goto IL_02db;
		}
	}
	{
		int32_t L_75 = V_0;
		if (L_75)
		{
			goto IL_028a;
		}
	}
	{
		ZlibCodec_t855427629 * L_76 = __this->get__z_1();
		NullCheck(L_76);
		int32_t L_77 = L_76->get_AvailableBytesIn_2();
		if (L_77)
		{
			goto IL_028a;
		}
	}

IL_028a:
	{
		bool L_78 = __this->get_nomoreinput_18();
		if (!L_78)
		{
			goto IL_02db;
		}
	}
	{
		bool L_79 = ZlibBaseStream_get__wantCompress_m408635950(__this, /*hidden argument*/NULL);
		if (!L_79)
		{
			goto IL_02db;
		}
	}
	{
		ZlibCodec_t855427629 * L_80 = __this->get__z_1();
		NullCheck(L_80);
		int32_t L_81 = ZlibCodec_Deflate_m110580741(L_80, 4, /*hidden argument*/NULL);
		V_0 = L_81;
		int32_t L_82 = V_0;
		if (!L_82)
		{
			goto IL_02db;
		}
	}
	{
		int32_t L_83 = V_0;
		if ((((int32_t)L_83) == ((int32_t)1)))
		{
			goto IL_02db;
		}
	}
	{
		int32_t L_84 = V_0;
		int32_t L_85 = L_84;
		RuntimeObject * L_86 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_85);
		ZlibCodec_t855427629 * L_87 = __this->get__z_1();
		NullCheck(L_87);
		String_t* L_88 = L_87->get_Message_8();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_89 = String_Format_m2556382932(NULL /*static, unused*/, _stringLiteral4246376530, L_86, L_88, /*hidden argument*/NULL);
		ZlibException_t3942143964 * L_90 = (ZlibException_t3942143964 *)il2cpp_codegen_object_new(ZlibException_t3942143964_il2cpp_TypeInfo_var);
		ZlibException__ctor_m1084687637(L_90, L_89, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_90, NULL, ZlibBaseStream_Read_m2470219779_RuntimeMethod_var);
	}

IL_02db:
	{
		int32_t L_91 = ___count2;
		ZlibCodec_t855427629 * L_92 = __this->get__z_1();
		NullCheck(L_92);
		int32_t L_93 = L_92->get_AvailableBytesOut_6();
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_91, (int32_t)L_93));
		CRC32_t288211679 * L_94 = __this->get_crc_13();
		if (!L_94)
		{
			goto IL_0302;
		}
	}
	{
		CRC32_t288211679 * L_95 = __this->get_crc_13();
		ByteU5BU5D_t4116647657* L_96 = ___buffer0;
		int32_t L_97 = ___offset1;
		int32_t L_98 = V_0;
		NullCheck(L_95);
		CRC32_SlurpBlock_m2489767400(L_95, L_96, L_97, L_98, /*hidden argument*/NULL);
	}

IL_0302:
	{
		int32_t L_99 = V_0;
		return L_99;
	}
}
// System.Boolean Pathfinding.Ionic.Zlib.ZlibBaseStream::get_CanRead()
extern "C" IL2CPP_METHOD_ATTR bool ZlibBaseStream_get_CanRead_m4040176952 (ZlibBaseStream_t3561210688 * __this, const RuntimeMethod* method)
{
	{
		Stream_t1273022909 * L_0 = __this->get__stream_11();
		NullCheck(L_0);
		bool L_1 = VirtFuncInvoker0< bool >::Invoke(5 /* System.Boolean System.IO.Stream::get_CanRead() */, L_0);
		return L_1;
	}
}
// System.Boolean Pathfinding.Ionic.Zlib.ZlibBaseStream::get_CanSeek()
extern "C" IL2CPP_METHOD_ATTR bool ZlibBaseStream_get_CanSeek_m336077079 (ZlibBaseStream_t3561210688 * __this, const RuntimeMethod* method)
{
	{
		Stream_t1273022909 * L_0 = __this->get__stream_11();
		NullCheck(L_0);
		bool L_1 = VirtFuncInvoker0< bool >::Invoke(6 /* System.Boolean System.IO.Stream::get_CanSeek() */, L_0);
		return L_1;
	}
}
// System.Boolean Pathfinding.Ionic.Zlib.ZlibBaseStream::get_CanWrite()
extern "C" IL2CPP_METHOD_ATTR bool ZlibBaseStream_get_CanWrite_m3178266838 (ZlibBaseStream_t3561210688 * __this, const RuntimeMethod* method)
{
	{
		Stream_t1273022909 * L_0 = __this->get__stream_11();
		NullCheck(L_0);
		bool L_1 = VirtFuncInvoker0< bool >::Invoke(7 /* System.Boolean System.IO.Stream::get_CanWrite() */, L_0);
		return L_1;
	}
}
// System.Int64 Pathfinding.Ionic.Zlib.ZlibBaseStream::get_Length()
extern "C" IL2CPP_METHOD_ATTR int64_t ZlibBaseStream_get_Length_m2842805443 (ZlibBaseStream_t3561210688 * __this, const RuntimeMethod* method)
{
	{
		Stream_t1273022909 * L_0 = __this->get__stream_11();
		NullCheck(L_0);
		int64_t L_1 = VirtFuncInvoker0< int64_t >::Invoke(8 /* System.Int64 System.IO.Stream::get_Length() */, L_0);
		return L_1;
	}
}
// System.Int64 Pathfinding.Ionic.Zlib.ZlibBaseStream::get_Position()
extern "C" IL2CPP_METHOD_ATTR int64_t ZlibBaseStream_get_Position_m1658146246 (ZlibBaseStream_t3561210688 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ZlibBaseStream_get_Position_m1658146246_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotImplementedException_t3489357830 * L_0 = (NotImplementedException_t3489357830 *)il2cpp_codegen_object_new(NotImplementedException_t3489357830_il2cpp_TypeInfo_var);
		NotImplementedException__ctor_m3058704252(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, ZlibBaseStream_get_Position_m1658146246_RuntimeMethod_var);
	}
}
// System.Void Pathfinding.Ionic.Zlib.ZlibBaseStream::set_Position(System.Int64)
extern "C" IL2CPP_METHOD_ATTR void ZlibBaseStream_set_Position_m3707116880 (ZlibBaseStream_t3561210688 * __this, int64_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ZlibBaseStream_set_Position_m3707116880_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotImplementedException_t3489357830 * L_0 = (NotImplementedException_t3489357830 *)il2cpp_codegen_object_new(NotImplementedException_t3489357830_il2cpp_TypeInfo_var);
		NotImplementedException__ctor_m3058704252(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, ZlibBaseStream_set_Position_m3707116880_RuntimeMethod_var);
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
// Pathfinding.Ionic.Zlib.ZlibCodec
const Il2CppGuid ZlibCodec_t855427629::CLSID = { 0xebc25cf6, 0x9120, 0x4283, 0xb9, 0x72, 0xe, 0x55, 0x20, 0xd0, 0x0, 0xd };
// System.Void Pathfinding.Ionic.Zlib.ZlibCodec::.ctor()
extern "C" IL2CPP_METHOD_ATTR void ZlibCodec__ctor_m2698404987 (ZlibCodec_t855427629 * __this, const RuntimeMethod* method)
{
	{
		__this->set_CompressLevel_12(6);
		__this->set_WindowBits_13(((int32_t)15));
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 Pathfinding.Ionic.Zlib.ZlibCodec::InitializeInflate(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR int32_t ZlibCodec_InitializeInflate_m1652333965 (ZlibCodec_t855427629 * __this, bool ___expectRfc1950Header0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_WindowBits_13();
		bool L_1 = ___expectRfc1950Header0;
		int32_t L_2 = ZlibCodec_InitializeInflate_m150460593(__this, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Int32 Pathfinding.Ionic.Zlib.ZlibCodec::InitializeInflate(System.Int32,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR int32_t ZlibCodec_InitializeInflate_m150460593 (ZlibCodec_t855427629 * __this, int32_t ___windowBits0, bool ___expectRfc1950Header1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ZlibCodec_InitializeInflate_m150460593_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___windowBits0;
		__this->set_WindowBits_13(L_0);
		DeflateManager_t3554793512 * L_1 = __this->get_dstate_9();
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		ZlibException_t3942143964 * L_2 = (ZlibException_t3942143964 *)il2cpp_codegen_object_new(ZlibException_t3942143964_il2cpp_TypeInfo_var);
		ZlibException__ctor_m1084687637(L_2, _stringLiteral4047066308, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, NULL, ZlibCodec_InitializeInflate_m150460593_RuntimeMethod_var);
	}

IL_001d:
	{
		bool L_3 = ___expectRfc1950Header1;
		InflateManager_t3682621372 * L_4 = (InflateManager_t3682621372 *)il2cpp_codegen_object_new(InflateManager_t3682621372_il2cpp_TypeInfo_var);
		InflateManager__ctor_m300537653(L_4, L_3, /*hidden argument*/NULL);
		__this->set_istate_10(L_4);
		InflateManager_t3682621372 * L_5 = __this->get_istate_10();
		int32_t L_6 = ___windowBits0;
		NullCheck(L_5);
		int32_t L_7 = InflateManager_Initialize_m1637778925(L_5, __this, L_6, /*hidden argument*/NULL);
		return L_7;
	}
}
// System.Int32 Pathfinding.Ionic.Zlib.ZlibCodec::Inflate(Pathfinding.Ionic.Zlib.FlushType)
extern "C" IL2CPP_METHOD_ATTR int32_t ZlibCodec_Inflate_m1006171035 (ZlibCodec_t855427629 * __this, int32_t ___flush0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ZlibCodec_Inflate_m1006171035_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		InflateManager_t3682621372 * L_0 = __this->get_istate_10();
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		ZlibException_t3942143964 * L_1 = (ZlibException_t3942143964 *)il2cpp_codegen_object_new(ZlibException_t3942143964_il2cpp_TypeInfo_var);
		ZlibException__ctor_m1084687637(L_1, _stringLiteral801382093, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, ZlibCodec_Inflate_m1006171035_RuntimeMethod_var);
	}

IL_0016:
	{
		InflateManager_t3682621372 * L_2 = __this->get_istate_10();
		int32_t L_3 = ___flush0;
		NullCheck(L_2);
		int32_t L_4 = InflateManager_Inflate_m4163498486(L_2, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Int32 Pathfinding.Ionic.Zlib.ZlibCodec::EndInflate()
extern "C" IL2CPP_METHOD_ATTR int32_t ZlibCodec_EndInflate_m2725978086 (ZlibCodec_t855427629 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ZlibCodec_EndInflate_m2725978086_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		InflateManager_t3682621372 * L_0 = __this->get_istate_10();
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		ZlibException_t3942143964 * L_1 = (ZlibException_t3942143964 *)il2cpp_codegen_object_new(ZlibException_t3942143964_il2cpp_TypeInfo_var);
		ZlibException__ctor_m1084687637(L_1, _stringLiteral801382093, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, ZlibCodec_EndInflate_m2725978086_RuntimeMethod_var);
	}

IL_0016:
	{
		InflateManager_t3682621372 * L_2 = __this->get_istate_10();
		NullCheck(L_2);
		int32_t L_3 = InflateManager_End_m1674991333(L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		__this->set_istate_10((InflateManager_t3682621372 *)NULL);
		int32_t L_4 = V_0;
		return L_4;
	}
}
// System.Int32 Pathfinding.Ionic.Zlib.ZlibCodec::InitializeDeflate(Pathfinding.Ionic.Zlib.CompressionLevel,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR int32_t ZlibCodec_InitializeDeflate_m1391012963 (ZlibCodec_t855427629 * __this, int32_t ___level0, bool ___wantRfc1950Header1, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___level0;
		__this->set_CompressLevel_12(L_0);
		bool L_1 = ___wantRfc1950Header1;
		int32_t L_2 = ZlibCodec__InternalInitializeDeflate_m1783914882(__this, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Int32 Pathfinding.Ionic.Zlib.ZlibCodec::_InternalInitializeDeflate(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR int32_t ZlibCodec__InternalInitializeDeflate_m1783914882 (ZlibCodec_t855427629 * __this, bool ___wantRfc1950Header0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ZlibCodec__InternalInitializeDeflate_m1783914882_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		InflateManager_t3682621372 * L_0 = __this->get_istate_10();
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		ZlibException_t3942143964 * L_1 = (ZlibException_t3942143964 *)il2cpp_codegen_object_new(ZlibException_t3942143964_il2cpp_TypeInfo_var);
		ZlibException__ctor_m1084687637(L_1, _stringLiteral2309888372, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, ZlibCodec__InternalInitializeDeflate_m1783914882_RuntimeMethod_var);
	}

IL_0016:
	{
		DeflateManager_t3554793512 * L_2 = (DeflateManager_t3554793512 *)il2cpp_codegen_object_new(DeflateManager_t3554793512_il2cpp_TypeInfo_var);
		DeflateManager__ctor_m2647843651(L_2, /*hidden argument*/NULL);
		__this->set_dstate_9(L_2);
		DeflateManager_t3554793512 * L_3 = __this->get_dstate_9();
		bool L_4 = ___wantRfc1950Header0;
		NullCheck(L_3);
		DeflateManager_set_WantRfc1950HeaderBytes_m1002388870(L_3, L_4, /*hidden argument*/NULL);
		DeflateManager_t3554793512 * L_5 = __this->get_dstate_9();
		int32_t L_6 = __this->get_CompressLevel_12();
		int32_t L_7 = __this->get_WindowBits_13();
		int32_t L_8 = __this->get_Strategy_14();
		NullCheck(L_5);
		int32_t L_9 = DeflateManager_Initialize_m3250314596(L_5, __this, L_6, L_7, L_8, /*hidden argument*/NULL);
		return L_9;
	}
}
// System.Int32 Pathfinding.Ionic.Zlib.ZlibCodec::Deflate(Pathfinding.Ionic.Zlib.FlushType)
extern "C" IL2CPP_METHOD_ATTR int32_t ZlibCodec_Deflate_m110580741 (ZlibCodec_t855427629 * __this, int32_t ___flush0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ZlibCodec_Deflate_m110580741_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		DeflateManager_t3554793512 * L_0 = __this->get_dstate_9();
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		ZlibException_t3942143964 * L_1 = (ZlibException_t3942143964 *)il2cpp_codegen_object_new(ZlibException_t3942143964_il2cpp_TypeInfo_var);
		ZlibException__ctor_m1084687637(L_1, _stringLiteral253958326, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, ZlibCodec_Deflate_m110580741_RuntimeMethod_var);
	}

IL_0016:
	{
		DeflateManager_t3554793512 * L_2 = __this->get_dstate_9();
		int32_t L_3 = ___flush0;
		NullCheck(L_2);
		int32_t L_4 = DeflateManager_Deflate_m2916501336(L_2, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Int32 Pathfinding.Ionic.Zlib.ZlibCodec::EndDeflate()
extern "C" IL2CPP_METHOD_ATTR int32_t ZlibCodec_EndDeflate_m2070701999 (ZlibCodec_t855427629 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ZlibCodec_EndDeflate_m2070701999_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		DeflateManager_t3554793512 * L_0 = __this->get_dstate_9();
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		ZlibException_t3942143964 * L_1 = (ZlibException_t3942143964 *)il2cpp_codegen_object_new(ZlibException_t3942143964_il2cpp_TypeInfo_var);
		ZlibException__ctor_m1084687637(L_1, _stringLiteral253958326, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, ZlibCodec_EndDeflate_m2070701999_RuntimeMethod_var);
	}

IL_0016:
	{
		__this->set_dstate_9((DeflateManager_t3554793512 *)NULL);
		return 0;
	}
}
// System.Void Pathfinding.Ionic.Zlib.ZlibCodec::ResetDeflate()
extern "C" IL2CPP_METHOD_ATTR void ZlibCodec_ResetDeflate_m1569060282 (ZlibCodec_t855427629 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ZlibCodec_ResetDeflate_m1569060282_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		DeflateManager_t3554793512 * L_0 = __this->get_dstate_9();
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		ZlibException_t3942143964 * L_1 = (ZlibException_t3942143964 *)il2cpp_codegen_object_new(ZlibException_t3942143964_il2cpp_TypeInfo_var);
		ZlibException__ctor_m1084687637(L_1, _stringLiteral253958326, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, ZlibCodec_ResetDeflate_m1569060282_RuntimeMethod_var);
	}

IL_0016:
	{
		DeflateManager_t3554793512 * L_2 = __this->get_dstate_9();
		NullCheck(L_2);
		DeflateManager_Reset_m2405421907(L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Pathfinding.Ionic.Zlib.ZlibCodec::flush_pending()
extern "C" IL2CPP_METHOD_ATTR void ZlibCodec_flush_pending_m1862003519 (ZlibCodec_t855427629 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ZlibCodec_flush_pending_m1862003519_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		DeflateManager_t3554793512 * L_0 = __this->get_dstate_9();
		NullCheck(L_0);
		int32_t L_1 = L_0->get_pendingCount_25();
		V_0 = L_1;
		int32_t L_2 = V_0;
		int32_t L_3 = __this->get_AvailableBytesOut_6();
		if ((((int32_t)L_2) <= ((int32_t)L_3)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_4 = __this->get_AvailableBytesOut_6();
		V_0 = L_4;
	}

IL_001f:
	{
		int32_t L_5 = V_0;
		if (L_5)
		{
			goto IL_0026;
		}
	}
	{
		return;
	}

IL_0026:
	{
		DeflateManager_t3554793512 * L_6 = __this->get_dstate_9();
		NullCheck(L_6);
		ByteU5BU5D_t4116647657* L_7 = L_6->get_pending_23();
		NullCheck(L_7);
		DeflateManager_t3554793512 * L_8 = __this->get_dstate_9();
		NullCheck(L_8);
		int32_t L_9 = L_8->get_nextPending_24();
		if ((((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_7)->max_length))))) <= ((int32_t)L_9)))
		{
			goto IL_008a;
		}
	}
	{
		ByteU5BU5D_t4116647657* L_10 = __this->get_OutputBuffer_4();
		NullCheck(L_10);
		int32_t L_11 = __this->get_NextOut_5();
		if ((((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_10)->max_length))))) <= ((int32_t)L_11)))
		{
			goto IL_008a;
		}
	}
	{
		DeflateManager_t3554793512 * L_12 = __this->get_dstate_9();
		NullCheck(L_12);
		ByteU5BU5D_t4116647657* L_13 = L_12->get_pending_23();
		NullCheck(L_13);
		DeflateManager_t3554793512 * L_14 = __this->get_dstate_9();
		NullCheck(L_14);
		int32_t L_15 = L_14->get_nextPending_24();
		int32_t L_16 = V_0;
		if ((((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_13)->max_length))))) < ((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)L_16)))))
		{
			goto IL_008a;
		}
	}
	{
		ByteU5BU5D_t4116647657* L_17 = __this->get_OutputBuffer_4();
		NullCheck(L_17);
		int32_t L_18 = __this->get_NextOut_5();
		int32_t L_19 = V_0;
		if ((((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_17)->max_length))))) >= ((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_18, (int32_t)L_19)))))
		{
			goto IL_00bc;
		}
	}

IL_008a:
	{
		DeflateManager_t3554793512 * L_20 = __this->get_dstate_9();
		NullCheck(L_20);
		ByteU5BU5D_t4116647657* L_21 = L_20->get_pending_23();
		NullCheck(L_21);
		int32_t L_22 = (((int32_t)((int32_t)(((RuntimeArray *)L_21)->max_length))));
		RuntimeObject * L_23 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_22);
		DeflateManager_t3554793512 * L_24 = __this->get_dstate_9();
		NullCheck(L_24);
		int32_t L_25 = L_24->get_pendingCount_25();
		int32_t L_26 = L_25;
		RuntimeObject * L_27 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_26);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_28 = String_Format_m2556382932(NULL /*static, unused*/, _stringLiteral1934335260, L_23, L_27, /*hidden argument*/NULL);
		ZlibException_t3942143964 * L_29 = (ZlibException_t3942143964 *)il2cpp_codegen_object_new(ZlibException_t3942143964_il2cpp_TypeInfo_var);
		ZlibException__ctor_m1084687637(L_29, L_28, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_29, NULL, ZlibCodec_flush_pending_m1862003519_RuntimeMethod_var);
	}

IL_00bc:
	{
		DeflateManager_t3554793512 * L_30 = __this->get_dstate_9();
		NullCheck(L_30);
		ByteU5BU5D_t4116647657* L_31 = L_30->get_pending_23();
		DeflateManager_t3554793512 * L_32 = __this->get_dstate_9();
		NullCheck(L_32);
		int32_t L_33 = L_32->get_nextPending_24();
		ByteU5BU5D_t4116647657* L_34 = __this->get_OutputBuffer_4();
		int32_t L_35 = __this->get_NextOut_5();
		int32_t L_36 = V_0;
		Array_Copy_m344457298(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_31, L_33, (RuntimeArray *)(RuntimeArray *)L_34, L_35, L_36, /*hidden argument*/NULL);
		int32_t L_37 = __this->get_NextOut_5();
		int32_t L_38 = V_0;
		__this->set_NextOut_5(((int32_t)il2cpp_codegen_add((int32_t)L_37, (int32_t)L_38)));
		DeflateManager_t3554793512 * L_39 = __this->get_dstate_9();
		DeflateManager_t3554793512 * L_40 = L_39;
		NullCheck(L_40);
		int32_t L_41 = L_40->get_nextPending_24();
		int32_t L_42 = V_0;
		NullCheck(L_40);
		L_40->set_nextPending_24(((int32_t)il2cpp_codegen_add((int32_t)L_41, (int32_t)L_42)));
		int64_t L_43 = __this->get_TotalBytesOut_7();
		int32_t L_44 = V_0;
		__this->set_TotalBytesOut_7(((int64_t)il2cpp_codegen_add((int64_t)L_43, (int64_t)(((int64_t)((int64_t)L_44))))));
		int32_t L_45 = __this->get_AvailableBytesOut_6();
		int32_t L_46 = V_0;
		__this->set_AvailableBytesOut_6(((int32_t)il2cpp_codegen_subtract((int32_t)L_45, (int32_t)L_46)));
		DeflateManager_t3554793512 * L_47 = __this->get_dstate_9();
		DeflateManager_t3554793512 * L_48 = L_47;
		NullCheck(L_48);
		int32_t L_49 = L_48->get_pendingCount_25();
		int32_t L_50 = V_0;
		NullCheck(L_48);
		L_48->set_pendingCount_25(((int32_t)il2cpp_codegen_subtract((int32_t)L_49, (int32_t)L_50)));
		DeflateManager_t3554793512 * L_51 = __this->get_dstate_9();
		NullCheck(L_51);
		int32_t L_52 = L_51->get_pendingCount_25();
		if (L_52)
		{
			goto IL_0151;
		}
	}
	{
		DeflateManager_t3554793512 * L_53 = __this->get_dstate_9();
		NullCheck(L_53);
		L_53->set_nextPending_24(0);
	}

IL_0151:
	{
		return;
	}
}
// System.Int32 Pathfinding.Ionic.Zlib.ZlibCodec::read_buf(System.Byte[],System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR int32_t ZlibCodec_read_buf_m2667585112 (ZlibCodec_t855427629 * __this, ByteU5BU5D_t4116647657* ___buf0, int32_t ___start1, int32_t ___size2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ZlibCodec_read_buf_m2667585112_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_AvailableBytesIn_2();
		V_0 = L_0;
		int32_t L_1 = V_0;
		int32_t L_2 = ___size2;
		if ((((int32_t)L_1) <= ((int32_t)L_2)))
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_3 = ___size2;
		V_0 = L_3;
	}

IL_0010:
	{
		int32_t L_4 = V_0;
		if (L_4)
		{
			goto IL_0018;
		}
	}
	{
		return 0;
	}

IL_0018:
	{
		int32_t L_5 = __this->get_AvailableBytesIn_2();
		int32_t L_6 = V_0;
		__this->set_AvailableBytesIn_2(((int32_t)il2cpp_codegen_subtract((int32_t)L_5, (int32_t)L_6)));
		DeflateManager_t3554793512 * L_7 = __this->get_dstate_9();
		NullCheck(L_7);
		bool L_8 = DeflateManager_get_WantRfc1950HeaderBytes_m3492961775(L_7, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_0054;
		}
	}
	{
		uint32_t L_9 = __this->get__Adler32_11();
		ByteU5BU5D_t4116647657* L_10 = __this->get_InputBuffer_0();
		int32_t L_11 = __this->get_NextIn_1();
		int32_t L_12 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Adler_t3126894214_il2cpp_TypeInfo_var);
		uint32_t L_13 = Adler_Adler32_m1147423111(NULL /*static, unused*/, L_9, L_10, L_11, L_12, /*hidden argument*/NULL);
		__this->set__Adler32_11(L_13);
	}

IL_0054:
	{
		ByteU5BU5D_t4116647657* L_14 = __this->get_InputBuffer_0();
		int32_t L_15 = __this->get_NextIn_1();
		ByteU5BU5D_t4116647657* L_16 = ___buf0;
		int32_t L_17 = ___start1;
		int32_t L_18 = V_0;
		Array_Copy_m344457298(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_14, L_15, (RuntimeArray *)(RuntimeArray *)L_16, L_17, L_18, /*hidden argument*/NULL);
		int32_t L_19 = __this->get_NextIn_1();
		int32_t L_20 = V_0;
		__this->set_NextIn_1(((int32_t)il2cpp_codegen_add((int32_t)L_19, (int32_t)L_20)));
		int64_t L_21 = __this->get_TotalBytesIn_3();
		int32_t L_22 = V_0;
		__this->set_TotalBytesIn_3(((int64_t)il2cpp_codegen_add((int64_t)L_21, (int64_t)(((int64_t)((int64_t)L_22))))));
		int32_t L_23 = V_0;
		return L_23;
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
// Pathfinding.Ionic.Zlib.ZlibException
const Il2CppGuid ZlibException_t3942143964::CLSID = { 0xebc25cf6, 0x9120, 0x4283, 0xb9, 0x72, 0xe, 0x55, 0x20, 0xd0, 0x0, 0xe };
// System.Void Pathfinding.Ionic.Zlib.ZlibException::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void ZlibException__ctor_m1084687637 (ZlibException_t3942143964 * __this, String_t* ___s0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___s0;
		Exception__ctor_m1152696503(__this, L_0, /*hidden argument*/NULL);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
