#pragma once
#include "CoreMinimal.h"
#include "ESolsticeVehicleModuleCategory.generated.h"

UENUM(BlueprintType)
enum class ESolsticeVehicleModuleCategory : uint8 {
    Drive,
    Chassis,
    Weapons,
    Utility,
    Specialization,
};

