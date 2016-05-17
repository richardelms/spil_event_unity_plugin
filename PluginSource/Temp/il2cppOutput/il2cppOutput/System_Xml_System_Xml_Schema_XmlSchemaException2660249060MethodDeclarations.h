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

// System.Xml.Schema.XmlSchemaException
struct XmlSchemaException_t2660249060;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2995724695;
// System.String
struct String_t;
// System.Object
struct Il2CppObject;
// System.Xml.Schema.XmlSchemaObject
struct XmlSchemaObject_t2900481284;
// System.Exception
struct Exception_t1967233988;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_Serializatio2995724695.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCont986364934.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Object837106420.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaObject2900481284.h"
#include "mscorlib_System_Exception1967233988.h"

// System.Void System.Xml.Schema.XmlSchemaException::.ctor()
extern "C"  void XmlSchemaException__ctor_m3943090231 (XmlSchemaException_t2660249060 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void XmlSchemaException__ctor_m3022219512 (XmlSchemaException_t2660249060 * __this, SerializationInfo_t2995724695 * ___info, StreamingContext_t986364934  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaException::.ctor(System.String,System.Object,System.String,System.Xml.Schema.XmlSchemaObject,System.Exception)
extern "C"  void XmlSchemaException__ctor_m3848999797 (XmlSchemaException_t2660249060 * __this, String_t* ___message, Il2CppObject * ___sender, String_t* ___sourceUri, XmlSchemaObject_t2900481284 * ___sourceObject, Exception_t1967233988 * ___innerException, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaException::.ctor(System.String,System.Xml.Schema.XmlSchemaObject,System.Exception)
extern "C"  void XmlSchemaException__ctor_m95575999 (XmlSchemaException_t2660249060 * __this, String_t* ___message, XmlSchemaObject_t2900481284 * ___sourceObject, Exception_t1967233988 * ___innerException, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaException::.ctor(System.String,System.Exception)
extern "C"  void XmlSchemaException__ctor_m2248382571 (XmlSchemaException_t2660249060 * __this, String_t* ___message, Exception_t1967233988 * ___innerException, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Schema.XmlSchemaException::GetMessage(System.String,System.String,System.Object,System.Xml.Schema.XmlSchemaObject)
extern "C"  String_t* XmlSchemaException_GetMessage_m3207775927 (Il2CppObject * __this /* static, unused */, String_t* ___message, String_t* ___sourceUri, Il2CppObject * ___sender, XmlSchemaObject_t2900481284 * ___sourceObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Schema.XmlSchemaException::GetMessage(System.String,System.String,System.Int32,System.Int32,System.Xml.Schema.XmlSchemaObject)
extern "C"  String_t* XmlSchemaException_GetMessage_m2185124169 (Il2CppObject * __this /* static, unused */, String_t* ___message, String_t* ___sourceUri, int32_t ___lineNumber, int32_t ___linePosition, XmlSchemaObject_t2900481284 * ___sourceObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Schema.XmlSchemaException::get_Message()
extern "C"  String_t* XmlSchemaException_get_Message_m3331904880 (XmlSchemaException_t2660249060 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaException::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void XmlSchemaException_GetObjectData_m3502782549 (XmlSchemaException_t2660249060 * __this, SerializationInfo_t2995724695 * ___info, StreamingContext_t986364934  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
