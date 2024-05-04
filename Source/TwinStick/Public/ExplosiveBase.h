#pragma once
#include "CoreMinimal.h"
#include "DynObjBase.h"
#include "ExplosiveBase.generated.h"

UCLASS(Blueprintable)
class TWINSTICK_API AExplosiveBase : public ADynObjBase {
    GENERATED_BODY()
public:
    AExplosiveBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DetonateBpImpl();
    
    UFUNCTION(BlueprintCallable)
    void Detonate(int32 aDelay);
    
};

