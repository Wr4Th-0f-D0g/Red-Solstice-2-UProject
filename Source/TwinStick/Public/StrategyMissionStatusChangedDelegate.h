#pragma once
#include "CoreMinimal.h"
#include "StrategyMissionTimer.h"
#include "StrategyMissionStatusChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FStrategyMissionStatusChanged, const FStrategyMissionTimer&, MissionTimer);

