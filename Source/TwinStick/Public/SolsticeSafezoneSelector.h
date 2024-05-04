#pragma once
#include "CoreMinimal.h"
#include "CommonInputBaseTypes.h"
#include "CommonActivatableWidget.h"
#include "SolsticeSafezoneSelector.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class TWINSTICK_API USolsticeSafezoneSelector : public UCommonActivatableWidget {
    GENERATED_BODY()
public:
    USolsticeSafezoneSelector();

    UFUNCTION(BlueprintCallable)
    void RevertSafeZoneSetting();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void InputModeChanged(ECommonInputType InInputType);
    
    UFUNCTION(BlueprintCallable)
    void HandleInputModeChanged(ECommonInputType InInputType);
    
    UFUNCTION(BlueprintCallable)
    void ConfirmSafeZoneSetting();
    
};

