#pragma once
#include "CoreMinimal.h"
#include "ETechResearchStatus.generated.h"

UENUM(BlueprintType)
enum class ETechResearchStatus : uint8 {
    Invalid,
    Unavailable,
    Available,
    Completed,
    InProgress,
    Partial,
    Locked,
};

