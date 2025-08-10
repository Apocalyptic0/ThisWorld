// Fill out your copyright notice in the Description page of Project Settings.


#include "ElementSkillBase.h"

// Sets default values
AElementSkillBase::AElementSkillBase()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

}

// Called when the game starts or when spawned
void AElementSkillBase::BeginPlay()
{
	Super::BeginPlay();
	
}

void AElementSkillBase::ActivateSkill_Implementation(AActor* ElementInstigator)
{
    UWorld* World = ElementInstigator->GetWorld();
    if (!World) return;

    if (AElementPaperActorBase* SpawnElement = SpawnSpriteActor(World, FVector(0, 0, 0), FRotator(0, 0, 0)))
    {
        SpawnElement->ElementInstigator = ElementInstigator;
    }
}

void AElementSkillBase::InitializeSkill()
{
}

AElementPaperActorBase* AElementSkillBase::SpawnSpriteActor(UWorld* World, FVector Location, FRotator Rotation)
{
    if (!World)
    {
        return nullptr;
    }
    // Éú³É PaperSpriteActor
    AElementPaperActorBase* SpawnElement = World->SpawnActor<AElementPaperActorBase>(
        ElementActor,
        Location,
        Rotation
    );

    return SpawnElement;
}


