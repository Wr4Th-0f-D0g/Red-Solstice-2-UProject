#pragma once
#include "CoreMinimal.h"
#include "ESkillType.generated.h"

UENUM(BlueprintType)
enum class ESkillType : uint8 {
    EST_Invalid,
    EST_Main,
    EST_Melee,
    EST_Sprint,
};

