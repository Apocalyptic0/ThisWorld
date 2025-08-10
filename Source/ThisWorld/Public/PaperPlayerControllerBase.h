// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "PaperPlayerControllerBase.generated.h"

/**
 * 
 */
UCLASS()
class THISWORLD_API APaperPlayerControllerBase : public APlayerController
{
	GENERATED_BODY()
	
public:
	APaperPlayerControllerBase();

protected:
	virtual void BeginPlay() override;
	
	
};
