#include "ExecutorSubsystem.h"
#include "Templates/SubclassOf.h"

UExecutorSubsystem::UExecutorSubsystem() {
    this->bProfileInitialized = false;
    this->InternetTimeRequestURL = TEXT("http://ironward.thegames.dev/reqinternettime.php");
    this->SteamID = 0;
    this->VersionString = TEXT("SteamPlayTest");
    this->ActiveCampaign = NULL;
    this->bLoadingFromMainMenu = false;
    this->SkirmishDefaultAccessibility = ESolsticeGameAccessibility::Public;
    this->CampaignDefaultAccessibility = ESolsticeGameAccessibility::FriendOnly;
    this->bInventoryVerified = false;
}

void UExecutorSubsystem::UnloadCampaign() {
}

void UExecutorSubsystem::TryApplyAchievements() {
}

void UExecutorSubsystem::StopAvoidingPlayerByID(FSolsticeSteamID AvoidedPlayerID) {
}

void UExecutorSubsystem::StopAvoidingPlayer(ASolsticePlayerState* AvoidedPlayer) {
}

UCampaign* UExecutorSubsystem::StartNewCampaign() {
    return NULL;
}

void UExecutorSubsystem::SpendXPToRespecProfileSkills(const TArray<FGameplayTag> TechTreeTags) {
}

void UExecutorSubsystem::SaveProfileSkills() {
}

bool UExecutorSubsystem::SaveCampaignToFile(const FString& Filename, ESaveGameType SaveType) {
    return false;
}

bool UExecutorSubsystem::SaveCampaign(ESaveGameType SaveType, FSolsticeSaveGameInfo& OutGameInfo) {
    return false;
}

void UExecutorSubsystem::RollbackProfileSkills() {
}

void UExecutorSubsystem::RequestStatsForClass(ESolsticeHeroClass MarineClass) {
}

void UExecutorSubsystem::PrepareGameLoad(const FSolsticeSaveGameInfo& InGameInfo, bool bFromMainMenu) {
}

bool UExecutorSubsystem::PlayerHasCompletedMedalForDifficulty(FGameplayTag MedalTag, EDifficulty Difficulty) const {
    return false;
}

bool UExecutorSubsystem::PlayerHasCompletedMedalForAnyDifficulty(FGameplayTag MedalTag) const {
    return false;
}

bool UExecutorSubsystem::PlayerHasCompletedMedal(FGameplayTag MedalTag) const {
    return false;
}

void UExecutorSubsystem::OnLeaderboardEntriesUploaded(ULeaderboardInfo* InLeaderboard, bool bSuccessful) {
}

void UExecutorSubsystem::OnLeaderboardEntriesDownloaded(ULeaderboardInfo* InLeaderboard) {
}

bool UExecutorSubsystem::MatchesLifetimeRequirement(const FPlayerStat& InRequirement) {
    return false;
}

bool UExecutorSubsystem::MatchesDeploymentRequirement(const FPlayerStat& InRequirement) {
    return false;
}

bool UExecutorSubsystem::MatchesChallengeRequirement(const FGameplayTag& InRequirement) {
    return false;
}

void UExecutorSubsystem::LoadCampaignFromFile(const FString& Filename, bool bLoadCampaign, bool bLoadMap) {
}

bool UExecutorSubsystem::IsAvoidingPlayer(ASolsticePlayerState* TestedPlayer) const {
    return false;
}

void UExecutorSubsystem::InvalidateActiveCampaign() {
}

void UExecutorSubsystem::InitializeProfile(const USolsticeUserInfo* UserInfo) {
}

void UExecutorSubsystem::IncreasePrestige() {
}

bool UExecutorSubsystem::HasUnlockedSkillTierFor(UTechTreeData* InSkillTree, int32 InTier) {
    return false;
}

bool UExecutorSubsystem::HasUnlockedBotClass(ESolsticeHeroClass MarineClass) const {
    return false;
}

bool UExecutorSubsystem::HasRequirementForProfileSkill(const FSolsticeTechData& InSkillData) const {
    return false;
}

bool UExecutorSubsystem::HasProgressTag(FGameplayTag InTag, bool bExact) const {
    return false;
}

bool UExecutorSubsystem::HasProfileSkill(const FSolsticeTechData& InSkillData) const {
    return false;
}

bool UExecutorSubsystem::HasPointsInSkillTree(UTechTreeData* TreeData) const {
    return false;
}

bool UExecutorSubsystem::HasKilledMonster(TSubclassOf<AMonsterCharacterBase> MonsterClass) {
    return false;
}

bool UExecutorSubsystem::HasEncounteredMonster(TSubclassOf<AMonsterCharacterBase> MonsterClass) {
    return false;
}

bool UExecutorSubsystem::HasCompletedPlayerTaskBonus(FGameplayTag TaskTag) const {
    return false;
}

bool UExecutorSubsystem::HasCompletedPlayerTask(FGameplayTag TaskTag) const {
    return false;
}

bool UExecutorSubsystem::HasCapturedMonster(TSubclassOf<AMonsterCharacterBase> MonsterClass) {
    return false;
}

bool UExecutorSubsystem::HasAnyProgressTags(const FGameplayTagContainer& InTagContainer, bool bExact) const {
    return false;
}

bool UExecutorSubsystem::HasAllProgressTags(const FGameplayTagContainer& InTagContainer, bool bExact) const {
    return false;
}

void UExecutorSubsystem::HandleUserInitialized(const USolsticeUserInfo* UserInfo, bool bBSuccess, FText Error, ESolsticeUserPrivilege RequestedPrivilege, ESolsticeUserOnlineContext OnlineContext) {
}

