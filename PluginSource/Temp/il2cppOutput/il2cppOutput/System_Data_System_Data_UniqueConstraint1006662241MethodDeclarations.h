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

// System.Data.UniqueConstraint
struct UniqueConstraint_t1006662241;
// System.Data.DataColumn
struct DataColumn_t3354469747;
// System.Data.DataColumn[]
struct DataColumnU5BU5D_t3410743138;
// System.String
struct String_t;
// System.Data.DataTable
struct DataTable_t2176726999;
// System.Data.ConstraintCollection
struct ConstraintCollection_t392455726;
// System.Data.ForeignKeyConstraint
struct ForeignKeyConstraint_t1848099579;
// System.Object
struct Il2CppObject;
// System.Data.DataRow
struct DataRow_t3654701923;

#include "codegen/il2cpp-codegen.h"
#include "System_Data_System_Data_DataColumn3354469747.h"
#include "mscorlib_System_String968488902.h"
#include "System_Data_System_Data_DataTable2176726999.h"
#include "System_Data_System_Data_ConstraintCollection392455726.h"
#include "System_Data_System_Data_UniqueConstraint1006662241.h"
#include "System_Data_System_Data_ForeignKeyConstraint1848099579.h"
#include "mscorlib_System_Object837106420.h"
#include "System_Data_System_Data_DataRow3654701923.h"

