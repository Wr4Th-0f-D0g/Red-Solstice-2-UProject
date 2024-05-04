#pragma once
#include "CoreMinimal.h"
#include "EWeaponSoundType.generated.h"

UENUM(BlueprintType)
enum class EWeaponSoundType : uint8 {
    Unset,
    Looped,
    NotLooped,
};

