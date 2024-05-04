#include "CombatLayerMissionSpawnParameters.h"

FCombatLayerMissionSpawnParameters::FCombatLayerMissionSpawnParameters() {
    this->MinimumDifficulty = EDifficulty::None;
    this->MaximumDifficulty = EDifficulty::None;
    this->RequiredMonsterWaveProgress = 0.00f;
}

