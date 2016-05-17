#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Object
struct Il2CppObject;
// System.Globalization.CultureInfo
struct CultureInfo_t3603717042;
// System.String
struct String_t;
// System.Collections.Generic.List`1<Newtonsoft.Json.JsonPosition>
struct List_1_t4201021933;

#include "mscorlib_System_Object837106420.h"
#include "Newtonsoft_Json_Newtonsoft_Json_JsonToken326031476.h"
#include "Newtonsoft_Json_Newtonsoft_Json_JsonReader_State80204913.h"
#include "Newtonsoft_Json_Newtonsoft_Json_JsonPosition3404062964.h"
#include "Newtonsoft_Json_Newtonsoft_Json_DateTimeZoneHandlin418377391.h"
#include "mscorlib_System_Nullable_1_gen1438485399.h"
#include "Newtonsoft_Json_Newtonsoft_Json_DateParseHandling2542055981.h"
#include "Newtonsoft_Json_Newtonsoft_Json_FloatParseHandling3634579071.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Newtonsoft.Json.JsonReader
struct  JsonReader_t1817561742  : public Il2CppObject
{
public:
	// Newtonsoft.Json.JsonToken Newtonsoft.Json.JsonReader::_tokenType
	int32_t ____tokenType_0;
	// System.Object Newtonsoft.Json.JsonReader::_value
	Il2CppObject * ____value_1;
	// System.Char Newtonsoft.Json.JsonReader::_quoteChar
	uint16_t ____quoteChar_2;
	// Newtonsoft.Json.JsonReader/State Newtonsoft.Json.JsonReader::_currentState
	int32_t ____currentState_3;
	// Newtonsoft.Json.JsonPosition Newtonsoft.Json.JsonReader::_currentPosition
	JsonPosition_t3404062964  ____currentPosition_4;
	// System.Globalization.CultureInfo Newtonsoft.Json.JsonReader::_culture
	CultureInfo_t3603717042 * ____culture_5;
	// Newtonsoft.Json.DateTimeZoneHandling Newtonsoft.Json.JsonReader::_dateTimeZoneHandling
	int32_t ____dateTimeZoneHandling_6;
	// System.Nullable`1<System.Int32> Newtonsoft.Json.JsonReader::_maxDepth
	Nullable_1_t1438485399  ____maxDepth_7;
	// System.Boolean Newtonsoft.Json.JsonReader::_hasExceededMaxDepth
	bool ____hasExceededMaxDepth_8;
	// Newtonsoft.Json.DateParseHandling Newtonsoft.Json.JsonReader::_dateParseHandling
	int32_t ____dateParseHandling_9;
	// Newtonsoft.Json.FloatParseHandling Newtonsoft.Json.JsonReader::_floatParseHandling
	int32_t ____floatParseHandling_10;
	// System.String Newtonsoft.Json.JsonReader::_dateFormatString
	String_t* ____dateFormatString_11;
	// System.Collections.Generic.List`1<Newtonsoft.Json.JsonPosition> Newtonsoft.Json.JsonReader::_stack
	List_1_t4201021933 * ____stack_12;
	// System.Boolean Newtonsoft.Json.JsonReader::<CloseInput>k__BackingField
	bool ___U3CCloseInputU3Ek__BackingField_13;
	// System.Boolean Newtonsoft.Json.JsonReader::<SupportMultipleContent>k__BackingField
	bool ___U3CSupportMultipleContentU3Ek__BackingField_14;

public:
	inline static int32_t get_offset_of__tokenType_0() { return static_cast<int32_t>(offsetof(JsonReader_t1817561742, ____tokenType_0)); }
	inline int32_t get__tokenType_0() const { return ____tokenType_0; }
	inline int32_t* get_address_of__tokenType_0() { return &____tokenType_0; }
	inline void set__tokenType_0(int32_t value)
	{
		____tokenType_0 = value;
	}

	inline static int32_t get_offset_of__value_1() { return static_cast<int32_t>(offsetof(JsonReader_t1817561742, ____value_1)); }
	inline Il2CppObject * get__value_1() const { return ____value_1; }
	inline Il2CppObject ** get_address_of__value_1() { return &____value_1; }
	inline void set__value_1(Il2CppObject * value)
	{
		____value_1 = value;
		Il2CppCodeGenWriteBarrier(&____value_1, value);
	}

	inline static int32_t get_offset_of__quoteChar_2() { return static_cast<int32_t>(offsetof(JsonReader_t1817561742, ____quoteChar_2)); }
	inline uint16_t get__quoteChar_2() const { return ____quoteChar_2; }
	inline uint16_t* get_address_of__quoteChar_2() { return &____quoteChar_2; }
	inline void set__quoteChar_2(uint16_t value)
	{
		____quoteChar_2 = value;
	}

	inline static int32_t get_offset_of__currentState_3() { return static_cast<int32_t>(offsetof(JsonReader_t1817561742, ____currentState_3)); }
	inline int32_t get__currentState_3() const { return ____currentState_3; }
	inline int32_t* get_address_of__currentState_3() { return &____currentState_3; }
	inline void set__currentState_3(int32_t value)
	{
		____currentState_3 = value;
	}

	inline static int32_t get_offset_of__currentPosition_4() { return static_cast<int32_t>(offsetof(JsonReader_t1817561742, ____currentPosition_4)); }
	inline JsonPosition_t3404062964  get__currentPosition_4() const { return ____currentPosition_4; }
	inline JsonPosition_t3404062964 * get_address_of__currentPosition_4() { return &____currentPosition_4; }
	inline void set__currentPosition_4(JsonPosition_t3404062964  value)
	{
		____currentPosition_4 = value;
	}

