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

// System.Data.Common.Int64DataContainer
struct Int64DataContainer_t902617690;
// System.Object
struct Il2CppObject;
// System.Data.Common.DataContainer
struct DataContainer_t1942492167;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "System_Data_System_Data_Common_DataContainer1942492167.h"

// System.Void System.Data.Common.Int64DataContainer::.ctor()
extern "C"  void Int64DataContainer__ctor_m37156040 (Int64DataContainer_t902617690 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Data.Common.Int64DataContainer::GetValue(System.Int32)
extern "C"  Il2CppObject * Int64DataContainer_GetValue_m1881769587 (Int64DataContainer_t902617690 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Common.Int64DataContainer::ZeroOut(System.Int32)
extern "C"  void Int64DataContainer_ZeroOut_m1472189949 (Int64DataContainer_t902617690 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Common.Int64DataContainer::SetValue(System.Int32,System.Object)
extern "C"  void Int64DataContainer_SetValue_m2011474698 (Int64DataContainer_t902617690 * __this, int32_t ___index, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Common.Int64DataContainer::DoCopyValue(System.Data.Common.DataContainer,System.Int32,System.Int32)
extern "C"  void Int64DataContainer_DoCopyValue_m3485265310 (Int64DataContainer_t902617690 * __this, DataContainer_t1942492167 * ___from, int32_t ___from_index, int32_t ___to_index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.Common.Int64DataContainer::DoCompareValues(System.Int32,System.Int32)
extern "C"  int32_t Int64DataContainer_DoCompareValues_m3903329216 (Int64DataContainer_t902617690 * __this, int32_t ___index1, int32_t ___index2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Common.Int64DataContainer::Resize(System.Int32)
extern "C"  void Int64DataContainer_Resize_m34085313 (Int64DataContainer_t902617690 * __this, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Data.Common.Int64DataContainer::GetInt64(System.Int32)
extern "C"  int64_t Int64DataContainer_GetInt64_m1065285375 (Int64DataContainer_t902617690 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
