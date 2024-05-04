#pragma once
#include "CoreMinimal.h"
#include "CommonActivatableWidget.h"
#include "GamepadInteractionSelectionWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class TWINSTICK_API UGamepadInteractionSelectionWidget : public UCommonActivatableWidget {
    GENERATED_BODY()
public:
    UGamepadInteractionSelectionWidget();

    UFUNCTION(BlueprintCallable)
    void HandleInteracted();
    
};

