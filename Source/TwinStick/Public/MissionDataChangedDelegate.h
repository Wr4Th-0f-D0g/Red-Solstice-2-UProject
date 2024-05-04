#pragma once
#include "CoreMinimal.h"
#include "StrategyMissionData.h"
#include "MissionDataChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMissionDataChanged, const FStrategyMissionData&, Data);

