#pragma once
#include "CoreMinimal.h"
#include "ERegionContactStatus.generated.h"

UENUM(BlueprintType)
enum class ERegionContactStatus : uint8 {
    None,
    Adjacent,
    Contacted,
};

