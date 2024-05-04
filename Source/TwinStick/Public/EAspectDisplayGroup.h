#pragma once
#include "CoreMinimal.h"
#include "EAspectDisplayGroup.generated.h"

UENUM(BlueprintType)
enum class EAspectDisplayGroup : uint8 {
    Invalid,
    General,
    Passive,
    PassiveBuff,
    Active,
    ActiveBuff,
    ExtraInfo,
};

