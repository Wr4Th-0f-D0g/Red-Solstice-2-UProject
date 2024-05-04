#pragma once
#include "CoreMinimal.h"
#include "ECivilianWaitType.generated.h"

UENUM(BlueprintType)
enum class ECivilianWaitType : uint8 {
    None,
    Rallypoint,
    Scanner,
    Quarantine,
};

