// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "InputAction.h"
#include "MyCharacter.generated.h"

class UCameraComponent;
class USpringArmComponent;

UCLASS()
class UNREALPROJECT_API AMyCharacter : public ACharacter
{
	GENERATED_BODY()

	// MappingContext
	UPROPERTY(EditDefaultsOnly, Category == "Input")
	TObjectPtr<UInputMappingContext> DefaultInputMapping;

	//Move Input Action
	UPROPERTY(EditDefaultsOnly, Category == "Input")
	TObjectPtr<UInputAction> Input_Move;

	//Look Input Action
	UPROPERTY(EditDefaultsOnly, Category == "Input")
	TObjectPtr<UInputAction> Input_LookMouse;

	//Jump Input Action
	UPROPERTY(EditDefaultsOnly, Category == "Input")
	TObjectPtr<UInputAction> Input_Jump;

	//Attack Input Action
	UPROPERTY(EditDefaultsOnly, Category == "Input")
	TObjectPtr<UInputAction> Input_PrimaryAttack;

	//Camera boom positioning the camera behind the character
	UPROPERTY(VisibleAnywhere, Category = "Camera")
	USpringArmComponent* CameraComp;

	//Follow camera
	UPROPERTY(VisibleAnywhere, Category = "Camera")
	UCameraComponent* CameraComp;


protected:
	
	UPROPERTY(EditAnywhere)
	TSubclassOf<AActor> ProjectileClass;

public:
	// Sets default values for this character's properties
	AMyCharacter();

protected:

	//Called for movement input
	void Move(const FInputActionInstance& Instance);

	//Called for looking input
	void LookMouse(const FInputActionValue& InputValue);

	//Called for attack input
	void PrimaryAttack();
	//Jump
	void CheckJump();

protected:

	//To add mapping context
	virtual void BeginPlay() override;

	//APawn interface
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override; 

public:	

	// Returns CameraBoom subobject
	FORCEINLINE class USpringArmComponent* GetCameraBoom() const { return SpringArmComp; }

	// Returns FollowCamera subobject
	FORCEINLINE class UCameraComponent* GetCameraBoom() const { return CameraComp; }

};
