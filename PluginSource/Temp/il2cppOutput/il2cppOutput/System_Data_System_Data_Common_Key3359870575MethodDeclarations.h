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

// System.Data.Common.Key
struct Key_t3359870575;
// System.Data.DataTable
struct DataTable_t2176726999;
// System.Data.DataColumn[]
struct DataColumnU5BU5D_t3410743138;
// System.ComponentModel.ListSortDirection[]
struct ListSortDirectionU5BU5D_t3969845317;
// Mono.Data.SqlExpressions.IExpression
struct IExpression_t3509849443;
// System.Data.DataRow
struct DataRow_t3654701923;
// System.Data.DataColumn
struct DataColumn_t3354469747;

#include "codegen/il2cpp-codegen.h"
#include "System_Data_System_Data_DataTable2176726999.h"
#include "System_Data_System_Data_DataViewRowState3383768889.h"
#include "System_Data_System_Data_DataRow3654701923.h"
#include "System_Data_System_Data_DataRowState2071073396.h"
#include "System_Data_System_Data_DataRowVersion2975473339.h"
#include "System_Data_System_Data_DataColumn3354469747.h"

// System.Void System.Data.Common.Key::.ctor(System.Data.DataTable,System.Data.DataColumn[],System.ComponentModel.ListSortDirection[],System.Data.DataViewRowState,Mono.Data.SqlExpressions.IExpression)
extern "C"  void Key__ctor_m3817898557 (Key_t3359870575 * __this, DataTable_t2176726999 * ___table, DataColumnU5BU5D_t3410743138* ___columns, ListSortDirectionU5BU5D_t3969845317* ___sort, int32_t ___rowState, Il2CppObject * ___filter, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.DataColumn[] System.Data.Common.Key::get_Columns()
extern "C"  DataColumnU5BU5D_t3410743138* Key_get_Columns_m3452334555 (Key_t3359870575 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.DataTable System.Data.Common.Key::get_Table()
extern "C"  DataTable_t2176726999 * Key_get_Table_m3243731172 (Key_t3359870575 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.ListSortDirection[] System.Data.Common.Key::get_Sort()
extern "C"  ListSortDirectionU5BU5D_t3969845317* Key_get_Sort_m2410406695 (Key_t3359870575 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.DataViewRowState System.Data.Common.Key::get_RowStateFilter()
extern "C"  int32_t Key_get_RowStateFilter_m1456722479 (Key_t3359870575 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.Common.Key::get_HasFilter()
extern "C"  bool Key_get_HasFilter_m676961458 (Key_t3359870575 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.Common.Key::CompareRecords(System.Int32,System.Int32)
extern "C"  int32_t Key_CompareRecords_m3973084566 (Key_t3359870575 * __this, int32_t ___first, int32_t ___second, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.Common.Key::GetRecord(System.Data.DataRow)
extern "C"  int32_t Key_GetRecord_m3953096881 (Key_t3359870575 * __this, DataRow_t3654701923 * ___row, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.Common.Key::CanContain(System.Int32)
extern "C"  bool Key_CanContain_m2916235470 (Key_t3359870575 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.Common.Key::ContainsVersion(System.Data.DataRowState,System.Data.DataRowVersion)
extern "C"  bool Key_ContainsVersion_m1440289341 (Key_t3359870575 * __this, int32_t ___state, int32_t ___version, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.Common.Key::GetRecord(System.Data.DataRow,System.Data.DataViewRowState)
extern "C"  int32_t Key_GetRecord_m3175749770 (Il2CppObject * __this /* static, unused */, DataRow_t3654701923 * ___row, int32_t ___rowStateFilter, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.Common.Key::Equals(System.Data.DataColumn[],System.ComponentModel.ListSortDirection[],System.Data.DataViewRowState,Mono.Data.SqlExpressions.IExpression)
extern "C"  bool Key_Equals_m1523817069 (Key_t3359870575 * __this, DataColumnU5BU5D_t3410743138* ___columns, ListSortDirectionU5BU5D_t3969845317* ___sort, int32_t ___rowState, Il2CppObject * ___filter, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.Common.Key::DependsOn(System.Data.DataColumn)
extern "C"  bool Key_DependsOn_m2574930314 (Key_t3359870575 * __this, DataColumn_t3354469747 * ___column, const MethodInfo* method) IL2CPP_METHOD_ATTR;
