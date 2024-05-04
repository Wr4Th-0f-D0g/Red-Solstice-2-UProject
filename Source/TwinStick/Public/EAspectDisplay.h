#pragma once
#include "CoreMinimal.h"
#include "EAspectDisplay.generated.h"

UENUM(BlueprintType)
enum class EAspectDisplay : uint8 {
    Integer,
    Percent,
    Meters,
    Seconds,
    Decimal1,
    Decimal2,
    None,
};

