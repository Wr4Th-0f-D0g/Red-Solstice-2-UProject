#pragma once
#include "CoreMinimal.h"
#include "ESolsticeDebugTraceType.generated.h"

UENUM(BlueprintType)
enum class ESolsticeDebugTraceType : uint8 {
    None,
    ForOneFrame,
    Duration,
    Persistant,
};

