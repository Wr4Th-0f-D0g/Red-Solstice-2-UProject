#include "PoolManager.h"
#include "Templates/SubclassOf.h"

UPoolManager::UPoolManager() {
}

void UPoolManager::ReturnToPool(AActor* Actor) {
}

AActor* UPoolManager::ReleaseFromPool(TSubclassOf<AActor> ActorClass, const FTransform& Transform, const FEnemySpawnArgs& MonsterSpawnArgs, bool& bOutNewSpawn) {
    return NULL;
}

void UPoolManager::InitPool(TSubclassOf<AActor> ActorClass, int32 InitPoolSize, const FTransform& Transform, const FEnemySpawnArgs& MonsterSpawnArgs) {
}


