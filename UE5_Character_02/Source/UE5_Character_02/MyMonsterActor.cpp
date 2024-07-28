// Fill out your copyright notice in the Description page of Project Settings.


#include "MyMonsterActor.h"
#include "Components/ChildActorComponent.h"


// Sets default values
AMyMonsterActor::AMyMonsterActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	ChildActorComponent = CreateDefaultSubobject<UChildActorComponent>(TEXT("ChildActorComponent"));
	ChildActorComponent->SetupAttachment(RootComponent);

	ChildActorComponent->SetChildActorClass(AMyMonsterCharacter::StaticClass());
}

// Called when the game starts or when spawned
void AMyMonsterActor::BeginPlay()
{
	Super::BeginPlay();


    // 몬스터 액터로 child(MyMonsterCharacter)의 pivot을 가져오기
 	
    if (ChildActorComponent && ChildActorComponent->GetChildActor())
    {
        AMyMonsterCharacter* MonsterCharacter = Cast<AMyMonsterCharacter>(ChildActorComponent->GetChildActor());
        if (MonsterCharacter)
        {
            FVector CharacterPivotLocation = MonsterCharacter->GetSkeletalMeshPivotLocation();
            SetActorLocation(CharacterPivotLocation);


            MonsterCharacter->SetActorScale3D(FVector(1.2f, 1.2f, 1.2f));
        }
    }


}

// Called every frame
void AMyMonsterActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

