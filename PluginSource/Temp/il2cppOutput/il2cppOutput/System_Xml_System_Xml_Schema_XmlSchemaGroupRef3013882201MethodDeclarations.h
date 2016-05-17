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

// System.Xml.Schema.XmlSchemaGroupRef
struct XmlSchemaGroupRef_t3013882201;
// System.Xml.XmlQualifiedName
struct XmlQualifiedName_t176365656;
// System.Xml.Schema.XmlSchemaGroup
struct XmlSchemaGroup_t4080191508;
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
#include "System_Xml_System_Xml_Schema_ValidationEventHandle2777264566.h"
#include "System_Xml_System_Xml_Schema_XmlSchema1932230565.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaParticle3696384587.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaObjectTable167066468.h"
#include "mscorlib_System_Collections_ArrayList2121638921.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaReader2988870280.h"

// System.Void System.Xml.Schema.XmlSchemaGroupRef::.ctor()
extern "C"  void XmlSchemaGroupRef__ctor_m2534683116 (XmlSchemaGroupRef_t3013882201 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlQualifiedName System.Xml.Schema.XmlSchemaGroupRef::get_RefName()
extern "C"  XmlQualifiedName_t176365656 * XmlSchemaGroupRef_get_RefName_m2332893196 (XmlSchemaGroupRef_t3013882201 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaGroup System.Xml.Schema.XmlSchemaGroupRef::get_TargetGroup()
extern "C"  XmlSchemaGroup_t4080191508 * XmlSchemaGroupRef_get_TargetGroup_m2467041666 (XmlSchemaGroupRef_t3013882201 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.XmlSchemaGroupRef::Compile(System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C"  int32_t XmlSchemaGroupRef_Compile_m1441779786 (XmlSchemaGroupRef_t3013882201 * __this, ValidationEventHandler_t2777264566 * ___h, XmlSchema_t1932230565 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.XmlSchemaGroupRef::Validate(System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C"  int32_t XmlSchemaGroupRef_Validate_m2707431671 (XmlSchemaGroupRef_t3013882201 * __this, ValidationEventHandler_t2777264566 * ___h, XmlSchema_t1932230565 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaParticle System.Xml.Schema.XmlSchemaGroupRef::GetOptimizedParticle(System.Boolean)
extern "C"  XmlSchemaParticle_t3696384587 * XmlSchemaGroupRef_GetOptimizedParticle_m3964487418 (XmlSchemaGroupRef_t3013882201 * __this, bool ___isTop, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaGroupRef::ParticleEquals(System.Xml.Schema.XmlSchemaParticle)
extern "C"  bool XmlSchemaGroupRef_ParticleEquals_m2585487222 (XmlSchemaGroupRef_t3013882201 * __this, XmlSchemaParticle_t3696384587 * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaGroupRef::ValidateDerivationByRestriction(System.Xml.Schema.XmlSchemaParticle,System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema,System.Boolean)
extern "C"  bool XmlSchemaGroupRef_ValidateDerivationByRestriction_m654474973 (XmlSchemaGroupRef_t3013882201 * __this, XmlSchemaParticle_t3696384587 * ___baseParticle, ValidationEventHandler_t2777264566 * ___h, XmlSchema_t1932230565 * ___schema, bool ___raiseError, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaGroupRef::CheckRecursion(System.Int32,System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C"  void XmlSchemaGroupRef_CheckRecursion_m810306670 (XmlSchemaGroupRef_t3013882201 * __this, int32_t ___depth, ValidationEventHandler_t2777264566 * ___h, XmlSchema_t1932230565 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaGroupRef::ValidateUniqueParticleAttribution(System.Xml.Schema.XmlSchemaObjectTable,System.Collections.ArrayList,System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C"  void XmlSchemaGroupRef_ValidateUniqueParticleAttribution_m2327356152 (XmlSchemaGroupRef_t3013882201 * __this, XmlSchemaObjectTable_t167066468 * ___qnames, ArrayList_t2121638921 * ___nsNames, ValidationEventHandler_t2777264566 * ___h, XmlSchema_t1932230565 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaGroupRef::ValidateUniqueTypeAttribution(System.Xml.Schema.XmlSchemaObjectTable,System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C"  void XmlSchemaGroupRef_ValidateUniqueTypeAttribution_m1001718711 (XmlSchemaGroupRef_t3013882201 * __this, XmlSchemaObjectTable_t167066468 * ___labels, ValidationEventHandler_t2777264566 * ___h, XmlSchema_t1932230565 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaGroupRef System.Xml.Schema.XmlSchemaGroupRef::Read(System.Xml.Schema.XmlSchemaReader,System.Xml.Schema.ValidationEventHandler)
extern "C"  XmlSchemaGroupRef_t3013882201 * XmlSchemaGroupRef_Read_m3794167400 (Il2CppObject * __this /* static, unused */, XmlSchemaReader_t2988870280 * ___reader, ValidationEventHandler_t2777264566 * ___h, const MethodInfo* method) IL2CPP_METHOD_ATTR;
