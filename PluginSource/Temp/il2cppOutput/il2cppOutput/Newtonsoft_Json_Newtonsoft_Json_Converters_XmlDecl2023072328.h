﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Xml.XmlDeclaration
struct XmlDeclaration_t1113268939;

#include "Newtonsoft_Json_Newtonsoft_Json_Converters_XmlNode3886750706.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Newtonsoft.Json.Converters.XmlDeclarationWrapper
struct  XmlDeclarationWrapper_t2023072328  : public XmlNodeWrapper_t3886750706
{
public:
	// System.Xml.XmlDeclaration Newtonsoft.Json.Converters.XmlDeclarationWrapper::_declaration
	XmlDeclaration_t1113268939 * ____declaration_2;

public:
	inline static int32_t get_offset_of__declaration_2() { return static_cast<int32_t>(offsetof(XmlDeclarationWrapper_t2023072328, ____declaration_2)); }
	inline XmlDeclaration_t1113268939 * get__declaration_2() const { return ____declaration_2; }
	inline XmlDeclaration_t1113268939 ** get_address_of__declaration_2() { return &____declaration_2; }
	inline void set__declaration_2(XmlDeclaration_t1113268939 * value)
	{
		____declaration_2 = value;
		Il2CppCodeGenWriteBarrier(&____declaration_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
