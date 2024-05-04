#pragma once
#include "CoreMinimal.h"
#include "EProductionStatus.h"
#include "ProductionStatusChangedDelegate.generated.h"

class UEngineeringObject;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FProductionStatusChanged, UEngineeringObject*, EngineeringObject, EProductionStatus, ProductionStatus);

