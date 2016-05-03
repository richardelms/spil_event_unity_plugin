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

// Newtonsoft.Json.Linq.JTokenWriter
struct JTokenWriter_t1418523161;
// Newtonsoft.Json.Linq.JToken
struct JToken_t2367600838;
// Newtonsoft.Json.Linq.JContainer
struct JContainer_t103968846;
// System.String
struct String_t;
// System.Object
struct Il2CppObject;
// Newtonsoft.Json.Linq.JValue
struct JValue_t2369032254;
// System.Byte[]
struct ByteU5BU5D_t58506160;
// System.Uri
struct Uri_t2776692961;

#include "codegen/il2cpp-codegen.h"
#include "Newtonsoft_Json_Newtonsoft_Json_Linq_JContainer103968846.h"
#include "mscorlib_System_String968488902.h"
#include "Newtonsoft_Json_Newtonsoft_Json_JsonToken326031476.h"
#include "mscorlib_System_Object837106420.h"
#include "Newtonsoft_Json_Newtonsoft_Json_Linq_JValue2369032254.h"
#include "mscorlib_System_Decimal1688557254.h"
#include "mscorlib_System_DateTime339033936.h"
#include "mscorlib_System_TimeSpan763862892.h"
#include "mscorlib_System_Guid2778838590.h"
#include "System_System_Uri2776692961.h"

// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JTokenWriter::get_Token()
extern "C"  JToken_t2367600838 * JTokenWriter_get_Token_m2130197310 (JTokenWriter_t1418523161 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JTokenWriter::.ctor()
extern "C"  void JTokenWriter__ctor_m472197829 (JTokenWriter_t1418523161 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JTokenWriter::Close()
extern "C"  void JTokenWriter_Close_m2183057371 (JTokenWriter_t1418523161 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JTokenWriter::WriteStartObject()
extern "C"  void JTokenWriter_WriteStartObject_m3847129409 (JTokenWriter_t1418523161 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JTokenWriter::AddParent(Newtonsoft.Json.Linq.JContainer)
extern "C"  void JTokenWriter_AddParent_m3287721236 (JTokenWriter_t1418523161 * __this, JContainer_t103968846 * ___container, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JTokenWriter::RemoveParent()
extern "C"  void JTokenWriter_RemoveParent_m4169397933 (JTokenWriter_t1418523161 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JTokenWriter::WriteStartArray()
extern "C"  void JTokenWriter_WriteStartArray_m1742042169 (JTokenWriter_t1418523161 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JTokenWriter::WriteStartConstructor(System.String)
extern "C"  void JTokenWriter_WriteStartConstructor_m423550696 (JTokenWriter_t1418523161 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JTokenWriter::WriteEnd(Newtonsoft.Json.JsonToken)
extern "C"  void JTokenWriter_WriteEnd_m3674023867 (JTokenWriter_t1418523161 * __this, int32_t ___token, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JTokenWriter::WritePropertyName(System.String)
extern "C"  void JTokenWriter_WritePropertyName_m95362464 (JTokenWriter_t1418523161 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JTokenWriter::AddValue(System.Object,Newtonsoft.Json.JsonToken)
extern "C"  void JTokenWriter_AddValue_m696434549 (JTokenWriter_t1418523161 * __this, Il2CppObject * ___value, int32_t ___token, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JTokenWriter::AddValue(Newtonsoft.Json.Linq.JValue,Newtonsoft.Json.JsonToken)
extern "C"  void JTokenWriter_AddValue_m1407717459 (JTokenWriter_t1418523161 * __this, JValue_t2369032254 * ___value, int32_t ___token, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JTokenWriter::WriteNull()
extern "C"  void JTokenWriter_WriteNull_m1128558441 (JTokenWriter_t1418523161 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JTokenWriter::WriteUndefined()
extern "C"  void JTokenWriter_WriteUndefined_m1920918608 (JTokenWriter_t1418523161 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JTokenWriter::WriteRaw(System.String)
extern "C"  void JTokenWriter_WriteRaw_m1041594266 (JTokenWriter_t1418523161 * __this, String_t* ___json, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JTokenWriter::WriteComment(System.String)
extern "C"  void JTokenWriter_WriteComment_m1912452099 (JTokenWriter_t1418523161 * __this, String_t* ___text, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JTokenWriter::WriteValue(System.String)
extern "C"  void JTokenWriter_WriteValue_m2765750001 (JTokenWriter_t1418523161 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JTokenWriter::WriteValue(System.Int32)
extern "C"  void JTokenWriter_WriteValue_m3399621506 (JTokenWriter_t1418523161 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JTokenWriter::WriteValue(System.UInt32)
extern "C"  void JTokenWriter_WriteValue_m3306279145 (JTokenWriter_t1418523161 * __this, uint32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JTokenWriter::WriteValue(System.Int64)
extern "C"  void JTokenWriter_WriteValue_m3399624451 (JTokenWriter_t1418523161 * __this, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JTokenWriter::WriteValue(System.UInt64)
extern "C"  void JTokenWriter_WriteValue_m3306282090 (JTokenWriter_t1418523161 * __this, uint64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JTokenWriter::WriteValue(System.Single)
extern "C"  void JTokenWriter_WriteValue_m2447073690 (JTokenWriter_t1418523161 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JTokenWriter::WriteValue(System.Double)
extern "C"  void JTokenWriter_WriteValue_m2197510961 (JTokenWriter_t1418523161 * __this, double ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JTokenWriter::WriteValue(System.Boolean)
extern "C"  void JTokenWriter_WriteValue_m49959784 (JTokenWriter_t1418523161 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JTokenWriter::WriteValue(System.Int16)
extern "C"  void JTokenWriter_WriteValue_m3399619708 (JTokenWriter_t1418523161 * __this, int16_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JTokenWriter::WriteValue(System.UInt16)
extern "C"  void JTokenWriter_WriteValue_m3306277347 (JTokenWriter_t1418523161 * __this, uint16_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JTokenWriter::WriteValue(System.Char)
extern "C"  void JTokenWriter_WriteValue_m2736328332 (JTokenWriter_t1418523161 * __this, uint16_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JTokenWriter::WriteValue(System.Byte)
extern "C"  void JTokenWriter_WriteValue_m2735929114 (JTokenWriter_t1418523161 * __this, uint8_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JTokenWriter::WriteValue(System.SByte)
extern "C"  void JTokenWriter_WriteValue_m3645491093 (JTokenWriter_t1418523161 * __this, int8_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JTokenWriter::WriteValue(System.Decimal)
extern "C"  void JTokenWriter_WriteValue_m2904396127 (JTokenWriter_t1418523161 * __this, Decimal_t1688557254  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JTokenWriter::WriteValue(System.DateTime)
extern "C"  void JTokenWriter_WriteValue_m3525957223 (JTokenWriter_t1418523161 * __this, DateTime_t339033936  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JTokenWriter::WriteValue(System.Byte[])
extern "C"  void JTokenWriter_WriteValue_m707944376 (JTokenWriter_t1418523161 * __this, ByteU5BU5D_t58506160* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JTokenWriter::WriteValue(System.TimeSpan)
extern "C"  void JTokenWriter_WriteValue_m3810752971 (JTokenWriter_t1418523161 * __this, TimeSpan_t763862892  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JTokenWriter::WriteValue(System.Guid)
extern "C"  void JTokenWriter_WriteValue_m2740416953 (JTokenWriter_t1418523161 * __this, Guid_t2778838590  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JTokenWriter::WriteValue(System.Uri)
extern "C"  void JTokenWriter_WriteValue_m2721213988 (JTokenWriter_t1418523161 * __this, Uri_t2776692961 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
