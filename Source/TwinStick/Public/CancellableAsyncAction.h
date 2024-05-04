#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "CancellableAsyncAction.generated.h"

UCLASS(Abstract, Blueprintable)
class TWINSTICK_API UCancellableAsyncAction : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UCancellableAsyncAction();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsActive() const;
    
    UFUNCTION(BlueprintCallable)
    void Cancel();
    
};

