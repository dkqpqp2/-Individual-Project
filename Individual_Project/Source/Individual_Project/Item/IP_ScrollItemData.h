// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Item/IP_ItemData.h"
#include "GameData/IP_CharacterStat.h"
#include "IP_ScrollItemData.generated.h"

/**
 * 
 */
UCLASS()
class INDIVIDUAL_PROJECT_API UIP_ScrollItemData : public UIP_ItemData
{
	GENERATED_BODY()
public:
	UIP_ScrollItemData();

	virtual FPrimaryAssetId GetPrimaryAssetId() const override
	{
		return FPrimaryAssetId("IP_ItemData", GetFName());
	}

public:
	UPROPERTY(EditAnywhere, Category = Stat)
	FIP_CharacterStat BaseStat;
	
};
