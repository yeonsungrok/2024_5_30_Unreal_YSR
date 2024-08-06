// Fill out your copyright notice in the Description page of Project Settings.


#include "MyAIController.h"
#include "NavigationSystem.h"
#include "Blueprint/AIBlueprintHelperLibrary.h"
#include "BehaviorTree/BehaviorTree.h"
#include "BehaviorTree/BlackboardData.h"
#include "BehaviorTree/BlackboardComponent.h"

AMyAIController::AMyAIController()
{
	static ConstructorHelpers::FObjectFinder<UBlackboardData> BB(TEXT("/Script/AIModule.BlackboardData'/Game/BluePrint/AI/MonsterBB_BP.MonsterBB_BP'"));
	if (BB.Succeeded())
	{
		_bb = BB.Object; 
	}

	static ConstructorHelpers::FObjectFinder<UBehaviorTree> BT(TEXT("/Script/AIModule.BehaviorTree'/Game/BluePrint/AI/MonsterBT_BP.MonsterBT_BP'"));
	if (BT.Succeeded())
	{
		_bt = BT.Object;
	}
}
// Possess  :  컨트롤러가 폰에 빙의하는 것
void AMyAIController::OnPossess(APawn* InPawn)
{
	Super::OnPossess(InPawn);

	// RandMove를 3.0f 즉 3초마다 루프되는 것.
	// GetWorld()->GetTimerManager().SetTimer(_timerHandle, this, &AMyAIController::RandMove, 3.0f, true);

	UBlackboardComponent* temp = Blackboard;
	if (UseBlackboard(_bb, temp))
	{
		if (RunBehaviorTree(_bt))
		{
			UE_LOG(LogTemp, Log, TEXT("Behavior Tree Succeeded"));
		}
	}


}

void AMyAIController::OnUnPossess()
{
	Super::OnUnPossess();

	// GetWorld()->GetTimerManager().ClearTimer(_timerHandle);
}

void AMyAIController::RandMove()
{
	auto currentPawn = GetPawn();

	if (!currentPawn->IsValidLowLevel())
		return;
	

	auto naviSystem = UNavigationSystemV1::GetNavigationSystem(GetWorld());
	if (naviSystem == nullptr)
		return;

	FNavLocation randLocation;

	// AI들 자동 움직이도록 (Nav Mesh Bounce Voulume을 언리얼에서 깔아두고 함)
	if (naviSystem->GetRandomPointInNavigableRadius(currentPawn->GetActorLocation(), 500.0f, randLocation))
	{
		UAIBlueprintHelperLibrary::SimpleMoveToLocation(this, randLocation);
	
	}
	
	
}
