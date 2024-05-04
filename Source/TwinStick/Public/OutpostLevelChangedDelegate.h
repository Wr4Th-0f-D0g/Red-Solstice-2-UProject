#pragma once
#include "CoreMinimal.h"
#include "OutpostLevelChangedDelegate.generated.h"

class AOutpost;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOutpostLevelChanged, AOutpost*, Outpost, int32, OutpostLevel);

