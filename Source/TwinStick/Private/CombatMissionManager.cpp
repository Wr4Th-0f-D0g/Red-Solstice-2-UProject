#include "CombatMissionManager.h"
#include "Net/UnrealNetwork.h"

ACombatMissionManager::ACombatMissionManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bMatchEnded = false;
    this->MissionLocationsTable = NULL;
    this->RequisitionDataAsset = NULL;
    this->TutorialMissionStartDelay = 30.00f;
    this->bDisablePrimaryMissions = false;
    this->bDisableSecondaryMission = false;
    this->ActivePrimaryMissionIndex = -1;
    this->ActivePrimaryMission = NULL;
    this->TotalPrimaryMissions = 0;
    this->PrimaryMissionsCompleted = 0;
    this->bIsCampaignMission = false;
    this->SecondaryMissionsCompleted = 0;
    this->CrisisMissionsSpawned = 0;
    this->bWaveGenerationOverride = false;
    this->bWaveGenOverride_IsSkirmish = true;
    this->WaveGenOverride_Difficulty = EDifficulty::Recruit;
    this->WaveGenOverride_Day = 30;
    this->WaveGenOverride_Infest = 1;
    this->WaveGenOverride_Players = 1;
    this->WaveGenOverride_Seed = -1;
}

void ACombatMissionManager::StartSecondaryMission(const FGameplayTag& MissionTag) {
}

void ACombatMissionManager::StartPrimaryMission() {
}

bool ACombatMissionManager::IsTutorial() const {
    return false;
}

bool ACombatMissionManager::IsSkirmishMatch() const {
    return false;
}

bool ACombatMissionManager::IsCampaignMission() const {
    return false;
}

bool ACombatMissionManager::HasActiveEvacMission() const {
    return false;
}

void ACombatMissionManager::HandleNewWave(int32 WaveNumber) {
}

void ACombatMissionManager::HandleMatchEnded(bool bVictory, const TArray<FPlayerStatsPair>& PlayerStats, float MatchTime) {
}

void ACombatMissionManager::HandleLocationsMapped(ULocationManager* LocationManager) {
}

int32 ACombatMissionManager::GetWaveCount() const {
    return 0;
}

int32 ACombatMissionManager::GetSpawnedSecondaryMissionCount() const {
    return 0;
}

TArray<FCombatLayerMissionSpawnParameters> ACombatMissionManager::GetSecondaryMissionPool() const {
    return TArray<FCombatLayerMissionSpawnParameters>();
}

TArray<FGameplayTag> ACombatMissionManager::GetPrimaryMissionTags() const {
    return TArray<FGameplayTag>();
}

float ACombatMissionManager::GetPrimaryMissionStartDelay() const {
    return 0.0f;
}

TArray<FCombatLayerMissionSpawnParameters> ACombatMissionManager::GetPrimaryMissionSequence() const {
    return TArray<FCombatLayerMissionSpawnParameters>();
}

int32 ACombatMissionManager::GetPrimaryMissionCount() const {
    return 0;
}

FGameplayTag ACombatMissionManager::GetNextSecondaryMissionTag() const {
    return FGameplayTag{};
}

FGameplayTag ACombatMissionManager::GetNextPrimaryMissionTag() const {
    return FGameplayTag{};
}

FGameplayTag ACombatMissionManager::GetNextCrisisMissionTag() const {
    return FGameplayTag{};
}

FGameplayTag ACombatMissionManager::GetNextBonusMissionTag() const {
    return FGameplayTag{};
}

AMissionSetupActor* ACombatMissionManager::GetMissionSetupActor() const {
    return NULL;
}

EStrategyMissionResult ACombatMissionManager::GetMissionResult(int32& PlayersEvacuated) const {
    return EStrategyMissionResult::Invalid;
}

int32 ACombatMissionManager::GetMaxSimultaneousSecondaryMissions() const {
    return 0;
}

int32 ACombatMissionManager::GetMaxSecondaryMissionsPerDeployment_Implementation() const {
    return 0;
}

TArray<FStrategyMissionLocation> ACombatMissionManager::GetLevelLocations() const {
    return TArray<FStrategyMissionLocation>();
}

EDifficulty ACombatMissionManager::GetGameDifficulty() const {
    return EDifficulty::None;
}

float ACombatMissionManager::GetCurrentWaveProgress() const {
    return 0.0f;
}

FGameplayTag ACombatMissionManager::FindNextSecondaryMission() const {
    return FGameplayTag{};
}

bool ACombatMissionManager::CanStartNextPrimaryMission() const {
    return false;
}

bool ACombatMissionManager::CanSpawnSecondaryMissions() const {
    return false;
}

bool ACombatMissionManager::CanSpawnPrimaryMissions() const {
    return false;
}

void ACombatMissionManager::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ACombatMissionManager, TotalPrimaryMissions);
    DOREPLIFETIME(ACombatMissionManager, PrimaryMissionsCompleted);
}


