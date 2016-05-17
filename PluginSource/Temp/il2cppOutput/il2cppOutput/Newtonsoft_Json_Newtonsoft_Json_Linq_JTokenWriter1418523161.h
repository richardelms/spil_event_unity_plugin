#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Newtonsoft.Json.Linq.JContainer
struct JContainer_t103968846;
// Newtonsoft.Json.Linq.JValue
struct JValue_t2369032254;
// Newtonsoft.Json.Linq.JToken
struct JToken_t2367600838;

#include "Newtonsoft_Json_Newtonsoft_Json_JsonWriter1972966974.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Newtonsoft.Json.Linq.JTokenWriter
struct  JTokenWriter_t1418523161  : public JsonWriter_t1972966974
{
public:
	// Newtonsoft.Json.Linq.JContainer Newtonsoft.Json.Linq.JTokenWriter::_token
	JContainer_t103968846 * ____token_13;
	// Newtonsoft.Json.Linq.JContainer Newtonsoft.Json.Linq.JTokenWriter::_parent
	JContainer_t103968846 * ____parent_14;
	// Newtonsoft.Json.Linq.JValue Newtonsoft.Json.Linq.JTokenWriter::_value
	JValue_t2369032254 * ____value_15;
	// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JTokenWriter::_current
	JToken_t2367600838 * ____current_16;

public:
	inline static int32_t get_offset_of__token_13() { return static_cast<int32_t>(offsetof(JTokenWriter_t1418523161, ____token_13)); }
	inline JContainer_t103968846 * get__token_13() const { return ____token_13; }
	inline JContainer_t103968846 ** get_address_of__token_13() { return &____token_13; }
	inline void set__token_13(JContainer_t103968846 * value)
	{
		____token_13 = value;
		Il2CppCodeGenWriteBarrier(&____token_13, value);
	}

	inline static int32_t get_offset_of__parent_14() { return static_cast<int32_t>(offsetof(JTokenWriter_t1418523161, ____parent_14)); }
	inline JContainer_t103968846 * get__parent_14() const { return ____parent_14; }
	inline JContainer_t103968846 ** get_address_of__parent_14() { return &____parent_14; }
	inline void set__parent_14(JContainer_t103968846 * value)
	{
		____parent_14 = value;
		Il2CppCodeGenWriteBarrier(&____parent_14, value);
	}

	inline static int32_t get_offset_of__value_15() { return static_cast<int32_t>(offsetof(JTokenWriter_t1418523161, ____value_15)); }
	inline JValue_t2369032254 * get__value_15() const { return ____value_15; }
	inline JValue_t2369032254 ** get_address_of__value_15() { return &____value_15; }
	inline void set__value_15(JValue_t2369032254 * value)
	{
		____value_15 = value;
		Il2CppCodeGenWriteBarrier(&____value_15, value);
	}

	inline static int32_t get_offset_of__current_16() { return static_cast<int32_t>(offsetof(JTokenWriter_t1418523161, ____current_16)); }
	inline JToken_t2367600838 * get__current_16() const { return ____current_16; }
	inline JToken_t2367600838 ** get_address_of__current_16() { return &____current_16; }
	inline void set__current_16(JToken_t2367600838 * value)
	{
		____current_16 = value;
		Il2CppCodeGenWriteBarrier(&____current_16, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
