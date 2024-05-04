#pragma once
#include "CoreMinimal.h"
#include "EStrategyMissionGeneration.generated.h"

UENUM(BlueprintType)
enum class EStrategyMissionGeneration : uint8 {
    Invalid,
    Story,
    Secondary,
};

