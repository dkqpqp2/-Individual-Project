// Fill out your copyright notice in the Description page of Project Settings.


#include "StartGameMode.h"
#include "../Player/StartPlayerController.h"

AStartGameMode::AStartGameMode()
{
	PlayerControllerClass = AStartPlayerController::StaticClass();
}
