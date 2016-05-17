#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Xml.Schema.XmlSchemaAnnotation
struct XmlSchemaAnnotation_t1377046772;

#include "System_Xml_System_Xml_Schema_XmlSchemaExternal686772112.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.XmlSchemaInclude
struct  XmlSchemaInclude_t4077333565  : public XmlSchemaExternal_t686772112
{
public:
	// System.Xml.Schema.XmlSchemaAnnotation System.Xml.Schema.XmlSchemaInclude::annotation
	XmlSchemaAnnotation_t1377046772 * ___annotation_16;

public:
	inline static int32_t get_offset_of_annotation_16() { return static_cast<int32_t>(offsetof(XmlSchemaInclude_t4077333565, ___annotation_16)); }
	inline XmlSchemaAnnotation_t1377046772 * get_annotation_16() const { return ___annotation_16; }
	inline XmlSchemaAnnotation_t1377046772 ** get_address_of_annotation_16() { return &___annotation_16; }
	inline void set_annotation_16(XmlSchemaAnnotation_t1377046772 * value)
	{
		___annotation_16 = value;
		Il2CppCodeGenWriteBarrier(&___annotation_16, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
