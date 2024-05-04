#pragma once
#include "CoreMinimal.h"
#include "ETurretRotationType.generated.h"

UENUM(BlueprintType)
enum class ETurretRotationType : uint8 {
    Deactivated,
    Idle,
    Target,
};

