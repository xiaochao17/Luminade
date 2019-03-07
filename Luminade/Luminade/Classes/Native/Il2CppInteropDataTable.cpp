#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <stdint.h>

#include "il2cpp-class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"


// Pathfinding.Ionic.Zip.CloseDelegate
struct CloseDelegate_t2132192931;
// Pathfinding.Ionic.Zip.OpenDelegate
struct OpenDelegate_t3655486755;
// Pathfinding.Ionic.Zip.SetCompressionCallback
struct SetCompressionCallback_t1872989618;
// Pathfinding.Ionic.Zip.WriteDelegate
struct WriteDelegate_t3162700152;
// Pathfinding.Ionic.Zip.ZipContainer
struct ZipContainer_t1729444702;
// Pathfinding.Ionic.Zip.ZipCrypto
struct ZipCrypto_t212798476;
// Pathfinding.Ionic.Zlib.DeflateManager
struct DeflateManager_t3554793512;
// Pathfinding.Ionic.Zlib.InflateManager
struct InflateManager_t3682621372;
// Pathfinding.Ionic.Zlib.ParallelDeflateOutputStream
struct ParallelDeflateOutputStream_t2527365669;
// System.Byte[]
struct ByteU5BU5D_t4116647657;
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.Collections.Generic.Dictionary`2<System.String,Pathfinding.Ionic.Zip.ZipEntry>
struct Dictionary_2_t1942259107;
// System.Collections.Generic.List`1<Pathfinding.Ionic.Zip.ZipEntry>
struct List_1_t3629077550;
// System.Collections.IDictionary
struct IDictionary_t1363984059;
// System.EventHandler`1<Pathfinding.Ionic.Zip.AddProgressEventArgs>
struct EventHandler_1_t1418467264;
// System.EventHandler`1<Pathfinding.Ionic.Zip.ExtractProgressEventArgs>
struct EventHandler_1_t3223602017;
// System.EventHandler`1<Pathfinding.Ionic.Zip.ReadProgressEventArgs>
struct EventHandler_1_t3907735204;
// System.EventHandler`1<Pathfinding.Ionic.Zip.SaveProgressEventArgs>
struct EventHandler_1_t2642563099;
// System.EventHandler`1<Pathfinding.Ionic.Zip.ZipErrorEventArgs>
struct EventHandler_1_t3947805035;
// System.IO.Stream
struct Stream_t1273022909;
// System.IO.TextWriter
struct TextWriter_t3478189236;
// System.Int32[]
struct Int32U5BU5D_t385246372;
// System.IntPtr[]
struct IntPtrU5BU5D_t4013366056;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t1281789340;
// System.Text.Encoding
struct Encoding_t1523322056;
// System.UInt32[]
struct UInt32U5BU5D_t2770800703;




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
#ifndef ZIPEXCEPTION_T2997260086_H
#define ZIPEXCEPTION_T2997260086_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Pathfinding.Ionic.Zip.ZipException
struct  ZipException_t2997260086  : public Exception_t
{
public:
	static const Il2CppGuid CLSID;

public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ZIPEXCEPTION_T2997260086_H
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
#ifndef NULLABLE_1_T1819850047_H
#define NULLABLE_1_T1819850047_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Nullable`1<System.Boolean>
struct  Nullable_1_t1819850047 
{
public:
	// T System.Nullable`1::value
	bool ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t1819850047, ___value_0)); }
	inline bool get_value_0() const { return ___value_0; }
	inline bool* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(bool value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t1819850047, ___has_value_1)); }
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
#endif // NULLABLE_1_T1819850047_H
#ifndef NULLABLE_1_T1164162090_H
#define NULLABLE_1_T1164162090_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Nullable`1<System.Int64>
struct  Nullable_1_t1164162090 
{
public:
	// T System.Nullable`1::value
	int64_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t1164162090, ___value_0)); }
	inline int64_t get_value_0() const { return ___value_0; }
	inline int64_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int64_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t1164162090, ___has_value_1)); }
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
#endif // NULLABLE_1_T1164162090_H
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
#ifndef BADCRCEXCEPTION_T1019298900_H
#define BADCRCEXCEPTION_T1019298900_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Pathfinding.Ionic.Zip.BadCrcException
struct  BadCrcException_t1019298900  : public ZipException_t2997260086
{
public:
	static const Il2CppGuid CLSID;

public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BADCRCEXCEPTION_T1019298900_H
#ifndef BADPASSWORDEXCEPTION_T2697529055_H
#define BADPASSWORDEXCEPTION_T2697529055_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Pathfinding.Ionic.Zip.BadPasswordException
struct  BadPasswordException_t2697529055  : public ZipException_t2997260086
{
public:
	static const Il2CppGuid CLSID;

public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BADPASSWORDEXCEPTION_T2697529055_H
#ifndef BADREADEXCEPTION_T3174216175_H
#define BADREADEXCEPTION_T3174216175_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Pathfinding.Ionic.Zip.BadReadException
struct  BadReadException_t3174216175  : public ZipException_t2997260086
{
public:
	static const Il2CppGuid CLSID;

public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BADREADEXCEPTION_T3174216175_H
#ifndef BADSTATEEXCEPTION_T491447969_H
#define BADSTATEEXCEPTION_T491447969_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Pathfinding.Ionic.Zip.BadStateException
struct  BadStateException_t491447969  : public ZipException_t2997260086
{
public:
	static const Il2CppGuid CLSID;

public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BADSTATEEXCEPTION_T491447969_H
#ifndef COMPRESSIONMETHOD_T1618462714_H
#define COMPRESSIONMETHOD_T1618462714_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Pathfinding.Ionic.Zip.CompressionMethod
struct  CompressionMethod_t1618462714 
{
public:
	// System.Int32 Pathfinding.Ionic.Zip.CompressionMethod::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(CompressionMethod_t1618462714, ___value___1)); }
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
#endif // COMPRESSIONMETHOD_T1618462714_H
#ifndef ENCRYPTIONALGORITHM_T3756300662_H
#define ENCRYPTIONALGORITHM_T3756300662_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Pathfinding.Ionic.Zip.EncryptionAlgorithm
struct  EncryptionAlgorithm_t3756300662 
{
public:
	// System.Int32 Pathfinding.Ionic.Zip.EncryptionAlgorithm::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(EncryptionAlgorithm_t3756300662, ___value___1)); }
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
#endif // ENCRYPTIONALGORITHM_T3756300662_H
#ifndef EXTRACTEXISTINGFILEACTION_T1365653946_H
#define EXTRACTEXISTINGFILEACTION_T1365653946_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Pathfinding.Ionic.Zip.ExtractExistingFileAction
struct  ExtractExistingFileAction_t1365653946 
{
public:
	// System.Int32 Pathfinding.Ionic.Zip.ExtractExistingFileAction::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ExtractExistingFileAction_t1365653946, ___value___1)); }
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
#endif // EXTRACTEXISTINGFILEACTION_T1365653946_H
#ifndef ZIP64OPTION_T2428932681_H
#define ZIP64OPTION_T2428932681_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Pathfinding.Ionic.Zip.Zip64Option
struct  Zip64Option_t2428932681 
{
public:
	// System.Int32 Pathfinding.Ionic.Zip.Zip64Option::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Zip64Option_t2428932681, ___value___1)); }
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
#endif // ZIP64OPTION_T2428932681_H
#ifndef ZIPENTRYSOURCE_T154021941_H
#define ZIPENTRYSOURCE_T154021941_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Pathfinding.Ionic.Zip.ZipEntrySource
struct  ZipEntrySource_t154021941 
{
public:
	// System.Int32 Pathfinding.Ionic.Zip.ZipEntrySource::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ZipEntrySource_t154021941, ___value___1)); }
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
#endif // ZIPENTRYSOURCE_T154021941_H
#ifndef ZIPENTRYTIMESTAMP_T510821900_H
#define ZIPENTRYTIMESTAMP_T510821900_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Pathfinding.Ionic.Zip.ZipEntryTimestamp
struct  ZipEntryTimestamp_t510821900 
{
public:
	// System.Int32 Pathfinding.Ionic.Zip.ZipEntryTimestamp::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ZipEntryTimestamp_t510821900, ___value___1)); }
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
#endif // ZIPENTRYTIMESTAMP_T510821900_H
#ifndef ZIPERRORACTION_T3413351941_H
#define ZIPERRORACTION_T3413351941_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Pathfinding.Ionic.Zip.ZipErrorAction
struct  ZipErrorAction_t3413351941 
{
public:
	// System.Int32 Pathfinding.Ionic.Zip.ZipErrorAction::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ZipErrorAction_t3413351941, ___value___1)); }
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
#endif // ZIPERRORACTION_T3413351941_H
#ifndef ZIPOPTION_T150146160_H
#define ZIPOPTION_T150146160_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Pathfinding.Ionic.Zip.ZipOption
struct  ZipOption_t150146160 
{
public:
	// System.Int32 Pathfinding.Ionic.Zip.ZipOption::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ZipOption_t150146160, ___value___1)); }
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
#endif // ZIPOPTION_T150146160_H
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
#ifndef ZIPFILE_T528027654_H
#define ZIPFILE_T528027654_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Pathfinding.Ionic.Zip.ZipFile
struct  ZipFile_t528027654  : public RuntimeObject
{
public:
	static const Il2CppGuid CLSID;

public:
	// System.Int64 Pathfinding.Ionic.Zip.ZipFile::_lengthOfReadStream
	int64_t ____lengthOfReadStream_0;
	// System.IO.TextWriter Pathfinding.Ionic.Zip.ZipFile::_StatusMessageTextWriter
	TextWriter_t3478189236 * ____StatusMessageTextWriter_1;
	// System.Boolean Pathfinding.Ionic.Zip.ZipFile::_CaseSensitiveRetrieval
	bool ____CaseSensitiveRetrieval_2;
	// System.IO.Stream Pathfinding.Ionic.Zip.ZipFile::_readstream
	Stream_t1273022909 * ____readstream_3;
	// System.IO.Stream Pathfinding.Ionic.Zip.ZipFile::_writestream
	Stream_t1273022909 * ____writestream_4;
	// System.UInt16 Pathfinding.Ionic.Zip.ZipFile::_versionMadeBy
	uint16_t ____versionMadeBy_5;
	// System.UInt16 Pathfinding.Ionic.Zip.ZipFile::_versionNeededToExtract
	uint16_t ____versionNeededToExtract_6;
	// System.UInt32 Pathfinding.Ionic.Zip.ZipFile::_diskNumberWithCd
	uint32_t ____diskNumberWithCd_7;
	// System.Int32 Pathfinding.Ionic.Zip.ZipFile::_maxOutputSegmentSize
	int32_t ____maxOutputSegmentSize_8;
	// System.UInt32 Pathfinding.Ionic.Zip.ZipFile::_numberOfSegmentsForMostRecentSave
	uint32_t ____numberOfSegmentsForMostRecentSave_9;
	// Pathfinding.Ionic.Zip.ZipErrorAction Pathfinding.Ionic.Zip.ZipFile::_zipErrorAction
	int32_t ____zipErrorAction_10;
	// System.Boolean Pathfinding.Ionic.Zip.ZipFile::_disposed
	bool ____disposed_11;
	// System.Collections.Generic.Dictionary`2<System.String,Pathfinding.Ionic.Zip.ZipEntry> Pathfinding.Ionic.Zip.ZipFile::_entries
	Dictionary_2_t1942259107 * ____entries_12;
	// System.Collections.Generic.List`1<Pathfinding.Ionic.Zip.ZipEntry> Pathfinding.Ionic.Zip.ZipFile::_zipEntriesAsList
	List_1_t3629077550 * ____zipEntriesAsList_13;
	// System.String Pathfinding.Ionic.Zip.ZipFile::_name
	String_t* ____name_14;
	// System.String Pathfinding.Ionic.Zip.ZipFile::_readName
	String_t* ____readName_15;
	// System.String Pathfinding.Ionic.Zip.ZipFile::_Comment
	String_t* ____Comment_16;
	// System.String Pathfinding.Ionic.Zip.ZipFile::_Password
	String_t* ____Password_17;
	// System.Boolean Pathfinding.Ionic.Zip.ZipFile::_emitNtfsTimes
	bool ____emitNtfsTimes_18;
	// System.Boolean Pathfinding.Ionic.Zip.ZipFile::_emitUnixTimes
	bool ____emitUnixTimes_19;
	// Pathfinding.Ionic.Zlib.CompressionStrategy Pathfinding.Ionic.Zip.ZipFile::_Strategy
	int32_t ____Strategy_20;
	// Pathfinding.Ionic.Zip.CompressionMethod Pathfinding.Ionic.Zip.ZipFile::_compressionMethod
	int32_t ____compressionMethod_21;
	// System.Boolean Pathfinding.Ionic.Zip.ZipFile::_fileAlreadyExists
	bool ____fileAlreadyExists_22;
	// System.String Pathfinding.Ionic.Zip.ZipFile::_temporaryFileName
	String_t* ____temporaryFileName_23;
	// System.Boolean Pathfinding.Ionic.Zip.ZipFile::_contentsChanged
	bool ____contentsChanged_24;
	// System.Boolean Pathfinding.Ionic.Zip.ZipFile::_hasBeenSaved
	bool ____hasBeenSaved_25;
	// System.String Pathfinding.Ionic.Zip.ZipFile::_TempFileFolder
	String_t* ____TempFileFolder_26;
	// System.Boolean Pathfinding.Ionic.Zip.ZipFile::_ReadStreamIsOurs
	bool ____ReadStreamIsOurs_27;
	// System.Object Pathfinding.Ionic.Zip.ZipFile::LOCK
	RuntimeObject * ___LOCK_28;
	// System.Boolean Pathfinding.Ionic.Zip.ZipFile::_saveOperationCanceled
	bool ____saveOperationCanceled_29;
	// System.Boolean Pathfinding.Ionic.Zip.ZipFile::_extractOperationCanceled
	bool ____extractOperationCanceled_30;
	// System.Boolean Pathfinding.Ionic.Zip.ZipFile::_addOperationCanceled
	bool ____addOperationCanceled_31;
	// Pathfinding.Ionic.Zip.EncryptionAlgorithm Pathfinding.Ionic.Zip.ZipFile::_Encryption
	int32_t ____Encryption_32;
	// System.Boolean Pathfinding.Ionic.Zip.ZipFile::_JustSaved
	bool ____JustSaved_33;
	// System.Int64 Pathfinding.Ionic.Zip.ZipFile::_locEndOfCDS
	int64_t ____locEndOfCDS_34;
	// System.UInt32 Pathfinding.Ionic.Zip.ZipFile::_OffsetOfCentralDirectory
	uint32_t ____OffsetOfCentralDirectory_35;
	// System.Int64 Pathfinding.Ionic.Zip.ZipFile::_OffsetOfCentralDirectory64
	int64_t ____OffsetOfCentralDirectory64_36;
	// System.Nullable`1<System.Boolean> Pathfinding.Ionic.Zip.ZipFile::_OutputUsesZip64
	Nullable_1_t1819850047  ____OutputUsesZip64_37;
	// System.Boolean Pathfinding.Ionic.Zip.ZipFile::_inExtractAll
	bool ____inExtractAll_38;
	// System.Text.Encoding Pathfinding.Ionic.Zip.ZipFile::_alternateEncoding
	Encoding_t1523322056 * ____alternateEncoding_40;
	// Pathfinding.Ionic.Zip.ZipOption Pathfinding.Ionic.Zip.ZipFile::_alternateEncodingUsage
	int32_t ____alternateEncodingUsage_41;
	// System.Int32 Pathfinding.Ionic.Zip.ZipFile::_BufferSize
	int32_t ____BufferSize_42;
	// Pathfinding.Ionic.Zlib.ParallelDeflateOutputStream Pathfinding.Ionic.Zip.ZipFile::ParallelDeflater
	ParallelDeflateOutputStream_t2527365669 * ___ParallelDeflater_43;
	// System.Int64 Pathfinding.Ionic.Zip.ZipFile::_ParallelDeflateThreshold
	int64_t ____ParallelDeflateThreshold_44;
	// System.Int32 Pathfinding.Ionic.Zip.ZipFile::_maxBufferPairs
	int32_t ____maxBufferPairs_45;
	// Pathfinding.Ionic.Zip.Zip64Option Pathfinding.Ionic.Zip.ZipFile::_zip64
	int32_t ____zip64_46;
	// System.Boolean Pathfinding.Ionic.Zip.ZipFile::_SavingSfx
	bool ____SavingSfx_47;
	// System.EventHandler`1<Pathfinding.Ionic.Zip.SaveProgressEventArgs> Pathfinding.Ionic.Zip.ZipFile::SaveProgress
	EventHandler_1_t2642563099 * ___SaveProgress_49;
	// System.EventHandler`1<Pathfinding.Ionic.Zip.ReadProgressEventArgs> Pathfinding.Ionic.Zip.ZipFile::ReadProgress
	EventHandler_1_t3907735204 * ___ReadProgress_50;
	// System.EventHandler`1<Pathfinding.Ionic.Zip.ExtractProgressEventArgs> Pathfinding.Ionic.Zip.ZipFile::ExtractProgress
	EventHandler_1_t3223602017 * ___ExtractProgress_51;
	// System.EventHandler`1<Pathfinding.Ionic.Zip.AddProgressEventArgs> Pathfinding.Ionic.Zip.ZipFile::AddProgress
	EventHandler_1_t1418467264 * ___AddProgress_52;
	// System.EventHandler`1<Pathfinding.Ionic.Zip.ZipErrorEventArgs> Pathfinding.Ionic.Zip.ZipFile::ZipError
	EventHandler_1_t3947805035 * ___ZipError_53;
	// System.Boolean Pathfinding.Ionic.Zip.ZipFile::<FullScan>k__BackingField
	bool ___U3CFullScanU3Ek__BackingField_54;
	// System.Boolean Pathfinding.Ionic.Zip.ZipFile::<SortEntriesBeforeSaving>k__BackingField
	bool ___U3CSortEntriesBeforeSavingU3Ek__BackingField_55;
	// System.Boolean Pathfinding.Ionic.Zip.ZipFile::<AddDirectoryWillTraverseReparsePoints>k__BackingField
	bool ___U3CAddDirectoryWillTraverseReparsePointsU3Ek__BackingField_56;
	// System.Int32 Pathfinding.Ionic.Zip.ZipFile::<CodecBufferSize>k__BackingField
	int32_t ___U3CCodecBufferSizeU3Ek__BackingField_57;
	// System.Boolean Pathfinding.Ionic.Zip.ZipFile::<FlattenFoldersOnExtract>k__BackingField
	bool ___U3CFlattenFoldersOnExtractU3Ek__BackingField_58;
	// Pathfinding.Ionic.Zlib.CompressionLevel Pathfinding.Ionic.Zip.ZipFile::<CompressionLevel>k__BackingField
	int32_t ___U3CCompressionLevelU3Ek__BackingField_59;
	// Pathfinding.Ionic.Zip.ExtractExistingFileAction Pathfinding.Ionic.Zip.ZipFile::<ExtractExistingFile>k__BackingField
	int32_t ___U3CExtractExistingFileU3Ek__BackingField_60;
	// Pathfinding.Ionic.Zip.SetCompressionCallback Pathfinding.Ionic.Zip.ZipFile::<SetCompression>k__BackingField
	SetCompressionCallback_t1872989618 * ___U3CSetCompressionU3Ek__BackingField_61;

public:
	inline static int32_t get_offset_of__lengthOfReadStream_0() { return static_cast<int32_t>(offsetof(ZipFile_t528027654, ____lengthOfReadStream_0)); }
	inline int64_t get__lengthOfReadStream_0() const { return ____lengthOfReadStream_0; }
	inline int64_t* get_address_of__lengthOfReadStream_0() { return &____lengthOfReadStream_0; }
	inline void set__lengthOfReadStream_0(int64_t value)
	{
		____lengthOfReadStream_0 = value;
	}

	inline static int32_t get_offset_of__StatusMessageTextWriter_1() { return static_cast<int32_t>(offsetof(ZipFile_t528027654, ____StatusMessageTextWriter_1)); }
	inline TextWriter_t3478189236 * get__StatusMessageTextWriter_1() const { return ____StatusMessageTextWriter_1; }
	inline TextWriter_t3478189236 ** get_address_of__StatusMessageTextWriter_1() { return &____StatusMessageTextWriter_1; }
	inline void set__StatusMessageTextWriter_1(TextWriter_t3478189236 * value)
	{
		____StatusMessageTextWriter_1 = value;
		Il2CppCodeGenWriteBarrier((&____StatusMessageTextWriter_1), value);
	}

	inline static int32_t get_offset_of__CaseSensitiveRetrieval_2() { return static_cast<int32_t>(offsetof(ZipFile_t528027654, ____CaseSensitiveRetrieval_2)); }
	inline bool get__CaseSensitiveRetrieval_2() const { return ____CaseSensitiveRetrieval_2; }
	inline bool* get_address_of__CaseSensitiveRetrieval_2() { return &____CaseSensitiveRetrieval_2; }
	inline void set__CaseSensitiveRetrieval_2(bool value)
	{
		____CaseSensitiveRetrieval_2 = value;
	}

	inline static int32_t get_offset_of__readstream_3() { return static_cast<int32_t>(offsetof(ZipFile_t528027654, ____readstream_3)); }
	inline Stream_t1273022909 * get__readstream_3() const { return ____readstream_3; }
	inline Stream_t1273022909 ** get_address_of__readstream_3() { return &____readstream_3; }
	inline void set__readstream_3(Stream_t1273022909 * value)
	{
		____readstream_3 = value;
		Il2CppCodeGenWriteBarrier((&____readstream_3), value);
	}

	inline static int32_t get_offset_of__writestream_4() { return static_cast<int32_t>(offsetof(ZipFile_t528027654, ____writestream_4)); }
	inline Stream_t1273022909 * get__writestream_4() const { return ____writestream_4; }
	inline Stream_t1273022909 ** get_address_of__writestream_4() { return &____writestream_4; }
	inline void set__writestream_4(Stream_t1273022909 * value)
	{
		____writestream_4 = value;
		Il2CppCodeGenWriteBarrier((&____writestream_4), value);
	}

	inline static int32_t get_offset_of__versionMadeBy_5() { return static_cast<int32_t>(offsetof(ZipFile_t528027654, ____versionMadeBy_5)); }
	inline uint16_t get__versionMadeBy_5() const { return ____versionMadeBy_5; }
	inline uint16_t* get_address_of__versionMadeBy_5() { return &____versionMadeBy_5; }
	inline void set__versionMadeBy_5(uint16_t value)
	{
		____versionMadeBy_5 = value;
	}

	inline static int32_t get_offset_of__versionNeededToExtract_6() { return static_cast<int32_t>(offsetof(ZipFile_t528027654, ____versionNeededToExtract_6)); }
	inline uint16_t get__versionNeededToExtract_6() const { return ____versionNeededToExtract_6; }
	inline uint16_t* get_address_of__versionNeededToExtract_6() { return &____versionNeededToExtract_6; }
	inline void set__versionNeededToExtract_6(uint16_t value)
	{
		____versionNeededToExtract_6 = value;
	}

