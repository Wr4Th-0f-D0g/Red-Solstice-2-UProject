#pragma once
#include "CoreMinimal.h"
#include "ProductionCountUpdatedDelegate.generated.h"

class UEngineeringObject;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FProductionCountUpdated, UEngineeringObject*, EngineeringObject, int32, ItemCount);

