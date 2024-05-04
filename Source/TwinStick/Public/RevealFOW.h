#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "RevealFOW.generated.h"

class URegisterToFOW;

UINTERFACE(Blueprintable)
class URevealFOW : public UInterface {
    GENERATED_BODY()
};

class IRevealFOW : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool ShouldRevealFOW() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    URegisterToFOW* GetFOWRevealComponent() const;
    
};

