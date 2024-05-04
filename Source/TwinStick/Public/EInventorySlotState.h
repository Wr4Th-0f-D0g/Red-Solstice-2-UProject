#pragma once
#include "CoreMinimal.h"
#include "EInventorySlotState.generated.h"

UENUM(BlueprintType)
enum class EInventorySlotState : uint8 {
    None,
    Empty,
    Passive,
    Usable,
};

