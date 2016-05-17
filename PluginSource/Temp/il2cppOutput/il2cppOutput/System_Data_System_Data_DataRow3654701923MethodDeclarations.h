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

// System.Data.DataRow
struct DataRow_t3654701923;
// System.Data.DataRowBuilder
struct DataRowBuilder_t2854809982;
// System.Collections.ArrayList
struct ArrayList_t2121638921;
// System.Object
struct Il2CppObject;
// System.String
struct String_t;
// System.Data.DataColumn
struct DataColumn_t3354469747;
// System.Data.DataTable
struct DataTable_t2176726999;
// System.Data.ForeignKeyConstraint
struct ForeignKeyConstraint_t1848099579;
// System.Data.DataRow[]
struct DataRowU5BU5D_t1036778418;
// System.Data.DataRelation
struct DataRelation_t1483987353;
// System.Data.DataColumn[]
struct DataColumnU5BU5D_t3410743138;

#include "codegen/il2cpp-codegen.h"
#include "System_Data_System_Data_DataRowBuilder2854809982.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Object837106420.h"
#include "System_Data_System_Data_DataColumn3354469747.h"
#include "System_Data_System_Data_DataRowVersion2975473339.h"
#include "System_Data_System_Data_DataRowState2071073396.h"
#include "System_Data_System_Data_DataRowAction22198713.h"
#include "System_Data_System_Data_ForeignKeyConstraint1848099579.h"
#include "System_Data_System_Data_Rule549424335.h"
#include "System_Data_System_Data_DataRelation1483987353.h"
#include "System_Data_System_Data_DataRow3654701923.h"

