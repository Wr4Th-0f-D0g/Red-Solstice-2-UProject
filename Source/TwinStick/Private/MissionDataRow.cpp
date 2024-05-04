#include "MissionDataRow.h"

FMissionDataRow::FMissionDataRow() {
    this->PackageID = 0;
    this->AllowedCampaigns = 0;
    this->MinimumDifficulty = EDifficulty::None;
    this->MaximumDifficulty = EDifficulty::None;
    this->RequiredMonsterWaveProgress = 0.00f;
}

