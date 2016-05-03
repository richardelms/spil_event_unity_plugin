#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Xml.XmlElement
struct XmlElement_t3562928333;

#include "Newtonsoft_Json_Newtonsoft_Json_Converters_XmlNode3886750706.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Newtonsoft.Json.Converters.XmlElementWrapper
struct  XmlElementWrapper_t194536966  : public XmlNodeWrapper_t3886750706
{
public:
	// System.Xml.XmlElement Newtonsoft.Json.Converters.XmlElementWrapper::_element
	XmlElement_t3562928333 * ____element_2;

public:
	inline static int32_t get_offset_of__element_2() { return static_cast<int32_t>(offsetof(XmlElementWrapper_t194536966, ____element_2)); }
	inline XmlElement_t3562928333 * get__element_2() const { return ____element_2; }
	inline XmlElement_t3562928333 ** get_address_of__element_2() { return &____element_2; }
	inline void set__element_2(XmlElement_t3562928333 * value)
	{
		____element_2 = value;
		Il2CppCodeGenWriteBarrier(&____element_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
