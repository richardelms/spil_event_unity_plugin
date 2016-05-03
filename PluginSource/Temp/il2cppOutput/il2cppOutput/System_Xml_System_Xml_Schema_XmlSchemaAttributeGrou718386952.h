#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Xml.Schema.XmlSchemaAnyAttribute
struct XmlSchemaAnyAttribute_t2163251669;
// System.Xml.Schema.XmlSchemaObjectCollection
struct XmlSchemaObjectCollection_t2238201602;
// System.String
struct String_t;
// System.Xml.Schema.XmlSchemaAttributeGroup
struct XmlSchemaAttributeGroup_t718386952;
// System.Xml.XmlQualifiedName
struct XmlQualifiedName_t176365656;
// System.Xml.Schema.XmlSchemaObjectTable
struct XmlSchemaObjectTable_t167066468;

#include "System_Xml_System_Xml_Schema_XmlSchemaAnnotated2513933869.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.XmlSchemaAttributeGroup
struct  XmlSchemaAttributeGroup_t718386952  : public XmlSchemaAnnotated_t2513933869
{
public:
	// System.Xml.Schema.XmlSchemaAnyAttribute System.Xml.Schema.XmlSchemaAttributeGroup::anyAttribute
	XmlSchemaAnyAttribute_t2163251669 * ___anyAttribute_16;
	// System.Xml.Schema.XmlSchemaObjectCollection System.Xml.Schema.XmlSchemaAttributeGroup::attributes
	XmlSchemaObjectCollection_t2238201602 * ___attributes_17;
	// System.String System.Xml.Schema.XmlSchemaAttributeGroup::name
	String_t* ___name_18;
	// System.Xml.Schema.XmlSchemaAttributeGroup System.Xml.Schema.XmlSchemaAttributeGroup::redefined
	XmlSchemaAttributeGroup_t718386952 * ___redefined_19;
	// System.Xml.XmlQualifiedName System.Xml.Schema.XmlSchemaAttributeGroup::qualifiedName
	XmlQualifiedName_t176365656 * ___qualifiedName_20;
	// System.Xml.Schema.XmlSchemaObjectTable System.Xml.Schema.XmlSchemaAttributeGroup::attributeUses
	XmlSchemaObjectTable_t167066468 * ___attributeUses_21;
	// System.Xml.Schema.XmlSchemaAnyAttribute System.Xml.Schema.XmlSchemaAttributeGroup::anyAttributeUse
	XmlSchemaAnyAttribute_t2163251669 * ___anyAttributeUse_22;
	// System.Boolean System.Xml.Schema.XmlSchemaAttributeGroup::AttributeGroupRecursionCheck
	bool ___AttributeGroupRecursionCheck_23;

public:
	inline static int32_t get_offset_of_anyAttribute_16() { return static_cast<int32_t>(offsetof(XmlSchemaAttributeGroup_t718386952, ___anyAttribute_16)); }
	inline XmlSchemaAnyAttribute_t2163251669 * get_anyAttribute_16() const { return ___anyAttribute_16; }
	inline XmlSchemaAnyAttribute_t2163251669 ** get_address_of_anyAttribute_16() { return &___anyAttribute_16; }
	inline void set_anyAttribute_16(XmlSchemaAnyAttribute_t2163251669 * value)
	{
		___anyAttribute_16 = value;
		Il2CppCodeGenWriteBarrier(&___anyAttribute_16, value);
	}

	inline static int32_t get_offset_of_attributes_17() { return static_cast<int32_t>(offsetof(XmlSchemaAttributeGroup_t718386952, ___attributes_17)); }
	inline XmlSchemaObjectCollection_t2238201602 * get_attributes_17() const { return ___attributes_17; }
	inline XmlSchemaObjectCollection_t2238201602 ** get_address_of_attributes_17() { return &___attributes_17; }
	inline void set_attributes_17(XmlSchemaObjectCollection_t2238201602 * value)
	{
		___attributes_17 = value;
		Il2CppCodeGenWriteBarrier(&___attributes_17, value);
	}

