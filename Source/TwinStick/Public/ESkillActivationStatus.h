#pragma once
#include "CoreMinimal.h"
#include "ESkillActivationStatus.generated.h"

UENUM(BlueprintType)
enum class ESkillActivationStatus : uint8 {
    ESAS_None,
    ESAS_Activated,
    ESAS_Deactivated,
    ESAS_Charged,
    ESAS_Fired,
};

