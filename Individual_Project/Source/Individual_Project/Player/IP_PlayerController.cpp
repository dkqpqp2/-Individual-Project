// Fill out your copyright notice in the Description page of Project Settings.


#include "IP_PlayerController.h"

void AIP_PlayerController::BeginPlay()
{
	Super::BeginPlay();

	FInputModeGameOnly GameOnlyInputMode;

	SetInputMode(GameOnlyInputMode);
}
