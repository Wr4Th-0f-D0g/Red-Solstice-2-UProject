#pragma once
#include "CoreMinimal.h"
#include "EHunterAttack.generated.h"

UENUM(BlueprintType)
enum class EHunterAttack : uint8 {
    None,
    SpitAcid,
    LeftHand,
    RightHand,
    TailSpin,
    TailGround,
    ExecutionTailStab,
    ExecutionHandGrab,
};

