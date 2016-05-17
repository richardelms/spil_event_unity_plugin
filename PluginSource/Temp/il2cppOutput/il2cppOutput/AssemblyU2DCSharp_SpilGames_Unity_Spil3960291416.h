#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// SpilGames.Unity.Implementations.SpiliOSUnityImplementation
struct SpiliOSUnityImplementation_t3920049011;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SpilGames.Unity.Spil
struct  Spil_t3960291416  : public MonoBehaviour_t3012272455
{
public:

public:
};

struct Spil_t3960291416_StaticFields
{
public:
	// SpilGames.Unity.Implementations.SpiliOSUnityImplementation SpilGames.Unity.Spil::Instance
	SpiliOSUnityImplementation_t3920049011 * ___Instance_2;

public:
	inline static int32_t get_offset_of_Instance_2() { return static_cast<int32_t>(offsetof(Spil_t3960291416_StaticFields, ___Instance_2)); }
	inline SpiliOSUnityImplementation_t3920049011 * get_Instance_2() const { return ___Instance_2; }
	inline SpiliOSUnityImplementation_t3920049011 ** get_address_of_Instance_2() { return &___Instance_2; }
	inline void set_Instance_2(SpiliOSUnityImplementation_t3920049011 * value)
	{
		___Instance_2 = value;
		Il2CppCodeGenWriteBarrier(&___Instance_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
