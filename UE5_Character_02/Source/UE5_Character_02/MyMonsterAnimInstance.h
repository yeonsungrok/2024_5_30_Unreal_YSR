// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "MyMonsterAnimInstance.generated.h"

/**
 * 
 */
UCLASS()
class UE5_CHARACTER_02_API UMyMonsterAnimInstance : public UAnimInstance
{
	GENERATED_BODY()
	
public:
	UMyMonsterAnimInstance();

    void PlayAnim();

protected:
    virtual void NativeInitializeAnimation() override;
    virtual void NativeUpdateAnimation(float DeltaSeconds) override;


 

};
