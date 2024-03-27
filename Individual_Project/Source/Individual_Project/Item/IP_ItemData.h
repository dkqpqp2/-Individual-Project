// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "IP_ItemData.generated.h"


UENUM(BlueprintType)
enum class EItemType : uint8
{
	Weapon,
	Potion,
	Scroll
};
/**
 * 
 */
UCLASS()
class INDIVIDUAL_PROJECT_API UIP_ItemData : public UPrimaryDataAsset
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Type)
	EItemType Type;
	
};
