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

// Newtonsoft.Json.Utilities.PropertyNameTable
struct PropertyNameTable_t4111998085;
// System.String
struct String_t;
// System.Char[]
struct CharU5BU5D_t3416858730;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"

// System.Void Newtonsoft.Json.Utilities.PropertyNameTable::.cctor()
extern "C"  void PropertyNameTable__cctor_m266309346 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Utilities.PropertyNameTable::.ctor()
extern "C"  void PropertyNameTable__ctor_m301236779 (PropertyNameTable_t4111998085 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Newtonsoft.Json.Utilities.PropertyNameTable::Get(System.Char[],System.Int32,System.Int32)
extern "C"  String_t* PropertyNameTable_Get_m1156241625 (PropertyNameTable_t4111998085 * __this, CharU5BU5D_t3416858730* ___key, int32_t ___start, int32_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Newtonsoft.Json.Utilities.PropertyNameTable::Add(System.String)
extern "C"  String_t* PropertyNameTable_Add_m3838606421 (PropertyNameTable_t4111998085 * __this, String_t* ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Newtonsoft.Json.Utilities.PropertyNameTable::AddEntry(System.String,System.Int32)
extern "C"  String_t* PropertyNameTable_AddEntry_m2702918620 (PropertyNameTable_t4111998085 * __this, String_t* ___str, int32_t ___hashCode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Utilities.PropertyNameTable::Grow()
extern "C"  void PropertyNameTable_Grow_m600608012 (PropertyNameTable_t4111998085 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Utilities.PropertyNameTable::TextEquals(System.String,System.Char[],System.Int32,System.Int32)
extern "C"  bool PropertyNameTable_TextEquals_m2059759388 (Il2CppObject * __this /* static, unused */, String_t* ___str1, CharU5BU5D_t3416858730* ___str2, int32_t ___str2Start, int32_t ___str2Length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
