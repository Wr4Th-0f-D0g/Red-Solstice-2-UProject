#pragma once
#include "CoreMinimal.h"
#include "EAllowedMode.generated.h"

UENUM(BlueprintType)
enum class EAllowedMode : uint8 {
    None,
    Campaign,
    Skirmish,
    Both,
};

