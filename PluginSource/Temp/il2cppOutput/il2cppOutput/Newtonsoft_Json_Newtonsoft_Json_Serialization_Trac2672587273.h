#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Newtonsoft.Json.JsonReader
struct JsonReader_t1817561742;
// Newtonsoft.Json.JsonTextWriter
struct JsonTextWriter_t2286755275;
// System.IO.StringWriter
struct StringWriter_t2384730283;

#include "Newtonsoft_Json_Newtonsoft_Json_JsonReader1817561742.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Newtonsoft.Json.Serialization.TraceJsonReader
struct  TraceJsonReader_t2672587273  : public JsonReader_t1817561742
{
public:
	// Newtonsoft.Json.JsonReader Newtonsoft.Json.Serialization.TraceJsonReader::_innerReader
	JsonReader_t1817561742 * ____innerReader_15;
	// Newtonsoft.Json.JsonTextWriter Newtonsoft.Json.Serialization.TraceJsonReader::_textWriter
	JsonTextWriter_t2286755275 * ____textWriter_16;
	// System.IO.StringWriter Newtonsoft.Json.Serialization.TraceJsonReader::_sw
	StringWriter_t2384730283 * ____sw_17;

public:
	inline static int32_t get_offset_of__innerReader_15() { return static_cast<int32_t>(offsetof(TraceJsonReader_t2672587273, ____innerReader_15)); }
	inline JsonReader_t1817561742 * get__innerReader_15() const { return ____innerReader_15; }
	inline JsonReader_t1817561742 ** get_address_of__innerReader_15() { return &____innerReader_15; }
	inline void set__innerReader_15(JsonReader_t1817561742 * value)
	{
		____innerReader_15 = value;
		Il2CppCodeGenWriteBarrier(&____innerReader_15, value);
	}

	inline static int32_t get_offset_of__textWriter_16() { return static_cast<int32_t>(offsetof(TraceJsonReader_t2672587273, ____textWriter_16)); }
	inline JsonTextWriter_t2286755275 * get__textWriter_16() const { return ____textWriter_16; }
	inline JsonTextWriter_t2286755275 ** get_address_of__textWriter_16() { return &____textWriter_16; }
	inline void set__textWriter_16(JsonTextWriter_t2286755275 * value)
	{
		____textWriter_16 = value;
		Il2CppCodeGenWriteBarrier(&____textWriter_16, value);
	}

	inline static int32_t get_offset_of__sw_17() { return static_cast<int32_t>(offsetof(TraceJsonReader_t2672587273, ____sw_17)); }
	inline StringWriter_t2384730283 * get__sw_17() const { return ____sw_17; }
	inline StringWriter_t2384730283 ** get_address_of__sw_17() { return &____sw_17; }
	inline void set__sw_17(StringWriter_t2384730283 * value)
	{
		____sw_17 = value;
		Il2CppCodeGenWriteBarrier(&____sw_17, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
