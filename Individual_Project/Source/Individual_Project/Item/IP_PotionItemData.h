// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Item/IP_ItemData.h"
#include "IP_PotionItemData.generated.h"

/**
 * 
 */
UCLASS()
class INDIVIDUAL_PROJECT_API UIP_PotionItemData : public UIP_ItemData
{
	GENERATED_BODY()
public:
	UIP_PotionItemData();

	virtual FPrimaryAssetId GetPrimaryAssetId() const override
	{
		return FPrimaryAssetId("IP_ItemData", GetFName());
	}
	
public:
	UPROPERTY(EditAnywhere, Category = Hp)
	float HealAmount;
};
