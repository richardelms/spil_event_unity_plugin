#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Newtonsoft.Json.Linq.JPropertyKeyedCollection
struct JPropertyKeyedCollection_t199814964;
// System.ComponentModel.PropertyChangedEventHandler
struct PropertyChangedEventHandler_t2898121368;

#include "Newtonsoft_Json_Newtonsoft_Json_Linq_JContainer103968846.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Newtonsoft.Json.Linq.JObject
struct  JObject_t3774284064  : public JContainer_t103968846
{
public:
	// Newtonsoft.Json.Linq.JPropertyKeyedCollection Newtonsoft.Json.Linq.JObject::_properties
	JPropertyKeyedCollection_t199814964 * ____properties_16;
	// System.ComponentModel.PropertyChangedEventHandler Newtonsoft.Json.Linq.JObject::PropertyChanged
	PropertyChangedEventHandler_t2898121368 * ___PropertyChanged_17;

public:
	inline static int32_t get_offset_of__properties_16() { return static_cast<int32_t>(offsetof(JObject_t3774284064, ____properties_16)); }
	inline JPropertyKeyedCollection_t199814964 * get__properties_16() const { return ____properties_16; }
	inline JPropertyKeyedCollection_t199814964 ** get_address_of__properties_16() { return &____properties_16; }
	inline void set__properties_16(JPropertyKeyedCollection_t199814964 * value)
	{
		____properties_16 = value;
		Il2CppCodeGenWriteBarrier(&____properties_16, value);
	}

	inline static int32_t get_offset_of_PropertyChanged_17() { return static_cast<int32_t>(offsetof(JObject_t3774284064, ___PropertyChanged_17)); }
	inline PropertyChangedEventHandler_t2898121368 * get_PropertyChanged_17() const { return ___PropertyChanged_17; }
	inline PropertyChangedEventHandler_t2898121368 ** get_address_of_PropertyChanged_17() { return &___PropertyChanged_17; }
	inline void set_PropertyChanged_17(PropertyChangedEventHandler_t2898121368 * value)
	{
		___PropertyChanged_17 = value;
		Il2CppCodeGenWriteBarrier(&___PropertyChanged_17, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
