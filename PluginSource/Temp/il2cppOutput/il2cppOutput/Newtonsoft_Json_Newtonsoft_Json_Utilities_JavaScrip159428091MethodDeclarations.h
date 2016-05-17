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

// System.Boolean[]
struct BooleanU5BU5D_t3804927312;
// System.String
struct String_t;
// System.IO.TextWriter
struct TextWriter_t1689927879;
// Newtonsoft.Json.IArrayPool`1<System.Char>
struct IArrayPool_1_t2231322832;
// System.Char[]
struct CharU5BU5D_t3416858730;

#include "codegen/il2cpp-codegen.h"
#include "Newtonsoft_Json_Newtonsoft_Json_StringEscapeHandli2810244538.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_IO_TextWriter1689927879.h"

// System.Void Newtonsoft.Json.Utilities.JavaScriptUtils::.cctor()
extern "C"  void JavaScriptUtils__cctor_m1394970456 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean[] Newtonsoft.Json.Utilities.JavaScriptUtils::GetCharEscapeFlags(Newtonsoft.Json.StringEscapeHandling,System.Char)
extern "C"  BooleanU5BU5D_t3804927312* JavaScriptUtils_GetCharEscapeFlags_m3119937228 (Il2CppObject * __this /* static, unused */, int32_t ___stringEscapeHandling, uint16_t ___quoteChar, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Utilities.JavaScriptUtils::ShouldEscapeJavaScriptString(System.String,System.Boolean[])
extern "C"  bool JavaScriptUtils_ShouldEscapeJavaScriptString_m3802061200 (Il2CppObject * __this /* static, unused */, String_t* ___s, BooleanU5BU5D_t3804927312* ___charEscapeFlags, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Utilities.JavaScriptUtils::WriteEscapedJavaScriptString(System.IO.TextWriter,System.String,System.Char,System.Boolean,System.Boolean[],Newtonsoft.Json.StringEscapeHandling,Newtonsoft.Json.IArrayPool`1<System.Char>,System.Char[]&)
extern "C"  void JavaScriptUtils_WriteEscapedJavaScriptString_m3505923069 (Il2CppObject * __this /* static, unused */, TextWriter_t1689927879 * ___writer, String_t* ___s, uint16_t ___delimiter, bool ___appendDelimiters, BooleanU5BU5D_t3804927312* ___charEscapeFlags, int32_t ___stringEscapeHandling, Il2CppObject* ___bufferPool, CharU5BU5D_t3416858730** ___writeBuffer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Newtonsoft.Json.Utilities.JavaScriptUtils::ToEscapedJavaScriptString(System.String,System.Char,System.Boolean,Newtonsoft.Json.StringEscapeHandling)
extern "C"  String_t* JavaScriptUtils_ToEscapedJavaScriptString_m1441038938 (Il2CppObject * __this /* static, unused */, String_t* ___value, uint16_t ___delimiter, bool ___appendDelimiters, int32_t ___stringEscapeHandling, const MethodInfo* method) IL2CPP_METHOD_ATTR;
