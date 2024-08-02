// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MyStatComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UE5_CHARACTER_02_MyStatComponent_generated_h
#error "MyStatComponent.generated.h already included, missing '#pragma once' in MyStatComponent.h"
#endif
#define UE5_CHARACTER_02_MyStatComponent_generated_h

#define FID_UE5_Character_02_Source_UE5_Character_02_MyStatComponent_h_14_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMyStatData_Statics; \
	UE5_CHARACTER_02_API static class UScriptStruct* StaticStruct(); \
	typedef FTableRowBase Super;


template<> UE5_CHARACTER_02_API UScriptStruct* StaticStruct<struct FMyStatData>();

#define FID_UE5_Character_02_Source_UE5_Character_02_MyStatComponent_h_30_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMyStatComponent(); \
	friend struct Z_Construct_UClass_UMyStatComponent_Statics; \
public: \
	DECLARE_CLASS(UMyStatComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UE5_Character_02"), NO_API) \
	DECLARE_SERIALIZER(UMyStatComponent)


#define FID_UE5_Character_02_Source_UE5_Character_02_MyStatComponent_h_30_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMyStatComponent(UMyStatComponent&&); \
	UMyStatComponent(const UMyStatComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMyStatComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMyStatComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMyStatComponent) \
	NO_API virtual ~UMyStatComponent();


#define FID_UE5_Character_02_Source_UE5_Character_02_MyStatComponent_h_27_PROLOG
#define FID_UE5_Character_02_Source_UE5_Character_02_MyStatComponent_h_30_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE5_Character_02_Source_UE5_Character_02_MyStatComponent_h_30_INCLASS_NO_PURE_DECLS \
	FID_UE5_Character_02_Source_UE5_Character_02_MyStatComponent_h_30_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UE5_CHARACTER_02_API UClass* StaticClass<class UMyStatComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE5_Character_02_Source_UE5_Character_02_MyStatComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
