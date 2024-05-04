#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Blueprint/UserWidget.h"
#include "ItemTextWidgetBase.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class TWINSTICK_API UItemTextWidgetBase : public UUserWidget {
    GENERATED_BODY()
public:
    UItemTextWidgetBase();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateDisplay(bool bDisplayWidgetText, FLinearColor TextColor, const FText& DisplayText, const FText& StatusText, FVector2D TextOffset);
    
};

