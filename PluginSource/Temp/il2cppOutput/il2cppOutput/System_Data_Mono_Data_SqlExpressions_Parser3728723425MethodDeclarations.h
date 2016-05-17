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

// Mono.Data.SqlExpressions.Parser
struct Parser_t3728723425;
// Mono.Data.SqlExpressions.IExpression
struct IExpression_t3509849443;
// System.String
struct String_t;
// System.Object
struct Il2CppObject;
// Mono.Data.SqlExpressions.yyParser.yyInput
struct yyInput_t3114228423;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Object837106420.h"

// System.Void Mono.Data.SqlExpressions.Parser::.ctor()
extern "C"  void Parser__ctor_m2748029193 (Parser_t3728723425 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Data.SqlExpressions.Parser::.cctor()
extern "C"  void Parser__cctor_m3102430148 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Data.SqlExpressions.IExpression Mono.Data.SqlExpressions.Parser::Compile(System.String)
extern "C"  Il2CppObject * Parser_Compile_m4217880590 (Parser_t3728723425 * __this, String_t* ___sqlExpr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Data.SqlExpressions.Parser::yyname(System.Int32)
extern "C"  String_t* Parser_yyname_m2586338996 (Il2CppObject * __this /* static, unused */, int32_t ___token, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Data.SqlExpressions.Parser::yyparse(Mono.Data.SqlExpressions.yyParser.yyInput,System.Object)
extern "C"  Il2CppObject * Parser_yyparse_m49981710 (Parser_t3728723425 * __this, Il2CppObject * ___yyLex, Il2CppObject * ___yyd, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Data.SqlExpressions.Parser::yyDefault(System.Object)
extern "C"  Il2CppObject * Parser_yyDefault_m4247893687 (Parser_t3728723425 * __this, Il2CppObject * ___first, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Data.SqlExpressions.Parser::yyparse(Mono.Data.SqlExpressions.yyParser.yyInput)
extern "C"  Il2CppObject * Parser_yyparse_m227167808 (Parser_t3728723425 * __this, Il2CppObject * ___yyLex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
