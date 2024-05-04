#pragma once
#include "CoreMinimal.h"
#include "EThreatGreaterEqual.generated.h"

UENUM(BlueprintType)
enum class EThreatGreaterEqual : uint8 {
    Equal,
    EqualGreater,
    EqualLesser,
};