	inline static int32_t get_offset_of__diskNumberWithCd_7() { return static_cast<int32_t>(offsetof(ZipFile_t528027654, ____diskNumberWithCd_7)); }
	inline uint32_t get__diskNumberWithCd_7() const { return ____diskNumberWithCd_7; }
	inline uint32_t* get_address_of__diskNumberWithCd_7() { return &____diskNumberWithCd_7; }
	inline void set__diskNumberWithCd_7(uint32_t value)
	{
		____diskNumberWithCd_7 = value;
	}

	inline static int32_t get_offset_of__maxOutputSegmentSize_8() { return static_cast<int32_t>(offsetof(ZipFile_t528027654, ____maxOutputSegmentSize_8)); }
	inline int32_t get__maxOutputSegmentSize_8() const { return ____maxOutputSegmentSize_8; }
	inline int32_t* get_address_of__maxOutputSegmentSize_8() { return &____maxOutputSegmentSize_8; }
	inline void set__maxOutputSegmentSize_8(int32_t value)
	{
		____maxOutputSegmentSize_8 = value;
	}

	inline static int32_t get_offset_of__numberOfSegmentsForMostRecentSave_9() { return static_cast<int32_t>(offsetof(ZipFile_t528027654, ____numberOfSegmentsForMostRecentSave_9)); }
	inline uint32_t get__numberOfSegmentsForMostRecentSave_9() const { return ____numberOfSegmentsForMostRecentSave_9; }
	inline uint32_t* get_address_of__numberOfSegmentsForMostRecentSave_9() { return &____numberOfSegmentsForMostRecentSave_9; }
	inline void set__numberOfSegmentsForMostRecentSave_9(uint32_t value)
	{
		____numberOfSegmentsForMostRecentSave_9 = value;
	}

	inline static int32_t get_offset_of__zipErrorAction_10() { return static_cast<int32_t>(offsetof(ZipFile_t528027654, ____zipErrorAction_10)); }
	inline int32_t get__zipErrorAction_10() const { return ____zipErrorAction_10; }
	inline int32_t* get_address_of__zipErrorAction_10() { return &____zipErrorAction_10; }
	inline void set__zipErrorAction_10(int32_t value)
	{
		____zipErrorAction_10 = value;
	}

	inline static int32_t get_offset_of__disposed_11() { return static_cast<int32_t>(offsetof(ZipFile_t528027654, ____disposed_11)); }
	inline bool get__disposed_11() const { return ____disposed_11; }
	inline bool* get_address_of__disposed_11() { return &____disposed_11; }
	inline void set__disposed_11(bool value)
	{
		____disposed_11 = value;
	}

	inline static int32_t get_offset_of__entries_12() { return static_cast<int32_t>(offsetof(ZipFile_t528027654, ____entries_12)); }
	inline Dictionary_2_t1942259107 * get__entries_12() const { return ____entries_12; }
	inline Dictionary_2_t1942259107 ** get_address_of__entries_12() { return &____entries_12; }
	inline void set__entries_12(Dictionary_2_t1942259107 * value)
	{
		____entries_12 = value;
		Il2CppCodeGenWriteBarrier((&____entries_12), value);
	}

	inline static int32_t get_offset_of__zipEntriesAsList_13() { return static_cast<int32_t>(offsetof(ZipFile_t528027654, ____zipEntriesAsList_13)); }
	inline List_1_t3629077550 * get__zipEntriesAsList_13() const { return ____zipEntriesAsList_13; }
	inline List_1_t3629077550 ** get_address_of__zipEntriesAsList_13() { return &____zipEntriesAsList_13; }
	inline void set__zipEntriesAsList_13(List_1_t3629077550 * value)
	{
		____zipEntriesAsList_13 = value;
		Il2CppCodeGenWriteBarrier((&____zipEntriesAsList_13), value);
	}

	inline static int32_t get_offset_of__name_14() { return static_cast<int32_t>(offsetof(ZipFile_t528027654, ____name_14)); }
	inline String_t* get__name_14() const { return ____name_14; }
	inline String_t** get_address_of__name_14() { return &____name_14; }
	inline void set__name_14(String_t* value)
	{
		____name_14 = value;
		Il2CppCodeGenWriteBarrier((&____name_14), value);
	}

	inline static int32_t get_offset_of__readName_15() { return static_cast<int32_t>(offsetof(ZipFile_t528027654, ____readName_15)); }
	inline String_t* get__readName_15() const { return ____readName_15; }
	inline String_t** get_address_of__readName_15() { return &____readName_15; }
	inline void set__readName_15(String_t* value)
	{
		____readName_15 = value;
		Il2CppCodeGenWriteBarrier((&____readName_15), value);
	}

	inline static int32_t get_offset_of__Comment_16() { return static_cast<int32_t>(offsetof(ZipFile_t528027654, ____Comment_16)); }
	inline String_t* get__Comment_16() const { return ____Comment_16; }
	inline String_t** get_address_of__Comment_16() { return &____Comment_16; }
	inline void set__Comment_16(String_t* value)
	{
		____Comment_16 = value;
		Il2CppCodeGenWriteBarrier((&____Comment_16), value);
	}

	inline static int32_t get_offset_of__Password_17() { return static_cast<int32_t>(offsetof(ZipFile_t528027654, ____Password_17)); }
	inline String_t* get__Password_17() const { return ____Password_17; }
	inline String_t** get_address_of__Password_17() { return &____Password_17; }
	inline void set__Password_17(String_t* value)
	{
		____Password_17 = value;
		Il2CppCodeGenWriteBarrier((&____Password_17), value);
	}

	inline static int32_t get_offset_of__emitNtfsTimes_18() { return static_cast<int32_t>(offsetof(ZipFile_t528027654, ____emitNtfsTimes_18)); }
	inline bool get__emitNtfsTimes_18() const { return ____emitNtfsTimes_18; }
	inline bool* get_address_of__emitNtfsTimes_18() { return &____emitNtfsTimes_18; }
	inline void set__emitNtfsTimes_18(bool value)
	{
		____emitNtfsTimes_18 = value;
	}

	inline static int32_t get_offset_of__emitUnixTimes_19() { return static_cast<int32_t>(offsetof(ZipFile_t528027654, ____emitUnixTimes_19)); }
	inline bool get__emitUnixTimes_19() const { return ____emitUnixTimes_19; }
	inline bool* get_address_of__emitUnixTimes_19() { return &____emitUnixTimes_19; }
	inline void set__emitUnixTimes_19(bool value)
	{
		____emitUnixTimes_19 = value;
	}

	inline static int32_t get_offset_of__Strategy_20() { return static_cast<int32_t>(offsetof(ZipFile_t528027654, ____Strategy_20)); }
	inline int32_t get__Strategy_20() const { return ____Strategy_20; }
	inline int32_t* get_address_of__Strategy_20() { return &____Strategy_20; }
	inline void set__Strategy_20(int32_t value)
	{
		____Strategy_20 = value;
	}

	inline static int32_t get_offset_of__compressionMethod_21() { return static_cast<int32_t>(offsetof(ZipFile_t528027654, ____compressionMethod_21)); }
	inline int32_t get__compressionMethod_21() const { return ____compressionMethod_21; }
	inline int32_t* get_address_of__compressionMethod_21() { return &____compressionMethod_21; }
	inline void set__compressionMethod_21(int32_t value)
	{
		____compressionMethod_21 = value;
	}

	inline static int32_t get_offset_of__fileAlreadyExists_22() { return static_cast<int32_t>(offsetof(ZipFile_t528027654, ____fileAlreadyExists_22)); }
	inline bool get__fileAlreadyExists_22() const { return ____fileAlreadyExists_22; }
	inline bool* get_address_of__fileAlreadyExists_22() { return &____fileAlreadyExists_22; }
	inline void set__fileAlreadyExists_22(bool value)
	{
		____fileAlreadyExists_22 = value;
	}

	inline static int32_t get_offset_of__temporaryFileName_23() { return static_cast<int32_t>(offsetof(ZipFile_t528027654, ____temporaryFileName_23)); }
	inline String_t* get__temporaryFileName_23() const { return ____temporaryFileName_23; }
	inline String_t** get_address_of__temporaryFileName_23() { return &____temporaryFileName_23; }
	inline void set__temporaryFileName_23(String_t* value)
	{
		____temporaryFileName_23 = value;
		Il2CppCodeGenWriteBarrier((&____temporaryFileName_23), value);
	}

	inline static int32_t get_offset_of__contentsChanged_24() { return static_cast<int32_t>(offsetof(ZipFile_t528027654, ____contentsChanged_24)); }
	inline bool get__contentsChanged_24() const { return ____contentsChanged_24; }
	inline bool* get_address_of__contentsChanged_24() { return &____contentsChanged_24; }
	inline void set__contentsChanged_24(bool value)
	{
		____contentsChanged_24 = value;
	}

	inline static int32_t get_offset_of__hasBeenSaved_25() { return static_cast<int32_t>(offsetof(ZipFile_t528027654, ____hasBeenSaved_25)); }
	inline bool get__hasBeenSaved_25() const { return ____hasBeenSaved_25; }
	inline bool* get_address_of__hasBeenSaved_25() { return &____hasBeenSaved_25; }
	inline void set__hasBeenSaved_25(bool value)
	{
		____hasBeenSaved_25 = value;
	}

	inline static int32_t get_offset_of__TempFileFolder_26() { return static_cast<int32_t>(offsetof(ZipFile_t528027654, ____TempFileFolder_26)); }
	inline String_t* get__TempFileFolder_26() const { return ____TempFileFolder_26; }
	inline String_t** get_address_of__TempFileFolder_26() { return &____TempFileFolder_26; }
	inline void set__TempFileFolder_26(String_t* value)
	{
		____TempFileFolder_26 = value;
		Il2CppCodeGenWriteBarrier((&____TempFileFolder_26), value);
	}

	inline static int32_t get_offset_of__ReadStreamIsOurs_27() { return static_cast<int32_t>(offsetof(ZipFile_t528027654, ____ReadStreamIsOurs_27)); }
	inline bool get__ReadStreamIsOurs_27() const { return ____ReadStreamIsOurs_27; }
	inline bool* get_address_of__ReadStreamIsOurs_27() { return &____ReadStreamIsOurs_27; }
	inline void set__ReadStreamIsOurs_27(bool value)
	{
		____ReadStreamIsOurs_27 = value;
	}

	inline static int32_t get_offset_of_LOCK_28() { return static_cast<int32_t>(offsetof(ZipFile_t528027654, ___LOCK_28)); }
	inline RuntimeObject * get_LOCK_28() const { return ___LOCK_28; }
	inline RuntimeObject ** get_address_of_LOCK_28() { return &___LOCK_28; }
	inline void set_LOCK_28(RuntimeObject * value)
	{
		___LOCK_28 = value;
		Il2CppCodeGenWriteBarrier((&___LOCK_28), value);
	}

	inline static int32_t get_offset_of__saveOperationCanceled_29() { return static_cast<int32_t>(offsetof(ZipFile_t528027654, ____saveOperationCanceled_29)); }
	inline bool get__saveOperationCanceled_29() const { return ____saveOperationCanceled_29; }
	inline bool* get_address_of__saveOperationCanceled_29() { return &____saveOperationCanceled_29; }
	inline void set__saveOperationCanceled_29(bool value)
	{
		____saveOperationCanceled_29 = value;
	}

	inline static int32_t get_offset_of__extractOperationCanceled_30() { return static_cast<int32_t>(offsetof(ZipFile_t528027654, ____extractOperationCanceled_30)); }
	inline bool get__extractOperationCanceled_30() const { return ____extractOperationCanceled_30; }
	inline bool* get_address_of__extractOperationCanceled_30() { return &____extractOperationCanceled_30; }
	inline void set__extractOperationCanceled_30(bool value)
	{
		____extractOperationCanceled_30 = value;
	}

	inline static int32_t get_offset_of__addOperationCanceled_31() { return static_cast<int32_t>(offsetof(ZipFile_t528027654, ____addOperationCanceled_31)); }
	inline bool get__addOperationCanceled_31() const { return ____addOperationCanceled_31; }
	inline bool* get_address_of__addOperationCanceled_31() { return &____addOperationCanceled_31; }
	inline void set__addOperationCanceled_31(bool value)
	{
		____addOperationCanceled_31 = value;
	}

	inline static int32_t get_offset_of__Encryption_32() { return static_cast<int32_t>(offsetof(ZipFile_t528027654, ____Encryption_32)); }
	inline int32_t get__Encryption_32() const { return ____Encryption_32; }
	inline int32_t* get_address_of__Encryption_32() { return &____Encryption_32; }
	inline void set__Encryption_32(int32_t value)
	{
		____Encryption_32 = value;
	}

	inline static int32_t get_offset_of__JustSaved_33() { return static_cast<int32_t>(offsetof(ZipFile_t528027654, ____JustSaved_33)); }
	inline bool get__JustSaved_33() const { return ____JustSaved_33; }
	inline bool* get_address_of__JustSaved_33() { return &____JustSaved_33; }
	inline void set__JustSaved_33(bool value)
	{
		____JustSaved_33 = value;
	}

	inline static int32_t get_offset_of__locEndOfCDS_34() { return static_cast<int32_t>(offsetof(ZipFile_t528027654, ____locEndOfCDS_34)); }
	inline int64_t get__locEndOfCDS_34() const { return ____locEndOfCDS_34; }
	inline int64_t* get_address_of__locEndOfCDS_34() { return &____locEndOfCDS_34; }
	inline void set__locEndOfCDS_34(int64_t value)
	{
		____locEndOfCDS_34 = value;
	}

	inline static int32_t get_offset_of__OffsetOfCentralDirectory_35() { return static_cast<int32_t>(offsetof(ZipFile_t528027654, ____OffsetOfCentralDirectory_35)); }
	inline uint32_t get__OffsetOfCentralDirectory_35() const { return ____OffsetOfCentralDirectory_35; }
	inline uint32_t* get_address_of__OffsetOfCentralDirectory_35() { return &____OffsetOfCentralDirectory_35; }
	inline void set__OffsetOfCentralDirectory_35(uint32_t value)
	{
		____OffsetOfCentralDirectory_35 = value;
	}

	inline static int32_t get_offset_of__OffsetOfCentralDirectory64_36() { return static_cast<int32_t>(offsetof(ZipFile_t528027654, ____OffsetOfCentralDirectory64_36)); }
	inline int64_t get__OffsetOfCentralDirectory64_36() const { return ____OffsetOfCentralDirectory64_36; }
	inline int64_t* get_address_of__OffsetOfCentralDirectory64_36() { return &____OffsetOfCentralDirectory64_36; }
	inline void set__OffsetOfCentralDirectory64_36(int64_t value)
	{
		____OffsetOfCentralDirectory64_36 = value;
	}

	inline static int32_t get_offset_of__OutputUsesZip64_37() { return static_cast<int32_t>(offsetof(ZipFile_t528027654, ____OutputUsesZip64_37)); }
	inline Nullable_1_t1819850047  get__OutputUsesZip64_37() const { return ____OutputUsesZip64_37; }
	inline Nullable_1_t1819850047 * get_address_of__OutputUsesZip64_37() { return &____OutputUsesZip64_37; }
	inline void set__OutputUsesZip64_37(Nullable_1_t1819850047  value)
	{
		____OutputUsesZip64_37 = value;
	}

	inline static int32_t get_offset_of__inExtractAll_38() { return static_cast<int32_t>(offsetof(ZipFile_t528027654, ____inExtractAll_38)); }
	inline bool get__inExtractAll_38() const { return ____inExtractAll_38; }
	inline bool* get_address_of__inExtractAll_38() { return &____inExtractAll_38; }
	inline void set__inExtractAll_38(bool value)
	{
		____inExtractAll_38 = value;
	}

	inline static int32_t get_offset_of__alternateEncoding_40() { return static_cast<int32_t>(offsetof(ZipFile_t528027654, ____alternateEncoding_40)); }
	inline Encoding_t1523322056 * get__alternateEncoding_40() const { return ____alternateEncoding_40; }
	inline Encoding_t1523322056 ** get_address_of__alternateEncoding_40() { return &____alternateEncoding_40; }
	inline void set__alternateEncoding_40(Encoding_t1523322056 * value)
	{
		____alternateEncoding_40 = value;
		Il2CppCodeGenWriteBarrier((&____alternateEncoding_40), value);
	}

	inline static int32_t get_offset_of__alternateEncodingUsage_41() { return static_cast<int32_t>(offsetof(ZipFile_t528027654, ____alternateEncodingUsage_41)); }
	inline int32_t get__alternateEncodingUsage_41() const { return ____alternateEncodingUsage_41; }
	inline int32_t* get_address_of__alternateEncodingUsage_41() { return &____alternateEncodingUsage_41; }
	inline void set__alternateEncodingUsage_41(int32_t value)
	{
		____alternateEncodingUsage_41 = value;
	}

	inline static int32_t get_offset_of__BufferSize_42() { return static_cast<int32_t>(offsetof(ZipFile_t528027654, ____BufferSize_42)); }
	inline int32_t get__BufferSize_42() const { return ____BufferSize_42; }
	inline int32_t* get_address_of__BufferSize_42() { return &____BufferSize_42; }
	inline void set__BufferSize_42(int32_t value)
	{
		____BufferSize_42 = value;
	}

	inline static int32_t get_offset_of_ParallelDeflater_43() { return static_cast<int32_t>(offsetof(ZipFile_t528027654, ___ParallelDeflater_43)); }
	inline ParallelDeflateOutputStream_t2527365669 * get_ParallelDeflater_43() const { return ___ParallelDeflater_43; }
	inline ParallelDeflateOutputStream_t2527365669 ** get_address_of_ParallelDeflater_43() { return &___ParallelDeflater_43; }
	inline void set_ParallelDeflater_43(ParallelDeflateOutputStream_t2527365669 * value)
	{
		___ParallelDeflater_43 = value;
		Il2CppCodeGenWriteBarrier((&___ParallelDeflater_43), value);
	}

	inline static int32_t get_offset_of__ParallelDeflateThreshold_44() { return static_cast<int32_t>(offsetof(ZipFile_t528027654, ____ParallelDeflateThreshold_44)); }
	inline int64_t get__ParallelDeflateThreshold_44() const { return ____ParallelDeflateThreshold_44; }
	inline int64_t* get_address_of__ParallelDeflateThreshold_44() { return &____ParallelDeflateThreshold_44; }
	inline void set__ParallelDeflateThreshold_44(int64_t value)
	{
		____ParallelDeflateThreshold_44 = value;
	}

	inline static int32_t get_offset_of__maxBufferPairs_45() { return static_cast<int32_t>(offsetof(ZipFile_t528027654, ____maxBufferPairs_45)); }
	inline int32_t get__maxBufferPairs_45() const { return ____maxBufferPairs_45; }
	inline int32_t* get_address_of__maxBufferPairs_45() { return &____maxBufferPairs_45; }
	inline void set__maxBufferPairs_45(int32_t value)
	{
		____maxBufferPairs_45 = value;
	}

	inline static int32_t get_offset_of__zip64_46() { return static_cast<int32_t>(offsetof(ZipFile_t528027654, ____zip64_46)); }
	inline int32_t get__zip64_46() const { return ____zip64_46; }
	inline int32_t* get_address_of__zip64_46() { return &____zip64_46; }
	inline void set__zip64_46(int32_t value)
	{
		____zip64_46 = value;
	}

	inline static int32_t get_offset_of__SavingSfx_47() { return static_cast<int32_t>(offsetof(ZipFile_t528027654, ____SavingSfx_47)); }
	inline bool get__SavingSfx_47() const { return ____SavingSfx_47; }
	inline bool* get_address_of__SavingSfx_47() { return &____SavingSfx_47; }
	inline void set__SavingSfx_47(bool value)
	{
		____SavingSfx_47 = value;
	}

	inline static int32_t get_offset_of_SaveProgress_49() { return static_cast<int32_t>(offsetof(ZipFile_t528027654, ___SaveProgress_49)); }
	inline EventHandler_1_t2642563099 * get_SaveProgress_49() const { return ___SaveProgress_49; }
	inline EventHandler_1_t2642563099 ** get_address_of_SaveProgress_49() { return &___SaveProgress_49; }
	inline void set_SaveProgress_49(EventHandler_1_t2642563099 * value)
	{
		___SaveProgress_49 = value;
		Il2CppCodeGenWriteBarrier((&___SaveProgress_49), value);
	}

	inline static int32_t get_offset_of_ReadProgress_50() { return static_cast<int32_t>(offsetof(ZipFile_t528027654, ___ReadProgress_50)); }
	inline EventHandler_1_t3907735204 * get_ReadProgress_50() const { return ___ReadProgress_50; }
	inline EventHandler_1_t3907735204 ** get_address_of_ReadProgress_50() { return &___ReadProgress_50; }
	inline void set_ReadProgress_50(EventHandler_1_t3907735204 * value)
	{
		___ReadProgress_50 = value;
		Il2CppCodeGenWriteBarrier((&___ReadProgress_50), value);
	}

	inline static int32_t get_offset_of_ExtractProgress_51() { return static_cast<int32_t>(offsetof(ZipFile_t528027654, ___ExtractProgress_51)); }
	inline EventHandler_1_t3223602017 * get_ExtractProgress_51() const { return ___ExtractProgress_51; }
	inline EventHandler_1_t3223602017 ** get_address_of_ExtractProgress_51() { return &___ExtractProgress_51; }
	inline void set_ExtractProgress_51(EventHandler_1_t3223602017 * value)
	{
		___ExtractProgress_51 = value;
		Il2CppCodeGenWriteBarrier((&___ExtractProgress_51), value);
	}

	inline static int32_t get_offset_of_AddProgress_52() { return static_cast<int32_t>(offsetof(ZipFile_t528027654, ___AddProgress_52)); }
	inline EventHandler_1_t1418467264 * get_AddProgress_52() const { return ___AddProgress_52; }
	inline EventHandler_1_t1418467264 ** get_address_of_AddProgress_52() { return &___AddProgress_52; }
	inline void set_AddProgress_52(EventHandler_1_t1418467264 * value)
	{
		___AddProgress_52 = value;
		Il2CppCodeGenWriteBarrier((&___AddProgress_52), value);
	}

	inline static int32_t get_offset_of_ZipError_53() { return static_cast<int32_t>(offsetof(ZipFile_t528027654, ___ZipError_53)); }
	inline EventHandler_1_t3947805035 * get_ZipError_53() const { return ___ZipError_53; }
	inline EventHandler_1_t3947805035 ** get_address_of_ZipError_53() { return &___ZipError_53; }
	inline void set_ZipError_53(EventHandler_1_t3947805035 * value)
	{
		___ZipError_53 = value;
		Il2CppCodeGenWriteBarrier((&___ZipError_53), value);
	}

	inline static int32_t get_offset_of_U3CFullScanU3Ek__BackingField_54() { return static_cast<int32_t>(offsetof(ZipFile_t528027654, ___U3CFullScanU3Ek__BackingField_54)); }
	inline bool get_U3CFullScanU3Ek__BackingField_54() const { return ___U3CFullScanU3Ek__BackingField_54; }
	inline bool* get_address_of_U3CFullScanU3Ek__BackingField_54() { return &___U3CFullScanU3Ek__BackingField_54; }
	inline void set_U3CFullScanU3Ek__BackingField_54(bool value)
	{
		___U3CFullScanU3Ek__BackingField_54 = value;
	}

