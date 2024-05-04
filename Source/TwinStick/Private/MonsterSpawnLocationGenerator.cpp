#include "MonsterSpawnLocationGenerator.h"

FMonsterSpawnLocationGenerator::FMonsterSpawnLocationGenerator() {
    this->AmbushDistanceMin = 0.00f;
    this->AmbushDistanceMax = 0.00f;
    this->NonAmbushDistanceMin = 0.00f;
    this->NonAmbushShortDistanceMax = 0.00f;
    this->NonAmbushFarDistanceMax = 0.00f;
    this->MinSpawnDistFromPlayers = 0.00f;
    this->MinSpawnDistFromSmallMonsters = 0.00f;
    this->MinSpawnDistFromBigMonsters = 0.00f;
    this->MinDistBetweenValidPoints = 0.00f;
    this->MaxNavProjectDist = 0.00f;
    this->TimeAllottedToAmbushGeneration = 0.00f;
    this->timeAlottedToNonAmbushGeneration = 0.00f;
    this->TentacleDistFromCOMMin = 0.00f;
    this->TentacleDistFromCOMMax = 0.00f;
}

