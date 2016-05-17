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

// SpilGames.Unity.Helpers.Package/<GetItemById>c__AnonStorey4
struct  U3CGetItemByIdU3Ec__AnonStorey4_t700341324  : public Il2CppObject
{
public:
	// System.String SpilGames.Unity.Helpers.Package/<GetItemById>c__AnonStorey4::itemId
	String_t* ___itemId_0;

public:
	inline static int32_t get_offset_of_itemId_0() { return static_cast<int32_t>(offsetof(U3CGetItemByIdU3Ec__AnonStorey4_t700341324, ___itemId_0)); }
	inline String_t* get_itemId_0() const { return ___itemId_0; }
	inline String_t** get_address_of_itemId_0() { return &___itemId_0; }
	inline void set_itemId_0(String_t* value)
	{
		___itemId_0 = value;
		Il2CppCodeGenWriteBarrier(&___itemId_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
