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
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_Schema_StringValueType3268840007.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Object837106420.h"

// System.Void System.Xml.Schema.StringValueType::.ctor(System.String)
extern "C"  void StringValueType__ctor_m3168617924 (StringValueType_t3268840007 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Schema.StringValueType::get_Value()
extern "C"  String_t* StringValueType_get_Value_m3307314759 (StringValueType_t3268840007 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.StringValueType::Equals(System.Object)
extern "C"  bool StringValueType_Equals_m797269367 (StringValueType_t3268840007 * __this, Il2CppObject * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.StringValueType::GetHashCode()
extern "C"  int32_t StringValueType_GetHashCode_m353153039 (StringValueType_t3268840007 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.StringValueType::op_Equality(System.Xml.Schema.StringValueType,System.Xml.Schema.StringValueType)
extern "C"  bool StringValueType_op_Equality_m1814147548 (Il2CppObject * __this /* static, unused */, StringValueType_t3268840007  ___v1, StringValueType_t3268840007  ___v2, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct StringValueType_t3268840007;
struct StringValueType_t3268840007_marshaled_pinvoke;

extern "C" void StringValueType_t3268840007_marshal_pinvoke(const StringValueType_t3268840007& unmarshaled, StringValueType_t3268840007_marshaled_pinvoke& marshaled);
extern "C" void StringValueType_t3268840007_marshal_pinvoke_back(const StringValueType_t3268840007_marshaled_pinvoke& marshaled, StringValueType_t3268840007& unmarshaled);
extern "C" void StringValueType_t3268840007_marshal_pinvoke_cleanup(StringValueType_t3268840007_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct StringValueType_t3268840007;
struct StringValueType_t3268840007_marshaled_com;

extern "C" void StringValueType_t3268840007_marshal_com(const StringValueType_t3268840007& unmarshaled, StringValueType_t3268840007_marshaled_com& marshaled);
extern "C" void StringValueType_t3268840007_marshal_com_back(const StringValueType_t3268840007_marshaled_com& marshaled, StringValueType_t3268840007& unmarshaled);
extern "C" void StringValueType_t3268840007_marshal_com_cleanup(StringValueType_t3268840007_marshaled_com& marshaled);
