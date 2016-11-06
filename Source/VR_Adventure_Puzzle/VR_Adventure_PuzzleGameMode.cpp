// Copyright 1998-2016 Epic Games, Inc. All Rights Reserved.

#include "VR_Adventure_Puzzle.h"
#include "VR_Adventure_PuzzleGameMode.h"
#include "VR_Adventure_PuzzleCharacter.h"

AVR_Adventure_PuzzleGameMode::AVR_Adventure_PuzzleGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		//DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
