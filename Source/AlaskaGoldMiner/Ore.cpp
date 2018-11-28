// Fill out your copyright notice in the Description page of Project Settings.

#include "Ore.h"


// Sets default values
AOre::AOre()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;
	this->RefinesInto = this->GetClass();
	this->Density = 1;
	this->Value = 1;
}

// Called when the game starts or when spawned
void AOre::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AOre::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

