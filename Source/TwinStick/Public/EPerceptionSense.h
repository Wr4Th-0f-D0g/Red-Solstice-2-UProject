#pragma once
#include "CoreMinimal.h"
#include "EPerceptionSense.generated.h"

UENUM(BlueprintType)
enum class EPerceptionSense : uint8 {
    EPS_NONE,
    EPS_SIGHT,
    EPS_PROXIMITY,
    EPS_DAMAGE,
    EPS_SCENT,
    EPS_TREMOR,
    EPS_ISOLATION,
    EPS_SOLSTICENOISE,
};

