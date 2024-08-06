// Fill out your copyright notice in the Description page of Project Settings.


#include "MyItem.h"
#include "Components/StaticMeshComponent.h" // 메시 컴포넌트때매함..
#include "Components/SphereComponent.h"
#include "MyCharacter.h"
// Sets default values
AMyItem::AMyItem()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false; // 계속 없데이트 시간이 걸리므로 false..
	static ConstructorHelpers::FObjectFinder<UStaticMesh> sm
	(TEXT("/Script/Engine.StaticMesh'/Game/Weapon_Pack/Mesh/Weapons/Weapons_Kit/SM_Axe.SM_Axe'"));

	_meshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	_trigger = CreateDefaultSubobject<USphereComponent>(TEXT("Trigger"));

	if (sm.Succeeded())
	{
		_meshComponent->SetStaticMesh(sm.Object);

		//사이즈 키우기
		//_meshComponent->SetWorldScale3D(FVector(2.0f, 2.0f, 2.0f));
		
	}

	_meshComponent->SetupAttachment(RootComponent);
	_trigger->SetupAttachment(_meshComponent);


	_meshComponent->SetCollisionProfileName(TEXT("MyItem"));  // 콜리전도 바꾸기위함
	_trigger->SetCollisionProfileName(TEXT("MyItem"));
	_trigger->SetSphereRadius(60.0f);


}

// Called when the game starts or when spawned
void AMyItem::BeginPlay()
{
	Super::BeginPlay();
	Init();
}

void AMyItem::PostInitializeComponents()
{
	Super::PostInitializeComponents();

	_trigger->OnComponentBeginOverlap.AddDynamic(this, &AMyItem::OnMyCharacterOverlap);
}

void AMyItem::OnMyCharacterOverlap(UPrimitiveComponent* OverlappedComponent, AActor* otherActor, UPrimitiveComponent* otherComp, int32 otherBodyIndex, bool BFromWeep, const FHitResult& SweepResult)
{
	auto myCharacter = Cast<AMyCharacter>(otherActor);
	if (myCharacter)
	{
		UE_LOG(LogTemp, Log, TEXT(" % s Collision"), *myCharacter->GetName());
		// myCharacter 클래스의 객체가 충돌했다.

		// 아이템 충돌시 데미지상승
		myCharacter->AddAttackDamage(this, 50);
		UE_LOG(LogTemp, Warning, TEXT("Attack Damage +50"));
		

		myCharacter->AddItemToCharacter(this);

		// 아이템 충돌시 아이템 히든
		Disable();

	}
}

void AMyItem::Init()
{
	SetActorHiddenInGame(false);
	SetActorEnableCollision(true);
}

void AMyItem::Disable()
{
	SetActorHiddenInGame(true);
	SetActorEnableCollision(false);
}

// Called every frame
void AMyItem::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AMyItem::SetItemPos(FVector pos, FRotator rot)
{
	Init();
	SetActorLocation(pos);
	SetActorRotation(rot);

}

