#pragma once
#include "CoreMinimal.h"
#include "EStrategyLevelCurrentView.generated.h"

UENUM(BlueprintType)
enum class EStrategyLevelCurrentView : uint8 {
    StrategyMap,
    Armory,
    Bestiary,
    Research,
    Engineering,
    Archives,
    SOLAR,
};

