#pragma once
#include "CoreMinimal.h"
#include "EEquipmentType.generated.h"

UENUM(BlueprintType)
enum class EEquipmentType : uint8 {
    EET_Invalid,
    EET_Weapon,
    EET_Mod,
    EET_Item,
};

