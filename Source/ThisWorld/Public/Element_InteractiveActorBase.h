// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PaperSpriteActor.h"
#include "PaperSpriteComponent.h"
#include "ElementPaperActorBase.h"
#include "Element_InteractiveActorBase.generated.h"

/**
 * 
 */
class UPaperSpriteComponent;
struct FElementColor;

UCLASS()
class THISWORLD_API AElement_InteractiveActorBase : public APaperSpriteActor
{
	GENERATED_BODY()

protected:

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void OnAbsorbingElement(AElementPaperActorBase* ElementActor);
	virtual void OnAbsorbingElement_Implementation(AElementPaperActorBase* ElementActor);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	AElementPaperActorBase* GenerateElement(AElementPaperActorBase* ElementActor);
	virtual AElementPaperActorBase* GenerateElement_Implementation(AElementPaperActorBase* ElementActor);

	UFUNCTION(BlueprintCallable)
	void ShowMainInteractiveElement();

	UPROPERTY(EditAnywhere)
	EMyElementType MainInteractiveElement;
	
};
