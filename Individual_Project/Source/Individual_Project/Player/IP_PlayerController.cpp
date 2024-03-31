// Fill out your copyright notice in the Description page of Project Settings.


#include "IP_PlayerController.h"
#include "UI/IP_HUDWidget.h"

AIP_PlayerController::AIP_PlayerController()
{
	static ConstructorHelpers::FClassFinder<UIP_HUDWidget> IP_HUDWidgetRef(TEXT("/Game/ArenaBattle/UI/WBP_IPHUD.WBP_IPHUD_C"));
	if (IP_HUDWidgetRef.Class)
	{
		IP_HUDWidgetClass = IP_HUDWidgetRef.Class;
	}
}

void AIP_PlayerController::BeginPlay()
{
	Super::BeginPlay();

	FInputModeGameOnly GameOnlyInputMode;

	SetInputMode(GameOnlyInputMode);

	IP_HUDWidget = CreateWidget<UIP_HUDWidget>(this, IP_HUDWidgetClass);
	if(IP_HUDWidget)
	{
		IP_HUDWidget->AddToViewport();
	}
}
