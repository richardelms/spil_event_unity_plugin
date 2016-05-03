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

// SpilGames.Unity.Helpers.PackagesHelper
struct PackagesHelper_t1471447264;
// SpilGames.Unity.Utils.PackagesData
struct PackagesData_t4113443648;
// SpilGames.Unity.Helpers.Package
struct Package_t3914683883;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_SpilGames_Unity_Utils_PackagesDa4113443648.h"
#include "mscorlib_System_String968488902.h"

// System.Void SpilGames.Unity.Helpers.PackagesHelper::.ctor(SpilGames.Unity.Utils.PackagesData)
extern "C"  void PackagesHelper__ctor_m1046987063 (PackagesHelper_t1471447264 * __this, PackagesData_t4113443648 * ___packagesData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SpilGames.Unity.Helpers.Package SpilGames.Unity.Helpers.PackagesHelper::GetPackageById(System.String)
extern "C"  Package_t3914683883 * PackagesHelper_GetPackageById_m1277919089 (PackagesHelper_t1471447264 * __this, String_t* ___packageId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