// System.Void System.Data.UniqueConstraint::.ctor(System.Data.DataColumn)
extern "C"  void UniqueConstraint__ctor_m1805265182 (UniqueConstraint_t1006662241 * __this, DataColumn_t3354469747 * ___column, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.UniqueConstraint::.ctor(System.Data.DataColumn[],System.Boolean)
extern "C"  void UniqueConstraint__ctor_m1069949761 (UniqueConstraint_t1006662241 * __this, DataColumnU5BU5D_t3410743138* ___columns, bool ___isPrimaryKey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.UniqueConstraint::.ctor(System.String,System.Data.DataColumn,System.Boolean)
extern "C"  void UniqueConstraint__ctor_m2615090331 (UniqueConstraint_t1006662241 * __this, String_t* ___name, DataColumn_t3354469747 * ___column, bool ___isPrimaryKey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.UniqueConstraint::.ctor(System.String,System.Data.DataColumn[],System.Boolean)
extern "C"  void UniqueConstraint__ctor_m3252790845 (UniqueConstraint_t1006662241 * __this, String_t* ___name, DataColumnU5BU5D_t3410743138* ___columns, bool ___isPrimaryKey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.UniqueConstraint::_uniqueConstraint(System.String,System.Data.DataColumn,System.Boolean)
extern "C"  void UniqueConstraint__uniqueConstraint_m3533241808 (UniqueConstraint_t1006662241 * __this, String_t* ___name, DataColumn_t3354469747 * ___column, bool ___isPrimaryKey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.UniqueConstraint::_uniqueConstraint(System.String,System.Data.DataColumn[],System.Boolean)
extern "C"  void UniqueConstraint__uniqueConstraint_m833097266 (UniqueConstraint_t1006662241 * __this, String_t* ___name, DataColumnU5BU5D_t3410743138* ___columns, bool ___isPrimaryKey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.UniqueConstraint::_validateColumns(System.Data.DataColumn[])
extern "C"  void UniqueConstraint__validateColumns_m1054135202 (UniqueConstraint_t1006662241 * __this, DataColumnU5BU5D_t3410743138* ___columns, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.UniqueConstraint::_validateColumns(System.Data.DataColumn[],System.Data.DataTable&)
extern "C"  void UniqueConstraint__validateColumns_m1579380285 (UniqueConstraint_t1006662241 * __this, DataColumnU5BU5D_t3410743138* ___columns, DataTable_t2176726999 ** ___table, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.UniqueConstraint::_validateColumn(System.Data.DataColumn)
extern "C"  void UniqueConstraint__validateColumn_m2841583879 (UniqueConstraint_t1006662241 * __this, DataColumn_t3354469747 * ___column, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.UniqueConstraint::SetAsPrimaryKey(System.Data.ConstraintCollection,System.Data.UniqueConstraint)
extern "C"  void UniqueConstraint_SetAsPrimaryKey_m1562223617 (Il2CppObject * __this /* static, unused */, ConstraintCollection_t392455726 * ___collection, UniqueConstraint_t1006662241 * ___newPrimaryKey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.UniqueConstraint System.Data.UniqueConstraint::GetPrimaryKeyConstraint(System.Data.ConstraintCollection)
extern "C"  UniqueConstraint_t1006662241 * UniqueConstraint_GetPrimaryKeyConstraint_m2655788369 (Il2CppObject * __this /* static, unused */, ConstraintCollection_t392455726 * ___collection, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.UniqueConstraint System.Data.UniqueConstraint::GetUniqueConstraintForColumnSet(System.Data.ConstraintCollection,System.Data.DataColumn[])
extern "C"  UniqueConstraint_t1006662241 * UniqueConstraint_GetUniqueConstraintForColumnSet_m2924159383 (Il2CppObject * __this /* static, unused */, ConstraintCollection_t392455726 * ___collection, DataColumnU5BU5D_t3410743138* ___columns, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.ForeignKeyConstraint System.Data.UniqueConstraint::get_ChildConstraint()
extern "C"  ForeignKeyConstraint_t1848099579 * UniqueConstraint_get_ChildConstraint_m297521579 (UniqueConstraint_t1006662241 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.UniqueConstraint::set_ChildConstraint(System.Data.ForeignKeyConstraint)
extern "C"  void UniqueConstraint_set_ChildConstraint_m97199792 (UniqueConstraint_t1006662241 * __this, ForeignKeyConstraint_t1848099579 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.DataColumn[] System.Data.UniqueConstraint::get_Columns()
extern "C"  DataColumnU5BU5D_t3410743138* UniqueConstraint_get_Columns_m450636105 (UniqueConstraint_t1006662241 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.UniqueConstraint::get_IsPrimaryKey()
extern "C"  bool UniqueConstraint_get_IsPrimaryKey_m966562299 (UniqueConstraint_t1006662241 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.DataTable System.Data.UniqueConstraint::get_Table()
extern "C"  DataTable_t2176726999 * UniqueConstraint_get_Table_m785232338 (UniqueConstraint_t1006662241 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.UniqueConstraint::SetIsPrimaryKey(System.Boolean)
extern "C"  void UniqueConstraint_SetIsPrimaryKey_m2099583201 (UniqueConstraint_t1006662241 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.UniqueConstraint::Equals(System.Object)
extern "C"  bool UniqueConstraint_Equals_m3506479978 (UniqueConstraint_t1006662241 * __this, Il2CppObject * ___key2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.UniqueConstraint::GetHashCode()
extern "C"  int32_t UniqueConstraint_GetHashCode_m2622715086 (UniqueConstraint_t1006662241 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.UniqueConstraint::AddToConstraintCollectionSetup(System.Data.ConstraintCollection)
extern "C"  void UniqueConstraint_AddToConstraintCollectionSetup_m911520423 (UniqueConstraint_t1006662241 * __this, ConstraintCollection_t392455726 * ___collection, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.UniqueConstraint::RemoveFromConstraintCollectionCleanup(System.Data.ConstraintCollection)
extern "C"  void UniqueConstraint_RemoveFromConstraintCollectionCleanup_m4174863996 (UniqueConstraint_t1006662241 * __this, ConstraintCollection_t392455726 * ___collection, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.UniqueConstraint::IsConstraintViolated()
extern "C"  bool UniqueConstraint_IsConstraintViolated_m724685396 (UniqueConstraint_t1006662241 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.UniqueConstraint::AssertConstraint(System.Data.DataRow)
extern "C"  void UniqueConstraint_AssertConstraint_m3649997283 (UniqueConstraint_t1006662241 * __this, DataRow_t3654701923 * ___row, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.UniqueConstraint::IsColumnContained(System.Data.DataColumn)
extern "C"  bool UniqueConstraint_IsColumnContained_m1933950693 (UniqueConstraint_t1006662241 * __this, DataColumn_t3354469747 * ___column, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.UniqueConstraint::CanRemoveFromCollection(System.Data.ConstraintCollection,System.Boolean)
extern "C"  bool UniqueConstraint_CanRemoveFromCollection_m743548682 (UniqueConstraint_t1006662241 * __this, ConstraintCollection_t392455726 * ___col, bool ___shouldThrow, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Data.UniqueConstraint::GetErrorMessage(System.Data.DataRow)
extern "C"  String_t* UniqueConstraint_GetErrorMessage_m792907252 (UniqueConstraint_t1006662241 * __this, DataRow_t3654701923 * ___row, const MethodInfo* method) IL2CPP_METHOD_ATTR;
