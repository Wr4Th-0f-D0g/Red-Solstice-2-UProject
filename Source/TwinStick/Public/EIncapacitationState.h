#pragma once
#include "CoreMinimal.h"
#include "EIncapacitationState.generated.h"

UENUM(BlueprintType)
enum class EIncapacitationState : uint8 {
    EIS_Incapacitated,
    EIS_Rooted,
    EIS_Grabbed,
    EIS_Disarmed,
    EIS_Inept,
};

