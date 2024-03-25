// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "IP_CharacterBase.generated.h"

UENUM()
enum class ECharacterControlType : uint8
{
	Quater,
	Shoulder
};

UCLASS()
class INDIVIDUAL_PROJECT_API AIP_CharacterBase : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AIP_CharacterBase();

protected:
	virtual void SetCharacterControlData(const class UIP_CharacterControlData* CharacterControlData);

	UPROPERTY(EditAnywhere, Category = CharacterControl, Meta = (AllowPrivateAccess = "true"))
	TMap<ECharacterControlType, class UIP_CharacterControlData*> CharacterControlManager;
};
