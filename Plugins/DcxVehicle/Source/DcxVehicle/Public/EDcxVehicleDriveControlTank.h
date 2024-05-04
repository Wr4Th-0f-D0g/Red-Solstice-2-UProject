#pragma once
#include "CoreMinimal.h"
#include "EDcxVehicleDriveControlTank.generated.h"

UENUM(BlueprintType)
namespace EDcxVehicleDriveControlTank {
    enum Type {
        Throttle,
        BrakeLeft,
        BrakeRight,
        ThrustLeft,
        ThrustRight,
        Clutch,
        NumControls,
    };
}

