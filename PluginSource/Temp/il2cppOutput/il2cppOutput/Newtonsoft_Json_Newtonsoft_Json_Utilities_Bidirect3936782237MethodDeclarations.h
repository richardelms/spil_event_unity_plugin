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

// Newtonsoft.Json.Utilities.BidirectionalDictionary`2<System.Object,System.Object>
struct BidirectionalDictionary_2_t3936782237;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t3161373071;
// System.String
struct String_t;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Object837106420.h"

// System.Void Newtonsoft.Json.Utilities.BidirectionalDictionary`2<System.Object,System.Object>::.ctor(System.Collections.Generic.IEqualityComparer`1<TFirst>,System.Collections.Generic.IEqualityComparer`1<TSecond>)
extern "C"  void BidirectionalDictionary_2__ctor_m2565085922_gshared (BidirectionalDictionary_2_t3936782237 * __this, Il2CppObject* ___firstEqualityComparer, Il2CppObject* ___secondEqualityComparer, const MethodInfo* method);
#define BidirectionalDictionary_2__ctor_m2565085922(__this, ___firstEqualityComparer, ___secondEqualityComparer, method) ((  void (*) (BidirectionalDictionary_2_t3936782237 *, Il2CppObject*, Il2CppObject*, const MethodInfo*))BidirectionalDictionary_2__ctor_m2565085922_gshared)(__this, ___firstEqualityComparer, ___secondEqualityComparer, method)
// System.Void Newtonsoft.Json.Utilities.BidirectionalDictionary`2<System.Object,System.Object>::.ctor(System.Collections.Generic.IEqualityComparer`1<TFirst>,System.Collections.Generic.IEqualityComparer`1<TSecond>,System.String,System.String)
extern "C"  void BidirectionalDictionary_2__ctor_m1641679706_gshared (BidirectionalDictionary_2_t3936782237 * __this, Il2CppObject* ___firstEqualityComparer, Il2CppObject* ___secondEqualityComparer, String_t* ___duplicateFirstErrorMessage, String_t* ___duplicateSecondErrorMessage, const MethodInfo* method);
#define BidirectionalDictionary_2__ctor_m1641679706(__this, ___firstEqualityComparer, ___secondEqualityComparer, ___duplicateFirstErrorMessage, ___duplicateSecondErrorMessage, method) ((  void (*) (BidirectionalDictionary_2_t3936782237 *, Il2CppObject*, Il2CppObject*, String_t*, String_t*, const MethodInfo*))BidirectionalDictionary_2__ctor_m1641679706_gshared)(__this, ___firstEqualityComparer, ___secondEqualityComparer, ___duplicateFirstErrorMessage, ___duplicateSecondErrorMessage, method)
// System.Void Newtonsoft.Json.Utilities.BidirectionalDictionary`2<System.Object,System.Object>::Set(TFirst,TSecond)
extern "C"  void BidirectionalDictionary_2_Set_m2800109206_gshared (BidirectionalDictionary_2_t3936782237 * __this, Il2CppObject * ___first, Il2CppObject * ___second, const MethodInfo* method);
#define BidirectionalDictionary_2_Set_m2800109206(__this, ___first, ___second, method) ((  void (*) (BidirectionalDictionary_2_t3936782237 *, Il2CppObject *, Il2CppObject *, const MethodInfo*))BidirectionalDictionary_2_Set_m2800109206_gshared)(__this, ___first, ___second, method)
// System.Boolean Newtonsoft.Json.Utilities.BidirectionalDictionary`2<System.Object,System.Object>::TryGetByFirst(TFirst,TSecond&)
extern "C"  bool BidirectionalDictionary_2_TryGetByFirst_m3250057860_gshared (BidirectionalDictionary_2_t3936782237 * __this, Il2CppObject * ___first, Il2CppObject ** ___second, const MethodInfo* method);
#define BidirectionalDictionary_2_TryGetByFirst_m3250057860(__this, ___first, ___second, method) ((  bool (*) (BidirectionalDictionary_2_t3936782237 *, Il2CppObject *, Il2CppObject **, const MethodInfo*))BidirectionalDictionary_2_TryGetByFirst_m3250057860_gshared)(__this, ___first, ___second, method)
// System.Boolean Newtonsoft.Json.Utilities.BidirectionalDictionary`2<System.Object,System.Object>::TryGetBySecond(TSecond,TFirst&)
extern "C"  bool BidirectionalDictionary_2_TryGetBySecond_m1619327686_gshared (BidirectionalDictionary_2_t3936782237 * __this, Il2CppObject * ___second, Il2CppObject ** ___first, const MethodInfo* method);
#define BidirectionalDictionary_2_TryGetBySecond_m1619327686(__this, ___second, ___first, method) ((  bool (*) (BidirectionalDictionary_2_t3936782237 *, Il2CppObject *, Il2CppObject **, const MethodInfo*))BidirectionalDictionary_2_TryGetBySecond_m1619327686_gshared)(__this, ___second, ___first, method)
