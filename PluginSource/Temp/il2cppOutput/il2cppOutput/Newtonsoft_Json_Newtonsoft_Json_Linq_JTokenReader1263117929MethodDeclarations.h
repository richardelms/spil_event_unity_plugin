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

// Newtonsoft.Json.Linq.JTokenReader
struct JTokenReader_t1263117929;
// Newtonsoft.Json.Linq.JToken
struct JToken_t2367600838;
// System.String
struct String_t;
// Newtonsoft.Json.Linq.JContainer
struct JContainer_t103968846;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "Newtonsoft_Json_Newtonsoft_Json_Linq_JToken2367600838.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Nullable_1_gen3212069384.h"
#include "Newtonsoft_Json_Newtonsoft_Json_Linq_JContainer103968846.h"
#include "mscorlib_System_Object837106420.h"

// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JTokenReader::get_CurrentToken()
extern "C"  JToken_t2367600838 * JTokenReader_get_CurrentToken_m3825356365 (JTokenReader_t1263117929 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JTokenReader::.ctor(Newtonsoft.Json.Linq.JToken)
extern "C"  void JTokenReader__ctor_m1470434453 (JTokenReader_t1263117929 * __this, JToken_t2367600838 * ___token, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JTokenReader::.ctor(Newtonsoft.Json.Linq.JToken,System.String)
extern "C"  void JTokenReader__ctor_m957221905 (JTokenReader_t1263117929 * __this, JToken_t2367600838 * ___token, String_t* ___initialPath, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Linq.JTokenReader::Read()
extern "C"  bool JTokenReader_Read_m1194314779 (JTokenReader_t1263117929 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Linq.JTokenReader::ReadOver(Newtonsoft.Json.Linq.JToken)
extern "C"  bool JTokenReader_ReadOver_m4042561979 (JTokenReader_t1263117929 * __this, JToken_t2367600838 * ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Linq.JTokenReader::ReadToEnd()
extern "C"  bool JTokenReader_ReadToEnd_m3152530023 (JTokenReader_t1263117929 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Nullable`1<Newtonsoft.Json.JsonToken> Newtonsoft.Json.Linq.JTokenReader::GetEndToken(Newtonsoft.Json.Linq.JContainer)
extern "C"  Nullable_1_t3212069384  JTokenReader_GetEndToken_m464287893 (JTokenReader_t1263117929 * __this, JContainer_t103968846 * ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Linq.JTokenReader::ReadInto(Newtonsoft.Json.Linq.JContainer)
extern "C"  bool JTokenReader_ReadInto_m176251559 (JTokenReader_t1263117929 * __this, JContainer_t103968846 * ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Linq.JTokenReader::SetEnd(Newtonsoft.Json.Linq.JContainer)
extern "C"  bool JTokenReader_SetEnd_m2038969860 (JTokenReader_t1263117929 * __this, JContainer_t103968846 * ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JTokenReader::SetToken(Newtonsoft.Json.Linq.JToken)
extern "C"  void JTokenReader_SetToken_m1376336452 (JTokenReader_t1263117929 * __this, JToken_t2367600838 * ___token, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Newtonsoft.Json.Linq.JTokenReader::SafeToString(System.Object)
extern "C"  String_t* JTokenReader_SafeToString_m1349351727 (JTokenReader_t1263117929 * __this, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Linq.JTokenReader::Newtonsoft.Json.IJsonLineInfo.HasLineInfo()
extern "C"  bool JTokenReader_Newtonsoft_Json_IJsonLineInfo_HasLineInfo_m103079529 (JTokenReader_t1263117929 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Newtonsoft.Json.Linq.JTokenReader::Newtonsoft.Json.IJsonLineInfo.get_LineNumber()
extern "C"  int32_t JTokenReader_Newtonsoft_Json_IJsonLineInfo_get_LineNumber_m2563359009 (JTokenReader_t1263117929 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Newtonsoft.Json.Linq.JTokenReader::Newtonsoft.Json.IJsonLineInfo.get_LinePosition()
extern "C"  int32_t JTokenReader_Newtonsoft_Json_IJsonLineInfo_get_LinePosition_m4146339137 (JTokenReader_t1263117929 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Newtonsoft.Json.Linq.JTokenReader::get_Path()
extern "C"  String_t* JTokenReader_get_Path_m4084465434 (JTokenReader_t1263117929 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
