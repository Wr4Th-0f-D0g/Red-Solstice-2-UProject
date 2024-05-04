#pragma once
#include "CoreMinimal.h"
#include "EnvironmentObjectDestructible.h"
#include "HoldableObjectBase.generated.h"

UCLASS(Blueprintable)
class TWINSTICK_API AHoldableObjectBase : public AEnvironmentObjectDestructible {
    GENERATED_BODY()
public:
    AHoldableObjectBase(const FObjectInitializer& ObjectInitializer);

};

