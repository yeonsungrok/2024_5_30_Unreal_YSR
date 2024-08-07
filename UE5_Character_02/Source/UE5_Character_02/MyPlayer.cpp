// Fill out your copyright notice in the Description page of Project Settings.


#include "MyPlayer.h"

#include "GameFramework/SpringArmComponent.h"

// TPS
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"

// Input
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "InputActionValue.h"

// animation
#include "MyAnimInstance.h"

AMyPlayer::AMyPlayer()
{

	_springArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArm"));
	_camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));

	// 상속관계
	_springArm->SetupAttachment(GetCapsuleComponent());
	_camera->SetupAttachment(_springArm);

	_springArm->TargetArmLength = 550.0f;
	_springArm->SetRelativeRotation(FRotator(-30.0f, 0.0f, 0.0f));

	// 사이즈
	SetActorScale3D(FVector(1.2f, 1.2f, 1.2f));

}

void AMyPlayer::BeginPlay()
{
	Super::BeginPlay();


}

void AMyPlayer::PostInitializeComponents()
{
	Super::PostInitializeComponents();
}

void AMyPlayer::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AMyPlayer::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	if (UEnhancedInputComponent* EnhancedInputComponent = Cast<UEnhancedInputComponent>(PlayerInputComponent))
	{
		// Moving
		EnhancedInputComponent->BindAction(_moveAction, ETriggerEvent::Triggered, this, &AMyPlayer::Move);

		// Looking
		EnhancedInputComponent->BindAction(_lookAction, ETriggerEvent::Triggered, this, &AMyPlayer::Look);

		// JumpA
		EnhancedInputComponent->BindAction(_jumpAction, ETriggerEvent::Started, this, &AMyPlayer::JumpA);

		// 공격
		EnhancedInputComponent->BindAction(_attackAction, ETriggerEvent::Started, this, &AMyPlayer::AttackA);

		// G키 드랍
		EnhancedInputComponent->BindAction(_dropAction, ETriggerEvent::Started, this, &AMyPlayer::DropItemFromCharacter);
	}
}

void AMyPlayer::Move(const FInputActionValue& value)
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

void AMyPlayer::Look(const FInputActionValue& value)
{
	FVector2D LookAxisVector = value.Get<FVector2D>();
	if (Controller != nullptr)
	{
		AddControllerYawInput(LookAxisVector.X);
	}
}

void AMyPlayer::JumpA(const FInputActionValue& value)
{
	bool isPressed = value.Get<bool>();

	if (isPressed)
	{
		////테스트 로그 출력
		//UE_LOG(LogTemp, Warning, TEXT("Jump!!"));

		ACharacter::Jump();
	}
}

void AMyPlayer::AttackA(const FInputActionValue& value)
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
