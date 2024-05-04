#pragma once
#include "CoreMinimal.h"
#include "ESolsticeControlMode.generated.h"

UENUM(BlueprintType)
enum class ESolsticeControlMode : uint8 {
    RTS,
    WASD,
    Gamepad,
    None,
};

