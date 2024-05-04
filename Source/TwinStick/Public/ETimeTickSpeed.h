#pragma once
#include "CoreMinimal.h"
#include "ETimeTickSpeed.generated.h"

UENUM(BlueprintType)
enum class ETimeTickSpeed : uint8 {
    Invalid,
    Paused,
    Slow,
    Fast,
    VeryFast,
};

