// Fill out your copyright notice in the Description page of Project Settings.


#include "Student.h"

UStudent::UStudent()
{
	Name = TEXT("조학생");
	Year = 1;
	Id = 1;
	
}

void UStudent::DoLesson()
{
	Super::DoLesson();

	UE_LOG(LogTemp, Log, TEXT("%d학년 %d번 %s님 수업 참여중"), Year, Id, *Name);
}
