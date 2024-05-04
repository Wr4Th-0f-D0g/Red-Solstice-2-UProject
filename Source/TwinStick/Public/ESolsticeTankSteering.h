#pragma once
#include "CoreMinimal.h"
#include "ESolsticeTankSteering.generated.h"

UENUM(BlueprintType)
enum class ESolsticeTankSteering : uint8 {
    ClutchBraking,
    TwinTransmission,
    DoubleDifferential,
};

