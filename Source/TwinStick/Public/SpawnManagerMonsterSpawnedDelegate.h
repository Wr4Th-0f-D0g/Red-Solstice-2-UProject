#pragma once
#include "CoreMinimal.h"
#include "SpawnManagerMonsterSpawnedDelegate.generated.h"

class AMonsterCharacterBase;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FSpawnManagerMonsterSpawned, AMonsterCharacterBase*, Monster, bool, bFromWave);

