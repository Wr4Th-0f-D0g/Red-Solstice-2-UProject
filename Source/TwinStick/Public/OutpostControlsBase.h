#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "EStrategyInteractionState.h"
#include "OutpostControlsBase.generated.h"

class AOutpost;
class AStrategyMapActor;
class UWidgetSwitcher;

UCLASS(Blueprintable, EditInlineNew)
class TWINSTICK_API UOutpostControlsBase : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidgetSwitcher* DropshipControlsTab;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AOutpost> Outpost;
    
    UOutpostControlsBase();

    UFUNCTION(BlueprintCallable)
    void HandleInteractionChanged(AStrategyMapActor* MapActor, EStrategyInteractionState InteractionState);
    
};

