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

// System.Collections.Generic.Dictionary`2<System.Object,Newtonsoft.Json.ReadType>
struct Dictionary_2_t1599532669;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_E1366560610.h"
#include "mscorlib_System_Collections_DictionaryEntry130027246.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_21088063967.h"
#include "Newtonsoft_Json_Newtonsoft_Json_ReadType2907181235.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,Newtonsoft.Json.ReadType>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C"  void Enumerator__ctor_m2428567906_gshared (Enumerator_t1366560611 * __this, Dictionary_2_t1599532669 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m2428567906(__this, ___dictionary, method) ((  void (*) (Enumerator_t1366560611 *, Dictionary_2_t1599532669 *, const MethodInfo*))Enumerator__ctor_m2428567906_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,Newtonsoft.Json.ReadType>::System.Collections.IEnumerator.get_Current()
extern "C"  Il2CppObject * Enumerator_System_Collections_IEnumerator_get_Current_m176674121_gshared (Enumerator_t1366560611 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m176674121(__this, method) ((  Il2CppObject * (*) (Enumerator_t1366560611 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m176674121_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,Newtonsoft.Json.ReadType>::System.Collections.IEnumerator.Reset()
extern "C"  void Enumerator_System_Collections_IEnumerator_Reset_m1882469907_gshared (Enumerator_t1366560611 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_Reset_m1882469907(__this, method) ((  void (*) (Enumerator_t1366560611 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m1882469907_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,Newtonsoft.Json.ReadType>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C"  DictionaryEntry_t130027246  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m3346431242_gshared (Enumerator_t1366560611 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m3346431242(__this, method) ((  DictionaryEntry_t130027246  (*) (Enumerator_t1366560611 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m3346431242_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,Newtonsoft.Json.ReadType>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C"  Il2CppObject * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m1003108197_gshared (Enumerator_t1366560611 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m1003108197(__this, method) ((  Il2CppObject * (*) (Enumerator_t1366560611 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m1003108197_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,Newtonsoft.Json.ReadType>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C"  Il2CppObject * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m2962739383_gshared (Enumerator_t1366560611 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m2962739383(__this, method) ((  Il2CppObject * (*) (Enumerator_t1366560611 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m2962739383_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,Newtonsoft.Json.ReadType>::MoveNext()
extern "C"  bool Enumerator_MoveNext_m2186011459_gshared (Enumerator_t1366560611 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m2186011459(__this, method) ((  bool (*) (Enumerator_t1366560611 *, const MethodInfo*))Enumerator_MoveNext_m2186011459_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,Newtonsoft.Json.ReadType>::get_Current()
extern "C"  KeyValuePair_2_t1088063967  Enumerator_get_Current_m1442324889_gshared (Enumerator_t1366560611 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m1442324889(__this, method) ((  KeyValuePair_2_t1088063967  (*) (Enumerator_t1366560611 *, const MethodInfo*))Enumerator_get_Current_m1442324889_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,Newtonsoft.Json.ReadType>::get_CurrentKey()
extern "C"  Il2CppObject * Enumerator_get_CurrentKey_m590913164_gshared (Enumerator_t1366560611 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m590913164(__this, method) ((  Il2CppObject * (*) (Enumerator_t1366560611 *, const MethodInfo*))Enumerator_get_CurrentKey_m590913164_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,Newtonsoft.Json.ReadType>::get_CurrentValue()
extern "C"  int32_t Enumerator_get_CurrentValue_m60728524_gshared (Enumerator_t1366560611 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m60728524(__this, method) ((  int32_t (*) (Enumerator_t1366560611 *, const MethodInfo*))Enumerator_get_CurrentValue_m60728524_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,Newtonsoft.Json.ReadType>::Reset()
extern "C"  void Enumerator_Reset_m3794315444_gshared (Enumerator_t1366560611 * __this, const MethodInfo* method);
#define Enumerator_Reset_m3794315444(__this, method) ((  void (*) (Enumerator_t1366560611 *, const MethodInfo*))Enumerator_Reset_m3794315444_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,Newtonsoft.Json.ReadType>::VerifyState()
extern "C"  void Enumerator_VerifyState_m520069565_gshared (Enumerator_t1366560611 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m520069565(__this, method) ((  void (*) (Enumerator_t1366560611 *, const MethodInfo*))Enumerator_VerifyState_m520069565_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,Newtonsoft.Json.ReadType>::VerifyCurrent()
extern "C"  void Enumerator_VerifyCurrent_m20550117_gshared (Enumerator_t1366560611 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m20550117(__this, method) ((  void (*) (Enumerator_t1366560611 *, const MethodInfo*))Enumerator_VerifyCurrent_m20550117_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,Newtonsoft.Json.ReadType>::Dispose()
extern "C"  void Enumerator_Dispose_m2433336452_gshared (Enumerator_t1366560611 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m2433336452(__this, method) ((  void (*) (Enumerator_t1366560611 *, const MethodInfo*))Enumerator_Dispose_m2433336452_gshared)(__this, method)
