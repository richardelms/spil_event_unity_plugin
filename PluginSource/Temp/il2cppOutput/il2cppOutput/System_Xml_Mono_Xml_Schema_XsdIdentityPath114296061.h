#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Mono.Xml.Schema.XsdIdentityStep[]
struct XsdIdentityStepU5BU5D_t664285517;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Xml.Schema.XsdIdentityPath
struct  XsdIdentityPath_t114296061  : public Il2CppObject
{
public:
	// Mono.Xml.Schema.XsdIdentityStep[] Mono.Xml.Schema.XsdIdentityPath::OrderedSteps
	XsdIdentityStepU5BU5D_t664285517* ___OrderedSteps_0;
	// System.Boolean Mono.Xml.Schema.XsdIdentityPath::Descendants
	bool ___Descendants_1;

public:
	inline static int32_t get_offset_of_OrderedSteps_0() { return static_cast<int32_t>(offsetof(XsdIdentityPath_t114296061, ___OrderedSteps_0)); }
	inline XsdIdentityStepU5BU5D_t664285517* get_OrderedSteps_0() const { return ___OrderedSteps_0; }
	inline XsdIdentityStepU5BU5D_t664285517** get_address_of_OrderedSteps_0() { return &___OrderedSteps_0; }
	inline void set_OrderedSteps_0(XsdIdentityStepU5BU5D_t664285517* value)
	{
		___OrderedSteps_0 = value;
		Il2CppCodeGenWriteBarrier(&___OrderedSteps_0, value);
	}

	inline static int32_t get_offset_of_Descendants_1() { return static_cast<int32_t>(offsetof(XsdIdentityPath_t114296061, ___Descendants_1)); }
	inline bool get_Descendants_1() const { return ___Descendants_1; }
	inline bool* get_address_of_Descendants_1() { return &___Descendants_1; }
	inline void set_Descendants_1(bool value)
	{
		___Descendants_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
