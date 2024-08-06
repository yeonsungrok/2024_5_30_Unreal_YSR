// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UE5_Character_02/MyCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyCharacter() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
UE5_CHARACTER_02_API UClass* Z_Construct_UClass_AMyAIController_NoRegister();
UE5_CHARACTER_02_API UClass* Z_Construct_UClass_AMyCharacter();
UE5_CHARACTER_02_API UClass* Z_Construct_UClass_AMyCharacter_NoRegister();
UE5_CHARACTER_02_API UClass* Z_Construct_UClass_UMyInvenComponent_NoRegister();
UE5_CHARACTER_02_API UClass* Z_Construct_UClass_UMyStatComponent_NoRegister();
UMG_API UClass* Z_Construct_UClass_UWidgetComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_UE5_Character_02();
// End Cross Module References

// Begin Class AMyCharacter Function Attack_AI
struct Z_Construct_UFunction_AMyCharacter_Attack_AI_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyCharacter_Attack_AI_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyCharacter, nullptr, "Attack_AI", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyCharacter_Attack_AI_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMyCharacter_Attack_AI_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AMyCharacter_Attack_AI()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMyCharacter_Attack_AI_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMyCharacter::execAttack_AI)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Attack_AI();
	P_NATIVE_END;
}
// End Class AMyCharacter Function Attack_AI

// Begin Class AMyCharacter Function AttackHit
struct Z_Construct_UFunction_AMyCharacter_AttackHit_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xef\xbf\xbd\xd6\xb4\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc6\xae \xef\xbf\xbd\xef\xbf\xbd\xc5\xb8\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xc6\xbc\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xdf\xb0\xef\xbf\xbd\xef\xbf\xbd\xcf\xb1\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "MyCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xd6\xb4\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc6\xae \xef\xbf\xbd\xef\xbf\xbd\xc5\xb8\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xc6\xbc\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xdf\xb0\xef\xbf\xbd\xef\xbf\xbd\xcf\xb1\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyCharacter_AttackHit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyCharacter, nullptr, "AttackHit", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyCharacter_AttackHit_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMyCharacter_AttackHit_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AMyCharacter_AttackHit()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMyCharacter_AttackHit_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMyCharacter::execAttackHit)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AttackHit();
	P_NATIVE_END;
}
// End Class AMyCharacter Function AttackHit

// Begin Class AMyCharacter Function Disable
struct Z_Construct_UFunction_AMyCharacter_Disable_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyCharacter_Disable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyCharacter, nullptr, "Disable", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyCharacter_Disable_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMyCharacter_Disable_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AMyCharacter_Disable()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMyCharacter_Disable_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMyCharacter::execDisable)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Disable();
	P_NATIVE_END;
}
// End Class AMyCharacter Function Disable

