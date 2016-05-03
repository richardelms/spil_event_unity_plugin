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

// System.Data.Common.DoubleDataContainer
struct DoubleDataContainer_t2362825654;
// System.Object
struct Il2CppObject;
// System.Data.Common.DataContainer
struct DataContainer_t1942492167;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "System_Data_System_Data_Common_DataContainer1942492167.h"

// System.Void System.Data.Common.DoubleDataContainer::.ctor()
extern "C"  void DoubleDataContainer__ctor_m2031190638 (DoubleDataContainer_t2362825654 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Data.Common.DoubleDataContainer::GetValue(System.Int32)
extern "C"  Il2CppObject * DoubleDataContainer_GetValue_m1532015639 (DoubleDataContainer_t2362825654 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Common.DoubleDataContainer::ZeroOut(System.Int32)
extern "C"  void DoubleDataContainer_ZeroOut_m3873868067 (DoubleDataContainer_t2362825654 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Common.DoubleDataContainer::SetValue(System.Int32,System.Object)
extern "C"  void DoubleDataContainer_SetValue_m1908967204 (DoubleDataContainer_t2362825654 * __this, int32_t ___index, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Common.DoubleDataContainer::DoCopyValue(System.Data.Common.DataContainer,System.Int32,System.Int32)
extern "C"  void DoubleDataContainer_DoCopyValue_m1440172868 (DoubleDataContainer_t2362825654 * __this, DataContainer_t1942492167 * ___from, int32_t ___from_index, int32_t ___to_index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.Common.DoubleDataContainer::DoCompareValues(System.Int32,System.Int32)
extern "C"  int32_t DoubleDataContainer_DoCompareValues_m1761069730 (DoubleDataContainer_t2362825654 * __this, int32_t ___index1, int32_t ___index2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Common.DoubleDataContainer::Resize(System.Int32)
extern "C"  void DoubleDataContainer_Resize_m2605410779 (DoubleDataContainer_t2362825654 * __this, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Data.Common.DoubleDataContainer::GetInt64(System.Int32)
extern "C"  int64_t DoubleDataContainer_GetInt64_m59756163 (DoubleDataContainer_t2362825654 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
