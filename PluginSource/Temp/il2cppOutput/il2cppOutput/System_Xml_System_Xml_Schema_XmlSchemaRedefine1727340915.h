#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Xml.Schema.XmlSchemaObjectTable
struct XmlSchemaObjectTable_t167066468;
// System.Xml.Schema.XmlSchemaObjectCollection
struct XmlSchemaObjectCollection_t2238201602;

#include "System_Xml_System_Xml_Schema_XmlSchemaExternal686772112.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.XmlSchemaRedefine
struct  XmlSchemaRedefine_t1727340915  : public XmlSchemaExternal_t686772112
{
public:
	// System.Xml.Schema.XmlSchemaObjectTable System.Xml.Schema.XmlSchemaRedefine::attributeGroups
	XmlSchemaObjectTable_t167066468 * ___attributeGroups_16;
	// System.Xml.Schema.XmlSchemaObjectTable System.Xml.Schema.XmlSchemaRedefine::groups
	XmlSchemaObjectTable_t167066468 * ___groups_17;
	// System.Xml.Schema.XmlSchemaObjectCollection System.Xml.Schema.XmlSchemaRedefine::items
	XmlSchemaObjectCollection_t2238201602 * ___items_18;
	// System.Xml.Schema.XmlSchemaObjectTable System.Xml.Schema.XmlSchemaRedefine::schemaTypes
	XmlSchemaObjectTable_t167066468 * ___schemaTypes_19;

public:
	inline static int32_t get_offset_of_attributeGroups_16() { return static_cast<int32_t>(offsetof(XmlSchemaRedefine_t1727340915, ___attributeGroups_16)); }
	inline XmlSchemaObjectTable_t167066468 * get_attributeGroups_16() const { return ___attributeGroups_16; }
	inline XmlSchemaObjectTable_t167066468 ** get_address_of_attributeGroups_16() { return &___attributeGroups_16; }
	inline void set_attributeGroups_16(XmlSchemaObjectTable_t167066468 * value)
	{
		___attributeGroups_16 = value;
		Il2CppCodeGenWriteBarrier(&___attributeGroups_16, value);
	}

	inline static int32_t get_offset_of_groups_17() { return static_cast<int32_t>(offsetof(XmlSchemaRedefine_t1727340915, ___groups_17)); }
	inline XmlSchemaObjectTable_t167066468 * get_groups_17() const { return ___groups_17; }
	inline XmlSchemaObjectTable_t167066468 ** get_address_of_groups_17() { return &___groups_17; }
	inline void set_groups_17(XmlSchemaObjectTable_t167066468 * value)
	{
		___groups_17 = value;
		Il2CppCodeGenWriteBarrier(&___groups_17, value);
	}

	inline static int32_t get_offset_of_items_18() { return static_cast<int32_t>(offsetof(XmlSchemaRedefine_t1727340915, ___items_18)); }
	inline XmlSchemaObjectCollection_t2238201602 * get_items_18() const { return ___items_18; }
	inline XmlSchemaObjectCollection_t2238201602 ** get_address_of_items_18() { return &___items_18; }
	inline void set_items_18(XmlSchemaObjectCollection_t2238201602 * value)
	{
		___items_18 = value;
		Il2CppCodeGenWriteBarrier(&___items_18, value);
	}

	inline static int32_t get_offset_of_schemaTypes_19() { return static_cast<int32_t>(offsetof(XmlSchemaRedefine_t1727340915, ___schemaTypes_19)); }
	inline XmlSchemaObjectTable_t167066468 * get_schemaTypes_19() const { return ___schemaTypes_19; }
	inline XmlSchemaObjectTable_t167066468 ** get_address_of_schemaTypes_19() { return &___schemaTypes_19; }
	inline void set_schemaTypes_19(XmlSchemaObjectTable_t167066468 * value)
	{
		___schemaTypes_19 = value;
		Il2CppCodeGenWriteBarrier(&___schemaTypes_19, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
