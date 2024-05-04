#pragma once
#include "CoreMinimal.h"
#include "EStateTransitionMode.generated.h"

UENUM(BlueprintType)
enum class EStateTransitionMode : uint8 {
    ESTM_Invalid,
    ESTM_Auto,
    ESTM_Timer,
    ESTM_Montage,
};

