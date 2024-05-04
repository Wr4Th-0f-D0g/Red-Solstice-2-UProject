#pragma once
#include "CoreMinimal.h"
#include "EResearchSpeed.generated.h"

UENUM(BlueprintType)
enum class EResearchSpeed : uint8 {
    VerySlow,
    Slow,
    Normal,
    Fast,
    VeryFast,
};

