// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "IP_UserWidget.h"
#include "GameData/IP_CharacterStat.h"
#include "IP_HpBarWidget.generated.h"

/**
 * 
 */
UCLASS()
class INDIVIDUAL_PROJECT_API UIP_HpBarWidget : public UIP_UserWidget
{
	GENERATED_BODY()
public:
	UIP_HpBarWidget(const FObjectInitializer& ObjectInitializer);

protected:
	virtual void NativeConstruct() override;

public:
	void UpdateStat(const FIP_CharacterStat& BaseStat, const FIP_CharacterStat& ModifierStat);
	void UpdateHpBar(float NewCurrentHp);
	FString GetHpStatText();
	
protected:
	UPROPERTY()
	TObjectPtr<class UProgressBar> HpProgressBar;

	UPROPERTY()
	TObjectPtr<class UTextBlock> HpStat;

	UPROPERTY()
	float CurrentHp;

	UPROPERTY()
	float MaxHp;
};
