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
	//// 인벤토리 표시 상태를 변경하는 함수
	//void ToggleVisibility(bool bIsVisible);

public:
	virtual void NativeConstruct() override;

	UFUNCTION()
	void SetItem(int32 itemId, int32 index);

public:
	UPROPERTY(meta = (BindWidget))
	class UUniformGridPanel* SlotGrid; // bp 네임과 같이!

	UPROPERTY(meta = (BindWidget))
	class UButton* DropBtn;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<class UButton*> _slotBtns;
	
	//이미지
	TArray<class UImage*> _slotBtnImages;
	class UTexture2D* _axe;
	class UTexture2D* _default;
};
