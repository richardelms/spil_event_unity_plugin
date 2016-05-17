#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Xml.XmlNameTable
struct XmlNameTable_t3232213908;
// System.Xml.XmlResolver
struct XmlResolver_t2502213349;
// System.Collections.ArrayList
struct ArrayList_t2121638921;
// System.Xml.Schema.XmlSchemaObjectTable
struct XmlSchemaObjectTable_t167066468;
// System.Collections.Hashtable
struct Hashtable_t3875263730;
// System.Xml.Schema.XmlSchemaCompilationSettings
struct XmlSchemaCompilationSettings_t539371163;
// System.Xml.Schema.ValidationEventHandler
struct ValidationEventHandler_t2777264566;

#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_Guid2778838590.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.XmlSchemaSet
struct  XmlSchemaSet_t3827173367  : public Il2CppObject
{
public:
	// System.Xml.XmlNameTable System.Xml.Schema.XmlSchemaSet::nameTable
	XmlNameTable_t3232213908 * ___nameTable_0;
	// System.Xml.XmlResolver System.Xml.Schema.XmlSchemaSet::xmlResolver
	XmlResolver_t2502213349 * ___xmlResolver_1;
	// System.Collections.ArrayList System.Xml.Schema.XmlSchemaSet::schemas
	ArrayList_t2121638921 * ___schemas_2;
	// System.Xml.Schema.XmlSchemaObjectTable System.Xml.Schema.XmlSchemaSet::attributes
	XmlSchemaObjectTable_t167066468 * ___attributes_3;
	// System.Xml.Schema.XmlSchemaObjectTable System.Xml.Schema.XmlSchemaSet::elements
	XmlSchemaObjectTable_t167066468 * ___elements_4;
	// System.Xml.Schema.XmlSchemaObjectTable System.Xml.Schema.XmlSchemaSet::types
	XmlSchemaObjectTable_t167066468 * ___types_5;
	// System.Collections.Hashtable System.Xml.Schema.XmlSchemaSet::idCollection
	Hashtable_t3875263730 * ___idCollection_6;
	// System.Xml.Schema.XmlSchemaObjectTable System.Xml.Schema.XmlSchemaSet::namedIdentities
	XmlSchemaObjectTable_t167066468 * ___namedIdentities_7;
	// System.Xml.Schema.XmlSchemaCompilationSettings System.Xml.Schema.XmlSchemaSet::settings
	XmlSchemaCompilationSettings_t539371163 * ___settings_8;
	// System.Boolean System.Xml.Schema.XmlSchemaSet::isCompiled
	bool ___isCompiled_9;
	// System.Guid System.Xml.Schema.XmlSchemaSet::CompilationId
	Guid_t2778838590  ___CompilationId_10;
	// System.Xml.Schema.ValidationEventHandler System.Xml.Schema.XmlSchemaSet::ValidationEventHandler
	ValidationEventHandler_t2777264566 * ___ValidationEventHandler_11;

public:
	inline static int32_t get_offset_of_nameTable_0() { return static_cast<int32_t>(offsetof(XmlSchemaSet_t3827173367, ___nameTable_0)); }
	inline XmlNameTable_t3232213908 * get_nameTable_0() const { return ___nameTable_0; }
	inline XmlNameTable_t3232213908 ** get_address_of_nameTable_0() { return &___nameTable_0; }
	inline void set_nameTable_0(XmlNameTable_t3232213908 * value)
	{
		___nameTable_0 = value;
		Il2CppCodeGenWriteBarrier(&___nameTable_0, value);
	}

	inline static int32_t get_offset_of_xmlResolver_1() { return static_cast<int32_t>(offsetof(XmlSchemaSet_t3827173367, ___xmlResolver_1)); }
	inline XmlResolver_t2502213349 * get_xmlResolver_1() const { return ___xmlResolver_1; }
	inline XmlResolver_t2502213349 ** get_address_of_xmlResolver_1() { return &___xmlResolver_1; }
	inline void set_xmlResolver_1(XmlResolver_t2502213349 * value)
	{
		___xmlResolver_1 = value;
		Il2CppCodeGenWriteBarrier(&___xmlResolver_1, value);
	}

	inline static int32_t get_offset_of_schemas_2() { return static_cast<int32_t>(offsetof(XmlSchemaSet_t3827173367, ___schemas_2)); }
	inline ArrayList_t2121638921 * get_schemas_2() const { return ___schemas_2; }
	inline ArrayList_t2121638921 ** get_address_of_schemas_2() { return &___schemas_2; }
	inline void set_schemas_2(ArrayList_t2121638921 * value)
	{
		___schemas_2 = value;
		Il2CppCodeGenWriteBarrier(&___schemas_2, value);
	}

