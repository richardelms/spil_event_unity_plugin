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

// System.Collections.Generic.Dictionary`2<System.Object,Newtonsoft.Json.ReadType>
struct Dictionary_2_t1599532669;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t3161373071;
// System.Collections.Generic.IDictionary`2<System.Object,Newtonsoft.Json.ReadType>
struct IDictionary_2_t2775198456;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2995724695;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t1302937806;
// System.Collections.Generic.ICollection`1<Newtonsoft.Json.ReadType>
struct ICollection_1_t3373012621;
// System.Collections.ICollection
struct ICollection_t3761522009;
// System.Object
struct Il2CppObject;
// System.Collections.Generic.KeyValuePair`2<System.Object,Newtonsoft.Json.ReadType>[]
struct KeyValuePair_2U5BU5D_t3455651782;
// System.Array
struct Il2CppArray;
// System.Collections.IEnumerator
struct IEnumerator_t287207039;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,Newtonsoft.Json.ReadType>>
struct IEnumerator_1_t2571170415;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1541724277;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,Newtonsoft.Json.ReadType>
struct KeyCollection_t3922807949;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,Newtonsoft.Json.ReadType>
struct ValueCollection_t3521669763;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_Serializatio2995724695.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCont986364934.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_21088063967.h"
#include "mscorlib_System_Array2840145358.h"
#include "Newtonsoft_Json_Newtonsoft_Json_ReadType2907181235.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_E1366560610.h"
#include "mscorlib_System_Collections_DictionaryEntry130027246.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,Newtonsoft.Json.ReadType>::.ctor()
extern "C"  void Dictionary_2__ctor_m1755292398_gshared (Dictionary_2_t1599532669 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m1755292398(__this, method) ((  void (*) (Dictionary_2_t1599532669 *, const MethodInfo*))Dictionary_2__ctor_m1755292398_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Newtonsoft.Json.ReadType>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C"  void Dictionary_2__ctor_m3979787877_gshared (Dictionary_2_t1599532669 * __this, Il2CppObject* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m3979787877(__this, ___comparer, method) ((  void (*) (Dictionary_2_t1599532669 *, Il2CppObject*, const MethodInfo*))Dictionary_2__ctor_m3979787877_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Newtonsoft.Json.ReadType>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C"  void Dictionary_2__ctor_m3130065770_gshared (Dictionary_2_t1599532669 * __this, Il2CppObject* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m3130065770(__this, ___dictionary, method) ((  void (*) (Dictionary_2_t1599532669 *, Il2CppObject*, const MethodInfo*))Dictionary_2__ctor_m3130065770_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Newtonsoft.Json.ReadType>::.ctor(System.Int32)
extern "C"  void Dictionary_2__ctor_m815424319_gshared (Dictionary_2_t1599532669 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m815424319(__this, ___capacity, method) ((  void (*) (Dictionary_2_t1599532669 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m815424319_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Newtonsoft.Json.ReadType>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C"  void Dictionary_2__ctor_m567888595_gshared (Dictionary_2_t1599532669 * __this, Il2CppObject* ___dictionary, Il2CppObject* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m567888595(__this, ___dictionary, ___comparer, method) ((  void (*) (Dictionary_2_t1599532669 *, Il2CppObject*, Il2CppObject*, const MethodInfo*))Dictionary_2__ctor_m567888595_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Newtonsoft.Json.ReadType>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void Dictionary_2__ctor_m3087033135_gshared (Dictionary_2_t1599532669 * __this, SerializationInfo_t2995724695 * ___info, StreamingContext_t986364934  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m3087033135(__this, ___info, ___context, method) ((  void (*) (Dictionary_2_t1599532669 *, SerializationInfo_t2995724695 *, StreamingContext_t986364934 , const MethodInfo*))Dictionary_2__ctor_m3087033135_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Object,Newtonsoft.Json.ReadType>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C"  Il2CppObject* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m2455934506_gshared (Dictionary_2_t1599532669 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m2455934506(__this, method) ((  Il2CppObject* (*) (Dictionary_2_t1599532669 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m2455934506_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Object,Newtonsoft.Json.ReadType>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C"  Il2CppObject* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m1799254790_gshared (Dictionary_2_t1599532669 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m1799254790(__this, method) ((  Il2CppObject* (*) (Dictionary_2_t1599532669 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m1799254790_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Object,Newtonsoft.Json.ReadType>::System.Collections.IDictionary.get_Keys()
extern "C"  Il2CppObject * Dictionary_2_System_Collections_IDictionary_get_Keys_m2576827820_gshared (Dictionary_2_t1599532669 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m2576827820(__this, method) ((  Il2CppObject * (*) (Dictionary_2_t1599532669 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m2576827820_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Object,Newtonsoft.Json.ReadType>::System.Collections.IDictionary.get_Values()
extern "C"  Il2CppObject * Dictionary_2_System_Collections_IDictionary_get_Values_m502960026_gshared (Dictionary_2_t1599532669 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Values_m502960026(__this, method) ((  Il2CppObject * (*) (Dictionary_2_t1599532669 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Values_m502960026_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,Newtonsoft.Json.ReadType>::System.Collections.IDictionary.get_IsReadOnly()
extern "C"  bool Dictionary_2_System_Collections_IDictionary_get_IsReadOnly_m2832767018_gshared (Dictionary_2_t1599532669 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_IsReadOnly_m2832767018(__this, method) ((  bool (*) (Dictionary_2_t1599532669 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_IsReadOnly_m2832767018_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,Newtonsoft.Json.ReadType>::System.Collections.IDictionary.get_Item(System.Object)
extern "C"  Il2CppObject * Dictionary_2_System_Collections_IDictionary_get_Item_m273543376_gshared (Dictionary_2_t1599532669 * __this, Il2CppObject * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m273543376(__this, ___key, method) ((  Il2CppObject * (*) (Dictionary_2_t1599532669 *, Il2CppObject *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m273543376_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Newtonsoft.Json.ReadType>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C"  void Dictionary_2_System_Collections_IDictionary_set_Item_m1899969791_gshared (Dictionary_2_t1599532669 * __this, Il2CppObject * ___key, Il2CppObject * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m1899969791(__this, ___key, ___value, method) ((  void (*) (Dictionary_2_t1599532669 *, Il2CppObject *, Il2CppObject *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m1899969791_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Newtonsoft.Json.ReadType>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C"  void Dictionary_2_System_Collections_IDictionary_Add_m1470537202_gshared (Dictionary_2_t1599532669 * __this, Il2CppObject * ___key, Il2CppObject * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m1470537202(__this, ___key, ___value, method) ((  void (*) (Dictionary_2_t1599532669 *, Il2CppObject *, Il2CppObject *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m1470537202_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,Newtonsoft.Json.ReadType>::System.Collections.IDictionary.Contains(System.Object)
extern "C"  bool Dictionary_2_System_Collections_IDictionary_Contains_m292699520_gshared (Dictionary_2_t1599532669 * __this, Il2CppObject * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m292699520(__this, ___key, method) ((  bool (*) (Dictionary_2_t1599532669 *, Il2CppObject *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m292699520_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Newtonsoft.Json.ReadType>::System.Collections.IDictionary.Remove(System.Object)
extern "C"  void Dictionary_2_System_Collections_IDictionary_Remove_m842110269_gshared (Dictionary_2_t1599532669 * __this, Il2CppObject * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m842110269(__this, ___key, method) ((  void (*) (Dictionary_2_t1599532669 *, Il2CppObject *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m842110269_gshared)(__this, ___key, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,Newtonsoft.Json.ReadType>::System.Collections.ICollection.get_SyncRoot()
extern "C"  Il2CppObject * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m1921346758_gshared (Dictionary_2_t1599532669 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m1921346758(__this, method) ((  Il2CppObject * (*) (Dictionary_2_t1599532669 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m1921346758_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,Newtonsoft.Json.ReadType>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C"  bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m750430488_gshared (Dictionary_2_t1599532669 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m750430488(__this, method) ((  bool (*) (Dictionary_2_t1599532669 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m750430488_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Newtonsoft.Json.ReadType>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C"  void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m2757738323_gshared (Dictionary_2_t1599532669 * __this, KeyValuePair_2_t1088063967  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m2757738323(__this, ___keyValuePair, method) ((  void (*) (Dictionary_2_t1599532669 *, KeyValuePair_2_t1088063967 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m2757738323_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,Newtonsoft.Json.ReadType>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C"  bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m2682657171_gshared (Dictionary_2_t1599532669 * __this, KeyValuePair_2_t1088063967  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m2682657171(__this, ___keyValuePair, method) ((  bool (*) (Dictionary_2_t1599532669 *, KeyValuePair_2_t1088063967 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m2682657171_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Newtonsoft.Json.ReadType>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C"  void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m2229837943_gshared (Dictionary_2_t1599532669 * __this, KeyValuePair_2U5BU5D_t3455651782* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m2229837943(__this, ___array, ___index, method) ((  void (*) (Dictionary_2_t1599532669 *, KeyValuePair_2U5BU5D_t3455651782*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m2229837943_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,Newtonsoft.Json.ReadType>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C"  bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m2873330040_gshared (Dictionary_2_t1599532669 * __this, KeyValuePair_2_t1088063967  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m2873330040(__this, ___keyValuePair, method) ((  bool (*) (Dictionary_2_t1599532669 *, KeyValuePair_2_t1088063967 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m2873330040_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Newtonsoft.Json.ReadType>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C"  void Dictionary_2_System_Collections_ICollection_CopyTo_m3432725014_gshared (Dictionary_2_t1599532669 * __this, Il2CppArray * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m3432725014(__this, ___array, ___index, method) ((  void (*) (Dictionary_2_t1599532669 *, Il2CppArray *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m3432725014_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,Newtonsoft.Json.ReadType>::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Il2CppObject * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m3304178853_gshared (Dictionary_2_t1599532669 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m3304178853(__this, method) ((  Il2CppObject * (*) (Dictionary_2_t1599532669 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m3304178853_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,Newtonsoft.Json.ReadType>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C"  Il2CppObject* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m1743796764_gshared (Dictionary_2_t1599532669 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m1743796764(__this, method) ((  Il2CppObject* (*) (Dictionary_2_t1599532669 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m1743796764_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,Newtonsoft.Json.ReadType>::System.Collections.IDictionary.GetEnumerator()
extern "C"  Il2CppObject * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m2090442857_gshared (Dictionary_2_t1599532669 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m2090442857(__this, method) ((  Il2CppObject * (*) (Dictionary_2_t1599532669 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m2090442857_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,Newtonsoft.Json.ReadType>::get_Count()
extern "C"  int32_t Dictionary_2_get_Count_m2862808590_gshared (Dictionary_2_t1599532669 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m2862808590(__this, method) ((  int32_t (*) (Dictionary_2_t1599532669 *, const MethodInfo*))Dictionary_2_get_Count_m2862808590_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,Newtonsoft.Json.ReadType>::get_Item(TKey)
extern "C"  int32_t Dictionary_2_get_Item_m1675159481_gshared (Dictionary_2_t1599532669 * __this, Il2CppObject * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m1675159481(__this, ___key, method) ((  int32_t (*) (Dictionary_2_t1599532669 *, Il2CppObject *, const MethodInfo*))Dictionary_2_get_Item_m1675159481_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Newtonsoft.Json.ReadType>::set_Item(TKey,TValue)
extern "C"  void Dictionary_2_set_Item_m2844598318_gshared (Dictionary_2_t1599532669 * __this, Il2CppObject * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m2844598318(__this, ___key, ___value, method) ((  void (*) (Dictionary_2_t1599532669 *, Il2CppObject *, int32_t, const MethodInfo*))Dictionary_2_set_Item_m2844598318_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Newtonsoft.Json.ReadType>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C"  void Dictionary_2_Init_m3334867558_gshared (Dictionary_2_t1599532669 * __this, int32_t ___capacity, Il2CppObject* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m3334867558(__this, ___capacity, ___hcp, method) ((  void (*) (Dictionary_2_t1599532669 *, int32_t, Il2CppObject*, const MethodInfo*))Dictionary_2_Init_m3334867558_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Newtonsoft.Json.ReadType>::InitArrays(System.Int32)
extern "C"  void Dictionary_2_InitArrays_m2691887633_gshared (Dictionary_2_t1599532669 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m2691887633(__this, ___size, method) ((  void (*) (Dictionary_2_t1599532669 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m2691887633_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Newtonsoft.Json.ReadType>::CopyToCheck(System.Array,System.Int32)
extern "C"  void Dictionary_2_CopyToCheck_m511204429_gshared (Dictionary_2_t1599532669 * __this, Il2CppArray * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m511204429(__this, ___array, ___index, method) ((  void (*) (Dictionary_2_t1599532669 *, Il2CppArray *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m511204429_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,Newtonsoft.Json.ReadType>::make_pair(TKey,TValue)
extern "C"  KeyValuePair_2_t1088063967  Dictionary_2_make_pair_m4015739105_gshared (Il2CppObject * __this /* static, unused */, Il2CppObject * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m4015739105(__this /* static, unused */, ___key, ___value, method) ((  KeyValuePair_2_t1088063967  (*) (Il2CppObject * /* static, unused */, Il2CppObject *, int32_t, const MethodInfo*))Dictionary_2_make_pair_m4015739105_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,Newtonsoft.Json.ReadType>::pick_key(TKey,TValue)
extern "C"  Il2CppObject * Dictionary_2_pick_key_m1265225661_gshared (Il2CppObject * __this /* static, unused */, Il2CppObject * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m1265225661(__this /* static, unused */, ___key, ___value, method) ((  Il2CppObject * (*) (Il2CppObject * /* static, unused */, Il2CppObject *, int32_t, const MethodInfo*))Dictionary_2_pick_key_m1265225661_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,Newtonsoft.Json.ReadType>::pick_value(TKey,TValue)
extern "C"  int32_t Dictionary_2_pick_value_m1428398297_gshared (Il2CppObject * __this /* static, unused */, Il2CppObject * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m1428398297(__this /* static, unused */, ___key, ___value, method) ((  int32_t (*) (Il2CppObject * /* static, unused */, Il2CppObject *, int32_t, const MethodInfo*))Dictionary_2_pick_value_m1428398297_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Newtonsoft.Json.ReadType>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C"  void Dictionary_2_CopyTo_m4210256610_gshared (Dictionary_2_t1599532669 * __this, KeyValuePair_2U5BU5D_t3455651782* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m4210256610(__this, ___array, ___index, method) ((  void (*) (Dictionary_2_t1599532669 *, KeyValuePair_2U5BU5D_t3455651782*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m4210256610_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Newtonsoft.Json.ReadType>::Resize()
extern "C"  void Dictionary_2_Resize_m2932253450_gshared (Dictionary_2_t1599532669 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m2932253450(__this, method) ((  void (*) (Dictionary_2_t1599532669 *, const MethodInfo*))Dictionary_2_Resize_m2932253450_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Newtonsoft.Json.ReadType>::Add(TKey,TValue)
extern "C"  void Dictionary_2_Add_m3693411719_gshared (Dictionary_2_t1599532669 * __this, Il2CppObject * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_Add_m3693411719(__this, ___key, ___value, method) ((  void (*) (Dictionary_2_t1599532669 *, Il2CppObject *, int32_t, const MethodInfo*))Dictionary_2_Add_m3693411719_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Newtonsoft.Json.ReadType>::Clear()
extern "C"  void Dictionary_2_Clear_m3456392985_gshared (Dictionary_2_t1599532669 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m3456392985(__this, method) ((  void (*) (Dictionary_2_t1599532669 *, const MethodInfo*))Dictionary_2_Clear_m3456392985_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,Newtonsoft.Json.ReadType>::ContainsKey(TKey)
extern "C"  bool Dictionary_2_ContainsKey_m3986581635_gshared (Dictionary_2_t1599532669 * __this, Il2CppObject * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m3986581635(__this, ___key, method) ((  bool (*) (Dictionary_2_t1599532669 *, Il2CppObject *, const MethodInfo*))Dictionary_2_ContainsKey_m3986581635_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,Newtonsoft.Json.ReadType>::ContainsValue(TValue)
extern "C"  bool Dictionary_2_ContainsValue_m2746991363_gshared (Dictionary_2_t1599532669 * __this, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m2746991363(__this, ___value, method) ((  bool (*) (Dictionary_2_t1599532669 *, int32_t, const MethodInfo*))Dictionary_2_ContainsValue_m2746991363_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Newtonsoft.Json.ReadType>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void Dictionary_2_GetObjectData_m3888057228_gshared (Dictionary_2_t1599532669 * __this, SerializationInfo_t2995724695 * ___info, StreamingContext_t986364934  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m3888057228(__this, ___info, ___context, method) ((  void (*) (Dictionary_2_t1599532669 *, SerializationInfo_t2995724695 *, StreamingContext_t986364934 , const MethodInfo*))Dictionary_2_GetObjectData_m3888057228_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Newtonsoft.Json.ReadType>::OnDeserialization(System.Object)
extern "C"  void Dictionary_2_OnDeserialization_m317310552_gshared (Dictionary_2_t1599532669 * __this, Il2CppObject * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m317310552(__this, ___sender, method) ((  void (*) (Dictionary_2_t1599532669 *, Il2CppObject *, const MethodInfo*))Dictionary_2_OnDeserialization_m317310552_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,Newtonsoft.Json.ReadType>::Remove(TKey)
extern "C"  bool Dictionary_2_Remove_m4079831693_gshared (Dictionary_2_t1599532669 * __this, Il2CppObject * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m4079831693(__this, ___key, method) ((  bool (*) (Dictionary_2_t1599532669 *, Il2CppObject *, const MethodInfo*))Dictionary_2_Remove_m4079831693_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,Newtonsoft.Json.ReadType>::TryGetValue(TKey,TValue&)
extern "C"  bool Dictionary_2_TryGetValue_m726109660_gshared (Dictionary_2_t1599532669 * __this, Il2CppObject * ___key, int32_t* ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m726109660(__this, ___key, ___value, method) ((  bool (*) (Dictionary_2_t1599532669 *, Il2CppObject *, int32_t*, const MethodInfo*))Dictionary_2_TryGetValue_m726109660_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,Newtonsoft.Json.ReadType>::get_Keys()
extern "C"  KeyCollection_t3922807949 * Dictionary_2_get_Keys_m2597170239_gshared (Dictionary_2_t1599532669 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m2597170239(__this, method) ((  KeyCollection_t3922807949 * (*) (Dictionary_2_t1599532669 *, const MethodInfo*))Dictionary_2_get_Keys_m2597170239_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,Newtonsoft.Json.ReadType>::get_Values()
extern "C"  ValueCollection_t3521669763 * Dictionary_2_get_Values_m806341275_gshared (Dictionary_2_t1599532669 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m806341275(__this, method) ((  ValueCollection_t3521669763 * (*) (Dictionary_2_t1599532669 *, const MethodInfo*))Dictionary_2_get_Values_m806341275_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,Newtonsoft.Json.ReadType>::ToTKey(System.Object)
extern "C"  Il2CppObject * Dictionary_2_ToTKey_m715084568_gshared (Dictionary_2_t1599532669 * __this, Il2CppObject * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m715084568(__this, ___key, method) ((  Il2CppObject * (*) (Dictionary_2_t1599532669 *, Il2CppObject *, const MethodInfo*))Dictionary_2_ToTKey_m715084568_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,Newtonsoft.Json.ReadType>::ToTValue(System.Object)
extern "C"  int32_t Dictionary_2_ToTValue_m4035679732_gshared (Dictionary_2_t1599532669 * __this, Il2CppObject * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m4035679732(__this, ___value, method) ((  int32_t (*) (Dictionary_2_t1599532669 *, Il2CppObject *, const MethodInfo*))Dictionary_2_ToTValue_m4035679732_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,Newtonsoft.Json.ReadType>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C"  bool Dictionary_2_ContainsKeyValuePair_m2020839536_gshared (Dictionary_2_t1599532669 * __this, KeyValuePair_2_t1088063967  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m2020839536(__this, ___pair, method) ((  bool (*) (Dictionary_2_t1599532669 *, KeyValuePair_2_t1088063967 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m2020839536_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,Newtonsoft.Json.ReadType>::GetEnumerator()
extern "C"  Enumerator_t1366560611  Dictionary_2_GetEnumerator_m952082809_gshared (Dictionary_2_t1599532669 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m952082809(__this, method) ((  Enumerator_t1366560611  (*) (Dictionary_2_t1599532669 *, const MethodInfo*))Dictionary_2_GetEnumerator_m952082809_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,Newtonsoft.Json.ReadType>::<CopyTo>m__0(TKey,TValue)
extern "C"  DictionaryEntry_t130027246  Dictionary_2_U3CCopyToU3Em__0_m945263024_gshared (Il2CppObject * __this /* static, unused */, Il2CppObject * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m945263024(__this /* static, unused */, ___key, ___value, method) ((  DictionaryEntry_t130027246  (*) (Il2CppObject * /* static, unused */, Il2CppObject *, int32_t, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m945263024_gshared)(__this /* static, unused */, ___key, ___value, method)
