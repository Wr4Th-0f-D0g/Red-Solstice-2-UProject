#pragma once
#include "CoreMinimal.h"
#include "ESpecialAmmoType.generated.h"

UENUM(BlueprintType)
enum class ESpecialAmmoType : uint8 {
    None,
    Explosive,
    Incendiary,
    Poisoned,
    Energy,
    Piercing,
    Ordinary,
};

