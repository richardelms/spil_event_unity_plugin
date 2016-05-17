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

// System.Data.DataColumnCollection
struct DataColumnCollection_t3528392753;
// System.Data.DataTable
struct DataTable_t2176726999;
// System.ComponentModel.CollectionChangeEventHandler
struct CollectionChangeEventHandler_t609299751;
// System.Data.DataColumn
struct DataColumn_t3354469747;
// System.String
struct String_t;
// System.Collections.ArrayList
struct ArrayList_t2121638921;
// System.Type
struct Type_t;
// System.ComponentModel.CollectionChangeEventArgs
struct CollectionChangeEventArgs_t3787252946;
// System.Object
struct Il2CppObject;
// System.ComponentModel.PropertyChangedEventArgs
struct PropertyChangedEventArgs_t569023745;

#include "codegen/il2cpp-codegen.h"
#include "System_Data_System_Data_DataTable2176726999.h"
#include "System_System_ComponentModel_CollectionChangeEventH609299751.h"
#include "mscorlib_System_String968488902.h"
#include "System_Data_System_Data_DataColumn3354469747.h"
#include "mscorlib_System_Type2779229935.h"
#include "System_System_ComponentModel_CollectionChangeEvent3787252946.h"
#include "mscorlib_System_Object837106420.h"
#include "System_System_ComponentModel_PropertyChangedEventAr569023745.h"

// System.Void System.Data.DataColumnCollection::.ctor(System.Data.DataTable)
extern "C"  void DataColumnCollection__ctor_m2797877248 (DataColumnCollection_t3528392753 * __this, DataTable_t2176726999 * ___table, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataColumnCollection::.cctor()
extern "C"  void DataColumnCollection__cctor_m889535002 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataColumnCollection::add_CollectionChanged(System.ComponentModel.CollectionChangeEventHandler)
extern "C"  void DataColumnCollection_add_CollectionChanged_m2750283144 (DataColumnCollection_t3528392753 * __this, CollectionChangeEventHandler_t609299751 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataColumnCollection::remove_CollectionChanged(System.ComponentModel.CollectionChangeEventHandler)
extern "C"  void DataColumnCollection_remove_CollectionChanged_m1986357451 (DataColumnCollection_t3528392753 * __this, CollectionChangeEventHandler_t609299751 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.DataColumn System.Data.DataColumnCollection::get_Item(System.Int32)
extern "C"  DataColumn_t3354469747 * DataColumnCollection_get_Item_m2766080524 (DataColumnCollection_t3528392753 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.DataColumn System.Data.DataColumnCollection::get_Item(System.String)
extern "C"  DataColumn_t3354469747 * DataColumnCollection_get_Item_m305848743 (DataColumnCollection_t3528392753 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ArrayList System.Data.DataColumnCollection::get_List()
extern "C"  ArrayList_t2121638921 * DataColumnCollection_get_List_m605018668 (DataColumnCollection_t3528392753 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ArrayList System.Data.DataColumnCollection::get_AutoIncrmentColumns()
extern "C"  ArrayList_t2121638921 * DataColumnCollection_get_AutoIncrmentColumns_m1622087792 (DataColumnCollection_t3528392753 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.DataColumn System.Data.DataColumnCollection::Add()
extern "C"  DataColumn_t3354469747 * DataColumnCollection_Add_m1056123332 (DataColumnCollection_t3528392753 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataColumnCollection::RegisterName(System.String,System.Data.DataColumn)
extern "C"  void DataColumnCollection_RegisterName_m2718740766 (DataColumnCollection_t3528392753 * __this, String_t* ___name, DataColumn_t3354469747 * ___column, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataColumnCollection::UnregisterName(System.String)
extern "C"  void DataColumnCollection_UnregisterName_m972208106 (DataColumnCollection_t3528392753 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Data.DataColumnCollection::GetNextDefaultColumnName()
extern "C"  String_t* DataColumnCollection_GetNextDefaultColumnName_m3631423181 (DataColumnCollection_t3528392753 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Data.DataColumnCollection::MakeName(System.Int32)
extern "C"  String_t* DataColumnCollection_MakeName_m1797942398 (Il2CppObject * __this /* static, unused */, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataColumnCollection::Add(System.Data.DataColumn)
extern "C"  void DataColumnCollection_Add_m3379764877 (DataColumnCollection_t3528392753 * __this, DataColumn_t3354469747 * ___column, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.DataColumn System.Data.DataColumnCollection::Add(System.String,System.Type)
extern "C"  DataColumn_t3354469747 * DataColumnCollection_Add_m2541835761 (DataColumnCollection_t3528392753 * __this, String_t* ___columnName, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.DataColumnCollection::Contains(System.String)
extern "C"  bool DataColumnCollection_Contains_m1368116008 (DataColumnCollection_t3528392753 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.DataColumnCollection::IndexOf(System.Data.DataColumn)
extern "C"  int32_t DataColumnCollection_IndexOf_m278930129 (DataColumnCollection_t3528392753 * __this, DataColumn_t3354469747 * ___column, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.DataColumnCollection::IndexOf(System.String)
extern "C"  int32_t DataColumnCollection_IndexOf_m3203422732 (DataColumnCollection_t3528392753 * __this, String_t* ___columnName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataColumnCollection::OnCollectionChanged(System.ComponentModel.CollectionChangeEventArgs)
extern "C"  void DataColumnCollection_OnCollectionChanged_m1325716996 (DataColumnCollection_t3528392753 * __this, CollectionChangeEventArgs_t3787252946 * ___ccevent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataColumnCollection::UpdateAutoIncrement(System.Data.DataColumn,System.Boolean)
extern "C"  void DataColumnCollection_UpdateAutoIncrement_m1647279354 (DataColumnCollection_t3528392753 * __this, DataColumn_t3354469747 * ___col, bool ___isAutoIncrement, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.DataColumnCollection::IndexOf(System.String,System.Boolean)
extern "C"  int32_t DataColumnCollection_IndexOf_m1764171761 (DataColumnCollection_t3528392753 * __this, String_t* ___name, bool ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataColumnCollection::OnCollectionMetaDataChanged(System.ComponentModel.CollectionChangeEventArgs)
extern "C"  void DataColumnCollection_OnCollectionMetaDataChanged_m2974413683 (DataColumnCollection_t3528392753 * __this, CollectionChangeEventArgs_t3787252946 * ___ccevent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataColumnCollection::ColumnPropertyChanged(System.Object,System.ComponentModel.PropertyChangedEventArgs)
extern "C"  void DataColumnCollection_ColumnPropertyChanged_m358087857 (DataColumnCollection_t3528392753 * __this, Il2CppObject * ___sender, PropertyChangedEventArgs_t569023745 * ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
