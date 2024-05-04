#pragma once
#include "CoreMinimal.h"
#include "DropshipRopeSimpleDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FDropshipRopeSimpleDelegate, uint8, RopeID);

