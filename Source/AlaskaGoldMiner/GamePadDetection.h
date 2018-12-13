// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "SlateBasics.h"
#include "GamePadDetection.generated.h"

/**
 * 
 */
UCLASS()
class ALASKAGOLDMINER_API UGamePadDetection : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	
public:

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "GamepadConnected"), category = "System Information")
	static bool IsGamePadConnected();
	
};
