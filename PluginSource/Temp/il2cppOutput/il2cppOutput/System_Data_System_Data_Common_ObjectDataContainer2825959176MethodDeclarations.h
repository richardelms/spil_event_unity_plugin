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

// System.Data.Common.ObjectDataContainer
struct ObjectDataContainer_t2825959176;
// System.Object
struct Il2CppObject;
// System.Data.Common.DataContainer
struct DataContainer_t1942492167;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "System_Data_System_Data_Common_DataContainer1942492167.h"

// System.Void System.Data.Common.ObjectDataContainer::.ctor()
extern "C"  void ObjectDataContainer__ctor_m3724755804 (ObjectDataContainer_t2825959176 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Data.Common.ObjectDataContainer::GetValue(System.Int32)
extern "C"  Il2CppObject * ObjectDataContainer_GetValue_m1917008233 (ObjectDataContainer_t2825959176 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Common.ObjectDataContainer::ZeroOut(System.Int32)
extern "C"  void ObjectDataContainer_ZeroOut_m1808077201 (ObjectDataContainer_t2825959176 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Common.ObjectDataContainer::SetValue(System.Int32,System.Object)
extern "C"  void ObjectDataContainer_SetValue_m1068913910 (ObjectDataContainer_t2825959176 * __this, int32_t ___index, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Common.ObjectDataContainer::DoCopyValue(System.Data.Common.DataContainer,System.Int32,System.Int32)
extern "C"  void ObjectDataContainer_DoCopyValue_m2496306226 (ObjectDataContainer_t2825959176 * __this, DataContainer_t1942492167 * ___from, int32_t ___from_index, int32_t ___to_index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.Common.ObjectDataContainer::DoCompareValues(System.Int32,System.Int32)
extern "C"  int32_t ObjectDataContainer_DoCompareValues_m326398708 (ObjectDataContainer_t2825959176 * __this, int32_t ___index1, int32_t ___index2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Common.ObjectDataContainer::Resize(System.Int32)
extern "C"  void ObjectDataContainer_Resize_m3647151021 (ObjectDataContainer_t2825959176 * __this, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Data.Common.ObjectDataContainer::GetInt64(System.Int32)
extern "C"  int64_t ObjectDataContainer_GetInt64_m444748757 (ObjectDataContainer_t2825959176 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
