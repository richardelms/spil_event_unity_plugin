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
// System.Collections.Generic.List`1<SpilGames.Unity.Helpers.Item>
struct List_1_t3856341489;

#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_DateTime339033936.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SpilGames.Unity.Helpers.Package
struct  Package_t3914683883  : public Il2CppObject
{
public:
	// System.String SpilGames.Unity.Helpers.Package::id
	String_t* ___id_0;
	// System.String SpilGames.Unity.Helpers.Package::originalDiscountLabel
	String_t* ___originalDiscountLabel_1;
	// System.String SpilGames.Unity.Helpers.Package::promotionDiscountLabel
	String_t* ___promotionDiscountLabel_2;
	// System.DateTime SpilGames.Unity.Helpers.Package::promotionBeginDate
	DateTime_t339033936  ___promotionBeginDate_3;
	// System.DateTime SpilGames.Unity.Helpers.Package::promotionEndDate
	DateTime_t339033936  ___promotionEndDate_4;
	// System.Collections.Generic.List`1<SpilGames.Unity.Helpers.Item> SpilGames.Unity.Helpers.Package::Items
	List_1_t3856341489 * ___Items_5;

public:
	inline static int32_t get_offset_of_id_0() { return static_cast<int32_t>(offsetof(Package_t3914683883, ___id_0)); }
	inline String_t* get_id_0() const { return ___id_0; }
	inline String_t** get_address_of_id_0() { return &___id_0; }
	inline void set_id_0(String_t* value)
	{
		___id_0 = value;
		Il2CppCodeGenWriteBarrier(&___id_0, value);
	}

	inline static int32_t get_offset_of_originalDiscountLabel_1() { return static_cast<int32_t>(offsetof(Package_t3914683883, ___originalDiscountLabel_1)); }
	inline String_t* get_originalDiscountLabel_1() const { return ___originalDiscountLabel_1; }
	inline String_t** get_address_of_originalDiscountLabel_1() { return &___originalDiscountLabel_1; }
	inline void set_originalDiscountLabel_1(String_t* value)
	{
		___originalDiscountLabel_1 = value;
		Il2CppCodeGenWriteBarrier(&___originalDiscountLabel_1, value);
	}

	inline static int32_t get_offset_of_promotionDiscountLabel_2() { return static_cast<int32_t>(offsetof(Package_t3914683883, ___promotionDiscountLabel_2)); }
	inline String_t* get_promotionDiscountLabel_2() const { return ___promotionDiscountLabel_2; }
	inline String_t** get_address_of_promotionDiscountLabel_2() { return &___promotionDiscountLabel_2; }
	inline void set_promotionDiscountLabel_2(String_t* value)
	{
		___promotionDiscountLabel_2 = value;
		Il2CppCodeGenWriteBarrier(&___promotionDiscountLabel_2, value);
	}

	inline static int32_t get_offset_of_promotionBeginDate_3() { return static_cast<int32_t>(offsetof(Package_t3914683883, ___promotionBeginDate_3)); }
	inline DateTime_t339033936  get_promotionBeginDate_3() const { return ___promotionBeginDate_3; }
	inline DateTime_t339033936 * get_address_of_promotionBeginDate_3() { return &___promotionBeginDate_3; }
	inline void set_promotionBeginDate_3(DateTime_t339033936  value)
	{
		___promotionBeginDate_3 = value;
	}

	inline static int32_t get_offset_of_promotionEndDate_4() { return static_cast<int32_t>(offsetof(Package_t3914683883, ___promotionEndDate_4)); }
	inline DateTime_t339033936  get_promotionEndDate_4() const { return ___promotionEndDate_4; }
	inline DateTime_t339033936 * get_address_of_promotionEndDate_4() { return &___promotionEndDate_4; }
	inline void set_promotionEndDate_4(DateTime_t339033936  value)
	{
		___promotionEndDate_4 = value;
	}

	inline static int32_t get_offset_of_Items_5() { return static_cast<int32_t>(offsetof(Package_t3914683883, ___Items_5)); }
	inline List_1_t3856341489 * get_Items_5() const { return ___Items_5; }
	inline List_1_t3856341489 ** get_address_of_Items_5() { return &___Items_5; }
	inline void set_Items_5(List_1_t3856341489 * value)
	{
		___Items_5 = value;
		Il2CppCodeGenWriteBarrier(&___Items_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
