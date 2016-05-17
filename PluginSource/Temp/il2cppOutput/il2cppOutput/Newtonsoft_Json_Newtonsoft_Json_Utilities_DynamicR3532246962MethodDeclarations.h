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

// System.Reflection.Emit.DynamicMethod
struct DynamicMethod_t2778460557;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t3431720054;
// Newtonsoft.Json.Utilities.DynamicReflectionDelegateFactory
struct DynamicReflectionDelegateFactory_t3532246962;
// Newtonsoft.Json.Serialization.ObjectConstructor`1<System.Object>
struct ObjectConstructor_1_t602487958;
// System.Reflection.MethodBase
struct MethodBase_t3461000640;
// System.Reflection.Emit.ILGenerator
struct ILGenerator_t3869071517;
// System.Reflection.PropertyInfo
struct PropertyInfo_t;
// System.Reflection.FieldInfo
struct FieldInfo_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Type2779229935.h"
#include "mscorlib_System_Reflection_MethodBase3461000640.h"
#include "mscorlib_System_Reflection_Emit_ILGenerator3869071517.h"
#include "mscorlib_System_Reflection_PropertyInfo1490548369.h"
#include "mscorlib_System_Reflection_FieldInfo1164929782.h"

// System.Reflection.Emit.DynamicMethod Newtonsoft.Json.Utilities.DynamicReflectionDelegateFactory::CreateDynamicMethod(System.String,System.Type,System.Type[],System.Type)
extern "C"  DynamicMethod_t2778460557 * DynamicReflectionDelegateFactory_CreateDynamicMethod_m3474220815 (Il2CppObject * __this /* static, unused */, String_t* ___name, Type_t * ___returnType, TypeU5BU5D_t3431720054* ___parameterTypes, Type_t * ___owner, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Serialization.ObjectConstructor`1<System.Object> Newtonsoft.Json.Utilities.DynamicReflectionDelegateFactory::CreateParameterizedConstructor(System.Reflection.MethodBase)
extern "C"  ObjectConstructor_1_t602487958 * DynamicReflectionDelegateFactory_CreateParameterizedConstructor_m2535587433 (DynamicReflectionDelegateFactory_t3532246962 * __this, MethodBase_t3461000640 * ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Utilities.DynamicReflectionDelegateFactory::GenerateCreateMethodCallIL(System.Reflection.MethodBase,System.Reflection.Emit.ILGenerator,System.Int32)
extern "C"  void DynamicReflectionDelegateFactory_GenerateCreateMethodCallIL_m2670977689 (DynamicReflectionDelegateFactory_t3532246962 * __this, MethodBase_t3461000640 * ___method, ILGenerator_t3869071517 * ___generator, int32_t ___argsIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Utilities.DynamicReflectionDelegateFactory::GenerateCreateDefaultConstructorIL(System.Type,System.Reflection.Emit.ILGenerator)
extern "C"  void DynamicReflectionDelegateFactory_GenerateCreateDefaultConstructorIL_m272594643 (DynamicReflectionDelegateFactory_t3532246962 * __this, Type_t * ___type, ILGenerator_t3869071517 * ___generator, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Utilities.DynamicReflectionDelegateFactory::GenerateCreateGetPropertyIL(System.Reflection.PropertyInfo,System.Reflection.Emit.ILGenerator)
extern "C"  void DynamicReflectionDelegateFactory_GenerateCreateGetPropertyIL_m22519975 (DynamicReflectionDelegateFactory_t3532246962 * __this, PropertyInfo_t * ___propertyInfo, ILGenerator_t3869071517 * ___generator, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Utilities.DynamicReflectionDelegateFactory::GenerateCreateGetFieldIL(System.Reflection.FieldInfo,System.Reflection.Emit.ILGenerator)
extern "C"  void DynamicReflectionDelegateFactory_GenerateCreateGetFieldIL_m214627017 (DynamicReflectionDelegateFactory_t3532246962 * __this, FieldInfo_t * ___fieldInfo, ILGenerator_t3869071517 * ___generator, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Utilities.DynamicReflectionDelegateFactory::GenerateCreateSetFieldIL(System.Reflection.FieldInfo,System.Reflection.Emit.ILGenerator)
extern "C"  void DynamicReflectionDelegateFactory_GenerateCreateSetFieldIL_m1242996797 (Il2CppObject * __this /* static, unused */, FieldInfo_t * ___fieldInfo, ILGenerator_t3869071517 * ___generator, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Utilities.DynamicReflectionDelegateFactory::GenerateCreateSetPropertyIL(System.Reflection.PropertyInfo,System.Reflection.Emit.ILGenerator)
extern "C"  void DynamicReflectionDelegateFactory_GenerateCreateSetPropertyIL_m1757439771 (Il2CppObject * __this /* static, unused */, PropertyInfo_t * ___propertyInfo, ILGenerator_t3869071517 * ___generator, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Utilities.DynamicReflectionDelegateFactory::.ctor()
extern "C"  void DynamicReflectionDelegateFactory__ctor_m2229657586 (DynamicReflectionDelegateFactory_t3532246962 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Utilities.DynamicReflectionDelegateFactory::.cctor()
extern "C"  void DynamicReflectionDelegateFactory__cctor_m4212779515 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
