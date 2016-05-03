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

// System.Xml.Schema.XmlSchemaParticle
struct XmlSchemaParticle_t3696384587;
// System.String
struct String_t;
// System.Xml.Schema.ValidationEventHandler
struct ValidationEventHandler_t2777264566;
// System.Xml.Schema.XmlSchema
struct XmlSchema_t1932230565;
// System.Xml.Schema.XmlSchemaObjectTable
struct XmlSchemaObjectTable_t167066468;
// System.Collections.ArrayList
struct ArrayList_t2121638921;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Decimal1688557254.h"
#include "System_Xml_System_Xml_Schema_ValidationEventHandle2777264566.h"
#include "System_Xml_System_Xml_Schema_XmlSchema1932230565.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaParticle3696384587.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaObjectTable167066468.h"
#include "mscorlib_System_Collections_ArrayList2121638921.h"

// System.Void System.Xml.Schema.XmlSchemaParticle::.ctor()
extern "C"  void XmlSchemaParticle__ctor_m3107977530 (XmlSchemaParticle_t3696384587 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaParticle System.Xml.Schema.XmlSchemaParticle::get_Empty()
extern "C"  XmlSchemaParticle_t3696384587 * XmlSchemaParticle_get_Empty_m2394997992 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Schema.XmlSchemaParticle::get_MinOccursString()
extern "C"  String_t* XmlSchemaParticle_get_MinOccursString_m3840204348 (XmlSchemaParticle_t3696384587 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaParticle::set_MinOccursString(System.String)
extern "C"  void XmlSchemaParticle_set_MinOccursString_m2908863933 (XmlSchemaParticle_t3696384587 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Schema.XmlSchemaParticle::get_MaxOccursString()
extern "C"  String_t* XmlSchemaParticle_get_MaxOccursString_m1525159374 (XmlSchemaParticle_t3696384587 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaParticle::set_MaxOccursString(System.String)
extern "C"  void XmlSchemaParticle_set_MaxOccursString_m3406619499 (XmlSchemaParticle_t3696384587 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Xml.Schema.XmlSchemaParticle::get_MinOccurs()
extern "C"  Decimal_t1688557254  XmlSchemaParticle_get_MinOccurs_m2470369063 (XmlSchemaParticle_t3696384587 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaParticle::set_MinOccurs(System.Decimal)
extern "C"  void XmlSchemaParticle_set_MinOccurs_m2387084322 (XmlSchemaParticle_t3696384587 * __this, Decimal_t1688557254  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Xml.Schema.XmlSchemaParticle::get_MaxOccurs()
extern "C"  Decimal_t1688557254  XmlSchemaParticle_get_MaxOccurs_m3147801657 (XmlSchemaParticle_t3696384587 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaParticle::set_MaxOccurs(System.Decimal)
extern "C"  void XmlSchemaParticle_set_MaxOccurs_m2485881268 (XmlSchemaParticle_t3696384587 * __this, Decimal_t1688557254  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Xml.Schema.XmlSchemaParticle::get_ValidatedMinOccurs()
extern "C"  Decimal_t1688557254  XmlSchemaParticle_get_ValidatedMinOccurs_m3003670527 (XmlSchemaParticle_t3696384587 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Xml.Schema.XmlSchemaParticle::get_ValidatedMaxOccurs()
extern "C"  Decimal_t1688557254  XmlSchemaParticle_get_ValidatedMaxOccurs_m3681103121 (XmlSchemaParticle_t3696384587 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaParticle System.Xml.Schema.XmlSchemaParticle::GetOptimizedParticle(System.Boolean)
extern "C"  XmlSchemaParticle_t3696384587 * XmlSchemaParticle_GetOptimizedParticle_m1275538028 (XmlSchemaParticle_t3696384587 * __this, bool ___isTop, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaParticle System.Xml.Schema.XmlSchemaParticle::GetShallowClone()
extern "C"  XmlSchemaParticle_t3696384587 * XmlSchemaParticle_GetShallowClone_m3030888163 (XmlSchemaParticle_t3696384587 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaParticle::CompileOccurence(System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C"  void XmlSchemaParticle_CompileOccurence_m2116634681 (XmlSchemaParticle_t3696384587 * __this, ValidationEventHandler_t2777264566 * ___h, XmlSchema_t1932230565 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaParticle::CopyInfo(System.Xml.Schema.XmlSchemaParticle)
extern "C"  void XmlSchemaParticle_CopyInfo_m795056094 (XmlSchemaParticle_t3696384587 * __this, XmlSchemaParticle_t3696384587 * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaParticle::ValidateOccurenceRangeOK(System.Xml.Schema.XmlSchemaParticle,System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema,System.Boolean)
extern "C"  bool XmlSchemaParticle_ValidateOccurenceRangeOK_m898215581 (XmlSchemaParticle_t3696384587 * __this, XmlSchemaParticle_t3696384587 * ___other, ValidationEventHandler_t2777264566 * ___h, XmlSchema_t1932230565 * ___schema, bool ___raiseError, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Xml.Schema.XmlSchemaParticle::GetMinEffectiveTotalRange()
extern "C"  Decimal_t1688557254  XmlSchemaParticle_GetMinEffectiveTotalRange_m1371005051 (XmlSchemaParticle_t3696384587 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Xml.Schema.XmlSchemaParticle::GetMinEffectiveTotalRangeAllAndSequence()
extern "C"  Decimal_t1688557254  XmlSchemaParticle_GetMinEffectiveTotalRangeAllAndSequence_m4161498034 (XmlSchemaParticle_t3696384587 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaParticle::ValidateIsEmptiable()
extern "C"  bool XmlSchemaParticle_ValidateIsEmptiable_m2429188983 (XmlSchemaParticle_t3696384587 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaParticle::ValidateDerivationByRestriction(System.Xml.Schema.XmlSchemaParticle,System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema,System.Boolean)
extern "C"  bool XmlSchemaParticle_ValidateDerivationByRestriction_m2560056655 (XmlSchemaParticle_t3696384587 * __this, XmlSchemaParticle_t3696384587 * ___baseParticle, ValidationEventHandler_t2777264566 * ___h, XmlSchema_t1932230565 * ___schema, bool ___raiseError, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaParticle::ValidateUniqueParticleAttribution(System.Xml.Schema.XmlSchemaObjectTable,System.Collections.ArrayList,System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C"  void XmlSchemaParticle_ValidateUniqueParticleAttribution_m3869014854 (XmlSchemaParticle_t3696384587 * __this, XmlSchemaObjectTable_t167066468 * ___qnames, ArrayList_t2121638921 * ___nsNames, ValidationEventHandler_t2777264566 * ___h, XmlSchema_t1932230565 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaParticle::ValidateUniqueTypeAttribution(System.Xml.Schema.XmlSchemaObjectTable,System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C"  void XmlSchemaParticle_ValidateUniqueTypeAttribution_m2566009257 (XmlSchemaParticle_t3696384587 * __this, XmlSchemaObjectTable_t167066468 * ___labels, ValidationEventHandler_t2777264566 * ___h, XmlSchema_t1932230565 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaParticle::CheckRecursion(System.Int32,System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C"  void XmlSchemaParticle_CheckRecursion_m1006304828 (XmlSchemaParticle_t3696384587 * __this, int32_t ___depth, ValidationEventHandler_t2777264566 * ___h, XmlSchema_t1932230565 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaParticle::ParticleEquals(System.Xml.Schema.XmlSchemaParticle)
extern "C"  bool XmlSchemaParticle_ParticleEquals_m2079584708 (XmlSchemaParticle_t3696384587 * __this, XmlSchemaParticle_t3696384587 * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
