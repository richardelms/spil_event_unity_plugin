#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Newtonsoft.Json.JsonWriter
struct JsonWriter_t1972966974;
// Newtonsoft.Json.JsonTextWriter
struct JsonTextWriter_t2286755275;
// System.IO.StringWriter
struct StringWriter_t2384730283;

#include "Newtonsoft_Json_Newtonsoft_Json_JsonWriter1972966974.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Newtonsoft.Json.Serialization.TraceJsonWriter
struct  TraceJsonWriter_t2827992505  : public JsonWriter_t1972966974
{
public:
	// Newtonsoft.Json.JsonWriter Newtonsoft.Json.Serialization.TraceJsonWriter::_innerWriter
	JsonWriter_t1972966974 * ____innerWriter_13;
	// Newtonsoft.Json.JsonTextWriter Newtonsoft.Json.Serialization.TraceJsonWriter::_textWriter
	JsonTextWriter_t2286755275 * ____textWriter_14;
	// System.IO.StringWriter Newtonsoft.Json.Serialization.TraceJsonWriter::_sw
	StringWriter_t2384730283 * ____sw_15;

public:
	inline static int32_t get_offset_of__innerWriter_13() { return static_cast<int32_t>(offsetof(TraceJsonWriter_t2827992505, ____innerWriter_13)); }
	inline JsonWriter_t1972966974 * get__innerWriter_13() const { return ____innerWriter_13; }
	inline JsonWriter_t1972966974 ** get_address_of__innerWriter_13() { return &____innerWriter_13; }
	inline void set__innerWriter_13(JsonWriter_t1972966974 * value)
	{
		____innerWriter_13 = value;
		Il2CppCodeGenWriteBarrier(&____innerWriter_13, value);
	}

	inline static int32_t get_offset_of__textWriter_14() { return static_cast<int32_t>(offsetof(TraceJsonWriter_t2827992505, ____textWriter_14)); }
	inline JsonTextWriter_t2286755275 * get__textWriter_14() const { return ____textWriter_14; }
	inline JsonTextWriter_t2286755275 ** get_address_of__textWriter_14() { return &____textWriter_14; }
	inline void set__textWriter_14(JsonTextWriter_t2286755275 * value)
	{
		____textWriter_14 = value;
		Il2CppCodeGenWriteBarrier(&____textWriter_14, value);
	}

	inline static int32_t get_offset_of__sw_15() { return static_cast<int32_t>(offsetof(TraceJsonWriter_t2827992505, ____sw_15)); }
	inline StringWriter_t2384730283 * get__sw_15() const { return ____sw_15; }
	inline StringWriter_t2384730283 ** get_address_of__sw_15() { return &____sw_15; }
	inline void set__sw_15(StringWriter_t2384730283 * value)
	{
		____sw_15 = value;
		Il2CppCodeGenWriteBarrier(&____sw_15, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
