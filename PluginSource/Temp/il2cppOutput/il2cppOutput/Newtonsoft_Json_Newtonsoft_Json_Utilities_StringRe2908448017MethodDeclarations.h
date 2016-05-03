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

// System.Char[]
struct CharU5BU5D_t3416858730;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "Newtonsoft_Json_Newtonsoft_Json_Utilities_StringRe2908448017.h"

// System.Char Newtonsoft.Json.Utilities.StringReference::get_Item(System.Int32)
extern "C"  uint16_t StringReference_get_Item_m2149590836 (StringReference_t2908448017 * __this, int32_t ___i, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char[] Newtonsoft.Json.Utilities.StringReference::get_Chars()
extern "C"  CharU5BU5D_t3416858730* StringReference_get_Chars_m1322133517 (StringReference_t2908448017 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Newtonsoft.Json.Utilities.StringReference::get_StartIndex()
extern "C"  int32_t StringReference_get_StartIndex_m914053530 (StringReference_t2908448017 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Newtonsoft.Json.Utilities.StringReference::get_Length()
extern "C"  int32_t StringReference_get_Length_m1963237872 (StringReference_t2908448017 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Utilities.StringReference::.ctor(System.Char[],System.Int32,System.Int32)
extern "C"  void StringReference__ctor_m3808637660 (StringReference_t2908448017 * __this, CharU5BU5D_t3416858730* ___chars, int32_t ___startIndex, int32_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Newtonsoft.Json.Utilities.StringReference::ToString()
extern "C"  String_t* StringReference_ToString_m395830574 (StringReference_t2908448017 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct StringReference_t2908448017;
struct StringReference_t2908448017_marshaled_pinvoke;

extern "C" void StringReference_t2908448017_marshal_pinvoke(const StringReference_t2908448017& unmarshaled, StringReference_t2908448017_marshaled_pinvoke& marshaled);
extern "C" void StringReference_t2908448017_marshal_pinvoke_back(const StringReference_t2908448017_marshaled_pinvoke& marshaled, StringReference_t2908448017& unmarshaled);
extern "C" void StringReference_t2908448017_marshal_pinvoke_cleanup(StringReference_t2908448017_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct StringReference_t2908448017;
struct StringReference_t2908448017_marshaled_com;

extern "C" void StringReference_t2908448017_marshal_com(const StringReference_t2908448017& unmarshaled, StringReference_t2908448017_marshaled_com& marshaled);
extern "C" void StringReference_t2908448017_marshal_com_back(const StringReference_t2908448017_marshaled_com& marshaled, StringReference_t2908448017& unmarshaled);
extern "C" void StringReference_t2908448017_marshal_com_cleanup(StringReference_t2908448017_marshaled_com& marshaled);
