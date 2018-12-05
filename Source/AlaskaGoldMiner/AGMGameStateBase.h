// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameStateBase.h"
#include "MiningEquipment.h"
#include "Runtime/Engine/Classes/Engine/World.h"
#include "Runtime/Engine/Classes/Kismet/GameplayStatics.h"
#include "Runtime/CoreUObject/Public/UObject/ConstructorHelpers.h"
#include "Runtime/Engine/Classes/Sound/SoundCue.h"
#include "AGMGameStateBase.generated.h"

UCLASS()
class ALASKAGOLDMINER_API AAGMGameStateBase : public AGameStateBase
{
	GENERATED_BODY()

public:
	AAGMGameStateBase();

	UFUNCTION(BlueprintCallable)
	void SpawnAndEquipItem(TSubclassOf<AMiningEquipment> ItemClass);

	UFUNCTION(BlueprintCallable)
	int GetBalance();

	UFUNCTION(BlueprintCallable)
	bool CanAfford(int Price);

	UFUNCTION(BlueprintCallable)
	void Purchase(TSubclassOf<AMiningEquipment> Item, int Price);

	UFUNCTION(BlueprintCallable)
	void AddBalance(int Dollars);

	UFUNCTION(BlueprintCallable)
	bool Owns(TSubclassOf<AMiningEquipment> Item);

private:
	UPROPERTY()
	int Balance;

	UPROPERTY()
	TArray<TSubclassOf<AMiningEquipment>> OwnedEquipment;

	USoundCue* coinSound;
};
