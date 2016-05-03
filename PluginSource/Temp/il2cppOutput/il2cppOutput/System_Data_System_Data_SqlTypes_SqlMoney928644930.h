#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t3411951076;

#include "mscorlib_System_ValueType4014882752.h"
#include "mscorlib_System_Decimal1688557254.h"
#include "System_Data_System_Data_SqlTypes_SqlMoney928644930.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.SqlTypes.SqlMoney
struct  SqlMoney_t928644930 
{
public:
	// System.Decimal System.Data.SqlTypes.SqlMoney::value
	Decimal_t1688557254  ___value_0;
	// System.Boolean System.Data.SqlTypes.SqlMoney::notNull
	bool ___notNull_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(SqlMoney_t928644930, ___value_0)); }
	inline Decimal_t1688557254  get_value_0() const { return ___value_0; }
	inline Decimal_t1688557254 * get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(Decimal_t1688557254  value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_notNull_1() { return static_cast<int32_t>(offsetof(SqlMoney_t928644930, ___notNull_1)); }
	inline bool get_notNull_1() const { return ___notNull_1; }
	inline bool* get_address_of_notNull_1() { return &___notNull_1; }
	inline void set_notNull_1(bool value)
	{
		___notNull_1 = value;
	}
};

struct SqlMoney_t928644930_StaticFields
{
public:
	// System.Data.SqlTypes.SqlMoney System.Data.SqlTypes.SqlMoney::MaxValue
	SqlMoney_t928644930  ___MaxValue_2;
	// System.Data.SqlTypes.SqlMoney System.Data.SqlTypes.SqlMoney::MinValue
	SqlMoney_t928644930  ___MinValue_3;
	// System.Data.SqlTypes.SqlMoney System.Data.SqlTypes.SqlMoney::Null
	SqlMoney_t928644930  ___Null_4;
	// System.Data.SqlTypes.SqlMoney System.Data.SqlTypes.SqlMoney::Zero
	SqlMoney_t928644930  ___Zero_5;
	// System.Globalization.NumberFormatInfo System.Data.SqlTypes.SqlMoney::MoneyFormat
	NumberFormatInfo_t3411951076 * ___MoneyFormat_6;

public:
	inline static int32_t get_offset_of_MaxValue_2() { return static_cast<int32_t>(offsetof(SqlMoney_t928644930_StaticFields, ___MaxValue_2)); }
	inline SqlMoney_t928644930  get_MaxValue_2() const { return ___MaxValue_2; }
	inline SqlMoney_t928644930 * get_address_of_MaxValue_2() { return &___MaxValue_2; }
	inline void set_MaxValue_2(SqlMoney_t928644930  value)
	{
		___MaxValue_2 = value;
	}

	inline static int32_t get_offset_of_MinValue_3() { return static_cast<int32_t>(offsetof(SqlMoney_t928644930_StaticFields, ___MinValue_3)); }
	inline SqlMoney_t928644930  get_MinValue_3() const { return ___MinValue_3; }
	inline SqlMoney_t928644930 * get_address_of_MinValue_3() { return &___MinValue_3; }
	inline void set_MinValue_3(SqlMoney_t928644930  value)
	{
		___MinValue_3 = value;
	}

	inline static int32_t get_offset_of_Null_4() { return static_cast<int32_t>(offsetof(SqlMoney_t928644930_StaticFields, ___Null_4)); }
	inline SqlMoney_t928644930  get_Null_4() const { return ___Null_4; }
	inline SqlMoney_t928644930 * get_address_of_Null_4() { return &___Null_4; }
	inline void set_Null_4(SqlMoney_t928644930  value)
	{
		___Null_4 = value;
	}

	inline static int32_t get_offset_of_Zero_5() { return static_cast<int32_t>(offsetof(SqlMoney_t928644930_StaticFields, ___Zero_5)); }
	inline SqlMoney_t928644930  get_Zero_5() const { return ___Zero_5; }
	inline SqlMoney_t928644930 * get_address_of_Zero_5() { return &___Zero_5; }
	inline void set_Zero_5(SqlMoney_t928644930  value)
	{
		___Zero_5 = value;
	}

	inline static int32_t get_offset_of_MoneyFormat_6() { return static_cast<int32_t>(offsetof(SqlMoney_t928644930_StaticFields, ___MoneyFormat_6)); }
	inline NumberFormatInfo_t3411951076 * get_MoneyFormat_6() const { return ___MoneyFormat_6; }
	inline NumberFormatInfo_t3411951076 ** get_address_of_MoneyFormat_6() { return &___MoneyFormat_6; }
	inline void set_MoneyFormat_6(NumberFormatInfo_t3411951076 * value)
	{
		___MoneyFormat_6 = value;
		Il2CppCodeGenWriteBarrier(&___MoneyFormat_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for marshalling of: System.Data.SqlTypes.SqlMoney
struct SqlMoney_t928644930_marshaled_pinvoke
{
	Decimal_t1688557254_marshaled_pinvoke ___value_0;
	int32_t ___notNull_1;
};
// Native definition for marshalling of: System.Data.SqlTypes.SqlMoney
struct SqlMoney_t928644930_marshaled_com
{
	Decimal_t1688557254_marshaled_com ___value_0;
	int32_t ___notNull_1;
};
