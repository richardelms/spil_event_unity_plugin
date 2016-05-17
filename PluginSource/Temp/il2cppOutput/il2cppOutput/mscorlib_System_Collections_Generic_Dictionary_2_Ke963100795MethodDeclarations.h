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

// System.Collections.Generic.Dictionary`2/KeyCollection<System.Char,System.Object>
struct KeyCollection_t963100795;
// System.Collections.Generic.Dictionary`2<System.Char,System.Object>
struct Dictionary_2_t2934792811;
// System.Collections.Generic.IEnumerator`1<System.Char>
struct IEnumerator_1_t4261813147;
// System.Array
struct Il2CppArray;
// System.Collections.IEnumerator
struct IEnumerator_t287207039;
// System.Object
struct Il2CppObject;
// System.Char[]
struct CharU5BU5D_t3416858730;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array2840145358.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_K2701820752.h"

// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Char,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C"  void KeyCollection__ctor_m1469015903_gshared (KeyCollection_t963100795 * __this, Dictionary_2_t2934792811 * ___dictionary, const MethodInfo* method);
#define KeyCollection__ctor_m1469015903(__this, ___dictionary, method) ((  void (*) (KeyCollection_t963100795 *, Dictionary_2_t2934792811 *, const MethodInfo*))KeyCollection__ctor_m1469015903_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Char,System.Object>::System.Collections.Generic.ICollection<TKey>.Add(TKey)
extern "C"  void KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Add_m1054642839_gshared (KeyCollection_t963100795 * __this, uint16_t ___item, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Add_m1054642839(__this, ___item, method) ((  void (*) (KeyCollection_t963100795 *, uint16_t, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Add_m1054642839_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Char,System.Object>::System.Collections.Generic.ICollection<TKey>.Clear()
extern "C"  void KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Clear_m2374267342_gshared (KeyCollection_t963100795 * __this, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Clear_m2374267342(__this, method) ((  void (*) (KeyCollection_t963100795 *, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Clear_m2374267342_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Char,System.Object>::System.Collections.Generic.ICollection<TKey>.Contains(TKey)
extern "C"  bool KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Contains_m3041393235_gshared (KeyCollection_t963100795 * __this, uint16_t ___item, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Contains_m3041393235(__this, ___item, method) ((  bool (*) (KeyCollection_t963100795 *, uint16_t, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Contains_m3041393235_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Char,System.Object>::System.Collections.Generic.ICollection<TKey>.Remove(TKey)
extern "C"  bool KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Remove_m1004856440_gshared (KeyCollection_t963100795 * __this, uint16_t ___item, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Remove_m1004856440(__this, ___item, method) ((  bool (*) (KeyCollection_t963100795 *, uint16_t, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Remove_m1004856440_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<TKey> System.Collections.Generic.Dictionary`2/KeyCollection<System.Char,System.Object>::System.Collections.Generic.IEnumerable<TKey>.GetEnumerator()
extern "C"  Il2CppObject* KeyCollection_System_Collections_Generic_IEnumerableU3CTKeyU3E_GetEnumerator_m2049739466_gshared (KeyCollection_t963100795 * __this, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_IEnumerableU3CTKeyU3E_GetEnumerator_m2049739466(__this, method) ((  Il2CppObject* (*) (KeyCollection_t963100795 *, const MethodInfo*))KeyCollection_System_Collections_Generic_IEnumerableU3CTKeyU3E_GetEnumerator_m2049739466_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Char,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C"  void KeyCollection_System_Collections_ICollection_CopyTo_m3946058048_gshared (KeyCollection_t963100795 * __this, Il2CppArray * ___array, int32_t ___index, const MethodInfo* method);
#define KeyCollection_System_Collections_ICollection_CopyTo_m3946058048(__this, ___array, ___index, method) ((  void (*) (KeyCollection_t963100795 *, Il2CppArray *, int32_t, const MethodInfo*))KeyCollection_System_Collections_ICollection_CopyTo_m3946058048_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/KeyCollection<System.Char,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Il2CppObject * KeyCollection_System_Collections_IEnumerable_GetEnumerator_m3928645179_gshared (KeyCollection_t963100795 * __this, const MethodInfo* method);
#define KeyCollection_System_Collections_IEnumerable_GetEnumerator_m3928645179(__this, method) ((  Il2CppObject * (*) (KeyCollection_t963100795 *, const MethodInfo*))KeyCollection_System_Collections_IEnumerable_GetEnumerator_m3928645179_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Char,System.Object>::System.Collections.Generic.ICollection<TKey>.get_IsReadOnly()
extern "C"  bool KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_get_IsReadOnly_m787228916_gshared (KeyCollection_t963100795 * __this, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_get_IsReadOnly_m787228916(__this, method) ((  bool (*) (KeyCollection_t963100795 *, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_get_IsReadOnly_m787228916_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/KeyCollection<System.Char,System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C"  Il2CppObject * KeyCollection_System_Collections_ICollection_get_SyncRoot_m231344402_gshared (KeyCollection_t963100795 * __this, const MethodInfo* method);
#define KeyCollection_System_Collections_ICollection_get_SyncRoot_m231344402(__this, method) ((  Il2CppObject * (*) (KeyCollection_t963100795 *, const MethodInfo*))KeyCollection_System_Collections_ICollection_get_SyncRoot_m231344402_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Char,System.Object>::CopyTo(TKey[],System.Int32)
extern "C"  void KeyCollection_CopyTo_m3719957012_gshared (KeyCollection_t963100795 * __this, CharU5BU5D_t3416858730* ___array, int32_t ___index, const MethodInfo* method);
#define KeyCollection_CopyTo_m3719957012(__this, ___array, ___index, method) ((  void (*) (KeyCollection_t963100795 *, CharU5BU5D_t3416858730*, int32_t, const MethodInfo*))KeyCollection_CopyTo_m3719957012_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection<System.Char,System.Object>::GetEnumerator()
extern "C"  Enumerator_t2701820752  KeyCollection_GetEnumerator_m2168062135_gshared (KeyCollection_t963100795 * __this, const MethodInfo* method);
#define KeyCollection_GetEnumerator_m2168062135(__this, method) ((  Enumerator_t2701820752  (*) (KeyCollection_t963100795 *, const MethodInfo*))KeyCollection_GetEnumerator_m2168062135_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2/KeyCollection<System.Char,System.Object>::get_Count()
extern "C"  int32_t KeyCollection_get_Count_m387475436_gshared (KeyCollection_t963100795 * __this, const MethodInfo* method);
#define KeyCollection_get_Count_m387475436(__this, method) ((  int32_t (*) (KeyCollection_t963100795 *, const MethodInfo*))KeyCollection_get_Count_m387475436_gshared)(__this, method)
