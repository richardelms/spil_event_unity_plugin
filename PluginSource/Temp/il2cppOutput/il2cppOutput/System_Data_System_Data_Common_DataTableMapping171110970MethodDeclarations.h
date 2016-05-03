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

// System.Data.Common.DataTableMapping
struct DataTableMapping_t171110970;
// System.String
struct String_t;
// System.Data.Common.DataColumnMapping[]
struct DataColumnMappingU5BU5D_t198231211;
// System.Object
struct Il2CppObject;
// System.Data.Common.DataColumnMappingCollection
struct DataColumnMappingCollection_t30373468;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"

// System.Void System.Data.Common.DataTableMapping::.ctor()
extern "C"  void DataTableMapping__ctor_m239450280 (DataTableMapping_t171110970 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Common.DataTableMapping::.ctor(System.String,System.String)
extern "C"  void DataTableMapping__ctor_m417561110 (DataTableMapping_t171110970 * __this, String_t* ___sourceTable, String_t* ___dataSetTable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Common.DataTableMapping::.ctor(System.String,System.String,System.Data.Common.DataColumnMapping[])
extern "C"  void DataTableMapping__ctor_m3057420478 (DataTableMapping_t171110970 * __this, String_t* ___sourceTable, String_t* ___dataSetTable, DataColumnMappingU5BU5D_t198231211* ___columnMappings, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Data.Common.DataTableMapping::System.ICloneable.Clone()
extern "C"  Il2CppObject * DataTableMapping_System_ICloneable_Clone_m465488727 (DataTableMapping_t171110970 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.Common.DataColumnMappingCollection System.Data.Common.DataTableMapping::get_ColumnMappings()
extern "C"  DataColumnMappingCollection_t30373468 * DataTableMapping_get_ColumnMappings_m2821688027 (DataTableMapping_t171110970 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Data.Common.DataTableMapping::get_DataSetTable()
extern "C"  String_t* DataTableMapping_get_DataSetTable_m2389006264 (DataTableMapping_t171110970 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Common.DataTableMapping::set_DataSetTable(System.String)
extern "C"  void DataTableMapping_set_DataSetTable_m1224049139 (DataTableMapping_t171110970 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Data.Common.DataTableMapping::get_SourceTable()
extern "C"  String_t* DataTableMapping_get_SourceTable_m4257523379 (DataTableMapping_t171110970 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Common.DataTableMapping::set_SourceTable(System.String)
extern "C"  void DataTableMapping_set_SourceTable_m2860690022 (DataTableMapping_t171110970 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Data.Common.DataTableMapping::ToString()
extern "C"  String_t* DataTableMapping_ToString_m2971514437 (DataTableMapping_t171110970 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
