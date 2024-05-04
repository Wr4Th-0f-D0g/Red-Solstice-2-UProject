#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "EStrategyInteractionState.h"
#include "RegionControlsBase.generated.h"

class ARegion;
class AStrategyMapActor;
class UWidgetSwitcher;

UCLASS(Blueprintable, EditInlineNew)
class TWINSTICK_API URegionControlsBase : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidgetSwitcher* DropshipControlsTab;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<ARegion> Region;
    
    URegionControlsBase();

    UFUNCTION(BlueprintCallable)
    void HandleInteractionChanged(AStrategyMapActor* MapActor, EStrategyInteractionState InteractionState);
    
};

