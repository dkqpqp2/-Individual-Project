// Fill out your copyright notice in the Description page of Project Settings.


#include "CharacterSelectWidget.h"
#include "Components/Button.h"

void UCharacterSelectWidget::NativeConstruct()
{
	Super::NativeConstruct();

	StartButton = Cast<UButton>(GetWidgetFromName(TEXT("StartButton")));


	StartButton->OnClicked.AddDynamic(this, &UCharacterSelectWidget::StartButtonClick);

}

void UCharacterSelectWidget::StartButtonClick()
{
	//UGameplayStatics::OpenLevel(GetWorld(), TEXT("127.0.0.1:10001"));
}