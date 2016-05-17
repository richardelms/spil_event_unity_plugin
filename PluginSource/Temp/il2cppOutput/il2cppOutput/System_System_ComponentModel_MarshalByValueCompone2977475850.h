#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.ComponentModel.ISite
struct ISite_t19613145;
// System.Object
struct Il2CppObject;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.MarshalByValueComponent
struct  MarshalByValueComponent_t2977475850  : public Il2CppObject
{
public:
	// System.ComponentModel.ISite System.ComponentModel.MarshalByValueComponent::mySite
	Il2CppObject * ___mySite_0;
	// System.Object System.ComponentModel.MarshalByValueComponent::disposedEvent
	Il2CppObject * ___disposedEvent_1;

public:
	inline static int32_t get_offset_of_mySite_0() { return static_cast<int32_t>(offsetof(MarshalByValueComponent_t2977475850, ___mySite_0)); }
	inline Il2CppObject * get_mySite_0() const { return ___mySite_0; }
	inline Il2CppObject ** get_address_of_mySite_0() { return &___mySite_0; }
	inline void set_mySite_0(Il2CppObject * value)
	{
		___mySite_0 = value;
		Il2CppCodeGenWriteBarrier(&___mySite_0, value);
	}

	inline static int32_t get_offset_of_disposedEvent_1() { return static_cast<int32_t>(offsetof(MarshalByValueComponent_t2977475850, ___disposedEvent_1)); }
	inline Il2CppObject * get_disposedEvent_1() const { return ___disposedEvent_1; }
	inline Il2CppObject ** get_address_of_disposedEvent_1() { return &___disposedEvent_1; }
	inline void set_disposedEvent_1(Il2CppObject * value)
	{
		___disposedEvent_1 = value;
		Il2CppCodeGenWriteBarrier(&___disposedEvent_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
