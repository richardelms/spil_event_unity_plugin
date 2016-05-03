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

// System.Xml.Schema.ValidationEventHandler
struct ValidationEventHandler_t2777264566;
// System.Object
struct Il2CppObject;
// System.Xml.Schema.ValidationEventArgs
struct ValidationEventArgs_t1700465963;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "System_Xml_System_Xml_Schema_ValidationEventArgs1700465963.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void System.Xml.Schema.ValidationEventHandler::.ctor(System.Object,System.IntPtr)
extern "C"  void ValidationEventHandler__ctor_m2060655069 (ValidationEventHandler_t2777264566 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.ValidationEventHandler::Invoke(System.Object,System.Xml.Schema.ValidationEventArgs)
extern "C"  void ValidationEventHandler_Invoke_m3220362594 (ValidationEventHandler_t2777264566 * __this, Il2CppObject * ___sender, ValidationEventArgs_t1700465963 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_ValidationEventHandler_t2777264566(Il2CppObject* delegate, Il2CppObject * ___sender, ValidationEventArgs_t1700465963 * ___e);
// System.IAsyncResult System.Xml.Schema.ValidationEventHandler::BeginInvoke(System.Object,System.Xml.Schema.ValidationEventArgs,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * ValidationEventHandler_BeginInvoke_m2898382809 (ValidationEventHandler_t2777264566 * __this, Il2CppObject * ___sender, ValidationEventArgs_t1700465963 * ___e, AsyncCallback_t1363551830 * ___callback, Il2CppObject * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.ValidationEventHandler::EndInvoke(System.IAsyncResult)
extern "C"  void ValidationEventHandler_EndInvoke_m248513133 (ValidationEventHandler_t2777264566 * __this, Il2CppObject * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
