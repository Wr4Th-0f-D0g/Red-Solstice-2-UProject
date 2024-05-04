#pragma once
#include "CoreMinimal.h"
#include "EEvacStatus.generated.h"

UENUM(BlueprintType)
enum class EEvacStatus : uint8 {
    Arriving,
    Ready,
    Leaving,
};

