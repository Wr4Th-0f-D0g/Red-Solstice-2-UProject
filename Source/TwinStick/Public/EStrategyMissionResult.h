#pragma once
#include "CoreMinimal.h"
#include "EStrategyMissionResult.generated.h"

UENUM(BlueprintType)
enum class EStrategyMissionResult : uint8 {
    Invalid,
    Defeat,
    Retreat,
    Phyrric,
    Partial,
    Victory,
};

