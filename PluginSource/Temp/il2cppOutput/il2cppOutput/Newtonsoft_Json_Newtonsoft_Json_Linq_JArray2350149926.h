#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<Newtonsoft.Json.Linq.JToken>
struct List_1_t3164559807;

#include "Newtonsoft_Json_Newtonsoft_Json_Linq_JContainer103968846.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Newtonsoft.Json.Linq.JArray
struct  JArray_t2350149926  : public JContainer_t103968846
{
public:
	// System.Collections.Generic.List`1<Newtonsoft.Json.Linq.JToken> Newtonsoft.Json.Linq.JArray::_values
	List_1_t3164559807 * ____values_16;

public:
	inline static int32_t get_offset_of__values_16() { return static_cast<int32_t>(offsetof(JArray_t2350149926, ____values_16)); }
	inline List_1_t3164559807 * get__values_16() const { return ____values_16; }
	inline List_1_t3164559807 ** get_address_of__values_16() { return &____values_16; }
	inline void set__values_16(List_1_t3164559807 * value)
	{
		____values_16 = value;
		Il2CppCodeGenWriteBarrier(&____values_16, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
