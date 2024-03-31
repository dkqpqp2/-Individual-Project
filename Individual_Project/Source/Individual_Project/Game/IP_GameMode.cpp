// Fill out your copyright notice in the Description page of Project Settings.


#include "IP_GameMode.h"
#include "Player/IP_PlayerController.h"

AIP_GameMode::AIP_GameMode()
{
	static ConstructorHelpers::FClassFinder<APawn> DefaultPawnClassRef(TEXT("/Game/ArenaBattle/Blueprint/BP_IP_CharacterPlayer.BP_IP_CharacterPlayer_C"));
	if (DefaultPawnClassRef.Class)
	{
		DefaultPawnClass = DefaultPawnClassRef.Class;
	}

	static ConstructorHelpers::FClassFinder<AIP_PlayerController> PlayerControllerRef(TEXT("/Script/Individual_Project.IP_PlayerController"));

	if (PlayerControllerRef.Class)
	{
		PlayerControllerClass = PlayerControllerRef.Class;
	}

	ClearScore = 3;
	CurrentScore = 0;
	bIsCleared = false;

}

void AIP_GameMode::OnPlayerScoreChanged(int32 NewPlayerScore)
{
	CurrentScore = NewPlayerScore;

	AIP_PlayerController* IP_PlayerController = Cast<AIP_PlayerController>(GetWorld()->GetFirstPlayerController());
	if (IP_PlayerController)
	{
		IP_PlayerController->GameScoreChanged(CurrentScore);
	}

	if (CurrentScore >= ClearScore)
	{
		bIsCleared = true;
		if (IP_PlayerController)
		{
			IP_PlayerController->GameClear();
		}
	}
}

void AIP_GameMode::OnPlayerDead()
{
	AIP_PlayerController* IP_PlayerController = Cast<AIP_PlayerController>(GetWorld()->GetFirstPlayerController());
	if (IP_PlayerController)
	{
		IP_PlayerController->GameOver();
	}
}

bool AIP_GameMode::IsGameCleared()
{
	return bIsCleared;
}
