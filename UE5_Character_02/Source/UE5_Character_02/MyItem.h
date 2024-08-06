// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MyItem.generated.h"

//UENUM()
//enum class ItemType
//{
//
//};
//
//USTRUCT()
//struct ItemInfo
//{
//	int itemId;
//	ItemType type;
//};

UCLASS()
class UE5_CHARACTER_02_API AMyItem : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMyItem();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	virtual void PostInitializeComponents() override;

	UFUNCTION() // 델리게이트 사용할때 꼭 UFUNCTION 써야함.
	void OnMyCharacterOverlap(UPrimitiveComponent* OverlappedComponent, AActor* otherActor, UPrimitiveComponent* otherComp, int32 otherBodyIndex, bool BFromWeep, const FHitResult& SweepResult);

public:	
	void Init();
	void Disable();
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// 새로운 item방법
	void SetItemPos(FVector pos, FRotator rot = FRotator::ZeroRotator);

	UPROPERTY(VisibleAnywhere)
	class UStaticMeshComponent* _meshComponent; // 폰, 액터는 기몬 메쉬생성하지않는다. 캐릭터는 매쉬를 ACharacter가 만들어준다. 그래서 서브로 이것을 만들어야한다.
	
	UPROPERTY(VisibleAnywhere)
	class USphereComponent* _trigger;


	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 _itemId = -1;

};