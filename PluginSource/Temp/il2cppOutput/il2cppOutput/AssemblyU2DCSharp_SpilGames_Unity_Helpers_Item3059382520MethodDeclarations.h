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

// SpilGames.Unity.Helpers.Item
struct Item_t3059382520;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"

// System.Void SpilGames.Unity.Helpers.Item::.ctor(System.String,System.String,System.String)
extern "C"  void Item__ctor_m896822945 (Item_t3059382520 * __this, String_t* ___id, String_t* ___originalValue, String_t* ___promotionValue, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String SpilGames.Unity.Helpers.Item::get_Id()
extern "C"  String_t* Item_get_Id_m581567538 (Item_t3059382520 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String SpilGames.Unity.Helpers.Item::get_OriginalValue()
extern "C"  String_t* Item_get_OriginalValue_m322797707 (Item_t3059382520 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String SpilGames.Unity.Helpers.Item::get_PromotionValue()
extern "C"  String_t* Item_get_PromotionValue_m2263082981 (Item_t3059382520 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String SpilGames.Unity.Helpers.Item::GetRealValue()
extern "C"  String_t* Item_GetRealValue_m2833933643 (Item_t3059382520 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean SpilGames.Unity.Helpers.Item::HasActivePromotion()
extern "C"  bool Item_HasActivePromotion_m4280455906 (Item_t3059382520 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
