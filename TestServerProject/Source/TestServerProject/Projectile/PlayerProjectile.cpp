// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerProjectile.h"
#include "NiagaraComponent.h"
#include "NiagaraSystem.h"
#include "GameFramework/ProjectileMovementComponent.h"

// Sets default values
APlayerProjectile::APlayerProjectile()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Trigger = CreateDefaultSubobject<USphereComponent>(TEXT("Trigger"));
	Niagara = CreateDefaultSubobject<UNiagaraComponent>(TEXT("Niagara"));
	ProjectileMovement = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("Projectile"));

	RootComponent = Trigger;
	Niagara->SetupAttachment(Trigger);

	//ProjectileMovement->InitialSpeed = 1000.0f;
	//ProjectileMovement->MaxSpeed = 5000.0f;

}

// Called when the game starts or when spawned
void APlayerProjectile::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APlayerProjectile::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void APlayerProjectile::SetNiagaraAsset(const FSoftObjectPath& Path)
{
	if (Niagara)
	{
		UNiagaraSystem* Asset = LoadObject<UNiagaraSystem>(nullptr, *Path.ToString());
		if (Asset)
		{
			Niagara->SetAsset(Asset);
			Niagara->OnSystemFinished.AddDynamic(this, &APlayerProjectile::OnNiagaraFinish);
		}
	}
}

void APlayerProjectile::OnNiagaraFinish(UNiagaraComponent* InNiagara)
{
	Destroy();
}

