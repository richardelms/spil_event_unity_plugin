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

// System.Reflection.Emit.ILGenerator
struct ILGenerator_t3869071517;
// System.Type
struct Type_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Reflection_Emit_ILGenerator3869071517.h"
#include "mscorlib_System_Type2779229935.h"
#include "mscorlib_System_Reflection_MethodInfo3461221277.h"

// System.Void Newtonsoft.Json.Utilities.ILGeneratorExtensions::PushInstance(System.Reflection.Emit.ILGenerator,System.Type)
extern "C"  void ILGeneratorExtensions_PushInstance_m2620403800 (Il2CppObject * __this /* static, unused */, ILGenerator_t3869071517 * ___generator, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Utilities.ILGeneratorExtensions::PushArrayInstance(System.Reflection.Emit.ILGenerator,System.Int32,System.Int32)
extern "C"  void ILGeneratorExtensions_PushArrayInstance_m1544043118 (Il2CppObject * __this /* static, unused */, ILGenerator_t3869071517 * ___generator, int32_t ___argsIndex, int32_t ___arrayIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Utilities.ILGeneratorExtensions::BoxIfNeeded(System.Reflection.Emit.ILGenerator,System.Type)
extern "C"  void ILGeneratorExtensions_BoxIfNeeded_m3932704074 (Il2CppObject * __this /* static, unused */, ILGenerator_t3869071517 * ___generator, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Utilities.ILGeneratorExtensions::UnboxIfNeeded(System.Reflection.Emit.ILGenerator,System.Type)
extern "C"  void ILGeneratorExtensions_UnboxIfNeeded_m3548116625 (Il2CppObject * __this /* static, unused */, ILGenerator_t3869071517 * ___generator, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Utilities.ILGeneratorExtensions::CallMethod(System.Reflection.Emit.ILGenerator,System.Reflection.MethodInfo)
extern "C"  void ILGeneratorExtensions_CallMethod_m2943549918 (Il2CppObject * __this /* static, unused */, ILGenerator_t3869071517 * ___generator, MethodInfo_t * ___methodInfo, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Utilities.ILGeneratorExtensions::Return(System.Reflection.Emit.ILGenerator)
extern "C"  void ILGeneratorExtensions_Return_m69850630 (Il2CppObject * __this /* static, unused */, ILGenerator_t3869071517 * ___generator, const MethodInfo* method) IL2CPP_METHOD_ATTR;
