#pragma once
#include "CoreMinimal.h"
#include "EInfestationSpawnType.generated.h"

UENUM(BlueprintType)
enum class EInfestationSpawnType : uint8 {
    WaveNumber,
    SingleWaveGreater,
    SingleWaveLesser,
    AllWaves,
    AllWavesGreater,
    AllWavesLesser,
};

