// Fill out your copyright notice in the Description page of Project Settings.


#include "NoWayOut/Player/InputCharacter.h"
#include <EnhancedInputSubsystems.h>
#include <InputMappingContext.h>
#include <EnhancedInputComponent.h>
#include <Camera/CameraComponent.h>
#include <GameFramework/SpringArmComponent.h>
#include <GameFramework/CharacterMovementComponent.h>
#include "Components/CapsuleComponent.h"
#include "Components/ArrowComponent.h"
#include "NoWayOut/Player/NWO_Projectile.h"

// Sets default values
AInputCharacter::AInputCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// Set size for collision capsule
	GetCapsuleComponent()->InitCapsuleSize(42.f, 96.0f);

	// Don't rotate when the controller rotates. Let that just affect the camera.
	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = false;
	bUseControllerRotationRoll = false;

	// Configure character movement
	GetCharacterMovement()->bOrientRotationToMovement = true; // Character moves in the direction of input...	
	GetCharacterMovement()->RotationRate = FRotator(0.0f, 500.0f, 0.0f); // ...at this rotation rate

	// Note: For faster iteration times these variables, and many more, can be tweaked in the Character Blueprint
	// instead of recompiling to adjust them
	GetCharacterMovement()->JumpZVelocity = 700.f;
	GetCharacterMovement()->AirControl = 0.35f;
	GetCharacterMovement()->MaxWalkSpeed = 500.f;
	GetCharacterMovement()->MinAnalogWalkSpeed = 20.f;
	GetCharacterMovement()->BrakingDecelerationWalking = 2000.f;
	GetCharacterMovement()->BrakingDecelerationFalling = 1500.0f;

	m_springArm = CreateDefaultSubobject<USpringArmComponent>("Spring Arm");
	m_springArm->SetupAttachment(RootComponent);
	m_springArm->TargetArmLength = 400.0f; // The camera follows at this distance behind the character	
	m_springArm->bUsePawnControlRotation = true;

	m_camera = CreateDefaultSubobject<UCameraComponent>("Camera");
	m_camera->SetupAttachment(m_springArm, USpringArmComponent::SocketName); // Attach the camera to the end of the boom and let the boom adjust to match the controller orientation
	m_camera->bUsePawnControlRotation = false; // Camera does not rotate relative to arm

	m_projectileSpawn = CreateDefaultSubobject<UArrowComponent>("Muzzle Location");
}

// Called when the game starts or when spawned
void AInputCharacter::BeginPlay()
{
	Super::BeginPlay();

	//Add Input Mapping Context
	if (APlayerController* PlayerController = Cast<APlayerController>(Controller))
	{
		if (UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(PlayerController->GetLocalPlayer()))
		{
			Subsystem->AddMappingContext(m_inputMapping, 0);
		}
	}
}

// Called every frame
void AInputCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AInputCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	if (UEnhancedInputComponent* input = CastChecked<UEnhancedInputComponent>(PlayerInputComponent))
	{
		input->BindAction(m_moveAction, ETriggerEvent::Triggered, this, &AInputCharacter::Move);
		input->BindAction(m_jumpAction, ETriggerEvent::Triggered, this, &ACharacter::Jump);
		input->BindAction(m_shootAction, ETriggerEvent::Triggered, this, &AInputCharacter::Shoot);
	}
}

void AInputCharacter::Move(const FInputActionValue& inputValue)
{
	FVector2D inputVector = inputValue.Get<FVector2D>();

	if (IsValid(Controller))
	{
		// Get forward direction
		const FRotator rotation = Controller->GetControlRotation();
		const FRotator yawRotation(0, rotation.Yaw, 0);

		const FVector forwardDirection = FRotationMatrix(yawRotation).GetUnitAxis(EAxis::X);
		const FVector rightDirection = FRotationMatrix(yawRotation).GetUnitAxis(EAxis::Y);

		// Add movement input
		AddMovementInput(forwardDirection, inputVector.Y);
		AddMovementInput(rightDirection, inputVector.X);
	}
}

void AInputCharacter::Look(const FInputActionValue& inputValue)
{
	FVector2D inputVector = inputValue.Get<FVector2D>();

	if (IsValid(Controller))
	{
		AddControllerYawInput(inputVector.X);
		AddControllerPitchInput(inputVector.Y);
	}
}

void AInputCharacter::Shoot()
{
	GEngine->AddOnScreenDebugMessage(-1, 2.f, FColor::Blue, "SHOOT!");

	// Attempt to fire a projectile.
	if (ProjectileClass)
	{
		// Get the camera transform.
		FRotator playerRotation = GetActorRotation();
		FVector forwardDirecton = playerRotation.Vector();

		// Set MuzzleOffset to spawn projectiles slightly in front of the camera.
		MuzzleOffset.Set(30.0f, 30.0f, 100.0f);

		// Transform MuzzleOffset from camera space to world space.
		FVector MuzzleLocation = GetActorLocation() + MuzzleOffset;

		UWorld* World = GetWorld();
		if (World)
		{
			FActorSpawnParameters SpawnParams;
			SpawnParams.Owner = this;
			SpawnParams.Instigator = GetInstigator();

			// Spawn the projectile at the muzzle.
			ANWO_Projectile* Projectile = World->SpawnActor<ANWO_Projectile>(ProjectileClass, MuzzleLocation, playerRotation, SpawnParams);
			if (Projectile)
			{
				// Set the projectile's initial trajectory.
				FVector LaunchDirection = forwardDirecton;
				Projectile->FireInDirection(LaunchDirection);
			}
		}
	}
}
