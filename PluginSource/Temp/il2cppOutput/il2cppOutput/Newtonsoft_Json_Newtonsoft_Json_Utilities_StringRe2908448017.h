﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Char[]
struct CharU5BU5D_t3416858730;

#include "mscorlib_System_ValueType4014882752.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Newtonsoft.Json.Utilities.StringReference
struct  StringReference_t2908448017 
{
public:
	// System.Char[] Newtonsoft.Json.Utilities.StringReference::_chars
	CharU5BU5D_t3416858730* ____chars_0;
	// System.Int32 Newtonsoft.Json.Utilities.StringReference::_startIndex
	int32_t ____startIndex_1;
	// System.Int32 Newtonsoft.Json.Utilities.StringReference::_length
	int32_t ____length_2;

public:
	inline static int32_t get_offset_of__chars_0() { return static_cast<int32_t>(offsetof(StringReference_t2908448017, ____chars_0)); }
	inline CharU5BU5D_t3416858730* get__chars_0() const { return ____chars_0; }
	inline CharU5BU5D_t3416858730** get_address_of__chars_0() { return &____chars_0; }
	inline void set__chars_0(CharU5BU5D_t3416858730* value)
	{
		____chars_0 = value;
		Il2CppCodeGenWriteBarrier(&____chars_0, value);
	}

	inline static int32_t get_offset_of__startIndex_1() { return static_cast<int32_t>(offsetof(StringReference_t2908448017, ____startIndex_1)); }
	inline int32_t get__startIndex_1() const { return ____startIndex_1; }
	inline int32_t* get_address_of__startIndex_1() { return &____startIndex_1; }
	inline void set__startIndex_1(int32_t value)
	{
		____startIndex_1 = value;
	}

	inline static int32_t get_offset_of__length_2() { return static_cast<int32_t>(offsetof(StringReference_t2908448017, ____length_2)); }
	inline int32_t get__length_2() const { return ____length_2; }
	inline int32_t* get_address_of__length_2() { return &____length_2; }
	inline void set__length_2(int32_t value)
	{
		____length_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for marshalling of: Newtonsoft.Json.Utilities.StringReference
struct StringReference_t2908448017_marshaled_pinvoke
{
	char* ____chars_0;
	int32_t ____startIndex_1;
	int32_t ____length_2;
};
// Native definition for marshalling of: Newtonsoft.Json.Utilities.StringReference
struct StringReference_t2908448017_marshaled_com
{
	char* ____chars_0;
	int32_t ____startIndex_1;
	int32_t ____length_2;
};
