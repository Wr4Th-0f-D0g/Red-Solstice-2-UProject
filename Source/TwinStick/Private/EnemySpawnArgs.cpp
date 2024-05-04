#include "EnemySpawnArgs.h"

FEnemySpawnArgs::FEnemySpawnArgs() {
    this->Spawner = NULL;
    this->bSpawnerSpawned = false;
    this->bPreSpawned = false;
    this->bIgnoreCap = false;
    this->bDontProject = false;
    this->bIsPatrolMonster = false;
    this->bFromMissionTask = false;
    this->bDoNotSpawnController = false;
}

