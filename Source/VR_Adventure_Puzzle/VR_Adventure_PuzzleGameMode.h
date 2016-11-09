// Copyright 1998-2016 Epic Games, Inc. All Rights Reserved.
#pragma once
#include "GameFramework/GameMode.h"
#include "VR_Adventure_PuzzleGameMode.generated.h"

//TODO setup a better architecture? Not sure if getting pawn then calling a public function is the best way. There's no way to know who called this function...

UCLASS(minimalapi)
class AVR_Adventure_PuzzleGameMode : public AGameMode
{
	GENERATED_BODY()


public:
	AVR_Adventure_PuzzleGameMode();

	virtual void BeginPlay() override;

	UFUNCTION(BlueprintCallable, Category = "Custom")
	virtual void SwapPlayerControllers(APlayerController* OldPC, APlayerController* NewPC) override;

private:


};



