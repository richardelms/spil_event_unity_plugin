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

// Newtonsoft.Json.Linq.JContainer
struct JContainer_t103968846;
// System.ComponentModel.ListChangedEventArgs
struct ListChangedEventArgs_t1321323978;
// Newtonsoft.Json.Linq.JToken
struct JToken_t2367600838;
// System.Object
struct Il2CppObject;
// System.Array
struct Il2CppArray;
// Newtonsoft.Json.JsonReader
struct JsonReader_t1817561742;
// Newtonsoft.Json.Linq.JsonLoadSettings
struct JsonLoadSettings_t3003734344;
// Newtonsoft.Json.Linq.JToken[]
struct JTokenU5BU5D_t1133600099;

#include "codegen/il2cpp-codegen.h"
#include "Newtonsoft_Json_Newtonsoft_Json_Linq_JContainer103968846.h"
#include "System_System_ComponentModel_ListChangedEventArgs1321323978.h"
#include "Newtonsoft_Json_Newtonsoft_Json_Linq_JEnumerable_1_724515125.h"
#include "mscorlib_System_Object837106420.h"
#include "Newtonsoft_Json_Newtonsoft_Json_Linq_JToken2367600838.h"
#include "mscorlib_System_Array2840145358.h"
#include "Newtonsoft_Json_Newtonsoft_Json_JsonReader1817561742.h"
#include "Newtonsoft_Json_Newtonsoft_Json_Linq_JsonLoadSetti3003734344.h"

