#pragma once
#include "CoreMinimal.h"
#include "EHeroExecutedType.generated.h"

UENUM(BlueprintType)
enum class EHeroExecutedType : uint8 {
    None,
    HunterHand,
    HunterTail,
    BigZombie,
    SlasherMouth,
    FluffyHead,
    FluffyFlip,
};

