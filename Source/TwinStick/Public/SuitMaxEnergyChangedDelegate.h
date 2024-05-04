#pragma once
#include "CoreMinimal.h"
#include "SuitMaxEnergyChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSuitMaxEnergyChanged, float, MaxEnergy);