// System.Void Newtonsoft.Json.Linq.JContainer::.ctor()
extern "C"  void JContainer__ctor_m657379632 (JContainer_t103968846 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JContainer::.ctor(Newtonsoft.Json.Linq.JContainer)
extern "C"  void JContainer__ctor_m2728642674 (JContainer_t103968846 * __this, JContainer_t103968846 * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JContainer::CheckReentrancy()
extern "C"  void JContainer_CheckReentrancy_m1474548211 (JContainer_t103968846 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JContainer::OnListChanged(System.ComponentModel.ListChangedEventArgs)
extern "C"  void JContainer_OnListChanged_m1961729665 (JContainer_t103968846 * __this, ListChangedEventArgs_t1321323978 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Linq.JContainer::get_HasValues()
extern "C"  bool JContainer_get_HasValues_m2087656619 (JContainer_t103968846 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JContainer::get_First()
extern "C"  JToken_t2367600838 * JContainer_get_First_m3463127520 (JContainer_t103968846 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JContainer::get_Last()
extern "C"  JToken_t2367600838 * JContainer_get_Last_m3878359560 (JContainer_t103968846 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Linq.JEnumerable`1<Newtonsoft.Json.Linq.JToken> Newtonsoft.Json.Linq.JContainer::Children()
extern "C"  JEnumerable_1_t724515125  JContainer_Children_m1451112552 (JContainer_t103968846 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Linq.JContainer::IsMultiContent(System.Object)
extern "C"  bool JContainer_IsMultiContent_m2315962144 (JContainer_t103968846 * __this, Il2CppObject * ___content, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JContainer::EnsureParentToken(Newtonsoft.Json.Linq.JToken,System.Boolean)
extern "C"  JToken_t2367600838 * JContainer_EnsureParentToken_m486276797 (JContainer_t103968846 * __this, JToken_t2367600838 * ___item, bool ___skipParentCheck, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Newtonsoft.Json.Linq.JContainer::IndexOfItem(Newtonsoft.Json.Linq.JToken)
extern "C"  int32_t JContainer_IndexOfItem_m3931866716 (JContainer_t103968846 * __this, JToken_t2367600838 * ___item, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JContainer::InsertItem(System.Int32,Newtonsoft.Json.Linq.JToken,System.Boolean)
extern "C"  void JContainer_InsertItem_m526635240 (JContainer_t103968846 * __this, int32_t ___index, JToken_t2367600838 * ___item, bool ___skipParentCheck, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JContainer::RemoveItemAt(System.Int32)
extern "C"  void JContainer_RemoveItemAt_m2866027823 (JContainer_t103968846 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Linq.JContainer::RemoveItem(Newtonsoft.Json.Linq.JToken)
extern "C"  bool JContainer_RemoveItem_m2336138985 (JContainer_t103968846 * __this, JToken_t2367600838 * ___item, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JContainer::GetItem(System.Int32)
extern "C"  JToken_t2367600838 * JContainer_GetItem_m2230175923 (JContainer_t103968846 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JContainer::SetItem(System.Int32,Newtonsoft.Json.Linq.JToken)
extern "C"  void JContainer_SetItem_m818507032 (JContainer_t103968846 * __this, int32_t ___index, JToken_t2367600838 * ___item, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JContainer::ClearItems()
extern "C"  void JContainer_ClearItems_m3847304327 (JContainer_t103968846 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JContainer::ReplaceItem(Newtonsoft.Json.Linq.JToken,Newtonsoft.Json.Linq.JToken)
extern "C"  void JContainer_ReplaceItem_m3516177081 (JContainer_t103968846 * __this, JToken_t2367600838 * ___existing, JToken_t2367600838 * ___replacement, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Linq.JContainer::ContainsItem(Newtonsoft.Json.Linq.JToken)
extern "C"  bool JContainer_ContainsItem_m4065277678 (JContainer_t103968846 * __this, JToken_t2367600838 * ___item, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JContainer::CopyItemsTo(System.Array,System.Int32)
extern "C"  void JContainer_CopyItemsTo_m3402147325 (JContainer_t103968846 * __this, Il2CppArray * ___array, int32_t ___arrayIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Linq.JContainer::IsTokenUnchanged(Newtonsoft.Json.Linq.JToken,Newtonsoft.Json.Linq.JToken)
extern "C"  bool JContainer_IsTokenUnchanged_m1167025048 (Il2CppObject * __this /* static, unused */, JToken_t2367600838 * ___currentValue, JToken_t2367600838 * ___newValue, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JContainer::ValidateToken(Newtonsoft.Json.Linq.JToken,Newtonsoft.Json.Linq.JToken)
extern "C"  void JContainer_ValidateToken_m4086989533 (JContainer_t103968846 * __this, JToken_t2367600838 * ___o, JToken_t2367600838 * ___existing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JContainer::Add(System.Object)
extern "C"  void JContainer_Add_m2270995461 (JContainer_t103968846 * __this, Il2CppObject * ___content, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JContainer::AddAndSkipParentCheck(Newtonsoft.Json.Linq.JToken)
extern "C"  void JContainer_AddAndSkipParentCheck_m4289463955 (JContainer_t103968846 * __this, JToken_t2367600838 * ___token, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JContainer::AddInternal(System.Int32,System.Object,System.Boolean)
extern "C"  void JContainer_AddInternal_m2561697074 (JContainer_t103968846 * __this, int32_t ___index, Il2CppObject * ___content, bool ___skipParentCheck, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JContainer::CreateFromContent(System.Object)
extern "C"  JToken_t2367600838 * JContainer_CreateFromContent_m333401064 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___content, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JContainer::RemoveAll()
extern "C"  void JContainer_RemoveAll_m1813325579 (JContainer_t103968846 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JContainer::ReadTokenFrom(Newtonsoft.Json.JsonReader,Newtonsoft.Json.Linq.JsonLoadSettings)
extern "C"  void JContainer_ReadTokenFrom_m4243836317 (JContainer_t103968846 * __this, JsonReader_t1817561742 * ___reader, JsonLoadSettings_t3003734344 * ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JContainer::ReadContentFrom(Newtonsoft.Json.JsonReader,Newtonsoft.Json.Linq.JsonLoadSettings)
extern "C"  void JContainer_ReadContentFrom_m2493615709 (JContainer_t103968846 * __this, JsonReader_t1817561742 * ___r, JsonLoadSettings_t3003734344 * ___settings, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Newtonsoft.Json.Linq.JContainer::System.Collections.Generic.IList<Newtonsoft.Json.Linq.JToken>.IndexOf(Newtonsoft.Json.Linq.JToken)
extern "C"  int32_t JContainer_System_Collections_Generic_IListU3CNewtonsoft_Json_Linq_JTokenU3E_IndexOf_m1866871075 (JContainer_t103968846 * __this, JToken_t2367600838 * ___item, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JContainer::System.Collections.Generic.IList<Newtonsoft.Json.Linq.JToken>.Insert(System.Int32,Newtonsoft.Json.Linq.JToken)
extern "C"  void JContainer_System_Collections_Generic_IListU3CNewtonsoft_Json_Linq_JTokenU3E_Insert_m2147831030 (JContainer_t103968846 * __this, int32_t ___index, JToken_t2367600838 * ___item, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JContainer::System.Collections.Generic.IList<Newtonsoft.Json.Linq.JToken>.RemoveAt(System.Int32)
extern "C"  void JContainer_System_Collections_Generic_IListU3CNewtonsoft_Json_Linq_JTokenU3E_RemoveAt_m3020213488 (JContainer_t103968846 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JContainer::System.Collections.Generic.IList<Newtonsoft.Json.Linq.JToken>.get_Item(System.Int32)
extern "C"  JToken_t2367600838 * JContainer_System_Collections_Generic_IListU3CNewtonsoft_Json_Linq_JTokenU3E_get_Item_m173130698 (JContainer_t103968846 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JContainer::System.Collections.Generic.IList<Newtonsoft.Json.Linq.JToken>.set_Item(System.Int32,Newtonsoft.Json.Linq.JToken)
extern "C"  void JContainer_System_Collections_Generic_IListU3CNewtonsoft_Json_Linq_JTokenU3E_set_Item_m2399313037 (JContainer_t103968846 * __this, int32_t ___index, JToken_t2367600838 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JContainer::System.Collections.Generic.ICollection<Newtonsoft.Json.Linq.JToken>.Add(Newtonsoft.Json.Linq.JToken)
extern "C"  void JContainer_System_Collections_Generic_ICollectionU3CNewtonsoft_Json_Linq_JTokenU3E_Add_m1052044175 (JContainer_t103968846 * __this, JToken_t2367600838 * ___item, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JContainer::System.Collections.Generic.ICollection<Newtonsoft.Json.Linq.JToken>.Clear()
extern "C"  void JContainer_System_Collections_Generic_ICollectionU3CNewtonsoft_Json_Linq_JTokenU3E_Clear_m346105383 (JContainer_t103968846 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Linq.JContainer::System.Collections.Generic.ICollection<Newtonsoft.Json.Linq.JToken>.Contains(Newtonsoft.Json.Linq.JToken)
extern "C"  bool JContainer_System_Collections_Generic_ICollectionU3CNewtonsoft_Json_Linq_JTokenU3E_Contains_m379619341 (JContainer_t103968846 * __this, JToken_t2367600838 * ___item, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JContainer::System.Collections.Generic.ICollection<Newtonsoft.Json.Linq.JToken>.CopyTo(Newtonsoft.Json.Linq.JToken[],System.Int32)
extern "C"  void JContainer_System_Collections_Generic_ICollectionU3CNewtonsoft_Json_Linq_JTokenU3E_CopyTo_m1053240295 (JContainer_t103968846 * __this, JTokenU5BU5D_t1133600099* ___array, int32_t ___arrayIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Linq.JContainer::System.Collections.Generic.ICollection<Newtonsoft.Json.Linq.JToken>.get_IsReadOnly()
extern "C"  bool JContainer_System_Collections_Generic_ICollectionU3CNewtonsoft_Json_Linq_JTokenU3E_get_IsReadOnly_m460484819 (JContainer_t103968846 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Linq.JContainer::System.Collections.Generic.ICollection<Newtonsoft.Json.Linq.JToken>.Remove(Newtonsoft.Json.Linq.JToken)
extern "C"  bool JContainer_System_Collections_Generic_ICollectionU3CNewtonsoft_Json_Linq_JTokenU3E_Remove_m2734977160 (JContainer_t103968846 * __this, JToken_t2367600838 * ___item, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JContainer::EnsureValue(System.Object)
extern "C"  JToken_t2367600838 * JContainer_EnsureValue_m1586983144 (JContainer_t103968846 * __this, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Newtonsoft.Json.Linq.JContainer::System.Collections.IList.Add(System.Object)
extern "C"  int32_t JContainer_System_Collections_IList_Add_m2172820322 (JContainer_t103968846 * __this, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JContainer::System.Collections.IList.Clear()
extern "C"  void JContainer_System_Collections_IList_Clear_m2760778018 (JContainer_t103968846 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Linq.JContainer::System.Collections.IList.Contains(System.Object)
extern "C"  bool JContainer_System_Collections_IList_Contains_m1801904926 (JContainer_t103968846 * __this, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Newtonsoft.Json.Linq.JContainer::System.Collections.IList.IndexOf(System.Object)
extern "C"  int32_t JContainer_System_Collections_IList_IndexOf_m761417914 (JContainer_t103968846 * __this, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JContainer::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C"  void JContainer_System_Collections_IList_Insert_m1544504773 (JContainer_t103968846 * __this, int32_t ___index, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Linq.JContainer::System.Collections.IList.get_IsFixedSize()
extern "C"  bool JContainer_System_Collections_IList_get_IsFixedSize_m2896609549 (JContainer_t103968846 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Linq.JContainer::System.Collections.IList.get_IsReadOnly()
extern "C"  bool JContainer_System_Collections_IList_get_IsReadOnly_m1655826508 (JContainer_t103968846 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JContainer::System.Collections.IList.Remove(System.Object)
extern "C"  void JContainer_System_Collections_IList_Remove_m426600259 (JContainer_t103968846 * __this, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JContainer::System.Collections.IList.RemoveAt(System.Int32)
extern "C"  void JContainer_System_Collections_IList_RemoveAt_m1925061845 (JContainer_t103968846 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Newtonsoft.Json.Linq.JContainer::System.Collections.IList.get_Item(System.Int32)
extern "C"  Il2CppObject * JContainer_System_Collections_IList_get_Item_m2800292879 (JContainer_t103968846 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JContainer::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C"  void JContainer_System_Collections_IList_set_Item_m3119322204 (JContainer_t103968846 * __this, int32_t ___index, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JContainer::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C"  void JContainer_System_Collections_ICollection_CopyTo_m2821964308 (JContainer_t103968846 * __this, Il2CppArray * ___array, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Newtonsoft.Json.Linq.JContainer::get_Count()
extern "C"  int32_t JContainer_get_Count_m2042523320 (JContainer_t103968846 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Newtonsoft.Json.Linq.JContainer::System.Collections.ICollection.get_SyncRoot()
extern "C"  Il2CppObject * JContainer_System_Collections_ICollection_get_SyncRoot_m1843143816 (JContainer_t103968846 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
