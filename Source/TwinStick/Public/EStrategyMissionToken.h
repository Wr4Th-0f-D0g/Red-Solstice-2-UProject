#pragma once
#include "CoreMinimal.h"
#include "EStrategyMissionToken.generated.h"

UENUM(BlueprintType)
enum class EStrategyMissionToken : uint8 {
    Invalid,
    Invasion,
    Assault,
    Defense,
    Tactics,
    Supply,
    Scan,
    BlackOps,
};

