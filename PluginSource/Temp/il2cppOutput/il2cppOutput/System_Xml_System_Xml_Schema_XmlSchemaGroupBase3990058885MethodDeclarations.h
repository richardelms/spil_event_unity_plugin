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

// System.Xml.Schema.XmlSchemaGroupBase
struct XmlSchemaGroupBase_t3990058885;
// System.Xml.Schema.XmlSchemaObjectCollection
struct XmlSchemaObjectCollection_t2238201602;
// System.Xml.Schema.XmlSchemaParticle
struct XmlSchemaParticle_t3696384587;
// System.Xml.Schema.ValidationEventHandler
struct ValidationEventHandler_t2777264566;
// System.Xml.Schema.XmlSchema
struct XmlSchema_t1932230565;
// System.Xml.Schema.XmlSchemaAny
struct XmlSchemaAny_t3827156353;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaGroupBase3990058885.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaParticle3696384587.h"
#include "System_Xml_System_Xml_Schema_ValidationEventHandle2777264566.h"
#include "System_Xml_System_Xml_Schema_XmlSchema1932230565.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaAny3827156353.h"

// System.Void System.Xml.Schema.XmlSchemaGroupBase::.ctor()
extern "C"  void XmlSchemaGroupBase__ctor_m2861941686 (XmlSchemaGroupBase_t3990058885 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaObjectCollection System.Xml.Schema.XmlSchemaGroupBase::get_CompiledItems()
extern "C"  XmlSchemaObjectCollection_t2238201602 * XmlSchemaGroupBase_get_CompiledItems_m2915752677 (XmlSchemaGroupBase_t3990058885 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaGroupBase::CopyOptimizedItems(System.Xml.Schema.XmlSchemaGroupBase)
extern "C"  void XmlSchemaGroupBase_CopyOptimizedItems_m3829116813 (XmlSchemaGroupBase_t3990058885 * __this, XmlSchemaGroupBase_t3990058885 * ___gb, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaGroupBase::ParticleEquals(System.Xml.Schema.XmlSchemaParticle)
extern "C"  bool XmlSchemaGroupBase_ParticleEquals_m2715389744 (XmlSchemaGroupBase_t3990058885 * __this, XmlSchemaParticle_t3696384587 * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaGroupBase::CheckRecursion(System.Int32,System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C"  void XmlSchemaGroupBase_CheckRecursion_m3784476088 (XmlSchemaGroupBase_t3990058885 * __this, int32_t ___depth, ValidationEventHandler_t2777264566 * ___h, XmlSchema_t1932230565 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaGroupBase::ValidateNSRecurseCheckCardinality(System.Xml.Schema.XmlSchemaAny,System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema,System.Boolean)
extern "C"  bool XmlSchemaGroupBase_ValidateNSRecurseCheckCardinality_m593398327 (XmlSchemaGroupBase_t3990058885 * __this, XmlSchemaAny_t3827156353 * ___any, ValidationEventHandler_t2777264566 * ___h, XmlSchema_t1932230565 * ___schema, bool ___raiseError, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaGroupBase::ValidateRecurse(System.Xml.Schema.XmlSchemaGroupBase,System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema,System.Boolean)
extern "C"  bool XmlSchemaGroupBase_ValidateRecurse_m2895814290 (XmlSchemaGroupBase_t3990058885 * __this, XmlSchemaGroupBase_t3990058885 * ___baseGroup, ValidationEventHandler_t2777264566 * ___h, XmlSchema_t1932230565 * ___schema, bool ___raiseError, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaGroupBase::ValidateSeqRecurseMapSumCommon(System.Xml.Schema.XmlSchemaGroupBase,System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema,System.Boolean,System.Boolean,System.Boolean)
extern "C"  bool XmlSchemaGroupBase_ValidateSeqRecurseMapSumCommon_m1310490371 (XmlSchemaGroupBase_t3990058885 * __this, XmlSchemaGroupBase_t3990058885 * ___baseGroup, ValidationEventHandler_t2777264566 * ___h, XmlSchema_t1932230565 * ___schema, bool ___isLax, bool ___isMapAndSum, bool ___raiseError, const MethodInfo* method) IL2CPP_METHOD_ATTR;
