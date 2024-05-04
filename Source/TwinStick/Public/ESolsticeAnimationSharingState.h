#pragma once
#include "CoreMinimal.h"
#include "ESolsticeAnimationSharingState.generated.h"

UENUM(BlueprintType)
enum class ESolsticeAnimationSharingState : uint8 {
    Idle,
    Walking,
    Running,
    Attack1,
    Attack2,
    Dying,
    Dead,
    AdditiveHitReact,
    Spawning,
    Vaulting,
    Frozen,
};

