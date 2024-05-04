#include "StrategyCampaignData.h"

UStrategyCampaignData::UStrategyCampaignData() {
    this->Corporation = ECorporation::Elysium;
    this->BaseRegionalInfestationGrowthModifier = 0.00f;
    this->MissionDataTable = NULL;
    this->MissionDescriptionTable = NULL;
    this->BaseUpgradeData = NULL;
    this->DefaultClass = ESolsticeHeroClass::ESHC_Assault;
    this->DLCRequirementCode = 0;
    this->PerAirSupportSliderStepCost = 0.25f;
    this->PerArtillerySupportSliderStepCost = 0.15f;
    this->PerHordeControlSliderStepCost = 0.40f;
    this->PerSecondaryMissionSliderStepCost = 0.00f;
    this->CampaignInitializerClass = NULL;
    this->bOverrideMaxInfestation = false;
    this->MaxInfestationOverride = 10;
    this->ShowOutpostRelatedUI = true;
    this->CampaignProposedDifficulty = 0;
    this->CampaignAllowsWeaponMods = false;
    this->CampaignHasBlackOps = false;
    this->HQGrantsColonyBonus = false;
    this->HQCanBeDamaged = false;
    this->HQMovesWithDropship = false;
    this->CampaignIsInBETA = false;
}

TArray<UTechTreeData*> UStrategyCampaignData::GetTechTrees() const {
    return TArray<UTechTreeData*>();
}

UTechTreeData* UStrategyCampaignData::GetTechTreeMatching(const FGameplayTag& TechTag) const {
    return NULL;
}

TArray<FSolsticeTechData> UStrategyCampaignData::GetTechs() const {
    return TArray<FSolsticeTechData>();
}

TArray<FCampaignCinematic> UStrategyCampaignData::GetCinematicsForMission(FGameplayTag MissionTag) const {
    return TArray<FCampaignCinematic>();
}


