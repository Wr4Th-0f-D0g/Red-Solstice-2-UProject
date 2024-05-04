#include "SteamLobbyFilterOptions.h"

FSteamLobbyFilterOptions::FSteamLobbyFilterOptions() {
    this->LobbyGameType = ELobbyGameType::All;
    this->bIgnoreStartedGames = false;
    this->LobbySearchDistance = ESolsticeLobbyDistanceFilter::Close;
}

