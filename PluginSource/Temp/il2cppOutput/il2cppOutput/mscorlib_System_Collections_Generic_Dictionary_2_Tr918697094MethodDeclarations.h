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

// System.Collections.Generic.Dictionary`2/Transform`1<Newtonsoft.Json.Serialization.ResolverContractKey,System.Object,Newtonsoft.Json.Serialization.ResolverContractKey>
struct Transform_1_t918697094;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "Newtonsoft_Json_Newtonsoft_Json_Serialization_Reso3504657184.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<Newtonsoft.Json.Serialization.ResolverContractKey,System.Object,Newtonsoft.Json.Serialization.ResolverContractKey>::.ctor(System.Object,System.IntPtr)
extern "C"  void Transform_1__ctor_m1687001111_gshared (Transform_1_t918697094 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m1687001111(__this, ___object, ___method, method) ((  void (*) (Transform_1_t918697094 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m1687001111_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<Newtonsoft.Json.Serialization.ResolverContractKey,System.Object,Newtonsoft.Json.Serialization.ResolverContractKey>::Invoke(TKey,TValue)
extern "C"  ResolverContractKey_t3504657184  Transform_1_Invoke_m1218684421_gshared (Transform_1_t918697094 * __this, ResolverContractKey_t3504657184  ___key, Il2CppObject * ___value, const MethodInfo* method);
#define Transform_1_Invoke_m1218684421(__this, ___key, ___value, method) ((  ResolverContractKey_t3504657184  (*) (Transform_1_t918697094 *, ResolverContractKey_t3504657184 , Il2CppObject *, const MethodInfo*))Transform_1_Invoke_m1218684421_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<Newtonsoft.Json.Serialization.ResolverContractKey,System.Object,Newtonsoft.Json.Serialization.ResolverContractKey>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Transform_1_BeginInvoke_m34086756_gshared (Transform_1_t918697094 * __this, ResolverContractKey_t3504657184  ___key, Il2CppObject * ___value, AsyncCallback_t1363551830 * ___callback, Il2CppObject * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m34086756(__this, ___key, ___value, ___callback, ___object, method) ((  Il2CppObject * (*) (Transform_1_t918697094 *, ResolverContractKey_t3504657184 , Il2CppObject *, AsyncCallback_t1363551830 *, Il2CppObject *, const MethodInfo*))Transform_1_BeginInvoke_m34086756_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<Newtonsoft.Json.Serialization.ResolverContractKey,System.Object,Newtonsoft.Json.Serialization.ResolverContractKey>::EndInvoke(System.IAsyncResult)
extern "C"  ResolverContractKey_t3504657184  Transform_1_EndInvoke_m1708881253_gshared (Transform_1_t918697094 * __this, Il2CppObject * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m1708881253(__this, ___result, method) ((  ResolverContractKey_t3504657184  (*) (Transform_1_t918697094 *, Il2CppObject *, const MethodInfo*))Transform_1_EndInvoke_m1708881253_gshared)(__this, ___result, method)
