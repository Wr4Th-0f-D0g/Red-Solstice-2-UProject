#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "LoadingScreenWidgetBase.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class TWINSTICK_API ULoadingScreenWidgetBase : public UUserWidget {
    GENERATED_BODY()
public:
    ULoadingScreenWidgetBase();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PrepareForLoad();
    
};

