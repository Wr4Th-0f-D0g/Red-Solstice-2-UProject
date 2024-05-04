#pragma once
#include "CoreMinimal.h"
#include "EWeaponEffectMode.generated.h"

UENUM(BlueprintType)
enum class EWeaponEffectMode : uint8 {
    EWEM_Single,
    EWEM_Looped,
};

