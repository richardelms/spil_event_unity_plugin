#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "Newtonsoft_Json_Newtonsoft_Json_JsonContainerAttri4246140134.h"
#include "Newtonsoft_Json_Newtonsoft_Json_MemberSerializatio1745874425.h"
#include "mscorlib_System_Nullable_1_gen1972636662.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Newtonsoft.Json.JsonObjectAttribute
struct  JsonObjectAttribute_t1059491480  : public JsonContainerAttribute_t4246140134
{
public:
	// Newtonsoft.Json.MemberSerialization Newtonsoft.Json.JsonObjectAttribute::_memberSerialization
	int32_t ____memberSerialization_6;
	// System.Nullable`1<Newtonsoft.Json.Required> Newtonsoft.Json.JsonObjectAttribute::_itemRequired
	Nullable_1_t1972636662  ____itemRequired_7;

public:
	inline static int32_t get_offset_of__memberSerialization_6() { return static_cast<int32_t>(offsetof(JsonObjectAttribute_t1059491480, ____memberSerialization_6)); }
	inline int32_t get__memberSerialization_6() const { return ____memberSerialization_6; }
	inline int32_t* get_address_of__memberSerialization_6() { return &____memberSerialization_6; }
	inline void set__memberSerialization_6(int32_t value)
	{
		____memberSerialization_6 = value;
	}

	inline static int32_t get_offset_of__itemRequired_7() { return static_cast<int32_t>(offsetof(JsonObjectAttribute_t1059491480, ____itemRequired_7)); }
	inline Nullable_1_t1972636662  get__itemRequired_7() const { return ____itemRequired_7; }
	inline Nullable_1_t1972636662 * get_address_of__itemRequired_7() { return &____itemRequired_7; }
	inline void set__itemRequired_7(Nullable_1_t1972636662  value)
	{
		____itemRequired_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
