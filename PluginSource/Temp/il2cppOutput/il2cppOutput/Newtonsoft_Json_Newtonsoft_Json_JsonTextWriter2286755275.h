#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.IO.TextWriter
struct TextWriter_t1689927879;
// Newtonsoft.Json.Utilities.Base64Encoder
struct Base64Encoder_t1606947748;
// System.Boolean[]
struct BooleanU5BU5D_t3804927312;
// System.Char[]
struct CharU5BU5D_t3416858730;
// Newtonsoft.Json.IArrayPool`1<System.Char>
struct IArrayPool_1_t2231322832;

#include "Newtonsoft_Json_Newtonsoft_Json_JsonWriter1972966974.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Newtonsoft.Json.JsonTextWriter
struct  JsonTextWriter_t2286755275  : public JsonWriter_t1972966974
{
public:
	// System.IO.TextWriter Newtonsoft.Json.JsonTextWriter::_writer
	TextWriter_t1689927879 * ____writer_13;
	// Newtonsoft.Json.Utilities.Base64Encoder Newtonsoft.Json.JsonTextWriter::_base64Encoder
	Base64Encoder_t1606947748 * ____base64Encoder_14;
	// System.Char Newtonsoft.Json.JsonTextWriter::_indentChar
	uint16_t ____indentChar_15;
	// System.Int32 Newtonsoft.Json.JsonTextWriter::_indentation
	int32_t ____indentation_16;
	// System.Char Newtonsoft.Json.JsonTextWriter::_quoteChar
	uint16_t ____quoteChar_17;
	// System.Boolean Newtonsoft.Json.JsonTextWriter::_quoteName
	bool ____quoteName_18;
	// System.Boolean[] Newtonsoft.Json.JsonTextWriter::_charEscapeFlags
	BooleanU5BU5D_t3804927312* ____charEscapeFlags_19;
	// System.Char[] Newtonsoft.Json.JsonTextWriter::_writeBuffer
	CharU5BU5D_t3416858730* ____writeBuffer_20;
	// Newtonsoft.Json.IArrayPool`1<System.Char> Newtonsoft.Json.JsonTextWriter::_arrayPool
	Il2CppObject* ____arrayPool_21;
	// System.Char[] Newtonsoft.Json.JsonTextWriter::_indentChars
	CharU5BU5D_t3416858730* ____indentChars_22;

public:
	inline static int32_t get_offset_of__writer_13() { return static_cast<int32_t>(offsetof(JsonTextWriter_t2286755275, ____writer_13)); }
	inline TextWriter_t1689927879 * get__writer_13() const { return ____writer_13; }
	inline TextWriter_t1689927879 ** get_address_of__writer_13() { return &____writer_13; }
	inline void set__writer_13(TextWriter_t1689927879 * value)
	{
		____writer_13 = value;
		Il2CppCodeGenWriteBarrier(&____writer_13, value);
	}

	inline static int32_t get_offset_of__base64Encoder_14() { return static_cast<int32_t>(offsetof(JsonTextWriter_t2286755275, ____base64Encoder_14)); }
	inline Base64Encoder_t1606947748 * get__base64Encoder_14() const { return ____base64Encoder_14; }
	inline Base64Encoder_t1606947748 ** get_address_of__base64Encoder_14() { return &____base64Encoder_14; }
	inline void set__base64Encoder_14(Base64Encoder_t1606947748 * value)
	{
		____base64Encoder_14 = value;
		Il2CppCodeGenWriteBarrier(&____base64Encoder_14, value);
	}

	inline static int32_t get_offset_of__indentChar_15() { return static_cast<int32_t>(offsetof(JsonTextWriter_t2286755275, ____indentChar_15)); }
	inline uint16_t get__indentChar_15() const { return ____indentChar_15; }
	inline uint16_t* get_address_of__indentChar_15() { return &____indentChar_15; }
	inline void set__indentChar_15(uint16_t value)
	{
		____indentChar_15 = value;
	}

	inline static int32_t get_offset_of__indentation_16() { return static_cast<int32_t>(offsetof(JsonTextWriter_t2286755275, ____indentation_16)); }
	inline int32_t get__indentation_16() const { return ____indentation_16; }
	inline int32_t* get_address_of__indentation_16() { return &____indentation_16; }
	inline void set__indentation_16(int32_t value)
	{
		____indentation_16 = value;
	}

	inline static int32_t get_offset_of__quoteChar_17() { return static_cast<int32_t>(offsetof(JsonTextWriter_t2286755275, ____quoteChar_17)); }
	inline uint16_t get__quoteChar_17() const { return ____quoteChar_17; }
	inline uint16_t* get_address_of__quoteChar_17() { return &____quoteChar_17; }
	inline void set__quoteChar_17(uint16_t value)
	{
		____quoteChar_17 = value;
	}

	inline static int32_t get_offset_of__quoteName_18() { return static_cast<int32_t>(offsetof(JsonTextWriter_t2286755275, ____quoteName_18)); }
	inline bool get__quoteName_18() const { return ____quoteName_18; }
	inline bool* get_address_of__quoteName_18() { return &____quoteName_18; }
	inline void set__quoteName_18(bool value)
	{
		____quoteName_18 = value;
	}

	inline static int32_t get_offset_of__charEscapeFlags_19() { return static_cast<int32_t>(offsetof(JsonTextWriter_t2286755275, ____charEscapeFlags_19)); }
	inline BooleanU5BU5D_t3804927312* get__charEscapeFlags_19() const { return ____charEscapeFlags_19; }
	inline BooleanU5BU5D_t3804927312** get_address_of__charEscapeFlags_19() { return &____charEscapeFlags_19; }
	inline void set__charEscapeFlags_19(BooleanU5BU5D_t3804927312* value)
	{
		____charEscapeFlags_19 = value;
		Il2CppCodeGenWriteBarrier(&____charEscapeFlags_19, value);
	}

	inline static int32_t get_offset_of__writeBuffer_20() { return static_cast<int32_t>(offsetof(JsonTextWriter_t2286755275, ____writeBuffer_20)); }
	inline CharU5BU5D_t3416858730* get__writeBuffer_20() const { return ____writeBuffer_20; }
	inline CharU5BU5D_t3416858730** get_address_of__writeBuffer_20() { return &____writeBuffer_20; }
	inline void set__writeBuffer_20(CharU5BU5D_t3416858730* value)
	{
		____writeBuffer_20 = value;
		Il2CppCodeGenWriteBarrier(&____writeBuffer_20, value);
	}

	inline static int32_t get_offset_of__arrayPool_21() { return static_cast<int32_t>(offsetof(JsonTextWriter_t2286755275, ____arrayPool_21)); }
	inline Il2CppObject* get__arrayPool_21() const { return ____arrayPool_21; }
	inline Il2CppObject** get_address_of__arrayPool_21() { return &____arrayPool_21; }
	inline void set__arrayPool_21(Il2CppObject* value)
	{
		____arrayPool_21 = value;
		Il2CppCodeGenWriteBarrier(&____arrayPool_21, value);
	}

	inline static int32_t get_offset_of__indentChars_22() { return static_cast<int32_t>(offsetof(JsonTextWriter_t2286755275, ____indentChars_22)); }
	inline CharU5BU5D_t3416858730* get__indentChars_22() const { return ____indentChars_22; }
	inline CharU5BU5D_t3416858730** get_address_of__indentChars_22() { return &____indentChars_22; }
	inline void set__indentChars_22(CharU5BU5D_t3416858730* value)
	{
		____indentChars_22 = value;
		Il2CppCodeGenWriteBarrier(&____indentChars_22, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
