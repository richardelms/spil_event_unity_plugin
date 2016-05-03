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

// System.Xml.Schema.XmlSchemaAll
struct XmlSchemaAll_t3827156278;
// System.Xml.Schema.XmlSchemaObjectCollection
struct XmlSchemaObjectCollection_t2238201602;
// System.Xml.Schema.XmlSchemaObject
struct XmlSchemaObject_t2900481284;
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
#include "System_Xml_System_Xml_Schema_XmlSchemaObject2900481284.h"
#include "System_Xml_System_Xml_Schema_ValidationEventHandle2777264566.h"
#include "System_Xml_System_Xml_Schema_XmlSchema1932230565.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaParticle3696384587.h"
#include "mscorlib_System_Decimal1688557254.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaObjectTable167066468.h"
#include "mscorlib_System_Collections_ArrayList2121638921.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaReader2988870280.h"

// System.Void System.Xml.Schema.XmlSchemaAll::.ctor()
extern "C"  void XmlSchemaAll__ctor_m1074942309 (XmlSchemaAll_t3827156278 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaObjectCollection System.Xml.Schema.XmlSchemaAll::get_Items()
extern "C"  XmlSchemaObjectCollection_t2238201602 * XmlSchemaAll_get_Items_m2074651685 (XmlSchemaAll_t3827156278 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaAll::SetParent(System.Xml.Schema.XmlSchemaObject)
extern "C"  void XmlSchemaAll_SetParent_m187101283 (XmlSchemaAll_t3827156278 * __this, XmlSchemaObject_t2900481284 * ___parent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.XmlSchemaAll::Compile(System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C"  int32_t XmlSchemaAll_Compile_m3612335359 (XmlSchemaAll_t3827156278 * __this, ValidationEventHandler_t2777264566 * ___h, XmlSchema_t1932230565 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaParticle System.Xml.Schema.XmlSchemaAll::GetOptimizedParticle(System.Boolean)
extern "C"  XmlSchemaParticle_t3696384587 * XmlSchemaAll_GetOptimizedParticle_m2274467449 (XmlSchemaAll_t3827156278 * __this, bool ___isTop, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.XmlSchemaAll::Validate(System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C"  int32_t XmlSchemaAll_Validate_m1275177698 (XmlSchemaAll_t3827156278 * __this, ValidationEventHandler_t2777264566 * ___h, XmlSchema_t1932230565 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaAll::ComputeEmptiable()
extern "C"  void XmlSchemaAll_ComputeEmptiable_m1785978847 (XmlSchemaAll_t3827156278 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaAll::ValidateDerivationByRestriction(System.Xml.Schema.XmlSchemaParticle,System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema,System.Boolean)
extern "C"  bool XmlSchemaAll_ValidateDerivationByRestriction_m878677908 (XmlSchemaAll_t3827156278 * __this, XmlSchemaParticle_t3696384587 * ___baseParticle, ValidationEventHandler_t2777264566 * ___h, XmlSchema_t1932230565 * ___schema, bool ___raiseError, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Xml.Schema.XmlSchemaAll::GetMinEffectiveTotalRange()
extern "C"  Decimal_t1688557254  XmlSchemaAll_GetMinEffectiveTotalRange_m2609009096 (XmlSchemaAll_t3827156278 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaAll::ValidateUniqueParticleAttribution(System.Xml.Schema.XmlSchemaObjectTable,System.Collections.ArrayList,System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C"  void XmlSchemaAll_ValidateUniqueParticleAttribution_m1056811505 (XmlSchemaAll_t3827156278 * __this, XmlSchemaObjectTable_t167066468 * ___qnames, ArrayList_t2121638921 * ___nsNames, ValidationEventHandler_t2777264566 * ___h, XmlSchema_t1932230565 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaAll::ValidateUniqueTypeAttribution(System.Xml.Schema.XmlSchemaObjectTable,System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C"  void XmlSchemaAll_ValidateUniqueTypeAttribution_m3498055070 (XmlSchemaAll_t3827156278 * __this, XmlSchemaObjectTable_t167066468 * ___labels, ValidationEventHandler_t2777264566 * ___h, XmlSchema_t1932230565 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaAll System.Xml.Schema.XmlSchemaAll::Read(System.Xml.Schema.XmlSchemaReader,System.Xml.Schema.ValidationEventHandler)
extern "C"  XmlSchemaAll_t3827156278 * XmlSchemaAll_Read_m1303985470 (Il2CppObject * __this /* static, unused */, XmlSchemaReader_t2988870280 * ___reader, ValidationEventHandler_t2777264566 * ___h, const MethodInfo* method) IL2CPP_METHOD_ATTR;
