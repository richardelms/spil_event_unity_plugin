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

// Newtonsoft.Json.Serialization.Func`2<System.Object,System.Boolean>
struct Func_2_t4049992653;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void Newtonsoft.Json.Serialization.Func`2<System.Object,System.Boolean>::.ctor(System.Object,System.IntPtr)
extern "C"  void Func_2__ctor_m983232432_gshared (Func_2_t4049992653 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Func_2__ctor_m983232432(__this, ___object, ___method, method) ((  void (*) (Func_2_t4049992653 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Func_2__ctor_m983232432_gshared)(__this, ___object, ___method, method)
// TResult Newtonsoft.Json.Serialization.Func`2<System.Object,System.Boolean>::Invoke(T)
extern "C"  bool Func_2_Invoke_m3176433074_gshared (Func_2_t4049992653 * __this, Il2CppObject * ___a, const MethodInfo* method);
#define Func_2_Invoke_m3176433074(__this, ___a, method) ((  bool (*) (Func_2_t4049992653 *, Il2CppObject *, const MethodInfo*))Func_2_Invoke_m3176433074_gshared)(__this, ___a, method)
// System.IAsyncResult Newtonsoft.Json.Serialization.Func`2<System.Object,System.Boolean>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Func_2_BeginInvoke_m3281041761_gshared (Func_2_t4049992653 * __this, Il2CppObject * ___a, AsyncCallback_t1363551830 * ___callback, Il2CppObject * ___object, const MethodInfo* method);
#define Func_2_BeginInvoke_m3281041761(__this, ___a, ___callback, ___object, method) ((  Il2CppObject * (*) (Func_2_t4049992653 *, Il2CppObject *, AsyncCallback_t1363551830 *, Il2CppObject *, const MethodInfo*))Func_2_BeginInvoke_m3281041761_gshared)(__this, ___a, ___callback, ___object, method)
// TResult Newtonsoft.Json.Serialization.Func`2<System.Object,System.Boolean>::EndInvoke(System.IAsyncResult)
extern "C"  bool Func_2_EndInvoke_m3773866338_gshared (Func_2_t4049992653 * __this, Il2CppObject * ___result, const MethodInfo* method);
#define Func_2_EndInvoke_m3773866338(__this, ___result, method) ((  bool (*) (Func_2_t4049992653 *, Il2CppObject *, const MethodInfo*))Func_2_EndInvoke_m3773866338_gshared)(__this, ___result, method)
