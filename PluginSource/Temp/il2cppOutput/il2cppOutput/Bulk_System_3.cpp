#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>

// System.UriParser
struct UriParser_t1660745760;
// System.Uri
struct Uri_t2776692961;
// System.UriFormatException
struct UriFormatException_t1145000641;
// System.String
struct String_t;
// System.Collections.Hashtable
struct Hashtable_t3875263730;
// System.UriTypeConverter
struct UriTypeConverter_t3286319;
// System.Type
struct Type_t;
// System.ComponentModel.ITypeDescriptorContext
struct ITypeDescriptorContext_t4233601286;
// System.Object
struct Il2CppObject;
// System.Globalization.CultureInfo
struct CultureInfo_t3603717042;

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array2840145358.h"
#include "System_System_UriHostNameType4203425070.h"
#include "System_System_UriHostNameType4203425070MethodDeclarations.h"
#include "System_System_UriKind4268040853.h"
#include "System_System_UriKind4268040853MethodDeclarations.h"
#include "System_System_UriParser1660745760.h"
#include "System_System_UriParser1660745760MethodDeclarations.h"
#include "mscorlib_System_Void2779279689.h"
#include "mscorlib_System_Object837106420MethodDeclarations.h"
#include "System_System_Text_RegularExpressions_Regex3802381858MethodDeclarations.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_String968488902.h"
#include "System_System_Text_RegularExpressions_Regex3802381858.h"
#include "System_System_Uri2776692961.h"
#include "System_System_UriFormatException1145000641.h"
#include "System_System_Uri2776692961MethodDeclarations.h"
#include "mscorlib_System_String968488902MethodDeclarations.h"
#include "System_System_UriFormatException1145000641MethodDeclarations.h"
#include "mscorlib_System_Boolean211005341.h"
#include "mscorlib_System_Int322847414787.h"
#include "mscorlib_System_Collections_Hashtable3875263730MethodDeclarations.h"
#include "System_System_DefaultUriParser625205023MethodDeclarations.h"
#include "mscorlib_System_Threading_Monitor2071304733MethodDeclarations.h"
#include "mscorlib_System_Collections_Hashtable3875263730.h"
#include "System_System_DefaultUriParser625205023.h"
#include "System_System_GenericUriParser2219856969.h"
#include "mscorlib_System_Globalization_CultureInfo3603717042MethodDeclarations.h"
#include "mscorlib_System_Globalization_CultureInfo3603717042.h"
#include "System_System_UriPartial2544661034.h"
#include "System_System_UriPartial2544661034MethodDeclarations.h"
#include "System_System_UriTypeConverter3286319.h"
#include "System_System_UriTypeConverter3286319MethodDeclarations.h"
#include "mscorlib_System_Type2779229935.h"
#include "mscorlib_System_Type2779229935MethodDeclarations.h"
#include "mscorlib_System_RuntimeTypeHandle1864875887.h"
#include "mscorlib_System_ArgumentNullException3214793280MethodDeclarations.h"
#include "mscorlib_System_ArgumentNullException3214793280.h"
#include "System_Locale2281372282MethodDeclarations.h"
#include "mscorlib_System_NotSupportedException1374155497MethodDeclarations.h"
#include "System_System_ComponentModel_TypeConverter3398830607MethodDeclarations.h"
#include "mscorlib_System_NotSupportedException1374155497.h"
#include "System_System_ComponentModel_TypeConverter3398830607.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.UriParser::.ctor()
extern "C"  void UriParser__ctor_m3933763184 (UriParser_t1660745760 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m1772956182(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.UriParser::.cctor()
extern TypeInfo* Il2CppObject_il2cpp_TypeInfo_var;
extern TypeInfo* UriParser_t1660745760_il2cpp_TypeInfo_var;
extern TypeInfo* Regex_t3802381858_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral3057722339;
extern Il2CppCodeGenString* _stringLiteral3989333014;
extern const uint32_t UriParser__cctor_m1205478205_MetadataUsageId;
extern "C"  void UriParser__cctor_m1205478205 (Il2CppObject * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (UriParser__cctor_m1205478205_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		Il2CppObject * L_0 = (Il2CppObject *)il2cpp_codegen_object_new(Il2CppObject_il2cpp_TypeInfo_var);
		Object__ctor_m1772956182(L_0, /*hidden argument*/NULL);
		((UriParser_t1660745760_StaticFields*)UriParser_t1660745760_il2cpp_TypeInfo_var->static_fields)->set_lock_object_0(L_0);
		Regex_t3802381858 * L_1 = (Regex_t3802381858 *)il2cpp_codegen_object_new(Regex_t3802381858_il2cpp_TypeInfo_var);
		Regex__ctor_m2980635200(L_1, _stringLiteral3057722339, /*hidden argument*/NULL);
		((UriParser_t1660745760_StaticFields*)UriParser_t1660745760_il2cpp_TypeInfo_var->static_fields)->set_uri_regex_4(L_1);
		Regex_t3802381858 * L_2 = (Regex_t3802381858 *)il2cpp_codegen_object_new(Regex_t3802381858_il2cpp_TypeInfo_var);
		Regex__ctor_m2980635200(L_2, _stringLiteral3989333014, /*hidden argument*/NULL);
		((UriParser_t1660745760_StaticFields*)UriParser_t1660745760_il2cpp_TypeInfo_var->static_fields)->set_auth_regex_5(L_2);
		return;
	}
}
// System.Void System.UriParser::InitializeAndValidate(System.Uri,System.UriFormatException&)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* UriFormatException_t1145000641_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral42;
extern Il2CppCodeGenString* _stringLiteral4198658576;
extern const uint32_t UriParser_InitializeAndValidate_m3968058349_MetadataUsageId;
extern "C"  void UriParser_InitializeAndValidate_m3968058349 (UriParser_t1660745760 * __this, Uri_t2776692961 * ___uri, UriFormatException_t1145000641 ** ___parsingError, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (UriParser_InitializeAndValidate_m3968058349_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		Uri_t2776692961 * L_0 = ___uri;
		NullCheck(L_0);
		String_t* L_1 = Uri_get_Scheme_m2606456870(L_0, /*hidden argument*/NULL);
		String_t* L_2 = __this->get_scheme_name_2();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_3 = String_op_Inequality_m2125462205(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_003c;
		}
	}
	{
		String_t* L_4 = __this->get_scheme_name_2();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_5 = String_op_Inequality_m2125462205(NULL /*static, unused*/, L_4, _stringLiteral42, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_003c;
		}
	}
	{
		UriFormatException_t1145000641 ** L_6 = ___parsingError;
		UriFormatException_t1145000641 * L_7 = (UriFormatException_t1145000641 *)il2cpp_codegen_object_new(UriFormatException_t1145000641_il2cpp_TypeInfo_var);
		UriFormatException__ctor_m3185454499(L_7, _stringLiteral4198658576, /*hidden argument*/NULL);
		*((Il2CppObject **)(L_6)) = (Il2CppObject *)L_7;
		Il2CppCodeGenWriteBarrier((Il2CppObject **)(L_6), (Il2CppObject *)L_7);
		goto IL_003f;
	}

IL_003c:
	{
		UriFormatException_t1145000641 ** L_8 = ___parsingError;
		*((Il2CppObject **)(L_8)) = (Il2CppObject *)NULL;
		Il2CppCodeGenWriteBarrier((Il2CppObject **)(L_8), (Il2CppObject *)NULL);
	}

IL_003f:
	{
		return;
	}
}
// System.Void System.UriParser::OnRegister(System.String,System.Int32)
extern "C"  void UriParser_OnRegister_m3986311499 (UriParser_t1660745760 * __this, String_t* ___schemeName, int32_t ___defaultPort, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void System.UriParser::set_SchemeName(System.String)
extern "C"  void UriParser_set_SchemeName_m706252033 (UriParser_t1660745760 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->set_scheme_name_2(L_0);
		return;
	}
}
// System.Int32 System.UriParser::get_DefaultPort()
extern "C"  int32_t UriParser_get_DefaultPort_m3728184791 (UriParser_t1660745760 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = __this->get_default_port_3();
		return L_0;
	}
}
// System.Void System.UriParser::set_DefaultPort(System.Int32)
extern "C"  void UriParser_set_DefaultPort_m1019606244 (UriParser_t1660745760 * __this, int32_t ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->set_default_port_3(L_0);
		return;
	}
}
// System.Void System.UriParser::CreateDefaults()
extern TypeInfo* UriParser_t1660745760_il2cpp_TypeInfo_var;
extern TypeInfo* Hashtable_t3875263730_il2cpp_TypeInfo_var;
extern TypeInfo* DefaultUriParser_t625205023_il2cpp_TypeInfo_var;
extern TypeInfo* Uri_t2776692961_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral3316647;
extern const uint32_t UriParser_CreateDefaults_m2648397058_MetadataUsageId;
extern "C"  void UriParser_CreateDefaults_m2648397058 (Il2CppObject * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (UriParser_CreateDefaults_m2648397058_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	Hashtable_t3875263730 * V_0 = NULL;
	Il2CppObject * V_1 = NULL;
	Exception_t1967233988 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t1967233988 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		IL2CPP_RUNTIME_CLASS_INIT(UriParser_t1660745760_il2cpp_TypeInfo_var);
		Hashtable_t3875263730 * L_0 = ((UriParser_t1660745760_StaticFields*)UriParser_t1660745760_il2cpp_TypeInfo_var->static_fields)->get_table_1();
		if (!L_0)
		{
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		Hashtable_t3875263730 * L_1 = (Hashtable_t3875263730 *)il2cpp_codegen_object_new(Hashtable_t3875263730_il2cpp_TypeInfo_var);
		Hashtable__ctor_m1514037738(L_1, /*hidden argument*/NULL);
		V_0 = L_1;
		Hashtable_t3875263730 * L_2 = V_0;
		DefaultUriParser_t625205023 * L_3 = (DefaultUriParser_t625205023 *)il2cpp_codegen_object_new(DefaultUriParser_t625205023_il2cpp_TypeInfo_var);
		DefaultUriParser__ctor_m1912198945(L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t2776692961_il2cpp_TypeInfo_var);
		String_t* L_4 = ((Uri_t2776692961_StaticFields*)Uri_t2776692961_il2cpp_TypeInfo_var->static_fields)->get_UriSchemeFile_19();
		IL2CPP_RUNTIME_CLASS_INIT(UriParser_t1660745760_il2cpp_TypeInfo_var);
		UriParser_InternalRegister_m1447570189(NULL /*static, unused*/, L_2, L_3, L_4, (-1), /*hidden argument*/NULL);
		Hashtable_t3875263730 * L_5 = V_0;
		DefaultUriParser_t625205023 * L_6 = (DefaultUriParser_t625205023 *)il2cpp_codegen_object_new(DefaultUriParser_t625205023_il2cpp_TypeInfo_var);
		DefaultUriParser__ctor_m1912198945(L_6, /*hidden argument*/NULL);
		String_t* L_7 = ((Uri_t2776692961_StaticFields*)Uri_t2776692961_il2cpp_TypeInfo_var->static_fields)->get_UriSchemeFtp_20();
		UriParser_InternalRegister_m1447570189(NULL /*static, unused*/, L_5, L_6, L_7, ((int32_t)21), /*hidden argument*/NULL);
		Hashtable_t3875263730 * L_8 = V_0;
		DefaultUriParser_t625205023 * L_9 = (DefaultUriParser_t625205023 *)il2cpp_codegen_object_new(DefaultUriParser_t625205023_il2cpp_TypeInfo_var);
		DefaultUriParser__ctor_m1912198945(L_9, /*hidden argument*/NULL);
		String_t* L_10 = ((Uri_t2776692961_StaticFields*)Uri_t2776692961_il2cpp_TypeInfo_var->static_fields)->get_UriSchemeGopher_21();
		UriParser_InternalRegister_m1447570189(NULL /*static, unused*/, L_8, L_9, L_10, ((int32_t)70), /*hidden argument*/NULL);
		Hashtable_t3875263730 * L_11 = V_0;
		DefaultUriParser_t625205023 * L_12 = (DefaultUriParser_t625205023 *)il2cpp_codegen_object_new(DefaultUriParser_t625205023_il2cpp_TypeInfo_var);
		DefaultUriParser__ctor_m1912198945(L_12, /*hidden argument*/NULL);
		String_t* L_13 = ((Uri_t2776692961_StaticFields*)Uri_t2776692961_il2cpp_TypeInfo_var->static_fields)->get_UriSchemeHttp_22();
		UriParser_InternalRegister_m1447570189(NULL /*static, unused*/, L_11, L_12, L_13, ((int32_t)80), /*hidden argument*/NULL);
		Hashtable_t3875263730 * L_14 = V_0;
		DefaultUriParser_t625205023 * L_15 = (DefaultUriParser_t625205023 *)il2cpp_codegen_object_new(DefaultUriParser_t625205023_il2cpp_TypeInfo_var);
		DefaultUriParser__ctor_m1912198945(L_15, /*hidden argument*/NULL);
		String_t* L_16 = ((Uri_t2776692961_StaticFields*)Uri_t2776692961_il2cpp_TypeInfo_var->static_fields)->get_UriSchemeHttps_23();
		UriParser_InternalRegister_m1447570189(NULL /*static, unused*/, L_14, L_15, L_16, ((int32_t)443), /*hidden argument*/NULL);
		Hashtable_t3875263730 * L_17 = V_0;
		DefaultUriParser_t625205023 * L_18 = (DefaultUriParser_t625205023 *)il2cpp_codegen_object_new(DefaultUriParser_t625205023_il2cpp_TypeInfo_var);
		DefaultUriParser__ctor_m1912198945(L_18, /*hidden argument*/NULL);
		String_t* L_19 = ((Uri_t2776692961_StaticFields*)Uri_t2776692961_il2cpp_TypeInfo_var->static_fields)->get_UriSchemeMailto_24();
		UriParser_InternalRegister_m1447570189(NULL /*static, unused*/, L_17, L_18, L_19, ((int32_t)25), /*hidden argument*/NULL);
		Hashtable_t3875263730 * L_20 = V_0;
		DefaultUriParser_t625205023 * L_21 = (DefaultUriParser_t625205023 *)il2cpp_codegen_object_new(DefaultUriParser_t625205023_il2cpp_TypeInfo_var);
		DefaultUriParser__ctor_m1912198945(L_21, /*hidden argument*/NULL);
		String_t* L_22 = ((Uri_t2776692961_StaticFields*)Uri_t2776692961_il2cpp_TypeInfo_var->static_fields)->get_UriSchemeNetPipe_27();
		UriParser_InternalRegister_m1447570189(NULL /*static, unused*/, L_20, L_21, L_22, (-1), /*hidden argument*/NULL);
		Hashtable_t3875263730 * L_23 = V_0;
		DefaultUriParser_t625205023 * L_24 = (DefaultUriParser_t625205023 *)il2cpp_codegen_object_new(DefaultUriParser_t625205023_il2cpp_TypeInfo_var);
		DefaultUriParser__ctor_m1912198945(L_24, /*hidden argument*/NULL);
		String_t* L_25 = ((Uri_t2776692961_StaticFields*)Uri_t2776692961_il2cpp_TypeInfo_var->static_fields)->get_UriSchemeNetTcp_28();
		UriParser_InternalRegister_m1447570189(NULL /*static, unused*/, L_23, L_24, L_25, (-1), /*hidden argument*/NULL);
		Hashtable_t3875263730 * L_26 = V_0;
		DefaultUriParser_t625205023 * L_27 = (DefaultUriParser_t625205023 *)il2cpp_codegen_object_new(DefaultUriParser_t625205023_il2cpp_TypeInfo_var);
		DefaultUriParser__ctor_m1912198945(L_27, /*hidden argument*/NULL);
		String_t* L_28 = ((Uri_t2776692961_StaticFields*)Uri_t2776692961_il2cpp_TypeInfo_var->static_fields)->get_UriSchemeNews_25();
		UriParser_InternalRegister_m1447570189(NULL /*static, unused*/, L_26, L_27, L_28, ((int32_t)119), /*hidden argument*/NULL);
		Hashtable_t3875263730 * L_29 = V_0;
		DefaultUriParser_t625205023 * L_30 = (DefaultUriParser_t625205023 *)il2cpp_codegen_object_new(DefaultUriParser_t625205023_il2cpp_TypeInfo_var);
		DefaultUriParser__ctor_m1912198945(L_30, /*hidden argument*/NULL);
		String_t* L_31 = ((Uri_t2776692961_StaticFields*)Uri_t2776692961_il2cpp_TypeInfo_var->static_fields)->get_UriSchemeNntp_26();
		UriParser_InternalRegister_m1447570189(NULL /*static, unused*/, L_29, L_30, L_31, ((int32_t)119), /*hidden argument*/NULL);
		Hashtable_t3875263730 * L_32 = V_0;
		DefaultUriParser_t625205023 * L_33 = (DefaultUriParser_t625205023 *)il2cpp_codegen_object_new(DefaultUriParser_t625205023_il2cpp_TypeInfo_var);
		DefaultUriParser__ctor_m1912198945(L_33, /*hidden argument*/NULL);
		UriParser_InternalRegister_m1447570189(NULL /*static, unused*/, L_32, L_33, _stringLiteral3316647, ((int32_t)389), /*hidden argument*/NULL);
		Il2CppObject * L_34 = ((UriParser_t1660745760_StaticFields*)UriParser_t1660745760_il2cpp_TypeInfo_var->static_fields)->get_lock_object_0();
		V_1 = L_34;
		Il2CppObject * L_35 = V_1;
		Monitor_Enter_m476686225(NULL /*static, unused*/, L_35, /*hidden argument*/NULL);
	}

IL_00e6:
	try
	{ // begin try (depth: 1)
		{
			IL2CPP_RUNTIME_CLASS_INIT(UriParser_t1660745760_il2cpp_TypeInfo_var);
			Hashtable_t3875263730 * L_36 = ((UriParser_t1660745760_StaticFields*)UriParser_t1660745760_il2cpp_TypeInfo_var->static_fields)->get_table_1();
			if (L_36)
			{
				goto IL_00fb;
			}
		}

IL_00f0:
		{
			Hashtable_t3875263730 * L_37 = V_0;
			IL2CPP_RUNTIME_CLASS_INIT(UriParser_t1660745760_il2cpp_TypeInfo_var);
			((UriParser_t1660745760_StaticFields*)UriParser_t1660745760_il2cpp_TypeInfo_var->static_fields)->set_table_1(L_37);
			goto IL_00fd;
		}

IL_00fb:
		{
			V_0 = (Hashtable_t3875263730 *)NULL;
		}

IL_00fd:
		{
			IL2CPP_LEAVE(0x109, FINALLY_0102);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t1967233988 *)e.ex;
		goto FINALLY_0102;
	}

FINALLY_0102:
	{ // begin finally (depth: 1)
		Il2CppObject * L_38 = V_1;
		Monitor_Exit_m2088237919(NULL /*static, unused*/, L_38, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(258)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(258)
	{
		IL2CPP_JUMP_TBL(0x109, IL_0109)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t1967233988 *)
	}

IL_0109:
	{
		return;
	}
}
// System.Void System.UriParser::InternalRegister(System.Collections.Hashtable,System.UriParser,System.String,System.Int32)
extern TypeInfo* GenericUriParser_t2219856969_il2cpp_TypeInfo_var;
extern TypeInfo* DefaultUriParser_t625205023_il2cpp_TypeInfo_var;
extern const uint32_t UriParser_InternalRegister_m1447570189_MetadataUsageId;
extern "C"  void UriParser_InternalRegister_m1447570189 (Il2CppObject * __this /* static, unused */, Hashtable_t3875263730 * ___table, UriParser_t1660745760 * ___uriParser, String_t* ___schemeName, int32_t ___defaultPort, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (UriParser_InternalRegister_m1447570189_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	DefaultUriParser_t625205023 * V_0 = NULL;
	{
		UriParser_t1660745760 * L_0 = ___uriParser;
		String_t* L_1 = ___schemeName;
		NullCheck(L_0);
		UriParser_set_SchemeName_m706252033(L_0, L_1, /*hidden argument*/NULL);
		UriParser_t1660745760 * L_2 = ___uriParser;
		int32_t L_3 = ___defaultPort;
		NullCheck(L_2);
		UriParser_set_DefaultPort_m1019606244(L_2, L_3, /*hidden argument*/NULL);
		UriParser_t1660745760 * L_4 = ___uriParser;
		if (!((GenericUriParser_t2219856969 *)IsInstClass(L_4, GenericUriParser_t2219856969_il2cpp_TypeInfo_var)))
		{
			goto IL_0026;
		}
	}
	{
		Hashtable_t3875263730 * L_5 = ___table;
		String_t* L_6 = ___schemeName;
		UriParser_t1660745760 * L_7 = ___uriParser;
		NullCheck(L_5);
		VirtActionInvoker2< Il2CppObject *, Il2CppObject * >::Invoke(29 /* System.Void System.Collections.Hashtable::Add(System.Object,System.Object) */, L_5, L_6, L_7);
		goto IL_0042;
	}

IL_0026:
	{
		DefaultUriParser_t625205023 * L_8 = (DefaultUriParser_t625205023 *)il2cpp_codegen_object_new(DefaultUriParser_t625205023_il2cpp_TypeInfo_var);
		DefaultUriParser__ctor_m1912198945(L_8, /*hidden argument*/NULL);
		V_0 = L_8;
		DefaultUriParser_t625205023 * L_9 = V_0;
		String_t* L_10 = ___schemeName;
		NullCheck(L_9);
		UriParser_set_SchemeName_m706252033(L_9, L_10, /*hidden argument*/NULL);
		DefaultUriParser_t625205023 * L_11 = V_0;
		int32_t L_12 = ___defaultPort;
		NullCheck(L_11);
		UriParser_set_DefaultPort_m1019606244(L_11, L_12, /*hidden argument*/NULL);
		Hashtable_t3875263730 * L_13 = ___table;
		String_t* L_14 = ___schemeName;
		DefaultUriParser_t625205023 * L_15 = V_0;
		NullCheck(L_13);
		VirtActionInvoker2< Il2CppObject *, Il2CppObject * >::Invoke(29 /* System.Void System.Collections.Hashtable::Add(System.Object,System.Object) */, L_13, L_14, L_15);
	}

IL_0042:
	{
		UriParser_t1660745760 * L_16 = ___uriParser;
		String_t* L_17 = ___schemeName;
		int32_t L_18 = ___defaultPort;
		NullCheck(L_16);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(5 /* System.Void System.UriParser::OnRegister(System.String,System.Int32) */, L_16, L_17, L_18);
		return;
	}
}
// System.UriParser System.UriParser::GetParser(System.String)
extern TypeInfo* UriParser_t1660745760_il2cpp_TypeInfo_var;
extern TypeInfo* CultureInfo_t3603717042_il2cpp_TypeInfo_var;
extern const uint32_t UriParser_GetParser_m635613298_MetadataUsageId;
extern "C"  UriParser_t1660745760 * UriParser_GetParser_m635613298 (Il2CppObject * __this /* static, unused */, String_t* ___schemeName, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (UriParser_GetParser_m635613298_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = NULL;
	{
		String_t* L_0 = ___schemeName;
		if (L_0)
		{
			goto IL_0008;
		}
	}
	{
		return (UriParser_t1660745760 *)NULL;
	}

IL_0008:
	{
		IL2CPP_RUNTIME_CLASS_INIT(UriParser_t1660745760_il2cpp_TypeInfo_var);
		UriParser_CreateDefaults_m2648397058(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_1 = ___schemeName;
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t3603717042_il2cpp_TypeInfo_var);
		CultureInfo_t3603717042 * L_2 = CultureInfo_get_InvariantCulture_m764001524(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_1);
		String_t* L_3 = String_ToLower_m2140020155(L_1, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		Hashtable_t3875263730 * L_4 = ((UriParser_t1660745760_StaticFields*)UriParser_t1660745760_il2cpp_TypeInfo_var->static_fields)->get_table_1();
		String_t* L_5 = V_0;
		NullCheck(L_4);
		Il2CppObject * L_6 = VirtFuncInvoker1< Il2CppObject *, Il2CppObject * >::Invoke(26 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_4, L_5);
		return ((UriParser_t1660745760 *)CastclassClass(L_6, UriParser_t1660745760_il2cpp_TypeInfo_var));
	}
}
// System.Boolean System.UriTypeConverter::CanConvert(System.Type)
extern const Il2CppType* String_t_0_0_0_var;
extern const Il2CppType* Uri_t2776692961_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern const uint32_t UriTypeConverter_CanConvert_m3310548153_MetadataUsageId;
extern "C"  bool UriTypeConverter_CanConvert_m3310548153 (UriTypeConverter_t3286319 * __this, Type_t * ___type, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (UriTypeConverter_CanConvert_m3310548153_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		Type_t * L_0 = ___type;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m3806905434(NULL /*static, unused*/, LoadTypeToken(String_t_0_0_0_var), /*hidden argument*/NULL);
		if ((!(((Il2CppObject*)(Type_t *)L_0) == ((Il2CppObject*)(Type_t *)L_1))))
		{
			goto IL_0012;
		}
	}
	{
		return (bool)1;
	}

IL_0012:
	{
		Type_t * L_2 = ___type;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_3 = Type_GetTypeFromHandle_m3806905434(NULL /*static, unused*/, LoadTypeToken(Uri_t2776692961_0_0_0_var), /*hidden argument*/NULL);
		if ((!(((Il2CppObject*)(Type_t *)L_2) == ((Il2CppObject*)(Type_t *)L_3))))
		{
			goto IL_0024;
		}
	}
	{
		return (bool)1;
	}

IL_0024:
	{
		return (bool)0;
	}
}
// System.Boolean System.UriTypeConverter::CanConvertFrom(System.ComponentModel.ITypeDescriptorContext,System.Type)
extern TypeInfo* ArgumentNullException_t3214793280_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral3183535605;
extern const uint32_t UriTypeConverter_CanConvertFrom_m80729437_MetadataUsageId;
extern "C"  bool UriTypeConverter_CanConvertFrom_m80729437 (UriTypeConverter_t3286319 * __this, Il2CppObject * ___context, Type_t * ___sourceType, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (UriTypeConverter_CanConvertFrom_m80729437_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		Type_t * L_0 = ___sourceType;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t3214793280 * L_1 = (ArgumentNullException_t3214793280 *)il2cpp_codegen_object_new(ArgumentNullException_t3214793280_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m135444188(L_1, _stringLiteral3183535605, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1);
	}

IL_0011:
	{
		Type_t * L_2 = ___sourceType;
		bool L_3 = UriTypeConverter_CanConvert_m3310548153(__this, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Boolean System.UriTypeConverter::CanConvertTo(System.ComponentModel.ITypeDescriptorContext,System.Type)
extern "C"  bool UriTypeConverter_CanConvertTo_m1085358254 (UriTypeConverter_t3286319 * __this, Il2CppObject * ___context, Type_t * ___destinationType, const MethodInfo* method)
{
	{
		Type_t * L_0 = ___destinationType;
		if (L_0)
		{
			goto IL_0008;
		}
	}
	{
		return (bool)0;
	}

IL_0008:
	{
		Type_t * L_1 = ___destinationType;
		bool L_2 = UriTypeConverter_CanConvert_m3310548153(__this, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Object System.UriTypeConverter::ConvertFrom(System.ComponentModel.ITypeDescriptorContext,System.Globalization.CultureInfo,System.Object)
extern TypeInfo* ArgumentNullException_t3214793280_il2cpp_TypeInfo_var;
extern TypeInfo* NotSupportedException_t1374155497_il2cpp_TypeInfo_var;
extern TypeInfo* Uri_t2776692961_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral111972721;
extern Il2CppCodeGenString* _stringLiteral1040371881;
extern const uint32_t UriTypeConverter_ConvertFrom_m1831566755_MetadataUsageId;
extern "C"  Il2CppObject * UriTypeConverter_ConvertFrom_m1831566755 (UriTypeConverter_t3286319 * __this, Il2CppObject * ___context, CultureInfo_t3603717042 * ___culture, Il2CppObject * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (UriTypeConverter_ConvertFrom_m1831566755_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = NULL;
	{
		Il2CppObject * L_0 = ___value;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t3214793280 * L_1 = (ArgumentNullException_t3214793280 *)il2cpp_codegen_object_new(ArgumentNullException_t3214793280_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m135444188(L_1, _stringLiteral111972721, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1);
	}

IL_0011:
	{
		Il2CppObject * L_2 = ___context;
		Il2CppObject * L_3 = ___value;
		NullCheck(L_3);
		Type_t * L_4 = Object_GetType_m2022236990(L_3, /*hidden argument*/NULL);
		bool L_5 = VirtFuncInvoker2< bool, Il2CppObject *, Type_t * >::Invoke(4 /* System.Boolean System.UriTypeConverter::CanConvertFrom(System.ComponentModel.ITypeDescriptorContext,System.Type) */, __this, L_2, L_4);
		if (L_5)
		{
			goto IL_0033;
		}
	}
	{
		String_t* L_6 = Locale_GetText_m3269873186(NULL /*static, unused*/, _stringLiteral1040371881, /*hidden argument*/NULL);
		NotSupportedException_t1374155497 * L_7 = (NotSupportedException_t1374155497 *)il2cpp_codegen_object_new(NotSupportedException_t1374155497_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m133757637(L_7, L_6, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7);
	}

IL_0033:
	{
		Il2CppObject * L_8 = ___value;
		if (!((Uri_t2776692961 *)IsInstClass(L_8, Uri_t2776692961_il2cpp_TypeInfo_var)))
		{
			goto IL_0040;
		}
	}
	{
		Il2CppObject * L_9 = ___value;
		return L_9;
	}

IL_0040:
	{
		Il2CppObject * L_10 = ___value;
		V_0 = ((String_t*)IsInstSealed(L_10, String_t_il2cpp_TypeInfo_var));
		String_t* L_11 = V_0;
		if (!L_11)
		{
			goto IL_0055;
		}
	}
	{
		String_t* L_12 = V_0;
		Uri_t2776692961 * L_13 = (Uri_t2776692961 *)il2cpp_codegen_object_new(Uri_t2776692961_il2cpp_TypeInfo_var);
		Uri__ctor_m2903273618(L_13, L_12, 0, /*hidden argument*/NULL);
		return L_13;
	}

IL_0055:
	{
		Il2CppObject * L_14 = ___context;
		CultureInfo_t3603717042 * L_15 = ___culture;
		Il2CppObject * L_16 = ___value;
		Il2CppObject * L_17 = TypeConverter_ConvertFrom_m2983973965(__this, L_14, L_15, L_16, /*hidden argument*/NULL);
		return L_17;
	}
}
// System.Object System.UriTypeConverter::ConvertTo(System.ComponentModel.ITypeDescriptorContext,System.Globalization.CultureInfo,System.Object,System.Type)
extern const Il2CppType* String_t_0_0_0_var;
extern const Il2CppType* Uri_t2776692961_0_0_0_var;
extern TypeInfo* NotSupportedException_t1374155497_il2cpp_TypeInfo_var;
extern TypeInfo* Uri_t2776692961_il2cpp_TypeInfo_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral3819555175;
extern const uint32_t UriTypeConverter_ConvertTo_m2845756197_MetadataUsageId;
extern "C"  Il2CppObject * UriTypeConverter_ConvertTo_m2845756197 (UriTypeConverter_t3286319 * __this, Il2CppObject * ___context, CultureInfo_t3603717042 * ___culture, Il2CppObject * ___value, Type_t * ___destinationType, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (UriTypeConverter_ConvertTo_m2845756197_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	Uri_t2776692961 * V_0 = NULL;
	{
		Il2CppObject * L_0 = ___context;
		Type_t * L_1 = ___destinationType;
		bool L_2 = VirtFuncInvoker2< bool, Il2CppObject *, Type_t * >::Invoke(5 /* System.Boolean System.UriTypeConverter::CanConvertTo(System.ComponentModel.ITypeDescriptorContext,System.Type) */, __this, L_0, L_1);
		if (L_2)
		{
			goto IL_001e;
		}
	}
	{
		String_t* L_3 = Locale_GetText_m3269873186(NULL /*static, unused*/, _stringLiteral3819555175, /*hidden argument*/NULL);
		NotSupportedException_t1374155497 * L_4 = (NotSupportedException_t1374155497 *)il2cpp_codegen_object_new(NotSupportedException_t1374155497_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m133757637(L_4, L_3, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4);
	}

IL_001e:
	{
		Il2CppObject * L_5 = ___value;
		V_0 = ((Uri_t2776692961 *)IsInstClass(L_5, Uri_t2776692961_il2cpp_TypeInfo_var));
		Uri_t2776692961 * L_6 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t2776692961_il2cpp_TypeInfo_var);
		bool L_7 = Uri_op_Inequality_m2899852498(NULL /*static, unused*/, L_6, (Uri_t2776692961 *)NULL, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_005c;
		}
	}
	{
		Type_t * L_8 = ___destinationType;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_9 = Type_GetTypeFromHandle_m3806905434(NULL /*static, unused*/, LoadTypeToken(String_t_0_0_0_var), /*hidden argument*/NULL);
		if ((!(((Il2CppObject*)(Type_t *)L_8) == ((Il2CppObject*)(Type_t *)L_9))))
		{
			goto IL_0049;
		}
	}
	{
		Uri_t2776692961 * L_10 = V_0;
		NullCheck(L_10);
		String_t* L_11 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Uri::ToString() */, L_10);
		return L_11;
	}

IL_0049:
	{
		Type_t * L_12 = ___destinationType;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_13 = Type_GetTypeFromHandle_m3806905434(NULL /*static, unused*/, LoadTypeToken(Uri_t2776692961_0_0_0_var), /*hidden argument*/NULL);
		if ((!(((Il2CppObject*)(Type_t *)L_12) == ((Il2CppObject*)(Type_t *)L_13))))
		{
			goto IL_005c;
		}
	}
	{
		Uri_t2776692961 * L_14 = V_0;
		return L_14;
	}

IL_005c:
	{
		Il2CppObject * L_15 = ___context;
		CultureInfo_t3603717042 * L_16 = ___culture;
		Il2CppObject * L_17 = ___value;
		Type_t * L_18 = ___destinationType;
		Il2CppObject * L_19 = TypeConverter_ConvertTo_m2251969871(__this, L_15, L_16, L_17, L_18, /*hidden argument*/NULL);
		return L_19;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
