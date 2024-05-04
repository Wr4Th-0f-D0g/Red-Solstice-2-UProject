#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "EnergyRechargeInterface.generated.h"

UINTERFACE(Blueprintable)
class UEnergyRechargeInterface : public UInterface {
    GENERATED_BODY()
};

class IEnergyRechargeInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool ShouldBeRecharged() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CanRemoveExcessStack() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CanAddRechargeStack() const;
    
};

