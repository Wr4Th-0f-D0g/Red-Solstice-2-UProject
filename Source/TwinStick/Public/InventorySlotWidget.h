#pragma once
#include "CoreMinimal.h"
#include "Styling/SlateTypes.h"
#include "Styling/SlateBrush.h"
#include "Styling/SlateTypes.h"
#include "Blueprint/UserWidget.h"
#include "EInventorySlotAnimationType.h"
#include "EInventorySlotState.h"
#include "InventorySlotWidget.generated.h"

class UItem;

UCLASS(Blueprintable, EditInlineNew)
class TWINSTICK_API UInventorySlotWidget : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UItem> SlotItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EInventorySlotAnimationType CurrentAnimationType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AnimationDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AnimationPlayedTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush BackgroundFillerBrush;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush BackgroundMainBrush;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush BackgroundHoveredBrush;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush MouseHoverBrush;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush AnimatingImageBrush;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush TextBackgroundBrush;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTextBlockStyle TextFontStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTextBlockStyle HotkeyTextFontStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FProgressBarStyle CooldownStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EInventorySlotState ItemType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UsedForGamepad;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush ItemIconBrush;
    
public:
    UInventorySlotWidget();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateTooltip(UItem* Item);
    
protected:
    UFUNCTION(BlueprintCallable)
    void StartAnimation(EInventorySlotAnimationType AnimationType);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowTooltip();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetSlotItemCount(int32 Count);
    
    UFUNCTION(BlueprintCallable)
    void SetHotkeyText(const FText& NewText);
    
    UFUNCTION(BlueprintCallable)
    void SetContext(UItem* NewItem);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PostContextSet();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HideTooltip();
    
};

