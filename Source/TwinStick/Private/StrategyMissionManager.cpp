#include "StrategyMissionManager.h"

UStrategyMissionManager::UStrategyMissionManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MissionsSpawnedThisWeek = 0;
    this->CombatMissionCounter = 0;
    this->SupplyMissionCounter = 0;
    this->CampaignMissionCounter = 0;
    this->StrategyMissionTable = NULL;
    this->StrategyMissionGroupTable = NULL;
    this->MissionManagerAC = NULL;
    this->MissionAddedSound = NULL;
}

void UStrategyMissionManager::QueueStrategyMission(float InDelayHours, const FGameplayTag& InMissionTag, ARegion* InTargetRegion) {
}

bool UStrategyMissionManager::K2_SpawnStrategyMissionFromTag(ARegion* InRegion, FGameplayTag InTag, AStrategyMission*& OutMission, bool bAutoDetect) {
    return false;
}

bool UStrategyMissionManager::K2_SpawnStrategyMission(ARegion* InRegion, FName MissionName, AStrategyMission*& OutMission, bool bAutoDetect) {
    return false;
}

bool UStrategyMissionManager::K2_SpawnCampaignMission(ARegion* InRegion, AMissionBase* ForMission, const FCampaignMissionGenerationData& InData, AStrategyMission*& OutMission) {
    return false;
}

void UStrategyMissionManager::HandleMissionStatusChanged(const FStrategyMissionTimer& InMissionStatus) {
}

void UStrategyMissionManager::HandleMissionRequested(ARegion* HomeRegion, const FStrategyMissionGroupData& GroupData) {
}

void UStrategyMissionManager::HandleMissionNuked(AStrategyMission* TargetMission) {
}

void UStrategyMissionManager::HandleMissionExpired(AStrategyMission* TargetMission) {
}

void UStrategyMissionManager::HandleMissionCompleted(AStrategyMission* TargetMission, bool Success) {
}

void UStrategyMissionManager::HandleMissionAborted(AStrategyMission* TargetMission) {
}

void UStrategyMissionManager::HandleDropshipStatusChanged(EDropshipStatus InStatus) {
}

TArray<AStrategyMission*> UStrategyMissionManager::GetMissionsInRegion(ARegion* InRegion) const {
    return TArray<AStrategyMission*>();
}

TArray<AStrategyMission*> UStrategyMissionManager::GetMissionsForDisplay() const {
    return TArray<AStrategyMission*>();
}

TMap<EStrategyMissionToken, int32> UStrategyMissionManager::GetFilteredMissionTokens() const {
    return TMap<EStrategyMissionToken, int32>();
}

UStrategyCampaignData* UStrategyMissionManager::GetCampaignData() const {
    return NULL;
}

TMap<EStrategyMissionToken, int32> UStrategyMissionManager::GetAvailableMissionTokens() const {
    return TMap<EStrategyMissionToken, int32>();
}

TArray<AStrategyMission*> UStrategyMissionManager::GetAllMissions() const {
    return TArray<AStrategyMission*>();
}

TArray<AStrategyMission*> UStrategyMissionManager::GetActiveMissionsInRegion(ARegion* HomeRegion) const {
    return TArray<AStrategyMission*>();
}

TArray<AStrategyMission*> UStrategyMissionManager::GetActiveMissions() const {
    return TArray<AStrategyMission*>();
}

void UStrategyMissionManager::AdjustStrategyMission(AStrategyMission* InMission, EStrategyMissionLocationAdjustment AdjustmentType) {
}


