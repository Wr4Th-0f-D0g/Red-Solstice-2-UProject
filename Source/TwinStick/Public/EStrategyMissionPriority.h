#pragma once
#include "CoreMinimal.h"
#include "EStrategyMissionPriority.generated.h"

UENUM(BlueprintType)
enum class EStrategyMissionPriority : uint8 {
    Low,
    Normal,
    High,
    Campaign,
};

