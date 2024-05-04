#pragma once
#include "CoreMinimal.h"
#include "EPlayerAction.generated.h"

UENUM(BlueprintType)
enum class EPlayerAction : uint8 {
    Invalid,
    Scan,
    Harvest,
    Travel,
};

