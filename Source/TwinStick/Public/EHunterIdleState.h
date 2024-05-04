#pragma once
#include "CoreMinimal.h"
#include "EHunterIdleState.generated.h"

UENUM(BlueprintType)
enum class EHunterIdleState : uint8 {
    None,
    Idle,
    Eating,
    Patrolling,
};

