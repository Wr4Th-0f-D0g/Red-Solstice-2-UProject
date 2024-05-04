#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "StrategyMapActorWidgetBase.generated.h"

class AStrategyMapActor;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class TWINSTICK_API UStrategyMapActorWidgetBase : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AStrategyMapActor* MapActor;
    
    UStrategyMapActorWidgetBase();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetPreview(bool IsPreview);
    
};

