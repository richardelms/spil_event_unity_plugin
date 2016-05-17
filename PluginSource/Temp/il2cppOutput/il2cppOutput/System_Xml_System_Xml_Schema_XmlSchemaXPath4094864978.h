#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// System.Xml.XmlNamespaceManager
struct XmlNamespaceManager_t1861067185;
// Mono.Xml.Schema.XsdIdentityPath[]
struct XsdIdentityPathU5BU5D_t36593264;
// Mono.Xml.Schema.XsdIdentityPath
struct XsdIdentityPath_t114296061;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t190145395;

#include "System_Xml_System_Xml_Schema_XmlSchemaAnnotated2513933869.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.XmlSchemaXPath
struct  XmlSchemaXPath_t4094864978  : public XmlSchemaAnnotated_t2513933869
{
public:
	// System.String System.Xml.Schema.XmlSchemaXPath::xpath
	String_t* ___xpath_16;
	// System.Xml.XmlNamespaceManager System.Xml.Schema.XmlSchemaXPath::nsmgr
	XmlNamespaceManager_t1861067185 * ___nsmgr_17;
	// System.Boolean System.Xml.Schema.XmlSchemaXPath::isSelector
	bool ___isSelector_18;
	// Mono.Xml.Schema.XsdIdentityPath[] System.Xml.Schema.XmlSchemaXPath::compiledExpression
	XsdIdentityPathU5BU5D_t36593264* ___compiledExpression_19;
	// Mono.Xml.Schema.XsdIdentityPath System.Xml.Schema.XmlSchemaXPath::currentPath
	XsdIdentityPath_t114296061 * ___currentPath_20;

public:
	inline static int32_t get_offset_of_xpath_16() { return static_cast<int32_t>(offsetof(XmlSchemaXPath_t4094864978, ___xpath_16)); }
	inline String_t* get_xpath_16() const { return ___xpath_16; }
	inline String_t** get_address_of_xpath_16() { return &___xpath_16; }
	inline void set_xpath_16(String_t* value)
	{
		___xpath_16 = value;
		Il2CppCodeGenWriteBarrier(&___xpath_16, value);
	}

	inline static int32_t get_offset_of_nsmgr_17() { return static_cast<int32_t>(offsetof(XmlSchemaXPath_t4094864978, ___nsmgr_17)); }
	inline XmlNamespaceManager_t1861067185 * get_nsmgr_17() const { return ___nsmgr_17; }
	inline XmlNamespaceManager_t1861067185 ** get_address_of_nsmgr_17() { return &___nsmgr_17; }
	inline void set_nsmgr_17(XmlNamespaceManager_t1861067185 * value)
	{
		___nsmgr_17 = value;
		Il2CppCodeGenWriteBarrier(&___nsmgr_17, value);
	}

	inline static int32_t get_offset_of_isSelector_18() { return static_cast<int32_t>(offsetof(XmlSchemaXPath_t4094864978, ___isSelector_18)); }
	inline bool get_isSelector_18() const { return ___isSelector_18; }
	inline bool* get_address_of_isSelector_18() { return &___isSelector_18; }
	inline void set_isSelector_18(bool value)
	{
		___isSelector_18 = value;
	}

	inline static int32_t get_offset_of_compiledExpression_19() { return static_cast<int32_t>(offsetof(XmlSchemaXPath_t4094864978, ___compiledExpression_19)); }
	inline XsdIdentityPathU5BU5D_t36593264* get_compiledExpression_19() const { return ___compiledExpression_19; }
	inline XsdIdentityPathU5BU5D_t36593264** get_address_of_compiledExpression_19() { return &___compiledExpression_19; }
	inline void set_compiledExpression_19(XsdIdentityPathU5BU5D_t36593264* value)
	{
		___compiledExpression_19 = value;
		Il2CppCodeGenWriteBarrier(&___compiledExpression_19, value);
	}

	inline static int32_t get_offset_of_currentPath_20() { return static_cast<int32_t>(offsetof(XmlSchemaXPath_t4094864978, ___currentPath_20)); }
	inline XsdIdentityPath_t114296061 * get_currentPath_20() const { return ___currentPath_20; }
	inline XsdIdentityPath_t114296061 ** get_address_of_currentPath_20() { return &___currentPath_20; }
	inline void set_currentPath_20(XsdIdentityPath_t114296061 * value)
	{
		___currentPath_20 = value;
		Il2CppCodeGenWriteBarrier(&___currentPath_20, value);
	}
};

struct XmlSchemaXPath_t4094864978_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Xml.Schema.XmlSchemaXPath::<>f__switch$map3C
	Dictionary_2_t190145395 * ___U3CU3Ef__switchU24map3C_21;

public:
	inline static int32_t get_offset_of_U3CU3Ef__switchU24map3C_21() { return static_cast<int32_t>(offsetof(XmlSchemaXPath_t4094864978_StaticFields, ___U3CU3Ef__switchU24map3C_21)); }
	inline Dictionary_2_t190145395 * get_U3CU3Ef__switchU24map3C_21() const { return ___U3CU3Ef__switchU24map3C_21; }
	inline Dictionary_2_t190145395 ** get_address_of_U3CU3Ef__switchU24map3C_21() { return &___U3CU3Ef__switchU24map3C_21; }
	inline void set_U3CU3Ef__switchU24map3C_21(Dictionary_2_t190145395 * value)
	{
		___U3CU3Ef__switchU24map3C_21 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__switchU24map3C_21, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
