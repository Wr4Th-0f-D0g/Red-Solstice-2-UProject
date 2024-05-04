#pragma once
#include "CoreMinimal.h"
#include "EArmorySelectionMode.generated.h"

UENUM(BlueprintType)
enum class EArmorySelectionMode : uint8 {
    None,
    Modules,
    Equipment,
    Marine,
    Class,
    Color,
    Bots,
    Items,
    Training,
};

