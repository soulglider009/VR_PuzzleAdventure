// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/Character.h"
#include "PatrolGuard.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FGuardDelegate);

UCLASS()
class VR_ADVENTURE_PUZZLE_API APatrolGuard : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	APatrolGuard();

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	// Called every frame
	virtual void Tick( float DeltaSeconds ) override;

	UPROPERTY(BlueprintAssignable, Category = "Guard Delegate")
	FGuardDelegate OnPlayerPercieved;

	UFUNCTION(BlueprintCallable, Category = "Perception")
	void SeePlayer();
	
};