void UExecutorSubsystem::GrantUniqueAchievement(FGameplayTag AchievementTag) {
}

FString UExecutorSubsystem::GetUserSaveDirectory() const {
    return TEXT("");
}

int32 UExecutorSubsystem::GetTotalSkillPoints() const {
    return 0;
}

int32 UExecutorSubsystem::GetSpentSkillPoints() const {
    return 0;
}

void UExecutorSubsystem::GetSkillPointXP_Progress(int32& OutCurrent, int32& OutRequired) {
}

int32 UExecutorSubsystem::GetSkillPointsForXP(int32 InXP) {
    return 0;
}

void UExecutorSubsystem::GetRankXP_Progress(int32& OutCurrent, int32& OutRequired) {
}

FPlayerRankData UExecutorSubsystem::GetRankDataForRank(int32 InRank) {
    return FPlayerRankData{};
}

void UExecutorSubsystem::GetProgressToNextSkillPoint(int32 InXP, int32& OutCurrent, int32& OutRequired, float& OutProgress) {
}

int32 UExecutorSubsystem::GetProfileXPAmount() const {
    return 0;
}

int32 UExecutorSubsystem::GetPrestigeXPAmount() const {
    return 0;
}

float UExecutorSubsystem::GetPlayerTaskProgress(FGameplayTag TaskTag) const {
    return 0.0f;
}

FTimespan UExecutorSubsystem::GetPlayerTaskGroupTimeRemaining(FGameplayTag TaskGroupTag) const {
    return FTimespan{};
}

int32 UExecutorSubsystem::GetPlayerTaskGroupSeed(const FGameplayTag& TaskTag) const {
    return 0;
}

int32 UExecutorSubsystem::GetPlayerTaskGroupProgress(FGameplayTag TaskGroupTag) const {
    return 0;
}

FTimespan UExecutorSubsystem::GetPlayerTaskBonusTimeRemaining(FGameplayTag TaskGroupTag) const {
    return FTimespan{};
}

float UExecutorSubsystem::GetPlayerStatForClass(const FGameplayTag& InStatTag, ESolsticeHeroClass InMarineClass) const {
    return 0.0f;
}

float UExecutorSubsystem::GetPlayerStat(const FGameplayTag& InStatTag) const {
    return 0.0f;
}

FPlayerStatContainer UExecutorSubsystem::GetOwnedItems() const {
    return FPlayerStatContainer{};
}

FPlayerRankData UExecutorSubsystem::GetNextRankData() {
    return FPlayerRankData{};
}

int32 UExecutorSubsystem::GetNextRank() const {
    return 0;
}

int32 UExecutorSubsystem::GetMedalDifficultyCompletedByTag(FGameplayTag MedalTag) const {
    return 0;
}

float UExecutorSubsystem::GetLifetimeStatValue(const FGameplayTag& InTag) {
    return 0.0f;
}

int32 UExecutorSubsystem::GetItemQuantity(FGameplayTag ItemTag) const {
    return 0;
}

int32 UExecutorSubsystem::GetFirstFreeCampaignIndex(ECorporation InCorporation) const {
    return 0;
}

int32 UExecutorSubsystem::GetExpendedRequisition() const {
    return 0;
}

int32 UExecutorSubsystem::GetEarnedRequisition() const {
    return 0;
}

float UExecutorSubsystem::GetDeploymentStatValue(const FGameplayTag& InTag) {
    return 0.0f;
}

FPlayerRankData UExecutorSubsystem::GetCurrentRankData() {
    return FPlayerRankData{};
}

int32 UExecutorSubsystem::GetCurrentRank() const {
    return 0;
}

int32 UExecutorSubsystem::GetCurrentPrestigeLevel() const {
    return 0;
}

float UExecutorSubsystem::GetChallengeStatValue(const FGameplayTag& InTag) {
    return 0.0f;
}

TArray<FSolsticeSteamID> UExecutorSubsystem::GetAvoidedPlayerIDs() const {
    return TArray<FSolsticeSteamID>();
}

int32 UExecutorSubsystem::GetAvailableSkillPoints() const {
    return 0;
}

int32 UExecutorSubsystem::GetAvailableRequisition() const {
    return 0;
}

TArray<FStrategyInventoryItemData> UExecutorSubsystem::GetAvailableItems() {
    return TArray<FStrategyInventoryItemData>();
}

TArray<FSolsticeCampaignID> UExecutorSubsystem::GetAllUserCampaigns() const {
    return TArray<FSolsticeCampaignID>();
}

void UExecutorSubsystem::DebugSaveStats() {
}

void UExecutorSubsystem::DebugClearStats() {
}

bool UExecutorSubsystem::CanUndoSkillPreviews() const {
    return false;
}

bool UExecutorSubsystem::CanRespecProfile() const {
    return false;
}

bool UExecutorSubsystem::CanIncreasePrestige() const {
    return false;
}

void UExecutorSubsystem::AvoidPlayer(ASolsticePlayerState* AvoidedPlayer) {
}

void UExecutorSubsystem::AddTutorialTag(FGameplayTag InTag) {
}

void UExecutorSubsystem::AddProgressTag(FGameplayTag InTag) {
}

void UExecutorSubsystem::AddProfileSkillPreview(const FSolsticeTechData& InSkillData) {
}

void UExecutorSubsystem::AddInventory(const FGameplayTag& ItemTag, int32 Quantity) {
}

void UExecutorSubsystem::AddAvoidedPlayerByID(FSolsticeSteamID AvoidedPlayerID) {
}


