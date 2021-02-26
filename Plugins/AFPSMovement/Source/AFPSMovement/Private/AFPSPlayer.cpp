/*
 * AFPS Player
 *
 * Updated for UE 4.26 and made into a plugin by Alex Kyron
 * Copyright (C) Alexander Kyron 2020 <alex@alexkyron.xyz>
 *
 * Originally forked from DeFragr:
 * Copyright (C) Terence-Lee 'Zinglish' Davis
 * Written by Terence-Lee 'Zinglish' Davis <zinglish[at]gmail.com>
 */

#include "AFPSPlayer.h"
#include "AFPSPlayerMoveComponent.h"
#include "AFPSPlayerCollisionComponent.h"

#include "Engine.h"
#include "Components/ArrowComponent.h"
#include "Components/BoxComponent.h"


AAFPSPlayer::AAFPSPlayer()
{
	// Structure to hold one-time initialization
	struct FConstructorStatics
	{
		FName ID_Characters;
		FText NAME_Characters;
		FConstructorStatics()
			: ID_Characters(TEXT("Characters"))
			, NAME_Characters(NSLOCTEXT("SpriteCategory", "Characters", "Characters"))
		{
		}
	};
	static FConstructorStatics ConstructorStatics;

	// Create the player collision
	Collider = CreateDefaultSubobject<UBoxComponent>(TEXT("Player Collision"));
	Collider->InitBoxExtent(FVector(30.f, 30.f, 56.f));

	// Add physical reference to the player's forward vector
	PlayerForwardRefComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Player Forward"));
	if(PlayerForwardRefComponent)
		PlayerForwardRefComponent->SetupAttachment(Collider);

	// Add a helper
#if WITH_EDITORONLY_DATA
	ArrowComponent = CreateEditorOnlyDefaultSubobject<UArrowComponent>(TEXT("Arrow"));
	if(ArrowComponent)
	{
		ArrowComponent->ArrowColor = FColor(150, 200, 255);
		ArrowComponent->bTreatAsASprite = true;
		ArrowComponent->SpriteInfo.Category = ConstructorStatics.ID_Characters;
		ArrowComponent->SpriteInfo.DisplayName = ConstructorStatics.NAME_Characters;
		ArrowComponent->SetupAttachment(PlayerForwardRefComponent);
		ArrowComponent->bIsScreenSizeScaled = true;
	}
#endif

	// Initialize the camera
	FirstPersonCameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("First Person Camera"));
	FirstPersonCameraComponent->SetupAttachment(PlayerForwardRefComponent);
	FirstPersonCameraComponent->SetRelativeLocation(FVector(0.f, 0.f, 56.f - 4.f));

	// Add the character collision and movement component
	CollisionComponent = CreateDefaultSubobject<UAFPSPlayerCollisionComponent>(TEXT("AFPS Character Collision"));
	MovementComponent = CreateDefaultSubobject<UAFPSPlayerMoveComponent>(TEXT("AFPS Character Movement"));

	if(CollisionComponent)
	{
		CollisionComponent->Player = this;
		CollisionComponent->MovementComponent = MovementComponent;
	}

	// Throw down the character movement
	if(MovementComponent)
	{
		MovementComponent->UpdatedComponent = Collider;

		MovementComponent->CollisionComponent = CollisionComponent;
		MovementComponent->Player = this;
	}

}

void AAFPSPlayer::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	check(PlayerInputComponent);

	// Set up movement
	PlayerInputComponent->BindAxis("MoveForward", this, &AAFPSPlayer::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &AAFPSPlayer::MoveRight);

	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &AAFPSPlayer::DoJump);
	PlayerInputComponent->BindAction("Jump", IE_Released, this, &AAFPSPlayer::StopJump);

	// Set up mouse inputs
	PlayerInputComponent->BindAxis("Turn", this, &AAFPSPlayer::MouseX);
	PlayerInputComponent->BindAxis("LookUp", this, &AAFPSPlayer::MouseY);

}

