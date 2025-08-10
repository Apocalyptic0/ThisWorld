// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PaperSpriteActor.h"
#include "ElementPaperActorBase.generated.h"

/**
 * 
 */

UENUM(BlueprintType, Meta = (Bitflags, UseEnumValuesAsMaskValuesInEditor = "true"))
enum class EMyElementType : uint8
{
	Null = 0 UMETA(Hidden),
	Light = 0x01 UMETA(DisplayName = "Light"),
	Water = 0x02 UMETA(DisplayName = "Water"),
	Fire = 0x04 UMETA(DisplayName = "Fire"),
	Wind = 0x08 UMETA(DisplayName = "Wind"),
	Electricity = 0x10 UMETA(DisplayName = "Electricity"),
};

ENUM_CLASS_FLAGS(EMyElementType);

UCLASS()
class THISWORLD_API AElementPaperActorBase : public APaperSpriteActor
{
	GENERATED_BODY()
	
public:

	UFUNCTION(BlueprintCallable)
	bool HasElements(uint8 Elements);

	UFUNCTION(BlueprintCallable)
	bool IsCollisionElement();

	UPROPERTY(BlueprintReadWrite, Category = "ElementProperty")
	AActor* ElementInstigator;

protected:

	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta = (Bitmask, BitmaskEnum = "/Script/ThisWorld.EMyElementType"), Category = "ElementProperty")
	uint8 MyElements;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "ElementProperty")
	bool IsCollision;

};
