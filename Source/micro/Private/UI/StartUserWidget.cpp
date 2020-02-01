// Fill out your copyright notice in the Description page of Project Settings.
#include "Kismet/KismetSystemLibrary.h"
#include "StartUserWidget.h"

bool UStartUserWidget::Initialize()
{
	if (!Super::Initialize())
	{
		return false;
	}

	/** init start game button*/
	StartBtn = Cast<UButton>(GetWidgetFromName(TEXT("Button_Start")));
	/** init register account button */
	RegisterBtn = Cast<UButton>(GetWidgetFromName(TEXT("Button_Register")));
	/** init quit game button */
	QuitBtn = Cast<UButton>(GetWidgetFromName(TEXT("Button_Quit")));
	/* quit button click event */
	QuitBtn->OnClicked.AddDynamic(this, &UStartUserWidget::QuitBtnOnClickedEvent);
	return true;
}

void UStartUserWidget::QuitBtnOnClickedEvent()
{
	UKismetSystemLibrary::QuitGame(GetWorld(), nullptr, EQuitPreference::Quit);
}

