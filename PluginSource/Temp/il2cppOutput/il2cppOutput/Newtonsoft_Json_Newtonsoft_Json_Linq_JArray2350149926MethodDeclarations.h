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

// Newtonsoft.Json.Linq.JArray
struct JArray_t2350149926;
// System.Collections.Generic.IList`1<Newtonsoft.Json.Linq.JToken>
struct IList_1_t239125856;
// System.Object
struct Il2CppObject;
// Newtonsoft.Json.Linq.JToken
struct JToken_t2367600838;
// Newtonsoft.Json.JsonReader
struct JsonReader_t1817561742;
// Newtonsoft.Json.Linq.JsonLoadSettings
struct JsonLoadSettings_t3003734344;
// Newtonsoft.Json.JsonWriter
struct JsonWriter_t1972966974;
// Newtonsoft.Json.JsonConverter[]
struct JsonConverterU5BU5D_t1140441370;
// System.Collections.Generic.IEnumerator`1<Newtonsoft.Json.Linq.JToken>
struct IEnumerator_1_t3850707286;
// Newtonsoft.Json.Linq.JToken[]
struct JTokenU5BU5D_t1133600099;

#include "codegen/il2cpp-codegen.h"
#include "Newtonsoft_Json_Newtonsoft_Json_Linq_JTokenType656424096.h"
#include "Newtonsoft_Json_Newtonsoft_Json_Linq_JArray2350149926.h"
#include "mscorlib_System_Object837106420.h"
#include "Newtonsoft_Json_Newtonsoft_Json_JsonReader1817561742.h"
#include "Newtonsoft_Json_Newtonsoft_Json_Linq_JsonLoadSetti3003734344.h"
#include "Newtonsoft_Json_Newtonsoft_Json_JsonWriter1972966974.h"
#include "Newtonsoft_Json_Newtonsoft_Json_Linq_JToken2367600838.h"

// System.Collections.Generic.IList`1<Newtonsoft.Json.Linq.JToken> Newtonsoft.Json.Linq.JArray::get_ChildrenTokens()
extern "C"  Il2CppObject* JArray_get_ChildrenTokens_m1996009924 (JArray_t2350149926 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Linq.JTokenType Newtonsoft.Json.Linq.JArray::get_Type()
extern "C"  int32_t JArray_get_Type_m898984030 (JArray_t2350149926 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JArray::.ctor()
extern "C"  void JArray__ctor_m573371736 (JArray_t2350149926 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JArray::.ctor(Newtonsoft.Json.Linq.JArray)
extern "C"  void JArray__ctor_m1861404018 (JArray_t2350149926 * __this, JArray_t2350149926 * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JArray::.ctor(System.Object)
extern "C"  void JArray__ctor_m2401581884 (JArray_t2350149926 * __this, Il2CppObject * ___content, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JArray::CloneToken()
extern "C"  JToken_t2367600838 * JArray_CloneToken_m58790109 (JArray_t2350149926 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Linq.JArray Newtonsoft.Json.Linq.JArray::Load(Newtonsoft.Json.JsonReader,Newtonsoft.Json.Linq.JsonLoadSettings)
extern "C"  JArray_t2350149926 * JArray_Load_m1799145545 (Il2CppObject * __this /* static, unused */, JsonReader_t1817561742 * ___reader, JsonLoadSettings_t3003734344 * ___settings, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JArray::WriteTo(Newtonsoft.Json.JsonWriter,Newtonsoft.Json.JsonConverter[])
extern "C"  void JArray_WriteTo_m3623336423 (JArray_t2350149926 * __this, JsonWriter_t1972966974 * ___writer, JsonConverterU5BU5D_t1140441370* ___converters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JArray::get_Item(System.Int32)
extern "C"  JToken_t2367600838 * JArray_get_Item_m2666856046 (JArray_t2350149926 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JArray::set_Item(System.Int32,Newtonsoft.Json.Linq.JToken)
extern "C"  void JArray_set_Item_m1512910833 (JArray_t2350149926 * __this, int32_t ___index, JToken_t2367600838 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Newtonsoft.Json.Linq.JArray::IndexOf(Newtonsoft.Json.Linq.JToken)
extern "C"  int32_t JArray_IndexOf_m2423779975 (JArray_t2350149926 * __this, JToken_t2367600838 * ___item, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JArray::Insert(System.Int32,Newtonsoft.Json.Linq.JToken)
extern "C"  void JArray_Insert_m4207241562 (JArray_t2350149926 * __this, int32_t ___index, JToken_t2367600838 * ___item, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JArray::RemoveAt(System.Int32)
extern "C"  void JArray_RemoveAt_m1315806804 (JArray_t2350149926 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerator`1<Newtonsoft.Json.Linq.JToken> Newtonsoft.Json.Linq.JArray::GetEnumerator()
extern "C"  Il2CppObject* JArray_GetEnumerator_m1645744000 (JArray_t2350149926 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JArray::Add(Newtonsoft.Json.Linq.JToken)
extern "C"  void JArray_Add_m2751504307 (JArray_t2350149926 * __this, JToken_t2367600838 * ___item, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JArray::Clear()
extern "C"  void JArray_Clear_m2274472323 (JArray_t2350149926 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Linq.JArray::Contains(Newtonsoft.Json.Linq.JToken)
extern "C"  bool JArray_Contains_m817407081 (JArray_t2350149926 * __this, JToken_t2367600838 * ___item, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JArray::CopyTo(Newtonsoft.Json.Linq.JToken[],System.Int32)
extern "C"  void JArray_CopyTo_m3221462795 (JArray_t2350149926 * __this, JTokenU5BU5D_t1133600099* ___array, int32_t ___arrayIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Linq.JArray::get_IsReadOnly()
extern "C"  bool JArray_get_IsReadOnly_m133812983 (JArray_t2350149926 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Linq.JArray::Remove(Newtonsoft.Json.Linq.JToken)
extern "C"  bool JArray_Remove_m3387945956 (JArray_t2350149926 * __this, JToken_t2367600838 * ___item, const MethodInfo* method) IL2CPP_METHOD_ATTR;
