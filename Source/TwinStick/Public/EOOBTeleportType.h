#pragma once
#include "CoreMinimal.h"
#include "EOOBTeleportType.generated.h"

UENUM(BlueprintType)
enum class EOOBTeleportType : uint8 {
    TeamAverage,
    ClosestNavmesh,
};

