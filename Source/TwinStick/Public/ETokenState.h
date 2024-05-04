#pragma once
#include "CoreMinimal.h"
#include "ETokenState.generated.h"

UENUM(BlueprintType)
enum class ETokenState : uint8 {
    Invalid,
    Active,
    Cooldown,
    Ready,
};