	inline static int32_t get_offset_of_U3CSortEntriesBeforeSavingU3Ek__BackingField_55() { return static_cast<int32_t>(offsetof(ZipFile_t528027654, ___U3CSortEntriesBeforeSavingU3Ek__BackingField_55)); }
	inline bool get_U3CSortEntriesBeforeSavingU3Ek__BackingField_55() const { return ___U3CSortEntriesBeforeSavingU3Ek__BackingField_55; }
	inline bool* get_address_of_U3CSortEntriesBeforeSavingU3Ek__BackingField_55() { return &___U3CSortEntriesBeforeSavingU3Ek__BackingField_55; }
	inline void set_U3CSortEntriesBeforeSavingU3Ek__BackingField_55(bool value)
	{
		___U3CSortEntriesBeforeSavingU3Ek__BackingField_55 = value;
	}

	inline static int32_t get_offset_of_U3CAddDirectoryWillTraverseReparsePointsU3Ek__BackingField_56() { return static_cast<int32_t>(offsetof(ZipFile_t528027654, ___U3CAddDirectoryWillTraverseReparsePointsU3Ek__BackingField_56)); }
	inline bool get_U3CAddDirectoryWillTraverseReparsePointsU3Ek__BackingField_56() const { return ___U3CAddDirectoryWillTraverseReparsePointsU3Ek__BackingField_56; }
	inline bool* get_address_of_U3CAddDirectoryWillTraverseReparsePointsU3Ek__BackingField_56() { return &___U3CAddDirectoryWillTraverseReparsePointsU3Ek__BackingField_56; }
	inline void set_U3CAddDirectoryWillTraverseReparsePointsU3Ek__BackingField_56(bool value)
	{
		___U3CAddDirectoryWillTraverseReparsePointsU3Ek__BackingField_56 = value;
	}

	inline static int32_t get_offset_of_U3CCodecBufferSizeU3Ek__BackingField_57() { return static_cast<int32_t>(offsetof(ZipFile_t528027654, ___U3CCodecBufferSizeU3Ek__BackingField_57)); }
	inline int32_t get_U3CCodecBufferSizeU3Ek__BackingField_57() const { return ___U3CCodecBufferSizeU3Ek__BackingField_57; }
	inline int32_t* get_address_of_U3CCodecBufferSizeU3Ek__BackingField_57() { return &___U3CCodecBufferSizeU3Ek__BackingField_57; }
	inline void set_U3CCodecBufferSizeU3Ek__BackingField_57(int32_t value)
	{
		___U3CCodecBufferSizeU3Ek__BackingField_57 = value;
	}

	inline static int32_t get_offset_of_U3CFlattenFoldersOnExtractU3Ek__BackingField_58() { return static_cast<int32_t>(offsetof(ZipFile_t528027654, ___U3CFlattenFoldersOnExtractU3Ek__BackingField_58)); }
	inline bool get_U3CFlattenFoldersOnExtractU3Ek__BackingField_58() const { return ___U3CFlattenFoldersOnExtractU3Ek__BackingField_58; }
	inline bool* get_address_of_U3CFlattenFoldersOnExtractU3Ek__BackingField_58() { return &___U3CFlattenFoldersOnExtractU3Ek__BackingField_58; }
	inline void set_U3CFlattenFoldersOnExtractU3Ek__BackingField_58(bool value)
	{
		___U3CFlattenFoldersOnExtractU3Ek__BackingField_58 = value;
	}

	inline static int32_t get_offset_of_U3CCompressionLevelU3Ek__BackingField_59() { return static_cast<int32_t>(offsetof(ZipFile_t528027654, ___U3CCompressionLevelU3Ek__BackingField_59)); }
	inline int32_t get_U3CCompressionLevelU3Ek__BackingField_59() const { return ___U3CCompressionLevelU3Ek__BackingField_59; }
	inline int32_t* get_address_of_U3CCompressionLevelU3Ek__BackingField_59() { return &___U3CCompressionLevelU3Ek__BackingField_59; }
	inline void set_U3CCompressionLevelU3Ek__BackingField_59(int32_t value)
	{
		___U3CCompressionLevelU3Ek__BackingField_59 = value;
	}

	inline static int32_t get_offset_of_U3CExtractExistingFileU3Ek__BackingField_60() { return static_cast<int32_t>(offsetof(ZipFile_t528027654, ___U3CExtractExistingFileU3Ek__BackingField_60)); }
	inline int32_t get_U3CExtractExistingFileU3Ek__BackingField_60() const { return ___U3CExtractExistingFileU3Ek__BackingField_60; }
	inline int32_t* get_address_of_U3CExtractExistingFileU3Ek__BackingField_60() { return &___U3CExtractExistingFileU3Ek__BackingField_60; }
	inline void set_U3CExtractExistingFileU3Ek__BackingField_60(int32_t value)
	{
		___U3CExtractExistingFileU3Ek__BackingField_60 = value;
	}

	inline static int32_t get_offset_of_U3CSetCompressionU3Ek__BackingField_61() { return static_cast<int32_t>(offsetof(ZipFile_t528027654, ___U3CSetCompressionU3Ek__BackingField_61)); }
	inline SetCompressionCallback_t1872989618 * get_U3CSetCompressionU3Ek__BackingField_61() const { return ___U3CSetCompressionU3Ek__BackingField_61; }
	inline SetCompressionCallback_t1872989618 ** get_address_of_U3CSetCompressionU3Ek__BackingField_61() { return &___U3CSetCompressionU3Ek__BackingField_61; }
	inline void set_U3CSetCompressionU3Ek__BackingField_61(SetCompressionCallback_t1872989618 * value)
	{
		___U3CSetCompressionU3Ek__BackingField_61 = value;
		Il2CppCodeGenWriteBarrier((&___U3CSetCompressionU3Ek__BackingField_61), value);
	}
};

struct ZipFile_t528027654_StaticFields
{
public:
	// System.Text.Encoding Pathfinding.Ionic.Zip.ZipFile::_defaultEncoding
	Encoding_t1523322056 * ____defaultEncoding_39;
	// System.Int32 Pathfinding.Ionic.Zip.ZipFile::BufferSizeDefault
	int32_t ___BufferSizeDefault_48;

public:
	inline static int32_t get_offset_of__defaultEncoding_39() { return static_cast<int32_t>(offsetof(ZipFile_t528027654_StaticFields, ____defaultEncoding_39)); }
	inline Encoding_t1523322056 * get__defaultEncoding_39() const { return ____defaultEncoding_39; }
	inline Encoding_t1523322056 ** get_address_of__defaultEncoding_39() { return &____defaultEncoding_39; }
	inline void set__defaultEncoding_39(Encoding_t1523322056 * value)
	{
		____defaultEncoding_39 = value;
		Il2CppCodeGenWriteBarrier((&____defaultEncoding_39), value);
	}

