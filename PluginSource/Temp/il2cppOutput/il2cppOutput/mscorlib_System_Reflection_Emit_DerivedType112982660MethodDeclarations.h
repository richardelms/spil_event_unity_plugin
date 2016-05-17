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

// System.Reflection.Emit.DerivedType
struct DerivedType_t112982660;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t3431720054;
// System.Reflection.EventInfo
struct EventInfo_t;
// System.String
struct String_t;
// System.Reflection.EventInfo[]
struct EventInfoU5BU5D_t511103059;
// System.Reflection.FieldInfo
struct FieldInfo_t;
// System.Reflection.FieldInfo[]
struct FieldInfoU5BU5D_t1144794227;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Reflection.Binder
struct Binder_t4180926488;
// System.Reflection.ParameterModifier[]
struct ParameterModifierU5BU5D_t3379147067;
// System.Reflection.MethodInfo[]
struct MethodInfoU5BU5D_t1668237648;
// System.Reflection.PropertyInfo[]
struct PropertyInfoU5BU5D_t1348579340;
// System.Reflection.PropertyInfo
struct PropertyInfo_t;
// System.Reflection.ConstructorInfo
struct ConstructorInfo_t3542137334;
// System.Reflection.ConstructorInfo[]
struct ConstructorInfoU5BU5D_t3572023667;
// System.Object
struct Il2CppObject;
// System.Object[]
struct ObjectU5BU5D_t11523773;
// System.Globalization.CultureInfo
struct CultureInfo_t3603717042;
// System.String[]
struct StringU5BU5D_t2956870243;
// System.Reflection.Assembly
struct Assembly_t1882292308;
// System.Reflection.Module
struct Module_t206139610;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Type2779229935.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Reflection_BindingFlags2090192240.h"
#include "mscorlib_System_Reflection_Binder4180926488.h"
#include "mscorlib_System_Reflection_CallingConventions3959446060.h"
#include "mscorlib_System_Reflection_TypeAttributes104824479.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_Globalization_CultureInfo3603717042.h"
#include "mscorlib_System_RuntimeTypeHandle1864875887.h"

