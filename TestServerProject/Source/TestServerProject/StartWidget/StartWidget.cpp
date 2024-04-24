// Fill out your copyright notice in the Description page of Project Settings.


#include "StartWidget.h"



void UStartWidget::NativeConstruct()
{
	Super::NativeConstruct();
	StartButton = Cast<UButton>(GetWidgetFromName(TEXT("StartButton")));
	EndButton = Cast<UButton>(GetWidgetFromName(TEXT("EndButton")));

	StartButton->OnClicked.AddDynamic(this, &UStartWidget::StartButtonClick);
	EndButton->OnClicked.AddDynamic(this, &UStartWidget::EndButtonClick);
}

void UStartWidget::StartButtonClick()
{
	//UGameplayStatics::OpenLevel(GetWorld(), TEXT("127.0.0.1:10000"));
}

void UStartWidget::EndButtonClick()
{
	UKismetSystemLibrary::QuitGame(GetWorld(), GetOwningPlayer(), EQuitPreference::Quit, true);
}
