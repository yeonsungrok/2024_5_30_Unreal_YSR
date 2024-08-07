// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "MyStatComponent.h"
#include "MyInvenComponent.h" // 인벤토리 추가

#include "MyCharacter.generated.h"


class UInputComponent;
class UInputAction;
class UInputMappingContext;
struct FInputActionValue;

DECLARE_MULTICAST_DELEGATE(Delegate_AttackEnded);

UCLASS()
class UE5_CHARACTER_02_API AMyCharacter : public ACharacter
{
	GENERATED_BODY()


	
public: //캐릭터 기본생성
	// Sets default values for this character's properties
	AMyCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	virtual void PostInitializeComponents() override;

public:	
		
	// 공격 받는것이 TakeDamage , DamageCauser = 공격한애가 누구인지
	virtual float TakeDamage
	(float Damage, struct FDamageEvent const& DamageEvent, AController* EventInstigator, AActor* DamageCauser) override;

	UFUNCTION()
	void OnAttackEnded(class UAnimMontage* Montage, bool bInterrupted);

	//애님 블루프린트 몽타주 노티파이추가하기위함
	UFUNCTION()
	void AttackHit();
	
	// state 관련
	int GetCurHp() { return _statCom->GetCurHp(); }
	void AddAttackDamage(AActor* actor, int amount);

	//// Item
	void AddItemToCharacter(class AMyItem* item);
	void DropItemFromCharacter();


	Delegate_AttackEnded _attackEndedDelegate;
	
protected: //이동 기본생성
	virtual void Init();

	UFUNCTION()
	virtual void Disable();

public:
	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	bool _isAttacking = false;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	int _curAttackIndex = 0;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	float _vertical = 0.0f;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	float _horizontal = 0.0f;

	


	//애니메이션
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Input, meta = (AllowPrivateAccess = "true"))
	class UMyAnimInstance* _animInstance;

	
	// State Components
	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Stat, meta = (AllowPrivateAccess = "true"))
	class UMyStatComponent* _statCom;

	// Inven Components
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = Input, meta = (AllowPrivateAccess = "true"))
	class UMyInvenComponent* _invenCom;

	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Stat, meta = (AllowPrivateAccess = "true"))
	class UWidgetComponent* _hpbarWidget;

	// TODO : Monster
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = Input, meta = (AllowPrivateAccess = "true"))
	class AAIController* _aiController;
	
};

