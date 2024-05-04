#pragma once
#include "CoreMinimal.h"
#include "EDestructableVehicleState.generated.h"

UENUM(BlueprintType)
enum class EDestructableVehicleState : uint8 {
    Inactive,
    Destroyed,
    MovingToTarget,
    EncounteredObstacle,
    Deactivating,
    AproachingTargetPoint,
};

