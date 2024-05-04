#pragma once
#include "CoreMinimal.h"
#include "ESolsticeEnvTestPathfinding.generated.h"

UENUM(BlueprintType)
namespace ESolsticeEnvTestPathfinding {
    enum Type {
        PathExist,
        PathCost,
        PathLength,
    };
}

