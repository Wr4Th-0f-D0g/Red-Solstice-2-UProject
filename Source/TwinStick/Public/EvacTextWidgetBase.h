#pragma once
#include "CoreMinimal.h"
#include "ItemTextWidgetBase.h"
#include "EvacTextWidgetBase.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class TWINSTICK_API UEvacTextWidgetBase : public UItemTextWidgetBase {
    GENERATED_BODY()
public:
    UEvacTextWidgetBase();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateEvacDisplay(const FText& Text);
    
};

