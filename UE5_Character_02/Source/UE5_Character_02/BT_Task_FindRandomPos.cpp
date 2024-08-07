// Fill out your copyright notice in the Description page of Project Settings.


#include "BT_Task_FindRandomPos.h"

#include "NavigationSystem.h"
#include "BehaviorTree/BehaviorTree.h"
#include "BehaviorTree/BlackboardData.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "AIController.h"

UBT_Task_FindRandomPos::UBT_Task_FindRandomPos()
{
	NodeName = TEXT("FindRandPos");
}

EBTNodeResult::Type UBT_Task_FindRandomPos::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	
    EBTNodeResult::Type result = Super::ExecuteTask(OwnerComp, NodeMemory);

    auto currentpawn = OwnerComp.GetAIOwner()->GetPawn();

    if (!currentpawn->IsValidLowLevel())
        return EBTNodeResult::Type::Failed;

    UNavigationSystemV1* naviSystem = UNavigationSystemV1::GetNavigationSystem(GetWorld());

    if (naviSystem == nullptr)
        return EBTNodeResult::Type::Failed;

    FNavLocation randLocation;

    if (naviSystem->GetRandomPointInNavigableRadius(currentpawn->GetActorLocation(), 500.0f, randLocation))
    {
        OwnerComp.GetBlackboardComponent()->SetValueAsVector(FName(TEXT("RandPos")), randLocation);
        return EBTNodeResult::Type::Succeeded;
    }

    return result;
}