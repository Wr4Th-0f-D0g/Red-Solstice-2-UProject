#include "StrategyGameModeBase.h"

AStrategyGameModeBase::AStrategyGameModeBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bUseSeamlessTravel = true;
    this->bAutoCompleteMissions = false;
    this->bAutoCompleteMissionsPIE = true;
    this->PreviewHeroClass = NULL;
    this->ArmoryBotControllerClass = NULL;
    this->LastSkirmishMSA = NULL;
    this->BeaconClassTest = NULL;
}

void AStrategyGameModeBase::StopDeploymentCountDown() {
}

void AStrategyGameModeBase::StartDeploymentCountdown() {
}

void AStrategyGameModeBase::SpawnPreviewHero(AStrategyControllerBase* PC) {
}

AHeroCharacterBase* AStrategyGameModeBase::SpawnPreviewBot(UBotStatus* BotStatus) {
    return NULL;
}

AMissionSetupActor* AStrategyGameModeBase::SpawnMissionSetupActorCampaign(AStrategyMission* InMission) {
    return NULL;
}

void AStrategyGameModeBase::SetActiveMissionSetupActor(AMissionSetupActor* InMissionSetupActor) {
}

AMissionSetupActor* AStrategyGameModeBase::LoadMissionSetupActor(const FStrategyMissionSettings& InMissionSettings) {
    return NULL;
}

void AStrategyGameModeBase::LaunchGame() {
}

bool AStrategyGameModeBase::IsHotJoiningCoop() const {
    return false;
}

bool AStrategyGameModeBase::IsHotJoining() const {
    return false;
}

void AStrategyGameModeBase::HandleDeploymentCountdownCompleted() {
}

void AStrategyGameModeBase::HandleCreateSessionCompleted(const FSolsticeOnlineResultInformation& Info) {
}

void AStrategyGameModeBase::HandleCampaignTagAdded(const FGameplayTag& AddedTag) {
}

int32 AStrategyGameModeBase::GetNumMarines() {
    return 0;
}

FTimerHandle AStrategyGameModeBase::GetDeploymentTimeHandle() const {
    return FTimerHandle{};
}

void AStrategyGameModeBase::DespawnPreviewBot(UBotStatus* InBotStatus) {
}

bool AStrategyGameModeBase::CanAddBot() const {
    return false;
}


