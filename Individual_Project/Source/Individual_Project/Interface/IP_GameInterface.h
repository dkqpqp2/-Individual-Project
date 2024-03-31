// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "IP_GameInterface.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UIP_GameInterface : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class INDIVIDUAL_PROJECT_API IIP_GameInterface
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	virtual void OnPlayerScoreChanged(int32 NewPlayerScore) = 0;
	virtual void OnPlayerDead() = 0;
	virtual bool IsGameCleared() = 0;

};
