#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "ActorIndicatorWidgetInterface.generated.h"

class UIndicatorDescriptor;

UINTERFACE(Blueprintable)
class UActorIndicatorWidgetInterface : public UInterface {
    GENERATED_BODY()
};

class IActorIndicatorWidgetInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UnbindIndicator(const UIndicatorDescriptor* Indicator);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void BindIndicator(UIndicatorDescriptor* Indicator);
    
};

