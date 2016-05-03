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

// System.Text.StringBuilder
struct StringBuilder_t3822575854;
// System.String
struct String_t;
// System.Collections.Generic.List`1<Newtonsoft.Json.JsonPosition>
struct List_1_t4201021933;
// Newtonsoft.Json.IJsonLineInfo
struct IJsonLineInfo_t3901002070;

#include "codegen/il2cpp-codegen.h"
#include "Newtonsoft_Json_Newtonsoft_Json_JsonPosition3404062964.h"
#include "Newtonsoft_Json_Newtonsoft_Json_JsonContainerType722464214.h"
#include "mscorlib_System_Text_StringBuilder3822575854.h"
#include "mscorlib_System_Nullable_1_gen1995133576.h"
#include "mscorlib_System_String968488902.h"

// System.Void Newtonsoft.Json.JsonPosition::.ctor(Newtonsoft.Json.JsonContainerType)
extern "C"  void JsonPosition__ctor_m3805074164 (JsonPosition_t3404062964 * __this, int32_t ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Newtonsoft.Json.JsonPosition::CalculateLength()
extern "C"  int32_t JsonPosition_CalculateLength_m2820194662 (JsonPosition_t3404062964 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonPosition::WriteTo(System.Text.StringBuilder)
extern "C"  void JsonPosition_WriteTo_m2074469170 (JsonPosition_t3404062964 * __this, StringBuilder_t3822575854 * ___sb, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.JsonPosition::TypeHasIndex(Newtonsoft.Json.JsonContainerType)
extern "C"  bool JsonPosition_TypeHasIndex_m551378516 (Il2CppObject * __this /* static, unused */, int32_t ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Newtonsoft.Json.JsonPosition::BuildPath(System.Collections.Generic.List`1<Newtonsoft.Json.JsonPosition>,System.Nullable`1<Newtonsoft.Json.JsonPosition>)
extern "C"  String_t* JsonPosition_BuildPath_m3982583689 (Il2CppObject * __this /* static, unused */, List_1_t4201021933 * ___positions, Nullable_1_t1995133576  ___currentPosition, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Newtonsoft.Json.JsonPosition::FormatMessage(Newtonsoft.Json.IJsonLineInfo,System.String,System.String)
extern "C"  String_t* JsonPosition_FormatMessage_m2403071521 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___lineInfo, String_t* ___path, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonPosition::.cctor()
extern "C"  void JsonPosition__cctor_m3882977805 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct JsonPosition_t3404062964;
struct JsonPosition_t3404062964_marshaled_pinvoke;

extern "C" void JsonPosition_t3404062964_marshal_pinvoke(const JsonPosition_t3404062964& unmarshaled, JsonPosition_t3404062964_marshaled_pinvoke& marshaled);
extern "C" void JsonPosition_t3404062964_marshal_pinvoke_back(const JsonPosition_t3404062964_marshaled_pinvoke& marshaled, JsonPosition_t3404062964& unmarshaled);
extern "C" void JsonPosition_t3404062964_marshal_pinvoke_cleanup(JsonPosition_t3404062964_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct JsonPosition_t3404062964;
struct JsonPosition_t3404062964_marshaled_com;

extern "C" void JsonPosition_t3404062964_marshal_com(const JsonPosition_t3404062964& unmarshaled, JsonPosition_t3404062964_marshaled_com& marshaled);
extern "C" void JsonPosition_t3404062964_marshal_com_back(const JsonPosition_t3404062964_marshaled_com& marshaled, JsonPosition_t3404062964& unmarshaled);
extern "C" void JsonPosition_t3404062964_marshal_com_cleanup(JsonPosition_t3404062964_marshaled_com& marshaled);
