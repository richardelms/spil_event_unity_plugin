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

// System.Reflection.PropertyInfo
struct PropertyInfo_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Type
struct Type_t;
// System.Object
struct Il2CppObject;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationBinder
struct SerializationBinder_t3161036435;
// System.Reflection.ConstructorInfo
struct ConstructorInfo_t3542137334;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.Collections.Generic.List`1<System.Reflection.MemberInfo>
struct List_1_t3639992783;
// System.Attribute[]
struct AttributeU5BU5D_t4076389004;
// System.Collections.Generic.IEnumerable`1<System.Reflection.FieldInfo>
struct IEnumerable_1_t4037084138;
// System.Collections.Generic.IList`1<System.Reflection.MemberInfo>
struct IList_1_t714558832;
// System.Collections.Generic.IEnumerable`1<System.Reflection.PropertyInfo>
struct IEnumerable_1_t67735429;
// System.Collections.Generic.IList`1<System.Reflection.PropertyInfo>
struct IList_1_t3657040683;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Reflection_PropertyInfo1490548369.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_Type2779229935.h"
#include "mscorlib_System_Runtime_Serialization_Formatters_F3852587989.h"
#include "mscorlib_System_Runtime_Serialization_Serializatio3161036435.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Reflection_MemberInfo2843033814.h"
#include "mscorlib_System_Reflection_BindingFlags2090192240.h"
#include "mscorlib_System_Nullable_1_gen1438485399.h"

