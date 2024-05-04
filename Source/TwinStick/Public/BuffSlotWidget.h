#pragma once
#include "CoreMinimal.h"
#include "Styling/SlateTypes.h"
#include "Styling/SlateBrush.h"
#include "Fonts/SlateFontInfo.h"
#include "Blueprint/UserWidget.h"
#include "BuffSlotWidget.generated.h"

class USolsticeBuffBase;
class UWidget;

UCLASS(Blueprintable, EditInlineNew)
class TWINSTICK_API UBuffSlotWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USolsticeBuffBase* BuffForDisplay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush BorderBrush;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FProgressBarStyle ProgressBarStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateFontInfo StacksizeFontInfo;
    
    UBuffSlotWidget();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateBuffTooltipWidget(UWidget* UpdatingWidget);
    
    UFUNCTION(BlueprintCallable)
    void HandleStacksChanged(USolsticeBuffBase* Buff, int32 NewStacks, int32 OldStacks);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UWidget* GetBuffTooltip();
    
};

