#include "LeaderboardEntryStruct.h"

FLeaderboardEntryStruct::FLeaderboardEntryStruct() {
    this->Score = 0;
    this->LocalScore = 0;
    this->ScoreBeingUploaded = 0;
    this->GlobalRank = 0;
    this->bFriend = false;
    this->bVerified = false;
}

