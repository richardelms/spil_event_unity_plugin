﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Newtonsoft.Json.Bson.BsonBinaryWriter
struct BsonBinaryWriter_t3553243979;
// Newtonsoft.Json.Bson.BsonToken
struct BsonToken_t1714632464;
// System.String
struct String_t;

#include "Newtonsoft_Json_Newtonsoft_Json_JsonWriter1972966974.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Newtonsoft.Json.Bson.BsonWriter
struct  BsonWriter_t3358942186  : public JsonWriter_t1972966974
{
public:
	// Newtonsoft.Json.Bson.BsonBinaryWriter Newtonsoft.Json.Bson.BsonWriter::_writer
	BsonBinaryWriter_t3553243979 * ____writer_13;
	// Newtonsoft.Json.Bson.BsonToken Newtonsoft.Json.Bson.BsonWriter::_root
	BsonToken_t1714632464 * ____root_14;
	// Newtonsoft.Json.Bson.BsonToken Newtonsoft.Json.Bson.BsonWriter::_parent
	BsonToken_t1714632464 * ____parent_15;
	// System.String Newtonsoft.Json.Bson.BsonWriter::_propertyName
	String_t* ____propertyName_16;

public:
	inline static int32_t get_offset_of__writer_13() { return static_cast<int32_t>(offsetof(BsonWriter_t3358942186, ____writer_13)); }
	inline BsonBinaryWriter_t3553243979 * get__writer_13() const { return ____writer_13; }
	inline BsonBinaryWriter_t3553243979 ** get_address_of__writer_13() { return &____writer_13; }
	inline void set__writer_13(BsonBinaryWriter_t3553243979 * value)
	{
		____writer_13 = value;
		Il2CppCodeGenWriteBarrier(&____writer_13, value);
	}

	inline static int32_t get_offset_of__root_14() { return static_cast<int32_t>(offsetof(BsonWriter_t3358942186, ____root_14)); }
	inline BsonToken_t1714632464 * get__root_14() const { return ____root_14; }
	inline BsonToken_t1714632464 ** get_address_of__root_14() { return &____root_14; }
	inline void set__root_14(BsonToken_t1714632464 * value)
	{
		____root_14 = value;
		Il2CppCodeGenWriteBarrier(&____root_14, value);
	}

	inline static int32_t get_offset_of__parent_15() { return static_cast<int32_t>(offsetof(BsonWriter_t3358942186, ____parent_15)); }
	inline BsonToken_t1714632464 * get__parent_15() const { return ____parent_15; }
	inline BsonToken_t1714632464 ** get_address_of__parent_15() { return &____parent_15; }
	inline void set__parent_15(BsonToken_t1714632464 * value)
	{
		____parent_15 = value;
		Il2CppCodeGenWriteBarrier(&____parent_15, value);
	}

	inline static int32_t get_offset_of__propertyName_16() { return static_cast<int32_t>(offsetof(BsonWriter_t3358942186, ____propertyName_16)); }
	inline String_t* get__propertyName_16() const { return ____propertyName_16; }
	inline String_t** get_address_of__propertyName_16() { return &____propertyName_16; }
	inline void set__propertyName_16(String_t* value)
	{
		____propertyName_16 = value;
		Il2CppCodeGenWriteBarrier(&____propertyName_16, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
