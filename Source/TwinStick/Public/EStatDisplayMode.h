#pragma once
#include "CoreMinimal.h"
#include "EStatDisplayMode.generated.h"

UENUM(BlueprintType)
enum class EStatDisplayMode : uint8 {
    Integer,
    OneDecimal,
    TwoDecimals,
    Percentile,
};

