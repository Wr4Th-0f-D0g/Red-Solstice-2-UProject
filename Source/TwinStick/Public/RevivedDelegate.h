#pragma once
#include "CoreMinimal.h"
#include "RevivedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FRevived, int32, Integrity);

