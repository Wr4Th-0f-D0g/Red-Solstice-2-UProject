#pragma once
#include "CoreMinimal.h"
#include "EWeaponGameplayType.generated.h"

UENUM(BlueprintType)
enum class EWeaponGameplayType : uint8 {
    EWGT_Invalid,
    EWGT_Light,
    EWGT_Heavy,
    EWGT_Secondary,
    EWGT_Specialized,
};

