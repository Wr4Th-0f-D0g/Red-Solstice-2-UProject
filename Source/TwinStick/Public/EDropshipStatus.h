#pragma once
#include "CoreMinimal.h"
#include "EDropshipStatus.generated.h"

UENUM(BlueprintType)
enum class EDropshipStatus : uint8 {
    Invalid,
    HQ,
    Travelling,
    Target,
    Interacting,
    Returning,
};

