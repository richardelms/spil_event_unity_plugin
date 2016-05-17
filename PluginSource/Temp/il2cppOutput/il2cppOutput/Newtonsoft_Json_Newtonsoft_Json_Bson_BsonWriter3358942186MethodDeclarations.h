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

// Newtonsoft.Json.Bson.BsonWriter
struct BsonWriter_t3358942186;
// System.String
struct String_t;
// Newtonsoft.Json.Bson.BsonToken
struct BsonToken_t1714632464;
// System.Object
struct Il2CppObject;
// System.Byte[]
struct ByteU5BU5D_t58506160;
// System.Uri
struct Uri_t2776692961;

#include "codegen/il2cpp-codegen.h"
#include "Newtonsoft_Json_Newtonsoft_Json_JsonToken326031476.h"
#include "mscorlib_System_String968488902.h"
#include "Newtonsoft_Json_Newtonsoft_Json_Bson_BsonToken1714632464.h"
#include "mscorlib_System_Object837106420.h"
#include "Newtonsoft_Json_Newtonsoft_Json_Bson_BsonType556079793.h"
#include "mscorlib_System_Decimal1688557254.h"
#include "mscorlib_System_DateTime339033936.h"
#include "mscorlib_System_Guid2778838590.h"
#include "mscorlib_System_TimeSpan763862892.h"
#include "System_System_Uri2776692961.h"

