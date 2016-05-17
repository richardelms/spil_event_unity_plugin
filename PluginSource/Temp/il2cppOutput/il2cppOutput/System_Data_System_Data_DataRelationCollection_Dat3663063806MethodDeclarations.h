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

// System.Data.DataRelationCollection/DataTableRelationCollection
struct DataTableRelationCollection_t3663063806;
// System.Data.DataTable
struct DataTable_t2176726999;
// System.Data.DataSet
struct DataSet_t3654702571;
// System.Data.DataRelation
struct DataRelation_t1483987353;
// System.String
struct String_t;
// System.Collections.ArrayList
struct ArrayList_t2121638921;

#include "codegen/il2cpp-codegen.h"
#include "System_Data_System_Data_DataTable2176726999.h"
#include "mscorlib_System_String968488902.h"
#include "System_Data_System_Data_DataRelation1483987353.h"

// System.Void System.Data.DataRelationCollection/DataTableRelationCollection::.ctor(System.Data.DataTable)
extern "C"  void DataTableRelationCollection__ctor_m1008991701 (DataTableRelationCollection_t3663063806 * __this, DataTable_t2176726999 * ___dataTable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.DataSet System.Data.DataRelationCollection/DataTableRelationCollection::GetDataSet()
extern "C"  DataSet_t3654702571 * DataTableRelationCollection_GetDataSet_m1744288008 (DataTableRelationCollection_t3663063806 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.DataRelation System.Data.DataRelationCollection/DataTableRelationCollection::get_Item(System.String)
extern "C"  DataRelation_t1483987353 * DataTableRelationCollection_get_Item_m3958662168 (DataTableRelationCollection_t3663063806 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.DataRelation System.Data.DataRelationCollection/DataTableRelationCollection::get_Item(System.Int32)
extern "C"  DataRelation_t1483987353 * DataTableRelationCollection_get_Item_m2745365883 (DataTableRelationCollection_t3663063806 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataRelationCollection/DataTableRelationCollection::AddCore(System.Data.DataRelation)
extern "C"  void DataTableRelationCollection_AddCore_m2786873329 (DataTableRelationCollection_t3663063806 * __this, DataRelation_t1483987353 * ___relation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ArrayList System.Data.DataRelationCollection/DataTableRelationCollection::get_List()
extern "C"  ArrayList_t2121638921 * DataTableRelationCollection_get_List_m534691905 (DataTableRelationCollection_t3663063806 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
