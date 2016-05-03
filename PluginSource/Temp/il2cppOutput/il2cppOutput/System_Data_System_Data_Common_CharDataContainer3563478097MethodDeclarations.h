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

// System.Data.Common.CharDataContainer
struct CharDataContainer_t3563478097;
// System.Object
struct Il2CppObject;
// System.Data.Common.DataContainer
struct DataContainer_t1942492167;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "System_Data_System_Data_Common_DataContainer1942492167.h"

// System.Void System.Data.Common.CharDataContainer::.ctor()
extern "C"  void CharDataContainer__ctor_m3913316467 (CharDataContainer_t3563478097 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Data.Common.CharDataContainer::GetValue(System.Int32)
extern "C"  Il2CppObject * CharDataContainer_GetValue_m4227136690 (CharDataContainer_t3563478097 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Common.CharDataContainer::ZeroOut(System.Int32)
extern "C"  void CharDataContainer_ZeroOut_m133698152 (CharDataContainer_t3563478097 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Common.CharDataContainer::SetValue(System.Int32,System.Object)
extern "C"  void CharDataContainer_SetValue_m3366234943 (CharDataContainer_t3563478097 * __this, int32_t ___index, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Common.CharDataContainer::DoCopyValue(System.Data.Common.DataContainer,System.Int32,System.Int32)
extern "C"  void CharDataContainer_DoCopyValue_m3625163081 (CharDataContainer_t3563478097 * __this, DataContainer_t1942492167 * ___from, int32_t ___from_index, int32_t ___to_index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.Common.CharDataContainer::DoCompareValues(System.Int32,System.Int32)
extern "C"  int32_t CharDataContainer_DoCompareValues_m1179195261 (CharDataContainer_t3563478097 * __this, int32_t ___index1, int32_t ___index2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Common.CharDataContainer::Resize(System.Int32)
extern "C"  void CharDataContainer_Resize_m4008780790 (CharDataContainer_t3563478097 * __this, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Data.Common.CharDataContainer::GetInt64(System.Int32)
extern "C"  int64_t CharDataContainer_GetInt64_m2600522526 (CharDataContainer_t3563478097 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
