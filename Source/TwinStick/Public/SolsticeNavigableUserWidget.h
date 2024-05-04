#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "NavigableWidgetInterface.h"
#include "SolsticeNavigableUserWidget.generated.h"

class UWidget;

UCLASS(Blueprintable, EditInlineNew)
class TWINSTICK_API USolsticeNavigableUserWidget : public UUserWidget, public INavigableWidgetInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UWidget*> NavigableElements;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UWidget*> TooltipElements;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsTooltipNavigable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsMenuNavigable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsRootWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DirectionMagnitudeThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsInMenuMovementCooldown;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TScriptInterface<INavigableWidgetInterface> OuterNavigableWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TScriptInterface<INavigableWidgetInterface> CurrentSelectedWidget;
    
public:
    USolsticeNavigableUserWidget();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UnselectWidget();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetCurrentSelectedWidget(UWidget* NextSelectedWidget);
    
    UFUNCTION(BlueprintCallable)
    void SetBackWidget(UWidget* BackWidget);
    
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
    
    UFUNCTION(BlueprintCallable)
    TArray<UWidget*> GetTooltipElements();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UWidget* GetRootWidget();
    
    UFUNCTION(BlueprintCallable)
    TArray<UWidget*> GetNavigableElements();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UWidget* GetCurrentSelectedWidget();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Confirm();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CanNavigateMenu();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Back();
    

    // Fix for true pure virtual functions not being implemented
};

