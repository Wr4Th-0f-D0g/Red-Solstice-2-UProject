#pragma once
#include "CoreMinimal.h"
#include "AICharSpawnedDelegate.generated.h"

class AAIController;
class ASolsticeCharacterBase;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FAICharSpawned, ASolsticeCharacterBase*, SpawnedAI, AAIController*, SpawnedAIController, bool, bSpawnerSpawned);

