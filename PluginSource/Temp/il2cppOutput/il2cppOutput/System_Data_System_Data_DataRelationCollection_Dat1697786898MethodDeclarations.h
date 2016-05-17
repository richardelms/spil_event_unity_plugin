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

// System.Data.DataRelationCollection/DataSetRelationCollection
struct DataSetRelationCollection_t1697786898;
// System.Data.DataSet
struct DataSet_t3654702571;
// System.Data.DataRelation
struct DataRelation_t1483987353;
// System.Collections.ArrayList
struct ArrayList_t2121638921;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "System_Data_System_Data_DataSet3654702571.h"
#include "System_Data_System_Data_DataRelation1483987353.h"
#include "mscorlib_System_String968488902.h"

// System.Void System.Data.DataRelationCollection/DataSetRelationCollection::.ctor(System.Data.DataSet)
extern "C"  void DataSetRelationCollection__ctor_m1230606101 (DataSetRelationCollection_t1697786898 * __this, DataSet_t3654702571 * ___dataSet, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.DataSet System.Data.DataRelationCollection/DataSetRelationCollection::GetDataSet()
extern "C"  DataSet_t3654702571 * DataSetRelationCollection_GetDataSet_m3846798556 (DataSetRelationCollection_t1697786898 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataRelationCollection/DataSetRelationCollection::AddCore(System.Data.DataRelation)
extern "C"  void DataSetRelationCollection_AddCore_m3364626589 (DataSetRelationCollection_t1697786898 * __this, DataRelation_t1483987353 * ___relation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ArrayList System.Data.DataRelationCollection/DataSetRelationCollection::get_List()
extern "C"  ArrayList_t2121638921 * DataSetRelationCollection_get_List_m2497099285 (DataSetRelationCollection_t1697786898 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.DataRelation System.Data.DataRelationCollection/DataSetRelationCollection::get_Item(System.String)
extern "C"  DataRelation_t1483987353 * DataSetRelationCollection_get_Item_m967100868 (DataSetRelationCollection_t1697786898 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.DataRelation System.Data.DataRelationCollection/DataSetRelationCollection::get_Item(System.Int32)
extern "C"  DataRelation_t1483987353 * DataSetRelationCollection_get_Item_m4172884559 (DataSetRelationCollection_t1697786898 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
