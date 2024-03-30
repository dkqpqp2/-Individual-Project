// Fill out your copyright notice in the Description page of Project Settings.


#include "IP_CharacterStatComponent.h"
#include "GameData/IP_GameSingleton.h"

// Sets default values for this component's properties
UIP_CharacterStatComponent::UIP_CharacterStatComponent()
{
	CurrentLevel = 1;
}


// Called when the game starts
void UIP_CharacterStatComponent::BeginPlay()
{
	Super::BeginPlay();

	SetLevelStat(CurrentLevel);
	SetHp(BaseStat.MaxHp);

}

void UIP_CharacterStatComponent::SetLevelStat(int32 InNewLevel)
{
	CurrentLevel = FMath::Clamp(InNewLevel, 1, UIP_GameSingleton::Get().CharacterMaxLevel);
	BaseStat = UIP_GameSingleton::Get().GetCharacterStat(CurrentLevel);
	check(BaseStat.MaxHp > 0.0f);
}

float UIP_CharacterStatComponent::ApplyDamage(float InDamage)
{
	const float PrevHp = CurrentHp;
	const float ActualDamage = FMath::Clamp<float>(InDamage, 0, InDamage);

	SetHp(PrevHp - ActualDamage);
	if (CurrentHp <= KINDA_SMALL_NUMBER)
	{
		OnHpZero.Broadcast();
	}
	return ActualDamage;
}

void UIP_CharacterStatComponent::SetHp(float NewHp)
{
	CurrentHp = FMath::Clamp<float>(NewHp, 0.0f, BaseStat.MaxHp);

	OnHpChanged.Broadcast(CurrentHp);
}


