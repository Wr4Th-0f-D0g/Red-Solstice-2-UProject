#pragma once
#include "CoreMinimal.h"
#include "PlayerRank.h"
#include "RankDataReceivedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FRankDataReceived, const FPlayerRank&, RankData);

