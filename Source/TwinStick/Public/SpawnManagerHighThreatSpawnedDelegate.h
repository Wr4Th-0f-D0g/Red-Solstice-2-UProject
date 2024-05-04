#pragma once
#include "CoreMinimal.h"
#include "SpawnManagerHighThreatSpawnedDelegate.generated.h"

class AMonsterCharacterBase;
class ASpawnerBase;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FSpawnManagerHighThreatSpawned, AMonsterCharacterBase*, SpawnedMonster, ASpawnerBase*, Spawner);

