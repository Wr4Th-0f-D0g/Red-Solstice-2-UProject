#pragma once
#include "CoreMinimal.h"
#include "EStrategyMissionCompletionType.generated.h"

UENUM(BlueprintType)
enum class EStrategyMissionCompletionType : uint8 {
    Invalid,
    Instant,
    TimeElapsed,
};

