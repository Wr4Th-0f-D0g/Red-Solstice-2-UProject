#include "SolsticeSession_SearchSessionRequest.h"

USolsticeSession_SearchSessionRequest::USolsticeSession_SearchSessionRequest() {
    this->OnlineMode = ESolsticeSessionOnlineMode::Offline;
    this->bUseLobbies = false;
    this->MaxSearchResults = 15;
    this->PingBucketSize = 50;
    this->LobbyGameType = 3;
    this->bHideStartedGames = false;
    this->SearchDistance = ESessionSearchDistance::Worldwide;
    this->MatchTypeFilter = 2;
}


