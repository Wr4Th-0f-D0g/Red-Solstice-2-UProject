#pragma once
#include "CoreMinimal.h"
#include "FireComponentBase.h"
#include "BurstFireComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TWINSTICK_API UBurstFireComponent : public UFireComponentBase {
    GENERATED_BODY()
public:
    UBurstFireComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void HandleReloadFinished();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetShotsPerBurst() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetBurstCooldown() const;
    
};

