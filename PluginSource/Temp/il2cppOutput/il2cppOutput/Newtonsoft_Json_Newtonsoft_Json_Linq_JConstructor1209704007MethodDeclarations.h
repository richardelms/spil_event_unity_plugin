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

// Newtonsoft.Json.Linq.JConstructor
struct JConstructor_t1209704007;
// System.Collections.Generic.IList`1<Newtonsoft.Json.Linq.JToken>
struct IList_1_t239125856;
// System.String
struct String_t;
// Newtonsoft.Json.Linq.JToken
struct JToken_t2367600838;
// Newtonsoft.Json.JsonWriter
struct JsonWriter_t1972966974;
// Newtonsoft.Json.JsonConverter[]
struct JsonConverterU5BU5D_t1140441370;
// Newtonsoft.Json.JsonReader
struct JsonReader_t1817561742;
// Newtonsoft.Json.Linq.JsonLoadSettings
struct JsonLoadSettings_t3003734344;

#include "codegen/il2cpp-codegen.h"
#include "Newtonsoft_Json_Newtonsoft_Json_Linq_JTokenType656424096.h"
#include "Newtonsoft_Json_Newtonsoft_Json_Linq_JConstructor1209704007.h"
#include "mscorlib_System_String968488902.h"
#include "Newtonsoft_Json_Newtonsoft_Json_JsonWriter1972966974.h"
#include "Newtonsoft_Json_Newtonsoft_Json_JsonReader1817561742.h"
#include "Newtonsoft_Json_Newtonsoft_Json_Linq_JsonLoadSetti3003734344.h"

// System.Collections.Generic.IList`1<Newtonsoft.Json.Linq.JToken> Newtonsoft.Json.Linq.JConstructor::get_ChildrenTokens()
extern "C"  Il2CppObject* JConstructor_get_ChildrenTokens_m2540197 (JConstructor_t1209704007 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Newtonsoft.Json.Linq.JConstructor::get_Name()
extern "C"  String_t* JConstructor_get_Name_m1975332574 (JConstructor_t1209704007 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Linq.JTokenType Newtonsoft.Json.Linq.JConstructor::get_Type()
extern "C"  int32_t JConstructor_get_Type_m732633023 (JConstructor_t1209704007 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JConstructor::.ctor(Newtonsoft.Json.Linq.JConstructor)
extern "C"  void JConstructor__ctor_m2384701778 (JConstructor_t1209704007 * __this, JConstructor_t1209704007 * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JConstructor::.ctor(System.String)
extern "C"  void JConstructor__ctor_m1422594571 (JConstructor_t1209704007 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JConstructor::CloneToken()
extern "C"  JToken_t2367600838 * JConstructor_CloneToken_m1784051582 (JConstructor_t1209704007 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JConstructor::WriteTo(Newtonsoft.Json.JsonWriter,Newtonsoft.Json.JsonConverter[])
extern "C"  void JConstructor_WriteTo_m2853107302 (JConstructor_t1209704007 * __this, JsonWriter_t1972966974 * ___writer, JsonConverterU5BU5D_t1140441370* ___converters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Linq.JConstructor Newtonsoft.Json.Linq.JConstructor::Load(Newtonsoft.Json.JsonReader,Newtonsoft.Json.Linq.JsonLoadSettings)
extern "C"  JConstructor_t1209704007 * JConstructor_Load_m4079017163 (Il2CppObject * __this /* static, unused */, JsonReader_t1817561742 * ___reader, JsonLoadSettings_t3003734344 * ___settings, const MethodInfo* method) IL2CPP_METHOD_ATTR;
