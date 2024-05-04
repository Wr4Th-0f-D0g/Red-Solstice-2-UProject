#pragma once
#include "CoreMinimal.h"
#include "EHordeArrivalTime.generated.h"

UENUM(BlueprintType)
enum class EHordeArrivalTime : uint8 {
    Immediate,
    Quick,
    Early,
    Standard,
    Late,
};

