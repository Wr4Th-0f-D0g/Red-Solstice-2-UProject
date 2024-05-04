#pragma once
#include "CoreMinimal.h"
#include "EDcxVehicleDriveControl4W.generated.h"

UENUM(BlueprintType)
namespace EDcxVehicleDriveControl4W {
    enum Type {
        Throttle,
        Brake,
        Handbrake,
        Steer,
        Clutch,
        NumControls,
    };
}

