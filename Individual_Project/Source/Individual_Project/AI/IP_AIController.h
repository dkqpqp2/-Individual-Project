// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "IP_AIController.generated.h"

/**
 * 
 */
UCLASS()
class INDIVIDUAL_PROJECT_API AIP_AIController : public AAIController
{
	GENERATED_BODY()

public:
	AIP_AIController();
	
	void RunAI();
	void StopAI();

protected:
	virtual void OnPossess(APawn* InPawn) override;

private:
	UPROPERTY()
	TObjectPtr<class UBlackboardData> BBAsset;

	UPROPERTY()
	TObjectPtr<class UBehaviorTree> BTAsset;



};
