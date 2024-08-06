// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MyItem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef UE5_CHARACTER_02_MyItem_generated_h
#error "MyItem.generated.h already included, missing '#pragma once' in MyItem.h"
#endif
#define UE5_CHARACTER_02_MyItem_generated_h

#define FID_UE5_Character_02_Source_UE5_Character_02_MyItem_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnMyCharacterOverlap);


#define FID_UE5_Character_02_Source_UE5_Character_02_MyItem_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyItem(); \
	friend struct Z_Construct_UClass_AMyItem_Statics; \
public: \
	DECLARE_CLASS(AMyItem, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UE5_Character_02"), NO_API) \
	DECLARE_SERIALIZER(AMyItem)


#define FID_UE5_Character_02_Source_UE5_Character_02_MyItem_h_25_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AMyItem(AMyItem&&); \
	AMyItem(const AMyItem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyItem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyItem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMyItem) \
	NO_API virtual ~AMyItem();


#define FID_UE5_Character_02_Source_UE5_Character_02_MyItem_h_22_PROLOG
#define FID_UE5_Character_02_Source_UE5_Character_02_MyItem_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE5_Character_02_Source_UE5_Character_02_MyItem_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UE5_Character_02_Source_UE5_Character_02_MyItem_h_25_INCLASS_NO_PURE_DECLS \
	FID_UE5_Character_02_Source_UE5_Character_02_MyItem_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UE5_CHARACTER_02_API UClass* StaticClass<class AMyItem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE5_Character_02_Source_UE5_Character_02_MyItem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
