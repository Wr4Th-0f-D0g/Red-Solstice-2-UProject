#pragma once
#include "CoreMinimal.h"
#include "EHideComponentDistance.generated.h"

UENUM(BlueprintType)
enum class EHideComponentDistance : uint8 {
    Invalid,
    Far,
    Medium,
    Near,
};

