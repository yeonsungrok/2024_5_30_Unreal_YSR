// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"

#include "MyInvenWidget.h"
#include "MainGameMode.generated.h"

/**
 * 
 */
UCLASS()
class UE5_CHARACTER_02_API AMainGameMode : public AGameModeBase
{
	GENERATED_BODY()
	
public:
	AMainGameMode();

	// 스폰액터를 위함
	virtual void BeginPlay() override;

	UPROPERTY()
	UClass* _monsterClass;

	UPROPERTY()
	TArray<class AMyCharacter*> _monsters;




	


	// Widget : MyInvenWidget을 위한것.
//	UMyInvenWidget* MyInvenWidgetInstance;
//private:
//	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "UI", meta = (AllowPrivateAccess = "true"))
//	TSubclassOf<class UMyInvenWidget> MyInvenWidgetClass;
//		
//	
//	bool bIsInventoryVisible;

};
	
