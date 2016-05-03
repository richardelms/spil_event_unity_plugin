#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Xml.XmlQualifiedName
struct XmlQualifiedName_t176365656;

#include "mscorlib_System_ValueType4014882752.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.QNameValueType
struct  QNameValueType_t2045697116 
{
public:
	// System.Xml.XmlQualifiedName System.Xml.Schema.QNameValueType::value
	XmlQualifiedName_t176365656 * ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(QNameValueType_t2045697116, ___value_0)); }
	inline XmlQualifiedName_t176365656 * get_value_0() const { return ___value_0; }
	inline XmlQualifiedName_t176365656 ** get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(XmlQualifiedName_t176365656 * value)
	{
		___value_0 = value;
		Il2CppCodeGenWriteBarrier(&___value_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
