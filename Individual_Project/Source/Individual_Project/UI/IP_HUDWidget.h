// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "GameData/IP_CharacterStat.h"
#include "IP_HUDWidget.generated.h"

/**
 * 
 */
UCLASS()
class INDIVIDUAL_PROJECT_API UIP_HUDWidget : public UUserWidget
{
	GENERATED_BODY()

public:
	UIP_HUDWidget(const FObjectInitializer& ObjectInitializer);

public:
	void UpdateStat(const FIP_CharacterStat& BaseStat, const FIP_CharacterStat& ModifierStat);
	void UpdateHpBar(float NewCurrentHp);


protected:
	virtual void NativeConstruct() override;

protected:
	UPROPERTY()
	TObjectPtr<class UIP_HpBarWidget> HpBar;

	UPROPERTY()
	TObjectPtr<class UIP_CharacterStatWidget> CharacterStat;
	
};