// System.Void Newtonsoft.Json.Utilities.ReflectionUtils::.cctor()
extern "C"  void ReflectionUtils__cctor_m1834260730 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Utilities.ReflectionUtils::IsVirtual(System.Reflection.PropertyInfo)
extern "C"  bool ReflectionUtils_IsVirtual_m3028052373 (Il2CppObject * __this /* static, unused */, PropertyInfo_t * ___propertyInfo, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo Newtonsoft.Json.Utilities.ReflectionUtils::GetBaseDefinition(System.Reflection.PropertyInfo)
extern "C"  MethodInfo_t * ReflectionUtils_GetBaseDefinition_m2743372868 (Il2CppObject * __this /* static, unused */, PropertyInfo_t * ___propertyInfo, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Utilities.ReflectionUtils::IsPublic(System.Reflection.PropertyInfo)
extern "C"  bool ReflectionUtils_IsPublic_m601886931 (Il2CppObject * __this /* static, unused */, PropertyInfo_t * ___property, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type Newtonsoft.Json.Utilities.ReflectionUtils::GetObjectType(System.Object)
extern "C"  Type_t * ReflectionUtils_GetObjectType_m521736122 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___v, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Newtonsoft.Json.Utilities.ReflectionUtils::GetTypeName(System.Type,System.Runtime.Serialization.Formatters.FormatterAssemblyStyle,System.Runtime.Serialization.SerializationBinder)
extern "C"  String_t* ReflectionUtils_GetTypeName_m1936044310 (Il2CppObject * __this /* static, unused */, Type_t * ___t, int32_t ___assemblyFormat, SerializationBinder_t3161036435 * ___binder, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Newtonsoft.Json.Utilities.ReflectionUtils::RemoveAssemblyDetails(System.String)
extern "C"  String_t* ReflectionUtils_RemoveAssemblyDetails_m4150307286 (Il2CppObject * __this /* static, unused */, String_t* ___fullyQualifiedTypeName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Utilities.ReflectionUtils::HasDefaultConstructor(System.Type,System.Boolean)
extern "C"  bool ReflectionUtils_HasDefaultConstructor_m1207095538 (Il2CppObject * __this /* static, unused */, Type_t * ___t, bool ___nonPublic, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ConstructorInfo Newtonsoft.Json.Utilities.ReflectionUtils::GetDefaultConstructor(System.Type)
extern "C"  ConstructorInfo_t3542137334 * ReflectionUtils_GetDefaultConstructor_m3162543978 (Il2CppObject * __this /* static, unused */, Type_t * ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ConstructorInfo Newtonsoft.Json.Utilities.ReflectionUtils::GetDefaultConstructor(System.Type,System.Boolean)
extern "C"  ConstructorInfo_t3542137334 * ReflectionUtils_GetDefaultConstructor_m788839123 (Il2CppObject * __this /* static, unused */, Type_t * ___t, bool ___nonPublic, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Utilities.ReflectionUtils::IsNullable(System.Type)
extern "C"  bool ReflectionUtils_IsNullable_m516977447 (Il2CppObject * __this /* static, unused */, Type_t * ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Utilities.ReflectionUtils::IsNullableType(System.Type)
extern "C"  bool ReflectionUtils_IsNullableType_m1302721165 (Il2CppObject * __this /* static, unused */, Type_t * ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type Newtonsoft.Json.Utilities.ReflectionUtils::EnsureNotNullableType(System.Type)
extern "C"  Type_t * ReflectionUtils_EnsureNotNullableType_m2599832894 (Il2CppObject * __this /* static, unused */, Type_t * ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Utilities.ReflectionUtils::IsGenericDefinition(System.Type,System.Type)
extern "C"  bool ReflectionUtils_IsGenericDefinition_m1946057905 (Il2CppObject * __this /* static, unused */, Type_t * ___type, Type_t * ___genericInterfaceDefinition, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Utilities.ReflectionUtils::ImplementsGenericDefinition(System.Type,System.Type)
extern "C"  bool ReflectionUtils_ImplementsGenericDefinition_m3545414071 (Il2CppObject * __this /* static, unused */, Type_t * ___type, Type_t * ___genericInterfaceDefinition, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Utilities.ReflectionUtils::ImplementsGenericDefinition(System.Type,System.Type,System.Type&)
extern "C"  bool ReflectionUtils_ImplementsGenericDefinition_m1622105762 (Il2CppObject * __this /* static, unused */, Type_t * ___type, Type_t * ___genericInterfaceDefinition, Type_t ** ___implementingType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Utilities.ReflectionUtils::InheritsGenericDefinition(System.Type,System.Type)
extern "C"  bool ReflectionUtils_InheritsGenericDefinition_m269668447 (Il2CppObject * __this /* static, unused */, Type_t * ___type, Type_t * ___genericClassDefinition, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Utilities.ReflectionUtils::InheritsGenericDefinition(System.Type,System.Type,System.Type&)
extern "C"  bool ReflectionUtils_InheritsGenericDefinition_m617568506 (Il2CppObject * __this /* static, unused */, Type_t * ___type, Type_t * ___genericClassDefinition, Type_t ** ___implementingType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Utilities.ReflectionUtils::InheritsGenericDefinitionInternal(System.Type,System.Type,System.Type&)
extern "C"  bool ReflectionUtils_InheritsGenericDefinitionInternal_m1159694871 (Il2CppObject * __this /* static, unused */, Type_t * ___currentType, Type_t * ___genericClassDefinition, Type_t ** ___implementingType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type Newtonsoft.Json.Utilities.ReflectionUtils::GetCollectionItemType(System.Type)
extern "C"  Type_t * ReflectionUtils_GetCollectionItemType_m1896987085 (Il2CppObject * __this /* static, unused */, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Utilities.ReflectionUtils::GetDictionaryKeyValueTypes(System.Type,System.Type&,System.Type&)
extern "C"  void ReflectionUtils_GetDictionaryKeyValueTypes_m2265501485 (Il2CppObject * __this /* static, unused */, Type_t * ___dictionaryType, Type_t ** ___keyType, Type_t ** ___valueType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type Newtonsoft.Json.Utilities.ReflectionUtils::GetMemberUnderlyingType(System.Reflection.MemberInfo)
extern "C"  Type_t * ReflectionUtils_GetMemberUnderlyingType_m592170182 (Il2CppObject * __this /* static, unused */, MemberInfo_t * ___member, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Utilities.ReflectionUtils::IsIndexedProperty(System.Reflection.MemberInfo)
extern "C"  bool ReflectionUtils_IsIndexedProperty_m1117002059 (Il2CppObject * __this /* static, unused */, MemberInfo_t * ___member, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Utilities.ReflectionUtils::IsIndexedProperty(System.Reflection.PropertyInfo)
extern "C"  bool ReflectionUtils_IsIndexedProperty_m2535987312 (Il2CppObject * __this /* static, unused */, PropertyInfo_t * ___property, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Newtonsoft.Json.Utilities.ReflectionUtils::GetMemberValue(System.Reflection.MemberInfo,System.Object)
extern "C"  Il2CppObject * ReflectionUtils_GetMemberValue_m2478152095 (Il2CppObject * __this /* static, unused */, MemberInfo_t * ___member, Il2CppObject * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Utilities.ReflectionUtils::SetMemberValue(System.Reflection.MemberInfo,System.Object,System.Object)
extern "C"  void ReflectionUtils_SetMemberValue_m296669750 (Il2CppObject * __this /* static, unused */, MemberInfo_t * ___member, Il2CppObject * ___target, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Utilities.ReflectionUtils::CanReadMemberValue(System.Reflection.MemberInfo,System.Boolean)
extern "C"  bool ReflectionUtils_CanReadMemberValue_m2941652529 (Il2CppObject * __this /* static, unused */, MemberInfo_t * ___member, bool ___nonPublic, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Utilities.ReflectionUtils::CanSetMemberValue(System.Reflection.MemberInfo,System.Boolean,System.Boolean)
extern "C"  bool ReflectionUtils_CanSetMemberValue_m795657396 (Il2CppObject * __this /* static, unused */, MemberInfo_t * ___member, bool ___nonPublic, bool ___canSetReadOnly, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<System.Reflection.MemberInfo> Newtonsoft.Json.Utilities.ReflectionUtils::GetFieldsAndProperties(System.Type,System.Reflection.BindingFlags)
extern "C"  List_1_t3639992783 * ReflectionUtils_GetFieldsAndProperties_m1812038804 (Il2CppObject * __this /* static, unused */, Type_t * ___type, int32_t ___bindingAttr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Utilities.ReflectionUtils::IsOverridenGenericMember(System.Reflection.MemberInfo,System.Reflection.BindingFlags)
extern "C"  bool ReflectionUtils_IsOverridenGenericMember_m2399681260 (Il2CppObject * __this /* static, unused */, MemberInfo_t * ___memberInfo, int32_t ___bindingAttr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Attribute[] Newtonsoft.Json.Utilities.ReflectionUtils::GetAttributes(System.Object,System.Type,System.Boolean)
extern "C"  AttributeU5BU5D_t4076389004* ReflectionUtils_GetAttributes_m1058204904 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___attributeProvider, Type_t * ___attributeType, bool ___inherit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Utilities.ReflectionUtils::SplitFullyQualifiedTypeName(System.String,System.String&,System.String&)
extern "C"  void ReflectionUtils_SplitFullyQualifiedTypeName_m1934888864 (Il2CppObject * __this /* static, unused */, String_t* ___fullyQualifiedTypeName, String_t** ___typeName, String_t** ___assemblyName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Nullable`1<System.Int32> Newtonsoft.Json.Utilities.ReflectionUtils::GetAssemblyDelimiterIndex(System.String)
extern "C"  Nullable_1_t1438485399  ReflectionUtils_GetAssemblyDelimiterIndex_m740892475 (Il2CppObject * __this /* static, unused */, String_t* ___fullyQualifiedTypeName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MemberInfo Newtonsoft.Json.Utilities.ReflectionUtils::GetMemberInfoFromType(System.Type,System.Reflection.MemberInfo)
extern "C"  MemberInfo_t * ReflectionUtils_GetMemberInfoFromType_m974639611 (Il2CppObject * __this /* static, unused */, Type_t * ___targetType, MemberInfo_t * ___memberInfo, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<System.Reflection.FieldInfo> Newtonsoft.Json.Utilities.ReflectionUtils::GetFields(System.Type,System.Reflection.BindingFlags)
extern "C"  Il2CppObject* ReflectionUtils_GetFields_m2705644247 (Il2CppObject * __this /* static, unused */, Type_t * ___targetType, int32_t ___bindingAttr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Utilities.ReflectionUtils::GetChildPrivateFields(System.Collections.Generic.IList`1<System.Reflection.MemberInfo>,System.Type,System.Reflection.BindingFlags)
extern "C"  void ReflectionUtils_GetChildPrivateFields_m224600869 (Il2CppObject * __this /* static, unused */, Il2CppObject* ___initialFields, Type_t * ___targetType, int32_t ___bindingAttr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<System.Reflection.PropertyInfo> Newtonsoft.Json.Utilities.ReflectionUtils::GetProperties(System.Type,System.Reflection.BindingFlags)
extern "C"  Il2CppObject* ReflectionUtils_GetProperties_m554532934 (Il2CppObject * __this /* static, unused */, Type_t * ___targetType, int32_t ___bindingAttr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.BindingFlags Newtonsoft.Json.Utilities.ReflectionUtils::RemoveFlag(System.Reflection.BindingFlags,System.Reflection.BindingFlags)
extern "C"  int32_t ReflectionUtils_RemoveFlag_m3036042546 (Il2CppObject * __this /* static, unused */, int32_t ___bindingAttr, int32_t ___flag, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Utilities.ReflectionUtils::GetChildPrivateProperties(System.Collections.Generic.IList`1<System.Reflection.PropertyInfo>,System.Type,System.Reflection.BindingFlags)
extern "C"  void ReflectionUtils_GetChildPrivateProperties_m1499688784 (Il2CppObject * __this /* static, unused */, Il2CppObject* ___initialProperties, Type_t * ___targetType, int32_t ___bindingAttr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Newtonsoft.Json.Utilities.ReflectionUtils::GetDefaultValue(System.Type)
extern "C"  Il2CppObject * ReflectionUtils_GetDefaultValue_m928200493 (Il2CppObject * __this /* static, unused */, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
