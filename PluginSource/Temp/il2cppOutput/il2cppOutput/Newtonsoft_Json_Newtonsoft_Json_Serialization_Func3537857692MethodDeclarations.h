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

// Newtonsoft.Json.Serialization.Func`3<System.Collections.DictionaryEntry,System.Int32,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Func_3_t3537857692;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_23312956448.h"
#include "mscorlib_System_Collections_DictionaryEntry130027246.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void Newtonsoft.Json.Serialization.Func`3<System.Collections.DictionaryEntry,System.Int32,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Object,System.IntPtr)
extern "C"  void Func_3__ctor_m3806681366_gshared (Func_3_t3537857692 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Func_3__ctor_m3806681366(__this, ___object, ___method, method) ((  void (*) (Func_3_t3537857692 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Func_3__ctor_m3806681366_gshared)(__this, ___object, ___method, method)
// TResult Newtonsoft.Json.Serialization.Func`3<System.Collections.DictionaryEntry,System.Int32,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Invoke(T1,T2)
extern "C"  KeyValuePair_2_t3312956448  Func_3_Invoke_m2649629683_gshared (Func_3_t3537857692 * __this, DictionaryEntry_t130027246  ___arg1, int32_t ___arg2, const MethodInfo* method);
#define Func_3_Invoke_m2649629683(__this, ___arg1, ___arg2, method) ((  KeyValuePair_2_t3312956448  (*) (Func_3_t3537857692 *, DictionaryEntry_t130027246 , int32_t, const MethodInfo*))Func_3_Invoke_m2649629683_gshared)(__this, ___arg1, ___arg2, method)
// System.IAsyncResult Newtonsoft.Json.Serialization.Func`3<System.Collections.DictionaryEntry,System.Int32,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::BeginInvoke(T1,T2,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Func_3_BeginInvoke_m988170356_gshared (Func_3_t3537857692 * __this, DictionaryEntry_t130027246  ___arg1, int32_t ___arg2, AsyncCallback_t1363551830 * ___callback, Il2CppObject * ___object, const MethodInfo* method);
#define Func_3_BeginInvoke_m988170356(__this, ___arg1, ___arg2, ___callback, ___object, method) ((  Il2CppObject * (*) (Func_3_t3537857692 *, DictionaryEntry_t130027246 , int32_t, AsyncCallback_t1363551830 *, Il2CppObject *, const MethodInfo*))Func_3_BeginInvoke_m988170356_gshared)(__this, ___arg1, ___arg2, ___callback, ___object, method)
// TResult Newtonsoft.Json.Serialization.Func`3<System.Collections.DictionaryEntry,System.Int32,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::EndInvoke(System.IAsyncResult)
extern "C"  KeyValuePair_2_t3312956448  Func_3_EndInvoke_m4241717064_gshared (Func_3_t3537857692 * __this, Il2CppObject * ___result, const MethodInfo* method);
#define Func_3_EndInvoke_m4241717064(__this, ___result, method) ((  KeyValuePair_2_t3312956448  (*) (Func_3_t3537857692 *, Il2CppObject *, const MethodInfo*))Func_3_EndInvoke_m4241717064_gshared)(__this, ___result, method)
