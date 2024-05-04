#include "EnemySearchParams.h"

FEnemySearchParams::FEnemySearchParams() {
    this->bIncludeMonsters = false;
    this->bIncludeEnemyMarines = false;
    this->Range = 0.00f;
    this->MinRange = 0.00f;
    this->AttitudeActor = NULL;
    this->Attitude = ETeamAttitude::Friendly;
    this->bIncludeDead = false;
}

