#pragma once
#include "CoreMinimal.h"
#include "EHeroActionState.generated.h"

UENUM(BlueprintType)
enum class EHeroActionState : uint8 {
    EAS_Interacting,
    EAS_Attacking,
    EAS_Idle,
};

