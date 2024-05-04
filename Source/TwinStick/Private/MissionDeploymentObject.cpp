#include "MissionDeploymentObject.h"

UMissionDeploymentObject::UMissionDeploymentObject() {
    this->PerGameDifficulty = 2.00f;
    this->PerInfestationLevel = 1.50f;
    this->PerStormLevel = 1.00f;
    this->PerGameMonth = 1.00f;
    this->ForGoodRegionIntelLevel = 1.00f;
    this->ForExcellentRegionIntelLevel = 1.00f;
    this->PerSquadRating = 1.00f;
    this->PerColonyBonus = 1.00f;
    this->PerSpecialistItem = 0.10f;
    this->PerResearchedTech = 0.15f;
    this->SquadRatingForHundredPercent = 0.00f;
    this->PerHordeArrivalStep = 2.00f;
    this->PerArtillerySupportStep = 1.00f;
    this->PerAirSupportStep = 0.75f;
}

float UMissionDeploymentObject::GetTechRating() const {
    return 0.0f;
}

float UMissionDeploymentObject::GetStormRating() const {
    return 0.0f;
}

float UMissionDeploymentObject::GetSquadRating() const {
    return 0.0f;
}

float UMissionDeploymentObject::GetLogisticsRating() const {
    return 0.0f;
}

float UMissionDeploymentObject::GetIntelRating() const {
    return 0.0f;
}

float UMissionDeploymentObject::GetInfestationRating() const {
    return 0.0f;
}

float UMissionDeploymentObject::GetGameMonthRating() const {
    return 0.0f;
}

float UMissionDeploymentObject::GetGameDifficultyRating() const {
    return 0.0f;
}

float UMissionDeploymentObject::GetDifficultyRating(int32 DeploymentPointsSpent) const {
    return 0.0f;
}

float UMissionDeploymentObject::GetDeploymentRating(int32 DeploymentPointsSpent) const {
    return 0.0f;
}

float UMissionDeploymentObject::GetColonyBonusRating() const {
    return 0.0f;
}

EStrategyMissionResult UMissionDeploymentObject::GetAutocompleteResult(int32 DeploymentPointsSpent) const {
    return EStrategyMissionResult::Invalid;
}

float UMissionDeploymentObject::GetAutocompleteChance(int32 DeploymentPointSpent, int32 DifficultyRatingDelta) const {
    return 0.0f;
}


