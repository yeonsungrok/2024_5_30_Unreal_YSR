// Fill out your copyright notice in the Description page of Project Settings.


#include "MyCharacter.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "InputActionValue.h"

#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "MyAnimInstance.h"

// Sets default values
AMyCharacter::AMyCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// skeletal Mesh
	static ConstructorHelpers::FObjectFinder<USkeletalMesh> sm
	(TEXT("/Script/Engine.SkeletalMesh'/Game/ParagonShinbi/Characters/Heroes/Shinbi/Meshes/Shinbi.Shinbi'"));

	if (sm.Succeeded())
	{
		GetMesh()->SetSkeletalMesh(sm.Object);
	}

	GetMesh()->SetRelativeLocationAndRotation(FVector(0.0f, 0.0f, -88.0f), FRotator(0.0f, -90.0f, 0.0f));
	
	_springArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArm"));
	_camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));

	// 상속관계
	_springArm->SetupAttachment(GetCapsuleComponent());
	_camera->SetupAttachment(_springArm);

	_springArm->TargetArmLength = 500.0f;
	_springArm->SetRelativeRotation(FRotator(-35.0f, 0.0f, 0.0f));
}
// Called when the game starts or when spawned
void AMyCharacter::BeginPlay()
{
	Super::BeginPlay();
	
	auto animInstance = Cast<UMyAnimInstance>(GetMesh()->GetAnimInstance());
	// 몽타주가 끝날때 _isAttack 을 false로 만들경우
	animInstance->OnMontageEnded.AddDynamic(this, &AMyCharacter::OnAttackEnded);

}

// Called every frame
void AMyCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	// 클라스간의 결합도. //HP : 50, MP : 30
	//_myDelegate1.ExecuteIfBound();
	
	//_myDelegate3.ExecuteIfBound(50, 30);
	
	//클래스 객체로 직접 함수호출 : auto myAnimal = GetMesh()->GetAnimInstance();
	
	// 단점 = 클래스간의 결합도.. 높아진다..
	


}

// Called to bind functionality to input
void AMyCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	if (UEnhancedInputComponent* EnhancedInputComponent = Cast<UEnhancedInputComponent>(PlayerInputComponent))
	{

		// 이것도 키입력의 델리게이트임..바인드되는..

		// Moving
		EnhancedInputComponent->BindAction(_moveAction, ETriggerEvent::Triggered, this, &AMyCharacter::Move);

		// Looking
		EnhancedInputComponent->BindAction(_lookAction, ETriggerEvent::Triggered, this, &AMyCharacter::Look);
		// JumpA
		EnhancedInputComponent->BindAction(_jumpAction, ETriggerEvent::Started, this, &AMyCharacter::JumpA);

		// Attack
		EnhancedInputComponent->BindAction(_attackAction, ETriggerEvent::Started, this, &AMyCharacter::Attack);
	}
}

void AMyCharacter::OnAttackEnded(UAnimMontage* Montage, bool bInterrupted)
{
	UE_LOG(LogTemp, Error, TEXT("Attack End!!!"));
	_isAttacking = false;
}

void AMyCharacter::Move(const FInputActionValue& value)
{
	FVector2D MovementVector = value.Get<FVector2D>();

	if (Controller != nullptr)
	{
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
		UE_LOG(LogTemp, Warning, TEXT("Jump!!"));
		ACharacter::Jump();
	}
}

void AMyCharacter::Attack(const FInputActionValue& value)
{
	//UE_LOG(LogTemp, Warning, TEXT("Attack pressed"));

		//if (!_isAttacking)
		//{
		//	StartAttack();
		//
		//	//공격추가
		//	GetWorld()->GetTimerManager().SetTimer
		//	(TimerHandle_Attack, this, &AMyCharacter::StopAttack, 1.0f, false);
		//}
	
	bool isPressed = value.Get<bool>();
	if (isPressed && _isAttacking == false)
	{
		auto myAnimI = GetMesh()->GetAnimInstance();
		Cast<UMyAnimInstance>(myAnimI)->PlayAttackMontage();
		_isAttacking = true;
	}

}



