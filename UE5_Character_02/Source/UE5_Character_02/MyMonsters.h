// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MyCharacter.h"
#include "MyMonsters.generated.h"

/**
 * 
 */
UCLASS()
class UE5_CHARACTER_02_API AMyMonsters : public AMyCharacter
{
	GENERATED_BODY()

public:
	AMyMonsters();

	virtual void BeginPlay() override;


	// TODO : Monster
	UFUNCTION()
	void Attack_AI();

};
