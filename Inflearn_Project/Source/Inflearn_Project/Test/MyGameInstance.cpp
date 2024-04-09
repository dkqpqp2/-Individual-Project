// Fill out your copyright notice in the Description page of Project Settings.


#include "MyGameInstance.h"
#include "Student.h"
#include "Teacher.h"

UMyGameInstance::UMyGameInstance()
{
	SchoolName = TEXT("기본학교");
}

void UMyGameInstance::Init()
{
	Super::Init();

	UE_LOG(LogTemp, Log, TEXT("========================"));
	UClass* ClassRunTime = GetClass();
	UClass* ClassCompile = UMyGameInstance::StaticClass();

	//check(ClassRunTime == ClassCompile);
	//ensure(ClassRunTime == ClassCompile);

	UE_LOG(LogTemp, Log, TEXT("학교를 담당하는 클래스 이름 : %s"), *ClassRunTime->GetName());
	SchoolName = TEXT("어소트락");

	UE_LOG(LogTemp, Log, TEXT("학교이름 : %s"), *SchoolName);
	UE_LOG(LogTemp, Log, TEXT("학교이름 기본값 : %s"), *GetClass()->GetDefaultObject<UMyGameInstance>()->SchoolName);

	UE_LOG(LogTemp, Log, TEXT("========================"));

	UStudent* Student = NewObject<UStudent>();
	UTeacher* Teacher = NewObject<UTeacher>();

	Student->setName(TEXT("변경됨"));
	UE_LOG(LogTemp, Log, TEXT("변경됨 %s"), *Student->GetName());

	FString CurrentTeacherName;
	FString NewTeacherName(TEXT("asdf"));
	FProperty* NameProp = UTeacher::StaticClass()->FindPropertyByName(TEXT("Name"));
	if (NameProp)
	{
		NameProp->GetValue_InContainer(Teacher, &CurrentTeacherName);
		UE_LOG(LogTemp, Log, TEXT("현재 센세 %s"), *CurrentTeacherName);
		NameProp->SetValue_InContainer(Teacher, &NewTeacherName);
		UE_LOG(LogTemp, Log, TEXT("변경 센세 %s"), *Teacher->GetName());
	}

	UE_LOG(LogTemp, Log, TEXT("========================"));

	Student->DoLesson();
	UFunction* DoLessonFunc = Teacher->GetClass()->FindFunctionByName(TEXT("DoLesson"));
	if (DoLessonFunc)
	{
		Teacher->ProcessEvent(DoLessonFunc, nullptr);
	}
}
