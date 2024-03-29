// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "IP_CharacterItemInterface.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UIP_CharacterItemInterface : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class INDIVIDUAL_PROJECT_API IIP_CharacterItemInterface
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	virtual void TakeItem(class UIP_ItemData* InItemData) = 0;
};
