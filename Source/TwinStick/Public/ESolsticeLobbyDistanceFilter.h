#pragma once
#include "CoreMinimal.h"
#include "ESolsticeLobbyDistanceFilter.generated.h"

UENUM(BlueprintType)
enum class ESolsticeLobbyDistanceFilter : uint8 {
    Close,
    Default,
    Far,
    Worldwide,
};

