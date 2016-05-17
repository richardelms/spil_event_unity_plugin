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

// Mono.Data.SqlExpressions.ColumnReference
struct ColumnReference_t2222606871;
// System.String
struct String_t;
// System.Object
struct Il2CppObject;
// System.Data.DataRelation
struct DataRelation_t1483987353;
// System.Data.DataRow
struct DataRow_t3654701923;
// System.Data.DataColumn
struct DataColumn_t3354469747;
// System.Data.DataRow[]
struct DataRowU5BU5D_t1036778418;
// System.Object[]
struct ObjectU5BU5D_t11523773;
// System.Data.DataColumnCollection
struct DataColumnCollection_t3528392753;
// System.Data.DataRelationCollection
struct DataRelationCollection_t267599063;
// System.ComponentModel.PropertyChangedEventArgs
struct PropertyChangedEventArgs_t569023745;
// System.ComponentModel.CollectionChangeEventArgs
struct CollectionChangeEventArgs_t3787252946;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "System_Data_Mono_Data_SqlExpressions_ReferencedTab1691853399.h"
#include "mscorlib_System_Object837106420.h"
#include "System_Data_System_Data_DataRow3654701923.h"
#include "System_Data_System_Data_DataColumn3354469747.h"
#include "System_Data_System_Data_DataColumnCollection3528392753.h"
#include "System_Data_System_Data_DataRelationCollection267599063.h"
#include "System_System_ComponentModel_PropertyChangedEventAr569023745.h"
#include "System_System_ComponentModel_CollectionChangeEvent3787252946.h"

// System.Void Mono.Data.SqlExpressions.ColumnReference::.ctor(System.String)
extern "C"  void ColumnReference__ctor_m1305848377 (ColumnReference_t2222606871 * __this, String_t* ___columnName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Data.SqlExpressions.ColumnReference::.ctor(Mono.Data.SqlExpressions.ReferencedTable,System.String,System.String)
extern "C"  void ColumnReference__ctor_m3556237876 (ColumnReference_t2222606871 * __this, int32_t ___refTable, String_t* ___relationName, String_t* ___columnName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Data.SqlExpressions.ColumnReference::Equals(System.Object)
extern "C"  bool ColumnReference_Equals_m3376379024 (ColumnReference_t2222606871 * __this, Il2CppObject * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Data.SqlExpressions.ColumnReference::GetHashCode()
extern "C"  int32_t ColumnReference_GetHashCode_m1621328628 (ColumnReference_t2222606871 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Data.SqlExpressions.ReferencedTable Mono.Data.SqlExpressions.ColumnReference::get_ReferencedTable()
extern "C"  int32_t ColumnReference_get_ReferencedTable_m119487693 (ColumnReference_t2222606871 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.DataRelation Mono.Data.SqlExpressions.ColumnReference::GetRelation(System.Data.DataRow)
extern "C"  DataRelation_t1483987353 * ColumnReference_GetRelation_m3524441014 (ColumnReference_t2222606871 * __this, DataRow_t3654701923 * ___row, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.DataColumn Mono.Data.SqlExpressions.ColumnReference::GetColumn(System.Data.DataRow)
extern "C"  DataColumn_t3354469747 * ColumnReference_GetColumn_m813645250 (ColumnReference_t2222606871 * __this, DataRow_t3654701923 * ___row, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.DataRow Mono.Data.SqlExpressions.ColumnReference::GetReferencedRow(System.Data.DataRow)
extern "C"  DataRow_t3654701923 * ColumnReference_GetReferencedRow_m702103737 (ColumnReference_t2222606871 * __this, DataRow_t3654701923 * ___row, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.DataRow[] Mono.Data.SqlExpressions.ColumnReference::GetReferencedRows(System.Data.DataRow)
extern "C"  DataRowU5BU5D_t1036778418* ColumnReference_GetReferencedRows_m3170020478 (ColumnReference_t2222606871 * __this, DataRow_t3654701923 * ___row, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] Mono.Data.SqlExpressions.ColumnReference::GetValues(System.Data.DataRow[])
extern "C"  ObjectU5BU5D_t11523773* ColumnReference_GetValues_m2109583033 (ColumnReference_t2222606871 * __this, DataRowU5BU5D_t1036778418* ___rows, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Data.SqlExpressions.ColumnReference::Unify(System.Object)
extern "C"  Il2CppObject * ColumnReference_Unify_m299416831 (ColumnReference_t2222606871 * __this, Il2CppObject * ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Data.SqlExpressions.ColumnReference::Eval(System.Data.DataRow)
extern "C"  Il2CppObject * ColumnReference_Eval_m2293583931 (ColumnReference_t2222606871 * __this, DataRow_t3654701923 * ___row, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Data.SqlExpressions.ColumnReference::EvalBoolean(System.Data.DataRow)
extern "C"  bool ColumnReference_EvalBoolean_m4068956926 (ColumnReference_t2222606871 * __this, DataRow_t3654701923 * ___row, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Data.SqlExpressions.ColumnReference::DependsOn(System.Data.DataColumn)
extern "C"  bool ColumnReference_DependsOn_m1919796382 (ColumnReference_t2222606871 * __this, DataColumn_t3354469747 * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Data.SqlExpressions.ColumnReference::DropCached(System.Data.DataColumnCollection,System.Data.DataRelationCollection)
extern "C"  void ColumnReference_DropCached_m1891878932 (ColumnReference_t2222606871 * __this, DataColumnCollection_t3528392753 * ___columnCollection, DataRelationCollection_t267599063 * ___relationCollection, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Data.SqlExpressions.ColumnReference::OnColumnPropertyChanged(System.Object,System.ComponentModel.PropertyChangedEventArgs)
extern "C"  void ColumnReference_OnColumnPropertyChanged_m3743385928 (ColumnReference_t2222606871 * __this, Il2CppObject * ___sender, PropertyChangedEventArgs_t569023745 * ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Data.SqlExpressions.ColumnReference::OnColumnRemoved(System.Object,System.ComponentModel.CollectionChangeEventArgs)
extern "C"  void ColumnReference_OnColumnRemoved_m966936360 (ColumnReference_t2222606871 * __this, Il2CppObject * ___sender, CollectionChangeEventArgs_t3787252946 * ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Data.SqlExpressions.ColumnReference::OnRelationRemoved(System.Object,System.ComponentModel.CollectionChangeEventArgs)
extern "C"  void ColumnReference_OnRelationRemoved_m319799054 (ColumnReference_t2222606871 * __this, Il2CppObject * ___sender, CollectionChangeEventArgs_t3787252946 * ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
