#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<SpilGames.Unity.Utils.PackageData>
struct List_1_t592423634;
// System.Collections.Generic.List`1<SpilGames.Unity.Utils.PromotionData>
struct List_1_t3824649391;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SpilGames.Unity.Utils.PackagesData
struct  PackagesData_t4113443648  : public Il2CppObject
{
public:
	// System.Collections.Generic.List`1<SpilGames.Unity.Utils.PackageData> SpilGames.Unity.Utils.PackagesData::packages
	List_1_t592423634 * ___packages_0;
	// System.Collections.Generic.List`1<SpilGames.Unity.Utils.PromotionData> SpilGames.Unity.Utils.PackagesData::promotions
	List_1_t3824649391 * ___promotions_1;

public:
	inline static int32_t get_offset_of_packages_0() { return static_cast<int32_t>(offsetof(PackagesData_t4113443648, ___packages_0)); }
	inline List_1_t592423634 * get_packages_0() const { return ___packages_0; }
	inline List_1_t592423634 ** get_address_of_packages_0() { return &___packages_0; }
	inline void set_packages_0(List_1_t592423634 * value)
	{
		___packages_0 = value;
		Il2CppCodeGenWriteBarrier(&___packages_0, value);
	}

	inline static int32_t get_offset_of_promotions_1() { return static_cast<int32_t>(offsetof(PackagesData_t4113443648, ___promotions_1)); }
	inline List_1_t3824649391 * get_promotions_1() const { return ___promotions_1; }
	inline List_1_t3824649391 ** get_address_of_promotions_1() { return &___promotions_1; }
	inline void set_promotions_1(List_1_t3824649391 * value)
	{
		___promotions_1 = value;
		Il2CppCodeGenWriteBarrier(&___promotions_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
