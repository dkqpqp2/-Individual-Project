// Fill out your copyright notice in the Description page of Project Settings.


#include "StartPlayerController.h"
#include "../StartWidget/StartWidget.h"


AStartPlayerController::AStartPlayerController()
{
	static ConstructorHelpers::FClassFinder<UUserWidget> UIAsset(TEXT("/Game/UI/StartWidget.StartWidget_C"));

	if (UIAsset.Class)
	{
		UIClass = UIAsset.Class;
	}

	bShowMouseCursor = true;
}

void AStartPlayerController::BeginPlay()
{
	Super::BeginPlay();

	FInputModeGameAndUI	InputMode;

	SetInputMode(InputMode);

	if (IsValid(UIClass))
	{
		UIWidget = CreateWidget<UStartWidget>(GetWorld(), UIClass);
		UIWidget->AddToViewport(true);
	}

}
