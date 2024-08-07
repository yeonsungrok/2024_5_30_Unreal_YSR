// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UE5_Character_02/MyPlayer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyPlayer() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
UE5_CHARACTER_02_API UClass* Z_Construct_UClass_AMyCharacter();
UE5_CHARACTER_02_API UClass* Z_Construct_UClass_AMyPlayer();
UE5_CHARACTER_02_API UClass* Z_Construct_UClass_AMyPlayer_NoRegister();
UPackage* Z_Construct_UPackage__Script_UE5_Character_02();
// End Cross Module References

// Begin Class AMyPlayer
void AMyPlayer::StaticRegisterNativesAMyPlayer()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMyPlayer);
UClass* Z_Construct_UClass_AMyPlayer_NoRegister()
{
	return AMyPlayer::StaticClass();
}
struct Z_Construct_UClass_AMyPlayer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "MyPlayer.h" },
		{ "ModuleRelativePath", "MyPlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__moveAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "MyPlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__lookAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "MyPlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__jumpAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "MyPlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__attackAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "MyPlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__dropAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//G\xc5\xb0 \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd7\xbc\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "MyPlayer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "G\xc5\xb0 \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd7\xbc\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__springArm_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xc4\xab\xef\xbf\xbd\xde\xb6\xef\xbf\xbd(springArms \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd)\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MyPlayer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xc4\xab\xef\xbf\xbd\xde\xb6\xef\xbf\xbd(springArms \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__camera_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MyPlayer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp__moveAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp__lookAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp__jumpAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp__attackAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp__dropAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp__springArm;
	static const UECodeGen_Private::FObjectPropertyParams NewProp__camera;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyPlayer>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyPlayer_Statics::NewProp__moveAction = { "_moveAction", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyPlayer, _moveAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__moveAction_MetaData), NewProp__moveAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyPlayer_Statics::NewProp__lookAction = { "_lookAction", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyPlayer, _lookAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__lookAction_MetaData), NewProp__lookAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyPlayer_Statics::NewProp__jumpAction = { "_jumpAction", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyPlayer, _jumpAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__jumpAction_MetaData), NewProp__jumpAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyPlayer_Statics::NewProp__attackAction = { "_attackAction", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyPlayer, _attackAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__attackAction_MetaData), NewProp__attackAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyPlayer_Statics::NewProp__dropAction = { "_dropAction", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyPlayer, _dropAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__dropAction_MetaData), NewProp__dropAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyPlayer_Statics::NewProp__springArm = { "_springArm", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyPlayer, _springArm), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__springArm_MetaData), NewProp__springArm_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyPlayer_Statics::NewProp__camera = { "_camera", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyPlayer, _camera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__camera_MetaData), NewProp__camera_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMyPlayer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyPlayer_Statics::NewProp__moveAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyPlayer_Statics::NewProp__lookAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyPlayer_Statics::NewProp__jumpAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyPlayer_Statics::NewProp__attackAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyPlayer_Statics::NewProp__dropAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyPlayer_Statics::NewProp__springArm,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyPlayer_Statics::NewProp__camera,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyPlayer_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AMyPlayer_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AMyCharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_UE5_Character_02,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyPlayer_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMyPlayer_Statics::ClassParams = {
	&AMyPlayer::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AMyPlayer_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AMyPlayer_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyPlayer_Statics::Class_MetaDataParams), Z_Construct_UClass_AMyPlayer_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMyPlayer()
{
	if (!Z_Registration_Info_UClass_AMyPlayer.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMyPlayer.OuterSingleton, Z_Construct_UClass_AMyPlayer_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMyPlayer.OuterSingleton;
}
template<> UE5_CHARACTER_02_API UClass* StaticClass<AMyPlayer>()
{
	return AMyPlayer::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMyPlayer);
AMyPlayer::~AMyPlayer() {}
// End Class AMyPlayer

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5_Character_02_Source_UE5_Character_02_MyPlayer_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMyPlayer, AMyPlayer::StaticClass, TEXT("AMyPlayer"), &Z_Registration_Info_UClass_AMyPlayer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMyPlayer), 55601129U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_Character_02_Source_UE5_Character_02_MyPlayer_h_3478477601(TEXT("/Script/UE5_Character_02"),
	Z_CompiledInDeferFile_FID_UE5_Character_02_Source_UE5_Character_02_MyPlayer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_Character_02_Source_UE5_Character_02_MyPlayer_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
