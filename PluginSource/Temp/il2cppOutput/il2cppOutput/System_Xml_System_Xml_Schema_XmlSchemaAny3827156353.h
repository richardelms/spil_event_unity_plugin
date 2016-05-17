#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Xml.Schema.XmlSchemaAny
struct XmlSchemaAny_t3827156353;
// System.String
struct String_t;
// Mono.Xml.Schema.XsdWildcard
struct XsdWildcard_t323128660;

#include "System_Xml_System_Xml_Schema_XmlSchemaParticle3696384587.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaContentProce2298884609.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.XmlSchemaAny
struct  XmlSchemaAny_t3827156353  : public XmlSchemaParticle_t3696384587
{
public:
	// System.String System.Xml.Schema.XmlSchemaAny::nameSpace
	String_t* ___nameSpace_28;
	// System.Xml.Schema.XmlSchemaContentProcessing System.Xml.Schema.XmlSchemaAny::processing
	int32_t ___processing_29;
	// Mono.Xml.Schema.XsdWildcard System.Xml.Schema.XmlSchemaAny::wildcard
	XsdWildcard_t323128660 * ___wildcard_30;

public:
	inline static int32_t get_offset_of_nameSpace_28() { return static_cast<int32_t>(offsetof(XmlSchemaAny_t3827156353, ___nameSpace_28)); }
	inline String_t* get_nameSpace_28() const { return ___nameSpace_28; }
	inline String_t** get_address_of_nameSpace_28() { return &___nameSpace_28; }
	inline void set_nameSpace_28(String_t* value)
	{
		___nameSpace_28 = value;
		Il2CppCodeGenWriteBarrier(&___nameSpace_28, value);
	}

	inline static int32_t get_offset_of_processing_29() { return static_cast<int32_t>(offsetof(XmlSchemaAny_t3827156353, ___processing_29)); }
	inline int32_t get_processing_29() const { return ___processing_29; }
	inline int32_t* get_address_of_processing_29() { return &___processing_29; }
	inline void set_processing_29(int32_t value)
	{
		___processing_29 = value;
	}

	inline static int32_t get_offset_of_wildcard_30() { return static_cast<int32_t>(offsetof(XmlSchemaAny_t3827156353, ___wildcard_30)); }
	inline XsdWildcard_t323128660 * get_wildcard_30() const { return ___wildcard_30; }
	inline XsdWildcard_t323128660 ** get_address_of_wildcard_30() { return &___wildcard_30; }
	inline void set_wildcard_30(XsdWildcard_t323128660 * value)
	{
		___wildcard_30 = value;
		Il2CppCodeGenWriteBarrier(&___wildcard_30, value);
	}
};

struct XmlSchemaAny_t3827156353_StaticFields
{
public:
	// System.Xml.Schema.XmlSchemaAny System.Xml.Schema.XmlSchemaAny::anyTypeContent
	XmlSchemaAny_t3827156353 * ___anyTypeContent_27;

public:
	inline static int32_t get_offset_of_anyTypeContent_27() { return static_cast<int32_t>(offsetof(XmlSchemaAny_t3827156353_StaticFields, ___anyTypeContent_27)); }
	inline XmlSchemaAny_t3827156353 * get_anyTypeContent_27() const { return ___anyTypeContent_27; }
	inline XmlSchemaAny_t3827156353 ** get_address_of_anyTypeContent_27() { return &___anyTypeContent_27; }
	inline void set_anyTypeContent_27(XmlSchemaAny_t3827156353 * value)
	{
		___anyTypeContent_27 = value;
		Il2CppCodeGenWriteBarrier(&___anyTypeContent_27, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
