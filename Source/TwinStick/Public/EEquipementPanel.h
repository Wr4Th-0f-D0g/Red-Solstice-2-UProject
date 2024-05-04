#pragma once
#include "CoreMinimal.h"
#include "EEquipementPanel.generated.h"

UENUM(BlueprintType)
enum class EEquipementPanel : uint8 {
    EEP_Invalid,
    EEP_Primary,
    EEP_Secondary,
    EEP_Item,
};

