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

// System.Xml.Schema.XmlSchemaParticle/EmptyParticle
struct EmptyParticle_t3294161619;
// System.Xml.Schema.XmlSchemaParticle
struct XmlSchemaParticle_t3696384587;
// System.Xml.Schema.ValidationEventHandler
struct ValidationEventHandler_t2777264566;
// System.Xml.Schema.XmlSchema
struct XmlSchema_t1932230565;
// System.Xml.Schema.XmlSchemaObjectTable
struct XmlSchemaObjectTable_t167066468;
// System.Collections.ArrayList
struct ArrayList_t2121638921;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaParticle3696384587.h"
#include "System_Xml_System_Xml_Schema_ValidationEventHandle2777264566.h"
#include "System_Xml_System_Xml_Schema_XmlSchema1932230565.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaObjectTable167066468.h"
#include "mscorlib_System_Collections_ArrayList2121638921.h"

// System.Void System.Xml.Schema.XmlSchemaParticle/EmptyParticle::.ctor()
extern "C"  void EmptyParticle__ctor_m3532038774 (EmptyParticle_t3294161619 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaParticle System.Xml.Schema.XmlSchemaParticle/EmptyParticle::GetOptimizedParticle(System.Boolean)
extern "C"  XmlSchemaParticle_t3696384587 * EmptyParticle_GetOptimizedParticle_m2860255152 (EmptyParticle_t3294161619 * __this, bool ___isTop, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaParticle/EmptyParticle::ParticleEquals(System.Xml.Schema.XmlSchemaParticle)
extern "C"  bool EmptyParticle_ParticleEquals_m4199711488 (EmptyParticle_t3294161619 * __this, XmlSchemaParticle_t3696384587 * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaParticle/EmptyParticle::ValidateDerivationByRestriction(System.Xml.Schema.XmlSchemaParticle,System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema,System.Boolean)
extern "C"  bool EmptyParticle_ValidateDerivationByRestriction_m2512912787 (EmptyParticle_t3294161619 * __this, XmlSchemaParticle_t3696384587 * ___baseParticle, ValidationEventHandler_t2777264566 * ___h, XmlSchema_t1932230565 * ___schema, bool ___raiseError, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaParticle/EmptyParticle::CheckRecursion(System.Int32,System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C"  void EmptyParticle_CheckRecursion_m29816 (EmptyParticle_t3294161619 * __this, int32_t ___depth, ValidationEventHandler_t2777264566 * ___h, XmlSchema_t1932230565 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaParticle/EmptyParticle::ValidateUniqueParticleAttribution(System.Xml.Schema.XmlSchemaObjectTable,System.Collections.ArrayList,System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C"  void EmptyParticle_ValidateUniqueParticleAttribution_m3840439938 (EmptyParticle_t3294161619 * __this, XmlSchemaObjectTable_t167066468 * ___qnames, ArrayList_t2121638921 * ___nsNames, ValidationEventHandler_t2777264566 * ___h, XmlSchema_t1932230565 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaParticle/EmptyParticle::ValidateUniqueTypeAttribution(System.Xml.Schema.XmlSchemaObjectTable,System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C"  void EmptyParticle_ValidateUniqueTypeAttribution_m3233935085 (EmptyParticle_t3294161619 * __this, XmlSchemaObjectTable_t167066468 * ___labels, ValidationEventHandler_t2777264566 * ___h, XmlSchema_t1932230565 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
