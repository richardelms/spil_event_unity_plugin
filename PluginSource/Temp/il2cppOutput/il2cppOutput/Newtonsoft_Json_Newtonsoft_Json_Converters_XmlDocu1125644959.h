#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Xml.XmlDocumentType
struct XmlDocumentType_t1191145044;

#include "Newtonsoft_Json_Newtonsoft_Json_Converters_XmlNode3886750706.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Newtonsoft.Json.Converters.XmlDocumentTypeWrapper
struct  XmlDocumentTypeWrapper_t1125644959  : public XmlNodeWrapper_t3886750706
{
public:
	// System.Xml.XmlDocumentType Newtonsoft.Json.Converters.XmlDocumentTypeWrapper::_documentType
	XmlDocumentType_t1191145044 * ____documentType_2;

public:
	inline static int32_t get_offset_of__documentType_2() { return static_cast<int32_t>(offsetof(XmlDocumentTypeWrapper_t1125644959, ____documentType_2)); }
	inline XmlDocumentType_t1191145044 * get__documentType_2() const { return ____documentType_2; }
	inline XmlDocumentType_t1191145044 ** get_address_of__documentType_2() { return &____documentType_2; }
	inline void set__documentType_2(XmlDocumentType_t1191145044 * value)
	{
		____documentType_2 = value;
		Il2CppCodeGenWriteBarrier(&____documentType_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
