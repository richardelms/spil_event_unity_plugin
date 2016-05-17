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

// System.Data.Constraint
struct Constraint_t2349953968;
// System.Data.DelegateConstraintNameChange
struct DelegateConstraintNameChange_t674814672;
// System.String
struct String_t;
// System.Data.PropertyCollection
struct PropertyCollection_t3599376422;
// System.Data.ConstraintCollection
struct ConstraintCollection_t392455726;
// System.Data.Common.Index
struct Index_t3430588642;

#include "codegen/il2cpp-codegen.h"
#include "System_Data_System_Data_DelegateConstraintNameChang674814672.h"
#include "mscorlib_System_String968488902.h"
#include "System_Data_System_Data_ConstraintCollection392455726.h"
#include "System_Data_System_Data_PropertyCollection3599376422.h"
#include "System_Data_System_Data_Common_Index3430588642.h"

// System.Void System.Data.Constraint::.ctor()
extern "C"  void Constraint__ctor_m1184390356 (Constraint_t2349953968 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Constraint::.cctor()
extern "C"  void Constraint__cctor_m1874266457 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Constraint::add_BeforeConstraintNameChange(System.Data.DelegateConstraintNameChange)
extern "C"  void Constraint_add_BeforeConstraintNameChange_m1083365283 (Constraint_t2349953968 * __this, DelegateConstraintNameChange_t674814672 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Constraint::remove_BeforeConstraintNameChange(System.Data.DelegateConstraintNameChange)
extern "C"  void Constraint_remove_BeforeConstraintNameChange_m3702000930 (Constraint_t2349953968 * __this, DelegateConstraintNameChange_t674814672 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Data.Constraint::get_ConstraintName()
extern "C"  String_t* Constraint_get_ConstraintName_m3532024292 (Constraint_t2349953968 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Constraint::set_ConstraintName(System.String)
extern "C"  void Constraint_set_ConstraintName_m248146733 (Constraint_t2349953968 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.PropertyCollection System.Data.Constraint::get_ExtendedProperties()
extern "C"  PropertyCollection_t3599376422 * Constraint_get_ExtendedProperties_m78551136 (Constraint_t2349953968 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.ConstraintCollection System.Data.Constraint::get_ConstraintCollection()
extern "C"  ConstraintCollection_t392455726 * Constraint_get_ConstraintCollection_m4077639463 (Constraint_t2349953968 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Constraint::set_ConstraintCollection(System.Data.ConstraintCollection)
extern "C"  void Constraint_set_ConstraintCollection_m2428777800 (Constraint_t2349953968 * __this, ConstraintCollection_t392455726 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Constraint::_onConstraintNameChange(System.String)
extern "C"  void Constraint__onConstraintNameChange_m2630630970 (Constraint_t2349953968 * __this, String_t* ___newName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Constraint::ThrowConstraintException()
extern "C"  void Constraint_ThrowConstraintException_m2822822812 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.Constraint::get_InitInProgress()
extern "C"  bool Constraint_get_InitInProgress_m2359600485 (Constraint_t2349953968 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Constraint::AssertConstraint()
extern "C"  void Constraint_AssertConstraint_m2729941107 (Constraint_t2349953968 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Constraint::SetExtendedProperties(System.Data.PropertyCollection)
extern "C"  void Constraint_SetExtendedProperties_m4144789512 (Constraint_t2349953968 * __this, PropertyCollection_t3599376422 * ___properties, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.Common.Index System.Data.Constraint::get_Index()
extern "C"  Index_t3430588642 * Constraint_get_Index_m2438516156 (Constraint_t2349953968 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Constraint::set_Index(System.Data.Common.Index)
extern "C"  void Constraint_set_Index_m2637528723 (Constraint_t2349953968 * __this, Index_t3430588642 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Data.Constraint::ToString()
extern "C"  String_t* Constraint_ToString_m3322870271 (Constraint_t2349953968 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
