// Fill out your copyright notice in the Description page of Project Settings.


#include "MainGameMode.h"
#include "GameFramework/Pawn.h"

#include "MyCharacter.h"

AMainGameMode::AMainGameMode()
{

	static ConstructorHelpers::FClassFinder<AMyCharacter>
	myCharacter(TEXT("/Script/Engine.Blueprint'/Game/BluePrint/Players/MyCharacter_BP.MyCharacter_BP_C'"));

	if(myCharacter.Succeeded())
	{
		DefaultPawnClass = myCharacter.Class;
	}

	static ConstructorHelpers::FClassFinder<AMyCharacter>
		myMonster(TEXT("/Script/Engine.Blueprint'/Game/BluePrint/Players/MyMonster_BP.MyMonster_BP_C'"));
	if (myMonster.Succeeded())
	{
		_monsterClass = myMonster.Class;
	}

}

void AMainGameMode::BeginPlay()
{
	
	// 캐릭터 부근에.. 찾아서 넣을수 있도록
	// 위치값...
	FVector location = GetWorld()->GetFirstPlayerController()->GetPawn()->GetActorLocation() + FVector(600,0.0f,0.0f);
	FRotator rotator = GetWorld()->GetFirstPlayerController()->GetPawn()->GetActorRotation();
	// 설계도를 넣어줘야함. 

	// SPawn 액터..
	for (int i = 0; i < 8; i++)
	{
		location.X += 100.0 * i;
		rotator.Yaw += 60.0 * i;
		AMyCharacter* monster = GetWorld()->SpawnActor<AMyCharacter>(_monsterClass, location, rotator);

		_monsters.Add(monster); // 몬스터들을 몬스터즈 에게 할당해서 배치.
	}
	
}
