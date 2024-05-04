#pragma once
#include "CoreMinimal.h"
#include "EWeaponEffectType.generated.h"

UENUM(BlueprintType)
enum class EWeaponEffectType : uint8 {
    EffectTypeLooped,
    EffectTypeDiscrete,
};

