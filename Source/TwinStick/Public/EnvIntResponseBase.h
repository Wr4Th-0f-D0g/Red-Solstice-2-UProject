#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EnvIntResponseBase.generated.h"

class UInteractableComponent;

UCLASS(Blueprintable)
class TWINSTICK_API UEnvIntResponseBase : public UObject {
    GENERATED_BODY()
public:
    UEnvIntResponseBase();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StartInteractionBp(UInteractableComponent* InInteractableComponent);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CompleteInteractionBp(UInteractableComponent* InInteractableComponent, bool InSuccess);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AbortInteractionBp(UInteractableComponent* InInteractableComponent);
    
};

