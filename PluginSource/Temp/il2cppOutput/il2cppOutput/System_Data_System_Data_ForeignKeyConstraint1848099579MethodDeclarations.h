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

// System.Data.ForeignKeyConstraint
struct ForeignKeyConstraint_t1848099579;
// System.String
struct String_t;
// System.Data.DataColumn[]
struct DataColumnU5BU5D_t3410743138;
// System.Data.ConstraintCollection
struct ConstraintCollection_t392455726;
// System.Data.DataTable
struct DataTable_t2176726999;
// System.Object
struct Il2CppObject;
// System.Data.DataRow
struct DataRow_t3654701923;
// System.Data.DataColumn
struct DataColumn_t3354469747;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "System_Data_System_Data_ConstraintCollection392455726.h"
#include "System_Data_System_Data_AcceptRejectRule3193783350.h"
#include "System_Data_System_Data_Rule549424335.h"
#include "mscorlib_System_Object837106420.h"
#include "System_Data_System_Data_DataRow3654701923.h"
#include "System_Data_System_Data_DataColumn3354469747.h"

// System.Void System.Data.ForeignKeyConstraint::.ctor(System.String,System.Data.DataColumn[],System.Data.DataColumn[])
extern "C"  void ForeignKeyConstraint__ctor_m2016558553 (ForeignKeyConstraint_t1848099579 * __this, String_t* ___constraintName, DataColumnU5BU5D_t3410743138* ___parentColumns, DataColumnU5BU5D_t3410743138* ___childColumns, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.ForeignKeyConstraint::_foreignKeyConstraint(System.String,System.Data.DataColumn[],System.Data.DataColumn[])
extern "C"  void ForeignKeyConstraint__foreignKeyConstraint_m3408977332 (ForeignKeyConstraint_t1848099579 * __this, String_t* ___constraintName, DataColumnU5BU5D_t3410743138* ___parentColumns, DataColumnU5BU5D_t3410743138* ___childColumns, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.ForeignKeyConstraint::_validateColumns(System.Data.DataColumn[],System.Data.DataColumn[])
extern "C"  void ForeignKeyConstraint__validateColumns_m2941525187 (ForeignKeyConstraint_t1848099579 * __this, DataColumnU5BU5D_t3410743138* ___parentColumns, DataColumnU5BU5D_t3410743138* ___childColumns, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.ForeignKeyConstraint::_ensureUniqueConstraintExists(System.Data.ConstraintCollection,System.Data.DataColumn[])
extern "C"  void ForeignKeyConstraint__ensureUniqueConstraintExists_m1278797905 (ForeignKeyConstraint_t1848099579 * __this, ConstraintCollection_t392455726 * ___collection, DataColumnU5BU5D_t3410743138* ___parentColumns, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.AcceptRejectRule System.Data.ForeignKeyConstraint::get_AcceptRejectRule()
extern "C"  int32_t ForeignKeyConstraint_get_AcceptRejectRule_m3696874802 (ForeignKeyConstraint_t1848099579 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.ForeignKeyConstraint::set_AcceptRejectRule(System.Data.AcceptRejectRule)
extern "C"  void ForeignKeyConstraint_set_AcceptRejectRule_m3016961171 (ForeignKeyConstraint_t1848099579 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.DataColumn[] System.Data.ForeignKeyConstraint::get_Columns()
extern "C"  DataColumnU5BU5D_t3410743138* ForeignKeyConstraint_get_Columns_m471068783 (ForeignKeyConstraint_t1848099579 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.Rule System.Data.ForeignKeyConstraint::get_DeleteRule()
extern "C"  int32_t ForeignKeyConstraint_get_DeleteRule_m877960925 (ForeignKeyConstraint_t1848099579 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.ForeignKeyConstraint::set_DeleteRule(System.Data.Rule)
extern "C"  void ForeignKeyConstraint_set_DeleteRule_m3336293310 (ForeignKeyConstraint_t1848099579 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.Rule System.Data.ForeignKeyConstraint::get_UpdateRule()
extern "C"  int32_t ForeignKeyConstraint_get_UpdateRule_m697762683 (ForeignKeyConstraint_t1848099579 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.ForeignKeyConstraint::set_UpdateRule(System.Data.Rule)
extern "C"  void ForeignKeyConstraint_set_UpdateRule_m464335964 (ForeignKeyConstraint_t1848099579 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.DataColumn[] System.Data.ForeignKeyConstraint::get_RelatedColumns()
extern "C"  DataColumnU5BU5D_t3410743138* ForeignKeyConstraint_get_RelatedColumns_m3276220866 (ForeignKeyConstraint_t1848099579 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.DataTable System.Data.ForeignKeyConstraint::get_RelatedTable()
extern "C"  DataTable_t2176726999 * ForeignKeyConstraint_get_RelatedTable_m4169064795 (ForeignKeyConstraint_t1848099579 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.DataTable System.Data.ForeignKeyConstraint::get_Table()
extern "C"  DataTable_t2176726999 * ForeignKeyConstraint_get_Table_m2399420024 (ForeignKeyConstraint_t1848099579 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.ForeignKeyConstraint::Equals(System.Object)
extern "C"  bool ForeignKeyConstraint_Equals_m75191184 (ForeignKeyConstraint_t1848099579 * __this, Il2CppObject * ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.ForeignKeyConstraint::GetHashCode()
extern "C"  int32_t ForeignKeyConstraint_GetHashCode_m1757964276 (ForeignKeyConstraint_t1848099579 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.ForeignKeyConstraint::AddToConstraintCollectionSetup(System.Data.ConstraintCollection)
extern "C"  void ForeignKeyConstraint_AddToConstraintCollectionSetup_m272751553 (ForeignKeyConstraint_t1848099579 * __this, ConstraintCollection_t392455726 * ___collection, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.ForeignKeyConstraint::RemoveFromConstraintCollectionCleanup(System.Data.ConstraintCollection)
extern "C"  void ForeignKeyConstraint_RemoveFromConstraintCollectionCleanup_m660120610 (ForeignKeyConstraint_t1848099579 * __this, ConstraintCollection_t392455726 * ___collection, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.ForeignKeyConstraint::IsConstraintViolated()
extern "C"  bool ForeignKeyConstraint_IsConstraintViolated_m1728915182 (ForeignKeyConstraint_t1848099579 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.ForeignKeyConstraint::AssertConstraint(System.Data.DataRow)
extern "C"  void ForeignKeyConstraint_AssertConstraint_m4274460937 (ForeignKeyConstraint_t1848099579 * __this, DataRow_t3654701923 * ___row, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.ForeignKeyConstraint::IsColumnContained(System.Data.DataColumn)
extern "C"  bool ForeignKeyConstraint_IsColumnContained_m758964235 (ForeignKeyConstraint_t1848099579 * __this, DataColumn_t3354469747 * ___column, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.ForeignKeyConstraint::CanRemoveFromCollection(System.Data.ConstraintCollection,System.Boolean)
extern "C"  bool ForeignKeyConstraint_CanRemoveFromCollection_m1658839332 (ForeignKeyConstraint_t1848099579 * __this, ConstraintCollection_t392455726 * ___col, bool ___shouldThrow, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Data.ForeignKeyConstraint::GetErrorMessage(System.Data.DataRow)
extern "C"  String_t* ForeignKeyConstraint_GetErrorMessage_m775813262 (ForeignKeyConstraint_t1848099579 * __this, DataRow_t3654701923 * ___row, const MethodInfo* method) IL2CPP_METHOD_ATTR;
