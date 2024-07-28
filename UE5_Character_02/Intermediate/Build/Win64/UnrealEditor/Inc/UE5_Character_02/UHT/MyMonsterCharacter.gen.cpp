// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UE5_Character_02/MyMonsterCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyMonsterCharacter() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
UE5_CHARACTER_02_API UClass* Z_Construct_UClass_AMyMonsterCharacter();
UE5_CHARACTER_02_API UClass* Z_Construct_UClass_AMyMonsterCharacter_NoRegister();
UPackage* Z_Construct_UPackage__Script_UE5_Character_02();
// End Cross Module References

// Begin Class AMyMonsterCharacter
void AMyMonsterCharacter::StaticRegisterNativesAMyMonsterCharacter()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMyMonsterCharacter);
UClass* Z_Construct_UClass_AMyMonsterCharacter_NoRegister()
{
	return AMyMonsterCharacter::StaticClass();
}
struct Z_Construct_UClass_AMyMonsterCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "MyMonsterCharacter.h" },
		{ "ModuleRelativePath", "MyMonsterCharacter.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyMonsterCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AMyMonsterCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_UE5_Character_02,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyMonsterCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMyMonsterCharacter_Statics::ClassParams = {
	&AMyMonsterCharacter::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyMonsterCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_AMyMonsterCharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMyMonsterCharacter()
{
	if (!Z_Registration_Info_UClass_AMyMonsterCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMyMonsterCharacter.OuterSingleton, Z_Construct_UClass_AMyMonsterCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMyMonsterCharacter.OuterSingleton;
}
template<> UE5_CHARACTER_02_API UClass* StaticClass<AMyMonsterCharacter>()
{
	return AMyMonsterCharacter::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMyMonsterCharacter);
AMyMonsterCharacter::~AMyMonsterCharacter() {}
// End Class AMyMonsterCharacter

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5_Character_02_Source_UE5_Character_02_MyMonsterCharacter_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMyMonsterCharacter, AMyMonsterCharacter::StaticClass, TEXT("AMyMonsterCharacter"), &Z_Registration_Info_UClass_AMyMonsterCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMyMonsterCharacter), 3683874331U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_Character_02_Source_UE5_Character_02_MyMonsterCharacter_h_1051359834(TEXT("/Script/UE5_Character_02"),
	Z_CompiledInDeferFile_FID_UE5_Character_02_Source_UE5_Character_02_MyMonsterCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_Character_02_Source_UE5_Character_02_MyMonsterCharacter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
