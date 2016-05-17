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
// System.Globalization.CultureInfo
struct CultureInfo_t3603717042;
// System.String
struct String_t;
// System.Object
struct Il2CppObject;
// System.Xml.XmlQualifiedName
struct XmlQualifiedName_t176365656;
// System.Xml.Schema.XmlSchemaSet
struct XmlSchemaSet_t3827173367;

#include "codegen/il2cpp-codegen.h"
#include "System_Data_System_Data_SqlTypes_SqlString1156304623.h"
#include "System_Xml_System_Xml_XmlReader4229084514.h"
#include "System_Xml_System_Xml_XmlWriter89522450.h"
#include "mscorlib_System_Globalization_CompareOptions1115053679.h"
#include "mscorlib_System_Object837106420.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaSet3827173367.h"
#include "System_Data_System_Data_SqlTypes_SqlBoolean1393776170.h"

// System.Void System.Data.SqlTypes.SqlString::.cctor()
extern "C"  void SqlString__cctor_m2895596344 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchema System.Data.SqlTypes.SqlString::System.Xml.Serialization.IXmlSerializable.GetSchema()
extern "C"  XmlSchema_t1932230565 * SqlString_System_Xml_Serialization_IXmlSerializable_GetSchema_m22266603 (SqlString_t1156304623 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.SqlTypes.SqlString::System.Xml.Serialization.IXmlSerializable.ReadXml(System.Xml.XmlReader)
extern "C"  void SqlString_System_Xml_Serialization_IXmlSerializable_ReadXml_m4238557379 (SqlString_t1156304623 * __this, XmlReader_t4229084514 * ___reader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.SqlTypes.SqlString::System.Xml.Serialization.IXmlSerializable.WriteXml(System.Xml.XmlWriter)
extern "C"  void SqlString_System_Xml_Serialization_IXmlSerializable_WriteXml_m3570255040 (SqlString_t1156304623 * __this, XmlWriter_t89522450 * ___writer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.CultureInfo System.Data.SqlTypes.SqlString::get_CultureInfo()
extern "C"  CultureInfo_t3603717042 * SqlString_get_CultureInfo_m2918420643 (SqlString_t1156304623 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.SqlTypes.SqlString::get_IsNull()
extern "C"  bool SqlString_get_IsNull_m2186952243 (SqlString_t1156304623 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Data.SqlTypes.SqlString::get_Value()
extern "C"  String_t* SqlString_get_Value_m183665592 (SqlString_t1156304623 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.CompareOptions System.Data.SqlTypes.SqlString::get_CompareOptions()
extern "C"  int32_t SqlString_get_CompareOptions_m809806367 (SqlString_t1156304623 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.SqlTypes.SqlString::CompareTo(System.Object)
extern "C"  int32_t SqlString_CompareTo_m2095459557 (SqlString_t1156304623 * __this, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.SqlTypes.SqlString::CompareSqlString(System.Data.SqlTypes.SqlString)
extern "C"  int32_t SqlString_CompareSqlString_m1435143052 (SqlString_t1156304623 * __this, SqlString_t1156304623  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.SqlTypes.SqlString::Equals(System.Object)
extern "C"  bool SqlString_Equals_m3250032316 (SqlString_t1156304623 * __this, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.SqlTypes.SqlString::GetHashCode()
extern "C"  int32_t SqlString_GetHashCode_m4154130592 (SqlString_t1156304623 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Data.SqlTypes.SqlString::ToString()
extern "C"  String_t* SqlString_ToString_m1078291742 (SqlString_t1156304623 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlQualifiedName System.Data.SqlTypes.SqlString::GetXsdType(System.Xml.Schema.XmlSchemaSet)
extern "C"  XmlQualifiedName_t176365656 * SqlString_GetXsdType_m3233917832 (Il2CppObject * __this /* static, unused */, XmlSchemaSet_t3827173367 * ___schemaSet, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.SqlTypes.SqlBoolean System.Data.SqlTypes.SqlString::op_Equality(System.Data.SqlTypes.SqlString,System.Data.SqlTypes.SqlString)
extern "C"  SqlBoolean_t1393776170  SqlString_op_Equality_m1144352950 (Il2CppObject * __this /* static, unused */, SqlString_t1156304623  ___x, SqlString_t1156304623  ___y, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Data.SqlTypes.SqlString::op_Explicit(System.Data.SqlTypes.SqlString)
extern "C"  String_t* SqlString_op_Explicit_m1557483777 (Il2CppObject * __this /* static, unused */, SqlString_t1156304623  ___x, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct SqlString_t1156304623;
struct SqlString_t1156304623_marshaled_pinvoke;

extern "C" void SqlString_t1156304623_marshal_pinvoke(const SqlString_t1156304623& unmarshaled, SqlString_t1156304623_marshaled_pinvoke& marshaled);
extern "C" void SqlString_t1156304623_marshal_pinvoke_back(const SqlString_t1156304623_marshaled_pinvoke& marshaled, SqlString_t1156304623& unmarshaled);
extern "C" void SqlString_t1156304623_marshal_pinvoke_cleanup(SqlString_t1156304623_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct SqlString_t1156304623;
struct SqlString_t1156304623_marshaled_com;

extern "C" void SqlString_t1156304623_marshal_com(const SqlString_t1156304623& unmarshaled, SqlString_t1156304623_marshaled_com& marshaled);
extern "C" void SqlString_t1156304623_marshal_com_back(const SqlString_t1156304623_marshaled_com& marshaled, SqlString_t1156304623& unmarshaled);
extern "C" void SqlString_t1156304623_marshal_com_cleanup(SqlString_t1156304623_marshaled_com& marshaled);
