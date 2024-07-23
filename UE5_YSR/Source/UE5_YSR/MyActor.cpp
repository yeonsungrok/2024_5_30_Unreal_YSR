// Fill out your copyright notice in the Description page of Project Settings.


#include "MyActor.h"
#include "Kismet/KismetMathLibrary.h"
#include "Components/StaticMeshComponent.h"

// Sets default values
AMyActor::AMyActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;


	_sm = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	RootComponent = _sm;

	static ConstructorHelpers::FObjectFinder<UStaticMesh> mesh(TEXT("/ Script / Engine.StaticMesh'/Game/StarterContent/Props/SM_Chair.SM_Chair'"));
	if (mesh.Succeeded())
	{
		_sm->SetStaticMesh(mesh.Object);
	}

	UE_LOG(LogTemp, Warning, TEXT("Constructor"));

}

// Called when the game starts or when spawned
void AMyActor::BeginPlay()
{
	Super::BeginPlay();
	UE_LOG(LogTemp, Error, TEXT("BeginPlay"));
	
}

// Called every frame
void AMyActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	//UE_LOG(LogTemp, Log, TEXT("Tick : %f"), DeltaTime);
	
	

	if (GetAttachParentActor() != nullptr)
	{
		FVector parentV = GetAttachParentActor()->GetActorLocation();
		FVector myV = GetActorLocation();
		FRotator rot = UKismetMathLibrary::FindLookAtRotation(myV, parentV);

		SetActorRotation(rot);
	}
	else
	{
		FRotator rot = FRotator(0.0f, 90.0f, 0.0f);
		AddActorLocalRotation(rot * _rotationSpeed * DeltaTime);

		FVector moveV = FVector(0.0f, _moveSpeed, 0.0f);
		FVector curLocation = GetActorLocation() + moveV; // 액터의 현재위치값
		SetActorLocation(curLocation); // 이 내용은 액터의 회전과 관계없이 월드 좌표계 특정방향으로 이동
	}

	/*FVector tempV = GetActorLocation();
	UE_LOG(LogTemp, Log, TEXT("Vector : %f,%f,%f"), tempV.X, tempV.Y, tempV.Z);*/


	//1. Actor 2가 공전할때 Actor를 바라보며 공전
	// Actor는 그대로
					
	//2. SetActorLocation()
	// 문제점?
	// 아니면 SetActorLocation을 통해서 현재 위치값을 더하여 새로운 위치를 설정.
	
	// 기존내용
	// AddActorLocalOffset(moveV * DeltaTime);
	// 문제점 : Actor의 Local에 대한 vector값의 영향을 받으므로 WorldOffset을 사용하여 world의 기준을 사용해야함.
	
	//3. Quaternion (사원수)
	// 사원수 회전에 대해서 조사해보기
}

