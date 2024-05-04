#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "NavigableWidgetInterface.generated.h"

class UWidget;

UINTERFACE(Blueprintable, MinimalAPI)
class UNavigableWidgetInterface : public UInterface {
    GENERATED_BODY()
};

class INavigableWidgetInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UnselectWidget();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetStyleToPressed();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetStyleToNormal();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetStyleToHovered();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetStyleToDisabled();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetCurrentSelectedWidget(UWidget* NextSelectedWidget);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SelectWidget();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void RegisterWithRootInterface();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void RegisterNavigableWidget(UWidget* Widget, bool bToolTipWidget, bool bNavigableWidget);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UWidget* NavigateUp(float HalfConeAngle, float CooldownTime, bool bCanCycle);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UWidget* NavigateToNextElement(float XInput, float YInput, float HalfConeAngle, float CooldownTime, bool bCanCycle);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UWidget* NavigateRight(float HalfConeAngle, float CooldownTime, bool bCanCycle);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UWidget* NavigateLeft(float HalfConeAngle, float CooldownTime, bool bCanCycle);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UWidget* NavigateDown(float HalfConeAngle, float CooldownTime, bool bCanCycle);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UWidget* NavigateCardinalDirection(float XInput, float YInput, float HalfConeAngle, float CooldownTime, bool bCanCycle);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsTooltipWidget();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsRootWidget();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UWidget* GetRootWidget();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UWidget* GetCurrentSelectedWidget();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Confirm();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Back();
    
};

