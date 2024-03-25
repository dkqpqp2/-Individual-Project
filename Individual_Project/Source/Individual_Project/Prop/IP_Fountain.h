// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "IP_Fountain.generated.h"

UCLASS()
class INDIVIDUAL_PROJECT_API AIP_Fountain : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AIP_Fountain();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Mesh)
	TObjectPtr<class UStaticMeshComponent> Body;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Mesh)
	TObjectPtr<class UStaticMeshComponent> Water;
 
};
