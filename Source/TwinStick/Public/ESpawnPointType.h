#pragma once
#include "CoreMinimal.h"
#include "ESpawnPointType.generated.h"

UENUM(BlueprintType)
enum class ESpawnPointType : uint8 {
    SpawnPointTypeNone,
    SpawnPointTypeGlobalThreat,
    SpawnPointTypeTriggered,
};

