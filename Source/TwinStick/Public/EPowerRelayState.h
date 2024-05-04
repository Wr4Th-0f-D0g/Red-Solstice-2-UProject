#pragma once
#include "CoreMinimal.h"
#include "EPowerRelayState.generated.h"

UENUM(BlueprintType)
enum class EPowerRelayState : uint8 {
    EPR_Undefined,
    EPR_Offline,
    EPR_Online,
    EPR_Disabled,
    EPR_Damaged,
};

