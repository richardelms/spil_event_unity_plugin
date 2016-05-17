#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t3709260776;
// System.Collections.Generic.List`1<System.Comparison`1<System.Object>>
struct List_1_t42772969;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Newtonsoft.Json.Utilities.LinqBridge.OrderedEnumerable`2<System.Object,System.Object>
struct  OrderedEnumerable_2_t3627834126  : public Il2CppObject
{
public:
	// System.Collections.Generic.IEnumerable`1<T> Newtonsoft.Json.Utilities.LinqBridge.OrderedEnumerable`2::_source
	Il2CppObject* ____source_0;
	// System.Collections.Generic.List`1<System.Comparison`1<T>> Newtonsoft.Json.Utilities.LinqBridge.OrderedEnumerable`2::_comparisons
	List_1_t42772969 * ____comparisons_1;

public:
	inline static int32_t get_offset_of__source_0() { return static_cast<int32_t>(offsetof(OrderedEnumerable_2_t3627834126, ____source_0)); }
	inline Il2CppObject* get__source_0() const { return ____source_0; }
	inline Il2CppObject** get_address_of__source_0() { return &____source_0; }
	inline void set__source_0(Il2CppObject* value)
	{
		____source_0 = value;
		Il2CppCodeGenWriteBarrier(&____source_0, value);
	}

	inline static int32_t get_offset_of__comparisons_1() { return static_cast<int32_t>(offsetof(OrderedEnumerable_2_t3627834126, ____comparisons_1)); }
	inline List_1_t42772969 * get__comparisons_1() const { return ____comparisons_1; }
	inline List_1_t42772969 ** get_address_of__comparisons_1() { return &____comparisons_1; }
	inline void set__comparisons_1(List_1_t42772969 * value)
	{
		____comparisons_1 = value;
		Il2CppCodeGenWriteBarrier(&____comparisons_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
