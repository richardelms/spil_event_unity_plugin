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

// System.Collections.Specialized.StringCollection
struct StringCollection_t604413498;
// System.Object
struct Il2CppObject;
// System.Array
struct Il2CppArray;
// System.Collections.IEnumerator
struct IEnumerator_t287207039;
// System.String
struct String_t;
// System.Collections.Specialized.StringEnumerator
struct StringEnumerator_t1425065824;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_Array2840145358.h"
#include "mscorlib_System_String968488902.h"

// System.Void System.Collections.Specialized.StringCollection::.ctor()
extern "C"  void StringCollection__ctor_m153666782 (StringCollection_t604413498 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Specialized.StringCollection::System.Collections.IList.get_IsReadOnly()
extern "C"  bool StringCollection_System_Collections_IList_get_IsReadOnly_m2315349158 (StringCollection_t604413498 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Specialized.StringCollection::System.Collections.IList.get_IsFixedSize()
extern "C"  bool StringCollection_System_Collections_IList_get_IsFixedSize_m1866975219 (StringCollection_t604413498 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Specialized.StringCollection::System.Collections.IList.get_Item(System.Int32)
extern "C"  Il2CppObject * StringCollection_System_Collections_IList_get_Item_m2697350461 (StringCollection_t604413498 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.StringCollection::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C"  void StringCollection_System_Collections_IList_set_Item_m3949246858 (StringCollection_t604413498 * __this, int32_t ___index, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Specialized.StringCollection::System.Collections.IList.Add(System.Object)
extern "C"  int32_t StringCollection_System_Collections_IList_Add_m1069392572 (StringCollection_t604413498 * __this, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Specialized.StringCollection::System.Collections.IList.Contains(System.Object)
extern "C"  bool StringCollection_System_Collections_IList_Contains_m3716457860 (StringCollection_t604413498 * __this, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Specialized.StringCollection::System.Collections.IList.IndexOf(System.Object)
extern "C"  int32_t StringCollection_System_Collections_IList_IndexOf_m3182828308 (StringCollection_t604413498 * __this, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.StringCollection::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C"  void StringCollection_System_Collections_IList_Insert_m401235571 (StringCollection_t604413498 * __this, int32_t ___index, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.StringCollection::System.Collections.IList.Remove(System.Object)
extern "C"  void StringCollection_System_Collections_IList_Remove_m55692245 (StringCollection_t604413498 * __this, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.StringCollection::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C"  void StringCollection_System_Collections_ICollection_CopyTo_m980608550 (StringCollection_t604413498 * __this, Il2CppArray * ___array, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Collections.Specialized.StringCollection::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Il2CppObject * StringCollection_System_Collections_IEnumerable_GetEnumerator_m1161950369 (StringCollection_t604413498 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Collections.Specialized.StringCollection::get_Item(System.Int32)
extern "C"  String_t* StringCollection_get_Item_m2870174736 (StringCollection_t604413498 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.StringCollection::set_Item(System.Int32,System.String)
extern "C"  void StringCollection_set_Item_m646958915 (StringCollection_t604413498 * __this, int32_t ___index, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Specialized.StringCollection::get_Count()
extern "C"  int32_t StringCollection_get_Count_m2308791826 (StringCollection_t604413498 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Specialized.StringCollection::Add(System.String)
extern "C"  int32_t StringCollection_Add_m1879838421 (StringCollection_t604413498 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.StringCollection::Clear()
extern "C"  void StringCollection_Clear_m1854767369 (StringCollection_t604413498 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Specialized.StringCollection::Contains(System.String)
extern "C"  bool StringCollection_Contains_m3621141811 (StringCollection_t604413498 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Specialized.StringEnumerator System.Collections.Specialized.StringCollection::GetEnumerator()
extern "C"  StringEnumerator_t1425065824 * StringCollection_GetEnumerator_m2887281143 (StringCollection_t604413498 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Specialized.StringCollection::IndexOf(System.String)
extern "C"  int32_t StringCollection_IndexOf_m183974317 (StringCollection_t604413498 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.StringCollection::Insert(System.Int32,System.String)
extern "C"  void StringCollection_Insert_m466422508 (StringCollection_t604413498 * __this, int32_t ___index, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Specialized.StringCollection::get_IsReadOnly()
extern "C"  bool StringCollection_get_IsReadOnly_m3024701829 (StringCollection_t604413498 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.StringCollection::Remove(System.String)
extern "C"  void StringCollection_Remove_m1834632280 (StringCollection_t604413498 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.StringCollection::RemoveAt(System.Int32)
extern "C"  void StringCollection_RemoveAt_m919867918 (StringCollection_t604413498 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Specialized.StringCollection::get_SyncRoot()
extern "C"  Il2CppObject * StringCollection_get_SyncRoot_m3145314167 (StringCollection_t604413498 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
