/* Copyright (C) Terence-Lee 'Zinglish' Davis
 * Written by Terence-Lee 'Zinglish' Davis <zinglish[at]gmail.com>
 */

#pragma once

#include "GameFramework/PawnMovementComponent.h"
#include "AFPSPlayerMoveComponent.generated.h"

class AAFPSPlayer;
class UAFPSPlayerCollisionComponent;

UENUM(BlueprintType)
enum class EMovementType : uint8
{
	Fly,
	Spectate,
	Normal
};



UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class UAFPSPlayerMoveComponent : public UPawnMovementComponent
{
	GENERATED_BODY()

public:
	UAFPSPlayerMoveComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());

	/** Character this belongs to */
	AAFPSPlayer* Player;

	/** Collision component */
	UAFPSPlayerCollisionComponent* CollisionComponent;

	virtual void BeginPlay() override;
	virtual void TickComponent(float DeltaTime, enum ELevelTick TickType, FActorComponentTickFunction *ThisTickFunction) override;

public:
	float Delta;

	FVector2D WishMove;
	bool WishJump;

	FVector PlayerVelocity;
	bool IsGrounded;

	FVector Origin = FVector::ZeroVector;

	FVector GroundVelocity = FVector::ZeroVector;
	float GroundSpeed = 0.f;

	EMovementType MovementType = EMovementType::Normal;

public:
	/** Custom gravity scale. Gravity is multiplied by this amount for the character */
	UPROPERTY(Category = "General Movement", EditAnywhere, BlueprintReadWrite)
	float Gravity = 512.f;

	/** Amount of jumping force the player has, does not represent absolute jump height */
	UPROPERTY(Category = "General Movement", EditAnywhere, BlueprintReadWrite)
	float JumpForce = 256.f;

	/** Ground friction */
	UPROPERTY(Category = "General Movement", EditAnywhere, BlueprintReadWrite)
	float Friction = 60.f;

	

	/** The rate at which the player stops when on the ground */
	UPROPERTY(Category = "Ground Movement", EditAnywhere, BlueprintReadWrite)
	float GroundStopSpeed = 150.f;

	/** The maximum speed the player can travel while on the ground */
	UPROPERTY(Category = "Ground Movement", EditAnywhere, BlueprintReadWrite)
	float GroundMaxSpeed = 800.f;

	/** The rate at which the player gains speed while on the ground */
	UPROPERTY(Category = "Ground Movement", EditAnywhere, BlueprintReadWrite)
	float GroundAcceleration = 150.0f;

	/** The rate at which the player loses speed while on the ground */
	UPROPERTY(Category = "Ground Movement", EditAnywhere, BlueprintReadWrite)
	float GroundDampening = 8.f;



	/** The maximum speed the player can achieve while not strafe jumping */
	UPROPERTY(Category = "Air Movement", EditAnywhere, BlueprintReadWrite)
	float AirMaxSpeed = 70.f;

	/**  */
	UPROPERTY(Category = "Air Movement", EditAnywhere, BlueprintReadWrite)
	float AirStopAccelerate = 25.f;

	/** The maximum speed the player can achieve when strafing, but not actually strafe jumping */
	UPROPERTY(Category = "Air Movement", EditAnywhere, BlueprintReadWrite)
	float AirStrafeSpeed = 400.f;

	/** The rate at which the player gains speed to achieve Air Strafe Speed */
	UPROPERTY(Category = "Air Movement", EditAnywhere, BlueprintReadWrite)
	float AirStrafeAcceleration = 100.f;

	/** The amount of air control the player has */
	UPROPERTY(Category = "Air Movement", EditAnywhere, BlueprintReadWrite)
	float CPMAirControl = 20.f;


	
	/* Friction for spectator modes */
	UPROPERTY(Category = "General Movement", EditAnywhere, BlueprintReadWrite)
	float SpectatorFriction = 6.f;

	UPROPERTY(Category = "General Movement", EditAnywhere, BlueprintReadWrite)
	float SpectatorAccelerate = 10.f;

	UPROPERTY(Category = "General Movement", EditAnywhere, BlueprintReadWrite)
	float SpectatorStopSpeed = 100.f;

public:
	void PlayerMoveSingle();
	void GroundMove();
	void ApplyFriction();
	void AirMove();
	bool CheckJump();
	void QueueJump();

	void FlyMove();

	void ApplyAcceleration(FVector WishDirection, float WishSpeed, float DynamicAcceleration);
	void AirControl(FVector WishDirection, float WishSpeed);

	void ApplyGravity();

	float CmdScale();
	void ClipVelocity(FVector In, FVector Normal, FVector& Out, float Overbounce);
	

public:
	void SetOrigin(FVector Position);
	FVector GetOrigin();
};

