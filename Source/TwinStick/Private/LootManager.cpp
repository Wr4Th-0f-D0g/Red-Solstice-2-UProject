#include "LootManager.h"
#include "Templates/SubclassOf.h"

ULootManager::ULootManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->BasicWeight = 0.00f;
    this->AverageWeight = 0.00f;
    this->QualityWeight = 0.00f;
    this->TotalCurrent = 0;
    this->BasicCurrent = 0;
    this->AverageCurrent = 0;
    this->QualityCurrent = 0;
    this->SpawnLootDelay = 5.00f;
    this->bDebugLootSpawns = false;
    this->LineTraceDebugType = ESolsticeDebugTraceType::Duration;
    this->LineTraceDebugTime = 5.00f;
    this->bDebugBoxPersistant = false;
    this->DebugBoxLifeTime = 5.00f;
    this->DebugBoxThickness = 1.00f;
    this->OutsideBuildingSpawnChance = 0.50f;
    this->LocationManager = NULL;
}


AInventoryPickup* ULootManager::SpawnPickupItem(TSubclassOf<AInventoryPickup> Pickup, FVector SpawnLocation) {
    return NULL;
}

void ULootManager::PopulateLockers(AMissionSetupActor* MissionSetupActor) {
}

void ULootManager::MulticastDestroyPickup_Implementation(AInventoryPickup* InventoryPickup, bool bExploded) {
}

void ULootManager::HandleLocationsMapped(ULocationManager* Sender) {
}

TSoftClassPtr<AInventoryPickup> ULootManager::GetRandomItemTypeFromTable(FDataTableRowHandle InDataTableRow, ELootTableElement InTableElementToUse) {
    return NULL;
}

ELockerType ULootManager::GetLockerType() {
    return ELockerType::ELT_None;
}

bool ULootManager::GenerateLootArrayDataTable(FDataTableRowHandle DataTableRowHandle, ELootTableElement Element, TArray<FGeneratedLootItem>& OutLootArray) {
    return false;
}

TSoftClassPtr<AInventoryPickup> ULootManager::FillLockerInventory(ELockerType LType) {
    return NULL;
}


