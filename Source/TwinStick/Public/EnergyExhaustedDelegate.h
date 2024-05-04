#pragma once
#include "CoreMinimal.h"
#include "EnergyExhaustedDelegate.generated.h"

class UEnergyComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FEnergyExhausted, UEnergyComponent*, Energy);

