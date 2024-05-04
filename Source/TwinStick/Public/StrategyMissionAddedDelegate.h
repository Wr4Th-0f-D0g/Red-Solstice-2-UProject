#pragma once
#include "CoreMinimal.h"
#include "StrategyMissionAddedDelegate.generated.h"

class AStrategyMission;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FStrategyMissionAdded, AStrategyMission*, Mission);

