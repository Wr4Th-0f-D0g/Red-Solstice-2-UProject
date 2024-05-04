#pragma once
#include "CoreMinimal.h"
#include "EMissionTriggerFilter.generated.h"

UENUM(BlueprintType)
enum class EMissionTriggerFilter : uint8 {
    NoFilter,
    UniqueMissionsPerRegionOnly,
    OneMissionPerRegionOnly,
};

