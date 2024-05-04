#include "SolsticeUserSubsystem.h"

USolsticeUserSubsystem::USolsticeUserSubsystem() {
    this->bLeaderboardsInitialized = false;
}

void USolsticeUserSubsystem::UploadLocalPLayerStats() {
}

void USolsticeUserSubsystem::UploadLeaderboardScores() {
}

void USolsticeUserSubsystem::UpdateAchievementProgress(const USolsticeUserInfo* UserInfo, const FGameplayTag& Achievement, float Percent) {
}

bool USolsticeUserSubsystem::TryToLoginForOnlinePlay(int32 LocalPlayerIndex) {
    return false;
}

bool USolsticeUserSubsystem::TryToInitializeUser(FSolsticeUserInitializeParams Params) {
    return false;
}

bool USolsticeUserSubsystem::TryToInitializeForLocalPlay(int32 LocalPlayerIndex, int32 ControllerId, bool bCanUseGuestLogin) {
    return false;
}

void USolsticeUserSubsystem::TriggerEvents() {
}

bool USolsticeUserSubsystem::ShouldWaitForStartInput() const {
    return false;
}

void USolsticeUserSubsystem::SetMaxLocalPlayers(int32 InMaxLocalPLayers) {
}

bool USolsticeUserSubsystem::SetLocalPlayerStatInt(int32 InStatValue, const FString& InStatName) {
    return false;
}

void USolsticeUserSubsystem::SetLeaderboardScore(FName InLeaderboardName, int32 InScore, bool bForceResult) {
}

void USolsticeUserSubsystem::SendSystemMessage(FGameplayTag MessageType, FGameplayTag MessageTag, const FString& Additional) {
}

void USolsticeUserSubsystem::ScheduleEventNoParams(const FString& InEventName) {
}

void USolsticeUserSubsystem::ScheduleEventIntParams(const FString& InEventName, TMap<FString, int32> Params) {
}

void USolsticeUserSubsystem::ResetUserState() {
}

void USolsticeUserSubsystem::ListenForLoginKeyInput(TArray<FKey> AnyUserKeys, TArray<FKey> NewUserKeys, FSolsticeUserInitializeParams Params) {
}

bool USolsticeUserSubsystem::IsAnyLeaderboardDirty() {
    return false;
}

bool USolsticeUserSubsystem::IsAnyLeaderboardBeingUploaded() {
    return false;
}

bool USolsticeUserSubsystem::IsAnyLeaderboardBeingDownloaded() {
    return false;
}

void USolsticeUserSubsystem::InitLeaderboards() {
}

bool USolsticeUserSubsystem::IncrementLocalPlayerStatInt(int32 InStatValueAdded, const FString& InStatName) {
    return false;
}

void USolsticeUserSubsystem::IncrementLeaderboardScore(FName InLeaderboardName, int32 InAmount) {
}

bool USolsticeUserSubsystem::HasTraitTag(const FGameplayTag TraitTag) const {
    return false;
}

bool USolsticeUserSubsystem::HasAchievement(const USolsticeUserInfo* UserInfo, FGameplayTag Achievement) {
    return false;
}

USolsticeUserInfo* USolsticeUserSubsystem::GetUserInfoForUniqueNetId(const FUniqueNetIdRepl& NetId) const {
    return NULL;
}

USolsticeUserInfo* USolsticeUserSubsystem::GetUserInfoForPlatformUserIndex(int32 PlatformUserIndex) const {
    return NULL;
}

USolsticeUserInfo* USolsticeUserSubsystem::GetUserInfoForLocalPlayerIndex(int32 LocalPlayerIndex) const {
    return NULL;
}

USolsticeUserInfo* USolsticeUserSubsystem::GetUserInfoForControllerId(int32 ControllerId) const {
    return NULL;
}

int32 USolsticeUserSubsystem::GetNumLocalPlayers() const {
    return 0;
}

int32 USolsticeUserSubsystem::GetMaxLocalPlayers() const {
    return 0;
}

bool USolsticeUserSubsystem::GetLocalPlayerStatInt(int32& OutValue, const FString& InStatName) {
    return false;
}

int32 USolsticeUserSubsystem::GetLocalPlayerScore(FName InLeaderboardName) {
    return 0;
}

bool USolsticeUserSubsystem::GetLocalPlayerLeaderboardEntry(FLeaderboardEntryStruct& OutLeaderboardEntry, FName InLeaderboardName) const {
    return false;
}

ESolsticeUserInitializationState USolsticeUserSubsystem::GetLocalPlayerInitializationState(int32 LocalPlayerIndex) const {
    return ESolsticeUserInitializationState::Unknown;
}

void USolsticeUserSubsystem::DownloadLeaderboardScoreGlobalRank(FName InLeaderboardName, int32 InLowest, int32 InHighest) {
}

void USolsticeUserSubsystem::DownloadLeaderboardScoreFriends(FName InLeaderboardName) {
}

void USolsticeUserSubsystem::DownloadLeaderboardScoreAroundPlayer(FName InLeaderboardName, int32 InMinus, int32 InPlus) {
}

void USolsticeUserSubsystem::DownloadAllLeaderboardScoreGlobalRank(int32 InLowest, int32 InHighest) {
}

void USolsticeUserSubsystem::DownloadAllLeaderboardScoreFriends() {
}

void USolsticeUserSubsystem::DownloadAllLeaderboardScoreAroundPlayer(int32 InMinus, int32 InPlus) {
}

void USolsticeUserSubsystem::ClearLeaderboardEntries(FName InLeaderboardName) {
}

void USolsticeUserSubsystem::ClearAllLeaderboardEntries() {
}

bool USolsticeUserSubsystem::CanPlayOnline(const USolsticeUserInfo* UserInfo) const {
    return false;
}

bool USolsticeUserSubsystem::CanPlay(const USolsticeUserInfo* UserInfo) const {
    return false;
}

bool USolsticeUserSubsystem::CancelUserInitialization(int32 LocalPlayerIndex) {
    return false;
}

bool USolsticeUserSubsystem::AreStatsInitialized() const {
    return false;
}


