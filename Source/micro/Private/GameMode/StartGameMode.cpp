// Fill out your copyright notice in the Description page of Project Settings.

#include "StartGameMode.h"



/** game start init */
void AStartGameMode::BeginPlay()
{
	/* init game start widget */
	StartWidget = CreateWidget<UStartUserWidget>(GetGameInstance(), LoadClass<UStartUserWidget>(this, TEXT("WidgetBlueprint'/Game/UI/BP_StartUserWidget.BP_StartUserWidget_c'")));
	/* add to viewport */
	StartWidget->AddToViewport();
}
