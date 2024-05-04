#pragma once
#include "CoreMinimal.h"
#include "EInventoryItemType.generated.h"

UENUM(BlueprintType)
enum class EInventoryItemType : uint8 {
    IIT_None,
    IIT_Passive,
    IIT_Consumable,
    IIT_Buildable,
    IIT_Explosive,
};

