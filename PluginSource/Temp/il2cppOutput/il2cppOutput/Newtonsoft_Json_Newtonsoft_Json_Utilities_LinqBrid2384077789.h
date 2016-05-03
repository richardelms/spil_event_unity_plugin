#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.Dictionary`2<System.Object,Newtonsoft.Json.Utilities.LinqBridge.IGrouping`2<System.Object,System.Object>>
struct Dictionary_2_t2431952093;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Newtonsoft.Json.Utilities.LinqBridge.Lookup`2<System.Object,System.Object>
struct  Lookup_2_t2384077789  : public Il2CppObject
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,Newtonsoft.Json.Utilities.LinqBridge.IGrouping`2<TKey,TElement>> Newtonsoft.Json.Utilities.LinqBridge.Lookup`2::_map
	Dictionary_2_t2431952093 * ____map_0;

public:
	inline static int32_t get_offset_of__map_0() { return static_cast<int32_t>(offsetof(Lookup_2_t2384077789, ____map_0)); }
	inline Dictionary_2_t2431952093 * get__map_0() const { return ____map_0; }
	inline Dictionary_2_t2431952093 ** get_address_of__map_0() { return &____map_0; }
	inline void set__map_0(Dictionary_2_t2431952093 * value)
	{
		____map_0 = value;
		Il2CppCodeGenWriteBarrier(&____map_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
