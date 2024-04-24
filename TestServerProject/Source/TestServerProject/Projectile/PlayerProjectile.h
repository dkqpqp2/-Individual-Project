// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "../GameInfo.h"
#include "GameFramework/Actor.h"
#include "PlayerProjectile.generated.h"

UCLASS()
class TESTSERVERPROJECT_API APlayerProjectile : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APlayerProjectile();

protected:
	UPROPERTY(EditAnywhere, category = projectile)
	USphereComponent* Trigger;

	UPROPERTY(EditAnywhere, category = projectile)
	TObjectPtr<class UNiagaraComponent> Niagara;

	UPROPERTY(EditAnywhere, category = projectile)
	TObjectPtr<class UProjectileMovementComponent> ProjectileMovement;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;


public:
	void SetNiagaraAsset(const FSoftObjectPath& Path);

	UFUNCTION()
	void OnNiagaraFinish(class UNiagaraComponent* InNiagara);
};
