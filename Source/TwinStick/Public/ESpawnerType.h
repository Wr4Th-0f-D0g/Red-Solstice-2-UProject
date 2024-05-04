#pragma once
#include "CoreMinimal.h"
#include "ESpawnerType.generated.h"

UENUM(BlueprintType)
enum class ESpawnerType : uint8 {
    EST_Default,
    EST_TriggerSpawns,
    EST_TriggerWaveAdvance,
    EST_CivilianSpawner,
};

