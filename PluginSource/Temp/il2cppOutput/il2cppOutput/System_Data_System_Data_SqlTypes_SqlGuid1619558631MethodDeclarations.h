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
#include "System_Data_System_Data_SqlTypes_SqlGuid1619558631.h"
#include "System_Xml_System_Xml_XmlReader4229084514.h"
#include "System_Xml_System_Xml_XmlWriter89522450.h"
#include "mscorlib_System_Guid2778838590.h"
#include "mscorlib_System_Object837106420.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaSet3827173367.h"
#include "System_Data_System_Data_SqlTypes_SqlBoolean1393776170.h"
#include "System_Data_System_Data_SqlTypes_SqlBinary659323615.h"

// System.Void System.Data.SqlTypes.SqlGuid::.ctor(System.Byte[])
extern "C"  void SqlGuid__ctor_m3229206156 (SqlGuid_t1619558631 * __this, ByteU5BU5D_t58506160* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchema System.Data.SqlTypes.SqlGuid::System.Xml.Serialization.IXmlSerializable.GetSchema()
extern "C"  XmlSchema_t1932230565 * SqlGuid_System_Xml_Serialization_IXmlSerializable_GetSchema_m2517261747 (SqlGuid_t1619558631 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.SqlTypes.SqlGuid::System.Xml.Serialization.IXmlSerializable.ReadXml(System.Xml.XmlReader)
extern "C"  void SqlGuid_System_Xml_Serialization_IXmlSerializable_ReadXml_m2701235723 (SqlGuid_t1619558631 * __this, XmlReader_t4229084514 * ___reader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.SqlTypes.SqlGuid::System.Xml.Serialization.IXmlSerializable.WriteXml(System.Xml.XmlWriter)
extern "C"  void SqlGuid_System_Xml_Serialization_IXmlSerializable_WriteXml_m3157923960 (SqlGuid_t1619558631 * __this, XmlWriter_t89522450 * ___writer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.SqlTypes.SqlGuid::get_IsNull()
extern "C"  bool SqlGuid_get_IsNull_m479158379 (SqlGuid_t1619558631 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Guid System.Data.SqlTypes.SqlGuid::get_Value()
extern "C"  Guid_t2778838590  SqlGuid_get_Value_m2990783608 (SqlGuid_t1619558631 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.SqlTypes.SqlGuid::CompareTo(System.Object)
extern "C"  int32_t SqlGuid_CompareTo_m3536255389 (SqlGuid_t1619558631 * __this, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.SqlTypes.SqlGuid::CompareTo(System.Data.SqlTypes.SqlGuid)
extern "C"  int32_t SqlGuid_CompareTo_m478732894 (SqlGuid_t1619558631 * __this, SqlGuid_t1619558631  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.SqlTypes.SqlGuid::Equals(System.Object)
extern "C"  bool SqlGuid_Equals_m70871940 (SqlGuid_t1619558631 * __this, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.SqlTypes.SqlGuid::GetHashCode()
extern "C"  int32_t SqlGuid_GetHashCode_m3610965736 (SqlGuid_t1619558631 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Data.SqlTypes.SqlGuid::ToByteArray()
extern "C"  ByteU5BU5D_t58506160* SqlGuid_ToByteArray_m1368418951 (SqlGuid_t1619558631 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Data.SqlTypes.SqlGuid::ToString()
extern "C"  String_t* SqlGuid_ToString_m3484639126 (SqlGuid_t1619558631 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlQualifiedName System.Data.SqlTypes.SqlGuid::GetXsdType(System.Xml.Schema.XmlSchemaSet)
extern "C"  XmlQualifiedName_t176365656 * SqlGuid_GetXsdType_m1086552192 (Il2CppObject * __this /* static, unused */, XmlSchemaSet_t3827173367 * ___schemaSet, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.SqlTypes.SqlBoolean System.Data.SqlTypes.SqlGuid::op_Equality(System.Data.SqlTypes.SqlGuid,System.Data.SqlTypes.SqlGuid)
extern "C"  SqlBoolean_t1393776170  SqlGuid_op_Equality_m3578273774 (Il2CppObject * __this /* static, unused */, SqlGuid_t1619558631  ___x, SqlGuid_t1619558631  ___y, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.SqlTypes.SqlGuid System.Data.SqlTypes.SqlGuid::op_Explicit(System.Data.SqlTypes.SqlBinary)
extern "C"  SqlGuid_t1619558631  SqlGuid_op_Explicit_m2103750210 (Il2CppObject * __this /* static, unused */, SqlBinary_t659323615  ___x, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct SqlGuid_t1619558631;
struct SqlGuid_t1619558631_marshaled_pinvoke;

extern "C" void SqlGuid_t1619558631_marshal_pinvoke(const SqlGuid_t1619558631& unmarshaled, SqlGuid_t1619558631_marshaled_pinvoke& marshaled);
extern "C" void SqlGuid_t1619558631_marshal_pinvoke_back(const SqlGuid_t1619558631_marshaled_pinvoke& marshaled, SqlGuid_t1619558631& unmarshaled);
extern "C" void SqlGuid_t1619558631_marshal_pinvoke_cleanup(SqlGuid_t1619558631_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct SqlGuid_t1619558631;
struct SqlGuid_t1619558631_marshaled_com;

extern "C" void SqlGuid_t1619558631_marshal_com(const SqlGuid_t1619558631& unmarshaled, SqlGuid_t1619558631_marshaled_com& marshaled);
extern "C" void SqlGuid_t1619558631_marshal_com_back(const SqlGuid_t1619558631_marshaled_com& marshaled, SqlGuid_t1619558631& unmarshaled);
extern "C" void SqlGuid_t1619558631_marshal_com_cleanup(SqlGuid_t1619558631_marshaled_com& marshaled);
