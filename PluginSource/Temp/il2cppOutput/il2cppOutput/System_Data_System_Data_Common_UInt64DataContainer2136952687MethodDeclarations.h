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

// System.Data.Common.UInt64DataContainer
struct UInt64DataContainer_t2136952687;
// System.Object
struct Il2CppObject;
// System.Data.Common.DataContainer
struct DataContainer_t1942492167;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "System_Data_System_Data_Common_DataContainer1942492167.h"

// System.Void System.Data.Common.UInt64DataContainer::.ctor()
extern "C"  void UInt64DataContainer__ctor_m3616288469 (UInt64DataContainer_t2136952687 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Data.Common.UInt64DataContainer::GetValue(System.Int32)
extern "C"  Il2CppObject * UInt64DataContainer_GetValue_m3159936208 (UInt64DataContainer_t2136952687 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Common.UInt64DataContainer::ZeroOut(System.Int32)
extern "C"  void UInt64DataContainer_ZeroOut_m4203476298 (UInt64DataContainer_t2136952687 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Common.UInt64DataContainer::SetValue(System.Int32,System.Object)
extern "C"  void UInt64DataContainer_SetValue_m3864422429 (UInt64DataContainer_t2136952687 * __this, int32_t ___index, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Common.UInt64DataContainer::DoCopyValue(System.Data.Common.DataContainer,System.Int32,System.Int32)
extern "C"  void UInt64DataContainer_DoCopyValue_m3506126763 (UInt64DataContainer_t2136952687 * __this, DataContainer_t1942492167 * ___from, int32_t ___from_index, int32_t ___to_index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.Common.UInt64DataContainer::DoCompareValues(System.Int32,System.Int32)
extern "C"  int32_t UInt64DataContainer_DoCompareValues_m1737313499 (UInt64DataContainer_t2136952687 * __this, int32_t ___index1, int32_t ___index2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Common.UInt64DataContainer::Resize(System.Int32)
extern "C"  void UInt64DataContainer_Resize_m4140063956 (UInt64DataContainer_t2136952687 * __this, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Data.Common.UInt64DataContainer::GetInt64(System.Int32)
extern "C"  int64_t UInt64DataContainer_GetInt64_m1687676732 (UInt64DataContainer_t2136952687 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
