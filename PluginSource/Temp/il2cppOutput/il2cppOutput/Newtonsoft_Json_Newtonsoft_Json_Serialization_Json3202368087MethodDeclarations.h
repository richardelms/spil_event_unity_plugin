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

// Newtonsoft.Json.Serialization.JsonFormatterConverter
struct JsonFormatterConverter_t3202368087;
// Newtonsoft.Json.Serialization.JsonSerializerInternalReader
struct JsonSerializerInternalReader_t1638952051;
// Newtonsoft.Json.Serialization.JsonISerializableContract
struct JsonISerializableContract_t3363619915;
// Newtonsoft.Json.Serialization.JsonProperty
struct JsonProperty_t1841444406;
// System.Object
struct Il2CppObject;
// System.Type
struct Type_t;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "Newtonsoft_Json_Newtonsoft_Json_Serialization_Json1638952051.h"
#include "Newtonsoft_Json_Newtonsoft_Json_Serialization_Json3363619915.h"
#include "Newtonsoft_Json_Newtonsoft_Json_Serialization_Json1841444406.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_Type2779229935.h"

// System.Void Newtonsoft.Json.Serialization.JsonFormatterConverter::.ctor(Newtonsoft.Json.Serialization.JsonSerializerInternalReader,Newtonsoft.Json.Serialization.JsonISerializableContract,Newtonsoft.Json.Serialization.JsonProperty)
extern "C"  void JsonFormatterConverter__ctor_m2570339265 (JsonFormatterConverter_t3202368087 * __this, JsonSerializerInternalReader_t1638952051 * ___reader, JsonISerializableContract_t3363619915 * ___contract, JsonProperty_t1841444406 * ___member, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Newtonsoft.Json.Serialization.JsonFormatterConverter::Convert(System.Object,System.Type)
extern "C"  Il2CppObject * JsonFormatterConverter_Convert_m2378891542 (JsonFormatterConverter_t3202368087 * __this, Il2CppObject * ___value, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Serialization.JsonFormatterConverter::ToBoolean(System.Object)
extern "C"  bool JsonFormatterConverter_ToBoolean_m2304963614 (JsonFormatterConverter_t3202368087 * __this, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 Newtonsoft.Json.Serialization.JsonFormatterConverter::ToInt16(System.Object)
extern "C"  int16_t JsonFormatterConverter_ToInt16_m1143632454 (JsonFormatterConverter_t3202368087 * __this, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Newtonsoft.Json.Serialization.JsonFormatterConverter::ToInt32(System.Object)
extern "C"  int32_t JsonFormatterConverter_ToInt32_m159593682 (JsonFormatterConverter_t3202368087 * __this, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Newtonsoft.Json.Serialization.JsonFormatterConverter::ToInt64(System.Object)
extern "C"  int64_t JsonFormatterConverter_ToInt64_m102880404 (JsonFormatterConverter_t3202368087 * __this, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Newtonsoft.Json.Serialization.JsonFormatterConverter::ToString(System.Object)
extern "C"  String_t* JsonFormatterConverter_ToString_m719546806 (JsonFormatterConverter_t3202368087 * __this, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Newtonsoft.Json.Serialization.JsonFormatterConverter::ToUInt32(System.Object)
extern "C"  uint32_t JsonFormatterConverter_ToUInt32_m54217398 (JsonFormatterConverter_t3202368087 * __this, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
