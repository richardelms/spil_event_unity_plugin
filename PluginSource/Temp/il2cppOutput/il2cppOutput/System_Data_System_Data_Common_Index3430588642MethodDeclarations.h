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

// System.Data.Common.Index
struct Index_t3430588642;
// System.Data.Common.Key
struct Key_t3359870575;
// System.Int32[]
struct Int32U5BU5D_t1809983122;
// System.Object[]
struct ObjectU5BU5D_t11523773;
// System.Data.DataRow
struct DataRow_t3654701923;

#include "codegen/il2cpp-codegen.h"
#include "System_Data_System_Data_Common_Key3359870575.h"
#include "System_Data_System_Data_DataRow3654701923.h"
#include "System_Data_System_Data_DataRowVersion2975473339.h"
#include "System_Data_System_Data_DataRowState2071073396.h"

// System.Void System.Data.Common.Index::.ctor(System.Data.Common.Key)
extern "C"  void Index__ctor_m2312293633 (Index_t3430588642 * __this, Key_t3359870575 * ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Common.Index::.cctor()
extern "C"  void Index__cctor_m1826419563 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.Common.Key System.Data.Common.Index::get_Key()
extern "C"  Key_t3359870575 * Index_get_Key_m3873106372 (Index_t3430588642 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.Common.Index::get_RefCount()
extern "C"  int32_t Index_get_RefCount_m3781328683 (Index_t3430588642 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.Common.Index::IndexToRecord(System.Int32)
extern "C"  int32_t Index_IndexToRecord_m626659755 (Index_t3430588642 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.Common.Index::get_HasDuplicates()
extern "C"  bool Index_get_HasDuplicates_m1978114863 (Index_t3430588642 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32[] System.Data.Common.Index::get_Duplicates()
extern "C"  Int32U5BU5D_t1809983122* Index_get_Duplicates_m2632322133 (Index_t3430588642 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Common.Index::Reset()
extern "C"  void Index_Reset_m1184584495 (Index_t3430588642 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Common.Index::RebuildIndex()
extern "C"  void Index_RebuildIndex_m2942274361 (Index_t3430588642 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Common.Index::Sort()
extern "C"  void Index_Sort_m353153696 (Index_t3430588642 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.Common.Index::Find(System.Object[])
extern "C"  int32_t Index_Find_m1648290803 (Index_t3430588642 * __this, ObjectU5BU5D_t11523773* ___keys, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.Common.Index::FindIndex(System.Object[])
extern "C"  int32_t Index_FindIndex_m2700262397 (Index_t3430588642 * __this, ObjectU5BU5D_t11523773* ___keys, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.Common.Index::Find(System.Int32)
extern "C"  int32_t Index_Find_m1279003824 (Index_t3430588642 * __this, int32_t ___record, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32[] System.Data.Common.Index::FindAll(System.Int32)
extern "C"  Int32U5BU5D_t1809983122* Index_FindAll_m4166374295 (Index_t3430588642 * __this, int32_t ___record, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32[] System.Data.Common.Index::FindAllIndexes(System.Int32)
extern "C"  Int32U5BU5D_t1809983122* Index_FindAllIndexes_m2322452301 (Index_t3430588642 * __this, int32_t ___record, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.Common.Index::FindIndex(System.Int32)
extern "C"  int32_t Index_FindIndex_m4043786470 (Index_t3430588642 * __this, int32_t ___record, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.Common.Index::FindIndexExact(System.Int32)
extern "C"  int32_t Index_FindIndexExact_m2894171613 (Index_t3430588642 * __this, int32_t ___record, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Common.Index::IndexesToRecords(System.Int32[])
extern "C"  void Index_IndexesToRecords_m686994392 (Index_t3430588642 * __this, Int32U5BU5D_t1809983122* ___indexes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Common.Index::Delete(System.Data.DataRow)
extern "C"  void Index_Delete_m1945885498 (Index_t3430588642 * __this, DataRow_t3654701923 * ___row, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Common.Index::Delete(System.Int32)
extern "C"  void Index_Delete_m3011047678 (Index_t3430588642 * __this, int32_t ___oldRecord, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Common.Index::Remove(System.Int32)
extern "C"  void Index_Remove_m212530199 (Index_t3430588642 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Common.Index::Update(System.Data.DataRow,System.Int32,System.Data.DataRowVersion,System.Data.DataRowState)
extern "C"  void Index_Update_m767908738 (Index_t3430588642 * __this, DataRow_t3654701923 * ___row, int32_t ___oldRecord, int32_t ___oldVersion, int32_t ___oldState, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Common.Index::Add(System.Data.DataRow)
extern "C"  void Index_Add_m2846286886 (Index_t3430588642 * __this, DataRow_t3654701923 * ___row, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Common.Index::Add(System.Data.DataRow,System.Int32)
extern "C"  void Index_Add_m2981799537 (Index_t3430588642 * __this, DataRow_t3654701923 * ___row, int32_t ___newRecord, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Common.Index::Insert(System.Int32,System.Int32)
extern "C"  void Index_Insert_m1084506827 (Index_t3430588642 * __this, int32_t ___index, int32_t ___r, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Common.Index::MergeSort(System.Int32[],System.Int32)
extern "C"  void Index_MergeSort_m3683505330 (Index_t3430588642 * __this, Int32U5BU5D_t1809983122* ___to, int32_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Common.Index::MergeSort(System.Int32[],System.Int32[],System.Int32,System.Int32)
extern "C"  void Index_MergeSort_m3096217776 (Index_t3430588642 * __this, Int32U5BU5D_t1809983122* ___from, Int32U5BU5D_t1809983122* ___to, int32_t ___p, int32_t ___r, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.Common.Index::BinarySearch(System.Int32[],System.Int32,System.Int32,System.Int32)
extern "C"  int32_t Index_BinarySearch_m3124135833 (Index_t3430588642 * __this, Int32U5BU5D_t1809983122* ___a, int32_t ___p, int32_t ___r, int32_t ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.Common.Index::LazyBinarySearch(System.Int32[],System.Int32,System.Int32,System.Int32)
extern "C"  int32_t Index_LazyBinarySearch_m2752193029 (Index_t3430588642 * __this, Int32U5BU5D_t1809983122* ___a, int32_t ___p, int32_t ___r, int32_t ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Common.Index::AddRef()
extern "C"  void Index_AddRef_m1464501236 (Index_t3430588642 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Common.Index::RemoveRef()
extern "C"  void Index_RemoveRef_m2127990735 (Index_t3430588642 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
