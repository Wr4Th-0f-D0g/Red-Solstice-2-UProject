#include "SteamGameSubsystem.h"

USteamGameSubsystem::USteamGameSubsystem() {
    this->bLeaderboardsInitialized = false;
}

void USteamGameSubsystem::UploadPlayerStats() {
}

void USteamGameSubsystem::UploadLeaderboardScores() {
}

void USteamGameSubsystem::TestUploadLeaderboard() {
}

void USteamGameSubsystem::TestDownloadLeaderboard() {
}

bool USteamGameSubsystem::SetLocalPlayerStatInt(int32 InStatValue, const FString& InStatName) {
    return false;
}

void USteamGameSubsystem::SetLeaderboardScore(FName InLeaderboardName, int32 InScore, bool bForceResult) {
}

void USteamGameSubsystem::ReadLocalPlayerStats() {
}

void USteamGameSubsystem::InitSteamLeaderboards() {
}

void USteamGameSubsystem::IncrementLeaderboardScore(FName InLeaderboardName, int32 InAmount) {
}

bool USteamGameSubsystem::GetLocalPlayerStatInt(int32& OutValue, const FString& InStatName) {
    return false;
}

int32 USteamGameSubsystem::GetLocalPlayerScore(FName InLeaderboardName) {
    return 0;
}

bool USteamGameSubsystem::GetLocalPlayerLeaderboardEntry(FLeaderboardEntryStruct& OutLeaderboardEntry, FName InLeaderboardName) const {
    return false;
}

void USteamGameSubsystem::DownloadLeaderboardScoreGlobalRank(FName InLeaderboardName, int32 InLowest, int32 InHighest) {
}

void USteamGameSubsystem::DownloadLeaderboardScoreFriends(FName InLeaderboardName) {
}

void USteamGameSubsystem::DownloadLeaderboardScoreAroundPlayer(FName InLeaderboardName, int32 InMinus, int32 InPlus) {
}

void USteamGameSubsystem::DownloadAllLeaderboardScoreGlobalRank(int32 InLowest, int32 InHighest) {
}

void USteamGameSubsystem::DownloadAllLeaderboardScoreFriends() {
}

void USteamGameSubsystem::DownloadAllLeaderboardScoreAroundPlayer(int32 InMinus, int32 InPlus) {
}

void USteamGameSubsystem::ClearLeaderboardEntries(FName InLeaderboardName) {
}

void USteamGameSubsystem::ClearAllLeaderboardEntries() {
}

bool USteamGameSubsystem::AreStatsInitialized() const {
    return false;
}

bool USteamGameSubsystem::AppendLocalPlayerStatInt(int32 InStatValueAdded, const FString& InStatName) {
    return false;
}


