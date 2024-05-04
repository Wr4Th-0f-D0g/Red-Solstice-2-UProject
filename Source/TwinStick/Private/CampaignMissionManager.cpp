#include "CampaignMissionManager.h"
#include "Templates/SubclassOf.h"

ACampaignMissionManager::ACampaignMissionManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RespawnableMission = NULL;
    this->StrategyMapBeacon = NULL;
}

bool ACampaignMissionManager::TryPlayCinematics(const FGameplayTag MissionTag, ECampaignCinematicPlayMode PlayMode) {
    return false;
}

void ACampaignMissionManager::TrackStrategyMissionForCampaign(AStrategyMission* InStrategyMission, AMissionBase* InCampaignMission) {
}

AMissionBase* ACampaignMissionManager::StartMission(FName InMissionName) {
    return NULL;
}

void ACampaignMissionManager::StartCampaignMission(FGameplayTag InMissionTag) {
}

AMapBeacon* ACampaignMissionManager::SpawnBeacon(TSubclassOf<AMapBeacon> BeaconActorClass, FCampaignMissionLocation BeaconLocation) {
    return NULL;
}

void ACampaignMissionManager::SetRespawnableMission(AStrategyMission* InMission) {
}

void ACampaignMissionManager::ReleaseStrategyMission(AMissionBase* WorldMission) {
}

bool ACampaignMissionManager::MeetsRequirementsForQueuingCampaignMission(TArray<FCampaignMissionGenerationData>& AvailableMissions) const {
    return false;
}

bool ACampaignMissionManager::MeetsRequirementsForNextCampaignMission() const {
    return false;
}

bool ACampaignMissionManager::MeetsRequirementsForCampaignMission(const FCampaignMissionGenerationData& MissionData) const {
    return false;
}

bool ACampaignMissionManager::IsWaitTaskCompletedFor(AMissionBase* InMission, bool bTrackerFound) const {
    return false;
}

bool ACampaignMissionManager::IsStrategyMissionCompletedFor(AMissionBase* InMission) const {
    return false;
}

bool ACampaignMissionManager::IsCampaignMission(AMissionBase* InMission) const {
    return false;
}

bool ACampaignMissionManager::HasCampaignMissionActiveOrQueued() const {
    return false;
}

void ACampaignMissionManager::HandleClientPostStartupMedia() {
}

void ACampaignMissionManager::HandleCinematicsFinished(const FCampaignCinematic& Cinematic) {
}


void ACampaignMissionManager::HandleCampaignHourChanged(const FMarsTime& CurrentTime) {
}

FStrategyWaitTracker ACampaignMissionManager::GetWaitTrackerFor(AMissionBase* InMission, bool& bTrackerFound) const {
    return FStrategyWaitTracker{};
}

EStrategyMissionStatus ACampaignMissionManager::GetStrategyMissionStatusFor(AMissionBase* InMission) const {
    return EStrategyMissionStatus::Active;
}

AStrategyMission* ACampaignMissionManager::GetStrategyMissionFor(AMissionBase* InMission) const {
    return NULL;
}

FCampaignMissionGenerationData ACampaignMissionManager::GetNextCampaignMissionData() const {
    return FCampaignMissionGenerationData{};
}

FGameplayTag ACampaignMissionManager::GetMissionTagFor(AMissionBase* InMission) const {
    return FGameplayTag{};
}

TArray<FCampaignMissionGenerationData> ACampaignMissionManager::GetAvailableCampaignMissions() const {
    return TArray<FCampaignMissionGenerationData>();
}

void ACampaignMissionManager::AddWaitTrackerByDate(AMissionBase* InCampaignMission, FMarsTime WaitEndTime) {
}

void ACampaignMissionManager::AddWaitTracker(AMissionBase* InCampaignMission, int32 WaitHours) {
}


