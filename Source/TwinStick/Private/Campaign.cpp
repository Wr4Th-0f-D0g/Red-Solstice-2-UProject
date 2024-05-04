#include "Campaign.h"
#include "BotManager.h"

UCampaign::UCampaign() {
    this->GameDifficulty = EDifficulty::Soldier;
    this->Corporation = ECorporation::Elysium;
    this->PlayerData = NULL;
    this->CampaignData = NULL;
    this->bSkipFirstMission = false;
    this->bTutorial = true;
    this->bFastCampaign = false;
    this->bIronman = false;
    this->CampaignMode = ECampaignMode::FreeForAll;
    this->BotManager = CreateDefaultSubobject<UBotManager>(TEXT("BotManager"));
    this->StoriesDatatable = NULL;
    this->DocumentsDatatable = NULL;
    this->CharactersDatatable = NULL;
    this->BestiaryDatatable = NULL;
    this->bHasNewHordeArrivalStep = false;
    this->bHasNewAirSupportStep = false;
    this->bHasNewArtilleryStep = false;
}

void UCampaign::SetSkipFirstMission(bool bSkip) {
}

void UCampaign::SetPlayTutorial(bool Tutorial) {
}

void UCampaign::SetIronman(bool Ironman) {
}

void UCampaign::SetGameDifficulty(EDifficulty InDifficulty) {
}

void UCampaign::SetFastCampaign(bool FastCampaign) {
}

void UCampaign::SetCorporation(ECorporation InCorporation) {
}

void UCampaign::SetCampaignSelection(FGameplayTag CampaignSelectionTag) {
}

void UCampaign::SetCampaignMode(ECampaignMode InCampaignMode) {
}

void UCampaign::RemoveUpgradeTag(FGameplayTag InTag) {
}

void UCampaign::RemoveTutorialTag(FGameplayTag InTag) {
}

void UCampaign::RemoveTechTag(FGameplayTag InTag) {
}

void UCampaign::RemoveMiscellaneousTag(FGameplayTag InTag) {
}

void UCampaign::RemoveCampaignTag(FGameplayTag InTag) {
}

bool UCampaign::IsPlayingTutorial() const {
    return false;
}

bool UCampaign::HasProgressTag(FGameplayTag InTag, bool bExact) const {
    return false;
}

bool UCampaign::HasAnyProgressTags(const FGameplayTagContainer& InTagContainer, bool bExact) const {
    return false;
}

bool UCampaign::HasAllProgressTags(const FGameplayTagContainer& InTagContainer, bool bExact) const {
    return false;
}

bool UCampaign::GetNextCampaignMission(FCampaignMissionGenerationData& OutMissionData) const {
    return false;
}

ESolsticeHeroClass UCampaign::GetDefaultHeroClassForCampaign() const {
    return ESolsticeHeroClass::ESHC_Invalid;
}

bool UCampaign::GetAvailableCampaignMissions(TArray<FCampaignMissionGenerationData>& OutMissionData) const {
    return false;
}

void UCampaign::CompleteMission(const FCampaignMissionGenerationData& InMissionData) {
}

bool UCampaign::CanSkipTutorial() const {
    return false;
}

bool UCampaign::CanSkipFirstMission() const {
    return false;
}

void UCampaign::AddUpgradeTag(FGameplayTag InTag) {
}

void UCampaign::AddTutorialTag(FGameplayTag InTag) {
}

void UCampaign::AddTechTag(FGameplayTag InTag) {
}

void UCampaign::AddMiscellaneousTag(FGameplayTag InTag) {
}

void UCampaign::AddCampaignTag(FGameplayTag InTag) {
}


