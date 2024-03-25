// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "IP_PlayerController.generated.h"

/**
 * 
 */
UCLASS()
class INDIVIDUAL_PROJECT_API AIP_PlayerController : public APlayerController
{
	GENERATED_BODY()

protected:
	virtual void BeginPlay() override;
	
};
