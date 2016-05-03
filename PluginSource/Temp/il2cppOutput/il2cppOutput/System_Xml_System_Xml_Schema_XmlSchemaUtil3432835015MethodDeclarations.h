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

// System.Xml.Schema.XmlSchemaObjectTable
struct XmlSchemaObjectTable_t167066468;
// System.Xml.Schema.XmlSchemaObject
struct XmlSchemaObject_t2900481284;
// System.Xml.XmlQualifiedName
struct XmlQualifiedName_t176365656;
// System.Xml.Schema.ValidationEventHandler
struct ValidationEventHandler_t2777264566;
// System.String
struct String_t;
// System.Collections.Hashtable
struct Hashtable_t3875263730;
// System.Xml.XmlParserContext
struct XmlParserContext_t3629084577;
// System.Xml.XmlReader
struct XmlReader_t4229084514;
// Mono.Xml.Schema.XsdAnySimpleType
struct XsdAnySimpleType_t8663200;
// System.Object
struct Il2CppObject;
// System.String[]
struct StringU5BU5D_t2956870243;
// System.Xml.XmlAttribute
struct XmlAttribute_t2022155821;
// System.Exception
struct Exception_t1967233988;
// System.Xml.Schema.XmlSchema
struct XmlSchema_t1932230565;
// System.Xml.Schema.XmlSchemaObjectCollection
struct XmlSchemaObjectCollection_t2238201602;
// System.Xml.Schema.XmlSchemaAnyAttribute
struct XmlSchemaAnyAttribute_t2163251669;
// System.Xml.Schema.XmlSchemaAttributeGroup
struct XmlSchemaAttributeGroup_t718386952;
// System.Xml.Schema.XmlSchemaAttribute
struct XmlSchemaAttribute_t1191708721;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaObjectTable167066468.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaObject2900481284.h"
#include "System_Xml_System_Xml_XmlQualifiedName176365656.h"
#include "System_Xml_System_Xml_Schema_ValidationEventHandle2777264566.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Collections_Hashtable3875263730.h"
#include "System_Xml_System_Xml_XmlReader4229084514.h"
#include "System_Xml_Mono_Xml_Schema_XsdAnySimpleType8663200.h"
#include "mscorlib_System_Object837106420.h"
#include "System_Xml_System_Xml_XmlAttribute2022155821.h"
#include "mscorlib_System_Exception1967233988.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaDerivationMe4042409021.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaForm3432383625.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaContentProce2298884609.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaUse3827175708.h"
#include "System_Xml_System_Xml_Schema_XmlSchema1932230565.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaObjectCollec2238201602.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaAnyAttribute2163251669.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaAttributeGrou718386952.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaAttribute1191708721.h"

