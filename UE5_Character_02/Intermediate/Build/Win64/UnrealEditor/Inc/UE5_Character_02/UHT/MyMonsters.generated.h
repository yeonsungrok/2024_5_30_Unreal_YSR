// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MyMonsters.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UE5_CHARACTER_02_MyMonsters_generated_h
#error "MyMonsters.generated.h already included, missing '#pragma once' in MyMonsters.h"
#endif
#define UE5_CHARACTER_02_MyMonsters_generated_h

#define FID_UE5_Character_02_Source_UE5_Character_02_MyMonsters_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execAttack_AI);


#define FID_UE5_Character_02_Source_UE5_Character_02_MyMonsters_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyMonsters(); \
	friend struct Z_Construct_UClass_AMyMonsters_Statics; \
public: \
	DECLARE_CLASS(AMyMonsters, AMyCharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UE5_Character_02"), NO_API) \
	DECLARE_SERIALIZER(AMyMonsters)


#define FID_UE5_Character_02_Source_UE5_Character_02_MyMonsters_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AMyMonsters(AMyMonsters&&); \
	AMyMonsters(const AMyMonsters&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyMonsters); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyMonsters); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMyMonsters) \
	NO_API virtual ~AMyMonsters();


#define FID_UE5_Character_02_Source_UE5_Character_02_MyMonsters_h_12_PROLOG
#define FID_UE5_Character_02_Source_UE5_Character_02_MyMonsters_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE5_Character_02_Source_UE5_Character_02_MyMonsters_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UE5_Character_02_Source_UE5_Character_02_MyMonsters_h_15_INCLASS_NO_PURE_DECLS \
	FID_UE5_Character_02_Source_UE5_Character_02_MyMonsters_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UE5_CHARACTER_02_API UClass* StaticClass<class AMyMonsters>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE5_Character_02_Source_UE5_Character_02_MyMonsters_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
