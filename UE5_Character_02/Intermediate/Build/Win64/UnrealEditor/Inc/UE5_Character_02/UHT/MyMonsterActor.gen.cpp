// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UE5_Character_02/MyMonsterActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyMonsterActor() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UChildActorComponent_NoRegister();
UE5_CHARACTER_02_API UClass* Z_Construct_UClass_AMyMonsterActor();
UE5_CHARACTER_02_API UClass* Z_Construct_UClass_AMyMonsterActor_NoRegister();
UPackage* Z_Construct_UPackage__Script_UE5_Character_02();
// End Cross Module References

// Begin Class AMyMonsterActor
void AMyMonsterActor::StaticRegisterNativesAMyMonsterActor()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMyMonsterActor);
UClass* Z_Construct_UClass_AMyMonsterActor_NoRegister()
{
	return AMyMonsterActor::StaticClass();
}
struct Z_Construct_UClass_AMyMonsterActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "MyMonsterActor.h" },
		{ "ModuleRelativePath", "MyMonsterActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChildActorComponent_MetaData[] = {
		{ "Category", "Character" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MyMonsterActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ChildActorComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyMonsterActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyMonsterActor_Statics::NewProp_ChildActorComponent = { "ChildActorComponent", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyMonsterActor, ChildActorComponent), Z_Construct_UClass_UChildActorComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChildActorComponent_MetaData), NewProp_ChildActorComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMyMonsterActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyMonsterActor_Statics::NewProp_ChildActorComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyMonsterActor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AMyMonsterActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_UE5_Character_02,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyMonsterActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMyMonsterActor_Statics::ClassParams = {
	&AMyMonsterActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AMyMonsterActor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AMyMonsterActor_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyMonsterActor_Statics::Class_MetaDataParams), Z_Construct_UClass_AMyMonsterActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMyMonsterActor()
{
	if (!Z_Registration_Info_UClass_AMyMonsterActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMyMonsterActor.OuterSingleton, Z_Construct_UClass_AMyMonsterActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMyMonsterActor.OuterSingleton;
}
template<> UE5_CHARACTER_02_API UClass* StaticClass<AMyMonsterActor>()
{
	return AMyMonsterActor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMyMonsterActor);
AMyMonsterActor::~AMyMonsterActor() {}
// End Class AMyMonsterActor

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5_Character_02_Source_UE5_Character_02_MyMonsterActor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMyMonsterActor, AMyMonsterActor::StaticClass, TEXT("AMyMonsterActor"), &Z_Registration_Info_UClass_AMyMonsterActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMyMonsterActor), 1255256715U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_Character_02_Source_UE5_Character_02_MyMonsterActor_h_1369362365(TEXT("/Script/UE5_Character_02"),
	Z_CompiledInDeferFile_FID_UE5_Character_02_Source_UE5_Character_02_MyMonsterActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_Character_02_Source_UE5_Character_02_MyMonsterActor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS