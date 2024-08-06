// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MyInvenComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UE5_CHARACTER_02_MyInvenComponent_generated_h
#error "MyInvenComponent.generated.h already included, missing '#pragma once' in MyInvenComponent.h"
#endif
#define UE5_CHARACTER_02_MyInvenComponent_generated_h

#define FID_UE5_Character_02_Source_UE5_Character_02_MyInvenComponent_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execDropItem);


#define FID_UE5_Character_02_Source_UE5_Character_02_MyInvenComponent_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMyInvenComponent(); \
	friend struct Z_Construct_UClass_UMyInvenComponent_Statics; \
public: \
	DECLARE_CLASS(UMyInvenComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UE5_Character_02"), NO_API) \
	DECLARE_SERIALIZER(UMyInvenComponent)


#define FID_UE5_Character_02_Source_UE5_Character_02_MyInvenComponent_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMyInvenComponent(UMyInvenComponent&&); \
	UMyInvenComponent(const UMyInvenComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMyInvenComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMyInvenComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMyInvenComponent) \
	NO_API virtual ~UMyInvenComponent();


#define FID_UE5_Character_02_Source_UE5_Character_02_MyInvenComponent_h_17_PROLOG
#define FID_UE5_Character_02_Source_UE5_Character_02_MyInvenComponent_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE5_Character_02_Source_UE5_Character_02_MyInvenComponent_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UE5_Character_02_Source_UE5_Character_02_MyInvenComponent_h_20_INCLASS_NO_PURE_DECLS \
	FID_UE5_Character_02_Source_UE5_Character_02_MyInvenComponent_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UE5_CHARACTER_02_API UClass* StaticClass<class UMyInvenComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE5_Character_02_Source_UE5_Character_02_MyInvenComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
