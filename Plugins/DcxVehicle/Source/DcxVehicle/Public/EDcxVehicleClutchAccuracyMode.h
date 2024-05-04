#pragma once
#include "CoreMinimal.h"
#include "EDcxVehicleClutchAccuracyMode.generated.h"

UENUM(BlueprintType)
namespace EDcxVehicleClutchAccuracyMode {
    enum Type {
        Estimate,
        BestPossible,
    };
}

