#pragma once
#include "CoreMinimal.h"
#include "EMonsterSpawnType.generated.h"

UENUM(BlueprintType)
enum class EMonsterSpawnType : uint8 {
    Instant,
    Unburrow,
    Drop,
};

