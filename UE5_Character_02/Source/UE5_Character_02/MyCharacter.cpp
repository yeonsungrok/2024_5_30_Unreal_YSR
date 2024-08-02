// Fill out your copyright notice in the Description page of Project Settings.


#include "MyCharacter.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "InputActionValue.h"

#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "MyAnimInstance.h"
#include "Engine/DamageEvents.h"
#include "MyItem.h"
#include "Math/UnrealMathUtility.h" // srand에 사용.
#include "Kismet/GameplayStatics.h"
#include "MyStatComponent.h"
#include "MyInvenComponent.h"
#include "Components/WidgetComponent.h"
#include "MyHpBar.h"

// Sets default values
AMyCharacter::AMyCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	
	// skeletal Mesh를 사용하기위해 ConstructorHelpers::FObjectFinder
	static ConstructorHelpers::FObjectFinder<USkeletalMesh> Gr
	(TEXT("/Script/Engine.SkeletalMesh'/Game/ParagonGrux/Characters/Heroes/Grux/Meshes/Grux.Grux'"));
	
	if (Gr.Succeeded())
	{
		GetMesh()->SetSkeletalMesh(Gr.Object);
	}

	GetMesh()->SetRelativeLocationAndRotation(FVector(0.0f, 0.0f, -88.0f), FRotator(0.0f, -90.0f, 0.0f));


	_springArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArm"));
	_camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	


	// 상속관계
	_springArm->SetupAttachment(GetCapsuleComponent());
	_camera->SetupAttachment(_springArm);

	_springArm->TargetArmLength = 550.0f;
	_springArm->SetRelativeRotation(FRotator(-30.0f, 0.0f, 0.0f));
	
	// 사이즈
	SetActorScale3D(FVector(1.2f, 1.2f, 1.2f));


	// Stat
	_statCom = CreateDefaultSubobject<UMyStatComponent>(TEXT("Stat"));
	_invenCom = CreateDefaultSubobject<UMyInvenComponent>(TEXT("Inventory"));

	// hp 바 widget UI
	_hpbarWidget = CreateDefaultSubobject<UWidgetComponent>(TEXT("HpBar"));
	_hpbarWidget->SetupAttachment(GetMesh());
	_hpbarWidget->SetWidgetSpace(EWidgetSpace::Screen); // EWidgetSpace::World가 있고 Screen이 있는데 용도에 따라 다르다.
	
	// hp바위치
	_hpbarWidget->SetRelativeLocation(FVector(0.0f, 0.0f, 238.0f));

	static ConstructorHelpers::FClassFinder<UUserWidget> hpBar(TEXT("/Script/UMGEditor.WidgetBlueprint'/Game/BluePrint/UI/MyHpBar_BP.MyHpBar_BP_C'"));
	
	if (hpBar.Succeeded())
	{
		_hpbarWidget->SetWidgetClass(hpBar.Class);
	}
	
}

// Called when the game starts or when spawned
void AMyCharacter::BeginPlay()
{
	Super::BeginPlay();
	
	Init();
}

void AMyCharacter::PostInitializeComponents()
{
	Super::PostInitializeComponents();
	_animInstance = Cast<UMyAnimInstance>(GetMesh()->GetAnimInstance());

	// 몽타주가 끝날때 _isAttack 을 false로
	if (_animInstance->IsValidLowLevel())
	{
		_animInstance->OnMontageEnded.AddDynamic(this, &AMyCharacter::OnAttackEnded);
		_animInstance->_attackDelegate.AddUObject(this, &AMyCharacter::AttackHit);
		_animInstance->_deathDelegate.AddUObject(this, &AMyCharacter::Disable);
	}

	// 레벨 설정
	_statCom->SetLevelAndInit(_level);

	//_statCom->_hpChangedDelegate.Add();
	
	_hpbarWidget->InitWidget();
	auto hpBar = Cast<UMyHpBar>(_hpbarWidget->GetUserWidgetObject());

	if (hpBar)
	{
		_statCom->_hpChangedDelegate.AddUObject(hpBar, &UMyHpBar::SetHpBarValue);
	}

}

