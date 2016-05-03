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

// System.Type
struct Type_t;
// Newtonsoft.Json.Utilities.TypeInformation
struct TypeInformation_t3378546793;
// System.IConvertible
struct IConvertible_t4194222097;
// System.String
struct String_t;
// Newtonsoft.Json.Serialization.Func`2<System.Object,System.Object>
struct Func_2_t381126436;
// System.Object
struct Il2CppObject;
// System.Globalization.CultureInfo
struct CultureInfo_t3603717042;
// System.Data.SqlTypes.INullable
struct INullable_t1287586394;
// System.ComponentModel.TypeConverter
struct TypeConverter_t3398830607;
// System.Version
struct Version_t497901645;
// System.Char[]
struct CharU5BU5D_t3416858730;

#include "codegen/il2cpp-codegen.h"
#include "Newtonsoft_Json_Newtonsoft_Json_Utilities_Primitiv1430423845.h"
#include "mscorlib_System_Type2779229935.h"
#include "mscorlib_System_TimeSpan763862892.h"
#include "mscorlib_System_String968488902.h"
#include "Newtonsoft_Json_Newtonsoft_Json_Utilities_ConvertU3846323878.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_Globalization_CultureInfo3603717042.h"
#include "Newtonsoft_Json_Newtonsoft_Json_Utilities_ConvertU2713431952.h"
#include "mscorlib_System_Version497901645.h"
#include "Newtonsoft_Json_Newtonsoft_Json_Utilities_ParseRes2295893895.h"
#include "mscorlib_System_Guid2778838590.h"

// Newtonsoft.Json.Utilities.PrimitiveTypeCode Newtonsoft.Json.Utilities.ConvertUtils::GetTypeCode(System.Type)
extern "C"  int32_t ConvertUtils_GetTypeCode_m3728064781 (Il2CppObject * __this /* static, unused */, Type_t * ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Utilities.PrimitiveTypeCode Newtonsoft.Json.Utilities.ConvertUtils::GetTypeCode(System.Type,System.Boolean&)
extern "C"  int32_t ConvertUtils_GetTypeCode_m1509827324 (Il2CppObject * __this /* static, unused */, Type_t * ___t, bool* ___isEnum, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Utilities.TypeInformation Newtonsoft.Json.Utilities.ConvertUtils::GetTypeInformation(System.IConvertible)
extern "C"  TypeInformation_t3378546793 * ConvertUtils_GetTypeInformation_m1932646156 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___convertable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Utilities.ConvertUtils::IsConvertible(System.Type)
extern "C"  bool ConvertUtils_IsConvertible_m4144288731 (Il2CppObject * __this /* static, unused */, Type_t * ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan Newtonsoft.Json.Utilities.ConvertUtils::ParseTimeSpan(System.String)
extern "C"  TimeSpan_t763862892  ConvertUtils_ParseTimeSpan_m1171495752 (Il2CppObject * __this /* static, unused */, String_t* ___input, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Serialization.Func`2<System.Object,System.Object> Newtonsoft.Json.Utilities.ConvertUtils::CreateCastConverter(Newtonsoft.Json.Utilities.ConvertUtils/TypeConvertKey)
extern "C"  Func_2_t381126436 * ConvertUtils_CreateCastConverter_m3854043060 (Il2CppObject * __this /* static, unused */, TypeConvertKey_t3846323878  ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Utilities.ConvertUtils::TryConvert(System.Object,System.Globalization.CultureInfo,System.Type,System.Object&)
extern "C"  bool ConvertUtils_TryConvert_m483503506 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___initialValue, CultureInfo_t3603717042 * ___culture, Type_t * ___targetType, Il2CppObject ** ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Utilities.ConvertUtils/ConvertResult Newtonsoft.Json.Utilities.ConvertUtils::TryConvertInternal(System.Object,System.Globalization.CultureInfo,System.Type,System.Object&)
extern "C"  int32_t ConvertUtils_TryConvertInternal_m3693745284 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___initialValue, CultureInfo_t3603717042 * ___culture, Type_t * ___targetType, Il2CppObject ** ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Newtonsoft.Json.Utilities.ConvertUtils::ConvertOrCast(System.Object,System.Globalization.CultureInfo,System.Type)
extern "C"  Il2CppObject * ConvertUtils_ConvertOrCast_m318987874 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___initialValue, CultureInfo_t3603717042 * ___culture, Type_t * ___targetType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Newtonsoft.Json.Utilities.ConvertUtils::EnsureTypeAssignable(System.Object,System.Type,System.Type)
extern "C"  Il2CppObject * ConvertUtils_EnsureTypeAssignable_m618920751 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___value, Type_t * ___initialType, Type_t * ___targetType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Newtonsoft.Json.Utilities.ConvertUtils::ToValue(System.Data.SqlTypes.INullable)
extern "C"  Il2CppObject * ConvertUtils_ToValue_m374038626 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___nullableValue, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.TypeConverter Newtonsoft.Json.Utilities.ConvertUtils::GetConverter(System.Type)
extern "C"  TypeConverter_t3398830607 * ConvertUtils_GetConverter_m329942794 (Il2CppObject * __this /* static, unused */, Type_t * ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Utilities.ConvertUtils::VersionTryParse(System.String,System.Version&)
extern "C"  bool ConvertUtils_VersionTryParse_m3225814958 (Il2CppObject * __this /* static, unused */, String_t* ___input, Version_t497901645 ** ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Utilities.ConvertUtils::IsInteger(System.Object)
extern "C"  bool ConvertUtils_IsInteger_m1986925469 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Utilities.ParseResult Newtonsoft.Json.Utilities.ConvertUtils::Int32TryParse(System.Char[],System.Int32,System.Int32,System.Int32&)
extern "C"  int32_t ConvertUtils_Int32TryParse_m2021053401 (Il2CppObject * __this /* static, unused */, CharU5BU5D_t3416858730* ___chars, int32_t ___start, int32_t ___length, int32_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Utilities.ParseResult Newtonsoft.Json.Utilities.ConvertUtils::Int64TryParse(System.Char[],System.Int32,System.Int32,System.Int64&)
extern "C"  int32_t ConvertUtils_Int64TryParse_m1584965689 (Il2CppObject * __this /* static, unused */, CharU5BU5D_t3416858730* ___chars, int32_t ___start, int32_t ___length, int64_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Utilities.ConvertUtils::TryConvertGuid(System.String,System.Guid&)
extern "C"  bool ConvertUtils_TryConvertGuid_m3029735494 (Il2CppObject * __this /* static, unused */, String_t* ___s, Guid_t2778838590 * ___g, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Newtonsoft.Json.Utilities.ConvertUtils::HexTextToInt(System.Char[],System.Int32,System.Int32)
extern "C"  int32_t ConvertUtils_HexTextToInt_m3467575446 (Il2CppObject * __this /* static, unused */, CharU5BU5D_t3416858730* ___text, int32_t ___start, int32_t ___end, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Newtonsoft.Json.Utilities.ConvertUtils::HexCharToInt(System.Char)
extern "C"  int32_t ConvertUtils_HexCharToInt_m3861739393 (Il2CppObject * __this /* static, unused */, uint16_t ___ch, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Utilities.ConvertUtils::.cctor()
extern "C"  void ConvertUtils__cctor_m13564766 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
