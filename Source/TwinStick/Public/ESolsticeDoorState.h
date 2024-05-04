#pragma once
#include "CoreMinimal.h"
#include "ESolsticeDoorState.generated.h"

UENUM(BlueprintType)
enum class ESolsticeDoorState : uint8 {
    Powered,
    Automatic,
    Destroyed,
    Blocked,
    Disabled,
    Hacked,
};

