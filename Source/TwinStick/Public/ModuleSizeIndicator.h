#pragma once
#include "CoreMinimal.h"
#include "Layout/Margin.h"
#include "Styling/SlateBrush.h"
#include "Blueprint/UserWidget.h"
#include "ModuleSizeIndicator.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class TWINSTICK_API UModuleSizeIndicator : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ModuleSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMargin IndicatorPadding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush IndicatorBrush;
    
    UModuleSizeIndicator();

    UFUNCTION(BlueprintCallable)
    void SetModuleSize(int32 NewModuleSize);
    
};

