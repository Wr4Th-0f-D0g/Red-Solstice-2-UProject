#pragma once
#include "CoreMinimal.h"
#include "MissionInfestationLevelChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMissionInfestationLevelChanged, int32, InfestationLevel);

