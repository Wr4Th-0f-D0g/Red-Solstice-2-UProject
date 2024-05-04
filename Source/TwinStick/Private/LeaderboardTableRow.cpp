#include "LeaderboardTableRow.h"

FLeaderboardTableRow::FLeaderboardTableRow() {
    this->SortMethod = ESolsticeLeaderboardSortMethod::None;
    this->DisplayType = ESolsticeLeaderboardDisplayType::TypeNone;
    this->bActive = false;
    this->Version = 0;
}

