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

// System.Data.Common.DataColumnMappingCollection
struct DataColumnMappingCollection_t30373468;
// System.Object
struct Il2CppObject;
// System.Data.Common.DataColumnMapping
struct DataColumnMapping_t2340601118;
// System.String
struct String_t;
// System.Data.Common.DataColumnMapping[]
struct DataColumnMappingU5BU5D_t198231211;
// System.Array
struct Il2CppArray;
// System.Collections.IEnumerator
struct IEnumerator_t287207039;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "System_Data_System_Data_Common_DataColumnMapping2340601118.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Array2840145358.h"

// System.Void System.Data.Common.DataColumnMappingCollection::.ctor()
extern "C"  void DataColumnMappingCollection__ctor_m1392460168 (DataColumnMappingCollection_t30373468 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Data.Common.DataColumnMappingCollection::System.Collections.ICollection.get_SyncRoot()
extern "C"  Il2CppObject * DataColumnMappingCollection_System_Collections_ICollection_get_SyncRoot_m4262592726 (DataColumnMappingCollection_t30373468 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Data.Common.DataColumnMappingCollection::System.Collections.IList.get_Item(System.Int32)
extern "C"  Il2CppObject * DataColumnMappingCollection_System_Collections_IList_get_Item_m18420957 (DataColumnMappingCollection_t30373468 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Common.DataColumnMappingCollection::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C"  void DataColumnMappingCollection_System_Collections_IList_set_Item_m67556020 (DataColumnMappingCollection_t30373468 * __this, int32_t ___index, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.Common.DataColumnMappingCollection::System.Collections.IList.get_IsReadOnly()
extern "C"  bool DataColumnMappingCollection_System_Collections_IList_get_IsReadOnly_m4213746992 (DataColumnMappingCollection_t30373468 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.Common.DataColumnMappingCollection::System.Collections.IList.get_IsFixedSize()
extern "C"  bool DataColumnMappingCollection_System_Collections_IList_get_IsFixedSize_m587765929 (DataColumnMappingCollection_t30373468 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.Common.DataColumnMappingCollection::get_Count()
extern "C"  int32_t DataColumnMappingCollection_get_Count_m3859439912 (DataColumnMappingCollection_t30373468 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.Common.DataColumnMapping System.Data.Common.DataColumnMappingCollection::get_Item(System.Int32)
extern "C"  DataColumnMapping_t2340601118 * DataColumnMappingCollection_get_Item_m1959158188 (DataColumnMappingCollection_t30373468 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Common.DataColumnMappingCollection::set_Item(System.Int32,System.Data.Common.DataColumnMapping)
extern "C"  void DataColumnMappingCollection_set_Item_m3455593145 (DataColumnMappingCollection_t30373468 * __this, int32_t ___index, DataColumnMapping_t2340601118 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.Common.DataColumnMappingCollection::Add(System.Object)
extern "C"  int32_t DataColumnMappingCollection_Add_m1293724049 (DataColumnMappingCollection_t30373468 * __this, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.Common.DataColumnMapping System.Data.Common.DataColumnMappingCollection::Add(System.String,System.String)
extern "C"  DataColumnMapping_t2340601118 * DataColumnMappingCollection_Add_m2718598938 (DataColumnMappingCollection_t30373468 * __this, String_t* ___sourceColumn, String_t* ___dataSetColumn, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Common.DataColumnMappingCollection::AddRange(System.Data.Common.DataColumnMapping[])
extern "C"  void DataColumnMappingCollection_AddRange_m777182438 (DataColumnMappingCollection_t30373468 * __this, DataColumnMappingU5BU5D_t198231211* ___values, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Common.DataColumnMappingCollection::Clear()
extern "C"  void DataColumnMappingCollection_Clear_m3093560755 (DataColumnMappingCollection_t30373468 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.Common.DataColumnMappingCollection::Contains(System.Object)
extern "C"  bool DataColumnMappingCollection_Contains_m4276129487 (DataColumnMappingCollection_t30373468 * __this, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Common.DataColumnMappingCollection::CopyTo(System.Array,System.Int32)
extern "C"  void DataColumnMappingCollection_CopyTo_m1541197925 (DataColumnMappingCollection_t30373468 * __this, Il2CppArray * ___array, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Common.DataColumnMappingCollection::CopyTo(System.Data.Common.DataColumnMapping[],System.Int32)
extern "C"  void DataColumnMappingCollection_CopyTo_m3347177405 (DataColumnMappingCollection_t30373468 * __this, DataColumnMappingU5BU5D_t198231211* ___arr, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Data.Common.DataColumnMappingCollection::GetEnumerator()
extern "C"  Il2CppObject * DataColumnMappingCollection_GetEnumerator_m4047404482 (DataColumnMappingCollection_t30373468 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.Common.DataColumnMappingCollection::IndexOf(System.Object)
extern "C"  int32_t DataColumnMappingCollection_IndexOf_m1675341673 (DataColumnMappingCollection_t30373468 * __this, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Common.DataColumnMappingCollection::Insert(System.Int32,System.Object)
extern "C"  void DataColumnMappingCollection_Insert_m2480215700 (DataColumnMappingCollection_t30373468 * __this, int32_t ___index, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Common.DataColumnMappingCollection::Remove(System.Object)
extern "C"  void DataColumnMappingCollection_Remove_m3373888020 (DataColumnMappingCollection_t30373468 * __this, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Common.DataColumnMappingCollection::RemoveAt(System.Int32)
extern "C"  void DataColumnMappingCollection_RemoveAt_m3096669220 (DataColumnMappingCollection_t30373468 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
