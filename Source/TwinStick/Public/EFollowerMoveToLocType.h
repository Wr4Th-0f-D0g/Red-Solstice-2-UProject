#pragma once
#include "CoreMinimal.h"
#include "EFollowerMoveToLocType.generated.h"

UENUM(BlueprintType)
enum class EFollowerMoveToLocType : uint8 {
    Default,
    Locker,
    Terminal,
    Pickup,
    ShootTarget,
};

