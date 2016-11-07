// Fill out your copyright notice in the Description page of Project Settings.

#include "VR_Adventure_Puzzle.h"
#include "PatrolGuard.h"


// Sets default values
APatrolGuard::APatrolGuard()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

}

// Called when the game starts or when spawned
void APatrolGuard::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void APatrolGuard::Tick( float DeltaTime )
{
	Super::Tick( DeltaTime );
}

void APatrolGuard::SeePlayer()
{
	OnPlayerPercieved.Broadcast();
}

