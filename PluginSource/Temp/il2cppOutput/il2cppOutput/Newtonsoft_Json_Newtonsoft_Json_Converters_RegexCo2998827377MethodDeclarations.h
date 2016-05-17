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

// Newtonsoft.Json.Converters.RegexConverter
struct RegexConverter_t2998827377;
// Newtonsoft.Json.JsonWriter
struct JsonWriter_t1972966974;
// System.Object
struct Il2CppObject;
// Newtonsoft.Json.JsonSerializer
struct JsonSerializer_t4019458909;
// Newtonsoft.Json.Bson.BsonWriter
struct BsonWriter_t3358942186;
// System.Text.RegularExpressions.Regex
struct Regex_t3802381858;
// Newtonsoft.Json.JsonReader
struct JsonReader_t1817561742;
// System.Type
struct Type_t;

#include "codegen/il2cpp-codegen.h"
#include "Newtonsoft_Json_Newtonsoft_Json_JsonWriter1972966974.h"
#include "mscorlib_System_Object837106420.h"
#include "Newtonsoft_Json_Newtonsoft_Json_JsonSerializer4019458909.h"
#include "System_System_Text_RegularExpressions_RegexOptions2783621746.h"
#include "Newtonsoft_Json_Newtonsoft_Json_Bson_BsonWriter3358942186.h"
#include "System_System_Text_RegularExpressions_Regex3802381858.h"
#include "Newtonsoft_Json_Newtonsoft_Json_JsonReader1817561742.h"
#include "mscorlib_System_Type2779229935.h"

// System.Void Newtonsoft.Json.Converters.RegexConverter::WriteJson(Newtonsoft.Json.JsonWriter,System.Object,Newtonsoft.Json.JsonSerializer)
extern "C"  void RegexConverter_WriteJson_m1078084819 (RegexConverter_t2998827377 * __this, JsonWriter_t1972966974 * ___writer, Il2CppObject * ___value, JsonSerializer_t4019458909 * ___serializer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Converters.RegexConverter::HasFlag(System.Text.RegularExpressions.RegexOptions,System.Text.RegularExpressions.RegexOptions)
extern "C"  bool RegexConverter_HasFlag_m1062704487 (RegexConverter_t2998827377 * __this, int32_t ___options, int32_t ___flag, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Converters.RegexConverter::WriteBson(Newtonsoft.Json.Bson.BsonWriter,System.Text.RegularExpressions.Regex)
extern "C"  void RegexConverter_WriteBson_m634332052 (RegexConverter_t2998827377 * __this, BsonWriter_t3358942186 * ___writer, Regex_t3802381858 * ___regex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Converters.RegexConverter::WriteJson(Newtonsoft.Json.JsonWriter,System.Text.RegularExpressions.Regex,Newtonsoft.Json.JsonSerializer)
extern "C"  void RegexConverter_WriteJson_m507315297 (RegexConverter_t2998827377 * __this, JsonWriter_t1972966974 * ___writer, Regex_t3802381858 * ___regex, JsonSerializer_t4019458909 * ___serializer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Newtonsoft.Json.Converters.RegexConverter::ReadJson(Newtonsoft.Json.JsonReader,System.Type,System.Object,Newtonsoft.Json.JsonSerializer)
extern "C"  Il2CppObject * RegexConverter_ReadJson_m1850735018 (RegexConverter_t2998827377 * __this, JsonReader_t1817561742 * ___reader, Type_t * ___objectType, Il2CppObject * ___existingValue, JsonSerializer_t4019458909 * ___serializer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Newtonsoft.Json.Converters.RegexConverter::ReadRegexString(Newtonsoft.Json.JsonReader)
extern "C"  Il2CppObject * RegexConverter_ReadRegexString_m2691403606 (RegexConverter_t2998827377 * __this, JsonReader_t1817561742 * ___reader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.Regex Newtonsoft.Json.Converters.RegexConverter::ReadRegexObject(Newtonsoft.Json.JsonReader,Newtonsoft.Json.JsonSerializer)
extern "C"  Regex_t3802381858 * RegexConverter_ReadRegexObject_m744971407 (RegexConverter_t2998827377 * __this, JsonReader_t1817561742 * ___reader, JsonSerializer_t4019458909 * ___serializer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Converters.RegexConverter::CanConvert(System.Type)
extern "C"  bool RegexConverter_CanConvert_m212129757 (RegexConverter_t2998827377 * __this, Type_t * ___objectType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Converters.RegexConverter::.ctor()
extern "C"  void RegexConverter__ctor_m510424033 (RegexConverter_t2998827377 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
