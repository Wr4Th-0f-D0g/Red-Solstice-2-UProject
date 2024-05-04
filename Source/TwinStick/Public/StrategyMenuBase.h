#pragma once
#include "CoreMinimal.h"
#include "CommonActivatableWidget.h"
#include "GameplayTagContainer.h"
#include "Layout/Geometry.h"
#include "Input/Events.h"
#include "Components/SlateWrapperTypes.h"
#include "StrategyViewConfiguration.h"
#include "StrategyMenuBase.generated.h"

class UUserWidget;
class UWidget;

UCLASS(Blueprintable, EditInlineNew)
class TWINSTICK_API UStrategyMenuBase : public UCommonActivatableWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ShouldResetGamepadFocus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag MenuViewTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UUserWidget*> RegisteredSubwidgets;
    
    UStrategyMenuBase();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ResetFocusToWidget();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void InitializeForMainMenu();
    
    UFUNCTION(BlueprintCallable)
    void HandleStrategyViewChangedNative(const FStrategyViewConfiguration& CurrentView, const FStrategyViewConfiguration& PreviousView);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UWidget* GetMenuDesiredFocusTarget() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FEventReply CallOnKeyDownForWidget(FGeometry MyGeometry, FKeyEvent InKeyEvent);
    
    UFUNCTION(BlueprintCallable)
    void AddSubWidget(UUserWidget* UserWidget);
    
};

