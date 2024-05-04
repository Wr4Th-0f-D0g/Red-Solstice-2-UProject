#pragma once
#include "CoreMinimal.h"
#include "EWeaponPenetrationMode.generated.h"

UENUM(BlueprintType)
enum class EWeaponPenetrationMode : uint8 {
    EWPM_None,
    EWPM_Piercing,
    EWPM_All,
};

