#pragma once
#include "CoreMinimal.h"
#include "EPeriodResetPolicy.generated.h"

UENUM(BlueprintType)
enum class EPeriodResetPolicy : uint8 {
    EPR_Reset,
    EPR_NoReset,
};

