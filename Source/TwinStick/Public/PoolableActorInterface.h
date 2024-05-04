#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "PoolableActorInterface.generated.h"

UINTERFACE(Blueprintable)
class UPoolableActorInterface : public UInterface {
    GENERATED_BODY()
};

class IPoolableActorInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void NotifyReturnedToPool();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void NotifyReleasedFromPool();
    
};

