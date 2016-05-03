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

// System.Data.DuplicateNameException
struct DuplicateNameException_t46464140;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2995724695;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Runtime_Serialization_Serializatio2995724695.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCont986364934.h"

// System.Void System.Data.DuplicateNameException::.ctor()
extern "C"  void DuplicateNameException__ctor_m4278974072 (DuplicateNameException_t46464140 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DuplicateNameException::.ctor(System.String)
extern "C"  void DuplicateNameException__ctor_m3773557642 (DuplicateNameException_t46464140 * __this, String_t* ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DuplicateNameException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void DuplicateNameException__ctor_m2982810553 (DuplicateNameException_t46464140 * __this, SerializationInfo_t2995724695 * ___info, StreamingContext_t986364934  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
