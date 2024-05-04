#pragma once
#include "CoreMinimal.h"
#include "TotalDeploymentCostChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FTotalDeploymentCostChanged, int32, DeploymentCost);

