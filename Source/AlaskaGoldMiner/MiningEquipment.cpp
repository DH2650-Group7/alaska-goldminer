// Fill out your copyright notice in the Description page of Project Settings.

#include "MiningEquipment.h"


// Sets default values
AMiningEquipment::AMiningEquipment()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	this->RespawnClass = this->GetClass();
	this->Damage = 1.0f;
}

// Called when the game starts or when spawned
void AMiningEquipment::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMiningEquipment::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}
