#pragma once
#include "CoreMinimal.h"
#include "EDamageSource.generated.h"

UENUM(BlueprintType)
enum class EDamageSource : uint8 {
    PrimaryWeapon,
    SecondaryWeapon,
    Item,
    Skill,
    Explosive,
    Projectile,
    Environment,
};

