// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UE5_Character_02/MyMonsterAnimInstance.h"
#include "Runtime/Engine/Classes/Components/SkeletalMeshComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyMonsterAnimInstance() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
UE5_CHARACTER_02_API UClass* Z_Construct_UClass_UMyMonsterAnimInstance();
UE5_CHARACTER_02_API UClass* Z_Construct_UClass_UMyMonsterAnimInstance_NoRegister();
UPackage* Z_Construct_UPackage__Script_UE5_Character_02();
// End Cross Module References

// Begin Class UMyMonsterAnimInstance
void UMyMonsterAnimInstance::StaticRegisterNativesUMyMonsterAnimInstance()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMyMonsterAnimInstance);
UClass* Z_Construct_UClass_UMyMonsterAnimInstance_NoRegister()
{
	return UMyMonsterAnimInstance::StaticClass();
}
struct Z_Construct_UClass_UMyMonsterAnimInstance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "MyMonsterAnimInstance.h" },
		{ "ModuleRelativePath", "MyMonsterAnimInstance.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMyMonsterAnimInstance>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMyMonsterAnimInstance_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAnimInstance,
	(UObject* (*)())Z_Construct_UPackage__Script_UE5_Character_02,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMyMonsterAnimInstance_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMyMonsterAnimInstance_Statics::ClassParams = {
	&UMyMonsterAnimInstance::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMyMonsterAnimInstance_Statics::Class_MetaDataParams), Z_Construct_UClass_UMyMonsterAnimInstance_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMyMonsterAnimInstance()
{
	if (!Z_Registration_Info_UClass_UMyMonsterAnimInstance.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMyMonsterAnimInstance.OuterSingleton, Z_Construct_UClass_UMyMonsterAnimInstance_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMyMonsterAnimInstance.OuterSingleton;
}
template<> UE5_CHARACTER_02_API UClass* StaticClass<UMyMonsterAnimInstance>()
{
	return UMyMonsterAnimInstance::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMyMonsterAnimInstance);
UMyMonsterAnimInstance::~UMyMonsterAnimInstance() {}
// End Class UMyMonsterAnimInstance

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5_Character_02_Source_UE5_Character_02_MyMonsterAnimInstance_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMyMonsterAnimInstance, UMyMonsterAnimInstance::StaticClass, TEXT("UMyMonsterAnimInstance"), &Z_Registration_Info_UClass_UMyMonsterAnimInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMyMonsterAnimInstance), 2636699508U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_Character_02_Source_UE5_Character_02_MyMonsterAnimInstance_h_2509142864(TEXT("/Script/UE5_Character_02"),
	Z_CompiledInDeferFile_FID_UE5_Character_02_Source_UE5_Character_02_MyMonsterAnimInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_Character_02_Source_UE5_Character_02_MyMonsterAnimInstance_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
