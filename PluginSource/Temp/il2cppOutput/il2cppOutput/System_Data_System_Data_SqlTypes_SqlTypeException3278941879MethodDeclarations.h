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

// System.Data.SqlTypes.SqlTypeException
struct SqlTypeException_t3278941879;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2995724695;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Runtime_Serialization_Serializatio2995724695.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCont986364934.h"

// System.Void System.Data.SqlTypes.SqlTypeException::.ctor()
extern "C"  void SqlTypeException__ctor_m1995714827 (SqlTypeException_t3278941879 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.SqlTypes.SqlTypeException::.ctor(System.String)
extern "C"  void SqlTypeException__ctor_m1946990551 (SqlTypeException_t3278941879 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.SqlTypes.SqlTypeException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void SqlTypeException__ctor_m839740364 (SqlTypeException_t3278941879 * __this, SerializationInfo_t2995724695 * ___si, StreamingContext_t986364934  ___sc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.SqlTypes.SqlTypeException::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void SqlTypeException_System_Runtime_Serialization_ISerializable_GetObjectData_m1167378464 (SqlTypeException_t3278941879 * __this, SerializationInfo_t2995724695 * ___si, StreamingContext_t986364934  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
