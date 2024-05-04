#pragma once
#include "CoreMinimal.h"
#include "EStormSeverity.generated.h"

UENUM(BlueprintType)
enum class EStormSeverity : uint8 {
    None,
    Light,
    Moderate,
    Heavy,
    Severe,
    Extreme,
};

