#pragma once
#include "CoreMinimal.h"
#include "ECommonInputType.h"
#include "CommonInputBaseTypes.h"
#include "CommonUserWidget.h"
#include "SolsticeVirtualCursorWidget.generated.h"

class ULocalPlayer;

UCLASS(Blueprintable, EditInlineNew)
class TWINSTICK_API USolsticeVirtualCursorWidget : public UCommonUserWidget {
    GENERATED_BODY()
public:
    USolsticeVirtualCursorWidget();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void InputMethodChanged(ECommonInputType NewInputMethod);
    
    UFUNCTION(BlueprintCallable)
    void HandleScrollAbilityChanged(TEnumAsByte<EVirtualCursorScrollAbility> NewScrollAbility);
    
    UFUNCTION(BlueprintCallable)
    void HandleLocalPlayerInitiated(ULocalPlayer* NewPlayer);
    
    UFUNCTION(BlueprintCallable)
    void HandleInputMethodChanged(ECommonInputType NewInputMethod);
    
    // UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    // void GamepadCursorScrollAbilityChanged(TEnumAsByte<EVirtualCursorScrollAbility> NewScrollAbility);
    
};

