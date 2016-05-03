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

// System.Xml.Schema.XmlSchema
struct XmlSchema_t1932230565;
// System.Xml.XmlReader
struct XmlReader_t4229084514;
// System.Xml.XmlWriter
struct XmlWriter_t89522450;
// System.Object
struct Il2CppObject;
// System.String
struct String_t;
// System.Xml.XmlQualifiedName
struct XmlQualifiedName_t176365656;
// System.Xml.Schema.XmlSchemaSet
struct XmlSchemaSet_t3827173367;

#include "codegen/il2cpp-codegen.h"
#include "System_Data_System_Data_SqlTypes_SqlDateTime2300642041.h"
#include "System_Xml_System_Xml_XmlReader4229084514.h"
#include "System_Xml_System_Xml_XmlWriter89522450.h"
#include "mscorlib_System_DateTime339033936.h"
#include "mscorlib_System_Object837106420.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaSet3827173367.h"
#include "System_Data_System_Data_SqlTypes_SqlBoolean1393776170.h"

// System.Void System.Data.SqlTypes.SqlDateTime::.cctor()
extern "C"  void SqlDateTime__cctor_m3508794114 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchema System.Data.SqlTypes.SqlDateTime::System.Xml.Serialization.IXmlSerializable.GetSchema()
extern "C"  XmlSchema_t1932230565 * SqlDateTime_System_Xml_Serialization_IXmlSerializable_GetSchema_m126293985 (SqlDateTime_t2300642041 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.SqlTypes.SqlDateTime::System.Xml.Serialization.IXmlSerializable.ReadXml(System.Xml.XmlReader)
extern "C"  void SqlDateTime_System_Xml_Serialization_IXmlSerializable_ReadXml_m2024458169 (SqlDateTime_t2300642041 * __this, XmlReader_t4229084514 * ___reader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.SqlTypes.SqlDateTime::System.Xml.Serialization.IXmlSerializable.WriteXml(System.Xml.XmlWriter)
extern "C"  void SqlDateTime_System_Xml_Serialization_IXmlSerializable_WriteXml_m3652656266 (SqlDateTime_t2300642041 * __this, XmlWriter_t89522450 * ___writer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.SqlTypes.SqlDateTime::get_IsNull()
extern "C"  bool SqlDateTime_get_IsNull_m4079675005 (SqlDateTime_t2300642041 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.Data.SqlTypes.SqlDateTime::get_Value()
extern "C"  DateTime_t339033936  SqlDateTime_get_Value_m897922744 (SqlDateTime_t2300642041 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.SqlTypes.SqlDateTime::CompareTo(System.Object)
extern "C"  int32_t SqlDateTime_CompareTo_m2827687855 (SqlDateTime_t2300642041 * __this, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.SqlTypes.SqlDateTime::CompareTo(System.Data.SqlTypes.SqlDateTime)
extern "C"  int32_t SqlDateTime_CompareTo_m3933511994 (SqlDateTime_t2300642041 * __this, SqlDateTime_t2300642041  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.SqlTypes.SqlDateTime::Equals(System.Object)
extern "C"  bool SqlDateTime_Equals_m173971890 (SqlDateTime_t2300642041 * __this, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.SqlTypes.SqlDateTime::GetHashCode()
extern "C"  int32_t SqlDateTime_GetHashCode_m1989996566 (SqlDateTime_t2300642041 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Data.SqlTypes.SqlDateTime::ToString()
extern "C"  String_t* SqlDateTime_ToString_m3142684072 (SqlDateTime_t2300642041 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlQualifiedName System.Data.SqlTypes.SqlDateTime::GetXsdType(System.Xml.Schema.XmlSchemaSet)
extern "C"  XmlQualifiedName_t176365656 * SqlDateTime_GetXsdType_m3789687186 (Il2CppObject * __this /* static, unused */, XmlSchemaSet_t3827173367 * ___schemaSet, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.SqlTypes.SqlBoolean System.Data.SqlTypes.SqlDateTime::op_Equality(System.Data.SqlTypes.SqlDateTime,System.Data.SqlTypes.SqlDateTime)
extern "C"  SqlBoolean_t1393776170  SqlDateTime_op_Equality_m4135663424 (Il2CppObject * __this /* static, unused */, SqlDateTime_t2300642041  ___x, SqlDateTime_t2300642041  ___y, const MethodInfo* method) IL2CPP_METHOD_ATTR;
