// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UE5_Character_02/BT_Task_Attack.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBT_Task_Attack() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
UE5_CHARACTER_02_API UClass* Z_Construct_UClass_UBT_Task_Attack();
UE5_CHARACTER_02_API UClass* Z_Construct_UClass_UBT_Task_Attack_NoRegister();
UPackage* Z_Construct_UPackage__Script_UE5_Character_02();
// End Cross Module References

// Begin Class UBT_Task_Attack
void UBT_Task_Attack::StaticRegisterNativesUBT_Task_Attack()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBT_Task_Attack);
UClass* Z_Construct_UClass_UBT_Task_Attack_NoRegister()
{
	return UBT_Task_Attack::StaticClass();
}
struct Z_Construct_UClass_UBT_Task_Attack_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "BT_Task_Attack.h" },
		{ "ModuleRelativePath", "BT_Task_Attack.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBT_Task_Attack>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UBT_Task_Attack_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBTTaskNode,
	(UObject* (*)())Z_Construct_UPackage__Script_UE5_Character_02,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBT_Task_Attack_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBT_Task_Attack_Statics::ClassParams = {
	&UBT_Task_Attack::StaticClass,
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
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBT_Task_Attack_Statics::Class_MetaDataParams), Z_Construct_UClass_UBT_Task_Attack_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBT_Task_Attack()
{
	if (!Z_Registration_Info_UClass_UBT_Task_Attack.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBT_Task_Attack.OuterSingleton, Z_Construct_UClass_UBT_Task_Attack_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBT_Task_Attack.OuterSingleton;
}
template<> UE5_CHARACTER_02_API UClass* StaticClass<UBT_Task_Attack>()
{
	return UBT_Task_Attack::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBT_Task_Attack);
UBT_Task_Attack::~UBT_Task_Attack() {}
// End Class UBT_Task_Attack

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5_Character_02_Source_UE5_Character_02_BT_Task_Attack_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBT_Task_Attack, UBT_Task_Attack::StaticClass, TEXT("UBT_Task_Attack"), &Z_Registration_Info_UClass_UBT_Task_Attack, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBT_Task_Attack), 2903941481U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_Character_02_Source_UE5_Character_02_BT_Task_Attack_h_3829212435(TEXT("/Script/UE5_Character_02"),
	Z_CompiledInDeferFile_FID_UE5_Character_02_Source_UE5_Character_02_BT_Task_Attack_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_Character_02_Source_UE5_Character_02_BT_Task_Attack_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
