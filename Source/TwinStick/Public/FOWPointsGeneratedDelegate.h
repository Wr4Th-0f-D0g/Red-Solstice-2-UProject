#pragma once
#include "CoreMinimal.h"
#include "TracePointResults.h"
#include "FOWPointsGeneratedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FFOWPointsGenerated, const TArray<FTracePointResults>&, Results);

