// Fill out your copyright notice in the Description page of Project Settings.


#include "MyGameModeBase.h"
#include "MyPawn.h"


//#include "MyCharacter.h" 

AMyGameModeBase::AMyGameModeBase()
{
	DefaultPawnClass = AMyPawn::StaticClass();


	//// ����Ʈ���� �ƴ϶� ���� ĳ���͸� �����ҿ� ������� �Է���ġ..
	//static ConstructorHelpers::FClassFinder<AMyCharacter>
	//myCharacter(TEXT("/Script/Engine.Blueprint'/Game/BluePrint/Player/MyCharactor_BP.MyCharactor_BP_C'"));

	//if(myCharacter.Succeeded())
	//{
	//	DefaultPawnClass = myCharacter.Class;
	//}

}
