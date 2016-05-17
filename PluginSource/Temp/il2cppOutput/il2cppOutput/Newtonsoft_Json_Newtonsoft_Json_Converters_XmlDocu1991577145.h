#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Xml.XmlDocument
struct XmlDocument_t3705263098;

#include "Newtonsoft_Json_Newtonsoft_Json_Converters_XmlNode3886750706.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Newtonsoft.Json.Converters.XmlDocumentWrapper
struct  XmlDocumentWrapper_t1991577145  : public XmlNodeWrapper_t3886750706
{
public:
	// System.Xml.XmlDocument Newtonsoft.Json.Converters.XmlDocumentWrapper::_document
	XmlDocument_t3705263098 * ____document_2;

public:
	inline static int32_t get_offset_of__document_2() { return static_cast<int32_t>(offsetof(XmlDocumentWrapper_t1991577145, ____document_2)); }
	inline XmlDocument_t3705263098 * get__document_2() const { return ____document_2; }
	inline XmlDocument_t3705263098 ** get_address_of__document_2() { return &____document_2; }
	inline void set__document_2(XmlDocument_t3705263098 * value)
	{
		____document_2 = value;
		Il2CppCodeGenWriteBarrier(&____document_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
