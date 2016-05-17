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

// System.String
struct String_t;
// System.IFormatProvider
struct IFormatProvider_t3436592966;
// System.Object
struct Il2CppObject;
// System.Object[]
struct ObjectU5BU5D_t11523773;
// System.IO.StringWriter
struct StringWriter_t2384730283;
// System.Char[]
struct CharU5BU5D_t3416858730;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_Nullable_1_gen1438485399.h"

// System.String Newtonsoft.Json.Utilities.StringUtils::FormatWith(System.String,System.IFormatProvider,System.Object)
extern "C"  String_t* StringUtils_FormatWith_m692745541 (Il2CppObject * __this /* static, unused */, String_t* ___format, Il2CppObject * ___provider, Il2CppObject * ___arg0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Newtonsoft.Json.Utilities.StringUtils::FormatWith(System.String,System.IFormatProvider,System.Object,System.Object)
extern "C"  String_t* StringUtils_FormatWith_m3174277971 (Il2CppObject * __this /* static, unused */, String_t* ___format, Il2CppObject * ___provider, Il2CppObject * ___arg0, Il2CppObject * ___arg1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Newtonsoft.Json.Utilities.StringUtils::FormatWith(System.String,System.IFormatProvider,System.Object,System.Object,System.Object)
extern "C"  String_t* StringUtils_FormatWith_m477372641 (Il2CppObject * __this /* static, unused */, String_t* ___format, Il2CppObject * ___provider, Il2CppObject * ___arg0, Il2CppObject * ___arg1, Il2CppObject * ___arg2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Newtonsoft.Json.Utilities.StringUtils::FormatWith(System.String,System.IFormatProvider,System.Object,System.Object,System.Object,System.Object)
extern "C"  String_t* StringUtils_FormatWith_m3326791151 (Il2CppObject * __this /* static, unused */, String_t* ___format, Il2CppObject * ___provider, Il2CppObject * ___arg0, Il2CppObject * ___arg1, Il2CppObject * ___arg2, Il2CppObject * ___arg3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Newtonsoft.Json.Utilities.StringUtils::FormatWith(System.String,System.IFormatProvider,System.Object[])
extern "C"  String_t* StringUtils_FormatWith_m8584995 (Il2CppObject * __this /* static, unused */, String_t* ___format, Il2CppObject * ___provider, ObjectU5BU5D_t11523773* ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.StringWriter Newtonsoft.Json.Utilities.StringUtils::CreateStringWriter(System.Int32)
extern "C"  StringWriter_t2384730283 * StringUtils_CreateStringWriter_m2967616790 (Il2CppObject * __this /* static, unused */, int32_t ___capacity, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Nullable`1<System.Int32> Newtonsoft.Json.Utilities.StringUtils::GetLength(System.String)
extern "C"  Nullable_1_t1438485399  StringUtils_GetLength_m858356000 (Il2CppObject * __this /* static, unused */, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Utilities.StringUtils::ToCharAsUnicode(System.Char,System.Char[])
extern "C"  void StringUtils_ToCharAsUnicode_m1712721857 (Il2CppObject * __this /* static, unused */, uint16_t ___c, CharU5BU5D_t3416858730* ___buffer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Utilities.StringUtils::IsHighSurrogate(System.Char)
extern "C"  bool StringUtils_IsHighSurrogate_m4103961328 (Il2CppObject * __this /* static, unused */, uint16_t ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Utilities.StringUtils::IsLowSurrogate(System.Char)
extern "C"  bool StringUtils_IsLowSurrogate_m3053051726 (Il2CppObject * __this /* static, unused */, uint16_t ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Utilities.StringUtils::StartsWith(System.String,System.Char)
extern "C"  bool StringUtils_StartsWith_m1983806241 (Il2CppObject * __this /* static, unused */, String_t* ___source, uint16_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Utilities.StringUtils::EndsWith(System.String,System.Char)
extern "C"  bool StringUtils_EndsWith_m2231991194 (Il2CppObject * __this /* static, unused */, String_t* ___source, uint16_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
