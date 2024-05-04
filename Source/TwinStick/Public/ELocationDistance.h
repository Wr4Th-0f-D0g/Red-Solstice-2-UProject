#pragma once
#include "CoreMinimal.h"
#include "ELocationDistance.generated.h"

UENUM(BlueprintType)
enum class ELocationDistance : uint8 {
    ELD_Any,
    ELD_Close,
    ELD_Medium,
    ELD_Far,
};

