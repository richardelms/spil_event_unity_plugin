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

// System.Data.DataTableCollection
struct DataTableCollection_t2915263893;
// System.Data.DataSet
struct DataSet_t3654702571;
// System.Data.DataTable
struct DataTable_t2176726999;
// System.String
struct String_t;
// System.Collections.ArrayList
struct ArrayList_t2121638921;
// System.ComponentModel.CollectionChangeEventArgs
struct CollectionChangeEventArgs_t3787252946;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2995724695;

#include "codegen/il2cpp-codegen.h"
#include "System_Data_System_Data_DataSet3654702571.h"
#include "mscorlib_System_String968488902.h"
#include "System_Data_System_Data_DataTable2176726999.h"
#include "System_System_ComponentModel_CollectionChangeEvent3787252946.h"
#include "mscorlib_System_Runtime_Serialization_Serializatio2995724695.h"

// System.Void System.Data.DataTableCollection::.ctor(System.Data.DataSet)
extern "C"  void DataTableCollection__ctor_m2091803180 (DataTableCollection_t2915263893 * __this, DataSet_t3654702571 * ___dataSet, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.DataTable System.Data.DataTableCollection::get_Item(System.Int32)
extern "C"  DataTable_t2176726999 * DataTableCollection_get_Item_m1735387050 (DataTableCollection_t2915263893 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.DataTable System.Data.DataTableCollection::get_Item(System.String)
extern "C"  DataTable_t2176726999 * DataTableCollection_get_Item_m2714089417 (DataTableCollection_t2915263893 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ArrayList System.Data.DataTableCollection::get_List()
extern "C"  ArrayList_t2121638921 * DataTableCollection_get_List_m1370927236 (DataTableCollection_t2915263893 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataTableCollection::Add(System.Data.DataTable)
extern "C"  void DataTableCollection_Add_m3310506721 (DataTableCollection_t2915263893 * __this, DataTable_t2176726999 * ___table, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.DataTableCollection::Contains(System.String)
extern "C"  bool DataTableCollection_Contains_m3063800444 (DataTableCollection_t2915263893 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.DataTableCollection::IndexOf(System.Data.DataTable)
extern "C"  int32_t DataTableCollection_IndexOf_m1846468053 (DataTableCollection_t2915263893 * __this, DataTable_t2176726999 * ___table, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataTableCollection::Remove(System.Data.DataTable)
extern "C"  void DataTableCollection_Remove_m696912830 (DataTableCollection_t2915263893 * __this, DataTable_t2176726999 * ___table, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataTableCollection::OnCollectionChanging(System.ComponentModel.CollectionChangeEventArgs)
extern "C"  void DataTableCollection_OnCollectionChanging_m3941677617 (DataTableCollection_t2915263893 * __this, CollectionChangeEventArgs_t3787252946 * ___ccevent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataTableCollection::OnCollectionChanged(System.ComponentModel.CollectionChangeEventArgs)
extern "C"  void DataTableCollection_OnCollectionChanged_m4105533700 (DataTableCollection_t2915263893 * __this, CollectionChangeEventArgs_t3787252946 * ___ccevent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.DataTableCollection::IndexOf(System.String,System.Boolean,System.Int32)
extern "C"  int32_t DataTableCollection_IndexOf_m2033331006 (DataTableCollection_t2915263893 * __this, String_t* ___name, bool ___error, int32_t ___start, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataTableCollection::NameTable(System.Data.DataTable)
extern "C"  void DataTableCollection_NameTable_m2995550527 (DataTableCollection_t2915263893 * __this, DataTable_t2176726999 * ___Table, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.DataTableCollection::CanRemove(System.Data.DataTable,System.Boolean)
extern "C"  bool DataTableCollection_CanRemove_m2862103513 (DataTableCollection_t2915263893 * __this, DataTable_t2176726999 * ___table, bool ___throwException, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataTableCollection::RaiseForeignKeyReferenceException(System.String,System.String)
extern "C"  void DataTableCollection_RaiseForeignKeyReferenceException_m1556387154 (DataTableCollection_t2915263893 * __this, String_t* ___table, String_t* ___constraint, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.DataTableCollection::IndexOf(System.String,System.String)
extern "C"  int32_t DataTableCollection_IndexOf_m2727452160 (DataTableCollection_t2915263893 * __this, String_t* ___tableName, String_t* ___tableNamespace, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.DataTableCollection::IndexOf(System.String,System.String,System.Boolean)
extern "C"  int32_t DataTableCollection_IndexOf_m3682530685 (DataTableCollection_t2915263893 * __this, String_t* ___name, String_t* ___ns, bool ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.DataTableCollection::IndexOf(System.String,System.Boolean)
extern "C"  int32_t DataTableCollection_IndexOf_m3157694009 (DataTableCollection_t2915263893 * __this, String_t* ___name, bool ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataTableCollection::BinarySerialize_Schema(System.Runtime.Serialization.SerializationInfo)
extern "C"  void DataTableCollection_BinarySerialize_Schema_m1247363655 (DataTableCollection_t2915263893 * __this, SerializationInfo_t2995724695 * ___si, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataTableCollection::BinarySerialize_Data(System.Runtime.Serialization.SerializationInfo)
extern "C"  void DataTableCollection_BinarySerialize_Data_m719061584 (DataTableCollection_t2915263893 * __this, SerializationInfo_t2995724695 * ___si, const MethodInfo* method) IL2CPP_METHOD_ATTR;
