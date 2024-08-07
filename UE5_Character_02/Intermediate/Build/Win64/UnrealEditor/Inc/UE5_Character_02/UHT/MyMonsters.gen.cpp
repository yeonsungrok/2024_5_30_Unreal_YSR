// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UE5_Character_02/MyMonsters.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyMonsters() {}

// Begin Cross Module References
UE5_CHARACTER_02_API UClass* Z_Construct_UClass_AMyCharacter();
UE5_CHARACTER_02_API UClass* Z_Construct_UClass_AMyMonsters();
UE5_CHARACTER_02_API UClass* Z_Construct_UClass_AMyMonsters_NoRegister();
UPackage* Z_Construct_UPackage__Script_UE5_Character_02();
// End Cross Module References

// Begin Class AMyMonsters Function Attack_AI
struct Z_Construct_UFunction_AMyMonsters_Attack_AI_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// TODO : Monster\n" },
#endif
		{ "ModuleRelativePath", "MyMonsters.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "TODO : Monster" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyMonsters_Attack_AI_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyMonsters, nullptr, "Attack_AI", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyMonsters_Attack_AI_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMyMonsters_Attack_AI_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AMyMonsters_Attack_AI()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMyMonsters_Attack_AI_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMyMonsters::execAttack_AI)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Attack_AI();
	P_NATIVE_END;
}
// End Class AMyMonsters Function Attack_AI

// Begin Class AMyMonsters
void AMyMonsters::StaticRegisterNativesAMyMonsters()
{
	UClass* Class = AMyMonsters::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Attack_AI", &AMyMonsters::execAttack_AI },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMyMonsters);
UClass* Z_Construct_UClass_AMyMonsters_NoRegister()
{
	return AMyMonsters::StaticClass();
}
struct Z_Construct_UClass_AMyMonsters_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "MyMonsters.h" },
		{ "ModuleRelativePath", "MyMonsters.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AMyMonsters_Attack_AI, "Attack_AI" }, // 890449151
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyMonsters>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AMyMonsters_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AMyCharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_UE5_Character_02,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyMonsters_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMyMonsters_Statics::ClassParams = {
	&AMyMonsters::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyMonsters_Statics::Class_MetaDataParams), Z_Construct_UClass_AMyMonsters_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMyMonsters()
{
	if (!Z_Registration_Info_UClass_AMyMonsters.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMyMonsters.OuterSingleton, Z_Construct_UClass_AMyMonsters_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMyMonsters.OuterSingleton;
}
template<> UE5_CHARACTER_02_API UClass* StaticClass<AMyMonsters>()
{
	return AMyMonsters::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMyMonsters);
AMyMonsters::~AMyMonsters() {}
// End Class AMyMonsters

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5_Character_02_Source_UE5_Character_02_MyMonsters_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMyMonsters, AMyMonsters::StaticClass, TEXT("AMyMonsters"), &Z_Registration_Info_UClass_AMyMonsters, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMyMonsters), 1565705242U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_Character_02_Source_UE5_Character_02_MyMonsters_h_1273496448(TEXT("/Script/UE5_Character_02"),
	Z_CompiledInDeferFile_FID_UE5_Character_02_Source_UE5_Character_02_MyMonsters_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_Character_02_Source_UE5_Character_02_MyMonsters_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
