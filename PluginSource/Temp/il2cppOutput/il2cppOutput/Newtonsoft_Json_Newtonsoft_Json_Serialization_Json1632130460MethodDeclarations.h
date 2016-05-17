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

// Newtonsoft.Json.Serialization.JsonArrayContract
struct JsonArrayContract_t1632130460;
// System.Type
struct Type_t;
// Newtonsoft.Json.Serialization.ObjectConstructor`1<System.Object>
struct ObjectConstructor_1_t602487958;
// Newtonsoft.Json.Utilities.IWrappedCollection
struct IWrappedCollection_t2996753073;
// System.Object
struct Il2CppObject;
// System.Collections.IList
struct IList_t1612618265;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Type2779229935.h"
#include "mscorlib_System_Object837106420.h"

// System.Type Newtonsoft.Json.Serialization.JsonArrayContract::get_CollectionItemType()
extern "C"  Type_t * JsonArrayContract_get_CollectionItemType_m2403882894 (JsonArrayContract_t1632130460 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.JsonArrayContract::set_CollectionItemType(System.Type)
extern "C"  void JsonArrayContract_set_CollectionItemType_m490662429 (JsonArrayContract_t1632130460 * __this, Type_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Serialization.JsonArrayContract::get_IsMultidimensionalArray()
extern "C"  bool JsonArrayContract_get_IsMultidimensionalArray_m3151110182 (JsonArrayContract_t1632130460 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.JsonArrayContract::set_IsMultidimensionalArray(System.Boolean)
extern "C"  void JsonArrayContract_set_IsMultidimensionalArray_m310666687 (JsonArrayContract_t1632130460 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Serialization.JsonArrayContract::get_IsArray()
extern "C"  bool JsonArrayContract_get_IsArray_m3724686462 (JsonArrayContract_t1632130460 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.JsonArrayContract::set_IsArray(System.Boolean)
extern "C"  void JsonArrayContract_set_IsArray_m1498121239 (JsonArrayContract_t1632130460 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Serialization.JsonArrayContract::get_ShouldCreateWrapper()
extern "C"  bool JsonArrayContract_get_ShouldCreateWrapper_m4019512307 (JsonArrayContract_t1632130460 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.JsonArrayContract::set_ShouldCreateWrapper(System.Boolean)
extern "C"  void JsonArrayContract_set_ShouldCreateWrapper_m1856806860 (JsonArrayContract_t1632130460 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Serialization.JsonArrayContract::get_CanDeserialize()
extern "C"  bool JsonArrayContract_get_CanDeserialize_m1932922658 (JsonArrayContract_t1632130460 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.JsonArrayContract::set_CanDeserialize(System.Boolean)
extern "C"  void JsonArrayContract_set_CanDeserialize_m2985687095 (JsonArrayContract_t1632130460 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Serialization.ObjectConstructor`1<System.Object> Newtonsoft.Json.Serialization.JsonArrayContract::get_ParameterizedCreator()
extern "C"  ObjectConstructor_1_t602487958 * JsonArrayContract_get_ParameterizedCreator_m1464918496 (JsonArrayContract_t1632130460 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Serialization.ObjectConstructor`1<System.Object> Newtonsoft.Json.Serialization.JsonArrayContract::get_OverrideCreator()
extern "C"  ObjectConstructor_1_t602487958 * JsonArrayContract_get_OverrideCreator_m1494679509 (JsonArrayContract_t1632130460 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.JsonArrayContract::set_OverrideCreator(Newtonsoft.Json.Serialization.ObjectConstructor`1<System.Object>)
extern "C"  void JsonArrayContract_set_OverrideCreator_m711856686 (JsonArrayContract_t1632130460 * __this, ObjectConstructor_1_t602487958 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Serialization.JsonArrayContract::get_HasParameterizedCreator()
extern "C"  bool JsonArrayContract_get_HasParameterizedCreator_m3690314908 (JsonArrayContract_t1632130460 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.JsonArrayContract::set_HasParameterizedCreator(System.Boolean)
extern "C"  void JsonArrayContract_set_HasParameterizedCreator_m3645504437 (JsonArrayContract_t1632130460 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Serialization.JsonArrayContract::get_HasParameterizedCreatorInternal()
extern "C"  bool JsonArrayContract_get_HasParameterizedCreatorInternal_m3753433401 (JsonArrayContract_t1632130460 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.JsonArrayContract::.ctor(System.Type)
extern "C"  void JsonArrayContract__ctor_m1258349097 (JsonArrayContract_t1632130460 * __this, Type_t * ___underlyingType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Utilities.IWrappedCollection Newtonsoft.Json.Serialization.JsonArrayContract::CreateWrapper(System.Object)
extern "C"  Il2CppObject * JsonArrayContract_CreateWrapper_m2461593391 (JsonArrayContract_t1632130460 * __this, Il2CppObject * ___list, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IList Newtonsoft.Json.Serialization.JsonArrayContract::CreateTemporaryCollection()
extern "C"  Il2CppObject * JsonArrayContract_CreateTemporaryCollection_m3725786885 (JsonArrayContract_t1632130460 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
