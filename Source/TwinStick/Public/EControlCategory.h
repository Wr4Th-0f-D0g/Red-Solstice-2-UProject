#pragma once
#include "CoreMinimal.h"
#include "EControlCategory.generated.h"

UENUM(BlueprintType)
enum class EControlCategory : uint8 {
    None,
    General,
    SkillsAndItems,
    Character,
    OverlaysAndShortcuts,
    Weapons,
    Followers,
    Vehicles,
};

