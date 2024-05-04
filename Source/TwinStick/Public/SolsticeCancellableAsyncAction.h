#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "SolsticeCancellableAsyncAction.generated.h"

UCLASS(Abstract, Blueprintable)
class TWINSTICK_API USolsticeCancellableAsyncAction : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    USolsticeCancellableAsyncAction();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsActive() const;
    
    UFUNCTION(BlueprintCallable)
    void Cancel();
    
};

