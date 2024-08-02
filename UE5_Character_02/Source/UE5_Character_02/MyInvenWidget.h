// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "MyInvenWidget.generated.h"

/**
 * 
 */
UCLASS()
class UE5_CHARACTER_02_API UMyInvenWidget : public UUserWidget
{
	GENERATED_BODY()
	

	
public:
	// 인벤토리 표시 상태를 변경하는 함수
	void ToggleVisibility(bool bIsVisible);

};
