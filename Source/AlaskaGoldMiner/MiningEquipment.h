// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Runtime/CoreUObject/Public/UObject/ConstructorHelpers.h"
#include "Runtime/Engine/Classes/Sound/SoundWave.h"
#include "Runtime/Engine/Classes/Engine/World.h"
#include "Runtime/Engine/Classes/Kismet/GameplayStatics.h"
#include "MiningEquipment.generated.h"

UCLASS()
class ALASKAGOLDMINER_API AMiningEquipment : public AActor
{
	GENERATED_BODY()
	
private:
	USoundWave* woosh;

public:	
	// Sets default values for this actor's properties
	AMiningEquipment();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
	void EquipmentDoMine();
	virtual void EquipmentDoMine_Implementation();

	UPROPERTY(BlueprintReadWrite)
	TSubclassOf<AActor> RespawnClass;
	
	UPROPERTY(BlueprintReadWrite)
	float Damage;

	UPROPERTY(BlueprintReadWrite)
	bool Active;
};