void AAFPSPlayer::Tick(float DeltaTime)
{
	// Handles the input from mouse to control the camera
	UpdateViewingAngles();

	// After we decide where the player is facing, we get the forward vector
	// of the player for easy access.
	ForwardVector = PlayerForwardRefComponent->GetForwardVector();
	RightVector   = PlayerForwardRefComponent->GetRightVector();

	if(Health <= 0)
	{
		Health = 0;
	}
}


void AAFPSPlayer::UpdateViewingAngles()
{
	// Pitch camera up and down
	if (FirstPersonCameraComponent)
	{
		FVector v(0.f, -MouseVelocity.Y, 0.f);
		FirstPersonCameraComponent->AddLocalRotation(FQuat::MakeFromEuler(v));
	}

	// Rotate the reference point component
	if (PlayerForwardRefComponent)
	{
		FVector v(0.f, 0.f, MouseVelocity.X);
		PlayerForwardRefComponent->AddWorldRotation(FQuat::MakeFromEuler(v));
	}
}

void AAFPSPlayer::PossessedBy(AController* NewController)
{
	// Assign the new controller
	Controller = NewController;
}


void AAFPSPlayer::PlayJumpSound()
{
	UGameplayStatics::PlaySoundAtLocation(this, JumpSoundCue, GetTransform().GetLocation());
}


void AAFPSPlayer::SetPosition(FVector NewPosition)
{
	MovementComponent->Origin = NewPosition;
}

FVector AAFPSPlayer::GetPosition()
{
	return MovementComponent->GetOrigin();
}

void AAFPSPlayer::SetVelocity(FVector NewVelocity)
{
	MovementComponent->PlayerVelocity = NewVelocity;
}

void AAFPSPlayer::SetRelativeVelocity(FVector NewVelocity)
{
	MovementComponent->PlayerVelocity = PlayerForwardRefComponent->GetRelativeTransform().TransformVector(NewVelocity);
}

FVector AAFPSPlayer::GetVelocity() const
{
	return this->MovementComponent->PlayerVelocity;
}

void AAFPSPlayer::SetRotation(FQuat NewRotation)
{
	// We only need the pitch of the camera since
	// the camera is attached to the player's body
	// and the body does the Z rotation
	FRotator NewCameraRotation(NewRotation);
	NewCameraRotation.Roll = 0.f;
	NewCameraRotation.Yaw  = 0.f;
	FirstPersonCameraComponent->SetRelativeRotation(NewCameraRotation);


	// Squash the roll and pitch of the rotation for the Z
	// rotation of the actual player.
	FRotator NewPlayerRotation(NewRotation);
	NewPlayerRotation.Roll  = 0.f;
	NewPlayerRotation.Pitch = 0.f;
	PlayerForwardRefComponent->SetWorldRotation(NewPlayerRotation);
}

FRotator AAFPSPlayer::GetRotation()
{
	// Since the perceived rotation of the player is actually
	// split between the camera and a helper, we have to
	// combine them.
	return FirstPersonCameraComponent->GetComponentRotation();
}

float AAFPSPlayer::GetGroundSpeed()
{
	return MovementComponent->GroundSpeed;
}

void AAFPSPlayer::DoJump()
{
	JumpInput = true;
}

void AAFPSPlayer::StopJump()
{
	JumpInput = false;
}

void AAFPSPlayer::MoveForward(float Value)
{
	if (Value != 0.0f)
		MovementInput.X = Value;
}

void AAFPSPlayer::MoveRight(float Value)
{
	if (Value != 0.0f)
		MovementInput.Y = Value;
}

void AAFPSPlayer::MouseX(float Value)
{
	MouseVelocity.X = Value;
}

void AAFPSPlayer::MouseY(float Value)
{
	MouseVelocity.Y = Value;
}



FVector2D AAFPSPlayer::ConsumeMovementInput()
{
	FVector2D LastWishMove = MovementInput;
	MovementInput = FVector2D::ZeroVector;

	return LastWishMove;
}

FVector2D AAFPSPlayer::ConsumeMouseInput()
{
	FVector2D LastRelationalMousePos = MouseVelocity;
	MouseVelocity = FVector2D::ZeroVector;

	return MouseVelocity;
}