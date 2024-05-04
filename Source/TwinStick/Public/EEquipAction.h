#pragma once
#include "CoreMinimal.h"
#include "EEquipAction.generated.h"

UENUM(BlueprintType)
enum class EEquipAction : uint8 {
    Equipping,
    Unequipping,
};

