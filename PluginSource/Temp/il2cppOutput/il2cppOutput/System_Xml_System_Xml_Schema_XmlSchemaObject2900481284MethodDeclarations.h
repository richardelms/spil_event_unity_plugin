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

// System.Xml.Schema.XmlSchemaObject
struct XmlSchemaObject_t2900481284;
// System.String
struct String_t;
// System.Xml.Schema.XmlSchema
struct XmlSchema_t1932230565;
// System.Xml.Serialization.XmlSerializerNamespaces
struct XmlSerializerNamespaces_t2229116383;
// System.Xml.Schema.ValidationEventHandler
struct ValidationEventHandler_t2777264566;
// System.Exception
struct Exception_t1967233988;
// System.Object
struct Il2CppObject;
// System.Xml.Schema.XmlSchemaParticle
struct XmlSchemaParticle_t3696384587;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaObject2900481284.h"
#include "System_Xml_System_Xml_Schema_ValidationEventHandle2777264566.h"
#include "mscorlib_System_Exception1967233988.h"
#include "mscorlib_System_Object837106420.h"
#include "System_Xml_System_Xml_Schema_XmlSchema1932230565.h"
#include "mscorlib_System_Guid2778838590.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaParticle3696384587.h"

// System.Void System.Xml.Schema.XmlSchemaObject::.ctor()
extern "C"  void XmlSchemaObject__ctor_m1909653473 (XmlSchemaObject_t2900481284 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.XmlSchemaObject::get_LineNumber()
extern "C"  int32_t XmlSchemaObject_get_LineNumber_m207255303 (XmlSchemaObject_t2900481284 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaObject::set_LineNumber(System.Int32)
extern "C"  void XmlSchemaObject_set_LineNumber_m844492398 (XmlSchemaObject_t2900481284 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.XmlSchemaObject::get_LinePosition()
extern "C"  int32_t XmlSchemaObject_get_LinePosition_m3378442663 (XmlSchemaObject_t2900481284 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaObject::set_LinePosition(System.Int32)
extern "C"  void XmlSchemaObject_set_LinePosition_m602188686 (XmlSchemaObject_t2900481284 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Schema.XmlSchemaObject::get_SourceUri()
extern "C"  String_t* XmlSchemaObject_get_SourceUri_m4168619146 (XmlSchemaObject_t2900481284 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaObject::set_SourceUri(System.String)
extern "C"  void XmlSchemaObject_set_SourceUri_m3810037807 (XmlSchemaObject_t2900481284 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaObject System.Xml.Schema.XmlSchemaObject::get_Parent()
extern "C"  XmlSchemaObject_t2900481284 * XmlSchemaObject_get_Parent_m1231834627 (XmlSchemaObject_t2900481284 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaObject::set_Parent(System.Xml.Schema.XmlSchemaObject)
extern "C"  void XmlSchemaObject_set_Parent_m4285855944 (XmlSchemaObject_t2900481284 * __this, XmlSchemaObject_t2900481284 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchema System.Xml.Schema.XmlSchemaObject::get_AncestorSchema()
extern "C"  XmlSchema_t1932230565 * XmlSchemaObject_get_AncestorSchema_m4024089038 (XmlSchemaObject_t2900481284 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaObject::SetParent(System.Xml.Schema.XmlSchemaObject)
extern "C"  void XmlSchemaObject_SetParent_m1004461927 (XmlSchemaObject_t2900481284 * __this, XmlSchemaObject_t2900481284 * ___parent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.XmlSerializerNamespaces System.Xml.Schema.XmlSchemaObject::get_Namespaces()
extern "C"  XmlSerializerNamespaces_t2229116383 * XmlSchemaObject_get_Namespaces_m1758906208 (XmlSchemaObject_t2900481284 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaObject::error(System.Xml.Schema.ValidationEventHandler,System.String)
extern "C"  void XmlSchemaObject_error_m2264352099 (XmlSchemaObject_t2900481284 * __this, ValidationEventHandler_t2777264566 * ___handle, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaObject::warn(System.Xml.Schema.ValidationEventHandler,System.String)
extern "C"  void XmlSchemaObject_warn_m2763308261 (XmlSchemaObject_t2900481284 * __this, ValidationEventHandler_t2777264566 * ___handle, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaObject::error(System.Xml.Schema.ValidationEventHandler,System.String,System.Exception)
extern "C"  void XmlSchemaObject_error_m3472462387 (Il2CppObject * __this /* static, unused */, ValidationEventHandler_t2777264566 * ___handle, String_t* ___message, Exception_t1967233988 * ___innerException, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaObject::error(System.Xml.Schema.ValidationEventHandler,System.String,System.Exception,System.Xml.Schema.XmlSchemaObject,System.Object)
extern "C"  void XmlSchemaObject_error_m4016578285 (Il2CppObject * __this /* static, unused */, ValidationEventHandler_t2777264566 * ___handle, String_t* ___message, Exception_t1967233988 * ___innerException, XmlSchemaObject_t2900481284 * ___xsobj, Il2CppObject * ___sender, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaObject::warn(System.Xml.Schema.ValidationEventHandler,System.String,System.Exception,System.Xml.Schema.XmlSchemaObject,System.Object)
extern "C"  void XmlSchemaObject_warn_m4122257323 (Il2CppObject * __this /* static, unused */, ValidationEventHandler_t2777264566 * ___handle, String_t* ___message, Exception_t1967233988 * ___innerException, XmlSchemaObject_t2900481284 * ___xsobj, Il2CppObject * ___sender, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.XmlSchemaObject::Compile(System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C"  int32_t XmlSchemaObject_Compile_m346479359 (XmlSchemaObject_t2900481284 * __this, ValidationEventHandler_t2777264566 * ___h, XmlSchema_t1932230565 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.XmlSchemaObject::Validate(System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C"  int32_t XmlSchemaObject_Validate_m3112856802 (XmlSchemaObject_t2900481284 * __this, ValidationEventHandler_t2777264566 * ___h, XmlSchema_t1932230565 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaObject::IsValidated(System.Guid)
extern "C"  bool XmlSchemaObject_IsValidated_m1007618463 (XmlSchemaObject_t2900481284 * __this, Guid_t2778838590  ___validationId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaObject::CopyInfo(System.Xml.Schema.XmlSchemaParticle)
extern "C"  void XmlSchemaObject_CopyInfo_m119761221 (XmlSchemaObject_t2900481284 * __this, XmlSchemaParticle_t3696384587 * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
