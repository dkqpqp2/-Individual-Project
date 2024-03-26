// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "IP_ComboActionData.generated.h"

/**
 * 
 */
UCLASS()
class INDIVIDUAL_PROJECT_API UIP_ComboActionData : public UPrimaryDataAsset
{
	GENERATED_BODY()

public:
	UIP_ComboActionData();

	UPROPERTY(EditAnywhere, Category = Name)
	FString MontageSectionNamePrefix;

	UPROPERTY(EditAnywhere, Category = Name)
	uint8 MaxComboCount;

	UPROPERTY(EditAnywhere, Category = Name)
	float FrameRate;

	UPROPERTY(EditAnywhere, Category = ComboData)
	TArray<float> EffectiveFrameCount;

protected:

	
};
