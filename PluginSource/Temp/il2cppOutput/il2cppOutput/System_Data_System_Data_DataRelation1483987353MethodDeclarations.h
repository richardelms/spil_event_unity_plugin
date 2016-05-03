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

// System.Data.DataRelation
struct DataRelation_t1483987353;
// System.String
struct String_t;
// System.Data.DataColumn[]
struct DataColumnU5BU5D_t3410743138;
// System.Data.DataColumn
struct DataColumn_t3354469747;
// System.Data.ForeignKeyConstraint
struct ForeignKeyConstraint_t1848099579;
// System.Data.DataTable
struct DataTable_t2176726999;
// System.Data.DataSet
struct DataSet_t3654702571;
// System.Data.PropertyCollection
struct PropertyCollection_t3599376422;
// System.Data.UniqueConstraint
struct UniqueConstraint_t1006662241;
// System.Data.ConstraintCollection
struct ConstraintCollection_t392455726;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "System_Data_System_Data_DataColumn3354469747.h"
#include "System_Data_System_Data_ForeignKeyConstraint1848099579.h"
#include "System_Data_System_Data_UniqueConstraint1006662241.h"
#include "System_Data_System_Data_DataSet3654702571.h"
#include "System_Data_System_Data_ConstraintCollection392455726.h"

// System.Void System.Data.DataRelation::.ctor(System.String,System.Data.DataColumn[],System.Data.DataColumn[])
extern "C"  void DataRelation__ctor_m510466167 (DataRelation_t1483987353 * __this, String_t* ___relationName, DataColumnU5BU5D_t3410743138* ___parentColumns, DataColumnU5BU5D_t3410743138* ___childColumns, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataRelation::.ctor(System.String,System.Data.DataColumn,System.Data.DataColumn,System.Boolean)
extern "C"  void DataRelation__ctor_m2003897510 (DataRelation_t1483987353 * __this, String_t* ___relationName, DataColumn_t3354469747 * ___parentColumn, DataColumn_t3354469747 * ___childColumn, bool ___createConstraints, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataRelation::.ctor(System.String,System.Data.DataColumn[],System.Data.DataColumn[],System.Boolean)
extern "C"  void DataRelation__ctor_m751722022 (DataRelation_t1483987353 * __this, String_t* ___relationName, DataColumnU5BU5D_t3410743138* ___parentColumns, DataColumnU5BU5D_t3410743138* ___childColumns, bool ___createConstraints, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.DataColumn[] System.Data.DataRelation::get_ChildColumns()
extern "C"  DataColumnU5BU5D_t3410743138* DataRelation_get_ChildColumns_m2345378127 (DataRelation_t1483987353 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.ForeignKeyConstraint System.Data.DataRelation::get_ChildKeyConstraint()
extern "C"  ForeignKeyConstraint_t1848099579 * DataRelation_get_ChildKeyConstraint_m1631080360 (DataRelation_t1483987353 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataRelation::SetChildKeyConstraint(System.Data.ForeignKeyConstraint)
extern "C"  void DataRelation_SetChildKeyConstraint_m3967964062 (DataRelation_t1483987353 * __this, ForeignKeyConstraint_t1848099579 * ___foreignKeyConstraint, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.DataTable System.Data.DataRelation::get_ChildTable()
extern "C"  DataTable_t2176726999 * DataRelation_get_ChildTable_m915200552 (DataRelation_t1483987353 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.DataSet System.Data.DataRelation::get_DataSet()
extern "C"  DataSet_t3654702571 * DataRelation_get_DataSet_m3358521016 (DataRelation_t1483987353 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.PropertyCollection System.Data.DataRelation::get_ExtendedProperties()
extern "C"  PropertyCollection_t3599376422 * DataRelation_get_ExtendedProperties_m1057031625 (DataRelation_t1483987353 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.DataRelation::get_Nested()
extern "C"  bool DataRelation_get_Nested_m3529133731 (DataRelation_t1483987353 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataRelation::set_Nested(System.Boolean)
extern "C"  void DataRelation_set_Nested_m256913796 (DataRelation_t1483987353 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.DataColumn[] System.Data.DataRelation::get_ParentColumns()
extern "C"  DataColumnU5BU5D_t3410743138* DataRelation_get_ParentColumns_m4258897991 (DataRelation_t1483987353 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.UniqueConstraint System.Data.DataRelation::get_ParentKeyConstraint()
extern "C"  UniqueConstraint_t1006662241 * DataRelation_get_ParentKeyConstraint_m2289291410 (DataRelation_t1483987353 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataRelation::SetParentKeyConstraint(System.Data.UniqueConstraint)
extern "C"  void DataRelation_SetParentKeyConstraint_m2428311574 (DataRelation_t1483987353 * __this, UniqueConstraint_t1006662241 * ___uniqueConstraint, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataRelation::SetDataSet(System.Data.DataSet)
extern "C"  void DataRelation_SetDataSet_m2364905776 (DataRelation_t1483987353 * __this, DataSet_t3654702571 * ___ds, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.DataTable System.Data.DataRelation::get_ParentTable()
extern "C"  DataTable_t2176726999 * DataRelation_get_ParentTable_m616933968 (DataRelation_t1483987353 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Data.DataRelation::get_RelationName()
extern "C"  String_t* DataRelation_get_RelationName_m562197420 (DataRelation_t1483987353 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataRelation::set_RelationName(System.String)
extern "C"  void DataRelation_set_RelationName_m1333205349 (DataRelation_t1483987353 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Data.DataRelation::ToString()
extern "C"  String_t* DataRelation_ToString_m914010408 (DataRelation_t1483987353 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataRelation::UpdateConstraints()
extern "C"  void DataRelation_UpdateConstraints_m2359965974 (DataRelation_t1483987353 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.DataRelation::CompareDataColumns(System.Data.DataColumn[],System.Data.DataColumn[])
extern "C"  bool DataRelation_CompareDataColumns_m3663928053 (Il2CppObject * __this /* static, unused */, DataColumnU5BU5D_t3410743138* ___dc1, DataColumnU5BU5D_t3410743138* ___dc2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.ForeignKeyConstraint System.Data.DataRelation::FindForeignKey(System.Data.ConstraintCollection)
extern "C"  ForeignKeyConstraint_t1848099579 * DataRelation_FindForeignKey_m2167317443 (DataRelation_t1483987353 * __this, ConstraintCollection_t392455726 * ___cl, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.UniqueConstraint System.Data.DataRelation::FindUniqueConstraint(System.Data.ConstraintCollection)
extern "C"  UniqueConstraint_t1006662241 * DataRelation_FindUniqueConstraint_m2833376320 (DataRelation_t1483987353 * __this, ConstraintCollection_t392455726 * ___cl, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.DataRelation::Contains(System.Data.DataColumn)
extern "C"  bool DataRelation_Contains_m3698412701 (DataRelation_t1483987353 * __this, DataColumn_t3354469747 * ___column, const MethodInfo* method) IL2CPP_METHOD_ATTR;
