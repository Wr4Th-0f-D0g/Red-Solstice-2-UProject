#pragma once
#include "CoreMinimal.h"
#include "EWeaponUpgradeType.generated.h"

UENUM(BlueprintType)
enum class EWeaponUpgradeType : uint8 {
    Invalid,
    UnderBarrel,
    Barrel,
    Scope,
    Stock,
    Frame,
};

