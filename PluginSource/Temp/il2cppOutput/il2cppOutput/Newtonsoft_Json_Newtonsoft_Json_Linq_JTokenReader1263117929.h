#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// Newtonsoft.Json.Linq.JToken
struct JToken_t2367600838;

#include "Newtonsoft_Json_Newtonsoft_Json_JsonReader1817561742.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Newtonsoft.Json.Linq.JTokenReader
struct  JTokenReader_t1263117929  : public JsonReader_t1817561742
{
public:
	// System.String Newtonsoft.Json.Linq.JTokenReader::_initialPath
	String_t* ____initialPath_15;
	// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JTokenReader::_root
	JToken_t2367600838 * ____root_16;
	// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JTokenReader::_parent
	JToken_t2367600838 * ____parent_17;
	// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JTokenReader::_current
	JToken_t2367600838 * ____current_18;

public:
	inline static int32_t get_offset_of__initialPath_15() { return static_cast<int32_t>(offsetof(JTokenReader_t1263117929, ____initialPath_15)); }
	inline String_t* get__initialPath_15() const { return ____initialPath_15; }
	inline String_t** get_address_of__initialPath_15() { return &____initialPath_15; }
	inline void set__initialPath_15(String_t* value)
	{
		____initialPath_15 = value;
		Il2CppCodeGenWriteBarrier(&____initialPath_15, value);
	}

	inline static int32_t get_offset_of__root_16() { return static_cast<int32_t>(offsetof(JTokenReader_t1263117929, ____root_16)); }
	inline JToken_t2367600838 * get__root_16() const { return ____root_16; }
	inline JToken_t2367600838 ** get_address_of__root_16() { return &____root_16; }
	inline void set__root_16(JToken_t2367600838 * value)
	{
		____root_16 = value;
		Il2CppCodeGenWriteBarrier(&____root_16, value);
	}

	inline static int32_t get_offset_of__parent_17() { return static_cast<int32_t>(offsetof(JTokenReader_t1263117929, ____parent_17)); }
	inline JToken_t2367600838 * get__parent_17() const { return ____parent_17; }
	inline JToken_t2367600838 ** get_address_of__parent_17() { return &____parent_17; }
	inline void set__parent_17(JToken_t2367600838 * value)
	{
		____parent_17 = value;
		Il2CppCodeGenWriteBarrier(&____parent_17, value);
	}

	inline static int32_t get_offset_of__current_18() { return static_cast<int32_t>(offsetof(JTokenReader_t1263117929, ____current_18)); }
	inline JToken_t2367600838 * get__current_18() const { return ____current_18; }
	inline JToken_t2367600838 ** get_address_of__current_18() { return &____current_18; }
	inline void set__current_18(JToken_t2367600838 * value)
	{
		____current_18 = value;
		Il2CppCodeGenWriteBarrier(&____current_18, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
