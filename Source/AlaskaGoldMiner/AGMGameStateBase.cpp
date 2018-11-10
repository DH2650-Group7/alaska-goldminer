// Fill out your copyright notice in the Description page of Project Settings.

#include "AGMGameStateBase.h"

AAGMGameStateBase::AAGMGameStateBase() {
	this->Balance = 10;

	ConstructorHelpers::FObjectFinder<USoundCue> propellerCue(TEXT("'/Game/Sounds/Coins'"));
	if (propellerCue.Object) {
		this->coinSound = propellerCue.Object;
	} else {
		UE_LOG(LogTemp, Error, TEXT("FAILED TO LOOKUP SOUND"))
	}
}


void AAGMGameStateBase::SpawnAndEquipItem(TSubclassOf<AMiningEquipment> ItemClass)
{
	TSubclassOf<AMiningEquipment> MyItemBlueprint;

	ConstructorHelpers::FObjectFinder<UBlueprint> ItemBlueprint(TEXT("Blueprint'/Game/Items/Blueprints/BP_ItemTest.BP_ItemTest'"));
	if (ItemBlueprint.Object) {
		MyItemBlueprint = (UClass*)ItemBlueprint.Object->GeneratedClass;
	}

	FVector Location(0.0f, 0.0f, 0.0f);
	FRotator Rotation(0.0f, 0.0f, 0.0f);
	FActorSpawnParameters SpawnInfo;
	// GetWorld()->SpawnActor<ItemClass>(Location, Rotation, SpawnInfo);
}

int AAGMGameStateBase::GetBalance()
{
	return Balance;
}

bool AAGMGameStateBase::CanAfford(int Price)
{
	return Price <= Balance;
}

void AAGMGameStateBase::Purchase(TSubclassOf<AMiningEquipment> Item, int Price)
{
	if (!this->CanAfford(Price))
		return;

	Balance -= Price;
	OwnedEquipment.Add(Item);

	UGameplayStatics::PlaySound2D(GetWorld(), coinSound);
}

void AAGMGameStateBase::AddBalance(int Dollars)
{
	Balance += Dollars;

	UGameplayStatics::PlaySound2D(GetWorld(), coinSound);
}

bool AAGMGameStateBase::Owns(TSubclassOf<AMiningEquipment> Item)
{
	return OwnedEquipment.Contains(Item);
}
