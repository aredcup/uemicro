// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Components/Button.h"
#include "StartUserWidget.generated.h"

/**
 * start game widget
 */
UCLASS()
class MICRO_API UStartUserWidget : public UUserWidget
{
	GENERATED_BODY()
	
public:
	/** start game button */
	UPROPERTY()
		UButton* StartBtn;
	/** register account button */
	UPROPERTY()
		UButton* RegisterBtn;
	/** quit game button */
	UPROPERTY()
		UButton* QuitBtn;
public:
	virtual bool Initialize() override;
	UFUNCTION()
		void QuitBtnOnClickedEvent();
};
