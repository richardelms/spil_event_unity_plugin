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

// Newtonsoft.Json.Serialization.TraceJsonReader
struct TraceJsonReader_t2672587273;
// Newtonsoft.Json.JsonReader
struct JsonReader_t1817561742;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t58506160;
// System.Object
struct Il2CppObject;
// System.Type
struct Type_t;

#include "codegen/il2cpp-codegen.h"
#include "Newtonsoft_Json_Newtonsoft_Json_JsonReader1817561742.h"
#include "mscorlib_System_Nullable_1_gen1438485399.h"
#include "mscorlib_System_Nullable_1_gen279627866.h"
#include "mscorlib_System_Nullable_1_gen3420554522.h"
#include "mscorlib_System_Nullable_1_gen3097043249.h"
#include "mscorlib_System_Nullable_1_gen3225071844.h"
#include "Newtonsoft_Json_Newtonsoft_Json_JsonToken326031476.h"

// System.Void Newtonsoft.Json.Serialization.TraceJsonReader::.ctor(Newtonsoft.Json.JsonReader)
extern "C"  void TraceJsonReader__ctor_m3214800355 (TraceJsonReader_t2672587273 * __this, JsonReader_t1817561742 * ___innerReader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Newtonsoft.Json.Serialization.TraceJsonReader::GetDeserializedJsonMessage()
extern "C"  String_t* TraceJsonReader_GetDeserializedJsonMessage_m315179362 (TraceJsonReader_t2672587273 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Serialization.TraceJsonReader::Read()
extern "C"  bool TraceJsonReader_Read_m2273608781 (TraceJsonReader_t2672587273 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Nullable`1<System.Int32> Newtonsoft.Json.Serialization.TraceJsonReader::ReadAsInt32()
extern "C"  Nullable_1_t1438485399  TraceJsonReader_ReadAsInt32_m2315292694 (TraceJsonReader_t2672587273 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Newtonsoft.Json.Serialization.TraceJsonReader::ReadAsString()
extern "C"  String_t* TraceJsonReader_ReadAsString_m2040784311 (TraceJsonReader_t2672587273 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Newtonsoft.Json.Serialization.TraceJsonReader::ReadAsBytes()
extern "C"  ByteU5BU5D_t58506160* TraceJsonReader_ReadAsBytes_m2666727790 (TraceJsonReader_t2672587273 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Nullable`1<System.Decimal> Newtonsoft.Json.Serialization.TraceJsonReader::ReadAsDecimal()
extern "C"  Nullable_1_t279627866  TraceJsonReader_ReadAsDecimal_m3969988636 (TraceJsonReader_t2672587273 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Nullable`1<System.Double> Newtonsoft.Json.Serialization.TraceJsonReader::ReadAsDouble()
extern "C"  Nullable_1_t3420554522  TraceJsonReader_ReadAsDouble_m3238025152 (TraceJsonReader_t2672587273 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Nullable`1<System.Boolean> Newtonsoft.Json.Serialization.TraceJsonReader::ReadAsBoolean()
extern "C"  Nullable_1_t3097043249  TraceJsonReader_ReadAsBoolean_m2807617546 (TraceJsonReader_t2672587273 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Nullable`1<System.DateTime> Newtonsoft.Json.Serialization.TraceJsonReader::ReadAsDateTime()
extern "C"  Nullable_1_t3225071844  TraceJsonReader_ReadAsDateTime_m949871616 (TraceJsonReader_t2672587273 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Newtonsoft.Json.Serialization.TraceJsonReader::get_Depth()
extern "C"  int32_t TraceJsonReader_get_Depth_m624414527 (TraceJsonReader_t2672587273 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Newtonsoft.Json.Serialization.TraceJsonReader::get_Path()
extern "C"  String_t* TraceJsonReader_get_Path_m3655977932 (TraceJsonReader_t2672587273 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.JsonToken Newtonsoft.Json.Serialization.TraceJsonReader::get_TokenType()
extern "C"  int32_t TraceJsonReader_get_TokenType_m4193801250 (TraceJsonReader_t2672587273 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Newtonsoft.Json.Serialization.TraceJsonReader::get_Value()
extern "C"  Il2CppObject * TraceJsonReader_get_Value_m3827862302 (TraceJsonReader_t2672587273 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type Newtonsoft.Json.Serialization.TraceJsonReader::get_ValueType()
extern "C"  Type_t * TraceJsonReader_get_ValueType_m3770626653 (TraceJsonReader_t2672587273 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.TraceJsonReader::Close()
extern "C"  void TraceJsonReader_Close_m722227865 (TraceJsonReader_t2672587273 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Serialization.TraceJsonReader::Newtonsoft.Json.IJsonLineInfo.HasLineInfo()
extern "C"  bool TraceJsonReader_Newtonsoft_Json_IJsonLineInfo_HasLineInfo_m2365963639 (TraceJsonReader_t2672587273 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Newtonsoft.Json.Serialization.TraceJsonReader::Newtonsoft.Json.IJsonLineInfo.get_LineNumber()
extern "C"  int32_t TraceJsonReader_Newtonsoft_Json_IJsonLineInfo_get_LineNumber_m4159592019 (TraceJsonReader_t2672587273 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Newtonsoft.Json.Serialization.TraceJsonReader::Newtonsoft.Json.IJsonLineInfo.get_LinePosition()
extern "C"  int32_t TraceJsonReader_Newtonsoft_Json_IJsonLineInfo_get_LinePosition_m527969779 (TraceJsonReader_t2672587273 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
