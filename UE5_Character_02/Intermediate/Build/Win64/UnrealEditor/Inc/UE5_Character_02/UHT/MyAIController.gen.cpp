// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UE5_Character_02/MyAIController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyAIController() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_AAIController();
AIMODULE_API UClass* Z_Construct_UClass_UBehaviorTree_NoRegister();
AIMODULE_API UClass* Z_Construct_UClass_UBlackboardData_NoRegister();
UE5_CHARACTER_02_API UClass* Z_Construct_UClass_AMyAIController();
UE5_CHARACTER_02_API UClass* Z_Construct_UClass_AMyAIController_NoRegister();
UPackage* Z_Construct_UPackage__Script_UE5_Character_02();
// End Cross Module References

// Begin Class AMyAIController
void AMyAIController::StaticRegisterNativesAMyAIController()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMyAIController);
UClass* Z_Construct_UClass_AMyAIController_NoRegister()
{
	return AMyAIController::StaticClass();
}
struct Z_Construct_UClass_AMyAIController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "MyAIController.h" },
		{ "ModuleRelativePath", "MyAIController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__bb_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//FTimerHandle _timerHandle;\n" },
#endif
		{ "ModuleRelativePath", "MyAIController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "FTimerHandle _timerHandle;" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__bt_MetaData[] = {
		{ "ModuleRelativePath", "MyAIController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp__bb;
	static const UECodeGen_Private::FObjectPropertyParams NewProp__bt;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyAIController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyAIController_Statics::NewProp__bb = { "_bb", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyAIController, _bb), Z_Construct_UClass_UBlackboardData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__bb_MetaData), NewProp__bb_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyAIController_Statics::NewProp__bt = { "_bt", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyAIController, _bt), Z_Construct_UClass_UBehaviorTree_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__bt_MetaData), NewProp__bt_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMyAIController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyAIController_Statics::NewProp__bb,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyAIController_Statics::NewProp__bt,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyAIController_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AMyAIController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AAIController,
	(UObject* (*)())Z_Construct_UPackage__Script_UE5_Character_02,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyAIController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMyAIController_Statics::ClassParams = {
	&AMyAIController::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AMyAIController_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AMyAIController_Statics::PropPointers),
	0,
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyAIController_Statics::Class_MetaDataParams), Z_Construct_UClass_AMyAIController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMyAIController()
{
	if (!Z_Registration_Info_UClass_AMyAIController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMyAIController.OuterSingleton, Z_Construct_UClass_AMyAIController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMyAIController.OuterSingleton;
}
template<> UE5_CHARACTER_02_API UClass* StaticClass<AMyAIController>()
{
	return AMyAIController::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMyAIController);
AMyAIController::~AMyAIController() {}
// End Class AMyAIController

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5_Character_02_Source_UE5_Character_02_MyAIController_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMyAIController, AMyAIController::StaticClass, TEXT("AMyAIController"), &Z_Registration_Info_UClass_AMyAIController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMyAIController), 3161702218U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_Character_02_Source_UE5_Character_02_MyAIController_h_2240926685(TEXT("/Script/UE5_Character_02"),
	Z_CompiledInDeferFile_FID_UE5_Character_02_Source_UE5_Character_02_MyAIController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_Character_02_Source_UE5_Character_02_MyAIController_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
