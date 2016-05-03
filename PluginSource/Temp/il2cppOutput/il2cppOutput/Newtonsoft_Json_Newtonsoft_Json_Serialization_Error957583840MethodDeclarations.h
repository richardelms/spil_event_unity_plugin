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

// Newtonsoft.Json.Serialization.ErrorContext
struct ErrorContext_t957583840;
// System.Object
struct Il2CppObject;
// System.String
struct String_t;
// System.Exception
struct Exception_t1967233988;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Exception1967233988.h"

// System.Void Newtonsoft.Json.Serialization.ErrorContext::.ctor(System.Object,System.Object,System.String,System.Exception)
extern "C"  void ErrorContext__ctor_m3535689156 (ErrorContext_t957583840 * __this, Il2CppObject * ___originalObject, Il2CppObject * ___member, String_t* ___path, Exception_t1967233988 * ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Serialization.ErrorContext::get_Traced()
extern "C"  bool ErrorContext_get_Traced_m2373095114 (ErrorContext_t957583840 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.ErrorContext::set_Traced(System.Boolean)
extern "C"  void ErrorContext_set_Traced_m4210978379 (ErrorContext_t957583840 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception Newtonsoft.Json.Serialization.ErrorContext::get_Error()
extern "C"  Exception_t1967233988 * ErrorContext_get_Error_m2109409510 (ErrorContext_t957583840 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.ErrorContext::set_Error(System.Exception)
extern "C"  void ErrorContext_set_Error_m3703742053 (ErrorContext_t957583840 * __this, Exception_t1967233988 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.ErrorContext::set_OriginalObject(System.Object)
extern "C"  void ErrorContext_set_OriginalObject_m3421837679 (ErrorContext_t957583840 * __this, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.ErrorContext::set_Member(System.Object)
extern "C"  void ErrorContext_set_Member_m2172705285 (ErrorContext_t957583840 * __this, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.ErrorContext::set_Path(System.String)
extern "C"  void ErrorContext_set_Path_m3916804488 (ErrorContext_t957583840 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Serialization.ErrorContext::get_Handled()
extern "C"  bool ErrorContext_get_Handled_m4185911475 (ErrorContext_t957583840 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
