// Fill out your copyright notice in the Description page of Project Settings.


#include "MyAnimInstance.h"
#include "MyCharacter.h"
#include "GameFramework/PawnMovementComponent.h"
#include "Animation/AnimMontage.h"


UMyAnimInstance::UMyAnimInstance()
{
	static ConstructorHelpers::FObjectFinder<UAnimMontage> am
	(TEXT("/Script/Engine.AnimMontage'/Game/BluePrint/Animations/MyAnimMongtage.MyAnimMongtage'"));
	// 몽타주 블루프린트를 넣기위해서..

	if (am.Succeeded())
	{
		_myAnimMontage = am.Object;
	}
	//static ConstructorHelpers::FObjectFinder<UAnimMontage> dm
	//(TEXT("/Script/Engine.AnimMontage'/Game/BluePrint/Animations/MyAnimDeathMontage.MyAnimDeathMontage'"));
	//// Death 몽타주 블루프린트를 넣기위해서..
	//if (dm.Succeeded())
	//{
	//	DeathMontage = dm.Object;
	//}
}

void UMyAnimInstance::NativeUpdateAnimation(float DeltaSeconds)
{
	AMyCharacter* myCharacter = Cast<AMyCharacter>(TryGetPawnOwner());
	if (myCharacter != nullptr)
	{
		_speed = myCharacter->GetVelocity().Size();
		_isFalling = myCharacter->GetMovementComponent()->IsFalling();
		_Direction = CalculateDirection(myCharacter->GetVelocity(), myCharacter->GetActorRotation());

		_vertical = _speed + (myCharacter->_vertical - _speed) * (DeltaSeconds);
		_horizontal = _Direction + (myCharacter->_horizontal - _Direction) * (DeltaSeconds);
		//_vertical = _vertical + (myCharacter->_vertical - _vertical) * (DeltaSeconds);
		_isDead = (myCharacter->GetCurHp() <= 0);
	}

}
void UMyAnimInstance::PlayAttackMontage()
{
	
	if (!Montage_IsPlaying(_myAnimMontage))
	{
		Montage_Play(_myAnimMontage);

		AMyCharacter* myCharacter = Cast<AMyCharacter>(TryGetPawnOwner());
	}
}

void UMyAnimInstance::JumpToSection(int32 sectionIndex)
{
	FName sectionName = FName(*FString::Printf(TEXT("Attack%d"), sectionIndex));
	Montage_JumpToSection(sectionName);
}

//void UMyAnimInstance::PlayDeathMontage()
//{
//	if (DeathMontage)
//	{
//		Montage_Play(DeathMontage);	
//	}
//}

void UMyAnimInstance::AnimNotify_AttackHit()
{
	_attackDelegate.Broadcast();
}

void UMyAnimInstance::AnimNotify_Death()
{
	_deathDelegate.Broadcast();
}


