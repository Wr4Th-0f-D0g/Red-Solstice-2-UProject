#pragma once
#include "CoreMinimal.h"
#include "EInventorySlotAnimationType.generated.h"

UENUM(BlueprintType)
enum class EInventorySlotAnimationType : uint8 {
    None,
    Once,
    Always,
};

