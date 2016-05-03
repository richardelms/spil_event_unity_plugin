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

// Newtonsoft.Json.JsonReaderException
struct JsonReaderException_t549712711;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2995724695;
// System.Exception
struct Exception_t1967233988;
// Newtonsoft.Json.JsonReader
struct JsonReader_t1817561742;
// Newtonsoft.Json.IJsonLineInfo
struct IJsonLineInfo_t3901002070;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Runtime_Serialization_Serializatio2995724695.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCont986364934.h"
#include "mscorlib_System_Exception1967233988.h"
#include "Newtonsoft_Json_Newtonsoft_Json_JsonReader1817561742.h"

// System.Void Newtonsoft.Json.JsonReaderException::set_LineNumber(System.Int32)
extern "C"  void JsonReaderException_set_LineNumber_m4050520062 (JsonReaderException_t549712711 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonReaderException::set_LinePosition(System.Int32)
extern "C"  void JsonReaderException_set_LinePosition_m2103222558 (JsonReaderException_t549712711 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonReaderException::set_Path(System.String)
extern "C"  void JsonReaderException_set_Path_m3592402413 (JsonReaderException_t549712711 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonReaderException::.ctor()
extern "C"  void JsonReaderException__ctor_m3114011729 (JsonReaderException_t549712711 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonReaderException::.ctor(System.String)
extern "C"  void JsonReaderException__ctor_m1994776145 (JsonReaderException_t549712711 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonReaderException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void JsonReaderException__ctor_m825365010 (JsonReaderException_t549712711 * __this, SerializationInfo_t2995724695 * ___info, StreamingContext_t986364934  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonReaderException::.ctor(System.String,System.Exception,System.String,System.Int32,System.Int32)
extern "C"  void JsonReaderException__ctor_m828961953 (JsonReaderException_t549712711 * __this, String_t* ___message, Exception_t1967233988 * ___innerException, String_t* ___path, int32_t ___lineNumber, int32_t ___linePosition, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.JsonReaderException Newtonsoft.Json.JsonReaderException::Create(Newtonsoft.Json.JsonReader,System.String)
extern "C"  JsonReaderException_t549712711 * JsonReaderException_Create_m1626706375 (Il2CppObject * __this /* static, unused */, JsonReader_t1817561742 * ___reader, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.JsonReaderException Newtonsoft.Json.JsonReaderException::Create(Newtonsoft.Json.JsonReader,System.String,System.Exception)
extern "C"  JsonReaderException_t549712711 * JsonReaderException_Create_m2295929423 (Il2CppObject * __this /* static, unused */, JsonReader_t1817561742 * ___reader, String_t* ___message, Exception_t1967233988 * ___ex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.JsonReaderException Newtonsoft.Json.JsonReaderException::Create(Newtonsoft.Json.IJsonLineInfo,System.String,System.String,System.Exception)
extern "C"  JsonReaderException_t549712711 * JsonReaderException_Create_m1054137813 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___lineInfo, String_t* ___path, String_t* ___message, Exception_t1967233988 * ___ex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
