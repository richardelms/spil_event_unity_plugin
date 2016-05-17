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

// Newtonsoft.Json.JsonSerializationException
struct JsonSerializationException_t90215434;
// System.String
struct String_t;
// System.Exception
struct Exception_t1967233988;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2995724695;
// Newtonsoft.Json.JsonReader
struct JsonReader_t1817561742;
// Newtonsoft.Json.IJsonLineInfo
struct IJsonLineInfo_t3901002070;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Exception1967233988.h"
#include "mscorlib_System_Runtime_Serialization_Serializatio2995724695.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCont986364934.h"
#include "Newtonsoft_Json_Newtonsoft_Json_JsonReader1817561742.h"

// System.Void Newtonsoft.Json.JsonSerializationException::.ctor()
extern "C"  void JsonSerializationException__ctor_m320322250 (JsonSerializationException_t90215434 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonSerializationException::.ctor(System.String)
extern "C"  void JsonSerializationException__ctor_m506018936 (JsonSerializationException_t90215434 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonSerializationException::.ctor(System.String,System.Exception)
extern "C"  void JsonSerializationException__ctor_m1091307454 (JsonSerializationException_t90215434 * __this, String_t* ___message, Exception_t1967233988 * ___innerException, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonSerializationException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void JsonSerializationException__ctor_m2198567179 (JsonSerializationException_t90215434 * __this, SerializationInfo_t2995724695 * ___info, StreamingContext_t986364934  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.JsonSerializationException Newtonsoft.Json.JsonSerializationException::Create(Newtonsoft.Json.JsonReader,System.String)
extern "C"  JsonSerializationException_t90215434 * JsonSerializationException_Create_m3452296553 (Il2CppObject * __this /* static, unused */, JsonReader_t1817561742 * ___reader, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.JsonSerializationException Newtonsoft.Json.JsonSerializationException::Create(Newtonsoft.Json.JsonReader,System.String,System.Exception)
extern "C"  JsonSerializationException_t90215434 * JsonSerializationException_Create_m2006533869 (Il2CppObject * __this /* static, unused */, JsonReader_t1817561742 * ___reader, String_t* ___message, Exception_t1967233988 * ___ex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.JsonSerializationException Newtonsoft.Json.JsonSerializationException::Create(Newtonsoft.Json.IJsonLineInfo,System.String,System.String,System.Exception)
extern "C"  JsonSerializationException_t90215434 * JsonSerializationException_Create_m217825527 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___lineInfo, String_t* ___path, String_t* ___message, Exception_t1967233988 * ___ex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
