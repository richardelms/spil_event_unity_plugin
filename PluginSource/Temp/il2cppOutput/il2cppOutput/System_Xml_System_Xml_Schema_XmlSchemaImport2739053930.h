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
// System.String
struct String_t;

#include "System_Xml_System_Xml_Schema_XmlSchemaExternal686772112.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.XmlSchemaImport
struct  XmlSchemaImport_t2739053930  : public XmlSchemaExternal_t686772112
{
public:
	// System.Xml.Schema.XmlSchemaAnnotation System.Xml.Schema.XmlSchemaImport::annotation
	XmlSchemaAnnotation_t1377046772 * ___annotation_16;
	// System.String System.Xml.Schema.XmlSchemaImport::nameSpace
	String_t* ___nameSpace_17;

public:
	inline static int32_t get_offset_of_annotation_16() { return static_cast<int32_t>(offsetof(XmlSchemaImport_t2739053930, ___annotation_16)); }
	inline XmlSchemaAnnotation_t1377046772 * get_annotation_16() const { return ___annotation_16; }
	inline XmlSchemaAnnotation_t1377046772 ** get_address_of_annotation_16() { return &___annotation_16; }
	inline void set_annotation_16(XmlSchemaAnnotation_t1377046772 * value)
	{
		___annotation_16 = value;
		Il2CppCodeGenWriteBarrier(&___annotation_16, value);
	}

	inline static int32_t get_offset_of_nameSpace_17() { return static_cast<int32_t>(offsetof(XmlSchemaImport_t2739053930, ___nameSpace_17)); }
	inline String_t* get_nameSpace_17() const { return ___nameSpace_17; }
	inline String_t** get_address_of_nameSpace_17() { return &___nameSpace_17; }
	inline void set_nameSpace_17(String_t* value)
	{
		___nameSpace_17 = value;
		Il2CppCodeGenWriteBarrier(&___nameSpace_17, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
