/* Copyright (C) Terence-Lee 'Zinglish' Davis
 * Written by Terence-Lee 'Zinglish' Davis <zinglish[at]gmail.com>
 */

#pragma once

#include "GameFramework/Pawn.h"

#include "AFPSPlayer.generated.h"

class UAFPSPlayerMoveComponent;
class UAFPSPlayerCollisionComponent;
class UPrimitiveComponent;
class USoundCue;
class UBoxComponent;
class UArrowComponent;
class USceneComponent;
class UCameraComponent;


UCLASS(config = Game, BlueprintType, hideCategories = ("Pawn|AFPSCharacter|InternalEvents"), meta = (ShortTooltip = "Custom character specifically built for Q3 movement."))
class AAFPSPlayer : public APawn
{
	GENERATED_BODY()

public:
	AAFPSPlayer();

	/** Called when the character changes controller or gets a new one */
	virtual void PossessedBy(AController* NewController);

	/** Called when the controller sets up the input for the pawn */
	virtual void SetupPlayerInputComponent(class UInputComponent* InputComponent) override;

	/** Per frame tick */
	virtual void Tick(float Delta);

	/** Holds the controller that's possessing this character */
	AController* Controller;

public:
	/* Health of the player */
	UPROPERTY(Category = "General", EditAnywhere, BlueprintReadWrite)
	int32 Health = 100;

	/* Armour of the player */
	UPROPERTY(Category = "General", EditAnywhere, BlueprintReadWrite)
	int32 Armour = 0;

public:
	UPROPERTY(Category = "Sounds", EditAnywhere, BlueprintReadWrite)
	USoundCue* JumpSoundCue;

	UPROPERTY(Category = "Sounds", EditAnywhere, BlueprintReadWrite)
	USoundCue* HardLandingSoundCue;

	void PlayJumpSound();


public:
	/* Sets the position of the player */
	UFUNCTION(BlueprintCallable, Category = "AFPSCharacter")
	void SetPosition(FVector NewPosition);

	/* Gets the position of the player */
	UFUNCTION(BlueprintCallable, Category = "AFPSCharacter")
	FVector GetPosition();

	/* Sets the velocity of the player */
	UFUNCTION(BlueprintCallable, Category = "AFPSCharacter")
	void SetVelocity(FVector NewVelocity);

	/* Sets the velocity in relation to the player */
	UFUNCTION(BlueprintCallable, Category = "AFPSCharacter")
	void SetRelativeVelocity(FVector NewVelocity);

	/* Gets the velocity of the player */
	virtual FVector GetVelocity() const override; // Need override here because APawn has this function as well

	/* Sets the player's viewing angles */
	UFUNCTION(BlueprintCallable, Category = "AFPSCharacter")
	void SetRotation(FQuat NewRotation);

	/* Gets the player's viewing angles */
	UFUNCTION(BlueprintCallable, Category = "AFPSCharacter")
	FRotator GetRotation();

	/* Get the player's linear speed */
	UFUNCTION(BlueprintCallable, Category = "AFPSCharacter")
	float GetGroundSpeed();

	/* Commit to a jump */
	UFUNCTION(BlueprintCallable, Category = "AFPSCharacter|CharacterMovement")
	virtual void DoJump();

	UFUNCTION(BlueprintCallable, Category = "AFPSCharacter|CharacterMovement")
	virtual void StopJump();

public:
	/* The local normalized forward vector of the player's facing angle */
	UPROPERTY(Category = Transform, VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	FVector ForwardVector;

	/* The local normalized right vector of the player's facing angle */
	UPROPERTY(Category = Transform, VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	FVector RightVector;

	/* X is forward [W] and back [S] (1.0 to -1.0) and Y is right [D] and left [A] (1.0 to - 1.0) */
	UPROPERTY(Category = Input, VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	FVector2D MovementInput;

	UPROPERTY(Category = Input, VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	bool JumpInput;

	/* Stores relational (to last frame) mouse position */
	FVector2D MouseVelocity;

public:
	/** The BoxComponent being used for movement collision. Always treated as being vertically aligned in simple collision check functions */
	UPROPERTY(Category = Character, VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	UBoxComponent* Collider;
	
	/** Character's movement component */
	UPROPERTY(Category = Character, VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	UAFPSPlayerMoveComponent* MovementComponent;

	UPROPERTY(Category = Character, VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	UAFPSPlayerCollisionComponent* CollisionComponent;

	USceneComponent* PlayerForwardRefComponent;

	/** Helper object to see which direction is forward */
#if WITH_EDITORONLY_DATA
	UPROPERTY()
	UArrowComponent* ArrowComponent;
#endif

	/** First person camera */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	UCameraComponent* FirstPersonCameraComponent;

public:
	/** Takes mouse input and converts it into camera rotational movements */
	void UpdateViewingAngles();

	/** Handles moving forward/backward */
	void MoveForward(float Value);

	/** Handles strafing movement, left and right */
	void MoveRight(float Value);

	/** Mouse movement input callbacks */
	void MouseX(float Value);
	void MouseY(float Value);

	/* Scroll wheel input callback */
	void ScrollUp();
	void ScrollDown();

	/**
	 * Gets and immediately consumes the movement input where 
	 * X is forward [W] and back [S] (1.0 to -1.0) and Y is right [D] and left [A] (1.0 to - 1.0)
	 */
	FVector2D ConsumeMovementInput();

	/** Gets and immediately consumes mouse input */
	FVector2D ConsumeMouseInput();
	
};
