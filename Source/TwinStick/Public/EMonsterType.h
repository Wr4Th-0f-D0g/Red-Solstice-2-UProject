#pragma once
#include "CoreMinimal.h"
#include "EMonsterType.generated.h"

UENUM(BlueprintType)
enum class EMonsterType : uint8 {
    Standard,
    Runner,
    Burrower,
    Dog,
    Flyer,
    Stalker,
};

