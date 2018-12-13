// Fill out your copyright notice in the Description page of Project Settings.

#include "GamePadDetection.h"

bool UGamePadDetection::IsGamePadConnected() {
	auto genericApplication = FSlateApplication::Get().GetPlatformApplication();

	return genericApplication.Get() != nullptr && genericApplication->IsGamepadAttached();
}


