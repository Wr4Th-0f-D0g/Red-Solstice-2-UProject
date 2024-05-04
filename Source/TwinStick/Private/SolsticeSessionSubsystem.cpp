#include "SolsticeSessionSubsystem.h"

USolsticeSessionSubsystem::USolsticeSessionSubsystem() {
    this->PendingHotJoinRequest = NULL;
    this->bJoiningSessionInProgress = false;
}

void USolsticeSessionSubsystem::UpdateExistingSessionSettings(APlayerController* HostingPlayer, USolsticeSession_HostSessionRequest* Request) {
}

void USolsticeSessionSubsystem::TravelToStandaloneArmory() {
}

bool USolsticeSessionSubsystem::TravelToLobbyGame() {
    return false;
}

void USolsticeSessionSubsystem::QuickPlaySessionSpecific(APlayerController* JoiningPlayer, USolsticeSession_SearchSessionRequest* Request) {
}

void USolsticeSessionSubsystem::QuickPlaySession(APlayerController* JoiningPlayer) {
}

void USolsticeSessionSubsystem::JoinSession(APlayerController* JoiningPlayer, USolsticeSession_SearchResult* Request) {
}

bool USolsticeSessionSubsystem::IsSessionJoinable() const {
    return false;
}

bool USolsticeSessionSubsystem::IsInGameSession() const {
    return false;
}

bool USolsticeSessionSubsystem::IsHostingSession() {
    return false;
}

bool USolsticeSessionSubsystem::IsCoopCampaignSession() const {
    return false;
}

void USolsticeSessionSubsystem::HostSession(APlayerController* HostingPlayer, USolsticeSession_HostSessionRequest* Request) {
}

FString USolsticeSessionSubsystem::GetTeamCompositionCurrentSession() const {
    return TEXT("");
}

ESecondaryMissionFrequency USolsticeSessionSubsystem::GetSecondaryMissionFrequencyCurrentSession() const {
    return ESecondaryMissionFrequency::Few;
}

int32 USolsticeSessionSubsystem::GetInfestationLevelCurrentSession() const {
    return 0;
}

EHordeArrivalTime USolsticeSessionSubsystem::GetHordeArrivalCurrentSession() const {
    return EHordeArrivalTime::Immediate;
}

int32 USolsticeSessionSubsystem::GetGameWaveCurrentSession() const {
    return 0;
}

int32 USolsticeSessionSubsystem::GetGameVehicleCapCurrentSession() const {
    return 0;
}

EStrategyMissionGameType USolsticeSessionSubsystem::GetGameTypeCurrentSession() const {
    return EStrategyMissionGameType::Invalid;
}

int32 USolsticeSessionSubsystem::GetGameTimeSecondsCurrentSession() const {
    return 0;
}

bool USolsticeSessionSubsystem::GetGameStartedCurrentSession() const {
    return false;
}

EMatchType USolsticeSessionSubsystem::GetGameMatchTypeCurrentSession() const {
    return EMatchType::Ranked;
}

EDifficulty USolsticeSessionSubsystem::GetGameDifficultyCurrentSession() const {
    return EDifficulty::None;
}

ECorporation USolsticeSessionSubsystem::GetCorporationCurrentSession() const {
    return ECorporation::Elysium;
}

EArtillerySupportLevel USolsticeSessionSubsystem::GetArtillerySupportLevelCurrentSession() const {
    return EArtillerySupportLevel::None;
}

EAirSupportLevel USolsticeSessionSubsystem::GetAirSupportLevelCurrentSession() const {
    return EAirSupportLevel::None;
}

void USolsticeSessionSubsystem::FindSessions(APlayerController* SearchingPlayer, USolsticeSession_SearchSessionRequest* Request) {
}

USolsticeSession_SearchSessionRequest* USolsticeSessionSubsystem::CreateOnlineSearchSessionRequest() {
    return NULL;
}

USolsticeSession_HostSessionRequest* USolsticeSessionSubsystem::CreateOnlineHostSessionRequest() {
    return NULL;
}

void USolsticeSessionSubsystem::CleanUpSessions() {
}


