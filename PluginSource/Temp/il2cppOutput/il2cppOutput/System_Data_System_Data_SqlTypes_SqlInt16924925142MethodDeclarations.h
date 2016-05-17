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
#include "System_Data_System_Data_SqlTypes_SqlInt16924925142.h"
#include "System_Xml_System_Xml_XmlReader4229084514.h"
#include "System_Xml_System_Xml_XmlWriter89522450.h"
#include "mscorlib_System_Object837106420.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaSet3827173367.h"
#include "System_Data_System_Data_SqlTypes_SqlBoolean1393776170.h"

// System.Void System.Data.SqlTypes.SqlInt16::.ctor(System.Int16)
extern "C"  void SqlInt16__ctor_m1183658263 (SqlInt16_t924925142 * __this, int16_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.SqlTypes.SqlInt16::.cctor()
extern "C"  void SqlInt16__cctor_m576327777 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchema System.Data.SqlTypes.SqlInt16::System.Xml.Serialization.IXmlSerializable.GetSchema()
extern "C"  XmlSchema_t1932230565 * SqlInt16_System_Xml_Serialization_IXmlSerializable_GetSchema_m4128468934 (SqlInt16_t924925142 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.SqlTypes.SqlInt16::System.Xml.Serialization.IXmlSerializable.ReadXml(System.Xml.XmlReader)
extern "C"  void SqlInt16_System_Xml_Serialization_IXmlSerializable_ReadXml_m3156572794 (SqlInt16_t924925142 * __this, XmlReader_t4229084514 * ___reader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.SqlTypes.SqlInt16::System.Xml.Serialization.IXmlSerializable.WriteXml(System.Xml.XmlWriter)
extern "C"  void SqlInt16_System_Xml_Serialization_IXmlSerializable_WriteXml_m93503977 (SqlInt16_t924925142 * __this, XmlWriter_t89522450 * ___writer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.SqlTypes.SqlInt16::get_IsNull()
extern "C"  bool SqlInt16_get_IsNull_m1504211976 (SqlInt16_t924925142 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 System.Data.SqlTypes.SqlInt16::get_Value()
extern "C"  int16_t SqlInt16_get_Value_m3086397456 (SqlInt16_t924925142 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.SqlTypes.SqlInt16::CompareTo(System.Object)
extern "C"  int32_t SqlInt16_CompareTo_m2881052614 (SqlInt16_t924925142 * __this, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.SqlTypes.SqlInt16::CompareSqlInt16(System.Data.SqlTypes.SqlInt16)
extern "C"  int32_t SqlInt16_CompareSqlInt16_m452180501 (SqlInt16_t924925142 * __this, SqlInt16_t924925142  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.SqlTypes.SqlInt16::Equals(System.Object)
extern "C"  bool SqlInt16_Equals_m3081771143 (SqlInt16_t924925142 * __this, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.SqlTypes.SqlInt16::GetHashCode()
extern "C"  int32_t SqlInt16_GetHashCode_m1537921119 (SqlInt16_t924925142 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Data.SqlTypes.SqlInt16::ToString()
extern "C"  String_t* SqlInt16_ToString_m698583393 (SqlInt16_t924925142 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlQualifiedName System.Data.SqlTypes.SqlInt16::GetXsdType(System.Xml.Schema.XmlSchemaSet)
extern "C"  XmlQualifiedName_t176365656 * SqlInt16_GetXsdType_m1780734071 (Il2CppObject * __this /* static, unused */, XmlSchemaSet_t3827173367 * ___schemaSet, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.SqlTypes.SqlBoolean System.Data.SqlTypes.SqlInt16::op_Equality(System.Data.SqlTypes.SqlInt16,System.Data.SqlTypes.SqlInt16)
extern "C"  SqlBoolean_t1393776170  SqlInt16_op_Equality_m3184474617 (Il2CppObject * __this /* static, unused */, SqlInt16_t924925142  ___x, SqlInt16_t924925142  ___y, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct SqlInt16_t924925142;
struct SqlInt16_t924925142_marshaled_pinvoke;

extern "C" void SqlInt16_t924925142_marshal_pinvoke(const SqlInt16_t924925142& unmarshaled, SqlInt16_t924925142_marshaled_pinvoke& marshaled);
extern "C" void SqlInt16_t924925142_marshal_pinvoke_back(const SqlInt16_t924925142_marshaled_pinvoke& marshaled, SqlInt16_t924925142& unmarshaled);
extern "C" void SqlInt16_t924925142_marshal_pinvoke_cleanup(SqlInt16_t924925142_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct SqlInt16_t924925142;
struct SqlInt16_t924925142_marshaled_com;

extern "C" void SqlInt16_t924925142_marshal_com(const SqlInt16_t924925142& unmarshaled, SqlInt16_t924925142_marshaled_com& marshaled);
extern "C" void SqlInt16_t924925142_marshal_com_back(const SqlInt16_t924925142_marshaled_com& marshaled, SqlInt16_t924925142& unmarshaled);
extern "C" void SqlInt16_t924925142_marshal_com_cleanup(SqlInt16_t924925142_marshaled_com& marshaled);
