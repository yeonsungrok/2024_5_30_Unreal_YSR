// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UE5_Character_02/MyInvenWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyInvenWidget() {}

// Begin Cross Module References
UE5_CHARACTER_02_API UClass* Z_Construct_UClass_UMyInvenWidget();
UE5_CHARACTER_02_API UClass* Z_Construct_UClass_UMyInvenWidget_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_UE5_Character_02();
// End Cross Module References

// Begin Class UMyInvenWidget
void UMyInvenWidget::StaticRegisterNativesUMyInvenWidget()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMyInvenWidget);
UClass* Z_Construct_UClass_UMyInvenWidget_NoRegister()
{
	return UMyInvenWidget::StaticClass();
}
struct Z_Construct_UClass_UMyInvenWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "MyInvenWidget.h" },
		{ "ModuleRelativePath", "MyInvenWidget.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMyInvenWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMyInvenWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_UE5_Character_02,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMyInvenWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMyInvenWidget_Statics::ClassParams = {
	&UMyInvenWidget::StaticClass,
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
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMyInvenWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UMyInvenWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMyInvenWidget()
{
	if (!Z_Registration_Info_UClass_UMyInvenWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMyInvenWidget.OuterSingleton, Z_Construct_UClass_UMyInvenWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMyInvenWidget.OuterSingleton;
}
template<> UE5_CHARACTER_02_API UClass* StaticClass<UMyInvenWidget>()
{
	return UMyInvenWidget::StaticClass();
}
UMyInvenWidget::UMyInvenWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMyInvenWidget);
UMyInvenWidget::~UMyInvenWidget() {}
// End Class UMyInvenWidget

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5_Character_02_Source_UE5_Character_02_MyInvenWidget_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMyInvenWidget, UMyInvenWidget::StaticClass, TEXT("UMyInvenWidget"), &Z_Registration_Info_UClass_UMyInvenWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMyInvenWidget), 815113368U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_Character_02_Source_UE5_Character_02_MyInvenWidget_h_2661261113(TEXT("/Script/UE5_Character_02"),
	Z_CompiledInDeferFile_FID_UE5_Character_02_Source_UE5_Character_02_MyInvenWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_Character_02_Source_UE5_Character_02_MyInvenWidget_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
