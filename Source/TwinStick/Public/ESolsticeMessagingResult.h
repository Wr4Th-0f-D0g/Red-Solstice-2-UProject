#pragma once
#include "CoreMinimal.h"
#include "ESolsticeMessagingResult.generated.h"

UENUM(BlueprintType)
enum class ESolsticeMessagingResult : uint8 {
    Confirmed,
    Declined,
    Cancelled,
    Killed,
    Unknown,
};

