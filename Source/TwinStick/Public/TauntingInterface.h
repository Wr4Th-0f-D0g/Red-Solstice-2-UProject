#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "TauntingInterface.generated.h"

UINTERFACE(Blueprintable)
class UTauntingInterface : public UInterface {
    GENERATED_BODY()
};

class ITauntingInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ToggleTauntActive(bool bNewActive, float TauntRadius, float TauntInterval);
    
};

