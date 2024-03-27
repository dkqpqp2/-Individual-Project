// Fill out your copyright notice in the Description page of Project Settings.


#include "IP_WidgetComponent.h"
#include "IP_UserWidget.h"

void UIP_WidgetComponent::InitWidget()
{
	Super::InitWidget();

	UIP_UserWidget* IPUserWidget = Cast<UIP_UserWidget>(GetWidget());

	if (IPUserWidget)
	{
		IPUserWidget->SetOwningActor(GetOwner());
	}

}
