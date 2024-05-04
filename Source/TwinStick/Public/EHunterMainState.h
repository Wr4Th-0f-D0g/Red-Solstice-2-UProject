#pragma once
#include "CoreMinimal.h"
#include "EHunterMainState.generated.h"

UENUM(BlueprintType)
enum class EHunterMainState : uint8 {
    None,
    Idle,
    Evade,
    Reposition,
    Hunting,
    Attacking,
    Enraged,
    Supressed,
};

