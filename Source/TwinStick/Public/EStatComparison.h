#pragma once
#include "CoreMinimal.h"
#include "EStatComparison.generated.h"

UENUM(BlueprintType)
enum class EStatComparison : uint8 {
    EqualOrGreater,
    EqualOrLess,
};

