#pragma once
#include "CoreMinimal.h"
#include "GlobalIntelChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FGlobalIntelChanged, float, GlobalIntel);

