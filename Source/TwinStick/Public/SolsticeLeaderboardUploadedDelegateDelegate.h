#pragma once
#include "CoreMinimal.h"
#include "SolsticeLeaderboardUploadedDelegateDelegate.generated.h"

class ULeaderboardInfo;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FSolsticeLeaderboardUploadedDelegate, ULeaderboardInfo*, LeaderboardInfo, bool, Success);