// System.Void System.Reflection.Emit.DerivedType::.ctor(System.Type)
extern "C"  void DerivedType__ctor_m2151730247 (DerivedType_t112982660 * __this, Type_t * ___elementType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.DerivedType::create_unmanaged_type(System.Type)
extern "C"  void DerivedType_create_unmanaged_type_m2314863475 (Il2CppObject * __this /* static, unused */, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type[] System.Reflection.Emit.DerivedType::GetInterfaces()
extern "C"  TypeU5BU5D_t3431720054* DerivedType_GetInterfaces_m2341185576 (DerivedType_t112982660 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.DerivedType::GetElementType()
extern "C"  Type_t * DerivedType_GetElementType_m3972882188 (DerivedType_t112982660 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.EventInfo System.Reflection.Emit.DerivedType::GetEvent(System.String,System.Reflection.BindingFlags)
extern "C"  EventInfo_t * DerivedType_GetEvent_m1455460899 (DerivedType_t112982660 * __this, String_t* ___name, int32_t ___bindingAttr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.EventInfo[] System.Reflection.Emit.DerivedType::GetEvents(System.Reflection.BindingFlags)
extern "C"  EventInfoU5BU5D_t511103059* DerivedType_GetEvents_m4140020140 (DerivedType_t112982660 * __this, int32_t ___bindingAttr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.FieldInfo System.Reflection.Emit.DerivedType::GetField(System.String,System.Reflection.BindingFlags)
extern "C"  FieldInfo_t * DerivedType_GetField_m1258528291 (DerivedType_t112982660 * __this, String_t* ___name, int32_t ___bindingAttr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.FieldInfo[] System.Reflection.Emit.DerivedType::GetFields(System.Reflection.BindingFlags)
extern "C"  FieldInfoU5BU5D_t1144794227* DerivedType_GetFields_m2571177388 (DerivedType_t112982660 * __this, int32_t ___bindingAttr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.Reflection.Emit.DerivedType::GetMethodImpl(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Reflection.CallingConventions,System.Type[],System.Reflection.ParameterModifier[])
extern "C"  MethodInfo_t * DerivedType_GetMethodImpl_m3831541272 (DerivedType_t112982660 * __this, String_t* ___name, int32_t ___bindingAttr, Binder_t4180926488 * ___binder, int32_t ___callConvention, TypeU5BU5D_t3431720054* ___types, ParameterModifierU5BU5D_t3379147067* ___modifiers, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo[] System.Reflection.Emit.DerivedType::GetMethods(System.Reflection.BindingFlags)
extern "C"  MethodInfoU5BU5D_t1668237648* DerivedType_GetMethods_m144137694 (DerivedType_t112982660 * __this, int32_t ___bindingAttr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type[] System.Reflection.Emit.DerivedType::GetNestedTypes(System.Reflection.BindingFlags)
extern "C"  TypeU5BU5D_t3431720054* DerivedType_GetNestedTypes_m427504464 (DerivedType_t112982660 * __this, int32_t ___bindingAttr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.PropertyInfo[] System.Reflection.Emit.DerivedType::GetProperties(System.Reflection.BindingFlags)
extern "C"  PropertyInfoU5BU5D_t1348579340* DerivedType_GetProperties_m1138411857 (DerivedType_t112982660 * __this, int32_t ___bindingAttr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.PropertyInfo System.Reflection.Emit.DerivedType::GetPropertyImpl(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Type,System.Type[],System.Reflection.ParameterModifier[])
extern "C"  PropertyInfo_t * DerivedType_GetPropertyImpl_m2285367829 (DerivedType_t112982660 * __this, String_t* ___name, int32_t ___bindingAttr, Binder_t4180926488 * ___binder, Type_t * ___returnType, TypeU5BU5D_t3431720054* ___types, ParameterModifierU5BU5D_t3379147067* ___modifiers, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ConstructorInfo System.Reflection.Emit.DerivedType::GetConstructorImpl(System.Reflection.BindingFlags,System.Reflection.Binder,System.Reflection.CallingConventions,System.Type[],System.Reflection.ParameterModifier[])
extern "C"  ConstructorInfo_t3542137334 * DerivedType_GetConstructorImpl_m854653258 (DerivedType_t112982660 * __this, int32_t ___bindingAttr, Binder_t4180926488 * ___binder, int32_t ___callConvention, TypeU5BU5D_t3431720054* ___types, ParameterModifierU5BU5D_t3379147067* ___modifiers, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.TypeAttributes System.Reflection.Emit.DerivedType::GetAttributeFlagsImpl()
extern "C"  int32_t DerivedType_GetAttributeFlagsImpl_m1287185819 (DerivedType_t112982660 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.DerivedType::HasElementTypeImpl()
extern "C"  bool DerivedType_HasElementTypeImpl_m1373316336 (DerivedType_t112982660 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.DerivedType::IsArrayImpl()
extern "C"  bool DerivedType_IsArrayImpl_m4138090845 (DerivedType_t112982660 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.DerivedType::IsByRefImpl()
extern "C"  bool DerivedType_IsByRefImpl_m1668118912 (DerivedType_t112982660 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.DerivedType::IsPointerImpl()
extern "C"  bool DerivedType_IsPointerImpl_m835779969 (DerivedType_t112982660 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.DerivedType::IsPrimitiveImpl()
extern "C"  bool DerivedType_IsPrimitiveImpl_m2894544875 (DerivedType_t112982660 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ConstructorInfo[] System.Reflection.Emit.DerivedType::GetConstructors(System.Reflection.BindingFlags)
extern "C"  ConstructorInfoU5BU5D_t3572023667* DerivedType_GetConstructors_m699314604 (DerivedType_t112982660 * __this, int32_t ___bindingAttr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Reflection.Emit.DerivedType::InvokeMember(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object,System.Object[],System.Reflection.ParameterModifier[],System.Globalization.CultureInfo,System.String[])
extern "C"  Il2CppObject * DerivedType_InvokeMember_m2695910471 (DerivedType_t112982660 * __this, String_t* ___name, int32_t ___invokeAttr, Binder_t4180926488 * ___binder, Il2CppObject * ___target, ObjectU5BU5D_t11523773* ___args, ParameterModifierU5BU5D_t3379147067* ___modifiers, CultureInfo_t3603717042 * ___culture, StringU5BU5D_t2956870243* ___namedParameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.DerivedType::IsInstanceOfType(System.Object)
extern "C"  bool DerivedType_IsInstanceOfType_m2487806608 (DerivedType_t112982660 * __this, Il2CppObject * ___o, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.DerivedType::IsAssignableFrom(System.Type)
extern "C"  bool DerivedType_IsAssignableFrom_m713635112 (DerivedType_t112982660 * __this, Type_t * ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.DerivedType::get_ContainsGenericParameters()
extern "C"  bool DerivedType_get_ContainsGenericParameters_m2173538983 (DerivedType_t112982660 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.DerivedType::MakeGenericType(System.Type[])
extern "C"  Type_t * DerivedType_MakeGenericType_m3705455454 (DerivedType_t112982660 * __this, TypeU5BU5D_t3431720054* ___typeArguments, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.DerivedType::MakeArrayType()
extern "C"  Type_t * DerivedType_MakeArrayType_m69289563 (DerivedType_t112982660 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.DerivedType::ToString()
extern "C"  String_t* DerivedType_ToString_m888495265 (DerivedType_t112982660 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.Reflection.Emit.DerivedType::get_Assembly()
extern "C"  Assembly_t1882292308 * DerivedType_get_Assembly_m1584566050 (DerivedType_t112982660 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.DerivedType::get_AssemblyQualifiedName()
extern "C"  String_t* DerivedType_get_AssemblyQualifiedName_m1387368997 (DerivedType_t112982660 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.DerivedType::get_FullName()
extern "C"  String_t* DerivedType_get_FullName_m2024958712 (DerivedType_t112982660 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.DerivedType::get_Name()
extern "C"  String_t* DerivedType_get_Name_m1526770185 (DerivedType_t112982660 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Module System.Reflection.Emit.DerivedType::get_Module()
extern "C"  Module_t206139610 * DerivedType_get_Module_m1872511778 (DerivedType_t112982660 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.DerivedType::get_Namespace()
extern "C"  String_t* DerivedType_get_Namespace_m2857766015 (DerivedType_t112982660 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.RuntimeTypeHandle System.Reflection.Emit.DerivedType::get_TypeHandle()
extern "C"  RuntimeTypeHandle_t1864875887  DerivedType_get_TypeHandle_m1080433997 (DerivedType_t112982660 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.DerivedType::get_UnderlyingSystemType()
extern "C"  Type_t * DerivedType_get_UnderlyingSystemType_m1568542971 (DerivedType_t112982660 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.DerivedType::IsDefined(System.Type,System.Boolean)
extern "C"  bool DerivedType_IsDefined_m166944945 (DerivedType_t112982660 * __this, Type_t * ___attributeType, bool ___inherit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.Emit.DerivedType::GetCustomAttributes(System.Boolean)
extern "C"  ObjectU5BU5D_t11523773* DerivedType_GetCustomAttributes_m4090757682 (DerivedType_t112982660 * __this, bool ___inherit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.Emit.DerivedType::GetCustomAttributes(System.Type,System.Boolean)
extern "C"  ObjectU5BU5D_t11523773* DerivedType_GetCustomAttributes_m873619231 (DerivedType_t112982660 * __this, Type_t * ___attributeType, bool ___inherit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
