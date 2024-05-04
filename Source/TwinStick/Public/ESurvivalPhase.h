#pragma once
#include "CoreMinimal.h"
#include "ESurvivalPhase.generated.h"

UENUM(BlueprintType)
enum class ESurvivalPhase : uint8 {
    None,
    Survival,
    Evac,
    Pause,
};

