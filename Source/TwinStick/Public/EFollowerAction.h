#pragma once
#include "CoreMinimal.h"
#include "EFollowerAction.generated.h"

UENUM(BlueprintType)
enum class EFollowerAction : uint8 {
    Idle,
    UsingSkill,
    SpecialSkill,
    HoldNearBarricade,
};

