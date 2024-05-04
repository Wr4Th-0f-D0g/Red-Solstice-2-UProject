#pragma once
#include "CoreMinimal.h"
#include "EvacActor.h"
#include "EvacActor_Train.generated.h"

UCLASS(Blueprintable)
class TWINSTICK_API AEvacActor_Train : public AEvacActor {
    GENERATED_BODY()
public:
    AEvacActor_Train(const FObjectInitializer& ObjectInitializer);

};

