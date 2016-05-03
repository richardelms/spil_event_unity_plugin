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

// System.Data.Common.DataContainer
struct DataContainer_t1942492167;
// System.Object
struct Il2CppObject;
// System.Type
struct Type_t;
// System.Data.DataColumn
struct DataColumn_t3354469747;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_Type2779229935.h"
#include "System_Data_System_Data_DataColumn3354469747.h"
#include "System_Data_System_Data_Common_DataContainer1942492167.h"

// System.Void System.Data.Common.DataContainer::.ctor()
extern "C"  void DataContainer__ctor_m2280271357 (DataContainer_t1942492167 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Data.Common.DataContainer::get_Item(System.Int32)
extern "C"  Il2CppObject * DataContainer_get_Item_m2376694089 (DataContainer_t1942492167 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Common.DataContainer::set_Item(System.Int32,System.Object)
extern "C"  void DataContainer_set_Item_m3220762902 (DataContainer_t1942492167 * __this, int32_t ___index, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.Common.DataContainer::get_Capacity()
extern "C"  int32_t DataContainer_get_Capacity_m2073945678 (DataContainer_t1942492167 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Common.DataContainer::set_Capacity(System.Int32)
extern "C"  void DataContainer_set_Capacity_m4065879087 (DataContainer_t1942492167 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Data.Common.DataContainer::get_Type()
extern "C"  Type_t * DataContainer_get_Type_m3477641860 (DataContainer_t1942492167 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.DataColumn System.Data.Common.DataContainer::get_Column()
extern "C"  DataColumn_t3354469747 * DataContainer_get_Column_m4248593204 (DataContainer_t1942492167 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.Common.DataContainer System.Data.Common.DataContainer::Create(System.Type,System.Data.DataColumn)
extern "C"  DataContainer_t1942492167 * DataContainer_Create_m3574923941 (Il2CppObject * __this /* static, unused */, Type_t * ___type, DataColumn_t3354469747 * ___column, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Data.Common.DataContainer::GetExplicitValue(System.Object)
extern "C"  Il2CppObject * DataContainer_GetExplicitValue_m457859761 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Data.Common.DataContainer::GetContainerData(System.Object)
extern "C"  Il2CppObject * DataContainer_GetContainerData_m3566351555 (DataContainer_t1942492167 * __this, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.Common.DataContainer::IsNull(System.Int32)
extern "C"  bool DataContainer_IsNull_m570679635 (DataContainer_t1942492167 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Common.DataContainer::FillValues(System.Int32)
extern "C"  void DataContainer_FillValues_m2868096445 (DataContainer_t1942492167 * __this, int32_t ___fromIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Common.DataContainer::CopyValue(System.Int32,System.Int32)
extern "C"  void DataContainer_CopyValue_m252743919 (DataContainer_t1942492167 * __this, int32_t ___from_index, int32_t ___to_index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Common.DataContainer::CopyValue(System.Data.Common.DataContainer,System.Int32,System.Int32)
extern "C"  void DataContainer_CopyValue_m1691271966 (DataContainer_t1942492167 * __this, DataContainer_t1942492167 * ___from, int32_t ___from_index, int32_t ___to_index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.Common.DataContainer::CompareValues(System.Int32,System.Int32)
extern "C"  int32_t DataContainer_CompareValues_m2012366984 (DataContainer_t1942492167 * __this, int32_t ___index1, int32_t ___index2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