// Begin Class AMyCharacter Function OnAttackEnded
struct Z_Construct_UFunction_AMyCharacter_OnAttackEnded_Statics
{
	struct MyCharacter_eventOnAttackEnded_Parms
	{
		UAnimMontage* Montage;
		bool bInterrupted;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Montage;
	static void NewProp_bInterrupted_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInterrupted;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMyCharacter_OnAttackEnded_Statics::NewProp_Montage = { "Montage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyCharacter_eventOnAttackEnded_Parms, Montage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AMyCharacter_OnAttackEnded_Statics::NewProp_bInterrupted_SetBit(void* Obj)
{
	((MyCharacter_eventOnAttackEnded_Parms*)Obj)->bInterrupted = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMyCharacter_OnAttackEnded_Statics::NewProp_bInterrupted = { "bInterrupted", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MyCharacter_eventOnAttackEnded_Parms), &Z_Construct_UFunction_AMyCharacter_OnAttackEnded_Statics::NewProp_bInterrupted_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyCharacter_OnAttackEnded_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyCharacter_OnAttackEnded_Statics::NewProp_Montage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyCharacter_OnAttackEnded_Statics::NewProp_bInterrupted,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyCharacter_OnAttackEnded_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyCharacter_OnAttackEnded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyCharacter, nullptr, "OnAttackEnded", nullptr, nullptr, Z_Construct_UFunction_AMyCharacter_OnAttackEnded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyCharacter_OnAttackEnded_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMyCharacter_OnAttackEnded_Statics::MyCharacter_eventOnAttackEnded_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyCharacter_OnAttackEnded_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMyCharacter_OnAttackEnded_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMyCharacter_OnAttackEnded_Statics::MyCharacter_eventOnAttackEnded_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMyCharacter_OnAttackEnded()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMyCharacter_OnAttackEnded_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMyCharacter::execOnAttackEnded)
{
	P_GET_OBJECT(UAnimMontage,Z_Param_Montage);
	P_GET_UBOOL(Z_Param_bInterrupted);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnAttackEnded(Z_Param_Montage,Z_Param_bInterrupted);
	P_NATIVE_END;
}
// End Class AMyCharacter Function OnAttackEnded

// Begin Class AMyCharacter
void AMyCharacter::StaticRegisterNativesAMyCharacter()
{
	UClass* Class = AMyCharacter::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Attack_AI", &AMyCharacter::execAttack_AI },
		{ "AttackHit", &AMyCharacter::execAttackHit },
		{ "Disable", &AMyCharacter::execDisable },
		{ "OnAttackEnded", &AMyCharacter::execOnAttackEnded },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMyCharacter);
UClass* Z_Construct_UClass_AMyCharacter_NoRegister()
{
	return AMyCharacter::StaticClass();
}
struct Z_Construct_UClass_AMyCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "MyCharacter.h" },
		{ "ModuleRelativePath", "MyCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__moveAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "MyCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__lookAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "MyCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__jumpAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "MyCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__attackAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "MyCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__dropAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//G\xc5\xb0 \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd7\xbc\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "MyCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "G\xc5\xb0 \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd7\xbc\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__isAttacking_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "MyCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__curAttackIndex_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "MyCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__vertical_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "MyCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__horizontal_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "MyCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__springArm_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xc4\xab\xef\xbf\xbd\xde\xb6\xef\xbf\xbd(springArms \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd)\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MyCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xc4\xab\xef\xbf\xbd\xde\xb6\xef\xbf\xbd(springArms \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__camera_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MyCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__level_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Stat" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// State Components\n" },
#endif
		{ "ModuleRelativePath", "MyCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "State Components" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__statCom_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Stat" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MyCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__invenCom_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Inven Components\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MyCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Inven Components" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__hpbarWidget_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Stat" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MyCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__aiController_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "MyCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp__moveAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp__lookAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp__jumpAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp__attackAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp__dropAction;
	static void NewProp__isAttacking_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp__isAttacking;
	static const UECodeGen_Private::FIntPropertyParams NewProp__curAttackIndex;
	static const UECodeGen_Private::FFloatPropertyParams NewProp__vertical;
	static const UECodeGen_Private::FFloatPropertyParams NewProp__horizontal;
	static const UECodeGen_Private::FObjectPropertyParams NewProp__springArm;
	static const UECodeGen_Private::FObjectPropertyParams NewProp__camera;
	static const UECodeGen_Private::FIntPropertyParams NewProp__level;
	static const UECodeGen_Private::FObjectPropertyParams NewProp__statCom;
	static const UECodeGen_Private::FObjectPropertyParams NewProp__invenCom;
	static const UECodeGen_Private::FObjectPropertyParams NewProp__hpbarWidget;
	static const UECodeGen_Private::FObjectPropertyParams NewProp__aiController;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AMyCharacter_Attack_AI, "Attack_AI" }, // 1165964875
		{ &Z_Construct_UFunction_AMyCharacter_AttackHit, "AttackHit" }, // 134641110
		{ &Z_Construct_UFunction_AMyCharacter_Disable, "Disable" }, // 1871944046
		{ &Z_Construct_UFunction_AMyCharacter_OnAttackEnded, "OnAttackEnded" }, // 2265123938
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyCharacter_Statics::NewProp__moveAction = { "_moveAction", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyCharacter, _moveAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__moveAction_MetaData), NewProp__moveAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyCharacter_Statics::NewProp__lookAction = { "_lookAction", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyCharacter, _lookAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__lookAction_MetaData), NewProp__lookAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyCharacter_Statics::NewProp__jumpAction = { "_jumpAction", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyCharacter, _jumpAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__jumpAction_MetaData), NewProp__jumpAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyCharacter_Statics::NewProp__attackAction = { "_attackAction", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyCharacter, _attackAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__attackAction_MetaData), NewProp__attackAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyCharacter_Statics::NewProp__dropAction = { "_dropAction", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyCharacter, _dropAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__dropAction_MetaData), NewProp__dropAction_MetaData) };
void Z_Construct_UClass_AMyCharacter_Statics::NewProp__isAttacking_SetBit(void* Obj)
{
	((AMyCharacter*)Obj)->_isAttacking = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMyCharacter_Statics::NewProp__isAttacking = { "_isAttacking", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMyCharacter), &Z_Construct_UClass_AMyCharacter_Statics::NewProp__isAttacking_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__isAttacking_MetaData), NewProp__isAttacking_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMyCharacter_Statics::NewProp__curAttackIndex = { "_curAttackIndex", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyCharacter, _curAttackIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__curAttackIndex_MetaData), NewProp__curAttackIndex_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMyCharacter_Statics::NewProp__vertical = { "_vertical", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyCharacter, _vertical), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__vertical_MetaData), NewProp__vertical_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMyCharacter_Statics::NewProp__horizontal = { "_horizontal", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyCharacter, _horizontal), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__horizontal_MetaData), NewProp__horizontal_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyCharacter_Statics::NewProp__springArm = { "_springArm", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyCharacter, _springArm), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__springArm_MetaData), NewProp__springArm_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyCharacter_Statics::NewProp__camera = { "_camera", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyCharacter, _camera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__camera_MetaData), NewProp__camera_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMyCharacter_Statics::NewProp__level = { "_level", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyCharacter, _level), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__level_MetaData), NewProp__level_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyCharacter_Statics::NewProp__statCom = { "_statCom", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyCharacter, _statCom), Z_Construct_UClass_UMyStatComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__statCom_MetaData), NewProp__statCom_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyCharacter_Statics::NewProp__invenCom = { "_invenCom", nullptr, (EPropertyFlags)0x00100000000a000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyCharacter, _invenCom), Z_Construct_UClass_UMyInvenComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__invenCom_MetaData), NewProp__invenCom_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyCharacter_Statics::NewProp__hpbarWidget = { "_hpbarWidget", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyCharacter, _hpbarWidget), Z_Construct_UClass_UWidgetComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__hpbarWidget_MetaData), NewProp__hpbarWidget_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyCharacter_Statics::NewProp__aiController = { "_aiController", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyCharacter, _aiController), Z_Construct_UClass_AMyAIController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__aiController_MetaData), NewProp__aiController_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMyCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCharacter_Statics::NewProp__moveAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCharacter_Statics::NewProp__lookAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCharacter_Statics::NewProp__jumpAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCharacter_Statics::NewProp__attackAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCharacter_Statics::NewProp__dropAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCharacter_Statics::NewProp__isAttacking,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCharacter_Statics::NewProp__curAttackIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCharacter_Statics::NewProp__vertical,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCharacter_Statics::NewProp__horizontal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCharacter_Statics::NewProp__springArm,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCharacter_Statics::NewProp__camera,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCharacter_Statics::NewProp__level,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCharacter_Statics::NewProp__statCom,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCharacter_Statics::NewProp__invenCom,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCharacter_Statics::NewProp__hpbarWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCharacter_Statics::NewProp__aiController,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyCharacter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AMyCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_UE5_Character_02,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMyCharacter_Statics::ClassParams = {
	&AMyCharacter::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AMyCharacter_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AMyCharacter_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_AMyCharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMyCharacter()
{
	if (!Z_Registration_Info_UClass_AMyCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMyCharacter.OuterSingleton, Z_Construct_UClass_AMyCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMyCharacter.OuterSingleton;
}
template<> UE5_CHARACTER_02_API UClass* StaticClass<AMyCharacter>()
{
	return AMyCharacter::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMyCharacter);
AMyCharacter::~AMyCharacter() {}
// End Class AMyCharacter

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5_Character_02_Source_UE5_Character_02_MyCharacter_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMyCharacter, AMyCharacter::StaticClass, TEXT("AMyCharacter"), &Z_Registration_Info_UClass_AMyCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMyCharacter), 1171747239U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_Character_02_Source_UE5_Character_02_MyCharacter_h_1775936594(TEXT("/Script/UE5_Character_02"),
	Z_CompiledInDeferFile_FID_UE5_Character_02_Source_UE5_Character_02_MyCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_Character_02_Source_UE5_Character_02_MyCharacter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
