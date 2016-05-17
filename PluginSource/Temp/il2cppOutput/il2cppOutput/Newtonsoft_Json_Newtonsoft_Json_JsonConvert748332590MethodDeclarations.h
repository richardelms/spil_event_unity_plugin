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

// Newtonsoft.Json.Serialization.Func`1<Newtonsoft.Json.JsonSerializerSettings>
struct Func_1_t2973440739;
// System.String
struct String_t;
// System.Object
struct Il2CppObject;
// System.Type
struct Type_t;
// Newtonsoft.Json.JsonSerializerSettings
struct JsonSerializerSettings_t622975392;
// Newtonsoft.Json.JsonSerializer
struct JsonSerializer_t4019458909;

#include "codegen/il2cpp-codegen.h"
#include "Newtonsoft_Json_Newtonsoft_Json_FloatFormatHandlin4083058171.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Decimal1688557254.h"
#include "Newtonsoft_Json_Newtonsoft_Json_StringEscapeHandli2810244538.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_Type2779229935.h"
#include "Newtonsoft_Json_Newtonsoft_Json_JsonSerializerSetti622975392.h"
#include "Newtonsoft_Json_Newtonsoft_Json_JsonSerializer4019458909.h"

// Newtonsoft.Json.Serialization.Func`1<Newtonsoft.Json.JsonSerializerSettings> Newtonsoft.Json.JsonConvert::get_DefaultSettings()
extern "C"  Func_1_t2973440739 * JsonConvert_get_DefaultSettings_m867629918 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Newtonsoft.Json.JsonConvert::ToString(System.Boolean)
extern "C"  String_t* JsonConvert_ToString_m833059226 (Il2CppObject * __this /* static, unused */, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Newtonsoft.Json.JsonConvert::ToString(System.Char)
extern "C"  String_t* JsonConvert_ToString_m4128171418 (Il2CppObject * __this /* static, unused */, uint16_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Newtonsoft.Json.JsonConvert::ToString(System.Single,Newtonsoft.Json.FloatFormatHandling,System.Char,System.Boolean)
extern "C"  String_t* JsonConvert_ToString_m2869870837 (Il2CppObject * __this /* static, unused */, float ___value, int32_t ___floatFormatHandling, uint16_t ___quoteChar, bool ___nullable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Newtonsoft.Json.JsonConvert::EnsureFloatFormat(System.Double,System.String,Newtonsoft.Json.FloatFormatHandling,System.Char,System.Boolean)
extern "C"  String_t* JsonConvert_EnsureFloatFormat_m2505010495 (Il2CppObject * __this /* static, unused */, double ___value, String_t* ___text, int32_t ___floatFormatHandling, uint16_t ___quoteChar, bool ___nullable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Newtonsoft.Json.JsonConvert::ToString(System.Double,Newtonsoft.Json.FloatFormatHandling,System.Char,System.Boolean)
extern "C"  String_t* JsonConvert_ToString_m4195151998 (Il2CppObject * __this /* static, unused */, double ___value, int32_t ___floatFormatHandling, uint16_t ___quoteChar, bool ___nullable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Newtonsoft.Json.JsonConvert::EnsureDecimalPlace(System.Double,System.String)
extern "C"  String_t* JsonConvert_EnsureDecimalPlace_m2448359443 (Il2CppObject * __this /* static, unused */, double ___value, String_t* ___text, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Newtonsoft.Json.JsonConvert::EnsureDecimalPlace(System.String)
extern "C"  String_t* JsonConvert_EnsureDecimalPlace_m1477636055 (Il2CppObject * __this /* static, unused */, String_t* ___text, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Newtonsoft.Json.JsonConvert::ToString(System.Decimal)
extern "C"  String_t* JsonConvert_ToString_m3687495569 (Il2CppObject * __this /* static, unused */, Decimal_t1688557254  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Newtonsoft.Json.JsonConvert::ToString(System.String)
extern "C"  String_t* JsonConvert_ToString_m297159295 (Il2CppObject * __this /* static, unused */, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Newtonsoft.Json.JsonConvert::ToString(System.String,System.Char)
extern "C"  String_t* JsonConvert_ToString_m3457127062 (Il2CppObject * __this /* static, unused */, String_t* ___value, uint16_t ___delimiter, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Newtonsoft.Json.JsonConvert::ToString(System.String,System.Char,Newtonsoft.Json.StringEscapeHandling)
extern "C"  String_t* JsonConvert_ToString_m637019812 (Il2CppObject * __this /* static, unused */, String_t* ___value, uint16_t ___delimiter, int32_t ___stringEscapeHandling, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Newtonsoft.Json.JsonConvert::SerializeObject(System.Object)
extern "C"  String_t* JsonConvert_SerializeObject_m683678730 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Newtonsoft.Json.JsonConvert::SerializeObject(System.Object,System.Type,Newtonsoft.Json.JsonSerializerSettings)
extern "C"  String_t* JsonConvert_SerializeObject_m3279387511 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___value, Type_t * ___type, JsonSerializerSettings_t622975392 * ___settings, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Newtonsoft.Json.JsonConvert::SerializeObjectInternal(System.Object,System.Type,Newtonsoft.Json.JsonSerializer)
extern "C"  String_t* JsonConvert_SerializeObjectInternal_m441509879 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___value, Type_t * ___type, JsonSerializer_t4019458909 * ___jsonSerializer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Newtonsoft.Json.JsonConvert::DeserializeObject(System.String,System.Type,Newtonsoft.Json.JsonSerializerSettings)
extern "C"  Il2CppObject * JsonConvert_DeserializeObject_m1360968954 (Il2CppObject * __this /* static, unused */, String_t* ___value, Type_t * ___type, JsonSerializerSettings_t622975392 * ___settings, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonConvert::.cctor()
extern "C"  void JsonConvert__cctor_m2189751715 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
