// Fill out your copyright notice in the Description page of Project Settings.


#include "IP_CharacterStatComponent.h"

// Sets default values for this component's properties
UIP_CharacterStatComponent::UIP_CharacterStatComponent()
{
	MaxHp = 200.f;
	CurrentHp = MaxHp;
}


// Called when the game starts
void UIP_CharacterStatComponent::BeginPlay()
{
	Super::BeginPlay();

	SetHp(MaxHp);
	
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
	CurrentHp = FMath::Clamp<float>(NewHp, 0.0f, MaxHp);

	OnHpChanged.Broadcast(CurrentHp);
}


