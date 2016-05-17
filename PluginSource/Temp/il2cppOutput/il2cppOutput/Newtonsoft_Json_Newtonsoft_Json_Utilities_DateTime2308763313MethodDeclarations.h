#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.Char[]
struct CharU5BU5D_t3416858730;

#include "codegen/il2cpp-codegen.h"
#include "Newtonsoft_Json_Newtonsoft_Json_Utilities_DateTime2308763313.h"

// System.Void Newtonsoft.Json.Utilities.DateTimeParser::.cctor()
extern "C"  void DateTimeParser__cctor_m2435819450 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Utilities.DateTimeParser::Parse(System.Char[],System.Int32,System.Int32)
extern "C"  bool DateTimeParser_Parse_m1255516641 (DateTimeParser_t2308763313 * __this, CharU5BU5D_t3416858730* ___text, int32_t ___startIndex, int32_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Utilities.DateTimeParser::ParseDate(System.Int32)
extern "C"  bool DateTimeParser_ParseDate_m1398876761 (DateTimeParser_t2308763313 * __this, int32_t ___start, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Utilities.DateTimeParser::ParseTimeAndZoneAndWhitespace(System.Int32)
extern "C"  bool DateTimeParser_ParseTimeAndZoneAndWhitespace_m620778729 (DateTimeParser_t2308763313 * __this, int32_t ___start, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Utilities.DateTimeParser::ParseTime(System.Int32&)
extern "C"  bool DateTimeParser_ParseTime_m3813948308 (DateTimeParser_t2308763313 * __this, int32_t* ___start, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Utilities.DateTimeParser::ParseZone(System.Int32)
extern "C"  bool DateTimeParser_ParseZone_m1472825815 (DateTimeParser_t2308763313 * __this, int32_t ___start, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Utilities.DateTimeParser::Parse4Digit(System.Int32,System.Int32&)
extern "C"  bool DateTimeParser_Parse4Digit_m1365841209 (DateTimeParser_t2308763313 * __this, int32_t ___start, int32_t* ___num, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Utilities.DateTimeParser::Parse2Digit(System.Int32,System.Int32&)
extern "C"  bool DateTimeParser_Parse2Digit_m3609824507 (DateTimeParser_t2308763313 * __this, int32_t ___start, int32_t* ___num, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Utilities.DateTimeParser::ParseChar(System.Int32,System.Char)
extern "C"  bool DateTimeParser_ParseChar_m1226071320 (DateTimeParser_t2308763313 * __this, int32_t ___start, uint16_t ___ch, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct DateTimeParser_t2308763313;
struct DateTimeParser_t2308763313_marshaled_pinvoke;

extern "C" void DateTimeParser_t2308763313_marshal_pinvoke(const DateTimeParser_t2308763313& unmarshaled, DateTimeParser_t2308763313_marshaled_pinvoke& marshaled);
extern "C" void DateTimeParser_t2308763313_marshal_pinvoke_back(const DateTimeParser_t2308763313_marshaled_pinvoke& marshaled, DateTimeParser_t2308763313& unmarshaled);
extern "C" void DateTimeParser_t2308763313_marshal_pinvoke_cleanup(DateTimeParser_t2308763313_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct DateTimeParser_t2308763313;
struct DateTimeParser_t2308763313_marshaled_com;

extern "C" void DateTimeParser_t2308763313_marshal_com(const DateTimeParser_t2308763313& unmarshaled, DateTimeParser_t2308763313_marshaled_com& marshaled);
extern "C" void DateTimeParser_t2308763313_marshal_com_back(const DateTimeParser_t2308763313_marshaled_com& marshaled, DateTimeParser_t2308763313& unmarshaled);
extern "C" void DateTimeParser_t2308763313_marshal_com_cleanup(DateTimeParser_t2308763313_marshaled_com& marshaled);
