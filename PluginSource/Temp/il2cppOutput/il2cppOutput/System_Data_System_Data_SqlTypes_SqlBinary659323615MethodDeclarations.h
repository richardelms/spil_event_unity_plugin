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

// System.Byte[]
struct ByteU5BU5D_t58506160;
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
#include "System_Data_System_Data_SqlTypes_SqlBinary659323615.h"
#include "System_Xml_System_Xml_XmlReader4229084514.h"
#include "System_Xml_System_Xml_XmlWriter89522450.h"
#include "mscorlib_System_Object837106420.h"
#include "System_Data_System_Data_SqlTypes_SqlGuid1619558631.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaSet3827173367.h"
#include "System_Data_System_Data_SqlTypes_SqlBoolean1393776170.h"

// System.Void System.Data.SqlTypes.SqlBinary::.ctor(System.Byte[])
extern "C"  void SqlBinary__ctor_m3425279684 (SqlBinary_t659323615 * __this, ByteU5BU5D_t58506160* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchema System.Data.SqlTypes.SqlBinary::System.Xml.Serialization.IXmlSerializable.GetSchema()
extern "C"  XmlSchema_t1932230565 * SqlBinary_System_Xml_Serialization_IXmlSerializable_GetSchema_m1597794555 (SqlBinary_t659323615 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.SqlTypes.SqlBinary::System.Xml.Serialization.IXmlSerializable.ReadXml(System.Xml.XmlReader)
extern "C"  void SqlBinary_System_Xml_Serialization_IXmlSerializable_ReadXml_m110396115 (SqlBinary_t659323615 * __this, XmlReader_t4229084514 * ___reader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.SqlTypes.SqlBinary::System.Xml.Serialization.IXmlSerializable.WriteXml(System.Xml.XmlWriter)
extern "C"  void SqlBinary_System_Xml_Serialization_IXmlSerializable_WriteXml_m151307440 (SqlBinary_t659323615 * __this, XmlWriter_t89522450 * ___writer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.SqlTypes.SqlBinary::get_IsNull()
extern "C"  bool SqlBinary_get_IsNull_m2322023971 (SqlBinary_t659323615 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.SqlTypes.SqlBinary::get_Length()
extern "C"  int32_t SqlBinary_get_Length_m1709835538 (SqlBinary_t659323615 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Data.SqlTypes.SqlBinary::get_Value()
extern "C"  ByteU5BU5D_t58506160* SqlBinary_get_Value_m2870888097 (SqlBinary_t659323615 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.SqlTypes.SqlBinary::CompareTo(System.Object)
extern "C"  int32_t SqlBinary_CompareTo_m158780629 (SqlBinary_t659323615 * __this, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.SqlTypes.SqlBinary::CompareTo(System.Data.SqlTypes.SqlBinary)
extern "C"  int32_t SqlBinary_CompareTo_m1537257518 (SqlBinary_t659323615 * __this, SqlBinary_t659323615  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.SqlTypes.SqlBinary::Equals(System.Object)
extern "C"  bool SqlBinary_Equals_m2134668492 (SqlBinary_t659323615 * __this, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.SqlTypes.SqlBinary::GetHashCode()
extern "C"  int32_t SqlBinary_GetHashCode_m4046386864 (SqlBinary_t659323615 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.SqlTypes.SqlGuid System.Data.SqlTypes.SqlBinary::ToSqlGuid()
extern "C"  SqlGuid_t1619558631  SqlBinary_ToSqlGuid_m2201115749 (SqlBinary_t659323615 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Data.SqlTypes.SqlBinary::ToString()
extern "C"  String_t* SqlBinary_ToString_m3000217870 (SqlBinary_t659323615 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.SqlTypes.SqlBinary::Compare(System.Data.SqlTypes.SqlBinary,System.Data.SqlTypes.SqlBinary)
extern "C"  int32_t SqlBinary_Compare_m249889442 (Il2CppObject * __this /* static, unused */, SqlBinary_t659323615  ___x, SqlBinary_t659323615  ___y, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlQualifiedName System.Data.SqlTypes.SqlBinary::GetXsdType(System.Xml.Schema.XmlSchemaSet)
extern "C"  XmlQualifiedName_t176365656 * SqlBinary_GetXsdType_m3955502968 (Il2CppObject * __this /* static, unused */, XmlSchemaSet_t3827173367 * ___schemaSet, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.SqlTypes.SqlBoolean System.Data.SqlTypes.SqlBinary::op_Equality(System.Data.SqlTypes.SqlBinary,System.Data.SqlTypes.SqlBinary)
extern "C"  SqlBoolean_t1393776170  SqlBinary_op_Equality_m664138406 (Il2CppObject * __this /* static, unused */, SqlBinary_t659323615  ___x, SqlBinary_t659323615  ___y, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct SqlBinary_t659323615;
struct SqlBinary_t659323615_marshaled_pinvoke;

extern "C" void SqlBinary_t659323615_marshal_pinvoke(const SqlBinary_t659323615& unmarshaled, SqlBinary_t659323615_marshaled_pinvoke& marshaled);
extern "C" void SqlBinary_t659323615_marshal_pinvoke_back(const SqlBinary_t659323615_marshaled_pinvoke& marshaled, SqlBinary_t659323615& unmarshaled);
extern "C" void SqlBinary_t659323615_marshal_pinvoke_cleanup(SqlBinary_t659323615_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct SqlBinary_t659323615;
struct SqlBinary_t659323615_marshaled_com;

extern "C" void SqlBinary_t659323615_marshal_com(const SqlBinary_t659323615& unmarshaled, SqlBinary_t659323615_marshaled_com& marshaled);
extern "C" void SqlBinary_t659323615_marshal_com_back(const SqlBinary_t659323615_marshaled_com& marshaled, SqlBinary_t659323615& unmarshaled);
extern "C" void SqlBinary_t659323615_marshal_com_cleanup(SqlBinary_t659323615_marshaled_com& marshaled);
