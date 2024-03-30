// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Interface/IP_AnimationAttackInterface.h"
#include "Interface/IP_CharacterWidgetInterface.h"
#include "Interface/IP_CharacterItemInterface.h"
#include "IP_CharacterBase.generated.h"

DECLARE_LOG_CATEGORY_EXTERN(LogIP_Character, Log, All);

UENUM()
enum class ECharacterControlType : uint8
{
	Quater,
	Shoulder
};           

DECLARE_DELEGATE_OneParam(FOnTakeItemDelegate, class UIP_ItemData* /*InItemData*/);

USTRUCT(BlueprintType)
struct FTakeItemDelegateWrapper
{
	GENERATED_BODY()
	FTakeItemDelegateWrapper() {}
	FTakeItemDelegateWrapper(const FOnTakeItemDelegate& InItemDelegate) : ItemDelegate(InItemDelegate) {}
	FOnTakeItemDelegate ItemDelegate;
};


UCLASS()
class INDIVIDUAL_PROJECT_API AIP_CharacterBase : public ACharacter, public IIP_AnimationAttackInterface, public IIP_CharacterWidgetInterface, public IIP_CharacterItemInterface
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AIP_CharacterBase();

	virtual void PostInitializeComponents() override;

protected:
	virtual void SetCharacterControlData(const class UIP_CharacterControlData* CharacterControlData);

	UPROPERTY(EditAnywhere, Category = CharacterControl, Meta = (AllowPrivateAccess = "true"))
	TMap<ECharacterControlType, class UIP_CharacterControlData*> CharacterControlManager;

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Animation)
	TObjectPtr<class UAnimMontage> ComboActionMontage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Animation)
	TObjectPtr<class UIP_ComboActionData> ComboActionData;

	void ProcessComboCommand();

	void ComboActionBegin();
	void ComboActionEnd(class UAnimMontage* TargetMontage, bool IsProperlyEnded);
	void SetComboCheckTimer();
	void ComboCheck();

	int32 CurrentCombo = 0;
	FTimerHandle ComboTimerHandle;
	bool HasNextComboCommand = false;

protected:
	virtual void AttackHitCheck() override;
	virtual float TakeDamage(float DamageAmount, struct FDamageEvent const& DamageEvent, class AController* EventInstigator, AActor* DamageCauser) override;

protected:
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Stat, Meta = (AllowPrivateAccess = "true"))
	TObjectPtr<class UAnimMontage> DeadMontage;

	virtual void SetDead();
	void PlayDeadAnimation();

	float DeadEventDelayTime = 5.0f;

protected:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Stat, Meta = (AllowPrivateAccess = "true"))
	TObjectPtr<class UIP_CharacterStatComponent> Stat;


protected:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Widget, Meta = (AllowPrivateAccess = "true"))
	TObjectPtr<class UIP_WidgetComponent> HpBar;

	virtual void SetupCharacterWidget(class UIP_UserWidget* InUserWidget);

protected:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Equipment, Meta = (AllowPrivateAccess = "true"))
	TObjectPtr<class USkeletalMeshComponent> Weapon;

	UPROPERTY()
	TArray<FTakeItemDelegateWrapper> TakeItemActions;

	virtual void TakeItem(UIP_ItemData* InItemData) override;
	virtual void DrinkPotion(UIP_ItemData* InItemData);
	virtual void EquipWeapon(UIP_ItemData* InItemData);
	virtual void ReadScroll(UIP_ItemData* InItemData);

public:
	int32 GetLevel();
	void SetLevel(int32 InNewLevel);

};
