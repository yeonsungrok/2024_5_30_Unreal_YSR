// Fill out your copyright notice in the Description page of Project Settings.


#include "MyAnimInstance.h"
#include "MyCharacter.h"
#include "GameFramework/PawnMovementComponent.h"
#include "Animation/AnimMontage.h"

UMyAnimInstance::UMyAnimInstance()
{
	static ConstructorHelpers::FObjectFinder<UAnimMontage> am
	(TEXT("/Script/Engine.AnimMontage'/Game/BluePrint/Animation/MyAnimMongtage.MyAnimMongtage'"));
	// 몽타주 블루프린트를 넣기위해서..

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
		// 구독신청을 한다.
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

void UMyAnimInstance::JumpToSection(int32 sectionIndex)
{
	FName sectionName = FName(*FString::Printf(TEXT("Attack%d"), sectionIndex));
	Montage_JumpToSection(sectionName);
}

void UMyAnimInstance::AnimNotify_AttackHit()
{
	// 공격시점.. 하지만 이곳에 있는것보다 myCharacter에 있는것이 좋다..
	// 이 함수에서 캐릭터들의 충돌체 등장 혹은 사운드 출력. 델리게이트..
	_attackDelegate.Broadcast(); // Broadcast는 구독하는 애들에게 싹따 뿌림
	//UE_LOG(LogTemp, Warning, TEXT("Attack!!!!!!!!!"));
}

void UMyAnimInstance::NativeUpdateAnimation(float DeltaSeconds)
{
	// 폰의 데이터를 갖고오는것. TryGetPawnOwner

	// 진짜 중요.... Dynamic Cast 형태임..
	AMyCharacter* myCharacter = Cast<AMyCharacter>(TryGetPawnOwner());
	if (myCharacter != nullptr)
	{

		_speed = myCharacter->GetVelocity().Size();
		_isFalling = myCharacter->GetMovementComponent()->IsFalling();
		
		_vertical = _vertical + (myCharacter->_vertical - _vertical) * (DeltaSeconds);
		_horizontal = _horizontal + (myCharacter->_horizontal -_horizontal) * (DeltaSeconds);

		//_isAttack = myCharacter->_isAttacking;
	}

}
