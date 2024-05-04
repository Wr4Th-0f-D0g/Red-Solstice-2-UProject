#pragma once
#include "CoreMinimal.h"
#include "SuitEnergyChangedDelegate.generated.h"

class UEnergyComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FSuitEnergyChanged, float, Energy, UEnergyComponent*, EnergyComponent);

