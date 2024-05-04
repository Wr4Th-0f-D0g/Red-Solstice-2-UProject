#pragma once
#include "CoreMinimal.h"
#include "ProductionChangedDelegate.generated.h"

class UEngineeringObject;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FProductionChanged, UEngineeringObject*, EngineeringObject);

