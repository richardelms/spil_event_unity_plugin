#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.IEnumerator
struct IEnumerator_t287207039;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.XmlSchemaObjectEnumerator
struct  XmlSchemaObjectEnumerator_t3058853928  : public Il2CppObject
{
public:
	// System.Collections.IEnumerator System.Xml.Schema.XmlSchemaObjectEnumerator::ienum
	Il2CppObject * ___ienum_0;

public:
	inline static int32_t get_offset_of_ienum_0() { return static_cast<int32_t>(offsetof(XmlSchemaObjectEnumerator_t3058853928, ___ienum_0)); }
	inline Il2CppObject * get_ienum_0() const { return ___ienum_0; }
	inline Il2CppObject ** get_address_of_ienum_0() { return &___ienum_0; }
	inline void set_ienum_0(Il2CppObject * value)
	{
		___ienum_0 = value;
		Il2CppCodeGenWriteBarrier(&___ienum_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
