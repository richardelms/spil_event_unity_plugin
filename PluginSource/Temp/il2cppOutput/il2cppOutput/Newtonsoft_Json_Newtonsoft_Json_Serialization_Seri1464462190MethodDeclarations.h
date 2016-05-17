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

// Newtonsoft.Json.Serialization.SerializationCallback
struct SerializationCallback_t1464462190;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCont986364934.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void Newtonsoft.Json.Serialization.SerializationCallback::.ctor(System.Object,System.IntPtr)
extern "C"  void SerializationCallback__ctor_m1459526564 (SerializationCallback_t1464462190 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.SerializationCallback::Invoke(System.Object,System.Runtime.Serialization.StreamingContext)
extern "C"  void SerializationCallback_Invoke_m768499426 (SerializationCallback_t1464462190 * __this, Il2CppObject * ___o, StreamingContext_t986364934  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_SerializationCallback_t1464462190(Il2CppObject* delegate, Il2CppObject * ___o, StreamingContext_t986364934  ___context);
// System.IAsyncResult Newtonsoft.Json.Serialization.SerializationCallback::BeginInvoke(System.Object,System.Runtime.Serialization.StreamingContext,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * SerializationCallback_BeginInvoke_m2888150707 (SerializationCallback_t1464462190 * __this, Il2CppObject * ___o, StreamingContext_t986364934  ___context, AsyncCallback_t1363551830 * ___callback, Il2CppObject * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.SerializationCallback::EndInvoke(System.IAsyncResult)
extern "C"  void SerializationCallback_EndInvoke_m3524886452 (SerializationCallback_t1464462190 * __this, Il2CppObject * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
