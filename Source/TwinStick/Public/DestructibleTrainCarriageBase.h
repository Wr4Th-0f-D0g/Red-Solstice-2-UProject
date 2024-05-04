#pragma once
#include "CoreMinimal.h"
#include "DestructibleActorBase.h"
#include "DestructibleTrainCarriageBase.generated.h"

UCLASS(Blueprintable)
class TWINSTICK_API ADestructibleTrainCarriageBase : public ADestructibleActorBase {
    GENERATED_BODY()
public:
    ADestructibleTrainCarriageBase(const FObjectInitializer& ObjectInitializer);

};

