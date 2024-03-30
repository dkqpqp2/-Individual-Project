// Fill out your copyright notice in the Description page of Project Settings.


#include "IP_GameSingleton.h"

DEFINE_LOG_CATEGORY(LogIP_GameSingleton);


UIP_GameSingleton::UIP_GameSingleton()
{
	static ConstructorHelpers::FObjectFinder<UDataTable> DataTableRef(TEXT("/Script/Engine.DataTable'/Game/ArenaBattle/GameData/IP_CharacterStatTable.IP_CharacterStatTable'"));
	if (DataTableRef.Object)
	{
		const UDataTable* DataTable = DataTableRef.Object;
		check(DataTable->GetRowMap().Num() > 0);

		TArray<uint8*> ValueArray;
		DataTable->GetRowMap().GenerateValueArray(ValueArray);
		Algo::Transform(ValueArray, CharacterStatTable,
			[](uint8* Value)
			{
				return *reinterpret_cast<FIP_CharacterStat*>(Value);
			}
		);
	}

	CharacterMaxLevel = CharacterStatTable.Num();
	ensure(CharacterMaxLevel > 0);

}

UIP_GameSingleton& UIP_GameSingleton::Get()
{
	// GEngine->GameSingleton <- 멤버변수가 할당 되어있음, 프로젝트설정에 저장해주면 엔진이 그것을 보고 알아서
	// 싱글톤의 인스턴스를 만들어서 알아서 멤버변수에 할당해줌
	UIP_GameSingleton* Singleton = CastChecked<UIP_GameSingleton>(GEngine->GameSingleton);
	if(Singleton)
	{
		return *Singleton;
	}

	UE_LOG(LogIP_GameSingleton, Error, TEXT("Invalid Game Singleton"));

	return *NewObject<UIP_GameSingleton>();
}
