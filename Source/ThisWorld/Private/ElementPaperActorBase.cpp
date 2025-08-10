// Fill out your copyright notice in the Description page of Project Settings.


#include "ElementPaperActorBase.h"

bool AElementPaperActorBase::HasElements(uint8 Elements)
{
	return (MyElements | Elements) != MyElements;
}

bool AElementPaperActorBase::IsCollisionElement()
{
	return IsCollision;
}

