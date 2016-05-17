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

// System.Data.ConstraintCollection
struct ConstraintCollection_t392455726;
// System.Data.DataTable
struct DataTable_t2176726999;
// System.Data.Constraint
struct Constraint_t2349953968;
// System.String
struct String_t;
// System.Object
struct Il2CppObject;
// System.Data.DataColumn
struct DataColumn_t3354469747;
// System.Data.DataColumn[]
struct DataColumnU5BU5D_t3410743138;
// System.Collections.ArrayList
struct ArrayList_t2121638921;
// System.ComponentModel.CollectionChangeEventArgs
struct CollectionChangeEventArgs_t3787252946;

#include "codegen/il2cpp-codegen.h"
#include "System_Data_System_Data_DataTable2176726999.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Object837106420.h"
#include "System_Data_System_Data_Constraint2349953968.h"
#include "System_Data_System_Data_DataColumn3354469747.h"
#include "System_System_ComponentModel_CollectionChangeEvent3787252946.h"

// System.Void System.Data.ConstraintCollection::.ctor(System.Data.DataTable)
extern "C"  void ConstraintCollection__ctor_m438879549 (ConstraintCollection_t392455726 * __this, DataTable_t2176726999 * ___table, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.DataTable System.Data.ConstraintCollection::get_Table()
extern "C"  DataTable_t2176726999 * ConstraintCollection_get_Table_m4258768421 (ConstraintCollection_t392455726 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.Constraint System.Data.ConstraintCollection::get_Item(System.String)
extern "C"  Constraint_t2349953968 * ConstraintCollection_get_Item_m2351749703 (ConstraintCollection_t392455726 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.Constraint System.Data.ConstraintCollection::get_Item(System.Int32)
extern "C"  Constraint_t2349953968 * ConstraintCollection_get_Item_m1585151340 (ConstraintCollection_t392455726 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.ConstraintCollection::_handleBeforeConstraintNameChange(System.Object,System.String)
extern "C"  void ConstraintCollection__handleBeforeConstraintNameChange_m3449160478 (ConstraintCollection_t392455726 * __this, Il2CppObject * ___sender, String_t* ___newName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.ConstraintCollection::_isDuplicateConstraintName(System.String,System.Data.Constraint)
extern "C"  bool ConstraintCollection__isDuplicateConstraintName_m899720580 (ConstraintCollection_t392455726 * __this, String_t* ___constraintName, Constraint_t2349953968 * ___excludeFromComparison, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Data.ConstraintCollection::_createNewConstraintName()
extern "C"  String_t* ConstraintCollection__createNewConstraintName_m3324132702 (ConstraintCollection_t392455726 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.ConstraintCollection::Add(System.Data.Constraint)
extern "C"  void ConstraintCollection_Add_m1120071443 (ConstraintCollection_t392455726 * __this, Constraint_t2349953968 * ___constraint, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.Constraint System.Data.ConstraintCollection::Add(System.String,System.Data.DataColumn,System.Boolean)
extern "C"  Constraint_t2349953968 * ConstraintCollection_Add_m3602096986 (ConstraintCollection_t392455726 * __this, String_t* ___name, DataColumn_t3354469747 * ___column, bool ___primaryKey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.Constraint System.Data.ConstraintCollection::Add(System.String,System.Data.DataColumn[],System.Data.DataColumn[])
extern "C"  Constraint_t2349953968 * ConstraintCollection_Add_m1797468286 (ConstraintCollection_t392455726 * __this, String_t* ___name, DataColumnU5BU5D_t3410743138* ___primaryKeyColumns, DataColumnU5BU5D_t3410743138* ___foreignKeyColumns, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.ConstraintCollection::Contains(System.String)
extern "C"  bool ConstraintCollection_Contains_m262745035 (ConstraintCollection_t392455726 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.ConstraintCollection::IndexOf(System.Data.Constraint)
extern "C"  int32_t ConstraintCollection_IndexOf_m853125591 (ConstraintCollection_t392455726 * __this, Constraint_t2349953968 * ___constraint, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.ConstraintCollection::IndexOf(System.String)
extern "C"  int32_t ConstraintCollection_IndexOf_m119724297 (ConstraintCollection_t392455726 * __this, String_t* ___constraintName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.ConstraintCollection::Remove(System.Data.Constraint)
extern "C"  void ConstraintCollection_Remove_m961496752 (ConstraintCollection_t392455726 * __this, Constraint_t2349953968 * ___constraint, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ArrayList System.Data.ConstraintCollection::get_List()
extern "C"  ArrayList_t2121638921 * ConstraintCollection_get_List_m3669175465 (ConstraintCollection_t392455726 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.ConstraintCollection::OnCollectionChanged(System.ComponentModel.CollectionChangeEventArgs)
extern "C"  void ConstraintCollection_OnCollectionChanged_m1212326465 (ConstraintCollection_t392455726 * __this, CollectionChangeEventArgs_t3787252946 * ___ccevent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
