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
UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUniformGridPanel_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_UE5_Character_02();
// End Cross Module References

// Begin Class UMyInvenWidget Function SetItem
struct Z_Construct_UFunction_UMyInvenWidget_SetItem_Statics
{
	struct MyInvenWidget_eventSetItem_Parms
	{
		int32 itemId;
		int32 index;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyInvenWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_itemId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_index;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMyInvenWidget_SetItem_Statics::NewProp_itemId = { "itemId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyInvenWidget_eventSetItem_Parms, itemId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMyInvenWidget_SetItem_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyInvenWidget_eventSetItem_Parms, index), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMyInvenWidget_SetItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyInvenWidget_SetItem_Statics::NewProp_itemId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyInvenWidget_SetItem_Statics::NewProp_index,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMyInvenWidget_SetItem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyInvenWidget_SetItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyInvenWidget, nullptr, "SetItem", nullptr, nullptr, Z_Construct_UFunction_UMyInvenWidget_SetItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMyInvenWidget_SetItem_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMyInvenWidget_SetItem_Statics::MyInvenWidget_eventSetItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMyInvenWidget_SetItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMyInvenWidget_SetItem_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMyInvenWidget_SetItem_Statics::MyInvenWidget_eventSetItem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMyInvenWidget_SetItem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMyInvenWidget_SetItem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMyInvenWidget::execSetItem)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_itemId);
	P_GET_PROPERTY(FIntProperty,Z_Param_index);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetItem(Z_Param_itemId,Z_Param_index);
	P_NATIVE_END;
}
// End Class UMyInvenWidget Function SetItem

// Begin Class UMyInvenWidget
void UMyInvenWidget::StaticRegisterNativesUMyInvenWidget()
{
	UClass* Class = UMyInvenWidget::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SetItem", &UMyInvenWidget::execSetItem },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SlotGrid_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MyInvenWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DropBtn_MetaData[] = {
		{ "BindWidget", "" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// bp \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd3\xb0\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd!\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MyInvenWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "bp \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd3\xb0\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd!" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__slotBtns_MetaData[] = {
		{ "Category", "MyInvenWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MyInvenWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SlotGrid;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DropBtn;
	static const UECodeGen_Private::FObjectPropertyParams NewProp__slotBtns_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp__slotBtns;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMyInvenWidget_SetItem, "SetItem" }, // 907199785
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMyInvenWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMyInvenWidget_Statics::NewProp_SlotGrid = { "SlotGrid", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMyInvenWidget, SlotGrid), Z_Construct_UClass_UUniformGridPanel_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SlotGrid_MetaData), NewProp_SlotGrid_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMyInvenWidget_Statics::NewProp_DropBtn = { "DropBtn", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMyInvenWidget, DropBtn), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DropBtn_MetaData), NewProp_DropBtn_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMyInvenWidget_Statics::NewProp__slotBtns_Inner = { "_slotBtns", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMyInvenWidget_Statics::NewProp__slotBtns = { "_slotBtns", nullptr, (EPropertyFlags)0x001000800000000d, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMyInvenWidget, _slotBtns), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__slotBtns_MetaData), NewProp__slotBtns_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMyInvenWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyInvenWidget_Statics::NewProp_SlotGrid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyInvenWidget_Statics::NewProp_DropBtn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyInvenWidget_Statics::NewProp__slotBtns_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyInvenWidget_Statics::NewProp__slotBtns,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMyInvenWidget_Statics::PropPointers) < 2048);
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
	FuncInfo,
	Z_Construct_UClass_UMyInvenWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UMyInvenWidget_Statics::PropPointers),
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
		{ Z_Construct_UClass_UMyInvenWidget, UMyInvenWidget::StaticClass, TEXT("UMyInvenWidget"), &Z_Registration_Info_UClass_UMyInvenWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMyInvenWidget), 2540502407U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_Character_02_Source_UE5_Character_02_MyInvenWidget_h_1600054945(TEXT("/Script/UE5_Character_02"),
	Z_CompiledInDeferFile_FID_UE5_Character_02_Source_UE5_Character_02_MyInvenWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_Character_02_Source_UE5_Character_02_MyInvenWidget_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
