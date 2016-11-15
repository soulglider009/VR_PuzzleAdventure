// Copyright 1998-2016 Epic Games, Inc. All Rights Reserved.

#include "VR_Adventure_Puzzle.h"
#include "VR_Adventure_PuzzleGameMode.h"
#include "NPC/GuardAIController.h"
#include "NPC/PatrolGuard.h"
#include "Player/APPlayerController.h"
#include "VR_Adventure_PuzzleCharacter.h"

AVR_Adventure_PuzzleGameMode::AVR_Adventure_PuzzleGameMode()
{

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/Player/PCPawn/Behavior/PCCameraPawn_BP"));

	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
	
}

void AVR_Adventure_PuzzleGameMode::BeginPlay() {
	Super::BeginPlay();

	/*TSubclassOf<AGuardAIController> ClassToFind;
	ClassToFind = AGuardAIController::StaticClass(); //Required to look up gameplay statics all actors
	TArray<AActor*> GuardArray;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), ClassToFind, GuardArray);
	UE_LOG(LogTemp, Warning, TEXT("Number of guards found: %i"), GuardArray.Num());

	for (int32 i = 0; i < GuardArray.Num(); i++) {
		auto GuardActor = GuardArray[i];
		auto Guard = Cast<AGuardAIController>(GuardActor)->GetControlledPawn();
		auto GuardLogic = Cast<APatrolGuard>(Guard);
		if (!ensure(GuardLogic)) { return; }
		GuardLogic->OnPlayerPercieved.AddUniqueDynamic(this, &AVR_Adventure_PuzzleGameMode::OnPercievedPlayer);
		UE_LOG(LogTemp, Warning, TEXT("Guard named %s has been found and delegate registered"), *GuardArray[i]->GetName());
	}*/
}

void AVR_Adventure_PuzzleGameMode::SwapPlayerControllers(APlayerController * OldPC, APlayerController * NewPC)
{
	Super::SwapPlayerControllers(OldPC, NewPC);
}
