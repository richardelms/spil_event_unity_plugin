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

// System.ComponentModel.EventHandlerList
struct EventHandlerList_t120044247;
// System.Delegate
struct Delegate_t3660574010;
// System.Object
struct Il2CppObject;
// System.ComponentModel.ListEntry
struct ListEntry_t705329405;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_Delegate3660574010.h"

// System.Void System.ComponentModel.EventHandlerList::.ctor()
extern "C"  void EventHandlerList__ctor_m2325431563 (EventHandlerList_t120044247 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.ComponentModel.EventHandlerList::get_Item(System.Object)
extern "C"  Delegate_t3660574010 * EventHandlerList_get_Item_m57190128 (EventHandlerList_t120044247 * __this, Il2CppObject * ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.EventHandlerList::AddHandler(System.Object,System.Delegate)
extern "C"  void EventHandlerList_AddHandler_m1753597722 (EventHandlerList_t120044247 * __this, Il2CppObject * ___key, Delegate_t3660574010 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.EventHandlerList::RemoveHandler(System.Object,System.Delegate)
extern "C"  void EventHandlerList_RemoveHandler_m1969020269 (EventHandlerList_t120044247 * __this, Il2CppObject * ___key, Delegate_t3660574010 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.EventHandlerList::Dispose()
extern "C"  void EventHandlerList_Dispose_m1255021192 (EventHandlerList_t120044247 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.ListEntry System.ComponentModel.EventHandlerList::FindEntry(System.Object)
extern "C"  ListEntry_t705329405 * EventHandlerList_FindEntry_m3323775348 (EventHandlerList_t120044247 * __this, Il2CppObject * ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
