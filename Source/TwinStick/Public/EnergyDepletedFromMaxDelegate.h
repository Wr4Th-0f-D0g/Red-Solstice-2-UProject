#pragma once
#include "CoreMinimal.h"
#include "EnergyDepletedFromMaxDelegate.generated.h"

class UEnergyComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FEnergyDepletedFromMax, UEnergyComponent*, Energy);

