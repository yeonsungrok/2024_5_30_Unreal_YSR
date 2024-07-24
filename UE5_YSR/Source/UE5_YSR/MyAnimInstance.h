// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "MyAnimInstance.generated.h"

/**
 * 
 */
UCLASS()
class UE5_YSR_API UMyAnimInstance : public UAnimInstance
{
	GENERATED_BODY()
	// �ν��Ͻ� ��ü�� �Ҵ��� �ǰ� ���忡 ������������
	// ���ʹ� ��ü�� �Ҵ�ǰ� ���忡�� ����

public:
	UMyAnimInstance();

	virtual void NativeUpdateAnimation(float DeltaSeconds) override;
private:
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Pawn, Meta = (AllowPrivateAccess = true))
	float _speed;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Pawn, Meta = (AllowPrivateAccess = true))
	bool _isFalling;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Pawn, Meta = (AllowPrivateAccess = true))
	bool _isAttack;
	
};
