#include "CivilianManager.h"
#include "Templates/SubclassOf.h"

UCivilianManager::UCivilianManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MaxCiviliansAtRallyPoint = 5;
    this->MinRallyPointRange = 1000.00f;
    this->MaxRallyPointRange = 8000.00f;
    this->ScanningDurationTimeMin = 0.00f;
    this->ScanningDurationTimeMax = 0.00f;
    this->MapMovementType = ECivilianMapMovement::MoveToEvac;
    this->RallypointTimeout = 120.00f;
    this->bSpawnCivilians = false;
    this->NumberOfCivilians = 0;
    this->CivilianRadiusToSpawn = 0;
    this->CivilianSpawnDelay = 0.50f;
    this->bDebugCivilianCollisionCheck = false;
}

void UCivilianManager::SpawnCivNextTick(TSubclassOf<ACivilianCharacterBase> Class, FTransform Transform) {
}

void UCivilianManager::SpawnCivilians(ULocationManager* InLocManager) {
}

void UCivilianManager::SpawnCivilian_NonPointer(FTransform SpawnLocation) {
}

ACivilianCharacterBase* UCivilianManager::SpawnCivilian(FTransform SpawnLocation) {
    return NULL;
}

float UCivilianManager::SetScannerOccupied(AScannerBase* InScanner, ACivilianCharacterBase* OccupyingCiv, bool bNewOccupied) {
    return 0.0f;
}

void UCivilianManager::RemoveCivilian(ACivilianCharacterBase* Civ) {
}

bool UCivilianManager::IsScannerOccupied(AScannerBase* InScanner, ACivilianCharacterBase*& OccupyingCiv) const {
    return false;
}

bool UCivilianManager::GetNextRallyPoint(ACivilianCharacterBase* CivilianChar, FRallyPoint& OutRallyPoint) {
    return false;
}

AScannerBase* UCivilianManager::GetClosestScannerToLoc(const FVector& Loc) const {
    return NULL;
}

FLocationInfo UCivilianManager::GetClosestScannerLoc(const FVector& CivilianLocation) {
    return FLocationInfo{};
}

TArray<ACivilianCharacterBase*> UCivilianManager::GetAllCivilians() const {
    return TArray<ACivilianCharacterBase*>();
}

void UCivilianManager::AddCivilian(ACivilianCharacterBase* Civ) {
}


