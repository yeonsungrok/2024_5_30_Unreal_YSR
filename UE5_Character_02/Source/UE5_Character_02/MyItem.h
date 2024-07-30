// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MyItem.generated.h"

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

	UFUNCTION() // ��������Ʈ ����Ҷ� �� UFUNCTION �����.
	void OnMyCharacterOverlap(UPrimitiveComponent* OverlappedComponent, AActor* otherActor, UPrimitiveComponent* otherComp, int32 otherBodyIndex, bool BFromWeep, const FHitResult& SweepResult);

public:	
	void Init();
	void Disable();
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(VisibleAnywhere)
	class UStaticMeshComponent* _meshComponent; // ��, ���ʹ� ��� �޽����������ʴ´�. ĳ���ʹ� �Ž��� ACharacter�� ������ش�. �׷��� ����� �̰��� �������Ѵ�.
	
	UPROPERTY(VisibleAnywhere)
	class USphereComponent* _trigger;


};