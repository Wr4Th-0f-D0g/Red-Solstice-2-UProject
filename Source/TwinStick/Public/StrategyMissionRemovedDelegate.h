#pragma once
#include "CoreMinimal.h"
#include "StrategyMissionRemovedDelegate.generated.h"

class AStrategyMission;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FStrategyMissionRemoved, AStrategyMission*, Mission);

