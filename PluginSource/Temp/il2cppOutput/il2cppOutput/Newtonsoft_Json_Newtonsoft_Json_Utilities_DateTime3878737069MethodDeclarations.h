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

// System.String
struct String_t;
// System.Globalization.CultureInfo
struct CultureInfo_t3603717042;
// System.IO.TextWriter
struct TextWriter_t1689927879;
// System.Char[]
struct CharU5BU5D_t3416858730;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_TimeSpan763862892.h"
#include "mscorlib_System_DateTime339033936.h"
#include "System_Xml_System_Xml_XmlDateTimeSerializationMode167003369.h"
#include "mscorlib_System_DateTimeKind3550648708.h"
#include "Newtonsoft_Json_Newtonsoft_Json_DateTimeZoneHandlin418377391.h"
#include "Newtonsoft_Json_Newtonsoft_Json_Utilities_StringRe2908448017.h"
#include "Newtonsoft_Json_Newtonsoft_Json_Utilities_DateTime2308763313.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Globalization_CultureInfo3603717042.h"
#include "mscorlib_System_IO_TextWriter1689927879.h"
#include "Newtonsoft_Json_Newtonsoft_Json_DateFormatHandling279613453.h"
#include "mscorlib_System_Nullable_1_gen3649900800.h"

// System.Void Newtonsoft.Json.Utilities.DateTimeUtils::.cctor()
extern "C"  void DateTimeUtils__cctor_m2452056586 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan Newtonsoft.Json.Utilities.DateTimeUtils::GetUtcOffset(System.DateTime)
extern "C"  TimeSpan_t763862892  DateTimeUtils_GetUtcOffset_m4006481587 (Il2CppObject * __this /* static, unused */, DateTime_t339033936  ___d, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlDateTimeSerializationMode Newtonsoft.Json.Utilities.DateTimeUtils::ToSerializationMode(System.DateTimeKind)
extern "C"  int32_t DateTimeUtils_ToSerializationMode_m3537444303 (Il2CppObject * __this /* static, unused */, int32_t ___kind, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime Newtonsoft.Json.Utilities.DateTimeUtils::EnsureDateTime(System.DateTime,Newtonsoft.Json.DateTimeZoneHandling)
extern "C"  DateTime_t339033936  DateTimeUtils_EnsureDateTime_m1344423374 (Il2CppObject * __this /* static, unused */, DateTime_t339033936  ___value, int32_t ___timeZone, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime Newtonsoft.Json.Utilities.DateTimeUtils::SwitchToLocalTime(System.DateTime)
extern "C"  DateTime_t339033936  DateTimeUtils_SwitchToLocalTime_m908630869 (Il2CppObject * __this /* static, unused */, DateTime_t339033936  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime Newtonsoft.Json.Utilities.DateTimeUtils::SwitchToUtcTime(System.DateTime)
extern "C"  DateTime_t339033936  DateTimeUtils_SwitchToUtcTime_m3302658108 (Il2CppObject * __this /* static, unused */, DateTime_t339033936  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Newtonsoft.Json.Utilities.DateTimeUtils::ToUniversalTicks(System.DateTime)
extern "C"  int64_t DateTimeUtils_ToUniversalTicks_m3967438966 (Il2CppObject * __this /* static, unused */, DateTime_t339033936  ___dateTime, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Newtonsoft.Json.Utilities.DateTimeUtils::ToUniversalTicks(System.DateTime,System.TimeSpan)
extern "C"  int64_t DateTimeUtils_ToUniversalTicks_m3754172620 (Il2CppObject * __this /* static, unused */, DateTime_t339033936  ___dateTime, TimeSpan_t763862892  ___offset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Newtonsoft.Json.Utilities.DateTimeUtils::ConvertDateTimeToJavaScriptTicks(System.DateTime,System.TimeSpan)
extern "C"  int64_t DateTimeUtils_ConvertDateTimeToJavaScriptTicks_m5533746 (Il2CppObject * __this /* static, unused */, DateTime_t339033936  ___dateTime, TimeSpan_t763862892  ___offset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Newtonsoft.Json.Utilities.DateTimeUtils::ConvertDateTimeToJavaScriptTicks(System.DateTime,System.Boolean)
extern "C"  int64_t DateTimeUtils_ConvertDateTimeToJavaScriptTicks_m204305441 (Il2CppObject * __this /* static, unused */, DateTime_t339033936  ___dateTime, bool ___convertToUtc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Newtonsoft.Json.Utilities.DateTimeUtils::UniversialTicksToJavaScriptTicks(System.Int64)
extern "C"  int64_t DateTimeUtils_UniversialTicksToJavaScriptTicks_m1375243002 (Il2CppObject * __this /* static, unused */, int64_t ___universialTicks, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime Newtonsoft.Json.Utilities.DateTimeUtils::ConvertJavaScriptTicksToDateTime(System.Int64)
extern "C"  DateTime_t339033936  DateTimeUtils_ConvertJavaScriptTicksToDateTime_m19551558 (Il2CppObject * __this /* static, unused */, int64_t ___javaScriptTicks, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Utilities.DateTimeUtils::TryParseDateTimeIso(Newtonsoft.Json.Utilities.StringReference,Newtonsoft.Json.DateTimeZoneHandling,System.DateTime&)
extern "C"  bool DateTimeUtils_TryParseDateTimeIso_m3453085353 (Il2CppObject * __this /* static, unused */, StringReference_t2908448017  ___text, int32_t ___dateTimeZoneHandling, DateTime_t339033936 * ___dt, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime Newtonsoft.Json.Utilities.DateTimeUtils::CreateDateTime(Newtonsoft.Json.Utilities.DateTimeParser)
extern "C"  DateTime_t339033936  DateTimeUtils_CreateDateTime_m3068611660 (Il2CppObject * __this /* static, unused */, DateTimeParser_t2308763313  ___dateTimeParser, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Utilities.DateTimeUtils::TryParseDateTime(Newtonsoft.Json.Utilities.StringReference,Newtonsoft.Json.DateTimeZoneHandling,System.String,System.Globalization.CultureInfo,System.DateTime&)
extern "C"  bool DateTimeUtils_TryParseDateTime_m258163454 (Il2CppObject * __this /* static, unused */, StringReference_t2908448017  ___s, int32_t ___dateTimeZoneHandling, String_t* ___dateFormatString, CultureInfo_t3603717042 * ___culture, DateTime_t339033936 * ___dt, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Utilities.DateTimeUtils::TryParseDateTime(System.String,Newtonsoft.Json.DateTimeZoneHandling,System.String,System.Globalization.CultureInfo,System.DateTime&)
extern "C"  bool DateTimeUtils_TryParseDateTime_m3556531373 (Il2CppObject * __this /* static, unused */, String_t* ___s, int32_t ___dateTimeZoneHandling, String_t* ___dateFormatString, CultureInfo_t3603717042 * ___culture, DateTime_t339033936 * ___dt, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Utilities.DateTimeUtils::TryParseMicrosoftDate(Newtonsoft.Json.Utilities.StringReference,System.Int64&,System.TimeSpan&,System.DateTimeKind&)
extern "C"  bool DateTimeUtils_TryParseMicrosoftDate_m420572110 (Il2CppObject * __this /* static, unused */, StringReference_t2908448017  ___text, int64_t* ___ticks, TimeSpan_t763862892 * ___offset, int32_t* ___kind, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Utilities.DateTimeUtils::TryParseDateTimeMicrosoft(Newtonsoft.Json.Utilities.StringReference,Newtonsoft.Json.DateTimeZoneHandling,System.DateTime&)
extern "C"  bool DateTimeUtils_TryParseDateTimeMicrosoft_m2872118432 (Il2CppObject * __this /* static, unused */, StringReference_t2908448017  ___text, int32_t ___dateTimeZoneHandling, DateTime_t339033936 * ___dt, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Utilities.DateTimeUtils::TryParseDateTimeExact(System.String,Newtonsoft.Json.DateTimeZoneHandling,System.String,System.Globalization.CultureInfo,System.DateTime&)
extern "C"  bool DateTimeUtils_TryParseDateTimeExact_m4235041370 (Il2CppObject * __this /* static, unused */, String_t* ___text, int32_t ___dateTimeZoneHandling, String_t* ___dateFormatString, CultureInfo_t3603717042 * ___culture, DateTime_t339033936 * ___dt, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Utilities.DateTimeUtils::TryReadOffset(Newtonsoft.Json.Utilities.StringReference,System.Int32,System.TimeSpan&)
extern "C"  bool DateTimeUtils_TryReadOffset_m3195603777 (Il2CppObject * __this /* static, unused */, StringReference_t2908448017  ___offsetText, int32_t ___startIndex, TimeSpan_t763862892 * ___offset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Utilities.DateTimeUtils::WriteDateTimeString(System.IO.TextWriter,System.DateTime,Newtonsoft.Json.DateFormatHandling,System.String,System.Globalization.CultureInfo)
extern "C"  void DateTimeUtils_WriteDateTimeString_m309914248 (Il2CppObject * __this /* static, unused */, TextWriter_t1689927879 * ___writer, DateTime_t339033936  ___value, int32_t ___format, String_t* ___formatString, CultureInfo_t3603717042 * ___culture, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Newtonsoft.Json.Utilities.DateTimeUtils::WriteDateTimeString(System.Char[],System.Int32,System.DateTime,System.Nullable`1<System.TimeSpan>,System.DateTimeKind,Newtonsoft.Json.DateFormatHandling)
extern "C"  int32_t DateTimeUtils_WriteDateTimeString_m1176889044 (Il2CppObject * __this /* static, unused */, CharU5BU5D_t3416858730* ___chars, int32_t ___start, DateTime_t339033936  ___value, Nullable_1_t3649900800  ___offset, int32_t ___kind, int32_t ___format, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Newtonsoft.Json.Utilities.DateTimeUtils::WriteDefaultIsoDate(System.Char[],System.Int32,System.DateTime)
extern "C"  int32_t DateTimeUtils_WriteDefaultIsoDate_m969637092 (Il2CppObject * __this /* static, unused */, CharU5BU5D_t3416858730* ___chars, int32_t ___start, DateTime_t339033936  ___dt, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Utilities.DateTimeUtils::CopyIntToCharArray(System.Char[],System.Int32,System.Int32,System.Int32)
extern "C"  void DateTimeUtils_CopyIntToCharArray_m505226763 (Il2CppObject * __this /* static, unused */, CharU5BU5D_t3416858730* ___chars, int32_t ___start, int32_t ___value, int32_t ___digits, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Newtonsoft.Json.Utilities.DateTimeUtils::WriteDateTimeOffset(System.Char[],System.Int32,System.TimeSpan,Newtonsoft.Json.DateFormatHandling)
extern "C"  int32_t DateTimeUtils_WriteDateTimeOffset_m446939395 (Il2CppObject * __this /* static, unused */, CharU5BU5D_t3416858730* ___chars, int32_t ___start, TimeSpan_t763862892  ___offset, int32_t ___format, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Utilities.DateTimeUtils::GetDateValues(System.DateTime,System.Int32&,System.Int32&,System.Int32&)
extern "C"  void DateTimeUtils_GetDateValues_m3266590032 (Il2CppObject * __this /* static, unused */, DateTime_t339033936  ___td, int32_t* ___year, int32_t* ___month, int32_t* ___day, const MethodInfo* method) IL2CPP_METHOD_ATTR;
