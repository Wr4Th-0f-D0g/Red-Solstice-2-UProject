#pragma once
#include "CoreMinimal.h"
#include "ESkillToggleMode.generated.h"

UENUM(BlueprintType)
enum class ESkillToggleMode : uint8 {
    ESTM_Pressed,
    ESTM_Toggle,
};

