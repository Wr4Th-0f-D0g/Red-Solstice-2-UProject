#pragma once
#include "CoreMinimal.h"
#include "EStrategyMissionLocationAdjustment.generated.h"

UENUM(BlueprintType)
enum class EStrategyMissionLocationAdjustment : uint8 {
    None,
    HQ,
    Beacon,
    Dropship,
};

