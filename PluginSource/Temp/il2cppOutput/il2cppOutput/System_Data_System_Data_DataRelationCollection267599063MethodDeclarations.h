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

// System.Data.DataRelationCollection
struct DataRelationCollection_t267599063;
// System.ComponentModel.CollectionChangeEventHandler
struct CollectionChangeEventHandler_t609299751;
// System.String
struct String_t;
// System.Data.DataRelation
struct DataRelation_t1483987353;
// System.Data.DataColumn[]
struct DataColumnU5BU5D_t3410743138;
// System.ComponentModel.CollectionChangeEventArgs
struct CollectionChangeEventArgs_t3787252946;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2995724695;

#include "codegen/il2cpp-codegen.h"
#include "System_System_ComponentModel_CollectionChangeEventH609299751.h"
#include "System_Data_System_Data_DataRelation1483987353.h"
#include "mscorlib_System_String968488902.h"
#include "System_System_ComponentModel_CollectionChangeEvent3787252946.h"
#include "mscorlib_System_Runtime_Serialization_Serializatio2995724695.h"

// System.Void System.Data.DataRelationCollection::.ctor()
extern "C"  void DataRelationCollection__ctor_m3546929805 (DataRelationCollection_t267599063 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataRelationCollection::add_CollectionChanged(System.ComponentModel.CollectionChangeEventHandler)
extern "C"  void DataRelationCollection_add_CollectionChanged_m888224162 (DataRelationCollection_t267599063 * __this, CollectionChangeEventHandler_t609299751 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataRelationCollection::remove_CollectionChanged(System.ComponentModel.CollectionChangeEventHandler)
extern "C"  void DataRelationCollection_remove_CollectionChanged_m3184819825 (DataRelationCollection_t267599063 * __this, CollectionChangeEventHandler_t609299751 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Data.DataRelationCollection::GetNextDefaultRelationName()
extern "C"  String_t* DataRelationCollection_GetNextDefaultRelationName_m2550265625 (DataRelationCollection_t267599063 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataRelationCollection::Add(System.Data.DataRelation)
extern "C"  void DataRelationCollection_Add_m2199449921 (DataRelationCollection_t267599063 * __this, DataRelation_t1483987353 * ___relation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Data.DataRelationCollection::GenerateRelationName()
extern "C"  String_t* DataRelationCollection_GenerateRelationName_m1935659510 (DataRelationCollection_t267599063 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.DataRelation System.Data.DataRelationCollection::Add(System.String,System.Data.DataColumn[],System.Data.DataColumn[],System.Boolean)
extern "C"  DataRelation_t1483987353 * DataRelationCollection_Add_m3848192671 (DataRelationCollection_t267599063 * __this, String_t* ___name, DataColumnU5BU5D_t3410743138* ___parentColumns, DataColumnU5BU5D_t3410743138* ___childColumns, bool ___createConstraints, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataRelationCollection::AddCore(System.Data.DataRelation)
extern "C"  void DataRelationCollection_AddCore_m157652672 (DataRelationCollection_t267599063 * __this, DataRelation_t1483987353 * ___relation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.DataRelationCollection::Contains(System.String)
extern "C"  bool DataRelationCollection_Contains_m2819267650 (DataRelationCollection_t267599063 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.DataRelationCollection::IndexOf(System.Data.DataRelation)
extern "C"  int32_t DataRelationCollection_IndexOf_m1686986885 (DataRelationCollection_t267599063 * __this, DataRelation_t1483987353 * ___relation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.DataRelationCollection::IndexOf(System.String)
extern "C"  int32_t DataRelationCollection_IndexOf_m4090912562 (DataRelationCollection_t267599063 * __this, String_t* ___relationName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.DataRelationCollection::IndexOf(System.String,System.Boolean)
extern "C"  int32_t DataRelationCollection_IndexOf_m1618831883 (DataRelationCollection_t267599063 * __this, String_t* ___name, bool ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataRelationCollection::OnCollectionChanged(System.ComponentModel.CollectionChangeEventArgs)
extern "C"  void DataRelationCollection_OnCollectionChanged_m878637482 (DataRelationCollection_t267599063 * __this, CollectionChangeEventArgs_t3787252946 * ___ccevent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataRelationCollection::OnCollectionChanging(System.ComponentModel.CollectionChangeEventArgs)
extern "C"  void DataRelationCollection_OnCollectionChanging_m2692142667 (DataRelationCollection_t267599063 * __this, CollectionChangeEventArgs_t3787252946 * ___ccevent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataRelationCollection::BinarySerialize(System.Runtime.Serialization.SerializationInfo)
extern "C"  void DataRelationCollection_BinarySerialize_m1578210239 (DataRelationCollection_t267599063 * __this, SerializationInfo_t2995724695 * ___si, const MethodInfo* method) IL2CPP_METHOD_ATTR;
