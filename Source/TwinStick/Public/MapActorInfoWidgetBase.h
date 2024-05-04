#pragma once
#include "CoreMinimal.h"
#include "CommonActivatableWidget.h"
#include "MapActorInfoWidgetBase.generated.h"

class AStrategyMapActor;
class UWidget;

UCLASS(Blueprintable, EditInlineNew)
class TWINSTICK_API UMapActorInfoWidgetBase : public UCommonActivatableWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AStrategyMapActor* OwningMapActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* OuterViewIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* MainBoxOverlay;
    
    UMapActorInfoWidgetBase();

    UFUNCTION(BlueprintCallable)
    void SetOwningMapActor(AStrategyMapActor* NewOwningMapActor);
    
};

