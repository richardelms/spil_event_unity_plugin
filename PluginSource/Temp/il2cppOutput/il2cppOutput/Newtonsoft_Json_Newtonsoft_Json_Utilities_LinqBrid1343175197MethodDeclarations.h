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

// Newtonsoft.Json.Utilities.LinqBridge.OrderedEnumerable`2<System.Object,System.Int32>
struct OrderedEnumerable_2_t1343175197;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t3709260776;
// Newtonsoft.Json.Serialization.Func`2<System.Object,System.Int32>
struct Func_2_t2391434803;
// System.Collections.Generic.IComparer`1<System.Int32>
struct IComparer_1_t1252154900;
// System.Collections.Generic.List`1<System.Comparison`1<System.Object>>
struct List_1_t42772969;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t2320212868;
// System.Object
struct Il2CppObject;
// System.Collections.IEnumerator
struct IEnumerator_t287207039;

#include "codegen/il2cpp-codegen.h"
#include "Newtonsoft_Json_Newtonsoft_Json_Utilities_LinqBridg176534102.h"
#include "mscorlib_System_Object837106420.h"

// System.Void Newtonsoft.Json.Utilities.LinqBridge.OrderedEnumerable`2<System.Object,System.Int32>::.ctor(System.Collections.Generic.IEnumerable`1<T>,Newtonsoft.Json.Serialization.Func`2<T,K>,System.Collections.Generic.IComparer`1<K>,System.Boolean)
extern "C"  void OrderedEnumerable_2__ctor_m4167131777_gshared (OrderedEnumerable_2_t1343175197 * __this, Il2CppObject* ___source, Func_2_t2391434803 * ___keySelector, Il2CppObject* ___comparer, bool ___descending, const MethodInfo* method);
#define OrderedEnumerable_2__ctor_m4167131777(__this, ___source, ___keySelector, ___comparer, ___descending, method) ((  void (*) (OrderedEnumerable_2_t1343175197 *, Il2CppObject*, Func_2_t2391434803 *, Il2CppObject*, bool, const MethodInfo*))OrderedEnumerable_2__ctor_m4167131777_gshared)(__this, ___source, ___keySelector, ___comparer, ___descending, method)
// System.Void Newtonsoft.Json.Utilities.LinqBridge.OrderedEnumerable`2<System.Object,System.Int32>::.ctor(System.Collections.Generic.IEnumerable`1<T>,System.Collections.Generic.List`1<System.Comparison`1<T>>,Newtonsoft.Json.Serialization.Func`2<T,K>,System.Collections.Generic.IComparer`1<K>,System.Boolean)
extern "C"  void OrderedEnumerable_2__ctor_m3913820200_gshared (OrderedEnumerable_2_t1343175197 * __this, Il2CppObject* ___source, List_1_t42772969 * ___comparisons, Func_2_t2391434803 * ___keySelector, Il2CppObject* ___comparer, bool ___descending, const MethodInfo* method);
#define OrderedEnumerable_2__ctor_m3913820200(__this, ___source, ___comparisons, ___keySelector, ___comparer, ___descending, method) ((  void (*) (OrderedEnumerable_2_t1343175197 *, Il2CppObject*, List_1_t42772969 *, Func_2_t2391434803 *, Il2CppObject*, bool, const MethodInfo*))OrderedEnumerable_2__ctor_m3913820200_gshared)(__this, ___source, ___comparisons, ___keySelector, ___comparer, ___descending, method)
// System.Collections.Generic.IEnumerator`1<T> Newtonsoft.Json.Utilities.LinqBridge.OrderedEnumerable`2<System.Object,System.Int32>::GetEnumerator()
extern "C"  Il2CppObject* OrderedEnumerable_2_GetEnumerator_m166286466_gshared (OrderedEnumerable_2_t1343175197 * __this, const MethodInfo* method);
#define OrderedEnumerable_2_GetEnumerator_m166286466(__this, method) ((  Il2CppObject* (*) (OrderedEnumerable_2_t1343175197 *, const MethodInfo*))OrderedEnumerable_2_GetEnumerator_m166286466_gshared)(__this, method)
// Newtonsoft.Json.Utilities.LinqBridge.Tuple`2<T,System.Int32> Newtonsoft.Json.Utilities.LinqBridge.OrderedEnumerable`2<System.Object,System.Int32>::TagPosition(T,System.Int32)
extern "C"  Tuple_2_t176534102  OrderedEnumerable_2_TagPosition_m2068349686_gshared (Il2CppObject * __this /* static, unused */, Il2CppObject * ___e, int32_t ___i, const MethodInfo* method);
#define OrderedEnumerable_2_TagPosition_m2068349686(__this /* static, unused */, ___e, ___i, method) ((  Tuple_2_t176534102  (*) (Il2CppObject * /* static, unused */, Il2CppObject *, int32_t, const MethodInfo*))OrderedEnumerable_2_TagPosition_m2068349686_gshared)(__this /* static, unused */, ___e, ___i, method)
// T Newtonsoft.Json.Utilities.LinqBridge.OrderedEnumerable`2<System.Object,System.Int32>::GetFirst(Newtonsoft.Json.Utilities.LinqBridge.Tuple`2<T,System.Int32>)
extern "C"  Il2CppObject * OrderedEnumerable_2_GetFirst_m2341978318_gshared (Il2CppObject * __this /* static, unused */, Tuple_2_t176534102  ___pv, const MethodInfo* method);
#define OrderedEnumerable_2_GetFirst_m2341978318(__this /* static, unused */, ___pv, method) ((  Il2CppObject * (*) (Il2CppObject * /* static, unused */, Tuple_2_t176534102 , const MethodInfo*))OrderedEnumerable_2_GetFirst_m2341978318_gshared)(__this /* static, unused */, ___pv, method)
// System.Collections.IEnumerator Newtonsoft.Json.Utilities.LinqBridge.OrderedEnumerable`2<System.Object,System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Il2CppObject * OrderedEnumerable_2_System_Collections_IEnumerable_GetEnumerator_m3567082785_gshared (OrderedEnumerable_2_t1343175197 * __this, const MethodInfo* method);
#define OrderedEnumerable_2_System_Collections_IEnumerable_GetEnumerator_m3567082785(__this, method) ((  Il2CppObject * (*) (OrderedEnumerable_2_t1343175197 *, const MethodInfo*))OrderedEnumerable_2_System_Collections_IEnumerable_GetEnumerator_m3567082785_gshared)(__this, method)
// System.Int32 Newtonsoft.Json.Utilities.LinqBridge.OrderedEnumerable`2<System.Object,System.Int32>::<GetEnumerator>b__5_0(Newtonsoft.Json.Utilities.LinqBridge.Tuple`2<T,System.Int32>,Newtonsoft.Json.Utilities.LinqBridge.Tuple`2<T,System.Int32>)
extern "C"  int32_t OrderedEnumerable_2_U3CGetEnumeratorU3Eb__5_0_m548301986_gshared (OrderedEnumerable_2_t1343175197 * __this, Tuple_2_t176534102  ___x, Tuple_2_t176534102  ___y, const MethodInfo* method);
#define OrderedEnumerable_2_U3CGetEnumeratorU3Eb__5_0_m548301986(__this, ___x, ___y, method) ((  int32_t (*) (OrderedEnumerable_2_t1343175197 *, Tuple_2_t176534102 , Tuple_2_t176534102 , const MethodInfo*))OrderedEnumerable_2_U3CGetEnumeratorU3Eb__5_0_m548301986_gshared)(__this, ___x, ___y, method)
