#include "WaveGenerationDataAsset.h"

UWaveGenerationDataAsset::UWaveGenerationDataAsset() {
    this->NumberWavesToGenerate = 16;
    this->NumberPointsPerPlayerFinalWaveIncrease = 125;
    this->InfestationModifierDataTable = NULL;
    this->WavePeaksTable = NULL;
    this->MonsterGroupTagTable = NULL;
    this->BaseMaximumMonsterThreatModifier = 10;
    this->PlayerScalingMultiplier = 0.33f;
    this->VehicleScalingMultiplier = 2.00f;
    this->bWaveFiller = false;
    this->MonsterLimitInWave = 100;
}

void UWaveGenerationDataAsset::GenerateSpawnData(const UObject* WorldContext, const FSpawnGeneratorParams& GeneratorParams, FGeneratedSpawnInfo& OutGeneratedSpawnInfo) {
}


