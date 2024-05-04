#pragma once
#include "CoreMinimal.h"
#include "ESolsticeVehicleModuleTarget.generated.h"

UENUM(BlueprintType)
enum class ESolsticeVehicleModuleTarget : uint8 {
    Invalid,
    Seat1,
    Seat2,
    Seat3,
    Seat4,
    Vehicle = 100,
};

