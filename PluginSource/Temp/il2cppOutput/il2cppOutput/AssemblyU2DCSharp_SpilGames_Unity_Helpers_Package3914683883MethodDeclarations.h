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

// SpilGames.Unity.Helpers.Package
struct Package_t3914683883;
// System.String
struct String_t;
// SpilGames.Unity.Helpers.Item
struct Item_t3059382520;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_DateTime339033936.h"

// System.Void SpilGames.Unity.Helpers.Package::.ctor(System.String,System.String,System.String,System.String,System.String)
extern "C"  void Package__ctor_m1930608702 (Package_t3914683883 * __this, String_t* ___id, String_t* ___originalDiscountLabel, String_t* ___promotionDiscountLabel, String_t* ___promotionBeginDate, String_t* ___promotionEndDate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String SpilGames.Unity.Helpers.Package::get_Id()
extern "C"  String_t* Package_get_Id_m4085870001 (Package_t3914683883 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String SpilGames.Unity.Helpers.Package::get_OriginalDiscountLabel()
extern "C"  String_t* Package_get_OriginalDiscountLabel_m3781814254 (Package_t3914683883 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String SpilGames.Unity.Helpers.Package::get_PromotionDiscountLabel()
extern "C"  String_t* Package_get_PromotionDiscountLabel_m1757657382 (Package_t3914683883 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime SpilGames.Unity.Helpers.Package::get_PromotionBeginDate()
extern "C"  DateTime_t339033936  Package_get_PromotionBeginDate_m3335027956 (Package_t3914683883 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime SpilGames.Unity.Helpers.Package::get_PromotionEndDate()
extern "C"  DateTime_t339033936  Package_get_PromotionEndDate_m1939627686 (Package_t3914683883 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String SpilGames.Unity.Helpers.Package::GetRealDiscountLabel()
extern "C"  String_t* Package_GetRealDiscountLabel_m3948682188 (Package_t3914683883 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean SpilGames.Unity.Helpers.Package::HasActivePromotion()
extern "C"  bool Package_HasActivePromotion_m3530075039 (Package_t3914683883 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SpilGames.Unity.Helpers.Item SpilGames.Unity.Helpers.Package::GetItemById(System.String)
extern "C"  Item_t3059382520 * Package_GetItemById_m1706979802 (Package_t3914683883 * __this, String_t* ___itemId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
