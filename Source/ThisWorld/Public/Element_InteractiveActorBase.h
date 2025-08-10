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

	UFUNCTION(BlueprintCallable)
	virtual void OnAbsorbingElement(AElementPaperActorBase* ElementActor);

	UFUNCTION(BlueprintCallable)
	virtual AElementPaperActorBase* GenerateElement();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void ShowMainInteractiveElement();

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	EMyElementType MainInteractiveElement;
	
};
