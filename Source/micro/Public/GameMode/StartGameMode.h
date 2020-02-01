// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameMode.h"
#include "UI/StartUserWidget.h"
#include "StartGameMode.generated.h"

/**
 * 
 */
UCLASS()
class MICRO_API AStartGameMode : public AGameMode
{
	GENERATED_BODY()
	
public:
	/* game start widget */
	UPROPERTY()
		UStartUserWidget* StartWidget;
	
public:
	/** game start game mode */
	virtual void BeginPlay() override;
	
};
