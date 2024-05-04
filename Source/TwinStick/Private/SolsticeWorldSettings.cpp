#include "SolsticeWorldSettings.h"

ASolsticeWorldSettings::ASolsticeWorldSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->GameplayClassOverride = ESolsticeHeroClass::ESHC_Invalid;
    this->GameplaySuitVersionOverride = ESuitTier::MarkVI;
    this->bAlwaysStartAtGroupStart = false;
    this->bDropshipEntry = false;
    this->bOverrideGameDifficulty = false;
    this->GameDifficultyOverride = EDifficulty::Soldier;
    this->bOverrideAI_Marines = false;
    this->bOverrideSkills = false;
    this->StartingSkillPoints = 0;
    this->MaximumSkillLevel = 3;
    this->bSpawnMeshes = false;
    this->bOverrideWeapons = false;
    this->bOverrideInventory = false;
    this->SelectedCampaign = ECorporation::Elysium;
    this->CampaignMode = ECampaignMode::Coop;
    this->TutorialMode = false;
    this->MatchType = EMatchType::Ranked;
}


