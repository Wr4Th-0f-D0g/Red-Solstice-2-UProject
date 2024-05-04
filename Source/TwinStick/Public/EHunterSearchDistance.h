#pragma once
#include "CoreMinimal.h"
#include "EHunterSearchDistance.generated.h"

UENUM(BlueprintType)
enum class EHunterSearchDistance : uint8 {
    Far,
    Medium,
    Close,
    WithPlayers,
};

