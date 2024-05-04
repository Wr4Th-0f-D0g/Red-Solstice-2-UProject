#pragma once
#include "CoreMinimal.h"
#include "ESolsticePrecipitationType.generated.h"

UENUM(BlueprintType)
enum class ESolsticePrecipitationType : uint8 {
    None,
    Sand,
    Snow,
    Rain,
};

