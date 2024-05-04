#pragma once
#include "CoreMinimal.h"
#include "OutpostConstructedDelegate.generated.h"

class AOutpost;
class ARegion;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOutpostConstructed, AOutpost*, Outpost, ARegion*, OutpostRegion);

