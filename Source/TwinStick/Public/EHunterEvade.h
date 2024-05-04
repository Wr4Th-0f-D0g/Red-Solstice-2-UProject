#pragma once
#include "CoreMinimal.h"
#include "EHunterEvade.generated.h"

UENUM(BlueprintType)
enum class EHunterEvade : uint8 {
    None,
    Burrow,
    GoToCeiling,
    Run,
    Teleport,
};

