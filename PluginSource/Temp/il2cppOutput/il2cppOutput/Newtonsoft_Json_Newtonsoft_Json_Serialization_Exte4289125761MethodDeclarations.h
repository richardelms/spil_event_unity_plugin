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

// Newtonsoft.Json.Serialization.ExtensionDataSetter
struct ExtensionDataSetter_t4289125761;
// System.Object
struct Il2CppObject;
// System.String
struct String_t;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void Newtonsoft.Json.Serialization.ExtensionDataSetter::.ctor(System.Object,System.IntPtr)
extern "C"  void ExtensionDataSetter__ctor_m1651215415 (ExtensionDataSetter_t4289125761 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.ExtensionDataSetter::Invoke(System.Object,System.String,System.Object)
extern "C"  void ExtensionDataSetter_Invoke_m1197004141 (ExtensionDataSetter_t4289125761 * __this, Il2CppObject * ___o, String_t* ___key, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_ExtensionDataSetter_t4289125761(Il2CppObject* delegate, Il2CppObject * ___o, String_t* ___key, Il2CppObject * ___value);
// System.IAsyncResult Newtonsoft.Json.Serialization.ExtensionDataSetter::BeginInvoke(System.Object,System.String,System.Object,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * ExtensionDataSetter_BeginInvoke_m1457854530 (ExtensionDataSetter_t4289125761 * __this, Il2CppObject * ___o, String_t* ___key, Il2CppObject * ___value, AsyncCallback_t1363551830 * ___callback, Il2CppObject * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.ExtensionDataSetter::EndInvoke(System.IAsyncResult)
extern "C"  void ExtensionDataSetter_EndInvoke_m2430841287 (ExtensionDataSetter_t4289125761 * __this, Il2CppObject * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
