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

// Newtonsoft.Json.Linq.JRaw
struct JRaw_t170341493;
// System.Object
struct Il2CppObject;
// Newtonsoft.Json.JsonReader
struct JsonReader_t1817561742;
// Newtonsoft.Json.Linq.JToken
struct JToken_t2367600838;

#include "codegen/il2cpp-codegen.h"
#include "Newtonsoft_Json_Newtonsoft_Json_Linq_JRaw170341493.h"
#include "mscorlib_System_Object837106420.h"
#include "Newtonsoft_Json_Newtonsoft_Json_JsonReader1817561742.h"

// System.Void Newtonsoft.Json.Linq.JRaw::.ctor(Newtonsoft.Json.Linq.JRaw)
extern "C"  void JRaw__ctor_m2088175762 (JRaw_t170341493 * __this, JRaw_t170341493 * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JRaw::.ctor(System.Object)
extern "C"  void JRaw__ctor_m2176512075 (JRaw_t170341493 * __this, Il2CppObject * ___rawJson, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Linq.JRaw Newtonsoft.Json.Linq.JRaw::Create(Newtonsoft.Json.JsonReader)
extern "C"  JRaw_t170341493 * JRaw_Create_m2655760603 (Il2CppObject * __this /* static, unused */, JsonReader_t1817561742 * ___reader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JRaw::CloneToken()
extern "C"  JToken_t2367600838 * JRaw_CloneToken_m920086060 (JRaw_t170341493 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
