#pragma once
#include "CoreMinimal.h"
#include "MissionChangedDelegate.generated.h"

class AStrategyMission;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMissionChanged, AStrategyMission*, NewMission);

