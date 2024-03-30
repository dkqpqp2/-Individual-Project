// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "IP_CharacterStat.h"
#include "IP_GameSingleton.generated.h"

DECLARE_LOG_CATEGORY_EXTERN(LogIP_GameSingleton, Error, All);


/**
 * 
 */
UCLASS()
class INDIVIDUAL_PROJECT_API UIP_GameSingleton : public UObject
{
	GENERATED_BODY()
	
public:
	UIP_GameSingleton();
	static UIP_GameSingleton& Get();

public:
	FORCEINLINE FIP_CharacterStat GetCharacterStat(int32 InLevel) const { return CharacterStatTable.IsValidIndex(InLevel - 1) ? CharacterStatTable[InLevel - 1] : FIP_CharacterStat(); }

	UPROPERTY()
	int32 CharacterMaxLevel;

private:
	TArray<FIP_CharacterStat> CharacterStatTable;

};
