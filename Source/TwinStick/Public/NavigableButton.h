#pragma once
#include "CoreMinimal.h"
#include "Styling/SlateBrush.h"
#include "Components/Button.h"
#include "NavigableWidgetInterface.h"
#include "NavigableButton.generated.h"

class USolsticeNavigableUserWidget;
class UWidget;

UCLASS(Blueprintable)
class TWINSTICK_API UNavigableButton : public UButton, public INavigableWidgetInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsTooltipNavigable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsMenuNavigable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USolsticeNavigableUserWidget* LinkedWidget;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush SelectedWidgetNormalStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush SelectedWidgetHoverStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush SelectedWidgetPressedStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush SelectedWidgetDisabledStyle;
    
public:
    UNavigableButton();

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
    void SelectWidget();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void RegisterWithRootInterface();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void RegisterNavigableWidget(UWidget* Widget, bool bToolTipWidget, bool bNavigableWidget);
    
    UFUNCTION(BlueprintCallable)
    void NavigateIntoLinkedWidget();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsRootWidget();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UWidget* GetRootWidget();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Confirm();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Back();
    

    // Fix for true pure virtual functions not being implemented
};

