#include "WallBurningManager.h"

UWallBurningManager::UWallBurningManager() {
    this->BurningInterval = 1.00f;
    this->BurnStacks = 1;
    this->BurningRadius = 100.00f;
    this->BiomassDamageIntensity = 255.00f;
    this->BurningBuffClass = NULL;
}

void UWallBurningManager::StopBurning() {
}

void UWallBurningManager::StartBurning(AActor* Owner, APawn* Instigator, bool EnableDebug) {
}

void UWallBurningManager::SetBurnStacks(int32 InBurnStacks) {
}

bool UWallBurningManager::GetPoints(TArray<FWallBurningPoint>& Points) {
    return false;
}

void UWallBurningManager::AddPoint(FVector Location, float Duration) {
}


