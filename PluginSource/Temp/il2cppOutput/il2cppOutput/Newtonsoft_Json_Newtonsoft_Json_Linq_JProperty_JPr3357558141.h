﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Newtonsoft.Json.Linq.JToken
struct JToken_t2367600838;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Newtonsoft.Json.Linq.JProperty/JPropertyList
struct  JPropertyList_t3357558141  : public Il2CppObject
{
public:
	// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JProperty/JPropertyList::_token
	JToken_t2367600838 * ____token_0;

public:
	inline static int32_t get_offset_of__token_0() { return static_cast<int32_t>(offsetof(JPropertyList_t3357558141, ____token_0)); }
	inline JToken_t2367600838 * get__token_0() const { return ____token_0; }
	inline JToken_t2367600838 ** get_address_of__token_0() { return &____token_0; }
	inline void set__token_0(JToken_t2367600838 * value)
	{
		____token_0 = value;
		Il2CppCodeGenWriteBarrier(&____token_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
