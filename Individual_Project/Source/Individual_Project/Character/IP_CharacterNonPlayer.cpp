// Fill out your copyright notice in the Description page of Project Settings.


#include "IP_CharacterNonPlayer.h"

AIP_CharacterNonPlayer::AIP_CharacterNonPlayer()
{
}

void AIP_CharacterNonPlayer::SetDead()
{
	Super::SetDead();

	FTimerHandle DeadTimerHandle;
	GetWorld()->GetTimerManager().SetTimer(DeadTimerHandle, FTimerDelegate::CreateLambda(
		[&]()
		{
			Destroy();
		}
	), DeadEventDelayTime, false);


}
