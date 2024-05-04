#pragma once
#include "CoreMinimal.h"
#include "EGhoulerState.generated.h"

UENUM(BlueprintType)
enum class EGhoulerState : uint8 {
    EGS_Idle,
    EGS_Positioning,
    EGS_SpawningMonsters,
    EGS_RevivingMonster,
    EGS_DefendingSelf,
    EGS_Evading,
};

