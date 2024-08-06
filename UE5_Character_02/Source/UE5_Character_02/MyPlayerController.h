// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "MyPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class UE5_CHARACTER_02_API AMyPlayerController : public APlayerController
{
	GENERATED_BODY()
	
protected:
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input)
	class UInputMappingContext* _inputMappingContext;

protected:
	virtual void BeginPlay() override;



public:
	void ShowUI();
	void HideUI();

//	//À§Á¬ Ãß°¡.
//	virtual void SetupInputComponent() override;
//private:
//	void ToggleInventory();
//
//	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Input", meta = (AllowPrivateAccess = "true"))
//	class UInputMappingContext* InputMappingContext;
//
//	UPROPERTY()
//	class AMainGameMode* GameModeInstance;
//
//	class UMyInvenWidget* InvenWidget;
//

};
