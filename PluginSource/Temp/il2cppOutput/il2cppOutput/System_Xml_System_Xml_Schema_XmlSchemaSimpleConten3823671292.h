#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Xml.Schema.XmlSchemaContent
struct XmlSchemaContent_t3086289934;

#include "System_Xml_System_Xml_Schema_XmlSchemaContentModel3724581365.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.XmlSchemaSimpleContent
struct  XmlSchemaSimpleContent_t3823671292  : public XmlSchemaContentModel_t3724581365
{
public:
	// System.Xml.Schema.XmlSchemaContent System.Xml.Schema.XmlSchemaSimpleContent::content
	XmlSchemaContent_t3086289934 * ___content_16;

public:
	inline static int32_t get_offset_of_content_16() { return static_cast<int32_t>(offsetof(XmlSchemaSimpleContent_t3823671292, ___content_16)); }
	inline XmlSchemaContent_t3086289934 * get_content_16() const { return ___content_16; }
	inline XmlSchemaContent_t3086289934 ** get_address_of_content_16() { return &___content_16; }
	inline void set_content_16(XmlSchemaContent_t3086289934 * value)
	{
		___content_16 = value;
		Il2CppCodeGenWriteBarrier(&___content_16, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