	inline static int32_t get_offset_of_name_18() { return static_cast<int32_t>(offsetof(XmlSchemaAttributeGroup_t718386952, ___name_18)); }
	inline String_t* get_name_18() const { return ___name_18; }
	inline String_t** get_address_of_name_18() { return &___name_18; }
	inline void set_name_18(String_t* value)
	{
		___name_18 = value;
		Il2CppCodeGenWriteBarrier(&___name_18, value);
	}

	inline static int32_t get_offset_of_redefined_19() { return static_cast<int32_t>(offsetof(XmlSchemaAttributeGroup_t718386952, ___redefined_19)); }
	inline XmlSchemaAttributeGroup_t718386952 * get_redefined_19() const { return ___redefined_19; }
	inline XmlSchemaAttributeGroup_t718386952 ** get_address_of_redefined_19() { return &___redefined_19; }
	inline void set_redefined_19(XmlSchemaAttributeGroup_t718386952 * value)
	{
		___redefined_19 = value;
		Il2CppCodeGenWriteBarrier(&___redefined_19, value);
	}

	inline static int32_t get_offset_of_qualifiedName_20() { return static_cast<int32_t>(offsetof(XmlSchemaAttributeGroup_t718386952, ___qualifiedName_20)); }
	inline XmlQualifiedName_t176365656 * get_qualifiedName_20() const { return ___qualifiedName_20; }
	inline XmlQualifiedName_t176365656 ** get_address_of_qualifiedName_20() { return &___qualifiedName_20; }
	inline void set_qualifiedName_20(XmlQualifiedName_t176365656 * value)
	{
		___qualifiedName_20 = value;
		Il2CppCodeGenWriteBarrier(&___qualifiedName_20, value);
	}

	inline static int32_t get_offset_of_attributeUses_21() { return static_cast<int32_t>(offsetof(XmlSchemaAttributeGroup_t718386952, ___attributeUses_21)); }
	inline XmlSchemaObjectTable_t167066468 * get_attributeUses_21() const { return ___attributeUses_21; }
	inline XmlSchemaObjectTable_t167066468 ** get_address_of_attributeUses_21() { return &___attributeUses_21; }
	inline void set_attributeUses_21(XmlSchemaObjectTable_t167066468 * value)
	{
		___attributeUses_21 = value;
		Il2CppCodeGenWriteBarrier(&___attributeUses_21, value);
	}

	inline static int32_t get_offset_of_anyAttributeUse_22() { return static_cast<int32_t>(offsetof(XmlSchemaAttributeGroup_t718386952, ___anyAttributeUse_22)); }
	inline XmlSchemaAnyAttribute_t2163251669 * get_anyAttributeUse_22() const { return ___anyAttributeUse_22; }
	inline XmlSchemaAnyAttribute_t2163251669 ** get_address_of_anyAttributeUse_22() { return &___anyAttributeUse_22; }
	inline void set_anyAttributeUse_22(XmlSchemaAnyAttribute_t2163251669 * value)
	{
		___anyAttributeUse_22 = value;
		Il2CppCodeGenWriteBarrier(&___anyAttributeUse_22, value);
	}

	inline static int32_t get_offset_of_AttributeGroupRecursionCheck_23() { return static_cast<int32_t>(offsetof(XmlSchemaAttributeGroup_t718386952, ___AttributeGroupRecursionCheck_23)); }
	inline bool get_AttributeGroupRecursionCheck_23() const { return ___AttributeGroupRecursionCheck_23; }
	inline bool* get_address_of_AttributeGroupRecursionCheck_23() { return &___AttributeGroupRecursionCheck_23; }
	inline void set_AttributeGroupRecursionCheck_23(bool value)
	{
		___AttributeGroupRecursionCheck_23 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
