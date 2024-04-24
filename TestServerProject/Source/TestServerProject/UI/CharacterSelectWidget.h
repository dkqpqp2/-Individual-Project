// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "../GameInfo.h"
#include "Blueprint/UserWidget.h"
#include "CharacterSelectWidget.generated.h"

/**
 * 
 */
UCLASS()
class TESTSERVERPROJECT_API UCharacterSelectWidget : public UUserWidget
{
	GENERATED_BODY()

public:
	void NativeConstruct();

protected:
	UPROPERTY()
	TObjectPtr<class UButton> StartButton;

public:
	void StartButtonClick();
};
