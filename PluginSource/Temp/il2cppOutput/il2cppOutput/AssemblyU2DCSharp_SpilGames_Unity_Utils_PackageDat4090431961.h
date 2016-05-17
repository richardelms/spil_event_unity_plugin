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
// System.Collections.Generic.List`1<SpilGames.Unity.Utils.ItemData>
struct List_1_t3552739167;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SpilGames.Unity.Utils.PackageData
struct  PackageData_t4090431961  : public Il2CppObject
{
public:
	// System.String SpilGames.Unity.Utils.PackageData::packageId
	String_t* ___packageId_0;
	// System.Collections.Generic.List`1<SpilGames.Unity.Utils.ItemData> SpilGames.Unity.Utils.PackageData::items
	List_1_t3552739167 * ___items_1;
	// System.String SpilGames.Unity.Utils.PackageData::discountLabel
	String_t* ___discountLabel_2;
	// System.Boolean SpilGames.Unity.Utils.PackageData::hasPromotion
	bool ___hasPromotion_3;

public:
	inline static int32_t get_offset_of_packageId_0() { return static_cast<int32_t>(offsetof(PackageData_t4090431961, ___packageId_0)); }
	inline String_t* get_packageId_0() const { return ___packageId_0; }
	inline String_t** get_address_of_packageId_0() { return &___packageId_0; }
	inline void set_packageId_0(String_t* value)
	{
		___packageId_0 = value;
		Il2CppCodeGenWriteBarrier(&___packageId_0, value);
	}

	inline static int32_t get_offset_of_items_1() { return static_cast<int32_t>(offsetof(PackageData_t4090431961, ___items_1)); }
	inline List_1_t3552739167 * get_items_1() const { return ___items_1; }
	inline List_1_t3552739167 ** get_address_of_items_1() { return &___items_1; }
	inline void set_items_1(List_1_t3552739167 * value)
	{
		___items_1 = value;
		Il2CppCodeGenWriteBarrier(&___items_1, value);
	}

	inline static int32_t get_offset_of_discountLabel_2() { return static_cast<int32_t>(offsetof(PackageData_t4090431961, ___discountLabel_2)); }
	inline String_t* get_discountLabel_2() const { return ___discountLabel_2; }
	inline String_t** get_address_of_discountLabel_2() { return &___discountLabel_2; }
	inline void set_discountLabel_2(String_t* value)
	{
		___discountLabel_2 = value;
		Il2CppCodeGenWriteBarrier(&___discountLabel_2, value);
	}

	inline static int32_t get_offset_of_hasPromotion_3() { return static_cast<int32_t>(offsetof(PackageData_t4090431961, ___hasPromotion_3)); }
	inline bool get_hasPromotion_3() const { return ___hasPromotion_3; }
	inline bool* get_address_of_hasPromotion_3() { return &___hasPromotion_3; }
	inline void set_hasPromotion_3(bool value)
	{
		___hasPromotion_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
