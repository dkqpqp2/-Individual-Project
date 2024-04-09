// Fill out your copyright notice in the Description page of Project Settings.


#include "Person.h"

UPerson::UPerson()
{
    Name = TEXT("김사람");
    Year = 1;
}

void UPerson::DoLesson()
{
    UE_LOG(LogTemp, Log, TEXT("수업참여"));
}

const FString& UPerson::GetName() const
{
    return Name;
}

void UPerson::setName(const FString& InName)
{
    Name = InName;
}