// Called every frame
void AMyCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AMyCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	if (UEnhancedInputComponent* EnhancedInputComponent = Cast<UEnhancedInputComponent>(PlayerInputComponent))
	{
		// Moving
		EnhancedInputComponent->BindAction(_moveAction, ETriggerEvent::Triggered, this, &AMyCharacter::Move);

		// Looking
		EnhancedInputComponent->BindAction(_lookAction, ETriggerEvent::Triggered, this, &AMyCharacter::Look);
		
		// JumpA
		EnhancedInputComponent->BindAction(_jumpAction, ETriggerEvent::Started, this, &AMyCharacter::JumpA);

		// 공격
		EnhancedInputComponent->BindAction(_attackAction, ETriggerEvent::Started, this, &AMyCharacter::AttackA);
		
		// G키 드랍
		EnhancedInputComponent->BindAction(_dropAction, ETriggerEvent::Started, this, &AMyCharacter::DropItem);
	}
}

float AMyCharacter::TakeDamage(float Damage, FDamageEvent const& DamageEvent, AController* EventInstigator, AActor* DamageCauser)
{
	Super::TakeDamage(Damage, DamageEvent, EventInstigator, DamageCauser);
	// 1. hp -= Damage

	float damage = -_statCom->AddCurHp(-Damage);

	//UE_LOG(LogTemp, Log, TEXT("Attack : %s, CurHp : %d"), *DamageCauser->GetName(), _curHp);

	
	return damage;
}

void AMyCharacter::OnAttackEnded(UAnimMontage* Montage, bool bInterrupted)
{

	//UE_LOG(LogTemp, Error, TEXT("Attack!! END!!"));
	_isAttacking = false;


}

void AMyCharacter::AttackHit()
{
	//UE_LOG(LogTemp, Warning, TEXT("Attack!!!!!!!!!"));
	//TODO : Attack 충돌처리 (조금 복잡함)
	FHitResult hitResult;
	FCollisionQueryParams params(NAME_None, false, this); //this 자기자신을 무시하라.. 내가 나한테 데미지들어올수있음..

	float attackRange = 500.0f;
	float attackRadius = 100.0f;

		bool bResult = GetWorld()->SweepSingleByChannel
		(
			hitResult,
			GetActorLocation(),
			GetActorLocation() + GetActorForwardVector() * attackRange,
			FQuat::Identity,
			ECollisionChannel::ECC_GameTraceChannel2,
			FCollisionShape::MakeSphere(attackRadius),
			params
		);

		FVector vec = GetActorForwardVector() * attackRange;
		UE_LOG(LogTemp, Log, TEXT("%s"), *vec.ToString());
		FVector center = GetActorLocation() + vec * 0.5f;

		FColor drawColor = FColor::Green;

		if (bResult && hitResult.GetActor()->IsValidLowLevel())
		{
			UE_LOG(LogTemp, Warning, TEXT("HitActor : %s"), *hitResult.GetActor()->GetName());
			drawColor = FColor::Red;

			// 데미지...
			// 1. .... 
			FDamageEvent damageEvent;
			hitResult.GetActor()->TakeDamage(_statCom->GetAttackDamge(), damageEvent, GetController(), this);
		}

		// 어택데미지 로그 출력
		UE_LOG(LogTemp, Warning, TEXT("AttackDamage : %d"), _statCom->GetAttackDamge());
		//UE_LOG(LogTemp, Warning, TEXT("ME : %s AttackDamage : %d"), *GetName(), _attackDamage);

		DrawDebugSphere(GetWorld(), center, attackRadius, 12, drawColor, false, 2.0f);	
}
		
//void AMyCharacter::Die()
//{
//	if (_animInstance && DeathMontage)
//	{
//		_animInstance->PlayDeathMontage();
//		
//	}
//
//}

void AMyCharacter::AddAttackDamage(AActor* actor, int amount)
{
	// actor는 나의 공격력을 버프해준 대상

	_statCom->AddAttackDamage(amount);
}

