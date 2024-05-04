#pragma once
#include "CoreMinimal.h"
#include "EnergyRechargedDelegate.generated.h"

class UEnergyComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FEnergyRecharged, UEnergyComponent*, Energy);

