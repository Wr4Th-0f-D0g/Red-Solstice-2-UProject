#pragma once
#include "CoreMinimal.h"
#include "EDifficulty.generated.h"

UENUM(BlueprintType)
enum class EDifficulty : uint8 {
    None,
    Recruit,
    Soldier,
    Veteran,
    Aetriden,
    MERCS,
};

