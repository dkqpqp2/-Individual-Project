// Fill out your copyright notice in the Description page of Project Settings.


#include "IP_CharacterNonPlayer.h"
#include "Engine/AssetManager.h"
#include "AI/IP_AIController.h"

AIP_CharacterNonPlayer::AIP_CharacterNonPlayer()
{
	GetMesh()->SetHiddenInGame(true);
	AIControllerClass = AIP_AIController::StaticClass();
	AutoPossessAI = EAutoPossessAI::PlacedInWorldOrSpawned;
}

void AIP_CharacterNonPlayer::PostInitializeComponents()
{
	Super::PostInitializeComponents();

	ensure(NPCMeshes.Num() > 0);
	int32 RandIndex = FMath::RandRange(0, NPCMeshes.Num() - 1);
	NPCMeshHandle = UAssetManager::Get().GetStreamableManager().RequestAsyncLoad(NPCMeshes[RandIndex], FStreamableDelegate::CreateUObject(this, &AIP_CharacterNonPlayer::NPCMeshLoadCompleted));

}

void AIP_CharacterNonPlayer::SetDead()
{
	Super::SetDead();

	FTimerHandle DeadTimerHandle;
	GetWorld()->GetTimerManager().SetTimer(DeadTimerHandle, FTimerDelegate::CreateLambda(
		[&]()
		{
			Destroy();
		}
	), DeadEventDelayTime, false);


}

void AIP_CharacterNonPlayer::NPCMeshLoadCompleted()
{
	if(NPCMeshHandle.IsValid())
	{
		USkeletalMesh* NPCMesh = Cast<USkeletalMesh>(NPCMeshHandle->GetLoadedAsset());
		if (NPCMesh)
		{
			GetMesh()->SetSkeletalMesh(NPCMesh);
			GetMesh()->SetHiddenInGame(false);
		}
		NPCMeshHandle->ReleaseHandle();
	}
}
