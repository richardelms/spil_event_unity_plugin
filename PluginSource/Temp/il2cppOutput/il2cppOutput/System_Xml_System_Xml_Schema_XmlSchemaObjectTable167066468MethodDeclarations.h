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

// System.Xml.Schema.XmlSchemaObjectTable
struct XmlSchemaObjectTable_t167066468;
// System.Xml.Schema.XmlSchemaObject
struct XmlSchemaObject_t2900481284;
// System.Xml.XmlQualifiedName
struct XmlQualifiedName_t176365656;
// System.Collections.ICollection
struct ICollection_t3761522009;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1541724277;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_XmlQualifiedName176365656.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaObject2900481284.h"

// System.Void System.Xml.Schema.XmlSchemaObjectTable::.ctor()
extern "C"  void XmlSchemaObjectTable__ctor_m2197681143 (XmlSchemaObjectTable_t167066468 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.XmlSchemaObjectTable::get_Count()
extern "C"  int32_t XmlSchemaObjectTable_get_Count_m2682292569 (XmlSchemaObjectTable_t167066468 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaObject System.Xml.Schema.XmlSchemaObjectTable::get_Item(System.Xml.XmlQualifiedName)
extern "C"  XmlSchemaObject_t2900481284 * XmlSchemaObjectTable_get_Item_m2018580464 (XmlSchemaObjectTable_t167066468 * __this, XmlQualifiedName_t176365656 * ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ICollection System.Xml.Schema.XmlSchemaObjectTable::get_Names()
extern "C"  Il2CppObject * XmlSchemaObjectTable_get_Names_m3698609970 (XmlSchemaObjectTable_t167066468 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ICollection System.Xml.Schema.XmlSchemaObjectTable::get_Values()
extern "C"  Il2CppObject * XmlSchemaObjectTable_get_Values_m4031142362 (XmlSchemaObjectTable_t167066468 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaObjectTable::Contains(System.Xml.XmlQualifiedName)
extern "C"  bool XmlSchemaObjectTable_Contains_m3591667064 (XmlSchemaObjectTable_t167066468 * __this, XmlQualifiedName_t176365656 * ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IDictionaryEnumerator System.Xml.Schema.XmlSchemaObjectTable::GetEnumerator()
extern "C"  Il2CppObject * XmlSchemaObjectTable_GetEnumerator_m4054791657 (XmlSchemaObjectTable_t167066468 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaObjectTable::Add(System.Xml.XmlQualifiedName,System.Xml.Schema.XmlSchemaObject)
extern "C"  void XmlSchemaObjectTable_Add_m1928555522 (XmlSchemaObjectTable_t167066468 * __this, XmlQualifiedName_t176365656 * ___name, XmlSchemaObject_t2900481284 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaObjectTable::Clear()
extern "C"  void XmlSchemaObjectTable_Clear_m3898781730 (XmlSchemaObjectTable_t167066468 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaObjectTable::Set(System.Xml.XmlQualifiedName,System.Xml.Schema.XmlSchemaObject)
extern "C"  void XmlSchemaObjectTable_Set_m505066529 (XmlSchemaObjectTable_t167066468 * __this, XmlQualifiedName_t176365656 * ___name, XmlSchemaObject_t2900481284 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
