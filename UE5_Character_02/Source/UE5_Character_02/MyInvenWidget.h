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
	// �κ��丮 ǥ�� ���¸� �����ϴ� �Լ�
	void ToggleVisibility(bool bIsVisible);

};
