#pragma once
#include "CoreMinimal.h"
#include "ESuitSection.generated.h"

UENUM(BlueprintType)
enum class ESuitSection : uint8 {
    ESS_Invalid,
    ESS_Bot,
    ESS_Chest,
    ESS_Arms,
    ESS_Legs,
    ESS_Utility,
    ESS_Medals,
    ESS_Inventory,
};