	inline static int32_t get_offset_of_attributes_3() { return static_cast<int32_t>(offsetof(XmlSchemaSet_t3827173367, ___attributes_3)); }
	inline XmlSchemaObjectTable_t167066468 * get_attributes_3() const { return ___attributes_3; }
	inline XmlSchemaObjectTable_t167066468 ** get_address_of_attributes_3() { return &___attributes_3; }
	inline void set_attributes_3(XmlSchemaObjectTable_t167066468 * value)
	{
		___attributes_3 = value;
		Il2CppCodeGenWriteBarrier(&___attributes_3, value);
	}

	inline static int32_t get_offset_of_elements_4() { return static_cast<int32_t>(offsetof(XmlSchemaSet_t3827173367, ___elements_4)); }
	inline XmlSchemaObjectTable_t167066468 * get_elements_4() const { return ___elements_4; }
	inline XmlSchemaObjectTable_t167066468 ** get_address_of_elements_4() { return &___elements_4; }
	inline void set_elements_4(XmlSchemaObjectTable_t167066468 * value)
	{
		___elements_4 = value;
		Il2CppCodeGenWriteBarrier(&___elements_4, value);
	}

	inline static int32_t get_offset_of_types_5() { return static_cast<int32_t>(offsetof(XmlSchemaSet_t3827173367, ___types_5)); }
	inline XmlSchemaObjectTable_t167066468 * get_types_5() const { return ___types_5; }
	inline XmlSchemaObjectTable_t167066468 ** get_address_of_types_5() { return &___types_5; }
	inline void set_types_5(XmlSchemaObjectTable_t167066468 * value)
	{
		___types_5 = value;
		Il2CppCodeGenWriteBarrier(&___types_5, value);
	}

	inline static int32_t get_offset_of_idCollection_6() { return static_cast<int32_t>(offsetof(XmlSchemaSet_t3827173367, ___idCollection_6)); }
	inline Hashtable_t3875263730 * get_idCollection_6() const { return ___idCollection_6; }
	inline Hashtable_t3875263730 ** get_address_of_idCollection_6() { return &___idCollection_6; }
	inline void set_idCollection_6(Hashtable_t3875263730 * value)
	{
		___idCollection_6 = value;
		Il2CppCodeGenWriteBarrier(&___idCollection_6, value);
	}

	inline static int32_t get_offset_of_namedIdentities_7() { return static_cast<int32_t>(offsetof(XmlSchemaSet_t3827173367, ___namedIdentities_7)); }
	inline XmlSchemaObjectTable_t167066468 * get_namedIdentities_7() const { return ___namedIdentities_7; }
	inline XmlSchemaObjectTable_t167066468 ** get_address_of_namedIdentities_7() { return &___namedIdentities_7; }
	inline void set_namedIdentities_7(XmlSchemaObjectTable_t167066468 * value)
	{
		___namedIdentities_7 = value;
		Il2CppCodeGenWriteBarrier(&___namedIdentities_7, value);
	}

	inline static int32_t get_offset_of_settings_8() { return static_cast<int32_t>(offsetof(XmlSchemaSet_t3827173367, ___settings_8)); }
	inline XmlSchemaCompilationSettings_t539371163 * get_settings_8() const { return ___settings_8; }
	inline XmlSchemaCompilationSettings_t539371163 ** get_address_of_settings_8() { return &___settings_8; }
	inline void set_settings_8(XmlSchemaCompilationSettings_t539371163 * value)
	{
		___settings_8 = value;
		Il2CppCodeGenWriteBarrier(&___settings_8, value);
	}

	inline static int32_t get_offset_of_isCompiled_9() { return static_cast<int32_t>(offsetof(XmlSchemaSet_t3827173367, ___isCompiled_9)); }
	inline bool get_isCompiled_9() const { return ___isCompiled_9; }
	inline bool* get_address_of_isCompiled_9() { return &___isCompiled_9; }
	inline void set_isCompiled_9(bool value)
	{
		___isCompiled_9 = value;
	}

	inline static int32_t get_offset_of_CompilationId_10() { return static_cast<int32_t>(offsetof(XmlSchemaSet_t3827173367, ___CompilationId_10)); }
	inline Guid_t2778838590  get_CompilationId_10() const { return ___CompilationId_10; }
	inline Guid_t2778838590 * get_address_of_CompilationId_10() { return &___CompilationId_10; }
	inline void set_CompilationId_10(Guid_t2778838590  value)
	{
		___CompilationId_10 = value;
	}

	inline static int32_t get_offset_of_ValidationEventHandler_11() { return static_cast<int32_t>(offsetof(XmlSchemaSet_t3827173367, ___ValidationEventHandler_11)); }
	inline ValidationEventHandler_t2777264566 * get_ValidationEventHandler_11() const { return ___ValidationEventHandler_11; }
	inline ValidationEventHandler_t2777264566 ** get_address_of_ValidationEventHandler_11() { return &___ValidationEventHandler_11; }
	inline void set_ValidationEventHandler_11(ValidationEventHandler_t2777264566 * value)
	{
		___ValidationEventHandler_11 = value;
		Il2CppCodeGenWriteBarrier(&___ValidationEventHandler_11, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
