// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ElementPaperActorBase.h"
#include "ElementSkillBase.generated.h"

UCLASS()
class THISWORLD_API AElementSkillBase : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AElementSkillBase();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:

    UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "ElementSkill")
    void ActivateSkill(AActor* ElementInstigator);
    virtual void ActivateSkill_Implementation(AActor* ElementInstigator);

protected:

    UFUNCTION(BlueprintCallable, Category = "ElementSkill")
    virtual void InitializeSkill();

    UFUNCTION(BlueprintCallable, Category = "ElementSkill")
    AElementPaperActorBase* SpawnSpriteActor(UWorld* World, FVector Location, FRotator Rotation);

protected:

    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "ElementSkill")
    FName SkillName;

    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "ElementSkill")
    float Cost;

    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "ElementSkill")
    float Cooldown;

    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "ElementSkill")
    TSubclassOf<class AElementPaperActorBase> ElementActor;


};
