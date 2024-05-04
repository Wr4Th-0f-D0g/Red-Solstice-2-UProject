#include "CombatTrackingSubsystem.h"

UCombatTrackingSubsystem::UCombatTrackingSubsystem() {
    this->bMatchEnded = false;
    this->bFinalEvacSpawned = false;
    this->bFinalCountdownExpired = false;
    this->GameStartedTime = -1.00f;
}

void UCombatTrackingSubsystem::UpdatePlayersProgress() {
}

void UCombatTrackingSubsystem::LogStrolSubstanceKilled(APawn* Instigator) {
}

void UCombatTrackingSubsystem::LogShotFired(APawn* Instigator, bool bHit, bool bPrimaryWeapon) {
}

void UCombatTrackingSubsystem::LogSecondaryMissionCompleted() {
}

void UCombatTrackingSubsystem::LogPrimaryMissionCompleted() {
}

void UCombatTrackingSubsystem::LogPlayerTasksCompleted(const AHeroCharacterBase* Player, FGameplayTagContainer CompletedTasks) {
}

void UCombatTrackingSubsystem::LogPlayerRevived(const AHeroCharacterBase* RevivedPlayer, APawn* Instigator) {
}

void UCombatTrackingSubsystem::LogPlayerMedalReceived(const AHeroCharacterBase* Player, FGameplayTag MedalTag, EDifficulty AwardedDifficulty) {
}

void UCombatTrackingSubsystem::LogPlayerHealed(const AHeroCharacterBase* HealedPlayer, APawn* Instigator, float Amount) {
}

void UCombatTrackingSubsystem::LogOverrunMinutes(float InMinutes) {
}

void UCombatTrackingSubsystem::LogNewMonsterWave() {
}

void UCombatTrackingSubsystem::LogMonsterCaptured(const AMonsterCharacterBase* Monster) {
}

void UCombatTrackingSubsystem::LogFluffyHunt() {
}

void UCombatTrackingSubsystem::LogFinalEvacSpawned() {
}

void UCombatTrackingSubsystem::LogCivilianRescued() {
}

void UCombatTrackingSubsystem::LogCampaignMissionCompleted(const FGameplayTag& CampaignTag) {
}

void UCombatTrackingSubsystem::LogBiomassKilled() {
}

void UCombatTrackingSubsystem::LogBiomassDamaged(APawn* Instigator, float Damage) {
}

void UCombatTrackingSubsystem::HandleHostQuitSkirmishMatch() {
}

TArray<FPlayerStatsPair> UCombatTrackingSubsystem::GetPlayerStatsArray() const {
    return TArray<FPlayerStatsPair>();
}

float UCombatTrackingSubsystem::GetBestStatValue(FGameplayTag StatTag) const {
    return 0.0f;
}

void UCombatTrackingSubsystem::ForceGameEnd(bool bVictory) {
}

void UCombatTrackingSubsystem::DebugPromotePlayer(AHeroCharacterBase* InPlayer) {
}

void UCombatTrackingSubsystem::CalculateMVPSupport(float& OutResult, FText& OutName) {
}

void UCombatTrackingSubsystem::CalculateMVPRecon(float& OutResult, FText& OutName) {
}

void UCombatTrackingSubsystem::CalculateMVPMatch(float& OutResult, FText& OutName) {
}

void UCombatTrackingSubsystem::CalculateMVPCombat(float& OutResult, FText& OutName) {
}

void UCombatTrackingSubsystem::AddTagForAllPlayers(const FGameplayTag& ProfileTag) {
}

void UCombatTrackingSubsystem::AddPlayerXP(const AHeroCharacterBase* Player, float XP, bool bForceUpdate) {
}

void UCombatTrackingSubsystem::AddPlayerStat(const AHeroCharacterBase* Player, const FGameplayTag& InTag, float Value, bool bForceUpdate) {
}


