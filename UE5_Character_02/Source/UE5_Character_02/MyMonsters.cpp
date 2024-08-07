// Fill out your copyright notice in the Description page of Project Settings.


#include "MyMonsters.h"

#include "MyAIController.h"
#include "MyAnimInstance.h"

AMyMonsters::AMyMonsters()
{
}

void AMyMonsters::BeginPlay()
{
	Super::BeginPlay();

	_aiController = Cast<AAIController>(GetController());

}



void AMyMonsters::Attack_AI()
{
	if (_statCom->IsDead())
		return;

	if (_isAttacking == false && _animInstance != nullptr)
	{

		_animInstance->PlayAttackMontage();
		_isAttacking = true;


		_curAttackIndex %= 4;
		_curAttackIndex++;

		_animInstance->JumpToSection(_curAttackIndex);
	}
}