	inline static int32_t get_offset_of_BufferSizeDefault_48() { return static_cast<int32_t>(offsetof(ZipFile_t528027654_StaticFields, ___BufferSizeDefault_48)); }
	inline int32_t get_BufferSizeDefault_48() const { return ___BufferSizeDefault_48; }
	inline int32_t* get_address_of_BufferSizeDefault_48() { return &___BufferSizeDefault_48; }
	inline void set_BufferSizeDefault_48(int32_t value)
	{
		___BufferSizeDefault_48 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ZIPFILE_T528027654_H
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
#ifndef ZIPENTRY_T2157002808_H
#define ZIPENTRY_T2157002808_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Pathfinding.Ionic.Zip.ZipEntry
struct  ZipEntry_t2157002808  : public RuntimeObject
{
public:
	static const Il2CppGuid CLSID;

public:
	// System.Int16 Pathfinding.Ionic.Zip.ZipEntry::_VersionMadeBy
	int16_t ____VersionMadeBy_0;
	// System.Int16 Pathfinding.Ionic.Zip.ZipEntry::_InternalFileAttrs
	int16_t ____InternalFileAttrs_1;
	// System.Int32 Pathfinding.Ionic.Zip.ZipEntry::_ExternalFileAttrs
	int32_t ____ExternalFileAttrs_2;
	// System.Int16 Pathfinding.Ionic.Zip.ZipEntry::_filenameLength
	int16_t ____filenameLength_3;
	// System.Int16 Pathfinding.Ionic.Zip.ZipEntry::_extraFieldLength
	int16_t ____extraFieldLength_4;
	// System.Int16 Pathfinding.Ionic.Zip.ZipEntry::_commentLength
	int16_t ____commentLength_5;
	// System.IO.Stream Pathfinding.Ionic.Zip.ZipEntry::_inputDecryptorStream
	Stream_t1273022909 * ____inputDecryptorStream_6;
	// System.Object Pathfinding.Ionic.Zip.ZipEntry::_outputLock
	RuntimeObject * ____outputLock_7;
	// Pathfinding.Ionic.Zip.ZipCrypto Pathfinding.Ionic.Zip.ZipEntry::_zipCrypto_forExtract
	ZipCrypto_t212798476 * ____zipCrypto_forExtract_8;
	// Pathfinding.Ionic.Zip.ZipCrypto Pathfinding.Ionic.Zip.ZipEntry::_zipCrypto_forWrite
	ZipCrypto_t212798476 * ____zipCrypto_forWrite_9;
	// System.DateTime Pathfinding.Ionic.Zip.ZipEntry::_LastModified
	DateTime_t3738529785  ____LastModified_10;
	// System.DateTime Pathfinding.Ionic.Zip.ZipEntry::_Mtime
	DateTime_t3738529785  ____Mtime_11;
	// System.DateTime Pathfinding.Ionic.Zip.ZipEntry::_Atime
	DateTime_t3738529785  ____Atime_12;
	// System.DateTime Pathfinding.Ionic.Zip.ZipEntry::_Ctime
	DateTime_t3738529785  ____Ctime_13;
	// System.Boolean Pathfinding.Ionic.Zip.ZipEntry::_ntfsTimesAreSet
	bool ____ntfsTimesAreSet_14;
	// System.Boolean Pathfinding.Ionic.Zip.ZipEntry::_emitNtfsTimes
	bool ____emitNtfsTimes_15;
	// System.Boolean Pathfinding.Ionic.Zip.ZipEntry::_emitUnixTimes
	bool ____emitUnixTimes_16;
	// System.Boolean Pathfinding.Ionic.Zip.ZipEntry::_TrimVolumeFromFullyQualifiedPaths
	bool ____TrimVolumeFromFullyQualifiedPaths_17;
	// System.String Pathfinding.Ionic.Zip.ZipEntry::_LocalFileName
	String_t* ____LocalFileName_18;
	// System.String Pathfinding.Ionic.Zip.ZipEntry::_FileNameInArchive
	String_t* ____FileNameInArchive_19;
	// System.Int16 Pathfinding.Ionic.Zip.ZipEntry::_VersionNeeded
	int16_t ____VersionNeeded_20;
	// System.Int16 Pathfinding.Ionic.Zip.ZipEntry::_BitField
	int16_t ____BitField_21;
	// System.Int16 Pathfinding.Ionic.Zip.ZipEntry::_CompressionMethod
	int16_t ____CompressionMethod_22;
	// System.Int16 Pathfinding.Ionic.Zip.ZipEntry::_CompressionMethod_FromZipFile
	int16_t ____CompressionMethod_FromZipFile_23;
	// Pathfinding.Ionic.Zlib.CompressionLevel Pathfinding.Ionic.Zip.ZipEntry::_CompressionLevel
	int32_t ____CompressionLevel_24;
	// System.String Pathfinding.Ionic.Zip.ZipEntry::_Comment
	String_t* ____Comment_25;
	// System.Boolean Pathfinding.Ionic.Zip.ZipEntry::_IsDirectory
	bool ____IsDirectory_26;
	// System.Byte[] Pathfinding.Ionic.Zip.ZipEntry::_CommentBytes
	ByteU5BU5D_t4116647657* ____CommentBytes_27;
	// System.Int64 Pathfinding.Ionic.Zip.ZipEntry::_CompressedSize
	int64_t ____CompressedSize_28;
	// System.Int64 Pathfinding.Ionic.Zip.ZipEntry::_CompressedFileDataSize
	int64_t ____CompressedFileDataSize_29;
	// System.Int64 Pathfinding.Ionic.Zip.ZipEntry::_UncompressedSize
	int64_t ____UncompressedSize_30;
	// System.Int32 Pathfinding.Ionic.Zip.ZipEntry::_TimeBlob
	int32_t ____TimeBlob_31;
	// System.Boolean Pathfinding.Ionic.Zip.ZipEntry::_crcCalculated
	bool ____crcCalculated_32;
	// System.Int32 Pathfinding.Ionic.Zip.ZipEntry::_Crc32
	int32_t ____Crc32_33;
	// System.Byte[] Pathfinding.Ionic.Zip.ZipEntry::_Extra
	ByteU5BU5D_t4116647657* ____Extra_34;
	// System.Boolean Pathfinding.Ionic.Zip.ZipEntry::_metadataChanged
	bool ____metadataChanged_35;
	// System.Boolean Pathfinding.Ionic.Zip.ZipEntry::_restreamRequiredOnSave
	bool ____restreamRequiredOnSave_36;
	// System.Boolean Pathfinding.Ionic.Zip.ZipEntry::_sourceIsEncrypted
	bool ____sourceIsEncrypted_37;
	// System.Boolean Pathfinding.Ionic.Zip.ZipEntry::_skippedDuringSave
	bool ____skippedDuringSave_38;
	// System.UInt32 Pathfinding.Ionic.Zip.ZipEntry::_diskNumber
	uint32_t ____diskNumber_39;
	// System.Text.Encoding Pathfinding.Ionic.Zip.ZipEntry::_actualEncoding
	Encoding_t1523322056 * ____actualEncoding_41;
	// Pathfinding.Ionic.Zip.ZipContainer Pathfinding.Ionic.Zip.ZipEntry::_container
	ZipContainer_t1729444702 * ____container_42;
	// System.Int64 Pathfinding.Ionic.Zip.ZipEntry::__FileDataPosition
	int64_t _____FileDataPosition_43;
	// System.Byte[] Pathfinding.Ionic.Zip.ZipEntry::_EntryHeader
	ByteU5BU5D_t4116647657* ____EntryHeader_44;
	// System.Int64 Pathfinding.Ionic.Zip.ZipEntry::_RelativeOffsetOfLocalHeader
	int64_t ____RelativeOffsetOfLocalHeader_45;
	// System.Int64 Pathfinding.Ionic.Zip.ZipEntry::_future_ROLH
	int64_t ____future_ROLH_46;
	// System.Int64 Pathfinding.Ionic.Zip.ZipEntry::_TotalEntrySize
	int64_t ____TotalEntrySize_47;
	// System.Int32 Pathfinding.Ionic.Zip.ZipEntry::_LengthOfHeader
	int32_t ____LengthOfHeader_48;
	// System.Int32 Pathfinding.Ionic.Zip.ZipEntry::_LengthOfTrailer
	int32_t ____LengthOfTrailer_49;
	// System.Boolean Pathfinding.Ionic.Zip.ZipEntry::_InputUsesZip64
	bool ____InputUsesZip64_50;
	// System.UInt32 Pathfinding.Ionic.Zip.ZipEntry::_UnsupportedAlgorithmId
	uint32_t ____UnsupportedAlgorithmId_51;
	// System.String Pathfinding.Ionic.Zip.ZipEntry::_Password
	String_t* ____Password_52;
	// Pathfinding.Ionic.Zip.ZipEntrySource Pathfinding.Ionic.Zip.ZipEntry::_Source
	int32_t ____Source_53;
	// Pathfinding.Ionic.Zip.EncryptionAlgorithm Pathfinding.Ionic.Zip.ZipEntry::_Encryption
	int32_t ____Encryption_54;
	// Pathfinding.Ionic.Zip.EncryptionAlgorithm Pathfinding.Ionic.Zip.ZipEntry::_Encryption_FromZipFile
	int32_t ____Encryption_FromZipFile_55;
	// System.Byte[] Pathfinding.Ionic.Zip.ZipEntry::_WeakEncryptionHeader
	ByteU5BU5D_t4116647657* ____WeakEncryptionHeader_56;
	// System.IO.Stream Pathfinding.Ionic.Zip.ZipEntry::_archiveStream
	Stream_t1273022909 * ____archiveStream_57;
	// System.IO.Stream Pathfinding.Ionic.Zip.ZipEntry::_sourceStream
	Stream_t1273022909 * ____sourceStream_58;
	// System.Nullable`1<System.Int64> Pathfinding.Ionic.Zip.ZipEntry::_sourceStreamOriginalPosition
	Nullable_1_t1164162090  ____sourceStreamOriginalPosition_59;
	// System.Boolean Pathfinding.Ionic.Zip.ZipEntry::_ioOperationCanceled
	bool ____ioOperationCanceled_60;
	// System.Boolean Pathfinding.Ionic.Zip.ZipEntry::_presumeZip64
	bool ____presumeZip64_61;
	// System.Nullable`1<System.Boolean> Pathfinding.Ionic.Zip.ZipEntry::_entryRequiresZip64
	Nullable_1_t1819850047  ____entryRequiresZip64_62;
	// System.Nullable`1<System.Boolean> Pathfinding.Ionic.Zip.ZipEntry::_OutputUsesZip64
	Nullable_1_t1819850047  ____OutputUsesZip64_63;
	// System.Boolean Pathfinding.Ionic.Zip.ZipEntry::_IsText
	bool ____IsText_64;
	// Pathfinding.Ionic.Zip.ZipEntryTimestamp Pathfinding.Ionic.Zip.ZipEntry::_timestamp
	int32_t ____timestamp_65;
	// Pathfinding.Ionic.Zip.WriteDelegate Pathfinding.Ionic.Zip.ZipEntry::_WriteDelegate
	WriteDelegate_t3162700152 * ____WriteDelegate_69;
	// Pathfinding.Ionic.Zip.OpenDelegate Pathfinding.Ionic.Zip.ZipEntry::_OpenDelegate
	OpenDelegate_t3655486755 * ____OpenDelegate_70;
	// Pathfinding.Ionic.Zip.CloseDelegate Pathfinding.Ionic.Zip.ZipEntry::_CloseDelegate
	CloseDelegate_t2132192931 * ____CloseDelegate_71;
	// Pathfinding.Ionic.Zip.ExtractExistingFileAction Pathfinding.Ionic.Zip.ZipEntry::<ExtractExistingFile>k__BackingField
	int32_t ___U3CExtractExistingFileU3Ek__BackingField_72;
	// Pathfinding.Ionic.Zip.ZipErrorAction Pathfinding.Ionic.Zip.ZipEntry::<ZipErrorAction>k__BackingField
	int32_t ___U3CZipErrorActionU3Ek__BackingField_73;
	// Pathfinding.Ionic.Zip.SetCompressionCallback Pathfinding.Ionic.Zip.ZipEntry::<SetCompression>k__BackingField
	SetCompressionCallback_t1872989618 * ___U3CSetCompressionU3Ek__BackingField_74;
	// System.Text.Encoding Pathfinding.Ionic.Zip.ZipEntry::<AlternateEncoding>k__BackingField
	Encoding_t1523322056 * ___U3CAlternateEncodingU3Ek__BackingField_75;
	// Pathfinding.Ionic.Zip.ZipOption Pathfinding.Ionic.Zip.ZipEntry::<AlternateEncodingUsage>k__BackingField
	int32_t ___U3CAlternateEncodingUsageU3Ek__BackingField_76;

public:
	inline static int32_t get_offset_of__VersionMadeBy_0() { return static_cast<int32_t>(offsetof(ZipEntry_t2157002808, ____VersionMadeBy_0)); }
	inline int16_t get__VersionMadeBy_0() const { return ____VersionMadeBy_0; }
	inline int16_t* get_address_of__VersionMadeBy_0() { return &____VersionMadeBy_0; }
	inline void set__VersionMadeBy_0(int16_t value)
	{
		____VersionMadeBy_0 = value;
	}

	inline static int32_t get_offset_of__InternalFileAttrs_1() { return static_cast<int32_t>(offsetof(ZipEntry_t2157002808, ____InternalFileAttrs_1)); }
	inline int16_t get__InternalFileAttrs_1() const { return ____InternalFileAttrs_1; }
	inline int16_t* get_address_of__InternalFileAttrs_1() { return &____InternalFileAttrs_1; }
	inline void set__InternalFileAttrs_1(int16_t value)
	{
		____InternalFileAttrs_1 = value;
	}

	inline static int32_t get_offset_of__ExternalFileAttrs_2() { return static_cast<int32_t>(offsetof(ZipEntry_t2157002808, ____ExternalFileAttrs_2)); }
	inline int32_t get__ExternalFileAttrs_2() const { return ____ExternalFileAttrs_2; }
	inline int32_t* get_address_of__ExternalFileAttrs_2() { return &____ExternalFileAttrs_2; }
	inline void set__ExternalFileAttrs_2(int32_t value)
	{
		____ExternalFileAttrs_2 = value;
	}

	inline static int32_t get_offset_of__filenameLength_3() { return static_cast<int32_t>(offsetof(ZipEntry_t2157002808, ____filenameLength_3)); }
	inline int16_t get__filenameLength_3() const { return ____filenameLength_3; }
	inline int16_t* get_address_of__filenameLength_3() { return &____filenameLength_3; }
	inline void set__filenameLength_3(int16_t value)
	{
		____filenameLength_3 = value;
	}

	inline static int32_t get_offset_of__extraFieldLength_4() { return static_cast<int32_t>(offsetof(ZipEntry_t2157002808, ____extraFieldLength_4)); }
	inline int16_t get__extraFieldLength_4() const { return ____extraFieldLength_4; }
	inline int16_t* get_address_of__extraFieldLength_4() { return &____extraFieldLength_4; }
	inline void set__extraFieldLength_4(int16_t value)
	{
		____extraFieldLength_4 = value;
	}

	inline static int32_t get_offset_of__commentLength_5() { return static_cast<int32_t>(offsetof(ZipEntry_t2157002808, ____commentLength_5)); }
	inline int16_t get__commentLength_5() const { return ____commentLength_5; }
	inline int16_t* get_address_of__commentLength_5() { return &____commentLength_5; }
	inline void set__commentLength_5(int16_t value)
	{
		____commentLength_5 = value;
	}

	inline static int32_t get_offset_of__inputDecryptorStream_6() { return static_cast<int32_t>(offsetof(ZipEntry_t2157002808, ____inputDecryptorStream_6)); }
	inline Stream_t1273022909 * get__inputDecryptorStream_6() const { return ____inputDecryptorStream_6; }
	inline Stream_t1273022909 ** get_address_of__inputDecryptorStream_6() { return &____inputDecryptorStream_6; }
	inline void set__inputDecryptorStream_6(Stream_t1273022909 * value)
	{
		____inputDecryptorStream_6 = value;
		Il2CppCodeGenWriteBarrier((&____inputDecryptorStream_6), value);
	}

	inline static int32_t get_offset_of__outputLock_7() { return static_cast<int32_t>(offsetof(ZipEntry_t2157002808, ____outputLock_7)); }
	inline RuntimeObject * get__outputLock_7() const { return ____outputLock_7; }
	inline RuntimeObject ** get_address_of__outputLock_7() { return &____outputLock_7; }
	inline void set__outputLock_7(RuntimeObject * value)
	{
		____outputLock_7 = value;
		Il2CppCodeGenWriteBarrier((&____outputLock_7), value);
	}

	inline static int32_t get_offset_of__zipCrypto_forExtract_8() { return static_cast<int32_t>(offsetof(ZipEntry_t2157002808, ____zipCrypto_forExtract_8)); }
	inline ZipCrypto_t212798476 * get__zipCrypto_forExtract_8() const { return ____zipCrypto_forExtract_8; }
	inline ZipCrypto_t212798476 ** get_address_of__zipCrypto_forExtract_8() { return &____zipCrypto_forExtract_8; }
	inline void set__zipCrypto_forExtract_8(ZipCrypto_t212798476 * value)
	{
		____zipCrypto_forExtract_8 = value;
		Il2CppCodeGenWriteBarrier((&____zipCrypto_forExtract_8), value);
	}

	inline static int32_t get_offset_of__zipCrypto_forWrite_9() { return static_cast<int32_t>(offsetof(ZipEntry_t2157002808, ____zipCrypto_forWrite_9)); }
	inline ZipCrypto_t212798476 * get__zipCrypto_forWrite_9() const { return ____zipCrypto_forWrite_9; }
	inline ZipCrypto_t212798476 ** get_address_of__zipCrypto_forWrite_9() { return &____zipCrypto_forWrite_9; }
	inline void set__zipCrypto_forWrite_9(ZipCrypto_t212798476 * value)
	{
		____zipCrypto_forWrite_9 = value;
		Il2CppCodeGenWriteBarrier((&____zipCrypto_forWrite_9), value);
	}

	inline static int32_t get_offset_of__LastModified_10() { return static_cast<int32_t>(offsetof(ZipEntry_t2157002808, ____LastModified_10)); }
	inline DateTime_t3738529785  get__LastModified_10() const { return ____LastModified_10; }
	inline DateTime_t3738529785 * get_address_of__LastModified_10() { return &____LastModified_10; }
	inline void set__LastModified_10(DateTime_t3738529785  value)
	{
		____LastModified_10 = value;
	}

	inline static int32_t get_offset_of__Mtime_11() { return static_cast<int32_t>(offsetof(ZipEntry_t2157002808, ____Mtime_11)); }
	inline DateTime_t3738529785  get__Mtime_11() const { return ____Mtime_11; }
	inline DateTime_t3738529785 * get_address_of__Mtime_11() { return &____Mtime_11; }
	inline void set__Mtime_11(DateTime_t3738529785  value)
	{
		____Mtime_11 = value;
	}

	inline static int32_t get_offset_of__Atime_12() { return static_cast<int32_t>(offsetof(ZipEntry_t2157002808, ____Atime_12)); }
	inline DateTime_t3738529785  get__Atime_12() const { return ____Atime_12; }
	inline DateTime_t3738529785 * get_address_of__Atime_12() { return &____Atime_12; }
	inline void set__Atime_12(DateTime_t3738529785  value)
	{
		____Atime_12 = value;
	}

	inline static int32_t get_offset_of__Ctime_13() { return static_cast<int32_t>(offsetof(ZipEntry_t2157002808, ____Ctime_13)); }
	inline DateTime_t3738529785  get__Ctime_13() const { return ____Ctime_13; }
	inline DateTime_t3738529785 * get_address_of__Ctime_13() { return &____Ctime_13; }
	inline void set__Ctime_13(DateTime_t3738529785  value)
	{
		____Ctime_13 = value;
	}

	inline static int32_t get_offset_of__ntfsTimesAreSet_14() { return static_cast<int32_t>(offsetof(ZipEntry_t2157002808, ____ntfsTimesAreSet_14)); }
	inline bool get__ntfsTimesAreSet_14() const { return ____ntfsTimesAreSet_14; }
	inline bool* get_address_of__ntfsTimesAreSet_14() { return &____ntfsTimesAreSet_14; }
	inline void set__ntfsTimesAreSet_14(bool value)
	{
		____ntfsTimesAreSet_14 = value;
	}

	inline static int32_t get_offset_of__emitNtfsTimes_15() { return static_cast<int32_t>(offsetof(ZipEntry_t2157002808, ____emitNtfsTimes_15)); }
	inline bool get__emitNtfsTimes_15() const { return ____emitNtfsTimes_15; }
	inline bool* get_address_of__emitNtfsTimes_15() { return &____emitNtfsTimes_15; }
	inline void set__emitNtfsTimes_15(bool value)
	{
		____emitNtfsTimes_15 = value;
	}

	inline static int32_t get_offset_of__emitUnixTimes_16() { return static_cast<int32_t>(offsetof(ZipEntry_t2157002808, ____emitUnixTimes_16)); }
	inline bool get__emitUnixTimes_16() const { return ____emitUnixTimes_16; }
	inline bool* get_address_of__emitUnixTimes_16() { return &____emitUnixTimes_16; }
	inline void set__emitUnixTimes_16(bool value)
	{
		____emitUnixTimes_16 = value;
	}

	inline static int32_t get_offset_of__TrimVolumeFromFullyQualifiedPaths_17() { return static_cast<int32_t>(offsetof(ZipEntry_t2157002808, ____TrimVolumeFromFullyQualifiedPaths_17)); }
	inline bool get__TrimVolumeFromFullyQualifiedPaths_17() const { return ____TrimVolumeFromFullyQualifiedPaths_17; }
	inline bool* get_address_of__TrimVolumeFromFullyQualifiedPaths_17() { return &____TrimVolumeFromFullyQualifiedPaths_17; }
	inline void set__TrimVolumeFromFullyQualifiedPaths_17(bool value)
	{
		____TrimVolumeFromFullyQualifiedPaths_17 = value;
	}

	inline static int32_t get_offset_of__LocalFileName_18() { return static_cast<int32_t>(offsetof(ZipEntry_t2157002808, ____LocalFileName_18)); }
	inline String_t* get__LocalFileName_18() const { return ____LocalFileName_18; }
	inline String_t** get_address_of__LocalFileName_18() { return &____LocalFileName_18; }
	inline void set__LocalFileName_18(String_t* value)
	{
		____LocalFileName_18 = value;
		Il2CppCodeGenWriteBarrier((&____LocalFileName_18), value);
	}

	inline static int32_t get_offset_of__FileNameInArchive_19() { return static_cast<int32_t>(offsetof(ZipEntry_t2157002808, ____FileNameInArchive_19)); }
	inline String_t* get__FileNameInArchive_19() const { return ____FileNameInArchive_19; }
	inline String_t** get_address_of__FileNameInArchive_19() { return &____FileNameInArchive_19; }
	inline void set__FileNameInArchive_19(String_t* value)
	{
		____FileNameInArchive_19 = value;
		Il2CppCodeGenWriteBarrier((&____FileNameInArchive_19), value);
	}

	inline static int32_t get_offset_of__VersionNeeded_20() { return static_cast<int32_t>(offsetof(ZipEntry_t2157002808, ____VersionNeeded_20)); }
	inline int16_t get__VersionNeeded_20() const { return ____VersionNeeded_20; }
	inline int16_t* get_address_of__VersionNeeded_20() { return &____VersionNeeded_20; }
	inline void set__VersionNeeded_20(int16_t value)
	{
		____VersionNeeded_20 = value;
	}

	inline static int32_t get_offset_of__BitField_21() { return static_cast<int32_t>(offsetof(ZipEntry_t2157002808, ____BitField_21)); }
	inline int16_t get__BitField_21() const { return ____BitField_21; }
	inline int16_t* get_address_of__BitField_21() { return &____BitField_21; }
	inline void set__BitField_21(int16_t value)
	{
		____BitField_21 = value;
	}

	inline static int32_t get_offset_of__CompressionMethod_22() { return static_cast<int32_t>(offsetof(ZipEntry_t2157002808, ____CompressionMethod_22)); }
	inline int16_t get__CompressionMethod_22() const { return ____CompressionMethod_22; }
	inline int16_t* get_address_of__CompressionMethod_22() { return &____CompressionMethod_22; }
	inline void set__CompressionMethod_22(int16_t value)
	{
		____CompressionMethod_22 = value;
	}

	inline static int32_t get_offset_of__CompressionMethod_FromZipFile_23() { return static_cast<int32_t>(offsetof(ZipEntry_t2157002808, ____CompressionMethod_FromZipFile_23)); }
	inline int16_t get__CompressionMethod_FromZipFile_23() const { return ____CompressionMethod_FromZipFile_23; }
	inline int16_t* get_address_of__CompressionMethod_FromZipFile_23() { return &____CompressionMethod_FromZipFile_23; }
	inline void set__CompressionMethod_FromZipFile_23(int16_t value)
	{
		____CompressionMethod_FromZipFile_23 = value;
	}

	inline static int32_t get_offset_of__CompressionLevel_24() { return static_cast<int32_t>(offsetof(ZipEntry_t2157002808, ____CompressionLevel_24)); }
	inline int32_t get__CompressionLevel_24() const { return ____CompressionLevel_24; }
	inline int32_t* get_address_of__CompressionLevel_24() { return &____CompressionLevel_24; }
	inline void set__CompressionLevel_24(int32_t value)
	{
		____CompressionLevel_24 = value;
	}

	inline static int32_t get_offset_of__Comment_25() { return static_cast<int32_t>(offsetof(ZipEntry_t2157002808, ____Comment_25)); }
	inline String_t* get__Comment_25() const { return ____Comment_25; }
	inline String_t** get_address_of__Comment_25() { return &____Comment_25; }
	inline void set__Comment_25(String_t* value)
	{
		____Comment_25 = value;
		Il2CppCodeGenWriteBarrier((&____Comment_25), value);
	}

	inline static int32_t get_offset_of__IsDirectory_26() { return static_cast<int32_t>(offsetof(ZipEntry_t2157002808, ____IsDirectory_26)); }
	inline bool get__IsDirectory_26() const { return ____IsDirectory_26; }
	inline bool* get_address_of__IsDirectory_26() { return &____IsDirectory_26; }
	inline void set__IsDirectory_26(bool value)
	{
		____IsDirectory_26 = value;
	}

	inline static int32_t get_offset_of__CommentBytes_27() { return static_cast<int32_t>(offsetof(ZipEntry_t2157002808, ____CommentBytes_27)); }
	inline ByteU5BU5D_t4116647657* get__CommentBytes_27() const { return ____CommentBytes_27; }
	inline ByteU5BU5D_t4116647657** get_address_of__CommentBytes_27() { return &____CommentBytes_27; }
	inline void set__CommentBytes_27(ByteU5BU5D_t4116647657* value)
	{
		____CommentBytes_27 = value;
		Il2CppCodeGenWriteBarrier((&____CommentBytes_27), value);
	}

	inline static int32_t get_offset_of__CompressedSize_28() { return static_cast<int32_t>(offsetof(ZipEntry_t2157002808, ____CompressedSize_28)); }
	inline int64_t get__CompressedSize_28() const { return ____CompressedSize_28; }
	inline int64_t* get_address_of__CompressedSize_28() { return &____CompressedSize_28; }
	inline void set__CompressedSize_28(int64_t value)
	{
		____CompressedSize_28 = value;
	}

	inline static int32_t get_offset_of__CompressedFileDataSize_29() { return static_cast<int32_t>(offsetof(ZipEntry_t2157002808, ____CompressedFileDataSize_29)); }
	inline int64_t get__CompressedFileDataSize_29() const { return ____CompressedFileDataSize_29; }
	inline int64_t* get_address_of__CompressedFileDataSize_29() { return &____CompressedFileDataSize_29; }
	inline void set__CompressedFileDataSize_29(int64_t value)
	{
		____CompressedFileDataSize_29 = value;
	}

	inline static int32_t get_offset_of__UncompressedSize_30() { return static_cast<int32_t>(offsetof(ZipEntry_t2157002808, ____UncompressedSize_30)); }
	inline int64_t get__UncompressedSize_30() const { return ____UncompressedSize_30; }
	inline int64_t* get_address_of__UncompressedSize_30() { return &____UncompressedSize_30; }
	inline void set__UncompressedSize_30(int64_t value)
	{
		____UncompressedSize_30 = value;
	}

	inline static int32_t get_offset_of__TimeBlob_31() { return static_cast<int32_t>(offsetof(ZipEntry_t2157002808, ____TimeBlob_31)); }
	inline int32_t get__TimeBlob_31() const { return ____TimeBlob_31; }
	inline int32_t* get_address_of__TimeBlob_31() { return &____TimeBlob_31; }
	inline void set__TimeBlob_31(int32_t value)
	{
		____TimeBlob_31 = value;
	}

	inline static int32_t get_offset_of__crcCalculated_32() { return static_cast<int32_t>(offsetof(ZipEntry_t2157002808, ____crcCalculated_32)); }
	inline bool get__crcCalculated_32() const { return ____crcCalculated_32; }
	inline bool* get_address_of__crcCalculated_32() { return &____crcCalculated_32; }
	inline void set__crcCalculated_32(bool value)
	{
		____crcCalculated_32 = value;
	}

	inline static int32_t get_offset_of__Crc32_33() { return static_cast<int32_t>(offsetof(ZipEntry_t2157002808, ____Crc32_33)); }
	inline int32_t get__Crc32_33() const { return ____Crc32_33; }
	inline int32_t* get_address_of__Crc32_33() { return &____Crc32_33; }
	inline void set__Crc32_33(int32_t value)
	{
		____Crc32_33 = value;
	}

	inline static int32_t get_offset_of__Extra_34() { return static_cast<int32_t>(offsetof(ZipEntry_t2157002808, ____Extra_34)); }
	inline ByteU5BU5D_t4116647657* get__Extra_34() const { return ____Extra_34; }
	inline ByteU5BU5D_t4116647657** get_address_of__Extra_34() { return &____Extra_34; }
	inline void set__Extra_34(ByteU5BU5D_t4116647657* value)
	{
		____Extra_34 = value;
		Il2CppCodeGenWriteBarrier((&____Extra_34), value);
	}

	inline static int32_t get_offset_of__metadataChanged_35() { return static_cast<int32_t>(offsetof(ZipEntry_t2157002808, ____metadataChanged_35)); }
	inline bool get__metadataChanged_35() const { return ____metadataChanged_35; }
	inline bool* get_address_of__metadataChanged_35() { return &____metadataChanged_35; }
	inline void set__metadataChanged_35(bool value)
	{
		____metadataChanged_35 = value;
	}

	inline static int32_t get_offset_of__restreamRequiredOnSave_36() { return static_cast<int32_t>(offsetof(ZipEntry_t2157002808, ____restreamRequiredOnSave_36)); }
	inline bool get__restreamRequiredOnSave_36() const { return ____restreamRequiredOnSave_36; }
	inline bool* get_address_of__restreamRequiredOnSave_36() { return &____restreamRequiredOnSave_36; }
	inline void set__restreamRequiredOnSave_36(bool value)
	{
		____restreamRequiredOnSave_36 = value;
	}

	inline static int32_t get_offset_of__sourceIsEncrypted_37() { return static_cast<int32_t>(offsetof(ZipEntry_t2157002808, ____sourceIsEncrypted_37)); }
	inline bool get__sourceIsEncrypted_37() const { return ____sourceIsEncrypted_37; }
	inline bool* get_address_of__sourceIsEncrypted_37() { return &____sourceIsEncrypted_37; }
	inline void set__sourceIsEncrypted_37(bool value)
	{
		____sourceIsEncrypted_37 = value;
	}

	inline static int32_t get_offset_of__skippedDuringSave_38() { return static_cast<int32_t>(offsetof(ZipEntry_t2157002808, ____skippedDuringSave_38)); }
	inline bool get__skippedDuringSave_38() const { return ____skippedDuringSave_38; }
	inline bool* get_address_of__skippedDuringSave_38() { return &____skippedDuringSave_38; }
	inline void set__skippedDuringSave_38(bool value)
	{
		____skippedDuringSave_38 = value;
	}

	inline static int32_t get_offset_of__diskNumber_39() { return static_cast<int32_t>(offsetof(ZipEntry_t2157002808, ____diskNumber_39)); }
	inline uint32_t get__diskNumber_39() const { return ____diskNumber_39; }
	inline uint32_t* get_address_of__diskNumber_39() { return &____diskNumber_39; }
	inline void set__diskNumber_39(uint32_t value)
	{
		____diskNumber_39 = value;
	}

	inline static int32_t get_offset_of__actualEncoding_41() { return static_cast<int32_t>(offsetof(ZipEntry_t2157002808, ____actualEncoding_41)); }
	inline Encoding_t1523322056 * get__actualEncoding_41() const { return ____actualEncoding_41; }
	inline Encoding_t1523322056 ** get_address_of__actualEncoding_41() { return &____actualEncoding_41; }
	inline void set__actualEncoding_41(Encoding_t1523322056 * value)
	{
		____actualEncoding_41 = value;
		Il2CppCodeGenWriteBarrier((&____actualEncoding_41), value);
	}

	inline static int32_t get_offset_of__container_42() { return static_cast<int32_t>(offsetof(ZipEntry_t2157002808, ____container_42)); }
	inline ZipContainer_t1729444702 * get__container_42() const { return ____container_42; }
	inline ZipContainer_t1729444702 ** get_address_of__container_42() { return &____container_42; }
	inline void set__container_42(ZipContainer_t1729444702 * value)
	{
		____container_42 = value;
		Il2CppCodeGenWriteBarrier((&____container_42), value);
	}

	inline static int32_t get_offset_of___FileDataPosition_43() { return static_cast<int32_t>(offsetof(ZipEntry_t2157002808, _____FileDataPosition_43)); }
	inline int64_t get___FileDataPosition_43() const { return _____FileDataPosition_43; }
	inline int64_t* get_address_of___FileDataPosition_43() { return &_____FileDataPosition_43; }
	inline void set___FileDataPosition_43(int64_t value)
	{
		_____FileDataPosition_43 = value;
	}

	inline static int32_t get_offset_of__EntryHeader_44() { return static_cast<int32_t>(offsetof(ZipEntry_t2157002808, ____EntryHeader_44)); }
	inline ByteU5BU5D_t4116647657* get__EntryHeader_44() const { return ____EntryHeader_44; }
	inline ByteU5BU5D_t4116647657** get_address_of__EntryHeader_44() { return &____EntryHeader_44; }
	inline void set__EntryHeader_44(ByteU5BU5D_t4116647657* value)
	{
		____EntryHeader_44 = value;
		Il2CppCodeGenWriteBarrier((&____EntryHeader_44), value);
	}

	inline static int32_t get_offset_of__RelativeOffsetOfLocalHeader_45() { return static_cast<int32_t>(offsetof(ZipEntry_t2157002808, ____RelativeOffsetOfLocalHeader_45)); }
	inline int64_t get__RelativeOffsetOfLocalHeader_45() const { return ____RelativeOffsetOfLocalHeader_45; }
	inline int64_t* get_address_of__RelativeOffsetOfLocalHeader_45() { return &____RelativeOffsetOfLocalHeader_45; }
	inline void set__RelativeOffsetOfLocalHeader_45(int64_t value)
	{
		____RelativeOffsetOfLocalHeader_45 = value;
	}

	inline static int32_t get_offset_of__future_ROLH_46() { return static_cast<int32_t>(offsetof(ZipEntry_t2157002808, ____future_ROLH_46)); }
	inline int64_t get__future_ROLH_46() const { return ____future_ROLH_46; }
	inline int64_t* get_address_of__future_ROLH_46() { return &____future_ROLH_46; }
	inline void set__future_ROLH_46(int64_t value)
	{
		____future_ROLH_46 = value;
	}

	inline static int32_t get_offset_of__TotalEntrySize_47() { return static_cast<int32_t>(offsetof(ZipEntry_t2157002808, ____TotalEntrySize_47)); }
	inline int64_t get__TotalEntrySize_47() const { return ____TotalEntrySize_47; }
	inline int64_t* get_address_of__TotalEntrySize_47() { return &____TotalEntrySize_47; }
	inline void set__TotalEntrySize_47(int64_t value)
	{
		____TotalEntrySize_47 = value;
	}

	inline static int32_t get_offset_of__LengthOfHeader_48() { return static_cast<int32_t>(offsetof(ZipEntry_t2157002808, ____LengthOfHeader_48)); }
	inline int32_t get__LengthOfHeader_48() const { return ____LengthOfHeader_48; }
	inline int32_t* get_address_of__LengthOfHeader_48() { return &____LengthOfHeader_48; }
	inline void set__LengthOfHeader_48(int32_t value)
	{
		____LengthOfHeader_48 = value;
	}

	inline static int32_t get_offset_of__LengthOfTrailer_49() { return static_cast<int32_t>(offsetof(ZipEntry_t2157002808, ____LengthOfTrailer_49)); }
	inline int32_t get__LengthOfTrailer_49() const { return ____LengthOfTrailer_49; }
	inline int32_t* get_address_of__LengthOfTrailer_49() { return &____LengthOfTrailer_49; }
	inline void set__LengthOfTrailer_49(int32_t value)
	{
		____LengthOfTrailer_49 = value;
	}

	inline static int32_t get_offset_of__InputUsesZip64_50() { return static_cast<int32_t>(offsetof(ZipEntry_t2157002808, ____InputUsesZip64_50)); }
	inline bool get__InputUsesZip64_50() const { return ____InputUsesZip64_50; }
	inline bool* get_address_of__InputUsesZip64_50() { return &____InputUsesZip64_50; }
	inline void set__InputUsesZip64_50(bool value)
	{
		____InputUsesZip64_50 = value;
	}

	inline static int32_t get_offset_of__UnsupportedAlgorithmId_51() { return static_cast<int32_t>(offsetof(ZipEntry_t2157002808, ____UnsupportedAlgorithmId_51)); }
	inline uint32_t get__UnsupportedAlgorithmId_51() const { return ____UnsupportedAlgorithmId_51; }
	inline uint32_t* get_address_of__UnsupportedAlgorithmId_51() { return &____UnsupportedAlgorithmId_51; }
	inline void set__UnsupportedAlgorithmId_51(uint32_t value)
	{
		____UnsupportedAlgorithmId_51 = value;
	}

	inline static int32_t get_offset_of__Password_52() { return static_cast<int32_t>(offsetof(ZipEntry_t2157002808, ____Password_52)); }
	inline String_t* get__Password_52() const { return ____Password_52; }
	inline String_t** get_address_of__Password_52() { return &____Password_52; }
	inline void set__Password_52(String_t* value)
	{
		____Password_52 = value;
		Il2CppCodeGenWriteBarrier((&____Password_52), value);
	}

	inline static int32_t get_offset_of__Source_53() { return static_cast<int32_t>(offsetof(ZipEntry_t2157002808, ____Source_53)); }
	inline int32_t get__Source_53() const { return ____Source_53; }
	inline int32_t* get_address_of__Source_53() { return &____Source_53; }
	inline void set__Source_53(int32_t value)
	{
		____Source_53 = value;
	}

	inline static int32_t get_offset_of__Encryption_54() { return static_cast<int32_t>(offsetof(ZipEntry_t2157002808, ____Encryption_54)); }
	inline int32_t get__Encryption_54() const { return ____Encryption_54; }
	inline int32_t* get_address_of__Encryption_54() { return &____Encryption_54; }
	inline void set__Encryption_54(int32_t value)
	{
		____Encryption_54 = value;
	}

	inline static int32_t get_offset_of__Encryption_FromZipFile_55() { return static_cast<int32_t>(offsetof(ZipEntry_t2157002808, ____Encryption_FromZipFile_55)); }
	inline int32_t get__Encryption_FromZipFile_55() const { return ____Encryption_FromZipFile_55; }
	inline int32_t* get_address_of__Encryption_FromZipFile_55() { return &____Encryption_FromZipFile_55; }
	inline void set__Encryption_FromZipFile_55(int32_t value)
	{
		____Encryption_FromZipFile_55 = value;
	}

	inline static int32_t get_offset_of__WeakEncryptionHeader_56() { return static_cast<int32_t>(offsetof(ZipEntry_t2157002808, ____WeakEncryptionHeader_56)); }
	inline ByteU5BU5D_t4116647657* get__WeakEncryptionHeader_56() const { return ____WeakEncryptionHeader_56; }
	inline ByteU5BU5D_t4116647657** get_address_of__WeakEncryptionHeader_56() { return &____WeakEncryptionHeader_56; }
	inline void set__WeakEncryptionHeader_56(ByteU5BU5D_t4116647657* value)
	{
		____WeakEncryptionHeader_56 = value;
		Il2CppCodeGenWriteBarrier((&____WeakEncryptionHeader_56), value);
	}

	inline static int32_t get_offset_of__archiveStream_57() { return static_cast<int32_t>(offsetof(ZipEntry_t2157002808, ____archiveStream_57)); }
	inline Stream_t1273022909 * get__archiveStream_57() const { return ____archiveStream_57; }
	inline Stream_t1273022909 ** get_address_of__archiveStream_57() { return &____archiveStream_57; }
	inline void set__archiveStream_57(Stream_t1273022909 * value)
	{
		____archiveStream_57 = value;
		Il2CppCodeGenWriteBarrier((&____archiveStream_57), value);
	}

	inline static int32_t get_offset_of__sourceStream_58() { return static_cast<int32_t>(offsetof(ZipEntry_t2157002808, ____sourceStream_58)); }
	inline Stream_t1273022909 * get__sourceStream_58() const { return ____sourceStream_58; }
	inline Stream_t1273022909 ** get_address_of__sourceStream_58() { return &____sourceStream_58; }
	inline void set__sourceStream_58(Stream_t1273022909 * value)
	{
		____sourceStream_58 = value;
		Il2CppCodeGenWriteBarrier((&____sourceStream_58), value);
	}

	inline static int32_t get_offset_of__sourceStreamOriginalPosition_59() { return static_cast<int32_t>(offsetof(ZipEntry_t2157002808, ____sourceStreamOriginalPosition_59)); }
	inline Nullable_1_t1164162090  get__sourceStreamOriginalPosition_59() const { return ____sourceStreamOriginalPosition_59; }
	inline Nullable_1_t1164162090 * get_address_of__sourceStreamOriginalPosition_59() { return &____sourceStreamOriginalPosition_59; }
	inline void set__sourceStreamOriginalPosition_59(Nullable_1_t1164162090  value)
	{
		____sourceStreamOriginalPosition_59 = value;
	}

	inline static int32_t get_offset_of__ioOperationCanceled_60() { return static_cast<int32_t>(offsetof(ZipEntry_t2157002808, ____ioOperationCanceled_60)); }
	inline bool get__ioOperationCanceled_60() const { return ____ioOperationCanceled_60; }
	inline bool* get_address_of__ioOperationCanceled_60() { return &____ioOperationCanceled_60; }
	inline void set__ioOperationCanceled_60(bool value)
	{
		____ioOperationCanceled_60 = value;
	}

	inline static int32_t get_offset_of__presumeZip64_61() { return static_cast<int32_t>(offsetof(ZipEntry_t2157002808, ____presumeZip64_61)); }
	inline bool get__presumeZip64_61() const { return ____presumeZip64_61; }
	inline bool* get_address_of__presumeZip64_61() { return &____presumeZip64_61; }
	inline void set__presumeZip64_61(bool value)
	{
		____presumeZip64_61 = value;
	}

	inline static int32_t get_offset_of__entryRequiresZip64_62() { return static_cast<int32_t>(offsetof(ZipEntry_t2157002808, ____entryRequiresZip64_62)); }
	inline Nullable_1_t1819850047  get__entryRequiresZip64_62() const { return ____entryRequiresZip64_62; }
	inline Nullable_1_t1819850047 * get_address_of__entryRequiresZip64_62() { return &____entryRequiresZip64_62; }
	inline void set__entryRequiresZip64_62(Nullable_1_t1819850047  value)
	{
		____entryRequiresZip64_62 = value;
	}

	inline static int32_t get_offset_of__OutputUsesZip64_63() { return static_cast<int32_t>(offsetof(ZipEntry_t2157002808, ____OutputUsesZip64_63)); }
	inline Nullable_1_t1819850047  get__OutputUsesZip64_63() const { return ____OutputUsesZip64_63; }
	inline Nullable_1_t1819850047 * get_address_of__OutputUsesZip64_63() { return &____OutputUsesZip64_63; }
	inline void set__OutputUsesZip64_63(Nullable_1_t1819850047  value)
	{
		____OutputUsesZip64_63 = value;
	}

	inline static int32_t get_offset_of__IsText_64() { return static_cast<int32_t>(offsetof(ZipEntry_t2157002808, ____IsText_64)); }
	inline bool get__IsText_64() const { return ____IsText_64; }
	inline bool* get_address_of__IsText_64() { return &____IsText_64; }
	inline void set__IsText_64(bool value)
	{
		____IsText_64 = value;
	}

	inline static int32_t get_offset_of__timestamp_65() { return static_cast<int32_t>(offsetof(ZipEntry_t2157002808, ____timestamp_65)); }
	inline int32_t get__timestamp_65() const { return ____timestamp_65; }
	inline int32_t* get_address_of__timestamp_65() { return &____timestamp_65; }
	inline void set__timestamp_65(int32_t value)
	{
		____timestamp_65 = value;
	}

	inline static int32_t get_offset_of__WriteDelegate_69() { return static_cast<int32_t>(offsetof(ZipEntry_t2157002808, ____WriteDelegate_69)); }
	inline WriteDelegate_t3162700152 * get__WriteDelegate_69() const { return ____WriteDelegate_69; }
	inline WriteDelegate_t3162700152 ** get_address_of__WriteDelegate_69() { return &____WriteDelegate_69; }
	inline void set__WriteDelegate_69(WriteDelegate_t3162700152 * value)
	{
		____WriteDelegate_69 = value;
		Il2CppCodeGenWriteBarrier((&____WriteDelegate_69), value);
	}

	inline static int32_t get_offset_of__OpenDelegate_70() { return static_cast<int32_t>(offsetof(ZipEntry_t2157002808, ____OpenDelegate_70)); }
	inline OpenDelegate_t3655486755 * get__OpenDelegate_70() const { return ____OpenDelegate_70; }
	inline OpenDelegate_t3655486755 ** get_address_of__OpenDelegate_70() { return &____OpenDelegate_70; }
	inline void set__OpenDelegate_70(OpenDelegate_t3655486755 * value)
	{
		____OpenDelegate_70 = value;
		Il2CppCodeGenWriteBarrier((&____OpenDelegate_70), value);
	}

	inline static int32_t get_offset_of__CloseDelegate_71() { return static_cast<int32_t>(offsetof(ZipEntry_t2157002808, ____CloseDelegate_71)); }
	inline CloseDelegate_t2132192931 * get__CloseDelegate_71() const { return ____CloseDelegate_71; }
	inline CloseDelegate_t2132192931 ** get_address_of__CloseDelegate_71() { return &____CloseDelegate_71; }
	inline void set__CloseDelegate_71(CloseDelegate_t2132192931 * value)
	{
		____CloseDelegate_71 = value;
		Il2CppCodeGenWriteBarrier((&____CloseDelegate_71), value);
	}

	inline static int32_t get_offset_of_U3CExtractExistingFileU3Ek__BackingField_72() { return static_cast<int32_t>(offsetof(ZipEntry_t2157002808, ___U3CExtractExistingFileU3Ek__BackingField_72)); }
	inline int32_t get_U3CExtractExistingFileU3Ek__BackingField_72() const { return ___U3CExtractExistingFileU3Ek__BackingField_72; }
	inline int32_t* get_address_of_U3CExtractExistingFileU3Ek__BackingField_72() { return &___U3CExtractExistingFileU3Ek__BackingField_72; }
	inline void set_U3CExtractExistingFileU3Ek__BackingField_72(int32_t value)
	{
		___U3CExtractExistingFileU3Ek__BackingField_72 = value;
	}

	inline static int32_t get_offset_of_U3CZipErrorActionU3Ek__BackingField_73() { return static_cast<int32_t>(offsetof(ZipEntry_t2157002808, ___U3CZipErrorActionU3Ek__BackingField_73)); }
	inline int32_t get_U3CZipErrorActionU3Ek__BackingField_73() const { return ___U3CZipErrorActionU3Ek__BackingField_73; }
	inline int32_t* get_address_of_U3CZipErrorActionU3Ek__BackingField_73() { return &___U3CZipErrorActionU3Ek__BackingField_73; }
	inline void set_U3CZipErrorActionU3Ek__BackingField_73(int32_t value)
	{
		___U3CZipErrorActionU3Ek__BackingField_73 = value;
	}

	inline static int32_t get_offset_of_U3CSetCompressionU3Ek__BackingField_74() { return static_cast<int32_t>(offsetof(ZipEntry_t2157002808, ___U3CSetCompressionU3Ek__BackingField_74)); }
	inline SetCompressionCallback_t1872989618 * get_U3CSetCompressionU3Ek__BackingField_74() const { return ___U3CSetCompressionU3Ek__BackingField_74; }
	inline SetCompressionCallback_t1872989618 ** get_address_of_U3CSetCompressionU3Ek__BackingField_74() { return &___U3CSetCompressionU3Ek__BackingField_74; }
	inline void set_U3CSetCompressionU3Ek__BackingField_74(SetCompressionCallback_t1872989618 * value)
	{
		___U3CSetCompressionU3Ek__BackingField_74 = value;
		Il2CppCodeGenWriteBarrier((&___U3CSetCompressionU3Ek__BackingField_74), value);
	}

	inline static int32_t get_offset_of_U3CAlternateEncodingU3Ek__BackingField_75() { return static_cast<int32_t>(offsetof(ZipEntry_t2157002808, ___U3CAlternateEncodingU3Ek__BackingField_75)); }
	inline Encoding_t1523322056 * get_U3CAlternateEncodingU3Ek__BackingField_75() const { return ___U3CAlternateEncodingU3Ek__BackingField_75; }
	inline Encoding_t1523322056 ** get_address_of_U3CAlternateEncodingU3Ek__BackingField_75() { return &___U3CAlternateEncodingU3Ek__BackingField_75; }
	inline void set_U3CAlternateEncodingU3Ek__BackingField_75(Encoding_t1523322056 * value)
	{
		___U3CAlternateEncodingU3Ek__BackingField_75 = value;
		Il2CppCodeGenWriteBarrier((&___U3CAlternateEncodingU3Ek__BackingField_75), value);
	}

	inline static int32_t get_offset_of_U3CAlternateEncodingUsageU3Ek__BackingField_76() { return static_cast<int32_t>(offsetof(ZipEntry_t2157002808, ___U3CAlternateEncodingUsageU3Ek__BackingField_76)); }
	inline int32_t get_U3CAlternateEncodingUsageU3Ek__BackingField_76() const { return ___U3CAlternateEncodingUsageU3Ek__BackingField_76; }
	inline int32_t* get_address_of_U3CAlternateEncodingUsageU3Ek__BackingField_76() { return &___U3CAlternateEncodingUsageU3Ek__BackingField_76; }
	inline void set_U3CAlternateEncodingUsageU3Ek__BackingField_76(int32_t value)
	{
		___U3CAlternateEncodingUsageU3Ek__BackingField_76 = value;
	}
};

struct ZipEntry_t2157002808_StaticFields
{
public:
	// System.Text.Encoding Pathfinding.Ionic.Zip.ZipEntry::ibm437
	Encoding_t1523322056 * ___ibm437_40;
	// System.DateTime Pathfinding.Ionic.Zip.ZipEntry::_unixEpoch
	DateTime_t3738529785  ____unixEpoch_66;
	// System.DateTime Pathfinding.Ionic.Zip.ZipEntry::_win32Epoch
	DateTime_t3738529785  ____win32Epoch_67;
	// System.DateTime Pathfinding.Ionic.Zip.ZipEntry::_zeroHour
	DateTime_t3738529785  ____zeroHour_68;

public:
	inline static int32_t get_offset_of_ibm437_40() { return static_cast<int32_t>(offsetof(ZipEntry_t2157002808_StaticFields, ___ibm437_40)); }
	inline Encoding_t1523322056 * get_ibm437_40() const { return ___ibm437_40; }
	inline Encoding_t1523322056 ** get_address_of_ibm437_40() { return &___ibm437_40; }
	inline void set_ibm437_40(Encoding_t1523322056 * value)
	{
		___ibm437_40 = value;
		Il2CppCodeGenWriteBarrier((&___ibm437_40), value);
	}

	inline static int32_t get_offset_of__unixEpoch_66() { return static_cast<int32_t>(offsetof(ZipEntry_t2157002808_StaticFields, ____unixEpoch_66)); }
	inline DateTime_t3738529785  get__unixEpoch_66() const { return ____unixEpoch_66; }
	inline DateTime_t3738529785 * get_address_of__unixEpoch_66() { return &____unixEpoch_66; }
	inline void set__unixEpoch_66(DateTime_t3738529785  value)
	{
		____unixEpoch_66 = value;
	}

	inline static int32_t get_offset_of__win32Epoch_67() { return static_cast<int32_t>(offsetof(ZipEntry_t2157002808_StaticFields, ____win32Epoch_67)); }
	inline DateTime_t3738529785  get__win32Epoch_67() const { return ____win32Epoch_67; }
	inline DateTime_t3738529785 * get_address_of__win32Epoch_67() { return &____win32Epoch_67; }
	inline void set__win32Epoch_67(DateTime_t3738529785  value)
	{
		____win32Epoch_67 = value;
	}

	inline static int32_t get_offset_of__zeroHour_68() { return static_cast<int32_t>(offsetof(ZipEntry_t2157002808_StaticFields, ____zeroHour_68)); }
	inline DateTime_t3738529785  get__zeroHour_68() const { return ____zeroHour_68; }
	inline DateTime_t3738529785 * get_address_of__zeroHour_68() { return &____zeroHour_68; }
	inline void set__zeroHour_68(DateTime_t3738529785  value)
	{
		____zeroHour_68 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ZIPENTRY_T2157002808_H



extern "C" void Context_t1744531130_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void Context_t1744531130_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void Context_t1744531130_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType Context_t1744531130_0_0_0;
extern "C" void Escape_t3294788190_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void Escape_t3294788190_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void Escape_t3294788190_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType Escape_t3294788190_0_0_0;
extern "C" void PreviousInfo_t2148130204_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void PreviousInfo_t2148130204_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void PreviousInfo_t2148130204_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType PreviousInfo_t2148130204_0_0_0;
extern "C" void DelegatePInvokeWrapper_AppDomainInitializer_t682969308();
extern const RuntimeType AppDomainInitializer_t682969308_0_0_0;
extern "C" void DelegatePInvokeWrapper_Swapper_t2822380397();
extern const RuntimeType Swapper_t2822380397_0_0_0;
extern "C" void DictionaryEntry_t3123975638_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void DictionaryEntry_t3123975638_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void DictionaryEntry_t3123975638_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType DictionaryEntry_t3123975638_0_0_0;
extern "C" void Slot_t3975888750_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void Slot_t3975888750_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void Slot_t3975888750_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType Slot_t3975888750_0_0_0;
extern "C" void Slot_t384495010_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void Slot_t384495010_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void Slot_t384495010_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType Slot_t384495010_0_0_0;
extern "C" void Enum_t4135868527_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void Enum_t4135868527_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void Enum_t4135868527_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType Enum_t4135868527_0_0_0;
extern "C" void DelegatePInvokeWrapper_ReadDelegate_t714865915();
extern const RuntimeType ReadDelegate_t714865915_0_0_0;
extern "C" void DelegatePInvokeWrapper_WriteDelegate_t4270993571();
extern const RuntimeType WriteDelegate_t4270993571_0_0_0;
extern "C" void MonoIOStat_t592533987_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void MonoIOStat_t592533987_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void MonoIOStat_t592533987_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType MonoIOStat_t592533987_0_0_0;
extern "C" void MonoEnumInfo_t3694469084_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void MonoEnumInfo_t3694469084_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void MonoEnumInfo_t3694469084_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType MonoEnumInfo_t3694469084_0_0_0;
extern "C" void CustomAttributeNamedArgument_t287865710_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void CustomAttributeNamedArgument_t287865710_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void CustomAttributeNamedArgument_t287865710_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType CustomAttributeNamedArgument_t287865710_0_0_0;
extern "C" void CustomAttributeTypedArgument_t2723150157_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void CustomAttributeTypedArgument_t2723150157_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void CustomAttributeTypedArgument_t2723150157_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType CustomAttributeTypedArgument_t2723150157_0_0_0;
extern "C" void ILTokenInfo_t2325775114_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void ILTokenInfo_t2325775114_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void ILTokenInfo_t2325775114_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType ILTokenInfo_t2325775114_0_0_0;
extern "C" void MonoResource_t4103430009_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void MonoResource_t4103430009_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void MonoResource_t4103430009_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType MonoResource_t4103430009_0_0_0;
extern "C" void MonoWin32Resource_t1904229483_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void MonoWin32Resource_t1904229483_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void MonoWin32Resource_t1904229483_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType MonoWin32Resource_t1904229483_0_0_0;
extern "C" void RefEmitPermissionSet_t484390987_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void RefEmitPermissionSet_t484390987_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void RefEmitPermissionSet_t484390987_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType RefEmitPermissionSet_t484390987_0_0_0;
extern "C" void MonoEventInfo_t346866618_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void MonoEventInfo_t346866618_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void MonoEventInfo_t346866618_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType MonoEventInfo_t346866618_0_0_0;
extern "C" void MonoMethodInfo_t1248819020_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void MonoMethodInfo_t1248819020_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void MonoMethodInfo_t1248819020_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType MonoMethodInfo_t1248819020_0_0_0;
extern "C" void MonoPropertyInfo_t3087356066_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void MonoPropertyInfo_t3087356066_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void MonoPropertyInfo_t3087356066_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType MonoPropertyInfo_t3087356066_0_0_0;
extern "C" void ParameterModifier_t1461694466_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void ParameterModifier_t1461694466_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void ParameterModifier_t1461694466_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType ParameterModifier_t1461694466_0_0_0;
extern "C" void ResourceCacheItem_t51292791_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void ResourceCacheItem_t51292791_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void ResourceCacheItem_t51292791_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType ResourceCacheItem_t51292791_0_0_0;
extern "C" void ResourceInfo_t2872965302_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void ResourceInfo_t2872965302_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void ResourceInfo_t2872965302_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType ResourceInfo_t2872965302_0_0_0;
extern "C" void ProcessMessageRes_t3710547145_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void ProcessMessageRes_t3710547145_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void ProcessMessageRes_t3710547145_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType ProcessMessageRes_t3710547145_0_0_0;
extern "C" void DelegatePInvokeWrapper_CrossContextDelegate_t387175271();
extern const RuntimeType CrossContextDelegate_t387175271_0_0_0;
extern "C" void DelegatePInvokeWrapper_CallbackHandler_t3280319253();
extern const RuntimeType CallbackHandler_t3280319253_0_0_0;
extern "C" void SerializationEntry_t648286436_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void SerializationEntry_t648286436_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void SerializationEntry_t648286436_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType SerializationEntry_t648286436_0_0_0;
extern "C" void StreamingContext_t3711869237_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void StreamingContext_t3711869237_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void StreamingContext_t3711869237_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType StreamingContext_t3711869237_0_0_0;
extern "C" void DSAParameters_t1885824122_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void DSAParameters_t1885824122_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void DSAParameters_t1885824122_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType DSAParameters_t1885824122_0_0_0;
extern "C" void RSAParameters_t1728406613_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void RSAParameters_t1728406613_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void RSAParameters_t1728406613_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType RSAParameters_t1728406613_0_0_0;
extern "C" void SecurityFrame_t1422462475_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void SecurityFrame_t1422462475_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void SecurityFrame_t1422462475_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType SecurityFrame_t1422462475_0_0_0;
extern "C" void DelegatePInvokeWrapper_ThreadStart_t1006689297();
extern const RuntimeType ThreadStart_t1006689297_0_0_0;
extern "C" void ValueType_t3640485471_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void ValueType_t3640485471_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void ValueType_t3640485471_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType ValueType_t3640485471_0_0_0;
extern "C" void X509ChainStatus_t133602714_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void X509ChainStatus_t133602714_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void X509ChainStatus_t133602714_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType X509ChainStatus_t133602714_0_0_0;
extern "C" void IntStack_t2189327687_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void IntStack_t2189327687_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void IntStack_t2189327687_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType IntStack_t2189327687_0_0_0;
extern "C" void Interval_t1802865632_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void Interval_t1802865632_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void Interval_t1802865632_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType Interval_t1802865632_0_0_0;
extern "C" void DelegatePInvokeWrapper_CostDelegate_t1722821004();
extern const RuntimeType CostDelegate_t1722821004_0_0_0;
extern "C" void UriScheme_t722425697_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void UriScheme_t722425697_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void UriScheme_t722425697_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType UriScheme_t722425697_0_0_0;
extern "C" void DelegatePInvokeWrapper_Action_t1264377477();
extern const RuntimeType Action_t1264377477_0_0_0;
extern "C" void AnimationCurve_t3046754366_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void AnimationCurve_t3046754366_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void AnimationCurve_t3046754366_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType AnimationCurve_t3046754366_0_0_0;
extern "C" void DelegatePInvokeWrapper_LogCallback_t3588208630();
extern const RuntimeType LogCallback_t3588208630_0_0_0;
extern "C" void DelegatePInvokeWrapper_LowMemoryCallback_t4104246196();
extern const RuntimeType LowMemoryCallback_t4104246196_0_0_0;
extern "C" void AsyncOperation_t1445031843_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void AsyncOperation_t1445031843_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void AsyncOperation_t1445031843_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType AsyncOperation_t1445031843_0_0_0;
extern "C" void OrderBlock_t1585977831_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void OrderBlock_t1585977831_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void OrderBlock_t1585977831_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType OrderBlock_t1585977831_0_0_0;
extern "C" void Coroutine_t3829159415_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void Coroutine_t3829159415_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void Coroutine_t3829159415_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType Coroutine_t3829159415_0_0_0;
extern "C" void CullingGroup_t2096318768_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void CullingGroup_t2096318768_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void CullingGroup_t2096318768_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType CullingGroup_t2096318768_0_0_0;
extern "C" void DelegatePInvokeWrapper_StateChanged_t2136737110();
extern const RuntimeType StateChanged_t2136737110_0_0_0;
extern "C" void DelegatePInvokeWrapper_DisplaysUpdatedDelegate_t51287044();
extern const RuntimeType DisplaysUpdatedDelegate_t51287044_0_0_0;
extern "C" void DelegatePInvokeWrapper_UnityAction_t3245792599();
extern const RuntimeType UnityAction_t3245792599_0_0_0;
extern "C" void PlayerLoopSystem_t105772105_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void PlayerLoopSystem_t105772105_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void PlayerLoopSystem_t105772105_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType PlayerLoopSystem_t105772105_0_0_0;
extern "C" void DelegatePInvokeWrapper_UpdateFunction_t377278577();
extern const RuntimeType UpdateFunction_t377278577_0_0_0;
extern "C" void PlayerLoopSystemInternal_t2185485283_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void PlayerLoopSystemInternal_t2185485283_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void PlayerLoopSystemInternal_t2185485283_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType PlayerLoopSystemInternal_t2185485283_0_0_0;
extern "C" void SpriteBone_t303320096_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void SpriteBone_t303320096_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void SpriteBone_t303320096_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType SpriteBone_t303320096_0_0_0;
extern "C" void FailedToLoadScriptObject_t547604379_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void FailedToLoadScriptObject_t547604379_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void FailedToLoadScriptObject_t547604379_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType FailedToLoadScriptObject_t547604379_0_0_0;
extern "C" void Gradient_t3067099924_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void Gradient_t3067099924_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void Gradient_t3067099924_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType Gradient_t3067099924_0_0_0;
extern "C" void MeshContainer_t2572561050_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void MeshContainer_t2572561050_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void MeshContainer_t2572561050_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType MeshContainer_t2572561050_0_0_0;
extern "C" void Object_t631007953_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void Object_t631007953_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void Object_t631007953_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType Object_t631007953_0_0_0;
extern "C" void PlayableBinding_t354260709_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void PlayableBinding_t354260709_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void PlayableBinding_t354260709_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType PlayableBinding_t354260709_0_0_0;
extern "C" void DelegatePInvokeWrapper_CreateOutputMethod_t2301811773();
extern const RuntimeType CreateOutputMethod_t2301811773_0_0_0;
extern "C" void RectOffset_t1369453676_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void RectOffset_t1369453676_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void RectOffset_t1369453676_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType RectOffset_t1369453676_0_0_0;
extern "C" void ResourceRequest_t3109103591_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void ResourceRequest_t3109103591_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void ResourceRequest_t3109103591_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType ResourceRequest_t3109103591_0_0_0;
extern "C" void ScriptableObject_t2528358522_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void ScriptableObject_t2528358522_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void ScriptableObject_t2528358522_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType ScriptableObject_t2528358522_0_0_0;
extern "C" void HitInfo_t3229609740_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void HitInfo_t3229609740_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void HitInfo_t3229609740_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType HitInfo_t3229609740_0_0_0;
extern "C" void TrackedReference_t1199777556_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void TrackedReference_t1199777556_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void TrackedReference_t1199777556_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType TrackedReference_t1199777556_0_0_0;
extern "C" void DelegatePInvokeWrapper_RequestAtlasCallback_t3100554279();
extern const RuntimeType RequestAtlasCallback_t3100554279_0_0_0;
extern "C" void WorkRequest_t1354518612_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void WorkRequest_t1354518612_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void WorkRequest_t1354518612_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType WorkRequest_t1354518612_0_0_0;
extern "C" void WaitForSeconds_t1699091251_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void WaitForSeconds_t1699091251_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void WaitForSeconds_t1699091251_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType WaitForSeconds_t1699091251_0_0_0;
extern "C" void YieldInstruction_t403091072_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void YieldInstruction_t403091072_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void YieldInstruction_t403091072_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType YieldInstruction_t403091072_0_0_0;
extern "C" void Collision2D_t2842956331_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void Collision2D_t2842956331_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void Collision2D_t2842956331_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType Collision2D_t2842956331_0_0_0;
extern "C" void ContactFilter2D_t3805203441_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void ContactFilter2D_t3805203441_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void ContactFilter2D_t3805203441_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType ContactFilter2D_t3805203441_0_0_0;
extern "C" void DelegatePInvokeWrapper_FontTextureRebuildCallback_t2467502454();
extern const RuntimeType FontTextureRebuildCallback_t2467502454_0_0_0;
extern "C" void TextGenerationSettings_t1351628751_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void TextGenerationSettings_t1351628751_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void TextGenerationSettings_t1351628751_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType TextGenerationSettings_t1351628751_0_0_0;
extern "C" void TextGenerator_t3211863866_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void TextGenerator_t3211863866_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void TextGenerator_t3211863866_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType TextGenerator_t3211863866_0_0_0;
extern "C" void AnimationEvent_t1536042487_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void AnimationEvent_t1536042487_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void AnimationEvent_t1536042487_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType AnimationEvent_t1536042487_0_0_0;
extern "C" void DelegatePInvokeWrapper_OnOverrideControllerDirtyCallback_t1307045488();
extern const RuntimeType OnOverrideControllerDirtyCallback_t1307045488_0_0_0;
extern "C" void AnimatorTransitionInfo_t2534804151_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void AnimatorTransitionInfo_t2534804151_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void AnimatorTransitionInfo_t2534804151_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType AnimatorTransitionInfo_t2534804151_0_0_0;
extern "C" void HumanBone_t2465339518_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void HumanBone_t2465339518_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void HumanBone_t2465339518_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType HumanBone_t2465339518_0_0_0;
extern "C" void SkeletonBone_t4134054672_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void SkeletonBone_t4134054672_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void SkeletonBone_t4134054672_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType SkeletonBone_t4134054672_0_0_0;
extern "C" void DelegatePInvokeWrapper_PCMReaderCallback_t1677636661();
extern const RuntimeType PCMReaderCallback_t1677636661_0_0_0;
extern "C" void DelegatePInvokeWrapper_PCMSetPositionCallback_t1059417452();
extern const RuntimeType PCMSetPositionCallback_t1059417452_0_0_0;
extern "C" void DelegatePInvokeWrapper_AudioConfigurationChangeHandler_t2089929874();
extern const RuntimeType AudioConfigurationChangeHandler_t2089929874_0_0_0;
extern "C" void DelegatePInvokeWrapper_ConsumeSampleFramesNativeFunction_t1497769677();
extern const RuntimeType ConsumeSampleFramesNativeFunction_t1497769677_0_0_0;
extern "C" void GcAchievementData_t675222246_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void GcAchievementData_t675222246_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void GcAchievementData_t675222246_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType GcAchievementData_t675222246_0_0_0;
extern "C" void GcAchievementDescriptionData_t643925653_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void GcAchievementDescriptionData_t643925653_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void GcAchievementDescriptionData_t643925653_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType GcAchievementDescriptionData_t643925653_0_0_0;
extern "C" void GcLeaderboard_t4132273028_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void GcLeaderboard_t4132273028_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void GcLeaderboard_t4132273028_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType GcLeaderboard_t4132273028_0_0_0;
extern "C" void GcScoreData_t2125309831_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void GcScoreData_t2125309831_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void GcScoreData_t2125309831_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType GcScoreData_t2125309831_0_0_0;
extern "C" void GcUserProfileData_t2719720026_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void GcUserProfileData_t2719720026_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void GcUserProfileData_t2719720026_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType GcUserProfileData_t2719720026_0_0_0;
extern "C" void Event_t2956885303_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void Event_t2956885303_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void Event_t2956885303_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType Event_t2956885303_0_0_0;
extern "C" void DelegatePInvokeWrapper_WindowFunction_t3146511083();
extern const RuntimeType WindowFunction_t3146511083_0_0_0;
extern "C" void GUIContent_t3050628031_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void GUIContent_t3050628031_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void GUIContent_t3050628031_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType GUIContent_t3050628031_0_0_0;
extern "C" void DelegatePInvokeWrapper_SkinChangedDelegate_t1143955295();
extern const RuntimeType SkinChangedDelegate_t1143955295_0_0_0;
extern "C" void GUIStyle_t3956901511_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void GUIStyle_t3956901511_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void GUIStyle_t3956901511_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType GUIStyle_t3956901511_0_0_0;
extern "C" void GUIStyleState_t1397964415_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void GUIStyleState_t1397964415_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void GUIStyleState_t1397964415_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType GUIStyleState_t1397964415_0_0_0;
extern "C" void Collision_t4262080450_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void Collision_t4262080450_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void Collision_t4262080450_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType Collision_t4262080450_0_0_0;
extern "C" void ControllerColliderHit_t240592346_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void ControllerColliderHit_t240592346_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void ControllerColliderHit_t240592346_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType ControllerColliderHit_t240592346_0_0_0;
extern "C" void TileAnimationData_t649120048_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void TileAnimationData_t649120048_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void TileAnimationData_t649120048_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType TileAnimationData_t649120048_0_0_0;
extern "C" void TileData_t2042394239_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void TileData_t2042394239_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void TileData_t2042394239_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType TileData_t2042394239_0_0_0;
extern "C" void DelegatePInvokeWrapper_WillRenderCanvases_t3309123499();
extern const RuntimeType WillRenderCanvases_t3309123499_0_0_0;
extern "C" void DelegatePInvokeWrapper_SessionStateChanged_t3163629820();
extern const RuntimeType SessionStateChanged_t3163629820_0_0_0;
extern "C" void RemoteConfigSettings_t1247263429_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void RemoteConfigSettings_t1247263429_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void RemoteConfigSettings_t1247263429_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType RemoteConfigSettings_t1247263429_0_0_0;
extern "C" void DelegatePInvokeWrapper_UpdatedEventHandler_t1027848393();
extern const RuntimeType UpdatedEventHandler_t1027848393_0_0_0;
extern "C" void CertificateHandler_t2739891000_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void CertificateHandler_t2739891000_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void CertificateHandler_t2739891000_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType CertificateHandler_t2739891000_0_0_0;
extern "C" void DelegatePInvokeWrapper_SetCompressionCallback_t1872989618();
extern const RuntimeType SetCompressionCallback_t1872989618_0_0_0;
extern "C" void DelegatePInvokeWrapper_CompressFunc_t2219633776();
extern const RuntimeType CompressFunc_t2219633776_0_0_0;
extern const RuntimeType CRC32_t288211679_0_0_0;
extern const RuntimeType ZipEntry_t2157002808_0_0_0;
extern const RuntimeType BadCrcException_t1019298900_0_0_0;
extern const RuntimeType ZipException_t2997260086_0_0_0;
extern const RuntimeType BadPasswordException_t2697529055_0_0_0;
extern const RuntimeType BadReadException_t3174216175_0_0_0;
extern const RuntimeType BadStateException_t491447969_0_0_0;
extern const RuntimeType ZipFile_t528027654_0_0_0;
extern const RuntimeType ZlibCodec_t855427629_0_0_0;
extern const RuntimeType ZlibException_t3942143964_0_0_0;
extern "C" void GraphPoint_t1106670716_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void GraphPoint_t1106670716_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void GraphPoint_t1106670716_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType GraphPoint_t1106670716_0_0_0;
extern "C" void PathTypeDebug_t2056685963_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void PathTypeDebug_t2056685963_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void PathTypeDebug_t2056685963_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType PathTypeDebug_t2056685963_0_0_0;
extern "C" void AstarWorkItem_t2415792344_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void AstarWorkItem_t2415792344_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void AstarWorkItem_t2415792344_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType AstarWorkItem_t2415792344_0_0_0;
extern "C" void Tuple_t1357928190_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void Tuple_t1357928190_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void Tuple_t1357928190_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType Tuple_t1357928190_0_0_0;
extern "C" void Connection_t3160909863_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void Connection_t3160909863_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void Connection_t3160909863_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType Connection_t3160909863_0_0_0;
extern "C" void FunnelPortals_t3887794720_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void FunnelPortals_t3887794720_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void FunnelPortals_t3887794720_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType FunnelPortals_t3887794720_0_0_0;
extern "C" void PathPart_t2608792076_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void PathPart_t2608792076_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void PathPart_t2608792076_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType PathPart_t2608792076_0_0_0;
extern "C" void GraphHitInfo_t3539843647_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void GraphHitInfo_t3539843647_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void GraphHitInfo_t3539843647_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType GraphHitInfo_t3539843647_0_0_0;
extern "C" void GUOSingle_t2392894652_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void GUOSingle_t2392894652_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void GUOSingle_t2392894652_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType GUOSingle_t2392894652_0_0_0;
extern "C" void NNInfo_t525091153_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void NNInfo_t525091153_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void NNInfo_t525091153_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType NNInfo_t525091153_0_0_0;
extern "C" void NNInfoInternal_t3267413932_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void NNInfoInternal_t3267413932_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void NNInfoInternal_t3267413932_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType NNInfoInternal_t3267413932_0_0_0;
extern "C" void meshStruct_t2877600597_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void meshStruct_t2877600597_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void meshStruct_t2877600597_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType meshStruct_t2877600597_0_0_0;
extern "C" void DelegatePInvokeWrapper_OnScanStatus_t2921404568();
extern const RuntimeType OnScanStatus_t2921404568_0_0_0;
extern "C" void GraphUpdateLock_t2927222478_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void GraphUpdateLock_t2927222478_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void GraphUpdateLock_t2927222478_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType GraphUpdateLock_t2927222478_0_0_0;
extern "C" void Node_t1422069613_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void Node_t1422069613_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void Node_t1422069613_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType Node_t1422069613_0_0_0;
extern "C" void Progress_t1976475681_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void Progress_t1976475681_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void Progress_t1976475681_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType Progress_t1976475681_0_0_0;
extern "C" void Node_t3886631461_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void Node_t3886631461_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void Node_t3886631461_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType Node_t3886631461_0_0_0;
extern "C" void QuadtreeQuery_t418943214_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void QuadtreeQuery_t418943214_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void QuadtreeQuery_t418943214_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType QuadtreeQuery_t418943214_0_0_0;
extern "C" void VO_t1883459210_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void VO_t1883459210_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void VO_t1883459210_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType VO_t1883459210_0_0_0;
extern "C" void Hasher_t2616195318_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void Hasher_t2616195318_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void Hasher_t2616195318_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType Hasher_t2616195318_0_0_0;
extern "C" void MeshWithHash_t3437734747_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void MeshWithHash_t3437734747_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void MeshWithHash_t3437734747_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType MeshWithHash_t3437734747_0_0_0;
extern "C" void RaycastResult_t3360306849_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void RaycastResult_t3360306849_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void RaycastResult_t3360306849_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType RaycastResult_t3360306849_0_0_0;
extern "C" void ColorTween_t809614380_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void ColorTween_t809614380_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void ColorTween_t809614380_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType ColorTween_t809614380_0_0_0;
extern "C" void FloatTween_t1274330004_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void FloatTween_t1274330004_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void FloatTween_t1274330004_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType FloatTween_t1274330004_0_0_0;
extern "C" void Resources_t1597885468_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void Resources_t1597885468_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void Resources_t1597885468_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType Resources_t1597885468_0_0_0;
extern "C" void DelegatePInvokeWrapper_OnValidateInput_t2355412304();
extern const RuntimeType OnValidateInput_t2355412304_0_0_0;
extern "C" void Navigation_t3049316579_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void Navigation_t3049316579_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void Navigation_t3049316579_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType Navigation_t3049316579_0_0_0;
extern "C" void DelegatePInvokeWrapper_GetRayIntersectionAllCallback_t3913627115();
extern const RuntimeType GetRayIntersectionAllCallback_t3913627115_0_0_0;
extern "C" void DelegatePInvokeWrapper_GetRayIntersectionAllNonAllocCallback_t2311174851();
extern const RuntimeType GetRayIntersectionAllNonAllocCallback_t2311174851_0_0_0;
extern "C" void DelegatePInvokeWrapper_GetRaycastNonAllocCallback_t3841783507();
extern const RuntimeType GetRaycastNonAllocCallback_t3841783507_0_0_0;
extern "C" void DelegatePInvokeWrapper_Raycast2DCallback_t768590915();
extern const RuntimeType Raycast2DCallback_t768590915_0_0_0;
extern "C" void DelegatePInvokeWrapper_Raycast3DCallback_t701940803();
extern const RuntimeType Raycast3DCallback_t701940803_0_0_0;
extern "C" void DelegatePInvokeWrapper_RaycastAllCallback_t1884415901();
extern const RuntimeType RaycastAllCallback_t1884415901_0_0_0;
extern "C" void SpriteState_t1362986479_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void SpriteState_t1362986479_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void SpriteState_t1362986479_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType SpriteState_t1362986479_0_0_0;
extern "C" void ColorTween_t378116136_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void ColorTween_t378116136_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void ColorTween_t378116136_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType ColorTween_t378116136_0_0_0;
extern "C" void FloatTween_t3783157226_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void FloatTween_t3783157226_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void FloatTween_t3783157226_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType FloatTween_t3783157226_0_0_0;
extern "C" void FontAssetCreationSettings_t359369028_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void FontAssetCreationSettings_t359369028_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void FontAssetCreationSettings_t359369028_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType FontAssetCreationSettings_t359369028_0_0_0;
extern "C" void MaterialReference_t1952344632_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void MaterialReference_t1952344632_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void MaterialReference_t1952344632_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType MaterialReference_t1952344632_0_0_0;
extern "C" void SpriteData_t3048397587_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void SpriteData_t3048397587_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void SpriteData_t3048397587_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType SpriteData_t3048397587_0_0_0;
extern "C" void TMP_CharacterInfo_t3185626797_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void TMP_CharacterInfo_t3185626797_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void TMP_CharacterInfo_t3185626797_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType TMP_CharacterInfo_t3185626797_0_0_0;
extern "C" void Resources_t2155109485_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void Resources_t2155109485_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void Resources_t2155109485_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType Resources_t2155109485_0_0_0;
extern "C" void TMP_FontWeights_t916301067_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void TMP_FontWeights_t916301067_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void TMP_FontWeights_t916301067_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType TMP_FontWeights_t916301067_0_0_0;
extern "C" void DelegatePInvokeWrapper_OnValidateInput_t373909109();
extern const RuntimeType OnValidateInput_t373909109_0_0_0;
extern "C" void TMP_LinkInfo_t1092083476_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void TMP_LinkInfo_t1092083476_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void TMP_LinkInfo_t1092083476_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType TMP_LinkInfo_t1092083476_0_0_0;
extern "C" void TMP_MeshInfo_t2771747634_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void TMP_MeshInfo_t2771747634_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void TMP_MeshInfo_t2771747634_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType TMP_MeshInfo_t2771747634_0_0_0;
extern "C" void TMP_WordInfo_t3331066303_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void TMP_WordInfo_t3331066303_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void TMP_WordInfo_t3331066303_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType TMP_WordInfo_t3331066303_0_0_0;
extern "C" void WordWrapState_t341939652_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void WordWrapState_t341939652_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void WordWrapState_t341939652_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType WordWrapState_t341939652_0_0_0;
extern "C" void DelegatePInvokeWrapper_ApplyTween_t3327999347();
extern const RuntimeType ApplyTween_t3327999347_0_0_0;
extern "C" void DelegatePInvokeWrapper_EasingFunction_t2767217938();
extern const RuntimeType EasingFunction_t2767217938_0_0_0;
extern Il2CppInteropData g_Il2CppInteropData[166] = 
{
	{ NULL, Context_t1744531130_marshal_pinvoke, Context_t1744531130_marshal_pinvoke_back, Context_t1744531130_marshal_pinvoke_cleanup, NULL, NULL, &Context_t1744531130_0_0_0 } /* Mono.Globalization.Unicode.SimpleCollator/Context */,
	{ NULL, Escape_t3294788190_marshal_pinvoke, Escape_t3294788190_marshal_pinvoke_back, Escape_t3294788190_marshal_pinvoke_cleanup, NULL, NULL, &Escape_t3294788190_0_0_0 } /* Mono.Globalization.Unicode.SimpleCollator/Escape */,
	{ NULL, PreviousInfo_t2148130204_marshal_pinvoke, PreviousInfo_t2148130204_marshal_pinvoke_back, PreviousInfo_t2148130204_marshal_pinvoke_cleanup, NULL, NULL, &PreviousInfo_t2148130204_0_0_0 } /* Mono.Globalization.Unicode.SimpleCollator/PreviousInfo */,
	{ DelegatePInvokeWrapper_AppDomainInitializer_t682969308, NULL, NULL, NULL, NULL, NULL, &AppDomainInitializer_t682969308_0_0_0 } /* System.AppDomainInitializer */,
	{ DelegatePInvokeWrapper_Swapper_t2822380397, NULL, NULL, NULL, NULL, NULL, &Swapper_t2822380397_0_0_0 } /* System.Array/Swapper */,
	{ NULL, DictionaryEntry_t3123975638_marshal_pinvoke, DictionaryEntry_t3123975638_marshal_pinvoke_back, DictionaryEntry_t3123975638_marshal_pinvoke_cleanup, NULL, NULL, &DictionaryEntry_t3123975638_0_0_0 } /* System.Collections.DictionaryEntry */,
	{ NULL, Slot_t3975888750_marshal_pinvoke, Slot_t3975888750_marshal_pinvoke_back, Slot_t3975888750_marshal_pinvoke_cleanup, NULL, NULL, &Slot_t3975888750_0_0_0 } /* System.Collections.Hashtable/Slot */,
	{ NULL, Slot_t384495010_marshal_pinvoke, Slot_t384495010_marshal_pinvoke_back, Slot_t384495010_marshal_pinvoke_cleanup, NULL, NULL, &Slot_t384495010_0_0_0 } /* System.Collections.SortedList/Slot */,
	{ NULL, Enum_t4135868527_marshal_pinvoke, Enum_t4135868527_marshal_pinvoke_back, Enum_t4135868527_marshal_pinvoke_cleanup, NULL, NULL, &Enum_t4135868527_0_0_0 } /* System.Enum */,
	{ DelegatePInvokeWrapper_ReadDelegate_t714865915, NULL, NULL, NULL, NULL, NULL, &ReadDelegate_t714865915_0_0_0 } /* System.IO.FileStream/ReadDelegate */,
	{ DelegatePInvokeWrapper_WriteDelegate_t4270993571, NULL, NULL, NULL, NULL, NULL, &WriteDelegate_t4270993571_0_0_0 } /* System.IO.FileStream/WriteDelegate */,
	{ NULL, MonoIOStat_t592533987_marshal_pinvoke, MonoIOStat_t592533987_marshal_pinvoke_back, MonoIOStat_t592533987_marshal_pinvoke_cleanup, NULL, NULL, &MonoIOStat_t592533987_0_0_0 } /* System.IO.MonoIOStat */,
	{ NULL, MonoEnumInfo_t3694469084_marshal_pinvoke, MonoEnumInfo_t3694469084_marshal_pinvoke_back, MonoEnumInfo_t3694469084_marshal_pinvoke_cleanup, NULL, NULL, &MonoEnumInfo_t3694469084_0_0_0 } /* System.MonoEnumInfo */,
	{ NULL, CustomAttributeNamedArgument_t287865710_marshal_pinvoke, CustomAttributeNamedArgument_t287865710_marshal_pinvoke_back, CustomAttributeNamedArgument_t287865710_marshal_pinvoke_cleanup, NULL, NULL, &CustomAttributeNamedArgument_t287865710_0_0_0 } /* System.Reflection.CustomAttributeNamedArgument */,
	{ NULL, CustomAttributeTypedArgument_t2723150157_marshal_pinvoke, CustomAttributeTypedArgument_t2723150157_marshal_pinvoke_back, CustomAttributeTypedArgument_t2723150157_marshal_pinvoke_cleanup, NULL, NULL, &CustomAttributeTypedArgument_t2723150157_0_0_0 } /* System.Reflection.CustomAttributeTypedArgument */,
	{ NULL, ILTokenInfo_t2325775114_marshal_pinvoke, ILTokenInfo_t2325775114_marshal_pinvoke_back, ILTokenInfo_t2325775114_marshal_pinvoke_cleanup, NULL, NULL, &ILTokenInfo_t2325775114_0_0_0 } /* System.Reflection.Emit.ILTokenInfo */,
	{ NULL, MonoResource_t4103430009_marshal_pinvoke, MonoResource_t4103430009_marshal_pinvoke_back, MonoResource_t4103430009_marshal_pinvoke_cleanup, NULL, NULL, &MonoResource_t4103430009_0_0_0 } /* System.Reflection.Emit.MonoResource */,
	{ NULL, MonoWin32Resource_t1904229483_marshal_pinvoke, MonoWin32Resource_t1904229483_marshal_pinvoke_back, MonoWin32Resource_t1904229483_marshal_pinvoke_cleanup, NULL, NULL, &MonoWin32Resource_t1904229483_0_0_0 } /* System.Reflection.Emit.MonoWin32Resource */,
	{ NULL, RefEmitPermissionSet_t484390987_marshal_pinvoke, RefEmitPermissionSet_t484390987_marshal_pinvoke_back, RefEmitPermissionSet_t484390987_marshal_pinvoke_cleanup, NULL, NULL, &RefEmitPermissionSet_t484390987_0_0_0 } /* System.Reflection.Emit.RefEmitPermissionSet */,
	{ NULL, MonoEventInfo_t346866618_marshal_pinvoke, MonoEventInfo_t346866618_marshal_pinvoke_back, MonoEventInfo_t346866618_marshal_pinvoke_cleanup, NULL, NULL, &MonoEventInfo_t346866618_0_0_0 } /* System.Reflection.MonoEventInfo */,
	{ NULL, MonoMethodInfo_t1248819020_marshal_pinvoke, MonoMethodInfo_t1248819020_marshal_pinvoke_back, MonoMethodInfo_t1248819020_marshal_pinvoke_cleanup, NULL, NULL, &MonoMethodInfo_t1248819020_0_0_0 } /* System.Reflection.MonoMethodInfo */,
	{ NULL, MonoPropertyInfo_t3087356066_marshal_pinvoke, MonoPropertyInfo_t3087356066_marshal_pinvoke_back, MonoPropertyInfo_t3087356066_marshal_pinvoke_cleanup, NULL, NULL, &MonoPropertyInfo_t3087356066_0_0_0 } /* System.Reflection.MonoPropertyInfo */,
	{ NULL, ParameterModifier_t1461694466_marshal_pinvoke, ParameterModifier_t1461694466_marshal_pinvoke_back, ParameterModifier_t1461694466_marshal_pinvoke_cleanup, NULL, NULL, &ParameterModifier_t1461694466_0_0_0 } /* System.Reflection.ParameterModifier */,
	{ NULL, ResourceCacheItem_t51292791_marshal_pinvoke, ResourceCacheItem_t51292791_marshal_pinvoke_back, ResourceCacheItem_t51292791_marshal_pinvoke_cleanup, NULL, NULL, &ResourceCacheItem_t51292791_0_0_0 } /* System.Resources.ResourceReader/ResourceCacheItem */,
	{ NULL, ResourceInfo_t2872965302_marshal_pinvoke, ResourceInfo_t2872965302_marshal_pinvoke_back, ResourceInfo_t2872965302_marshal_pinvoke_cleanup, NULL, NULL, &ResourceInfo_t2872965302_0_0_0 } /* System.Resources.ResourceReader/ResourceInfo */,
	{ NULL, ProcessMessageRes_t3710547145_marshal_pinvoke, ProcessMessageRes_t3710547145_marshal_pinvoke_back, ProcessMessageRes_t3710547145_marshal_pinvoke_cleanup, NULL, NULL, &ProcessMessageRes_t3710547145_0_0_0 } /* System.Runtime.Remoting.Channels.CrossAppDomainSink/ProcessMessageRes */,
	{ DelegatePInvokeWrapper_CrossContextDelegate_t387175271, NULL, NULL, NULL, NULL, NULL, &CrossContextDelegate_t387175271_0_0_0 } /* System.Runtime.Remoting.Contexts.CrossContextDelegate */,
	{ DelegatePInvokeWrapper_CallbackHandler_t3280319253, NULL, NULL, NULL, NULL, NULL, &CallbackHandler_t3280319253_0_0_0 } /* System.Runtime.Serialization.SerializationCallbacks/CallbackHandler */,
	{ NULL, SerializationEntry_t648286436_marshal_pinvoke, SerializationEntry_t648286436_marshal_pinvoke_back, SerializationEntry_t648286436_marshal_pinvoke_cleanup, NULL, NULL, &SerializationEntry_t648286436_0_0_0 } /* System.Runtime.Serialization.SerializationEntry */,
	{ NULL, StreamingContext_t3711869237_marshal_pinvoke, StreamingContext_t3711869237_marshal_pinvoke_back, StreamingContext_t3711869237_marshal_pinvoke_cleanup, NULL, NULL, &StreamingContext_t3711869237_0_0_0 } /* System.Runtime.Serialization.StreamingContext */,
	{ NULL, DSAParameters_t1885824122_marshal_pinvoke, DSAParameters_t1885824122_marshal_pinvoke_back, DSAParameters_t1885824122_marshal_pinvoke_cleanup, NULL, NULL, &DSAParameters_t1885824122_0_0_0 } /* System.Security.Cryptography.DSAParameters */,
	{ NULL, RSAParameters_t1728406613_marshal_pinvoke, RSAParameters_t1728406613_marshal_pinvoke_back, RSAParameters_t1728406613_marshal_pinvoke_cleanup, NULL, NULL, &RSAParameters_t1728406613_0_0_0 } /* System.Security.Cryptography.RSAParameters */,
	{ NULL, SecurityFrame_t1422462475_marshal_pinvoke, SecurityFrame_t1422462475_marshal_pinvoke_back, SecurityFrame_t1422462475_marshal_pinvoke_cleanup, NULL, NULL, &SecurityFrame_t1422462475_0_0_0 } /* System.Security.SecurityFrame */,
	{ DelegatePInvokeWrapper_ThreadStart_t1006689297, NULL, NULL, NULL, NULL, NULL, &ThreadStart_t1006689297_0_0_0 } /* System.Threading.ThreadStart */,
	{ NULL, ValueType_t3640485471_marshal_pinvoke, ValueType_t3640485471_marshal_pinvoke_back, ValueType_t3640485471_marshal_pinvoke_cleanup, NULL, NULL, &ValueType_t3640485471_0_0_0 } /* System.ValueType */,
	{ NULL, X509ChainStatus_t133602714_marshal_pinvoke, X509ChainStatus_t133602714_marshal_pinvoke_back, X509ChainStatus_t133602714_marshal_pinvoke_cleanup, NULL, NULL, &X509ChainStatus_t133602714_0_0_0 } /* System.Security.Cryptography.X509Certificates.X509ChainStatus */,
	{ NULL, IntStack_t2189327687_marshal_pinvoke, IntStack_t2189327687_marshal_pinvoke_back, IntStack_t2189327687_marshal_pinvoke_cleanup, NULL, NULL, &IntStack_t2189327687_0_0_0 } /* System.Text.RegularExpressions.Interpreter/IntStack */,
	{ NULL, Interval_t1802865632_marshal_pinvoke, Interval_t1802865632_marshal_pinvoke_back, Interval_t1802865632_marshal_pinvoke_cleanup, NULL, NULL, &Interval_t1802865632_0_0_0 } /* System.Text.RegularExpressions.Interval */,
	{ DelegatePInvokeWrapper_CostDelegate_t1722821004, NULL, NULL, NULL, NULL, NULL, &CostDelegate_t1722821004_0_0_0 } /* System.Text.RegularExpressions.IntervalCollection/CostDelegate */,
	{ NULL, UriScheme_t722425697_marshal_pinvoke, UriScheme_t722425697_marshal_pinvoke_back, UriScheme_t722425697_marshal_pinvoke_cleanup, NULL, NULL, &UriScheme_t722425697_0_0_0 } /* System.Uri/UriScheme */,
	{ DelegatePInvokeWrapper_Action_t1264377477, NULL, NULL, NULL, NULL, NULL, &Action_t1264377477_0_0_0 } /* System.Action */,
	{ NULL, AnimationCurve_t3046754366_marshal_pinvoke, AnimationCurve_t3046754366_marshal_pinvoke_back, AnimationCurve_t3046754366_marshal_pinvoke_cleanup, NULL, NULL, &AnimationCurve_t3046754366_0_0_0 } /* UnityEngine.AnimationCurve */,
	{ DelegatePInvokeWrapper_LogCallback_t3588208630, NULL, NULL, NULL, NULL, NULL, &LogCallback_t3588208630_0_0_0 } /* UnityEngine.Application/LogCallback */,
	{ DelegatePInvokeWrapper_LowMemoryCallback_t4104246196, NULL, NULL, NULL, NULL, NULL, &LowMemoryCallback_t4104246196_0_0_0 } /* UnityEngine.Application/LowMemoryCallback */,
	{ NULL, AsyncOperation_t1445031843_marshal_pinvoke, AsyncOperation_t1445031843_marshal_pinvoke_back, AsyncOperation_t1445031843_marshal_pinvoke_cleanup, NULL, NULL, &AsyncOperation_t1445031843_0_0_0 } /* UnityEngine.AsyncOperation */,
	{ NULL, OrderBlock_t1585977831_marshal_pinvoke, OrderBlock_t1585977831_marshal_pinvoke_back, OrderBlock_t1585977831_marshal_pinvoke_cleanup, NULL, NULL, &OrderBlock_t1585977831_0_0_0 } /* UnityEngine.BeforeRenderHelper/OrderBlock */,
	{ NULL, Coroutine_t3829159415_marshal_pinvoke, Coroutine_t3829159415_marshal_pinvoke_back, Coroutine_t3829159415_marshal_pinvoke_cleanup, NULL, NULL, &Coroutine_t3829159415_0_0_0 } /* UnityEngine.Coroutine */,
	{ NULL, CullingGroup_t2096318768_marshal_pinvoke, CullingGroup_t2096318768_marshal_pinvoke_back, CullingGroup_t2096318768_marshal_pinvoke_cleanup, NULL, NULL, &CullingGroup_t2096318768_0_0_0 } /* UnityEngine.CullingGroup */,
	{ DelegatePInvokeWrapper_StateChanged_t2136737110, NULL, NULL, NULL, NULL, NULL, &StateChanged_t2136737110_0_0_0 } /* UnityEngine.CullingGroup/StateChanged */,
	{ DelegatePInvokeWrapper_DisplaysUpdatedDelegate_t51287044, NULL, NULL, NULL, NULL, NULL, &DisplaysUpdatedDelegate_t51287044_0_0_0 } /* UnityEngine.Display/DisplaysUpdatedDelegate */,
	{ DelegatePInvokeWrapper_UnityAction_t3245792599, NULL, NULL, NULL, NULL, NULL, &UnityAction_t3245792599_0_0_0 } /* UnityEngine.Events.UnityAction */,
	{ NULL, PlayerLoopSystem_t105772105_marshal_pinvoke, PlayerLoopSystem_t105772105_marshal_pinvoke_back, PlayerLoopSystem_t105772105_marshal_pinvoke_cleanup, NULL, NULL, &PlayerLoopSystem_t105772105_0_0_0 } /* UnityEngine.Experimental.LowLevel.PlayerLoopSystem */,
	{ DelegatePInvokeWrapper_UpdateFunction_t377278577, NULL, NULL, NULL, NULL, NULL, &UpdateFunction_t377278577_0_0_0 } /* UnityEngine.Experimental.LowLevel.PlayerLoopSystem/UpdateFunction */,
	{ NULL, PlayerLoopSystemInternal_t2185485283_marshal_pinvoke, PlayerLoopSystemInternal_t2185485283_marshal_pinvoke_back, PlayerLoopSystemInternal_t2185485283_marshal_pinvoke_cleanup, NULL, NULL, &PlayerLoopSystemInternal_t2185485283_0_0_0 } /* UnityEngine.Experimental.LowLevel.PlayerLoopSystemInternal */,
	{ NULL, SpriteBone_t303320096_marshal_pinvoke, SpriteBone_t303320096_marshal_pinvoke_back, SpriteBone_t303320096_marshal_pinvoke_cleanup, NULL, NULL, &SpriteBone_t303320096_0_0_0 } /* UnityEngine.Experimental.U2D.SpriteBone */,
	{ NULL, FailedToLoadScriptObject_t547604379_marshal_pinvoke, FailedToLoadScriptObject_t547604379_marshal_pinvoke_back, FailedToLoadScriptObject_t547604379_marshal_pinvoke_cleanup, NULL, NULL, &FailedToLoadScriptObject_t547604379_0_0_0 } /* UnityEngine.FailedToLoadScriptObject */,
	{ NULL, Gradient_t3067099924_marshal_pinvoke, Gradient_t3067099924_marshal_pinvoke_back, Gradient_t3067099924_marshal_pinvoke_cleanup, NULL, NULL, &Gradient_t3067099924_0_0_0 } /* UnityEngine.Gradient */,
	{ NULL, MeshContainer_t2572561050_marshal_pinvoke, MeshContainer_t2572561050_marshal_pinvoke_back, MeshContainer_t2572561050_marshal_pinvoke_cleanup, NULL, NULL, &MeshContainer_t2572561050_0_0_0 } /* UnityEngine.MeshSubsetCombineUtility/MeshContainer */,
	{ NULL, Object_t631007953_marshal_pinvoke, Object_t631007953_marshal_pinvoke_back, Object_t631007953_marshal_pinvoke_cleanup, NULL, NULL, &Object_t631007953_0_0_0 } /* UnityEngine.Object */,
	{ NULL, PlayableBinding_t354260709_marshal_pinvoke, PlayableBinding_t354260709_marshal_pinvoke_back, PlayableBinding_t354260709_marshal_pinvoke_cleanup, NULL, NULL, &PlayableBinding_t354260709_0_0_0 } /* UnityEngine.Playables.PlayableBinding */,
	{ DelegatePInvokeWrapper_CreateOutputMethod_t2301811773, NULL, NULL, NULL, NULL, NULL, &CreateOutputMethod_t2301811773_0_0_0 } /* UnityEngine.Playables.PlayableBinding/CreateOutputMethod */,
	{ NULL, RectOffset_t1369453676_marshal_pinvoke, RectOffset_t1369453676_marshal_pinvoke_back, RectOffset_t1369453676_marshal_pinvoke_cleanup, NULL, NULL, &RectOffset_t1369453676_0_0_0 } /* UnityEngine.RectOffset */,
	{ NULL, ResourceRequest_t3109103591_marshal_pinvoke, ResourceRequest_t3109103591_marshal_pinvoke_back, ResourceRequest_t3109103591_marshal_pinvoke_cleanup, NULL, NULL, &ResourceRequest_t3109103591_0_0_0 } /* UnityEngine.ResourceRequest */,
	{ NULL, ScriptableObject_t2528358522_marshal_pinvoke, ScriptableObject_t2528358522_marshal_pinvoke_back, ScriptableObject_t2528358522_marshal_pinvoke_cleanup, NULL, NULL, &ScriptableObject_t2528358522_0_0_0 } /* UnityEngine.ScriptableObject */,
	{ NULL, HitInfo_t3229609740_marshal_pinvoke, HitInfo_t3229609740_marshal_pinvoke_back, HitInfo_t3229609740_marshal_pinvoke_cleanup, NULL, NULL, &HitInfo_t3229609740_0_0_0 } /* UnityEngine.SendMouseEvents/HitInfo */,
	{ NULL, TrackedReference_t1199777556_marshal_pinvoke, TrackedReference_t1199777556_marshal_pinvoke_back, TrackedReference_t1199777556_marshal_pinvoke_cleanup, NULL, NULL, &TrackedReference_t1199777556_0_0_0 } /* UnityEngine.TrackedReference */,
	{ DelegatePInvokeWrapper_RequestAtlasCallback_t3100554279, NULL, NULL, NULL, NULL, NULL, &RequestAtlasCallback_t3100554279_0_0_0 } /* UnityEngine.U2D.SpriteAtlasManager/RequestAtlasCallback */,
	{ NULL, WorkRequest_t1354518612_marshal_pinvoke, WorkRequest_t1354518612_marshal_pinvoke_back, WorkRequest_t1354518612_marshal_pinvoke_cleanup, NULL, NULL, &WorkRequest_t1354518612_0_0_0 } /* UnityEngine.UnitySynchronizationContext/WorkRequest */,
	{ NULL, WaitForSeconds_t1699091251_marshal_pinvoke, WaitForSeconds_t1699091251_marshal_pinvoke_back, WaitForSeconds_t1699091251_marshal_pinvoke_cleanup, NULL, NULL, &WaitForSeconds_t1699091251_0_0_0 } /* UnityEngine.WaitForSeconds */,
	{ NULL, YieldInstruction_t403091072_marshal_pinvoke, YieldInstruction_t403091072_marshal_pinvoke_back, YieldInstruction_t403091072_marshal_pinvoke_cleanup, NULL, NULL, &YieldInstruction_t403091072_0_0_0 } /* UnityEngine.YieldInstruction */,
	{ NULL, Collision2D_t2842956331_marshal_pinvoke, Collision2D_t2842956331_marshal_pinvoke_back, Collision2D_t2842956331_marshal_pinvoke_cleanup, NULL, NULL, &Collision2D_t2842956331_0_0_0 } /* UnityEngine.Collision2D */,
	{ NULL, ContactFilter2D_t3805203441_marshal_pinvoke, ContactFilter2D_t3805203441_marshal_pinvoke_back, ContactFilter2D_t3805203441_marshal_pinvoke_cleanup, NULL, NULL, &ContactFilter2D_t3805203441_0_0_0 } /* UnityEngine.ContactFilter2D */,
	{ DelegatePInvokeWrapper_FontTextureRebuildCallback_t2467502454, NULL, NULL, NULL, NULL, NULL, &FontTextureRebuildCallback_t2467502454_0_0_0 } /* UnityEngine.Font/FontTextureRebuildCallback */,
	{ NULL, TextGenerationSettings_t1351628751_marshal_pinvoke, TextGenerationSettings_t1351628751_marshal_pinvoke_back, TextGenerationSettings_t1351628751_marshal_pinvoke_cleanup, NULL, NULL, &TextGenerationSettings_t1351628751_0_0_0 } /* UnityEngine.TextGenerationSettings */,
	{ NULL, TextGenerator_t3211863866_marshal_pinvoke, TextGenerator_t3211863866_marshal_pinvoke_back, TextGenerator_t3211863866_marshal_pinvoke_cleanup, NULL, NULL, &TextGenerator_t3211863866_0_0_0 } /* UnityEngine.TextGenerator */,
	{ NULL, AnimationEvent_t1536042487_marshal_pinvoke, AnimationEvent_t1536042487_marshal_pinvoke_back, AnimationEvent_t1536042487_marshal_pinvoke_cleanup, NULL, NULL, &AnimationEvent_t1536042487_0_0_0 } /* UnityEngine.AnimationEvent */,
	{ DelegatePInvokeWrapper_OnOverrideControllerDirtyCallback_t1307045488, NULL, NULL, NULL, NULL, NULL, &OnOverrideControllerDirtyCallback_t1307045488_0_0_0 } /* UnityEngine.AnimatorOverrideController/OnOverrideControllerDirtyCallback */,
	{ NULL, AnimatorTransitionInfo_t2534804151_marshal_pinvoke, AnimatorTransitionInfo_t2534804151_marshal_pinvoke_back, AnimatorTransitionInfo_t2534804151_marshal_pinvoke_cleanup, NULL, NULL, &AnimatorTransitionInfo_t2534804151_0_0_0 } /* UnityEngine.AnimatorTransitionInfo */,
	{ NULL, HumanBone_t2465339518_marshal_pinvoke, HumanBone_t2465339518_marshal_pinvoke_back, HumanBone_t2465339518_marshal_pinvoke_cleanup, NULL, NULL, &HumanBone_t2465339518_0_0_0 } /* UnityEngine.HumanBone */,
	{ NULL, SkeletonBone_t4134054672_marshal_pinvoke, SkeletonBone_t4134054672_marshal_pinvoke_back, SkeletonBone_t4134054672_marshal_pinvoke_cleanup, NULL, NULL, &SkeletonBone_t4134054672_0_0_0 } /* UnityEngine.SkeletonBone */,
	{ DelegatePInvokeWrapper_PCMReaderCallback_t1677636661, NULL, NULL, NULL, NULL, NULL, &PCMReaderCallback_t1677636661_0_0_0 } /* UnityEngine.AudioClip/PCMReaderCallback */,
	{ DelegatePInvokeWrapper_PCMSetPositionCallback_t1059417452, NULL, NULL, NULL, NULL, NULL, &PCMSetPositionCallback_t1059417452_0_0_0 } /* UnityEngine.AudioClip/PCMSetPositionCallback */,
	{ DelegatePInvokeWrapper_AudioConfigurationChangeHandler_t2089929874, NULL, NULL, NULL, NULL, NULL, &AudioConfigurationChangeHandler_t2089929874_0_0_0 } /* UnityEngine.AudioSettings/AudioConfigurationChangeHandler */,
	{ DelegatePInvokeWrapper_ConsumeSampleFramesNativeFunction_t1497769677, NULL, NULL, NULL, NULL, NULL, &ConsumeSampleFramesNativeFunction_t1497769677_0_0_0 } /* UnityEngine.Experimental.Audio.AudioSampleProvider/ConsumeSampleFramesNativeFunction */,
	{ NULL, GcAchievementData_t675222246_marshal_pinvoke, GcAchievementData_t675222246_marshal_pinvoke_back, GcAchievementData_t675222246_marshal_pinvoke_cleanup, NULL, NULL, &GcAchievementData_t675222246_0_0_0 } /* UnityEngine.SocialPlatforms.GameCenter.GcAchievementData */,
	{ NULL, GcAchievementDescriptionData_t643925653_marshal_pinvoke, GcAchievementDescriptionData_t643925653_marshal_pinvoke_back, GcAchievementDescriptionData_t643925653_marshal_pinvoke_cleanup, NULL, NULL, &GcAchievementDescriptionData_t643925653_0_0_0 } /* UnityEngine.SocialPlatforms.GameCenter.GcAchievementDescriptionData */,
	{ NULL, GcLeaderboard_t4132273028_marshal_pinvoke, GcLeaderboard_t4132273028_marshal_pinvoke_back, GcLeaderboard_t4132273028_marshal_pinvoke_cleanup, NULL, NULL, &GcLeaderboard_t4132273028_0_0_0 } /* UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard */,
	{ NULL, GcScoreData_t2125309831_marshal_pinvoke, GcScoreData_t2125309831_marshal_pinvoke_back, GcScoreData_t2125309831_marshal_pinvoke_cleanup, NULL, NULL, &GcScoreData_t2125309831_0_0_0 } /* UnityEngine.SocialPlatforms.GameCenter.GcScoreData */,
	{ NULL, GcUserProfileData_t2719720026_marshal_pinvoke, GcUserProfileData_t2719720026_marshal_pinvoke_back, GcUserProfileData_t2719720026_marshal_pinvoke_cleanup, NULL, NULL, &GcUserProfileData_t2719720026_0_0_0 } /* UnityEngine.SocialPlatforms.GameCenter.GcUserProfileData */,
	{ NULL, Event_t2956885303_marshal_pinvoke, Event_t2956885303_marshal_pinvoke_back, Event_t2956885303_marshal_pinvoke_cleanup, NULL, NULL, &Event_t2956885303_0_0_0 } /* UnityEngine.Event */,
	{ DelegatePInvokeWrapper_WindowFunction_t3146511083, NULL, NULL, NULL, NULL, NULL, &WindowFunction_t3146511083_0_0_0 } /* UnityEngine.GUI/WindowFunction */,
	{ NULL, GUIContent_t3050628031_marshal_pinvoke, GUIContent_t3050628031_marshal_pinvoke_back, GUIContent_t3050628031_marshal_pinvoke_cleanup, NULL, NULL, &GUIContent_t3050628031_0_0_0 } /* UnityEngine.GUIContent */,
	{ DelegatePInvokeWrapper_SkinChangedDelegate_t1143955295, NULL, NULL, NULL, NULL, NULL, &SkinChangedDelegate_t1143955295_0_0_0 } /* UnityEngine.GUISkin/SkinChangedDelegate */,
	{ NULL, GUIStyle_t3956901511_marshal_pinvoke, GUIStyle_t3956901511_marshal_pinvoke_back, GUIStyle_t3956901511_marshal_pinvoke_cleanup, NULL, NULL, &GUIStyle_t3956901511_0_0_0 } /* UnityEngine.GUIStyle */,
	{ NULL, GUIStyleState_t1397964415_marshal_pinvoke, GUIStyleState_t1397964415_marshal_pinvoke_back, GUIStyleState_t1397964415_marshal_pinvoke_cleanup, NULL, NULL, &GUIStyleState_t1397964415_0_0_0 } /* UnityEngine.GUIStyleState */,
	{ NULL, Collision_t4262080450_marshal_pinvoke, Collision_t4262080450_marshal_pinvoke_back, Collision_t4262080450_marshal_pinvoke_cleanup, NULL, NULL, &Collision_t4262080450_0_0_0 } /* UnityEngine.Collision */,
	{ NULL, ControllerColliderHit_t240592346_marshal_pinvoke, ControllerColliderHit_t240592346_marshal_pinvoke_back, ControllerColliderHit_t240592346_marshal_pinvoke_cleanup, NULL, NULL, &ControllerColliderHit_t240592346_0_0_0 } /* UnityEngine.ControllerColliderHit */,
	{ NULL, TileAnimationData_t649120048_marshal_pinvoke, TileAnimationData_t649120048_marshal_pinvoke_back, TileAnimationData_t649120048_marshal_pinvoke_cleanup, NULL, NULL, &TileAnimationData_t649120048_0_0_0 } /* UnityEngine.Tilemaps.TileAnimationData */,
	{ NULL, TileData_t2042394239_marshal_pinvoke, TileData_t2042394239_marshal_pinvoke_back, TileData_t2042394239_marshal_pinvoke_cleanup, NULL, NULL, &TileData_t2042394239_0_0_0 } /* UnityEngine.Tilemaps.TileData */,
	{ DelegatePInvokeWrapper_WillRenderCanvases_t3309123499, NULL, NULL, NULL, NULL, NULL, &WillRenderCanvases_t3309123499_0_0_0 } /* UnityEngine.Canvas/WillRenderCanvases */,
	{ DelegatePInvokeWrapper_SessionStateChanged_t3163629820, NULL, NULL, NULL, NULL, NULL, &SessionStateChanged_t3163629820_0_0_0 } /* UnityEngine.Analytics.AnalyticsSessionInfo/SessionStateChanged */,
	{ NULL, RemoteConfigSettings_t1247263429_marshal_pinvoke, RemoteConfigSettings_t1247263429_marshal_pinvoke_back, RemoteConfigSettings_t1247263429_marshal_pinvoke_cleanup, NULL, NULL, &RemoteConfigSettings_t1247263429_0_0_0 } /* UnityEngine.RemoteConfigSettings */,
	{ DelegatePInvokeWrapper_UpdatedEventHandler_t1027848393, NULL, NULL, NULL, NULL, NULL, &UpdatedEventHandler_t1027848393_0_0_0 } /* UnityEngine.RemoteSettings/UpdatedEventHandler */,
	{ NULL, CertificateHandler_t2739891000_marshal_pinvoke, CertificateHandler_t2739891000_marshal_pinvoke_back, CertificateHandler_t2739891000_marshal_pinvoke_cleanup, NULL, NULL, &CertificateHandler_t2739891000_0_0_0 } /* UnityEngine.Networking.CertificateHandler */,
	{ DelegatePInvokeWrapper_SetCompressionCallback_t1872989618, NULL, NULL, NULL, NULL, NULL, &SetCompressionCallback_t1872989618_0_0_0 } /* Pathfinding.Ionic.Zip.SetCompressionCallback */,
	{ DelegatePInvokeWrapper_CompressFunc_t2219633776, NULL, NULL, NULL, NULL, NULL, &CompressFunc_t2219633776_0_0_0 } /* Pathfinding.Ionic.Zlib.DeflateManager/CompressFunc */,
	{ NULL, NULL, NULL, NULL, NULL, &CRC32_t288211679::CLSID, &CRC32_t288211679_0_0_0 } /* Pathfinding.Ionic.Crc.CRC32 */,
	{ NULL, NULL, NULL, NULL, NULL, &ZipEntry_t2157002808::CLSID, &ZipEntry_t2157002808_0_0_0 } /* Pathfinding.Ionic.Zip.ZipEntry */,
	{ NULL, NULL, NULL, NULL, NULL, &BadCrcException_t1019298900::CLSID, &BadCrcException_t1019298900_0_0_0 } /* Pathfinding.Ionic.Zip.BadCrcException */,
	{ NULL, NULL, NULL, NULL, NULL, &ZipException_t2997260086::CLSID, &ZipException_t2997260086_0_0_0 } /* Pathfinding.Ionic.Zip.ZipException */,
	{ NULL, NULL, NULL, NULL, NULL, &BadPasswordException_t2697529055::CLSID, &BadPasswordException_t2697529055_0_0_0 } /* Pathfinding.Ionic.Zip.BadPasswordException */,
	{ NULL, NULL, NULL, NULL, NULL, &BadReadException_t3174216175::CLSID, &BadReadException_t3174216175_0_0_0 } /* Pathfinding.Ionic.Zip.BadReadException */,
	{ NULL, NULL, NULL, NULL, NULL, &BadStateException_t491447969::CLSID, &BadStateException_t491447969_0_0_0 } /* Pathfinding.Ionic.Zip.BadStateException */,
	{ NULL, NULL, NULL, NULL, NULL, &ZipFile_t528027654::CLSID, &ZipFile_t528027654_0_0_0 } /* Pathfinding.Ionic.Zip.ZipFile */,
	{ NULL, NULL, NULL, NULL, NULL, &ZlibCodec_t855427629::CLSID, &ZlibCodec_t855427629_0_0_0 } /* Pathfinding.Ionic.Zlib.ZlibCodec */,
	{ NULL, NULL, NULL, NULL, NULL, &ZlibException_t3942143964::CLSID, &ZlibException_t3942143964_0_0_0 } /* Pathfinding.Ionic.Zlib.ZlibException */,
	{ NULL, GraphPoint_t1106670716_marshal_pinvoke, GraphPoint_t1106670716_marshal_pinvoke_back, GraphPoint_t1106670716_marshal_pinvoke_cleanup, NULL, NULL, &GraphPoint_t1106670716_0_0_0 } /* Pathfinding.AstarDebugger/GraphPoint */,
	{ NULL, PathTypeDebug_t2056685963_marshal_pinvoke, PathTypeDebug_t2056685963_marshal_pinvoke_back, PathTypeDebug_t2056685963_marshal_pinvoke_cleanup, NULL, NULL, &PathTypeDebug_t2056685963_0_0_0 } /* Pathfinding.AstarDebugger/PathTypeDebug */,
	{ NULL, AstarWorkItem_t2415792344_marshal_pinvoke, AstarWorkItem_t2415792344_marshal_pinvoke_back, AstarWorkItem_t2415792344_marshal_pinvoke_cleanup, NULL, NULL, &AstarWorkItem_t2415792344_0_0_0 } /* Pathfinding.AstarWorkItem */,
	{ NULL, Tuple_t1357928190_marshal_pinvoke, Tuple_t1357928190_marshal_pinvoke_back, Tuple_t1357928190_marshal_pinvoke_cleanup, NULL, NULL, &Tuple_t1357928190_0_0_0 } /* Pathfinding.BinaryHeap/Tuple */,
	{ NULL, Connection_t3160909863_marshal_pinvoke, Connection_t3160909863_marshal_pinvoke_back, Connection_t3160909863_marshal_pinvoke_cleanup, NULL, NULL, &Connection_t3160909863_0_0_0 } /* Pathfinding.Connection */,
	{ NULL, FunnelPortals_t3887794720_marshal_pinvoke, FunnelPortals_t3887794720_marshal_pinvoke_back, FunnelPortals_t3887794720_marshal_pinvoke_cleanup, NULL, NULL, &FunnelPortals_t3887794720_0_0_0 } /* Pathfinding.Funnel/FunnelPortals */,
	{ NULL, PathPart_t2608792076_marshal_pinvoke, PathPart_t2608792076_marshal_pinvoke_back, PathPart_t2608792076_marshal_pinvoke_cleanup, NULL, NULL, &PathPart_t2608792076_0_0_0 } /* Pathfinding.Funnel/PathPart */,
	{ NULL, GraphHitInfo_t3539843647_marshal_pinvoke, GraphHitInfo_t3539843647_marshal_pinvoke_back, GraphHitInfo_t3539843647_marshal_pinvoke_cleanup, NULL, NULL, &GraphHitInfo_t3539843647_0_0_0 } /* Pathfinding.GraphHitInfo */,
	{ NULL, GUOSingle_t2392894652_marshal_pinvoke, GUOSingle_t2392894652_marshal_pinvoke_back, GUOSingle_t2392894652_marshal_pinvoke_cleanup, NULL, NULL, &GUOSingle_t2392894652_0_0_0 } /* Pathfinding.GraphUpdateProcessor/GUOSingle */,
	{ NULL, NNInfo_t525091153_marshal_pinvoke, NNInfo_t525091153_marshal_pinvoke_back, NNInfo_t525091153_marshal_pinvoke_cleanup, NULL, NULL, &NNInfo_t525091153_0_0_0 } /* Pathfinding.NNInfo */,
	{ NULL, NNInfoInternal_t3267413932_marshal_pinvoke, NNInfoInternal_t3267413932_marshal_pinvoke_back, NNInfoInternal_t3267413932_marshal_pinvoke_cleanup, NULL, NULL, &NNInfoInternal_t3267413932_0_0_0 } /* Pathfinding.NNInfoInternal */,
	{ NULL, meshStruct_t2877600597_marshal_pinvoke, meshStruct_t2877600597_marshal_pinvoke_back, meshStruct_t2877600597_marshal_pinvoke_cleanup, NULL, NULL, &meshStruct_t2877600597_0_0_0 } /* Pathfinding.ObjImporter/meshStruct */,
	{ DelegatePInvokeWrapper_OnScanStatus_t2921404568, NULL, NULL, NULL, NULL, NULL, &OnScanStatus_t2921404568_0_0_0 } /* Pathfinding.OnScanStatus */,
	{ NULL, GraphUpdateLock_t2927222478_marshal_pinvoke, GraphUpdateLock_t2927222478_marshal_pinvoke_back, GraphUpdateLock_t2927222478_marshal_pinvoke_cleanup, NULL, NULL, &GraphUpdateLock_t2927222478_0_0_0 } /* Pathfinding.PathProcessor/GraphUpdateLock */,
	{ NULL, Node_t1422069613_marshal_pinvoke, Node_t1422069613_marshal_pinvoke_back, Node_t1422069613_marshal_pinvoke_cleanup, NULL, NULL, &Node_t1422069613_0_0_0 } /* Pathfinding.PointKDTree/Node */,
	{ NULL, Progress_t1976475681_marshal_pinvoke, Progress_t1976475681_marshal_pinvoke_back, Progress_t1976475681_marshal_pinvoke_cleanup, NULL, NULL, &Progress_t1976475681_0_0_0 } /* Pathfinding.Progress */,
	{ NULL, Node_t3886631461_marshal_pinvoke, Node_t3886631461_marshal_pinvoke_back, Node_t3886631461_marshal_pinvoke_cleanup, NULL, NULL, &Node_t3886631461_0_0_0 } /* Pathfinding.RVO.RVOQuadtree/Node */,
	{ NULL, QuadtreeQuery_t418943214_marshal_pinvoke, QuadtreeQuery_t418943214_marshal_pinvoke_back, QuadtreeQuery_t418943214_marshal_pinvoke_cleanup, NULL, NULL, &QuadtreeQuery_t418943214_0_0_0 } /* Pathfinding.RVO.RVOQuadtree/QuadtreeQuery */,
	{ NULL, VO_t1883459210_marshal_pinvoke, VO_t1883459210_marshal_pinvoke_back, VO_t1883459210_marshal_pinvoke_cleanup, NULL, NULL, &VO_t1883459210_0_0_0 } /* Pathfinding.RVO.Sampled.Agent/VO */,
	{ NULL, Hasher_t2616195318_marshal_pinvoke, Hasher_t2616195318_marshal_pinvoke_back, Hasher_t2616195318_marshal_pinvoke_cleanup, NULL, NULL, &Hasher_t2616195318_0_0_0 } /* Pathfinding.Util.RetainedGizmos/Hasher */,
	{ NULL, MeshWithHash_t3437734747_marshal_pinvoke, MeshWithHash_t3437734747_marshal_pinvoke_back, MeshWithHash_t3437734747_marshal_pinvoke_cleanup, NULL, NULL, &MeshWithHash_t3437734747_0_0_0 } /* Pathfinding.Util.RetainedGizmos/MeshWithHash */,
	{ NULL, RaycastResult_t3360306849_marshal_pinvoke, RaycastResult_t3360306849_marshal_pinvoke_back, RaycastResult_t3360306849_marshal_pinvoke_cleanup, NULL, NULL, &RaycastResult_t3360306849_0_0_0 } /* UnityEngine.EventSystems.RaycastResult */,
	{ NULL, ColorTween_t809614380_marshal_pinvoke, ColorTween_t809614380_marshal_pinvoke_back, ColorTween_t809614380_marshal_pinvoke_cleanup, NULL, NULL, &ColorTween_t809614380_0_0_0 } /* UnityEngine.UI.CoroutineTween.ColorTween */,
	{ NULL, FloatTween_t1274330004_marshal_pinvoke, FloatTween_t1274330004_marshal_pinvoke_back, FloatTween_t1274330004_marshal_pinvoke_cleanup, NULL, NULL, &FloatTween_t1274330004_0_0_0 } /* UnityEngine.UI.CoroutineTween.FloatTween */,
	{ NULL, Resources_t1597885468_marshal_pinvoke, Resources_t1597885468_marshal_pinvoke_back, Resources_t1597885468_marshal_pinvoke_cleanup, NULL, NULL, &Resources_t1597885468_0_0_0 } /* UnityEngine.UI.DefaultControls/Resources */,
	{ DelegatePInvokeWrapper_OnValidateInput_t2355412304, NULL, NULL, NULL, NULL, NULL, &OnValidateInput_t2355412304_0_0_0 } /* UnityEngine.UI.InputField/OnValidateInput */,
	{ NULL, Navigation_t3049316579_marshal_pinvoke, Navigation_t3049316579_marshal_pinvoke_back, Navigation_t3049316579_marshal_pinvoke_cleanup, NULL, NULL, &Navigation_t3049316579_0_0_0 } /* UnityEngine.UI.Navigation */,
	{ DelegatePInvokeWrapper_GetRayIntersectionAllCallback_t3913627115, NULL, NULL, NULL, NULL, NULL, &GetRayIntersectionAllCallback_t3913627115_0_0_0 } /* UnityEngine.UI.ReflectionMethodsCache/GetRayIntersectionAllCallback */,
	{ DelegatePInvokeWrapper_GetRayIntersectionAllNonAllocCallback_t2311174851, NULL, NULL, NULL, NULL, NULL, &GetRayIntersectionAllNonAllocCallback_t2311174851_0_0_0 } /* UnityEngine.UI.ReflectionMethodsCache/GetRayIntersectionAllNonAllocCallback */,
	{ DelegatePInvokeWrapper_GetRaycastNonAllocCallback_t3841783507, NULL, NULL, NULL, NULL, NULL, &GetRaycastNonAllocCallback_t3841783507_0_0_0 } /* UnityEngine.UI.ReflectionMethodsCache/GetRaycastNonAllocCallback */,
	{ DelegatePInvokeWrapper_Raycast2DCallback_t768590915, NULL, NULL, NULL, NULL, NULL, &Raycast2DCallback_t768590915_0_0_0 } /* UnityEngine.UI.ReflectionMethodsCache/Raycast2DCallback */,
	{ DelegatePInvokeWrapper_Raycast3DCallback_t701940803, NULL, NULL, NULL, NULL, NULL, &Raycast3DCallback_t701940803_0_0_0 } /* UnityEngine.UI.ReflectionMethodsCache/Raycast3DCallback */,
	{ DelegatePInvokeWrapper_RaycastAllCallback_t1884415901, NULL, NULL, NULL, NULL, NULL, &RaycastAllCallback_t1884415901_0_0_0 } /* UnityEngine.UI.ReflectionMethodsCache/RaycastAllCallback */,
	{ NULL, SpriteState_t1362986479_marshal_pinvoke, SpriteState_t1362986479_marshal_pinvoke_back, SpriteState_t1362986479_marshal_pinvoke_cleanup, NULL, NULL, &SpriteState_t1362986479_0_0_0 } /* UnityEngine.UI.SpriteState */,
	{ NULL, ColorTween_t378116136_marshal_pinvoke, ColorTween_t378116136_marshal_pinvoke_back, ColorTween_t378116136_marshal_pinvoke_cleanup, NULL, NULL, &ColorTween_t378116136_0_0_0 } /* TMPro.ColorTween */,
	{ NULL, FloatTween_t3783157226_marshal_pinvoke, FloatTween_t3783157226_marshal_pinvoke_back, FloatTween_t3783157226_marshal_pinvoke_cleanup, NULL, NULL, &FloatTween_t3783157226_0_0_0 } /* TMPro.FloatTween */,
	{ NULL, FontAssetCreationSettings_t359369028_marshal_pinvoke, FontAssetCreationSettings_t359369028_marshal_pinvoke_back, FontAssetCreationSettings_t359369028_marshal_pinvoke_cleanup, NULL, NULL, &FontAssetCreationSettings_t359369028_0_0_0 } /* TMPro.FontAssetCreationSettings */,
	{ NULL, MaterialReference_t1952344632_marshal_pinvoke, MaterialReference_t1952344632_marshal_pinvoke_back, MaterialReference_t1952344632_marshal_pinvoke_cleanup, NULL, NULL, &MaterialReference_t1952344632_0_0_0 } /* TMPro.MaterialReference */,
	{ NULL, SpriteData_t3048397587_marshal_pinvoke, SpriteData_t3048397587_marshal_pinvoke_back, SpriteData_t3048397587_marshal_pinvoke_cleanup, NULL, NULL, &SpriteData_t3048397587_0_0_0 } /* TMPro.SpriteAssetUtilities.TexturePacker/SpriteData */,
	{ NULL, TMP_CharacterInfo_t3185626797_marshal_pinvoke, TMP_CharacterInfo_t3185626797_marshal_pinvoke_back, TMP_CharacterInfo_t3185626797_marshal_pinvoke_cleanup, NULL, NULL, &TMP_CharacterInfo_t3185626797_0_0_0 } /* TMPro.TMP_CharacterInfo */,
	{ NULL, Resources_t2155109485_marshal_pinvoke, Resources_t2155109485_marshal_pinvoke_back, Resources_t2155109485_marshal_pinvoke_cleanup, NULL, NULL, &Resources_t2155109485_0_0_0 } /* TMPro.TMP_DefaultControls/Resources */,
	{ NULL, TMP_FontWeights_t916301067_marshal_pinvoke, TMP_FontWeights_t916301067_marshal_pinvoke_back, TMP_FontWeights_t916301067_marshal_pinvoke_cleanup, NULL, NULL, &TMP_FontWeights_t916301067_0_0_0 } /* TMPro.TMP_FontWeights */,
	{ DelegatePInvokeWrapper_OnValidateInput_t373909109, NULL, NULL, NULL, NULL, NULL, &OnValidateInput_t373909109_0_0_0 } /* TMPro.TMP_InputField/OnValidateInput */,
	{ NULL, TMP_LinkInfo_t1092083476_marshal_pinvoke, TMP_LinkInfo_t1092083476_marshal_pinvoke_back, TMP_LinkInfo_t1092083476_marshal_pinvoke_cleanup, NULL, NULL, &TMP_LinkInfo_t1092083476_0_0_0 } /* TMPro.TMP_LinkInfo */,
	{ NULL, TMP_MeshInfo_t2771747634_marshal_pinvoke, TMP_MeshInfo_t2771747634_marshal_pinvoke_back, TMP_MeshInfo_t2771747634_marshal_pinvoke_cleanup, NULL, NULL, &TMP_MeshInfo_t2771747634_0_0_0 } /* TMPro.TMP_MeshInfo */,
	{ NULL, TMP_WordInfo_t3331066303_marshal_pinvoke, TMP_WordInfo_t3331066303_marshal_pinvoke_back, TMP_WordInfo_t3331066303_marshal_pinvoke_cleanup, NULL, NULL, &TMP_WordInfo_t3331066303_0_0_0 } /* TMPro.TMP_WordInfo */,
	{ NULL, WordWrapState_t341939652_marshal_pinvoke, WordWrapState_t341939652_marshal_pinvoke_back, WordWrapState_t341939652_marshal_pinvoke_cleanup, NULL, NULL, &WordWrapState_t341939652_0_0_0 } /* TMPro.WordWrapState */,
	{ DelegatePInvokeWrapper_ApplyTween_t3327999347, NULL, NULL, NULL, NULL, NULL, &ApplyTween_t3327999347_0_0_0 } /* iTween/ApplyTween */,
	{ DelegatePInvokeWrapper_EasingFunction_t2767217938, NULL, NULL, NULL, NULL, NULL, &EasingFunction_t2767217938_0_0_0 } /* iTween/EasingFunction */,
	NULL,
};
