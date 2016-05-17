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

// SpilGames.Unity.Spil
struct Spil_t3960291416;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_SpilGames_Unity_Utils_enumAdType3844448071.h"
#include "mscorlib_System_String968488902.h"

// System.Void SpilGames.Unity.Spil::.ctor()
extern "C"  void Spil__ctor_m648802357 (Spil_t3960291416 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SpilGames.Unity.Spil::.cctor()
extern "C"  void Spil__cctor_m2450907672 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SpilGames.Unity.Spil::AttachListeners()
extern "C"  void Spil_AttachListeners_m2990039501 (Spil_t3960291416 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SpilGames.Unity.Spil::AdAvailableHandler(SpilGames.Unity.Utils.enumAdType)
extern "C"  void Spil_AdAvailableHandler_m1440363506 (Spil_t3960291416 * __this, int32_t ___adType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SpilGames.Unity.Spil::AdNotAvailableHandler(SpilGames.Unity.Utils.enumAdType)
extern "C"  void Spil_AdNotAvailableHandler_m255652259 (Spil_t3960291416 * __this, int32_t ___adType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String SpilGames.Unity.Spil::get_Project_ID()
extern "C"  String_t* Spil_get_Project_ID_m1710269148 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SpilGames.Unity.Spil::Update()
extern "C"  void Spil_Update_m364898680 (Spil_t3960291416 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SpilGames.Unity.Spil::Awake()
extern "C"  void Spil_Awake_m886407576 (Spil_t3960291416 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SpilGames.Unity.Spil::AdStarted()
extern "C"  void Spil_AdStarted_m4248964017 (Spil_t3960291416 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SpilGames.Unity.Spil::AdFinished(System.String)
extern "C"  void Spil_AdFinished_m2059928862 (Spil_t3960291416 * __this, String_t* ___response, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SpilGames.Unity.Spil::AdAvailable(System.String)
extern "C"  void Spil_AdAvailable_m2540306281 (Spil_t3960291416 * __this, String_t* ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SpilGames.Unity.Spil::AdNotAvailable(System.String)
extern "C"  void Spil_AdNotAvailable_m1912731738 (Spil_t3960291416 * __this, String_t* ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
