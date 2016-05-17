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

// System.Object
struct Il2CppObject;
// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_t3479058991;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t58506160;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_String968488902.h"

// System.Boolean Newtonsoft.Json.Utilities.MiscellaneousUtils::ValueEquals(System.Object,System.Object)
extern "C"  bool MiscellaneousUtils_ValueEquals_m2758410804 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___objA, Il2CppObject * ___objB, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ArgumentOutOfRangeException Newtonsoft.Json.Utilities.MiscellaneousUtils::CreateArgumentOutOfRangeException(System.String,System.Object,System.String)
extern "C"  ArgumentOutOfRangeException_t3479058991 * MiscellaneousUtils_CreateArgumentOutOfRangeException_m1220260862 (Il2CppObject * __this /* static, unused */, String_t* ___paramName, Il2CppObject * ___actualValue, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Newtonsoft.Json.Utilities.MiscellaneousUtils::ByteArrayCompare(System.Byte[],System.Byte[])
extern "C"  int32_t MiscellaneousUtils_ByteArrayCompare_m857179386 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t58506160* ___a1, ByteU5BU5D_t58506160* ___a2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Newtonsoft.Json.Utilities.MiscellaneousUtils::GetPrefix(System.String)
extern "C"  String_t* MiscellaneousUtils_GetPrefix_m1063443669 (Il2CppObject * __this /* static, unused */, String_t* ___qualifiedName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Utilities.MiscellaneousUtils::GetQualifiedNameParts(System.String,System.String&,System.String&)
extern "C"  void MiscellaneousUtils_GetQualifiedNameParts_m4216499275 (Il2CppObject * __this /* static, unused */, String_t* ___qualifiedName, String_t** ___prefix, String_t** ___localName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Newtonsoft.Json.Utilities.MiscellaneousUtils::FormatValueForPrint(System.Object)
extern "C"  String_t* MiscellaneousUtils_FormatValueForPrint_m518706673 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
