#pragma once
#include "CoreMinimal.h"
#include "EDcxVehicleDifferential4W.generated.h"

UENUM(BlueprintType)
namespace EDcxVehicleDifferential4W {
    enum Type {
        LS_4WD,
        LS_FrontWD,
        LS_RearWD,
        Open_4WD,
        Open_FrontWD,
        Open_RearWD,
    };
}

