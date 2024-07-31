// Fill out your copyright notice in the Description page of Project Settings.

#include "MyGameInstance.h"
#include "MyStatComponent.h"

// Sets default values for this component's properties
UMyStatComponent::UMyStatComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = false;

	// ...
}


// Called when the game starts
void UMyStatComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UMyStatComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

void UMyStatComponent::Reset()
{
	_curHp = _maxHp;
}

void UMyStatComponent::SetLevelAndInit(int level)
{
	auto myGameInstance = Cast<UMyGameInstance>(GetWorld()->GetGameInstance());
	if (myGameInstance)
	{
		FMyStatData* data = myGameInstance->GetStatDataByLevel(level);
		_maxHp = data->maxHp;
		_attackDamage = data->attack;
		_curHp = _maxHp;

		GetOwner()->GetName();
		UE_LOG(LogTemp, Log, TEXT("%s...hp : %d, attackDamage : %d"), *GetOwner()->GetName(), _maxHp, _attackDamage);
	}
}

int UMyStatComponent::AddCurHp(float amount)
{
	int beforHp = _curHp;

	_curHp += amount;

	if (_curHp < 0)
		_curHp = 0;

	if (_curHp > _maxHp)
		_curHp = _maxHp;

	return beforHp - _curHp;
}

void UMyStatComponent::AddAttackDamage(float amount)
{
	_attackDamage += amount;
}

