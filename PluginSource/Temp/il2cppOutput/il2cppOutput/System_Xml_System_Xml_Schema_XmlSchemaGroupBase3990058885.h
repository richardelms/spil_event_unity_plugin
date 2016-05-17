#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Xml.Schema.XmlSchemaObjectCollection
struct XmlSchemaObjectCollection_t2238201602;

#include "System_Xml_System_Xml_Schema_XmlSchemaParticle3696384587.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.XmlSchemaGroupBase
struct  XmlSchemaGroupBase_t3990058885  : public XmlSchemaParticle_t3696384587
{
public:
	// System.Xml.Schema.XmlSchemaObjectCollection System.Xml.Schema.XmlSchemaGroupBase::compiledItems
	XmlSchemaObjectCollection_t2238201602 * ___compiledItems_27;

public:
	inline static int32_t get_offset_of_compiledItems_27() { return static_cast<int32_t>(offsetof(XmlSchemaGroupBase_t3990058885, ___compiledItems_27)); }
	inline XmlSchemaObjectCollection_t2238201602 * get_compiledItems_27() const { return ___compiledItems_27; }
	inline XmlSchemaObjectCollection_t2238201602 ** get_address_of_compiledItems_27() { return &___compiledItems_27; }
	inline void set_compiledItems_27(XmlSchemaObjectCollection_t2238201602 * value)
	{
		___compiledItems_27 = value;
		Il2CppCodeGenWriteBarrier(&___compiledItems_27, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
