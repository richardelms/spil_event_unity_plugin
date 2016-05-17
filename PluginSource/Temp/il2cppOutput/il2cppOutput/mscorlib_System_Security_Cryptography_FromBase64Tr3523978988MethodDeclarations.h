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

// System.Security.Cryptography.FromBase64Transform
struct FromBase64Transform_t3523978988;
// System.Byte[]
struct ByteU5BU5D_t58506160;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Security_Cryptography_FromBase64Tr4275585839.h"

// System.Void System.Security.Cryptography.FromBase64Transform::.ctor()
extern "C"  void FromBase64Transform__ctor_m3671809394 (FromBase64Transform_t3523978988 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.FromBase64Transform::.ctor(System.Security.Cryptography.FromBase64TransformMode)
extern "C"  void FromBase64Transform__ctor_m4111562703 (FromBase64Transform_t3523978988 * __this, int32_t ___whitespaces, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.FromBase64Transform::System.IDisposable.Dispose()
extern "C"  void FromBase64Transform_System_IDisposable_Dispose_m866626925 (FromBase64Transform_t3523978988 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.FromBase64Transform::Finalize()
extern "C"  void FromBase64Transform_Finalize_m2749068720 (FromBase64Transform_t3523978988 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.FromBase64Transform::get_CanReuseTransform()
extern "C"  bool FromBase64Transform_get_CanReuseTransform_m916476589 (FromBase64Transform_t3523978988 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.FromBase64Transform::Dispose(System.Boolean)
extern "C"  void FromBase64Transform_Dispose_m2205690982 (FromBase64Transform_t3523978988 * __this, bool ___disposing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte System.Security.Cryptography.FromBase64Transform::lookup(System.Byte)
extern "C"  uint8_t FromBase64Transform_lookup_m2632979507 (FromBase64Transform_t3523978988 * __this, uint8_t ___input, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Cryptography.FromBase64Transform::ProcessBlock(System.Byte[],System.Int32)
extern "C"  int32_t FromBase64Transform_ProcessBlock_m3076746554 (FromBase64Transform_t3523978988 * __this, ByteU5BU5D_t58506160* ___output, int32_t ___offset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.FromBase64Transform::CheckInputParameters(System.Byte[],System.Int32,System.Int32)
extern "C"  void FromBase64Transform_CheckInputParameters_m1649295979 (FromBase64Transform_t3523978988 * __this, ByteU5BU5D_t58506160* ___inputBuffer, int32_t ___inputOffset, int32_t ___inputCount, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Cryptography.FromBase64Transform::TransformBlock(System.Byte[],System.Int32,System.Int32,System.Byte[],System.Int32)
extern "C"  int32_t FromBase64Transform_TransformBlock_m71192858 (FromBase64Transform_t3523978988 * __this, ByteU5BU5D_t58506160* ___inputBuffer, int32_t ___inputOffset, int32_t ___inputCount, ByteU5BU5D_t58506160* ___outputBuffer, int32_t ___outputOffset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.FromBase64Transform::TransformFinalBlock(System.Byte[],System.Int32,System.Int32)
extern "C"  ByteU5BU5D_t58506160* FromBase64Transform_TransformFinalBlock_m3921748704 (FromBase64Transform_t3523978988 * __this, ByteU5BU5D_t58506160* ___inputBuffer, int32_t ___inputOffset, int32_t ___inputCount, const MethodInfo* method) IL2CPP_METHOD_ATTR;
