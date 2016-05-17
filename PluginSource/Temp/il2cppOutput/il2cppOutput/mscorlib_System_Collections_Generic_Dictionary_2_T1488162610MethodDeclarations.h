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

// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,Newtonsoft.Json.ReadType,Newtonsoft.Json.ReadType>
struct Transform_1_t1488162610;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "Newtonsoft_Json_Newtonsoft_Json_ReadType2907181235.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,Newtonsoft.Json.ReadType,Newtonsoft.Json.ReadType>::.ctor(System.Object,System.IntPtr)
extern "C"  void Transform_1__ctor_m1245830791_gshared (Transform_1_t1488162610 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m1245830791(__this, ___object, ___method, method) ((  void (*) (Transform_1_t1488162610 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m1245830791_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,Newtonsoft.Json.ReadType,Newtonsoft.Json.ReadType>::Invoke(TKey,TValue)
extern "C"  int32_t Transform_1_Invoke_m2171859477_gshared (Transform_1_t1488162610 * __this, Il2CppObject * ___key, int32_t ___value, const MethodInfo* method);
#define Transform_1_Invoke_m2171859477(__this, ___key, ___value, method) ((  int32_t (*) (Transform_1_t1488162610 *, Il2CppObject *, int32_t, const MethodInfo*))Transform_1_Invoke_m2171859477_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,Newtonsoft.Json.ReadType,Newtonsoft.Json.ReadType>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Transform_1_BeginInvoke_m3016748532_gshared (Transform_1_t1488162610 * __this, Il2CppObject * ___key, int32_t ___value, AsyncCallback_t1363551830 * ___callback, Il2CppObject * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m3016748532(__this, ___key, ___value, ___callback, ___object, method) ((  Il2CppObject * (*) (Transform_1_t1488162610 *, Il2CppObject *, int32_t, AsyncCallback_t1363551830 *, Il2CppObject *, const MethodInfo*))Transform_1_BeginInvoke_m3016748532_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,Newtonsoft.Json.ReadType,Newtonsoft.Json.ReadType>::EndInvoke(System.IAsyncResult)
extern "C"  int32_t Transform_1_EndInvoke_m3275620181_gshared (Transform_1_t1488162610 * __this, Il2CppObject * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m3275620181(__this, ___result, method) ((  int32_t (*) (Transform_1_t1488162610 *, Il2CppObject *, const MethodInfo*))Transform_1_EndInvoke_m3275620181_gshared)(__this, ___result, method)
