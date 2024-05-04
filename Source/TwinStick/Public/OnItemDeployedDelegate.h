#pragma once
#include "CoreMinimal.h"
#include "OnItemDeployedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnItemDeployed, int32, ItemsSpent, bool, Success);

