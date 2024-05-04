#pragma once
#include "CoreMinimal.h"
#include "PlayerStatsPair.h"
#include "MatchEndedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FMatchEnded, bool, bVictory, const TArray<FPlayerStatsPair>&, PlayerStats, float, MatchTime);

