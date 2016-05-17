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

// System.Data.DelegateConstraintNameChange
struct DelegateConstraintNameChange_t674814672;
// System.Object
struct Il2CppObject;
// System.String
struct String_t;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void System.Data.DelegateConstraintNameChange::.ctor(System.Object,System.IntPtr)
extern "C"  void DelegateConstraintNameChange__ctor_m2579444078 (DelegateConstraintNameChange_t674814672 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DelegateConstraintNameChange::Invoke(System.Object,System.String)
extern "C"  void DelegateConstraintNameChange_Invoke_m4123721352 (DelegateConstraintNameChange_t674814672 * __this, Il2CppObject * ___sender, String_t* ___newName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_DelegateConstraintNameChange_t674814672(Il2CppObject* delegate, Il2CppObject * ___sender, String_t* ___newName);
// System.IAsyncResult System.Data.DelegateConstraintNameChange::BeginInvoke(System.Object,System.String,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * DelegateConstraintNameChange_BeginInvoke_m3926813553 (DelegateConstraintNameChange_t674814672 * __this, Il2CppObject * ___sender, String_t* ___newName, AsyncCallback_t1363551830 * ___callback, Il2CppObject * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DelegateConstraintNameChange::EndInvoke(System.IAsyncResult)
extern "C"  void DelegateConstraintNameChange_EndInvoke_m1884326526 (DelegateConstraintNameChange_t674814672 * __this, Il2CppObject * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
