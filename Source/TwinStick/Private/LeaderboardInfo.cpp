#include "LeaderboardInfo.h"

ULeaderboardInfo::ULeaderboardInfo() {
    this->bAscending = false;
    this->bActive = false;
    this->DisplayType = ESolsticeLeaderboardDisplayType::TypeNumeric;
    this->bInitError = false;
    this->bInitialized = false;
    this->bDataBeingDownloaded = false;
    this->bDataBeingUploaded = false;
    this->bEntriesInvalidatedByNewData = false;
    this->FindLeaderboardRequest = NULL;
}

void ULeaderboardInfo::UploadScore() {
}

void ULeaderboardInfo::OnLeaderboardUploadedOnlineSys(const FName SessionName, bool bSuccess) {
}

bool ULeaderboardInfo::IsLocalPlayerScoreDirty() const {
    return false;
}

bool ULeaderboardInfo::IsLeaderboardReadInProgress() const {
    return false;
}

TArray<FLeaderboardEntryStruct> ULeaderboardInfo::GetEntryArray() {
    return TArray<FLeaderboardEntryStruct>();
}


