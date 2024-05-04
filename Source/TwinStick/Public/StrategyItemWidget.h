#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "StrategyInventoryItemData.h"
#include "StrategyItemWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class TWINSTICK_API UStrategyItemWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStrategyInventoryItemData ItemData;
    
    UStrategyItemWidget();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ProductionChanged();
    
};

