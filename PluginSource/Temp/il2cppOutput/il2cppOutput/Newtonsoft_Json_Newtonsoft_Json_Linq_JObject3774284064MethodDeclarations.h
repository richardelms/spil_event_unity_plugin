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

// Newtonsoft.Json.Linq.JObject
struct JObject_t3774284064;
// System.Collections.Generic.IList`1<Newtonsoft.Json.Linq.JToken>
struct IList_1_t239125856;
// Newtonsoft.Json.Linq.JToken
struct JToken_t2367600838;
// Newtonsoft.Json.Linq.JProperty
struct JProperty_t2926881078;
// System.String
struct String_t;
// Newtonsoft.Json.JsonReader
struct JsonReader_t1817561742;
// Newtonsoft.Json.Linq.JsonLoadSettings
struct JsonLoadSettings_t3003734344;
// Newtonsoft.Json.JsonWriter
struct JsonWriter_t1972966974;
// Newtonsoft.Json.JsonConverter[]
struct JsonConverterU5BU5D_t1140441370;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1434320288;
// System.Collections.Generic.ICollection`1<Newtonsoft.Json.Linq.JToken>
struct ICollection_1_t2833432224;
// System.Collections.Generic.KeyValuePair`2<System.String,Newtonsoft.Json.Linq.JToken>[]
struct KeyValuePair_2U5BU5D_t4002808073;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,Newtonsoft.Json.Linq.JToken>>
struct IEnumerator_1_t681969192;

#include "codegen/il2cpp-codegen.h"
#include "Newtonsoft_Json_Newtonsoft_Json_Linq_JObject3774284064.h"
#include "Newtonsoft_Json_Newtonsoft_Json_Linq_JToken2367600838.h"
#include "Newtonsoft_Json_Newtonsoft_Json_Linq_JProperty2926881078.h"
#include "Newtonsoft_Json_Newtonsoft_Json_Linq_JTokenType656424096.h"
#include "mscorlib_System_String968488902.h"
#include "Newtonsoft_Json_Newtonsoft_Json_JsonReader1817561742.h"
#include "Newtonsoft_Json_Newtonsoft_Json_Linq_JsonLoadSetti3003734344.h"
#include "Newtonsoft_Json_Newtonsoft_Json_JsonWriter1972966974.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_23493830040.h"

