// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Ore.generated.h"

UCLASS()
class ALASKAGOLDMINER_API AOre : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AOre();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(BlueprintReadWrite)
	TSubclassOf<AOre> RefinesInto;

	UPROPERTY(BlueprintReadWrite)
	int Density;

	UPROPERTY(BlueprintReadWrite)
	int Value;
	
};
