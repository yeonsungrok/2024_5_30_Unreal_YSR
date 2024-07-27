// Fill out your copyright notice in the Description page of Project Settings.


#include "MainGameMode.h"

#include "MyCharacter.h"

AMainGameMode::AMainGameMode()
{

	static ConstructorHelpers::FClassFinder<AMyCharacter>
	myCharacter(TEXT("/Script/Engine.Blueprint'/Game/BluePrint/Players/MyCharacter_BP.MyCharacter_BP_C'"));

	if(myCharacter.Succeeded())
	{
		DefaultPawnClass = myCharacter.Class;
	}

}
