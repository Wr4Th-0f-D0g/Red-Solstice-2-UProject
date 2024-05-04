#include "SpawnSystemWaveInfo.h"

FSpawnSystemWaveInfo::FSpawnSystemWaveInfo() {
    this->WaveSpawningType = EWaveSpawningType::EWST_NoChange;
    this->NextWaveMonsterCount = 0;
    this->NextWaveTime = 0.00f;
    this->WaveSpawnFrequency = 0.00f;
    this->WaveStartTime = 0.00f;
    this->bIgnoreMonsterWaveCount = false;
    this->bCanWaveAdvanceWithTrigger = false;
}

