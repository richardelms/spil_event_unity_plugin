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
// System.Reflection.ConstructorInfo
struct ConstructorInfo_t3542137334;
// System.Collections.IEnumerable
struct IEnumerable_t287189635;
// System.Object
struct Il2CppObject;
// System.Collections.IEqualityComparer
struct IEqualityComparer_t1661793090;
// System.Collections.Generic.IList`1<System.Int32>
struct IList_1_t718939805;
// System.Collections.IList
struct IList_t1612618265;
// System.Array
struct Il2CppArray;
// System.Int32[]
struct Int32U5BU5D_t1809983122;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Type2779229935.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_Array2840145358.h"

// System.Boolean Newtonsoft.Json.Utilities.CollectionUtils::IsDictionaryType(System.Type)
extern "C"  bool CollectionUtils_IsDictionaryType_m2934797035 (Il2CppObject * __this /* static, unused */, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ConstructorInfo Newtonsoft.Json.Utilities.CollectionUtils::ResolveEnumerableCollectionConstructor(System.Type,System.Type)
extern "C"  ConstructorInfo_t3542137334 * CollectionUtils_ResolveEnumerableCollectionConstructor_m2141954997 (Il2CppObject * __this /* static, unused */, Type_t * ___collectionType, Type_t * ___collectionItemType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Utilities.CollectionUtils::Contains(System.Collections.IEnumerable,System.Object,System.Collections.IEqualityComparer)
extern "C"  bool CollectionUtils_Contains_m2108405094 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___list, Il2CppObject * ___value, Il2CppObject * ___comparer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Int32> Newtonsoft.Json.Utilities.CollectionUtils::GetDimensions(System.Collections.IList,System.Int32)
extern "C"  Il2CppObject* CollectionUtils_GetDimensions_m2027594952 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___values, int32_t ___dimensionsCount, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Utilities.CollectionUtils::CopyFromJaggedToMultidimensionalArray(System.Collections.IList,System.Array,System.Int32[])
extern "C"  void CollectionUtils_CopyFromJaggedToMultidimensionalArray_m13756687 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___values, Il2CppArray * ___multidimensionalArray, Int32U5BU5D_t1809983122* ___indices, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Newtonsoft.Json.Utilities.CollectionUtils::JaggedArrayGetValue(System.Collections.IList,System.Int32[])
extern "C"  Il2CppObject * CollectionUtils_JaggedArrayGetValue_m251698829 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___values, Int32U5BU5D_t1809983122* ___indices, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Array Newtonsoft.Json.Utilities.CollectionUtils::ToMultidimensionalArray(System.Collections.IList,System.Type,System.Int32)
extern "C"  Il2CppArray * CollectionUtils_ToMultidimensionalArray_m96124944 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___values, Type_t * ___type, int32_t ___rank, const MethodInfo* method) IL2CPP_METHOD_ATTR;
