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

#include "Newtonsoft_Json_Newtonsoft_Json_JsonConverter757201947.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Newtonsoft.Json.Converters.XmlNodeConverter
struct  XmlNodeConverter_t2302997311  : public JsonConverter_t757201947
{
public:
	// System.String Newtonsoft.Json.Converters.XmlNodeConverter::<DeserializeRootElementName>k__BackingField
	String_t* ___U3CDeserializeRootElementNameU3Ek__BackingField_0;
	// System.Boolean Newtonsoft.Json.Converters.XmlNodeConverter::<WriteArrayAttribute>k__BackingField
	bool ___U3CWriteArrayAttributeU3Ek__BackingField_1;
	// System.Boolean Newtonsoft.Json.Converters.XmlNodeConverter::<OmitRootObject>k__BackingField
	bool ___U3COmitRootObjectU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CDeserializeRootElementNameU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(XmlNodeConverter_t2302997311, ___U3CDeserializeRootElementNameU3Ek__BackingField_0)); }
	inline String_t* get_U3CDeserializeRootElementNameU3Ek__BackingField_0() const { return ___U3CDeserializeRootElementNameU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CDeserializeRootElementNameU3Ek__BackingField_0() { return &___U3CDeserializeRootElementNameU3Ek__BackingField_0; }
	inline void set_U3CDeserializeRootElementNameU3Ek__BackingField_0(String_t* value)
	{
		___U3CDeserializeRootElementNameU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier(&___U3CDeserializeRootElementNameU3Ek__BackingField_0, value);
	}

	inline static int32_t get_offset_of_U3CWriteArrayAttributeU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(XmlNodeConverter_t2302997311, ___U3CWriteArrayAttributeU3Ek__BackingField_1)); }
	inline bool get_U3CWriteArrayAttributeU3Ek__BackingField_1() const { return ___U3CWriteArrayAttributeU3Ek__BackingField_1; }
	inline bool* get_address_of_U3CWriteArrayAttributeU3Ek__BackingField_1() { return &___U3CWriteArrayAttributeU3Ek__BackingField_1; }
	inline void set_U3CWriteArrayAttributeU3Ek__BackingField_1(bool value)
	{
		___U3CWriteArrayAttributeU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3COmitRootObjectU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(XmlNodeConverter_t2302997311, ___U3COmitRootObjectU3Ek__BackingField_2)); }
	inline bool get_U3COmitRootObjectU3Ek__BackingField_2() const { return ___U3COmitRootObjectU3Ek__BackingField_2; }
	inline bool* get_address_of_U3COmitRootObjectU3Ek__BackingField_2() { return &___U3COmitRootObjectU3Ek__BackingField_2; }
	inline void set_U3COmitRootObjectU3Ek__BackingField_2(bool value)
	{
		___U3COmitRootObjectU3Ek__BackingField_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
