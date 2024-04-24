// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "../GameInfo.h"
#include "Components/Button.h"
#include "Blueprint/UserWidget.h"
#include "StartWidget.generated.h"

/**
 * 
 */
UCLASS()
class TESTSERVERPROJECT_API UStartWidget : public UUserWidget
{
	GENERATED_BODY()
	
public:
	void NativeConstruct();

protected:
	UButton* StartButton;
	UButton* EndButton;

public:
	UFUNCTION()
	void StartButtonClick();
	UFUNCTION()
	void EndButtonClick();
};
