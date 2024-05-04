#pragma once
#include "CoreMinimal.h"
#include "EColonyBonusType.generated.h"

UENUM(BlueprintType)
enum class EColonyBonusType : uint8 {
    Invalid,
    HQ,
    Outpost,
    Marines,
    Monsters,
};

