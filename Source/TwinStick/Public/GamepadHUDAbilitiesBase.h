#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GamepadCombatActivatableWidget.h"
#include "GamepadHUDAbilitiesBase.generated.h"

class UBorder;
class UCommonActionWidget;
class UHorizontalBox;
class UTextBlock;
class UWidgetSwitcher;

UCLASS(Blueprintable, EditInlineNew)
class TWINSTICK_API UGamepadHUDAbilitiesBase : public UGamepadCombatActivatableWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBorder* MainDisplayBorder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHorizontalBox* LevelUpDownBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidgetSwitcher* PromptSwitcher;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* GamepadSwitchText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UCommonActionWidget*> AbilitySelectionIcons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText CursorModeText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText TwinstickModeText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor FocusedTextColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor UnfocusedTextColor;
    
    UGamepadHUDAbilitiesBase();

    UFUNCTION(BlueprintCallable)
    void RegisterAbilitySelectionIcons(TArray<UCommonActionWidget*> NewAbilitySelectionIcons);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool PlayerIsInVehicleOrMech() const;
    
};