// System.Void System.Xml.Schema.XmlSchemaUtil::.cctor()
extern "C"  void XmlSchemaUtil__cctor_m1976949167 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaUtil::AddToTable(System.Xml.Schema.XmlSchemaObjectTable,System.Xml.Schema.XmlSchemaObject,System.Xml.XmlQualifiedName,System.Xml.Schema.ValidationEventHandler)
extern "C"  void XmlSchemaUtil_AddToTable_m2489876554 (Il2CppObject * __this /* static, unused */, XmlSchemaObjectTable_t167066468 * ___table, XmlSchemaObject_t2900481284 * ___obj, XmlQualifiedName_t176365656 * ___qname, ValidationEventHandler_t2777264566 * ___h, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaUtil::CompileID(System.String,System.Xml.Schema.XmlSchemaObject,System.Collections.Hashtable,System.Xml.Schema.ValidationEventHandler)
extern "C"  void XmlSchemaUtil_CompileID_m3091706380 (Il2CppObject * __this /* static, unused */, String_t* ___id, XmlSchemaObject_t2900481284 * ___xso, Hashtable_t3875263730 * ___idCollection, ValidationEventHandler_t2777264566 * ___h, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaUtil::CheckAnyUri(System.String)
extern "C"  bool XmlSchemaUtil_CheckAnyUri_m4146910934 (Il2CppObject * __this /* static, unused */, String_t* ___uri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaUtil::CheckNormalizedString(System.String)
extern "C"  bool XmlSchemaUtil_CheckNormalizedString_m3757568398 (Il2CppObject * __this /* static, unused */, String_t* ___token, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaUtil::CheckNCName(System.String)
extern "C"  bool XmlSchemaUtil_CheckNCName_m1147251958 (Il2CppObject * __this /* static, unused */, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaUtil::CheckQName(System.Xml.XmlQualifiedName)
extern "C"  bool XmlSchemaUtil_CheckQName_m3611145498 (Il2CppObject * __this /* static, unused */, XmlQualifiedName_t176365656 * ___qname, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlParserContext System.Xml.Schema.XmlSchemaUtil::GetParserContext(System.Xml.XmlReader)
extern "C"  XmlParserContext_t3629084577 * XmlSchemaUtil_GetParserContext_m469864920 (Il2CppObject * __this /* static, unused */, XmlReader_t4229084514 * ___reader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaUtil::IsBuiltInDatatypeName(System.Xml.XmlQualifiedName)
extern "C"  bool XmlSchemaUtil_IsBuiltInDatatypeName_m3465375616 (Il2CppObject * __this /* static, unused */, XmlQualifiedName_t176365656 * ___qname, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaUtil::AreSchemaDatatypeEqual(Mono.Xml.Schema.XsdAnySimpleType,System.Object,Mono.Xml.Schema.XsdAnySimpleType,System.Object)
extern "C"  bool XmlSchemaUtil_AreSchemaDatatypeEqual_m3363616973 (Il2CppObject * __this /* static, unused */, XsdAnySimpleType_t8663200 * ___st1, Il2CppObject * ___v1, XsdAnySimpleType_t8663200 * ___st2, Il2CppObject * ___v2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaUtil::IsValidQName(System.String)
extern "C"  bool XmlSchemaUtil_IsValidQName_m1274079738 (Il2CppObject * __this /* static, unused */, String_t* ___qname, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.Xml.Schema.XmlSchemaUtil::SplitList(System.String)
extern "C"  StringU5BU5D_t2956870243* XmlSchemaUtil_SplitList_m739244845 (Il2CppObject * __this /* static, unused */, String_t* ___list, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaUtil::ReadUnhandledAttribute(System.Xml.XmlReader,System.Xml.Schema.XmlSchemaObject)
extern "C"  void XmlSchemaUtil_ReadUnhandledAttribute_m1450247805 (Il2CppObject * __this /* static, unused */, XmlReader_t4229084514 * ___reader, XmlSchemaObject_t2900481284 * ___xso, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaUtil::ParseWsdlArrayType(System.Xml.XmlReader,System.Xml.XmlAttribute)
extern "C"  void XmlSchemaUtil_ParseWsdlArrayType_m153752591 (Il2CppObject * __this /* static, unused */, XmlReader_t4229084514 * ___reader, XmlAttribute_t2022155821 * ___attr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaUtil::ReadBoolAttribute(System.Xml.XmlReader,System.Exception&)
extern "C"  bool XmlSchemaUtil_ReadBoolAttribute_m2558495378 (Il2CppObject * __this /* static, unused */, XmlReader_t4229084514 * ___reader, Exception_t1967233988 ** ___innerExcpetion, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaDerivationMethod System.Xml.Schema.XmlSchemaUtil::ReadDerivationAttribute(System.Xml.XmlReader,System.Exception&,System.String,System.Xml.Schema.XmlSchemaDerivationMethod)
extern "C"  int32_t XmlSchemaUtil_ReadDerivationAttribute_m3229061286 (Il2CppObject * __this /* static, unused */, XmlReader_t4229084514 * ___reader, Exception_t1967233988 ** ___innerExcpetion, String_t* ___name, int32_t ___allowed, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaDerivationMethod System.Xml.Schema.XmlSchemaUtil::AddFlag(System.Xml.Schema.XmlSchemaDerivationMethod,System.Xml.Schema.XmlSchemaDerivationMethod,System.Xml.Schema.XmlSchemaDerivationMethod)
extern "C"  int32_t XmlSchemaUtil_AddFlag_m4098650780 (Il2CppObject * __this /* static, unused */, int32_t ___dst, int32_t ___add, int32_t ___allowed, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaForm System.Xml.Schema.XmlSchemaUtil::ReadFormAttribute(System.Xml.XmlReader,System.Exception&)
extern "C"  int32_t XmlSchemaUtil_ReadFormAttribute_m3096485854 (Il2CppObject * __this /* static, unused */, XmlReader_t4229084514 * ___reader, Exception_t1967233988 ** ___innerExcpetion, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaContentProcessing System.Xml.Schema.XmlSchemaUtil::ReadProcessingAttribute(System.Xml.XmlReader,System.Exception&)
extern "C"  int32_t XmlSchemaUtil_ReadProcessingAttribute_m389093543 (Il2CppObject * __this /* static, unused */, XmlReader_t4229084514 * ___reader, Exception_t1967233988 ** ___innerExcpetion, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaUse System.Xml.Schema.XmlSchemaUtil::ReadUseAttribute(System.Xml.XmlReader,System.Exception&)
extern "C"  int32_t XmlSchemaUtil_ReadUseAttribute_m2305677272 (Il2CppObject * __this /* static, unused */, XmlReader_t4229084514 * ___reader, Exception_t1967233988 ** ___innerExcpetion, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlQualifiedName System.Xml.Schema.XmlSchemaUtil::ReadQNameAttribute(System.Xml.XmlReader,System.Exception&)
extern "C"  XmlQualifiedName_t176365656 * XmlSchemaUtil_ReadQNameAttribute_m2798992097 (Il2CppObject * __this /* static, unused */, XmlReader_t4229084514 * ___reader, Exception_t1967233988 ** ___innerEx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlQualifiedName System.Xml.Schema.XmlSchemaUtil::ToQName(System.Xml.XmlReader,System.String,System.Exception&)
extern "C"  XmlQualifiedName_t176365656 * XmlSchemaUtil_ToQName_m2651108472 (Il2CppObject * __this /* static, unused */, XmlReader_t4229084514 * ___reader, String_t* ___qnamestr, Exception_t1967233988 ** ___innerEx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.XmlSchemaUtil::ValidateAttributesResolved(System.Xml.Schema.XmlSchemaObjectTable,System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema,System.Xml.Schema.XmlSchemaObjectCollection,System.Xml.Schema.XmlSchemaAnyAttribute,System.Xml.Schema.XmlSchemaAnyAttribute&,System.Xml.Schema.XmlSchemaAttributeGroup,System.Boolean)
extern "C"  int32_t XmlSchemaUtil_ValidateAttributesResolved_m3831522979 (Il2CppObject * __this /* static, unused */, XmlSchemaObjectTable_t167066468 * ___attributesResolved, ValidationEventHandler_t2777264566 * ___h, XmlSchema_t1932230565 * ___schema, XmlSchemaObjectCollection_t2238201602 * ___attributes, XmlSchemaAnyAttribute_t2163251669 * ___anyAttribute, XmlSchemaAnyAttribute_t2163251669 ** ___anyAttributeUse, XmlSchemaAttributeGroup_t718386952 * ___redefined, bool ___skipEquivalent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaUtil::AreAttributesEqual(System.Xml.Schema.XmlSchemaAttribute,System.Xml.Schema.XmlSchemaAttribute)
extern "C"  bool XmlSchemaUtil_AreAttributesEqual_m2942570911 (Il2CppObject * __this /* static, unused */, XmlSchemaAttribute_t1191708721 * ___one, XmlSchemaAttribute_t1191708721 * ___another, const MethodInfo* method) IL2CPP_METHOD_ATTR;
