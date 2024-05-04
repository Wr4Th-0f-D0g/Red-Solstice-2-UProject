#pragma once
#include "CoreMinimal.h"
#include "EGameMessageType.generated.h"

UENUM(BlueprintType)
enum class EGameMessageType : uint8 {
    System,
    Pickup,
    Death,
    Other,
};

