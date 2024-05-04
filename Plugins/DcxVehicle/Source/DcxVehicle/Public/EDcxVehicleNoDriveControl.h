#pragma once
#include "CoreMinimal.h"
#include "EDcxVehicleNoDriveControl.generated.h"

UENUM(BlueprintType)
namespace EDcxVehicleNoDriveControl {
    enum Type {
        Throttle,
        Brake,
        Steer,
        NumControls,
    };
}

