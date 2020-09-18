// Fill out your copyright notice in the Description page of Project Settings.


#include "FPCharacter.h"

// Sets default values
AFPCharacter::AFPCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	AutoPossessPlayer = EAutoReceiveInput::Player0;

	bUseControllerRotationYaw = false;

	cam = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));

	cam->AttachTo(RootComponent);
	cam->SetRelativeLocation(FVector(0, 0, 40));

	jumping = false;
}

// Called when the game starts or when spawned
void AFPCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AFPCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (jumping)
	{
		Jump();
	}

}

// Called to bind functionality to input
void AFPCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAxis("MoveForward", this, &AFPCharacter::VertMove);
	PlayerInputComponent->BindAxis("MoveRight", this, &AFPCharacter::HoriMove);

	PlayerInputComponent->BindAxis("Turn", this, &AFPCharacter::HoriRot);
	PlayerInputComponent->BindAxis("LookUp", this, &AFPCharacter::VertRot);

	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &AFPCharacter::CheckJump);
	PlayerInputComponent->BindAction("Jump", IE_Released, this, &AFPCharacter::CheckJump);

}

void AFPCharacter::HoriMove(float value)
{
	if (value)
	{
		AddMovementInput(GetActorRightVector(), value);
	}
}

void AFPCharacter::VertMove(float value)
{
	if (value)
	{
		AddMovementInput(GetActorForwardVector(), value);
	}
}

void AFPCharacter::HoriRot(float value)
{
	if (value)
	{
		AddActorLocalRotation(FRotator(0, value, 0));
	}
}

void AFPCharacter::VertRot(float value)
{
	if (value)
	{
		float temp = cam->GetRelativeRotation().Pitch - value;
		if (temp < 65 && temp > -65)
		{
			cam->AddLocalRotation(FRotator(-value, 0, 0));
		}
	}
}

void AFPCharacter::CheckJump()
{
	if (jumping)
	{
		jumping = false;
	}
	else
	{
		jumping = true;
	}
}


