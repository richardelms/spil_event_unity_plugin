#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Xml.XmlNode
struct XmlNode_t3592213601;
// System.Collections.Generic.IList`1<Newtonsoft.Json.Converters.IXmlNode>
struct IList_1_t2480608002;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Newtonsoft.Json.Converters.XmlNodeWrapper
struct  XmlNodeWrapper_t3886750706  : public Il2CppObject
{
public:
	// System.Xml.XmlNode Newtonsoft.Json.Converters.XmlNodeWrapper::_node
	XmlNode_t3592213601 * ____node_0;
	// System.Collections.Generic.IList`1<Newtonsoft.Json.Converters.IXmlNode> Newtonsoft.Json.Converters.XmlNodeWrapper::_childNodes
	Il2CppObject* ____childNodes_1;

public:
	inline static int32_t get_offset_of__node_0() { return static_cast<int32_t>(offsetof(XmlNodeWrapper_t3886750706, ____node_0)); }
	inline XmlNode_t3592213601 * get__node_0() const { return ____node_0; }
	inline XmlNode_t3592213601 ** get_address_of__node_0() { return &____node_0; }
	inline void set__node_0(XmlNode_t3592213601 * value)
	{
		____node_0 = value;
		Il2CppCodeGenWriteBarrier(&____node_0, value);
	}

	inline static int32_t get_offset_of__childNodes_1() { return static_cast<int32_t>(offsetof(XmlNodeWrapper_t3886750706, ____childNodes_1)); }
	inline Il2CppObject* get__childNodes_1() const { return ____childNodes_1; }
	inline Il2CppObject** get_address_of__childNodes_1() { return &____childNodes_1; }
	inline void set__childNodes_1(Il2CppObject* value)
	{
		____childNodes_1 = value;
		Il2CppCodeGenWriteBarrier(&____childNodes_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
