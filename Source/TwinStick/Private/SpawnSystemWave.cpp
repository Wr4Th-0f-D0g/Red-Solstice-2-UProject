#include "SpawnSystemWave.h"

FSpawnSystemWave::FSpawnSystemWave() {
    this->WaveSpawningType = EWaveSpawningType::EWST_NoChange;
    this->WaveAdvanceTime = 0.00f;
    this->LastSpawnTime = 0.00f;
    this->SpawnFrequency = 0.00f;
    this->SpawnDelayAfterFinishingSpawningContant = 0.00f;
    this->NextWaveMonsterCount = 0;
    this->bFinishedSpawning = false;
    this->bIgnoreWaveMonsters = false;
    this->WaveNum = 0;
    this->bCanWaveAdvanceWithTrigger = false;
    this->bIgnoreMonsterWaveCount = false;
}

