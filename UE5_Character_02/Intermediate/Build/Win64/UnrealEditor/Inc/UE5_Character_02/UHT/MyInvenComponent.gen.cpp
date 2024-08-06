// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UE5_Character_02/MyInvenComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyInvenComponent() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
UE5_CHARACTER_02_API UClass* Z_Construct_UClass_AMyItem_NoRegister();
UE5_CHARACTER_02_API UClass* Z_Construct_UClass_UMyInvenComponent();
UE5_CHARACTER_02_API UClass* Z_Construct_UClass_UMyInvenComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_UE5_Character_02();
// End Cross Module References

// Begin Class UMyInvenComponent Function DropItem
struct Z_Construct_UFunction_UMyInvenComponent_DropItem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "MyInvenComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyInvenComponent_DropItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyInvenComponent, nullptr, "DropItem", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMyInvenComponent_DropItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMyInvenComponent_DropItem_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UMyInvenComponent_DropItem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMyInvenComponent_DropItem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMyInvenComponent::execDropItem)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DropItem();
	P_NATIVE_END;
}
// End Class UMyInvenComponent Function DropItem

// Begin Class UMyInvenComponent
void UMyInvenComponent::StaticRegisterNativesUMyInvenComponent()
{
	UClass* Class = UMyInvenComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "DropItem", &UMyInvenComponent::execDropItem },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMyInvenComponent);
UClass* Z_Construct_UClass_UMyInvenComponent_NoRegister()
{
	return UMyInvenComponent::StaticClass();
}
struct Z_Construct_UClass_UMyInvenComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//DECLARE_MULTICAST_DELEGATE_TwoParams(ItemDroped, int itemId, int itemIndex)\n" },
#endif
		{ "IncludePath", "MyInvenComponent.h" },
		{ "ModuleRelativePath", "MyInvenComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "DECLARE_MULTICAST_DELEGATE_TwoParams(ItemDroped, int itemId, int itemIndex)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__items_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "MyInvenComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp__items_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp__items;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMyInvenComponent_DropItem, "DropItem" }, // 2697543117
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMyInvenComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMyInvenComponent_Statics::NewProp__items_Inner = { "_items", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AMyItem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMyInvenComponent_Statics::NewProp__items = { "_items", nullptr, (EPropertyFlags)0x0040000000020015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMyInvenComponent, _items), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__items_MetaData), NewProp__items_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMyInvenComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyInvenComponent_Statics::NewProp__items_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyInvenComponent_Statics::NewProp__items,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMyInvenComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMyInvenComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_UE5_Character_02,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMyInvenComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMyInvenComponent_Statics::ClassParams = {
	&UMyInvenComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UMyInvenComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UMyInvenComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMyInvenComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UMyInvenComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMyInvenComponent()
{
	if (!Z_Registration_Info_UClass_UMyInvenComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMyInvenComponent.OuterSingleton, Z_Construct_UClass_UMyInvenComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMyInvenComponent.OuterSingleton;
}
template<> UE5_CHARACTER_02_API UClass* StaticClass<UMyInvenComponent>()
{
	return UMyInvenComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMyInvenComponent);
UMyInvenComponent::~UMyInvenComponent() {}
// End Class UMyInvenComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5_Character_02_Source_UE5_Character_02_MyInvenComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMyInvenComponent, UMyInvenComponent::StaticClass, TEXT("UMyInvenComponent"), &Z_Registration_Info_UClass_UMyInvenComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMyInvenComponent), 1976232746U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_Character_02_Source_UE5_Character_02_MyInvenComponent_h_1392547100(TEXT("/Script/UE5_Character_02"),
	Z_CompiledInDeferFile_FID_UE5_Character_02_Source_UE5_Character_02_MyInvenComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_Character_02_Source_UE5_Character_02_MyInvenComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
