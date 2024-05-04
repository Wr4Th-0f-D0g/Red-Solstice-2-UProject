#pragma once
#include "CoreMinimal.h"
#include "EDamageType.generated.h"

UENUM(BlueprintType)
enum class EDamageType : uint8 {
    DamageTypeKinetic,
    DamageTypeExplosive,
    DamageTypeSeizmic,
    DamageTypeEnergy,
    DamageKineticPush,
    DamageTypeFire,
    DamageTypeExplosiveTac,
    DamageTypePoison,
    DamageTypeMonster,
    DamageTypeCritical,
};