void AMyCharacter::AddItem(AMyItem* item)
{
	if (_invenCom)
	{
		_invenCom->AddItem(item);
		//item->Disable(); //잠깐 스탑
		UE_LOG(LogTemp, Log, TEXT("Added item: %s"), *item->GetName());

	}
}

void AMyCharacter::DropItem()
{
	// 데미지감소시도
	if (_invenCom)
	{
		if (_invenCom->HasItems()) // 인벤토리에 아이템이 있는지 확인
		{
			_invenCom->DropItem();
			UE_LOG(LogTemp, Warning, TEXT("Attack Damage -50"));
			_statCom->SubAttackDamage(50); // 공격력 감소
		}
		else
		{
			UE_LOG(LogTemp, Error, TEXT("NO Have ITEM ~____________~"));
		}
	}

	/*UE_LOG(LogTemp, Log, TEXT("ITem Drop"));
	if (_items.Num() == 0)
		return;
	auto item = _items.Pop();
	
	float randFloat = FMath::FRandRange(0, PI * 2.0f);

	float X = cosf(randFloat) * 300.0f;
	float Y = sinf(randFloat) * 300.0f;
	FVector playerPos = GetActorLocation();
	playerPos.Z = GetActorLocation().Z;

	FVector itemPos = playerPos + FVector(X, Y, 0.0f);
	item->SetItemPos(itemPos);*/

	//if (_items.Num() > 0) //잠깐 스탑
	//{
	//	// 인벤토리에서 마지막 아이템을 가져와서 제거
	//	AMyItem* itemToDrop = _items.Last();
	//	_items.RemoveAt(_items.Num() - 1);

	//	if (itemToDrop)
	//	{
	//		// 캐릭터 앞에 아이템을 배치
	//		FVector dropLocation = GetActorLocation() + GetActorForwardVector() * 300.0f;
	//		itemToDrop->SetActorLocation(dropLocation);
	//		
	//		
	//		itemToDrop->Init();
	//		
	//		UE_LOG(LogTemp, Log, TEXT("Dropped item: %s"), *itemToDrop->GetName());
	//	}
	//}
	//else
	//{
	//	UE_LOG(LogTemp, Warning, TEXT("No items to drop"));
	//}
}

void AMyCharacter::Move(const FInputActionValue& value)
{
	FVector2D MovementVector = value.Get<FVector2D>();

	if (Controller != nullptr)
	{
		_vertical = MovementVector.Y;
		_horizontal = MovementVector.X;

		AddMovementInput(GetActorForwardVector(), MovementVector.Y);
		AddMovementInput(GetActorRightVector(), MovementVector.X);

	}
}

void AMyCharacter::Look(const FInputActionValue& value)
{
	FVector2D LookAxisVector = value.Get<FVector2D>();
	if (Controller != nullptr)
	{
		AddControllerYawInput(LookAxisVector.X);
	}
}

void AMyCharacter::JumpA(const FInputActionValue& value)
{
	bool isPressed = value.Get<bool>();

	if (isPressed)
	{
		////테스트 로그 출력
		//UE_LOG(LogTemp, Warning, TEXT("Jump!!"));
		
		ACharacter::Jump();
	}
}

void AMyCharacter::AttackA(const FInputActionValue& value)
{
	bool isPressed = value.Get<bool>();
	if (isPressed && _isAttacking == false && _animInstance != nullptr)
	{
		
		_animInstance->PlayAttackMontage();
		_isAttacking = true;


		_curAttackIndex %= 4;
		_curAttackIndex++;

		_animInstance->JumpToSection(_curAttackIndex);

	}
}

void AMyCharacter::Init()
{
	_statCom->Reset();
	SetActorHiddenInGame(false);
	SetActorEnableCollision(true);
	PrimaryActorTick.bCanEverTick = true;
}


void AMyCharacter::Disable()
{
	SetActorHiddenInGame(true);
	SetActorEnableCollision(false);
	PrimaryActorTick.bCanEverTick = false;
}

