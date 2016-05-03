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

// Newtonsoft.Json.Serialization.Func`3<System.Object,System.Int32,System.Boolean>
struct Func_3_t1000284207;
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

// System.Void Newtonsoft.Json.Serialization.Func`3<System.Object,System.Int32,System.Boolean>::.ctor(System.Object,System.IntPtr)
extern "C"  void Func_3__ctor_m1105447674_gshared (Func_3_t1000284207 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Func_3__ctor_m1105447674(__this, ___object, ___method, method) ((  void (*) (Func_3_t1000284207 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Func_3__ctor_m1105447674_gshared)(__this, ___object, ___method, method)
// TResult Newtonsoft.Json.Serialization.Func`3<System.Object,System.Int32,System.Boolean>::Invoke(T1,T2)
extern "C"  bool Func_3_Invoke_m822687123_gshared (Func_3_t1000284207 * __this, Il2CppObject * ___arg1, int32_t ___arg2, const MethodInfo* method);
#define Func_3_Invoke_m822687123(__this, ___arg1, ___arg2, method) ((  bool (*) (Func_3_t1000284207 *, Il2CppObject *, int32_t, const MethodInfo*))Func_3_Invoke_m822687123_gshared)(__this, ___arg1, ___arg2, method)
// System.IAsyncResult Newtonsoft.Json.Serialization.Func`3<System.Object,System.Int32,System.Boolean>::BeginInvoke(T1,T2,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Func_3_BeginInvoke_m425204888_gshared (Func_3_t1000284207 * __this, Il2CppObject * ___arg1, int32_t ___arg2, AsyncCallback_t1363551830 * ___callback, Il2CppObject * ___object, const MethodInfo* method);
#define Func_3_BeginInvoke_m425204888(__this, ___arg1, ___arg2, ___callback, ___object, method) ((  Il2CppObject * (*) (Func_3_t1000284207 *, Il2CppObject *, int32_t, AsyncCallback_t1363551830 *, Il2CppObject *, const MethodInfo*))Func_3_BeginInvoke_m425204888_gshared)(__this, ___arg1, ___arg2, ___callback, ___object, method)
// TResult Newtonsoft.Json.Serialization.Func`3<System.Object,System.Int32,System.Boolean>::EndInvoke(System.IAsyncResult)
extern "C"  bool Func_3_EndInvoke_m776591784_gshared (Func_3_t1000284207 * __this, Il2CppObject * ___result, const MethodInfo* method);
#define Func_3_EndInvoke_m776591784(__this, ___result, method) ((  bool (*) (Func_3_t1000284207 *, Il2CppObject *, const MethodInfo*))Func_3_EndInvoke_m776591784_gshared)(__this, ___result, method)
