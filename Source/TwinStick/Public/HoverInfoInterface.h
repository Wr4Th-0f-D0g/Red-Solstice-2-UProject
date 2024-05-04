#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "HoverInfoInterface.generated.h"

UINTERFACE(Blueprintable)
class UHoverInfoInterface : public UInterface {
    GENERATED_BODY()
};

class IHoverInfoInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool ShowExtraHoverInfo();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsHovered();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FText GetDisplayName();
    
};

