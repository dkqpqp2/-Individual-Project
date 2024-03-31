// Fill out your copyright notice in the Description page of Project Settings.


#include "IP_HUDWidget.h"
#include "Interface/IP_CharacterHUDInterface.h"
#include "IP_HpBarWidget.h"
#include "IP_CharacterStatWidget.h"


UIP_HUDWidget::UIP_HUDWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
}

void UIP_HUDWidget::UpdateStat(const FIP_CharacterStat& BaseStat, const FIP_CharacterStat& ModifierStat)
{
	FIP_CharacterStat TotalStat = BaseStat + ModifierStat;
	HpBar->UpdateStat(BaseStat, ModifierStat);

	CharacterStat->UpdateStat(BaseStat, ModifierStat);
}

void UIP_HUDWidget::UpdateHpBar(float NewCurrentHp)
{
	HpBar->UpdateHpBar(NewCurrentHp);
}

void UIP_HUDWidget::NativeConstruct()
{
	Super::NativeConstruct();

	HpBar = Cast<UIP_HpBarWidget>(GetWidgetFromName(TEXT("WidgetHpBar")));
	ensure(HpBar);

	CharacterStat = Cast<UIP_CharacterStatWidget>(GetWidgetFromName(TEXT("WidgetCharacterStat")));
	ensure(CharacterStat);

	IIP_CharacterHUDInterface* HUDPawn = Cast<IIP_CharacterHUDInterface>(GetOwningPlayerPawn());
	if(HUDPawn)
	{
		HUDPawn->SetupHUDWidget(this);
	}

}
