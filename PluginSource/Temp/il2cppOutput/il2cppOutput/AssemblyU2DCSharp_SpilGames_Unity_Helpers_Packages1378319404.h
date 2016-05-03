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

// SpilGames.Unity.Helpers.PackagesHelper/<GetPackageById>c__AnonStorey3
struct  U3CGetPackageByIdU3Ec__AnonStorey3_t1378319404  : public Il2CppObject
{
public:
	// System.String SpilGames.Unity.Helpers.PackagesHelper/<GetPackageById>c__AnonStorey3::packageId
	String_t* ___packageId_0;

public:
	inline static int32_t get_offset_of_packageId_0() { return static_cast<int32_t>(offsetof(U3CGetPackageByIdU3Ec__AnonStorey3_t1378319404, ___packageId_0)); }
	inline String_t* get_packageId_0() const { return ___packageId_0; }
	inline String_t** get_address_of_packageId_0() { return &___packageId_0; }
	inline void set_packageId_0(String_t* value)
	{
		___packageId_0 = value;
		Il2CppCodeGenWriteBarrier(&___packageId_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
