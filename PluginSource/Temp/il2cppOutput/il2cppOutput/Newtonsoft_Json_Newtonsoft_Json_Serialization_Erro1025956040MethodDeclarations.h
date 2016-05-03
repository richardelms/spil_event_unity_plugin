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

// Newtonsoft.Json.Serialization.ErrorEventArgs
struct ErrorEventArgs_t1025956040;
// System.Object
struct Il2CppObject;
// Newtonsoft.Json.Serialization.ErrorContext
struct ErrorContext_t957583840;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "Newtonsoft_Json_Newtonsoft_Json_Serialization_Error957583840.h"

// System.Void Newtonsoft.Json.Serialization.ErrorEventArgs::set_CurrentObject(System.Object)
extern "C"  void ErrorEventArgs_set_CurrentObject_m2628353751 (ErrorEventArgs_t1025956040 * __this, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.ErrorEventArgs::set_ErrorContext(Newtonsoft.Json.Serialization.ErrorContext)
extern "C"  void ErrorEventArgs_set_ErrorContext_m86428874 (ErrorEventArgs_t1025956040 * __this, ErrorContext_t957583840 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.ErrorEventArgs::.ctor(System.Object,Newtonsoft.Json.Serialization.ErrorContext)
extern "C"  void ErrorEventArgs__ctor_m3125097532 (ErrorEventArgs_t1025956040 * __this, Il2CppObject * ___currentObject, ErrorContext_t957583840 * ___errorContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
