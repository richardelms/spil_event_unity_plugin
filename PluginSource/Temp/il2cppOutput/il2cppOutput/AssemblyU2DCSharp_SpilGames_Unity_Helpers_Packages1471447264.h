#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<SpilGames.Unity.Helpers.Package>
struct List_1_t416675556;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SpilGames.Unity.Helpers.PackagesHelper
struct  PackagesHelper_t1471447264  : public Il2CppObject
{
public:
	// System.Collections.Generic.List`1<SpilGames.Unity.Helpers.Package> SpilGames.Unity.Helpers.PackagesHelper::Packages
	List_1_t416675556 * ___Packages_0;

public:
	inline static int32_t get_offset_of_Packages_0() { return static_cast<int32_t>(offsetof(PackagesHelper_t1471447264, ___Packages_0)); }
	inline List_1_t416675556 * get_Packages_0() const { return ___Packages_0; }
	inline List_1_t416675556 ** get_address_of_Packages_0() { return &___Packages_0; }
	inline void set_Packages_0(List_1_t416675556 * value)
	{
		___Packages_0 = value;
		Il2CppCodeGenWriteBarrier(&___Packages_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
