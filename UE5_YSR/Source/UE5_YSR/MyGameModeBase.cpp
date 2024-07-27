// Fill out your copyright notice in the Description page of Project Settings.


#include "MyGameModeBase.h"
#include "MyPawn.h"


//#include "MyCharacter.h" 

AMyGameModeBase::AMyGameModeBase()
{
	DefaultPawnClass = AMyPawn::StaticClass();


	//// 디폴트폰이 아니라 직접 캐릭터를 폰역할에 넣을경우 입력위치..
	//static ConstructorHelpers::FClassFinder<AMyCharacter>
	//myCharacter(TEXT("/Script/Engine.Blueprint'/Game/BluePrint/Player/MyCharactor_BP.MyCharactor_BP_C'"));

	//if(myCharacter.Succeeded())
	//{
	//	DefaultPawnClass = myCharacter.Class;
	//}

}
