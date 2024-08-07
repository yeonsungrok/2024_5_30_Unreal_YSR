// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MyPlayer.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UE5_CHARACTER_02_MyPlayer_generated_h
#error "MyPlayer.generated.h already included, missing '#pragma once' in MyPlayer.h"
#endif
#define UE5_CHARACTER_02_MyPlayer_generated_h

#define FID_UE5_Character_02_Source_UE5_Character_02_MyPlayer_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyPlayer(); \
	friend struct Z_Construct_UClass_AMyPlayer_Statics; \
public: \
	DECLARE_CLASS(AMyPlayer, AMyCharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UE5_Character_02"), NO_API) \
	DECLARE_SERIALIZER(AMyPlayer)


#define FID_UE5_Character_02_Source_UE5_Character_02_MyPlayer_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AMyPlayer(AMyPlayer&&); \
	AMyPlayer(const AMyPlayer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyPlayer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyPlayer); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMyPlayer) \
	NO_API virtual ~AMyPlayer();


#define FID_UE5_Character_02_Source_UE5_Character_02_MyPlayer_h_12_PROLOG
#define FID_UE5_Character_02_Source_UE5_Character_02_MyPlayer_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE5_Character_02_Source_UE5_Character_02_MyPlayer_h_15_INCLASS_NO_PURE_DECLS \
	FID_UE5_Character_02_Source_UE5_Character_02_MyPlayer_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UE5_CHARACTER_02_API UClass* StaticClass<class AMyPlayer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE5_Character_02_Source_UE5_Character_02_MyPlayer_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
