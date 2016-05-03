#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.IComparer`1<System.Int32>
struct IComparer_1_t1252154900;
// Newtonsoft.Json.Serialization.Func`2<System.Object,System.Int32>
struct Func_2_t2391434803;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Newtonsoft.Json.Utilities.LinqBridge.OrderedEnumerable`2/<>c__DisplayClass3_0<System.Object,System.Int32>
struct  U3CU3Ec__DisplayClass3_0_t176203981  : public Il2CppObject
{
public:
	// System.Boolean Newtonsoft.Json.Utilities.LinqBridge.OrderedEnumerable`2/<>c__DisplayClass3_0::descending
	bool ___descending_0;
	// System.Collections.Generic.IComparer`1<K> Newtonsoft.Json.Utilities.LinqBridge.OrderedEnumerable`2/<>c__DisplayClass3_0::comparer
	Il2CppObject* ___comparer_1;
	// Newtonsoft.Json.Serialization.Func`2<T,K> Newtonsoft.Json.Utilities.LinqBridge.OrderedEnumerable`2/<>c__DisplayClass3_0::keySelector
	Func_2_t2391434803 * ___keySelector_2;

public:
	inline static int32_t get_offset_of_descending_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass3_0_t176203981, ___descending_0)); }
	inline bool get_descending_0() const { return ___descending_0; }
	inline bool* get_address_of_descending_0() { return &___descending_0; }
	inline void set_descending_0(bool value)
	{
		___descending_0 = value;
	}

	inline static int32_t get_offset_of_comparer_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass3_0_t176203981, ___comparer_1)); }
	inline Il2CppObject* get_comparer_1() const { return ___comparer_1; }
	inline Il2CppObject** get_address_of_comparer_1() { return &___comparer_1; }
	inline void set_comparer_1(Il2CppObject* value)
	{
		___comparer_1 = value;
		Il2CppCodeGenWriteBarrier(&___comparer_1, value);
	}

	inline static int32_t get_offset_of_keySelector_2() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass3_0_t176203981, ___keySelector_2)); }
	inline Func_2_t2391434803 * get_keySelector_2() const { return ___keySelector_2; }
	inline Func_2_t2391434803 ** get_address_of_keySelector_2() { return &___keySelector_2; }
	inline void set_keySelector_2(Func_2_t2391434803 * value)
	{
		___keySelector_2 = value;
		Il2CppCodeGenWriteBarrier(&___keySelector_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
