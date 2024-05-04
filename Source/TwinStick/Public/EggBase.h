#pragma once
#include "CoreMinimal.h"
#include "DestructibleActorBase.h"
#include "EggBase.generated.h"

UCLASS(Blueprintable)
class TWINSTICK_API AEggBase : public ADestructibleActorBase {
    GENERATED_BODY()
public:
    AEggBase(const FObjectInitializer& ObjectInitializer);

};

