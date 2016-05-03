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

// System.Data.Common.ByteDataContainer
struct ByteDataContainer_t2977030111;
// System.Object
struct Il2CppObject;
// System.Data.Common.DataContainer
struct DataContainer_t1942492167;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "System_Data_System_Data_Common_DataContainer1942492167.h"

// System.Void System.Data.Common.ByteDataContainer::.ctor()
extern "C"  void ByteDataContainer__ctor_m2654278821 (ByteDataContainer_t2977030111 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Data.Common.ByteDataContainer::GetValue(System.Int32)
extern "C"  Il2CppObject * ByteDataContainer_GetValue_m842151488 (ByteDataContainer_t2977030111 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Common.ByteDataContainer::ZeroOut(System.Int32)
extern "C"  void ByteDataContainer_ZeroOut_m1132883738 (ByteDataContainer_t2977030111 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Common.ByteDataContainer::SetValue(System.Int32,System.Object)
extern "C"  void ByteDataContainer_SetValue_m2189366349 (ByteDataContainer_t2977030111 * __this, int32_t ___index, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Common.ByteDataContainer::DoCopyValue(System.Data.Common.DataContainer,System.Int32,System.Int32)
extern "C"  void ByteDataContainer_DoCopyValue_m3381503355 (ByteDataContainer_t2977030111 * __this, DataContainer_t1942492167 * ___from, int32_t ___from_index, int32_t ___to_index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.Common.ByteDataContainer::DoCompareValues(System.Int32,System.Int32)
extern "C"  int32_t ByteDataContainer_DoCompareValues_m126352907 (ByteDataContainer_t2977030111 * __this, int32_t ___index1, int32_t ___index2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Common.ByteDataContainer::Resize(System.Int32)
extern "C"  void ByteDataContainer_Resize_m715876612 (ByteDataContainer_t2977030111 * __this, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Data.Common.ByteDataContainer::GetInt64(System.Int32)
extern "C"  int64_t ByteDataContainer_GetInt64_m3510504620 (ByteDataContainer_t2977030111 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
