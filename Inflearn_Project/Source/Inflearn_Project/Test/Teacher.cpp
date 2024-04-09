// Fill out your copyright notice in the Description page of Project Settings.


#include "Teacher.h"

UTeacher::UTeacher()
{
	Name = TEXT("유선생");
	Year = 5;
	Id = 3;
}

void UTeacher::DoLesson()
{
	Super::DoLesson();

	UE_LOG(LogTemp, Log, TEXT("%d년차 %s님이 수업 중"), Year, *Name);

}
