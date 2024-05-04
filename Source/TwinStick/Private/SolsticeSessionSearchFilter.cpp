#include "SolsticeSessionSearchFilter.h"

FSolsticeSessionSearchFilter::FSolsticeSessionSearchFilter() {
    this->LobbyGameType = 0;
    this->bHideStartedGames = false;
    this->SearchDistance = ESessionSearchDistance::Default;
    this->MatchTypeFilter = 0;
}

