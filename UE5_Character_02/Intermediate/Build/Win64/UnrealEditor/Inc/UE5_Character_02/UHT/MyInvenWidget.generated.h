// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MyInvenWidget.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UE5_CHARACTER_02_MyInvenWidget_generated_h
#error "MyInvenWidget.generated.h already included, missing '#pragma once' in MyInvenWidget.h"
#endif
#define UE5_CHARACTER_02_MyInvenWidget_generated_h

#define FID_UE5_Character_02_Source_UE5_Character_02_MyInvenWidget_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetItem);


#define FID_UE5_Character_02_Source_UE5_Character_02_MyInvenWidget_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMyInvenWidget(); \
	friend struct Z_Construct_UClass_UMyInvenWidget_Statics; \
public: \
	DECLARE_CLASS(UMyInvenWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UE5_Character_02"), NO_API) \
	DECLARE_SERIALIZER(UMyInvenWidget)


#define FID_UE5_Character_02_Source_UE5_Character_02_MyInvenWidget_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMyInvenWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMyInvenWidget(UMyInvenWidget&&); \
	UMyInvenWidget(const UMyInvenWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMyInvenWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMyInvenWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMyInvenWidget) \
	NO_API virtual ~UMyInvenWidget();


#define FID_UE5_Character_02_Source_UE5_Character_02_MyInvenWidget_h_12_PROLOG
#define FID_UE5_Character_02_Source_UE5_Character_02_MyInvenWidget_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE5_Character_02_Source_UE5_Character_02_MyInvenWidget_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UE5_Character_02_Source_UE5_Character_02_MyInvenWidget_h_15_INCLASS_NO_PURE_DECLS \
	FID_UE5_Character_02_Source_UE5_Character_02_MyInvenWidget_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UE5_CHARACTER_02_API UClass* StaticClass<class UMyInvenWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE5_Character_02_Source_UE5_Character_02_MyInvenWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
