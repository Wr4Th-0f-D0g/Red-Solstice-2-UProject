#pragma once
#include "CoreMinimal.h"
#include "EEvacAllowedTypes.generated.h"

UENUM(BlueprintType)
enum class EEvacAllowedTypes : uint8 {
    NONE,
    Civilian,
    Player,
    MissionMarines = 4,
    StrategyBots = 8,
};

