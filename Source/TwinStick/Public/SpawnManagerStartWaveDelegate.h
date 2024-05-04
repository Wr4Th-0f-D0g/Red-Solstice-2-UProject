#pragma once
#include "CoreMinimal.h"
#include "SpawnManagerStartWaveDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSpawnManagerStartWave, int32, WaveNumber);

