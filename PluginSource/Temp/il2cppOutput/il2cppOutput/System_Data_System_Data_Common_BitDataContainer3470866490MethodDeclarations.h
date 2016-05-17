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

// System.Data.Common.BitDataContainer
struct BitDataContainer_t3470866490;
// System.Object
struct Il2CppObject;
// System.Data.Common.DataContainer
struct DataContainer_t1942492167;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "System_Data_System_Data_Common_DataContainer1942492167.h"

// System.Void System.Data.Common.BitDataContainer::.ctor()
extern "C"  void BitDataContainer__ctor_m3259380392 (BitDataContainer_t3470866490 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Data.Common.BitDataContainer::GetValue(System.Int32)
extern "C"  Il2CppObject * BitDataContainer_GetValue_m3327916883 (BitDataContainer_t3470866490 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Common.BitDataContainer::ZeroOut(System.Int32)
extern "C"  void BitDataContainer_ZeroOut_m970804189 (BitDataContainer_t3470866490 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Common.BitDataContainer::SetValue(System.Int32,System.Object)
extern "C"  void BitDataContainer_SetValue_m2184231210 (BitDataContainer_t3470866490 * __this, int32_t ___index, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Common.BitDataContainer::DoCopyValue(System.Data.Common.DataContainer,System.Int32,System.Int32)
extern "C"  void BitDataContainer_DoCopyValue_m1055730558 (BitDataContainer_t3470866490 * __this, DataContainer_t1942492167 * ___from, int32_t ___from_index, int32_t ___to_index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.Common.BitDataContainer::DoCompareValues(System.Int32,System.Int32)
extern "C"  int32_t BitDataContainer_DoCompareValues_m1476395232 (BitDataContainer_t3470866490 * __this, int32_t ___index1, int32_t ___index2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Common.BitDataContainer::Resize(System.Int32)
extern "C"  void BitDataContainer_Resize_m2373216225 (BitDataContainer_t3470866490 * __this, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Data.Common.BitDataContainer::GetInt64(System.Int32)
extern "C"  int64_t BitDataContainer_GetInt64_m1952264159 (BitDataContainer_t3470866490 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
