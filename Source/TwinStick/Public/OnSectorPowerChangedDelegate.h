#pragma once
#include "CoreMinimal.h"
#include "OnSectorPowerChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnSectorPowerChanged, FName, SectorName, bool, bPowered);

