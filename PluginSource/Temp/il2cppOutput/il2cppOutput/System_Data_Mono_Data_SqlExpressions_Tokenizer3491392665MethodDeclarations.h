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

// Mono.Data.SqlExpressions.Tokenizer
struct Tokenizer_t3491392665;
// System.String
struct String_t;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"

// System.Void Mono.Data.SqlExpressions.Tokenizer::.ctor(System.String)
extern "C"  void Tokenizer__ctor_m3378667259 (Tokenizer_t3491392665 * __this, String_t* ___strInput, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Data.SqlExpressions.Tokenizer::.cctor()
extern "C"  void Tokenizer__cctor_m2268199206 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char Mono.Data.SqlExpressions.Tokenizer::Current()
extern "C"  uint16_t Tokenizer_Current_m2651067648 (Tokenizer_t3491392665 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char Mono.Data.SqlExpressions.Tokenizer::Next()
extern "C"  uint16_t Tokenizer_Next_m2605545518 (Tokenizer_t3491392665 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Data.SqlExpressions.Tokenizer::MoveNext()
extern "C"  bool Tokenizer_MoveNext_m2060953259 (Tokenizer_t3491392665 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Data.SqlExpressions.Tokenizer::SkipWhiteSpace()
extern "C"  bool Tokenizer_SkipWhiteSpace_m3990433539 (Tokenizer_t3491392665 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Data.SqlExpressions.Tokenizer::ReadNumber()
extern "C"  Il2CppObject * Tokenizer_ReadNumber_m3209274929 (Tokenizer_t3491392665 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char Mono.Data.SqlExpressions.Tokenizer::ProcessEscapes(System.Char)
extern "C"  uint16_t Tokenizer_ProcessEscapes_m2294204607 (Tokenizer_t3491392665 * __this, uint16_t ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Data.SqlExpressions.Tokenizer::ReadString(System.Char)
extern "C"  String_t* Tokenizer_ReadString_m1363060246 (Tokenizer_t3491392665 * __this, uint16_t ___terminator, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Data.SqlExpressions.Tokenizer::ReadString(System.Char,System.Boolean)
extern "C"  String_t* Tokenizer_ReadString_m1319763623 (Tokenizer_t3491392665 * __this, uint16_t ___terminator, bool ___canEscape, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Data.SqlExpressions.Tokenizer::ReadIdentifier()
extern "C"  String_t* Tokenizer_ReadIdentifier_m3620525695 (Tokenizer_t3491392665 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Data.SqlExpressions.Tokenizer::ParseIdentifier()
extern "C"  int32_t Tokenizer_ParseIdentifier_m2775707869 (Tokenizer_t3491392665 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Data.SqlExpressions.Tokenizer::ParseToken()
extern "C"  int32_t Tokenizer_ParseToken_m613385063 (Tokenizer_t3491392665 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Data.SqlExpressions.Tokenizer::advance()
extern "C"  bool Tokenizer_advance_m634557469 (Tokenizer_t3491392665 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Data.SqlExpressions.Tokenizer::token()
extern "C"  int32_t Tokenizer_token_m3550265338 (Tokenizer_t3491392665 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Data.SqlExpressions.Tokenizer::value()
extern "C"  Il2CppObject * Tokenizer_value_m3010131777 (Tokenizer_t3491392665 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
