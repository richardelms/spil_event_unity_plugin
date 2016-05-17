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
#include "System_Data_System_Data_SqlTypes_SqlDouble722332335.h"
#include "System_Xml_System_Xml_XmlReader4229084514.h"
#include "System_Xml_System_Xml_XmlWriter89522450.h"
#include "mscorlib_System_Object837106420.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaSet3827173367.h"
#include "System_Data_System_Data_SqlTypes_SqlBoolean1393776170.h"

// System.Void System.Data.SqlTypes.SqlDouble::.ctor(System.Double)
extern "C"  void SqlDouble__ctor_m1001606669 (SqlDouble_t722332335 * __this, double ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.SqlTypes.SqlDouble::.cctor()
extern "C"  void SqlDouble__cctor_m2593765112 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchema System.Data.SqlTypes.SqlDouble::System.Xml.Serialization.IXmlSerializable.GetSchema()
extern "C"  XmlSchema_t1932230565 * SqlDouble_System_Xml_Serialization_IXmlSerializable_GetSchema_m7171883 (SqlDouble_t722332335 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.SqlTypes.SqlDouble::System.Xml.Serialization.IXmlSerializable.ReadXml(System.Xml.XmlReader)
extern "C"  void SqlDouble_System_Xml_Serialization_IXmlSerializable_ReadXml_m2881641731 (SqlDouble_t722332335 * __this, XmlReader_t4229084514 * ___reader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.SqlTypes.SqlDouble::System.Xml.Serialization.IXmlSerializable.WriteXml(System.Xml.XmlWriter)
extern "C"  void SqlDouble_System_Xml_Serialization_IXmlSerializable_WriteXml_m160575616 (SqlDouble_t722332335 * __this, XmlWriter_t89522450 * ___writer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.SqlTypes.SqlDouble::get_IsNull()
extern "C"  bool SqlDouble_get_IsNull_m2378222067 (SqlDouble_t722332335 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.Data.SqlTypes.SqlDouble::get_Value()
extern "C"  double SqlDouble_get_Value_m518192056 (SqlDouble_t722332335 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.SqlTypes.SqlDouble::CompareTo(System.Object)
extern "C"  int32_t SqlDouble_CompareTo_m2786662565 (SqlDouble_t722332335 * __this, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.SqlTypes.SqlDouble::CompareTo(System.Data.SqlTypes.SqlDouble)
extern "C"  int32_t SqlDouble_CompareTo_m1064437902 (SqlDouble_t722332335 * __this, SqlDouble_t722332335  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.SqlTypes.SqlDouble::Equals(System.Object)
extern "C"  bool SqlDouble_Equals_m1083325180 (SqlDouble_t722332335 * __this, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.SqlTypes.SqlDouble::GetHashCode()
extern "C"  int32_t SqlDouble_GetHashCode_m1493560544 (SqlDouble_t722332335 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Data.SqlTypes.SqlDouble::ToString()
extern "C"  String_t* SqlDouble_ToString_m3076253918 (SqlDouble_t722332335 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlQualifiedName System.Data.SqlTypes.SqlDouble::GetXsdType(System.Xml.Schema.XmlSchemaSet)
extern "C"  XmlQualifiedName_t176365656 * SqlDouble_GetXsdType_m1761158984 (Il2CppObject * __this /* static, unused */, XmlSchemaSet_t3827173367 * ___schemaSet, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.SqlTypes.SqlBoolean System.Data.SqlTypes.SqlDouble::op_Equality(System.Data.SqlTypes.SqlDouble,System.Data.SqlTypes.SqlDouble)
extern "C"  SqlBoolean_t1393776170  SqlDouble_op_Equality_m947020918 (Il2CppObject * __this /* static, unused */, SqlDouble_t722332335  ___x, SqlDouble_t722332335  ___y, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct SqlDouble_t722332335;
struct SqlDouble_t722332335_marshaled_pinvoke;

extern "C" void SqlDouble_t722332335_marshal_pinvoke(const SqlDouble_t722332335& unmarshaled, SqlDouble_t722332335_marshaled_pinvoke& marshaled);
extern "C" void SqlDouble_t722332335_marshal_pinvoke_back(const SqlDouble_t722332335_marshaled_pinvoke& marshaled, SqlDouble_t722332335& unmarshaled);
extern "C" void SqlDouble_t722332335_marshal_pinvoke_cleanup(SqlDouble_t722332335_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct SqlDouble_t722332335;
struct SqlDouble_t722332335_marshaled_com;

extern "C" void SqlDouble_t722332335_marshal_com(const SqlDouble_t722332335& unmarshaled, SqlDouble_t722332335_marshaled_com& marshaled);
extern "C" void SqlDouble_t722332335_marshal_com_back(const SqlDouble_t722332335_marshaled_com& marshaled, SqlDouble_t722332335& unmarshaled);
extern "C" void SqlDouble_t722332335_marshal_com_cleanup(SqlDouble_t722332335_marshaled_com& marshaled);
