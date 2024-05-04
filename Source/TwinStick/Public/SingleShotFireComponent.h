#pragma once
#include "CoreMinimal.h"
#include "FireComponentBase.h"
#include "SingleShotFireComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TWINSTICK_API USingleShotFireComponent : public UFireComponentBase {
    GENERATED_BODY()
public:
    USingleShotFireComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetShotCooldown() const;
    
};

