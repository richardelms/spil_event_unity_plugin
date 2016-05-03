#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.ComponentModel.ListChangedEventHandler
struct ListChangedEventHandler_t3535012143;
// System.Object
struct Il2CppObject;

#include "Newtonsoft_Json_Newtonsoft_Json_Linq_JToken2367600838.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Newtonsoft.Json.Linq.JContainer
struct  JContainer_t103968846  : public JToken_t2367600838
{
public:
	// System.ComponentModel.ListChangedEventHandler Newtonsoft.Json.Linq.JContainer::_listChanged
	ListChangedEventHandler_t3535012143 * ____listChanged_13;
	// System.Object Newtonsoft.Json.Linq.JContainer::_syncRoot
	Il2CppObject * ____syncRoot_14;
	// System.Boolean Newtonsoft.Json.Linq.JContainer::_busy
	bool ____busy_15;

public:
	inline static int32_t get_offset_of__listChanged_13() { return static_cast<int32_t>(offsetof(JContainer_t103968846, ____listChanged_13)); }
	inline ListChangedEventHandler_t3535012143 * get__listChanged_13() const { return ____listChanged_13; }
	inline ListChangedEventHandler_t3535012143 ** get_address_of__listChanged_13() { return &____listChanged_13; }
	inline void set__listChanged_13(ListChangedEventHandler_t3535012143 * value)
	{
		____listChanged_13 = value;
		Il2CppCodeGenWriteBarrier(&____listChanged_13, value);
	}

	inline static int32_t get_offset_of__syncRoot_14() { return static_cast<int32_t>(offsetof(JContainer_t103968846, ____syncRoot_14)); }
	inline Il2CppObject * get__syncRoot_14() const { return ____syncRoot_14; }
	inline Il2CppObject ** get_address_of__syncRoot_14() { return &____syncRoot_14; }
	inline void set__syncRoot_14(Il2CppObject * value)
	{
		____syncRoot_14 = value;
		Il2CppCodeGenWriteBarrier(&____syncRoot_14, value);
	}

	inline static int32_t get_offset_of__busy_15() { return static_cast<int32_t>(offsetof(JContainer_t103968846, ____busy_15)); }
	inline bool get__busy_15() const { return ____busy_15; }
	inline bool* get_address_of__busy_15() { return &____busy_15; }
	inline void set__busy_15(bool value)
	{
		____busy_15 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
