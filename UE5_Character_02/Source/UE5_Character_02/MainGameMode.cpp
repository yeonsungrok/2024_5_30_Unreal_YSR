// Fill out your copyright notice in the Description page of Project Settings.


#include "MainGameMode.h"
#include "GameFramework/Pawn.h"

#include "MyCharacter.h"
//위젯에 대한 추가 인클루드..3가지.
#include "Engine/World.h"
#include "MyAIController.h"
#include "GameFramework/CharacterMovementComponent.h"

#include "Blueprint/UserWidget.h"

AMainGameMode::AMainGameMode()
//: bIsInventoryVisible(false) // 위젯때문에 추가.
{
	//// 위젯 블루프린트 클래스를 찾음
	//static ConstructorHelpers::FClassFinder<UMyInvenWidget> InvenWidgetBPClass(TEXT("/Script/UMGEditor.WidgetBlueprint'/Game/BluePrint/UI/MyInven_BP.MyInven_BP_C'"));
	//if (InvenWidgetBPClass.Succeeded())
	//{
	//	MyInvenWidgetClass = InvenWidgetBPClass.Class;
	//}



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
	//// 캐릭터의 위치 가져오기.
	//FVector centerLocation = GetWorld()->GetFirstPlayerController()->GetPawn()->GetActorLocation();
	//float radius = 600.0f;

	//// 몬스터 숫자
	//int monsterCount = 10;
	//float angleIncrement = 360.0f / monsterCount;


	// 캐릭터 부근에.. 찾아서 넣을수 있도록
	// 위치값...
	FVector location = GetWorld()->GetFirstPlayerController()->GetPawn()->GetActorLocation() + FVector(600,0.0f,0.0f);
	FRotator rotator = GetWorld()->GetFirstPlayerController()->GetPawn()->GetActorRotation();
	// 설계도를 넣어줘야함. 


	//TODO : MyMonster.cpp 생성해야함
	
	// SPawn 액터..
	//for (int i = 0; i < 8; i++)
	//{
	//	location.X += 100.0 * i;
	//	rotator.Yaw += 60.0 * i;

	//	AMyCharacter* SpawnedActor = GetWorld()->SpawnActor<AMyCharacter>(_monsterClass, location, rotator);
	//////SpawnedActor->AIControllerClass = AMyAIController::StaticClass();
	//	SpawnedActor->SetActorLocation(location);

	//	_monsters.Add(SpawnedActor); // 몬스터들을 몬스터즈 에게 할당해서 배치.
	//}
	

	//// 인벤 위젯에 대한것
	//if (MyInvenWidgetClass)
	//{
	//	MyInvenWidgetInstance = CreateWidget<UMyInvenWidget>(GetWorld(), MyInvenWidgetClass);
	//	if (MyInvenWidgetInstance)
	//	{
	//		MyInvenWidgetInstance->AddToViewport();
	//		MyInvenWidgetInstance->ToggleVisibility(false); // 초기에는 숨김
	//	}
	//}


}



