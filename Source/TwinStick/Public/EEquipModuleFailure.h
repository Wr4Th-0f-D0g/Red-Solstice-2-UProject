#pragma once
#include "CoreMinimal.h"
#include "EEquipModuleFailure.generated.h"

UENUM(BlueprintType)
enum class EEquipModuleFailure : uint8 {
    NoFail,
    AlreadyHasSkill,
    MainSkillsFull,
    UtilitySkillsFull,
    NoSpace,
    MaxAttribute,
    Invalid,
};

