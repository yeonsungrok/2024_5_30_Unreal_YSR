// Fill out your copyright notice in the Description page of Project Settings.


#include "MyMonsterCharacter.h"
#include "Components/SkeletalMeshComponent.h"

#include "MyMonsterAnimInstance.h"


// Sets default values
AMyMonsterCharacter::AMyMonsterCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	static ConstructorHelpers::FObjectFinder<USkeletalMesh> Monster1(TEXT("/Script/Engine.SkeletalMesh'/Game/BookHeadMonster/Meshes/BookHeadMonster.BookHeadMonster'"));

	static ConstructorHelpers::FClassFinder<UAnimInstance> MonsterAnimBP(TEXT("/Script/Engine.AnimBlueprint'/Game/BluePrint/Animations/MyMonsterAnim_BP.MyMonsterAnim_BP_C'"));

	if (Monster1.Succeeded())
	{
		GetMesh()->SetSkeletalMesh(Monster1.Object);
	}
	GetMesh()->SetRelativeLocationAndRotation(FVector(0.0f, 0.0f, -88.0f), FRotator(0.0f, -90.0f, 0.0f));
	//스케일이 너무 작다..
	SetActorScale3D(FVector(1.2f, 1.2f, 1.2f));

	if (MonsterAnimBP.Succeeded())
	{
		GetMesh()->SetAnimInstanceClass(MonsterAnimBP.Class);
	}

}

// Called when the game starts or when spawned
void AMyMonsterCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMyMonsterCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AMyMonsterCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

FVector AMyMonsterCharacter::GetSkeletalMeshPivotLocation() const
{

	if (GetMesh())
	{
		return GetMesh()->GetComponentLocation() - FVector(0.f, 0.f, GetMesh()->Bounds.BoxExtent.Z);
	}
	return FVector::ZeroVector;

}

