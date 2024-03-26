// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Character/IP_CharacterBase.h"
#include "IP_CharacterNonPlayer.generated.h"

/**
 * 
 */
UCLASS()
class INDIVIDUAL_PROJECT_API AIP_CharacterNonPlayer : public AIP_CharacterBase
{
	GENERATED_BODY()

public:
	AIP_CharacterNonPlayer();

protected:
	void SetDead() override;
	
};
