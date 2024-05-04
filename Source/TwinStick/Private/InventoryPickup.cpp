#include "InventoryPickup.h"
#include "Net/UnrealNetwork.h"
#include "Templates/SubclassOf.h"

AInventoryPickup::AInventoryPickup(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Cooldown = 0.00f;
    this->bIsMissionItem = false;
    this->bIsDestroyedByExplosion = true;
    this->InventoryItemClass = NULL;
    this->InventoryItem = NULL;
    this->Quantity = 0;
    this->DestroyParticle = NULL;
    this->DestroySound = NULL;
    this->bDropped = false;
}

void AInventoryPickup::SetQuantity(int32 InQuantity) {
}

void AInventoryPickup::SetInventoryItemClass(TSubclassOf<UItem> ItemClass) {
}

void AInventoryPickup::PickedUp_Implementation(AHeroCharacterBase* Hero, AInventoryPickup* PickupItem, UItem* InInventoryItem) {
}

void AInventoryPickup::OnRep_Dropped() {
}

void AInventoryPickup::MulticastDestroyPickup_Implementation(bool bExploded) {
}

void AInventoryPickup::HandleItemPickedUp_Implementation(UInventoryComponent* Inventory, AHeroCharacterBase* Hero) {
}



void AInventoryPickup::DestroyPickup(bool bExploded, bool bFromLootManager) {
}

void AInventoryPickup::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AInventoryPickup, Quantity);
    DOREPLIFETIME(AInventoryPickup, bDropped);
}


