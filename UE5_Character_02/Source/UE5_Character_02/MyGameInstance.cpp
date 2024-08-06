// Fill out your copyright notice in the Description page of Project Settings.


#include "MyGameInstance.h"

#include "MyUIManager.h"

UMyGameInstance::UMyGameInstance()
{
	//생성자에서 언리얼에서 만든 데이터를 갖고와야한다. 예) level
	static ConstructorHelpers::FObjectFinder<UDataTable> dataTable
	(TEXT("/Script/Engine.DataTable'/Game/Data/MyStatDataTable.MyStatDataTable'"));

	if (dataTable.Succeeded())
	{
		_statTable = dataTable.Object;
		UE_LOG(LogTemp, Error, TEXT("StatTable Load Complete"));
	}
}

void UMyGameInstance::Init()
{
	Super::Init();

	auto statData = GetStatDataByLevel(2);
	UE_LOG(LogTemp, Warning, TEXT("Level : %d, MaxHp : %d, Attack : %d ")
	, statData->level, statData->maxHp, statData->attack);

	FActorSpawnParameters params;
	params.Name = TEXT("UIManager"); // 언리얼 에디터에서 보이는 이름
	_uiManager = GetWorld()->SpawnActor<AMyUIManager>(FVector::ZeroVector, FRotator::ZeroRotator, params);

}

FMyStatData* UMyGameInstance::GetStatDataByLevel(int level)
{
	auto statData = _statTable->FindRow<FMyStatData>(*FString::FromInt(level), TEXT("")); // int를 string으로 갖고옴

	return statData;
}
