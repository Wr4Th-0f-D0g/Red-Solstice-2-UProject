#pragma once
#include "CoreMinimal.h"
#include "EDcxVehicleDriveControlNW.generated.h"

UENUM(BlueprintType)
namespace EDcxVehicleDriveControlNW {
    enum Type {
        Throttle,
        Brake,
        Handbrake,
        Steer,
        Clutch,
        NumControls,
    };
}

