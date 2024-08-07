// Fill out your copyright notice in the Description page of Project Settings.


#include "MyCharacter.h"

#include "MyGameInstance.h"
#include "MyUIManager.h"
#include "MyInvenWidget.h"

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
#include "Blueprint/UserWidget.h"
#include "MyInvenWidget.h"
#include "MyPlayerController.h"
#include "Components/Button.h"

#include "MyAIController.h"


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

	//추가해봄
	RootComponent = GetCapsuleComponent();

	// inven Component
	_invenCom = CreateDefaultSubobject<UMyInvenComponent>(TEXT("Inventory"));
	
	// hp 바 widget UI
	_hpbarWidget = CreateDefaultSubobject<UWidgetComponent>(TEXT("HpBar"));
	_hpbarWidget->SetupAttachment(GetMesh());
	_hpbarWidget->SetWidgetSpace(EWidgetSpace::Screen); // EWidgetSpace::World가 있고 Screen이 있는데 용도에 따라 다르다.
	
	// hp바위치
	_hpbarWidget->SetRelativeLocation(FVector(0.0f, 0.0f, 238.0f));
	// Stat Component
	_statCom = CreateDefaultSubobject<UMyStatComponent>(TEXT("Stat"));
	
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
	_statCom->SetLevelAndInit(1);
	_statCom->_deathDelegate.AddLambda([this]()->void {this->GetController()->UnPossess(); });


	//_statCom->_hpChangedDelegate.Add();
	
	_hpbarWidget->InitWidget();
	auto hpBar = Cast<UMyHpBar>(_hpbarWidget->GetUserWidgetObject());
	if (hpBar)
	{
		_statCom->_hpChangedDelegate.AddUObject(hpBar, &UMyHpBar::SetHpBarValue);
	}
	
	//// TODO : InvenWidget
	//auto invenUI = UIManager->GetInvenUI();

	//if (invenUI)
	//{
	//	_invenCom->_itemAddedEvent.AddUObject(invenUI, &UMyInvenWidget::SetItem);
	//	invenUI->DropBtn->OnClicked.AddDynamic(_invenCom, &UMyInvenComponent::DropItem);
	//}


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
	_attackEndedDelegate.Broadcast(); // 

}

void AMyCharacter::AttackHit()
{
	//UE_LOG(LogTemp, Warning, TEXT("Attack!!!!!!!!!"));
	//TODO : Attack 충돌처리 (조금 복잡함)
	FHitResult hitResult;
	FCollisionQueryParams params(NAME_None, false, this); //this 자기자신을 무시하라.. 내가 나한테 데미지들어올수있음..

	float attackRange = 500.0f;
	float attackRadius = 100.0f;
	FQuat quat = FQuat::Identity;

		bool bResult = GetWorld()->SweepSingleByChannel
		(
			hitResult,
			GetActorLocation(),
			GetActorLocation() + GetActorForwardVector() * attackRange,
			FQuat::Identity,
			ECollisionChannel::ECC_GameTraceChannel2,
			//FCollisionShape::MakeSphere(attackRadius),
			FCollisionShape::MakeCapsule(attackRadius, attackRange),

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
		
			//
			//// 플레이시 마우스커서 보일지말지..
			//if (GetController())
			//{
			//	Cast<AMyPlayerController>(GetController())->ShowUI();
			//}


			
		}

		// 어택데미지 로그 출력
		UE_LOG(LogTemp, Warning, TEXT("AttackDamage : %d"), _statCom->GetAttackDamge());
		//UE_LOG(LogTemp, Warning, TEXT("ME : %s AttackDamage : %d"), *GetName(), _attackDamage);

		//DrawDebugSphere(GetWorld(), center, attackRadius, 12, drawColor, false, 2.0f);	
		DrawDebugCapsule(GetWorld(), center, attackRange, attackRadius, quat, drawColor, false, 2.0f);
}
		

void AMyCharacter::AddAttackDamage(AActor* actor, int amount)
{
	// actor는 나의 공격력을 버프해준 대상

	_statCom->AddAttackDamage(amount);
}

void AMyCharacter::AddItemToCharacter(AMyItem* item)
{
	/*if (_invenCom)
	{*/
		_invenCom->AddItem(item);
		//item->Disable(); //잠깐 스탑
		UE_LOG(LogTemp, Log, TEXT("Added item: %s"), *item->GetName());

	/*}*/
}

void AMyCharacter::DropItemFromCharacter()
{
	_invenCom->DropItem();
	 
	
	
	////데미지감소시도
	//if (_invenCom)
	//{
	//	if (_invenCom->HasItems()) // 인벤토리에 아이템이 있는지 확인
	//	{
	//		_invenCom->DropItem();
	//		UE_LOG(LogTemp, Warning, TEXT("Attack Damage -50"));
	//		_statCom->SubAttackDamage(50); // 공격력 감소
	//	}
	//	else
	//	{
	//		UE_LOG(LogTemp, Error, TEXT("NO Have ITEM ~____________~"));
	//	}
	//}
}


void AMyCharacter::Init()
{
	_statCom->Reset();
	SetActorHiddenInGame(false);
	SetActorEnableCollision(true);
	PrimaryActorTick.bCanEverTick = true;

	if (_aiController && GetController() == nullptr) // 컨트롤러를 다시 입혀햐하기때문에 컨트롤러로 기억할수있도록... 재 빙의를 위해...
	{
		auto ai_Controller = Cast<AMyAIController>(_aiController);
		if(ai_Controller)
			ai_Controller->Possess(this);
	}
}


void AMyCharacter::Disable()
{
	SetActorHiddenInGame(true);
	SetActorEnableCollision(false);
	PrimaryActorTick.bCanEverTick = false;
	
	auto controller = GetController();
	if (controller)
		GetController()->UnPossess();; // 몬스터 죽으면 빙의 풀기
	UnPossessed();
}

