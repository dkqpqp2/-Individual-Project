// Fill out your copyright notice in the Description page of Project Settings.


#include "IP_CharacterBase.h"
#include "Components/CapsuleComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "IP_CharacterControlData.h"


// Sets default values
AIP_CharacterBase::AIP_CharacterBase()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = false;
	bUseControllerRotationRoll = false;

	GetCapsuleComponent()->InitCapsuleSize(42.f, 96.0f);
	GetCapsuleComponent()->SetCollisionProfileName(TEXT("Pawn"));

	GetCharacterMovement()->bOrientRotationToMovement = true;
	GetCharacterMovement()->RotationRate = FRotator(0.0f, 500.f, 0.0f);
	GetCharacterMovement()->JumpZVelocity = 700.f;
	GetCharacterMovement()->AirControl = 0.35f;
	GetCharacterMovement()->MaxWalkSpeed = 500.f;
	GetCharacterMovement()->MinAnalogWalkSpeed = 20.f;
	GetCharacterMovement()->BrakingDecelerationWalking = 2000.f;

	GetMesh()->SetRelativeLocationAndRotation(FVector(0.0f, 0.0f, -100.0f), FRotator(0.0f, -90.0f, 0.0f));
	GetMesh()->SetAnimationMode(EAnimationMode::AnimationBlueprint);
	GetMesh()->SetCollisionProfileName(TEXT("CharacterMesh"));

	static ConstructorHelpers::FObjectFinder<USkeletalMesh> CharacterMeshRef(TEXT("/Script/Engine.SkeletalMesh'/Game/Characters/Mannequins/Meshes/SKM_Quinn_Simple.SKM_Quinn_Simple'"));
	if (CharacterMeshRef.Object)
	{
		GetMesh()->SetSkeletalMesh(CharacterMeshRef.Object);
	}

	static ConstructorHelpers::FClassFinder<UAnimInstance> AnimInstanceClassRef(TEXT("/Game/Characters/Mannequins/Animations/ABP_Quinn.ABP_Quinn_C"));
	if (AnimInstanceClassRef.Class)
	{
		GetMesh()->SetAnimInstanceClass(AnimInstanceClassRef.Class);
	}

	static ConstructorHelpers::FObjectFinder<UIP_CharacterControlData> ShoulderRef(TEXT("/Script/Individual_Project.IP_CharacterControlData'/Game/ArenaBattle/CharacterControl/IP_Shoulder.IP_Shoulder'"));
	if (ShoulderRef.Object)
	{
		CharacterControlManager.Add(ECharacterControlType::Shoulder, ShoulderRef.Object);
	}

	static ConstructorHelpers::FObjectFinder<UIP_CharacterControlData> QuaterRef(TEXT("/Script/Individual_Project.IP_CharacterControlData'/Game/ArenaBattle/CharacterControl/IP_Quater.IP_Quater'"));
	if (ShoulderRef.Object)
	{
		CharacterControlManager.Add(ECharacterControlType::Quater, QuaterRef.Object);
	}
}

void AIP_CharacterBase::SetCharacterControlData(const UIP_CharacterControlData* CharacterControlData)
{
	bUseControllerRotationYaw = CharacterControlData->bUseControllerRotationYaw;

	GetCharacterMovement()->bOrientRotationToMovement = CharacterControlData->bOrientRotationToMovement;
	GetCharacterMovement()->bUseControllerDesiredRotation = CharacterControlData->bUseControllerDesiredRotation;
	GetCharacterMovement()->RotationRate = CharacterControlData->RotationRate;
}

