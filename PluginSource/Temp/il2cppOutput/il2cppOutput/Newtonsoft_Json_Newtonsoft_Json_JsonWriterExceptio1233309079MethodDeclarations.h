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

// Newtonsoft.Json.JsonWriterException
struct JsonWriterException_t1233309079;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2995724695;
// System.Exception
struct Exception_t1967233988;
// Newtonsoft.Json.JsonWriter
struct JsonWriter_t1972966974;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Runtime_Serialization_Serializatio2995724695.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCont986364934.h"
#include "mscorlib_System_Exception1967233988.h"
#include "Newtonsoft_Json_Newtonsoft_Json_JsonWriter1972966974.h"

// System.Void Newtonsoft.Json.JsonWriterException::set_Path(System.String)
extern "C"  void JsonWriterException_set_Path_m64230813 (JsonWriterException_t1233309079 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonWriterException::.ctor()
extern "C"  void JsonWriterException__ctor_m1743113217 (JsonWriterException_t1233309079 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonWriterException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void JsonWriterException__ctor_m4291750338 (JsonWriterException_t1233309079 * __this, SerializationInfo_t2995724695 * ___info, StreamingContext_t986364934  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonWriterException::.ctor(System.String,System.Exception,System.String)
extern "C"  void JsonWriterException__ctor_m4203226673 (JsonWriterException_t1233309079 * __this, String_t* ___message, Exception_t1967233988 * ___innerException, String_t* ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.JsonWriterException Newtonsoft.Json.JsonWriterException::Create(Newtonsoft.Json.JsonWriter,System.String,System.Exception)
extern "C"  JsonWriterException_t1233309079 * JsonWriterException_Create_m3406894431 (Il2CppObject * __this /* static, unused */, JsonWriter_t1972966974 * ___writer, String_t* ___message, Exception_t1967233988 * ___ex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.JsonWriterException Newtonsoft.Json.JsonWriterException::Create(System.String,System.String,System.Exception)
extern "C"  JsonWriterException_t1233309079 * JsonWriterException_Create_m875081667 (Il2CppObject * __this /* static, unused */, String_t* ___path, String_t* ___message, Exception_t1967233988 * ___ex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
