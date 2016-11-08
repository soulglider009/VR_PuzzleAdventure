// Fill out your copyright notice in the Description page of Project Settings.

#include "VR_Adventure_Puzzle.h"
#include "KeyDoor.h"


// Sets default values for this component's properties
UKeyDoor::UKeyDoor()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	bWantsBeginPlay = true;
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UKeyDoor::BeginPlay()
{
	Super::BeginPlay();

	// Register with all of the keys and listen for their toggle events
	
}


