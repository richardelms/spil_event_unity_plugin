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
// Newtonsoft.Json.IArrayPool`1<System.Char>
struct IArrayPool_1_t2231322832;

#include "codegen/il2cpp-codegen.h"

// System.Char[] Newtonsoft.Json.Utilities.BufferUtils::RentBuffer(Newtonsoft.Json.IArrayPool`1<System.Char>,System.Int32)
extern "C"  CharU5BU5D_t3416858730* BufferUtils_RentBuffer_m1863760657 (Il2CppObject * __this /* static, unused */, Il2CppObject* ___bufferPool, int32_t ___minSize, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Utilities.BufferUtils::ReturnBuffer(Newtonsoft.Json.IArrayPool`1<System.Char>,System.Char[])
extern "C"  void BufferUtils_ReturnBuffer_m3769833800 (Il2CppObject * __this /* static, unused */, Il2CppObject* ___bufferPool, CharU5BU5D_t3416858730* ___buffer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char[] Newtonsoft.Json.Utilities.BufferUtils::EnsureBufferSize(Newtonsoft.Json.IArrayPool`1<System.Char>,System.Int32,System.Char[])
extern "C"  CharU5BU5D_t3416858730* BufferUtils_EnsureBufferSize_m2006057964 (Il2CppObject * __this /* static, unused */, Il2CppObject* ___bufferPool, int32_t ___size, CharU5BU5D_t3416858730* ___buffer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
