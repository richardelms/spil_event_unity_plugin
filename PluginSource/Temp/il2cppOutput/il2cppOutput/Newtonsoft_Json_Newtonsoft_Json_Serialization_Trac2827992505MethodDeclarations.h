#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// Newtonsoft.Json.Serialization.TraceJsonWriter
struct TraceJsonWriter_t2827992505;
// Newtonsoft.Json.JsonWriter
struct JsonWriter_t1972966974;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t58506160;
// System.Uri
struct Uri_t2776692961;

#include "codegen/il2cpp-codegen.h"
#include "Newtonsoft_Json_Newtonsoft_Json_JsonWriter1972966974.h"
#include "mscorlib_System_Decimal1688557254.h"
#include "mscorlib_System_Nullable_1_gen1369764433.h"
#include "mscorlib_System_DateTime339033936.h"
#include "mscorlib_System_Guid2778838590.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_TimeSpan763862892.h"
#include "System_System_Uri2776692961.h"

// System.Void Newtonsoft.Json.Serialization.TraceJsonWriter::.ctor(Newtonsoft.Json.JsonWriter)
extern "C"  void TraceJsonWriter__ctor_m1738258051 (TraceJsonWriter_t2827992505 * __this, JsonWriter_t1972966974 * ___innerWriter, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Newtonsoft.Json.Serialization.TraceJsonWriter::GetSerializedJsonMessage()
extern "C"  String_t* TraceJsonWriter_GetSerializedJsonMessage_m1005207667 (TraceJsonWriter_t2827992505 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.TraceJsonWriter::WriteValue(System.Decimal)
extern "C"  void TraceJsonWriter_WriteValue_m3115044241 (TraceJsonWriter_t2827992505 * __this, Decimal_t1688557254  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.TraceJsonWriter::WriteValue(System.Boolean)
extern "C"  void TraceJsonWriter_WriteValue_m260607898 (TraceJsonWriter_t2827992505 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.TraceJsonWriter::WriteValue(System.Byte)
extern "C"  void TraceJsonWriter_WriteValue_m3148838952 (TraceJsonWriter_t2827992505 * __this, uint8_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.TraceJsonWriter::WriteValue(System.Nullable`1<System.Byte>)
extern "C"  void TraceJsonWriter_WriteValue_m3893747873 (TraceJsonWriter_t2827992505 * __this, Nullable_1_t1369764433  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.TraceJsonWriter::WriteValue(System.Char)
extern "C"  void TraceJsonWriter_WriteValue_m3149238170 (TraceJsonWriter_t2827992505 * __this, uint16_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.TraceJsonWriter::WriteValue(System.Byte[])
extern "C"  void TraceJsonWriter_WriteValue_m2377307462 (TraceJsonWriter_t2827992505 * __this, ByteU5BU5D_t58506160* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.TraceJsonWriter::WriteValue(System.DateTime)
extern "C"  void TraceJsonWriter_WriteValue_m1466114165 (TraceJsonWriter_t2827992505 * __this, DateTime_t339033936  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.TraceJsonWriter::WriteValue(System.Double)
extern "C"  void TraceJsonWriter_WriteValue_m3866874047 (TraceJsonWriter_t2827992505 * __this, double ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.TraceJsonWriter::WriteUndefined()
extern "C"  void TraceJsonWriter_WriteUndefined_m3429848834 (TraceJsonWriter_t2827992505 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.TraceJsonWriter::WriteNull()
extern "C"  void TraceJsonWriter_WriteNull_m2118096247 (TraceJsonWriter_t2827992505 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.TraceJsonWriter::WriteValue(System.Single)
extern "C"  void TraceJsonWriter_WriteValue_m4116436776 (TraceJsonWriter_t2827992505 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.TraceJsonWriter::WriteValue(System.Guid)
extern "C"  void TraceJsonWriter_WriteValue_m3153326791 (TraceJsonWriter_t2827992505 * __this, Guid_t2778838590  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.TraceJsonWriter::WriteValue(System.Int32)
extern "C"  void TraceJsonWriter_WriteValue_m3314924596 (TraceJsonWriter_t2827992505 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.TraceJsonWriter::WriteValue(System.Int64)
extern "C"  void TraceJsonWriter_WriteValue_m3314927541 (TraceJsonWriter_t2827992505 * __this, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.TraceJsonWriter::WriteValue(System.SByte)
extern "C"  void TraceJsonWriter_WriteValue_m3560794183 (TraceJsonWriter_t2827992505 * __this, int8_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.TraceJsonWriter::WriteValue(System.Int16)
extern "C"  void TraceJsonWriter_WriteValue_m3314922798 (TraceJsonWriter_t2827992505 * __this, int16_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.TraceJsonWriter::WriteValue(System.String)
extern "C"  void TraceJsonWriter_WriteValue_m140145791 (TraceJsonWriter_t2827992505 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.TraceJsonWriter::WriteValue(System.TimeSpan)
extern "C"  void TraceJsonWriter_WriteValue_m1750909913 (TraceJsonWriter_t2827992505 * __this, TimeSpan_t763862892  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.TraceJsonWriter::WriteValue(System.UInt32)
extern "C"  void TraceJsonWriter_WriteValue_m680674935 (TraceJsonWriter_t2827992505 * __this, uint32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.TraceJsonWriter::WriteValue(System.UInt64)
extern "C"  void TraceJsonWriter_WriteValue_m680677880 (TraceJsonWriter_t2827992505 * __this, uint64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.TraceJsonWriter::WriteValue(System.Uri)
extern "C"  void TraceJsonWriter_WriteValue_m379229014 (TraceJsonWriter_t2827992505 * __this, Uri_t2776692961 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.TraceJsonWriter::WriteValue(System.UInt16)
extern "C"  void TraceJsonWriter_WriteValue_m680673137 (TraceJsonWriter_t2827992505 * __this, uint16_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.TraceJsonWriter::WriteComment(System.String)
extern "C"  void TraceJsonWriter_WriteComment_m4147576337 (TraceJsonWriter_t2827992505 * __this, String_t* ___text, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.TraceJsonWriter::WriteStartArray()
extern "C"  void TraceJsonWriter_WriteStartArray_m1274238919 (TraceJsonWriter_t2827992505 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.TraceJsonWriter::WriteEndArray()
extern "C"  void TraceJsonWriter_WriteEndArray_m1028249838 (TraceJsonWriter_t2827992505 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.TraceJsonWriter::WriteStartConstructor(System.String)
extern "C"  void TraceJsonWriter_WriteStartConstructor_m4208788634 (TraceJsonWriter_t2827992505 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.TraceJsonWriter::WriteEndConstructor()
extern "C"  void TraceJsonWriter_WriteEndConstructor_m4156304207 (TraceJsonWriter_t2827992505 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.TraceJsonWriter::WritePropertyName(System.String)
extern "C"  void TraceJsonWriter_WritePropertyName_m983034962 (TraceJsonWriter_t2827992505 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.TraceJsonWriter::WritePropertyName(System.String,System.Boolean)
extern "C"  void TraceJsonWriter_WritePropertyName_m688650475 (TraceJsonWriter_t2827992505 * __this, String_t* ___name, bool ___escape, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.TraceJsonWriter::WriteStartObject()
extern "C"  void TraceJsonWriter_WriteStartObject_m2230130547 (TraceJsonWriter_t2827992505 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.TraceJsonWriter::WriteEndObject()
extern "C"  void TraceJsonWriter_WriteEndObject_m3194403628 (TraceJsonWriter_t2827992505 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.TraceJsonWriter::WriteRawValue(System.String)
extern "C"  void TraceJsonWriter_WriteRawValue_m2676460937 (TraceJsonWriter_t2827992505 * __this, String_t* ___json, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.TraceJsonWriter::WriteRaw(System.String)
extern "C"  void TraceJsonWriter_WriteRaw_m1454504104 (TraceJsonWriter_t2827992505 * __this, String_t* ___json, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.TraceJsonWriter::Close()
extern "C"  void TraceJsonWriter_Close_m1405824233 (TraceJsonWriter_t2827992505 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
