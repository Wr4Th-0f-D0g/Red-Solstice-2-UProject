#pragma once
#include "CoreMinimal.h"
#include "ESessionSearchDistance.generated.h"

UENUM(BlueprintType)
enum class ESessionSearchDistance : uint8 {
    Default,
    Far,
    Worldwide,
};

