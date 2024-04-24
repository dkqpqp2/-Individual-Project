// Copyright Epic Games, Inc. All Rights Reserved.

#include "TestServerProjectGameMode.h"
#include "TestServerProjectCharacter.h"
#include "UObject/ConstructorHelpers.h"

ATestServerProjectGameMode::ATestServerProjectGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
