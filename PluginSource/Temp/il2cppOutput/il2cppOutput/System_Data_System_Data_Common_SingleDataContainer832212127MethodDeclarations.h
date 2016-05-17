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

// System.Data.Common.SingleDataContainer
struct SingleDataContainer_t832212127;
// System.Object
struct Il2CppObject;
// System.Data.Common.DataContainer
struct DataContainer_t1942492167;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "System_Data_System_Data_Common_DataContainer1942492167.h"

// System.Void System.Data.Common.SingleDataContainer::.ctor()
extern "C"  void SingleDataContainer__ctor_m3312109477 (SingleDataContainer_t832212127 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Data.Common.SingleDataContainer::GetValue(System.Int32)
extern "C"  Il2CppObject * SingleDataContainer_GetValue_m2029746688 (SingleDataContainer_t832212127 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Common.SingleDataContainer::ZeroOut(System.Int32)
extern "C"  void SingleDataContainer_ZeroOut_m2504450586 (SingleDataContainer_t832212127 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Common.SingleDataContainer::SetValue(System.Int32,System.Object)
extern "C"  void SingleDataContainer_SetValue_m4285153613 (SingleDataContainer_t832212127 * __this, int32_t ___index, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Common.SingleDataContainer::DoCopyValue(System.Data.Common.DataContainer,System.Int32,System.Int32)
extern "C"  void SingleDataContainer_DoCopyValue_m2846578811 (SingleDataContainer_t832212127 * __this, DataContainer_t1942492167 * ___from, int32_t ___from_index, int32_t ___to_index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.Common.SingleDataContainer::DoCompareValues(System.Int32,System.Int32)
extern "C"  int32_t SingleDataContainer_DoCompareValues_m969245195 (SingleDataContainer_t832212127 * __this, int32_t ___index1, int32_t ___index2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Common.SingleDataContainer::Resize(System.Int32)
extern "C"  void SingleDataContainer_Resize_m898668036 (SingleDataContainer_t832212127 * __this, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Data.Common.SingleDataContainer::GetInt64(System.Int32)
extern "C"  int64_t SingleDataContainer_GetInt64_m557487212 (SingleDataContainer_t832212127 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
