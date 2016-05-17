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

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SpilGames.Unity.Utils.SpilResponse
struct  SpilResponse_t2876629418  : public Il2CppObject
{
public:
	// System.String SpilGames.Unity.Utils.SpilResponse::name
	String_t* ___name_0;
	// System.String SpilGames.Unity.Utils.SpilResponse::type
	String_t* ___type_1;
	// System.String SpilGames.Unity.Utils.SpilResponse::action
	String_t* ___action_2;
	// System.String SpilGames.Unity.Utils.SpilResponse::message
	String_t* ___message_3;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(SpilResponse_t2876629418, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier(&___name_0, value);
	}

	inline static int32_t get_offset_of_type_1() { return static_cast<int32_t>(offsetof(SpilResponse_t2876629418, ___type_1)); }
	inline String_t* get_type_1() const { return ___type_1; }
	inline String_t** get_address_of_type_1() { return &___type_1; }
	inline void set_type_1(String_t* value)
	{
		___type_1 = value;
		Il2CppCodeGenWriteBarrier(&___type_1, value);
	}

	inline static int32_t get_offset_of_action_2() { return static_cast<int32_t>(offsetof(SpilResponse_t2876629418, ___action_2)); }
	inline String_t* get_action_2() const { return ___action_2; }
	inline String_t** get_address_of_action_2() { return &___action_2; }
	inline void set_action_2(String_t* value)
	{
		___action_2 = value;
		Il2CppCodeGenWriteBarrier(&___action_2, value);
	}

	inline static int32_t get_offset_of_message_3() { return static_cast<int32_t>(offsetof(SpilResponse_t2876629418, ___message_3)); }
	inline String_t* get_message_3() const { return ___message_3; }
	inline String_t** get_address_of_message_3() { return &___message_3; }
	inline void set_message_3(String_t* value)
	{
		___message_3 = value;
		Il2CppCodeGenWriteBarrier(&___message_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