	inline static int32_t get_offset_of__culture_5() { return static_cast<int32_t>(offsetof(JsonReader_t1817561742, ____culture_5)); }
	inline CultureInfo_t3603717042 * get__culture_5() const { return ____culture_5; }
	inline CultureInfo_t3603717042 ** get_address_of__culture_5() { return &____culture_5; }
	inline void set__culture_5(CultureInfo_t3603717042 * value)
	{
		____culture_5 = value;
		Il2CppCodeGenWriteBarrier(&____culture_5, value);
	}

	inline static int32_t get_offset_of__dateTimeZoneHandling_6() { return static_cast<int32_t>(offsetof(JsonReader_t1817561742, ____dateTimeZoneHandling_6)); }
	inline int32_t get__dateTimeZoneHandling_6() const { return ____dateTimeZoneHandling_6; }
	inline int32_t* get_address_of__dateTimeZoneHandling_6() { return &____dateTimeZoneHandling_6; }
	inline void set__dateTimeZoneHandling_6(int32_t value)
	{
		____dateTimeZoneHandling_6 = value;
	}

	inline static int32_t get_offset_of__maxDepth_7() { return static_cast<int32_t>(offsetof(JsonReader_t1817561742, ____maxDepth_7)); }
	inline Nullable_1_t1438485399  get__maxDepth_7() const { return ____maxDepth_7; }
	inline Nullable_1_t1438485399 * get_address_of__maxDepth_7() { return &____maxDepth_7; }
	inline void set__maxDepth_7(Nullable_1_t1438485399  value)
	{
		____maxDepth_7 = value;
	}

	inline static int32_t get_offset_of__hasExceededMaxDepth_8() { return static_cast<int32_t>(offsetof(JsonReader_t1817561742, ____hasExceededMaxDepth_8)); }
	inline bool get__hasExceededMaxDepth_8() const { return ____hasExceededMaxDepth_8; }
	inline bool* get_address_of__hasExceededMaxDepth_8() { return &____hasExceededMaxDepth_8; }
	inline void set__hasExceededMaxDepth_8(bool value)
	{
		____hasExceededMaxDepth_8 = value;
	}

	inline static int32_t get_offset_of__dateParseHandling_9() { return static_cast<int32_t>(offsetof(JsonReader_t1817561742, ____dateParseHandling_9)); }
	inline int32_t get__dateParseHandling_9() const { return ____dateParseHandling_9; }
	inline int32_t* get_address_of__dateParseHandling_9() { return &____dateParseHandling_9; }
	inline void set__dateParseHandling_9(int32_t value)
	{
		____dateParseHandling_9 = value;
	}

	inline static int32_t get_offset_of__floatParseHandling_10() { return static_cast<int32_t>(offsetof(JsonReader_t1817561742, ____floatParseHandling_10)); }
	inline int32_t get__floatParseHandling_10() const { return ____floatParseHandling_10; }
	inline int32_t* get_address_of__floatParseHandling_10() { return &____floatParseHandling_10; }
	inline void set__floatParseHandling_10(int32_t value)
	{
		____floatParseHandling_10 = value;
	}

	inline static int32_t get_offset_of__dateFormatString_11() { return static_cast<int32_t>(offsetof(JsonReader_t1817561742, ____dateFormatString_11)); }
	inline String_t* get__dateFormatString_11() const { return ____dateFormatString_11; }
	inline String_t** get_address_of__dateFormatString_11() { return &____dateFormatString_11; }
	inline void set__dateFormatString_11(String_t* value)
	{
		____dateFormatString_11 = value;
		Il2CppCodeGenWriteBarrier(&____dateFormatString_11, value);
	}

	inline static int32_t get_offset_of__stack_12() { return static_cast<int32_t>(offsetof(JsonReader_t1817561742, ____stack_12)); }
	inline List_1_t4201021933 * get__stack_12() const { return ____stack_12; }
	inline List_1_t4201021933 ** get_address_of__stack_12() { return &____stack_12; }
	inline void set__stack_12(List_1_t4201021933 * value)
	{
		____stack_12 = value;
		Il2CppCodeGenWriteBarrier(&____stack_12, value);
	}

	inline static int32_t get_offset_of_U3CCloseInputU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(JsonReader_t1817561742, ___U3CCloseInputU3Ek__BackingField_13)); }
	inline bool get_U3CCloseInputU3Ek__BackingField_13() const { return ___U3CCloseInputU3Ek__BackingField_13; }
	inline bool* get_address_of_U3CCloseInputU3Ek__BackingField_13() { return &___U3CCloseInputU3Ek__BackingField_13; }
	inline void set_U3CCloseInputU3Ek__BackingField_13(bool value)
	{
		___U3CCloseInputU3Ek__BackingField_13 = value;
	}

	inline static int32_t get_offset_of_U3CSupportMultipleContentU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(JsonReader_t1817561742, ___U3CSupportMultipleContentU3Ek__BackingField_14)); }
	inline bool get_U3CSupportMultipleContentU3Ek__BackingField_14() const { return ___U3CSupportMultipleContentU3Ek__BackingField_14; }
	inline bool* get_address_of_U3CSupportMultipleContentU3Ek__BackingField_14() { return &___U3CSupportMultipleContentU3Ek__BackingField_14; }
	inline void set_U3CSupportMultipleContentU3Ek__BackingField_14(bool value)
	{
		___U3CSupportMultipleContentU3Ek__BackingField_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
