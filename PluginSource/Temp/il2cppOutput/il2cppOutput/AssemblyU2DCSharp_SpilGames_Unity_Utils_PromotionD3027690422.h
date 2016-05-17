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
#include "mscorlib_System_DateTime339033936.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SpilGames.Unity.Utils.PromotionData
struct  PromotionData_t3027690422  : public Il2CppObject
{
public:
	// System.String SpilGames.Unity.Utils.PromotionData::packageId
	String_t* ___packageId_0;
	// System.Collections.Generic.List`1<SpilGames.Unity.Utils.ItemData> SpilGames.Unity.Utils.PromotionData::items
	List_1_t3552739167 * ___items_1;
	// System.String SpilGames.Unity.Utils.PromotionData::discountLabel
	String_t* ___discountLabel_2;
	// System.DateTime SpilGames.Unity.Utils.PromotionData::startTime
	DateTime_t339033936  ___startTime_3;
	// System.DateTime SpilGames.Unity.Utils.PromotionData::endTime
	DateTime_t339033936  ___endTime_4;

public:
	inline static int32_t get_offset_of_packageId_0() { return static_cast<int32_t>(offsetof(PromotionData_t3027690422, ___packageId_0)); }
	inline String_t* get_packageId_0() const { return ___packageId_0; }
	inline String_t** get_address_of_packageId_0() { return &___packageId_0; }
	inline void set_packageId_0(String_t* value)
	{
		___packageId_0 = value;
		Il2CppCodeGenWriteBarrier(&___packageId_0, value);
	}

	inline static int32_t get_offset_of_items_1() { return static_cast<int32_t>(offsetof(PromotionData_t3027690422, ___items_1)); }
	inline List_1_t3552739167 * get_items_1() const { return ___items_1; }
	inline List_1_t3552739167 ** get_address_of_items_1() { return &___items_1; }
	inline void set_items_1(List_1_t3552739167 * value)
	{
		___items_1 = value;
		Il2CppCodeGenWriteBarrier(&___items_1, value);
	}

	inline static int32_t get_offset_of_discountLabel_2() { return static_cast<int32_t>(offsetof(PromotionData_t3027690422, ___discountLabel_2)); }
	inline String_t* get_discountLabel_2() const { return ___discountLabel_2; }
	inline String_t** get_address_of_discountLabel_2() { return &___discountLabel_2; }
	inline void set_discountLabel_2(String_t* value)
	{
		___discountLabel_2 = value;
		Il2CppCodeGenWriteBarrier(&___discountLabel_2, value);
	}

	inline static int32_t get_offset_of_startTime_3() { return static_cast<int32_t>(offsetof(PromotionData_t3027690422, ___startTime_3)); }
	inline DateTime_t339033936  get_startTime_3() const { return ___startTime_3; }
	inline DateTime_t339033936 * get_address_of_startTime_3() { return &___startTime_3; }
	inline void set_startTime_3(DateTime_t339033936  value)
	{
		___startTime_3 = value;
	}

	inline static int32_t get_offset_of_endTime_4() { return static_cast<int32_t>(offsetof(PromotionData_t3027690422, ___endTime_4)); }
	inline DateTime_t339033936  get_endTime_4() const { return ___endTime_4; }
	inline DateTime_t339033936 * get_address_of_endTime_4() { return &___endTime_4; }
	inline void set_endTime_4(DateTime_t339033936  value)
	{
		___endTime_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
