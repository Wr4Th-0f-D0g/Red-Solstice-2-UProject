#include "SolsticeSession_SearchResult.h"

USolsticeSession_SearchResult::USolsticeSession_SearchResult() {
}

TMap<ESolsticeHeroClass, int32> USolsticeSession_SearchResult::GetTeamComposition() const {
    return TMap<ESolsticeHeroClass, int32>();
}

void USolsticeSession_SearchResult::GetStringSetting(FName Key, FString& Value, bool& bFoundValue) const {
}

ESecondaryMissionFrequency USolsticeSession_SearchResult::GetSecondaryMissionFrequency() const {
    return ESecondaryMissionFrequency::Few;
}

int32 USolsticeSession_SearchResult::GetPingInMs() const {
    return 0;
}

int32 USolsticeSession_SearchResult::GetNumOpenPublicConnections() const {
    return 0;
}

int32 USolsticeSession_SearchResult::GetNumOpenPrivateConnections() const {
    return 0;
}

int32 USolsticeSession_SearchResult::GetMaxPublicConnections() const {
    return 0;
}

EMatchType USolsticeSession_SearchResult::GetMatchType() const {
    return EMatchType::Ranked;
}

void USolsticeSession_SearchResult::GetIntSetting(FName Key, int32& Value, bool& bFoundValue) const {
}

int32 USolsticeSession_SearchResult::GetInfestationLevel() const {
    return 0;
}

EHordeArrivalTime USolsticeSession_SearchResult::GetHordeArrivalTime() const {
    return EHordeArrivalTime::Immediate;
}

EStrategyMissionGameType USolsticeSession_SearchResult::GetGameType() const {
    return EStrategyMissionGameType::Invalid;
}

bool USolsticeSession_SearchResult::GetGameStarted() const {
    return false;
}

FString USolsticeSession_SearchResult::GetGameName() const {
    return TEXT("");
}

FString USolsticeSession_SearchResult::GetGameMap() const {
    return TEXT("");
}

EDifficulty USolsticeSession_SearchResult::GetDifficulty() const {
    return EDifficulty::None;
}

FString USolsticeSession_SearchResult::GetDescription() const {
    return TEXT("");
}

int32 USolsticeSession_SearchResult::GetCurrentWaveCount() const {
    return 0;
}

int32 USolsticeSession_SearchResult::GetCurrentVehicleCap() const {
    return 0;
}

int32 USolsticeSession_SearchResult::GetCurrentGameTimeSeconds() {
    return 0;
}

ECorporation USolsticeSession_SearchResult::GetCorporation() const {
    return ECorporation::Elysium;
}

EArtillerySupportLevel USolsticeSession_SearchResult::GetArtillerySupportLevel() const {
    return EArtillerySupportLevel::None;
}

EAirSupportLevel USolsticeSession_SearchResult::GetAirSupport() const {
    return EAirSupportLevel::None;
}


