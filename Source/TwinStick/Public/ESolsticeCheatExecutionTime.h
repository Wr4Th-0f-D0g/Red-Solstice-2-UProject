#pragma once
#include "CoreMinimal.h"
#include "ESolsticeCheatExecutionTime.generated.h"

UENUM()
enum class ESolsticeCheatExecutionTime : int32 {
    OnCheatManagerCreated,
    OnPlayerPawnPossession,
};