// System.Void System.Data.DataRow::.ctor(System.Data.DataRowBuilder)
extern "C"  void DataRow__ctor_m2196040853 (DataRow_t3654701923 * __this, DataRowBuilder_t2854809982 * ___builder, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ArrayList System.Data.DataRow::get_ColumnErrors()
extern "C"  ArrayList_t2121638921 * DataRow_get_ColumnErrors_m569544277 (DataRow_t3654701923 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.DataRow::get_HasErrors()
extern "C"  bool DataRow_get_HasErrors_m887312841 (DataRow_t3654701923 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Data.DataRow::get_Item(System.String)
extern "C"  Il2CppObject * DataRow_get_Item_m993251260 (DataRow_t3654701923 * __this, String_t* ___columnName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataRow::set_Item(System.String,System.Object)
extern "C"  void DataRow_set_Item_m1424269409 (DataRow_t3654701923 * __this, String_t* ___columnName, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Data.DataRow::get_Item(System.Data.DataColumn)
extern "C"  Il2CppObject * DataRow_get_Item_m854463265 (DataRow_t3654701923 * __this, DataColumn_t3354469747 * ___column, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataRow::set_Item(System.Data.DataColumn,System.Object)
extern "C"  void DataRow_set_Item_m3968127800 (DataRow_t3654701923 * __this, DataColumn_t3354469747 * ___column, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataRow::set_Item(System.Int32,System.Object)
extern "C"  void DataRow_set_Item_m3063068206 (DataRow_t3654701923 * __this, int32_t ___columnIndex, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Data.DataRow::get_Item(System.String,System.Data.DataRowVersion)
extern "C"  Il2CppObject * DataRow_get_Item_m199809309 (DataRow_t3654701923 * __this, String_t* ___columnName, int32_t ___version, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Data.DataRow::get_Item(System.Data.DataColumn,System.Data.DataRowVersion)
extern "C"  Il2CppObject * DataRow_get_Item_m3344211608 (DataRow_t3654701923 * __this, DataColumn_t3354469747 * ___column, int32_t ___version, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Data.DataRow::get_Item(System.Int32,System.Data.DataRowVersion)
extern "C"  Il2CppObject * DataRow_get_Item_m9271970 (DataRow_t3654701923 * __this, int32_t ___columnIndex, int32_t ___version, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.DataRowState System.Data.DataRow::get_RowState()
extern "C"  int32_t DataRow_get_RowState_m2703090418 (DataRow_t3654701923 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.DataTable System.Data.DataRow::get_Table()
extern "C"  DataTable_t2176726999 * DataRow_get_Table_m1600403292 (DataRow_t3654701923 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.DataRow::get_XmlRowID()
extern "C"  int32_t DataRow_get_XmlRowID_m1613798402 (DataRow_t3654701923 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataRow::set_XmlRowID(System.Int32)
extern "C"  void DataRow_set_XmlRowID_m372071979 (DataRow_t3654701923 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.DataRow::get_RowID()
extern "C"  int32_t DataRow_get_RowID_m2759284531 (DataRow_t3654701923 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataRow::set_RowID(System.Int32)
extern "C"  void DataRow_set_RowID_m479045420 (DataRow_t3654701923 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.DataRow::get_Original()
extern "C"  int32_t DataRow_get_Original_m3279993461 (DataRow_t3654701923 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataRow::set_Original(System.Int32)
extern "C"  void DataRow_set_Original_m2166122526 (DataRow_t3654701923 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.DataRow::get_Current()
extern "C"  int32_t DataRow_get_Current_m1655464951 (DataRow_t3654701923 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataRow::set_Current(System.Int32)
extern "C"  void DataRow_set_Current_m2833941488 (DataRow_t3654701923 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.DataRow::get_Proposed()
extern "C"  int32_t DataRow_get_Proposed_m229542602 (DataRow_t3654701923 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataRow::set_Proposed(System.Int32)
extern "C"  void DataRow_set_Proposed_m2526241011 (DataRow_t3654701923 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataRow::AttachAt(System.Int32,System.Data.DataRowAction)
extern "C"  void DataRow_AttachAt_m751157139 (DataRow_t3654701923 * __this, int32_t ___row_id, int32_t ___action, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataRow::Detach()
extern "C"  void DataRow_Detach_m1755484690 (DataRow_t3654701923 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataRow::ImportRecord(System.Int32)
extern "C"  void DataRow_ImportRecord_m4223199590 (DataRow_t3654701923 * __this, int32_t ___record, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataRow::CheckValue(System.Object,System.Data.DataColumn)
extern "C"  void DataRow_CheckValue_m3834262997 (DataRow_t3654701923 * __this, Il2CppObject * ___v, DataColumn_t3354469747 * ___col, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataRow::CheckValue(System.Object,System.Data.DataColumn,System.Boolean)
extern "C"  void DataRow_CheckValue_m583211272 (DataRow_t3654701923 * __this, Il2CppObject * ___v, DataColumn_t3354469747 * ___col, bool ___doROCheck, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Data.DataRow::get_RowError()
extern "C"  String_t* DataRow_get_RowError_m3566181971 (DataRow_t3654701923 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataRow::set_RowError(System.String)
extern "C"  void DataRow_set_RowError_m4119209400 (DataRow_t3654701923 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.DataRow::IndexFromVersion(System.Data.DataRowVersion)
extern "C"  int32_t DataRow_IndexFromVersion_m2947193994 (DataRow_t3654701923 * __this, int32_t ___version, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.DataRow::AssertValidVersionIndex(System.Data.DataRowVersion,System.Int32)
extern "C"  int32_t DataRow_AssertValidVersionIndex_m2007615181 (DataRow_t3654701923 * __this, int32_t ___version, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataRow::SetOriginalValue(System.String,System.Object)
extern "C"  void DataRow_SetOriginalValue_m2873008403 (DataRow_t3654701923 * __this, String_t* ___columnName, Il2CppObject * ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataRow::AcceptChanges()
extern "C"  void DataRow_AcceptChanges_m818702046 (DataRow_t3654701923 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataRow::BeginEdit()
extern "C"  void DataRow_BeginEdit_m434240406 (DataRow_t3654701923 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataRow::Delete()
extern "C"  void DataRow_Delete_m1530649130 (DataRow_t3654701923 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataRow::CheckChildRows(System.Data.DataRowAction)
extern "C"  void DataRow_CheckChildRows_m1919817733 (DataRow_t3654701923 * __this, int32_t ___action, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataRow::CheckChildRows(System.Data.ForeignKeyConstraint,System.Data.DataRowAction,System.Data.Rule)
extern "C"  void DataRow_CheckChildRows_m548639899 (DataRow_t3654701923 * __this, ForeignKeyConstraint_t1848099579 * ___fkc, int32_t ___action, int32_t ___rule, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataRow::EndEdit()
extern "C"  void DataRow_EndEdit_m1757607624 (DataRow_t3654701923 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.DataRow[] System.Data.DataRow::GetChildRows(System.Data.DataRelation)
extern "C"  DataRowU5BU5D_t1036778418* DataRow_GetChildRows_m716078221 (DataRow_t3654701923 * __this, DataRelation_t1483987353 * ___relation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.DataRow[] System.Data.DataRow::GetChildRows(System.Data.DataRelation,System.Data.DataRowVersion)
extern "C"  DataRowU5BU5D_t1036778418* DataRow_GetChildRows_m1271509420 (DataRow_t3654701923 * __this, DataRelation_t1483987353 * ___relation, int32_t ___version, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.DataRow[] System.Data.DataRow::GetChildRows(System.Data.ForeignKeyConstraint,System.Data.DataRowVersion)
extern "C"  DataRowU5BU5D_t1036778418* DataRow_GetChildRows_m1360592398 (DataRow_t3654701923 * __this, ForeignKeyConstraint_t1848099579 * ___fkc, int32_t ___version, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Data.DataRow::GetColumnError(System.Data.DataColumn)
extern "C"  String_t* DataRow_GetColumnError_m3433432819 (DataRow_t3654701923 * __this, DataColumn_t3354469747 * ___column, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Data.DataRow::GetColumnError(System.Int32)
extern "C"  String_t* DataRow_GetColumnError_m277002153 (DataRow_t3654701923 * __this, int32_t ___columnIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.DataColumn[] System.Data.DataRow::GetColumnsInError()
extern "C"  DataColumnU5BU5D_t3410743138* DataRow_GetColumnsInError_m2033488203 (DataRow_t3654701923 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.DataRow System.Data.DataRow::GetParentRow(System.Data.DataRelation)
extern "C"  DataRow_t3654701923 * DataRow_GetParentRow_m2464036582 (DataRow_t3654701923 * __this, DataRelation_t1483987353 * ___relation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.DataRow System.Data.DataRow::GetParentRow(System.Data.DataRelation,System.Data.DataRowVersion)
extern "C"  DataRow_t3654701923 * DataRow_GetParentRow_m3594602419 (DataRow_t3654701923 * __this, DataRelation_t1483987353 * ___relation, int32_t ___version, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.DataRow[] System.Data.DataRow::GetParentRows(System.Data.DataRelation)
extern "C"  DataRowU5BU5D_t1036778418* DataRow_GetParentRows_m3476645335 (DataRow_t3654701923 * __this, DataRelation_t1483987353 * ___relation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.DataRow[] System.Data.DataRow::GetParentRows(System.Data.DataRelation,System.Data.DataRowVersion)
extern "C"  DataRowU5BU5D_t1036778418* DataRow_GetParentRows_m4246817314 (DataRow_t3654701923 * __this, DataRelation_t1483987353 * ___relation, int32_t ___version, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.DataRow::HasVersion(System.Data.DataRowVersion)
extern "C"  bool DataRow_HasVersion_m2493681318 (DataRow_t3654701923 * __this, int32_t ___version, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.DataRow::IsNull(System.Data.DataColumn)
extern "C"  bool DataRow_IsNull_m504642401 (DataRow_t3654701923 * __this, DataColumn_t3354469747 * ___column, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.DataRow::IsNull(System.Data.DataColumn,System.Data.DataRowVersion)
extern "C"  bool DataRow_IsNull_m4057419352 (DataRow_t3654701923 * __this, DataColumn_t3354469747 * ___column, int32_t ___version, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.DataRow::IsNullColumns(System.Data.DataColumn[])
extern "C"  bool DataRow_IsNullColumns_m801864082 (DataRow_t3654701923 * __this, DataColumnU5BU5D_t3410743138* ___columns, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataRow::RejectChanges()
extern "C"  void DataRow_RejectChanges_m3792839207 (DataRow_t3654701923 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataRow::SetColumnError(System.Data.DataColumn,System.String)
extern "C"  void DataRow_SetColumnError_m8950758 (DataRow_t3654701923 * __this, DataColumn_t3354469747 * ___column, String_t* ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataRow::SetColumnError(System.Int32,System.String)
extern "C"  void DataRow_SetColumnError_m8226524 (DataRow_t3654701923 * __this, int32_t ___columnIndex, String_t* ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataRow::SetColumnError(System.String,System.String)
extern "C"  void DataRow_SetColumnError_m3581801103 (DataRow_t3654701923 * __this, String_t* ___columnName, String_t* ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataRow::SetNull(System.Data.DataColumn)
extern "C"  void DataRow_SetNull_m295724775 (DataRow_t3654701923 * __this, DataColumn_t3354469747 * ___column, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataRow::CopyValuesToRow(System.Data.DataRow)
extern "C"  void DataRow_CopyValuesToRow_m1210912892 (DataRow_t3654701923 * __this, DataRow_t3654701923 * ___row, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataRow::MergeValuesToRow(System.Data.DataRow,System.Boolean)
extern "C"  void DataRow_MergeValuesToRow_m2699560602 (DataRow_t3654701923 * __this, DataRow_t3654701923 * ___row, bool ___preserveChanges, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataRow::CopyErrors(System.Data.DataRow)
extern "C"  void DataRow_CopyErrors_m3322137000 (DataRow_t3654701923 * __this, DataRow_t3654701923 * ___row, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.DataRow::IsRowChanged(System.Data.DataRowState)
extern "C"  bool DataRow_IsRowChanged_m1950282291 (DataRow_t3654701923 * __this, int32_t ___rowState, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataRow::Validate()
extern "C"  void DataRow_Validate_m268216149 (DataRow_t3654701923 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataRow::AssertConstraints()
extern "C"  void DataRow_AssertConstraints_m2942497555 (DataRow_t3654701923 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataRow::CheckReadOnlyStatus()
extern "C"  void DataRow_CheckReadOnlyStatus_m2739360927 (DataRow_t3654701923 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
