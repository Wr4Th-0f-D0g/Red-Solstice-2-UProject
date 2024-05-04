#pragma once
#include "CoreMinimal.h"
#include "EDestructableVehicleMovementState.generated.h"

UENUM(BlueprintType)
enum class EDestructableVehicleMovementState : uint8 {
    FullSpeed,
    Slow,
    StopNormal,
    StopEmergency,
    StopCrash,
};

