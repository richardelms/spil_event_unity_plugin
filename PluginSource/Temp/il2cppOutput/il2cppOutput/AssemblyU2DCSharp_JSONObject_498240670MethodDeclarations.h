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

// JSONObject
struct JSONObject_t_498240670_0;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t910085258_0;
// System.Collections.Generic.Dictionary`2<System.String,JSONObject>
struct Dictionary_2_t1630601563_0;
// JSONObject/AddJSONConents
struct AddJSONConents_t_1051765106_0;
// JSONObject[]
struct JSONObjectU5BU5D_t_2067911100_0;
// System.String
struct String_t;
// JSONObject/FieldNotFound
struct FieldNotFound_t1041319804_0;
// JSONObject/GetFieldResponse
struct GetFieldResponse_t1537720018_0;
// System.String[]
struct StringU5BU5D_t_816028754_0;
// System.Collections.IEnumerable
struct IEnumerable_t1412919357_0;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_t_381830596_0;
// System.Text.StringBuilder
struct StringBuilder_t586045924_0;
// UnityEngine.WWWForm
struct WWWForm_t_251098350_0;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_JSONObject_Type1830530535.h"

// System.Void JSONObject::.ctor(JSONObject/Type)
extern "C"  void JSONObject__ctor_m196212956_0 (JSONObject_t_498240670_0 * __this, int32_t ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JSONObject::.ctor(System.Boolean)
extern "C"  void JSONObject__ctor_m867327147_0 (JSONObject_t_498240670_0 * __this, bool ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JSONObject::.ctor(System.Single)
extern "C"  void JSONObject__ctor_m_1960074249_0 (JSONObject_t_498240670_0 * __this, float ___f, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JSONObject::.ctor(System.Collections.Generic.Dictionary`2<System.String,System.String>)
extern "C"  void JSONObject__ctor_m_488866971_0 (JSONObject_t_498240670_0 * __this, Dictionary_2_t910085258_0 * ___dic, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JSONObject::.ctor(System.Collections.Generic.Dictionary`2<System.String,JSONObject>)
extern "C"  void JSONObject__ctor_m665743720_0 (JSONObject_t_498240670_0 * __this, Dictionary_2_t1630601563_0 * ___dic, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JSONObject::.ctor(JSONObject/AddJSONConents)
extern "C"  void JSONObject__ctor_m302908565_0 (JSONObject_t_498240670_0 * __this, AddJSONConents_t_1051765106_0 * ___content, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JSONObject::.ctor(JSONObject[])
extern "C"  void JSONObject__ctor_m_875783445_0 (JSONObject_t_498240670_0 * __this, JSONObjectU5BU5D_t_2067911100_0* ___objs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JSONObject::.ctor()
extern "C"  void JSONObject__ctor_m_1411280332_0 (JSONObject_t_498240670_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JSONObject::.ctor(System.String,System.Int32,System.Boolean,System.Boolean)
extern "C"  void JSONObject__ctor_m_221086999_0 (JSONObject_t_498240670_0 * __this, String_t* ___str, int32_t ___maxDepth, bool ___storeExcessLevels, bool ___strict, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JSONObject::.cctor()
extern "C"  void JSONObject__cctor_m_1282113543_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean JSONObject::get_isContainer()
extern "C"  bool JSONObject_get_isContainer_m_1029708916_0 (JSONObject_t_498240670_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 JSONObject::get_Count()
extern "C"  int32_t JSONObject_get_Count_m_2113696150_0 (JSONObject_t_498240670_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single JSONObject::get_f()
extern "C"  float JSONObject_get_f_m_356959837_0 (JSONObject_t_498240670_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// JSONObject JSONObject::get_nullJO()
extern "C"  JSONObject_t_498240670_0 * JSONObject_get_nullJO_m744661531_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// JSONObject JSONObject::get_obj()
extern "C"  JSONObject_t_498240670_0 * JSONObject_get_obj_m_1255918614_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// JSONObject JSONObject::get_arr()
extern "C"  JSONObject_t_498240670_0 * JSONObject_get_arr_m_1268363564_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// JSONObject JSONObject::StringObject(System.String)
extern "C"  JSONObject_t_498240670_0 * JSONObject_StringObject_m1278083052_0 (Object_t * __this /* static, unused */, String_t* ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JSONObject::Absorb(JSONObject)
extern "C"  void JSONObject_Absorb_m_1167308714_0 (JSONObject_t_498240670_0 * __this, JSONObject_t_498240670_0 * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// JSONObject JSONObject::Create()
extern "C"  JSONObject_t_498240670_0 * JSONObject_Create_m_131970590_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// JSONObject JSONObject::Create(JSONObject/Type)
extern "C"  JSONObject_t_498240670_0 * JSONObject_Create_m1311846254_0 (Object_t * __this /* static, unused */, int32_t ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// JSONObject JSONObject::Create(System.Boolean)
extern "C"  JSONObject_t_498240670_0 * JSONObject_Create_m_66516007_0 (Object_t * __this /* static, unused */, bool ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// JSONObject JSONObject::Create(System.Single)
extern "C"  JSONObject_t_498240670_0 * JSONObject_Create_m919295753_0 (Object_t * __this /* static, unused */, float ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// JSONObject JSONObject::Create(System.Int32)
extern "C"  JSONObject_t_498240670_0 * JSONObject_Create_m_667534285_0 (Object_t * __this /* static, unused */, int32_t ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// JSONObject JSONObject::CreateStringObject(System.String)
extern "C"  JSONObject_t_498240670_0 * JSONObject_CreateStringObject_m_847929072_0 (Object_t * __this /* static, unused */, String_t* ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// JSONObject JSONObject::CreateBakedObject(System.String)
extern "C"  JSONObject_t_498240670_0 * JSONObject_CreateBakedObject_m_1508963432_0 (Object_t * __this /* static, unused */, String_t* ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// JSONObject JSONObject::Create(System.String,System.Int32,System.Boolean,System.Boolean)
extern "C"  JSONObject_t_498240670_0 * JSONObject_Create_m_601861993_0 (Object_t * __this /* static, unused */, String_t* ___val, int32_t ___maxDepth, bool ___storeExcessLevels, bool ___strict, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// JSONObject JSONObject::Create(JSONObject/AddJSONConents)
extern "C"  JSONObject_t_498240670_0 * JSONObject_Create_m_1443910489_0 (Object_t * __this /* static, unused */, AddJSONConents_t_1051765106_0 * ___content, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// JSONObject JSONObject::Create(System.Collections.Generic.Dictionary`2<System.String,System.String>)
extern "C"  JSONObject_t_498240670_0 * JSONObject_Create_m1646345235_0 (Object_t * __this /* static, unused */, Dictionary_2_t910085258_0 * ___dic, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JSONObject::Parse(System.String,System.Int32,System.Boolean,System.Boolean)
extern "C"  void JSONObject_Parse_m_313675014_0 (JSONObject_t_498240670_0 * __this, String_t* ___str, int32_t ___maxDepth, bool ___storeExcessLevels, bool ___strict, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean JSONObject::get_IsNumber()
extern "C"  bool JSONObject_get_IsNumber_m253170720_0 (JSONObject_t_498240670_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean JSONObject::get_IsNull()
extern "C"  bool JSONObject_get_IsNull_m1971188830_0 (JSONObject_t_498240670_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean JSONObject::get_IsString()
extern "C"  bool JSONObject_get_IsString_m_360347928_0 (JSONObject_t_498240670_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean JSONObject::get_IsBool()
extern "C"  bool JSONObject_get_IsBool_m1622187265_0 (JSONObject_t_498240670_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean JSONObject::get_IsArray()
extern "C"  bool JSONObject_get_IsArray_m_2050897852_0 (JSONObject_t_498240670_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean JSONObject::get_IsObject()
extern "C"  bool JSONObject_get_IsObject_m_2064861546_0 (JSONObject_t_498240670_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JSONObject::Add(System.Boolean)
extern "C"  void JSONObject_Add_m1644854314_0 (JSONObject_t_498240670_0 * __this, bool ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JSONObject::Add(System.Single)
extern "C"  void JSONObject_Add_m1805785240_0 (JSONObject_t_498240670_0 * __this, float ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JSONObject::Add(System.Int32)
extern "C"  void JSONObject_Add_m1439272132_0 (JSONObject_t_498240670_0 * __this, int32_t ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JSONObject::Add(System.String)
extern "C"  void JSONObject_Add_m2124461551_0 (JSONObject_t_498240670_0 * __this, String_t* ___str, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JSONObject::Add(JSONObject/AddJSONConents)
extern "C"  void JSONObject_Add_m1356697526_0 (JSONObject_t_498240670_0 * __this, AddJSONConents_t_1051765106_0 * ___content, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JSONObject::Add(JSONObject)
extern "C"  void JSONObject_Add_m1349655052_0 (JSONObject_t_498240670_0 * __this, JSONObject_t_498240670_0 * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JSONObject::AddField(System.String,System.Boolean)
extern "C"  void JSONObject_AddField_m396898404_0 (JSONObject_t_498240670_0 * __this, String_t* ___name, bool ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JSONObject::AddField(System.String,System.Single)
extern "C"  void JSONObject_AddField_m2042623262_0 (JSONObject_t_498240670_0 * __this, String_t* ___name, float ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JSONObject::AddField(System.String,System.Int32)
extern "C"  void JSONObject_AddField_m_908392578_0 (JSONObject_t_498240670_0 * __this, String_t* ___name, int32_t ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JSONObject::AddField(System.String,JSONObject/AddJSONConents)
extern "C"  void JSONObject_AddField_m_1918446788_0 (JSONObject_t_498240670_0 * __this, String_t* ___name, AddJSONConents_t_1051765106_0 * ___content, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JSONObject::AddField(System.String,System.String)
extern "C"  void JSONObject_AddField_m_1933667723_0 (JSONObject_t_498240670_0 * __this, String_t* ___name, String_t* ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JSONObject::AddField(System.String,JSONObject)
extern "C"  void JSONObject_AddField_m574028614_0 (JSONObject_t_498240670_0 * __this, String_t* ___name, JSONObject_t_498240670_0 * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JSONObject::SetField(System.String,System.Boolean)
extern "C"  void JSONObject_SetField_m1192398083_0 (JSONObject_t_498240670_0 * __this, String_t* ___name, bool ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JSONObject::SetField(System.String,System.Single)
extern "C"  void JSONObject_SetField_m_1118304097_0 (JSONObject_t_498240670_0 * __this, String_t* ___name, float ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JSONObject::SetField(System.String,System.Int32)
extern "C"  void JSONObject_SetField_m790757341_0 (JSONObject_t_498240670_0 * __this, String_t* ___name, int32_t ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JSONObject::SetField(System.String,JSONObject)
extern "C"  void JSONObject_SetField_m1867415397_0 (JSONObject_t_498240670_0 * __this, String_t* ___name, JSONObject_t_498240670_0 * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JSONObject::RemoveField(System.String)
extern "C"  void JSONObject_RemoveField_m279507994_0 (JSONObject_t_498240670_0 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JSONObject::GetField(System.Boolean&,System.String,JSONObject/FieldNotFound)
extern "C"  void JSONObject_GetField_m_1715002168_0 (JSONObject_t_498240670_0 * __this, bool* ___field, String_t* ___name, FieldNotFound_t1041319804_0 * ___fail, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JSONObject::GetField(System.Single&,System.String,JSONObject/FieldNotFound)
extern "C"  void JSONObject_GetField_m_146241068_0 (JSONObject_t_498240670_0 * __this, float* ___field, String_t* ___name, FieldNotFound_t1041319804_0 * ___fail, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JSONObject::GetField(System.Int32&,System.String,JSONObject/FieldNotFound)
extern "C"  void JSONObject_GetField_m1723647906_0 (JSONObject_t_498240670_0 * __this, int32_t* ___field, String_t* ___name, FieldNotFound_t1041319804_0 * ___fail, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JSONObject::GetField(System.UInt32&,System.String,JSONObject/FieldNotFound)
extern "C"  void JSONObject_GetField_m345062947_0 (JSONObject_t_498240670_0 * __this, uint32_t* ___field, String_t* ___name, FieldNotFound_t1041319804_0 * ___fail, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JSONObject::GetField(System.String&,System.String,JSONObject/FieldNotFound)
extern "C"  void JSONObject_GetField_m_1189821397_0 (JSONObject_t_498240670_0 * __this, String_t** ___field, String_t* ___name, FieldNotFound_t1041319804_0 * ___fail, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JSONObject::GetField(System.String,JSONObject/GetFieldResponse,JSONObject/FieldNotFound)
extern "C"  void JSONObject_GetField_m_1327889224_0 (JSONObject_t_498240670_0 * __this, String_t* ___name, GetFieldResponse_t1537720018_0 * ___response, FieldNotFound_t1041319804_0 * ___fail, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// JSONObject JSONObject::GetField(System.String)
extern "C"  JSONObject_t_498240670_0 * JSONObject_GetField_m2116260440_0 (JSONObject_t_498240670_0 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean JSONObject::HasFields(System.String[])
extern "C"  bool JSONObject_HasFields_m57373359_0 (JSONObject_t_498240670_0 * __this, StringU5BU5D_t_816028754_0* ___names, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean JSONObject::HasField(System.String)
extern "C"  bool JSONObject_HasField_m1466444350_0 (JSONObject_t_498240670_0 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JSONObject::Clear()
extern "C"  void JSONObject_Clear_m289820255_0 (JSONObject_t_498240670_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// JSONObject JSONObject::Copy()
extern "C"  JSONObject_t_498240670_0 * JSONObject_Copy_m_136637605_0 (JSONObject_t_498240670_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JSONObject::Merge(JSONObject)
extern "C"  void JSONObject_Merge_m683772643_0 (JSONObject_t_498240670_0 * __this, JSONObject_t_498240670_0 * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JSONObject::MergeRecur(JSONObject,JSONObject)
extern "C"  void JSONObject_MergeRecur_m1383547553_0 (Object_t * __this /* static, unused */, JSONObject_t_498240670_0 * ___left, JSONObject_t_498240670_0 * ___right, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JSONObject::Bake()
extern "C"  void JSONObject_Bake_m_1276184535_0 (JSONObject_t_498240670_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerable JSONObject::BakeAsync()
extern "C"  Object_t * JSONObject_BakeAsync_m1036293873_0 (JSONObject_t_498240670_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String JSONObject::Print(System.Boolean)
extern "C"  String_t* JSONObject_Print_m93291571_0 (JSONObject_t_498240670_0 * __this, bool ___pretty, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<System.String> JSONObject::PrintAsync(System.Boolean)
extern "C"  Object_t* JSONObject_PrintAsync_m_87562734_0 (JSONObject_t_498240670_0 * __this, bool ___pretty, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerable JSONObject::StringifyAsync(System.Int32,System.Text.StringBuilder,System.Boolean)
extern "C"  Object_t * JSONObject_StringifyAsync_m_385431165_0 (JSONObject_t_498240670_0 * __this, int32_t ___depth, StringBuilder_t586045924_0 * ___builder, bool ___pretty, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JSONObject::Stringify(System.Int32,System.Text.StringBuilder,System.Boolean)
extern "C"  void JSONObject_Stringify_m_1625020053_0 (JSONObject_t_498240670_0 * __this, int32_t ___depth, StringBuilder_t586045924_0 * ___builder, bool ___pretty, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// JSONObject JSONObject::get_Item(System.Int32)
extern "C"  JSONObject_t_498240670_0 * JSONObject_get_Item_m528566355_0 (JSONObject_t_498240670_0 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JSONObject::set_Item(System.Int32,JSONObject)
extern "C"  void JSONObject_set_Item_m_1754018034_0 (JSONObject_t_498240670_0 * __this, int32_t ___index, JSONObject_t_498240670_0 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// JSONObject JSONObject::get_Item(System.String)
extern "C"  JSONObject_t_498240670_0 * JSONObject_get_Item_m_337613760_0 (JSONObject_t_498240670_0 * __this, String_t* ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JSONObject::set_Item(System.String,JSONObject)
extern "C"  void JSONObject_set_Item_m_499260291_0 (JSONObject_t_498240670_0 * __this, String_t* ___index, JSONObject_t_498240670_0 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String JSONObject::ToString()
extern "C"  String_t* JSONObject_ToString_m_9160097_0 (JSONObject_t_498240670_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String JSONObject::ToString(System.Boolean)
extern "C"  String_t* JSONObject_ToString_m_178659946_0 (JSONObject_t_498240670_0 * __this, bool ___pretty, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.String,System.String> JSONObject::ToDictionary()
extern "C"  Dictionary_2_t910085258_0 * JSONObject_ToDictionary_m660917039_0 (JSONObject_t_498240670_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.WWWForm JSONObject::op_Implicit(JSONObject)
extern "C"  WWWForm_t_251098350_0 * JSONObject_op_Implicit_m1266288287_0 (Object_t * __this /* static, unused */, JSONObject_t_498240670_0 * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean JSONObject::op_Implicit(JSONObject)
extern "C"  bool JSONObject_op_Implicit_m_1774514950_0 (Object_t * __this /* static, unused */, JSONObject_t_498240670_0 * ___o, const MethodInfo* method) IL2CPP_METHOD_ATTR;
