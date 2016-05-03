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

// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,Newtonsoft.Json.ReadType,System.Collections.Generic.KeyValuePair`2<System.Object,Newtonsoft.Json.ReadType>>
struct Transform_1_t3964012638;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_21088063967.h"
#include "Newtonsoft_Json_Newtonsoft_Json_ReadType2907181235.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,Newtonsoft.Json.ReadType,System.Collections.Generic.KeyValuePair`2<System.Object,Newtonsoft.Json.ReadType>>::.ctor(System.Object,System.IntPtr)
extern "C"  void Transform_1__ctor_m69390386_gshared (Transform_1_t3964012638 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m69390386(__this, ___object, ___method, method) ((  void (*) (Transform_1_t3964012638 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m69390386_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,Newtonsoft.Json.ReadType,System.Collections.Generic.KeyValuePair`2<System.Object,Newtonsoft.Json.ReadType>>::Invoke(TKey,TValue)
extern "C"  KeyValuePair_2_t1088063967  Transform_1_Invoke_m3256241926_gshared (Transform_1_t3964012638 * __this, Il2CppObject * ___key, int32_t ___value, const MethodInfo* method);
#define Transform_1_Invoke_m3256241926(__this, ___key, ___value, method) ((  KeyValuePair_2_t1088063967  (*) (Transform_1_t3964012638 *, Il2CppObject *, int32_t, const MethodInfo*))Transform_1_Invoke_m3256241926_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,Newtonsoft.Json.ReadType,System.Collections.Generic.KeyValuePair`2<System.Object,Newtonsoft.Json.ReadType>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Transform_1_BeginInvoke_m4289700401_gshared (Transform_1_t3964012638 * __this, Il2CppObject * ___key, int32_t ___value, AsyncCallback_t1363551830 * ___callback, Il2CppObject * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m4289700401(__this, ___key, ___value, ___callback, ___object, method) ((  Il2CppObject * (*) (Transform_1_t3964012638 *, Il2CppObject *, int32_t, AsyncCallback_t1363551830 *, Il2CppObject *, const MethodInfo*))Transform_1_BeginInvoke_m4289700401_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,Newtonsoft.Json.ReadType,System.Collections.Generic.KeyValuePair`2<System.Object,Newtonsoft.Json.ReadType>>::EndInvoke(System.IAsyncResult)
extern "C"  KeyValuePair_2_t1088063967  Transform_1_EndInvoke_m1057411524_gshared (Transform_1_t3964012638 * __this, Il2CppObject * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m1057411524(__this, ___result, method) ((  KeyValuePair_2_t1088063967  (*) (Transform_1_t3964012638 *, Il2CppObject *, const MethodInfo*))Transform_1_EndInvoke_m1057411524_gshared)(__this, ___result, method)
