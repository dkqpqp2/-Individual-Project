// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Character/IP_CharacterBase.h"
#include "Engine/StreamableManager.h"
#include "IP_CharacterNonPlayer.generated.h"

/**
 * 
 */
UCLASS(config = Individual_Project)
class INDIVIDUAL_PROJECT_API AIP_CharacterNonPlayer : public AIP_CharacterBase
{
	GENERATED_BODY()

public:
	AIP_CharacterNonPlayer();

protected:
	virtual void PostInitializeComponents()override;

protected:
	void SetDead() override;
	void NPCMeshLoadCompleted();

	UPROPERTY(config)
	TArray<FSoftObjectPath> NPCMeshes;

	TSharedPtr<FStreamableHandle> NPCMeshHandle;
};
