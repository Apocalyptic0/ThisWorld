// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PaperZDCharacter.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "STExtraPaperCharacter.generated.h"

/**
 * 
 */
UCLASS()
class THISWORLD_API ASTExtraPaperCharacter : public APaperZDCharacter
{
	GENERATED_BODY()
	
public:

	ASTExtraPaperCharacter();

protected:
	virtual void BeginPlay() override;

	// ÒÆ¶¯º¯Êý
	virtual void Jump() override;
	void Crouch();

	bool CanJump();
	bool CanCrouch();

};
