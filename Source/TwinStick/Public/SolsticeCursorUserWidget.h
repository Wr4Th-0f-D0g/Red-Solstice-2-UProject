#pragma once
#include "CoreMinimal.h"
#include "SolsticeVirtualCursorWidget.h"
#include "SolsticeCursorUserWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class TWINSTICK_API USolsticeCursorUserWidget : public USolsticeVirtualCursorWidget {
    GENERATED_BODY()
public:
    USolsticeCursorUserWidget();

    UFUNCTION(BlueprintCallable)
    void UpdateScaleSize();
    
};

