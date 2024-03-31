// Fill out your copyright notice in the Description page of Project Settings.


#include "IP_CharacterNonPlayer.h"
#include "Engine/AssetManager.h"
#include "AI/IP_AIController.h"
#include "CharacterStat/IP_CharacterStatComponent.h"

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

	AIP_AIController* IP_AIController = Cast<AIP_AIController>(GetController());
	if (IP_AIController)
	{
		IP_AIController->StopAI();
	}

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

float AIP_CharacterNonPlayer::GetAIPatrolRadius()
{
	return 800.0f;
}

float AIP_CharacterNonPlayer::GetAIDetectRange()
{
	return 400.0f;
}

float AIP_CharacterNonPlayer::GetAIAttackRange()
{
	return Stat->GetTotalStat().AttackRange + Stat->GetAttackRadius() * 2;
}

float AIP_CharacterNonPlayer::GetAITurnSpeed()
{
	return 2.0f;
}

void AIP_CharacterNonPlayer::SetAIAttackDelegate(const FAICharacterAttackFinished& InOnAttackFinished)
{
	OnAttackFinished = InOnAttackFinished;
}

void AIP_CharacterNonPlayer::AttackByAI()
{
	ProcessComboCommand();
}

void AIP_CharacterNonPlayer::NotifyComboActionEnd()
{
	Super::NotifyComboActionEnd();
	OnAttackFinished.ExecuteIfBound();
}

