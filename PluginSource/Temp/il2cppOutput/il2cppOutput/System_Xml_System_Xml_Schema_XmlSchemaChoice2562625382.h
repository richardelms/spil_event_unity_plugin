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

#include "System_Xml_System_Xml_Schema_XmlSchemaGroupBase3990058885.h"
#include "mscorlib_System_Decimal1688557254.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.XmlSchemaChoice
struct  XmlSchemaChoice_t2562625382  : public XmlSchemaGroupBase_t3990058885
{
public:
	// System.Xml.Schema.XmlSchemaObjectCollection System.Xml.Schema.XmlSchemaChoice::items
	XmlSchemaObjectCollection_t2238201602 * ___items_28;
	// System.Decimal System.Xml.Schema.XmlSchemaChoice::minEffectiveTotalRange
	Decimal_t1688557254  ___minEffectiveTotalRange_29;

public:
	inline static int32_t get_offset_of_items_28() { return static_cast<int32_t>(offsetof(XmlSchemaChoice_t2562625382, ___items_28)); }
	inline XmlSchemaObjectCollection_t2238201602 * get_items_28() const { return ___items_28; }
	inline XmlSchemaObjectCollection_t2238201602 ** get_address_of_items_28() { return &___items_28; }
	inline void set_items_28(XmlSchemaObjectCollection_t2238201602 * value)
	{
		___items_28 = value;
		Il2CppCodeGenWriteBarrier(&___items_28, value);
	}

	inline static int32_t get_offset_of_minEffectiveTotalRange_29() { return static_cast<int32_t>(offsetof(XmlSchemaChoice_t2562625382, ___minEffectiveTotalRange_29)); }
	inline Decimal_t1688557254  get_minEffectiveTotalRange_29() const { return ___minEffectiveTotalRange_29; }
	inline Decimal_t1688557254 * get_address_of_minEffectiveTotalRange_29() { return &___minEffectiveTotalRange_29; }
	inline void set_minEffectiveTotalRange_29(Decimal_t1688557254  value)
	{
		___minEffectiveTotalRange_29 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
