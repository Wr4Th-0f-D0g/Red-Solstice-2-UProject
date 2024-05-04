#pragma once
#include "CoreMinimal.h"
#include "SolsticeLeaderboardsInitializedDelegateDelegate.generated.h"

class ULeaderboardInfo;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FSolsticeLeaderboardsInitializedDelegate, ULeaderboardInfo*, LeaderboardInfo, bool, bErrorsOccured);

