#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Xml.XmlQualifiedName
struct XmlQualifiedName_t176365656;
// System.Xml.Schema.XmlSchemaIdentityConstraint
struct XmlSchemaIdentityConstraint_t3473808128;

#include "System_Xml_System_Xml_Schema_XmlSchemaIdentityCons3473808128.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.XmlSchemaKeyref
struct  XmlSchemaKeyref_t2789194649  : public XmlSchemaIdentityConstraint_t3473808128
{
public:
	// System.Xml.XmlQualifiedName System.Xml.Schema.XmlSchemaKeyref::refer
	XmlQualifiedName_t176365656 * ___refer_21;
	// System.Xml.Schema.XmlSchemaIdentityConstraint System.Xml.Schema.XmlSchemaKeyref::target
	XmlSchemaIdentityConstraint_t3473808128 * ___target_22;

public:
	inline static int32_t get_offset_of_refer_21() { return static_cast<int32_t>(offsetof(XmlSchemaKeyref_t2789194649, ___refer_21)); }
	inline XmlQualifiedName_t176365656 * get_refer_21() const { return ___refer_21; }
	inline XmlQualifiedName_t176365656 ** get_address_of_refer_21() { return &___refer_21; }
	inline void set_refer_21(XmlQualifiedName_t176365656 * value)
	{
		___refer_21 = value;
		Il2CppCodeGenWriteBarrier(&___refer_21, value);
	}

	inline static int32_t get_offset_of_target_22() { return static_cast<int32_t>(offsetof(XmlSchemaKeyref_t2789194649, ___target_22)); }
	inline XmlSchemaIdentityConstraint_t3473808128 * get_target_22() const { return ___target_22; }
	inline XmlSchemaIdentityConstraint_t3473808128 ** get_address_of_target_22() { return &___target_22; }
	inline void set_target_22(XmlSchemaIdentityConstraint_t3473808128 * value)
	{
		___target_22 = value;
		Il2CppCodeGenWriteBarrier(&___target_22, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
