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

// System.Xml.Schema.XmlSchemaAny
struct XmlSchemaAny_t3827156353;
// System.String
struct String_t;
// System.Collections.Specialized.StringCollection
struct StringCollection_t604413498;
// System.Xml.Schema.ValidationEventHandler
struct ValidationEventHandler_t2777264566;
// System.Xml.Schema.XmlSchema
struct XmlSchema_t1932230565;
// System.Xml.Schema.XmlSchemaParticle
struct XmlSchemaParticle_t3696384587;
// System.Xml.Schema.XmlSchemaObjectTable
struct XmlSchemaObjectTable_t167066468;
// System.Collections.ArrayList
struct ArrayList_t2121638921;
// System.Xml.Schema.XmlSchemaReader
struct XmlSchemaReader_t2988870280;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaContentProce2298884609.h"
#include "System_Xml_System_Xml_Schema_ValidationEventHandle2777264566.h"
#include "System_Xml_System_Xml_Schema_XmlSchema1932230565.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaParticle3696384587.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaAny3827156353.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaObjectTable167066468.h"
#include "mscorlib_System_Collections_ArrayList2121638921.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaReader2988870280.h"

// System.Void System.Xml.Schema.XmlSchemaAny::.ctor()
extern "C"  void XmlSchemaAny__ctor_m3516298618 (XmlSchemaAny_t3827156353 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaAny System.Xml.Schema.XmlSchemaAny::get_AnyTypeContent()
extern "C"  XmlSchemaAny_t3827156353 * XmlSchemaAny_get_AnyTypeContent_m2289356428 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Schema.XmlSchemaAny::get_Namespace()
extern "C"  String_t* XmlSchemaAny_get_Namespace_m141846471 (XmlSchemaAny_t3827156353 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaAny::set_Namespace(System.String)
extern "C"  void XmlSchemaAny_set_Namespace_m63374572 (XmlSchemaAny_t3827156353 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaContentProcessing System.Xml.Schema.XmlSchemaAny::get_ProcessContents()
extern "C"  int32_t XmlSchemaAny_get_ProcessContents_m3153294066 (XmlSchemaAny_t3827156353 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaAny::set_ProcessContents(System.Xml.Schema.XmlSchemaContentProcessing)
extern "C"  void XmlSchemaAny_set_ProcessContents_m102151801 (XmlSchemaAny_t3827156353 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaAny::get_HasValueAny()
extern "C"  bool XmlSchemaAny_get_HasValueAny_m2985981404 (XmlSchemaAny_t3827156353 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaAny::get_HasValueLocal()
extern "C"  bool XmlSchemaAny_get_HasValueLocal_m1672656859 (XmlSchemaAny_t3827156353 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaAny::get_HasValueOther()
extern "C"  bool XmlSchemaAny_get_HasValueOther_m188088896 (XmlSchemaAny_t3827156353 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaAny::get_HasValueTargetNamespace()
extern "C"  bool XmlSchemaAny_get_HasValueTargetNamespace_m68551866 (XmlSchemaAny_t3827156353 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Specialized.StringCollection System.Xml.Schema.XmlSchemaAny::get_ResolvedNamespaces()
extern "C"  StringCollection_t604413498 * XmlSchemaAny_get_ResolvedNamespaces_m3582517194 (XmlSchemaAny_t3827156353 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaContentProcessing System.Xml.Schema.XmlSchemaAny::get_ResolvedProcessContents()
extern "C"  int32_t XmlSchemaAny_get_ResolvedProcessContents_m59137498 (XmlSchemaAny_t3827156353 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Schema.XmlSchemaAny::get_TargetNamespace()
extern "C"  String_t* XmlSchemaAny_get_TargetNamespace_m2605686070 (XmlSchemaAny_t3827156353 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.XmlSchemaAny::Compile(System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C"  int32_t XmlSchemaAny_Compile_m3718165844 (XmlSchemaAny_t3827156353 * __this, ValidationEventHandler_t2777264566 * ___h, XmlSchema_t1932230565 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaParticle System.Xml.Schema.XmlSchemaAny::GetOptimizedParticle(System.Boolean)
extern "C"  XmlSchemaParticle_t3696384587 * XmlSchemaAny_GetOptimizedParticle_m1792675460 (XmlSchemaAny_t3827156353 * __this, bool ___isTop, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.XmlSchemaAny::Validate(System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C"  int32_t XmlSchemaAny_Validate_m260955437 (XmlSchemaAny_t3827156353 * __this, ValidationEventHandler_t2777264566 * ___h, XmlSchema_t1932230565 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaAny::ParticleEquals(System.Xml.Schema.XmlSchemaParticle)
extern "C"  bool XmlSchemaAny_ParticleEquals_m1040598260 (XmlSchemaAny_t3827156353 * __this, XmlSchemaParticle_t3696384587 * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaAny::ExamineAttributeWildcardIntersection(System.Xml.Schema.XmlSchemaAny,System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C"  bool XmlSchemaAny_ExamineAttributeWildcardIntersection_m298519948 (XmlSchemaAny_t3827156353 * __this, XmlSchemaAny_t3827156353 * ___other, ValidationEventHandler_t2777264566 * ___h, XmlSchema_t1932230565 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaAny::ValidateDerivationByRestriction(System.Xml.Schema.XmlSchemaParticle,System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema,System.Boolean)
extern "C"  bool XmlSchemaAny_ValidateDerivationByRestriction_m3242969119 (XmlSchemaAny_t3827156353 * __this, XmlSchemaParticle_t3696384587 * ___baseParticle, ValidationEventHandler_t2777264566 * ___h, XmlSchema_t1932230565 * ___schema, bool ___raiseError, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaAny::CheckRecursion(System.Int32,System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C"  void XmlSchemaAny_CheckRecursion_m1773185660 (XmlSchemaAny_t3827156353 * __this, int32_t ___depth, ValidationEventHandler_t2777264566 * ___h, XmlSchema_t1932230565 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaAny::ValidateUniqueParticleAttribution(System.Xml.Schema.XmlSchemaObjectTable,System.Collections.ArrayList,System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C"  void XmlSchemaAny_ValidateUniqueParticleAttribution_m4267038598 (XmlSchemaAny_t3827156353 * __this, XmlSchemaObjectTable_t167066468 * ___qnames, ArrayList_t2121638921 * ___nsNames, ValidationEventHandler_t2777264566 * ___h, XmlSchema_t1932230565 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaAny::ValidateUniqueTypeAttribution(System.Xml.Schema.XmlSchemaObjectTable,System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C"  void XmlSchemaAny_ValidateUniqueTypeAttribution_m1943752041 (XmlSchemaAny_t3827156353 * __this, XmlSchemaObjectTable_t167066468 * ___labels, ValidationEventHandler_t2777264566 * ___h, XmlSchema_t1932230565 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaAny::ValidateWildcardAllowsNamespaceName(System.String,System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema,System.Boolean)
extern "C"  bool XmlSchemaAny_ValidateWildcardAllowsNamespaceName_m4222495922 (XmlSchemaAny_t3827156353 * __this, String_t* ___ns, ValidationEventHandler_t2777264566 * ___h, XmlSchema_t1932230565 * ___schema, bool ___raiseError, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaAny System.Xml.Schema.XmlSchemaAny::Read(System.Xml.Schema.XmlSchemaReader,System.Xml.Schema.ValidationEventHandler)
extern "C"  XmlSchemaAny_t3827156353 * XmlSchemaAny_Read_m1502776286 (Il2CppObject * __this /* static, unused */, XmlSchemaReader_t2988870280 * ___reader, ValidationEventHandler_t2777264566 * ___h, const MethodInfo* method) IL2CPP_METHOD_ATTR;
