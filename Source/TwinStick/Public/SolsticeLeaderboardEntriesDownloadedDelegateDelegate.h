#pragma once
#include "CoreMinimal.h"
#include "SolsticeLeaderboardEntriesDownloadedDelegateDelegate.generated.h"

class ULeaderboardInfo;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSolsticeLeaderboardEntriesDownloadedDelegate, ULeaderboardInfo*, LeaderboardInfo);

