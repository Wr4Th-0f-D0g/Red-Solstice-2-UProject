#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "EnemySpawnArgs.h"
#include "Templates/SubclassOf.h"
#include "PoolManager.generated.h"

class AActor;

UCLASS(Blueprintable)
class TWINSTICK_API UPoolManager : public UObject {
    GENERATED_BODY()
public:
    UPoolManager();

    UFUNCTION(BlueprintCallable)
    void ReturnToPool(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    AActor* ReleaseFromPool(TSubclassOf<AActor> ActorClass, const FTransform& Transform, const FEnemySpawnArgs& MonsterSpawnArgs, bool& bOutNewSpawn);
    
    UFUNCTION(BlueprintCallable)
    void InitPool(TSubclassOf<AActor> ActorClass, int32 InitPoolSize, const FTransform& Transform, const FEnemySpawnArgs& MonsterSpawnArgs);
    
};

