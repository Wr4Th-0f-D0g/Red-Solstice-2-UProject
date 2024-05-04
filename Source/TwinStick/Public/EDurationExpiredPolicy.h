#pragma once
#include "CoreMinimal.h"
#include "EDurationExpiredPolicy.generated.h"

UENUM(BlueprintType)
enum class EDurationExpiredPolicy : uint8 {
    EDEP_SingleStack,
    EDEP_Buff,
};

