#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// System.Char[]
struct CharU5BU5D_t_1225802637_0;
// System.Collections.Generic.List`1<JSONObject>
struct List_1_t_1693947170_0;
// System.Collections.Generic.List`1<System.String>
struct List_1_t_293602512_0;
// System.Diagnostics.Stopwatch
struct Stopwatch_t_1779390746_0;

#include "mscorlib_System_Object_887538054.h"
#include "AssemblyU2DCSharp_JSONObject_Type1830530535.h"

// JSONObject
struct  JSONObject_t_498240670_0  : public Object_t
{
	// JSONObject/Type JSONObject::type
	int32_t ___type_6;
	// System.Collections.Generic.List`1<JSONObject> JSONObject::list
	List_1_t_1693947170_0 * ___list_7;
	// System.Collections.Generic.List`1<System.String> JSONObject::keys
	List_1_t_293602512_0 * ___keys_8;
	// System.String JSONObject::str
	String_t* ___str_9;
	// System.Single JSONObject::n
	float ___n_10;
	// System.Boolean JSONObject::b
	bool ___b_11;
};
struct JSONObject_t_498240670_0_StaticFields{
	// System.Char[] JSONObject::WHITESPACE
	CharU5BU5D_t_1225802637_0* ___WHITESPACE_5;
	// System.Diagnostics.Stopwatch JSONObject::printWatch
	Stopwatch_t_1779390746_0 * ___printWatch_12;
};
