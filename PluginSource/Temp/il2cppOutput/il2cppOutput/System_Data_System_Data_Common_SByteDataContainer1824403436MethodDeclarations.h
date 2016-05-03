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

// System.Data.Common.SByteDataContainer
struct SByteDataContainer_t1824403436;
// System.Object
struct Il2CppObject;
// System.Data.Common.DataContainer
struct DataContainer_t1942492167;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "System_Data_System_Data_Common_DataContainer1942492167.h"

// System.Void System.Data.Common.SByteDataContainer::.ctor()
extern "C"  void SByteDataContainer__ctor_m3201811318 (SByteDataContainer_t1824403436 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Data.Common.SByteDataContainer::GetValue(System.Int32)
extern "C"  Il2CppObject * SByteDataContainer_GetValue_m2436351493 (SByteDataContainer_t1824403436 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Common.SByteDataContainer::ZeroOut(System.Int32)
extern "C"  void SByteDataContainer_ZeroOut_m520248363 (SByteDataContainer_t1824403436 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Common.SByteDataContainer::SetValue(System.Int32,System.Object)
extern "C"  void SByteDataContainer_SetValue_m3871032092 (SByteDataContainer_t1824403436 * __this, int32_t ___index, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Common.SByteDataContainer::DoCopyValue(System.Data.Common.DataContainer,System.Int32,System.Int32)
extern "C"  void SByteDataContainer_DoCopyValue_m1997622348 (SByteDataContainer_t1824403436 * __this, DataContainer_t1942492167 * ___from, int32_t ___from_index, int32_t ___to_index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.Common.SByteDataContainer::DoCompareValues(System.Int32,System.Int32)
extern "C"  int32_t SByteDataContainer_DoCompareValues_m3395081810 (SByteDataContainer_t1824403436 * __this, int32_t ___index1, int32_t ___index2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Common.SByteDataContainer::Resize(System.Int32)
extern "C"  void SByteDataContainer_Resize_m3328513491 (SByteDataContainer_t1824403436 * __this, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Data.Common.SByteDataContainer::GetInt64(System.Int32)
extern "C"  int64_t SByteDataContainer_GetInt64_m1619867281 (SByteDataContainer_t1824403436 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
