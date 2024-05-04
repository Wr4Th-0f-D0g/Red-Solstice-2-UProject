#pragma once
#include "CoreMinimal.h"
#include "ESolsticeVehicleType.generated.h"

UENUM(BlueprintType)
enum class ESolsticeVehicleType : uint8 {
    Invalid,
    Tank,
    APC,
    Jeep,
    HoverBike,
};

