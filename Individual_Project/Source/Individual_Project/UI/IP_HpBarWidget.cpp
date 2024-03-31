// Fill out your copyright notice in the Description page of Project Settings.


#include "IP_HpBarWidget.h"
#include "Components/ProgressBar.h"
#include "Components/TextBlock.h"
#include "Interface/IP_CharacterWidgetInterface.h"

UIP_HpBarWidget::UIP_HpBarWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	MaxHp = -1.0f;
}

void UIP_HpBarWidget::NativeConstruct()
{
	Super::NativeConstruct();

	HpProgressBar = Cast<UProgressBar>(GetWidgetFromName(TEXT("PbHpBar")));
	ensure(HpProgressBar);

	HpStat = Cast<UTextBlock>(GetWidgetFromName(TEXT("TxtHpStat")));
	ensure(HpStat);

	IIP_CharacterWidgetInterface* CharacterWidget = Cast<IIP_CharacterWidgetInterface>(OwningActor);
	if (CharacterWidget)
	{
		CharacterWidget->SetupCharacterWidget(this);
	}

}

void UIP_HpBarWidget::UpdateStat(const FIP_CharacterStat& BaseStat, const FIP_CharacterStat& ModifierStat)
{
	MaxHp = (BaseStat + ModifierStat).MaxHp;
	if (HpProgressBar)
	{
		HpProgressBar->SetPercent(CurrentHp / MaxHp);
	}

	if (HpStat)
	{
		HpStat->SetText(FText::FromString(GetHpStatText()));
	}
}

void UIP_HpBarWidget::UpdateHpBar(float NewCurrentHp)
{
	CurrentHp = NewCurrentHp;
	ensure(MaxHp > 0.0f);

	if (HpProgressBar)
	{
		HpProgressBar->SetPercent(CurrentHp / MaxHp);
	}

	if (HpStat)
	{
		HpStat->SetText(FText::FromString(GetHpStatText()));
	}


}

FString UIP_HpBarWidget::GetHpStatText()
{


	return FString::Printf(TEXT("%.0f / %0.f"), CurrentHp, MaxHp);
}
