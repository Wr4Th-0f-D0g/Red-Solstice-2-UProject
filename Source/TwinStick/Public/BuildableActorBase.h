#pragma once
#include "CoreMinimal.h"
#include "DynamicActorBase.h"
#include "BuildableActorBase.generated.h"

UCLASS(Abstract, Blueprintable)
class TWINSTICK_API ABuildableActorBase : public ADynamicActorBase {
    GENERATED_BODY()
public:
    ABuildableActorBase(const FObjectInitializer& ObjectInitializer);

};

