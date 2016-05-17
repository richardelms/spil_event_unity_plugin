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

// System.Data.ConstraintConverter
struct ConstraintConverter_t248325590;
// System.Object
struct Il2CppObject;
// System.ComponentModel.ITypeDescriptorContext
struct ITypeDescriptorContext_t4233601286;
// System.Globalization.CultureInfo
struct CultureInfo_t3603717042;
// System.Type
struct Type_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Globalization_CultureInfo3603717042.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_Type2779229935.h"

// System.Object System.Data.ConstraintConverter::ConvertTo(System.ComponentModel.ITypeDescriptorContext,System.Globalization.CultureInfo,System.Object,System.Type)
extern "C"  Il2CppObject * ConstraintConverter_ConvertTo_m1455521860 (ConstraintConverter_t248325590 * __this, Il2CppObject * ___context, CultureInfo_t3603717042 * ___culture, Il2CppObject * ___value, Type_t * ___destinationType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.ConstraintConverter::CanConvertTo(System.ComponentModel.ITypeDescriptorContext,System.Type)
extern "C"  bool ConstraintConverter_CanConvertTo_m2761836057 (ConstraintConverter_t248325590 * __this, Il2CppObject * ___context, Type_t * ___destinationType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
