#pragma once
#include "CoreMinimal.h"
#include "CommonActivatableWidget.h"
#include "PlanetMainBaseWidget.generated.h"

class UCanvasPanel;

UCLASS(Blueprintable, EditInlineNew)
class TWINSTICK_API UPlanetMainBaseWidget : public UCommonActivatableWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCanvasPanel* CompactWidgetCanvas;
    
    UPlanetMainBaseWidget();

};

