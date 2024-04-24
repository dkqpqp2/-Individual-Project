// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "../GameInfo.h"
#include "GameFramework/PlayerController.h"
#include "StartPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class TESTSERVERPROJECT_API AStartPlayerController : public APlayerController
{
	GENERATED_BODY()
	
public:
	AStartPlayerController();

protected:
	TSubclassOf<UUserWidget> UIClass;
	TObjectPtr<class UUserWidget> UIWidget;

protected:
	virtual void BeginPlay();
};
