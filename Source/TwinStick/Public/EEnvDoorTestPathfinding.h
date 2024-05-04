#pragma once
#include "CoreMinimal.h"
#include "EEnvDoorTestPathfinding.generated.h"

UENUM(BlueprintType)
namespace EEnvDoorTestPathfinding {
    enum Type {
        PathExist,
        PathCost,
        PathLength,
    };
}

