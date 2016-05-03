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

// Newtonsoft.Json.Utilities.ReflectionObject
struct ReflectionObject_t321445473;
// System.Type
struct Type_t;
// Newtonsoft.Json.Converters.KeyValuePairConverter
struct KeyValuePairConverter_t1854349004;
// Newtonsoft.Json.JsonWriter
struct JsonWriter_t1972966974;
// System.Object
struct Il2CppObject;
// Newtonsoft.Json.JsonSerializer
struct JsonSerializer_t4019458909;
// Newtonsoft.Json.JsonReader
struct JsonReader_t1817561742;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Type2779229935.h"
#include "Newtonsoft_Json_Newtonsoft_Json_JsonWriter1972966974.h"
#include "mscorlib_System_Object837106420.h"
#include "Newtonsoft_Json_Newtonsoft_Json_JsonSerializer4019458909.h"
#include "Newtonsoft_Json_Newtonsoft_Json_JsonReader1817561742.h"

// Newtonsoft.Json.Utilities.ReflectionObject Newtonsoft.Json.Converters.KeyValuePairConverter::InitializeReflectionObject(System.Type)
extern "C"  ReflectionObject_t321445473 * KeyValuePairConverter_InitializeReflectionObject_m2783485027 (Il2CppObject * __this /* static, unused */, Type_t * ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Converters.KeyValuePairConverter::WriteJson(Newtonsoft.Json.JsonWriter,System.Object,Newtonsoft.Json.JsonSerializer)
extern "C"  void KeyValuePairConverter_WriteJson_m984578108 (KeyValuePairConverter_t1854349004 * __this, JsonWriter_t1972966974 * ___writer, Il2CppObject * ___value, JsonSerializer_t4019458909 * ___serializer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Newtonsoft.Json.Converters.KeyValuePairConverter::ReadJson(Newtonsoft.Json.JsonReader,System.Type,System.Object,Newtonsoft.Json.JsonSerializer)
extern "C"  Il2CppObject * KeyValuePairConverter_ReadJson_m1898287127 (KeyValuePairConverter_t1854349004 * __this, JsonReader_t1817561742 * ___reader, Type_t * ___objectType, Il2CppObject * ___existingValue, JsonSerializer_t4019458909 * ___serializer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Converters.KeyValuePairConverter::CanConvert(System.Type)
extern "C"  bool KeyValuePairConverter_CanConvert_m2299309312 (KeyValuePairConverter_t1854349004 * __this, Type_t * ___objectType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Converters.KeyValuePairConverter::.ctor()
extern "C"  void KeyValuePairConverter__ctor_m2086305816 (KeyValuePairConverter_t1854349004 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Converters.KeyValuePairConverter::.cctor()
extern "C"  void KeyValuePairConverter__cctor_m4063841941 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
