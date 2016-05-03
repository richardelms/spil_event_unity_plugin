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

// Newtonsoft.Json.IArrayPool`1<System.Char>
struct IArrayPool_1_t2231322832;
// System.Char[]
struct CharU5BU5D_t3416858730;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "Newtonsoft_Json_Newtonsoft_Json_Utilities_StringBu1107775176.h"

// System.Int32 Newtonsoft.Json.Utilities.StringBuffer::get_Position()
extern "C"  int32_t StringBuffer_get_Position_m1666867230 (StringBuffer_t1107775176 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Utilities.StringBuffer::set_Position(System.Int32)
extern "C"  void StringBuffer_set_Position_m3794111327 (StringBuffer_t1107775176 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Utilities.StringBuffer::get_IsEmpty()
extern "C"  bool StringBuffer_get_IsEmpty_m288678314 (StringBuffer_t1107775176 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Utilities.StringBuffer::.ctor(Newtonsoft.Json.IArrayPool`1<System.Char>,System.Int32)
extern "C"  void StringBuffer__ctor_m3384097876 (StringBuffer_t1107775176 * __this, Il2CppObject* ___bufferPool, int32_t ___initalSize, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Utilities.StringBuffer::.ctor(System.Char[])
extern "C"  void StringBuffer__ctor_m1926225311 (StringBuffer_t1107775176 * __this, CharU5BU5D_t3416858730* ___buffer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Utilities.StringBuffer::Append(Newtonsoft.Json.IArrayPool`1<System.Char>,System.Char)
extern "C"  void StringBuffer_Append_m443709396 (StringBuffer_t1107775176 * __this, Il2CppObject* ___bufferPool, uint16_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Utilities.StringBuffer::Append(Newtonsoft.Json.IArrayPool`1<System.Char>,System.Char[],System.Int32,System.Int32)
extern "C"  void StringBuffer_Append_m3565880530 (StringBuffer_t1107775176 * __this, Il2CppObject* ___bufferPool, CharU5BU5D_t3416858730* ___buffer, int32_t ___startIndex, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Utilities.StringBuffer::Clear(Newtonsoft.Json.IArrayPool`1<System.Char>)
extern "C"  void StringBuffer_Clear_m16656792 (StringBuffer_t1107775176 * __this, Il2CppObject* ___bufferPool, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Utilities.StringBuffer::EnsureSize(Newtonsoft.Json.IArrayPool`1<System.Char>,System.Int32)
extern "C"  void StringBuffer_EnsureSize_m2702651135 (StringBuffer_t1107775176 * __this, Il2CppObject* ___bufferPool, int32_t ___appendLength, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Newtonsoft.Json.Utilities.StringBuffer::ToString()
extern "C"  String_t* StringBuffer_ToString_m309194039 (StringBuffer_t1107775176 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Newtonsoft.Json.Utilities.StringBuffer::ToString(System.Int32,System.Int32)
extern "C"  String_t* StringBuffer_ToString_m373809615 (StringBuffer_t1107775176 * __this, int32_t ___start, int32_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char[] Newtonsoft.Json.Utilities.StringBuffer::get_InternalBuffer()
extern "C"  CharU5BU5D_t3416858730* StringBuffer_get_InternalBuffer_m691719530 (StringBuffer_t1107775176 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct StringBuffer_t1107775176;
struct StringBuffer_t1107775176_marshaled_pinvoke;

extern "C" void StringBuffer_t1107775176_marshal_pinvoke(const StringBuffer_t1107775176& unmarshaled, StringBuffer_t1107775176_marshaled_pinvoke& marshaled);
extern "C" void StringBuffer_t1107775176_marshal_pinvoke_back(const StringBuffer_t1107775176_marshaled_pinvoke& marshaled, StringBuffer_t1107775176& unmarshaled);
extern "C" void StringBuffer_t1107775176_marshal_pinvoke_cleanup(StringBuffer_t1107775176_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct StringBuffer_t1107775176;
struct StringBuffer_t1107775176_marshaled_com;

extern "C" void StringBuffer_t1107775176_marshal_com(const StringBuffer_t1107775176& unmarshaled, StringBuffer_t1107775176_marshaled_com& marshaled);
extern "C" void StringBuffer_t1107775176_marshal_com_back(const StringBuffer_t1107775176_marshaled_com& marshaled, StringBuffer_t1107775176& unmarshaled);
extern "C" void StringBuffer_t1107775176_marshal_com_cleanup(StringBuffer_t1107775176_marshaled_com& marshaled);
