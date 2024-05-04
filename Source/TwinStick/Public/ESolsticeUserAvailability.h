#pragma once
#include "CoreMinimal.h"
#include "ESolsticeUserAvailability.generated.h"

UENUM(BlueprintType)
enum class ESolsticeUserAvailability : uint8 {
    Unknown,
    NowAvailable,
    PossiblyAvailable,
    CurrentlyUnavailable,
    AlwaysUnavailable,
    Invalid,
};

