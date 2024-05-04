#include "ReplicatedMineFieldItem.h"

FReplicatedMineFieldItem::FReplicatedMineFieldItem() {
    this->MineStaticMeshComponent = NULL;
    this->MineMaterialInstance = NULL;
    this->ThreatLevelToDetonate = 0;
    this->SpawnTime = 0.00f;
    this->CombinedThreatLevel = 0;
    this->bMineDestroyed = false;
    this->RadiusMultiplier = 0.00f;
}