// System.Collections.Generic.IList`1<Newtonsoft.Json.Linq.JToken> Newtonsoft.Json.Linq.JObject::get_ChildrenTokens()
extern "C"  Il2CppObject* JObject_get_ChildrenTokens_m82150298 (JObject_t3774284064 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JObject::.ctor()
extern "C"  void JObject__ctor_m4117181142 (JObject_t3774284064 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JObject::.ctor(Newtonsoft.Json.Linq.JObject)
extern "C"  void JObject__ctor_m2940181766 (JObject_t3774284064 * __this, JObject_t3774284064 * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JObject::InsertItem(System.Int32,Newtonsoft.Json.Linq.JToken,System.Boolean)
extern "C"  void JObject_InsertItem_m2209531278 (JObject_t3774284064 * __this, int32_t ___index, JToken_t2367600838 * ___item, bool ___skipParentCheck, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JObject::ValidateToken(Newtonsoft.Json.Linq.JToken,Newtonsoft.Json.Linq.JToken)
extern "C"  void JObject_ValidateToken_m4089611383 (JObject_t3774284064 * __this, JToken_t2367600838 * ___o, JToken_t2367600838 * ___existing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JObject::InternalPropertyChanged(Newtonsoft.Json.Linq.JProperty)
extern "C"  void JObject_InternalPropertyChanged_m3729856176 (JObject_t3774284064 * __this, JProperty_t2926881078 * ___childProperty, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JObject::InternalPropertyChanging(Newtonsoft.Json.Linq.JProperty)
extern "C"  void JObject_InternalPropertyChanging_m63225543 (JObject_t3774284064 * __this, JProperty_t2926881078 * ___childProperty, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JObject::CloneToken()
extern "C"  JToken_t2367600838 * JObject_CloneToken_m2061448085 (JObject_t3774284064 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Linq.JTokenType Newtonsoft.Json.Linq.JObject::get_Type()
extern "C"  int32_t JObject_get_Type_m3339622818 (JObject_t3774284064 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Linq.JProperty Newtonsoft.Json.Linq.JObject::Property(System.String)
extern "C"  JProperty_t2926881078 * JObject_Property_m2829870194 (JObject_t3774284064 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JObject::get_Item(System.String)
extern "C"  JToken_t2367600838 * JObject_get_Item_m1550513101 (JObject_t3774284064 * __this, String_t* ___propertyName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JObject::set_Item(System.String,Newtonsoft.Json.Linq.JToken)
extern "C"  void JObject_set_Item_m2582506920 (JObject_t3774284064 * __this, String_t* ___propertyName, JToken_t2367600838 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Linq.JObject Newtonsoft.Json.Linq.JObject::Load(Newtonsoft.Json.JsonReader,Newtonsoft.Json.Linq.JsonLoadSettings)
extern "C"  JObject_t3774284064 * JObject_Load_m2490752057 (Il2CppObject * __this /* static, unused */, JsonReader_t1817561742 * ___reader, JsonLoadSettings_t3003734344 * ___settings, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JObject::WriteTo(Newtonsoft.Json.JsonWriter,Newtonsoft.Json.JsonConverter[])
extern "C"  void JObject_WriteTo_m1431664229 (JObject_t3774284064 * __this, JsonWriter_t1972966974 * ___writer, JsonConverterU5BU5D_t1140441370* ___converters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JObject::Add(System.String,Newtonsoft.Json.Linq.JToken)
extern "C"  void JObject_Add_m3581751409 (JObject_t3774284064 * __this, String_t* ___propertyName, JToken_t2367600838 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Linq.JObject::System.Collections.Generic.IDictionary<System.String,Newtonsoft.Json.Linq.JToken>.ContainsKey(System.String)
extern "C"  bool JObject_System_Collections_Generic_IDictionaryU3CSystem_StringU2CNewtonsoft_Json_Linq_JTokenU3E_ContainsKey_m2982414568 (JObject_t3774284064 * __this, String_t* ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.ICollection`1<System.String> Newtonsoft.Json.Linq.JObject::System.Collections.Generic.IDictionary<System.String,Newtonsoft.Json.Linq.JToken>.get_Keys()
extern "C"  Il2CppObject* JObject_System_Collections_Generic_IDictionaryU3CSystem_StringU2CNewtonsoft_Json_Linq_JTokenU3E_get_Keys_m3261987565 (JObject_t3774284064 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Linq.JObject::Remove(System.String)
extern "C"  bool JObject_Remove_m464884390 (JObject_t3774284064 * __this, String_t* ___propertyName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Linq.JObject::TryGetValue(System.String,Newtonsoft.Json.Linq.JToken&)
extern "C"  bool JObject_TryGetValue_m3218699718 (JObject_t3774284064 * __this, String_t* ___propertyName, JToken_t2367600838 ** ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.ICollection`1<Newtonsoft.Json.Linq.JToken> Newtonsoft.Json.Linq.JObject::System.Collections.Generic.IDictionary<System.String,Newtonsoft.Json.Linq.JToken>.get_Values()
extern "C"  Il2CppObject* JObject_System_Collections_Generic_IDictionaryU3CSystem_StringU2CNewtonsoft_Json_Linq_JTokenU3E_get_Values_m1232379891 (JObject_t3774284064 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JObject::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<System.String,Newtonsoft.Json.Linq.JToken>>.Add(System.Collections.Generic.KeyValuePair`2<System.String,Newtonsoft.Json.Linq.JToken>)
extern "C"  void JObject_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CSystem_StringU2CNewtonsoft_Json_Linq_JTokenU3EU3E_Add_m2018657351 (JObject_t3774284064 * __this, KeyValuePair_2_t3493830040  ___item, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JObject::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<System.String,Newtonsoft.Json.Linq.JToken>>.Clear()
extern "C"  void JObject_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CSystem_StringU2CNewtonsoft_Json_Linq_JTokenU3EU3E_Clear_m4165482228 (JObject_t3774284064 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Linq.JObject::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<System.String,Newtonsoft.Json.Linq.JToken>>.Contains(System.Collections.Generic.KeyValuePair`2<System.String,Newtonsoft.Json.Linq.JToken>)
extern "C"  bool JObject_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CSystem_StringU2CNewtonsoft_Json_Linq_JTokenU3EU3E_Contains_m23591823 (JObject_t3774284064 * __this, KeyValuePair_2_t3493830040  ___item, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JObject::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<System.String,Newtonsoft.Json.Linq.JToken>>.CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,Newtonsoft.Json.Linq.JToken>[],System.Int32)
extern "C"  void JObject_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CSystem_StringU2CNewtonsoft_Json_Linq_JTokenU3EU3E_CopyTo_m2011595407 (JObject_t3774284064 * __this, KeyValuePair_2U5BU5D_t4002808073* ___array, int32_t ___arrayIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Linq.JObject::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<System.String,Newtonsoft.Json.Linq.JToken>>.get_IsReadOnly()
extern "C"  bool JObject_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CSystem_StringU2CNewtonsoft_Json_Linq_JTokenU3EU3E_get_IsReadOnly_m1896044454 (JObject_t3774284064 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Linq.JObject::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<System.String,Newtonsoft.Json.Linq.JToken>>.Remove(System.Collections.Generic.KeyValuePair`2<System.String,Newtonsoft.Json.Linq.JToken>)
extern "C"  bool JObject_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CSystem_StringU2CNewtonsoft_Json_Linq_JTokenU3EU3E_Remove_m723810356 (JObject_t3774284064 * __this, KeyValuePair_2_t3493830040  ___item, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,Newtonsoft.Json.Linq.JToken>> Newtonsoft.Json.Linq.JObject::GetEnumerator()
extern "C"  Il2CppObject* JObject_GetEnumerator_m2240233355 (JObject_t3774284064 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JObject::OnPropertyChanged(System.String)
extern "C"  void JObject_OnPropertyChanged_m1472138446 (JObject_t3774284064 * __this, String_t* ___propertyName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
