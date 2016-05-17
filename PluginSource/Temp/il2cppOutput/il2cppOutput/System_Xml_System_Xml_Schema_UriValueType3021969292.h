#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Mono.Xml.Schema.XmlSchemaUri
struct XmlSchemaUri_t113002885;

#include "mscorlib_System_ValueType4014882752.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.UriValueType
struct  UriValueType_t3021969292 
{
public:
	// Mono.Xml.Schema.XmlSchemaUri System.Xml.Schema.UriValueType::value
	XmlSchemaUri_t113002885 * ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(UriValueType_t3021969292, ___value_0)); }
	inline XmlSchemaUri_t113002885 * get_value_0() const { return ___value_0; }
	inline XmlSchemaUri_t113002885 ** get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(XmlSchemaUri_t113002885 * value)
	{
		___value_0 = value;
		Il2CppCodeGenWriteBarrier(&___value_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
