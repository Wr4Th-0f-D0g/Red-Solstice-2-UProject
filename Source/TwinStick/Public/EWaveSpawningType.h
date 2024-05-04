#pragma once
#include "CoreMinimal.h"
#include "EWaveSpawningType.generated.h"

UENUM(BlueprintType)
enum class EWaveSpawningType : uint8 {
    EWST_NoChange,
    EWST_StartSpawns,
    EWST_StopSpawns,
};

