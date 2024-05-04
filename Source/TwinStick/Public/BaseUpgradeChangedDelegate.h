#pragma once
#include "CoreMinimal.h"
#include "BaseUpgradeChangedDelegate.generated.h"

class UConstructionObject;
class UStrategyUpgradeComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FBaseUpgradeChanged, UStrategyUpgradeComponent*, UpgradeComponent, UConstructionObject*, ConstructionObject);

