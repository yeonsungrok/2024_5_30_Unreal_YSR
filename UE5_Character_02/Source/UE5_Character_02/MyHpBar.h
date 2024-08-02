// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "MyHpBar.generated.h"

/**
 * 
 */
UCLASS()
class UE5_CHARACTER_02_API UMyHpBar : public UUserWidget
{
	GENERATED_BODY()
	
public:
	void SetHpBarValue(float ratio);
	

private:
	UPROPERTY(meta = (BindWidget))
	class UProgressBar* PB_HPBar;  //프로그레스바 이름과 동일하게 일치하도록


};
