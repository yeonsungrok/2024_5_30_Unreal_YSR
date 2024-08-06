// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "MyItem.h"

#include "MyInvenComponent.generated.h"

class AMyItem;

DECLARE_MULTICAST_DELEGATE_TwoParams(ItemAdded, int itemId, int itemIndex)

//DECLARE_MULTICAST_DELEGATE_TwoParams(ItemDroped, int itemId, int itemIndex)

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class UE5_CHARACTER_02_API UMyInvenComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UMyInvenComponent();


protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
	
	// 아이템 추가
	void AddItem(class AMyItem* item);
	// 아이템 드랍
	UFUNCTION()
	void DropItem();

	ItemAdded _itemAddedEvent;
	
	//ItemDroped _itemDropedEvent;
	
	// 데미지감소시도
	bool HasItems() const { return _items.Num() > 0; }
	

private:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Inventory", meta = (AllowPrivateAccess = "true"))
	TArray<class AMyItem*> _items;

};
