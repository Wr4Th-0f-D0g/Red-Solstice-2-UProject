#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "FOWRevealInterface.generated.h"

class UFOWComponent;

UINTERFACE(Blueprintable)
class UFOWRevealInterface : public UInterface {
    GENERATED_BODY()
};

class IFOWRevealInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool GetShouldRevealFOW() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UFOWComponent* GetFOWComponent() const;
    
};

