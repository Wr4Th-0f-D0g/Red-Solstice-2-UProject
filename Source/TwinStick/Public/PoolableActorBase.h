#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PoolableActorInterface.h"
#include "PoolableActorBase.generated.h"

UCLASS(Blueprintable)
class TWINSTICK_API APoolableActorBase : public AActor, public IPoolableActorInterface {
    GENERATED_BODY()
public:
    APoolableActorBase(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

