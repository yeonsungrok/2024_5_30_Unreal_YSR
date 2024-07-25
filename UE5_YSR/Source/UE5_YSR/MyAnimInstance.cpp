// Fill out your copyright notice in the Description page of Project Settings.


#include "MyAnimInstance.h"
#include "MyCharacter.h"
#include "GameFramework/PawnMovementComponent.h"
#include "Animation/AnimMontage.h"

UMyAnimInstance::UMyAnimInstance()
{
	static ConstructorHelpers::FObjectFinder<UAnimMontage> am
	(TEXT("/Script/Engine.AnimMontage'/Game/BluePrint/Animation/MyAnimMongtage.MyAnimMongtage'"));
	// ��Ÿ�� �������Ʈ�� �ֱ����ؼ�..

	if(am.Succeeded())
	{
		_myAnimMontage = am.Object;
	}
}

void UMyAnimInstance::PlayAttackMontage()
{
	if (!Montage_IsPlaying(_myAnimMontage))
	{
		Montage_Play(_myAnimMontage);

		AMyCharacter* myCharacter = Cast<AMyCharacter>(TryGetPawnOwner());
		// ������û�� �Ѵ�.
		//myCharacter->_myDelegate1.BindUObject(this, &UMyAnimInstance::DelegateTest);
		//myCharacter->_myDelegate3.BindUObject(this, &UMyAnimInstance::DelegateTest2);


	}
}

void UMyAnimInstance::DelegateTest()
{
	UE_LOG(LogTemp, Warning, TEXT("Delegate Text"));
}

void UMyAnimInstance::DelegateTest2(int32 hp, int32 mp)
{
	UE_LOG(LogTemp, Warning, TEXT("HP : %d, MP : %d"), hp, mp);
}

void UMyAnimInstance::NativeUpdateAnimation(float DeltaSeconds)
{
	// ���� �����͸� ������°�. TryGetPawnOwner

	// ��¥ �߿�.... Dynamic Cast ������..
	AMyCharacter* myCharacter = Cast<AMyCharacter>(TryGetPawnOwner());
	if (myCharacter != nullptr)
	{
		_speed = myCharacter->GetVelocity().Size();
		_isFalling = myCharacter->GetMovementComponent()->IsFalling();
		
		//_isAttack = myCharacter->_isAttacking;
	}

}
