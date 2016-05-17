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

// System.Type
struct Type_t;
// Newtonsoft.Json.JsonConverter
struct JsonConverter_t757201947;
// System.Object
struct Il2CppObject;
// System.Object[]
struct ObjectU5BU5D_t11523773;
// Newtonsoft.Json.Serialization.Func`2<System.Object[],Newtonsoft.Json.JsonConverter>
struct Func_2_t1311162174;
// System.ComponentModel.TypeConverter
struct TypeConverter_t3398830607;
// Newtonsoft.Json.Utilities.ReflectionDelegateFactory
struct ReflectionDelegateFactory_t267368177;

#include "codegen/il2cpp-codegen.h"
#include "Newtonsoft_Json_Newtonsoft_Json_MemberSerializatio1745874425.h"
#include "mscorlib_System_Type2779229935.h"
#include "mscorlib_System_Object837106420.h"

// Newtonsoft.Json.MemberSerialization Newtonsoft.Json.Serialization.JsonTypeReflector::GetObjectMemberSerialization(System.Type,System.Boolean)
extern "C"  int32_t JsonTypeReflector_GetObjectMemberSerialization_m2119310754 (Il2CppObject * __this /* static, unused */, Type_t * ___objectType, bool ___ignoreSerializableAttribute, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.JsonConverter Newtonsoft.Json.Serialization.JsonTypeReflector::GetJsonConverter(System.Object)
extern "C"  JsonConverter_t757201947 * JsonTypeReflector_GetJsonConverter_m1420401907 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___attributeProvider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.JsonConverter Newtonsoft.Json.Serialization.JsonTypeReflector::CreateJsonConverterInstance(System.Type,System.Object[])
extern "C"  JsonConverter_t757201947 * JsonTypeReflector_CreateJsonConverterInstance_m2300933777 (Il2CppObject * __this /* static, unused */, Type_t * ___converterType, ObjectU5BU5D_t11523773* ___converterArgs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Serialization.Func`2<System.Object[],Newtonsoft.Json.JsonConverter> Newtonsoft.Json.Serialization.JsonTypeReflector::GetJsonConverterCreator(System.Type)
extern "C"  Func_2_t1311162174 * JsonTypeReflector_GetJsonConverterCreator_m2125869731 (Il2CppObject * __this /* static, unused */, Type_t * ___converterType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.TypeConverter Newtonsoft.Json.Serialization.JsonTypeReflector::GetTypeConverter(System.Type)
extern "C"  TypeConverter_t3398830607 * JsonTypeReflector_GetTypeConverter_m3128606986 (Il2CppObject * __this /* static, unused */, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Serialization.JsonTypeReflector::get_DynamicCodeGeneration()
extern "C"  bool JsonTypeReflector_get_DynamicCodeGeneration_m3126060440 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Serialization.JsonTypeReflector::get_FullyTrusted()
extern "C"  bool JsonTypeReflector_get_FullyTrusted_m2931227035 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Utilities.ReflectionDelegateFactory Newtonsoft.Json.Serialization.JsonTypeReflector::get_ReflectionDelegateFactory()
extern "C"  ReflectionDelegateFactory_t267368177 * JsonTypeReflector_get_ReflectionDelegateFactory_m2738771862 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.JsonTypeReflector::.cctor()
extern "C"  void JsonTypeReflector__cctor_m1929419096 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
