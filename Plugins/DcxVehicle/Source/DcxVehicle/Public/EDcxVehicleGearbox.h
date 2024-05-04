#pragma once
#include "CoreMinimal.h"
#include "EDcxVehicleGearbox.generated.h"

UENUM(BlueprintType)
namespace EDcxVehicleGearbox {
    enum Type {
        Automatic,
        SemiAutomatic,
        Manual,
    };
}

