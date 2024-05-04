#include "RTSCheatManager.h"
#include "Templates/SubclassOf.h"

URTSCheatManager::URTSCheatManager() {
    this->SpeedBuff = NULL;
    this->HealBuff = NULL;
    this->bStopAllAI = false;
}

void URTSCheatManager::WaveSkip() {
}

void URTSCheatManager::WaveGoto(int32 WaveNum) {
}

void URTSCheatManager::UseOldBodyParts(bool bUseOld) {
}

void URTSCheatManager::UploadPlayerStats() {
}

void URTSCheatManager::UploadLeaderboards() const {
}

void URTSCheatManager::UploadDebugLeaderboard(float InScore) {
}

void URTSCheatManager::ToggleSpeedBuff(ASolsticeCharacterBase* TargetChar) {
}

void URTSCheatManager::ToggleSpawnSystemEnabled() {
}

void URTSCheatManager::ToggleSkillOverride(ASolsticeCharacterBase* TargetChar) {
}

void URTSCheatManager::ToggleObserverHeightMode() {
}

void URTSCheatManager::ToggleMonsterDebugs(AMonsterCharacterBase* Monster) {
}

void URTSCheatManager::ToggleISMs() {
}

void URTSCheatManager::ToggleInfAmmo(ASolsticeCharacterBase* TargetChar) {
}

void URTSCheatManager::ToggleHiddenFromAI(ASolsticeCharacterBase* TargetChar) {
}

void URTSCheatManager::ToggleGodMode(ASolsticeCharacterBase* TargetChar) {
}

void URTSCheatManager::ToggleFOW() {
}

void URTSCheatManager::ToggleDMM() {
}

void URTSCheatManager::ToggleAllSpeedBuff() {
}

void URTSCheatManager::ToggleAllSkillOverride() {
}

void URTSCheatManager::ToggleAllMonsterDebugs() {
}

void URTSCheatManager::ToggleAllInfAmmo() {
}

void URTSCheatManager::ToggleAllHiddenFromAI() {
}

void URTSCheatManager::ToggleAllGodMode() {
}

void URTSCheatManager::ToggleAIEnabled() {
}

void URTSCheatManager::TeleportToMouseCursor() {
}

void URTSCheatManager::TeleportPlayerToPlayer(ASolsticeCharacterBase* TargetChar) {
}

void URTSCheatManager::TeleportPlayerToMe(ASolsticeCharacterBase* TargetChar) {
}

void URTSCheatManager::SuicideAll() {
}

void URTSCheatManager::Suicide(ASolsticeCharacterBase* TargetChar) {
}

void URTSCheatManager::SpawnMonsterFromClass(TSubclassOf<AMonsterCharacterBase> MonsterClass) {
}

void URTSCheatManager::SkipPrimaryMissionTask() {
}

void URTSCheatManager::ShowVehicleConnections() {
}

void URTSCheatManager::ShowPrefabs(FGameplayTag PrefabTag) {
}

void URTSCheatManager::ShowMonsters() {
}

void URTSCheatManager::ShowAllBigMap() {
}

void URTSCheatManager::SetPlayerStatInt(const FString& InName, int32 InValue) {
}

void URTSCheatManager::SetObserverSpringArm(float Val) {
}

void URTSCheatManager::SetLeaderboardScore(FName InLeaderboardName, int32 InScore) const {
}

void URTSCheatManager::Revive(ASolsticeCharacterBase* TargetChar) {
}

void URTSCheatManager::RemoveCampaignTag(const FString& RemovedTag) {
}

void URTSCheatManager::RebuildAllNavmesh() {
}

void URTSCheatManager::PrintReplicatedActorsAll() {
}

void URTSCheatManager::PrintReplicatedActorsActive() {
}

void URTSCheatManager::PrintCurrentMonsters() {
}

void URTSCheatManager::MagnumLives() {
}

void URTSCheatManager::MagnumDiesAgain() {
}

void URTSCheatManager::LeaderboardDownloaded(ULeaderboardInfo* LeaderboardInfo) {
}

void URTSCheatManager::KaosClose() {
}

void URTSCheatManager::Kaos() {
}

void URTSCheatManager::InfiniteSkills() {
}

void URTSCheatManager::InfiniteAmmo() {
}

void URTSCheatManager::IncrementPlayerStatInt(const FString& InName, int32 InValue) {
}

void URTSCheatManager::HideVehicleConnections() {
}

void URTSCheatManager::Heal(ASolsticeCharacterBase* TargetChar) {
}

void URTSCheatManager::GiveXP(ASolsticeCharacterBase* TargetChar, float XP) {
}

void URTSCheatManager::GetPlayerStatInt(const FString& InName) {
}

void URTSCheatManager::ForceLowestGraphics() {
}

void URTSCheatManager::EvacuateAll() {
}

void URTSCheatManager::DownloadLeaderboards(int32 Minimum, int32 Maximum) {
}

void URTSCheatManager::DownloadLeaderboard(FName InLeaderboardName) const {
}

void URTSCheatManager::DisableSpawnSystem() {
}

void URTSCheatManager::DialogTesting() {
}

void URTSCheatManager::DestroyAllMonstersInRadius(float Radius) {
}

void URTSCheatManager::DestroyAllMonsters() {
}

void URTSCheatManager::CrashTest() {
}

void URTSCheatManager::CompletePrimaryMission() {
}

void URTSCheatManager::BeastMode() {
}

void URTSCheatManager::AllRevive() {
}

void URTSCheatManager::AllHeal() {
}

void URTSCheatManager::AllGiveXP(float XP) {
}

void URTSCheatManager::AddRequisition(int32 NumRequisition) {
}

void URTSCheatManager::AddCampaignTag(const FString& NewTag) {
}


