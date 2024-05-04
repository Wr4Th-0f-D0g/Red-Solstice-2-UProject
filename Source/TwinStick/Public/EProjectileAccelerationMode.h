#pragma once
#include "CoreMinimal.h"
#include "EProjectileAccelerationMode.generated.h"

UENUM(BlueprintType)
enum class EProjectileAccelerationMode : uint8 {
    None,
    Linear,
    LinearWithDeceleration,
};

