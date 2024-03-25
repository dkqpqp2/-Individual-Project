// Fill out your copyright notice in the Description page of Project Settings.


#include "IP_GameMode.h"
#include "Player/IP_PlayerController.h"

AIP_GameMode::AIP_GameMode()
{
	static ConstructorHelpers::FClassFinder<APawn> DefaultPawnClassRef(TEXT("/Script/Individual_Project.IP_CharacterPlayer"));
	if (DefaultPawnClassRef.Class)
	{
		DefaultPawnClass = DefaultPawnClassRef.Class;
	}

	static ConstructorHelpers::FClassFinder<AIP_PlayerController> PlayerControllerRef(TEXT("/Script/Individual_Project.IP_PlayerController"));

	if (PlayerControllerRef.Class)
	{
		PlayerControllerClass = PlayerControllerRef.Class;
	}

	//PlayerControllerClass = AIP_PlayerController::StaticClass();
}
