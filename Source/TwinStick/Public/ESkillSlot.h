#pragma once
#include "CoreMinimal.h"
#include "ESkillSlot.generated.h"

UENUM(BlueprintType)
enum class ESkillSlot : uint8 {
    Invalid,
    Main,
    Utility,
};

