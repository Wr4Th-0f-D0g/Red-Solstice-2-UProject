#pragma once
#include "CoreMinimal.h"
#include "EFlyingState.generated.h"

UENUM(BlueprintType)
enum class EFlyingState : uint8 {
    None,
    Grounded,
    GoingToGround,
    GoingUpFromGround,
    GoingToLowerHeight,
    Airborne_LowHeight,
    Airborne_HighHeight,
};

