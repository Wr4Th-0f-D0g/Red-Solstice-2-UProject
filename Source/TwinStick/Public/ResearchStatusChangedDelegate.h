#pragma once
#include "CoreMinimal.h"
#include "ResearchStatusChangedDelegate.generated.h"

class UTechObject;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FResearchStatusChanged, UTechObject*, Tech);

