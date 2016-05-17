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

// Newtonsoft.Json.Serialization.SerializationErrorCallback
struct SerializationErrorCallback_t499625910;
// System.Object
struct Il2CppObject;
// Newtonsoft.Json.Serialization.ErrorContext
struct ErrorContext_t957583840;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCont986364934.h"
#include "Newtonsoft_Json_Newtonsoft_Json_Serialization_Error957583840.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void Newtonsoft.Json.Serialization.SerializationErrorCallback::.ctor(System.Object,System.IntPtr)
extern "C"  void SerializationErrorCallback__ctor_m1748773260 (SerializationErrorCallback_t499625910 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.SerializationErrorCallback::Invoke(System.Object,System.Runtime.Serialization.StreamingContext,Newtonsoft.Json.Serialization.ErrorContext)
extern "C"  void SerializationErrorCallback_Invoke_m3894726674 (SerializationErrorCallback_t499625910 * __this, Il2CppObject * ___o, StreamingContext_t986364934  ___context, ErrorContext_t957583840 * ___errorContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_SerializationErrorCallback_t499625910(Il2CppObject* delegate, Il2CppObject * ___o, StreamingContext_t986364934  ___context, ErrorContext_t957583840 * ___errorContext);
// System.IAsyncResult Newtonsoft.Json.Serialization.SerializationErrorCallback::BeginInvoke(System.Object,System.Runtime.Serialization.StreamingContext,Newtonsoft.Json.Serialization.ErrorContext,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * SerializationErrorCallback_BeginInvoke_m3308586933 (SerializationErrorCallback_t499625910 * __this, Il2CppObject * ___o, StreamingContext_t986364934  ___context, ErrorContext_t957583840 * ___errorContext, AsyncCallback_t1363551830 * ___callback, Il2CppObject * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.SerializationErrorCallback::EndInvoke(System.IAsyncResult)
extern "C"  void SerializationErrorCallback_EndInvoke_m2530886044 (SerializationErrorCallback_t499625910 * __this, Il2CppObject * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