// System.Void Newtonsoft.Json.Bson.BsonWriter::WriteEnd(Newtonsoft.Json.JsonToken)
extern "C"  void BsonWriter_WriteEnd_m4156048842 (BsonWriter_t3358942186 * __this, int32_t ___token, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Bson.BsonWriter::WriteComment(System.String)
extern "C"  void BsonWriter_WriteComment_m1537429778 (BsonWriter_t3358942186 * __this, String_t* ___text, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Bson.BsonWriter::WriteStartConstructor(System.String)
extern "C"  void BsonWriter_WriteStartConstructor_m2481423033 (BsonWriter_t3358942186 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Bson.BsonWriter::WriteRaw(System.String)
extern "C"  void BsonWriter_WriteRaw_m511308841 (BsonWriter_t3358942186 * __this, String_t* ___json, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Bson.BsonWriter::WriteRawValue(System.String)
extern "C"  void BsonWriter_WriteRawValue_m3366296232 (BsonWriter_t3358942186 * __this, String_t* ___json, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Bson.BsonWriter::WriteStartArray()
extern "C"  void BsonWriter_WriteStartArray_m440027144 (BsonWriter_t3358942186 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Bson.BsonWriter::WriteStartObject()
extern "C"  void BsonWriter_WriteStartObject_m2139369298 (BsonWriter_t3358942186 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Bson.BsonWriter::WritePropertyName(System.String)
extern "C"  void BsonWriter_WritePropertyName_m1570525681 (BsonWriter_t3358942186 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Bson.BsonWriter::Close()
extern "C"  void BsonWriter_Close_m1775520362 (BsonWriter_t3358942186 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Bson.BsonWriter::AddParent(Newtonsoft.Json.Bson.BsonToken)
extern "C"  void BsonWriter_AddParent_m1084210365 (BsonWriter_t3358942186 * __this, BsonToken_t1714632464 * ___container, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Bson.BsonWriter::RemoveParent()
extern "C"  void BsonWriter_RemoveParent_m1096371518 (BsonWriter_t3358942186 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Bson.BsonWriter::AddValue(System.Object,Newtonsoft.Json.Bson.BsonType)
extern "C"  void BsonWriter_AddValue_m2611549805 (BsonWriter_t3358942186 * __this, Il2CppObject * ___value, int8_t ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Bson.BsonWriter::AddToken(Newtonsoft.Json.Bson.BsonToken)
extern "C"  void BsonWriter_AddToken_m369191272 (BsonWriter_t3358942186 * __this, BsonToken_t1714632464 * ___token, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Bson.BsonWriter::WriteNull()
extern "C"  void BsonWriter_WriteNull_m126618232 (BsonWriter_t3358942186 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Bson.BsonWriter::WriteUndefined()
extern "C"  void BsonWriter_WriteUndefined_m3680033441 (BsonWriter_t3358942186 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Bson.BsonWriter::WriteValue(System.String)
extern "C"  void BsonWriter_WriteValue_m4262564800 (BsonWriter_t3358942186 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Bson.BsonWriter::WriteValue(System.Int32)
extern "C"  void BsonWriter_WriteValue_m4140642515 (BsonWriter_t3358942186 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Bson.BsonWriter::WriteValue(System.UInt32)
extern "C"  void BsonWriter_WriteValue_m508126648 (BsonWriter_t3358942186 * __this, uint32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Bson.BsonWriter::WriteValue(System.Int64)
extern "C"  void BsonWriter_WriteValue_m4140645460 (BsonWriter_t3358942186 * __this, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Bson.BsonWriter::WriteValue(System.UInt64)
extern "C"  void BsonWriter_WriteValue_m508129593 (BsonWriter_t3358942186 * __this, uint64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Bson.BsonWriter::WriteValue(System.Single)
extern "C"  void BsonWriter_WriteValue_m3943888489 (BsonWriter_t3358942186 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Bson.BsonWriter::WriteValue(System.Double)
extern "C"  void BsonWriter_WriteValue_m3694325760 (BsonWriter_t3358942186 * __this, double ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Bson.BsonWriter::WriteValue(System.Boolean)
extern "C"  void BsonWriter_WriteValue_m3501545593 (BsonWriter_t3358942186 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Bson.BsonWriter::WriteValue(System.Int16)
extern "C"  void BsonWriter_WriteValue_m4140640717 (BsonWriter_t3358942186 * __this, int16_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Bson.BsonWriter::WriteValue(System.UInt16)
extern "C"  void BsonWriter_WriteValue_m508124850 (BsonWriter_t3358942186 * __this, uint16_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Bson.BsonWriter::WriteValue(System.Char)
extern "C"  void BsonWriter_WriteValue_m2206042907 (BsonWriter_t3358942186 * __this, uint16_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Bson.BsonWriter::WriteValue(System.Byte)
extern "C"  void BsonWriter_WriteValue_m2205643689 (BsonWriter_t3358942186 * __this, uint8_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Bson.BsonWriter::WriteValue(System.SByte)
extern "C"  void BsonWriter_WriteValue_m91544806 (BsonWriter_t3358942186 * __this, int8_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Bson.BsonWriter::WriteValue(System.Decimal)
extern "C"  void BsonWriter_WriteValue_m2061014640 (BsonWriter_t3358942186 * __this, Decimal_t1688557254  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Bson.BsonWriter::WriteValue(System.DateTime)
extern "C"  void BsonWriter_WriteValue_m3150934902 (BsonWriter_t3358942186 * __this, DateTime_t339033936  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Bson.BsonWriter::WriteValue(System.Byte[])
extern "C"  void BsonWriter_WriteValue_m2204759175 (BsonWriter_t3358942186 * __this, ByteU5BU5D_t58506160* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Bson.BsonWriter::WriteValue(System.Guid)
extern "C"  void BsonWriter_WriteValue_m2210131528 (BsonWriter_t3358942186 * __this, Guid_t2778838590  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Bson.BsonWriter::WriteValue(System.TimeSpan)
extern "C"  void BsonWriter_WriteValue_m3435730650 (BsonWriter_t3358942186 * __this, TimeSpan_t763862892  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Bson.BsonWriter::WriteValue(System.Uri)
extern "C"  void BsonWriter_WriteValue_m1041540021 (BsonWriter_t3358942186 * __this, Uri_t2776692961 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Bson.BsonWriter::WriteObjectId(System.Byte[])
extern "C"  void BsonWriter_WriteObjectId_m3854946494 (BsonWriter_t3358942186 * __this, ByteU5BU5D_t58506160* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Bson.BsonWriter::WriteRegex(System.String,System.String)
extern "C"  void BsonWriter_WriteRegex_m395314406 (BsonWriter_t3358942186 * __this, String_t* ___pattern, String_t* ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
