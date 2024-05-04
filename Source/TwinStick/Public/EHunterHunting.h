#pragma once
#include "CoreMinimal.h"
#include "EHunterHunting.generated.h"

UENUM(BlueprintType)
enum class EHunterHunting : uint8 {
    None,
    Doors,
    Corridors,
    Ventiliation,
    Room,
    Stalking,
};

